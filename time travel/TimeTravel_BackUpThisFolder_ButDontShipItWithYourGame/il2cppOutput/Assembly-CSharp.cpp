#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.EventHandler`1<ReadyPlayerMe.Core.IOperation`1<ReadyPlayerMe.AvatarLoader.AvatarContext>>
struct EventHandler_1_tACAC021C99C5B38A681F8E74EE936093E7276FF1;
// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs>
struct EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9;
// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs>
struct EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.ProgressChangeEventArgs>
struct EventHandler_1_t492A962E32DC2E6002F7DCAC3B24A3E8EED39092;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// ReadyPlayerMe.Core.OperationExecutor`1<ReadyPlayerMe.AvatarLoader.AvatarContext>
struct OperationExecutor_1_t06ACFD362E89FC0F84CAE68217EE64F4E6746033;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// AndroidDebug
struct AndroidDebug_tBEADC7B68E8D668A75418286BE0FCE9AEBD54005;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// ReadyPlayerMe.AvatarLoader.AvatarConfig
struct AvatarConfig_t3F2CFD701F17C758DF700AA438DE8476A8488FEB;
// ReadyPlayerMe.AvatarLoader.AvatarObjectLoader
struct AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5;
// ReadyPlayerMe.QuickStart.CameraFollow
struct CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8;
// ReadyPlayerMe.QuickStart.CameraOrbit
struct CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChangeSenceOnTouch
struct ChangeSenceOnTouch_t371056D234CD0DEE75EBD558203C9144D5BF3813;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// ClickHandler
struct ClickHandler_tFD8C8F3D79846284FF36C09A95D28AE6E01F2B4E;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// ReadyPlayerMe.AvatarLoader.CompletionEventArgs
struct CompletionEventArgs_tBF4A5164C04020BEF9A73E33EA6A6EA73E9E297C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// ReadyPlayerMe.AvatarLoader.FailureEventArgs
struct FailureEventArgs_t2087FE370565AABC9CE48DD7810CF3E4757B571F;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GLTFDeferAgent
struct GLTFDeferAgent_t749A2C9D6DF77C4976728131C532C9E055DEB90E;
// GPSManager
struct GPSManager_tC4A2C154A0EF0A6612468CCD6DE545406585E6A6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// GroundCheck
struct GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44;
// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E;
// ReadyPlayerMe.Loader.IImporter
struct IImporter_tC3D3E6F30D8180BC4C2BB4EDF64A6DF1326BD47F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// System.Net.IWebProxy
struct IWebProxy_t3ECD2C773539B48B18734D61E87B685A9C93076D;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MouseCursorLock
struct MouseCursorLock_t292CEF568900532854722008B1471487CAF46558;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// ReadyPlayerMe.QuickStart.PlayerInput
struct PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Net.Cache.RequestCacheBinding
struct RequestCacheBinding_t18F3F4FF8D0F77E86C2C666CEE7FD48A80C042EE;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550;
// System.Net.Cache.RequestCacheProtocol
struct RequestCacheProtocol_t43C1AC170194874A0C0B0D3B8BE9EABFB613DF85;
// Rotate
struct Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE;
// RotateAnim
struct RotateAnim_t7E8050340BBE356977CC81127CC944C099FB26B7;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254;
// SampleSpeechToText
struct SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// SpeechButton
struct SpeechButton_t695A7EB3DF05B56C64C3D98B55A6662695BB98C7;
// TextSpeech.SpeechToText
struct SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TestCubeButton
struct TestCubeButton_tC79A6808115ED83A51791EB6001886449805FEDE;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// TextSpeech.TextToSpeech
struct TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ReadyPlayerMe.QuickStart.ThirdPersonController
struct ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3;
// ReadyPlayerMe.QuickStart.ThirdPersonLoader
struct ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4;
// ReadyPlayerMe.QuickStart.ThirdPersonMovement
struct ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28;
// TimeTravelGPS
struct TimeTravelGPS_tC4627DCBA59CB93EB008FF80DFF3A79E56E2F1B5;
// TimeTravelGyroCameraController
struct TimeTravelGyroCameraController_tD3DF10DD9FFAC745998FCAE6F85DD18ABD4A09A8;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VoiceController
struct VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Net.TimerThread/Queue
struct Queue_t644DC21212BC432819522EDA395EB4562BE2CC47;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral027B9508F2B8152125048E1C3C203BF9D3C7B796;
IL2CPP_EXTERN_C String_t* _stringLiteral0A18A0541370CEA6CB968C6C5F80930896338E31;
IL2CPP_EXTERN_C String_t* _stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3;
IL2CPP_EXTERN_C String_t* _stringLiteral130C0BF8D779F89E6473C8ECD85D33008E0E213F;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1BE27C610D1A962E4CDE9FE423F34FD211AE25BF;
IL2CPP_EXTERN_C String_t* _stringLiteral1C54E91B21EBC44612B56B64334BEEE6D6859198;
IL2CPP_EXTERN_C String_t* _stringLiteral1FD232E440FB646BF618F915C132F613E2C011C6;
IL2CPP_EXTERN_C String_t* _stringLiteral254E32F59DCD1922EE5D660AC3E5087CE713EFF2;
IL2CPP_EXTERN_C String_t* _stringLiteral265483C9037E1F442D997A959595E93402B01C8D;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2CD1F3C7D6909FB02DC114E766D0AB42570BF79F;
IL2CPP_EXTERN_C String_t* _stringLiteral2DAD484DE09B996ABB6E4D4734363AF32364EB09;
IL2CPP_EXTERN_C String_t* _stringLiteral31303B045A5A278354593B16B365D497DAAED865;
IL2CPP_EXTERN_C String_t* _stringLiteral342DBF4225FAB93E2C37F54556AF0D11D55D87BC;
IL2CPP_EXTERN_C String_t* _stringLiteral3A74864324EF96C393D23006A90966A612B94F2F;
IL2CPP_EXTERN_C String_t* _stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877;
IL2CPP_EXTERN_C String_t* _stringLiteral40B2EE20D6ED4057D1B93BFD199822AC6B8F3AFD;
IL2CPP_EXTERN_C String_t* _stringLiteral425538BFDF4BFDE36D19F26B96A1476EDFD5F0F2;
IL2CPP_EXTERN_C String_t* _stringLiteral43835CC0FB92AD48E4CBC5B6677AE4707BFE1F2B;
IL2CPP_EXTERN_C String_t* _stringLiteral47A257C3F4BE6F44ABD010261DB4AE682EF9C8A6;
IL2CPP_EXTERN_C String_t* _stringLiteral518BBC396C162E73FB3893CF18F79DBF36E165B7;
IL2CPP_EXTERN_C String_t* _stringLiteral523082E159EC27FD5ECB2E23DAA047A2A65120E9;
IL2CPP_EXTERN_C String_t* _stringLiteral54BCB41819B377D2A7188BB6BDE84E1CE17A361D;
IL2CPP_EXTERN_C String_t* _stringLiteral54F10C971948B8427E0B9C5A103C9DDD87B465B5;
IL2CPP_EXTERN_C String_t* _stringLiteral56D8C13B9CB1D57938FF9ABC8D1E0F654E0967DE;
IL2CPP_EXTERN_C String_t* _stringLiteral61B457898EF7682B2DC8DD1E1F1F077236320995;
IL2CPP_EXTERN_C String_t* _stringLiteral63B2FCB078E3AEDC55FC1A72BB6C5BE5F08AD72C;
IL2CPP_EXTERN_C String_t* _stringLiteral65690B31880BFAB1F359D03E04E17C8D88318394;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2C56060B3F7353031AD314517C27945CC39748;
IL2CPP_EXTERN_C String_t* _stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral73B171A1256043C4DEF8480E5330B49CAB0EAF96;
IL2CPP_EXTERN_C String_t* _stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF;
IL2CPP_EXTERN_C String_t* _stringLiteral764B8DDE03FA4189F92051E2C0296E4DB05A3A37;
IL2CPP_EXTERN_C String_t* _stringLiteral7A99C1F8BDAB8B4B4A3CE5123521F4F154035853;
IL2CPP_EXTERN_C String_t* _stringLiteral7B99FF25646FD157E45A1ED64AA4D98C216C94DC;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral919EEFB14D870EA7332724FE26EEF4E78FAD9E64;
IL2CPP_EXTERN_C String_t* _stringLiteral971006145A90DCA19094D2D2C56BF4B1170A3393;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D2F838F02A5087F5EDE73F9D24BF923AEB736B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7055B958F2766D40F1628112CCCE68FF135D0DA;
IL2CPP_EXTERN_C String_t* _stringLiteralAACBBF5D44E5A141E72DAA4F69C350BFF7856E6B;
IL2CPP_EXTERN_C String_t* _stringLiteralB501AE4894A0444AD410C928109E9D8BDF62DA28;
IL2CPP_EXTERN_C String_t* _stringLiteralC364D485E2F5CBD29610DC2BB6F7FF1828C09A8F;
IL2CPP_EXTERN_C String_t* _stringLiteralC5A07FE10EB68540AEDE50779D90B2C5AD5FF607;
IL2CPP_EXTERN_C String_t* _stringLiteralD352252FE3B272E89CCB3EEBF7BAFF564AF99F49;
IL2CPP_EXTERN_C String_t* _stringLiteralD7044A18A6CDAC0BB9417558F1F2FC91C1A528A6;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982;
IL2CPP_EXTERN_C String_t* _stringLiteralDF165BD0A7270824F995944DA2D3C767DDE4FB63;
IL2CPP_EXTERN_C String_t* _stringLiteralE003C5A5E9495494C17FE6A1F633707B6ADAE5EC;
IL2CPP_EXTERN_C String_t* _stringLiteralE13F0ABCD8E277497B7FCD3480E7D74A1D755745;
IL2CPP_EXTERN_C String_t* _stringLiteralE931A46B31E45B88BA68CD06161E11FDF3270C01;
IL2CPP_EXTERN_C String_t* _stringLiteralEA96601D79B410E78ED885E29D7A25794A833FD2;
IL2CPP_EXTERN_C String_t* _stringLiteralEB98F8D20095BFAE0EF447C826C446CDDCB34784;
IL2CPP_EXTERN_C String_t* _stringLiteralFE74230622B0F806E10F48157B6CF68EC36AE776;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidDebug_onBeginningOfSpeechCallback_mD61E1D1C870F83747C1B5BD442E3395C470812C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidDebug_onEndOfSpeechCallback_m43F57FDE9C6768A19411818D1855889CFC85C57A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidDebug_onErrorCallback_m0210A74AB99B237CA03C2A33306282BD15376480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidDebug_onPartialResultsCallback_m8B19C16D7AE6B1EA9BE3535418701C0EC05F77DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidDebug_onReadyForSpeechCallback_m4965D3E224891C1250C1B6AF7AA3751659FEB0FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidDebug_onResultCallback_mAD100BB8B969A1537D491A22ED15C0B467142862_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidDebug_onRmsChangedCallback_mF4D118FB9ADB5C2BDC1359F5EAA1E810F83EE827_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m2EF5C398F98450FF07BD95E49F2CCC48B5C6698B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C_m1A0CAB9BA6FD5D086A1908CC3ABB0151F01C805A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_mB4628DB9A699A47DAA8B46549B7E18E9855256A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28_m7AC9E938D2DE0CBDE4A45BD8BFD5FC99E97F2D1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_mB5B56CB2F3DD3E12DE78A7962536B195168468A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_m91A159F666DC9BC9906CACC2FA8C17B74FCEAE62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleSpeechToText_OnResultSpeech_m65B1CF4F51224F5B6FD1FC76A35CC1650A657AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThirdPersonController_OnJump_m3F89B0385F6CD86D90FEB4B0E9A5D95D4A4360BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThirdPersonLoader_OnLoadCompleted_m4714CFBA3EDFA59DA815C95220553EBB2DE89160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThirdPersonLoader_OnLoadFailed_m3D28BF90D7C6FE48C624683DF5DD68C7A795214B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceController_OnFinalSpeechResult_m7DB4CBCC136CA8BD5A0F651C483335887FB3531A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceController_OnPartialSpeechResult_m489B8E24D28695435413EF6005318880208ED962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceController_OnSpeakStart_m7C7E5CEA47E78A6C30EED0C64A772CAF8824EA29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceController_OnSpeakStop_m46060160B895B82D0EF3C444A6D48ADF0769D207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

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

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// ReadyPlayerMe.AvatarLoader.AvatarObjectLoader
struct AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69  : public RuntimeObject
{
	// System.Boolean ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::avatarCachingEnabled
	bool ___avatarCachingEnabled_1;
	// ReadyPlayerMe.AvatarLoader.AvatarConfig ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::AvatarConfig
	AvatarConfig_t3F2CFD701F17C758DF700AA438DE8476A8488FEB* ___AvatarConfig_2;
	// ReadyPlayerMe.Loader.IImporter ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::Importer
	RuntimeObject* ___Importer_3;
	// GLTFDeferAgent ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::GLTFDeferAgent
	GLTFDeferAgent_t749A2C9D6DF77C4976728131C532C9E055DEB90E* ___GLTFDeferAgent_4;
	// System.String ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::avatarUrl
	String_t* ___avatarUrl_5;
	// ReadyPlayerMe.Core.OperationExecutor`1<ReadyPlayerMe.AvatarLoader.AvatarContext> ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::executor
	OperationExecutor_1_t06ACFD362E89FC0F84CAE68217EE64F4E6746033* ___executor_6;
	// System.Single ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::startTime
	float ___startTime_7;
	// System.Boolean ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::<SaveInProjectFolder>k__BackingField
	bool ___U3CSaveInProjectFolderU3Ek__BackingField_8;
	// System.Int32 ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_9;
	// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs> ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::OnFailed
	EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A* ___OnFailed_10;
	// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.ProgressChangeEventArgs> ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::OnProgressChanged
	EventHandler_1_t492A962E32DC2E6002F7DCAC3B24A3E8EED39092* ___OnProgressChanged_11;
	// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs> ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::OnCompleted
	EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9* ___OnCompleted_12;
	// System.EventHandler`1<ReadyPlayerMe.Core.IOperation`1<ReadyPlayerMe.AvatarLoader.AvatarContext>> ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::OperationCompleted
	EventHandler_1_tACAC021C99C5B38A681F8E74EE936093E7276FF1* ___OperationCompleted_13;
};

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E  : public RuntimeObject
{
	// System.Int32 UnityEngine.Gyroscope::m_GyroIndex
	int32_t ___m_GyroIndex_0;
};

// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2  : public RuntimeObject
{
};

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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// ReadyPlayerMe.AvatarLoader.FailureEventArgs
struct FailureEventArgs_t2087FE370565AABC9CE48DD7810CF3E4757B571F  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String ReadyPlayerMe.AvatarLoader.FailureEventArgs::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_1;
	// System.String ReadyPlayerMe.AvatarLoader.FailureEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
	// ReadyPlayerMe.AvatarLoader.FailureType ReadyPlayerMe.AvatarLoader.FailureEventArgs::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_3;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.LocationInfo
struct LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 
{
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
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

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
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

// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::m_AuthenticationLevel
	int32_t ___m_AuthenticationLevel_4;
	// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::m_ImpersonationLevel
	int32_t ___m_ImpersonationLevel_5;
	// System.Net.Cache.RequestCachePolicy System.Net.WebRequest::m_CachePolicy
	RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550* ___m_CachePolicy_6;
	// System.Net.Cache.RequestCacheProtocol System.Net.WebRequest::m_CacheProtocol
	RequestCacheProtocol_t43C1AC170194874A0C0B0D3B8BE9EABFB613DF85* ___m_CacheProtocol_7;
	// System.Net.Cache.RequestCacheBinding System.Net.WebRequest::m_CacheBinding
	RequestCacheBinding_t18F3F4FF8D0F77E86C2C666CEE7FD48A80C042EE* ___m_CacheBinding_8;
};

// System.Net.WebResponse
struct WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Boolean System.Net.WebResponse::m_IsFromCache
	bool ___m_IsFromCache_1;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// ReadyPlayerMe.AvatarLoader.AvatarMetadata
struct AvatarMetadata_t43E399B546AD0144D43B37F6839CE40848898436 
{
	// ReadyPlayerMe.AvatarLoader.BodyType ReadyPlayerMe.AvatarLoader.AvatarMetadata::BodyType
	int32_t ___BodyType_0;
	// ReadyPlayerMe.AvatarLoader.OutfitGender ReadyPlayerMe.AvatarLoader.AvatarMetadata::OutfitGender
	int32_t ___OutfitGender_1;
	// System.DateTime ReadyPlayerMe.AvatarLoader.AvatarMetadata::UpdatedAt
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UpdatedAt_2;
	// System.String ReadyPlayerMe.AvatarLoader.AvatarMetadata::SkinTone
	String_t* ___SkinTone_3;
};
// Native definition for P/Invoke marshalling of ReadyPlayerMe.AvatarLoader.AvatarMetadata
struct AvatarMetadata_t43E399B546AD0144D43B37F6839CE40848898436_marshaled_pinvoke
{
	int32_t ___BodyType_0;
	int32_t ___OutfitGender_1;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UpdatedAt_2;
	char* ___SkinTone_3;
};
// Native definition for COM marshalling of ReadyPlayerMe.AvatarLoader.AvatarMetadata
struct AvatarMetadata_t43E399B546AD0144D43B37F6839CE40848898436_marshaled_com
{
	int32_t ___BodyType_0;
	int32_t ___OutfitGender_1;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UpdatedAt_2;
	Il2CppChar* ___SkinTone_3;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// ReadyPlayerMe.AvatarLoader.CompletionEventArgs
struct CompletionEventArgs_tBF4A5164C04020BEF9A73E33EA6A6EA73E9E297C  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String ReadyPlayerMe.AvatarLoader.CompletionEventArgs::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_1;
	// UnityEngine.GameObject ReadyPlayerMe.AvatarLoader.CompletionEventArgs::<Avatar>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CAvatarU3Ek__BackingField_2;
	// ReadyPlayerMe.AvatarLoader.AvatarMetadata ReadyPlayerMe.AvatarLoader.CompletionEventArgs::<Metadata>k__BackingField
	AvatarMetadata_t43E399B546AD0144D43B37F6839CE40848898436 ___U3CMetadataU3Ek__BackingField_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs>
struct EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9  : public MulticastDelegate_t
{
};

// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs>
struct EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
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

// AndroidDebug
struct AndroidDebug_tBEADC7B68E8D668A75418286BE0FCE9AEBD54005  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text AndroidDebug::txtLog
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtLog_4;
	// UnityEngine.UI.Text AndroidDebug::txtNewLog
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtNewLog_5;
	// UnityEngine.RectTransform AndroidDebug::RmsBar
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___RmsBar_6;
};

// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CameraController::rotationSpeed
	float ___rotationSpeed_4;
};

