#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t73B690804B71062EA366B9EF731317DA6FE13907;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_t6A9E5D0397FFF074250E6741C8F3D36C5381659D;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD;
// AdManager
struct AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BackAndExit
struct BackAndExit_tBCE12BE4E7E0019A08FF06DC56FE8BF556FD0257;
// BackManager
struct BackManager_t710361142316A19AFCD8F59F4DF29070EF45A3AF;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CircleEnabled
struct CircleEnabled_tDA2D71758A6A9A2BF0D0DC59AC700E0C395EF0EB;
// CircleScript
struct CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Danger10
struct Danger10_t85C377E517F5BB153B297E7A485351F554FA2A3E;
// Danger11
struct Danger11_tB28118E9C45DB16E99B0E0468205517C779A9A94;
// Danger12
struct Danger12_t4A5CC5BB48CF31D663FA503D19E3CBC304C64518;
// Danger13
struct Danger13_tA7BCBDD6438D34B403F74435F91C9E31B83033C1;
// Danger14
struct Danger14_t5C3E3949458352554F36BF030EF41C58F9A90AFC;
// Danger15
struct Danger15_t480EE2B8F586E78A223F316A8AAD830D536F5861;
// Danger16
struct Danger16_t8C3563B7069C308F2A83B7378C0E8B280FA8B95C;
// Danger17
struct Danger17_t3ABBC9F283D04746335AC4D09D716509113B71A7;
// Danger18
struct Danger18_t57C5A6328EA7E8703EEF2A034328BE7F55DD87B6;
// Danger19
struct Danger19_t1EFB84E4C785A4987555F98281C17C0A3BAB9BAF;
// Danger20
struct Danger20_t54B573B0F14E4329F00BF215193B800987D844E2;
// Danger21
struct Danger21_tDF7BABB55D4C97F3B24C1FDD2C39D65023874852;
// Danger22
struct Danger22_t5DC0F6A4F3662F0F675F54C593371A3A9B98D7E4;
// Danger23
struct Danger23_t613FF91763834E9D473278F3498998CF5BD7D37E;
// Danger24
struct Danger24_tDBA047B5B4CDDBE9FAA1BF5FF9C305FBC37CE018;
// Danger25
struct Danger25_t2C240A61289A40FF7D86A11220816DD6B83EEC2E;
// Danger26
struct Danger26_t06620DDA172CCDE961A3C8DF610C9F2A74256EBD;
// Danger27
struct Danger27_tC32F2EC638FB1E81B10EB83B163BE1480E9C516D;
// Danger28
struct Danger28_tF2F55231EF51202579E57F2AD82752D7F887B9F8;
// Danger29
struct Danger29_t6BB1D20104A980C7DD5FACE90953232904B476CE;
// Danger30
struct Danger30_t8A1F1DDB523F2389C8823E70988D182B58879451;
// Danger31
struct Danger31_tF8EA1C6A452E7C911EFB6982DCACF77755188126;
// Danger32
struct Danger32_tE056DA6FEFC6C6990C133BB1FC4121915BAE1BE0;
// Danger35
struct Danger35_t2638164A7F9AFDB5783DC48EDBBEE622A2E5035A;
// Danger8
struct Danger8_t83A653E2A8B2B0E530682C9D2AEB249FE8EC9470;
// Danger9
struct Danger9_t0E8A3390AC0B2B381086A0FC94CB31917EAACAE2;
// DangerLevel13
struct DangerLevel13_tAD17BAF964DDCE7BE9C262198BFCA80E455ADFEA;
// DangerScript
struct DangerScript_t516FC39332417CFCA6ADE627101D170062EAE442;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Denemescripts
struct Denemescripts_t894E1CEB690EF4395FE65BF3EA8DBA15C5FE2CD8;
// DonenEngel
struct DonenEngel_t041D541B22477AA12A5261F9DA3921BEFEC67525;
// DonenZemin
struct DonenZemin_tF7641A2C08F00EF37F83D09C9CB59D113D7FF0C5;
// DonenZemin15
struct DonenZemin15_t7C709DF3A29E5B6F853319CF5512E5531AC5F3A4;
// DonenZemin5
struct DonenZemin5_t1F03B4D1046BED925A71C0719E7094221A74784F;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// FinishScript
struct FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C;
// FinishScript2
struct FinishScript2_tF83BB14AF75F0FB96CA83F950D1F04582407E225;
// FinishScript3
struct FinishScript3_t9E3F3F31B04935B86970C10BFC771A2C719DA521;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HareketliObje
struct HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t89509F94B902D18745453A608D4C947C2B314720;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_tDEBBC5263507E7F9D5745BC3B9885BCEEE63EE6D;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9;
// Karakter
struct Karakter_tF2D98047571D686D310D9564B69D8410347874A9;
// Level
struct Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93;
// LockSystem
struct LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuScript
struct MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SahneGecis
struct SahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Turn1
struct Turn1_tFC76FFA3D6031E595E0F9AA4E06F9AB6A5A33679;
// TurnDanger
struct TurnDanger_tB3244C400B69C0CF14C9FA7D7B51969CF6F17994;
// TurnDanger1
struct TurnDanger1_tD7D02B01985F25795D5437D3127FB9AFA78E41A7;
// TurnLeft
struct TurnLeft_t2962B74C031E172321D277D20219EC36F987846D;
// TurnRight
struct TurnRight_t94AC1DFA10613A7C9FD257E5F4A1030098DB9CFA;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// danger33
struct danger33_tE8A276FF63F47DB7169169F67AD871C75B9762D9;
// danger34
struct danger34_tC25FBA26ED1B84A95CD525E65A0814E7177ADD82;
// donenzemin2
struct donenzemin2_tBFD357CDE9870B164E9F324B16AA0F825CA826F1;
// donenzemin3
struct donenzemin3_t3497D929F23DBA8E71E5379CD67B90256EA6E620;
// harekeyliNesne
struct harekeyliNesne_t590A3B77917BAD48C13854462A5DE3E9D6F5E9C7;
// mazeTurn
struct mazeTurn_tF44DEE6037B27319045C500529456C5F7A246C24;
// musicMenu
struct musicMenu_t5DAD7AD71A79E0A35B8CDC64B69FA164BAEFB91C;
// musicVolume
struct musicVolume_t267B210FD77B91B8348C24082E7F1048EE4D07B5;
// rightLeft
struct rightLeft_tCB4B6FADF40F21AC610D03896FADCDC45FA869E3;
// AdManager/<>c
struct U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D;
// AdManager/<InsterstitialGosterCoroutine>d__18
struct U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F;
// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t73B690804B71062EA366B9EF731317DA6FE13907_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C;
IL2CPP_EXTERN_C String_t* _stringLiteral0260F12FCE640BC2BB89FD8551E6533DD41961AF;
IL2CPP_EXTERN_C String_t* _stringLiteral14CE35AEE7E6C85576616A5851117B295A2343C1;
IL2CPP_EXTERN_C String_t* _stringLiteral172D239F491E2C3D788CB795A5FCE77D85CB1913;
IL2CPP_EXTERN_C String_t* _stringLiteral2082974047A6094A1AF7B857532AB6BB4F2BDAE2;
IL2CPP_EXTERN_C String_t* _stringLiteral3158C0AA1B2FBDD48276A69BC83822C63C997CAA;
IL2CPP_EXTERN_C String_t* _stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347;
IL2CPP_EXTERN_C String_t* _stringLiteral64008DC3354788659E4680C8940205E4D94BB9B6;
IL2CPP_EXTERN_C String_t* _stringLiteral65BA91203A663E41B60DEDB3701C8CEF5DD2E1B8;
IL2CPP_EXTERN_C String_t* _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5;
IL2CPP_EXTERN_C String_t* _stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9;
IL2CPP_EXTERN_C String_t* _stringLiteral9C98D165EB43C9CB237802A099B3E8B96488B53D;
IL2CPP_EXTERN_C String_t* _stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E;
IL2CPP_EXTERN_C String_t* _stringLiteralA5817F8250B8E8982610A594079B47A218B61307;
IL2CPP_EXTERN_C String_t* _stringLiteralA871EEBB18B43F89F2DF30FAAD3D439C2FD64CE4;
IL2CPP_EXTERN_C String_t* _stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2;
IL2CPP_EXTERN_C String_t* _stringLiteralABFB43D5E5F90FB3352973159CCE2626B6F7F162;
IL2CPP_EXTERN_C String_t* _stringLiteralC6264F3E99DD53581133B065E278BB5734C025F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC679E6F696FDB89405933064A037E339D40182A0;
IL2CPP_EXTERN_C String_t* _stringLiteralD62E5E23E767269057CF5F9E166B52806CE08216;
IL2CPP_EXTERN_C String_t* _stringLiteralE33ED4C9934A8E0E3C21129BD34F4CF224E719F2;
IL2CPP_EXTERN_C String_t* _stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C;
IL2CPP_EXTERN_C String_t* _stringLiteralFB11585D92F213545FC6FD07A0A05B5E80E7E873;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdManager_InterstitialDelegate_m7FBD2E46581589787724D94A0DFE259C48309AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdManager_InterstitialYuklenemedi_mBC359E414A419B4A9653244586B23D44B930F089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mA382E7577B1B120AD708183BBC0E8157E692D3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mAB159CED4EA42F6E700527382D795CCD31EF293F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0_m0FCBC3187971F61471BF179A49471DE298CB26F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m77F12A63EB4FD22AA4D725B91DC135C20B32AE0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInsterstitialGosterCoroutineU3Ed__18_System_Collections_IEnumerator_Reset_m0D1336411CC1AB4CD4D8A7FF47A99DC565DB4CF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__9_0_m5848A93F2992BEDA50D6156DE489BCF37066D396_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____items_1)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__items_1() const { return ____items_1; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields, ____emptyArray_5)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLeavingApplication
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLeavingApplication_5;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_t6A9E5D0397FFF074250E6741C8F3D36C5381659D * ___OnPaidEvent_6;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdLoaded_1() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdLoaded_1)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_1() const { return ___OnAdLoaded_1; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_1() { return &___OnAdLoaded_1; }
	inline void set_OnAdLoaded_1(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_2() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdFailedToLoad_2)); }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * get_OnAdFailedToLoad_2() const { return ___OnAdFailedToLoad_2; }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** get_address_of_OnAdFailedToLoad_2() { return &___OnAdFailedToLoad_2; }
	inline void set_OnAdFailedToLoad_2(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * value)
	{
		___OnAdFailedToLoad_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_3() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdOpening_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_3() const { return ___OnAdOpening_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_3() { return &___OnAdOpening_3; }
	inline void set_OnAdOpening_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdClosed_4)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdLeavingApplication_5() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnAdLeavingApplication_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLeavingApplication_5() const { return ___OnAdLeavingApplication_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLeavingApplication_5() { return &___OnAdLeavingApplication_5; }
	inline void set_OnAdLeavingApplication_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLeavingApplication_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLeavingApplication_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_6() { return static_cast<int32_t>(offsetof(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9, ___OnPaidEvent_6)); }
	inline EventHandler_1_t6A9E5D0397FFF074250E6741C8F3D36C5381659D * get_OnPaidEvent_6() const { return ___OnPaidEvent_6; }
	inline EventHandler_1_t6A9E5D0397FFF074250E6741C8F3D36C5381659D ** get_address_of_OnPaidEvent_6() { return &___OnPaidEvent_6; }
	inline void set_OnPaidEvent_6(EventHandler_1_t6A9E5D0397FFF074250E6741C8F3D36C5381659D * value)
	{
		___OnPaidEvent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_6), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// AdManager/<>c
struct U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_StaticFields
{
public:
	// AdManager/<>c AdManager/<>c::<>9
	U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D * ___U3CU3E9_0;
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> AdManager/<>c::<>9__9_0
	Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * ___U3CU3E9__9_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_StaticFields, ___U3CU3E9__9_0_1)); }
	inline Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * get_U3CU3E9__9_0_1() const { return ___U3CU3E9__9_0_1; }
	inline Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 ** get_address_of_U3CU3E9__9_0_1() { return &___U3CU3E9__9_0_1; }
	inline void set_U3CU3E9__9_0_1(Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * value)
	{
		___U3CU3E9__9_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_1), (void*)value);
	}
};


// AdManager/<InsterstitialGosterCoroutine>d__18
struct U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F  : public RuntimeObject
{
public:
	// System.Int32 AdManager/<InsterstitialGosterCoroutine>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AdManager/<InsterstitialGosterCoroutine>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AdManager AdManager/<InsterstitialGosterCoroutine>d__18::<>4__this
	AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * ___U3CU3E4__this_2;
	// System.Single AdManager/<InsterstitialGosterCoroutine>d__18::<istekTimeoutAni>5__2
	float ___U3CistekTimeoutAniU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F, ___U3CU3E4__this_2)); }
	inline AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CistekTimeoutAniU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F, ___U3CistekTimeoutAniU3E5__2_3)); }
	inline float get_U3CistekTimeoutAniU3E5__2_3() const { return ___U3CistekTimeoutAniU3E5__2_3; }
	inline float* get_address_of_U3CistekTimeoutAniU3E5__2_3() { return &___U3CistekTimeoutAniU3E5__2_3; }
	inline void set_U3CistekTimeoutAniU3E5__2_3(float value)
	{
		___U3CistekTimeoutAniU3E5__2_3 = value;
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String GoogleMobileAds.Api.AdFailedToLoadEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Nullable`1<System.DateTime>
struct Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D 
{
public:
	// T System.Nullable`1::value
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___value_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_value_0() const { return ___value_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// GoogleMobileAds.Api.Gender
struct Gender_tA04F65E8F88399153EFE8092D7F4184DAD0CB48A 
{
public:
	// System.Int32 GoogleMobileAds.Api.Gender::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Gender_tA04F65E8F88399153EFE8092D7F4184DAD0CB48A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<GoogleMobileAds.Api.Gender>
struct Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t73B690804B71062EA366B9EF731317DA6FE13907  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::<TestDevices>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CTestDevicesU3Ek__BackingField_2;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_3;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::<Birthday>k__BackingField
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___U3CBirthdayU3Ek__BackingField_4;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::<Gender>k__BackingField
	Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  ___U3CGenderU3Ek__BackingField_5;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * ___U3CMediationExtrasU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CTestDevicesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CTestDevicesU3Ek__BackingField_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CTestDevicesU3Ek__BackingField_2() const { return ___U3CTestDevicesU3Ek__BackingField_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CTestDevicesU3Ek__BackingField_2() { return &___U3CTestDevicesU3Ek__BackingField_2; }
	inline void set_U3CTestDevicesU3Ek__BackingField_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CTestDevicesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestDevicesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CKeywordsU3Ek__BackingField_3)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_3() const { return ___U3CKeywordsU3Ek__BackingField_3; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_3() { return &___U3CKeywordsU3Ek__BackingField_3; }
	inline void set_U3CKeywordsU3Ek__BackingField_3(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBirthdayU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CBirthdayU3Ek__BackingField_4)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_U3CBirthdayU3Ek__BackingField_4() const { return ___U3CBirthdayU3Ek__BackingField_4; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_U3CBirthdayU3Ek__BackingField_4() { return &___U3CBirthdayU3Ek__BackingField_4; }
	inline void set_U3CBirthdayU3Ek__BackingField_4(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___U3CBirthdayU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CGenderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CGenderU3Ek__BackingField_5)); }
	inline Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  get_U3CGenderU3Ek__BackingField_5() const { return ___U3CGenderU3Ek__BackingField_5; }
	inline Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E * get_address_of_U3CGenderU3Ek__BackingField_5() { return &___U3CGenderU3Ek__BackingField_5; }
	inline void set_U3CGenderU3Ek__BackingField_5(Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  value)
	{
		___U3CGenderU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() const { return ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() { return &___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6; }
	inline void set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CExtrasU3Ek__BackingField_7)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_7() const { return ___U3CExtrasU3Ek__BackingField_7; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_7() { return &___U3CExtrasU3Ek__BackingField_7; }
	inline void set_U3CExtrasU3Ek__BackingField_7(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CMediationExtrasU3Ek__BackingField_8)); }
	inline List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * get_U3CMediationExtrasU3Ek__BackingField_8() const { return ___U3CMediationExtrasU3Ek__BackingField_8; }
	inline List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E ** get_address_of_U3CMediationExtrasU3Ek__BackingField_8() { return &___U3CMediationExtrasU3Ek__BackingField_8; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_8(List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_8), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<TestDevices>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CTestDevicesU3Ek__BackingField_0;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest/Builder::<Birthday>k__BackingField
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___U3CBirthdayU3Ek__BackingField_2;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest/Builder::<Gender>k__BackingField
	Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  ___U3CGenderU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest/Builder::<ChildDirectedTreatmentTag>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CChildDirectedTreatmentTagU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::<MediationExtras>k__BackingField
	List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * ___U3CMediationExtrasU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTestDevicesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CTestDevicesU3Ek__BackingField_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CTestDevicesU3Ek__BackingField_0() const { return ___U3CTestDevicesU3Ek__BackingField_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CTestDevicesU3Ek__BackingField_0() { return &___U3CTestDevicesU3Ek__BackingField_0; }
	inline void set_U3CTestDevicesU3Ek__BackingField_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CTestDevicesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestDevicesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBirthdayU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CBirthdayU3Ek__BackingField_2)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_U3CBirthdayU3Ek__BackingField_2() const { return ___U3CBirthdayU3Ek__BackingField_2; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_U3CBirthdayU3Ek__BackingField_2() { return &___U3CBirthdayU3Ek__BackingField_2; }
	inline void set_U3CBirthdayU3Ek__BackingField_2(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___U3CBirthdayU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CGenderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CGenderU3Ek__BackingField_3)); }
	inline Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  get_U3CGenderU3Ek__BackingField_3() const { return ___U3CGenderU3Ek__BackingField_3; }
	inline Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E * get_address_of_U3CGenderU3Ek__BackingField_3() { return &___U3CGenderU3Ek__BackingField_3; }
	inline void set_U3CGenderU3Ek__BackingField_3(Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  value)
	{
		___U3CGenderU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CChildDirectedTreatmentTagU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CChildDirectedTreatmentTagU3Ek__BackingField_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CChildDirectedTreatmentTagU3Ek__BackingField_4() const { return ___U3CChildDirectedTreatmentTagU3Ek__BackingField_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CChildDirectedTreatmentTagU3Ek__BackingField_4() { return &___U3CChildDirectedTreatmentTagU3Ek__BackingField_4; }
	inline void set_U3CChildDirectedTreatmentTagU3Ek__BackingField_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CChildDirectedTreatmentTagU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CExtrasU3Ek__BackingField_5)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_5() const { return ___U3CExtrasU3Ek__BackingField_5; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_5() { return &___U3CExtrasU3Ek__BackingField_5; }
	inline void set_U3CExtrasU3Ek__BackingField_5(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CMediationExtrasU3Ek__BackingField_6)); }
	inline List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * get_U3CMediationExtrasU3Ek__BackingField_6() const { return ___U3CMediationExtrasU3Ek__BackingField_6; }
	inline List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E ** get_address_of_U3CMediationExtrasU3Ek__BackingField_6() { return &___U3CMediationExtrasU3Ek__BackingField_6; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_6(List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_6), (void*)value);
	}
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AdManager
struct AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String AdManager::interstitialKimligi
	String_t* ___interstitialKimligi_5;
	// System.Boolean AdManager::testModu
	bool ___testModu_6;
	// System.String AdManager::testDeviceID
	String_t* ___testDeviceID_7;
	// System.Boolean AdManager::cocuklaraYonelikReklamGoster
	bool ___cocuklaraYonelikReklamGoster_8;
	// GoogleMobileAds.Api.InterstitialAd AdManager::interstitialReklam
	InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * ___interstitialReklam_9;
	// System.Single AdManager::interstitialIstekTimeoutZamani
	float ___interstitialIstekTimeoutZamani_10;
	// System.Single AdManager::interstitialOtomatikYeniIstekZamani
	float ___interstitialOtomatikYeniIstekZamani_11;
	// System.Collections.IEnumerator AdManager::interstitialGosterCoroutine
	RuntimeObject* ___interstitialGosterCoroutine_12;

public:
	inline static int32_t get_offset_of_interstitialKimligi_5() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ___interstitialKimligi_5)); }
	inline String_t* get_interstitialKimligi_5() const { return ___interstitialKimligi_5; }
	inline String_t** get_address_of_interstitialKimligi_5() { return &___interstitialKimligi_5; }
	inline void set_interstitialKimligi_5(String_t* value)
	{
		___interstitialKimligi_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interstitialKimligi_5), (void*)value);
	}

	inline static int32_t get_offset_of_testModu_6() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ___testModu_6)); }
	inline bool get_testModu_6() const { return ___testModu_6; }
	inline bool* get_address_of_testModu_6() { return &___testModu_6; }
	inline void set_testModu_6(bool value)
	{
		___testModu_6 = value;
	}

	inline static int32_t get_offset_of_testDeviceID_7() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ___testDeviceID_7)); }
	inline String_t* get_testDeviceID_7() const { return ___testDeviceID_7; }
	inline String_t** get_address_of_testDeviceID_7() { return &___testDeviceID_7; }
	inline void set_testDeviceID_7(String_t* value)
	{
		___testDeviceID_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testDeviceID_7), (void*)value);
	}

	inline static int32_t get_offset_of_cocuklaraYonelikReklamGoster_8() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ___cocuklaraYonelikReklamGoster_8)); }
	inline bool get_cocuklaraYonelikReklamGoster_8() const { return ___cocuklaraYonelikReklamGoster_8; }
	inline bool* get_address_of_cocuklaraYonelikReklamGoster_8() { return &___cocuklaraYonelikReklamGoster_8; }
	inline void set_cocuklaraYonelikReklamGoster_8(bool value)
	{
		___cocuklaraYonelikReklamGoster_8 = value;
	}

	inline static int32_t get_offset_of_interstitialReklam_9() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ___interstitialReklam_9)); }
	inline InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * get_interstitialReklam_9() const { return ___interstitialReklam_9; }
	inline InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 ** get_address_of_interstitialReklam_9() { return &___interstitialReklam_9; }
	inline void set_interstitialReklam_9(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * value)
	{
		___interstitialReklam_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interstitialReklam_9), (void*)value);
	}

	inline static int32_t get_offset_of_interstitialIstekTimeoutZamani_10() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ___interstitialIstekTimeoutZamani_10)); }
	inline float get_interstitialIstekTimeoutZamani_10() const { return ___interstitialIstekTimeoutZamani_10; }
	inline float* get_address_of_interstitialIstekTimeoutZamani_10() { return &___interstitialIstekTimeoutZamani_10; }
	inline void set_interstitialIstekTimeoutZamani_10(float value)
	{
		___interstitialIstekTimeoutZamani_10 = value;
	}

	inline static int32_t get_offset_of_interstitialOtomatikYeniIstekZamani_11() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ___interstitialOtomatikYeniIstekZamani_11)); }
	inline float get_interstitialOtomatikYeniIstekZamani_11() const { return ___interstitialOtomatikYeniIstekZamani_11; }
	inline float* get_address_of_interstitialOtomatikYeniIstekZamani_11() { return &___interstitialOtomatikYeniIstekZamani_11; }
	inline void set_interstitialOtomatikYeniIstekZamani_11(float value)
	{
		___interstitialOtomatikYeniIstekZamani_11 = value;
	}

	inline static int32_t get_offset_of_interstitialGosterCoroutine_12() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8, ___interstitialGosterCoroutine_12)); }
	inline RuntimeObject* get_interstitialGosterCoroutine_12() const { return ___interstitialGosterCoroutine_12; }
	inline RuntimeObject** get_address_of_interstitialGosterCoroutine_12() { return &___interstitialGosterCoroutine_12; }
	inline void set_interstitialGosterCoroutine_12(RuntimeObject* value)
	{
		___interstitialGosterCoroutine_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interstitialGosterCoroutine_12), (void*)value);
	}
};

