#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<YooAsset.AsyncOperationBase>
struct Action_1_t2B402C842742EFCB5D9827C1981184ECC4F57FDF;
// System.Action`2<MotionFramework.ELogLevel,System.String>
struct Action_2_t21AA7A510C20CB7800E05397DC5796D85ED66117;
// System.Action`2<System.Int32Enum,System.Object>
struct Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F;
// System.Collections.Generic.Dictionary`2<MotionFramework.Audio.EAudioLayer,MotionFramework.Audio.AudioManager/AudioSourceWrapper>
struct Dictionary_2_t3D46C94097FAFDF052ABF663F7F0D07B9123F577;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<MotionFramework.Event.IEventMessage>>>
struct Dictionary_2_t68E56EC92D5A363B286C47B673634C8AF8E0B4E2;
// System.Collections.Generic.Dictionary`2<System.String,MotionFramework.Audio.AssetAudio>
struct Dictionary_2_t7E34729C44BFAF0CC6FE80D430A5BBCB250961BA;
// System.Collections.Generic.Dictionary`2<System.String,MotionFramework.Config.AssetConfig>
struct Dictionary_2_t458F540D74014EA049A9BE86121E4E32F49E3A6D;
// System.Collections.Generic.Dictionary`2<System.String,MotionFramework.Pool.GameObjectCollector>
struct Dictionary_2_tAB3EF1D4669F1CC0C5B6FD8040B4A0372C48E98D;
// System.Collections.Generic.List`1<MotionFramework.Scene.AssetScene>
struct List_1_t887C9EADF6CB06440DB6E6CB3F6B002F96F96F4B;
// System.Collections.Generic.List`1<MotionFramework.Pool.GameObjectCollector>
struct List_1_t3BCBB1FAD81925FB95FD3428FC3C0B935AFC7103;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<MotionFramework.Window.UIWindow>
struct List_1_t34B3393B1D7159DE2E594665C6C18958D0CC9815;
// System.Collections.Generic.List`1<YooAsset.Editor.AssetBundleCollectorSetting/Collector>
struct List_1_t98D9557FEC502F1D0ACC1D861D085C93A2C58383;
// System.Collections.Generic.List`1<MotionFramework.Event.EventManager/PostWrapper>
struct List_1_t9942D25311867FF8616CEFC899679FD7DA99BF0D;
// System.Collections.Generic.List`1<MotionFramework.Tween.TweenManager/TweenWrapper>
struct List_1_t3BB950B6DF2869863886DAE5C176AC3520A02A7C;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// YooAsset.Editor.AssetBundleCollectorSetting/Collector[]
struct CollectorU5BU5D_t6477A14BDECB926B80AB2173958CF11E8A719D7E;
// AOTGenericReferences
struct AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Reflection.Assembly
struct Assembly_t;
// YooAsset.Editor.AssetBundleCollectorSetting
struct AssetBundleCollectorSetting_tCEA81AA31B30623732C01B5133C1B05BD3F5F698;
// MotionFramework.Scene.AssetScene
struct AssetScene_t8AFA02EED3E86BF164B08BC1BB0FB401E718FD57;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// MotionFramework.Audio.AudioManager
struct AudioManager_t87EF283E7CC3ECFF614332C23F9FE11FAC139371;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// MotionFramework.Config.ConfigManager
struct ConfigManager_tC8271C57FAA4D40DA4B2ED9E919C2C0257574BBC;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// YooAsset.EditorSimulateModeParameters
struct EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF;
// MotionFramework.Event.EventManager
struct EventManager_tEC055E312945D604C24F0963CF8C261D6813E03E;
// GameLauncher
struct GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// MotionFramework.Pool.GameObjectPoolManager
struct GameObjectPoolManager_t269BBBC1560CCD4831A33AA1904700F7CC7325AB;
// MotionFramework.IActivatorServices
struct IActivatorServices_t9601EACCCF2E3E7E4F36F4E9E157155C6BCC1BFE;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// YooAsset.IDecryptionServices
struct IDecryptionServices_t72A8C817CBF8635B47CA0CEFA6700D0ADE92AA8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// YooAsset.InitializationOperation
struct InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F;
// YooAsset.InitializeParameters
struct InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// YooAsset.OfflinePlayModeParameters
struct OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9;
// RefTypes
struct RefTypes_tF4C1B391BCE0B1DAC15D0D3C7AB90ED04BC229E8;
// MotionFramework.Resource.ResourceManager
struct ResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7;
// YooAsset.ResourcePackage
struct ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// MotionFramework.Scene.SceneManager
struct SceneManager_tF26834BC589E9421F3A08C5EFCF750E0D59B0AA1;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// MotionFramework.Tween.TweenManager
struct TweenManager_t8EED1D70959BF58810AAF977A15F083409E6FEA2;
// System.Type
struct Type_t;
// MotionFramework.Window.UIRoot
struct UIRoot_tEECAD0D6EE4916CE5ABF839BC9C8B04B3FC067F4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// MotionFramework.Window.WindowManager
struct WindowManager_t7F0B07786B1AE90EBA2B231B162139C60658612D;
// YooAsset.Editor.AssetBundleCollectorSetting/Collector
struct Collector_t007479A93B6DD19F34DE3C8959B2CBD3C62E16D0;
// GameLauncher/<CreateGameModules>d__11
struct U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF;
// MotionFramework.Pool.GameObjectPoolManager/CreateParameters
struct CreateParameters_t7FEF61D012DE3404FF0AE847C10FA222B68D1676;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t21AA7A510C20CB7800E05397DC5796D85ED66117_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateParameters_t7FEF61D012DE3404FF0AE847C10FA222B68D1676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeveloperConsole_tE93C642F0C7C8FDE52C5684A32CF132F2C47AC49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ELogLevel_t037D8936181CD1A28C03B53878B7C7EB03A31412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t98D9557FEC502F1D0ACC1D861D085C93A2C58383_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MotionEngine_t28A26E01C3C4A30692BFAA6BA545C7B8541A06D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RefTypes_tF4C1B391BCE0B1DAC15D0D3C7AB90ED04BC229E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral42960449A18FA75AF2D9A7F9CDCC744B0EF455E6;
IL2CPP_EXTERN_C String_t* _stringLiteral45350A7ABECE65D8E1755214ECD6E1DB404B58CF;
IL2CPP_EXTERN_C String_t* _stringLiteral559DC57206F3FE79377D83E4FA65454776DF94B8;
IL2CPP_EXTERN_C String_t* _stringLiteral5B4BF849BA65444AD9677BFBF189CBB0D97ED0DB;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral977A71115E05B54B449539D8B6701AE4DAD2B1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralAE262351BAEBC7B9F10022B67A58E5D65283756A;
IL2CPP_EXTERN_C String_t* _stringLiteralC9D7303232DA7E2492B63038ADC505D55240AD22;
IL2CPP_EXTERN_C String_t* _stringLiteralDFDC0412FBBF00CC135FC742C17FCF36E7DC2A0C;
IL2CPP_EXTERN_C String_t* _stringLiteralF9DDA4DF980D4971E42607AE93A88D7745184EA5;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisIAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_m02FE92802942EF20544EA1C2319D27DDBBE5CA1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameLauncher_HandleMotionFrameworkLog_m4B126A2BE8EA2525FFC836823BD36F6B7C61434A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4E097E1A3F8F0C11E57533DF1FA7B526E4A42921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleSingleton_1_get_Instance_m532A20672DAAB429F7D48A8B307067A3C700EE8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MotionEngine_CreateModule_TisAudioManager_t87EF283E7CC3ECFF614332C23F9FE11FAC139371_m6E10BE91457606B8363D785A52EB0BBCD28F539E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MotionEngine_CreateModule_TisConfigManager_tC8271C57FAA4D40DA4B2ED9E919C2C0257574BBC_m4C19D96230B6F06762CC65C219FC4A31FAF801F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MotionEngine_CreateModule_TisEventManager_tEC055E312945D604C24F0963CF8C261D6813E03E_m3264C9FE07032294704A3253E66F925B4B409698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MotionEngine_CreateModule_TisGameObjectPoolManager_t269BBBC1560CCD4831A33AA1904700F7CC7325AB_mBBBD19F5C8D3953BE77D5B135E5AB132609D1D27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MotionEngine_CreateModule_TisResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7_mC0BCE2F41967F85BEC7B5143F579BCDDAC61CF98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MotionEngine_CreateModule_TisSceneManager_tF26834BC589E9421F3A08C5EFCF750E0D59B0AA1_m74DE0F0411ABEEB16DA516C341F54B3737E6499F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MotionEngine_CreateModule_TisTweenManager_t8EED1D70959BF58810AAF977A15F083409E6FEA2_mD81AAF5E623FBC2537E72BEFA9BCB8506BF176B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MotionEngine_CreateModule_TisWindowManager_t7F0B07786B1AE90EBA2B231B162139C60658612D_m65B53C7434611CA7BC7EC067C829351BA923952F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateGameModulesU3Ed__11_MoveNext_m08ADEBBEE9DEA9F0C502865BD3772427A0B68313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateGameModulesU3Ed__11_System_Collections_IEnumerator_Reset_m9874046FB046746370EC1B24768681600DF8E4CE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<YooAsset.Editor.AssetBundleCollectorSetting/Collector>
struct List_1_t98D9557FEC502F1D0ACC1D861D085C93A2C58383  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CollectorU5BU5D_t6477A14BDECB926B80AB2173958CF11E8A719D7E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// MotionFramework.ModuleSingleton`1<MotionFramework.Audio.AudioManager>
struct ModuleSingleton_1_t6AA59C2CB4FEEEF10523752EABB30807B7BC33C6  : public RuntimeObject
{
};

