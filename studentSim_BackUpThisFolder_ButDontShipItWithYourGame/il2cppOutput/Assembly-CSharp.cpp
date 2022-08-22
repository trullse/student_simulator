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

// System.Action`1<Item>
struct Action_1_tC168223C9BC757C44C5E1B0482968FE17C33FF6B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<Item>
struct List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Item[]
struct ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// AllItems
struct AllItems_t80399A61569D30EB977134EB904E64D00BB4F5B4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CharacterItems
struct CharacterItems_t38B3D4EE645E45E147D97E54C8EA96128CD7D196;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// FoodBarScript
struct FoodBarScript_t8BACCE25472881A21F03809C9110F9231DCAF660;
// Fridge
struct Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0;
// FridgeCell
struct FridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8;
// FridgePanel
struct FridgePanel_tA0FD854ACC481162607CF04EAFE51EEEBAFCD566;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95;
// ItemVisual
struct ItemVisual_tB57703F148085A3704BB9D4340F84950B646B52F;
// Market
struct Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MoneyTextScript
struct MoneyTextScript_tFF98784E7923E08746B333E42AE9EA885D0A510E;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// Save
struct Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911;
// SaveScript
struct SaveScript_t09B429C05EBFAA90F457DE130F598A222CD4C782;
// SceneChange
struct SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A;
// SleepBarScript
struct SleepBarScript_tF75F6FEEAFF385F193A0D75AD3A2A4270891134A;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// StudyBarScript
struct StudyBarScript_tB72FB7D9DE7B07049788EE84513F10E852729004;
// StudyProgressBar
struct StudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071;
// StudyScript
struct StudyScript_tE1B80812812DF2D50DEFFD687397970F46138E56;
// TempMoneyButton
struct TempMoneyButton_tFE6E18538F9E9D8EBA364B89D392304568A74245;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ToiletBarScript
struct ToiletBarScript_tA56637E27C95334AEE73E7A4F42F5916AE62C235;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Market/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC168223C9BC757C44C5E1B0482968FE17C33FF6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14E79CFB6AE8C0FE914A1D80E97AD903711ED029;
IL2CPP_EXTERN_C String_t* _stringLiteral17397BE4D52C2D0E30ABE8A77888C60F5360CDC4;
IL2CPP_EXTERN_C String_t* _stringLiteral4587B63259FF048DA6FD77677C07A2800E2787AA;
IL2CPP_EXTERN_C String_t* _stringLiteral575D25BF7B7B3D327BE67B8E2CCF81657B4EBE7B;
IL2CPP_EXTERN_C String_t* _stringLiteral7199DC4D518631B6B363364577E0CD199012D943;
IL2CPP_EXTERN_C String_t* _stringLiteral81B180B6B5498D1B30DB547415722E0681FBEF00;
IL2CPP_EXTERN_C String_t* _stringLiteral8495431952DDD6BB70E005ECDE0FE9B11B6FF217;
IL2CPP_EXTERN_C String_t* _stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC;
IL2CPP_EXTERN_C String_t* _stringLiteralB984C603C3C9284CDC8CA31A79B15BF2B7FD8615;
IL2CPP_EXTERN_C String_t* _stringLiteralC802DA458115BA659B22F88C7090912A53F76F66;
IL2CPP_EXTERN_C String_t* _stringLiteralDEDCE95713D8FE2D306D0C5C890B4605DE1A4229;
IL2CPP_EXTERN_C String_t* _stringLiteralE7EAEE63A5F96CDE0563DC8E2B878E945AD50716;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_mAC986122994FA401969C9C3D1E463D0181FA836C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Fridge_U3CRenderU3Eb__4_0_mCDDEDF8D8EA72488526DE70622B97A3457151E70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisItemVisual_tB57703F148085A3704BB9D4340F84950B646B52F_m3825CB9EDE4B845181EEB56CC30B6B4498A5BEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisStudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071_mF45FD24DA3664C29120E0C46F3B0AF5C33EA4393_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC8B5ACBEEF3B80C0B0FB6B10286C4524EB9FADEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m9071C2385132F78EA3BE36DEE5B5CAB2D263C314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisFridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8_mB868D24D996D79B4C18CCE25C2DC5F3E5483803F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CsetGoodsU3Eb__0_m086DB342D06CD2FDAE9D1FA3D1386120BF88145E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B;
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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Item>
struct List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Save
struct Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911  : public RuntimeObject
{
	// System.Single Save::FoodData
	float ___FoodData_0;
	// System.Single Save::SleepData
	float ___SleepData_1;
	// System.Single Save::StudyData
	float ___StudyData_2;
	// System.Single Save::ToiletData
	float ___ToiletData_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Market/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4  : public RuntimeObject
{
	// System.Int32 Market/<>c__DisplayClass9_0::i1
	int32_t ___i1_0;
	// Market Market/<>c__DisplayClass9_0::<>4__this
	Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* ___U3CU3E4__this_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F  : public RuntimeObject
{
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A* ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_crossAppDomainArray_6;
};

struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8* ___typeNameCache_7;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action`1<Item>
struct Action_1_tC168223C9BC757C44C5E1B0482968FE17C33FF6B  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Item::ItemName
	String_t* ___ItemName_4;
	// System.Int32 Item::ID
	int32_t ___ID_5;
	// System.Single Item::Calories
	float ___Calories_6;
	// UnityEngine.Sprite Item::ItemImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___ItemImage_7;
	// System.Int32 Item::ItemNumber
	int32_t ___ItemNumber_8;
	// System.Int32 Item::ItemPrice
	int32_t ___ItemPrice_9;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// AllItems
struct AllItems_t80399A61569D30EB977134EB904E64D00BB4F5B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Item[] AllItems::Objects
	ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* ___Objects_4;
};

// CharacterItems
struct CharacterItems_t38B3D4EE645E45E147D97E54C8EA96128CD7D196  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Item[] CharacterItems::InitialCharacterItem
	ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* ___InitialCharacterItem_4;
	// FridgePanel CharacterItems::fridgePanel
	FridgePanel_tA0FD854ACC481162607CF04EAFE51EEEBAFCD566* ___fridgePanel_5;
	// System.Collections.Generic.List`1<Item> CharacterItems::fridgeItems
	List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* ___fridgeItems_6;
};

// FoodBarScript
struct FoodBarScript_t8BACCE25472881A21F03809C9110F9231DCAF660  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider FoodBarScript::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// UnityEngine.UI.Image FoodBarScript::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_5;
	// UnityEngine.Gradient FoodBarScript::gradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___gradient_6;
};

// Fridge
struct Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Item> Fridge::Items
	List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* ___Items_4;
	// FridgeCell Fridge::fridgeCellTemplate
	FridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8* ___fridgeCellTemplate_5;
	// UnityEngine.Transform Fridge::_container
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____container_6;
	// Player Fridge::_player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ____player_7;
};

// FridgeCell
struct FridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image FridgeCell::_imageField
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____imageField_4;
	// UnityEngine.UI.Button FridgeCell::_eatBttn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____eatBttn_5;
	// UnityEngine.UI.Text FridgeCell::_foodNumber
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____foodNumber_6;
	// Item FridgeCell::_food
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ____food_7;
	// UnityEngine.GameObject FridgeCell::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_8;
};

// FridgePanel
struct FridgePanel_tA0FD854ACC481162607CF04EAFE51EEEBAFCD566  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FridgePanel::ItemVisualPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ItemVisualPrefab_4;
	// UnityEngine.Transform FridgePanel::ItemsHub
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ItemsHub_5;
};

// ItemVisual
struct ItemVisual_tB57703F148085A3704BB9D4340F84950B646B52F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Market
struct Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Item[] Market::arrayItems
	ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* ___arrayItems_4;
	// UnityEngine.GameObject Market::_playerObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____playerObj_5;
	// Player Market::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_6;
	// UnityEngine.GameObject Market::button
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___button_7;
	// UnityEngine.GameObject Market::content
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___content_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Market::list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___list_9;
	// UnityEngine.UI.VerticalLayoutGroup Market::_group
	VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* ____group_10;
};

// MoneyTextScript
struct MoneyTextScript_tFF98784E7923E08746B333E42AE9EA885D0A510E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Player::money
	int32_t ___money_4;
	// UnityEngine.UI.Text Player::moneyText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___moneyText_5;
	// System.Single Player::maxSleep
	float ___maxSleep_6;
	// System.Single Player::currentSleep
	float ___currentSleep_7;
	// System.Single Player::sleepDecrease
	float ___sleepDecrease_8;
	// System.Single Player::maxFood
	float ___maxFood_9;
	// System.Single Player::currentFood
	float ___currentFood_10;
	// System.Single Player::foodDecrease
	float ___foodDecrease_11;
	// System.Single Player::maxToilet
	float ___maxToilet_12;
	// System.Single Player::currentToilet
	float ___currentToilet_13;
	// System.Single Player::toiletDecrease
	float ___toiletDecrease_14;
	// System.Single Player::maxStudy
	float ___maxStudy_15;
	// System.Single Player::currentStudy
	float ___currentStudy_16;
	// System.Single Player::studyDecrease
	float ___studyDecrease_17;
	// System.Boolean Player::isStudying
	bool ___isStudying_18;
	// SleepBarScript Player::sleepBar
	SleepBarScript_tF75F6FEEAFF385F193A0D75AD3A2A4270891134A* ___sleepBar_19;
	// FoodBarScript Player::foodBar
	FoodBarScript_t8BACCE25472881A21F03809C9110F9231DCAF660* ___foodBar_20;
	// ToiletBarScript Player::toiletBar
	ToiletBarScript_tA56637E27C95334AEE73E7A4F42F5916AE62C235* ___toiletBar_21;
	// StudyBarScript Player::studyBar
	StudyBarScript_tB72FB7D9DE7B07049788EE84513F10E852729004* ___studyBar_22;
};

// SaveScript
struct SaveScript_t09B429C05EBFAA90F457DE130F598A222CD4C782  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player SaveScript::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_4;
	// System.String SaveScript::filepath
	String_t* ___filepath_5;
};

// SceneChange
struct SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SleepBarScript
struct SleepBarScript_tF75F6FEEAFF385F193A0D75AD3A2A4270891134A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider SleepBarScript::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// UnityEngine.UI.Image SleepBarScript::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_5;
	// UnityEngine.Gradient SleepBarScript::gradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___gradient_6;
};

// StudyBarScript
struct StudyBarScript_tB72FB7D9DE7B07049788EE84513F10E852729004  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider StudyBarScript::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// UnityEngine.UI.Image StudyBarScript::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_5;
	// UnityEngine.Gradient StudyBarScript::gradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___gradient_6;
};

// StudyProgressBar
struct StudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider StudyProgressBar::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// UnityEngine.UI.Image StudyProgressBar::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_5;
	// UnityEngine.Gradient StudyProgressBar::gradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___gradient_6;
};