// ReadyPlayerMe.QuickStart.CameraFollow
struct CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ReadyPlayerMe.QuickStart.CameraFollow::TAG
	String_t* ___TAG_5;
	// UnityEngine.Camera ReadyPlayerMe.QuickStart.CameraFollow::playerCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___playerCamera_6;
	// UnityEngine.Transform ReadyPlayerMe.QuickStart.CameraFollow::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_7;
	// System.Single ReadyPlayerMe.QuickStart.CameraFollow::cameraDistance
	float ___cameraDistance_8;
	// System.Boolean ReadyPlayerMe.QuickStart.CameraFollow::followOnStart
	bool ___followOnStart_9;
	// System.Boolean ReadyPlayerMe.QuickStart.CameraFollow::isFollowing
	bool ___isFollowing_10;
};

// ReadyPlayerMe.QuickStart.CameraOrbit
struct CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ReadyPlayerMe.QuickStart.PlayerInput ReadyPlayerMe.QuickStart.CameraOrbit::playerInput
	PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* ___playerInput_5;
	// System.Single ReadyPlayerMe.QuickStart.CameraOrbit::minRotationX
	float ___minRotationX_6;
	// System.Single ReadyPlayerMe.QuickStart.CameraOrbit::maxRotationX
	float ___maxRotationX_7;
	// System.Boolean ReadyPlayerMe.QuickStart.CameraOrbit::smoothDamp
	bool ___smoothDamp_8;
	// UnityEngine.Vector3 ReadyPlayerMe.QuickStart.CameraOrbit::rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotation_9;
	// UnityEngine.Vector3 ReadyPlayerMe.QuickStart.CameraOrbit::currentVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentVelocity_10;
	// System.Single ReadyPlayerMe.QuickStart.CameraOrbit::pitch
	float ___pitch_11;
	// System.Single ReadyPlayerMe.QuickStart.CameraOrbit::yaw
	float ___yaw_12;
};

// ChangeSenceOnTouch
struct ChangeSenceOnTouch_t371056D234CD0DEE75EBD558203C9144D5BF3813  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ChangeSenceOnTouch::touchCount
	int32_t ___touchCount_4;
};

// ClickHandler
struct ClickHandler_tFD8C8F3D79846284FF36C09A95D28AE6E01F2B4E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent ClickHandler::upEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___upEvent_4;
	// UnityEngine.Events.UnityEvent ClickHandler::downEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___downEvent_5;
};

// GPSManager
struct GPSManager_tC4A2C154A0EF0A6612468CCD6DE545406585E6A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI GPSManager::displayText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___displayText_4;
	// UnityEngine.Material GPSManager::mapMateial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mapMateial_5;
};

// GroundCheck
struct GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GroundCheck::groundedOffset
	float ___groundedOffset_4;
	// System.Single GroundCheck::groundRadius
	float ___groundRadius_5;
	// UnityEngine.LayerMask GroundCheck::groundMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundMask_6;
};

// MouseCursorLock
struct MouseCursorLock_t292CEF568900532854722008B1471487CAF46558  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CursorLockMode MouseCursorLock::cursorLockMode
	int32_t ___cursorLockMode_4;
	// System.Boolean MouseCursorLock::hideCursor
	bool ___hideCursor_5;
	// System.Boolean MouseCursorLock::applyOnStart
	bool ___applyOnStart_6;
};

// ReadyPlayerMe.QuickStart.PlayerInput
struct PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action ReadyPlayerMe.QuickStart.PlayerInput::OnJumpPress
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnJumpPress_9;
	// System.Single ReadyPlayerMe.QuickStart.PlayerInput::<AxisHorizontal>k__BackingField
	float ___U3CAxisHorizontalU3Ek__BackingField_10;
	// System.Single ReadyPlayerMe.QuickStart.PlayerInput::<AxisVertical>k__BackingField
	float ___U3CAxisVerticalU3Ek__BackingField_11;
	// System.Single ReadyPlayerMe.QuickStart.PlayerInput::<MouseAxisX>k__BackingField
	float ___U3CMouseAxisXU3Ek__BackingField_12;
	// System.Single ReadyPlayerMe.QuickStart.PlayerInput::<MouseAxisY>k__BackingField
	float ___U3CMouseAxisYU3Ek__BackingField_13;
	// System.Single ReadyPlayerMe.QuickStart.PlayerInput::mouseSensitivityX
	float ___mouseSensitivityX_14;
	// System.Single ReadyPlayerMe.QuickStart.PlayerInput::mouseSensitivityY
	float ___mouseSensitivityY_15;
};

// Rotate
struct Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Rotate::turnSpeed
	float ___turnSpeed_4;
};

// RotateAnim
struct RotateAnim_t7E8050340BBE356977CC81127CC944C099FB26B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RotateAnim::speed
	float ___speed_4;
};

// SampleSpeechToText
struct SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SampleSpeechToText::isShowPopupAndroid
	bool ___isShowPopupAndroid_4;
	// UnityEngine.GameObject SampleSpeechToText::loading
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loading_5;
	// UnityEngine.UI.Toggle SampleSpeechToText::toggleShowPopupAndroid
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggleShowPopupAndroid_6;
	// UnityEngine.UI.InputField SampleSpeechToText::inputLocale
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputLocale_7;
	// UnityEngine.UI.InputField SampleSpeechToText::inputText
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputText_8;
	// System.Single SampleSpeechToText::pitch
	float ___pitch_9;
	// System.Single SampleSpeechToText::rate
	float ___rate_10;
	// UnityEngine.UI.Text SampleSpeechToText::txtLocale
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtLocale_11;
	// UnityEngine.UI.Text SampleSpeechToText::txtPitch
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtPitch_12;
	// UnityEngine.UI.Text SampleSpeechToText::txtRate
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtRate_13;
};

// SpeechButton
struct SpeechButton_t695A7EB3DF05B56C64C3D98B55A6662695BB98C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SampleSpeechToText SpeechButton::sample
	SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* ___sample_4;
	// UnityEngine.GameObject SpeechButton::effect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___effect_5;
	// System.Single SpeechButton::speedEffect
	float ___speedEffect_6;
	// System.Single SpeechButton::scaleEffect
	float ___scaleEffect_7;
	// System.Single SpeechButton::speed
	float ___speed_8;
	// System.Single SpeechButton::scale
	float ___scale_9;
};

// TextSpeech.SpeechToText
struct SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean TextSpeech.SpeechToText::isShowPopupAndroid
	bool ___isShowPopupAndroid_5;
	// System.Action`1<System.String> TextSpeech.SpeechToText::onResultCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onResultCallback_6;
	// System.Action`1<System.String> TextSpeech.SpeechToText::onReadyForSpeechCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onReadyForSpeechCallback_16;
	// System.Action TextSpeech.SpeechToText::onEndOfSpeechCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onEndOfSpeechCallback_17;
	// System.Action`1<System.Single> TextSpeech.SpeechToText::onRmsChangedCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onRmsChangedCallback_18;
	// System.Action TextSpeech.SpeechToText::onBeginningOfSpeechCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onBeginningOfSpeechCallback_19;
	// System.Action`1<System.String> TextSpeech.SpeechToText::onErrorCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onErrorCallback_20;
	// System.Action`1<System.String> TextSpeech.SpeechToText::onPartialResultsCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onPartialResultsCallback_21;
};

// TestCubeButton
struct TestCubeButton_tC79A6808115ED83A51791EB6001886449805FEDE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TestCubeButton::lightObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lightObject_4;
	// UnityEngine.Material TestCubeButton::on
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___on_5;
	// UnityEngine.Material TestCubeButton::off
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___off_6;
	// TMPro.TextMeshProUGUI TestCubeButton::touchCountText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___touchCountText_7;
	// TMPro.TextMeshProUGUI TestCubeButton::buttonStatusText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___buttonStatusText_8;
	// UnityEngine.UI.Button TestCubeButton::sceneButton1
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___sceneButton1_9;
	// UnityEngine.UI.Button TestCubeButton::sceneButton2
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___sceneButton2_10;
	// System.Int32 TestCubeButton::touchCount
	int32_t ___touchCount_11;
	// System.String TestCubeButton::SceneName
	String_t* ___SceneName_12;
	// System.Single TestCubeButton::delay
	float ___delay_13;
	// System.Single TestCubeButton::timeOfLastSwitch
	float ___timeOfLastSwitch_14;
};

// TextSpeech.TextToSpeech
struct TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action TextSpeech.TextToSpeech::onStartCallBack
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onStartCallBack_5;
	// System.Action TextSpeech.TextToSpeech::onDoneCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onDoneCallback_6;
	// System.Action`1<System.String> TextSpeech.TextToSpeech::onSpeakRangeCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onSpeakRangeCallback_7;
	// System.Single TextSpeech.TextToSpeech::pitch
	float ___pitch_8;
	// System.Single TextSpeech.TextToSpeech::rate
	float ___rate_9;
};

// ReadyPlayerMe.QuickStart.ThirdPersonController
struct ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ReadyPlayerMe.QuickStart.ThirdPersonController::playerCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerCamera_9;
	// UnityEngine.Animator ReadyPlayerMe.QuickStart.ThirdPersonController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_10;
	// UnityEngine.Vector2 ReadyPlayerMe.QuickStart.ThirdPersonController::inputVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___inputVector_11;
	// UnityEngine.Vector3 ReadyPlayerMe.QuickStart.ThirdPersonController::moveVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveVector_12;
	// UnityEngine.GameObject ReadyPlayerMe.QuickStart.ThirdPersonController::avatar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___avatar_13;
	// ReadyPlayerMe.QuickStart.ThirdPersonMovement ReadyPlayerMe.QuickStart.ThirdPersonController::thirdPersonMovement
	ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* ___thirdPersonMovement_14;
	// ReadyPlayerMe.QuickStart.PlayerInput ReadyPlayerMe.QuickStart.ThirdPersonController::playerInput
	PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* ___playerInput_15;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonController::fallTimeoutDelta
	float ___fallTimeoutDelta_16;
	// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonController::inputEnabled
	bool ___inputEnabled_17;
	// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonController::isInitialized
	bool ___isInitialized_18;
};

// ReadyPlayerMe.QuickStart.ThirdPersonLoader
struct ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 ReadyPlayerMe.QuickStart.ThirdPersonLoader::avatarPositionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___avatarPositionOffset_4;
	// System.String ReadyPlayerMe.QuickStart.ThirdPersonLoader::avatarUrl
	String_t* ___avatarUrl_5;
	// UnityEngine.GameObject ReadyPlayerMe.QuickStart.ThirdPersonLoader::avatar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___avatar_6;
	// ReadyPlayerMe.AvatarLoader.AvatarObjectLoader ReadyPlayerMe.QuickStart.ThirdPersonLoader::avatarObjectLoader
	AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* ___avatarObjectLoader_7;
	// UnityEngine.RuntimeAnimatorController ReadyPlayerMe.QuickStart.ThirdPersonLoader::animatorController
	RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___animatorController_8;
	// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonLoader::loadOnStart
	bool ___loadOnStart_9;
	// UnityEngine.GameObject ReadyPlayerMe.QuickStart.ThirdPersonLoader::previewAvatar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___previewAvatar_10;
};

// ReadyPlayerMe.QuickStart.ThirdPersonMovement
struct ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ReadyPlayerMe.QuickStart.ThirdPersonMovement::playerCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerCamera_5;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::walkSpeed
	float ___walkSpeed_6;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::runSpeed
	float ___runSpeed_7;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::gravity
	float ___gravity_8;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::jumpHeight
	float ___jumpHeight_9;
	// UnityEngine.CharacterController ReadyPlayerMe.QuickStart.ThirdPersonMovement::controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___controller_10;
	// UnityEngine.GameObject ReadyPlayerMe.QuickStart.ThirdPersonMovement::avatar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___avatar_11;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::verticalVelocity
	float ___verticalVelocity_12;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::turnSmoothVelocity
	float ___turnSmoothVelocity_13;
	// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonMovement::jumpTrigger
	bool ___jumpTrigger_14;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::<CurrentMoveSpeed>k__BackingField
	float ___U3CCurrentMoveSpeedU3Ek__BackingField_15;
	// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonMovement::isRunning
	bool ___isRunning_16;
	// GroundCheck ReadyPlayerMe.QuickStart.ThirdPersonMovement::groundCheck
	GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* ___groundCheck_17;
};

// TimeTravelGPS
struct TimeTravelGPS_tC4627DCBA59CB93EB008FF80DFF3A79E56E2F1B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI TimeTravelGPS::gpsInfo
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___gpsInfo_4;
};

// TimeTravelGyroCameraController
struct TimeTravelGyroCameraController_tD3DF10DD9FFAC745998FCAE6F85DD18ABD4A09A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Gyroscope TimeTravelGyroCameraController::gyro
	Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* ___gyro_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VoiceController
struct VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI VoiceController::uiText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___uiText_5;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
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

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// ReadyPlayerMe.AvatarLoader.AvatarObjectLoader

// ReadyPlayerMe.AvatarLoader.AvatarObjectLoader

// System.IO.BinaryReader

// System.IO.BinaryReader

// UnityEngine.Gyroscope

// UnityEngine.Gyroscope

// UnityEngine.LocationService

// UnityEngine.LocationService

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// ReadyPlayerMe.AvatarLoader.FailureEventArgs

// ReadyPlayerMe.AvatarLoader.FailureEventArgs

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.LocationInfo

// UnityEngine.LocationInfo

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector2Int

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_StaticFields
{
	// System.Collections.ArrayList modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_PrefixList
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___s_PrefixList_1;
	// System.Object System.Net.WebRequest::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_2;
	// System.Net.TimerThread/Queue System.Net.WebRequest::s_DefaultTimerQueue
	Queue_t644DC21212BC432819522EDA395EB4562BE2CC47* ___s_DefaultTimerQueue_3;
	// System.Net.WebRequest/DesignerWebRequestCreate System.Net.WebRequest::webRequestCreate
	DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E* ___webRequestCreate_9;
	// System.Net.IWebProxy modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxy
	RuntimeObject* ___s_DefaultWebProxy_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxyInitialized
	bool ___s_DefaultWebProxyInitialized_11;
};

// System.Net.WebRequest

// System.Net.WebResponse

// System.Net.WebResponse

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// ReadyPlayerMe.AvatarLoader.CompletionEventArgs

// ReadyPlayerMe.AvatarLoader.CompletionEventArgs

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.RuntimeAnimatorController

// UnityEngine.RuntimeAnimatorController

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

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

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.Single>

// System.Action`1<System.Single>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs>

// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs>

// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs>

// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs>

// System.Action

// System.Action

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.CharacterController

// UnityEngine.CharacterController

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// AndroidDebug

// AndroidDebug

// CameraController

// CameraController

// ReadyPlayerMe.QuickStart.CameraFollow

// ReadyPlayerMe.QuickStart.CameraFollow

// ReadyPlayerMe.QuickStart.CameraOrbit

// ReadyPlayerMe.QuickStart.CameraOrbit

// ChangeSenceOnTouch

// ChangeSenceOnTouch

// ClickHandler

// ClickHandler

// GPSManager

// GPSManager

// GroundCheck

// GroundCheck

// MouseCursorLock

// MouseCursorLock

// ReadyPlayerMe.QuickStart.PlayerInput

// ReadyPlayerMe.QuickStart.PlayerInput

// Rotate

// Rotate

// RotateAnim

// RotateAnim

// SampleSpeechToText

// SampleSpeechToText

// SpeechButton

// SpeechButton

// TextSpeech.SpeechToText
struct SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_StaticFields
{
	// TextSpeech.SpeechToText TextSpeech.SpeechToText::_instance
	SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* ____instance_4;
};

// TextSpeech.SpeechToText

// TestCubeButton

// TestCubeButton

// TextSpeech.TextToSpeech
struct TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_StaticFields
{
	// TextSpeech.TextToSpeech TextSpeech.TextToSpeech::_instance
	TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* ____instance_4;
};

// TextSpeech.TextToSpeech

// ReadyPlayerMe.QuickStart.ThirdPersonController
struct ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields
{
	// System.Int32 ReadyPlayerMe.QuickStart.ThirdPersonController::MoveSpeedHash
	int32_t ___MoveSpeedHash_5;
	// System.Int32 ReadyPlayerMe.QuickStart.ThirdPersonController::JumpHash
	int32_t ___JumpHash_6;
	// System.Int32 ReadyPlayerMe.QuickStart.ThirdPersonController::FreeFallHash
	int32_t ___FreeFallHash_7;
	// System.Int32 ReadyPlayerMe.QuickStart.ThirdPersonController::IsGroundedHash
	int32_t ___IsGroundedHash_8;
};

// ReadyPlayerMe.QuickStart.ThirdPersonController

// ReadyPlayerMe.QuickStart.ThirdPersonLoader

// ReadyPlayerMe.QuickStart.ThirdPersonLoader

// ReadyPlayerMe.QuickStart.ThirdPersonMovement

// ReadyPlayerMe.QuickStart.ThirdPersonMovement

// TimeTravelGPS

// TimeTravelGPS

// TimeTravelGyroCameraController

// TimeTravelGyroCameraController

// VoiceController