struct AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields
{
public:
	// AdManager AdManager::instance
	AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields, ___instance_4)); }
	inline AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * get_instance_4() const { return ___instance_4; }
	inline AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BackAndExit
struct BackAndExit_tBCE12BE4E7E0019A08FF06DC56FE8BF556FD0257  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// BackManager
struct BackManager_t710361142316A19AFCD8F59F4DF29070EF45A3AF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// CircleEnabled
struct CircleEnabled_tDA2D71758A6A9A2BF0D0DC59AC700E0C395EF0EB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// CircleScript
struct CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CircleScript::Panel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Panel_4;

public:
	inline static int32_t get_offset_of_Panel_4() { return static_cast<int32_t>(offsetof(CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251, ___Panel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Panel_4() const { return ___Panel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Panel_4() { return &___Panel_4; }
	inline void set_Panel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Panel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Panel_4), (void*)value);
	}
};


// Danger10
struct Danger10_t85C377E517F5BB153B297E7A485351F554FA2A3E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger11
struct Danger11_tB28118E9C45DB16E99B0E0468205517C779A9A94  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger12
struct Danger12_t4A5CC5BB48CF31D663FA503D19E3CBC304C64518  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger13
struct Danger13_tA7BCBDD6438D34B403F74435F91C9E31B83033C1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger14
struct Danger14_t5C3E3949458352554F36BF030EF41C58F9A90AFC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger15
struct Danger15_t480EE2B8F586E78A223F316A8AAD830D536F5861  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger16
struct Danger16_t8C3563B7069C308F2A83B7378C0E8B280FA8B95C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger17
struct Danger17_t3ABBC9F283D04746335AC4D09D716509113B71A7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger18
struct Danger18_t57C5A6328EA7E8703EEF2A034328BE7F55DD87B6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger19
struct Danger19_t1EFB84E4C785A4987555F98281C17C0A3BAB9BAF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger20
struct Danger20_t54B573B0F14E4329F00BF215193B800987D844E2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger21
struct Danger21_tDF7BABB55D4C97F3B24C1FDD2C39D65023874852  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger22
struct Danger22_t5DC0F6A4F3662F0F675F54C593371A3A9B98D7E4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger23
struct Danger23_t613FF91763834E9D473278F3498998CF5BD7D37E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger24
struct Danger24_tDBA047B5B4CDDBE9FAA1BF5FF9C305FBC37CE018  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger25
struct Danger25_t2C240A61289A40FF7D86A11220816DD6B83EEC2E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger26
struct Danger26_t06620DDA172CCDE961A3C8DF610C9F2A74256EBD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger27
struct Danger27_tC32F2EC638FB1E81B10EB83B163BE1480E9C516D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger28
struct Danger28_tF2F55231EF51202579E57F2AD82752D7F887B9F8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger29
struct Danger29_t6BB1D20104A980C7DD5FACE90953232904B476CE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger30
struct Danger30_t8A1F1DDB523F2389C8823E70988D182B58879451  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger31
struct Danger31_tF8EA1C6A452E7C911EFB6982DCACF77755188126  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger32
struct Danger32_tE056DA6FEFC6C6990C133BB1FC4121915BAE1BE0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger35
struct Danger35_t2638164A7F9AFDB5783DC48EDBBEE622A2E5035A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger8
struct Danger8_t83A653E2A8B2B0E530682C9D2AEB249FE8EC9470  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Danger9
struct Danger9_t0E8A3390AC0B2B381086A0FC94CB31917EAACAE2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DangerLevel13
struct DangerLevel13_tAD17BAF964DDCE7BE9C262198BFCA80E455ADFEA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DangerScript
struct DangerScript_t516FC39332417CFCA6ADE627101D170062EAE442  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Denemescripts
struct Denemescripts_t894E1CEB690EF4395FE65BF3EA8DBA15C5FE2CD8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Denemescripts::alli
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___alli_4;

public:
	inline static int32_t get_offset_of_alli_4() { return static_cast<int32_t>(offsetof(Denemescripts_t894E1CEB690EF4395FE65BF3EA8DBA15C5FE2CD8, ___alli_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_alli_4() const { return ___alli_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_alli_4() { return &___alli_4; }
	inline void set_alli_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___alli_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alli_4), (void*)value);
	}
};


// DonenEngel
struct DonenEngel_t041D541B22477AA12A5261F9DA3921BEFEC67525  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DonenEngel::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(DonenEngel_t041D541B22477AA12A5261F9DA3921BEFEC67525, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};


// DonenZemin
struct DonenZemin_tF7641A2C08F00EF37F83D09C9CB59D113D7FF0C5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DonenZemin::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(DonenZemin_tF7641A2C08F00EF37F83D09C9CB59D113D7FF0C5, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};


// DonenZemin15
struct DonenZemin15_t7C709DF3A29E5B6F853319CF5512E5531AC5F3A4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DonenZemin15::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(DonenZemin15_t7C709DF3A29E5B6F853319CF5512E5531AC5F3A4, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};


// DonenZemin5
struct DonenZemin5_t1F03B4D1046BED925A71C0719E7094221A74784F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DonenZemin5::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(DonenZemin5_t1F03B4D1046BED925A71C0719E7094221A74784F, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};


// FinishScript
struct FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 FinishScript::portalGate1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___portalGate1_4;
	// UnityEngine.Vector3 FinishScript::portalGate2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___portalGate2_5;
	// UnityEngine.Transform FinishScript::PortalGate1End
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___PortalGate1End_6;
	// UnityEngine.Transform FinishScript::PortalGate2End
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___PortalGate2End_7;
	// System.Int32 FinishScript::toplananItem
	int32_t ___toplananItem_8;
	// UnityEngine.UI.Text FinishScript::skor
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___skor_9;
	// UnityEngine.AudioClip[] FinishScript::sesler
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___sesler_10;