// StudyScript
struct StudyScript_tE1B80812812DF2D50DEFFD687397970F46138E56  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject StudyScript::playerObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerObj_4;
	// Player StudyScript::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_5;
	// UnityEngine.GameObject StudyScript::progressBarObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___progressBarObj_6;
	// StudyProgressBar StudyScript::progressBar
	StudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071* ___progressBar_7;
	// UnityEngine.UI.Button StudyScript::defendLabaBttn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___defendLabaBttn_8;
	// System.Boolean StudyScript::isStudying
	bool ___isStudying_9;
	// System.Single StudyScript::studyIncrease
	float ___studyIncrease_10;
	// System.Single StudyScript::currentStudyProgress
	float ___currentStudyProgress_11;
};

// TempMoneyButton
struct TempMoneyButton_tFE6E18538F9E9D8EBA364B89D392304568A74245  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 TempMoneyButton::money
	int32_t ___money_4;
	// UnityEngine.UI.Text TempMoneyButton::moneyText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___moneyText_5;
};

// ToiletBarScript
struct ToiletBarScript_tA56637E27C95334AEE73E7A4F42F5916AE62C235  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider ToiletBarScript::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// UnityEngine.UI.Image ToiletBarScript::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_5;
	// UnityEngine.Gradient ToiletBarScript::gradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___gradient_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_14;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_15;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_16;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleWidth
	bool ___m_ChildScaleWidth_17;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleHeight
	bool ___m_ChildScaleHeight_18;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ReverseArrangement
	bool ___m_ReverseArrangement_19;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
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
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
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
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8  : public HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Item[]
struct ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* m_Items[1];

	inline Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_tFAF77888D49883A321EB596A7D93CB5615D37E95** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_tFAF77888D49883A321EB596A7D93CB5615D37E95** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mE974DCECE6BCBB030F70F1618B707F587B99BDB4_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void CharacterItems::AddItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterItems_AddItem_mA9471AD620B85BFDB36A0C3E83F47EDD7C4785B4 (CharacterItems_t38B3D4EE645E45E147D97E54C8EA96128CD7D196* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Item>::Add(T)
inline void List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_inline (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2*, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void FridgePanel::AddItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FridgePanel_AddItem_m450AE2BFB01F5BC107CB5D79B4429E7773EDD88F (FridgePanel_tA0FD854ACC481162607CF04EAFE51EEEBAFCD566* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Item>::.ctor()
inline void List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Item>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7D0DF0CF5DBCFFBC5D3ABBF056CB8531EEEA0E30 (Action_1_tC168223C9BC757C44C5E1B0482968FE17C33FF6B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC168223C9BC757C44C5E1B0482968FE17C33FF6B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Item>::ForEach(System.Action`1<T>)
inline void List_1_ForEach_m9071C2385132F78EA3BE36DEE5B5CAB2D263C314 (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* __this, Action_1_tC168223C9BC757C44C5E1B0482968FE17C33FF6B* ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2*, Action_1_tC168223C9BC757C44C5E1B0482968FE17C33FF6B*, const RuntimeMethod*))List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared)(__this, ___action0, method);
}
// T UnityEngine.Object::Instantiate<FridgeCell>(T,UnityEngine.Transform)
inline FridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8* Object_Instantiate_TisFridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8_mB868D24D996D79B4C18CCE25C2DC5F3E5483803F (FridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  FridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8* (*) (FridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Void FridgeCell::Render(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FridgeCell_Render_m2322596C3364F8BC94CE17C2739E0F49E3DBEC1C (FridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mE974DCECE6BCBB030F70F1618B707F587B99BDB4_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// T UnityEngine.GameObject::GetComponent<ItemVisual>()
inline ItemVisual_tB57703F148085A3704BB9D4340F84950B646B52F* GameObject_GetComponent_TisItemVisual_tB57703F148085A3704BB9D4340F84950B646B52F_m3825CB9EDE4B845181EEB56CC30B6B4498A5BEE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ItemVisual_tB57703F148085A3704BB9D4340F84950B646B52F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ItemVisual::Init(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemVisual_Init_mFF202AF180BE8890E0875A5E3D6F6253743CB03B (ItemVisual_tB57703F148085A3704BB9D4340F84950B646B52F* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Player>()
inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.VerticalLayoutGroup>()
inline VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* Component_GetComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_mAC986122994FA401969C9C3D1E463D0181FA836C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Market::setGoods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market_setGoods_m37A965B1BD838FDB292C33725AB6AF257C770194 (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void Market::RemoveList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market_RemoveList_mF35C4E3EAD82F7C2A38CDEEE5FC79B6AA0C4BD3C (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void Market/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mD9876D599490225D7C8E9291406F3DF85A7398C1 (U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Image>()
inline ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC8B5ACBEEF3B80C0B0FB6B10286C4524EB9FADEA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean Player::SpendMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_SpendMoney_m8CBB6F6E791393EE765C26B5C796222834BD2583 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ____money0, const RuntimeMethod* method) ;
// System.Void Player::IncreaseFood(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_IncreaseFood_m175D24C58D3F5251A7A4D07D1BC3108433F62615 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___food0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Market::GetGood(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market_GetGood_m87EE69D7379E599D1506C6DCFEEF4E1853DD8A14 (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void SleepBarScript::SetSleep(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SleepBarScript_SetSleep_m3855169814068403BB2AF635F8757FC1615D7257 (SleepBarScript_tF75F6FEEAFF385F193A0D75AD3A2A4270891134A* __this, float ___sleep0, const RuntimeMethod* method) ;
// System.Void FoodBarScript::SetFood(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodBarScript_SetFood_m14EC2559C761867E5AD8E001108C4160F50B6368 (FoodBarScript_t8BACCE25472881A21F03809C9110F9231DCAF660* __this, float ___food0, const RuntimeMethod* method) ;
// System.Void ToiletBarScript::SetToilet(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToiletBarScript_SetToilet_m3BD1DD46D9F102FF945FD3B2EE506720294A6308 (ToiletBarScript_tA56637E27C95334AEE73E7A4F42F5916AE62C235* __this, float ___toilet0, const RuntimeMethod* method) ;
// System.Void StudyBarScript::SetStudy(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudyBarScript_SetStudy_m7ED449C3FF243297D71CA9BC510B79564485E2F3 (StudyBarScript_tB72FB7D9DE7B07049788EE84513F10E852729004* __this, float ___study0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void Player::DecreaseSleep(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DecreaseSleep_mB30E1298AC32ADC2EB6F07064E6C093E89EFC247 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___sleep0, const RuntimeMethod* method) ;
// System.Void Player::DecreaseFood(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DecreaseFood_mAB701D80F87EA21370E4056C9D33286C3C48ADE2 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___food0, const RuntimeMethod* method) ;
// System.Void Player::DecreaseToilet(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DecreaseToilet_m94AADA5F808742CA216E5A4D074E54A6C536F6DA (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___toilet0, const RuntimeMethod* method) ;
// System.Void Player::DecreaseStudy(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DecreaseStudy_m945A741F6AF697559E9ACBC36E9AAA6CC1641B26 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___study0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92 (String_t* ___key0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_Parse_m1A876FF9EA91B8ECBAC7D5325E2A51E8F437D817 (String_t* ___s0, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void Player::IncreaseSleep(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_IncreaseSleep_m61BF91969B0A671F0F312233D376669BFDED8B8B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___sleep0, const RuntimeMethod* method) ;
// System.Void Player::IncreaseToilet(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_IncreaseToilet_mEF10418FB39A65311DA95EB19D4B433287F41E70 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___toilet0, const RuntimeMethod* method) ;
// System.Void Player::IncreaseStudy(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_IncreaseStudy_m022EF6DF42E07597B885BAC45FB286E4F8F48F5B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___study0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Player>()
inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Save::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Save__ctor_m7F3B81D9CECE1B025AAA41AA4D9C675D5B6C1A89 (Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705 (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Create_m1CEFB773993DCC259CC20C29818B754726A25E89 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, RuntimeObject* ___graph1, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Open_m9C6D5876B037A5A8341D216B767D4C8BE7084326 (String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32 (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, float ___time0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<StudyProgressBar>()
inline StudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071* GameObject_GetComponent_TisStudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071_mF45FD24DA3664C29120E0C46F3B0AF5C33EA4393 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void StudyProgressBar::SetStudyProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudyProgressBar_SetStudyProgress_m95619D151DD0F7AF7567D0E91E54040D6ABF9571 (StudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071* __this, float ___progress0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void StudyScript::IncreaseStudyProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudyScript_IncreaseStudyProgress_mF839D4E3FF72FE887EE960C6E596A7919E00C845 (StudyScript_tE1B80812812DF2D50DEFFD687397970F46138E56* __this, float ___study0, const RuntimeMethod* method) ;
// System.Void Player::StudyStatusChange(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_StudyStatusChange_mA3C28B30A7ED3FDCB603914468E6A85C789AFDA4_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___toStudy0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void AllItems::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllItems__ctor_mAC04443D024662AE36564D5B1BD632D91A1BC81A (AllItems_t80399A61569D30EB977134EB904E64D00BB4F5B4* __this, const RuntimeMethod* method) 
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
// System.Void CharacterItems::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterItems_Start_m388C8AA62C60F0634995B653B686DAF65CA94BBD (CharacterItems_t38B3D4EE645E45E147D97E54C8EA96128CD7D196* __this, const RuntimeMethod* method) 
{
	ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* V_0 = NULL;
	int32_t V_1 = 0;
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* V_2 = NULL;
	{
		// foreach (Item item in InitialCharacterItem)
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_0 = __this->___InitialCharacterItem_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001a;
	}

IL_000b:
	{
		// foreach (Item item in InitialCharacterItem)
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// AddItem(item);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_5 = V_2;
		CharacterItems_AddItem_mA9471AD620B85BFDB36A0C3E83F47EDD7C4785B4(__this, L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001a:
	{
		// foreach (Item item in InitialCharacterItem)
		int32_t L_7 = V_1;
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CharacterItems::AddItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterItems_AddItem_mA9471AD620B85BFDB36A0C3E83F47EDD7C4785B4 (CharacterItems_t38B3D4EE645E45E147D97E54C8EA96128CD7D196* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fridgeItems.Add(item);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_0 = __this->___fridgeItems_6;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_1 = ___item0;
		NullCheck(L_0);
		List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_inline(L_0, L_1, List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var);
		// fridgePanel.AddItem(item);
		FridgePanel_tA0FD854ACC481162607CF04EAFE51EEEBAFCD566* L_2 = __this->___fridgePanel_5;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_3 = ___item0;
		NullCheck(L_2);
		FridgePanel_AddItem_m450AE2BFB01F5BC107CB5D79B4429E7773EDD88F(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void CharacterItems::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterItems__ctor_m1CF3BF2BBA8F2872A47D3841A0D1382139A0C000 (CharacterItems_t38B3D4EE645E45E147D97E54C8EA96128CD7D196* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Item> fridgeItems = new List<Item>();
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_0 = (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2*)il2cpp_codegen_object_new(List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF(L_0, List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var);
		__this->___fridgeItems_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fridgeItems_6), (void*)L_0);
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
// System.Void Fridge::Render(System.Collections.Generic.List`1<Item>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fridge_Render_mD76C33987C229DC54CD4B65F2BD43B442D834613 (Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* __this, List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* ___items0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC168223C9BC757C44C5E1B0482968FE17C33FF6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fridge_U3CRenderU3Eb__4_0_mCDDEDF8D8EA72488526DE70622B97A3457151E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m9071C2385132F78EA3BE36DEE5B5CAB2D263C314_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach (Transform child in _container)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____container_6;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_000e_1:
			{
				// foreach (Transform child in _container)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// Destroy(child.gameObject);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
			}

IL_0023_1:
			{
				// foreach (Transform child in _container)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// items.ForEach(item =>
		// {
		//     var cell = Instantiate(fridgeCellTemplate, _container);
		//     cell.Render(item);
		// });
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_10 = ___items0;
		Action_1_tC168223C9BC757C44C5E1B0482968FE17C33FF6B* L_11 = (Action_1_tC168223C9BC757C44C5E1B0482968FE17C33FF6B*)il2cpp_codegen_object_new(Action_1_tC168223C9BC757C44C5E1B0482968FE17C33FF6B_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_m7D0DF0CF5DBCFFBC5D3ABBF056CB8531EEEA0E30(L_11, __this, (intptr_t)((void*)Fridge_U3CRenderU3Eb__4_0_mCDDEDF8D8EA72488526DE70622B97A3457151E70_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		List_1_ForEach_m9071C2385132F78EA3BE36DEE5B5CAB2D263C314(L_10, L_11, List_1_ForEach_m9071C2385132F78EA3BE36DEE5B5CAB2D263C314_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Fridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fridge__ctor_mA0690E1877D349F2F2C51327477B3540935A55E5 (Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Fridge::<Render>b__4_0(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fridge_U3CRenderU3Eb__4_0_mCDDEDF8D8EA72488526DE70622B97A3457151E70 (Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisFridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8_mB868D24D996D79B4C18CCE25C2DC5F3E5483803F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var cell = Instantiate(fridgeCellTemplate, _container);
		FridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8* L_0 = __this->___fridgeCellTemplate_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____container_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		FridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8* L_2;
		L_2 = Object_Instantiate_TisFridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8_mB868D24D996D79B4C18CCE25C2DC5F3E5483803F(L_0, L_1, Object_Instantiate_TisFridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8_mB868D24D996D79B4C18CCE25C2DC5F3E5483803F_RuntimeMethod_var);
		// cell.Render(item);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_3 = ___item0;
		NullCheck(L_2);
		FridgeCell_Render_m2322596C3364F8BC94CE17C2739E0F49E3DBEC1C(L_2, L_3, NULL);
		// });
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
// System.Void FridgeCell::Render(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FridgeCell_Render_m2322596C3364F8BC94CE17C2739E0F49E3DBEC1C (FridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item0, const RuntimeMethod* method) 
{
	{
		// _food = item;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = ___item0;
		__this->____food_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____food_7), (void*)L_0);
		// _imageField.sprite = item.ItemImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->____imageField_4;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_2 = ___item0;
		NullCheck(L_2);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = L_2->___ItemImage_7;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_3, NULL);
		// _foodNumber.text = item.ItemNumber.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____foodNumber_6;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_5 = ___item0;
		NullCheck(L_5);
		int32_t* L_6 = (&L_5->___ItemNumber_8);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void FridgeCell::OnEatClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FridgeCell_OnEatClicked_m8DF9897A74EC12B7ED399190AAA089AA2BF2EEEF (FridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FridgeCell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FridgeCell__ctor_m256E774A1856F6F42B056B938EA0999BBE2C29C3 (FridgeCell_t148956BC32140A042453BC48652FF3D19DA123F8* __this, const RuntimeMethod* method) 
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
// System.Void FridgePanel::AddItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FridgePanel_AddItem_m450AE2BFB01F5BC107CB5D79B4429E7773EDD88F (FridgePanel_tA0FD854ACC481162607CF04EAFE51EEEBAFCD566* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItemVisual_tB57703F148085A3704BB9D4340F84950B646B52F_m3825CB9EDE4B845181EEB56CC30B6B4498A5BEE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject newItem = Instantiate(ItemVisualPrefab, Vector3.zero, Quaternion.identity, ItemsHub);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ItemVisualPrefab_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___ItemsHub_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0(L_0, L_1, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
		// newItem.GetComponent<ItemVisual>().Init(item);
		NullCheck(L_4);
		ItemVisual_tB57703F148085A3704BB9D4340F84950B646B52F* L_5;
		L_5 = GameObject_GetComponent_TisItemVisual_tB57703F148085A3704BB9D4340F84950B646B52F_m3825CB9EDE4B845181EEB56CC30B6B4498A5BEE8(L_4, GameObject_GetComponent_TisItemVisual_tB57703F148085A3704BB9D4340F84950B646B52F_m3825CB9EDE4B845181EEB56CC30B6B4498A5BEE8_RuntimeMethod_var);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_6 = ___item0;
		NullCheck(L_5);
		ItemVisual_Init_mFF202AF180BE8890E0875A5E3D6F6253743CB03B(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void FridgePanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FridgePanel__ctor_m841FFE89A504C7514BA09E66F919359ABC472467 (FridgePanel_tA0FD854ACC481162607CF04EAFE51EEEBAFCD566* __this, const RuntimeMethod* method) 
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
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m741D59B05082743C60D2F1149112B571E89CAFAF (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void ItemVisual::Init(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemVisual_Init_mFF202AF180BE8890E0875A5E3D6F6253743CB03B (ItemVisual_tB57703F148085A3704BB9D4340F84950B646B52F* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Image>().sprite = item.ItemImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_1 = ___item0;
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = L_1->___ItemImage_7;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void ItemVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemVisual__ctor_m67CD97C54D8C669E574B248231296F8330E33126 (ItemVisual_tB57703F148085A3704BB9D4340F84950B646B52F* __this, const RuntimeMethod* method) 
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
// System.Void Market::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market_Start_m519D59E68F3483D064E9AB13B742A96E4BC0C9D5 (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_mAC986122994FA401969C9C3D1E463D0181FA836C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = _playerObj.GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____playerObj_5;
		NullCheck(L_0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1;
		L_1 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_0, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___player_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_6), (void*)L_1);
		// RectTransform rectT = content.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___content_8;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_2, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		// rectT.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// _group = GetComponent<VerticalLayoutGroup>();
		VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* L_6;
		L_6 = Component_GetComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_mAC986122994FA401969C9C3D1E463D0181FA836C(__this, Component_GetComponent_TisVerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8_mAC986122994FA401969C9C3D1E463D0181FA836C_RuntimeMethod_var);
		__this->____group_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____group_10), (void*)L_6);
		// setGoods();
		Market_setGoods_m37A965B1BD838FDB292C33725AB6AF257C770194(__this, NULL);
		// }
		return;
	}
}
// System.Void Market::RemoveList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market_RemoveList_mF35C4E3EAD82F7C2A38CDEEE5FC79B6AA0C4BD3C (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var elem in list)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___list_9;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var elem in list)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(elem);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var elem in list)
				bool L_3;
				L_3 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// list.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___list_9;
		NullCheck(L_4);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_4, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Market::setGoods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market_setGoods_m37A965B1BD838FDB292C33725AB6AF257C770194 (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC8B5ACBEEF3B80C0B0FB6B10286C4524EB9FADEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CsetGoodsU3Eb__0_m086DB342D06CD2FDAE9D1FA3D1386120BF88145E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8495431952DDD6BB70E005ECDE0FE9B11B6FF217);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	{
		// RectTransform rectT = content.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___content_8;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		// rectT.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_3, NULL);
		// RemoveList();
		Market_RemoveList_mF35C4E3EAD82F7C2A38CDEEE5FC79B6AA0C4BD3C(__this, NULL);
		// if (arrayItems.Length > 0)
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_4 = __this->___arrayItems_4;
		NullCheck(L_4);
		if (!(((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0159;
		}
	}
	{
		// var pr1 = Instantiate(button, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___button_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// var h = pr1.GetComponent<RectTransform>().rect.height;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_8, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_9);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_9, NULL);
		V_1 = L_10;
		float L_11;
		L_11 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		V_0 = L_11;
		// var tr = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		// tr.sizeDelta = new Vector2(tr.rect.width, h * arrayItems.Length);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = L_12;
		NullCheck(L_13);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14;
		L_14 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_13, NULL);
		V_1 = L_14;
		float L_15;
		L_15 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		float L_16 = V_0;
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_17 = __this->___arrayItems_4;
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), L_15, ((float)il2cpp_codegen_multiply(L_16, ((float)((int32_t)(((RuntimeArray*)L_17)->max_length))))), /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_13, L_18, NULL);
		// Destroy(pr1);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
		// for (var i = 0; i < arrayItems.Length; i++)
		V_2 = 0;
		goto IL_014b;
	}

IL_0095:
	{
		U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4* L_19 = (U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		U3CU3Ec__DisplayClass9_0__ctor_mD9876D599490225D7C8E9291406F3DF85A7398C1(L_19, NULL);
		V_3 = L_19;
		U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4* L_20 = V_3;
		NullCheck(L_20);
		L_20->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___U3CU3E4__this_1), (void*)__this);
		// var pr = Instantiate(button, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___button_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_21, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_4 = L_23;
		// pr.GetComponentInChildren<Text>().text = arrayItems[i].ItemName;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_4;
		NullCheck(L_24);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25;
		L_25 = GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13(L_24, GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_26 = __this->___arrayItems_4;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		String_t* L_30 = L_29->___ItemName_4;
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_30);
		// pr.transform.Find("PriceText").GetComponent<Text>().text = arrayItems[i].ItemPrice.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_4;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_32, _stringLiteral8495431952DDD6BB70E005ECDE0FE9B11B6FF217, NULL);
		NullCheck(L_33);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34;
		L_34 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_33, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_35 = __this->___arrayItems_4;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		int32_t* L_39 = (&L_38->___ItemPrice_9);
		String_t* L_40;
		L_40 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_39, NULL);
		NullCheck(L_34);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, L_40);
		// pr.GetComponentsInChildren<Image>()[0].sprite = arrayItems[i].ItemImage;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = V_4;
		NullCheck(L_41);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_42;
		L_42 = GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC8B5ACBEEF3B80C0B0FB6B10286C4524EB9FADEA(L_41, GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC8B5ACBEEF3B80C0B0FB6B10286C4524EB9FADEA_RuntimeMethod_var);
		NullCheck(L_42);
		int32_t L_43 = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_45 = __this->___arrayItems_4;
		int32_t L_46 = V_2;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_49 = L_48->___ItemImage_7;
		NullCheck(L_44);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_44, L_49, NULL);
		// var i1 = i;
		U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4* L_50 = V_3;
		int32_t L_51 = V_2;
		NullCheck(L_50);
		L_50->___i1_0 = L_51;
		// pr.GetComponent<Button>().onClick.AddListener(() => GetGood(arrayItems[i1]));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = V_4;
		NullCheck(L_52);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_53;
		L_53 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_52, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_53);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_54;
		L_54 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_53, NULL);
		U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4* L_55 = V_3;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_56 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_56, L_55, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CsetGoodsU3Eb__0_m086DB342D06CD2FDAE9D1FA3D1386120BF88145E_RuntimeMethod_var), NULL);
		NullCheck(L_54);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_54, L_56, NULL);
		// list.Add(pr);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_57 = __this->___list_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = V_4;
		NullCheck(L_57);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_57, L_58, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (var i = 0; i < arrayItems.Length; i++)
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_014b:
	{
		// for (var i = 0; i < arrayItems.Length; i++)
		int32_t L_60 = V_2;
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_61 = __this->___arrayItems_4;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length)))))
		{
			goto IL_0095;
		}
	}