// VoiceController

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.InputField

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, int32_t ___2_layerMask, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void MouseCursorLock::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCursorLock_Apply_m16AE091CB6D60704D32A1274EEFA87284732843A (MouseCursorLock_t292CEF568900532854722008B1471487CAF46558* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, int32_t ___2_relativeTo, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void VoiceController::Setup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController_Setup_m52783F36DB7A89147912755AFF5AC0E36F0654E3 (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, String_t* ___0_code, const RuntimeMethod* method) ;
// TextSpeech.SpeechToText TextSpeech.SpeechToText::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39 (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// TextSpeech.TextToSpeech TextSpeech.TextToSpeech::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* TextToSpeech_get_Instance_m0242720CCA542B2C51140B34F4D34A7310B52342 (const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void VoiceController::CheckPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController_CheckPermission_m3D7EBB1A50C14584D311ED3EDB90AF80D51B5B1E (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Void TextSpeech.TextToSpeech::StartSpeak(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_StartSpeak_mD4D83D1458D15CA29AB711881FFAADD9888A8B13 (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, String_t* ___0__message, const RuntimeMethod* method) ;
// System.Void TextSpeech.TextToSpeech::StopSpeak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_StopSpeak_m9C07C9237F4677C2D586769ACBEB9EE76F2AE4C7 (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void TextSpeech.SpeechToText::StartRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_StartRecording_m37A075A9904FAD1AA81C61B975BB5B4BC2BCA38B (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, String_t* ___0__message, const RuntimeMethod* method) ;
// System.Void TextSpeech.SpeechToText::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_StopRecording_mD04397264A0D0EB68B7EDB340F34C236414D695E (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, const RuntimeMethod* method) ;
// System.Void TextSpeech.TextToSpeech::Setting(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_Setting_m5AF9C828CD94717BC6ACE546CAB6E6CC6133A852 (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, String_t* ___0_language, float ___1__pitch, float ___2__rate, const RuntimeMethod* method) ;
// System.Void TextSpeech.SpeechToText::Setting(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_Setting_mAE3E71A064942397E752B8890E9CB6A5519A6A17 (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, String_t* ___0__language, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int GPSManager::ConvertLatLngToTileMap(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GPSManager_ConvertLatLngToTileMap_m75BB48E3390FA2D7AD590C45F1C88F70893983D6 (GPSManager_tC4A2C154A0EF0A6612468CCD6DE545406585E6A6* __this, double ___0_longitude, double ___1_latitude, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C (String_t* ___0_requestUriString, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m1797365F78319B68638DE8BB02836F8D60760041 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.Void GPSManager::LoadTile(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPSManager_LoadTile_mFB40F719513535E8AF68EE0166AD49741DB09DFD (GPSManager_tC4A2C154A0EF0A6612468CCD6DE545406585E6A6* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_zoom, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void TimeTravelGPS::GetPlaceNameByCoordinate(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTravelGPS_GetPlaceNameByCoordinate_m6769ACC383084E08ADDC63555CC8F72D2F55EA07 (TimeTravelGPS_tC4627DCBA59CB93EB008FF80DFF3A79E56E2F1B5* __this, float ___0_lat, float ___1_lng, const RuntimeMethod* method) ;
// System.Void TimeTravelGPS::getCoordinatesByGPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTravelGPS_getCoordinatesByGPS_mFFC0BD1751A56BE8CAFFBD56D6A1A37F6B6DE8F3 (TimeTravelGPS_tC4627DCBA59CB93EB008FF80DFF3A79E56E2F1B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsGyroscope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsGyroscope_m98477EC99D88396F076A93EF5C28A6129DC4E211 (const RuntimeMethod* method) ;
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Gyroscope::get_rotationRateUnbiased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Gyroscope_get_rotationRateUnbiased_m6B54A5F9A866E1F5005EA8B1575607DF2F3AB7A3 (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859 (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared)(__this, ___0_object, ___1_method, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void AndroidDebug::AddLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidDebug_AddLog_mB37963CD21A7C3179928879836B47151B553207D (AndroidDebug_tBEADC7B68E8D668A75418286BE0FCE9AEBD54005* __this, String_t* ___0_log, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, const RuntimeMethod* method) ;
// System.Void SampleSpeechToText::Setting(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSpeechToText_Setting_m90A675D5580BA4011341FBD301DCB13493C38ABC (SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* __this, String_t* ___0_code, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void SampleSpeechToText::StartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSpeechToText_StartRecording_m059A3F1D01D2A8414FAA68A0A07D1523D29916C7 (SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* __this, const RuntimeMethod* method) ;
// System.Void SampleSpeechToText::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSpeechToText_StopRecording_m362CD67DA4DD474FBB9A7047A43B9E778DA8481B (SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<TextSpeech.SpeechToText>()
inline SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* GameObject_AddComponent_TisSpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_mB5B56CB2F3DD3E12DE78A7962536B195168468A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___0_obj, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.String TextSpeech.SpeechToText::getErrorText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechToText_getErrorText_mE45F06BC7ABD2F5A9A6F3D16A83370CFC1F58E6B (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, int32_t ___0_errorCode, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<TextSpeech.TextToSpeech>()
inline TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* GameObject_AddComponent_TisTextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_m91A159F666DC9BC9906CACC2FA8C17B74FCEAE62 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void ReadyPlayerMe.Core.SDKLogger::LogWarning(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKLogger_LogWarning_m296702240E8291BA9F9A9E2DB57D1CE8FCC79AC3 (String_t* ___0_tag, RuntimeObject* ___1_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.CameraFollow::StartFollow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_StartFollow_m9F4070CE451A6443D518BE748D181A441AFEED22 (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_MouseAxisX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_MouseAxisX_m517553D7755EC539C395A87345206359C719C74D_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) ;
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_MouseAxisY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_MouseAxisY_m32B6331B6392DED8AF93AC744FDF868448C9C4E4_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// System.Single ReadyPlayerMe.QuickStart.CameraOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraOrbit_ClampAngle_m573D0906C085F32B35D0BA9D21F39067D99F5DFF (CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5* __this, float ___0_angle, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_AxisHorizontal(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_AxisHorizontal_mA698E8B72185C79CA74B278BAB54FD01DD487689_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_AxisVertical(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_AxisVertical_mDD8FF9AB5F1BFE53C69766EAB27C45F80CFEA553_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_MouseAxisX(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_MouseAxisX_mFE9182A7A86366DD9BD4B83294FA2A0D12C7124C_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_MouseAxisY(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_MouseAxisY_mB28D735655CB89CB9201A8F1283FF76DD54B2EBA_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ReadyPlayerMe.QuickStart.ThirdPersonMovement>()
inline ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* Component_GetComponent_TisThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28_m7AC9E938D2DE0CBDE4A45BD8BFD5FC99E97F2D1B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<ReadyPlayerMe.QuickStart.PlayerInput>()
inline PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* Component_GetComponent_TisPlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C_m1A0CAB9BA6FD5D086A1908CC3ABB0151F01C805A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Init_m6515F9CDF421D08BBBF185A67A9C2B08FA544B33 (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::Setup(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_Setup_m847528711F11312D8BDD37BFAC61C7456945033F (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::CheckInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_CheckInput_m3C9F5E10CD9F719436FC1ADE0A0AFE9A61ABB039 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) ;
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_AxisHorizontal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_AxisHorizontal_m1D5B395A4B8E6B7859495693589F6951715DC2B4_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) ;
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_AxisVertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_AxisVertical_mCAB43AC24F874CE7348C141767F355EE3CA2D420_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_Move_mFF8325693B81201831555283D77AC080A2258144 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, float ___0_inputX, float ___1_inputY, const RuntimeMethod* method) ;
// System.Boolean ReadyPlayerMe.QuickStart.PlayerInput::get_IsHoldingLeftShift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInput_get_IsHoldingLeftShift_mE14D9A584A88EDB50C5D93164B5272927F6BBF7D (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::SetIsRunning(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThirdPersonMovement_SetIsRunning_m5AD3B8466B6ECE622F8004C7DDD254A0FC3C023A_inline (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, bool ___0_running, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::UpdateAnimator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_UpdateAnimator_mB6E6A811F66C7622A5F742F0C1335C98FD95B94B (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) ;
// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonMovement::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonMovement_IsGrounded_m6AF64A40D8733B384C53DF27234B3774D4CB7469 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) ;
// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::get_CurrentMoveSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ThirdPersonMovement_get_CurrentMoveSpeed_m532FF9B2AE9D60DB17C48724C9FB9305F2A7E1D3_inline (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, bool ___1_value, const RuntimeMethod* method) ;
// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonMovement::TryJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonMovement_TryJump_mD0CEA19B8ED7DCE616D3558BCBF3575CC3010270 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarObjectLoader__ctor_mAF29E478AD7B7A55BFFA4416F4F68F0AB2BA5B90 (AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* __this, bool ___0_useDefaultGLTFDeferAgent, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m434453DC77C1B72FE1935254DD7AB140A09BF956 (EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::add_OnCompleted(System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarObjectLoader_add_OnCompleted_mBA7FF229BA3DFFFA8ACD8FAC07B9985D45BA3D8D (AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* __this, EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9* ___0_value, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m6BBDD641747A4C4E893A3A3A856AA2983FB943A2 (EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::add_OnFailed(System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarObjectLoader_add_OnFailed_mBC2D17BC4C3D444D3A7515E08D15BFFA41734685 (AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* __this, EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::SetupAvatar(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_SetupAvatar_m336406DB78CD318A8215BF2C9D6CD51445559AD1 (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_targetAvatar, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::LoadAvatar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_LoadAvatar_mBC2C9AE956C0E428CD9F47349444D90C7BF10222 (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.GameObject ReadyPlayerMe.AvatarLoader.CompletionEventArgs::get_Avatar()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CompletionEventArgs_get_Avatar_mD872C68004A3EE977C539011945268D61A9966EF_inline (CompletionEventArgs_tBF4A5164C04020BEF9A73E33EA6A6EA73E9E297C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ReadyPlayerMe.QuickStart.ThirdPersonController>()
inline ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* Component_GetComponent_TisThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_mB4628DB9A699A47DAA8B46549B7E18E9855256A6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::Setup(UnityEngine.GameObject,UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Setup_m436496E9BE83F1489C20A2336B763F9BDBB1F4F5 (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___1_runtimeAnimatorController, const RuntimeMethod* method) ;
// System.String System.String::Trim(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mF5081365E55C31B636F8145F42AEF61868175A5A (String_t* __this, Il2CppChar ___0_trimChar, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::LoadAvatar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarObjectLoader_LoadAvatar_m5EE260D9A70E45BFACCD0E45CA3F3EBE2D77C9DE (AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<GroundCheck>()
inline GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* Component_GetComponent_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m2EF5C398F98450FF07BD95E49F2CCC48B5C6698B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_JumpAndGravity_m623E845494E355A79958FFE6E818F12698072C0B (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_motion, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::set_CurrentMoveSpeed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThirdPersonMovement_set_CurrentMoveSpeed_m13919F21BCB86E0864110BBDDC212DBAC3C2ADF4_inline (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::RotateAvatarTowardsMoveDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_RotateAvatarTowardsMoveDirection_m18D407BE1E9F95B2EC7B143DBEB70D961306AA5D (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_moveDirection, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Boolean GroundCheck::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GroundCheck_IsGrounded_m2E68C51BBE946384E20897489ABD77DBBED161C0 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248 (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
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
// System.Boolean GroundCheck::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GroundCheck_IsGrounded_m2E68C51BBE946384E20897489ABD77DBBED161C0 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// Vector3 spherePosition = new Vector3(position.x, position.y + groundedOffset,
		//     position.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___y_3;
		float L_6 = __this->___groundedOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_3, ((float)il2cpp_codegen_add(L_5, L_6)), L_8, /*hidden argument*/NULL);
		// return Physics.CheckSphere(spherePosition, groundRadius, groundMask);
		float L_10 = __this->___groundRadius_5;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = __this->___groundMask_6;
		int32_t L_12;
		L_12 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_11, NULL);
		bool L_13;
		L_13 = Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F(L_9, L_10, L_12, NULL);
		return L_13;
	}
}
// System.Void GroundCheck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundCheck__ctor_m0221EBF4D34C3F1345FC82BA872F8BD63C9FDE86 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, const RuntimeMethod* method) 
{
	{
		// private float groundedOffset = -0.22f;
		__this->___groundedOffset_4 = (-0.219999999f);
		// private float groundRadius = 0.28f;
		__this->___groundRadius_5 = (0.280000001f);
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
// System.Void MouseCursorLock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCursorLock_Start_mF6547D6812154BD1E745E9F64BB8F66A59C4E021 (MouseCursorLock_t292CEF568900532854722008B1471487CAF46558* __this, const RuntimeMethod* method) 
{
	{
		// if (applyOnStart)
		bool L_0 = __this->___applyOnStart_6;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Apply();
		MouseCursorLock_Apply_m16AE091CB6D60704D32A1274EEFA87284732843A(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void MouseCursorLock::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCursorLock_Apply_m16AE091CB6D60704D32A1274EEFA87284732843A (MouseCursorLock_t292CEF568900532854722008B1471487CAF46558* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.visible = hideCursor;
		bool L_0 = __this->___hideCursor_5;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7(L_0, NULL);
		// Cursor.lockState = cursorLockMode;
		int32_t L_1 = __this->___cursorLockMode_4;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(L_1, NULL);
		// }
		return;
	}
}
// System.Void MouseCursorLock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCursorLock__ctor_m125E0D80E72948325D6994C4B8AD80F6BAB92167 (MouseCursorLock_t292CEF568900532854722008B1471487CAF46558* __this, const RuntimeMethod* method) 
{
	{
		// private bool hideCursor = true;
		__this->___hideCursor_5 = (bool)1;
		// private bool applyOnStart = true;
		__this->___applyOnStart_6 = (bool)1;
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
// System.Void CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_mBCB871B23DBA60444D43AB56D780478BA3D355E6 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float mouseX = Input.GetAxis("Mouse X");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		V_0 = L_0;
		// float mouseY = Input.GetAxis("Mouse Y");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		V_1 = L_1;
		// transform.Rotate(Vector3.up, mouseX * rotationSpeed, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_4 = V_0;
		float L_5 = __this->___rotationSpeed_4;
		NullCheck(L_2);
		Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), 0, NULL);
		// transform.Rotate(Vector3.left, mouseY * rotationSpeed, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		float L_8 = V_1;
		float L_9 = __this->___rotationSpeed_4;
		NullCheck(L_6);
		Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB(L_6, L_7, ((float)il2cpp_codegen_multiply(L_8, L_9)), 1, NULL);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_mE196A6332BDDED632D6F9DB6260E424594598950 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// public float rotationSpeed = 5.0f;
		__this->___rotationSpeed_4 = (5.0f);
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
// System.Void ChangeSenceOnTouch::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeSenceOnTouch_OnTriggerEnter_m862259888D2A5829C45E11FF4A363A9819CD23BB (ChangeSenceOnTouch_t371056D234CD0DEE75EBD558203C9144D5BF3813* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BE27C610D1A962E4CDE9FE423F34FD211AE25BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE931A46B31E45B88BA68CD06161E11FDF3270C01);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchCount++;
		int32_t L_0 = __this->___touchCount_4;
		__this->___touchCount_4 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (touchCount % 2 == 1)
		int32_t L_1 = __this->___touchCount_4;
		if ((!(((uint32_t)((int32_t)(L_1%2))) == ((uint32_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		// SceneManager.LoadScene("VirtulSceneToStereo");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralE931A46B31E45B88BA68CD06161E11FDF3270C01, NULL);
		return;
	}

IL_0024:
	{
		// SceneManager.LoadScene("TestScenes");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral1BE27C610D1A962E4CDE9FE423F34FD211AE25BF, NULL);
		// }
		return;
	}
}
// System.Void ChangeSenceOnTouch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeSenceOnTouch__ctor_m041F65BA2FB91580FB33BA72B42FB779B1585F41 (ChangeSenceOnTouch_t371056D234CD0DEE75EBD558203C9144D5BF3813* __this, const RuntimeMethod* method) 
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
// System.Void ClickHandler::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickHandler_OnMouseDown_mADE7A50F1C7713F1A4DF53768D2B55CB8F28D639 (ClickHandler_tFD8C8F3D79846284FF36C09A95D28AE6E01F2B4E* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// downEvent?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___downEvent_5;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void ClickHandler::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickHandler_OnMouseUp_m6E080804828B78A43F13B490F46D86F7F3594364 (ClickHandler_tFD8C8F3D79846284FF36C09A95D28AE6E01F2B4E* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// upEvent?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___upEvent_4;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void ClickHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickHandler__ctor_m250C9E8ED8F59C785DAEA230D9905C477B1D4F8F (ClickHandler_tFD8C8F3D79846284FF36C09A95D28AE6E01F2B4E* __this, const RuntimeMethod* method) 
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
// System.Void TestCubeButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestCubeButton_Start_m490E9590A92EC9A10E238DEEBFDF7534CA999F43 (TestCubeButton_tC79A6808115ED83A51791EB6001886449805FEDE* __this, const RuntimeMethod* method) 
{
	{
		// timeOfLastSwitch = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___timeOfLastSwitch_14 = L_0;
		// }
		return;
	}
}
// System.Void TestCubeButton::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestCubeButton_OnTriggerEnter_m7FA7E4DB74A594238AB9A6A20C4497FDEF080C74 (TestCubeButton_tC79A6808115ED83A51791EB6001886449805FEDE* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE13F0ABCD8E277497B7FCD3480E7D74A1D755745);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchCount++;
		int32_t L_0 = __this->___touchCount_11;
		__this->___touchCount_11 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// touchCountText.text = "Touch Count: " + touchCount.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___touchCountText_7;
		int32_t* L_2 = (&__this->___touchCount_11);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE13F0ABCD8E277497B7FCD3480E7D74A1D755745, L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_4);
		// SceneManager.LoadScene(SceneName);
		String_t* L_5 = __this->___SceneName_12;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_5, NULL);
		// if (Time.time - timeOfLastSwitch > delay)
		float L_6;
		L_6 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_7 = __this->___timeOfLastSwitch_14;
		float L_8 = __this->___delay_13;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_6, L_7))) > ((float)L_8))))
		{
			goto IL_0063;
		}
	}
	{
		// SceneManager.LoadScene(SceneName);
		String_t* L_9 = __this->___SceneName_12;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_9, NULL);
		// timeOfLastSwitch = Time.time;
		float L_10;
		L_10 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___timeOfLastSwitch_14 = L_10;
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void TestCubeButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestCubeButton__ctor_mD8015B274837F739B6E1AC604D0A940B986CB909 (TestCubeButton_tC79A6808115ED83A51791EB6001886449805FEDE* __this, const RuntimeMethod* method) 
{
	{
		// private float delay = 2f;
		__this->___delay_13 = (2.0f);
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
// System.Void VoiceController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController_Start_m39AECDC8C8DBB6FB9A5E0C56527A7C47DF136A82 (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceController_OnFinalSpeechResult_m7DB4CBCC136CA8BD5A0F651C483335887FB3531A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceController_OnPartialSpeechResult_m489B8E24D28695435413EF6005318880208ED962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceController_OnSpeakStart_m7C7E5CEA47E78A6C30EED0C64A772CAF8824EA29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceController_OnSpeakStop_m46060160B895B82D0EF3C444A6D48ADF0769D207_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Setup(LANG_CODE);
		VoiceController_Setup_m52783F36DB7A89147912755AFF5AC0E36F0654E3(__this, _stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877, NULL);
		// SpeechToText.Instance.onPartialResultsCallback = OnPartialSpeechResult;
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_0;
		L_0 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, __this, (intptr_t)((void*)VoiceController_OnPartialSpeechResult_m489B8E24D28695435413EF6005318880208ED962_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		L_0->___onPartialResultsCallback_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___onPartialResultsCallback_21), (void*)L_1);
		// SpeechToText.Instance.onResultCallback = OnFinalSpeechResult;
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_2;
		L_2 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_3, __this, (intptr_t)((void*)VoiceController_OnFinalSpeechResult_m7DB4CBCC136CA8BD5A0F651C483335887FB3531A_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		L_2->___onResultCallback_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___onResultCallback_6), (void*)L_3);
		// TextToSpeech.Instance.onStartCallBack = OnSpeakStart;
		TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* L_4;
		L_4 = TextToSpeech_get_Instance_m0242720CCA542B2C51140B34F4D34A7310B52342(NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)VoiceController_OnSpeakStart_m7C7E5CEA47E78A6C30EED0C64A772CAF8824EA29_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		L_4->___onStartCallBack_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onStartCallBack_5), (void*)L_5);
		// TextToSpeech.Instance.onDoneCallback = OnSpeakStop;
		TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* L_6;
		L_6 = TextToSpeech_get_Instance_m0242720CCA542B2C51140B34F4D34A7310B52342(NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_7, __this, (intptr_t)((void*)VoiceController_OnSpeakStop_m46060160B895B82D0EF3C444A6D48ADF0769D207_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		L_6->___onDoneCallback_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___onDoneCallback_6), (void*)L_7);
		// CheckPermission();
		VoiceController_CheckPermission_m3D7EBB1A50C14584D311ED3EDB90AF80D51B5B1E(__this, NULL);
		// }
		return;
	}
}
// System.Void VoiceController::CheckPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController_CheckPermission_m3D7EBB1A50C14584D311ED3EDB90AF80D51B5B1E (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
		bool L_0;
		L_0 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// Permission.RequestUserPermission(Permission.Microphone);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void VoiceController::StartSpeaking(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController_StartSpeaking_m7BF34814678BC58B0C717A99F7916B4F0FE35FDD (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// TextToSpeech.Instance.StartSpeak(message);
		TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* L_0;
		L_0 = TextToSpeech_get_Instance_m0242720CCA542B2C51140B34F4D34A7310B52342(NULL);
		String_t* L_1 = ___0_message;
		NullCheck(L_0);
		TextToSpeech_StartSpeak_mD4D83D1458D15CA29AB711881FFAADD9888A8B13(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void VoiceController::StopSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController_StopSpeaking_mD209E37BCE8CC8820F829EAAC182DF7C190E1BE2 (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, const RuntimeMethod* method) 
{
	{
		// TextToSpeech.Instance.StopSpeak();
		TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* L_0;
		L_0 = TextToSpeech_get_Instance_m0242720CCA542B2C51140B34F4D34A7310B52342(NULL);
		NullCheck(L_0);
		TextToSpeech_StopSpeak_m9C07C9237F4677C2D586769ACBEB9EE76F2AE4C7(L_0, NULL);
		// }
		return;
	}
}
// System.Void VoiceController::OnSpeakStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController_OnSpeakStart_m7C7E5CEA47E78A6C30EED0C64A772CAF8824EA29 (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A99C1F8BDAB8B4B4A3CE5123521F4F154035853);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Talking started");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7A99C1F8BDAB8B4B4A3CE5123521F4F154035853, NULL);
		// }
		return;
	}
}
// System.Void VoiceController::OnSpeakStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController_OnSpeakStop_m46060160B895B82D0EF3C444A6D48ADF0769D207 (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C54E91B21EBC44612B56B64334BEEE6D6859198);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Talking stopped");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1C54E91B21EBC44612B56B64334BEEE6D6859198, NULL);
		// }
		return;
	}
}
// System.Void VoiceController::StartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController_StartListening_m2C83FDCA1AA1C786BBA15B548D5A8EA171983B90 (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SpeechToText.Instance.StartRecording();
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_0;
		L_0 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		NullCheck(L_0);
		SpeechToText_StartRecording_m37A075A9904FAD1AA81C61B975BB5B4BC2BCA38B(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// }
		return;
	}
}
// System.Void VoiceController::StopListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController_StopListening_m1A07A1FB8B15FF0D5C135CA0C87F6FA2C65165A5 (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, const RuntimeMethod* method) 
{
	{
		// SpeechToText.Instance.StopRecording();
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_0;
		L_0 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		NullCheck(L_0);
		SpeechToText_StopRecording_mD04397264A0D0EB68B7EDB340F34C236414D695E(L_0, NULL);
		// }
		return;
	}
}
// System.Void VoiceController::OnFinalSpeechResult(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController_OnFinalSpeechResult_m7DB4CBCC136CA8BD5A0F651C483335887FB3531A (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	{
		// uiText.text = result;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___uiText_5;
		String_t* L_1 = ___0_result;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void VoiceController::OnPartialSpeechResult(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController_OnPartialSpeechResult_m489B8E24D28695435413EF6005318880208ED962 (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	{
		// uiText.text = result;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___uiText_5;
		String_t* L_1 = ___0_result;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void VoiceController::Setup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController_Setup_m52783F36DB7A89147912755AFF5AC0E36F0654E3 (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, String_t* ___0_code, const RuntimeMethod* method) 
{
	{
		// TextToSpeech.Instance.Setting(code, 1, 1);
		TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* L_0;
		L_0 = TextToSpeech_get_Instance_m0242720CCA542B2C51140B34F4D34A7310B52342(NULL);
		String_t* L_1 = ___0_code;
		NullCheck(L_0);
		TextToSpeech_Setting_m5AF9C828CD94717BC6ACE546CAB6E6CC6133A852(L_0, L_1, (1.0f), (1.0f), NULL);
		// SpeechToText.Instance.Setting(code);
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_2;
		L_2 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		String_t* L_3 = ___0_code;
		NullCheck(L_2);
		SpeechToText_Setting_mAE3E71A064942397E752B8890E9CB6A5519A6A17(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void VoiceController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceController__ctor_m74D7411A47D2B5E0512409F8170EEEC3B2851723 (VoiceController_t54D4459D12E4A6356BBC4D00327546D89B2202E9* __this, const RuntimeMethod* method) 
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
// System.Void GPSManager::DisplayCoordinate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPSManager_DisplayCoordinate_mAD2085FD8D133C1BF46B729D0EAA2B57636C1F81 (GPSManager_tC4A2C154A0EF0A6612468CCD6DE545406585E6A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral130C0BF8D779F89E6473C8ECD85D33008E0E213F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65690B31880BFAB1F359D03E04E17C8D88318394);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral919EEFB14D870EA7332724FE26EEF4E78FAD9E64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB98F8D20095BFAE0EF447C826C446CDDCB34784);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// double longitude = -122.4194;
		V_0 = (-122.4194);
		// double latitude = 37.7749;
		V_1 = (37.774900000000002);
		// ConvertLatLngToTileMap(longitude, latitude);
		double L_0 = V_0;
		double L_1 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		L_2 = GPSManager_ConvertLatLngToTileMap_m75BB48E3390FA2D7AD590C45F1C88F70893983D6(__this, L_0, L_1, NULL);
		// if (Input.location.isEnabledByUser == false)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_3;
		L_3 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE(L_3, NULL);
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		// displayText.text = "Location service not enabled";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___displayText_4;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, _stringLiteralEB98F8D20095BFAE0EF447C826C446CDDCB34784);
		return;
	}

IL_003a:
	{
		// if(Input.location.status==LocationServiceStatus.Stopped) {
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_6;
		L_6 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_6, NULL);
		if (L_7)
		{
			goto IL_0060;
		}
	}
	{
		// displayText.text = "Location servive stopped";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___displayText_4;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, _stringLiteral65690B31880BFAB1F359D03E04E17C8D88318394);
		// Input.location.Start();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_9;
		L_9 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_9);
		LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A(L_9, NULL);
	}

IL_0060:
	{
		// if(Input.location.status == LocationServiceStatus.Running)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_10;
		L_10 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_10, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_00d7;
		}
	}
	{
		// var Lat = Input.location.lastData.latitude;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_12;
		L_12 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_12);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_13;
		L_13 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_12, NULL);
		V_4 = L_13;
		float L_14;
		L_14 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863((&V_4), NULL);
		V_2 = L_14;
		// var Long=Input.location.lastData.longitude;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_15;
		L_15 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_15);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_16;
		L_16 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_15, NULL);
		V_4 = L_16;
		float L_17;
		L_17 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2((&V_4), NULL);
		V_3 = L_17;
		// displayText.text = "Lat:" + Lat + "\n" + "Long:" + Long + "\n";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_18 = __this->___displayText_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral919EEFB14D870EA7332724FE26EEF4E78FAD9E64);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral919EEFB14D870EA7332724FE26EEF4E78FAD9E64);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		String_t* L_22;
		L_22 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_21;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral130C0BF8D779F89E6473C8ECD85D33008E0E213F);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral130C0BF8D779F89E6473C8ECD85D33008E0E213F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		String_t* L_25;
		L_25 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_24;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_27;
		L_27 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_26, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_27);
	}