public:
	inline static int32_t get_offset_of_portalGate1_4() { return static_cast<int32_t>(offsetof(FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C, ___portalGate1_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_portalGate1_4() const { return ___portalGate1_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_portalGate1_4() { return &___portalGate1_4; }
	inline void set_portalGate1_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___portalGate1_4 = value;
	}

	inline static int32_t get_offset_of_portalGate2_5() { return static_cast<int32_t>(offsetof(FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C, ___portalGate2_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_portalGate2_5() const { return ___portalGate2_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_portalGate2_5() { return &___portalGate2_5; }
	inline void set_portalGate2_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___portalGate2_5 = value;
	}

	inline static int32_t get_offset_of_PortalGate1End_6() { return static_cast<int32_t>(offsetof(FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C, ___PortalGate1End_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_PortalGate1End_6() const { return ___PortalGate1End_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_PortalGate1End_6() { return &___PortalGate1End_6; }
	inline void set_PortalGate1End_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___PortalGate1End_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PortalGate1End_6), (void*)value);
	}

	inline static int32_t get_offset_of_PortalGate2End_7() { return static_cast<int32_t>(offsetof(FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C, ___PortalGate2End_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_PortalGate2End_7() const { return ___PortalGate2End_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_PortalGate2End_7() { return &___PortalGate2End_7; }
	inline void set_PortalGate2End_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___PortalGate2End_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PortalGate2End_7), (void*)value);
	}

	inline static int32_t get_offset_of_toplananItem_8() { return static_cast<int32_t>(offsetof(FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C, ___toplananItem_8)); }
	inline int32_t get_toplananItem_8() const { return ___toplananItem_8; }
	inline int32_t* get_address_of_toplananItem_8() { return &___toplananItem_8; }
	inline void set_toplananItem_8(int32_t value)
	{
		___toplananItem_8 = value;
	}

	inline static int32_t get_offset_of_skor_9() { return static_cast<int32_t>(offsetof(FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C, ___skor_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_skor_9() const { return ___skor_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_skor_9() { return &___skor_9; }
	inline void set_skor_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___skor_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skor_9), (void*)value);
	}

	inline static int32_t get_offset_of_sesler_10() { return static_cast<int32_t>(offsetof(FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C, ___sesler_10)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_sesler_10() const { return ___sesler_10; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_sesler_10() { return &___sesler_10; }
	inline void set_sesler_10(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___sesler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sesler_10), (void*)value);
	}
};


// FinishScript2
struct FinishScript2_tF83BB14AF75F0FB96CA83F950D1F04582407E225  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 FinishScript2::toplananItem
	int32_t ___toplananItem_4;
	// UnityEngine.UI.Text FinishScript2::skor
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___skor_5;
	// UnityEngine.AudioClip[] FinishScript2::sesler
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___sesler_6;

public:
	inline static int32_t get_offset_of_toplananItem_4() { return static_cast<int32_t>(offsetof(FinishScript2_tF83BB14AF75F0FB96CA83F950D1F04582407E225, ___toplananItem_4)); }
	inline int32_t get_toplananItem_4() const { return ___toplananItem_4; }
	inline int32_t* get_address_of_toplananItem_4() { return &___toplananItem_4; }
	inline void set_toplananItem_4(int32_t value)
	{
		___toplananItem_4 = value;
	}

	inline static int32_t get_offset_of_skor_5() { return static_cast<int32_t>(offsetof(FinishScript2_tF83BB14AF75F0FB96CA83F950D1F04582407E225, ___skor_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_skor_5() const { return ___skor_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_skor_5() { return &___skor_5; }
	inline void set_skor_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___skor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skor_5), (void*)value);
	}

	inline static int32_t get_offset_of_sesler_6() { return static_cast<int32_t>(offsetof(FinishScript2_tF83BB14AF75F0FB96CA83F950D1F04582407E225, ___sesler_6)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_sesler_6() const { return ___sesler_6; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_sesler_6() { return &___sesler_6; }
	inline void set_sesler_6(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___sesler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sesler_6), (void*)value);
	}
};


// FinishScript3
struct FinishScript3_t9E3F3F31B04935B86970C10BFC771A2C719DA521  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 FinishScript3::portalGate1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___portalGate1_4;
	// UnityEngine.Transform FinishScript3::PortalGate1End
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___PortalGate1End_5;
	// System.Int32 FinishScript3::toplananItem
	int32_t ___toplananItem_6;
	// UnityEngine.UI.Text FinishScript3::skor
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___skor_7;
	// UnityEngine.AudioClip[] FinishScript3::sesler
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___sesler_8;

public:
	inline static int32_t get_offset_of_portalGate1_4() { return static_cast<int32_t>(offsetof(FinishScript3_t9E3F3F31B04935B86970C10BFC771A2C719DA521, ___portalGate1_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_portalGate1_4() const { return ___portalGate1_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_portalGate1_4() { return &___portalGate1_4; }
	inline void set_portalGate1_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___portalGate1_4 = value;
	}

	inline static int32_t get_offset_of_PortalGate1End_5() { return static_cast<int32_t>(offsetof(FinishScript3_t9E3F3F31B04935B86970C10BFC771A2C719DA521, ___PortalGate1End_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_PortalGate1End_5() const { return ___PortalGate1End_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_PortalGate1End_5() { return &___PortalGate1End_5; }
	inline void set_PortalGate1End_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___PortalGate1End_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PortalGate1End_5), (void*)value);
	}

	inline static int32_t get_offset_of_toplananItem_6() { return static_cast<int32_t>(offsetof(FinishScript3_t9E3F3F31B04935B86970C10BFC771A2C719DA521, ___toplananItem_6)); }
	inline int32_t get_toplananItem_6() const { return ___toplananItem_6; }
	inline int32_t* get_address_of_toplananItem_6() { return &___toplananItem_6; }
	inline void set_toplananItem_6(int32_t value)
	{
		___toplananItem_6 = value;
	}

	inline static int32_t get_offset_of_skor_7() { return static_cast<int32_t>(offsetof(FinishScript3_t9E3F3F31B04935B86970C10BFC771A2C719DA521, ___skor_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_skor_7() const { return ___skor_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_skor_7() { return &___skor_7; }
	inline void set_skor_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___skor_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skor_7), (void*)value);
	}

	inline static int32_t get_offset_of_sesler_8() { return static_cast<int32_t>(offsetof(FinishScript3_t9E3F3F31B04935B86970C10BFC771A2C719DA521, ___sesler_8)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_sesler_8() const { return ___sesler_8; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_sesler_8() { return &___sesler_8; }
	inline void set_sesler_8(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___sesler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sesler_8), (void*)value);
	}
};


// HareketliObje
struct HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform[] HareketliObje::waypoints
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___waypoints_4;
	// System.Single HareketliObje::speed
	float ___speed_5;
	// System.Boolean HareketliObje::randomSystem
	bool ___randomSystem_6;
	// System.Int32 HareketliObje::destinationNumber
	int32_t ___destinationNumber_7;

public:
	inline static int32_t get_offset_of_waypoints_4() { return static_cast<int32_t>(offsetof(HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E, ___waypoints_4)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_waypoints_4() const { return ___waypoints_4; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_waypoints_4() { return &___waypoints_4; }
	inline void set_waypoints_4(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___waypoints_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waypoints_4), (void*)value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_randomSystem_6() { return static_cast<int32_t>(offsetof(HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E, ___randomSystem_6)); }
	inline bool get_randomSystem_6() const { return ___randomSystem_6; }
	inline bool* get_address_of_randomSystem_6() { return &___randomSystem_6; }
	inline void set_randomSystem_6(bool value)
	{
		___randomSystem_6 = value;
	}

	inline static int32_t get_offset_of_destinationNumber_7() { return static_cast<int32_t>(offsetof(HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E, ___destinationNumber_7)); }
	inline int32_t get_destinationNumber_7() const { return ___destinationNumber_7; }
	inline int32_t* get_address_of_destinationNumber_7() { return &___destinationNumber_7; }
	inline void set_destinationNumber_7(int32_t value)
	{
		___destinationNumber_7 = value;
	}
};


// Karakter
struct Karakter_tF2D98047571D686D310D9564B69D8410347874A9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Karakter::bolumSonu_P
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bolumSonu_P_4;
	// System.Int32 Karakter::toplananItem
	int32_t ___toplananItem_5;
	// SahneGecis Karakter::sahneGecis
	SahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0 * ___sahneGecis_6;

public:
	inline static int32_t get_offset_of_bolumSonu_P_4() { return static_cast<int32_t>(offsetof(Karakter_tF2D98047571D686D310D9564B69D8410347874A9, ___bolumSonu_P_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bolumSonu_P_4() const { return ___bolumSonu_P_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bolumSonu_P_4() { return &___bolumSonu_P_4; }
	inline void set_bolumSonu_P_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bolumSonu_P_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bolumSonu_P_4), (void*)value);
	}

	inline static int32_t get_offset_of_toplananItem_5() { return static_cast<int32_t>(offsetof(Karakter_tF2D98047571D686D310D9564B69D8410347874A9, ___toplananItem_5)); }
	inline int32_t get_toplananItem_5() const { return ___toplananItem_5; }
	inline int32_t* get_address_of_toplananItem_5() { return &___toplananItem_5; }
	inline void set_toplananItem_5(int32_t value)
	{
		___toplananItem_5 = value;
	}

	inline static int32_t get_offset_of_sahneGecis_6() { return static_cast<int32_t>(offsetof(Karakter_tF2D98047571D686D310D9564B69D8410347874A9, ___sahneGecis_6)); }
	inline SahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0 * get_sahneGecis_6() const { return ___sahneGecis_6; }
	inline SahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0 ** get_address_of_sahneGecis_6() { return &___sahneGecis_6; }
	inline void set_sahneGecis_6(SahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0 * value)
	{
		___sahneGecis_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sahneGecis_6), (void*)value);
	}
};


// Level
struct Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Level::levelNumber
	int32_t ___levelNumber_4;
	// UnityEngine.UI.Button Level::levelButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___levelButton_5;
	// UnityEngine.GameObject[] Level::stars
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___stars_6;
	// System.Int32 Level::levelStarCount
	int32_t ___levelStarCount_7;

public:
	inline static int32_t get_offset_of_levelNumber_4() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___levelNumber_4)); }
	inline int32_t get_levelNumber_4() const { return ___levelNumber_4; }
	inline int32_t* get_address_of_levelNumber_4() { return &___levelNumber_4; }
	inline void set_levelNumber_4(int32_t value)
	{
		___levelNumber_4 = value;
	}

	inline static int32_t get_offset_of_levelButton_5() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___levelButton_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_levelButton_5() const { return ___levelButton_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_levelButton_5() { return &___levelButton_5; }
	inline void set_levelButton_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___levelButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_stars_6() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___stars_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_stars_6() const { return ___stars_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_stars_6() { return &___stars_6; }
	inline void set_stars_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___stars_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stars_6), (void*)value);
	}

	inline static int32_t get_offset_of_levelStarCount_7() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___levelStarCount_7)); }
	inline int32_t get_levelStarCount_7() const { return ___levelStarCount_7; }
	inline int32_t* get_address_of_levelStarCount_7() { return &___levelStarCount_7; }
	inline void set_levelStarCount_7(int32_t value)
	{
		___levelStarCount_7 = value;
	}
};


// LockSystem
struct LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> LockSystem::leveller
	List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * ___leveller_4;
	// System.String LockSystem::yildizSayisi_S
	String_t* ___yildizSayisi_S_5;
	// System.String[] LockSystem::yeniYildizlar
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___yeniYildizlar_6;

public:
	inline static int32_t get_offset_of_leveller_4() { return static_cast<int32_t>(offsetof(LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9, ___leveller_4)); }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * get_leveller_4() const { return ___leveller_4; }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E ** get_address_of_leveller_4() { return &___leveller_4; }
	inline void set_leveller_4(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * value)
	{
		___leveller_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leveller_4), (void*)value);
	}

	inline static int32_t get_offset_of_yildizSayisi_S_5() { return static_cast<int32_t>(offsetof(LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9, ___yildizSayisi_S_5)); }
	inline String_t* get_yildizSayisi_S_5() const { return ___yildizSayisi_S_5; }
	inline String_t** get_address_of_yildizSayisi_S_5() { return &___yildizSayisi_S_5; }
	inline void set_yildizSayisi_S_5(String_t* value)
	{
		___yildizSayisi_S_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yildizSayisi_S_5), (void*)value);
	}

	inline static int32_t get_offset_of_yeniYildizlar_6() { return static_cast<int32_t>(offsetof(LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9, ___yeniYildizlar_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_yeniYildizlar_6() const { return ___yeniYildizlar_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_yeniYildizlar_6() { return &___yeniYildizlar_6; }
	inline void set_yeniYildizlar_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___yeniYildizlar_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yeniYildizlar_6), (void*)value);
	}
};


// MenuScript
struct MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SahneGecis
struct SahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Turn1
struct Turn1_tFC76FFA3D6031E595E0F9AA4E06F9AB6A5A33679  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Turn1::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(Turn1_tFC76FFA3D6031E595E0F9AA4E06F9AB6A5A33679, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};


// TurnDanger
struct TurnDanger_tB3244C400B69C0CF14C9FA7D7B51969CF6F17994  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TurnDanger::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(TurnDanger_tB3244C400B69C0CF14C9FA7D7B51969CF6F17994, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};


// TurnDanger1
struct TurnDanger1_tD7D02B01985F25795D5437D3127FB9AFA78E41A7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TurnDanger1::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(TurnDanger1_tD7D02B01985F25795D5437D3127FB9AFA78E41A7, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};


// TurnLeft
struct TurnLeft_t2962B74C031E172321D277D20219EC36F987846D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// TurnRight
struct TurnRight_t94AC1DFA10613A7C9FD257E5F4A1030098DB9CFA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TurnRight::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(TurnRight_t94AC1DFA10613A7C9FD257E5F4A1030098DB9CFA, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// danger33
struct danger33_tE8A276FF63F47DB7169169F67AD871C75B9762D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// danger34
struct danger34_tC25FBA26ED1B84A95CD525E65A0814E7177ADD82  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// donenzemin2
struct donenzemin2_tBFD357CDE9870B164E9F324B16AA0F825CA826F1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single donenzemin2::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(donenzemin2_tBFD357CDE9870B164E9F324B16AA0F825CA826F1, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};


// donenzemin3
struct donenzemin3_t3497D929F23DBA8E71E5379CD67B90256EA6E620  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single donenzemin3::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(donenzemin3_t3497D929F23DBA8E71E5379CD67B90256EA6E620, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};


// harekeyliNesne
struct harekeyliNesne_t590A3B77917BAD48C13854462A5DE3E9D6F5E9C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single harekeyliNesne::speed
	float ___speed_4;
	// UnityEngine.Vector3 harekeyliNesne::startPos1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPos1_5;
	// UnityEngine.Vector3 harekeyliNesne::startPos2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPos2_6;
	// UnityEngine.Transform harekeyliNesne::currentPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___currentPoint_7;
	// UnityEngine.Transform harekeyliNesne::nextPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___nextPoint_8;
	// UnityEngine.GameObject harekeyliNesne::platform
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___platform_9;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(harekeyliNesne_t590A3B77917BAD48C13854462A5DE3E9D6F5E9C7, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_startPos1_5() { return static_cast<int32_t>(offsetof(harekeyliNesne_t590A3B77917BAD48C13854462A5DE3E9D6F5E9C7, ___startPos1_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPos1_5() const { return ___startPos1_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPos1_5() { return &___startPos1_5; }
	inline void set_startPos1_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPos1_5 = value;
	}

	inline static int32_t get_offset_of_startPos2_6() { return static_cast<int32_t>(offsetof(harekeyliNesne_t590A3B77917BAD48C13854462A5DE3E9D6F5E9C7, ___startPos2_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPos2_6() const { return ___startPos2_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPos2_6() { return &___startPos2_6; }
	inline void set_startPos2_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPos2_6 = value;
	}

	inline static int32_t get_offset_of_currentPoint_7() { return static_cast<int32_t>(offsetof(harekeyliNesne_t590A3B77917BAD48C13854462A5DE3E9D6F5E9C7, ___currentPoint_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_currentPoint_7() const { return ___currentPoint_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_currentPoint_7() { return &___currentPoint_7; }
	inline void set_currentPoint_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___currentPoint_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPoint_7), (void*)value);
	}

	inline static int32_t get_offset_of_nextPoint_8() { return static_cast<int32_t>(offsetof(harekeyliNesne_t590A3B77917BAD48C13854462A5DE3E9D6F5E9C7, ___nextPoint_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_nextPoint_8() const { return ___nextPoint_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_nextPoint_8() { return &___nextPoint_8; }
	inline void set_nextPoint_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___nextPoint_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextPoint_8), (void*)value);
	}

	inline static int32_t get_offset_of_platform_9() { return static_cast<int32_t>(offsetof(harekeyliNesne_t590A3B77917BAD48C13854462A5DE3E9D6F5E9C7, ___platform_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_platform_9() const { return ___platform_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_platform_9() { return &___platform_9; }
	inline void set_platform_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___platform_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platform_9), (void*)value);
	}
};


// mazeTurn
struct mazeTurn_tF44DEE6037B27319045C500529456C5F7A246C24  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 mazeTurn::movementSpeed
	int32_t ___movementSpeed_4;

public:
	inline static int32_t get_offset_of_movementSpeed_4() { return static_cast<int32_t>(offsetof(mazeTurn_tF44DEE6037B27319045C500529456C5F7A246C24, ___movementSpeed_4)); }
	inline int32_t get_movementSpeed_4() const { return ___movementSpeed_4; }
	inline int32_t* get_address_of_movementSpeed_4() { return &___movementSpeed_4; }
	inline void set_movementSpeed_4(int32_t value)
	{
		___movementSpeed_4 = value;
	}
};


// musicMenu
struct musicMenu_t5DAD7AD71A79E0A35B8CDC64B69FA164BAEFB91C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// musicVolume
struct musicVolume_t267B210FD77B91B8348C24082E7F1048EE4D07B5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text musicVolume::VolumeAmount
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___VolumeAmount_4;
	// UnityEngine.UI.Slider musicVolume::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_5;

public:
	inline static int32_t get_offset_of_VolumeAmount_4() { return static_cast<int32_t>(offsetof(musicVolume_t267B210FD77B91B8348C24082E7F1048EE4D07B5, ___VolumeAmount_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_VolumeAmount_4() const { return ___VolumeAmount_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_VolumeAmount_4() { return &___VolumeAmount_4; }
	inline void set_VolumeAmount_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___VolumeAmount_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VolumeAmount_4), (void*)value);
	}

	inline static int32_t get_offset_of_slider_5() { return static_cast<int32_t>(offsetof(musicVolume_t267B210FD77B91B8348C24082E7F1048EE4D07B5, ___slider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_5() const { return ___slider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_5() { return &___slider_5; }
	inline void set_slider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_5), (void*)value);
	}
};


// rightLeft
struct rightLeft_tCB4B6FADF40F21AC610D03896FADCDC45FA869E3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single rightLeft::speed
	float ___speed_4;
	// UnityEngine.Vector3 rightLeft::startPos1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPos1_5;
	// UnityEngine.Vector3 rightLeft::startPos2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPos2_6;
	// UnityEngine.Transform rightLeft::currentPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___currentPoint_7;
	// UnityEngine.Transform rightLeft::nextPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___nextPoint_8;
	// UnityEngine.GameObject rightLeft::platform
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___platform_9;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(rightLeft_tCB4B6FADF40F21AC610D03896FADCDC45FA869E3, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_startPos1_5() { return static_cast<int32_t>(offsetof(rightLeft_tCB4B6FADF40F21AC610D03896FADCDC45FA869E3, ___startPos1_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPos1_5() const { return ___startPos1_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPos1_5() { return &___startPos1_5; }
	inline void set_startPos1_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPos1_5 = value;
	}

	inline static int32_t get_offset_of_startPos2_6() { return static_cast<int32_t>(offsetof(rightLeft_tCB4B6FADF40F21AC610D03896FADCDC45FA869E3, ___startPos2_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPos2_6() const { return ___startPos2_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPos2_6() { return &___startPos2_6; }
	inline void set_startPos2_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPos2_6 = value;
	}

	inline static int32_t get_offset_of_currentPoint_7() { return static_cast<int32_t>(offsetof(rightLeft_tCB4B6FADF40F21AC610D03896FADCDC45FA869E3, ___currentPoint_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_currentPoint_7() const { return ___currentPoint_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_currentPoint_7() { return &___currentPoint_7; }
	inline void set_currentPoint_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___currentPoint_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPoint_7), (void*)value);
	}

	inline static int32_t get_offset_of_nextPoint_8() { return static_cast<int32_t>(offsetof(rightLeft_tCB4B6FADF40F21AC610D03896FADCDC45FA869E3, ___nextPoint_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_nextPoint_8() const { return ___nextPoint_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_nextPoint_8() { return &___nextPoint_8; }
	inline void set_nextPoint_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___nextPoint_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextPoint_8), (void*)value);
	}

	inline static int32_t get_offset_of_platform_9() { return static_cast<int32_t>(offsetof(rightLeft_tCB4B6FADF40F21AC610D03896FADCDC45FA869E3, ___platform_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_platform_9() const { return ___platform_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_platform_9() { return &___platform_9; }
	inline void set_platform_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___platform_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platform_9), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55 (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m162D01EF10764A82B218C4D6496F71CF4F50529B (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * ___initCompleteAction0, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Void AdManager::InterstitialReklamYukle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_InterstitialReklamYukle_mD5FEFE58B37812891F4BA8F4A52C4218D4BA1FD3 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m539CECD9169FE98801CF14A6EDBCD9C0A26A4038 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Destroy_m50124A019EC4314BB3CE6AA9FF92ABEE726B3523 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m051B7CB234EBA2B60D6997B54805BB5FF154F4C8 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, String_t* ___adUnitId0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m8D6A71AED40167FC8AA4BE420AF5D469ABCBFB1D (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mA382E7577B1B120AD708183BBC0E8157E692D3AA (EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_mA3ABF774CBFEBABCDB1ADF7B0A1E08AC61B01D38 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___value0, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest AdManager::ReklamIstegiOlustur()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * AdManager_ReklamIstegiOlustur_mB3E64EAF24489FA24FAF66B0F6F1B68EA8AF31E7 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_m7037E588F913C32DC753DF746279B58C83350EA3 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * ___request0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m5975110ACBE5D35AE0D2F6D9AEA1FFD0DA5654B6 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddTestDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * Builder_AddTestDevice_m931479AE4E757BDB5536AFDD9C40099A66B6739C (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, String_t* ___deviceId0, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::TagForChildDirectedTreatment(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * Builder_TagForChildDirectedTreatment_mC07103472E8DC60B97EDCBB40A7A14CE2552BCF3 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, bool ___tagForChildDirectedTreatment0, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * Builder_Build_m1E92AAF861E1D08CF5CF23B5E9D4A5D25DCB3D71 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method);
// System.String GoogleMobileAds.Api.AdFailedToLoadEventArgs::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdFailedToLoadEventArgs_get_Message_mFED3D89B1DCB3FFC6EE0AFE90252ABDA0BD86B72_inline (AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m6111A6CEA42D17DDF9C6E3A2D8E6FC9E7C46EA28 (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator AdManager::InsterstitialGosterCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdManager_InsterstitialGosterCoroutine_mE4C20028E4B804A7F087CBEC96A2920D871A9E24 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void AdManager/<InsterstitialGosterCoroutine>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInsterstitialGosterCoroutineU3Ed__18__ctor_m702B4E1C6E0462708769BAE51E77CC12BA979A1A (U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void AdManager::InsterstitialGoster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_InsterstitialGoster_m7779D520E0CBBDB9F51004AF841A39EE2D5BC958 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void CircleEnabled::sonrakiLevelKontrolcusu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleEnabled_sonrakiLevelKontrolcusu_m3CAC83540B62447A52A327FBCBE7E1956BD73432 (CircleEnabled_tDA2D71758A6A9A2BF0D0DC59AC700E0C395EF0EB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// System.Void FinishScript::sonrakiLevelKontrolcusu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript_sonrakiLevelKontrolcusu_m9B44CF5C71B458893D310A73B68B6E891134544F (FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void FinishScript2::sonrakiLevelKontrolcusu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript2_sonrakiLevelKontrolcusu_m41E810603721B012E3812E93453EEBF164868BFA (FinishScript2_tF83BB14AF75F0FB96CA83F950D1F04582407E225 * __this, const RuntimeMethod* method);
// System.Void FinishScript3::sonrakiLevelKontrolcusu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript3_sonrakiLevelKontrolcusu_mA3389C7D10A6181B41028B1B22165EF979A3C035 (FinishScript3_t9E3F3F31B04935B86970C10BFC771A2C719DA521 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void HareketliObje::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HareketliObje_Move_mFBC9B096C57E4FCA4859707C312670F2FAC7FCBD (HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E * __this, const RuntimeMethod* method);
// System.Int32 HareketliObje::GetRandomDestNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HareketliObje_GetRandomDestNumber_m2C9FF7EE6F2D3DB9B37EEAFC2866158830B9AAF7 (HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void Karakter::sonrakiLevelKontrolcusu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Karakter_sonrakiLevelKontrolcusu_mA39321EBF84043EBF7A44367D5C093A7CD806A6B (Karakter_tF2D98047571D686D310D9564B69D8410347874A9 * __this, const RuntimeMethod* method);
// System.String Karakter::levelAdi(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Karakter_levelAdi_m33324D7E80DA12D5A4996D211839C78573D09BF6 (Karakter_tF2D98047571D686D310D9564B69D8410347874A9 * __this, int32_t ___id0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Karakter::bolumSonuPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Karakter_bolumSonuPanel_mFFA2E391210D8EC023C8BF60500FB095071D41AE (Karakter_tF2D98047571D686D310D9564B69D8410347874A9 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SahneGecis>()
inline SahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0 * GameObject_GetComponent_TisSahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0_m0FCBC3187971F61471BF179A49471DE298CB26F4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.String UnityEngine.SceneManagement.SceneUtility::GetScenePathByBuildIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SceneUtility_GetScenePathByBuildIndex_m828FC90C09BB0E45E6A2EAC59C1490B86B434F11 (int32_t ___buildIndex0, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mAB159CED4EA42F6E700527382D795CCD31EF293F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Count()
inline int32_t List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void LockSystem::kilitleriAc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockSystem_kilitleriAc_m16EA405FFA9ACE105DF2F272A9FEB71AAFC79EE6 (LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9 * __this, const RuntimeMethod* method);
// System.Void LockSystem::yildizlariDoldur()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockSystem_yildizlariDoldur_m969B0C214E6A6E22688C641F002D6D5E9B8E3532 (LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9 * __this, const RuntimeMethod* method);
// System.Void LockSystem::yildizlariAktifEt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockSystem_yildizlariAktifEt_mED7CDD06CD50C4F43912814BBFA8FB31C64EE72F (LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Item(System.Int32)
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * List_1_get_Item_m77F12A63EB4FD22AA4D725B91DC135C20B32AE0A_inline (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, int32_t, const RuntimeMethod*))List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline)(__this, ___index0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.String LockSystem::levelAdi(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LockSystem_levelAdi_mE288B5B7379613A50445DA4474DA54112DD7B203 (LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void mazeTurn::Left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mazeTurn_Left_m57B5F37D2AC61362BFD0AD3CFB91AAC8CD603DAF (mazeTurn_tF44DEE6037B27319045C500529456C5F7A246C24 * __this, const RuntimeMethod* method);
// System.Void mazeTurn::Right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mazeTurn_Right_mA1CDC5EF2F88B0724711AFA13BCBF5D2809FE24B (mazeTurn_tF44DEE6037B27319045C500529456C5F7A246C24 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void mazeTurn::dur()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mazeTurn_dur_mB01E3CB42A6FCE3AEC7E8326134D1CCDF7C63451 (mazeTurn_tF44DEE6037B27319045C500529456C5F7A246C24 * __this, const RuntimeMethod* method);
// System.Void mazeTurn::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mazeTurn_Move_m6EF188BFF2CB8D4A466AC1FA606D9C4440892D68 (mazeTurn_tF44DEE6037B27319045C500529456C5F7A246C24 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, float ___angle2, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE (float ___value0, const RuntimeMethod* method);
// System.Void musicVolume::SaveAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void musicVolume_SaveAudio_mA060206E161B34B1CC98D06839084A21FB10C69D (musicVolume_t267B210FD77B91B8348C24082E7F1048EE4D07B5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioListener::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioListener_get_volume_m42CB4AE6FDAE4430D1153AE8B1B363B1C3B30344 (const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214 (String_t* ___key0, float ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471 (String_t* ___key0, const RuntimeMethod* method);
// System.Void AdManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m611FAF9869007463682AF195C7A4B4933F061B46 (U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void AdManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_Awake_m70481558F6DCF89733E1FD9528F2DC9A4A594C88 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t73B690804B71062EA366B9EF731317DA6FE13907_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__9_0_m5848A93F2992BEDA50D6156DE489BCF37066D396_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * G_B3_0 = NULL;
	Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * G_B2_0 = NULL;
	{
		// if( instance == null )
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// DontDestroyOnLoad( this );
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(__this, /*hidden argument*/NULL);
		// MobileAds.Initialize( reklamDurumu => { } );
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_il2cpp_TypeInfo_var);
		Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * L_2 = ((U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_il2cpp_TypeInfo_var))->get_U3CU3E9__9_0_1();
		Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_il2cpp_TypeInfo_var);
		U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D * L_4 = ((U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * L_5 = (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 *)il2cpp_codegen_object_new(Action_1_t73B690804B71062EA366B9EF731317DA6FE13907_il2cpp_TypeInfo_var);
		Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CAwakeU3Eb__9_0_m5848A93F2992BEDA50D6156DE489BCF37066D396_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6D67E0BED17154E031E194DC24D7381B6EF77F55_RuntimeMethod_var);
		Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * L_6 = L_5;
		((U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_il2cpp_TypeInfo_var))->set_U3CU3E9__9_0_1(L_6);
		G_B3_0 = L_6;
	}

IL_0038:
	{
		MobileAds_Initialize_m162D01EF10764A82B218C4D6496F71CF4F50529B(G_B3_0, /*hidden argument*/NULL);
		// interstitialKimligi = interstitialKimligi.Trim();
		String_t* L_7 = __this->get_interstitialKimligi_5();
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_7, /*hidden argument*/NULL);
		__this->set_interstitialKimligi_5(L_8);
		// testDeviceID = testDeviceID.Trim();
		String_t* L_9 = __this->get_testDeviceID_7();
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_9, /*hidden argument*/NULL);
		__this->set_testDeviceID_7(L_10);
		// InterstitialReklamYukle();
		AdManager_InterstitialReklamYukle_mD5FEFE58B37812891F4BA8F4A52C4218D4BA1FD3(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0066:
	{
		// else if( this != instance )
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_11 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(__this, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0079;
		}
	}
	{
		// Destroy( this );
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void AdManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_Update_m4267B5FCE42EEA0752333421FC184C58CB4BD345 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	{
		// float zaman = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		// if( zaman >= interstitialOtomatikYeniIstekZamani )
		float L_1 = __this->get_interstitialOtomatikYeniIstekZamani_11();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_001e;
		}
	}
	{
		// interstitialOtomatikYeniIstekZamani = float.PositiveInfinity;
		__this->set_interstitialOtomatikYeniIstekZamani_11((std::numeric_limits<float>::infinity()));
		// InterstitialReklamYukle();
		AdManager_InterstitialReklamYukle_mD5FEFE58B37812891F4BA8F4A52C4218D4BA1FD3(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void AdManager::InterstitialReklamYukle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_InterstitialReklamYukle_mD5FEFE58B37812891F4BA8F4A52C4218D4BA1FD3 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_InterstitialDelegate_m7FBD2E46581589787724D94A0DFE259C48309AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_InterstitialYuklenemedi_mBC359E414A419B4A9653244586B23D44B930F089_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mA382E7577B1B120AD708183BBC0E8157E692D3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6264F3E99DD53581133B065E278BB5734C025F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( !testModu && string.IsNullOrEmpty( interstitialKimligi ) )
		bool L_0 = __this->get_testModu_6();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = __this->get_interstitialKimligi_5();
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// if( interstitialReklam != null && interstitialReklam.IsLoaded() )
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_3 = __this->get_interstitialReklam_9();
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_4 = __this->get_interstitialReklam_9();
		NullCheck(L_4);
		bool L_5;
		L_5 = InterstitialAd_IsLoaded_m539CECD9169FE98801CF14A6EDBCD9C0A26A4038(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		return;
	}

IL_002c:
	{
		// if( interstitialReklam != null )
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_6 = __this->get_interstitialReklam_9();
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// interstitialReklam.Destroy();
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_7 = __this->get_interstitialReklam_9();
		NullCheck(L_7);
		InterstitialAd_Destroy_m50124A019EC4314BB3CE6AA9FF92ABEE726B3523(L_7, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// if( testModu && ( string.IsNullOrEmpty( testDeviceID ) || string.IsNullOrEmpty( interstitialKimligi ) ) )
		bool L_8 = __this->get_testModu_6();
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_9 = __this->get_testDeviceID_7();
		bool L_10;
		L_10 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_11 = __this->get_interstitialKimligi_5();
		bool L_12;
		L_12 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0073;
		}
	}

IL_0061:
	{
		// interstitialReklam = new InterstitialAd( "ca-app-pub-3940256099942544/1033173712" );
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_13 = (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 *)il2cpp_codegen_object_new(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9_il2cpp_TypeInfo_var);
		InterstitialAd__ctor_m051B7CB234EBA2B60D6997B54805BB5FF154F4C8(L_13, _stringLiteralC6264F3E99DD53581133B065E278BB5734C025F8, /*hidden argument*/NULL);
		__this->set_interstitialReklam_9(L_13);
		// }
		goto IL_0084;
	}

IL_0073:
	{
		// interstitialReklam = new InterstitialAd( interstitialKimligi );
		String_t* L_14 = __this->get_interstitialKimligi_5();
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_15 = (InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 *)il2cpp_codegen_object_new(InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9_il2cpp_TypeInfo_var);
		InterstitialAd__ctor_m051B7CB234EBA2B60D6997B54805BB5FF154F4C8(L_15, L_14, /*hidden argument*/NULL);
		__this->set_interstitialReklam_9(L_15);
	}

IL_0084:
	{
		// interstitialReklam.OnAdClosed += InterstitialDelegate;
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_16 = __this->get_interstitialReklam_9();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_17 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_17, __this, (intptr_t)((intptr_t)AdManager_InterstitialDelegate_m7FBD2E46581589787724D94A0DFE259C48309AE1_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_16);
		InterstitialAd_add_OnAdClosed_m8D6A71AED40167FC8AA4BE420AF5D469ABCBFB1D(L_16, L_17, /*hidden argument*/NULL);
		// interstitialReklam.OnAdFailedToLoad += InterstitialYuklenemedi;
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_18 = __this->get_interstitialReklam_9();
		EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * L_19 = (EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF *)il2cpp_codegen_object_new(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mA382E7577B1B120AD708183BBC0E8157E692D3AA(L_19, __this, (intptr_t)((intptr_t)AdManager_InterstitialYuklenemedi_mBC359E414A419B4A9653244586B23D44B930F089_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mA382E7577B1B120AD708183BBC0E8157E692D3AA_RuntimeMethod_var);
		NullCheck(L_18);
		InterstitialAd_add_OnAdFailedToLoad_mA3ABF774CBFEBABCDB1ADF7B0A1E08AC61B01D38(L_18, L_19, /*hidden argument*/NULL);
		// interstitialReklam.LoadAd( ReklamIstegiOlustur() );
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_20 = __this->get_interstitialReklam_9();
		AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * L_21;
		L_21 = AdManager_ReklamIstegiOlustur_mB3E64EAF24489FA24FAF66B0F6F1B68EA8AF31E7(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		InterstitialAd_LoadAd_m7037E588F913C32DC753DF746279B58C83350EA3(L_20, L_21, /*hidden argument*/NULL);
		// interstitialIstekTimeoutZamani = Time.realtimeSinceStartup + 10f;
		float L_22;
		L_22 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		__this->set_interstitialIstekTimeoutZamani_10(((float)il2cpp_codegen_add((float)L_22, (float)(10.0f))));
		// }
		return;
	}
}
// GoogleMobileAds.Api.AdRequest AdManager::ReklamIstegiOlustur()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * AdManager_ReklamIstegiOlustur_mB3E64EAF24489FA24FAF66B0F6F1B68EA8AF31E7 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * V_0 = NULL;
	{
		// AdRequest.Builder reklamIstegi = new AdRequest.Builder();
		Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * L_0 = (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 *)il2cpp_codegen_object_new(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3_il2cpp_TypeInfo_var);
		Builder__ctor_m5975110ACBE5D35AE0D2F6D9AEA1FFD0DA5654B6(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// if( testModu && !string.IsNullOrEmpty( testDeviceID ) )
		bool L_1 = __this->get_testModu_6();
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = __this->get_testDeviceID_7();
		bool L_3;
		L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		// reklamIstegi.AddTestDevice( testDeviceID );
		Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * L_4 = V_0;
		String_t* L_5 = __this->get_testDeviceID_7();
		NullCheck(L_4);
		Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * L_6;
		L_6 = Builder_AddTestDevice_m931479AE4E757BDB5536AFDD9C40099A66B6739C(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// if( cocuklaraYonelikReklamGoster )
		bool L_7 = __this->get_cocuklaraYonelikReklamGoster_8();
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		// reklamIstegi.TagForChildDirectedTreatment( true );
		Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * L_8 = V_0;
		NullCheck(L_8);
		Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * L_9;
		L_9 = Builder_TagForChildDirectedTreatment_mC07103472E8DC60B97EDCBB40A7A14CE2552BCF3(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// return reklamIstegi.Build();
		Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * L_10 = V_0;
		NullCheck(L_10);
		AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * L_11;
		L_11 = Builder_Build_m1E92AAF861E1D08CF5CF23B5E9D4A5D25DCB3D71(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void AdManager::InterstitialDelegate(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_InterstitialDelegate_m7FBD2E46581589787724D94A0DFE259C48309AE1 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	{
		// InterstitialReklamYukle();
		AdManager_InterstitialReklamYukle_mD5FEFE58B37812891F4BA8F4A52C4218D4BA1FD3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdManager::InterstitialYuklenemedi(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_InterstitialYuklenemedi_mBC359E414A419B4A9653244586B23D44B930F089 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log( args.Message );
		AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * L_0 = ___args1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = AdFailedToLoadEventArgs_get_Message_mFED3D89B1DCB3FFC6EE0AFE90252ABDA0BD86B72_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// interstitialOtomatikYeniIstekZamani = Time.realtimeSinceStartup + 30f;
		float L_2;
		L_2 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		__this->set_interstitialOtomatikYeniIstekZamani_11(((float)il2cpp_codegen_add((float)L_2, (float)(30.0f))));
		// if( interstitialReklam != null )
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_3 = __this->get_interstitialReklam_9();
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// interstitialReklam.Destroy();
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_4 = __this->get_interstitialReklam_9();
		NullCheck(L_4);
		InterstitialAd_Destroy_m50124A019EC4314BB3CE6AA9FF92ABEE726B3523(L_4, /*hidden argument*/NULL);
		// interstitialReklam = null;
		__this->set_interstitialReklam_9((InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 *)NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Boolean AdManager::InterstitialHazirMi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdManager_InterstitialHazirMi_mABF5BE88EC484E2FFCB1EEC58E4D2EF1CE7875F2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( instance == null )
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// if( instance.interstitialReklam == null )
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_2 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_2);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_3 = L_2->get_interstitialReklam_9();
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001d:
	{
		// return instance.interstitialReklam.IsLoaded();
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_4 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_5 = L_4->get_interstitialReklam_9();
		NullCheck(L_5);
		bool L_6;
		L_6 = InterstitialAd_IsLoaded_m539CECD9169FE98801CF14A6EDBCD9C0A26A4038(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void AdManager::InterstitialReklamAl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_InterstitialReklamAl_m0A4AB88A8C2289D6AD1440D6C2C1BDF838DC0D6F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( instance == null )
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// instance.InterstitialReklamYukle();
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_2 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_2);
		AdManager_InterstitialReklamYukle_mD5FEFE58B37812891F4BA8F4A52C4218D4BA1FD3(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdManager::InsterstitialGoster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_InsterstitialGoster_m7779D520E0CBBDB9F51004AF841A39EE2D5BC958 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( instance == null )
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_0 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if( instance.interstitialReklam == null )
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_2 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_2);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_3 = L_2->get_interstitialReklam_9();
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		// instance.InterstitialReklamYukle();
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_4 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		AdManager_InterstitialReklamYukle_mD5FEFE58B37812891F4BA8F4A52C4218D4BA1FD3(L_4, /*hidden argument*/NULL);
		// if( instance.interstitialReklam == null )
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_5 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_5);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_6 = L_5->get_interstitialReklam_9();
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		return;
	}

IL_0031:
	{
		// if( instance.interstitialGosterCoroutine != null )
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_7 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->get_interstitialGosterCoroutine_12();
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// instance.StopCoroutine( instance.interstitialGosterCoroutine );
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_9 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_10 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->get_interstitialGosterCoroutine_12();
		NullCheck(L_9);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B(L_9, L_11, /*hidden argument*/NULL);
		// instance.interstitialGosterCoroutine = null;
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_12 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_12);
		L_12->set_interstitialGosterCoroutine_12((RuntimeObject*)NULL);
	}

IL_005c:
	{
		// if( instance.interstitialReklam.IsLoaded() )
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_13 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_13);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_14 = L_13->get_interstitialReklam_9();
		NullCheck(L_14);
		bool L_15;
		L_15 = InterstitialAd_IsLoaded_m539CECD9169FE98801CF14A6EDBCD9C0A26A4038(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		// instance.interstitialReklam.Show();
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_16 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_16);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_17 = L_16->get_interstitialReklam_9();
		NullCheck(L_17);
		InterstitialAd_Show_m6111A6CEA42D17DDF9C6E3A2D8E6FC9E7C46EA28(L_17, /*hidden argument*/NULL);
		return;
	}

IL_007d:
	{
		// if( Time.realtimeSinceStartup >= instance.interstitialIstekTimeoutZamani )
		float L_18;
		L_18 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_19 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_19);
		float L_20 = L_19->get_interstitialIstekTimeoutZamani_10();
		if ((!(((float)L_18) >= ((float)L_20))))
		{
			goto IL_0098;
		}
	}
	{
		// instance.InterstitialReklamYukle();
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_21 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_21);
		AdManager_InterstitialReklamYukle_mD5FEFE58B37812891F4BA8F4A52C4218D4BA1FD3(L_21, /*hidden argument*/NULL);
	}

IL_0098:
	{
		// instance.interstitialGosterCoroutine = instance.InsterstitialGosterCoroutine();
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_22 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_23 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = AdManager_InsterstitialGosterCoroutine_mE4C20028E4B804A7F087CBEC96A2920D871A9E24(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		L_22->set_interstitialGosterCoroutine_12(L_24);
		// instance.StartCoroutine( instance.interstitialGosterCoroutine );
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_25 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_26 = ((AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_26);
		RuntimeObject* L_27 = L_26->get_interstitialGosterCoroutine_12();
		NullCheck(L_25);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_28;
		L_28 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_25, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AdManager::InsterstitialGosterCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdManager_InsterstitialGosterCoroutine_mE4C20028E4B804A7F087CBEC96A2920D871A9E24 (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F * L_0 = (U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F *)il2cpp_codegen_object_new(U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F_il2cpp_TypeInfo_var);
		U3CInsterstitialGosterCoroutineU3Ed__18__ctor_m702B4E1C6E0462708769BAE51E77CC12BA979A1A(L_0, 0, /*hidden argument*/NULL);
		U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void AdManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager__ctor_mDEF91F5263438BACE36D66E7434579BEDEC9A3FC (AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * __this, const RuntimeMethod* method)
{
	{
		// private float interstitialOtomatikYeniIstekZamani = float.PositiveInfinity;
		__this->set_interstitialOtomatikYeniIstekZamani_11((std::numeric_limits<float>::infinity()));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager__cctor_m97C3ECB98EBE2B08E311CA6992EC359BF9D4F2FA (const RuntimeMethod* method)
{
	{
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
// System.Void BackAndExit::PlayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackAndExit_PlayButton_mB3BC168E85FE0F1DC88513F1154FF0C733559211 (BackAndExit_tBCE12BE4E7E0019A08FF06DC56FE8BF556FD0257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BackAndExit::BackButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackAndExit_BackButton_mA631FC49AB796EACE19207EA15A6D33F8ECAF13B (BackAndExit_tBCE12BE4E7E0019A08FF06DC56FE8BF556FD0257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// AdManager.InsterstitialGoster();
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_InsterstitialGoster_m7779D520E0CBBDB9F51004AF841A39EE2D5BC958(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BackAndExit::ExitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackAndExit_ExitButton_m12A2BD330AD28FD7C54D39F7FDE8C9EC780C723A (BackAndExit_tBCE12BE4E7E0019A08FF06DC56FE8BF556FD0257 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BackAndExit::SettingsButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackAndExit_SettingsButton_m06C874A182BAE09F087DFBB24CC9A9BB0E4B166C (BackAndExit_tBCE12BE4E7E0019A08FF06DC56FE8BF556FD0257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(37);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)37), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BackAndExit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackAndExit__ctor_m7443935906F8A3491492169D06F596A372929D55 (BackAndExit_tBCE12BE4E7E0019A08FF06DC56FE8BF556FD0257 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BackManager::BackButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackManager_BackButton_m6A47FD6E85360863CC82155F5D523BAD7DD108C9 (BackManager_t710361142316A19AFCD8F59F4DF29070EF45A3AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// AdManager.InsterstitialGoster();
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_InsterstitialGoster_m7779D520E0CBBDB9F51004AF841A39EE2D5BC958(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BackManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackManager__ctor_m93D9B4CB4824AC341717B3047D29E50052C3B39E (BackManager_t710361142316A19AFCD8F59F4DF29070EF45A3AF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CircleEnabled::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleEnabled_OnTriggerEnter_m11B64EB4D213D8CC17C7AD3C006F1CAE8330818E (CircleEnabled_tDA2D71758A6A9A2BF0D0DC59AC700E0C395EF0EB * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC679E6F696FDB89405933064A037E339D40182A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// sonrakiLevelKontrolcusu();
		CircleEnabled_sonrakiLevelKontrolcusu_m3CAC83540B62447A52A327FBCBE7E1956BD73432(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Leveller"); //level se?im ekran?
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralC679E6F696FDB89405933064A037E339D40182A0, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void CircleEnabled::sonrakiLevelKontrolcusu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleEnabled_sonrakiLevelKontrolcusu_m3CAC83540B62447A52A327FBCBE7E1956BD73432 (CircleEnabled_tDA2D71758A6A9A2BF0D0DC59AC700E0C395EF0EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64008DC3354788659E4680C8940205E4D94BB9B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C98D165EB43C9CB237802A099B3E8B96488B53D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABFB43D5E5F90FB3352973159CCE2626B6F7F162);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB11585D92F213545FC6FD07A0A05B5E80E7E873);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// string currentLevel = PlayerPrefs.GetString("sankilevel");// (PlayerPrefs.GetString("suankiSecilenLevel");) Yenilendi ??nk? level ekran?ndan ge?i?te kaydetti?imiz leveli al?yorduk fakat sonraki levele bu sahneden ge?ince kay?tl? level eskisi kal?yor o y?zden direk aktif sahne build indexinden ad?n? ?a??r?p i?lem yapt?r?yoruz.
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral9C98D165EB43C9CB237802A099B3E8B96488B53D, /*hidden argument*/NULL);
		// int currentLevelID = int.Parse(currentLevel.Split('_')[1]); //Level_id bi?iminde oldu?undan sa?taraf yani (id)
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)95));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = 1;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// int nextLevel = PlayerPrefs.GetInt("level") + 1;
		int32_t L_7;
		L_7 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		// if (currentLevelID == PlayerPrefs.GetInt("seviyeSayisi"))
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralFB11585D92F213545FC6FD07A0A05B5E80E7E873, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0047;
		}
	}
	{
		// Debug.Log("Oyun Sonu");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralABFB43D5E5F90FB3352973159CCE2626B6F7F162, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0047:
	{
		// if (nextLevel - currentLevelID == 1)
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11))) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		// PlayerPrefs.SetInt("level", nextLevel);
		int32_t L_12 = V_1;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, L_12, /*hidden argument*/NULL);
		return;
	}

IL_0059:
	{
		// Debug.Log("?nceden A??lm?? bir b?l?me girdiniz.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral64008DC3354788659E4680C8940205E4D94BB9B6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CircleEnabled::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleEnabled__ctor_m4ADC83E3FF1948F8ACBA8C35D731FD7109F3139E (CircleEnabled_tDA2D71758A6A9A2BF0D0DC59AC700E0C395EF0EB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CircleScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleScript_OnTriggerEnter2D_mB497B19A543C7D08F26171DF7ECE351B50A79345 (CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Finish")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// Panel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Panel_4();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void CircleScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleScript__ctor_m786A6A472B496D4DA033C3A8D24A56899718E9AE (CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger10::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger10_OnTriggerEnter2D_mAD176E25AAD3618AA1008410879B82016FCC06C8 (Danger10_t85C377E517F5BB153B297E7A485351F554FA2A3E * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(11);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)11), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger10::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger10__ctor_m2DCA65001999D29FFE6A64F273DFF50BBB06A049 (Danger10_t85C377E517F5BB153B297E7A485351F554FA2A3E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger11::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger11_OnTriggerEnter2D_mC6A85CB51F28939CB4F7B3FB2933AC4EFE463B49 (Danger11_tB28118E9C45DB16E99B0E0468205517C779A9A94 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(12);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)12), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger11::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger11__ctor_m96C398095980C22C55C37E7913911859AE7A7855 (Danger11_tB28118E9C45DB16E99B0E0468205517C779A9A94 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger12::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger12_OnTriggerEnter2D_m9C56ED1941F0C2B65F9FC210CA93E44ACFF03E90 (Danger12_t4A5CC5BB48CF31D663FA503D19E3CBC304C64518 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(13);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)13), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger12::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger12__ctor_m984B797E66B40963535327146D0369BE29E3304A (Danger12_t4A5CC5BB48CF31D663FA503D19E3CBC304C64518 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger13::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger13_OnTriggerEnter2D_mE57BF5634047DAE0AD608796976F407E8FACB5AE (Danger13_tA7BCBDD6438D34B403F74435F91C9E31B83033C1 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(14);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)14), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger13::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger13__ctor_m4795E0CD0B26830455C1B4C06996942C8509B3DD (Danger13_tA7BCBDD6438D34B403F74435F91C9E31B83033C1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger14::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger14_OnTriggerEnter2D_mAF57E48C7D22267281902A4A576A28D886DB7140 (Danger14_t5C3E3949458352554F36BF030EF41C58F9A90AFC * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(15);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)15), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger14::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger14__ctor_m7C27344E6F18EC3EB638C66D8302912EA30D5741 (Danger14_t5C3E3949458352554F36BF030EF41C58F9A90AFC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger15::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger15_OnTriggerEnter2D_m27266979AB6E81437A7805ED4B4EF13AB90879CC (Danger15_t480EE2B8F586E78A223F316A8AAD830D536F5861 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(16);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)16), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger15::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger15__ctor_mBD999E8322B8405A112C993D01491D6103C05A74 (Danger15_t480EE2B8F586E78A223F316A8AAD830D536F5861 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger16::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger16_OnTriggerEnter2D_mF735DC110981E92F9077ADE4C123E2B5C9D4C8CA (Danger16_t8C3563B7069C308F2A83B7378C0E8B280FA8B95C * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(17);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)17), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger16__ctor_m48160102C6BA45817B06E0685758844C37FFE9EA (Danger16_t8C3563B7069C308F2A83B7378C0E8B280FA8B95C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger17::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger17_OnTriggerEnter2D_mB506C6A0C90C35E326AEB1BBE8B6076A8D686E60 (Danger17_t3ABBC9F283D04746335AC4D09D716509113B71A7 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(18);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)18), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger17::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger17__ctor_m5FF0645B77470E0A083A89C6518B2F9CE7F7F838 (Danger17_t3ABBC9F283D04746335AC4D09D716509113B71A7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger18::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger18_OnTriggerEnter2D_mDDBD04FBAF0712E8E28DAD9456FC625359613E00 (Danger18_t57C5A6328EA7E8703EEF2A034328BE7F55DD87B6 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(19);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)19), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger18::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger18__ctor_mE4182E53EA6FB449664EA1A2B380BB22A9ABD04D (Danger18_t57C5A6328EA7E8703EEF2A034328BE7F55DD87B6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger19::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger19_OnTriggerEnter2D_m51B98464C0D96A9D6AB4EFAE34881CF5D25718AF (Danger19_t1EFB84E4C785A4987555F98281C17C0A3BAB9BAF * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(20);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)20), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger19::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger19__ctor_mBB99BDC194BB8BA97CF83FB94E3C6DED13E8A7C5 (Danger19_t1EFB84E4C785A4987555F98281C17C0A3BAB9BAF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger20::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger20_OnTriggerEnter2D_m62D3A43A2882D1DE22C844F5053D4BA8C2ADA464 (Danger20_t54B573B0F14E4329F00BF215193B800987D844E2 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(21);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)21), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger20::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger20__ctor_m98DC2D8A4AA6475A53194AF107DAB6C154DDCA5B (Danger20_t54B573B0F14E4329F00BF215193B800987D844E2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger21::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger21_OnTriggerEnter2D_mC7E174635370284052DC32605D3F8482FB69710D (Danger21_tDF7BABB55D4C97F3B24C1FDD2C39D65023874852 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(22);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)22), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger21::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger21__ctor_m5A54D14A1AAA1D4014C667CDBAEC32303EF5984D (Danger21_tDF7BABB55D4C97F3B24C1FDD2C39D65023874852 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger22::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger22_OnTriggerEnter2D_mCC9BF2DC40412C71F9E83CA0548E3D30BD358D7C (Danger22_t5DC0F6A4F3662F0F675F54C593371A3A9B98D7E4 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(23);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)23), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger22::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger22__ctor_m7EEC255239D96128182EB01B252AF6C95E3889C0 (Danger22_t5DC0F6A4F3662F0F675F54C593371A3A9B98D7E4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger23::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger23_OnTriggerEnter2D_mD9CD8121365B8D83DFC44711AE9B29704A752EF0 (Danger23_t613FF91763834E9D473278F3498998CF5BD7D37E * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(24);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)24), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger23::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger23__ctor_mA154ED53888EA1331B580A64339A0F1E61B27BE1 (Danger23_t613FF91763834E9D473278F3498998CF5BD7D37E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger24::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger24_OnTriggerEnter2D_m8ADFE35EDE0CDAD244B59BA2B016B7ABF4565A40 (Danger24_tDBA047B5B4CDDBE9FAA1BF5FF9C305FBC37CE018 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(25);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)25), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger24::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger24__ctor_mFE7CB3526CA44C8342EC5C8F8FE7EEFFC9D86239 (Danger24_tDBA047B5B4CDDBE9FAA1BF5FF9C305FBC37CE018 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger25::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger25_OnTriggerEnter2D_m0C19194BAECFFD4C837159BBE553EDFE592001AE (Danger25_t2C240A61289A40FF7D86A11220816DD6B83EEC2E * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(26);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)26), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger25::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger25__ctor_m6E60AAC008009A974B8D72457B24F2F7132C4194 (Danger25_t2C240A61289A40FF7D86A11220816DD6B83EEC2E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger26::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger26_OnTriggerEnter2D_m7DA941E468C99E831BD7ACA4CB47E6D75A912F09 (Danger26_t06620DDA172CCDE961A3C8DF610C9F2A74256EBD * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(27);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)27), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger26::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger26__ctor_m6E59F7481CC104A94D825FCC602C0CD16A4FE606 (Danger26_t06620DDA172CCDE961A3C8DF610C9F2A74256EBD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger27::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger27_OnTriggerEnter2D_m872565081FAB280B477F8E4315A0738473056FC1 (Danger27_tC32F2EC638FB1E81B10EB83B163BE1480E9C516D * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(28);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)28), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger27::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger27__ctor_m1DC51BD3B56E5FB4523897CD0A2FD3FA7ABE3EA8 (Danger27_tC32F2EC638FB1E81B10EB83B163BE1480E9C516D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger28::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger28_OnTriggerEnter2D_mF38A6DD46B32E0B42EA816E84AA21F2ABAAA6872 (Danger28_tF2F55231EF51202579E57F2AD82752D7F887B9F8 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(29);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)29), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger28::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger28__ctor_m10B0B47AC02B6584153D798C4B04880F98A5A53D (Danger28_tF2F55231EF51202579E57F2AD82752D7F887B9F8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger29::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger29_OnTriggerEnter2D_m2758C68C9B75151C2CA95BCE81EC7660399B2DB4 (Danger29_t6BB1D20104A980C7DD5FACE90953232904B476CE * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(30);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)30), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger29::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger29__ctor_m3F8F636AB6D48387B23CB6F7A154C7212B489A95 (Danger29_t6BB1D20104A980C7DD5FACE90953232904B476CE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger30::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger30_OnTriggerEnter2D_m697EBF31FB92FB9AE6CBBE9B378B2D74EAFDE57E (Danger30_t8A1F1DDB523F2389C8823E70988D182B58879451 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(31);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)31), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger30::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger30__ctor_m477C34CBC5B423221116DF25D75534DEF3D90D3C (Danger30_t8A1F1DDB523F2389C8823E70988D182B58879451 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger31::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger31_OnTriggerEnter2D_mF5A72303D1DF279E50C00A2766F33274C5170D72 (Danger31_tF8EA1C6A452E7C911EFB6982DCACF77755188126 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(32);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)32), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger31::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger31__ctor_m4FD121DCBAC067FE3071BE6D8CFB7715B3417C81 (Danger31_tF8EA1C6A452E7C911EFB6982DCACF77755188126 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger32::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger32_OnTriggerEnter2D_mC70A0ED17DC02689EA8CAFD8D59E2E4375214D39 (Danger32_tE056DA6FEFC6C6990C133BB1FC4121915BAE1BE0 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(33);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)33), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger32__ctor_m65F004084B9F404137DAE8A7E34349E12C7F195E (Danger32_tE056DA6FEFC6C6990C133BB1FC4121915BAE1BE0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger35::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger35_OnTriggerEnter2D_m67DBBEE3E54D14800FAA9AA10472A448784F233D (Danger35_t2638164A7F9AFDB5783DC48EDBBEE622A2E5035A * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(36);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)36), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger35::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger35__ctor_m0C9CF934AE555B31F021646F51FEE7D882A5AC39 (Danger35_t2638164A7F9AFDB5783DC48EDBBEE622A2E5035A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger8::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger8_OnTriggerEnter2D_mCAB24C03908D851884499A2BD1CCADEFD42D47AA (Danger8_t83A653E2A8B2B0E530682C9D2AEB249FE8EC9470 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// SceneManager.LoadScene(8);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(8, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Danger8::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger8__ctor_mC839A41F1164C06A122660BAC1F5292F83013420 (Danger8_t83A653E2A8B2B0E530682C9D2AEB249FE8EC9470 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Danger9::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger9_OnTriggerEnter2D_m4F206CB57F250A426B7675884E8BF0F2724CF391 (Danger9_t0E8A3390AC0B2B381086A0FC94CB31917EAACAE2 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(9);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)9), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Danger9::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Danger9__ctor_m422DD107DBBB31BA8DE6585DAFCCF1452EFEC025 (Danger9_t0E8A3390AC0B2B381086A0FC94CB31917EAACAE2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DangerLevel13::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DangerLevel13_OnTriggerEnter2D_m41CCE02E7881DFDCF1919B7172DE413AD2DABE38 (DangerLevel13_tAD17BAF964DDCE7BE9C262198BFCA80E455ADFEA * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(13);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)13), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void DangerLevel13::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DangerLevel13__ctor_m2BE066EB99F29B009EF5F41650044B24C5314A1D (DangerLevel13_tAD17BAF964DDCE7BE9C262198BFCA80E455ADFEA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DangerScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DangerScript_Start_m817CC09B5F57BA46B8E2827447C82731B3240254 (DangerScript_t516FC39332417CFCA6ADE627101D170062EAE442 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DangerScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DangerScript_Update_m16EE154D39275C37566ED48A4860C387854EAEA4 (DangerScript_t516FC39332417CFCA6ADE627101D170062EAE442 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DangerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DangerScript__ctor_m09315240B361F236672C959A59751DC8ECC882D1 (DangerScript_t516FC39332417CFCA6ADE627101D170062EAE442 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Denemescripts::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Denemescripts_OnTriggerEnter2D_mDB64F483C8DCF841B56E2FFAD08AB99EC0996419 (Denemescripts_t894E1CEB690EF4395FE65BF3EA8DBA15C5FE2CD8 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Circle")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// alli.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_alli_4();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Denemescripts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Denemescripts__ctor_m6B11F64C79984759E1D816A625482E1D944D7B7A (Denemescripts_t894E1CEB690EF4395FE65BF3EA8DBA15C5FE2CD8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DonenEngel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DonenEngel_Start_mEF8D096E4564BBBF80CEBDCDD709C35663E16D9F (DonenEngel_t041D541B22477AA12A5261F9DA3921BEFEC67525 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DonenEngel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DonenEngel_Update_m084017F1D3C4744239423DC206A7BE46261B1938 (DonenEngel_t041D541B22477AA12A5261F9DA3921BEFEC67525 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, 0, (rotationSpeed));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_rotationSpeed_4();
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DonenEngel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DonenEngel__ctor_m8613D518E97DFFC289E2BEC994382C2920F173DF (DonenEngel_t041D541B22477AA12A5261F9DA3921BEFEC67525 * __this, const RuntimeMethod* method)
{
	{
		// private float rotationSpeed = 1.7f;
		__this->set_rotationSpeed_4((1.70000005f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DonenZemin::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DonenZemin_Start_mA6D29C0F03FDC863F52FEADB6BDFB546249C74F5 (DonenZemin_tF7641A2C08F00EF37F83D09C9CB59D113D7FF0C5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DonenZemin::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DonenZemin_Update_mFA1FEC5ACDCCFDF73905BF2315EB2E2665410C6D (DonenZemin_tF7641A2C08F00EF37F83D09C9CB59D113D7FF0C5 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, 0, -(rotationSpeed));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_rotationSpeed_4();
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), (0.0f), ((-L_1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DonenZemin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DonenZemin__ctor_mBFEDEE77255DAAC745B950DB76EE4B15E1D64E25 (DonenZemin_tF7641A2C08F00EF37F83D09C9CB59D113D7FF0C5 * __this, const RuntimeMethod* method)
{
	{
		// private float rotationSpeed = 2f;
		__this->set_rotationSpeed_4((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DonenZemin15::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DonenZemin15_Start_m8661FA0F68140154F88F472555EF6158EDD456B3 (DonenZemin15_t7C709DF3A29E5B6F853319CF5512E5531AC5F3A4 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DonenZemin15::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DonenZemin15_Update_m4B48F9CB0B30A59EE9E8B6CEB7F70E78CF69C82D (DonenZemin15_t7C709DF3A29E5B6F853319CF5512E5531AC5F3A4 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, 0, -(rotationSpeed));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_rotationSpeed_4();
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), (0.0f), ((-L_1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DonenZemin15::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DonenZemin15__ctor_m6BAF00B1859F1E037E0FD17D21278EF3267B105F (DonenZemin15_t7C709DF3A29E5B6F853319CF5512E5531AC5F3A4 * __this, const RuntimeMethod* method)
{
	{
		// private float rotationSpeed = 2f;
		__this->set_rotationSpeed_4((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DonenZemin5::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DonenZemin5_Start_m398507D52546969F699EC5BE7D37E9C88CDD7E65 (DonenZemin5_t1F03B4D1046BED925A71C0719E7094221A74784F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DonenZemin5::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DonenZemin5_Update_m433201575C9AF7BC46AC587CC7DF707E15B2569C (DonenZemin5_t1F03B4D1046BED925A71C0719E7094221A74784F * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, 0, -(rotationSpeed));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_rotationSpeed_4();
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), (0.0f), ((-L_1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DonenZemin5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DonenZemin5__ctor_m7388203E3781E042347B6873D28C394DCE15EAD7 (DonenZemin5_t1F03B4D1046BED925A71C0719E7094221A74784F * __this, const RuntimeMethod* method)
{
	{
		// private float rotationSpeed = 0.45f;
		__this->set_rotationSpeed_4((0.449999988f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FinishScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript_OnTriggerEnter2D_m38C7AC889FAC67A7603D43D07B119D05EE425E83 (FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0260F12FCE640BC2BB89FD8551E6533DD41961AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral172D239F491E2C3D788CB795A5FCE77D85CB1913);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2082974047A6094A1AF7B857532AB6BB4F2BDAE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE33ED4C9934A8E0E3C21129BD34F4CF224E719F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Finish"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// sonrakiLevelKontrolcusu();
		FinishScript_sonrakiLevelKontrolcusu_m9B44CF5C71B458893D310A73B68B6E891134544F(__this, /*hidden argument*/NULL);
		// GetComponent<AudioSource>().PlayOneShot(sesler[1]);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4;
		L_4 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_5 = __this->get_sesler_10();
		NullCheck(L_5);
		int32_t L_6 = 1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_4, L_7, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// if (other.gameObject.tag.Contains("End"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___other0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_10, _stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (other.gameObject.tag.Contains("Star"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12 = ___other0;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_14, _stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00b0;
		}
	}
	{
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = ___other0;
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_17, /*hidden argument*/NULL);
		// toplananItem += 1;
		int32_t L_18 = __this->get_toplananItem_8();
		__this->set_toplananItem_8(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		// skor.text = "Stars = " + toplananItem;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_skor_9();
		int32_t* L_20 = __this->get_address_of_toplananItem_8();
		String_t* L_21;
		L_21 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_20, /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral172D239F491E2C3D788CB795A5FCE77D85CB1913, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_22);
		// GetComponent<AudioSource>().PlayOneShot(sesler[0]);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_23;
		L_23 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_24 = __this->get_sesler_10();
		NullCheck(L_24);
		int32_t L_25 = 0;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_23, L_26, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// if (other.gameObject.tag.Contains("portal"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_27 = ___other0;
		NullCheck(L_27);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_30;
		L_30 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_29, _stringLiteral0260F12FCE640BC2BB89FD8551E6533DD41961AF, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d8;
		}
	}
	{
		// transform.position = portalGate1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = __this->get_portalGate1_4();
		NullCheck(L_31);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		// if (other.gameObject.tag.Contains("portal2"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_33 = ___other0;
		NullCheck(L_33);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		bool L_36;
		L_36 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_35, _stringLiteral2082974047A6094A1AF7B857532AB6BB4F2BDAE2, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0100;
		}
	}
	{
		// transform.position = portalGate2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = __this->get_portalGate2_5();
		NullCheck(L_37);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_37, L_38, /*hidden argument*/NULL);
	}

IL_0100:
	{
		// if (other.gameObject.tag.Contains("Deneme"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_39 = ___other0;
		NullCheck(L_39);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		String_t* L_41;
		L_41 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		bool L_42;
		L_42 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_41, _stringLiteralE33ED4C9934A8E0E3C21129BD34F4CF224E719F2, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_012a;
		}
	}
	{
		// GetComponent<AudioSource>().PlayOneShot(sesler[1]);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_43;
		L_43 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_44 = __this->get_sesler_10();
		NullCheck(L_44);
		int32_t L_45 = 1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_43);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_43, L_46, /*hidden argument*/NULL);
	}

IL_012a:
	{
		// }
		return;
	}
}
// System.Void FinishScript::sonrakiLevelKontrolcusu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript_sonrakiLevelKontrolcusu_m9B44CF5C71B458893D310A73B68B6E891134544F (FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3158C0AA1B2FBDD48276A69BC83822C63C997CAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABFB43D5E5F90FB3352973159CCE2626B6F7F162);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62E5E23E767269057CF5F9E166B52806CE08216);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB11585D92F213545FC6FD07A0A05B5E80E7E873);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int currentLevel = SceneManager.GetActiveScene().buildIndex;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_2 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_1;
		// int savedCollectedStars = PlayerPrefs.GetInt("LevelStarCount_" + currentLevel, 0);
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3158C0AA1B2FBDD48276A69BC83822C63C997CAA, L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(L_3, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (toplananItem > savedCollectedStars)
		int32_t L_5 = __this->get_toplananItem_8();
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_004b;
		}
	}
	{
		// PlayerPrefs.SetInt("LevelStarCount_" + currentLevel, toplananItem);
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3158C0AA1B2FBDD48276A69BC83822C63C997CAA, L_7, /*hidden argument*/NULL);
		int32_t L_9 = __this->get_toplananItem_8();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_8, L_9, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// if (currentLevel == PlayerPrefs.GetInt("seviyeSayisi")+1)
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralFB11585D92F213545FC6FD07A0A05B5E80E7E873, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1))))))
		{
			goto IL_0065;
		}
	}
	{
		// Debug.Log("Oyun Sonu");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralABFB43D5E5F90FB3352973159CCE2626B6F7F162, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0065:
	{
		// if (PlayerPrefs.GetInt("LastActiveLevel", 1) < currentLevel + 1)
		int32_t L_12;
		L_12 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralD62E5E23E767269057CF5F9E166B52806CE08216, 1, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)))))
		{
			goto IL_0082;
		}
	}
	{
		// PlayerPrefs.SetInt("LastActiveLevel", currentLevel + 1);
		int32_t L_14 = V_0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralD62E5E23E767269057CF5F9E166B52806CE08216, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0082:
	{
		// SceneManager.LoadScene(currentLevel + 1);
		int32_t L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FinishScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript_Start_mE4CF0EFE2513728000A2BE8D0F5824012D8518A3 (FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FinishScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript_Update_mBF88E4AA75C195CED365CB19113E0AEBA7C4C8C8 (FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C * __this, const RuntimeMethod* method)
{
	{
		// portalGate1 = PortalGate1End.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_PortalGate1End_6();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_portalGate1_4(L_2);
		// portalGate2 = PortalGate2End.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_PortalGate2End_7();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		__this->set_portalGate2_5(L_5);
		// }
		return;
	}
}
// System.Void FinishScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript__ctor_m76216732D45283E3478483F77A4D6D6F912549CB (FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FinishScript2::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript2_OnTriggerEnter2D_mFB4A8E9AE32370B8FA2EEAAE1C7130EB7CC7EADF (FinishScript2_tF83BB14AF75F0FB96CA83F950D1F04582407E225 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral172D239F491E2C3D788CB795A5FCE77D85CB1913);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE33ED4C9934A8E0E3C21129BD34F4CF224E719F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Finish"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// sonrakiLevelKontrolcusu();
		FinishScript2_sonrakiLevelKontrolcusu_m41E810603721B012E3812E93453EEBF164868BFA(__this, /*hidden argument*/NULL);
		// GetComponent<AudioSource>().PlayOneShot(sesler[1]);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4;
		L_4 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_5 = __this->get_sesler_6();
		NullCheck(L_5);
		int32_t L_6 = 1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_4, L_7, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// if (other.gameObject.tag.Contains("End"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___other0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_10, _stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (other.gameObject.tag.Contains("Star"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12 = ___other0;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_14, _stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00b0;
		}
	}
	{
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = ___other0;
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_17, /*hidden argument*/NULL);
		// toplananItem += 1;
		int32_t L_18 = __this->get_toplananItem_4();
		__this->set_toplananItem_4(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		// skor.text = "Stars = " + toplananItem;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_skor_5();
		int32_t* L_20 = __this->get_address_of_toplananItem_4();
		String_t* L_21;
		L_21 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_20, /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral172D239F491E2C3D788CB795A5FCE77D85CB1913, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_22);
		// GetComponent<AudioSource>().PlayOneShot(sesler[0]);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_23;
		L_23 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_24 = __this->get_sesler_6();
		NullCheck(L_24);
		int32_t L_25 = 0;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_23, L_26, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// if (other.gameObject.tag.Contains("Deneme"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_27 = ___other0;
		NullCheck(L_27);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_30;
		L_30 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_29, _stringLiteralE33ED4C9934A8E0E3C21129BD34F4CF224E719F2, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00da;
		}
	}
	{
		// GetComponent<AudioSource>().PlayOneShot(sesler[1]);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_31;
		L_31 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_32 = __this->get_sesler_6();
		NullCheck(L_32);
		int32_t L_33 = 1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_31);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_31, L_34, /*hidden argument*/NULL);
	}

IL_00da:
	{
		// }
		return;
	}
}
// System.Void FinishScript2::sonrakiLevelKontrolcusu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript2_sonrakiLevelKontrolcusu_m41E810603721B012E3812E93453EEBF164868BFA (FinishScript2_tF83BB14AF75F0FB96CA83F950D1F04582407E225 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3158C0AA1B2FBDD48276A69BC83822C63C997CAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABFB43D5E5F90FB3352973159CCE2626B6F7F162);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62E5E23E767269057CF5F9E166B52806CE08216);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB11585D92F213545FC6FD07A0A05B5E80E7E873);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int currentLevel = SceneManager.GetActiveScene().buildIndex;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_2 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_1;
		// int savedCollectedStars = PlayerPrefs.GetInt("LevelStarCount_" + currentLevel, 0);
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3158C0AA1B2FBDD48276A69BC83822C63C997CAA, L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(L_3, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (toplananItem > savedCollectedStars)
		int32_t L_5 = __this->get_toplananItem_4();
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_004b;
		}
	}
	{
		// PlayerPrefs.SetInt("LevelStarCount_" + currentLevel, toplananItem);
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3158C0AA1B2FBDD48276A69BC83822C63C997CAA, L_7, /*hidden argument*/NULL);
		int32_t L_9 = __this->get_toplananItem_4();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_8, L_9, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// if (currentLevel == PlayerPrefs.GetInt("seviyeSayisi") + 1)
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralFB11585D92F213545FC6FD07A0A05B5E80E7E873, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1))))))
		{
			goto IL_0065;
		}
	}
	{
		// Debug.Log("Oyun Sonu");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralABFB43D5E5F90FB3352973159CCE2626B6F7F162, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0065:
	{
		// if (PlayerPrefs.GetInt("LastActiveLevel", 1) < currentLevel + 1)
		int32_t L_12;
		L_12 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralD62E5E23E767269057CF5F9E166B52806CE08216, 1, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)))))
		{
			goto IL_0082;
		}
	}
	{
		// PlayerPrefs.SetInt("LastActiveLevel", currentLevel + 1);
		int32_t L_14 = V_0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralD62E5E23E767269057CF5F9E166B52806CE08216, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0082:
	{
		// SceneManager.LoadScene(currentLevel + 1);
		int32_t L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FinishScript2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript2_Start_mEDF11AC8E0DA797DE16E26A76049139FFF6A27A8 (FinishScript2_tF83BB14AF75F0FB96CA83F950D1F04582407E225 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FinishScript2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript2_Update_m887992BFE85E0FA0792B080DE40EC6474D8F6A64 (FinishScript2_tF83BB14AF75F0FB96CA83F950D1F04582407E225 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FinishScript2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript2__ctor_mC4E4D08847B63DBC59FCF4A5F850AE251010E8DB (FinishScript2_tF83BB14AF75F0FB96CA83F950D1F04582407E225 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FinishScript3::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript3_OnTriggerEnter2D_m387251485C161F532B38B9ACC8934C4AC6BD8BA1 (FinishScript3_t9E3F3F31B04935B86970C10BFC771A2C719DA521 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0260F12FCE640BC2BB89FD8551E6533DD41961AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral172D239F491E2C3D788CB795A5FCE77D85CB1913);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE33ED4C9934A8E0E3C21129BD34F4CF224E719F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Finish"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// sonrakiLevelKontrolcusu();
		FinishScript3_sonrakiLevelKontrolcusu_mA3389C7D10A6181B41028B1B22165EF979A3C035(__this, /*hidden argument*/NULL);
		// GetComponent<AudioSource>().PlayOneShot(sesler[1]);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4;
		L_4 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_5 = __this->get_sesler_8();
		NullCheck(L_5);
		int32_t L_6 = 1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_4, L_7, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// if (other.gameObject.tag.Contains("End"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___other0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_10, _stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (other.gameObject.tag.Contains("Star"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12 = ___other0;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_14, _stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00b0;
		}
	}
	{
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = ___other0;
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_17, /*hidden argument*/NULL);
		// toplananItem += 1;
		int32_t L_18 = __this->get_toplananItem_6();
		__this->set_toplananItem_6(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		// skor.text = "Stars = " + toplananItem;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_skor_7();
		int32_t* L_20 = __this->get_address_of_toplananItem_6();
		String_t* L_21;
		L_21 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_20, /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral172D239F491E2C3D788CB795A5FCE77D85CB1913, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_22);
		// GetComponent<AudioSource>().PlayOneShot(sesler[0]);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_23;
		L_23 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_24 = __this->get_sesler_8();
		NullCheck(L_24);
		int32_t L_25 = 0;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_23, L_26, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// if (other.gameObject.tag.Contains("portal"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_27 = ___other0;
		NullCheck(L_27);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_30;
		L_30 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_29, _stringLiteral0260F12FCE640BC2BB89FD8551E6533DD41961AF, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d8;
		}
	}
	{
		// transform.position = portalGate1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = __this->get_portalGate1_4();
		NullCheck(L_31);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		// if (other.gameObject.tag.Contains("Deneme"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_33 = ___other0;
		NullCheck(L_33);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		bool L_36;
		L_36 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_35, _stringLiteralE33ED4C9934A8E0E3C21129BD34F4CF224E719F2, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0102;
		}
	}
	{
		// GetComponent<AudioSource>().PlayOneShot(sesler[1]);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_37;
		L_37 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_38 = __this->get_sesler_8();
		NullCheck(L_38);
		int32_t L_39 = 1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_37);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_37, L_40, /*hidden argument*/NULL);
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Void FinishScript3::sonrakiLevelKontrolcusu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript3_sonrakiLevelKontrolcusu_mA3389C7D10A6181B41028B1B22165EF979A3C035 (FinishScript3_t9E3F3F31B04935B86970C10BFC771A2C719DA521 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3158C0AA1B2FBDD48276A69BC83822C63C997CAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABFB43D5E5F90FB3352973159CCE2626B6F7F162);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62E5E23E767269057CF5F9E166B52806CE08216);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB11585D92F213545FC6FD07A0A05B5E80E7E873);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int currentLevel = SceneManager.GetActiveScene().buildIndex;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_2 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_1;
		// int savedCollectedStars = PlayerPrefs.GetInt("LevelStarCount_" + currentLevel, 0);
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3158C0AA1B2FBDD48276A69BC83822C63C997CAA, L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(L_3, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (toplananItem > savedCollectedStars)
		int32_t L_5 = __this->get_toplananItem_6();
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_004b;
		}
	}
	{
		// PlayerPrefs.SetInt("LevelStarCount_" + currentLevel, toplananItem);
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3158C0AA1B2FBDD48276A69BC83822C63C997CAA, L_7, /*hidden argument*/NULL);
		int32_t L_9 = __this->get_toplananItem_6();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_8, L_9, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// if (currentLevel == PlayerPrefs.GetInt("seviyeSayisi") + 1)
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralFB11585D92F213545FC6FD07A0A05B5E80E7E873, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1))))))
		{
			goto IL_0065;
		}
	}
	{
		// Debug.Log("Oyun Sonu");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralABFB43D5E5F90FB3352973159CCE2626B6F7F162, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0065:
	{
		// if (PlayerPrefs.GetInt("LastActiveLevel", 1) < currentLevel + 1)
		int32_t L_12;
		L_12 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralD62E5E23E767269057CF5F9E166B52806CE08216, 1, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)))))
		{
			goto IL_0082;
		}
	}
	{
		// PlayerPrefs.SetInt("LastActiveLevel", currentLevel + 1);
		int32_t L_14 = V_0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralD62E5E23E767269057CF5F9E166B52806CE08216, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0082:
	{
		// SceneManager.LoadScene(currentLevel + 1);
		int32_t L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FinishScript3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript3_Start_m22597D4A78FF847F45FAFD8346D056742295C70B (FinishScript3_t9E3F3F31B04935B86970C10BFC771A2C719DA521 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FinishScript3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript3_Update_m59C8231D8C807241E61404D890BF11A13C865C30 (FinishScript3_t9E3F3F31B04935B86970C10BFC771A2C719DA521 * __this, const RuntimeMethod* method)
{
	{
		// portalGate1 = PortalGate1End.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_PortalGate1End_5();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_portalGate1_4(L_2);
		// }
		return;
	}
}
// System.Void FinishScript3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript3__ctor_mEE439CD1B6622FFD41F77CCA10F33A644D1B7335 (FinishScript3_t9E3F3F31B04935B86970C10BFC771A2C719DA521 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void HareketliObje::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HareketliObje_Update_mADC5A58CF6FC98964ABD191CADCC9BE0F8D1F330 (HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E * __this, const RuntimeMethod* method)
{
	HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E * G_B5_0 = NULL;
	HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E * G_B6_1 = NULL;
	{
		// var distance = Vector3.Distance(transform.position, waypoints[destinationNumber].position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = __this->get_waypoints_4();
		int32_t L_3 = __this->get_destinationNumber_7();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_1, L_6, /*hidden argument*/NULL);
		// if (distance > 0f)
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// Move();
		HareketliObje_Move_mFBC9B096C57E4FCA4859707C312670F2FAC7FCBD(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0030:
	{
		// if (!randomSystem)
		bool L_8 = __this->get_randomSystem_6();
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		// destinationNumber = destinationNumber + 1 == waypoints.Length ? 0 : destinationNumber + 1;
		int32_t L_9 = __this->get_destinationNumber_7();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10 = __this->get_waypoints_4();
		NullCheck(L_10);
		G_B4_0 = __this;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			G_B5_0 = __this;
			goto IL_0055;
		}
	}
	{
		int32_t L_11 = __this->get_destinationNumber_7();
		G_B6_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		G_B6_1 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0056:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_destinationNumber_7(G_B6_0);
		// }
		return;
	}

IL_005c:
	{
		// destinationNumber = GetRandomDestNumber();
		int32_t L_12;
		L_12 = HareketliObje_GetRandomDestNumber_m2C9FF7EE6F2D3DB9B37EEAFC2866158830B9AAF7(__this, /*hidden argument*/NULL);
		__this->set_destinationNumber_7(L_12);
		// }
		return;
	}
}
// System.Void HareketliObje::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HareketliObje_Move_mFBC9B096C57E4FCA4859707C312670F2FAC7FCBD (HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E * __this, const RuntimeMethod* method)
{
	{
		// transform.position = Vector3.MoveTowards(transform.position, waypoints[destinationNumber].position, speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = __this->get_waypoints_4();
		int32_t L_4 = __this->get_destinationNumber_7();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_speed_5();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_2, L_7, ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 HareketliObje::GetRandomDestNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HareketliObje_GetRandomDestNumber_m2C9FF7EE6F2D3DB9B37EEAFC2866158830B9AAF7 (HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E * __this, const RuntimeMethod* method)
{
	{
		// int retVal = Random.Range(0, waypoints.Length);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_waypoints_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		// return retVal;
		return L_1;
	}
}
// System.Void HareketliObje::rotateMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HareketliObje_rotateMe_m4EC0E059424B242C26BE93AB6398F706799A153F (HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector3 toTargetVector = waypoints[destinationNumber].position - transform.position;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_waypoints_4();
		int32_t L_1 = __this->get_destinationNumber_7();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// float zRotation = (Mathf.Atan2(toTargetVector.y, toTargetVector.x) * Mathf.Rad2Deg) - 90.0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_x_2();
		float L_12;
		L_12 = atan2f(L_9, L_11);
		V_1 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_12, (float)(57.2957802f))), (float)(90.0f)));
		// transform.rotation = Quaternion.Euler(new Vector3(0, 0, zRotation));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), (0.0f), (0.0f), L_14, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_13, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HareketliObje::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HareketliObje__ctor_m9D13485642CB3F04EFB0A276D5578C8C451BFFA9 (HareketliObje_tE2A00EEDCDC25F9815AA2D7415E1C329F89A413E * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private bool randomSystem = true;
		__this->set_randomSystem_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Karakter::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Karakter_OnTriggerEnter_m2064C151BFFA8BDD31BBD38C536712BDD490C4AD (Karakter_tF2D98047571D686D310D9564B69D8410347874A9 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC679E6F696FDB89405933064A037E339D40182A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// sonrakiLevelKontrolcusu();
		Karakter_sonrakiLevelKontrolcusu_mA39321EBF84043EBF7A44367D5C093A7CD806A6B(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Leveller"); //level se?im ekran?
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralC679E6F696FDB89405933064A037E339D40182A0, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Karakter::sonrakiLevelKontrolcusu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Karakter_sonrakiLevelKontrolcusu_mA39321EBF84043EBF7A44367D5C093A7CD806A6B (Karakter_tF2D98047571D686D310D9564B69D8410347874A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64008DC3354788659E4680C8940205E4D94BB9B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABFB43D5E5F90FB3352973159CCE2626B6F7F162);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB11585D92F213545FC6FD07A0A05B5E80E7E873);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// string currentLevel = levelAdi(SceneManager.GetActiveScene().buildIndex);// (PlayerPrefs.GetString("suankiSecilenLevel");) Yenilendi ??nk? level ekran?ndan ge?i?te kaydetti?imiz leveli al?yorduk fakat sonraki levele bu sahneden ge?ince kay?tl? level eskisi kal?yor o y?zden direk aktif sahne build indexinden ad?n? ?a??r?p i?lem yapt?r?yoruz.
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_2 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Karakter_levelAdi_m33324D7E80DA12D5A4996D211839C78573D09BF6(__this, L_1, /*hidden argument*/NULL);
		// int currentLevelID = int.Parse(currentLevel.Split('_')[1]); //Level_id bi?iminde oldu?undan sa?taraf yani (id)
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)95));
		NullCheck(L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5;
		L_5 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = 1;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8;
		L_8 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// int nextLevel = PlayerPrefs.GetInt("level") + 1;
		int32_t L_9;
		L_9 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		// if (currentLevelID == PlayerPrefs.GetInt("seviyeSayisi"))
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralFB11585D92F213545FC6FD07A0A05B5E80E7E873, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_006d;
		}
	}
	{
		// Debug.Log("Oyun Sonu");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralABFB43D5E5F90FB3352973159CCE2626B6F7F162, /*hidden argument*/NULL);
		// bolumSonu_P.transform.GetChild(1).gameObject.SetActive(false); //sonraki level butonunu kapat?yoruz oyun sonuna gelindi?i i?in
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_bolumSonu_P_4();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_13, 1, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_00a6;
	}

IL_006d:
	{
		// if (nextLevel - currentLevelID == 1)
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17))) == ((uint32_t)1))))
		{
			goto IL_0080;
		}
	}
	{
		// PlayerPrefs.SetInt("level", nextLevel);
		int32_t L_18 = V_1;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, L_18, /*hidden argument*/NULL);
		goto IL_008a;
	}

IL_0080:
	{
		// Debug.Log("?nceden A??lm?? bir b?l?me girdiniz.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral64008DC3354788659E4680C8940205E4D94BB9B6, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// bolumSonu_P.transform.GetChild(1).gameObject.SetActive(true); // sonraki level butonu aktif(e?er son bol?me kadar gidip tekrar onceki bolumlere girerse diye aktif hale getiriyoruz.)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_bolumSonu_P_4();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_20, 1, /*hidden argument*/NULL);
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, (bool)1, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		// bolumSonuPanel(); //bolum sonu panel i?lemlerini ba?lat
		Karakter_bolumSonuPanel_mFFA2E391210D8EC023C8BF60500FB095071D41AE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Karakter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Karakter_Start_mA6111830C40FB6B0E16960ACC7CC2A5B85AECE83 (Karakter_tF2D98047571D686D310D9564B69D8410347874A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0_m0FCBC3187971F61471BF179A49471DE298CB26F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sahneGecis = GameObject.Find("GameManager").GetComponent<SahneGecis>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		NullCheck(L_0);
		SahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0 * L_1;
		L_1 = GameObject_GetComponent_TisSahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0_m0FCBC3187971F61471BF179A49471DE298CB26F4(L_0, /*hidden argument*/GameObject_GetComponent_TisSahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0_m0FCBC3187971F61471BF179A49471DE298CB26F4_RuntimeMethod_var);
		__this->set_sahneGecis_6(L_1);
		// }
		return;
	}
}
// System.Void Karakter::bolumSonuPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Karakter_bolumSonuPanel_mFFA2E391210D8EC023C8BF60500FB095071D41AE (Karakter_tF2D98047571D686D310D9564B69D8410347874A9 * __this, const RuntimeMethod* method)
{
	{
		// bolumSonu_P.SetActive(true);//Panel A?
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_bolumSonu_P_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Karakter::levelAdi(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Karakter_levelAdi_m33324D7E80DA12D5A4996D211839C78573D09BF6 (Karakter_tF2D98047571D686D310D9564B69D8410347874A9 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string scenePath = SceneUtility.GetScenePathByBuildIndex(id);
		int32_t L_0 = ___id0;
		String_t* L_1;
		L_1 = SceneUtility_GetScenePathByBuildIndex_m828FC90C09BB0E45E6A2EAC59C1490B86B434F11(L_0, /*hidden argument*/NULL);
		// string sceneName = System.IO.Path.GetFileNameWithoutExtension(scenePath);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2(L_1, /*hidden argument*/NULL);
		// return sceneName;
		return L_2;
	}
}
// System.Void Karakter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Karakter__ctor_mE3131C178E670DE6B00F526116FC119A968335E2 (Karakter_tF2D98047571D686D310D9564B69D8410347874A9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Level::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Start_m3AFB1BB04202925E1F69EF40CB6006AF3CBFA16B (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mAB159CED4EA42F6E700527382D795CCD31EF293F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14CE35AEE7E6C85576616A5851117B295A2343C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3158C0AA1B2FBDD48276A69BC83822C63C997CAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62E5E23E767269057CF5F9E166B52806CE08216);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * G_B17_0 = NULL;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * G_B18_1 = NULL;
	{
		// var starsContainer = gameObject.transform.Find("Stars");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_1, _stringLiteral14CE35AEE7E6C85576616A5851117B295A2343C1, /*hidden argument*/NULL);
		V_0 = L_2;
		// stars = new GameObject[starsContainer.childCount];
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_3, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->set_stars_6(L_5);
		// var curStarCount = 0;
		V_1 = 0;
		// foreach (Transform child in starsContainer)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
	}

IL_0030:
	try
	{// begin try (depth: 1)
		{
			goto IL_0050;
		}

IL_0032:
		{
			// foreach (Transform child in starsContainer)
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			RuntimeObject * L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			V_3 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_9, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// stars[curStarCount] = child.gameObject;
			GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_stars_6();
			int32_t L_11 = V_1;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_3;
			NullCheck(L_12);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
			L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_13);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_13);
			// curStarCount++;
			int32_t L_14 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		}

IL_0050:
		{
			// foreach (Transform child in starsContainer)
			RuntimeObject* L_15 = V_2;
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0032;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_005a);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{// begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_2;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_18 = V_4;
			if (!L_18)
			{
				goto IL_006d;
			}
		}

IL_0066:
		{
			RuntimeObject* L_19 = V_4;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
		}

IL_006d:
		{
			IL2CPP_END_FINALLY(90)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
	}

IL_006e:
	{
		// levelButton = gameObject.GetComponent<Button>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_21;
		L_21 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mAB159CED4EA42F6E700527382D795CCD31EF293F(L_20, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mAB159CED4EA42F6E700527382D795CCD31EF293F_RuntimeMethod_var);
		__this->set_levelButton_5(L_21);
		// levelStarCount = PlayerPrefs.GetInt("LevelStarCount_" + levelNumber, 0);
		int32_t* L_22 = __this->get_address_of_levelNumber_4();
		String_t* L_23;
		L_23 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_22, /*hidden argument*/NULL);
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3158C0AA1B2FBDD48276A69BC83822C63C997CAA, L_23, /*hidden argument*/NULL);
		int32_t L_25;
		L_25 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(L_24, 0, /*hidden argument*/NULL);
		__this->set_levelStarCount_7(L_25);
		// foreach (var star in stars)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_26 = __this->get_stars_6();
		V_5 = L_26;
		V_6 = 0;
		goto IL_00be;
	}

IL_00ad:
	{
		// foreach (var star in stars)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_27 = V_5;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		// star.SetActive(false);
		NullCheck(L_30);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)0, /*hidden argument*/NULL);
		int32_t L_31 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00be:
	{
		// foreach (var star in stars)
		int32_t L_32 = V_6;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_33 = V_5;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_00ad;
		}
	}
	{
		// if (levelStarCount > 0)
		int32_t L_34 = __this->get_levelStarCount_7();
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		// for (var i = 0; i < levelStarCount; i++)
		V_7 = 0;
		goto IL_00e9;
	}

IL_00d4:
	{
		// stars[i].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_35 = __this->get_stars_6();
		int32_t L_36 = V_7;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_38, (bool)1, /*hidden argument*/NULL);
		// for (var i = 0; i < levelStarCount; i++)
		int32_t L_39 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00e9:
	{
		// for (var i = 0; i < levelStarCount; i++)
		int32_t L_40 = V_7;
		int32_t L_41 = __this->get_levelStarCount_7();
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_00d4;
		}
	}