IL_0159:
	{
		// }
		return;
	}
}
// System.Void Market::GetGood(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market_GetGood_m87EE69D7379E599D1506C6DCFEEF4E1853DD8A14 (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(item.ID);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = ___item0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___ID_5;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// if (player.SpendMoney(item.ItemPrice))
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = __this->___player_6;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_5 = ___item0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___ItemPrice_9;
		NullCheck(L_4);
		bool L_7;
		L_7 = Player_SpendMoney_m8CBB6F6E791393EE765C26B5C796222834BD2583(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// player.IncreaseFood(item.Calories);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_8 = __this->___player_6;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_9 = ___item0;
		NullCheck(L_9);
		float L_10 = L_9->___Calories_6;
		NullCheck(L_8);
		Player_IncreaseFood_m175D24C58D3F5251A7A4D07D1BC3108433F62615(L_8, L_10, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Market::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Market__ctor_m8C3694D9AAAC7450C405FEB0AACAA036813C59EF (Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> list = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___list_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_9), (void*)L_0);
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
// System.Void Market/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mD9876D599490225D7C8E9291406F3DF85A7398C1 (U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Market/<>c__DisplayClass9_0::<setGoods>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CsetGoodsU3Eb__0_m086DB342D06CD2FDAE9D1FA3D1386120BF88145E (U3CU3Ec__DisplayClass9_0_t16328738C26491E37EBEE8A493C83937B30807A4* __this, const RuntimeMethod* method) 
{
	{
		// pr.GetComponent<Button>().onClick.AddListener(() => GetGood(arrayItems[i1]));
		Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* L_0 = __this->___U3CU3E4__this_1;
		Market_t8E4CFBC9438560BBCD1C02D9B37D436B9D3B2BCA* L_1 = __this->___U3CU3E4__this_1;
		NullCheck(L_1);
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_2 = L_1->___arrayItems_4;
		int32_t L_3 = __this->___i1_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		Market_GetGood_m87EE69D7379E599D1506C6DCFEEF4E1853DD8A14(L_0, L_5, NULL);
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
// System.Void TempMoneyButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempMoneyButton_Start_m32BDCEFB80055837DFFB0A66A927CDAC397A6FA1 (TempMoneyButton_tFE6E18538F9E9D8EBA364B89D392304568A74245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// money = PlayerPrefs.GetInt("money");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC, NULL);
		__this->___money_4 = L_0;
		// }
		return;
	}
}
// System.Void TempMoneyButton::GetMoneyClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempMoneyButton_GetMoneyClick_m047F59FF0DF76308E8127D875DEC34D320863E6D (TempMoneyButton_tFE6E18538F9E9D8EBA364B89D392304568A74245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// money += 20;
		int32_t L_0 = __this->___money_4;
		__this->___money_4 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)20)));
		// PlayerPrefs.SetInt("money", money);
		int32_t L_1 = __this->___money_4;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC, L_1, NULL);
		// }
		return;
	}
}
// System.Void TempMoneyButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempMoneyButton_Update_m5D31356A96E1812FDA94019E56C100B15EBE066D (TempMoneyButton_tFE6E18538F9E9D8EBA364B89D392304568A74245* __this, const RuntimeMethod* method) 
{
	{
		// moneyText.text = money.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___moneyText_5;
		int32_t* L_1 = (&__this->___money_4);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void TempMoneyButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempMoneyButton__ctor_mA05409793123FD2BCE2190351F909A8978288B10 (TempMoneyButton_tFE6E18538F9E9D8EBA364B89D392304568A74245* __this, const RuntimeMethod* method) 
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
// System.Void MoneyTextScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyTextScript_Update_mC29B6056EA9C05B5C51A0684EBB6C1DF93307821 (MoneyTextScript_tFF98784E7923E08746B333E42AE9EA885D0A510E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MoneyTextScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyTextScript__ctor_m4C3B155803E290D2B1ACBA32A3B2D630A5E43143 (MoneyTextScript_tFF98784E7923E08746B333E42AE9EA885D0A510E* __this, const RuntimeMethod* method) 
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mC31CF4F40DDEA35C5E39E8C43EC37284AE7C453D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral575D25BF7B7B3D327BE67B8E2CCF81657B4EBE7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7199DC4D518631B6B363364577E0CD199012D943);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81B180B6B5498D1B30DB547415722E0681FBEF00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEDCE95713D8FE2D306D0C5C890B4605DE1A4229);
		s_Il2CppMethodInitialized = true;
	}
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B4_0 = NULL;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B5_1 = NULL;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B7_0 = NULL;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B6_0 = NULL;
	float G_B8_0 = 0.0f;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B8_1 = NULL;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B10_0 = NULL;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B9_0 = NULL;
	float G_B11_0 = 0.0f;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B11_1 = NULL;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B13_0 = NULL;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B12_0 = NULL;
	float G_B14_0 = 0.0f;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* G_B14_1 = NULL;
	{
		// money = PlayerPrefs.GetInt("money");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC, NULL);
		__this->___money_4 = L_0;
		// if (moneyText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___moneyText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// moneyText.text = money.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___moneyText_5;
		int32_t* L_4 = (&__this->___money_4);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
	}