IL_00d7:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2Int GPSManager::ConvertLatLngToTileMap(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GPSManager_ConvertLatLngToTileMap_m75BB48E3390FA2D7AD590C45F1C88F70893983D6 (GPSManager_tC4A2C154A0EF0A6612468CCD6DE545406585E6A6* __this, double ___0_longitude, double ___1_latitude, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int32_t V_5 = 0;
	{
		// double x = longitude * Mathf.Deg2Rad;
		double L_0 = ___0_longitude;
		V_0 = ((double)il2cpp_codegen_multiply(L_0, (0.01745329238474369)));
		// double y = latitude * Mathf.Deg2Rad;
		double L_1 = ___1_latitude;
		V_1 = ((double)il2cpp_codegen_multiply(L_1, (0.01745329238474369)));
		// int zoomLevel = 10; // the zoom level of the map
		V_2 = ((int32_t)10);
		// double r = 6378137; // Earth's radius in meters
		V_3 = (6378137.0);
		// x = r * x * Mathf.Cos((float)y);
		double L_2 = V_3;
		double L_3 = V_0;
		double L_4 = V_1;
		float L_5;
		L_5 = cosf(((float)L_4));
		V_0 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_2, L_3)), ((double)L_5)));
		// y = r * y;
		double L_6 = V_3;
		double L_7 = V_1;
		V_1 = ((double)il2cpp_codegen_multiply(L_6, L_7));
		// double xTile = (x + r) / (2 * r) * Mathf.Pow(2, zoomLevel);
		double L_8 = V_0;
		double L_9 = V_3;
		double L_10 = V_3;
		int32_t L_11 = V_2;
		float L_12;
		L_12 = powf((2.0f), ((float)L_11));
		// double yTile = (1 - Mathf.Log(Mathf.Tan((float)y) + 1 / Mathf.Cos((float)y)) / Mathf.PI) / 2 * Mathf.Pow(2, zoomLevel);
		double L_13 = V_1;
		float L_14;
		L_14 = tanf(((float)L_13));
		double L_15 = V_1;
		float L_16;
		L_16 = cosf(((float)L_15));
		float L_17;
		L_17 = logf(((float)il2cpp_codegen_add(L_14, ((float)((1.0f)/L_16)))));
		int32_t L_18 = V_2;
		float L_19;
		L_19 = powf((2.0f), ((float)L_18));
		V_4 = ((double)((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract((1.0f), ((float)(L_17/(3.14159274f)))))/(2.0f))), L_19)));
		// int tileX = Mathf.FloorToInt((float)xTile);
		int32_t L_20;
		L_20 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)((double)il2cpp_codegen_multiply(((double)(((double)il2cpp_codegen_add(L_8, L_9))/((double)il2cpp_codegen_multiply((2.0), L_10)))), ((double)L_12)))), NULL);
		// int tileY = Mathf.FloorToInt((float)yTile);
		double L_21 = V_4;
		int32_t L_22;
		L_22 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)L_21), NULL);
		V_5 = L_22;
		// return new Vector2Int(tileX, tileY);
		int32_t L_23 = V_5;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_24), L_20, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Void GPSManager::LoadTile(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPSManager_LoadTile_mFB40F719513535E8AF68EE0166AD49741DB09DFD (GPSManager_tC4A2C154A0EF0A6612468CCD6DE545406585E6A6* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_zoom, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B99FF25646FD157E45A1ED64AA4D98C216C94DC);
		s_Il2CppMethodInitialized = true;
	}
	WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	{
		// string tileServerUrl = "https://mt.google.com/vt/lyrs=m&x=0&y=0&z=0"; // the URL of the tile server
		// string url = string.Format(tileServerUrl, zoom, x, y);
		int32_t L_0 = ___2_zoom;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___0_x;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = ___1_y;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral7B99FF25646FD157E45A1ED64AA4D98C216C94DC, L_2, L_5, L_8, NULL);
		// WebRequest www=WebRequest.Create(url);
		il2cpp_codegen_runtime_class_init_inline(WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* L_10;
		L_10 = WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C(L_9, NULL);
		// var response=www.GetResponse();
		NullCheck(L_10);
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_11;
		L_11 = VirtualFuncInvoker0< WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* >::Invoke(20 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_10);
		V_0 = L_11;
		// Texture2D tex = new Texture2D(40,40);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_12, ((int32_t)40), ((int32_t)40), NULL);
		V_1 = L_12;
		// ImageConversion.LoadImage(tex, new BinaryReader(response.GetResponseStream()).ReadBytes(10000000));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = V_1;
		WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* L_14 = V_0;
		NullCheck(L_14);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15;
		L_15 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(12 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_14);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_16, L_15, NULL);
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_16, ((int32_t)10000000));
		bool L_18;
		L_18 = ImageConversion_LoadImage_m1797365F78319B68638DE8BB02836F8D60760041(L_13, L_17, NULL);
		// mapMateial.mainTexture = tex;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___mapMateial_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = V_1;
		NullCheck(L_19);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_19, L_20, NULL);
		// }
		return;
	}
}
// System.Void GPSManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPSManager_Update_m9E7B5AB2418D3F77EBA41EC3CDA4E0D6C538D422 (GPSManager_tC4A2C154A0EF0A6612468CCD6DE545406585E6A6* __this, const RuntimeMethod* method) 
{
	{
		// LoadTile(0, 1, 1);
		GPSManager_LoadTile_mFB40F719513535E8AF68EE0166AD49741DB09DFD(__this, 0, 1, 1, NULL);
		// }
		return;
	}
}
// System.Void GPSManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPSManager__ctor_m554E05E66DA3307280408DD28E7B489A13806D09 (GPSManager_tC4A2C154A0EF0A6612468CCD6DE545406585E6A6* __this, const RuntimeMethod* method) 
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
// System.Void Rotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Update_m73D585515036D9B7AAD8336BFB8567283CE4C7E7 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float h = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float v = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// transform.rotation *= Quaternion.AngleAxis(h * turnSpeed * Time.deltaTime, transform.up) *
		//                        Quaternion.AngleAxis(v * turnSpeed * Time.deltaTime, transform.right);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		float L_5 = V_0;
		float L_6 = __this->___turnSpeed_4;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_6)), L_7)), L_9, NULL);
		float L_11 = V_1;
		float L_12 = __this->___turnSpeed_4;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, L_12)), L_13)), L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_10, L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_4, L_17, NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_18, NULL);
		// }
		return;
	}
}
// System.Void Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_m0EE5CC8EB699542BFC438DC3D547D39E442E9EE4 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	{
		// public float turnSpeed = 50.0f;
		__this->___turnSpeed_4 = (50.0f);
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
// System.Void TimeTravelGPS::getCoordinatesByGPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTravelGPS_getCoordinatesByGPS_mFFC0BD1751A56BE8CAFFBD56D6A1A37F6B6DE8F3 (TimeTravelGPS_tC4627DCBA59CB93EB008FF80DFF3A79E56E2F1B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D8C13B9CB1D57938FF9ABC8D1E0F654E0967DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63B2FCB078E3AEDC55FC1A72BB6C5BE5F08AD72C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// string location = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// float latitude = -37.4827f;
		V_1 = (-37.4827003f);
		// float longitude = 144.5738f ;
		V_2 = (144.573807f);
		// location = "Your coordinate is lat: " + latitude + ", long:" + longitude;
		String_t* L_0;
		L_0 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral63B2FCB078E3AEDC55FC1A72BB6C5BE5F08AD72C, L_0, _stringLiteral56D8C13B9CB1D57938FF9ABC8D1E0F654E0967DE, L_1, NULL);
		V_0 = L_2;
		// gpsInfo.text = location;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___gpsInfo_4;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_4);
		// GetPlaceNameByCoordinate(latitude, longitude);
		float L_5 = V_1;
		float L_6 = V_2;
		TimeTravelGPS_GetPlaceNameByCoordinate_m6769ACC383084E08ADDC63555CC8F72D2F55EA07(__this, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void TimeTravelGPS::GetPlaceNameByCoordinate(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTravelGPS_GetPlaceNameByCoordinate_m6769ACC383084E08ADDC63555CC8F72D2F55EA07 (TimeTravelGPS_tC4627DCBA59CB93EB008FF80DFF3A79E56E2F1B5* __this, float ___0_lat, float ___1_lng, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral764B8DDE03FA4189F92051E2C0296E4DB05A3A37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gpsInfo.text += "\n You are at Toptea shop, Melbourne,Australia";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___gpsInfo_4;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = L_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral764B8DDE03FA4189F92051E2C0296E4DB05A3A37, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void TimeTravelGPS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTravelGPS_Update_m3E93C696F8C1E1E39C553C05C0ADC8C429E58261 (TimeTravelGPS_tC4627DCBA59CB93EB008FF80DFF3A79E56E2F1B5* __this, const RuntimeMethod* method) 
{
	{
		// getCoordinatesByGPS();
		TimeTravelGPS_getCoordinatesByGPS_mFFC0BD1751A56BE8CAFFBD56D6A1A37F6B6DE8F3(__this, NULL);
		// }
		return;
	}
}
// System.Void TimeTravelGPS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTravelGPS__ctor_m1BA73E69FF999F3CFC22320FD66D407E2D01CD4D (TimeTravelGPS_tC4627DCBA59CB93EB008FF80DFF3A79E56E2F1B5* __this, const RuntimeMethod* method) 
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
// System.Void TimeTravelGyroCameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTravelGyroCameraController_Start_m54ACBBD218D73B9789F84E4DC291AB168F90E835 (TimeTravelGyroCameraController_tD3DF10DD9FFAC745998FCAE6F85DD18ABD4A09A8* __this, const RuntimeMethod* method) 
{
	{
		// if (SystemInfo.supportsGyroscope)
		bool L_0;
		L_0 = SystemInfo_get_supportsGyroscope_m98477EC99D88396F076A93EF5C28A6129DC4E211(NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// gyro = Input.gyro;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_1;
		L_1 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		__this->___gyro_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gyro_4), (void*)L_1);
		// gyro.enabled = true;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_2 = __this->___gyro_4;
		NullCheck(L_2);
		Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB(L_2, (bool)1, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void TimeTravelGyroCameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTravelGyroCameraController_Update_m64777E9B064E587706FBEF5D63712397A180D482 (TimeTravelGyroCameraController_tD3DF10DD9FFAC745998FCAE6F85DD18ABD4A09A8* __this, const RuntimeMethod* method) 
{
	{
		// if (gyro != null)
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_0 = __this->___gyro_4;
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		// transform.Rotate(-gyro.rotationRateUnbiased.x, -gyro.rotationRateUnbiased.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_2 = __this->___gyro_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Gyroscope_get_rotationRateUnbiased_m6B54A5F9A866E1F5005EA8B1575607DF2F3AB7A3(L_2, NULL);
		float L_4 = L_3.___x_2;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_5 = __this->___gyro_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Gyroscope_get_rotationRateUnbiased_m6B54A5F9A866E1F5005EA8B1575607DF2F3AB7A3(L_5, NULL);
		float L_7 = L_6.___y_3;
		NullCheck(L_1);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_1, ((-L_4)), ((-L_7)), (0.0f), NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void TimeTravelGyroCameraController::ObjectInCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTravelGyroCameraController_ObjectInCam_mF072A891BCD989DE5CBDFD48DFFF4510AF35AE15 (TimeTravelGyroCameraController_tD3DF10DD9FFAC745998FCAE6F85DD18ABD4A09A8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TimeTravelGyroCameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTravelGyroCameraController__ctor_m394470E1CDA689D627B015055505D8F01EC3A246 (TimeTravelGyroCameraController_tD3DF10DD9FFAC745998FCAE6F85DD18ABD4A09A8* __this, const RuntimeMethod* method) 
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
// System.Void AndroidDebug::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidDebug_Start_m4822C284DF77837C5F7CCF2C249B512BE7E9A0DA (AndroidDebug_tBEADC7B68E8D668A75418286BE0FCE9AEBD54005* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidDebug_onBeginningOfSpeechCallback_mD61E1D1C870F83747C1B5BD442E3395C470812C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidDebug_onEndOfSpeechCallback_m43F57FDE9C6768A19411818D1855889CFC85C57A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidDebug_onErrorCallback_m0210A74AB99B237CA03C2A33306282BD15376480_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidDebug_onPartialResultsCallback_m8B19C16D7AE6B1EA9BE3535418701C0EC05F77DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidDebug_onReadyForSpeechCallback_m4965D3E224891C1250C1B6AF7AA3751659FEB0FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidDebug_onResultCallback_mAD100BB8B969A1537D491A22ED15C0B467142862_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidDebug_onRmsChangedCallback_mF4D118FB9ADB5C2BDC1359F5EAA1E810F83EE827_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SpeechToText.Instance.onResultCallback = onResultCallback;
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_0;
		L_0 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, __this, (intptr_t)((void*)AndroidDebug_onResultCallback_mAD100BB8B969A1537D491A22ED15C0B467142862_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		L_0->___onResultCallback_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___onResultCallback_6), (void*)L_1);
		// SpeechToText.Instance.onReadyForSpeechCallback = onReadyForSpeechCallback;
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_2;
		L_2 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_3, __this, (intptr_t)((void*)AndroidDebug_onReadyForSpeechCallback_m4965D3E224891C1250C1B6AF7AA3751659FEB0FE_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		L_2->___onReadyForSpeechCallback_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___onReadyForSpeechCallback_16), (void*)L_3);
		// SpeechToText.Instance.onEndOfSpeechCallback = onEndOfSpeechCallback;
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_4;
		L_4 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)AndroidDebug_onEndOfSpeechCallback_m43F57FDE9C6768A19411818D1855889CFC85C57A_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		L_4->___onEndOfSpeechCallback_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onEndOfSpeechCallback_17), (void*)L_5);
		// SpeechToText.Instance.onRmsChangedCallback = onRmsChangedCallback;
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_6;
		L_6 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_7, __this, (intptr_t)((void*)AndroidDebug_onRmsChangedCallback_mF4D118FB9ADB5C2BDC1359F5EAA1E810F83EE827_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		L_6->___onRmsChangedCallback_18 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___onRmsChangedCallback_18), (void*)L_7);
		// SpeechToText.Instance.onBeginningOfSpeechCallback = onBeginningOfSpeechCallback;
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_8;
		L_8 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, __this, (intptr_t)((void*)AndroidDebug_onBeginningOfSpeechCallback_mD61E1D1C870F83747C1B5BD442E3395C470812C7_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		L_8->___onBeginningOfSpeechCallback_19 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___onBeginningOfSpeechCallback_19), (void*)L_9);
		// SpeechToText.Instance.onErrorCallback = onErrorCallback;
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_10;
		L_10 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_11 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_11, __this, (intptr_t)((void*)AndroidDebug_onErrorCallback_m0210A74AB99B237CA03C2A33306282BD15376480_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		L_10->___onErrorCallback_20 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___onErrorCallback_20), (void*)L_11);
		// SpeechToText.Instance.onPartialResultsCallback = onPartialResultsCallback;
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_12;
		L_12 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_13 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_13, __this, (intptr_t)((void*)AndroidDebug_onPartialResultsCallback_m8B19C16D7AE6B1EA9BE3535418701C0EC05F77DF_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		L_12->___onPartialResultsCallback_21 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___onPartialResultsCallback_21), (void*)L_13);
		// }
		return;
	}
}
// System.Void AndroidDebug::AddLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidDebug_AddLog_mB37963CD21A7C3179928879836B47151B553207D (AndroidDebug_tBEADC7B68E8D668A75418286BE0FCE9AEBD54005* __this, String_t* ___0_log, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// txtLog.text += "\n" + log;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtLog_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = L_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		String_t* L_3 = ___0_log;
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// txtNewLog.text = log;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___txtNewLog_5;
		String_t* L_6 = ___0_log;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// Debug.Log(log);
		String_t* L_7 = ___0_log;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// }
		return;
	}
}
// System.Void AndroidDebug::onResultCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidDebug_onResultCallback_mAD100BB8B969A1537D491A22ED15C0B467142862 (AndroidDebug_tBEADC7B68E8D668A75418286BE0FCE9AEBD54005* __this, String_t* ___0__data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCB41819B377D2A7188BB6BDE84E1CE17A361D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddLog("Result: " + _data);
		String_t* L_0 = ___0__data;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral54BCB41819B377D2A7188BB6BDE84E1CE17A361D, L_0, NULL);
		AndroidDebug_AddLog_mB37963CD21A7C3179928879836B47151B553207D(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void AndroidDebug::onReadyForSpeechCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidDebug_onReadyForSpeechCallback_m4965D3E224891C1250C1B6AF7AA3751659FEB0FE (AndroidDebug_tBEADC7B68E8D668A75418286BE0FCE9AEBD54005* __this, String_t* ___0__params, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B2EE20D6ED4057D1B93BFD199822AC6B8F3AFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddLog("Ready for the user to start speaking");
		AndroidDebug_AddLog_mB37963CD21A7C3179928879836B47151B553207D(__this, _stringLiteral40B2EE20D6ED4057D1B93BFD199822AC6B8F3AFD, NULL);
		// }
		return;
	}
}
// System.Void AndroidDebug::onEndOfSpeechCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidDebug_onEndOfSpeechCallback_m43F57FDE9C6768A19411818D1855889CFC85C57A (AndroidDebug_tBEADC7B68E8D668A75418286BE0FCE9AEBD54005* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43835CC0FB92AD48E4CBC5B6677AE4707BFE1F2B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddLog("User stops speaking");
		AndroidDebug_AddLog_mB37963CD21A7C3179928879836B47151B553207D(__this, _stringLiteral43835CC0FB92AD48E4CBC5B6677AE4707BFE1F2B, NULL);
		// }
		return;
	}
}
// System.Void AndroidDebug::onRmsChangedCallback(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidDebug_onRmsChangedCallback_mF4D118FB9ADB5C2BDC1359F5EAA1E810F83EE827 (AndroidDebug_tBEADC7B68E8D668A75418286BE0FCE9AEBD54005* __this, float ___0__value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float _size = _value * 10;
		float L_0 = ___0__value;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, (10.0f)));
		// RmsBar.sizeDelta = new Vector2(_size, 5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___RmsBar_6;
		float L_2 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_2, (5.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void AndroidDebug::onBeginningOfSpeechCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidDebug_onBeginningOfSpeechCallback_mD61E1D1C870F83747C1B5BD442E3395C470812C7 (AndroidDebug_tBEADC7B68E8D668A75418286BE0FCE9AEBD54005* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7044A18A6CDAC0BB9417558F1F2FC91C1A528A6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddLog("User has started to speak");
		AndroidDebug_AddLog_mB37963CD21A7C3179928879836B47151B553207D(__this, _stringLiteralD7044A18A6CDAC0BB9417558F1F2FC91C1A528A6, NULL);
		// }
		return;
	}
}
// System.Void AndroidDebug::onErrorCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidDebug_onErrorCallback_m0210A74AB99B237CA03C2A33306282BD15376480 (AndroidDebug_tBEADC7B68E8D668A75418286BE0FCE9AEBD54005* __this, String_t* ___0__params, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddLog("Error: " + _params);
		String_t* L_0 = ___0__params;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_0, NULL);
		AndroidDebug_AddLog_mB37963CD21A7C3179928879836B47151B553207D(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void AndroidDebug::onPartialResultsCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidDebug_onPartialResultsCallback_m8B19C16D7AE6B1EA9BE3535418701C0EC05F77DF (AndroidDebug_tBEADC7B68E8D668A75418286BE0FCE9AEBD54005* __this, String_t* ___0__params, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F10C971948B8427E0B9C5A103C9DDD87B465B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddLog("Partial recognition results are available " + _params);
		String_t* L_0 = ___0__params;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral54F10C971948B8427E0B9C5A103C9DDD87B465B5, L_0, NULL);
		AndroidDebug_AddLog_mB37963CD21A7C3179928879836B47151B553207D(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void AndroidDebug::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidDebug__ctor_m3A6795ADA5CB965D80A98D98A5BAE135F79EDB1E (AndroidDebug_tBEADC7B68E8D668A75418286BE0FCE9AEBD54005* __this, const RuntimeMethod* method) 
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
// System.Void RotateAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateAnim_Update_m111DC060B09DC4ABABCE1E48EAC4B7925FA908C4 (RotateAnim_t7E8050340BBE356977CC81127CC944C099FB26B7* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(Vector3.forward * Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void RotateAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateAnim__ctor_mDFD9F157B4A5B2C2FCC862FC4CFD592C0AA3488D (RotateAnim_t7E8050340BBE356977CC81127CC944C099FB26B7* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 1;
		__this->___speed_4 = (1.0f);
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
// System.Void SampleSpeechToText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSpeechToText_Start_m5E89302E144C48D9C1A1D2F93998A8316CF6D9A3 (SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleSpeechToText_OnResultSpeech_m65B1CF4F51224F5B6FD1FC76A35CC1650A657AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Setting("en-US");
		SampleSpeechToText_Setting_m90A675D5580BA4011341FBD301DCB13493C38ABC(__this, _stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877, NULL);
		// loading.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loading_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// SpeechToText.Instance.onResultCallback = OnResultSpeech;
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_1;
		L_1 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_2, __this, (intptr_t)((void*)SampleSpeechToText_OnResultSpeech_m65B1CF4F51224F5B6FD1FC76A35CC1650A657AC2_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		L_1->___onResultCallback_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onResultCallback_6), (void*)L_2);
		// SpeechToText.Instance.isShowPopupAndroid = isShowPopupAndroid;
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_3;
		L_3 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		bool L_4 = __this->___isShowPopupAndroid_4;
		NullCheck(L_3);
		L_3->___isShowPopupAndroid_5 = L_4;
		// toggleShowPopupAndroid.isOn = isShowPopupAndroid;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_5 = __this->___toggleShowPopupAndroid_6;
		bool L_6 = __this->___isShowPopupAndroid_4;
		NullCheck(L_5);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_5, L_6, NULL);
		// toggleShowPopupAndroid.gameObject.SetActive(true);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_7 = __this->___toggleShowPopupAndroid_6;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// Permission.RequestUserPermission(Permission.Microphone);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteral6D2C56060B3F7353031AD314517C27945CC39748, NULL);
		// }
		return;
	}
}
// System.Void SampleSpeechToText::StartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSpeechToText_StartRecording_m059A3F1D01D2A8414FAA68A0A07D1523D29916C7 (SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAACBBF5D44E5A141E72DAA4F69C350BFF7856E6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SpeechToText.Instance.StartRecording("Speak any");
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_0;
		L_0 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		NullCheck(L_0);
		SpeechToText_StartRecording_m37A075A9904FAD1AA81C61B975BB5B4BC2BCA38B(L_0, _stringLiteralAACBBF5D44E5A141E72DAA4F69C350BFF7856E6B, NULL);
		// }
		return;
	}
}
// System.Void SampleSpeechToText::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSpeechToText_StopRecording_m362CD67DA4DD474FBB9A7047A43B9E778DA8481B (SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* __this, const RuntimeMethod* method) 
{
	{
		// SpeechToText.Instance.StopRecording();
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_0;
		L_0 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		NullCheck(L_0);
		SpeechToText_StopRecording_mD04397264A0D0EB68B7EDB340F34C236414D695E(L_0, NULL);
		// }
		return;
	}
}
// System.Void SampleSpeechToText::OnResultSpeech(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSpeechToText_OnResultSpeech_m65B1CF4F51224F5B6FD1FC76A35CC1650A657AC2 (SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* __this, String_t* ___0__data, const RuntimeMethod* method) 
{
	{
		// inputText.text = _data;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___inputText_8;
		String_t* L_1 = ___0__data;
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SampleSpeechToText::OnClickSpeak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSpeechToText_OnClickSpeak_m5D081F15A83024A65D1A83B926E61CF3E1699C86 (SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* __this, const RuntimeMethod* method) 
{
	{
		// TextToSpeech.Instance.StartSpeak(inputText.text);
		TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* L_0;
		L_0 = TextToSpeech_get_Instance_m0242720CCA542B2C51140B34F4D34A7310B52342(NULL);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___inputText_8;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_1, NULL);
		NullCheck(L_0);
		TextToSpeech_StartSpeak_mD4D83D1458D15CA29AB711881FFAADD9888A8B13(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void SampleSpeechToText::OnClickStopSpeak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSpeechToText_OnClickStopSpeak_m902678DC55BFA10920729F5EBD9A3DDE382FE2F9 (SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* __this, const RuntimeMethod* method) 
{
	{
		// TextToSpeech.Instance.StopSpeak();
		TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* L_0;
		L_0 = TextToSpeech_get_Instance_m0242720CCA542B2C51140B34F4D34A7310B52342(NULL);
		NullCheck(L_0);
		TextToSpeech_StopSpeak_m9C07C9237F4677C2D586769ACBEB9EE76F2AE4C7(L_0, NULL);
		// }
		return;
	}
}
// System.Void SampleSpeechToText::Setting(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSpeechToText_Setting_m90A675D5580BA4011341FBD301DCB13493C38ABC (SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* __this, String_t* ___0_code, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral027B9508F2B8152125048E1C3C203BF9D3C7B796);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A74864324EF96C393D23006A90966A612B94F2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC364D485E2F5CBD29610DC2BB6F7FF1828C09A8F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// txtLocale.text = "Locale: " + code;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtLocale_11;
		String_t* L_1 = ___0_code;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral027B9508F2B8152125048E1C3C203BF9D3C7B796, L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// txtPitch.text = "Pitch: " + pitch;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___txtPitch_12;
		float* L_4 = (&__this->___pitch_9);
		String_t* L_5;
		L_5 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3A74864324EF96C393D23006A90966A612B94F2F, L_5, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// txtRate.text = "Rate: " + rate;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___txtRate_13;
		float* L_8 = (&__this->___rate_10);
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC364D485E2F5CBD29610DC2BB6F7FF1828C09A8F, L_9, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
		// SpeechToText.Instance.Setting(code);
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_11;
		L_11 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		String_t* L_12 = ___0_code;
		NullCheck(L_11);
		SpeechToText_Setting_mAE3E71A064942397E752B8890E9CB6A5519A6A17(L_11, L_12, NULL);
		// TextToSpeech.Instance.Setting(code, pitch, rate);
		TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* L_13;
		L_13 = TextToSpeech_get_Instance_m0242720CCA542B2C51140B34F4D34A7310B52342(NULL);
		String_t* L_14 = ___0_code;
		float L_15 = __this->___pitch_9;
		float L_16 = __this->___rate_10;
		NullCheck(L_13);
		TextToSpeech_Setting_m5AF9C828CD94717BC6ACE546CAB6E6CC6133A852(L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void SampleSpeechToText::OnClickApply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSpeechToText_OnClickApply_m62918FA0B17EF19ECDB4B2DEC81FFC6DFE0022B9 (SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* __this, const RuntimeMethod* method) 
{
	{
		// Setting(inputLocale.text);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___inputLocale_7;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		SampleSpeechToText_Setting_m90A675D5580BA4011341FBD301DCB13493C38ABC(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void SampleSpeechToText::OnToggleShowAndroidPopupChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSpeechToText_OnToggleShowAndroidPopupChanged_m2B34AB12BF7F11D9383215CB477B55285272AB91 (SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// isShowPopupAndroid = value;
		bool L_0 = ___0_value;
		__this->___isShowPopupAndroid_4 = L_0;
		// SpeechToText.Instance.isShowPopupAndroid = isShowPopupAndroid;
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_1;
		L_1 = SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39(NULL);
		bool L_2 = __this->___isShowPopupAndroid_4;
		NullCheck(L_1);
		L_1->___isShowPopupAndroid_5 = L_2;
		// }
		return;
	}
}
// System.Void SampleSpeechToText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleSpeechToText__ctor_mE1E3B8C96881BB2E726E13FA373E7F10ECD17A5C (SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* __this, const RuntimeMethod* method) 
{
	{
		// public bool isShowPopupAndroid = true;
		__this->___isShowPopupAndroid_4 = (bool)1;
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
// System.Void SpeechButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechButton_Start_m0A82F6028517705BAAA28B01A2F3C385EE4C08DF (SpeechButton_t695A7EB3DF05B56C64C3D98B55A6662695BB98C7* __this, const RuntimeMethod* method) 
{
	{
		// effect.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___effect_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// speed = speedEffect;
		float L_1 = __this->___speedEffect_6;
		__this->___speed_8 = L_1;
		// }
		return;
	}
}
// System.Void SpeechButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechButton_Update_mD076A40065B1FF1816C44E7A9D41FDB732B18529 (SpeechButton_t695A7EB3DF05B56C64C3D98B55A6662695BB98C7* __this, const RuntimeMethod* method) 
{
	{
		// if (effect.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___effect_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_0087;
		}
	}
	{
		// scale += Time.deltaTime * speed;
		float L_2 = __this->___scale_9;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_4 = __this->___speed_8;
		__this->___scale_9 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(L_3, L_4))));
		// if (scale > scaleEffect)
		float L_5 = __this->___scale_9;
		float L_6 = __this->___scaleEffect_7;
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0041;
		}
	}
	{
		// speed = -speedEffect;
		float L_7 = __this->___speedEffect_6;
		__this->___speed_8 = ((-L_7));
	}

IL_0041:
	{
		// if (scale < scaleEffect - 0.1f)
		float L_8 = __this->___scale_9;
		float L_9 = __this->___scaleEffect_7;
		if ((!(((float)L_8) < ((float)((float)il2cpp_codegen_subtract(L_9, (0.100000001f)))))))
		{
			goto IL_0061;
		}
	}
	{
		// speed = speedEffect;
		float L_10 = __this->___speedEffect_6;
		__this->___speed_8 = L_10;
	}

IL_0061:
	{
		// effect.transform.localScale = new Vector3(scale, scale, 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___effect_5;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		float L_13 = __this->___scale_9;
		float L_14 = __this->___scale_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_13, L_14, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_15, NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void SpeechButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechButton_OnPointerDown_m372F511219F4A37D3ACEE514926F91802B1A8AA1 (SpeechButton_t695A7EB3DF05B56C64C3D98B55A6662695BB98C7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool needEffect = true;
		V_0 = (bool)1;
		// if (sample.isShowPopupAndroid)
		SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* L_0 = __this->___sample_4;
		NullCheck(L_0);
		bool L_1 = L_0->___isShowPopupAndroid_4;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// needEffect = false;
		V_0 = (bool)0;
	}

IL_0011:
	{
		// if (needEffect)
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// effect.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___effect_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// scale = 1;
		__this->___scale_9 = (1.0f);
	}

IL_002b:
	{
		// sample.StartRecording();
		SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* L_4 = __this->___sample_4;
		NullCheck(L_4);
		SampleSpeechToText_StartRecording_m059A3F1D01D2A8414FAA68A0A07D1523D29916C7(L_4, NULL);
		// }
		return;
	}
}
// System.Void SpeechButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechButton_OnPointerUp_m96CC945827D644DC454A3E249ED869D5BD39A58E (SpeechButton_t695A7EB3DF05B56C64C3D98B55A6662695BB98C7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// effect.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___effect_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// sample.StopRecording();
		SampleSpeechToText_tC36F61200F92774B253ADB9D2663F3A5FB37E865* L_1 = __this->___sample_4;
		NullCheck(L_1);
		SampleSpeechToText_StopRecording_m362CD67DA4DD474FBB9A7047A43B9E778DA8481B(L_1, NULL);
		// }
		return;
	}
}
// System.Void SpeechButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechButton__ctor_m83CCA24A8022675FBE2F4E2E0EC5B5AF62F0F138 (SpeechButton_t695A7EB3DF05B56C64C3D98B55A6662695BB98C7* __this, const RuntimeMethod* method) 
{
	{
		// public float speedEffect = 1;
		__this->___speedEffect_6 = (1.0f);
		// public float scaleEffect = 1.2f;
		__this->___scaleEffect_7 = (1.20000005f);
		// float scale = 1;
		__this->___scale_9 = (1.0f);
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
// TextSpeech.SpeechToText TextSpeech.SpeechToText::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* SpeechToText_get_Instance_m4CE8EADFF870B8B2C43BF7277C3538519CC6CE39 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_mB5B56CB2F3DD3E12DE78A7962536B195168468A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7055B958F2766D40F1628112CCCE68FF135D0DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_0 = ((SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_StaticFields*)il2cpp_codegen_static_fields_for(SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// GameObject go = new GameObject("SpeechToText");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteralA7055B958F2766D40F1628112CCCE68FF135D0DA, NULL);
		// _instance = go.AddComponent<SpeechToText>();
		NullCheck(L_2);
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_3;
		L_3 = GameObject_AddComponent_TisSpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_mB5B56CB2F3DD3E12DE78A7962536B195168468A0(L_2, GameObject_AddComponent_TisSpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_mB5B56CB2F3DD3E12DE78A7962536B195168468A0_RuntimeMethod_var);
		((SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_StaticFields*)il2cpp_codegen_static_fields_for(SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_il2cpp_TypeInfo_var))->____instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_StaticFields*)il2cpp_codegen_static_fields_for(SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_il2cpp_TypeInfo_var))->____instance_4), (void*)L_3);
	}

