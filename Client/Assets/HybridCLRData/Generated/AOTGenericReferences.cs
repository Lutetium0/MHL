public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	// MotionFramework.dll
	// UnityEngine.CoreModule.dll
	// mscorlib.dll
	// protobuf-net.dll
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// MotionFramework.ModuleSingleton<object>
	// System.Action<object>
	// System.Action<long,object>
	// System.Action<int,object>
	// System.ArraySegment<byte>
	// System.Collections.Concurrent.ConcurrentQueue<object>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.Dictionary<long,object>
	// System.Collections.Generic.Dictionary<int,object>
	// System.Collections.Generic.Dictionary<object,CmdCode>
	// System.Collections.Generic.Dictionary.Enumerator<long,object>
	// System.Collections.Generic.Dictionary.ValueCollection<long,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<long,object>
	// System.Collections.Generic.IEnumerable<object>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.KeyValuePair<long,object>
	// System.Collections.Generic.List<System.ArraySegment<byte>>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Func<object,object>
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>
	// System.Runtime.CompilerServices.TaskAwaiter<object>
	// System.Threading.Tasks.Task<object>
	// System.Threading.Tasks.TaskCompletionSource<object>
	// }}

	public void RefMethods()
	{
		// object CanvasWindow.GetUIComponent<object>(string)
		// object MotionFramework.MotionEngine.CreateModule<object>(int)
		// YooAsset.AssetOperationHandle MotionFramework.Resource.ResourceManager.LoadAssetAsync<object>(string)
		// YooAsset.AssetOperationHandle MotionFramework.Resource.ResourceManager.LoadAssetSync<object>(string)
		// MotionFramework.Window.UIRoot MotionFramework.Window.WindowManager.CreateUIRoot<object>(string)
		// System.Void ProtoBuf.Serializer.Serialize<object>(System.IO.Stream,object)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.Start<Moon.Network.<Call>d__12<object>>(Moon.Network.<Call>d__12<object>&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UILobbyWindow.<OnClickMatch>d__5>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UILobbyWindow.<OnClickMatch>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UILoginWindow.<OnClickLogin>d__8>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UILoginWindow.<OnClickLogin>d__8&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<UILobbyWindow.<OnClickMatch>d__5>(UILobbyWindow.<OnClickMatch>d__5&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<UILoginWindow.<OnClickLogin>d__8>(UILoginWindow.<OnClickLogin>d__8&)
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Vector3,UnityEngine.Quaternion)
		// object UnityEngine.Object.Instantiate<object>(object)
	}
}