IL_0034:
	{
		// currentSleep = (PlayerPrefs.HasKey("sleep")) ? PlayerPrefs.GetFloat("sleep") : 1f;
		bool L_6;
		L_6 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral575D25BF7B7B3D327BE67B8E2CCF81657B4EBE7B, NULL);
		G_B3_0 = __this;
		if (L_6)
		{
			G_B4_0 = __this;
			goto IL_0048;
		}
	}
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		goto IL_0052;
	}

IL_0048:
	{
		float L_7;
		L_7 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(_stringLiteral575D25BF7B7B3D327BE67B8E2CCF81657B4EBE7B, NULL);
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_0052:
	{
		NullCheck(G_B5_1);
		G_B5_1->___currentSleep_7 = G_B5_0;
		// sleepBar.SetSleep(currentSleep);
		SleepBarScript_tF75F6FEEAFF385F193A0D75AD3A2A4270891134A* L_8 = __this->___sleepBar_19;
		float L_9 = __this->___currentSleep_7;
		NullCheck(L_8);
		SleepBarScript_SetSleep_m3855169814068403BB2AF635F8757FC1615D7257(L_8, L_9, NULL);
		// currentFood = (PlayerPrefs.HasKey("food")) ? PlayerPrefs.GetFloat("food") : 1f;
		bool L_10;
		L_10 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral7199DC4D518631B6B363364577E0CD199012D943, NULL);
		G_B6_0 = __this;
		if (L_10)
		{
			G_B7_0 = __this;
			goto IL_007c;
		}
	}
	{
		G_B8_0 = (1.0f);
		G_B8_1 = G_B6_0;
		goto IL_0086;
	}

IL_007c:
	{
		float L_11;
		L_11 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(_stringLiteral7199DC4D518631B6B363364577E0CD199012D943, NULL);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_0;
	}

IL_0086:
	{
		NullCheck(G_B8_1);
		G_B8_1->___currentFood_10 = G_B8_0;
		// foodBar.SetFood(currentFood);
		FoodBarScript_t8BACCE25472881A21F03809C9110F9231DCAF660* L_12 = __this->___foodBar_20;
		float L_13 = __this->___currentFood_10;
		NullCheck(L_12);
		FoodBarScript_SetFood_m14EC2559C761867E5AD8E001108C4160F50B6368(L_12, L_13, NULL);
		// currentToilet = (PlayerPrefs.HasKey("toilet")) ? PlayerPrefs.GetFloat("toilet") : 1f;
		bool L_14;
		L_14 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral81B180B6B5498D1B30DB547415722E0681FBEF00, NULL);
		G_B9_0 = __this;
		if (L_14)
		{
			G_B10_0 = __this;
			goto IL_00b0;
		}
	}
	{
		G_B11_0 = (1.0f);
		G_B11_1 = G_B9_0;
		goto IL_00ba;
	}

IL_00b0:
	{
		float L_15;
		L_15 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(_stringLiteral81B180B6B5498D1B30DB547415722E0681FBEF00, NULL);
		G_B11_0 = L_15;
		G_B11_1 = G_B10_0;
	}

IL_00ba:
	{
		NullCheck(G_B11_1);
		G_B11_1->___currentToilet_13 = G_B11_0;
		// toiletBar.SetToilet(currentToilet);
		ToiletBarScript_tA56637E27C95334AEE73E7A4F42F5916AE62C235* L_16 = __this->___toiletBar_21;
		float L_17 = __this->___currentToilet_13;
		NullCheck(L_16);
		ToiletBarScript_SetToilet_m3BD1DD46D9F102FF945FD3B2EE506720294A6308(L_16, L_17, NULL);
		// currentStudy = (PlayerPrefs.HasKey("study")) ? PlayerPrefs.GetFloat("study") : 1f;
		bool L_18;
		L_18 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteralDEDCE95713D8FE2D306D0C5C890B4605DE1A4229, NULL);
		G_B12_0 = __this;
		if (L_18)
		{
			G_B13_0 = __this;
			goto IL_00e4;
		}
	}
	{
		G_B14_0 = (1.0f);
		G_B14_1 = G_B12_0;
		goto IL_00ee;
	}

IL_00e4:
	{
		float L_19;
		L_19 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(_stringLiteralDEDCE95713D8FE2D306D0C5C890B4605DE1A4229, NULL);
		G_B14_0 = L_19;
		G_B14_1 = G_B13_0;
	}