IL_0021:
	{
		// return _instance;
		SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* L_4 = ((SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_StaticFields*)il2cpp_codegen_static_fields_for(SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_il2cpp_TypeInfo_var))->____instance_4;
		return L_4;
	}
}
// System.Void TextSpeech.SpeechToText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_Awake_m37C3645316DA324CACBAD2DFBDEE9AB60EDB1FBA (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_StaticFields*)il2cpp_codegen_static_fields_for(SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_StaticFields*)il2cpp_codegen_static_fields_for(SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void TextSpeech.SpeechToText::Setting(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_Setting_mAE3E71A064942397E752B8890E9CB6A5519A6A17 (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, String_t* ___0__language, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DAD484DE09B996ABB6E4D4734363AF32364EB09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaClass javaUnityClass = new AndroidJavaClass("com.starseed.speechtotext.Bridge");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044, NULL);
		// javaUnityClass.CallStatic("SettingSpeechToText", _language);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0__language;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral2DAD484DE09B996ABB6E4D4734363AF32364EB09, L_2, NULL);
		// }
		return;
	}
}
// System.Void TextSpeech.SpeechToText::StartRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_StartRecording_m37A075A9904FAD1AA81C61B975BB5B4BC2BCA38B (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, String_t* ___0__message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral254E32F59DCD1922EE5D660AC3E5087CE713EFF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3D2F838F02A5087F5EDE73F9D24BF923AEB736B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isShowPopupAndroid)
		bool L_0 = __this->___isShowPopupAndroid_5;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// AndroidJavaClass javaUnityClass = new AndroidJavaClass("com.starseed.speechtotext.Bridge");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044, NULL);
		// javaUnityClass.CallStatic("OpenSpeechToText", _message);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0__message;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteral254E32F59DCD1922EE5D660AC3E5087CE713EFF2, L_3, NULL);
		return;
	}