// MotionFramework.ModuleSingleton`1<MotionFramework.Config.ConfigManager>
struct ModuleSingleton_1_tF3BA9D7A8EEFF61B4D7D37A609DBC8121BE15B97  : public RuntimeObject
{
};

// MotionFramework.ModuleSingleton`1<MotionFramework.Event.EventManager>
struct ModuleSingleton_1_tCCB757A8114C486A82CAED29E1F9893D7285C045  : public RuntimeObject
{
};

// MotionFramework.ModuleSingleton`1<MotionFramework.Pool.GameObjectPoolManager>
struct ModuleSingleton_1_tFB0D421D7C7D90A51B37B7B28642A3FBA03F3B65  : public RuntimeObject
{
};

// MotionFramework.ModuleSingleton`1<MotionFramework.Resource.ResourceManager>
struct ModuleSingleton_1_tA5FA8D37B8376A626DD3A1B3B620681F3A1E9353  : public RuntimeObject
{
};

// MotionFramework.ModuleSingleton`1<MotionFramework.Scene.SceneManager>
struct ModuleSingleton_1_tE0D7C2BEB44DC822CCF25E4F3E9EABE848E25DEB  : public RuntimeObject
{
};

// MotionFramework.ModuleSingleton`1<MotionFramework.Tween.TweenManager>
struct ModuleSingleton_1_t10C29BBA63B8B740DC95E04BAE7233324D76B49D  : public RuntimeObject
{
};