IL_00ee:
	{
		NullCheck(G_B14_1);
		G_B14_1->___currentStudy_16 = G_B14_0;
		// studyBar.SetStudy(currentStudy);
		StudyBarScript_tB72FB7D9DE7B07049788EE84513F10E852729004* L_20 = __this->___studyBar_22;
		float L_21 = __this->___currentStudy_16;
		NullCheck(L_20);
		StudyBarScript_SetStudy_m7ED449C3FF243297D71CA9BC510B79564485E2F3(L_20, L_21, NULL);
		// }
		return;
	}
}
// System.Void Player::StudyStatusChange(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_StudyStatusChange_mA3C28B30A7ED3FDCB603914468E6A85C789AFDA4 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___toStudy0, const RuntimeMethod* method) 
{
	{
		// isStudying = toStudy;
		bool L_0 = ___toStudy0;
		__this->___isStudying_18 = L_0;
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m95E134A5EF1B5164EA281F61D7FA436F59BE3C9F (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// DecreaseSleep(sleepDecrease * Time.deltaTime);
		float L_0 = __this->___sleepDecrease_8;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Player_DecreaseSleep_mB30E1298AC32ADC2EB6F07064E6C093E89EFC247(__this, ((float)il2cpp_codegen_multiply(L_0, L_1)), NULL);
		// sleepBar.SetSleep(currentSleep);
		SleepBarScript_tF75F6FEEAFF385F193A0D75AD3A2A4270891134A* L_2 = __this->___sleepBar_19;
		float L_3 = __this->___currentSleep_7;
		NullCheck(L_2);
		SleepBarScript_SetSleep_m3855169814068403BB2AF635F8757FC1615D7257(L_2, L_3, NULL);
		// DecreaseFood(foodDecrease * Time.deltaTime);
		float L_4 = __this->___foodDecrease_11;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Player_DecreaseFood_mAB701D80F87EA21370E4056C9D33286C3C48ADE2(__this, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		// foodBar.SetFood(currentFood);
		FoodBarScript_t8BACCE25472881A21F03809C9110F9231DCAF660* L_6 = __this->___foodBar_20;
		float L_7 = __this->___currentFood_10;
		NullCheck(L_6);
		FoodBarScript_SetFood_m14EC2559C761867E5AD8E001108C4160F50B6368(L_6, L_7, NULL);
		// DecreaseToilet(toiletDecrease * Time.deltaTime);
		float L_8 = __this->___toiletDecrease_14;
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Player_DecreaseToilet_m94AADA5F808742CA216E5A4D074E54A6C536F6DA(__this, ((float)il2cpp_codegen_multiply(L_8, L_9)), NULL);
		// toiletBar.SetToilet(currentToilet);
		ToiletBarScript_tA56637E27C95334AEE73E7A4F42F5916AE62C235* L_10 = __this->___toiletBar_21;
		float L_11 = __this->___currentToilet_13;
		NullCheck(L_10);
		ToiletBarScript_SetToilet_m3BD1DD46D9F102FF945FD3B2EE506720294A6308(L_10, L_11, NULL);
		// if (!isStudying)
		bool L_12 = __this->___isStudying_18;
		if (L_12)
		{
			goto IL_0083;
		}
	}
	{
		// DecreaseStudy(studyDecrease * Time.deltaTime);
		float L_13 = __this->___studyDecrease_17;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Player_DecreaseStudy_m945A741F6AF697559E9ACBC36E9AAA6CC1641B26(__this, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
	}

IL_0083:
	{
		// studyBar.SetStudy(currentStudy);
		StudyBarScript_tB72FB7D9DE7B07049788EE84513F10E852729004* L_15 = __this->___studyBar_22;
		float L_16 = __this->___currentStudy_16;
		NullCheck(L_15);
		StudyBarScript_SetStudy_m7ED449C3FF243297D71CA9BC510B79564485E2F3(L_15, L_16, NULL);
		// if (Input.GetKeyDown(KeyCode.F))
		bool L_17;
		L_17 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)102), NULL);
		if (!L_17)
		{
			goto IL_00b9;
		}
	}
	{
		// DecreaseFood(0.1f);
		Player_DecreaseFood_mAB701D80F87EA21370E4056C9D33286C3C48ADE2(__this, (0.100000001f), NULL);
		// foodBar.SetFood(currentFood);
		FoodBarScript_t8BACCE25472881A21F03809C9110F9231DCAF660* L_18 = __this->___foodBar_20;
		float L_19 = __this->___currentFood_10;
		NullCheck(L_18);
		FoodBarScript_SetFood_m14EC2559C761867E5AD8E001108C4160F50B6368(L_18, L_19, NULL);
	}

IL_00b9:
	{
		// if (Input.GetKeyDown(KeyCode.T))
		bool L_20;
		L_20 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)116), NULL);
		if (!L_20)
		{
			goto IL_00de;
		}
	}
	{
		// DecreaseToilet(0.1f);
		Player_DecreaseToilet_m94AADA5F808742CA216E5A4D074E54A6C536F6DA(__this, (0.100000001f), NULL);
		// toiletBar.SetToilet(currentToilet);
		ToiletBarScript_tA56637E27C95334AEE73E7A4F42F5916AE62C235* L_21 = __this->___toiletBar_21;
		float L_22 = __this->___currentToilet_13;
		NullCheck(L_21);
		ToiletBarScript_SetToilet_m3BD1DD46D9F102FF945FD3B2EE506720294A6308(L_21, L_22, NULL);
	}

IL_00de:
	{
		// if (Input.GetKeyDown(KeyCode.S))
		bool L_23;
		L_23 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)115), NULL);
		if (!L_23)
		{
			goto IL_0103;
		}
	}
	{
		// DecreaseStudy(0.1f);
		Player_DecreaseStudy_m945A741F6AF697559E9ACBC36E9AAA6CC1641B26(__this, (0.100000001f), NULL);
		// studyBar.SetStudy(currentStudy);
		StudyBarScript_tB72FB7D9DE7B07049788EE84513F10E852729004* L_24 = __this->___studyBar_22;
		float L_25 = __this->___currentStudy_16;
		NullCheck(L_24);
		StudyBarScript_SetStudy_m7ED449C3FF243297D71CA9BC510B79564485E2F3(L_24, L_25, NULL);
	}

IL_0103:
	{
		// if (Input.GetKeyDown(KeyCode.Z))
		bool L_26;
		L_26 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)122), NULL);
		if (!L_26)
		{
			goto IL_0128;
		}
	}
	{
		// DecreaseSleep(0.1f);
		Player_DecreaseSleep_mB30E1298AC32ADC2EB6F07064E6C093E89EFC247(__this, (0.100000001f), NULL);
		// sleepBar.SetSleep(currentSleep);
		SleepBarScript_tF75F6FEEAFF385F193A0D75AD3A2A4270891134A* L_27 = __this->___sleepBar_19;
		float L_28 = __this->___currentSleep_7;
		NullCheck(L_27);
		SleepBarScript_SetSleep_m3855169814068403BB2AF635F8757FC1615D7257(L_27, L_28, NULL);
	}

IL_0128:
	{
		// }
		return;
	}
}
// System.Void Player::OfflineTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OfflineTime_mC42400119DFCF5219EC55A960DBABB6D71AD2729 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4587B63259FF048DA6FD77677C07A2800E2787AA);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (PlayerPrefs.HasKey("LastSession"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral4587B63259FF048DA6FD77677C07A2800E2787AA, NULL);
		if (!L_0)
		{
			goto IL_00c1;
		}
	}
	{
		// timeSpan = DateTime.Now - DateTime.Parse(PlayerPrefs.GetString("LastSession"));
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral4587B63259FF048DA6FD77677C07A2800E2787AA, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_Parse_m1A876FF9EA91B8ECBAC7D5325E2A51E8F437D817(L_2, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_1, L_3, NULL);
		V_0 = L_4;
		// DecreaseSleep(sleepDecrease * (float)timeSpan.TotalSeconds);
		float L_5 = __this->___sleepDecrease_8;
		double L_6;
		L_6 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		Player_DecreaseSleep_mB30E1298AC32ADC2EB6F07064E6C093E89EFC247(__this, ((float)il2cpp_codegen_multiply(L_5, ((float)L_6))), NULL);
		// sleepBar.SetSleep(currentSleep);
		SleepBarScript_tF75F6FEEAFF385F193A0D75AD3A2A4270891134A* L_7 = __this->___sleepBar_19;
		float L_8 = __this->___currentSleep_7;
		NullCheck(L_7);
		SleepBarScript_SetSleep_m3855169814068403BB2AF635F8757FC1615D7257(L_7, L_8, NULL);
		// DecreaseFood(foodDecrease * (float)timeSpan.TotalSeconds);
		float L_9 = __this->___foodDecrease_11;
		double L_10;
		L_10 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		Player_DecreaseFood_mAB701D80F87EA21370E4056C9D33286C3C48ADE2(__this, ((float)il2cpp_codegen_multiply(L_9, ((float)L_10))), NULL);
		// foodBar.SetFood(currentFood);
		FoodBarScript_t8BACCE25472881A21F03809C9110F9231DCAF660* L_11 = __this->___foodBar_20;
		float L_12 = __this->___currentFood_10;
		NullCheck(L_11);
		FoodBarScript_SetFood_m14EC2559C761867E5AD8E001108C4160F50B6368(L_11, L_12, NULL);
		// DecreaseToilet(toiletDecrease * (float)timeSpan.TotalSeconds);
		float L_13 = __this->___toiletDecrease_14;
		double L_14;
		L_14 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		Player_DecreaseToilet_m94AADA5F808742CA216E5A4D074E54A6C536F6DA(__this, ((float)il2cpp_codegen_multiply(L_13, ((float)L_14))), NULL);
		// toiletBar.SetToilet(currentToilet);
		ToiletBarScript_tA56637E27C95334AEE73E7A4F42F5916AE62C235* L_15 = __this->___toiletBar_21;
		float L_16 = __this->___currentToilet_13;
		NullCheck(L_15);
		ToiletBarScript_SetToilet_m3BD1DD46D9F102FF945FD3B2EE506720294A6308(L_15, L_16, NULL);
		// DecreaseStudy(studyDecrease * (float)timeSpan.TotalSeconds);
		float L_17 = __this->___studyDecrease_17;
		double L_18;
		L_18 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		Player_DecreaseStudy_m945A741F6AF697559E9ACBC36E9AAA6CC1641B26(__this, ((float)il2cpp_codegen_multiply(L_17, ((float)L_18))), NULL);
		// studyBar.SetStudy(currentStudy);
		StudyBarScript_tB72FB7D9DE7B07049788EE84513F10E852729004* L_19 = __this->___studyBar_22;
		float L_20 = __this->___currentStudy_16;
		NullCheck(L_19);
		StudyBarScript_SetStudy_m7ED449C3FF243297D71CA9BC510B79564485E2F3(L_19, L_20, NULL);
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Void Player::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnApplicationPause_m5F7EC3DFC1F3A46147D3A82043437968D6DB0174 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___pause0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4587B63259FF048DA6FD77677C07A2800E2787AA);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (pause)
		bool L_0 = ___pause0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// PlayerPrefs.SetString("LastSession", DateTime.Now.ToString());
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A((&V_0), NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral4587B63259FF048DA6FD77677C07A2800E2787AA, L_2, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Player::GetMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_GetMoney_mF0893C98E012AA13A149251EDA5BCB2E48CA637B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ____money0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// money += _money;
		int32_t L_0 = __this->___money_4;
		int32_t L_1 = ____money0;
		__this->___money_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// PlayerPrefs.SetInt("money", money);
		int32_t L_2 = __this->___money_4;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC, L_2, NULL);
		// if (moneyText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___moneyText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// moneyText.text = money.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___moneyText_5;
		int32_t* L_6 = (&__this->___money_4);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Boolean Player::SpendMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_SpendMoney_m8CBB6F6E791393EE765C26B5C796222834BD2583 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ____money0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (money >= _money)
		int32_t L_0 = __this->___money_4;
		int32_t L_1 = ____money0;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_004d;
		}
	}
	{
		// money -= _money;
		int32_t L_2 = __this->___money_4;
		int32_t L_3 = ____money0;
		__this->___money_4 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// PlayerPrefs.SetInt("money", money);
		int32_t L_4 = __this->___money_4;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC, L_4, NULL);
		// if (moneyText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___moneyText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		// moneyText.text = money.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___moneyText_5;
		int32_t* L_8 = (&__this->___money_4);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_9);
	}