IL_00f3:
	{
		// levelButton.interactable = PlayerPrefs.GetInt("LastActiveLevel", 2) >= levelNumber ? true : false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_42 = __this->get_levelButton_5();
		int32_t L_43;
		L_43 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralD62E5E23E767269057CF5F9E166B52806CE08216, 2, /*hidden argument*/NULL);
		int32_t L_44 = __this->get_levelNumber_4();
		G_B16_0 = L_42;
		if ((((int32_t)L_43) >= ((int32_t)L_44)))
		{
			G_B17_0 = L_42;
			goto IL_010f;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		goto IL_0110;
	}

IL_010f:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
	}

IL_0110:
	{
		NullCheck(G_B18_1);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(G_B18_1, (bool)G_B18_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Level::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level__ctor_mBBC9E192AD5FC6CC5FA5DFA55E8CA13E182C353A (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LockSystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockSystem_Start_mF4973D673EDF4CCDA1FABFF74FC5DD66E9B36153 (LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5817F8250B8E8982610A594079B47A218B61307);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB11585D92F213545FC6FD07A0A05B5E80E7E873);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PlayerPrefs.HasKey("level"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		// PlayerPrefs.SetInt("level", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, 1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// PlayerPrefs.SetInt("seviyeSayisi", leveller.Count);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_1 = __this->get_leveller_4();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_1, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralFB11585D92F213545FC6FD07A0A05B5E80E7E873, L_2, /*hidden argument*/NULL);
		// kilitleriAc();
		LockSystem_kilitleriAc_m16EA405FFA9ACE105DF2F272A9FEB71AAFC79EE6(__this, /*hidden argument*/NULL);
		// if (!PlayerPrefs.HasKey("yildizlar"))
		bool L_3;
		L_3 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteralA5817F8250B8E8982610A594079B47A218B61307, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		// yildizlariDoldur();
		LockSystem_yildizlariDoldur_m969B0C214E6A6E22688C641F002D6D5E9B8E3532(__this, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// yildizlariAktifEt();
		LockSystem_yildizlariAktifEt_mED7CDD06CD50C4F43912814BBFA8FB31C64EE72F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LockSystem::yildizlariDoldur()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockSystem_yildizlariDoldur_m969B0C214E6A6E22688C641F002D6D5E9B8E3532 (LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65BA91203A663E41B60DEDB3701C8CEF5DD2E1B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5817F8250B8E8982610A594079B47A218B61307);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < leveller.Count; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// yildizSayisi_S += "0,";
		String_t* L_0 = __this->get_yildizSayisi_S_5();
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral65BA91203A663E41B60DEDB3701C8CEF5DD2E1B8, /*hidden argument*/NULL);
		__this->set_yildizSayisi_S_5(L_1);
		// for (int i = 0; i < leveller.Count; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_001e:
	{
		// for (int i = 0; i < leveller.Count; i++)
		int32_t L_3 = V_0;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_4 = __this->get_leveller_4();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_4, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0004;
		}
	}
	{
		// PlayerPrefs.SetString("yildizlar", yildizSayisi_S);
		String_t* L_6 = __this->get_yildizSayisi_S_5();
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteralA5817F8250B8E8982610A594079B47A218B61307, L_6, /*hidden argument*/NULL);
		// yildizSayisi_S = PlayerPrefs.GetString("yildizlar");
		String_t* L_7;
		L_7 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralA5817F8250B8E8982610A594079B47A218B61307, /*hidden argument*/NULL);
		__this->set_yildizSayisi_S_5(L_7);
		// }
		return;
	}
}
// System.Void LockSystem::yildizlariAktifEt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockSystem_yildizlariAktifEt_mED7CDD06CD50C4F43912814BBFA8FB31C64EE72F (LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m77F12A63EB4FD22AA4D725B91DC135C20B32AE0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5817F8250B8E8982610A594079B47A218B61307);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// yeniYildizlar = PlayerPrefs.GetString("yildizlar").Split(',');
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralA5817F8250B8E8982610A594079B47A218B61307, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		__this->set_yeniYildizlar_6(L_3);
		// for (int i = 0; i < leveller.Count; i++)
		V_0 = 0;
		goto IL_0080;
	}