// MotionFramework.ModuleSingleton`1<MotionFramework.Window.WindowManager>
struct ModuleSingleton_1_tBE260B0F4E5182E42640BFB7A9489B9171E49CFE  : public RuntimeObject
{
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// YooAsset.AsyncOperationBase
struct AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032  : public RuntimeObject
{
	// System.Action`1<YooAsset.AsyncOperationBase> YooAsset.AsyncOperationBase::_callback
	Action_1_t2B402C842742EFCB5D9827C1981184ECC4F57FDF* ____callback_0;
	// YooAsset.EOperationStatus YooAsset.AsyncOperationBase::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_1;
	// System.String YooAsset.AsyncOperationBase::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Single YooAsset.AsyncOperationBase::<Progress>k__BackingField
	float ___U3CProgressU3Ek__BackingField_3;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> YooAsset.AsyncOperationBase::_taskCompletionSource
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ____taskCompletionSource_4;
};

// YooAsset.InitializeParameters
struct InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1  : public RuntimeObject
{
	// System.Boolean YooAsset.InitializeParameters::LocationToLower
	bool ___LocationToLower_0;
	// YooAsset.IDecryptionServices YooAsset.InitializeParameters::DecryptionServices
	RuntimeObject* ___DecryptionServices_1;
	// System.Int64 YooAsset.InitializeParameters::LoadingMaxTimeSlice
	int64_t ___LoadingMaxTimeSlice_2;
	// System.Int32 YooAsset.InitializeParameters::DownloadFailedTryAgain
	int32_t ___DownloadFailedTryAgain_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// RefTypes
struct RefTypes_tF4C1B391BCE0B1DAC15D0D3C7AB90ED04BC229E8  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// YooAsset.Editor.AssetBundleCollectorSetting/Collector
struct Collector_t007479A93B6DD19F34DE3C8959B2CBD3C62E16D0  : public RuntimeObject
{
	// System.String YooAsset.Editor.AssetBundleCollectorSetting/Collector::CollectDirectory
	String_t* ___CollectDirectory_0;
	// System.String YooAsset.Editor.AssetBundleCollectorSetting/Collector::PackRuleName
	String_t* ___PackRuleName_1;
	// System.String YooAsset.Editor.AssetBundleCollectorSetting/Collector::FilterRuleName
	String_t* ___FilterRuleName_2;
	// System.Boolean YooAsset.Editor.AssetBundleCollectorSetting/Collector::DontWriteAssetPath
	bool ___DontWriteAssetPath_3;
	// System.String YooAsset.Editor.AssetBundleCollectorSetting/Collector::AssetTags
	String_t* ___AssetTags_4;
};

// GameLauncher/<CreateGameModules>d__11
struct U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF  : public RuntimeObject
{
	// System.Int32 GameLauncher/<CreateGameModules>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameLauncher/<CreateGameModules>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameLauncher GameLauncher/<CreateGameModules>d__11::<>4__this
	GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* ___U3CU3E4__this_2;
};

// MotionFramework.Pool.GameObjectPoolManager/CreateParameters
struct CreateParameters_t7FEF61D012DE3404FF0AE847C10FA222B68D1676  : public RuntimeObject
{
	// System.Boolean MotionFramework.Pool.GameObjectPoolManager/CreateParameters::EnableLazyPool
	bool ___EnableLazyPool_0;
	// System.Int32 MotionFramework.Pool.GameObjectPoolManager/CreateParameters::DefaultInitCapacity
	int32_t ___DefaultInitCapacity_1;
	// System.Int32 MotionFramework.Pool.GameObjectPoolManager/CreateParameters::DefaultMaxCapacity
	int32_t ___DefaultMaxCapacity_2;
	// System.Single MotionFramework.Pool.GameObjectPoolManager/CreateParameters::DefaultDestroyTime
	float ___DefaultDestroyTime_3;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// MotionFramework.Audio.AudioManager
struct AudioManager_t87EF283E7CC3ECFF614332C23F9FE11FAC139371  : public ModuleSingleton_1_t6AA59C2CB4FEEEF10523752EABB30807B7BC33C6
{
	// System.Collections.Generic.Dictionary`2<System.String,MotionFramework.Audio.AssetAudio> MotionFramework.Audio.AudioManager::_assets
	Dictionary_2_t7E34729C44BFAF0CC6FE80D430A5BBCB250961BA* ____assets_1;
	// System.Collections.Generic.Dictionary`2<MotionFramework.Audio.EAudioLayer,MotionFramework.Audio.AudioManager/AudioSourceWrapper> MotionFramework.Audio.AudioManager::_audioSourceWrappers
	Dictionary_2_t3D46C94097FAFDF052ABF663F7F0D07B9123F577* ____audioSourceWrappers_2;
	// UnityEngine.GameObject MotionFramework.Audio.AudioManager::_root
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____root_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// MotionFramework.Config.ConfigManager
struct ConfigManager_tC8271C57FAA4D40DA4B2ED9E919C2C0257574BBC  : public ModuleSingleton_1_tF3BA9D7A8EEFF61B4D7D37A609DBC8121BE15B97
{
	// System.Collections.Generic.Dictionary`2<System.String,MotionFramework.Config.AssetConfig> MotionFramework.Config.ConfigManager::_configs
	Dictionary_2_t458F540D74014EA049A9BE86121E4E32F49E3A6D* ____configs_1;
	// MotionFramework.IActivatorServices MotionFramework.Config.ConfigManager::<ActivatorServices>k__BackingField
	RuntimeObject* ___U3CActivatorServicesU3Ek__BackingField_2;
};

// YooAsset.EditorSimulateModeParameters
struct EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF  : public InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1
{
	// System.String YooAsset.EditorSimulateModeParameters::SimulateManifestFilePath
	String_t* ___SimulateManifestFilePath_4;
};

// MotionFramework.Event.EventManager
struct EventManager_tEC055E312945D604C24F0963CF8C261D6813E03E  : public ModuleSingleton_1_tCCB757A8114C486A82CAED29E1F9893D7285C045
{
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.LinkedList`1<System.Action`1<MotionFramework.Event.IEventMessage>>> MotionFramework.Event.EventManager::_listeners
	Dictionary_2_t68E56EC92D5A363B286C47B673634C8AF8E0B4E2* ____listeners_1;
	// System.Collections.Generic.List`1<MotionFramework.Event.EventManager/PostWrapper> MotionFramework.Event.EventManager::_postWrappers
	List_1_t9942D25311867FF8616CEFC899679FD7DA99BF0D* ____postWrappers_2;
};

// MotionFramework.Pool.GameObjectPoolManager
struct GameObjectPoolManager_t269BBBC1560CCD4831A33AA1904700F7CC7325AB  : public ModuleSingleton_1_tFB0D421D7C7D90A51B37B7B28642A3FBA03F3B65
{
	// System.Collections.Generic.Dictionary`2<System.String,MotionFramework.Pool.GameObjectCollector> MotionFramework.Pool.GameObjectPoolManager::_collectors
	Dictionary_2_tAB3EF1D4669F1CC0C5B6FD8040B4A0372C48E98D* ____collectors_1;
	// System.Collections.Generic.List`1<MotionFramework.Pool.GameObjectCollector> MotionFramework.Pool.GameObjectPoolManager::_removeList
	List_1_t3BCBB1FAD81925FB95FD3428FC3C0B935AFC7103* ____removeList_2;
	// UnityEngine.GameObject MotionFramework.Pool.GameObjectPoolManager::_root
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____root_3;
	// System.Boolean MotionFramework.Pool.GameObjectPoolManager::_enableLazyPool
	bool ____enableLazyPool_4;
	// System.Int32 MotionFramework.Pool.GameObjectPoolManager::_defaultInitCapacity
	int32_t ____defaultInitCapacity_5;
	// System.Int32 MotionFramework.Pool.GameObjectPoolManager::_defaultMaxCapacity
	int32_t ____defaultMaxCapacity_6;
	// System.Single MotionFramework.Pool.GameObjectPoolManager::_defaultDestroyTime
	float ____defaultDestroyTime_7;
};

// YooAsset.InitializationOperation
struct InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F  : public AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032
{
	// System.String YooAsset.InitializationOperation::<PackageVersion>k__BackingField
	String_t* ___U3CPackageVersionU3Ek__BackingField_5;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// YooAsset.OfflinePlayModeParameters
struct OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9  : public InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1
{
};

// MotionFramework.Resource.ResourceManager
struct ResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7  : public ModuleSingleton_1_tA5FA8D37B8376A626DD3A1B3B620681F3A1E9353
{
	// YooAsset.InitializeParameters MotionFramework.Resource.ResourceManager::_createParameters
	InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1* ____createParameters_1;
	// YooAsset.ResourcePackage MotionFramework.Resource.ResourceManager::_defaultPackage
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ____defaultPackage_2;
	// System.String MotionFramework.Resource.ResourceManager::_locationRoot
	String_t* ____locationRoot_3;
};

// MotionFramework.Scene.SceneManager
struct SceneManager_tF26834BC589E9421F3A08C5EFCF750E0D59B0AA1  : public ModuleSingleton_1_tE0D7C2BEB44DC822CCF25E4F3E9EABE848E25DEB
{
	// System.Collections.Generic.List`1<MotionFramework.Scene.AssetScene> MotionFramework.Scene.SceneManager::_additionScenes
	List_1_t887C9EADF6CB06440DB6E6CB3F6B002F96F96F4B* ____additionScenes_1;
	// MotionFramework.Scene.AssetScene MotionFramework.Scene.SceneManager::_mainScene
	AssetScene_t8AFA02EED3E86BF164B08BC1BB0FB401E718FD57* ____mainScene_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// MotionFramework.Tween.TweenManager
struct TweenManager_t8EED1D70959BF58810AAF977A15F083409E6FEA2  : public ModuleSingleton_1_t10C29BBA63B8B740DC95E04BAE7233324D76B49D
{
	// System.Collections.Generic.List`1<MotionFramework.Tween.TweenManager/TweenWrapper> MotionFramework.Tween.TweenManager::_wrappers
	List_1_t3BB950B6DF2869863886DAE5C176AC3520A02A7C* ____wrappers_2;
	// System.Collections.Generic.List`1<MotionFramework.Tween.TweenManager/TweenWrapper> MotionFramework.Tween.TweenManager::_remover
	List_1_t3BB950B6DF2869863886DAE5C176AC3520A02A7C* ____remover_3;
	// System.Boolean MotionFramework.Tween.TweenManager::<IgnoreTimeScale>k__BackingField
	bool ___U3CIgnoreTimeScaleU3Ek__BackingField_4;
	// System.Single MotionFramework.Tween.TweenManager::<PlaySpeed>k__BackingField
	float ___U3CPlaySpeedU3Ek__BackingField_5;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// MotionFramework.Window.WindowManager
struct WindowManager_t7F0B07786B1AE90EBA2B231B162139C60658612D  : public ModuleSingleton_1_tBE260B0F4E5182E42640BFB7A9489B9171E49CFE
{
	// System.Collections.Generic.List`1<MotionFramework.Window.UIWindow> MotionFramework.Window.WindowManager::_stack
	List_1_t34B3393B1D7159DE2E594665C6C18958D0CC9815* ____stack_1;
	// MotionFramework.IActivatorServices MotionFramework.Window.WindowManager::<ActivatorServices>k__BackingField
	RuntimeObject* ___U3CActivatorServicesU3Ek__BackingField_2;
	// MotionFramework.Window.UIRoot MotionFramework.Window.WindowManager::<Root>k__BackingField
	UIRoot_tEECAD0D6EE4916CE5ABF839BC9C8B04B3FC067F4* ___U3CRootU3Ek__BackingField_3;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`2<MotionFramework.ELogLevel,System.String>
struct Action_2_t21AA7A510C20CB7800E05397DC5796D85ED66117  : public MulticastDelegate_t
{
};

// YooAsset.Editor.AssetBundleCollectorSetting
struct AssetBundleCollectorSetting_tCEA81AA31B30623732C01B5133C1B05BD3F5F698  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean YooAsset.Editor.AssetBundleCollectorSetting::AutoCollectShaders
	bool ___AutoCollectShaders_4;
	// System.String YooAsset.Editor.AssetBundleCollectorSetting::ShadersBundleName
	String_t* ___ShadersBundleName_5;
	// System.Collections.Generic.List`1<YooAsset.Editor.AssetBundleCollectorSetting/Collector> YooAsset.Editor.AssetBundleCollectorSetting::Collectors
	List_1_t98D9557FEC502F1D0ACC1D861D085C93A2C58383* ___Collectors_6;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AOTGenericReferences
struct AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameLauncher
struct GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// YooAsset.EPlayMode GameLauncher::PlayMode
	int32_t ___PlayMode_4;
	// System.Reflection.Assembly GameLauncher::hotUpdateAss
	Assembly_t* ___hotUpdateAss_5;
	// System.Boolean GameLauncher::gameStart
	bool ___gameStart_6;
	// RefTypes GameLauncher::refTypes
	RefTypes_tF4C1B391BCE0B1DAC15D0D3C7AB90ED04BC229E8* ___refTypes_7;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<YooAsset.Editor.AssetBundleCollectorSetting/Collector>
struct List_1_t98D9557FEC502F1D0ACC1D861D085C93A2C58383_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CollectorU5BU5D_t6477A14BDECB926B80AB2173958CF11E8A719D7E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<YooAsset.Editor.AssetBundleCollectorSetting/Collector>

// System.Reflection.Assembly

// System.Reflection.Assembly

// RefTypes

// RefTypes

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// YooAsset.Editor.AssetBundleCollectorSetting/Collector

// YooAsset.Editor.AssetBundleCollectorSetting/Collector

// GameLauncher/<CreateGameModules>d__11

// GameLauncher/<CreateGameModules>d__11

// MotionFramework.Pool.GameObjectPoolManager/CreateParameters

// MotionFramework.Pool.GameObjectPoolManager/CreateParameters

// MotionFramework.Audio.AudioManager

// MotionFramework.Audio.AudioManager

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// MotionFramework.Config.ConfigManager

// MotionFramework.Config.ConfigManager

// YooAsset.EditorSimulateModeParameters

// YooAsset.EditorSimulateModeParameters

// MotionFramework.Event.EventManager

// MotionFramework.Event.EventManager

// MotionFramework.Pool.GameObjectPoolManager

// MotionFramework.Pool.GameObjectPoolManager

// YooAsset.InitializationOperation

// YooAsset.InitializationOperation

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// YooAsset.OfflinePlayModeParameters

// YooAsset.OfflinePlayModeParameters

// MotionFramework.Resource.ResourceManager

// MotionFramework.Resource.ResourceManager

// MotionFramework.Scene.SceneManager

// MotionFramework.Scene.SceneManager

// System.Single

// System.Single

// MotionFramework.Tween.TweenManager
struct TweenManager_t8EED1D70959BF58810AAF977A15F083409E6FEA2_StaticFields
{
	// System.Int32 MotionFramework.Tween.TweenManager::StaticTweenUID
	int32_t ___StaticTweenUID_1;
};

// MotionFramework.Tween.TweenManager

// System.Void

// System.Void

// MotionFramework.Window.WindowManager

// MotionFramework.Window.WindowManager

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`2<MotionFramework.ELogLevel,System.String>

// System.Action`2<MotionFramework.ELogLevel,System.String>

// YooAsset.Editor.AssetBundleCollectorSetting

// YooAsset.Editor.AssetBundleCollectorSetting

// System.NotImplementedException

// System.NotImplementedException

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AOTGenericReferences

// AOTGenericReferences

// GameLauncher

// GameLauncher
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`2<System.Int32Enum,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mCAAE199274CB859466485ECBAE0128A25C8BBAAE_gshared (Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T MotionFramework.MotionEngine::CreateModule<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MotionEngine_CreateModule_TisRuntimeObject_m3335FC5989866EB835A91835B187E7D4C7279D87_gshared (int32_t ___0_priority, const RuntimeMethod* method) ;
// T MotionFramework.MotionEngine::CreateModule<System.Object>(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MotionEngine_CreateModule_TisRuntimeObject_mFF2CF00A846E972FBBB7C050A8A2971E15C81A6A_gshared (RuntimeObject* ___0_createParam, int32_t ___1_priority, const RuntimeMethod* method) ;
// T MotionFramework.ModuleSingleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ModuleSingleton_1_get_Instance_mDFEF5F8D11B709B0473A447ADAD40802917C300A_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void GameLauncher::InitAppliaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLauncher_InitAppliaction_mE7212C79DD930193DE7A97D018CBD9831522B018 (GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01 (const RuntimeMethod* method) ;
// System.Void MotionFramework.Console.DeveloperConsole::Initialize(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeveloperConsole_Initialize_m6C0406578D9449C477149CB749786546E37DD0A4 (bool ___0_showFPS, String_t* ___1_assemblyName, const RuntimeMethod* method) ;
// System.Void System.Action`2<MotionFramework.ELogLevel,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mB87B5BBBAFE9995F924D37F5B16E41935239A30F (Action_2_t21AA7A510C20CB7800E05397DC5796D85ED66117* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t21AA7A510C20CB7800E05397DC5796D85ED66117*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mCAAE199274CB859466485ECBAE0128A25C8BBAAE_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void MotionFramework.MotionEngine::Initialize(UnityEngine.MonoBehaviour,System.Action`2<MotionFramework.ELogLevel,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionEngine_Initialize_m66A1E5632CF96E43498E8BA6C8CDADCB66BE8BBD (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_behaviour, Action_2_t21AA7A510C20CB7800E05397DC5796D85ED66117* ___1_logCallback, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameLauncher::CreateGameModules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameLauncher_CreateGameModules_m89B11F27A20134CE06D352FB324D3541E9AB573D (GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void MotionFramework.MotionEngine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionEngine_Update_m5F1B05992922F4BFA7154B340908522FB08FFC5E (const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// System.Void MotionFramework.Console.DeveloperConsole::Draw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeveloperConsole_Draw_mA84407F5DEF4335D97DE7B1DA1FBF30D154067D9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_runInBackground_m4CD0DF59011994C4DB76D7A2FE7A02BC07B4AF67 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_backgroundLoadingPriority(UnityEngine.ThreadPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_backgroundLoadingPriority_m2807B2D39C5C2A10FDF890A8460038058B6C6198 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void GameLauncher/<CreateGameModules>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateGameModulesU3Ed__11__ctor_m16D4B43003040A7911F7C7B5911AB15E9221272F (U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void RefTypes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefTypes__ctor_m15296B5CE6A4FBFBDCC191A353EE56E35C98A4A5 (RefTypes_tF4C1B391BCE0B1DAC15D0D3C7AB90ED04BC229E8* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T MotionFramework.MotionEngine::CreateModule<MotionFramework.Event.EventManager>(System.Int32)
inline EventManager_tEC055E312945D604C24F0963CF8C261D6813E03E* MotionEngine_CreateModule_TisEventManager_tEC055E312945D604C24F0963CF8C261D6813E03E_m3264C9FE07032294704A3253E66F925B4B409698 (int32_t ___0_priority, const RuntimeMethod* method)
{
	return ((  EventManager_tEC055E312945D604C24F0963CF8C261D6813E03E* (*) (int32_t, const RuntimeMethod*))MotionEngine_CreateModule_TisRuntimeObject_m3335FC5989866EB835A91835B187E7D4C7279D87_gshared)(___0_priority, method);
}
// T MotionFramework.MotionEngine::CreateModule<MotionFramework.Tween.TweenManager>(System.Int32)
inline TweenManager_t8EED1D70959BF58810AAF977A15F083409E6FEA2* MotionEngine_CreateModule_TisTweenManager_t8EED1D70959BF58810AAF977A15F083409E6FEA2_mD81AAF5E623FBC2537E72BEFA9BCB8506BF176B8 (int32_t ___0_priority, const RuntimeMethod* method)
{
	return ((  TweenManager_t8EED1D70959BF58810AAF977A15F083409E6FEA2* (*) (int32_t, const RuntimeMethod*))MotionEngine_CreateModule_TisRuntimeObject_m3335FC5989866EB835A91835B187E7D4C7279D87_gshared)(___0_priority, method);
}
// System.Void YooAsset.EditorSimulateModeParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorSimulateModeParameters__ctor_m7C97CBECF9586650FC265B658B7D58A2F106EDD8 (EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF* __this, const RuntimeMethod* method) ;
// System.String YooAsset.EditorSimulateModeHelper::SimulateBuild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EditorSimulateModeHelper_SimulateBuild_m6BFEA7AE009EBC4736041FF11B18F86063572298 (String_t* ___0_packageName, const RuntimeMethod* method) ;
// T MotionFramework.MotionEngine::CreateModule<MotionFramework.Resource.ResourceManager>(System.Object,System.Int32)
inline ResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7* MotionEngine_CreateModule_TisResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7_mC0BCE2F41967F85BEC7B5143F579BCDDAC61CF98 (RuntimeObject* ___0_createParam, int32_t ___1_priority, const RuntimeMethod* method)
{
	return ((  ResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))MotionEngine_CreateModule_TisRuntimeObject_mFF2CF00A846E972FBBB7C050A8A2971E15C81A6A_gshared)(___0_createParam, ___1_priority, method);
}
// T MotionFramework.ModuleSingleton`1<MotionFramework.Resource.ResourceManager>::get_Instance()
inline ResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7* ModuleSingleton_1_get_Instance_m532A20672DAAB429F7D48A8B307067A3C700EE8D (const RuntimeMethod* method)
{
	return ((  ResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7* (*) (const RuntimeMethod*))ModuleSingleton_1_get_Instance_mDFEF5F8D11B709B0473A447ADAD40802917C300A_gshared)(method);
}
// YooAsset.InitializationOperation MotionFramework.Resource.ResourceManager::InitializeAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* ResourceManager_InitializeAsync_m72D20BB8E0CF62569F2E9D7C324D139E11F62D2F (ResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7* __this, String_t* ___0_locationRoot, String_t* ___1_packageName, const RuntimeMethod* method) ;
// System.Void YooAsset.OfflinePlayModeParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfflinePlayModeParameters__ctor_m916B527C5A8FDF1631F083C206D9E813916E9C78 (OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9* __this, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void MotionFramework.Pool.GameObjectPoolManager/CreateParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateParameters__ctor_m4FB174F2769E72D2A184B4CC06916F60BC546F5B (CreateParameters_t7FEF61D012DE3404FF0AE847C10FA222B68D1676* __this, const RuntimeMethod* method) ;
// T MotionFramework.MotionEngine::CreateModule<MotionFramework.Pool.GameObjectPoolManager>(System.Object,System.Int32)
inline GameObjectPoolManager_t269BBBC1560CCD4831A33AA1904700F7CC7325AB* MotionEngine_CreateModule_TisGameObjectPoolManager_t269BBBC1560CCD4831A33AA1904700F7CC7325AB_mBBBD19F5C8D3953BE77D5B135E5AB132609D1D27 (RuntimeObject* ___0_createParam, int32_t ___1_priority, const RuntimeMethod* method)
{
	return ((  GameObjectPoolManager_t269BBBC1560CCD4831A33AA1904700F7CC7325AB* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))MotionEngine_CreateModule_TisRuntimeObject_mFF2CF00A846E972FBBB7C050A8A2971E15C81A6A_gshared)(___0_createParam, ___1_priority, method);
}
// T MotionFramework.MotionEngine::CreateModule<MotionFramework.Audio.AudioManager>(System.Int32)
inline AudioManager_t87EF283E7CC3ECFF614332C23F9FE11FAC139371* MotionEngine_CreateModule_TisAudioManager_t87EF283E7CC3ECFF614332C23F9FE11FAC139371_m6E10BE91457606B8363D785A52EB0BBCD28F539E (int32_t ___0_priority, const RuntimeMethod* method)
{
	return ((  AudioManager_t87EF283E7CC3ECFF614332C23F9FE11FAC139371* (*) (int32_t, const RuntimeMethod*))MotionEngine_CreateModule_TisRuntimeObject_m3335FC5989866EB835A91835B187E7D4C7279D87_gshared)(___0_priority, method);
}
// T MotionFramework.MotionEngine::CreateModule<MotionFramework.Config.ConfigManager>(System.Int32)
inline ConfigManager_tC8271C57FAA4D40DA4B2ED9E919C2C0257574BBC* MotionEngine_CreateModule_TisConfigManager_tC8271C57FAA4D40DA4B2ED9E919C2C0257574BBC_m4C19D96230B6F06762CC65C219FC4A31FAF801F0 (int32_t ___0_priority, const RuntimeMethod* method)
{
	return ((  ConfigManager_tC8271C57FAA4D40DA4B2ED9E919C2C0257574BBC* (*) (int32_t, const RuntimeMethod*))MotionEngine_CreateModule_TisRuntimeObject_m3335FC5989866EB835A91835B187E7D4C7279D87_gshared)(___0_priority, method);
}
// T MotionFramework.MotionEngine::CreateModule<MotionFramework.Scene.SceneManager>(System.Int32)
inline SceneManager_tF26834BC589E9421F3A08C5EFCF750E0D59B0AA1* MotionEngine_CreateModule_TisSceneManager_tF26834BC589E9421F3A08C5EFCF750E0D59B0AA1_m74DE0F0411ABEEB16DA516C341F54B3737E6499F (int32_t ___0_priority, const RuntimeMethod* method)
{
	return ((  SceneManager_tF26834BC589E9421F3A08C5EFCF750E0D59B0AA1* (*) (int32_t, const RuntimeMethod*))MotionEngine_CreateModule_TisRuntimeObject_m3335FC5989866EB835A91835B187E7D4C7279D87_gshared)(___0_priority, method);
}
// T MotionFramework.MotionEngine::CreateModule<MotionFramework.Window.WindowManager>(System.Int32)
inline WindowManager_t7F0B07786B1AE90EBA2B231B162139C60658612D* MotionEngine_CreateModule_TisWindowManager_t7F0B07786B1AE90EBA2B231B162139C60658612D_m65B53C7434611CA7BC7EC067C829351BA923952F (int32_t ___0_priority, const RuntimeMethod* method)
{
	return ((  WindowManager_t7F0B07786B1AE90EBA2B231B162139C60658612D* (*) (int32_t, const RuntimeMethod*))MotionEngine_CreateModule_TisRuntimeObject_m3335FC5989866EB835A91835B187E7D4C7279D87_gshared)(___0_priority, method);
}
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_Load_mD9E9CED2EFF8BBE97ACDE83FB8ED492D1E42E975 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawAssembly, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Runtime.CompilerServices.IAsyncStateMachine>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisIAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_m02FE92802942EF20544EA1C2319D27DDBBE5CA1C (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, RuntimeObject**, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Collections.Generic.List`1<YooAsset.Editor.AssetBundleCollectorSetting/Collector>::.ctor()
inline void List_1__ctor_m4E097E1A3F8F0C11E57533DF1FA7B526E4A42921 (List_1_t98D9557FEC502F1D0ACC1D861D085C93A2C58383* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t98D9557FEC502F1D0ACC1D861D085C93A2C58383*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AOTGenericReferences::RefMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTGenericReferences_RefMethods_m17CF257D96D8BC2F232C4C1502905B792D17170C (AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AOTGenericReferences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AOTGenericReferences__ctor_m41CBD692FC9B521512E552575AFE7A385DEC71A6 (AOTGenericReferences_t7B8F9CD83F1EE53810C6F841826105D9416EA7C1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameLauncher::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLauncher_Awake_mCE5A7040C2E9A7398B9B071B9D1263D10D95F219 (GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t21AA7A510C20CB7800E05397DC5796D85ED66117_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeveloperConsole_tE93C642F0C7C8FDE52C5684A32CF132F2C47AC49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameLauncher_HandleMotionFrameworkLog_m4B126A2BE8EA2525FFC836823BD36F6B7C61434A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEngine_t28A26E01C3C4A30692BFAA6BA545C7B8541A06D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral977A71115E05B54B449539D8B6701AE4DAD2B1BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayMode = EPlayMode.OfflinePlayMode;
		__this->___PlayMode_4 = 1;
		// InitAppliaction();
		GameLauncher_InitAppliaction_mE7212C79DD930193DE7A97D018CBD9831522B018(__this, NULL);
		// if (Application.isEditor || Debug.isDebugBuild)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}

IL_001b:
	{
		// DeveloperConsole.Initialize();
		il2cpp_codegen_runtime_class_init_inline(DeveloperConsole_tE93C642F0C7C8FDE52C5684A32CF132F2C47AC49_il2cpp_TypeInfo_var);
		DeveloperConsole_Initialize_m6C0406578D9449C477149CB749786546E37DD0A4((bool)1, _stringLiteral977A71115E05B54B449539D8B6701AE4DAD2B1BE, NULL);
	}

IL_0026:
	{
		// MotionEngine.Initialize(this, HandleMotionFrameworkLog);
		Action_2_t21AA7A510C20CB7800E05397DC5796D85ED66117* L_2 = (Action_2_t21AA7A510C20CB7800E05397DC5796D85ED66117*)il2cpp_codegen_object_new(Action_2_t21AA7A510C20CB7800E05397DC5796D85ED66117_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_2__ctor_mB87B5BBBAFE9995F924D37F5B16E41935239A30F(L_2, __this, (intptr_t)((void*)GameLauncher_HandleMotionFrameworkLog_m4B126A2BE8EA2525FFC836823BD36F6B7C61434A_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MotionEngine_t28A26E01C3C4A30692BFAA6BA545C7B8541A06D1_il2cpp_TypeInfo_var);
		MotionEngine_Initialize_m66A1E5632CF96E43498E8BA6C8CDADCB66BE8BBD(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void GameLauncher::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLauncher_Start_mD9CDE87C3B8166524F2405891E5C9198DA7F8603 (GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(CreateGameModules());
		RuntimeObject* L_0;
		L_0 = GameLauncher_CreateGameModules_m89B11F27A20134CE06D352FB324D3541E9AB573D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void GameLauncher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLauncher_Update_mE41872235EE3C54AEE9E897F28734F317B4AF9FD (GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEngine_t28A26E01C3C4A30692BFAA6BA545C7B8541A06D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42960449A18FA75AF2D9A7F9CDCC744B0EF455E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFDC0412FBBF00CC135FC742C17FCF36E7DC2A0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MotionEngine.Update();
		il2cpp_codegen_runtime_class_init_inline(MotionEngine_t28A26E01C3C4A30692BFAA6BA545C7B8541A06D1_il2cpp_TypeInfo_var);
		MotionEngine_Update_m5F1B05992922F4BFA7154B340908522FB08FFC5E(NULL);
		// if (gameStart)
		bool L_0 = __this->___gameStart_6;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// hotUpdateAss.GetType("GameMain").GetMethod("Update").Invoke(null, null);
		Assembly_t* L_1 = __this->___hotUpdateAss_5;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(33 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_1, _stringLiteralDFDC0412FBBF00CC135FC742C17FCF36E7DC2A0C);
		NullCheck(L_2);
		MethodInfo_t* L_3;
		L_3 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_2, _stringLiteral42960449A18FA75AF2D9A7F9CDCC744B0EF455E6, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_3, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void GameLauncher::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLauncher_FixedUpdate_m543288E1DB7AF0DFB7DBA75567D79F65996F2249 (GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral559DC57206F3FE79377D83E4FA65454776DF94B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFDC0412FBBF00CC135FC742C17FCF36E7DC2A0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameStart)
		bool L_0 = __this->___gameStart_6;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// hotUpdateAss.GetType("GameMain").GetMethod("FixedUpdate").Invoke(null, null);
		Assembly_t* L_1 = __this->___hotUpdateAss_5;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(33 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_1, _stringLiteralDFDC0412FBBF00CC135FC742C17FCF36E7DC2A0C);
		NullCheck(L_2);
		MethodInfo_t* L_3;
		L_3 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_2, _stringLiteral559DC57206F3FE79377D83E4FA65454776DF94B8, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_3, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void GameLauncher::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLauncher_OnGUI_m4E5B84E3E1EC40009B9BB2A377B38E0A9BDABF0E (GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeveloperConsole_tE93C642F0C7C8FDE52C5684A32CF132F2C47AC49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isEditor || Debug.isDebugBuild)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}

IL_000e:
	{
		// DeveloperConsole.Draw();
		il2cpp_codegen_runtime_class_init_inline(DeveloperConsole_tE93C642F0C7C8FDE52C5684A32CF132F2C47AC49_il2cpp_TypeInfo_var);
		DeveloperConsole_Draw_mA84407F5DEF4335D97DE7B1DA1FBF30D154067D9(NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GameLauncher::InitAppliaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLauncher_InitAppliaction_mE7212C79DD930193DE7A97D018CBD9831522B018 (GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* __this, const RuntimeMethod* method) 
{
	{
		// Application.runInBackground = true;
		Application_set_runInBackground_m4CD0DF59011994C4DB76D7A2FE7A02BC07B4AF67((bool)1, NULL);
		// Application.backgroundLoadingPriority = ThreadPriority.High;
		Application_set_backgroundLoadingPriority_m2807B2D39C5C2A10FDF890A8460038058B6C6198(4, NULL);
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)60), NULL);
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// }
		return;
	}
}
// System.Void GameLauncher::HandleMotionFrameworkLog(MotionFramework.ELogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLauncher_HandleMotionFrameworkLog_m4B126A2BE8EA2525FFC836823BD36F6B7C61434A (GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* __this, int32_t ___0_logLevel, String_t* ___1_log, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (logLevel == ELogLevel.Log)
		int32_t L_0 = ___0_logLevel;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// UnityEngine.Debug.Log(log);
		String_t* L_1 = ___1_log;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		return;
	}

IL_000a:
	{
		// else if (logLevel == ELogLevel.Error)
		int32_t L_2 = ___0_logLevel;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		// UnityEngine.Debug.LogError(log);
		String_t* L_3 = ___1_log;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_3, NULL);
		return;
	}

IL_0015:
	{
		// else if (logLevel == ELogLevel.Warning)
		int32_t L_4 = ___0_logLevel;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		// UnityEngine.Debug.LogWarning(log);
		String_t* L_5 = ___1_log;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_5, NULL);
		return;
	}

IL_0020:
	{
		// else if (logLevel == ELogLevel.Exception)
		int32_t L_6 = ___0_logLevel;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_002b;
		}
	}
	{
		// UnityEngine.Debug.LogError(log);
		String_t* L_7 = ___1_log;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
		return;
	}

IL_002b:
	{
		// throw new NotImplementedException($"{logLevel}");
		int32_t L_8 = ___0_logLevel;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ELogLevel_t037D8936181CD1A28C03B53878B7C7EB03A31412_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94)), L_10, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_12 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameLauncher_HandleMotionFrameworkLog_m4B126A2BE8EA2525FFC836823BD36F6B7C61434A_RuntimeMethod_var)));
	}
}
// System.Collections.IEnumerator GameLauncher::CreateGameModules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameLauncher_CreateGameModules_m89B11F27A20134CE06D352FB324D3541E9AB573D (GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF* L_0 = (U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF*)il2cpp_codegen_object_new(U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCreateGameModulesU3Ed__11__ctor_m16D4B43003040A7911F7C7B5911AB15E9221272F(L_0, 0, NULL);
		U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameLauncher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLauncher__ctor_m282943728853D681262ABC6C1F25092B613D9343 (GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RefTypes_tF4C1B391BCE0B1DAC15D0D3C7AB90ED04BC229E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private RefTypes refTypes = new RefTypes();
		RefTypes_tF4C1B391BCE0B1DAC15D0D3C7AB90ED04BC229E8* L_0 = (RefTypes_tF4C1B391BCE0B1DAC15D0D3C7AB90ED04BC229E8*)il2cpp_codegen_object_new(RefTypes_tF4C1B391BCE0B1DAC15D0D3C7AB90ED04BC229E8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RefTypes__ctor_m15296B5CE6A4FBFBDCC191A353EE56E35C98A4A5(L_0, NULL);
		__this->___refTypes_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___refTypes_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameLauncher/<CreateGameModules>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateGameModulesU3Ed__11__ctor_m16D4B43003040A7911F7C7B5911AB15E9221272F (U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameLauncher/<CreateGameModules>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateGameModulesU3Ed__11_System_IDisposable_Dispose_m0E291C54D4A2F1D8E753E62CCF38F6C62E62CBA4 (U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameLauncher/<CreateGameModules>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCreateGameModulesU3Ed__11_MoveNext_m08ADEBBEE9DEA9F0C502865BD3772427A0B68313 (U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateParameters_t7FEF61D012DE3404FF0AE847C10FA222B68D1676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleSingleton_1_get_Instance_m532A20672DAAB429F7D48A8B307067A3C700EE8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEngine_CreateModule_TisAudioManager_t87EF283E7CC3ECFF614332C23F9FE11FAC139371_m6E10BE91457606B8363D785A52EB0BBCD28F539E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEngine_CreateModule_TisConfigManager_tC8271C57FAA4D40DA4B2ED9E919C2C0257574BBC_m4C19D96230B6F06762CC65C219FC4A31FAF801F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEngine_CreateModule_TisEventManager_tEC055E312945D604C24F0963CF8C261D6813E03E_m3264C9FE07032294704A3253E66F925B4B409698_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEngine_CreateModule_TisGameObjectPoolManager_t269BBBC1560CCD4831A33AA1904700F7CC7325AB_mBBBD19F5C8D3953BE77D5B135E5AB132609D1D27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEngine_CreateModule_TisResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7_mC0BCE2F41967F85BEC7B5143F579BCDDAC61CF98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEngine_CreateModule_TisSceneManager_tF26834BC589E9421F3A08C5EFCF750E0D59B0AA1_m74DE0F0411ABEEB16DA516C341F54B3737E6499F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEngine_CreateModule_TisTweenManager_t8EED1D70959BF58810AAF977A15F083409E6FEA2_mD81AAF5E623FBC2537E72BEFA9BCB8506BF176B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEngine_CreateModule_TisWindowManager_t7F0B07786B1AE90EBA2B231B162139C60658612D_m65B53C7434611CA7BC7EC067C829351BA923952F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEngine_t28A26E01C3C4A30692BFAA6BA545C7B8541A06D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B4BF849BA65444AD9677BFBF189CBB0D97ED0DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9D7303232DA7E2492B63038ADC505D55240AD22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFDC0412FBBF00CC135FC742C17FCF36E7DC2A0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9DDA4DF980D4971E42607AE93A88D7745184EA5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* V_1 = NULL;
	String_t* V_2 = NULL;
	InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* V_3 = NULL;
	InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* V_4 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0082;
			}
			case 2:
			{
				goto IL_00c3;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// MotionEngine.CreateModule<EventManager>();
		il2cpp_codegen_runtime_class_init_inline(MotionEngine_t28A26E01C3C4A30692BFAA6BA545C7B8541A06D1_il2cpp_TypeInfo_var);
		EventManager_tEC055E312945D604C24F0963CF8C261D6813E03E* L_3;
		L_3 = MotionEngine_CreateModule_TisEventManager_tEC055E312945D604C24F0963CF8C261D6813E03E_m3264C9FE07032294704A3253E66F925B4B409698(0, MotionEngine_CreateModule_TisEventManager_tEC055E312945D604C24F0963CF8C261D6813E03E_m3264C9FE07032294704A3253E66F925B4B409698_RuntimeMethod_var);
		// MotionEngine.CreateModule<TweenManager>();
		TweenManager_t8EED1D70959BF58810AAF977A15F083409E6FEA2* L_4;
		L_4 = MotionEngine_CreateModule_TisTweenManager_t8EED1D70959BF58810AAF977A15F083409E6FEA2_mD81AAF5E623FBC2537E72BEFA9BCB8506BF176B8(0, MotionEngine_CreateModule_TisTweenManager_t8EED1D70959BF58810AAF977A15F083409E6FEA2_mD81AAF5E623FBC2537E72BEFA9BCB8506BF176B8_RuntimeMethod_var);
		// string locationRoot = "Assets/ProjectDir/Bundles/";
		V_2 = _stringLiteral5B4BF849BA65444AD9677BFBF189CBB0D97ED0DB;
		// if (PlayMode == EPlayMode.EditorSimulateMode)
		GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___PlayMode_4;
		if (L_6)
		{
			goto IL_008b;
		}
	}
	{
		// var resourceCreateParam = new EditorSimulateModeParameters();
		EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF* L_7 = (EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF*)il2cpp_codegen_object_new(EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EditorSimulateModeParameters__ctor_m7C97CBECF9586650FC265B658B7D58A2F106EDD8(L_7, NULL);
		// resourceCreateParam.SimulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild("DefaultPackage");
		EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF* L_8 = L_7;
		String_t* L_9;
		L_9 = EditorSimulateModeHelper_SimulateBuild_m6BFEA7AE009EBC4736041FF11B18F86063572298(_stringLiteralF9DDA4DF980D4971E42607AE93A88D7745184EA5, NULL);
		NullCheck(L_8);
		L_8->___SimulateManifestFilePath_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___SimulateManifestFilePath_4), (void*)L_9);
		// MotionEngine.CreateModule<ResourceManager>(resourceCreateParam);
		il2cpp_codegen_runtime_class_init_inline(MotionEngine_t28A26E01C3C4A30692BFAA6BA545C7B8541A06D1_il2cpp_TypeInfo_var);
		ResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7* L_10;
		L_10 = MotionEngine_CreateModule_TisResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7_mC0BCE2F41967F85BEC7B5143F579BCDDAC61CF98(L_8, 0, MotionEngine_CreateModule_TisResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7_mC0BCE2F41967F85BEC7B5143F579BCDDAC61CF98_RuntimeMethod_var);
		// var operation = ResourceManager.Instance.InitializeAsync(locationRoot);
		ResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7* L_11;
		L_11 = ModuleSingleton_1_get_Instance_m532A20672DAAB429F7D48A8B307067A3C700EE8D(ModuleSingleton_1_get_Instance_m532A20672DAAB429F7D48A8B307067A3C700EE8D_RuntimeMethod_var);
		String_t* L_12 = V_2;
		NullCheck(L_11);
		InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* L_13;
		L_13 = ResourceManager_InitializeAsync_m72D20BB8E0CF62569F2E9D7C324D139E11F62D2F(L_11, L_12, _stringLiteralF9DDA4DF980D4971E42607AE93A88D7745184EA5, NULL);
		V_3 = L_13;
		// yield return operation;
		InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* L_14 = V_3;
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0082:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00d2;
	}

IL_008b:
	{
		// else if (PlayMode == EPlayMode.OfflinePlayMode)
		GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->___PlayMode_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_00cc;
		}
	}
	{
		// var resourceCreateParam = new OfflinePlayModeParameters();
		OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9* L_17 = (OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9*)il2cpp_codegen_object_new(OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		OfflinePlayModeParameters__ctor_m916B527C5A8FDF1631F083C206D9E813916E9C78(L_17, NULL);
		// MotionEngine.CreateModule<ResourceManager>(resourceCreateParam);
		il2cpp_codegen_runtime_class_init_inline(MotionEngine_t28A26E01C3C4A30692BFAA6BA545C7B8541A06D1_il2cpp_TypeInfo_var);
		ResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7* L_18;
		L_18 = MotionEngine_CreateModule_TisResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7_mC0BCE2F41967F85BEC7B5143F579BCDDAC61CF98(L_17, 0, MotionEngine_CreateModule_TisResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7_mC0BCE2F41967F85BEC7B5143F579BCDDAC61CF98_RuntimeMethod_var);
		// var operation = ResourceManager.Instance.InitializeAsync(locationRoot);
		ResourceManager_tF0E0CD4FEEAD543992FEC548603F829362363CD7* L_19;
		L_19 = ModuleSingleton_1_get_Instance_m532A20672DAAB429F7D48A8B307067A3C700EE8D(ModuleSingleton_1_get_Instance_m532A20672DAAB429F7D48A8B307067A3C700EE8D_RuntimeMethod_var);
		String_t* L_20 = V_2;
		NullCheck(L_19);
		InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* L_21;
		L_21 = ResourceManager_InitializeAsync_m72D20BB8E0CF62569F2E9D7C324D139E11F62D2F(L_19, L_20, _stringLiteralF9DDA4DF980D4971E42607AE93A88D7745184EA5, NULL);
		V_4 = L_21;
		// yield return operation;
		InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* L_22 = V_4;
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00c3:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00d2;
	}

IL_00cc:
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_23 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateGameModulesU3Ed__11_MoveNext_m08ADEBBEE9DEA9F0C502865BD3772427A0B68313_RuntimeMethod_var)));
	}

IL_00d2:
	{
		// var poolCreateParam = new GameObjectPoolManager.CreateParameters();
		CreateParameters_t7FEF61D012DE3404FF0AE847C10FA222B68D1676* L_24 = (CreateParameters_t7FEF61D012DE3404FF0AE847C10FA222B68D1676*)il2cpp_codegen_object_new(CreateParameters_t7FEF61D012DE3404FF0AE847C10FA222B68D1676_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		CreateParameters__ctor_m4FB174F2769E72D2A184B4CC06916F60BC546F5B(L_24, NULL);
		// poolCreateParam.DefaultDestroyTime = 5f;
		CreateParameters_t7FEF61D012DE3404FF0AE847C10FA222B68D1676* L_25 = L_24;
		NullCheck(L_25);
		L_25->___DefaultDestroyTime_3 = (5.0f);
		// MotionEngine.CreateModule<GameObjectPoolManager>(poolCreateParam);
		il2cpp_codegen_runtime_class_init_inline(MotionEngine_t28A26E01C3C4A30692BFAA6BA545C7B8541A06D1_il2cpp_TypeInfo_var);
		GameObjectPoolManager_t269BBBC1560CCD4831A33AA1904700F7CC7325AB* L_26;
		L_26 = MotionEngine_CreateModule_TisGameObjectPoolManager_t269BBBC1560CCD4831A33AA1904700F7CC7325AB_mBBBD19F5C8D3953BE77D5B135E5AB132609D1D27(L_25, 0, MotionEngine_CreateModule_TisGameObjectPoolManager_t269BBBC1560CCD4831A33AA1904700F7CC7325AB_mBBBD19F5C8D3953BE77D5B135E5AB132609D1D27_RuntimeMethod_var);
		// MotionEngine.CreateModule<AudioManager>();
		AudioManager_t87EF283E7CC3ECFF614332C23F9FE11FAC139371* L_27;
		L_27 = MotionEngine_CreateModule_TisAudioManager_t87EF283E7CC3ECFF614332C23F9FE11FAC139371_m6E10BE91457606B8363D785A52EB0BBCD28F539E(0, MotionEngine_CreateModule_TisAudioManager_t87EF283E7CC3ECFF614332C23F9FE11FAC139371_m6E10BE91457606B8363D785A52EB0BBCD28F539E_RuntimeMethod_var);
		// MotionEngine.CreateModule<ConfigManager>();
		ConfigManager_tC8271C57FAA4D40DA4B2ED9E919C2C0257574BBC* L_28;
		L_28 = MotionEngine_CreateModule_TisConfigManager_tC8271C57FAA4D40DA4B2ED9E919C2C0257574BBC_m4C19D96230B6F06762CC65C219FC4A31FAF801F0(0, MotionEngine_CreateModule_TisConfigManager_tC8271C57FAA4D40DA4B2ED9E919C2C0257574BBC_m4C19D96230B6F06762CC65C219FC4A31FAF801F0_RuntimeMethod_var);
		// MotionEngine.CreateModule<SceneManager>();
		SceneManager_tF26834BC589E9421F3A08C5EFCF750E0D59B0AA1* L_29;
		L_29 = MotionEngine_CreateModule_TisSceneManager_tF26834BC589E9421F3A08C5EFCF750E0D59B0AA1_m74DE0F0411ABEEB16DA516C341F54B3737E6499F(0, MotionEngine_CreateModule_TisSceneManager_tF26834BC589E9421F3A08C5EFCF750E0D59B0AA1_m74DE0F0411ABEEB16DA516C341F54B3737E6499F_RuntimeMethod_var);
		// MotionEngine.CreateModule<WindowManager>();
		WindowManager_t7F0B07786B1AE90EBA2B231B162139C60658612D* L_30;
		L_30 = MotionEngine_CreateModule_TisWindowManager_t7F0B07786B1AE90EBA2B231B162139C60658612D_m65B53C7434611CA7BC7EC067C829351BA923952F(0, MotionEngine_CreateModule_TisWindowManager_t7F0B07786B1AE90EBA2B231B162139C60658612D_m65B53C7434611CA7BC7EC067C829351BA923952F_RuntimeMethod_var);
		// hotUpdateAss = Assembly.Load(File.ReadAllBytes($"{Application.streamingAssetsPath}/HotUpdate.dll.bytes"));
		GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* L_31 = V_1;
		String_t* L_32;
		L_32 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		String_t* L_33;
		L_33 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_32, _stringLiteralC9D7303232DA7E2492B63038ADC505D55240AD22, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_33, NULL);
		Assembly_t* L_35;
		L_35 = Assembly_Load_mD9E9CED2EFF8BBE97ACDE83FB8ED492D1E42E975(L_34, NULL);
		NullCheck(L_31);
		L_31->___hotUpdateAss_5 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___hotUpdateAss_5), (void*)L_35);
		// hotUpdateAss.GetType("GameMain").GetMethod("Start").Invoke(null, null);
		GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* L_36 = V_1;
		NullCheck(L_36);
		Assembly_t* L_37 = L_36->___hotUpdateAss_5;
		NullCheck(L_37);
		Type_t* L_38;
		L_38 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(33 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_37, _stringLiteralDFDC0412FBBF00CC135FC742C17FCF36E7DC2A0C);
		NullCheck(L_38);
		MethodInfo_t* L_39;
		L_39 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_38, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, NULL);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_39, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		// gameStart = true;
		GameLauncher_tC5EDC60D9CDEF6428C5B5B175FBA7C67215ACCE5* L_41 = V_1;
		NullCheck(L_41);
		L_41->___gameStart_6 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object GameLauncher/<CreateGameModules>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateGameModulesU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9A1CFD0760507C055C3B22CCC668FCAF5601C11C (U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameLauncher/<CreateGameModules>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateGameModulesU3Ed__11_System_Collections_IEnumerator_Reset_m9874046FB046746370EC1B24768681600DF8E4CE (U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateGameModulesU3Ed__11_System_Collections_IEnumerator_Reset_m9874046FB046746370EC1B24768681600DF8E4CE_RuntimeMethod_var)));
	}
}
// System.Object GameLauncher/<CreateGameModules>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateGameModulesU3Ed__11_System_Collections_IEnumerator_get_Current_mD407AFFA09489CAFCB5FB9E2632DAA5BB92B17B6 (U3CCreateGameModulesU3Ed__11_t07E3A53AB253D13612C98BA08B06EDADE574DDCF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RefTypes::MyAOTRefs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefTypes_MyAOTRefs_m3A8C52472E381123E389FD583E60B3E721C14B65 (RefTypes_tF4C1B391BCE0B1DAC15D0D3C7AB90ED04BC229E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisIAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_m02FE92802942EF20544EA1C2319D27DDBBE5CA1C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// AsyncVoidMethodBuilder builder = default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D));
		// IAsyncStateMachine asm = default;
		V_1 = (RuntimeObject*)NULL;
		// builder.Start(ref asm);
		AsyncVoidMethodBuilder_Start_TisIAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_m02FE92802942EF20544EA1C2319D27DDBBE5CA1C((&V_0), (&V_1), AsyncVoidMethodBuilder_Start_TisIAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_m02FE92802942EF20544EA1C2319D27DDBBE5CA1C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RefTypes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefTypes__ctor_m15296B5CE6A4FBFBDCC191A353EE56E35C98A4A5 (RefTypes_tF4C1B391BCE0B1DAC15D0D3C7AB90ED04BC229E8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YooAsset.Editor.AssetBundleCollectorSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleCollectorSetting__ctor_m64F390B90833812EF9D886854194958FEE9AD499 (AssetBundleCollectorSetting_tCEA81AA31B30623732C01B5133C1B05BD3F5F698* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4E097E1A3F8F0C11E57533DF1FA7B526E4A42921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t98D9557FEC502F1D0ACC1D861D085C93A2C58383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE262351BAEBC7B9F10022B67A58E5D65283756A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ShadersBundleName = "myshaders";
		__this->___ShadersBundleName_5 = _stringLiteralAE262351BAEBC7B9F10022B67A58E5D65283756A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShadersBundleName_5), (void*)_stringLiteralAE262351BAEBC7B9F10022B67A58E5D65283756A);
		// public List<Collector> Collectors = new List<Collector>();
		List_1_t98D9557FEC502F1D0ACC1D861D085C93A2C58383* L_0 = (List_1_t98D9557FEC502F1D0ACC1D861D085C93A2C58383*)il2cpp_codegen_object_new(List_1_t98D9557FEC502F1D0ACC1D861D085C93A2C58383_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4E097E1A3F8F0C11E57533DF1FA7B526E4A42921(L_0, List_1__ctor_m4E097E1A3F8F0C11E57533DF1FA7B526E4A42921_RuntimeMethod_var);
		__this->___Collectors_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Collectors_6), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String YooAsset.Editor.AssetBundleCollectorSetting/Collector::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Collector_ToString_mE152A36C9930057B8574F59E0FDAEA8EEF1940E8 (Collector_t007479A93B6DD19F34DE3C8959B2CBD3C62E16D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45350A7ABECE65D8E1755214ECD6E1DB404B58CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"Directory : {CollectDirectory} | {PackRuleName} | {FilterRuleName} | {DontWriteAssetPath} | {AssetTags}";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = __this->___CollectDirectory_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = __this->___PackRuleName_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = __this->___FilterRuleName_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		bool L_8 = __this->___DontWriteAssetPath_3;
		bool L_9 = L_8;
		RuntimeObject* L_10 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		String_t* L_12 = __this->___AssetTags_4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral45350A7ABECE65D8E1755214ECD6E1DB404B58CF, L_11, NULL);
		return L_13;
	}
}
// System.Void YooAsset.Editor.AssetBundleCollectorSetting/Collector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collector__ctor_mC67D48629A02A5C1DB7F33E85DB985B5DF61FCD3 (Collector_t007479A93B6DD19F34DE3C8959B2CBD3C62E16D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string CollectDirectory = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___CollectDirectory_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CollectDirectory_0), (void*)L_0);
		// public string PackRuleName = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___PackRuleName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PackRuleName_1), (void*)L_1);
		// public string FilterRuleName = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___FilterRuleName_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FilterRuleName_2), (void*)L_2);
		// public string AssetTags = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___AssetTags_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AssetTags_4), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
