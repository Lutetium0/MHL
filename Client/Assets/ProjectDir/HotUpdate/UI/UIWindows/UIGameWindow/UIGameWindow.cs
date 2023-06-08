using System;
using System.Collections;
using System.Collections.Generic;
using MotionFramework.Window;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Moon;
using MotionFramework;
using MotionFramework.Pool;
using MotionFramework.Resource;
using YooAsset;
using UnityEngine.U2D;

public class Entity
{
    public long id;
    public float radius;
    public long spriteid;
    public float speed;
    public string name;
    public long movetime;
    public Vector2 pos;
    public Vector2 dir;
    public GameObject Go { get; set; }
    public UIGameComponent.Color Color { get; set; }
    public GameObject NameText { get; set; }
}

[Window((int)EWindowLayer.Panel, true)]
public class UIGameWindow : CanvasWindow
{
    public int nline = 40;
    Dictionary<long, Entity> entitas = new Dictionary<long, Entity>();
    Dictionary<int, string> foodsprite = new Dictionary<int, string>();
    Dictionary<int, string> playersprite = new Dictionary<int, string>();

    Text xpos;
    Text ypos;
    UIGameCountDown countDown;
    int time = 60;

    Transform scene;

    bool gameOver = false;

    GameObject playerPrefab;
    GameObject namePrefab;
    SpriteAtlas atlas;
    
    Entity local;

    long uid = 0;

    static bool IsPlayer(long id)
    {
        return ((id >> 62) == 0);
    }

    long now = Millseconds();

    // 窗口创建（窗口生命周期内只被调用一次）
    public override void OnCreate()
    {
        MotionEngine.StartCoroutine(Init());
    }

    IEnumerator Init()
    {
        for (int i = 1; i <= 6; i++)
        {
            foodsprite.Add(i, "bean_polygon3_"+i.ToString());
            foodsprite.Add(i+6, "bean_polygon4_"+i.ToString());
            playersprite.Add(i, "bean_polygon5_"+i.ToString());
        }

        xpos = GetUIComponent<Text>("UIGameWindow/UI/Xpos");
        ypos = GetUIComponent<Text>("UIGameWindow/UI/Ypos");
        countDown = Go.AddComponent<UIGameCountDown>();
        countDown.countDownText = GetUIComponent<Text>("UIGameWindow/UI/CountDown");
        countDown.StartCountDown(time);

        scene = UnityUtils.FindTransform("Scene/World");

        AssetOperationHandle playerPrefabHandle = ResourceManager.Instance.LoadAssetAsync<GameObject>("Prefabs/Player");
        yield return playerPrefabHandle;
        playerPrefab = playerPrefabHandle.AssetObject as GameObject;
        AssetOperationHandle namePrefabHandle = ResourceManager.Instance.LoadAssetSync<GameObject>("Prefabs/TextName");
        yield return namePrefabHandle;
        namePrefab = namePrefabHandle.AssetObject as GameObject;
        AssetOperationHandle atlasHandle = ResourceManager.Instance.LoadAssetSync<SpriteAtlas>("Atlas/Atlas_Bean/Atlas_Bean");
        yield return atlasHandle;
        atlas = atlasHandle.AssetObject as SpriteAtlas;
        

        Moon.Network.Register<NetMessage.S2CEnterRoom>(v => {
            uid = v.Id;
            NetUserData.time = v.Time;
            now = Millseconds();

            GameLogManager.Instance.Log(string.Format("Entity User  id {0} S2CEnterRoom", v.Id));
        });

        Moon.Network.Register<NetMessage.S2CEnterView>(v => {
            if(!entitas.ContainsKey(v.Id))
            {
                var e = new Entity();
                e.id = v.Id;
                e.radius = v.Radius;
                e.speed = v.Speed;
                e.spriteid = v.Spriteid;
                e.pos =  new Vector2 { x = v.X, y = v.Y };
                if(null!=v.Dir)
                    e.dir = new Vector2 { x= v.Dir.X, y =v.Dir.Y };
                e.name = v.Name;
                e.movetime = v.Movetime;
                bool isplayer = IsPlayer(e.id);
                GameObject go = UnityEngine.Object.Instantiate(playerPrefab, new Vector3(e.pos.x, e.pos.y, 0), Quaternion.identity);
                
                var spr = go.GetComponent<SpriteRenderer>();
                string source;
                if (isplayer)
                {
                    if (!playersprite.TryGetValue((int)e.spriteid, out source))
                    {
                        source = "bean_polygon5_1";
                    }
                    GameLogManager.Instance.Log(string.Format("Entity User  id {0} enter view", v.Id));
                }
                else
                {
                    if (!foodsprite.TryGetValue((int)e.spriteid, out source))
                    {
                        source = "bean_polygon3_1";
                    }
                }

                spr.sprite = atlas.GetSprite(source);
                spr.sortingLayerName = "Player";
                go.transform.position = new Vector3(e.pos.x, e.pos.y, 0);
                go.transform.SetParent(scene);
                //go.AddComponent<LineRenderer>();
                e.Go = go;
                e.NameText = UnityEngine.Object.Instantiate(namePrefab);
                e.NameText.transform.SetParent(Go.transform);
                var text = e.NameText.GetComponent<Text>();

                long number = e.id;
                int numDigitsToKeep = 8;
                string result = number.ToString().Substring(Math.Max(0, number.ToString().Length - numDigitsToKeep));

                text.text = isplayer ? e.name : "food" + result;
                text.color = UnityEngine.Color.green;
                text.alignment = TextAnchor.UpperCenter;
                text.fontStyle = FontStyle.Bold;
                text.fontSize = 21;
                entitas.Add(v.Id, e);
                GameLogManager.Instance.Log(string.Format("Entity  id {0} enter view", v.Id));
                if(v.Id == uid)
                {
                    local = e;
                }
            }
        });

        Moon.Network.Register<NetMessage.S2CLeaveView>(v =>
        {
            Entity e;
            if (entitas.TryGetValue(v.Id, out e))
            {
                var text = e.NameText.GetComponent<Text>();
                text.text = "DEAD";
                e.NameText.transform.SetParent(null);
                e.Go.transform.SetParent(null);
                UnityEngine.Object.Destroy(e.NameText);
                UnityEngine.Object.Destroy(e.Go);
                e.NameText = null;
                e.Go = null;
                if(entitas.Remove(v.Id))
                {
                    GameLogManager.Instance.Log(string.Format("Entity Destroy {0} {1} {2}", v.Id, e.pos.x, e.pos.y));
                }
            }
        });

        Moon.Network.Register<NetMessage.S2CMove>(v =>{
            Entity e;
            if (entitas.TryGetValue(v.Id, out e))
            {
                e.pos.x = v.X;
                e.pos.y = v.Y;
                e.dir.x = v.Dirx;
                e.dir.y = v.Diry;
                e.movetime = v.Movetime;
            }
        });

        Moon.Network.Register<NetMessage.S2CUpdateRadius>(v =>
        {
            Entity e;
            if (entitas.TryGetValue(v.Id, out e))
            {
                e.radius = v.Radius;
            }
        });

        Moon.Network.Register<NetMessage.S2CDead>(v =>
        {
            Entity e;
            if (entitas.TryGetValue(v.Id, out e))
            {
                GameLogManager.Instance.Log(string.Format("You dead id {0} dead", v.Id));
                if (v.Id == NetUserData.uid)
                {
                    FsmManager.Instance.Change(nameof(NodeLogin));
                    return;
                }
            }
        });

        Moon.Network.Register<NetMessage.S2CGameOver>(v => {
            gameOver = true;
            GameLogManager.Instance.Log(string.Format("Game Over, Score : {0}", v.Score));
            FsmManager.Instance.Change(nameof(NodeLobby));
        });

        Moon.Network.Send(NetUserData.GameSeverID, new NetMessage.C2SEnterRoom { Name = NetUserData.username });
    }