IL_0027:
	{
		// AndroidJavaClass javaUnityClass = new AndroidJavaClass("com.starseed.speechtotext.Bridge");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_5, _stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044, NULL);
		// javaUnityClass.CallStatic("StartRecording");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_5);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_5, _stringLiteralA3D2F838F02A5087F5EDE73F9D24BF923AEB736B, L_6, NULL);
		// }
		return;
	}
}
// System.Void TextSpeech.SpeechToText::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_StopRecording_mD04397264A0D0EB68B7EDB340F34C236414D695E (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral342DBF4225FAB93E2C37F54556AF0D11D55D87BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isShowPopupAndroid == false)
		bool L_0 = __this->___isShowPopupAndroid_5;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		// AndroidJavaClass javaUnityClass = new AndroidJavaClass("com.starseed.speechtotext.Bridge");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044, NULL);
		// javaUnityClass.CallStatic("StopRecording");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteral342DBF4225FAB93E2C37F54556AF0D11D55D87BC, L_2, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void TextSpeech.SpeechToText::onMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_onMessage_m41B2F4671E9CEF5E626B58AF9CD4E999FAE280AE (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, String_t* ___0__message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TextSpeech.SpeechToText::onErrorMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_onErrorMessage_mFC0FF16443D932A5A685778E671B05BB3ACA8DCB (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, String_t* ___0__message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(_message);
		String_t* L_0 = ___0__message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// }
		return;
	}
}
// System.Void TextSpeech.SpeechToText::onResults(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_onResults_m9CDA0A1123A0540F6AFED6CF88E1F8AD0293749C (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, String_t* ___0__results, const RuntimeMethod* method) 
{
	{
		// if (onResultCallback != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___onResultCallback_6;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// onResultCallback(_results);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = __this->___onResultCallback_6;
		String_t* L_2 = ___0__results;
		NullCheck(L_1);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.String TextSpeech.SpeechToText::getErrorText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechToText_getErrorText_mE45F06BC7ABD2F5A9A6F3D16A83370CFC1F58E6B (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, int32_t ___0_errorCode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A18A0541370CEA6CB968C6C5F80930896338E31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CD1F3C7D6909FB02DC114E766D0AB42570BF79F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31303B045A5A278354593B16B365D497DAAED865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral523082E159EC27FD5ECB2E23DAA047A2A65120E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B171A1256043C4DEF8480E5330B49CAB0EAF96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral971006145A90DCA19094D2D2C56BF4B1170A3393);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB501AE4894A0444AD410C928109E9D8BDF62DA28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD352252FE3B272E89CCB3EEBF7BAFF564AF99F49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF165BD0A7270824F995944DA2D3C767DDE4FB63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE003C5A5E9495494C17FE6A1F633707B6ADAE5EC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___0_errorCode;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 1)))
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0036;
			}
			case 5:
			{
				goto IL_006e;
			}
			case 6:
			{
				goto IL_0056;
			}
			case 7:
			{
				goto IL_005e;
			}
			case 8:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_0076;
	}

IL_002e:
	{
		// message = "Audio recording error";
		V_0 = _stringLiteralDF165BD0A7270824F995944DA2D3C767DDE4FB63;
		// break;
		goto IL_007c;
	}

IL_0036:
	{
		// message = "Client side error";
		V_0 = _stringLiteral0A18A0541370CEA6CB968C6C5F80930896338E31;
		// break;
		goto IL_007c;
	}

IL_003e:
	{
		// message = "Insufficient permissions";
		V_0 = _stringLiteralE003C5A5E9495494C17FE6A1F633707B6ADAE5EC;
		// break;
		goto IL_007c;
	}

IL_0046:
	{
		// message = "Network error";
		V_0 = _stringLiteral523082E159EC27FD5ECB2E23DAA047A2A65120E9;
		// break;
		goto IL_007c;
	}

IL_004e:
	{
		// message = "Network timeout";
		V_0 = _stringLiteral971006145A90DCA19094D2D2C56BF4B1170A3393;
		// break;
		goto IL_007c;
	}

IL_0056:
	{
		// message = "No match";
		V_0 = _stringLiteral31303B045A5A278354593B16B365D497DAAED865;
		// break;
		goto IL_007c;
	}

IL_005e:
	{
		// message = "RecognitionService busy";
		V_0 = _stringLiteralD352252FE3B272E89CCB3EEBF7BAFF564AF99F49;
		// break;
		goto IL_007c;
	}

IL_0066:
	{
		// message = "error from server";
		V_0 = _stringLiteral73B171A1256043C4DEF8480E5330B49CAB0EAF96;
		// break;
		goto IL_007c;
	}

IL_006e:
	{
		// message = "No speech input";
		V_0 = _stringLiteral2CD1F3C7D6909FB02DC114E766D0AB42570BF79F;
		// break;
		goto IL_007c;
	}

IL_0076:
	{
		// message = "Didn't understand, please try again.";
		V_0 = _stringLiteralB501AE4894A0444AD410C928109E9D8BDF62DA28;
	}