IL_0024:
	{
		// for (int j = 0; j < int.Parse(yeniYildizlar[i]); j++)
		V_1 = 0;
		goto IL_006c;
	}

IL_0028:
	{
		// leveller[i].transform.GetChild(1).GetChild(j).GetComponent<Image>().color = new Color(255, 255, 255, 255);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_4 = __this->get_leveller_4();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6;
		L_6 = List_1_get_Item_m77F12A63EB4FD22AA4D725B91DC135C20B32AE0A_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m77F12A63EB4FD22AA4D725B91DC135C20B32AE0A_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_7, 1, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11;
		L_11 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D(L_10, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_12), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// for (int j = 0; j < int.Parse(yeniYildizlar[i]); j++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_006c:
	{
		// for (int j = 0; j < int.Parse(yeniYildizlar[i]); j++)
		int32_t L_14 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = __this->get_yeniYildizlar_6();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19;
		L_19 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)L_19)))
		{
			goto IL_0028;
		}
	}
	{
		// for (int i = 0; i < leveller.Count; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0080:
	{
		// for (int i = 0; i < leveller.Count; i++)
		int32_t L_21 = V_0;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_22 = __this->get_leveller_4();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_22, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0024;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LockSystem::kilitleriAc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockSystem_kilitleriAc_m16EA405FFA9ACE105DF2F272A9FEB71AAFC79EE6 (LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m77F12A63EB4FD22AA4D725B91DC135C20B32AE0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < PlayerPrefs.GetInt("level"); i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// leveller[i].interactable = true;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_0 = __this->get_leveller_4();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2;
		L_2 = List_1_get_Item_m77F12A63EB4FD22AA4D725B91DC135C20B32AE0A_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m77F12A63EB4FD22AA4D725B91DC135C20B32AE0A_RuntimeMethod_var);
		NullCheck(L_2);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_2, (bool)1, /*hidden argument*/NULL);
		// for (int i = 0; i < PlayerPrefs.GetInt("level"); i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001a:
	{
		// for (int i = 0; i < PlayerPrefs.GetInt("level"); i++)
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.String LockSystem::levelAdi(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LockSystem_levelAdi_mE288B5B7379613A50445DA4474DA54112DD7B203 (LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string scenePath = SceneUtility.GetScenePathByBuildIndex(id);
		int32_t L_0 = ___id0;
		String_t* L_1;
		L_1 = SceneUtility_GetScenePathByBuildIndex_m828FC90C09BB0E45E6A2EAC59C1490B86B434F11(L_0, /*hidden argument*/NULL);
		// string sceneName = System.IO.Path.GetFileNameWithoutExtension(scenePath);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2(L_1, /*hidden argument*/NULL);
		// return sceneName;
		return L_2;
	}
}
// System.Void LockSystem::levelAc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockSystem_levelAc_m8784944BA1B73E5F34BD080C578DC637D710956A (LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(levelAdi(id));
		int32_t L_0 = ___id0;
		String_t* L_1;
		L_1 = LockSystem_levelAdi_mE288B5B7379613A50445DA4474DA54112DD7B203(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// AdManager.InsterstitialGoster();
		IL2CPP_RUNTIME_CLASS_INIT(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8_il2cpp_TypeInfo_var);
		AdManager_InsterstitialGoster_m7779D520E0CBBDB9F51004AF841A39EE2D5BC958(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LockSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockSystem__ctor_m2A9418386CE14FC707095D5A1E22C60A66932AE3 (LockSystem_tB591B66CDDB5EC01C7B232F54CBF15293ED5A9B9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MenuScript::PlayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_PlayButton_m29EBA95AF419DE7CDB4C87C0D5827622D2056840 (MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuScript::SettingsButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_SettingsButton_m2DEE34EFD65A6EAF37088249479C6E0FA98CFEF7 (MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MenuScript::QuitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_QuitButton_mA969963BA3568E07629752C5655443C56D6620D8 (MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript__ctor_m5DE33EE74C32A13B9B00105C42F0E6FC738C3DF6 (MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SahneGecis::SahneDegistir(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SahneGecis_SahneDegistir_mBF903C6B107F7981722BC211D9ECCFFC7487DBB3 (SahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0 * __this, String_t* ___sahne_Adi0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sahne_Adi);
		String_t* L_0 = ___sahne_Adi0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SahneGecis::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SahneGecis__ctor_m12487C775DE8E7661FD4629B8FA97E5CBB0C809F (SahneGecis_t566A364F637A8D07A4DD8E6AA275C7D64F7D44F0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Turn1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turn1_Start_m02E673505606060A9D415F2909BC93A41C2124BA (Turn1_tFC76FFA3D6031E595E0F9AA4E06F9AB6A5A33679 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Turn1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turn1_Update_m4E4F372B4BE4C2D4B8DF07437AEF0921D32FDCEF (Turn1_tFC76FFA3D6031E595E0F9AA4E06F9AB6A5A33679 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, 0, -(rotationSpeed));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_rotationSpeed_4();
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), (0.0f), ((-L_1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Turn1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turn1__ctor_mD5C7155D120FA8EC4A54AA0931DE071D24595217 (Turn1_tFC76FFA3D6031E595E0F9AA4E06F9AB6A5A33679 * __this, const RuntimeMethod* method)
{
	{
		// private float rotationSpeed = 0.7f;
		__this->set_rotationSpeed_4((0.699999988f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TurnDanger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnDanger_Start_mA4BFB620EAE52798D01EB0D5528F511C160AA8C6 (TurnDanger_tB3244C400B69C0CF14C9FA7D7B51969CF6F17994 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TurnDanger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnDanger_Update_mA15EC9BD38ACC9B764553DB146ADD1D1582B0CFB (TurnDanger_tB3244C400B69C0CF14C9FA7D7B51969CF6F17994 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, 0, -(rotationSpeed));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_rotationSpeed_4();
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), (0.0f), ((-L_1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TurnDanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnDanger__ctor_m0E6993476BDCDBA26B83BA80DC15324C6E58C726 (TurnDanger_tB3244C400B69C0CF14C9FA7D7B51969CF6F17994 * __this, const RuntimeMethod* method)
{
	{
		// private float rotationSpeed = 1.7f;
		__this->set_rotationSpeed_4((1.70000005f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TurnDanger1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnDanger1_Start_mA915A4FD155EA1DF4A7C8EA3E5CCD10FE897F62D (TurnDanger1_tD7D02B01985F25795D5437D3127FB9AFA78E41A7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TurnDanger1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnDanger1_Update_mBC777B81E63C1D8F97E475A4700248EF387EEC2F (TurnDanger1_tD7D02B01985F25795D5437D3127FB9AFA78E41A7 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, 0, -(rotationSpeed));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_rotationSpeed_4();
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), (0.0f), ((-L_1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TurnDanger1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnDanger1__ctor_mFD0BF3E143C2B0550E2395113BD483EC60003271 (TurnDanger1_tD7D02B01985F25795D5437D3127FB9AFA78E41A7 * __this, const RuntimeMethod* method)
{
	{
		// private float rotationSpeed = 0.2f;
		__this->set_rotationSpeed_4((0.200000003f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TurnLeft::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnLeft_Start_m03AD39BCE9A96142D9DA30CE02695ED3FEF5C77F (TurnLeft_t2962B74C031E172321D277D20219EC36F987846D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TurnLeft::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnLeft_Update_mF7BFB06C75041D2CB1B6EB5265A7CA3209D6840F (TurnLeft_t2962B74C031E172321D277D20219EC36F987846D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TurnLeft::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnLeft__ctor_m64BAAAE58A26FAEACEBF1327514870E0F7E07D28 (TurnLeft_t2962B74C031E172321D277D20219EC36F987846D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TurnRight::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnRight_Start_m057F5455568E90267311A2C0937DDFACBC8BD36B (TurnRight_t94AC1DFA10613A7C9FD257E5F4A1030098DB9CFA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TurnRight::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnRight_Update_m23C3EE0040ED8F77BA3F0E1360E3D4DB8B42F3F9 (TurnRight_t94AC1DFA10613A7C9FD257E5F4A1030098DB9CFA * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, 0, -(rotationSpeed));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_rotationSpeed_4();
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), (0.0f), ((-L_1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TurnRight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnRight__ctor_m8B81671B2DC2B1A91AEA6F4372C1D2E38D98FBD5 (TurnRight_t94AC1DFA10613A7C9FD257E5F4A1030098DB9CFA * __this, const RuntimeMethod* method)
{
	{
		// private float rotationSpeed = 0.40f;
		__this->set_rotationSpeed_4((0.400000006f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void danger33::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void danger33_OnTriggerEnter2D_m1FA0AE0CA0F35A93649AD003081AA1CC1EA82F6A (danger33_tE8A276FF63F47DB7169169F67AD871C75B9762D9 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(34);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)34), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void danger33::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void danger33__ctor_m661E97A87FDDEB6BE38663074F9DC67503CEC050 (danger33_tE8A276FF63F47DB7169169F67AD871C75B9762D9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void danger34::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void danger34_OnTriggerEnter2D_mAC5A6D8A8CADE2A6A3BC19DD8411B9E1E9A20115 (danger34_tC25FBA26ED1B84A95CD525E65A0814E7177ADD82 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(35);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)35), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void danger34::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void danger34__ctor_mDDD16B51B3F96321621DBAE8155FD001E76B5830 (danger34_tC25FBA26ED1B84A95CD525E65A0814E7177ADD82 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void donenzemin2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void donenzemin2_Start_m3BAD9E2F4A08D05ABC08B26FA0D6B96156869174 (donenzemin2_tBFD357CDE9870B164E9F324B16AA0F825CA826F1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void donenzemin2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void donenzemin2_Update_m55B783DA4373E07282AD8AD2613D677FF283FA48 (donenzemin2_tBFD357CDE9870B164E9F324B16AA0F825CA826F1 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, 0, (rotationSpeed));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_rotationSpeed_4();
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void donenzemin2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void donenzemin2__ctor_mB49DF33CFABDEF196B0AAB1DFD1D92D2B8070164 (donenzemin2_tBFD357CDE9870B164E9F324B16AA0F825CA826F1 * __this, const RuntimeMethod* method)
{
	{
		// private float rotationSpeed = 2f;
		__this->set_rotationSpeed_4((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void donenzemin3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void donenzemin3_Start_mD66522813890DE1CD13285C74515C160B5DDD49C (donenzemin3_t3497D929F23DBA8E71E5379CD67B90256EA6E620 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void donenzemin3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void donenzemin3_Update_mA4CD5CAB890D200A6711511BDD615E7C5FEC5E1B (donenzemin3_t3497D929F23DBA8E71E5379CD67B90256EA6E620 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, 0, -(rotationSpeed));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_rotationSpeed_4();
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), (0.0f), ((-L_1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void donenzemin3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void donenzemin3__ctor_m1B9F84FE5DB43C559506F87275AB681E213D8C74 (donenzemin3_t3497D929F23DBA8E71E5379CD67B90256EA6E620 * __this, const RuntimeMethod* method)
{
	{
		// private float rotationSpeed = 0.45f;
		__this->set_rotationSpeed_4((0.449999988f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void harekeyliNesne::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void harekeyliNesne_Start_m076B688C21BF124A0B307D60576113D7F82AEB88 (harekeyliNesne_t590A3B77917BAD48C13854462A5DE3E9D6F5E9C7 * __this, const RuntimeMethod* method)
{
	{
		// startPos1 = platform.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_platform_9();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_startPos1_5(L_2);
		// startPos2 = nextPoint.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_nextPoint_8();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		__this->set_startPos2_6(L_5);
		// }
		return;
	}
}
// System.Void harekeyliNesne::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void harekeyliNesne_Update_mE62AC84DFD80999843DC1ABB11D7464DECE9DB56 (harekeyliNesne_t590A3B77917BAD48C13854462A5DE3E9D6F5E9C7 * __this, const RuntimeMethod* method)
{
	{
		// startPos1 = platform.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_platform_9();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_startPos1_5(L_2);
		// startPos2 = nextPoint.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_nextPoint_8();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		__this->set_startPos2_6(L_5);
		// platform.transform.position = Vector3.MoveTowards(platform.transform.position, startPos1, Time.deltaTime * speed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_platform_9();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_platform_9();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_startPos1_5();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_13 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_10, L_11, ((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_14, /*hidden argument*/NULL);
		// if (platform.transform.position == startPos1)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_platform_9();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = __this->get_startPos1_5();
		bool L_19;
		L_19 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b5;
		}
	}
	{
		// startPos1 = startPos2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = __this->get_startPos2_6();
		__this->set_startPos1_5(L_20);
		// if (startPos1 == startPos2)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = __this->get_startPos1_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = __this->get_startPos2_6();
		bool L_23;
		L_23 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b5;
		}
	}
	{
		// startPos2 = platform.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_platform_9();
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		__this->set_startPos2_6(L_26);
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void harekeyliNesne::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void harekeyliNesne__ctor_m95A1A0C5A5B3832CCAFAA37C0D6BD7ADFE1D1DC4 (harekeyliNesne_t590A3B77917BAD48C13854462A5DE3E9D6F5E9C7 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 2.0f;
		__this->set_speed_4((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void mazeTurn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mazeTurn_Update_m63AE63EF26A47CAEE26B43015DDA793A96C002CE (mazeTurn_tF44DEE6037B27319045C500529456C5F7A246C24 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.A))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)97), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Left();
		mazeTurn_Left_m57B5F37D2AC61362BFD0AD3CFB91AAC8CD603DAF(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// if (Input.GetKeyDown(KeyCode.D))
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Right();
		mazeTurn_Right_mA1CDC5EF2F88B0724711AFA13BCBF5D2809FE24B(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// if (Input.GetKeyUp(KeyCode.A) || Input.GetKeyUp(KeyCode.D))
		bool L_2;
		L_2 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)97), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)100), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}

IL_0030:
	{
		// dur();
		mazeTurn_dur_mB01E3CB42A6FCE3AEC7E8326134D1CCDF7C63451(__this, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// Move();
		mazeTurn_Move_m6EF188BFF2CB8D4A466AC1FA606D9C4440892D68(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void mazeTurn::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mazeTurn_Move_m6EF188BFF2CB8D4A466AC1FA606D9C4440892D68 (mazeTurn_tF44DEE6037B27319045C500529456C5F7A246C24 * __this, const RuntimeMethod* method)
{
	{
		// this.transform.RotateAround(new Vector3(0f, 0f, 0f), new Vector3(0f, 0f, movementSpeed), 51f * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		int32_t L_2 = __this->get_movementSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (0.0f), (0.0f), ((float)((float)L_2)), /*hidden argument*/NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_0, L_1, L_3, ((float)il2cpp_codegen_multiply((float)(51.0f), (float)L_4)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void mazeTurn::Left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mazeTurn_Left_m57B5F37D2AC61362BFD0AD3CFB91AAC8CD603DAF (mazeTurn_tF44DEE6037B27319045C500529456C5F7A246C24 * __this, const RuntimeMethod* method)
{
	{
		// movementSpeed = 1;
		__this->set_movementSpeed_4(1);
		// }
		return;
	}
}
// System.Void mazeTurn::Right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mazeTurn_Right_mA1CDC5EF2F88B0724711AFA13BCBF5D2809FE24B (mazeTurn_tF44DEE6037B27319045C500529456C5F7A246C24 * __this, const RuntimeMethod* method)
{
	{
		// movementSpeed = -1;
		__this->set_movementSpeed_4((-1));
		// }
		return;
	}
}
// System.Void mazeTurn::dur()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mazeTurn_dur_mB01E3CB42A6FCE3AEC7E8326134D1CCDF7C63451 (mazeTurn_tF44DEE6037B27319045C500529456C5F7A246C24 * __this, const RuntimeMethod* method)
{
	{
		// movementSpeed = 0;
		__this->set_movementSpeed_4(0);
		// }
		return;
	}
}
// System.Void mazeTurn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mazeTurn__ctor_mAAE57FC19F07CB57DF2170BB3C430B3D71CFD532 (mazeTurn_tF44DEE6037B27319045C500529456C5F7A246C24 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void musicMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void musicMenu_Awake_m17865DF1E9E9644CA342A936D1C8A7751A66A88C (musicMenu_t5DAD7AD71A79E0A35B8CDC64B69FA164BAEFB91C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject[] obj = GameObject.FindGameObjectsWithTag("Music");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral9D6BA8D36FA648F5F7EC00E75E4E3CB92589DA2E, /*hidden argument*/NULL);
		// if (obj.Length>1)
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001b:
	{
		// DontDestroyOnLoad(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void musicMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void musicMenu__ctor_mC04E45EF01461AAD7CE5AE5D055CCB1F8CDC040B (musicMenu_t5DAD7AD71A79E0A35B8CDC64B69FA164BAEFB91C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void musicVolume::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void musicVolume_Start_m7535B6FBE7EF4363C08CE8F34A2D4555E78131AC (musicVolume_t267B210FD77B91B8348C24082E7F1048EE4D07B5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void musicVolume::SetAudio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void musicVolume_SetAudio_m8997D119455202AEB5A59591A450A5D1C18FF270 (musicVolume_t267B210FD77B91B8348C24082E7F1048EE4D07B5 * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// AudioListener.volume = value;
		float L_0 = ___value0;
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE(L_0, /*hidden argument*/NULL);
		// VolumeAmount.text = ((int)(value * 100)).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_VolumeAmount_4();
		float L_2 = ___value0;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)L_2, (float)(100.0f))));
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// SaveAudio();
		musicVolume_SaveAudio_mA060206E161B34B1CC98D06839084A21FB10C69D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void musicVolume::SaveAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void musicVolume_SaveAudio_mA060206E161B34B1CC98D06839084A21FB10C69D (musicVolume_t267B210FD77B91B8348C24082E7F1048EE4D07B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA871EEBB18B43F89F2DF30FAAD3D439C2FD64CE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("audioVolume", AudioListener.volume);
		float L_0;
		L_0 = AudioListener_get_volume_m42CB4AE6FDAE4430D1153AE8B1B363B1C3B30344(/*hidden argument*/NULL);
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteralA871EEBB18B43F89F2DF30FAAD3D439C2FD64CE4, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void musicVolume::LoadAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void musicVolume_LoadAudio_m78AB907B58C598ADD3CE8F747F85D98C936969C6 (musicVolume_t267B210FD77B91B8348C24082E7F1048EE4D07B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA871EEBB18B43F89F2DF30FAAD3D439C2FD64CE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey("audioVolume"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteralA871EEBB18B43F89F2DF30FAAD3D439C2FD64CE4, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		// AudioListener.volume = PlayerPrefs.GetFloat("audioVolume");
		float L_1;
		L_1 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteralA871EEBB18B43F89F2DF30FAAD3D439C2FD64CE4, /*hidden argument*/NULL);
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE(L_1, /*hidden argument*/NULL);
		// slider.value = PlayerPrefs.GetFloat("audioVolume");
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_slider_5();
		float L_3;
		L_3 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteralA871EEBB18B43F89F2DF30FAAD3D439C2FD64CE4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, L_3);
		// }
		return;
	}

IL_0031:
	{
		// PlayerPrefs.SetFloat("audioVolume",0.4f);
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteralA871EEBB18B43F89F2DF30FAAD3D439C2FD64CE4, (0.400000006f), /*hidden argument*/NULL);
		// AudioListener.volume = PlayerPrefs.GetFloat("audioVolume");
		float L_4;
		L_4 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteralA871EEBB18B43F89F2DF30FAAD3D439C2FD64CE4, /*hidden argument*/NULL);
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE(L_4, /*hidden argument*/NULL);
		// slider.value = PlayerPrefs.GetFloat("audioVolume");
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_5 = __this->get_slider_5();
		float L_6;
		L_6 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteralA871EEBB18B43F89F2DF30FAAD3D439C2FD64CE4, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void musicVolume::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void musicVolume__ctor_m91B6D1CFB1C34E84F1AB26D31A030721BF1D600C (musicVolume_t267B210FD77B91B8348C24082E7F1048EE4D07B5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void rightLeft::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rightLeft_OnTriggerEnter2D_m05AA9E812E2716919F8BEFBBD64FA3808CE6115A (rightLeft_tCB4B6FADF40F21AC610D03896FADCDC45FA869E3 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Contains("Circle"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene(9);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)9), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void rightLeft::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rightLeft_Start_mF0287197327ABE5673AD860C512DAB88EA8FDFDD (rightLeft_tCB4B6FADF40F21AC610D03896FADCDC45FA869E3 * __this, const RuntimeMethod* method)
{
	{
		// startPos1 = platform.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_platform_9();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_startPos1_5(L_2);
		// startPos2 = nextPoint.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_nextPoint_8();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		__this->set_startPos2_6(L_5);
		// }
		return;
	}
}
// System.Void rightLeft::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rightLeft_Update_mABF3B1048F16C402783ADC2E839163C5F758E2B2 (rightLeft_tCB4B6FADF40F21AC610D03896FADCDC45FA869E3 * __this, const RuntimeMethod* method)
{
	{
		// startPos1 = platform.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_platform_9();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_startPos1_5(L_2);
		// startPos2 = nextPoint.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_nextPoint_8();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		__this->set_startPos2_6(L_5);
		// platform.transform.position = Vector3.MoveTowards(platform.transform.position, startPos1, Time.deltaTime * speed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_platform_9();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_platform_9();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_startPos1_5();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_13 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_10, L_11, ((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_14, /*hidden argument*/NULL);
		// if (platform.transform.position == startPos1)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_platform_9();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = __this->get_startPos1_5();
		bool L_19;
		L_19 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b5;
		}
	}
	{
		// startPos1 = startPos2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = __this->get_startPos2_6();
		__this->set_startPos1_5(L_20);
		// if (startPos1 == startPos2)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = __this->get_startPos1_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = __this->get_startPos2_6();
		bool L_23;
		L_23 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b5;
		}
	}
	{
		// startPos2 = platform.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_platform_9();
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		__this->set_startPos2_6(L_26);
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void rightLeft::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rightLeft__ctor_m18EFE190A06587BD3BE20C2F5064E8B600946F02 (rightLeft_tCB4B6FADF40F21AC610D03896FADCDC45FA869E3 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 2.0f;
		__this->set_speed_4((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AdManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC5B27727A25D73B6E3E812CCBEF4ABB25F37472E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D * L_0 = (U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D *)il2cpp_codegen_object_new(U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m611FAF9869007463682AF195C7A4B4933F061B46(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void AdManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m611FAF9869007463682AF195C7A4B4933F061B46 (U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdManager/<>c::<Awake>b__9_0(GoogleMobileAds.Api.InitializationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__9_0_m5848A93F2992BEDA50D6156DE489BCF37066D396 (U3CU3Ec_t8597117F6FD13565A016634FADD2D94B58A6D83D * __this, InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 * ___reklamDurumu0, const RuntimeMethod* method)
{
	{
		// MobileAds.Initialize( reklamDurumu => { } );
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
// System.Void AdManager/<InsterstitialGosterCoroutine>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInsterstitialGosterCoroutineU3Ed__18__ctor_m702B4E1C6E0462708769BAE51E77CC12BA979A1A (U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AdManager/<InsterstitialGosterCoroutine>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInsterstitialGosterCoroutineU3Ed__18_System_IDisposable_Dispose_mE634CF5FF1FD3AFF4439F632AF7EB667D30F9D1E (U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AdManager/<InsterstitialGosterCoroutine>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInsterstitialGosterCoroutineU3Ed__18_MoveNext_m5CA4F7415DBE8D26CFD688DAC272AAC22B00FE27 (U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float istekTimeoutAni = Time.realtimeSinceStartup + 2.5f;
		float L_4;
		L_4 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		__this->set_U3CistekTimeoutAniU3E5__2_3(((float)il2cpp_codegen_add((float)L_4, (float)(2.5f))));
		goto IL_0061;
	}

IL_0031:
	{
		// if( Time.realtimeSinceStartup > istekTimeoutAni )
		float L_5;
		L_5 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		float L_6 = __this->get_U3CistekTimeoutAniU3E5__2_3();
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0040;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0040:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0050:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if( interstitialReklam == null )
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_7 = V_1;
		NullCheck(L_7);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_8 = L_7->get_interstitialReklam_9();
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0061:
	{
		// while( !interstitialReklam.IsLoaded() )
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_9 = V_1;
		NullCheck(L_9);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_10 = L_9->get_interstitialReklam_9();
		NullCheck(L_10);
		bool L_11;
		L_11 = InterstitialAd_IsLoaded_m539CECD9169FE98801CF14A6EDBCD9C0A26A4038(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// interstitialReklam.Show();
		AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * L_12 = V_1;
		NullCheck(L_12);
		InterstitialAd_t9ED58965C70F2CF9E66F92EAE19149A1A237E8C9 * L_13 = L_12->get_interstitialReklam_9();
		NullCheck(L_13);
		InterstitialAd_Show_m6111A6CEA42D17DDF9C6E3A2D8E6FC9E7C46EA28(L_13, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object AdManager/<InsterstitialGosterCoroutine>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInsterstitialGosterCoroutineU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA782ACE761BEA88B34A2E1C8BDAAFD6F7A3BD5B1 (U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AdManager/<InsterstitialGosterCoroutine>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInsterstitialGosterCoroutineU3Ed__18_System_Collections_IEnumerator_Reset_m0D1336411CC1AB4CD4D8A7FF47A99DC565DB4CF7 (U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInsterstitialGosterCoroutineU3Ed__18_System_Collections_IEnumerator_Reset_m0D1336411CC1AB4CD4D8A7FF47A99DC565DB4CF7_RuntimeMethod_var)));
	}
}
// System.Object AdManager/<InsterstitialGosterCoroutine>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInsterstitialGosterCoroutineU3Ed__18_System_Collections_IEnumerator_get_Current_mC2CF38C9C77A5E47293EE3243CAF906BAFF57193 (U3CInsterstitialGosterCoroutineU3Ed__18_tB63CF4B06ADC84F9DF35A097BF5DE6D173DC905F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdFailedToLoadEventArgs_get_Message_mFED3D89B1DCB3FFC6EE0AFE90252ABDA0BD86B72_inline (AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; set; }
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