    // 窗口销毁（窗口生命周期内只被调用一次）
    public override void OnDestroy()
    {
        
    }

    // 窗口刷新（窗口生命周期内可能被调用多次）
    public override void OnRefresh()
    {
    }

    // 窗口更新（窗口生命周期内每帧被调用）
    public override void OnUpdate()
    {
        var t = Millseconds();
        NetUserData.time += (t - now);
        now = t;
        if (gameOver)
        {
            return;
        }
        
        if (local !=null && local.Go && Input.GetMouseButtonDown(0))
        {
            Vector2 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            Vector3 target = new Vector3(mousePosition.x, mousePosition.y, 0);
            var dir = target - local.Go.transform.position;
            dir.Normalize();
            Moon.Network.Send(NetUserData.GameSeverID, new NetMessage.C2SMove { X = dir.x,Y= dir.y });
        }

        foreach (var e in entitas.Values)
        {
            if (e.Go == null)
            {
                continue;
            }

            if (IsPlayer(e.id))
            {
                var delta = (NetUserData.time - e.movetime) / 1000.0f;
                var deltalen = e.dir.normalized * e.speed * delta;
                Vector2 nowPos = e.pos + deltalen;
                if (e == local)
                {
                    Setposition(nowPos);
                    Camera.main.transform.position = new Vector3(nowPos.x, nowPos.y, Camera.main.transform.position.z);
                }
                else
                {
                    e.Go.transform.position = nowPos;
                }
            }

            var rect = e.Go.GetComponent<RectTransform>();
            rect.localScale = new Vector3(1 + e.radius, 1 + e.radius, 1);

            if (e.NameText != null)
            {
                var uipos = Camera.main.WorldToScreenPoint(e.Go.transform.position);
                e.NameText.transform.position = new Vector3(uipos.x, uipos.y + 10, 0);
            }
        }
    }

    public static long Millseconds()
    {
        //100ns
        var ts = DateTime.UtcNow.Ticks - new DateTime(1970, 1, 1, 0, 0, 0, 0).Ticks;
        return ts / 10000;
    }

    void Setposition(Vector2 pos)
    {
        local.Go.transform.position = pos;
        xpos.text = string.Format("{0:F}", pos.x);
        ypos.text = string.Format("{0:F}", pos.y);
    }
}