IL_004b:
	{
		// return true;
		return (bool)1;
	}

IL_004d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Player::SleepButtonPush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SleepButtonPush_mDAA90E3CF9C71971259D983BC54E08E2D59F5823 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// IncreaseSleep(0.5f);
		Player_IncreaseSleep_m61BF91969B0A671F0F312233D376669BFDED8B8B(__this, (0.5f), NULL);
		// sleepBar.SetSleep(currentSleep);
		SleepBarScript_tF75F6FEEAFF385F193A0D75AD3A2A4270891134A* L_0 = __this->___sleepBar_19;
		float L_1 = __this->___currentSleep_7;
		NullCheck(L_0);
		SleepBarScript_SetSleep_m3855169814068403BB2AF635F8757FC1615D7257(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Player::FoodButtonPush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FoodButtonPush_m5B4A5ABF5AC9A46E9F083DA7FF382E4183338884 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// IncreaseFood(0.5f);
		Player_IncreaseFood_m175D24C58D3F5251A7A4D07D1BC3108433F62615(__this, (0.5f), NULL);
		// foodBar.SetFood(currentFood);
		FoodBarScript_t8BACCE25472881A21F03809C9110F9231DCAF660* L_0 = __this->___foodBar_20;
		float L_1 = __this->___currentFood_10;
		NullCheck(L_0);
		FoodBarScript_SetFood_m14EC2559C761867E5AD8E001108C4160F50B6368(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Player::ToiletButtonPush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ToiletButtonPush_m8928B55C7E60CCD30E5984A6A5B98B0BECEAE0F0 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// IncreaseToilet(0.5f);
		Player_IncreaseToilet_mEF10418FB39A65311DA95EB19D4B433287F41E70(__this, (0.5f), NULL);
		// toiletBar.SetToilet(currentToilet);
		ToiletBarScript_tA56637E27C95334AEE73E7A4F42F5916AE62C235* L_0 = __this->___toiletBar_21;
		float L_1 = __this->___currentToilet_13;
		NullCheck(L_0);
		ToiletBarScript_SetToilet_m3BD1DD46D9F102FF945FD3B2EE506720294A6308(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Player::StudyButtonPush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_StudyButtonPush_m48C8D8F1F73EE061A6E8DFB514AB6592C395CAEE (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// IncreaseStudy(0.5f);
		Player_IncreaseStudy_m022EF6DF42E07597B885BAC45FB286E4F8F48F5B(__this, (0.5f), NULL);
		// studyBar.SetStudy(currentStudy);
		StudyBarScript_tB72FB7D9DE7B07049788EE84513F10E852729004* L_0 = __this->___studyBar_22;
		float L_1 = __this->___currentStudy_16;
		NullCheck(L_0);
		StudyBarScript_SetStudy_m7ED449C3FF243297D71CA9BC510B79564485E2F3(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Player::IncreaseSleep(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_IncreaseSleep_m61BF91969B0A671F0F312233D376669BFDED8B8B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___sleep0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral575D25BF7B7B3D327BE67B8E2CCF81657B4EBE7B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentSleep < 1f)
		float L_0 = __this->___currentSleep_7;
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		// if (1f - currentSleep > sleep)
		float L_1 = __this->___currentSleep_7;
		float L_2 = ___sleep0;
		if ((!(((float)((float)il2cpp_codegen_subtract((1.0f), L_1))) > ((float)L_2))))
		{
			goto IL_002c;
		}
	}
	{
		// currentSleep += sleep;
		float L_3 = __this->___currentSleep_7;
		float L_4 = ___sleep0;
		__this->___currentSleep_7 = ((float)il2cpp_codegen_add(L_3, L_4));
		goto IL_0037;
	}

IL_002c:
	{
		// else currentSleep = 1f;
		__this->___currentSleep_7 = (1.0f);
	}

IL_0037:
	{
		// PlayerPrefs.SetFloat("sleep", currentSleep);
		float L_5 = __this->___currentSleep_7;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral575D25BF7B7B3D327BE67B8E2CCF81657B4EBE7B, L_5, NULL);
		// }
		return;
	}
}
// System.Void Player::DecreaseSleep(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DecreaseSleep_mB30E1298AC32ADC2EB6F07064E6C093E89EFC247 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___sleep0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral575D25BF7B7B3D327BE67B8E2CCF81657B4EBE7B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentSleep < sleep)
		float L_0 = __this->___currentSleep_7;
		float L_1 = ___sleep0;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		// currentSleep = 0;
		__this->___currentSleep_7 = (0.0f);
		goto IL_0024;
	}

IL_0016:
	{
		// currentSleep -= sleep;
		float L_2 = __this->___currentSleep_7;
		float L_3 = ___sleep0;
		__this->___currentSleep_7 = ((float)il2cpp_codegen_subtract(L_2, L_3));
	}

IL_0024:
	{
		// PlayerPrefs.SetFloat("sleep", currentSleep);
		float L_4 = __this->___currentSleep_7;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral575D25BF7B7B3D327BE67B8E2CCF81657B4EBE7B, L_4, NULL);
		// }
		return;
	}
}
// System.Void Player::IncreaseFood(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_IncreaseFood_m175D24C58D3F5251A7A4D07D1BC3108433F62615 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___food0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7199DC4D518631B6B363364577E0CD199012D943);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentFood < 1f)
		float L_0 = __this->___currentFood_10;
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		// if (1f - currentFood > food)
		float L_1 = __this->___currentFood_10;
		float L_2 = ___food0;
		if ((!(((float)((float)il2cpp_codegen_subtract((1.0f), L_1))) > ((float)L_2))))
		{
			goto IL_002c;
		}
	}
	{
		// currentFood += food;
		float L_3 = __this->___currentFood_10;
		float L_4 = ___food0;
		__this->___currentFood_10 = ((float)il2cpp_codegen_add(L_3, L_4));
		goto IL_0037;
	}

IL_002c:
	{
		// else currentFood = 1f;
		__this->___currentFood_10 = (1.0f);
	}

IL_0037:
	{
		// PlayerPrefs.SetFloat("food", currentFood);
		float L_5 = __this->___currentFood_10;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral7199DC4D518631B6B363364577E0CD199012D943, L_5, NULL);
		// }
		return;
	}
}
// System.Void Player::DecreaseFood(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DecreaseFood_mAB701D80F87EA21370E4056C9D33286C3C48ADE2 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___food0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7199DC4D518631B6B363364577E0CD199012D943);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentFood < food)
		float L_0 = __this->___currentFood_10;
		float L_1 = ___food0;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		// currentFood = 0;
		__this->___currentFood_10 = (0.0f);
		goto IL_0024;
	}

IL_0016:
	{
		// currentFood -= food;
		float L_2 = __this->___currentFood_10;
		float L_3 = ___food0;
		__this->___currentFood_10 = ((float)il2cpp_codegen_subtract(L_2, L_3));
	}

IL_0024:
	{
		// PlayerPrefs.SetFloat("food", currentFood);
		float L_4 = __this->___currentFood_10;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral7199DC4D518631B6B363364577E0CD199012D943, L_4, NULL);
		// }
		return;
	}
}
// System.Void Player::IncreaseToilet(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_IncreaseToilet_mEF10418FB39A65311DA95EB19D4B433287F41E70 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___toilet0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81B180B6B5498D1B30DB547415722E0681FBEF00);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentToilet < 1f)
		float L_0 = __this->___currentToilet_13;
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		// if (1f - currentToilet > toilet)
		float L_1 = __this->___currentToilet_13;
		float L_2 = ___toilet0;
		if ((!(((float)((float)il2cpp_codegen_subtract((1.0f), L_1))) > ((float)L_2))))
		{
			goto IL_002c;
		}
	}
	{
		// currentToilet += toilet;
		float L_3 = __this->___currentToilet_13;
		float L_4 = ___toilet0;
		__this->___currentToilet_13 = ((float)il2cpp_codegen_add(L_3, L_4));
		goto IL_0037;
	}

IL_002c:
	{
		// else currentToilet = 1f;
		__this->___currentToilet_13 = (1.0f);
	}

IL_0037:
	{
		// PlayerPrefs.SetFloat("toilet", currentToilet);
		float L_5 = __this->___currentToilet_13;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral81B180B6B5498D1B30DB547415722E0681FBEF00, L_5, NULL);
		// }
		return;
	}
}
// System.Void Player::DecreaseToilet(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DecreaseToilet_m94AADA5F808742CA216E5A4D074E54A6C536F6DA (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___toilet0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81B180B6B5498D1B30DB547415722E0681FBEF00);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentToilet < toilet)
		float L_0 = __this->___currentToilet_13;
		float L_1 = ___toilet0;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		// currentToilet = 0;
		__this->___currentToilet_13 = (0.0f);
		goto IL_0024;
	}

IL_0016:
	{
		// currentToilet -= toilet;
		float L_2 = __this->___currentToilet_13;
		float L_3 = ___toilet0;
		__this->___currentToilet_13 = ((float)il2cpp_codegen_subtract(L_2, L_3));
	}

IL_0024:
	{
		// PlayerPrefs.SetFloat("toilet", currentToilet);
		float L_4 = __this->___currentToilet_13;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral81B180B6B5498D1B30DB547415722E0681FBEF00, L_4, NULL);
		// }
		return;
	}
}
// System.Void Player::IncreaseStudy(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_IncreaseStudy_m022EF6DF42E07597B885BAC45FB286E4F8F48F5B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___study0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEDCE95713D8FE2D306D0C5C890B4605DE1A4229);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentStudy < 1f)
		float L_0 = __this->___currentStudy_16;
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		// if (1f - currentStudy > study)
		float L_1 = __this->___currentStudy_16;
		float L_2 = ___study0;
		if ((!(((float)((float)il2cpp_codegen_subtract((1.0f), L_1))) > ((float)L_2))))
		{
			goto IL_002c;
		}
	}
	{
		// currentStudy += study;
		float L_3 = __this->___currentStudy_16;
		float L_4 = ___study0;
		__this->___currentStudy_16 = ((float)il2cpp_codegen_add(L_3, L_4));
		goto IL_0037;
	}