IL_007c:
	{
		// return message;
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void TextSpeech.SpeechToText::onReadyForSpeech(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_onReadyForSpeech_mD72920CDFD7A6248451E6E6D28481A8770D38A67 (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, String_t* ___0__params, const RuntimeMethod* method) 
{
	{
		// if (onReadyForSpeechCallback != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___onReadyForSpeechCallback_16;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// onReadyForSpeechCallback(_params);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = __this->___onReadyForSpeechCallback_16;
		String_t* L_2 = ___0__params;
		NullCheck(L_1);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void TextSpeech.SpeechToText::onEndOfSpeech(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_onEndOfSpeech_m611D5EA0A232C245167E97ACED07DF15C3A0EDE2 (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, String_t* ___0__paramsNull, const RuntimeMethod* method) 
{
	{
		// if (onEndOfSpeechCallback != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onEndOfSpeechCallback_17;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// onEndOfSpeechCallback();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___onEndOfSpeechCallback_17;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void TextSpeech.SpeechToText::onRmsChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_onRmsChanged_mF37D058AA749490117C41C6F3F87957AACE8DE3F (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, String_t* ___0__value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float _rms = float.Parse(_value);
		String_t* L_0 = ___0__value;
		float L_1;
		L_1 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_0, NULL);
		V_0 = L_1;
		// if (onRmsChangedCallback != null)
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = __this->___onRmsChangedCallback_18;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// onRmsChangedCallback(_rms);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = __this->___onRmsChangedCallback_18;
		float L_4 = V_0;
		NullCheck(L_3);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_3, L_4, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void TextSpeech.SpeechToText::onBeginningOfSpeech(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_onBeginningOfSpeech_mE8AB820DF522553BD9CC205986C243F857E44CEE (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, String_t* ___0__paramsNull, const RuntimeMethod* method) 
{
	{
		// if (onBeginningOfSpeechCallback != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onBeginningOfSpeechCallback_19;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// onBeginningOfSpeechCallback();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___onBeginningOfSpeechCallback_19;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void TextSpeech.SpeechToText::onError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_onError_mD8468F85BE2B0A1515620D602A4033966E3A0D30 (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, String_t* ___0__value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// int _error = int.Parse(_value);
		String_t* L_0 = ___0__value;
		int32_t L_1;
		L_1 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_0, NULL);
		V_0 = L_1;
		// string _message = getErrorText(_error);
		int32_t L_2 = V_0;
		String_t* L_3;
		L_3 = SpeechToText_getErrorText_mE45F06BC7ABD2F5A9A6F3D16A83370CFC1F58E6B(__this, L_2, NULL);
		V_1 = L_3;
		// Debug.Log(_message);
		String_t* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// if (onErrorCallback != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = __this->___onErrorCallback_20;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// onErrorCallback(_message);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = __this->___onErrorCallback_20;
		String_t* L_7 = V_1;
		NullCheck(L_6);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_6, L_7, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void TextSpeech.SpeechToText::onPartialResults(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_onPartialResults_m5FC1238FE736D6ADE358859BD26D4410FCE3969D (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, String_t* ___0__params, const RuntimeMethod* method) 
{
	{
		// if (onPartialResultsCallback != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___onPartialResultsCallback_21;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// onPartialResultsCallback(_params);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = __this->___onPartialResultsCallback_21;
		String_t* L_2 = ___0__params;
		NullCheck(L_1);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void TextSpeech.SpeechToText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText__ctor_m58604FCB643B33D6CD5936816FA681391839276B (SpeechToText_t699B622A4DFEBC64CFF1090FC357330FD554825D* __this, const RuntimeMethod* method) 
{
	{
		// public bool isShowPopupAndroid = true;
		__this->___isShowPopupAndroid_5 = (bool)1;
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
// TextSpeech.TextToSpeech TextSpeech.TextToSpeech::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* TextToSpeech_get_Instance_m0242720CCA542B2C51140B34F4D34A7310B52342 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_m91A159F666DC9BC9906CACC2FA8C17B74FCEAE62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265483C9037E1F442D997A959595E93402B01C8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* L_0 = ((TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// GameObject go = new GameObject("TextToSpeech");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral265483C9037E1F442D997A959595E93402B01C8D, NULL);
		// _instance = go.AddComponent<TextToSpeech>();
		NullCheck(L_2);
		TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* L_3;
		L_3 = GameObject_AddComponent_TisTextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_m91A159F666DC9BC9906CACC2FA8C17B74FCEAE62(L_2, GameObject_AddComponent_TisTextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_m91A159F666DC9BC9906CACC2FA8C17B74FCEAE62_RuntimeMethod_var);
		((TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_il2cpp_TypeInfo_var))->____instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_il2cpp_TypeInfo_var))->____instance_4), (void*)L_3);
	}

IL_0021:
	{
		// return _instance;
		TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* L_4 = ((TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_il2cpp_TypeInfo_var))->____instance_4;
		return L_4;
	}
}
// System.Void TextSpeech.TextToSpeech::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_Awake_mC2672FC332510129EAC57AC484C4F147FE6F26F3 (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_StaticFields*)il2cpp_codegen_static_fields_for(TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void TextSpeech.TextToSpeech::Setting(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_Setting_m5AF9C828CD94717BC6ACE546CAB6E6CC6133A852 (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, String_t* ___0_language, float ___1__pitch, float ___2__rate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A257C3F4BE6F44ABD010261DB4AE682EF9C8A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pitch = _pitch;
		float L_0 = ___1__pitch;
		__this->___pitch_8 = L_0;
		// rate = _rate;
		float L_1 = ___2__rate;
		__this->___rate_9 = L_1;
		// AndroidJavaClass javaUnityClass = new AndroidJavaClass("com.starseed.speechtotext.Bridge");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044, NULL);
		// javaUnityClass.CallStatic("SettingTextToSpeed", language, pitch, rate);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___0_language;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		float L_7 = __this->___pitch_8;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		float L_11 = __this->___rate_9;
		float L_12 = L_11;
		RuntimeObject* L_13 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		NullCheck(L_2);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_2, _stringLiteral47A257C3F4BE6F44ABD010261DB4AE682EF9C8A6, L_10, NULL);
		// }
		return;
	}
}
// System.Void TextSpeech.TextToSpeech::StartSpeak(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_StartSpeak_mD4D83D1458D15CA29AB711881FFAADD9888A8B13 (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, String_t* ___0__message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B457898EF7682B2DC8DD1E1F1F077236320995);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaClass javaUnityClass = new AndroidJavaClass("com.starseed.speechtotext.Bridge");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044, NULL);
		// javaUnityClass.CallStatic("OpenTextToSpeed", _message);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0__message;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral61B457898EF7682B2DC8DD1E1F1F077236320995, L_2, NULL);
		// }
		return;
	}
}
// System.Void TextSpeech.TextToSpeech::StopSpeak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_StopSpeak_m9C07C9237F4677C2D586769ACBEB9EE76F2AE4C7 (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral425538BFDF4BFDE36D19F26B96A1476EDFD5F0F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaClass javaUnityClass = new AndroidJavaClass("com.starseed.speechtotext.Bridge");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral6F8DA33CBE1719D1C705AA7F0189404A7689D044, NULL);
		// javaUnityClass.CallStatic("StopTextToSpeed");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral425538BFDF4BFDE36D19F26B96A1476EDFD5F0F2, L_1, NULL);
		// }
		return;
	}
}
// System.Void TextSpeech.TextToSpeech::onSpeechRange(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_onSpeechRange_mE2CEDF8B552C4CD9B020A4A9CA9E8CCA211FB8BF (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, String_t* ___0__message, const RuntimeMethod* method) 
{
	{
		// if (onSpeakRangeCallback != null && _message != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___onSpeakRangeCallback_7;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = ___0__message;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// onSpeakRangeCallback(_message);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = __this->___onSpeakRangeCallback_7;
		String_t* L_3 = ___0__message;
		NullCheck(L_2);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_2, L_3, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void TextSpeech.TextToSpeech::onStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_onStart_m5BE7ED24FFCC4B7156E602166E5C02E98A4B68E7 (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, String_t* ___0__message, const RuntimeMethod* method) 
{
	{
		// if (onStartCallBack != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onStartCallBack_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// onStartCallBack();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___onStartCallBack_5;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void TextSpeech.TextToSpeech::onDone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_onDone_m054A4EBB55738FACB0850D101DDCD75BAE75E4C6 (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, String_t* ___0__message, const RuntimeMethod* method) 
{
	{
		// if (onDoneCallback != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onDoneCallback_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// onDoneCallback();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___onDoneCallback_6;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void TextSpeech.TextToSpeech::onError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_onError_mF8003FB4A687039E13C9651D32C4A282128DEDA0 (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, String_t* ___0__message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TextSpeech.TextToSpeech::onMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_onMessage_m878989CF5FCA5B554EB70D8F4CA66D69CB53CD50 (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, String_t* ___0__message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TextSpeech.TextToSpeech::onSettingResult(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech_onSettingResult_mFFA1CA90EFA4589AA8F1D4D17B22D0595E416B46 (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, String_t* ___0__params, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FD232E440FB646BF618F915C132F613E2C011C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE74230622B0F806E10F48157B6CF68EC36AE776);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// int _error = int.Parse(_params);
		String_t* L_0 = ___0__params;
		int32_t L_1;
		L_1 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_0, NULL);
		V_0 = L_1;
		// string _message = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (_error == LANG_MISSING_DATA || _error == LANG_NOT_SUPPORTED)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}

IL_0016:
	{
		// _message = "This Language is not supported";
		V_1 = _stringLiteralFE74230622B0F806E10F48157B6CF68EC36AE776;
		goto IL_0024;
	}

IL_001e:
	{
		// _message = "This Language valid";
		V_1 = _stringLiteral1FD232E440FB646BF618F915C132F613E2C011C6;
	}

IL_0024:
	{
		// Debug.Log(_message);
		String_t* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// }
		return;
	}
}
// System.Void TextSpeech.TextToSpeech::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeech__ctor_mCDBD004B621E2A1386AFDC13416A115CCE2A9F49 (TextToSpeech_tF35D53432B519A5960A37B7BE31C3223EB23A7C1* __this, const RuntimeMethod* method) 
{
	{
		// public float pitch = 1f; //[0.5 - 2] Default 1
		__this->___pitch_8 = (1.0f);
		// public float rate = 1f; //[min - max] android:[0.5 - 2] iOS:[0 - 1]
		__this->___rate_9 = (1.0f);
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
// System.Void ReadyPlayerMe.QuickStart.CameraFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Start_m96563636353996F2D593F6DB78975253794A323F (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5A07FE10EB68540AEDE50779D90B2C5AD5FF607);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// SDKLogger.LogWarning(TAG, TARGET_NOT_SET);
		String_t* L_2 = __this->___TAG_5;
		il2cpp_codegen_runtime_class_init_inline(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		SDKLogger_LogWarning_m296702240E8291BA9F9A9E2DB57D1CE8FCC79AC3(L_2, _stringLiteralC5A07FE10EB68540AEDE50779D90B2C5AD5FF607, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0026:
	{
		// if (followOnStart)
		bool L_3 = __this->___followOnStart_9;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// StartFollow();
		CameraFollow_StartFollow_m9F4070CE451A6443D518BE748D181A441AFEED22(__this, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.CameraFollow::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_LateUpdate_m39099E021E4C3C686DC76479238EADF921311D35 (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8* __this, const RuntimeMethod* method) 
{
	{
		// if (isFollowing)
		bool L_0 = __this->___isFollowing_10;
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		// playerCamera.transform.localPosition = Vector3.forward * cameraDistance;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___playerCamera_6;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_4 = __this->___cameraDistance_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_5, NULL);
		// playerCamera.transform.localRotation = Quaternion.Euler(Vector3.zero);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___playerCamera_6;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_8, NULL);
		NullCheck(L_7);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_7, L_9, NULL);
		// transform.position = target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___target_7;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_12, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.CameraFollow::StopFollow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_StopFollow_mDF2F48FB3940B50567775284B44AFCF5BD5F92C6 (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8* __this, const RuntimeMethod* method) 
{
	{
		// isFollowing = false;
		__this->___isFollowing_10 = (bool)0;
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.CameraFollow::StartFollow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_StartFollow_m9F4070CE451A6443D518BE748D181A441AFEED22 (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8* __this, const RuntimeMethod* method) 
{
	{
		// isFollowing = true;
		__this->___isFollowing_10 = (bool)1;
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_mD5016100EFF7D9FA80C548CDDA4442E63F3EE07C (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly string TAG = typeof(CameraFollow).ToString();
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		__this->___TAG_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TAG_5), (void*)L_2);
		// private float cameraDistance = -2.4f;
		__this->___cameraDistance_8 = (-2.4000001f);
		// [SerializeField] private bool followOnStart = true;
		__this->___followOnStart_9 = (bool)1;
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
// System.Void ReadyPlayerMe.QuickStart.CameraOrbit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrbit_Start_m0D07353F8A3422D428B251704BC6DAB785B17019 (CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5* __this, const RuntimeMethod* method) 
{
	{
		// rotation = transform.transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_1, NULL);
		__this->___rotation_9 = L_2;
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.CameraOrbit::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrbit_LateUpdate_m3A3FF3C45DEC69660A07B672076B953AA0BA0B52 (CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerInput == null) return;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_0 = __this->___playerInput_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (playerInput == null) return;
		return;
	}

IL_000f:
	{
		// yaw += playerInput.MouseAxisX ;
		float L_2 = __this->___yaw_12;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_3 = __this->___playerInput_5;
		NullCheck(L_3);
		float L_4;
		L_4 = PlayerInput_get_MouseAxisX_m517553D7755EC539C395A87345206359C719C74D_inline(L_3, NULL);
		__this->___yaw_12 = ((float)il2cpp_codegen_add(L_2, L_4));
		// pitch -= playerInput.MouseAxisY ;
		float L_5 = __this->___pitch_11;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_6 = __this->___playerInput_5;
		NullCheck(L_6);
		float L_7;
		L_7 = PlayerInput_get_MouseAxisY_m32B6331B6392DED8AF93AC744FDF868448C9C4E4_inline(L_6, NULL);
		__this->___pitch_11 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		// if (smoothDamp)
		bool L_8 = __this->___smoothDamp_8;
		if (!L_8)
		{
			goto IL_0076;
		}
	}
	{
		// rotation = Vector3.SmoothDamp(rotation, new Vector3(pitch, yaw), ref currentVelocity, SMOOTH_TIME);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___rotation_9;
		float L_10 = __this->___pitch_11;
		float L_11 = __this->___yaw_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_12), L_10, L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___currentVelocity_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_9, L_12, L_13, (0.100000001f), NULL);
		__this->___rotation_9 = L_14;
		goto IL_0098;
	}

IL_0076:
	{
		// rotation = new Vector3(pitch,yaw, rotation.z);
		float L_15 = __this->___pitch_11;
		float L_16 = __this->___yaw_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&__this->___rotation_9);
		float L_18 = L_17->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_15, L_16, L_18, /*hidden argument*/NULL);
		__this->___rotation_9 = L_19;
	}

IL_0098:
	{
		// rotation.x = ClampAngle(rotation.x, minRotationX, maxRotationX);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___rotation_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___rotation_9);
		float L_22 = L_21->___x_2;
		float L_23 = __this->___minRotationX_6;
		float L_24 = __this->___maxRotationX_7;
		float L_25;
		L_25 = CameraOrbit_ClampAngle_m573D0906C085F32B35D0BA9D21F39067D99F5DFF(__this, L_22, L_23, L_24, NULL);
		L_20->___x_2 = L_25;
		// transform.transform.rotation = Quaternion.Euler(rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = __this->___rotation_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_28, NULL);
		NullCheck(L_27);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_27, L_29, NULL);
		// }
		return;
	}
}
// System.Single ReadyPlayerMe.QuickStart.CameraOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraOrbit_ClampAngle_m573D0906C085F32B35D0BA9D21F39067D99F5DFF (CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5* __this, float ___0_angle, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	{
		// if (angle < -360F)
		float L_0 = ___0_angle;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// angle += 360F;
		float L_1 = ___0_angle;
		___0_angle = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (angle > 360F)
		float L_2 = ___0_angle;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// angle -= 360F;
		float L_3 = ___0_angle;
		___0_angle = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(angle, min, max);
		float L_4 = ___0_angle;
		float L_5 = ___1_min;
		float L_6 = ___2_max;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void ReadyPlayerMe.QuickStart.CameraOrbit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrbit__ctor_m9D3EE17EEED278E591F06821D386C26C2EDBC21F (CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5* __this, const RuntimeMethod* method) 
{
	{
		// private float minRotationX = -60f;
		__this->___minRotationX_6 = (-60.0f);
		// private float maxRotationX = 50f;
		__this->___maxRotationX_7 = (50.0f);
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
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_AxisHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerInput_get_AxisHorizontal_m1D5B395A4B8E6B7859495693589F6951715DC2B4 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float AxisHorizontal { get; private set; }
		float L_0 = __this->___U3CAxisHorizontalU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_AxisHorizontal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_AxisHorizontal_mA698E8B72185C79CA74B278BAB54FD01DD487689 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AxisHorizontal { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CAxisHorizontalU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_AxisVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerInput_get_AxisVertical_mCAB43AC24F874CE7348C141767F355EE3CA2D420 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float AxisVertical { get; private set; }
		float L_0 = __this->___U3CAxisVerticalU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_AxisVertical(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_AxisVertical_mDD8FF9AB5F1BFE53C69766EAB27C45F80CFEA553 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AxisVertical { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CAxisVerticalU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_MouseAxisX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerInput_get_MouseAxisX_m517553D7755EC539C395A87345206359C719C74D (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisX { get; private set; }
		float L_0 = __this->___U3CMouseAxisXU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_MouseAxisX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_MouseAxisX_mFE9182A7A86366DD9BD4B83294FA2A0D12C7124C (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisX { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CMouseAxisXU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_MouseAxisY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerInput_get_MouseAxisY_m32B6331B6392DED8AF93AC744FDF868448C9C4E4 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisY { get; private set; }
		float L_0 = __this->___U3CMouseAxisYU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_MouseAxisY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_MouseAxisY_mB28D735655CB89CB9201A8F1283FF76DD54B2EBA (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisY { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CMouseAxisYU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Boolean ReadyPlayerMe.QuickStart.PlayerInput::get_IsHoldingLeftShift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInput_get_IsHoldingLeftShift_mE14D9A584A88EDB50C5D93164B5272927F6BBF7D (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsHoldingLeftShift => Input.GetKey(KeyCode.LeftShift);
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		return L_0;
	}
}
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::CheckInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_CheckInput_m3C9F5E10CD9F719436FC1ADE0A0AFE9A61ABB039 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	{
		// AxisHorizontal = Input.GetAxis(HORIZONTAL_AXIS);
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		PlayerInput_set_AxisHorizontal_mA698E8B72185C79CA74B278BAB54FD01DD487689_inline(__this, L_0, NULL);
		// AxisVertical = Input.GetAxis(VERTICAL_AXIS);
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		PlayerInput_set_AxisVertical_mDD8FF9AB5F1BFE53C69766EAB27C45F80CFEA553_inline(__this, L_1, NULL);
		// MouseAxisX = Input.GetAxis(MOUSE_AXIS_X) * mouseSensitivityX;
		float L_2;
		L_2 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_3 = __this->___mouseSensitivityX_14;
		PlayerInput_set_MouseAxisX_mFE9182A7A86366DD9BD4B83294FA2A0D12C7124C_inline(__this, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// MouseAxisY = Input.GetAxis(MOUSE_AXIS_Y) * mouseSensitivityY;
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_5 = __this->___mouseSensitivityY_15;
		PlayerInput_set_MouseAxisY_mB28D735655CB89CB9201A8F1283FF76DD54B2EBA_inline(__this, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		// if (Input.GetButtonDown(JUMP_BUTTON))
		bool L_6;
		L_6 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		// OnJumpPress?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = __this->___OnJumpPress_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = L_7;
		G_B2_0 = L_8;
		if (L_8)
		{
			G_B3_0 = L_8;
			goto IL_0065;
		}
	}
	{
		return;
	}

IL_0065:
	{
		NullCheck(G_B3_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B3_0, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_m6264B15197D2B69EDC0C8DB81BB0546E60FC8077 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// private float mouseSensitivityX = 1;
		__this->___mouseSensitivityX_14 = (1.0f);
		// private float mouseSensitivityY = 2;
		__this->___mouseSensitivityY_15 = (2.0f);
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
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Init_m6515F9CDF421D08BBBF185A67A9C2B08FA544B33 (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C_m1A0CAB9BA6FD5D086A1908CC3ABB0151F01C805A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28_m7AC9E938D2DE0CBDE4A45BD8BFD5FC99E97F2D1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThirdPersonController_OnJump_m3F89B0385F6CD86D90FEB4B0E9A5D95D4A4360BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thirdPersonMovement = GetComponent<ThirdPersonMovement>();
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_0;
		L_0 = Component_GetComponent_TisThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28_m7AC9E938D2DE0CBDE4A45BD8BFD5FC99E97F2D1B(__this, Component_GetComponent_TisThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28_m7AC9E938D2DE0CBDE4A45BD8BFD5FC99E97F2D1B_RuntimeMethod_var);
		__this->___thirdPersonMovement_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thirdPersonMovement_14), (void*)L_0);
		// playerInput = GetComponent<PlayerInput>();
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_1;
		L_1 = Component_GetComponent_TisPlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C_m1A0CAB9BA6FD5D086A1908CC3ABB0151F01C805A(__this, Component_GetComponent_TisPlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C_m1A0CAB9BA6FD5D086A1908CC3ABB0151F01C805A_RuntimeMethod_var);
		__this->___playerInput_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerInput_15), (void*)L_1);
		// playerInput.OnJumpPress += OnJump;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_2 = __this->___playerInput_15;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_3 = L_2;
		NullCheck(L_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3->___OnJumpPress_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)ThirdPersonController_OnJump_m3F89B0385F6CD86D90FEB4B0E9A5D95D4A4360BE_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___OnJumpPress_9 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___OnJumpPress_9), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// isInitialized = true;
		__this->___isInitialized_18 = (bool)1;
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::Setup(UnityEngine.GameObject,UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Setup_m436496E9BE83F1489C20A2336B763F9BDBB1F4F5 (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___1_runtimeAnimatorController, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isInitialized)
		bool L_0 = __this->___isInitialized_18;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Init();
		ThirdPersonController_Init_m6515F9CDF421D08BBBF185A67A9C2B08FA544B33(__this, NULL);
	}

IL_000e:
	{
		// avatar = target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_target;
		__this->___avatar_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatar_13), (void*)L_1);
		// thirdPersonMovement.Setup(avatar);
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_2 = __this->___thirdPersonMovement_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___avatar_13;
		NullCheck(L_2);
		ThirdPersonMovement_Setup_m847528711F11312D8BDD37BFAC61C7456945033F(L_2, L_3, NULL);
		// animator = avatar.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___avatar_13;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_4, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animator_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_10), (void*)L_5);
		// animator.runtimeAnimatorController = runtimeAnimatorController;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_10;
		RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* L_7 = ___1_runtimeAnimatorController;
		NullCheck(L_6);
		Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311(L_6, L_7, NULL);
		// animator.applyRootMotion = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___animator_10;
		NullCheck(L_8);
		Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Update_m42D91BFCA21FC4AE75727B52A5600FB6A789D0C0 (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (avatar == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___avatar_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (inputEnabled)
		bool L_2 = __this->___inputEnabled_17;
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		// playerInput.CheckInput();
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_3 = __this->___playerInput_15;
		NullCheck(L_3);
		PlayerInput_CheckInput_m3C9F5E10CD9F719436FC1ADE0A0AFE9A61ABB039(L_3, NULL);
		// var xAxisInput = playerInput.AxisHorizontal;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_4 = __this->___playerInput_15;
		NullCheck(L_4);
		float L_5;
		L_5 = PlayerInput_get_AxisHorizontal_m1D5B395A4B8E6B7859495693589F6951715DC2B4_inline(L_4, NULL);
		V_0 = L_5;
		// var yAxisInput = playerInput.AxisVertical;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_6 = __this->___playerInput_15;
		NullCheck(L_6);
		float L_7;
		L_7 = PlayerInput_get_AxisVertical_mCAB43AC24F874CE7348C141767F355EE3CA2D420_inline(L_6, NULL);
		V_1 = L_7;
		// thirdPersonMovement.Move(xAxisInput, yAxisInput);
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_8 = __this->___thirdPersonMovement_14;
		float L_9 = V_0;
		float L_10 = V_1;
		NullCheck(L_8);
		ThirdPersonMovement_Move_mFF8325693B81201831555283D77AC080A2258144(L_8, L_9, L_10, NULL);
		// thirdPersonMovement.SetIsRunning(playerInput.IsHoldingLeftShift);
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_11 = __this->___thirdPersonMovement_14;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_12 = __this->___playerInput_15;
		NullCheck(L_12);
		bool L_13;
		L_13 = PlayerInput_get_IsHoldingLeftShift_mE14D9A584A88EDB50C5D93164B5272927F6BBF7D(L_12, NULL);
		NullCheck(L_11);
		ThirdPersonMovement_SetIsRunning_m5AD3B8466B6ECE622F8004C7DDD254A0FC3C023A_inline(L_11, L_13, NULL);
	}

IL_005d:
	{
		// UpdateAnimator();
		ThirdPersonController_UpdateAnimator_mB6E6A811F66C7622A5F742F0C1335C98FD95B94B(__this, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::UpdateAnimator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_UpdateAnimator_mB6E6A811F66C7622A5F742F0C1335C98FD95B94B (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var isGrounded = thirdPersonMovement.IsGrounded();
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_0 = __this->___thirdPersonMovement_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = ThirdPersonMovement_IsGrounded_m6AF64A40D8733B384C53DF27234B3774D4CB7469(L_0, NULL);
		V_0 = L_1;
		// animator.SetFloat(MoveSpeedHash, thirdPersonMovement.CurrentMoveSpeed);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_10;
		il2cpp_codegen_runtime_class_init_inline(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		int32_t L_3 = ((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___MoveSpeedHash_5;
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_4 = __this->___thirdPersonMovement_14;
		NullCheck(L_4);
		float L_5;
		L_5 = ThirdPersonMovement_get_CurrentMoveSpeed_m532FF9B2AE9D60DB17C48724C9FB9305F2A7E1D3_inline(L_4, NULL);
		NullCheck(L_2);
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_2, L_3, L_5, NULL);
		// animator.SetBool(IsGroundedHash, isGrounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_10;
		int32_t L_7 = ((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___IsGroundedHash_8;
		bool L_8 = V_0;
		NullCheck(L_6);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_6, L_7, L_8, NULL);
		// if (isGrounded)
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		// fallTimeoutDelta = FALL_TIMEOUT;
		__this->___fallTimeoutDelta_16 = (0.150000006f);
		// animator.SetBool(FreeFallHash, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_10;
		il2cpp_codegen_runtime_class_init_inline(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		int32_t L_11 = ((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___FreeFallHash_7;
		NullCheck(L_10);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_10, L_11, (bool)0, NULL);
		return;
	}

IL_0058:
	{
		// if (fallTimeoutDelta >= 0.0f)
		float L_12 = __this->___fallTimeoutDelta_16;
		if ((!(((float)L_12) >= ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		// fallTimeoutDelta -= Time.deltaTime;
		float L_13 = __this->___fallTimeoutDelta_16;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___fallTimeoutDelta_16 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		return;
	}

IL_0078:
	{
		// animator.SetBool(FreeFallHash, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___animator_10;
		il2cpp_codegen_runtime_class_init_inline(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		int32_t L_16 = ((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___FreeFallHash_7;
		NullCheck(L_15);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_15, L_16, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::OnJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_OnJump_m3F89B0385F6CD86D90FEB4B0E9A5D95D4A4360BE (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (thirdPersonMovement.TryJump())
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_0 = __this->___thirdPersonMovement_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = ThirdPersonMovement_TryJump_mD0CEA19B8ED7DCE616D3558BCBF3575CC3010270(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// animator.SetTrigger(JumpHash);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_10;
		il2cpp_codegen_runtime_class_init_inline(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		int32_t L_3 = ((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___JumpHash_6;
		NullCheck(L_2);
		Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939(L_2, L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController__ctor_mC9C7FDD560791D005FC064D9C340587F1882FD4F (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) 
{
	{
		// private bool inputEnabled = true;
		__this->___inputEnabled_17 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController__cctor_m7DA9FB285E72CA1BBCBFEF6397875DBD371954B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral518BBC396C162E73FB3893CF18F79DBF36E165B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA96601D79B410E78ED885E29D7A25794A833FD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int MoveSpeedHash = Animator.StringToHash("MoveSpeed");
		int32_t L_0;
		L_0 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982, NULL);
		((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___MoveSpeedHash_5 = L_0;
		// private static readonly int JumpHash = Animator.StringToHash("JumpTrigger");
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral518BBC396C162E73FB3893CF18F79DBF36E165B7, NULL);
		((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___JumpHash_6 = L_1;
		// private static readonly int FreeFallHash = Animator.StringToHash("FreeFall");
		int32_t L_2;
		L_2 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3, NULL);
		((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___FreeFallHash_7 = L_2;
		// private static readonly int IsGroundedHash = Animator.StringToHash("IsGrounded");
		int32_t L_3;
		L_3 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteralEA96601D79B410E78ED885E29D7A25794A833FD2, NULL);
		((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___IsGroundedHash_8 = L_3;
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
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_Start_mD406EA3516723D12612725CB725004173F57AE4E (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThirdPersonLoader_OnLoadCompleted_m4714CFBA3EDFA59DA815C95220553EBB2DE89160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThirdPersonLoader_OnLoadFailed_m3D28BF90D7C6FE48C624683DF5DD68C7A795214B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// avatarObjectLoader = new AvatarObjectLoader();
		AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* L_0 = (AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69*)il2cpp_codegen_object_new(AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AvatarObjectLoader__ctor_mAF29E478AD7B7A55BFFA4416F4F68F0AB2BA5B90(L_0, (bool)1, NULL);
		__this->___avatarObjectLoader_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatarObjectLoader_7), (void*)L_0);
		// avatarObjectLoader.OnCompleted += OnLoadCompleted;
		AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* L_1 = __this->___avatarObjectLoader_7;
		EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9* L_2 = (EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9*)il2cpp_codegen_object_new(EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler_1__ctor_m434453DC77C1B72FE1935254DD7AB140A09BF956(L_2, __this, (intptr_t)((void*)ThirdPersonLoader_OnLoadCompleted_m4714CFBA3EDFA59DA815C95220553EBB2DE89160_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AvatarObjectLoader_add_OnCompleted_mBA7FF229BA3DFFFA8ACD8FAC07B9985D45BA3D8D(L_1, L_2, NULL);
		// avatarObjectLoader.OnFailed += OnLoadFailed;
		AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* L_3 = __this->___avatarObjectLoader_7;
		EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A* L_4 = (EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A*)il2cpp_codegen_object_new(EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventHandler_1__ctor_m6BBDD641747A4C4E893A3A3A856AA2983FB943A2(L_4, __this, (intptr_t)((void*)ThirdPersonLoader_OnLoadFailed_m3D28BF90D7C6FE48C624683DF5DD68C7A795214B_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		AvatarObjectLoader_add_OnFailed_mBC2D17BC4C3D444D3A7515E08D15BFFA41734685(L_3, L_4, NULL);
		// if (previewAvatar != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___previewAvatar_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		// SetupAvatar(previewAvatar);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___previewAvatar_10;
		ThirdPersonLoader_SetupAvatar_m336406DB78CD318A8215BF2C9D6CD51445559AD1(__this, L_7, NULL);
	}

IL_0054:
	{
		// if (loadOnStart)
		bool L_8 = __this->___loadOnStart_9;
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		// LoadAvatar(avatarUrl);
		String_t* L_9 = __this->___avatarUrl_5;
		ThirdPersonLoader_LoadAvatar_mBC2C9AE956C0E428CD9F47349444D90C7BF10222(__this, L_9, NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::OnLoadFailed(System.Object,ReadyPlayerMe.AvatarLoader.FailureEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_OnLoadFailed_m3D28BF90D7C6FE48C624683DF5DD68C7A795214B (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, RuntimeObject* ___0_sender, FailureEventArgs_t2087FE370565AABC9CE48DD7810CF3E4757B571F* ___1_args, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::OnLoadCompleted(System.Object,ReadyPlayerMe.AvatarLoader.CompletionEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_OnLoadCompleted_m4714CFBA3EDFA59DA815C95220553EBB2DE89160 (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, RuntimeObject* ___0_sender, CompletionEventArgs_tBF4A5164C04020BEF9A73E33EA6A6EA73E9E297C* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (previewAvatar != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___previewAvatar_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Destroy(previewAvatar);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___previewAvatar_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// previewAvatar = null;
		__this->___previewAvatar_10 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previewAvatar_10), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_0020:
	{
		// SetupAvatar(args.Avatar);
		CompletionEventArgs_tBF4A5164C04020BEF9A73E33EA6A6EA73E9E297C* L_3 = ___1_args;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = CompletionEventArgs_get_Avatar_mD872C68004A3EE977C539011945268D61A9966EF_inline(L_3, NULL);
		ThirdPersonLoader_SetupAvatar_m336406DB78CD318A8215BF2C9D6CD51445559AD1(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::SetupAvatar(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_SetupAvatar_m336406DB78CD318A8215BF2C9D6CD51445559AD1 (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_targetAvatar, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_mB4628DB9A699A47DAA8B46549B7E18E9855256A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* V_0 = NULL;
	{
		// if (avatar != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___avatar_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(avatar);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___avatar_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		// avatar = targetAvatar;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_targetAvatar;
		__this->___avatar_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatar_6), (void*)L_3);
		// avatar.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___avatar_6;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_5, L_6, NULL);
		// avatar.transform.localPosition = avatarPositionOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___avatar_6;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___avatarPositionOffset_4;
		NullCheck(L_8);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_8, L_9, NULL);
		// avatar.transform.localRotation = Quaternion.Euler(0, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___avatar_6;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_11);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_11, L_12, NULL);
		// var controller = GetComponent<ThirdPersonController>();
		ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* L_13;
		L_13 = Component_GetComponent_TisThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_mB4628DB9A699A47DAA8B46549B7E18E9855256A6(__this, Component_GetComponent_TisThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_mB4628DB9A699A47DAA8B46549B7E18E9855256A6_RuntimeMethod_var);
		V_0 = L_13;
		// if (controller != null)
		ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		// controller.Setup(avatar, animatorController);
		ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* L_16 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___avatar_6;
		RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* L_18 = __this->___animatorController_8;
		NullCheck(L_16);
		ThirdPersonController_Setup_m436496E9BE83F1489C20A2336B763F9BDBB1F4F5(L_16, L_17, L_18, NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::LoadAvatar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_LoadAvatar_mBC2C9AE956C0E428CD9F47349444D90C7BF10222 (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	{
		// avatarUrl = url.Trim(' ');
		String_t* L_0 = ___0_url;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_mF5081365E55C31B636F8145F42AEF61868175A5A(L_0, ((int32_t)32), NULL);
		__this->___avatarUrl_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatarUrl_5), (void*)L_1);
		// avatarObjectLoader.LoadAvatar(avatarUrl);
		AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* L_2 = __this->___avatarObjectLoader_7;
		String_t* L_3 = __this->___avatarUrl_5;
		NullCheck(L_2);
		AvatarObjectLoader_LoadAvatar_m5EE260D9A70E45BFACCD0E45CA3F3EBE2D77C9DE(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader__ctor_m7399C1D224CEEF86A28AF1CE6877C9A745D99033 (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, const RuntimeMethod* method) 
{
	{
		// private readonly Vector3 avatarPositionOffset = new Vector3(0, -0.08f, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (-0.0799999982f), (0.0f), /*hidden argument*/NULL);
		__this->___avatarPositionOffset_4 = L_0;
		// private bool loadOnStart = true;
		__this->___loadOnStart_9 = (bool)1;
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
// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::get_CurrentMoveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonMovement_get_CurrentMoveSpeed_m532FF9B2AE9D60DB17C48724C9FB9305F2A7E1D3 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	{
		// public float CurrentMoveSpeed { get; private set; }
		float L_0 = __this->___U3CCurrentMoveSpeedU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::set_CurrentMoveSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_set_CurrentMoveSpeed_m13919F21BCB86E0864110BBDDC212DBAC3C2ADF4 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float CurrentMoveSpeed { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CCurrentMoveSpeedU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_Awake_mE6712B78ACD19D02A005374E9CE4447DB42F5B15 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m2EF5C398F98450FF07BD95E49F2CCC48B5C6698B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___controller_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_10), (void*)L_0);
		// groundCheck = GetComponent<GroundCheck>();
		GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* L_1;
		L_1 = Component_GetComponent_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m2EF5C398F98450FF07BD95E49F2CCC48B5C6698B(__this, Component_GetComponent_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m2EF5C398F98450FF07BD95E49F2CCC48B5C6698B_RuntimeMethod_var);
		__this->___groundCheck_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundCheck_17), (void*)L_1);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::Setup(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_Setup_m847528711F11312D8BDD37BFAC61C7456945033F (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// avatar = target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_target;
		__this->___avatar_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatar_11), (void*)L_0);
		// if (playerCamera == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___playerCamera_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// playerCamera = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		__this->___playerCamera_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerCamera_5), (void*)L_4);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_Move_mFF8325693B81201831555283D77AC080A2258144 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, float ___0_inputX, float ___1_inputY, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float G_B3_0 = 0.0f;
	ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* G_B5_0 = NULL;
	ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* G_B6_1 = NULL;
	{
		// var moveDirection = playerCamera.right * inputX + playerCamera.forward * inputY;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___playerCamera_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_0, NULL);
		float L_2 = ___0_inputX;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___playerCamera_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		float L_6 = ___1_inputY;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		V_0 = L_8;
		// var moveSpeed = isRunning ? runSpeed: walkSpeed;
		bool L_9 = __this->___isRunning_16;
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		float L_10 = __this->___walkSpeed_6;
		G_B3_0 = L_10;
		goto IL_003e;
	}

IL_0038:
	{
		float L_11 = __this->___runSpeed_7;
		G_B3_0 = L_11;
	}

IL_003e:
	{
		V_1 = G_B3_0;
		// JumpAndGravity();
		ThirdPersonMovement_JumpAndGravity_m623E845494E355A79958FFE6E818F12698072C0B(__this, NULL);
		// controller.Move(moveDirection.normalized * (moveSpeed * Time.deltaTime) +  new Vector3(0.0f, verticalVelocity * Time.deltaTime, 0.0f));
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_12 = __this->___controller_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_14 = V_1;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, ((float)il2cpp_codegen_multiply(L_14, L_15)), NULL);
		float L_17 = __this->___verticalVelocity_12;
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.0f), ((float)il2cpp_codegen_multiply(L_17, L_18)), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_19, NULL);
		NullCheck(L_12);
		int32_t L_21;
		L_21 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_12, L_20, NULL);
		// var moveMagnitude = moveDirection.magnitude;
		float L_22;
		L_22 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_2 = L_22;
		// CurrentMoveSpeed = isRunning ? runSpeed * moveMagnitude : walkSpeed * moveMagnitude;
		bool L_23 = __this->___isRunning_16;
		G_B4_0 = __this;
		if (L_23)
		{
			G_B5_0 = __this;
			goto IL_009f;
		}
	}
	{
		float L_24 = __this->___walkSpeed_6;
		float L_25 = V_2;
		G_B6_0 = ((float)il2cpp_codegen_multiply(L_24, L_25));
		G_B6_1 = G_B4_0;
		goto IL_00a7;
	}

IL_009f:
	{
		float L_26 = __this->___runSpeed_7;
		float L_27 = V_2;
		G_B6_0 = ((float)il2cpp_codegen_multiply(L_26, L_27));
		G_B6_1 = G_B5_0;
	}

IL_00a7:
	{
		NullCheck(G_B6_1);
		ThirdPersonMovement_set_CurrentMoveSpeed_m13919F21BCB86E0864110BBDDC212DBAC3C2ADF4_inline(G_B6_1, G_B6_0, NULL);
		// if (moveMagnitude > 0)
		float L_28 = V_2;
		if ((!(((float)L_28) > ((float)(0.0f)))))
		{
			goto IL_00bb;
		}
	}
	{
		// RotateAvatarTowardsMoveDirection(moveDirection);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		ThirdPersonMovement_RotateAvatarTowardsMoveDirection_m18D407BE1E9F95B2EC7B143DBEB70D961306AA5D(__this, L_29, NULL);
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::RotateAvatarTowardsMoveDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_RotateAvatarTowardsMoveDirection_m18D407BE1E9F95B2EC7B143DBEB70D961306AA5D (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_moveDirection, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float targetAngle = Mathf.Atan2(moveDirection.x, moveDirection.z) * Mathf.Rad2Deg + transform.rotation.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_moveDirection;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_moveDirection;
		float L_3 = L_2.___z_4;
		float L_4;
		L_4 = atan2f(L_1, L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, (57.2957802f))), L_7));
		// float angle = Mathf.SmoothDampAngle(avatar.transform.eulerAngles.y, targetAngle, ref turnSmoothVelocity, TURN_SMOOTH_TIME);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___avatar_11;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_9, NULL);
		float L_11 = L_10.___y_3;
		float L_12 = V_0;
		float* L_13 = (&__this->___turnSmoothVelocity_13);
		float L_14;
		L_14 = Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline(L_11, L_12, L_13, (0.0500000007f), NULL);
		V_1 = L_14;
		// avatar.transform.rotation = Quaternion.Euler(0, angle, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___avatar_11;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		float L_17 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_17, (0.0f), NULL);
		NullCheck(L_16);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_16, L_18, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_JumpAndGravity_m623E845494E355A79958FFE6E818F12698072C0B (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	{
		// if (controller.isGrounded && verticalVelocity< 0)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->___controller_10;
		NullCheck(L_0);
		bool L_1;
		L_1 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		float L_2 = __this->___verticalVelocity_12;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}
	{
		// verticalVelocity = -2f;
		__this->___verticalVelocity_12 = (-2.0f);
	}

IL_0025:
	{
		// if (jumpTrigger && controller.isGrounded)
		bool L_3 = __this->___jumpTrigger_14;
		if (!L_3)
		{
			goto IL_005f;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_4 = __this->___controller_10;
		NullCheck(L_4);
		bool L_5;
		L_5 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_4, NULL);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		// verticalVelocity = Mathf.Sqrt(jumpHeight * -2f * gravity);
		float L_6 = __this->___jumpHeight_9;
		float L_7 = __this->___gravity_8;
		float L_8;
		L_8 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, (-2.0f))), L_7)));
		__this->___verticalVelocity_12 = L_8;
		// jumpTrigger = false;
		__this->___jumpTrigger_14 = (bool)0;
	}

IL_005f:
	{
		// verticalVelocity += gravity * Time.deltaTime;
		float L_9 = __this->___verticalVelocity_12;
		float L_10 = __this->___gravity_8;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___verticalVelocity_12 = ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_10, L_11))));
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::SetIsRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_SetIsRunning_m5AD3B8466B6ECE622F8004C7DDD254A0FC3C023A (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, bool ___0_running, const RuntimeMethod* method) 
{
	{
		// isRunning = running;
		bool L_0 = ___0_running;
		__this->___isRunning_16 = L_0;
		// }
		return;
	}
}
// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonMovement::TryJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonMovement_TryJump_mD0CEA19B8ED7DCE616D3558BCBF3575CC3010270 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	{
		// jumpTrigger = false;
		__this->___jumpTrigger_14 = (bool)0;
		// if (controller.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->___controller_10;
		NullCheck(L_0);
		bool L_1;
		L_1 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// jumpTrigger = true;
		__this->___jumpTrigger_14 = (bool)1;
	}

IL_001b:
	{
		// return jumpTrigger;
		bool L_2 = __this->___jumpTrigger_14;
		return L_2;
	}
}
// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonMovement::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonMovement_IsGrounded_m6AF64A40D8733B384C53DF27234B3774D4CB7469 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	{
		// if (verticalVelocity > 0)
		float L_0 = __this->___verticalVelocity_12;
		if ((!(((float)L_0) > ((float)(0.0f)))))
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
		// return groundCheck.IsGrounded();
		GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* L_1 = __this->___groundCheck_17;
		NullCheck(L_1);
		bool L_2;
		L_2 = GroundCheck_IsGrounded_m2E68C51BBE946384E20897489ABD77DBBED161C0(L_1, NULL);
		return L_2;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement__ctor_mDAC301F25ED7472903F7B65D02F7FAA21ED6ABFB (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	{
		// private float walkSpeed = 3f;
		__this->___walkSpeed_6 = (3.0f);
		// private float runSpeed = 8f;
		__this->___runSpeed_7 = (8.0f);
		// private float gravity = -18f;
		__this->___gravity_8 = (-18.0f);
		// private float jumpHeight = 3f;
		__this->___jumpHeight_9 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___1_y;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_MouseAxisX_m517553D7755EC539C395A87345206359C719C74D_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisX { get; private set; }
		float L_0 = __this->___U3CMouseAxisXU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_MouseAxisY_m32B6331B6392DED8AF93AC744FDF868448C9C4E4_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisY { get; private set; }
		float L_0 = __this->___U3CMouseAxisYU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_current;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_AxisHorizontal_mA698E8B72185C79CA74B278BAB54FD01DD487689_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AxisHorizontal { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CAxisHorizontalU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_AxisVertical_mDD8FF9AB5F1BFE53C69766EAB27C45F80CFEA553_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AxisVertical { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CAxisVerticalU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_MouseAxisX_mFE9182A7A86366DD9BD4B83294FA2A0D12C7124C_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisX { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CMouseAxisXU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_MouseAxisY_mB28D735655CB89CB9201A8F1283FF76DD54B2EBA_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisY { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CMouseAxisYU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_AxisHorizontal_m1D5B395A4B8E6B7859495693589F6951715DC2B4_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float AxisHorizontal { get; private set; }
		float L_0 = __this->___U3CAxisHorizontalU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_AxisVertical_mCAB43AC24F874CE7348C141767F355EE3CA2D420_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float AxisVertical { get; private set; }
		float L_0 = __this->___U3CAxisVerticalU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThirdPersonMovement_SetIsRunning_m5AD3B8466B6ECE622F8004C7DDD254A0FC3C023A_inline (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, bool ___0_running, const RuntimeMethod* method) 
{
	{
		// isRunning = running;
		bool L_0 = ___0_running;
		__this->___isRunning_16 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ThirdPersonMovement_get_CurrentMoveSpeed_m532FF9B2AE9D60DB17C48724C9FB9305F2A7E1D3_inline (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	{
		// public float CurrentMoveSpeed { get; private set; }
		float L_0 = __this->___U3CCurrentMoveSpeedU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CompletionEventArgs_get_Avatar_mD872C68004A3EE977C539011945268D61A9966EF_inline (CompletionEventArgs_tBF4A5164C04020BEF9A73E33EA6A6EA73E9E297C* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Avatar { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CAvatarU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThirdPersonMovement_set_CurrentMoveSpeed_m13919F21BCB86E0864110BBDDC212DBAC3C2ADF4_inline (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float CurrentMoveSpeed { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CCurrentMoveSpeedU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_current;
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float L_3;
		L_3 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_1, L_2, NULL);
		___1_target = ((float)il2cpp_codegen_add(L_0, L_3));
		float L_4 = ___0_current;
		float L_5 = ___1_target;
		float* L_6 = ___2_currentVelocity;
		float L_7 = ___3_smoothTime;
		float L_8 = ___4_maxSpeed;
		float L_9 = ___5_deltaTime;
		float L_10;
		L_10 = Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		goto IL_001c;
	}

IL_001c:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___1_length;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___1_length;
		float L_5 = ___1_length;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