IL_002c:
	{
		// else currentStudy = 1f;
		__this->___currentStudy_16 = (1.0f);
	}

IL_0037:
	{
		// PlayerPrefs.SetFloat("study", currentStudy);
		float L_5 = __this->___currentStudy_16;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteralDEDCE95713D8FE2D306D0C5C890B4605DE1A4229, L_5, NULL);
		// }
		return;
	}
}
// System.Void Player::DecreaseStudy(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DecreaseStudy_m945A741F6AF697559E9ACBC36E9AAA6CC1641B26 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___study0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEDCE95713D8FE2D306D0C5C890B4605DE1A4229);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentStudy < study)
		float L_0 = __this->___currentStudy_16;
		float L_1 = ___study0;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		// currentStudy = 0;
		__this->___currentStudy_16 = (0.0f);
		goto IL_0024;
	}

IL_0016:
	{
		// currentStudy -= study;
		float L_2 = __this->___currentStudy_16;
		float L_3 = ___study0;
		__this->___currentStudy_16 = ((float)il2cpp_codegen_subtract(L_2, L_3));
	}

IL_0024:
	{
		// PlayerPrefs.SetFloat("study", currentStudy);
		float L_4 = __this->___currentStudy_16;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteralDEDCE95713D8FE2D306D0C5C890B4605DE1A4229, L_4, NULL);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public float maxSleep = 1f;
		__this->___maxSleep_6 = (1.0f);
		// private float sleepDecrease = 0.02f;
		__this->___sleepDecrease_8 = (0.0199999996f);
		// public float maxFood = 1f;
		__this->___maxFood_9 = (1.0f);
		// private float foodDecrease = 0.02f;
		__this->___foodDecrease_11 = (0.0199999996f);
		// public float maxToilet = 1f;
		__this->___maxToilet_12 = (1.0f);
		// private float toiletDecrease = 0.02f;
		__this->___toiletDecrease_14 = (0.0199999996f);
		// public float maxStudy = 1f;
		__this->___maxStudy_15 = (1.0f);
		// private float studyDecrease = 0.02f;
		__this->___studyDecrease_17 = (0.0199999996f);
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
// System.Void Save::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Save__ctor_m7F3B81D9CECE1B025AAA41AA4D9C675D5B6C1A89 (Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* __this, const RuntimeMethod* method) 
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
// System.Void SaveScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveScript_Start_m09B8F92B08F043F34F542ED3871E74A516F29899 (SaveScript_t09B429C05EBFAA90F457DE130F598A222CD4C782* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7EAEE63A5F96CDE0563DC8E2B878E945AD50716);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GetComponent<Player>();
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0;
		L_0 = Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3(__this, Component_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m8F699A0050226AECAE02DCAAB9B8B34D1D602CB3_RuntimeMethod_var);
		__this->___player_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_0);
		// filepath = Application.persistentDataPath + "/student.save";
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteralE7EAEE63A5F96CDE0563DC8E2B878E945AD50716, NULL);
		__this->___filepath_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___filepath_5), (void*)L_2);
		// }
		return;
	}
}
// System.Void SaveScript::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveScript_SaveData_m18C7A63132D5F8E8B6F8B11873DAA3D35DD1C728 (SaveScript_t09B429C05EBFAA90F457DE130F598A222CD4C782* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E79CFB6AE8C0FE914A1D80E97AD903711ED029);
		s_Il2CppMethodInitialized = true;
	}
	Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* V_0 = NULL;
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	{
		// var save = new Save()
		// {
		//     FoodData = player.currentFood,
		//     SleepData = player.currentSleep,
		//     StudyData = player.currentStudy,
		//     ToiletData = player.currentToilet
		// };
		Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* L_0 = (Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911*)il2cpp_codegen_object_new(Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Save__ctor_m7F3B81D9CECE1B025AAA41AA4D9C675D5B6C1A89(L_0, NULL);
		Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* L_1 = L_0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_2 = __this->___player_4;
		NullCheck(L_2);
		float L_3 = L_2->___currentFood_10;
		NullCheck(L_1);
		L_1->___FoodData_0 = L_3;
		Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* L_4 = L_1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = __this->___player_4;
		NullCheck(L_5);
		float L_6 = L_5->___currentSleep_7;
		NullCheck(L_4);
		L_4->___SleepData_1 = L_6;
		Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* L_7 = L_4;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_8 = __this->___player_4;
		NullCheck(L_8);
		float L_9 = L_8->___currentStudy_16;
		NullCheck(L_7);
		L_7->___StudyData_2 = L_9;
		Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* L_10 = L_7;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_11 = __this->___player_4;
		NullCheck(L_11);
		float L_12 = L_11->___currentToilet_13;
		NullCheck(L_10);
		L_10->___ToiletData_3 = L_12;
		V_0 = L_10;
		// var binaryFormatter = new BinaryFormatter();
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_13 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_13, NULL);
		V_1 = L_13;
		// using (var filestream = File.Create(filepath)) //using ????????? ?????, ??? ?? ????? ????????? filestream
		String_t* L_14 = __this->___filepath_5;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_15;
		L_15 = File_Create_m1CEFB773993DCC259CC20C29818B754726A25E89(L_14, NULL);
		V_2 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_16 = V_2;
					if (!L_16)
					{
						goto IL_006f;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_17 = V_2;
					NullCheck(L_17);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// binaryFormatter.Serialize(filestream, save);
			BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_18 = V_1;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_19 = V_2;
			Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* L_20 = V_0;
			NullCheck(L_18);
			BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E(L_18, L_19, L_20, NULL);
			// }
			goto IL_0070;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// Debug.Log("Data saved");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral14E79CFB6AE8C0FE914A1D80E97AD903711ED029, NULL);
		// }
		return;
	}
}
// System.Void SaveScript::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveScript_LoadData_m6B867C705B00139F4013802DEB49C4823E3AD91B (SaveScript_t09B429C05EBFAA90F457DE130F598A222CD4C782* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17397BE4D52C2D0E30ABE8A77888C60F5360CDC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC802DA458115BA659B22F88C7090912A53F76F66);
		s_Il2CppMethodInitialized = true;
	}
	Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* V_0 = NULL;
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	{
		// if (File.Exists(filepath))
		String_t* L_0 = __this->___filepath_5;
		bool L_1;
		L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
		if (!L_1)
		{
			goto IL_0088;
		}
	}
	{
		// var binaryFormatter = new BinaryFormatter();
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_2 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_2, NULL);
		V_1 = L_2;
		// using (var fileStream = File.Open(filepath, FileMode.Open))
		String_t* L_3 = __this->___filepath_5;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4;
		L_4 = File_Open_m9C6D5876B037A5A8341D216B767D4C8BE7084326(L_3, 3, NULL);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5 = V_2;
					if (!L_5)
					{
						goto IL_0038;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0038:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// save = (Save)binaryFormatter.Deserialize(fileStream);
			BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_7 = V_1;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8 = V_2;
			NullCheck(L_7);
			RuntimeObject* L_9;
			L_9 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_7, L_8, NULL);
			V_0 = ((Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911*)CastclassClass((RuntimeObject*)L_9, Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911_il2cpp_TypeInfo_var));
			// }
			goto IL_0039;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		// player.currentFood = save.FoodData;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_10 = __this->___player_4;
		Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* L_11 = V_0;
		NullCheck(L_11);
		float L_12 = L_11->___FoodData_0;
		NullCheck(L_10);
		L_10->___currentFood_10 = L_12;
		// player.currentSleep = save.SleepData;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_13 = __this->___player_4;
		Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* L_14 = V_0;
		NullCheck(L_14);
		float L_15 = L_14->___SleepData_1;
		NullCheck(L_13);
		L_13->___currentSleep_7 = L_15;
		// player.currentStudy = save.StudyData;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_16 = __this->___player_4;
		Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* L_17 = V_0;
		NullCheck(L_17);
		float L_18 = L_17->___StudyData_2;
		NullCheck(L_16);
		L_16->___currentStudy_16 = L_18;
		// player.currentToilet = save.ToiletData;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_19 = __this->___player_4;
		Save_t0B9D503D5EC9ADFA88D5AFA830C8830B55617911* L_20 = V_0;
		NullCheck(L_20);
		float L_21 = L_20->___ToiletData_3;
		NullCheck(L_19);
		L_19->___currentToilet_13 = L_21;
		// Debug.Log("Loaded data");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralC802DA458115BA659B22F88C7090912A53F76F66, NULL);
		return;
	}

IL_0088:
	{
		// Debug.Log("Warning, data doesn't exist");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral17397BE4D52C2D0E30ABE8A77888C60F5360CDC4, NULL);
		// }
		return;
	}
}
// System.Void SaveScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveScript__ctor_mC167E10172D71949D549E6B7D569F83A5CF951C9 (SaveScript_t09B429C05EBFAA90F457DE130F598A222CD4C782* __this, const RuntimeMethod* method) 
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
// System.Void SceneChange::ChangeScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange_ChangeScene_mB15E7A40CAC031E600BCDBA3D6652684EFD17269 (SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___sceneName0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange__ctor_m4BEE4E939472EAB59441D14F2324EEE353793A1B (SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D* __this, const RuntimeMethod* method) 
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
// System.Void FoodBarScript::SetFood(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodBarScript_SetFood_m14EC2559C761867E5AD8E001108C4160F50B6368 (FoodBarScript_t8BACCE25472881A21F03809C9110F9231DCAF660* __this, float ___food0, const RuntimeMethod* method) 
{
	{
		// slider.value = food;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		float L_1 = ___food0;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// image.color = gradient.Evaluate(food);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___image_5;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_3 = __this->___gradient_6;
		float L_4 = ___food0;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_3, L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void FoodBarScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodBarScript__ctor_m26F5BD2048A114E969461C4186FEC5BE9F90BE80 (FoodBarScript_t8BACCE25472881A21F03809C9110F9231DCAF660* __this, const RuntimeMethod* method) 
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
// System.Void SleepBarScript::SetSleep(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SleepBarScript_SetSleep_m3855169814068403BB2AF635F8757FC1615D7257 (SleepBarScript_tF75F6FEEAFF385F193A0D75AD3A2A4270891134A* __this, float ___sleep0, const RuntimeMethod* method) 
{
	{
		// slider.value = sleep;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		float L_1 = ___sleep0;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// image.color = gradient.Evaluate(sleep);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___image_5;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_3 = __this->___gradient_6;
		float L_4 = ___sleep0;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_3, L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void SleepBarScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SleepBarScript__ctor_m70FDFBED34313E48CD56B6D726622058C80F5D1C (SleepBarScript_tF75F6FEEAFF385F193A0D75AD3A2A4270891134A* __this, const RuntimeMethod* method) 
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
// System.Void StudyBarScript::SetStudy(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudyBarScript_SetStudy_m7ED449C3FF243297D71CA9BC510B79564485E2F3 (StudyBarScript_tB72FB7D9DE7B07049788EE84513F10E852729004* __this, float ___study0, const RuntimeMethod* method) 
{
	{
		// slider.value = study;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		float L_1 = ___study0;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// image.color = gradient.Evaluate(study);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___image_5;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_3 = __this->___gradient_6;
		float L_4 = ___study0;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_3, L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void StudyBarScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudyBarScript__ctor_m7F69CC970FC62EBED42812019FF84F1197E4E1F8 (StudyBarScript_tB72FB7D9DE7B07049788EE84513F10E852729004* __this, const RuntimeMethod* method) 
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
// System.Void ToiletBarScript::SetToilet(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToiletBarScript_SetToilet_m3BD1DD46D9F102FF945FD3B2EE506720294A6308 (ToiletBarScript_tA56637E27C95334AEE73E7A4F42F5916AE62C235* __this, float ___toilet0, const RuntimeMethod* method) 
{
	{
		// slider.value = toilet;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		float L_1 = ___toilet0;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// image.color = gradient.Evaluate(toilet);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___image_5;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_3 = __this->___gradient_6;
		float L_4 = ___toilet0;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_3, L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void ToiletBarScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToiletBarScript__ctor_m5A68290D048B79E8F9126F4551FCA4C3C84C70AE (ToiletBarScript_tA56637E27C95334AEE73E7A4F42F5916AE62C235* __this, const RuntimeMethod* method) 
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
// System.Void StudyProgressBar::SetStudyProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudyProgressBar_SetStudyProgress_m95619D151DD0F7AF7567D0E91E54040D6ABF9571 (StudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071* __this, float ___progress0, const RuntimeMethod* method) 
{
	{
		// slider.value = progress;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		float L_1 = ___progress0;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// image.color = gradient.Evaluate(progress);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___image_5;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_3 = __this->___gradient_6;
		float L_4 = ___progress0;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_3, L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void StudyProgressBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudyProgressBar__ctor_mDD94803430AB1C6BFF783900D9812A607529CADA (StudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071* __this, const RuntimeMethod* method) 
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
// System.Void StudyScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudyScript_Start_mDC0E1CF3CB22A497912C062813C1A24B1E2B88B1 (StudyScript_tE1B80812812DF2D50DEFFD687397970F46138E56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisStudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071_mF45FD24DA3664C29120E0C46F3B0AF5C33EA4393_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB984C603C3C9284CDC8CA31A79B15BF2B7FD8615);
		s_Il2CppMethodInitialized = true;
	}
	StudyScript_tE1B80812812DF2D50DEFFD687397970F46138E56* G_B2_0 = NULL;
	StudyScript_tE1B80812812DF2D50DEFFD687397970F46138E56* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	StudyScript_tE1B80812812DF2D50DEFFD687397970F46138E56* G_B3_1 = NULL;
	{
		// player = playerObj.GetComponent<Player>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playerObj_4;
		NullCheck(L_0);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1;
		L_1 = GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733(L_0, GameObject_GetComponent_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA22045F39AFBB0B4694ACB3AFE05ED8728242733_RuntimeMethod_var);
		__this->___player_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_5), (void*)L_1);
		// progressBar = progressBarObj.GetComponent<StudyProgressBar>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___progressBarObj_6;
		NullCheck(L_2);
		StudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071* L_3;
		L_3 = GameObject_GetComponent_TisStudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071_mF45FD24DA3664C29120E0C46F3B0AF5C33EA4393(L_2, GameObject_GetComponent_TisStudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071_mF45FD24DA3664C29120E0C46F3B0AF5C33EA4393_RuntimeMethod_var);
		__this->___progressBar_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___progressBar_7), (void*)L_3);
		// currentStudyProgress = (PlayerPrefs.HasKey("study_progress")) ? PlayerPrefs.GetFloat("study_progress") : 0f;
		bool L_4;
		L_4 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteralB984C603C3C9284CDC8CA31A79B15BF2B7FD8615, NULL);
		G_B1_0 = __this;
		if (L_4)
		{
			G_B2_0 = __this;
			goto IL_0036;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		goto IL_0040;
	}

IL_0036:
	{
		float L_5;
		L_5 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(_stringLiteralB984C603C3C9284CDC8CA31A79B15BF2B7FD8615, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0040:
	{
		NullCheck(G_B3_1);
		G_B3_1->___currentStudyProgress_11 = G_B3_0;
		// progressBar.SetStudyProgress(currentStudyProgress);
		StudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071* L_6 = __this->___progressBar_7;
		float L_7 = __this->___currentStudyProgress_11;
		NullCheck(L_6);
		StudyProgressBar_SetStudyProgress_m95619D151DD0F7AF7567D0E91E54040D6ABF9571(L_6, L_7, NULL);
		// if (currentStudyProgress == 1f)
		float L_8 = __this->___currentStudyProgress_11;
		if ((!(((float)L_8) == ((float)(1.0f)))))
		{
			goto IL_0076;
		}
	}
	{
		// defendLabaBttn.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___defendLabaBttn_8;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		goto IL_0087;
	}

IL_0076:
	{
		// defendLabaBttn.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___defendLabaBttn_8;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
	}

IL_0087:
	{
		// isStudying = false;
		__this->___isStudying_9 = (bool)0;
		// }
		return;
	}
}
// System.Void StudyScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudyScript_Update_m807994B80632C942DFAF34C967F85874BC4E6FC5 (StudyScript_tE1B80812812DF2D50DEFFD687397970F46138E56* __this, const RuntimeMethod* method) 
{
	{
		// if (isStudying)
		bool L_0 = __this->___isStudying_9;
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		// player.IncreaseStudy(studyIncrease * Time.deltaTime);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = __this->___player_5;
		float L_2 = __this->___studyIncrease_10;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_1);
		Player_IncreaseStudy_m022EF6DF42E07597B885BAC45FB286E4F8F48F5B(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// IncreaseStudyProgress(studyIncrease * Time.deltaTime);
		float L_4 = __this->___studyIncrease_10;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		StudyScript_IncreaseStudyProgress_mF839D4E3FF72FE887EE960C6E596A7919E00C845(__this, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		// progressBar.SetStudyProgress(currentStudyProgress);
		StudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071* L_6 = __this->___progressBar_7;
		float L_7 = __this->___currentStudyProgress_11;
		NullCheck(L_6);
		StudyProgressBar_SetStudyProgress_m95619D151DD0F7AF7567D0E91E54040D6ABF9571(L_6, L_7, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void StudyScript::IncreaseStudyProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudyScript_IncreaseStudyProgress_mF839D4E3FF72FE887EE960C6E596A7919E00C845 (StudyScript_tE1B80812812DF2D50DEFFD687397970F46138E56* __this, float ___study0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB984C603C3C9284CDC8CA31A79B15BF2B7FD8615);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentStudyProgress < 1f)
		float L_0 = __this->___currentStudyProgress_11;
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		// if (1f - currentStudyProgress > study)
		float L_1 = __this->___currentStudyProgress_11;
		float L_2 = ___study0;
		if ((!(((float)((float)il2cpp_codegen_subtract((1.0f), L_1))) > ((float)L_2))))
		{
			goto IL_002c;
		}
	}
	{
		// currentStudyProgress += study;
		float L_3 = __this->___currentStudyProgress_11;
		float L_4 = ___study0;
		__this->___currentStudyProgress_11 = ((float)il2cpp_codegen_add(L_3, L_4));
		goto IL_0060;
	}

IL_002c:
	{
		// currentStudyProgress = 1f;
		__this->___currentStudyProgress_11 = (1.0f);
		// isStudying = false;
		__this->___isStudying_9 = (bool)0;
		// player.StudyStatusChange(isStudying);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = __this->___player_5;
		bool L_6 = __this->___isStudying_9;
		NullCheck(L_5);
		Player_StudyStatusChange_mA3C28B30A7ED3FDCB603914468E6A85C789AFDA4_inline(L_5, L_6, NULL);
		// defendLabaBttn.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___defendLabaBttn_8;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
	}

IL_0060:
	{
		// PlayerPrefs.SetFloat("study_progress",currentStudyProgress);
		float L_9 = __this->___currentStudyProgress_11;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteralB984C603C3C9284CDC8CA31A79B15BF2B7FD8615, L_9, NULL);
		// }
		return;
	}
}
// System.Void StudyScript::OnStudyBttnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudyScript_OnStudyBttnClick_m8FCB189A51377C44B6BB5C8CC90131D94D4F3EFF (StudyScript_tE1B80812812DF2D50DEFFD687397970F46138E56* __this, const RuntimeMethod* method) 
{
	{
		// if (isStudying)
		bool L_0 = __this->___isStudying_9;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// isStudying = false;
		__this->___isStudying_9 = (bool)0;
		goto IL_0025;
	}

IL_0011:
	{
		// else if (currentStudyProgress != 1f)
		float L_1 = __this->___currentStudyProgress_11;
		if ((((float)L_1) == ((float)(1.0f))))
		{
			goto IL_0025;
		}
	}
	{
		// isStudying = true;
		__this->___isStudying_9 = (bool)1;
	}

IL_0025:
	{
		// player.StudyStatusChange(isStudying);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_2 = __this->___player_5;
		bool L_3 = __this->___isStudying_9;
		NullCheck(L_2);
		Player_StudyStatusChange_mA3C28B30A7ED3FDCB603914468E6A85C789AFDA4_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void StudyScript::OnDefendBttnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudyScript_OnDefendBttnClick_mD651217413B33AFAE00F41F4634DC97D78B4D81C (StudyScript_tE1B80812812DF2D50DEFFD687397970F46138E56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB984C603C3C9284CDC8CA31A79B15BF2B7FD8615);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentStudyProgress = 0f;
		__this->___currentStudyProgress_11 = (0.0f);
		// PlayerPrefs.SetFloat("study_progress", currentStudyProgress);
		float L_0 = __this->___currentStudyProgress_11;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteralB984C603C3C9284CDC8CA31A79B15BF2B7FD8615, L_0, NULL);
		// progressBar.SetStudyProgress(currentStudyProgress);
		StudyProgressBar_tD7DE25221DF0D1D5A36E62BF604FA6CD03C90071* L_1 = __this->___progressBar_7;
		float L_2 = __this->___currentStudyProgress_11;
		NullCheck(L_1);
		StudyProgressBar_SetStudyProgress_m95619D151DD0F7AF7567D0E91E54040D6ABF9571(L_1, L_2, NULL);
		// defendLabaBttn.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___defendLabaBttn_8;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void StudyScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StudyScript__ctor_mB7BC76079832E269CBC884DE065DF082BCD73DB5 (StudyScript_tE1B80812812DF2D50DEFFD687397970F46138E56* __this, const RuntimeMethod* method) 
{
	{
		// private float studyIncrease = 0.1f;
		__this->___studyIncrease_10 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_StudyStatusChange_mA3C28B30A7ED3FDCB603914468E6A85C789AFDA4_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, bool ___toStudy0, const RuntimeMethod* method) 
{
	{
		// isStudying = toStudy;
		bool L_0 = ___toStudy0;
		__this->___isStudying_18 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
