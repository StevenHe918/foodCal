#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// CodeScanner
struct CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999;
// CodeScanner/Found
struct Found_t003674D0CB4578FB664098F1D8B65C1891A75D43;
// CodeScanner/Lost
struct Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D;
// CustomCodeEventHandler
struct CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE;
// DisResult
struct DisResult_tEC169A1064D8903E1212DC119DB2522B6315C4BD;
// Jump
struct Jump_tEC78086838D92297EFE022B32B18A9634CB6469A;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_tDCD056C5BBBE59ED6BAF63F25952B406C1143C27;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_t5905C7532C92A87F88C8F3440165DF8AA49A1BBF;
// PhoneCam
struct PhoneCam_t605B581A05BFAB96588CFACFFDA42F07E0ECDEB1;
// System.Action`1<System.IO.Stream>
struct Action_1_tC8BAB6C7B8E5508F10B3A5EF475B0FFAE7688621;
// System.Action`1<ZXing.Result>
struct Action_1_t5108B33C562E674BB3F5FAFAAE4E17FB93A64945;
// System.Action`1<ZXing.ResultPoint>
struct Action_1_t081E8CA7AF40C70B3325D64147B33CD2D4273C18;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.ArrayList
struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_tA8F38BC7E77FE817A46722395D32DA3761AB5119;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.Exception
struct Exception_t;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>
struct Func_2_t7C170F60F4203CBF661FFD5A579300D211DDC9A1;
// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource>
struct Func_4_tE3578C793C8BDAD6F29FEF007DB2BD825E3102CA;
// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource>
struct Func_5_t7E4F6CDD0D5E72ED7623FE7797AADAB59C7A4A3D;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.StreamReader
struct StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E;
// System.Net.CookieCollection
struct CookieCollection_t69ADF0ABD99419E54AB4740B341D94F443D995A3;
// System.Net.CookieContainer
struct CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t38DB016AD9C4FA9F4E9B4417278FB8D0594F37AC;
// System.Net.HttpWebRequest
struct HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0;
// System.Net.HttpWebResponse
struct HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951;
// System.Net.ICredentials
struct ICredentials_t1A41F1096B037CAB53AE01434DF0747881455344;
// System.Net.IWebProxy
struct IWebProxy_tA24C0862A1ACA35D20FD079E2672CA5786C1A67E;
// System.Net.ServerCertValidationCallback
struct ServerCertValidationCallback_t431E949AECAE20901007813737F5B26311F5F9FB;
// System.Net.ServicePoint
struct ServicePoint_t5F42B1A9D56E09B4B051BE0968C81DE3128E3EB4;
// System.Net.TimerThread/Queue
struct Queue_tCCFF6A2FCF584216AEDA04A483FB808E2D493643;
// System.Net.WebAsyncResult
struct WebAsyncResult_tF700444B9ABA86C7CADBFA7B99DEC52D9FBD87EE;
// System.Net.WebConnection
struct WebConnection_tEB76AEE17361D28CBAD4033026A71DA89289C243;
// System.Net.WebConnectionStream
struct WebConnectionStream_t537F33BF6D8999D67791D02F8E6DE6448F2A31FC;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB57EC4CD795CACE87271D6887BBED385DC37B304;
// System.Net.WebRequest
struct WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_t613DD91D4F07703DC65E847B367F4DCD5710E2A3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833;
// System.String
struct String_t;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Version
struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.UI.AspectRatioFitter
struct AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.InputField
struct InputField_t533609195B110760BCFF00B746C87D81969CB005;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RawImage
struct RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A;
// UnityEngine.WebCamTexture
struct WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73;
// WebCamController
struct WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172;
// ZXing.BarcodeReader
struct BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E;
// ZXing.BarcodeReaderGeneric`1<System.Object>
struct BarcodeReaderGeneric_1_tEB9934C6B5873957D7F23580EEAA6954C5C84F79;
// ZXing.BarcodeReaderGeneric`1<UnityEngine.Color32[]>
struct BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5;
// ZXing.Common.DecodingOptions
struct DecodingOptions_tFAAD9B5A72E0F56185C0EDAEA9863A0B220C93D8;
// ZXing.Reader
struct Reader_tA35A40F9C58D935041958EF9EEFEF13B355741D1;
// ZXing.Result
struct Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2;
// getSearch
struct getSearch_t129C5F2F43DE6A9F1065ABE8CF346CA369301242;

extern RuntimeClass* BarcodeFormat_tA58260A53F2244B790A1B829FC700C4CE0E4E963_il2cpp_TypeInfo_var;
extern RuntimeClass* BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E_il2cpp_TypeInfo_var;
extern RuntimeClass* Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var;
extern RuntimeClass* CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Found_t003674D0CB4578FB664098F1D8B65C1891A75D43_il2cpp_TypeInfo_var;
extern RuntimeClass* HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0_il2cpp_TypeInfo_var;
extern RuntimeClass* HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_il2cpp_TypeInfo_var;
extern RuntimeClass* WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral0FB2C372EDEFBECDC4788D82EBB9287218CC503D;
extern String_t* _stringLiteral103122D66792C369C8EB2304AD1222C1B27A6A67;
extern String_t* _stringLiteral26D4E90D279F192A7ED09B1ADAC8CEA46ED3517D;
extern String_t* _stringLiteral37F6F293220745B9AAFA387FFE6A62D7611AB160;
extern String_t* _stringLiteralC834CEB01F76F43C90FEF8F1575B2C33FB996606;
extern String_t* _stringLiteralD4CA407B55C66523C07600F652EEEF26F9DA7FCB;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralE7358BE5E284E32455D130576503D42CA814BFFF;
extern const RuntimeMethod* BarcodeReaderGeneric_1_Decode_mC022519E8243ACEF77CE29896FBC0A9F3FC284E2_RuntimeMethod_var;
extern const RuntimeMethod* CustomCodeEventHandler_OnCodeLost_m3FF063E761E536976AC5079CE6ED8D2C9A86843B_RuntimeMethod_var;
extern const RuntimeMethod* CustomCodeEventHandler_OnCodeScanned_mC735DCF5823E73308A66F91F0BFC5FC1ABA9B39D_RuntimeMethod_var;
extern const uint32_t CodeScanner_ReadCode_m2DBD394E62D60F1CCA108CD034D488A4117E426C_MetadataUsageId;
extern const uint32_t CodeScanner_Start_m80EF87F283E574BEB5D481B0919BB606DF9023C7_MetadataUsageId;
extern const uint32_t CodeScanner__ctor_m347843E1309A425E994D54FD3C8535B511A8FC9F_MetadataUsageId;
extern const uint32_t CodeScanner_add_OnCodeLost_m11F45D62B31767B275E35D304779ED3A5459D805_MetadataUsageId;
extern const uint32_t CodeScanner_add_OnCodeScanned_mC7B6211736E3FB5AD436749EAF753CA05E88D3AF_MetadataUsageId;
extern const uint32_t CodeScanner_remove_OnCodeLost_m4F8DD518E76140202458D3AFE6D12F82E1A78FEE_MetadataUsageId;
extern const uint32_t CodeScanner_remove_OnCodeScanned_m0D15BCD96B71AD5C8608ECD4ADCC222D4ACD4C90_MetadataUsageId;
extern const uint32_t CustomCodeEventHandler_Awake_m5BBEB8511CC31BC7E7F11CB964F98E908F197EDF_MetadataUsageId;
extern const uint32_t CustomCodeEventHandler_OnCodeLost_m3FF063E761E536976AC5079CE6ED8D2C9A86843B_MetadataUsageId;
extern const uint32_t CustomCodeEventHandler_OnCodeScanned_mC735DCF5823E73308A66F91F0BFC5FC1ABA9B39D_MetadataUsageId;
extern const uint32_t CustomCodeEventHandler_SearchAPI_m839D08C3CB7FEBE81A3D80B563AB88ECE2D25465_MetadataUsageId;
extern const uint32_t CustomCodeEventHandler__ctor_m24D93E0505F11693C5B42718C145AF191922D166_MetadataUsageId;
extern const uint32_t DisResult_Start_m04D5B77192D5EDE61556522D8371725703C1C775_MetadataUsageId;
extern const uint32_t PhoneCam_Start_mFE11157CA15A643B0C9CE7C8A098F7065755222F_MetadataUsageId;
extern const uint32_t WebCamController_Start_m4105194DE6EB92BAE3A74AFF9DFC2FB6C23502EF_MetadataUsageId;
struct Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 ;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A;


#ifndef U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#define U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#define MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};
#endif // MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef BARCODEREADERGENERIC_1_T652BB5E1C8B9957CCDC05CA634E0BC58819D44C5_H
#define BARCODEREADERGENERIC_1_T652BB5E1C8B9957CCDC05CA634E0BC58819D44C5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BarcodeReaderGeneric`1<UnityEngine.Color32[]>
struct  BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5  : public RuntimeObject
{
public:
	// ZXing.Reader ZXing.BarcodeReaderGeneric`1::reader
	RuntimeObject* ___reader_2;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric`1::createRGBLuminanceSource
	Func_5_t7E4F6CDD0D5E72ED7623FE7797AADAB59C7A4A3D * ___createRGBLuminanceSource_3;
	// System.Func`4<T,System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric`1::createLuminanceSource
	Func_4_tE3578C793C8BDAD6F29FEF007DB2BD825E3102CA * ___createLuminanceSource_4;
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric`1::createBinarizer
	Func_2_t7C170F60F4203CBF661FFD5A579300D211DDC9A1 * ___createBinarizer_5;
	// System.Boolean ZXing.BarcodeReaderGeneric`1::usePreviousState
	bool ___usePreviousState_6;
	// ZXing.Common.DecodingOptions ZXing.BarcodeReaderGeneric`1::options
	DecodingOptions_tFAAD9B5A72E0F56185C0EDAEA9863A0B220C93D8 * ___options_7;
	// System.Action`1<ZXing.ResultPoint> ZXing.BarcodeReaderGeneric`1::explicitResultPointFound
	Action_1_t081E8CA7AF40C70B3325D64147B33CD2D4273C18 * ___explicitResultPointFound_8;
	// System.Action`1<ZXing.Result> ZXing.BarcodeReaderGeneric`1::ResultFound
	Action_1_t5108B33C562E674BB3F5FAFAAE4E17FB93A64945 * ___ResultFound_9;
	// System.Boolean ZXing.BarcodeReaderGeneric`1::<AutoRotate>k__BackingField
	bool ___U3CAutoRotateU3Ek__BackingField_10;
	// System.Boolean ZXing.BarcodeReaderGeneric`1::<TryInverted>k__BackingField
	bool ___U3CTryInvertedU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_reader_2() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5, ___reader_2)); }
	inline RuntimeObject* get_reader_2() const { return ___reader_2; }
	inline RuntimeObject** get_address_of_reader_2() { return &___reader_2; }
	inline void set_reader_2(RuntimeObject* value)
	{
		___reader_2 = value;
		Il2CppCodeGenWriteBarrier((&___reader_2), value);
	}

	inline static int32_t get_offset_of_createRGBLuminanceSource_3() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5, ___createRGBLuminanceSource_3)); }
	inline Func_5_t7E4F6CDD0D5E72ED7623FE7797AADAB59C7A4A3D * get_createRGBLuminanceSource_3() const { return ___createRGBLuminanceSource_3; }
	inline Func_5_t7E4F6CDD0D5E72ED7623FE7797AADAB59C7A4A3D ** get_address_of_createRGBLuminanceSource_3() { return &___createRGBLuminanceSource_3; }
	inline void set_createRGBLuminanceSource_3(Func_5_t7E4F6CDD0D5E72ED7623FE7797AADAB59C7A4A3D * value)
	{
		___createRGBLuminanceSource_3 = value;
		Il2CppCodeGenWriteBarrier((&___createRGBLuminanceSource_3), value);
	}

	inline static int32_t get_offset_of_createLuminanceSource_4() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5, ___createLuminanceSource_4)); }
	inline Func_4_tE3578C793C8BDAD6F29FEF007DB2BD825E3102CA * get_createLuminanceSource_4() const { return ___createLuminanceSource_4; }
	inline Func_4_tE3578C793C8BDAD6F29FEF007DB2BD825E3102CA ** get_address_of_createLuminanceSource_4() { return &___createLuminanceSource_4; }
	inline void set_createLuminanceSource_4(Func_4_tE3578C793C8BDAD6F29FEF007DB2BD825E3102CA * value)
	{
		___createLuminanceSource_4 = value;
		Il2CppCodeGenWriteBarrier((&___createLuminanceSource_4), value);
	}

	inline static int32_t get_offset_of_createBinarizer_5() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5, ___createBinarizer_5)); }
	inline Func_2_t7C170F60F4203CBF661FFD5A579300D211DDC9A1 * get_createBinarizer_5() const { return ___createBinarizer_5; }
	inline Func_2_t7C170F60F4203CBF661FFD5A579300D211DDC9A1 ** get_address_of_createBinarizer_5() { return &___createBinarizer_5; }
	inline void set_createBinarizer_5(Func_2_t7C170F60F4203CBF661FFD5A579300D211DDC9A1 * value)
	{
		___createBinarizer_5 = value;
		Il2CppCodeGenWriteBarrier((&___createBinarizer_5), value);
	}

	inline static int32_t get_offset_of_usePreviousState_6() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5, ___usePreviousState_6)); }
	inline bool get_usePreviousState_6() const { return ___usePreviousState_6; }
	inline bool* get_address_of_usePreviousState_6() { return &___usePreviousState_6; }
	inline void set_usePreviousState_6(bool value)
	{
		___usePreviousState_6 = value;
	}

	inline static int32_t get_offset_of_options_7() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5, ___options_7)); }
	inline DecodingOptions_tFAAD9B5A72E0F56185C0EDAEA9863A0B220C93D8 * get_options_7() const { return ___options_7; }
	inline DecodingOptions_tFAAD9B5A72E0F56185C0EDAEA9863A0B220C93D8 ** get_address_of_options_7() { return &___options_7; }
	inline void set_options_7(DecodingOptions_tFAAD9B5A72E0F56185C0EDAEA9863A0B220C93D8 * value)
	{
		___options_7 = value;
		Il2CppCodeGenWriteBarrier((&___options_7), value);
	}

	inline static int32_t get_offset_of_explicitResultPointFound_8() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5, ___explicitResultPointFound_8)); }
	inline Action_1_t081E8CA7AF40C70B3325D64147B33CD2D4273C18 * get_explicitResultPointFound_8() const { return ___explicitResultPointFound_8; }
	inline Action_1_t081E8CA7AF40C70B3325D64147B33CD2D4273C18 ** get_address_of_explicitResultPointFound_8() { return &___explicitResultPointFound_8; }
	inline void set_explicitResultPointFound_8(Action_1_t081E8CA7AF40C70B3325D64147B33CD2D4273C18 * value)
	{
		___explicitResultPointFound_8 = value;
		Il2CppCodeGenWriteBarrier((&___explicitResultPointFound_8), value);
	}

	inline static int32_t get_offset_of_ResultFound_9() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5, ___ResultFound_9)); }
	inline Action_1_t5108B33C562E674BB3F5FAFAAE4E17FB93A64945 * get_ResultFound_9() const { return ___ResultFound_9; }
	inline Action_1_t5108B33C562E674BB3F5FAFAAE4E17FB93A64945 ** get_address_of_ResultFound_9() { return &___ResultFound_9; }
	inline void set_ResultFound_9(Action_1_t5108B33C562E674BB3F5FAFAAE4E17FB93A64945 * value)
	{
		___ResultFound_9 = value;
		Il2CppCodeGenWriteBarrier((&___ResultFound_9), value);
	}

	inline static int32_t get_offset_of_U3CAutoRotateU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5, ___U3CAutoRotateU3Ek__BackingField_10)); }
	inline bool get_U3CAutoRotateU3Ek__BackingField_10() const { return ___U3CAutoRotateU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CAutoRotateU3Ek__BackingField_10() { return &___U3CAutoRotateU3Ek__BackingField_10; }
	inline void set_U3CAutoRotateU3Ek__BackingField_10(bool value)
	{
		___U3CAutoRotateU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CTryInvertedU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5, ___U3CTryInvertedU3Ek__BackingField_11)); }
	inline bool get_U3CTryInvertedU3Ek__BackingField_11() const { return ___U3CTryInvertedU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CTryInvertedU3Ek__BackingField_11() { return &___U3CTryInvertedU3Ek__BackingField_11; }
	inline void set_U3CTryInvertedU3Ek__BackingField_11(bool value)
	{
		___U3CTryInvertedU3Ek__BackingField_11 = value;
	}
};

struct BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5_StaticFields
{
public:
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric`1::defaultCreateBinarizer
	Func_2_t7C170F60F4203CBF661FFD5A579300D211DDC9A1 * ___defaultCreateBinarizer_0;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric`1::defaultCreateRGBLuminanceSource
	Func_5_t7E4F6CDD0D5E72ED7623FE7797AADAB59C7A4A3D * ___defaultCreateRGBLuminanceSource_1;
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric`1::CS$<>9__CachedAnonymousMethodDelegate4
	Func_2_t7C170F60F4203CBF661FFD5A579300D211DDC9A1 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate4_12;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric`1::CS$<>9__CachedAnonymousMethodDelegate5
	Func_5_t7E4F6CDD0D5E72ED7623FE7797AADAB59C7A4A3D * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13;

public:
	inline static int32_t get_offset_of_defaultCreateBinarizer_0() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5_StaticFields, ___defaultCreateBinarizer_0)); }
	inline Func_2_t7C170F60F4203CBF661FFD5A579300D211DDC9A1 * get_defaultCreateBinarizer_0() const { return ___defaultCreateBinarizer_0; }
	inline Func_2_t7C170F60F4203CBF661FFD5A579300D211DDC9A1 ** get_address_of_defaultCreateBinarizer_0() { return &___defaultCreateBinarizer_0; }
	inline void set_defaultCreateBinarizer_0(Func_2_t7C170F60F4203CBF661FFD5A579300D211DDC9A1 * value)
	{
		___defaultCreateBinarizer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCreateBinarizer_0), value);
	}

	inline static int32_t get_offset_of_defaultCreateRGBLuminanceSource_1() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5_StaticFields, ___defaultCreateRGBLuminanceSource_1)); }
	inline Func_5_t7E4F6CDD0D5E72ED7623FE7797AADAB59C7A4A3D * get_defaultCreateRGBLuminanceSource_1() const { return ___defaultCreateRGBLuminanceSource_1; }
	inline Func_5_t7E4F6CDD0D5E72ED7623FE7797AADAB59C7A4A3D ** get_address_of_defaultCreateRGBLuminanceSource_1() { return &___defaultCreateRGBLuminanceSource_1; }
	inline void set_defaultCreateRGBLuminanceSource_1(Func_5_t7E4F6CDD0D5E72ED7623FE7797AADAB59C7A4A3D * value)
	{
		___defaultCreateRGBLuminanceSource_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCreateRGBLuminanceSource_1), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate4_12() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate4_12)); }
	inline Func_2_t7C170F60F4203CBF661FFD5A579300D211DDC9A1 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate4_12() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate4_12; }
	inline Func_2_t7C170F60F4203CBF661FFD5A579300D211DDC9A1 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate4_12() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate4_12; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate4_12(Func_2_t7C170F60F4203CBF661FFD5A579300D211DDC9A1 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate4_12 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate4_12), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13)); }
	inline Func_5_t7E4F6CDD0D5E72ED7623FE7797AADAB59C7A4A3D * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13; }
	inline Func_5_t7E4F6CDD0D5E72ED7623FE7797AADAB59C7A4A3D ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13(Func_5_t7E4F6CDD0D5E72ED7623FE7797AADAB59C7A4A3D * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BARCODEREADERGENERIC_1_T652BB5E1C8B9957CCDC05CA634E0BC58819D44C5_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#define STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#ifndef TEXTREADER_T7DF8314B601D202ECFEDF623093A87BFDAB58D0A_H
#define TEXTREADER_T7DF8314B601D202ECFEDF623093A87BFDAB58D0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&____ReadLineDelegate_1), value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____ReadDelegate_2), value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ___Null_3)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_Null_3() const { return ___Null_3; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((&___Null_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T7DF8314B601D202ECFEDF623093A87BFDAB58D0A_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef WEBRESPONSE_T5C91B5B83E2FBA2EABC6FDF2A70E9AFD9BB059BD_H
#define WEBRESPONSE_T5C91B5B83E2FBA2EABC6FDF2A70E9AFD9BB059BD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebResponse
struct  WebResponse_t5C91B5B83E2FBA2EABC6FDF2A70E9AFD9BB059BD  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRESPONSE_T5C91B5B83E2FBA2EABC6FDF2A70E9AFD9BB059BD_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#define COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifndef RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#define RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#ifndef BARCODEREADER_TB7781177B6B2124C98FF555D424C9E1EF604844E_H
#define BARCODEREADER_TB7781177B6B2124C98FF555D424C9E1EF604844E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BarcodeReader
struct  BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E  : public BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5
{
public:

public:
};

struct BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E_StaticFields
{
public:
	// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReader::defaultCreateLuminanceSource
	Func_4_tE3578C793C8BDAD6F29FEF007DB2BD825E3102CA * ___defaultCreateLuminanceSource_14;
	// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReader::CS$<>9__CachedAnonymousMethodDelegate1
	Func_4_tE3578C793C8BDAD6F29FEF007DB2BD825E3102CA * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_15;

public:
	inline static int32_t get_offset_of_defaultCreateLuminanceSource_14() { return static_cast<int32_t>(offsetof(BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E_StaticFields, ___defaultCreateLuminanceSource_14)); }
	inline Func_4_tE3578C793C8BDAD6F29FEF007DB2BD825E3102CA * get_defaultCreateLuminanceSource_14() const { return ___defaultCreateLuminanceSource_14; }
	inline Func_4_tE3578C793C8BDAD6F29FEF007DB2BD825E3102CA ** get_address_of_defaultCreateLuminanceSource_14() { return &___defaultCreateLuminanceSource_14; }
	inline void set_defaultCreateLuminanceSource_14(Func_4_tE3578C793C8BDAD6F29FEF007DB2BD825E3102CA * value)
	{
		___defaultCreateLuminanceSource_14 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCreateLuminanceSource_14), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_15() { return static_cast<int32_t>(offsetof(BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_15)); }
	inline Func_4_tE3578C793C8BDAD6F29FEF007DB2BD825E3102CA * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_15() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_15; }
	inline Func_4_tE3578C793C8BDAD6F29FEF007DB2BD825E3102CA ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_15() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_15; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_15(Func_4_tE3578C793C8BDAD6F29FEF007DB2BD825E3102CA * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_15 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BARCODEREADER_TB7781177B6B2124C98FF555D424C9E1EF604844E_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef STREAMREADER_T62E68063760DCD2FC036AE132DE69C24B7ED001E_H
#define STREAMREADER_T62E68063760DCD2FC036AE132DE69C24B7ED001E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E  : public TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___stream_5)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_5() const { return ___stream_5; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___stream_5), value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___encoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_6), value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___decoder_7)); }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_7), value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___byteBuffer_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuffer_8), value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charBuffer_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___charBuffer_9), value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____preamble_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((&____preamble_10), value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____asyncReadTask_20)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((&____asyncReadTask_20), value);
	}
};

struct StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_StaticFields, ___Null_4)); }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * get_Null_4() const { return ___Null_4; }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((&___Null_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADER_T62E68063760DCD2FC036AE132DE69C24B7ED001E_H
#ifndef DECOMPRESSIONMETHODS_T828950DA24A3D2B4A635E51125685CDB629ED51D_H
#define DECOMPRESSIONMETHODS_T828950DA24A3D2B4A635E51125685CDB629ED51D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DecompressionMethods
struct  DecompressionMethods_t828950DA24A3D2B4A635E51125685CDB629ED51D 
{
public:
	// System.Int32 System.Net.DecompressionMethods::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DecompressionMethods_t828950DA24A3D2B4A635E51125685CDB629ED51D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECOMPRESSIONMETHODS_T828950DA24A3D2B4A635E51125685CDB629ED51D_H
#ifndef HTTPSTATUSCODE_TEEC31491D56EE5BDB252F07906878274FD22AC0C_H
#define HTTPSTATUSCODE_TEEC31491D56EE5BDB252F07906878274FD22AC0C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpStatusCode
struct  HttpStatusCode_tEEC31491D56EE5BDB252F07906878274FD22AC0C 
{
public:
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpStatusCode_tEEC31491D56EE5BDB252F07906878274FD22AC0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPSTATUSCODE_TEEC31491D56EE5BDB252F07906878274FD22AC0C_H
#ifndef NTLMAUTHSTATE_TF501EE09345DFAE6FD7B4D8EBBE77292514DFA83_H
#define NTLMAUTHSTATE_TF501EE09345DFAE6FD7B4D8EBBE77292514DFA83_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebRequest/NtlmAuthState
struct  NtlmAuthState_tF501EE09345DFAE6FD7B4D8EBBE77292514DFA83 
{
public:
	// System.Int32 System.Net.HttpWebRequest/NtlmAuthState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NtlmAuthState_tF501EE09345DFAE6FD7B4D8EBBE77292514DFA83, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NTLMAUTHSTATE_TF501EE09345DFAE6FD7B4D8EBBE77292514DFA83_H
#ifndef AUTHENTICATIONLEVEL_TC0FE8B3A1A9C4F39798DD6F6C024078BB137F52B_H
#define AUTHENTICATIONLEVEL_TC0FE8B3A1A9C4F39798DD6F6C024078BB137F52B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_tC0FE8B3A1A9C4F39798DD6F6C024078BB137F52B 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthenticationLevel_tC0FE8B3A1A9C4F39798DD6F6C024078BB137F52B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONLEVEL_TC0FE8B3A1A9C4F39798DD6F6C024078BB137F52B_H
#ifndef TOKENIMPERSONATIONLEVEL_TED478ED25688E978F79556E1A2335F7262023D26_H
#define TOKENIMPERSONATIONLEVEL_TED478ED25688E978F79556E1A2335F7262023D26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.TokenImpersonationLevel
struct  TokenImpersonationLevel_tED478ED25688E978F79556E1A2335F7262023D26 
{
public:
	// System.Int32 System.Security.Principal.TokenImpersonationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenImpersonationLevel_tED478ED25688E978F79556E1A2335F7262023D26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKENIMPERSONATIONLEVEL_TED478ED25688E978F79556E1A2335F7262023D26_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef WEBCAMKIND_T658D67B14A1B37DCF51FF51D4ACE4CC3ADB7C33E_H
#define WEBCAMKIND_T658D67B14A1B37DCF51FF51D4ACE4CC3ADB7C33E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamKind
struct  WebCamKind_t658D67B14A1B37DCF51FF51D4ACE4CC3ADB7C33E 
{
public:
	// System.Int32 UnityEngine.WebCamKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebCamKind_t658D67B14A1B37DCF51FF51D4ACE4CC3ADB7C33E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMKIND_T658D67B14A1B37DCF51FF51D4ACE4CC3ADB7C33E_H
#ifndef BARCODEFORMAT_TA58260A53F2244B790A1B829FC700C4CE0E4E963_H
#define BARCODEFORMAT_TA58260A53F2244B790A1B829FC700C4CE0E4E963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BarcodeFormat
struct  BarcodeFormat_tA58260A53F2244B790A1B829FC700C4CE0E4E963 
{
public:
	// System.Int32 ZXing.BarcodeFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BarcodeFormat_tA58260A53F2244B790A1B829FC700C4CE0E4E963, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BARCODEFORMAT_TA58260A53F2244B790A1B829FC700C4CE0E4E963_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef AUTHORIZATIONSTATE_T5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_H
#define AUTHORIZATIONSTATE_T5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebRequest/AuthorizationState
struct  AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB 
{
public:
	// System.Net.HttpWebRequest System.Net.HttpWebRequest/AuthorizationState::request
	HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0 * ___request_0;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isProxy
	bool ___isProxy_1;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isCompleted
	bool ___isCompleted_2;
	// System.Net.HttpWebRequest/NtlmAuthState System.Net.HttpWebRequest/AuthorizationState::ntlm_auth_state
	int32_t ___ntlm_auth_state_3;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB, ___request_0)); }
	inline HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0 * get_request_0() const { return ___request_0; }
	inline HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier((&___request_0), value);
	}

	inline static int32_t get_offset_of_isProxy_1() { return static_cast<int32_t>(offsetof(AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB, ___isProxy_1)); }
	inline bool get_isProxy_1() const { return ___isProxy_1; }
	inline bool* get_address_of_isProxy_1() { return &___isProxy_1; }
	inline void set_isProxy_1(bool value)
	{
		___isProxy_1 = value;
	}

	inline static int32_t get_offset_of_isCompleted_2() { return static_cast<int32_t>(offsetof(AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB, ___isCompleted_2)); }
	inline bool get_isCompleted_2() const { return ___isCompleted_2; }
	inline bool* get_address_of_isCompleted_2() { return &___isCompleted_2; }
	inline void set_isCompleted_2(bool value)
	{
		___isCompleted_2 = value;
	}

	inline static int32_t get_offset_of_ntlm_auth_state_3() { return static_cast<int32_t>(offsetof(AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB, ___ntlm_auth_state_3)); }
	inline int32_t get_ntlm_auth_state_3() const { return ___ntlm_auth_state_3; }
	inline int32_t* get_address_of_ntlm_auth_state_3() { return &___ntlm_auth_state_3; }
	inline void set_ntlm_auth_state_3(int32_t value)
	{
		___ntlm_auth_state_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshaled_pinvoke
{
	HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0 * ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};
// Native definition for COM marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshaled_com
{
	HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0 * ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};
#endif // AUTHORIZATIONSTATE_T5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_H
#ifndef HTTPWEBRESPONSE_T34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951_H
#define HTTPWEBRESPONSE_T34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebResponse
struct  HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951  : public WebResponse_t5C91B5B83E2FBA2EABC6FDF2A70E9AFD9BB059BD
{
public:
	// System.Uri System.Net.HttpWebResponse::uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri_1;
	// System.Net.WebHeaderCollection System.Net.HttpWebResponse::webHeaders
	WebHeaderCollection_tB57EC4CD795CACE87271D6887BBED385DC37B304 * ___webHeaders_2;
	// System.Net.CookieCollection System.Net.HttpWebResponse::cookieCollection
	CookieCollection_t69ADF0ABD99419E54AB4740B341D94F443D995A3 * ___cookieCollection_3;
	// System.String System.Net.HttpWebResponse::method
	String_t* ___method_4;
	// System.Version System.Net.HttpWebResponse::version
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_5;
	// System.Net.HttpStatusCode System.Net.HttpWebResponse::statusCode
	int32_t ___statusCode_6;
	// System.String System.Net.HttpWebResponse::statusDescription
	String_t* ___statusDescription_7;
	// System.Int64 System.Net.HttpWebResponse::contentLength
	int64_t ___contentLength_8;
	// System.String System.Net.HttpWebResponse::contentType
	String_t* ___contentType_9;
	// System.Net.CookieContainer System.Net.HttpWebResponse::cookie_container
	CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 * ___cookie_container_10;
	// System.Boolean System.Net.HttpWebResponse::disposed
	bool ___disposed_11;
	// System.IO.Stream System.Net.HttpWebResponse::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_12;

public:
	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951, ___uri_1)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_uri_1() const { return ___uri_1; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((&___uri_1), value);
	}

	inline static int32_t get_offset_of_webHeaders_2() { return static_cast<int32_t>(offsetof(HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951, ___webHeaders_2)); }
	inline WebHeaderCollection_tB57EC4CD795CACE87271D6887BBED385DC37B304 * get_webHeaders_2() const { return ___webHeaders_2; }
	inline WebHeaderCollection_tB57EC4CD795CACE87271D6887BBED385DC37B304 ** get_address_of_webHeaders_2() { return &___webHeaders_2; }
	inline void set_webHeaders_2(WebHeaderCollection_tB57EC4CD795CACE87271D6887BBED385DC37B304 * value)
	{
		___webHeaders_2 = value;
		Il2CppCodeGenWriteBarrier((&___webHeaders_2), value);
	}

	inline static int32_t get_offset_of_cookieCollection_3() { return static_cast<int32_t>(offsetof(HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951, ___cookieCollection_3)); }
	inline CookieCollection_t69ADF0ABD99419E54AB4740B341D94F443D995A3 * get_cookieCollection_3() const { return ___cookieCollection_3; }
	inline CookieCollection_t69ADF0ABD99419E54AB4740B341D94F443D995A3 ** get_address_of_cookieCollection_3() { return &___cookieCollection_3; }
	inline void set_cookieCollection_3(CookieCollection_t69ADF0ABD99419E54AB4740B341D94F443D995A3 * value)
	{
		___cookieCollection_3 = value;
		Il2CppCodeGenWriteBarrier((&___cookieCollection_3), value);
	}

	inline static int32_t get_offset_of_method_4() { return static_cast<int32_t>(offsetof(HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951, ___method_4)); }
	inline String_t* get_method_4() const { return ___method_4; }
	inline String_t** get_address_of_method_4() { return &___method_4; }
	inline void set_method_4(String_t* value)
	{
		___method_4 = value;
		Il2CppCodeGenWriteBarrier((&___method_4), value);
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951, ___version_5)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_version_5() const { return ___version_5; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___version_5 = value;
		Il2CppCodeGenWriteBarrier((&___version_5), value);
	}

	inline static int32_t get_offset_of_statusCode_6() { return static_cast<int32_t>(offsetof(HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951, ___statusCode_6)); }
	inline int32_t get_statusCode_6() const { return ___statusCode_6; }
	inline int32_t* get_address_of_statusCode_6() { return &___statusCode_6; }
	inline void set_statusCode_6(int32_t value)
	{
		___statusCode_6 = value;
	}

	inline static int32_t get_offset_of_statusDescription_7() { return static_cast<int32_t>(offsetof(HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951, ___statusDescription_7)); }
	inline String_t* get_statusDescription_7() const { return ___statusDescription_7; }
	inline String_t** get_address_of_statusDescription_7() { return &___statusDescription_7; }
	inline void set_statusDescription_7(String_t* value)
	{
		___statusDescription_7 = value;
		Il2CppCodeGenWriteBarrier((&___statusDescription_7), value);
	}

	inline static int32_t get_offset_of_contentLength_8() { return static_cast<int32_t>(offsetof(HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951, ___contentLength_8)); }
	inline int64_t get_contentLength_8() const { return ___contentLength_8; }
	inline int64_t* get_address_of_contentLength_8() { return &___contentLength_8; }
	inline void set_contentLength_8(int64_t value)
	{
		___contentLength_8 = value;
	}

	inline static int32_t get_offset_of_contentType_9() { return static_cast<int32_t>(offsetof(HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951, ___contentType_9)); }
	inline String_t* get_contentType_9() const { return ___contentType_9; }
	inline String_t** get_address_of_contentType_9() { return &___contentType_9; }
	inline void set_contentType_9(String_t* value)
	{
		___contentType_9 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_9), value);
	}

	inline static int32_t get_offset_of_cookie_container_10() { return static_cast<int32_t>(offsetof(HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951, ___cookie_container_10)); }
	inline CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 * get_cookie_container_10() const { return ___cookie_container_10; }
	inline CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 ** get_address_of_cookie_container_10() { return &___cookie_container_10; }
	inline void set_cookie_container_10(CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 * value)
	{
		___cookie_container_10 = value;
		Il2CppCodeGenWriteBarrier((&___cookie_container_10), value);
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}

	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951, ___stream_12)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_12() const { return ___stream_12; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((&___stream_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPWEBRESPONSE_T34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951_H
#ifndef WEBREQUEST_T5668DA48802E9FE2F1DE5F5A770B218608B918C8_H
#define WEBREQUEST_T5668DA48802E9FE2F1DE5F5A770B218608B918C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::m_AuthenticationLevel
	int32_t ___m_AuthenticationLevel_4;
	// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::m_ImpersonationLevel
	int32_t ___m_ImpersonationLevel_5;

public:
	inline static int32_t get_offset_of_m_AuthenticationLevel_4() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8, ___m_AuthenticationLevel_4)); }
	inline int32_t get_m_AuthenticationLevel_4() const { return ___m_AuthenticationLevel_4; }
	inline int32_t* get_address_of_m_AuthenticationLevel_4() { return &___m_AuthenticationLevel_4; }
	inline void set_m_AuthenticationLevel_4(int32_t value)
	{
		___m_AuthenticationLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_ImpersonationLevel_5() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8, ___m_ImpersonationLevel_5)); }
	inline int32_t get_m_ImpersonationLevel_5() const { return ___m_ImpersonationLevel_5; }
	inline int32_t* get_address_of_m_ImpersonationLevel_5() { return &___m_ImpersonationLevel_5; }
	inline void set_m_ImpersonationLevel_5(int32_t value)
	{
		___m_ImpersonationLevel_5 = value;
	}
};

struct WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields
{
public:
	// System.Collections.ArrayList modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_PrefixList
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___s_PrefixList_1;
	// System.Object System.Net.WebRequest::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_2;
	// System.Net.TimerThread/Queue System.Net.WebRequest::s_DefaultTimerQueue
	Queue_tCCFF6A2FCF584216AEDA04A483FB808E2D493643 * ___s_DefaultTimerQueue_3;
	// System.Net.WebRequest/DesignerWebRequestCreate System.Net.WebRequest::webRequestCreate
	DesignerWebRequestCreate_t613DD91D4F07703DC65E847B367F4DCD5710E2A3 * ___webRequestCreate_6;
	// System.Net.IWebProxy modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxy
	RuntimeObject* ___s_DefaultWebProxy_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxyInitialized
	bool ___s_DefaultWebProxyInitialized_8;

public:
	inline static int32_t get_offset_of_s_PrefixList_1() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields, ___s_PrefixList_1)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_s_PrefixList_1() const { return ___s_PrefixList_1; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_s_PrefixList_1() { return &___s_PrefixList_1; }
	inline void set_s_PrefixList_1(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___s_PrefixList_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_PrefixList_1), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_2() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields, ___s_InternalSyncObject_2)); }
	inline RuntimeObject * get_s_InternalSyncObject_2() const { return ___s_InternalSyncObject_2; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_2() { return &___s_InternalSyncObject_2; }
	inline void set_s_InternalSyncObject_2(RuntimeObject * value)
	{
		___s_InternalSyncObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultTimerQueue_3() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields, ___s_DefaultTimerQueue_3)); }
	inline Queue_tCCFF6A2FCF584216AEDA04A483FB808E2D493643 * get_s_DefaultTimerQueue_3() const { return ___s_DefaultTimerQueue_3; }
	inline Queue_tCCFF6A2FCF584216AEDA04A483FB808E2D493643 ** get_address_of_s_DefaultTimerQueue_3() { return &___s_DefaultTimerQueue_3; }
	inline void set_s_DefaultTimerQueue_3(Queue_tCCFF6A2FCF584216AEDA04A483FB808E2D493643 * value)
	{
		___s_DefaultTimerQueue_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultTimerQueue_3), value);
	}

	inline static int32_t get_offset_of_webRequestCreate_6() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields, ___webRequestCreate_6)); }
	inline DesignerWebRequestCreate_t613DD91D4F07703DC65E847B367F4DCD5710E2A3 * get_webRequestCreate_6() const { return ___webRequestCreate_6; }
	inline DesignerWebRequestCreate_t613DD91D4F07703DC65E847B367F4DCD5710E2A3 ** get_address_of_webRequestCreate_6() { return &___webRequestCreate_6; }
	inline void set_webRequestCreate_6(DesignerWebRequestCreate_t613DD91D4F07703DC65E847B367F4DCD5710E2A3 * value)
	{
		___webRequestCreate_6 = value;
		Il2CppCodeGenWriteBarrier((&___webRequestCreate_6), value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxy_7() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields, ___s_DefaultWebProxy_7)); }
	inline RuntimeObject* get_s_DefaultWebProxy_7() const { return ___s_DefaultWebProxy_7; }
	inline RuntimeObject** get_address_of_s_DefaultWebProxy_7() { return &___s_DefaultWebProxy_7; }
	inline void set_s_DefaultWebProxy_7(RuntimeObject* value)
	{
		___s_DefaultWebProxy_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultWebProxy_7), value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxyInitialized_8() { return static_cast<int32_t>(offsetof(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_StaticFields, ___s_DefaultWebProxyInitialized_8)); }
	inline bool get_s_DefaultWebProxyInitialized_8() const { return ___s_DefaultWebProxyInitialized_8; }
	inline bool* get_address_of_s_DefaultWebProxyInitialized_8() { return &___s_DefaultWebProxyInitialized_8; }
	inline void set_s_DefaultWebProxyInitialized_8(bool value)
	{
		___s_DefaultWebProxyInitialized_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUEST_T5668DA48802E9FE2F1DE5F5A770B218608B918C8_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#define TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifndef WEBCAMDEVICE_TA545BEDFAFD78866911F4837B8406845541B8F54_H
#define WEBCAMDEVICE_TA545BEDFAFD78866911F4837B8406845541B8F54_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamDevice
struct  WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.WebCamDevice::m_DepthCameraName
	String_t* ___m_DepthCameraName_1;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_2;
	// UnityEngine.WebCamKind UnityEngine.WebCamDevice::m_Kind
	int32_t ___m_Kind_3;
	// UnityEngine.Resolution[] UnityEngine.WebCamDevice::m_Resolutions
	ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A* ___m_Resolutions_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_DepthCameraName_1() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_DepthCameraName_1)); }
	inline String_t* get_m_DepthCameraName_1() const { return ___m_DepthCameraName_1; }
	inline String_t** get_address_of_m_DepthCameraName_1() { return &___m_DepthCameraName_1; }
	inline void set_m_DepthCameraName_1(String_t* value)
	{
		___m_DepthCameraName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DepthCameraName_1), value);
	}

	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_Kind_3() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_Kind_3)); }
	inline int32_t get_m_Kind_3() const { return ___m_Kind_3; }
	inline int32_t* get_address_of_m_Kind_3() { return &___m_Kind_3; }
	inline void set_m_Kind_3(int32_t value)
	{
		___m_Kind_3 = value;
	}

	inline static int32_t get_offset_of_m_Resolutions_4() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_Resolutions_4)); }
	inline ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A* get_m_Resolutions_4() const { return ___m_Resolutions_4; }
	inline ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A** get_address_of_m_Resolutions_4() { return &___m_Resolutions_4; }
	inline void set_m_Resolutions_4(ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A* value)
	{
		___m_Resolutions_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Resolutions_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 * ___m_Resolutions_4;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 * ___m_Resolutions_4;
};
#endif // WEBCAMDEVICE_TA545BEDFAFD78866911F4837B8406845541B8F54_H
#ifndef RESULT_TB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2_H
#define RESULT_TB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Result
struct  Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2  : public RuntimeObject
{
public:
	// System.String ZXing.Result::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// ZXing.BarcodeFormat ZXing.Result::<BarcodeFormat>k__BackingField
	int32_t ___U3CBarcodeFormatU3Ek__BackingField_1;
	// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::<ResultMetadata>k__BackingField
	RuntimeObject* ___U3CResultMetadataU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2, ___U3CTextU3Ek__BackingField_0)); }
	inline String_t* get_U3CTextU3Ek__BackingField_0() const { return ___U3CTextU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_0() { return &___U3CTextU3Ek__BackingField_0; }
	inline void set_U3CTextU3Ek__BackingField_0(String_t* value)
	{
		___U3CTextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CBarcodeFormatU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2, ___U3CBarcodeFormatU3Ek__BackingField_1)); }
	inline int32_t get_U3CBarcodeFormatU3Ek__BackingField_1() const { return ___U3CBarcodeFormatU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CBarcodeFormatU3Ek__BackingField_1() { return &___U3CBarcodeFormatU3Ek__BackingField_1; }
	inline void set_U3CBarcodeFormatU3Ek__BackingField_1(int32_t value)
	{
		___U3CBarcodeFormatU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CResultMetadataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2, ___U3CResultMetadataU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CResultMetadataU3Ek__BackingField_2() const { return ___U3CResultMetadataU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CResultMetadataU3Ek__BackingField_2() { return &___U3CResultMetadataU3Ek__BackingField_2; }
	inline void set_U3CResultMetadataU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CResultMetadataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultMetadataU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULT_TB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2_H
#ifndef FOUND_T003674D0CB4578FB664098F1D8B65C1891A75D43_H
#define FOUND_T003674D0CB4578FB664098F1D8B65C1891A75D43_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CodeScanner/Found
struct  Found_t003674D0CB4578FB664098F1D8B65C1891A75D43  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOUND_T003674D0CB4578FB664098F1D8B65C1891A75D43_H
#ifndef LOST_TEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D_H
#define LOST_TEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CodeScanner/Lost
struct  Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOST_TEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef HTTPWEBREQUEST_T5B5BFA163B5AD6134620F315940CE3631D7FAAE0_H
#define HTTPWEBREQUEST_T5B5BFA163B5AD6134620F315940CE3631D7FAAE0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebRequest
struct  HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0  : public WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8
{
public:
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___requestUri_9;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___actualUri_10;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_11;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_12;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_13;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833 * ___certificates_14;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_15;
	// System.Boolean System.Net.HttpWebRequest::haveContentLength
	bool ___haveContentLength_16;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_17;
	// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::continueDelegate
	HttpContinueDelegate_t38DB016AD9C4FA9F4E9B4417278FB8D0594F37AC * ___continueDelegate_18;
	// System.Net.CookieContainer System.Net.HttpWebRequest::cookieContainer
	CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 * ___cookieContainer_19;
	// System.Net.ICredentials System.Net.HttpWebRequest::credentials
	RuntimeObject* ___credentials_20;
	// System.Boolean System.Net.HttpWebRequest::haveResponse
	bool ___haveResponse_21;
	// System.Boolean System.Net.HttpWebRequest::haveRequest
	bool ___haveRequest_22;
	// System.Boolean System.Net.HttpWebRequest::requestSent
	bool ___requestSent_23;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_tB57EC4CD795CACE87271D6887BBED385DC37B304 * ___webHeaders_24;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_25;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_26;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_27;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_28;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_29;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_30;
	// System.Boolean System.Net.HttpWebRequest::preAuthenticate
	bool ___preAuthenticate_31;
	// System.Boolean System.Net.HttpWebRequest::usedPreAuth
	bool ___usedPreAuth_32;
	// System.Version System.Net.HttpWebRequest::version
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_33;
	// System.Boolean System.Net.HttpWebRequest::force_version
	bool ___force_version_34;
	// System.Version System.Net.HttpWebRequest::actualVersion
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___actualVersion_35;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	RuntimeObject* ___proxy_36;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_37;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t5F42B1A9D56E09B4B051BE0968C81DE3128E3EB4 * ___servicePoint_38;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_39;
	// System.Net.WebConnectionStream System.Net.HttpWebRequest::writeStream
	WebConnectionStream_t537F33BF6D8999D67791D02F8E6DE6448F2A31FC * ___writeStream_40;
	// System.Net.HttpWebResponse System.Net.HttpWebRequest::webResponse
	HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951 * ___webResponse_41;
	// System.Net.WebAsyncResult System.Net.HttpWebRequest::asyncWrite
	WebAsyncResult_tF700444B9ABA86C7CADBFA7B99DEC52D9FBD87EE * ___asyncWrite_42;
	// System.Net.WebAsyncResult System.Net.HttpWebRequest::asyncRead
	WebAsyncResult_tF700444B9ABA86C7CADBFA7B99DEC52D9FBD87EE * ___asyncRead_43;
	// System.EventHandler System.Net.HttpWebRequest::abortHandler
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___abortHandler_44;
	// System.Int32 System.Net.HttpWebRequest::aborted
	int32_t ___aborted_45;
	// System.Boolean System.Net.HttpWebRequest::gotRequestStream
	bool ___gotRequestStream_46;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_47;
	// System.Boolean System.Net.HttpWebRequest::expectContinue
	bool ___expectContinue_48;
	// System.Byte[] System.Net.HttpWebRequest::bodyBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bodyBuffer_49;
	// System.Int32 System.Net.HttpWebRequest::bodyBufferLength
	int32_t ___bodyBufferLength_50;
	// System.Boolean System.Net.HttpWebRequest::getResponseCalled
	bool ___getResponseCalled_51;
	// System.Exception System.Net.HttpWebRequest::saved_exc
	Exception_t * ___saved_exc_52;
	// System.Object System.Net.HttpWebRequest::locker
	RuntimeObject * ___locker_53;
	// System.Boolean System.Net.HttpWebRequest::finished_reading
	bool ___finished_reading_54;
	// System.Net.WebConnection System.Net.HttpWebRequest::WebConnection
	WebConnection_tEB76AEE17361D28CBAD4033026A71DA89289C243 * ___WebConnection_55;
	// System.Net.DecompressionMethods System.Net.HttpWebRequest::auto_decomp
	int32_t ___auto_decomp_56;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_58;
	// Mono.Security.Interface.MonoTlsProvider System.Net.HttpWebRequest::tlsProvider
	MonoTlsProvider_tDCD056C5BBBE59ED6BAF63F25952B406C1143C27 * ___tlsProvider_59;
	// Mono.Security.Interface.MonoTlsSettings System.Net.HttpWebRequest::tlsSettings
	MonoTlsSettings_t5905C7532C92A87F88C8F3440165DF8AA49A1BBF * ___tlsSettings_60;
	// System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::certValidationCallback
	ServerCertValidationCallback_t431E949AECAE20901007813737F5B26311F5F9FB * ___certValidationCallback_61;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::auth_state
	AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB  ___auth_state_62;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::proxy_auth_state
	AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB  ___proxy_auth_state_63;
	// System.String System.Net.HttpWebRequest::host
	String_t* ___host_64;
	// System.Action`1<System.IO.Stream> System.Net.HttpWebRequest::ResendContentFactory
	Action_1_tC8BAB6C7B8E5508F10B3A5EF475B0FFAE7688621 * ___ResendContentFactory_65;
	// System.Boolean System.Net.HttpWebRequest::<ThrowOnError>k__BackingField
	bool ___U3CThrowOnErrorU3Ek__BackingField_66;
	// System.Boolean System.Net.HttpWebRequest::unsafe_auth_blah
	bool ___unsafe_auth_blah_67;
	// System.Boolean System.Net.HttpWebRequest::<ReuseConnection>k__BackingField
	bool ___U3CReuseConnectionU3Ek__BackingField_68;
	// System.Net.WebConnection System.Net.HttpWebRequest::StoredConnection
	WebConnection_tEB76AEE17361D28CBAD4033026A71DA89289C243 * ___StoredConnection_69;

public:
	inline static int32_t get_offset_of_requestUri_9() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___requestUri_9)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_requestUri_9() const { return ___requestUri_9; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_requestUri_9() { return &___requestUri_9; }
	inline void set_requestUri_9(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___requestUri_9 = value;
		Il2CppCodeGenWriteBarrier((&___requestUri_9), value);
	}

	inline static int32_t get_offset_of_actualUri_10() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___actualUri_10)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_actualUri_10() const { return ___actualUri_10; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_actualUri_10() { return &___actualUri_10; }
	inline void set_actualUri_10(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___actualUri_10 = value;
		Il2CppCodeGenWriteBarrier((&___actualUri_10), value);
	}

	inline static int32_t get_offset_of_hostChanged_11() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___hostChanged_11)); }
	inline bool get_hostChanged_11() const { return ___hostChanged_11; }
	inline bool* get_address_of_hostChanged_11() { return &___hostChanged_11; }
	inline void set_hostChanged_11(bool value)
	{
		___hostChanged_11 = value;
	}

	inline static int32_t get_offset_of_allowAutoRedirect_12() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___allowAutoRedirect_12)); }
	inline bool get_allowAutoRedirect_12() const { return ___allowAutoRedirect_12; }
	inline bool* get_address_of_allowAutoRedirect_12() { return &___allowAutoRedirect_12; }
	inline void set_allowAutoRedirect_12(bool value)
	{
		___allowAutoRedirect_12 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_13() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___allowBuffering_13)); }
	inline bool get_allowBuffering_13() const { return ___allowBuffering_13; }
	inline bool* get_address_of_allowBuffering_13() { return &___allowBuffering_13; }
	inline void set_allowBuffering_13(bool value)
	{
		___allowBuffering_13 = value;
	}

	inline static int32_t get_offset_of_certificates_14() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___certificates_14)); }
	inline X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833 * get_certificates_14() const { return ___certificates_14; }
	inline X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833 ** get_address_of_certificates_14() { return &___certificates_14; }
	inline void set_certificates_14(X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833 * value)
	{
		___certificates_14 = value;
		Il2CppCodeGenWriteBarrier((&___certificates_14), value);
	}

	inline static int32_t get_offset_of_connectionGroup_15() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___connectionGroup_15)); }
	inline String_t* get_connectionGroup_15() const { return ___connectionGroup_15; }
	inline String_t** get_address_of_connectionGroup_15() { return &___connectionGroup_15; }
	inline void set_connectionGroup_15(String_t* value)
	{
		___connectionGroup_15 = value;
		Il2CppCodeGenWriteBarrier((&___connectionGroup_15), value);
	}

	inline static int32_t get_offset_of_haveContentLength_16() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___haveContentLength_16)); }
	inline bool get_haveContentLength_16() const { return ___haveContentLength_16; }
	inline bool* get_address_of_haveContentLength_16() { return &___haveContentLength_16; }
	inline void set_haveContentLength_16(bool value)
	{
		___haveContentLength_16 = value;
	}

	inline static int32_t get_offset_of_contentLength_17() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___contentLength_17)); }
	inline int64_t get_contentLength_17() const { return ___contentLength_17; }
	inline int64_t* get_address_of_contentLength_17() { return &___contentLength_17; }
	inline void set_contentLength_17(int64_t value)
	{
		___contentLength_17 = value;
	}

	inline static int32_t get_offset_of_continueDelegate_18() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___continueDelegate_18)); }
	inline HttpContinueDelegate_t38DB016AD9C4FA9F4E9B4417278FB8D0594F37AC * get_continueDelegate_18() const { return ___continueDelegate_18; }
	inline HttpContinueDelegate_t38DB016AD9C4FA9F4E9B4417278FB8D0594F37AC ** get_address_of_continueDelegate_18() { return &___continueDelegate_18; }
	inline void set_continueDelegate_18(HttpContinueDelegate_t38DB016AD9C4FA9F4E9B4417278FB8D0594F37AC * value)
	{
		___continueDelegate_18 = value;
		Il2CppCodeGenWriteBarrier((&___continueDelegate_18), value);
	}

	inline static int32_t get_offset_of_cookieContainer_19() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___cookieContainer_19)); }
	inline CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 * get_cookieContainer_19() const { return ___cookieContainer_19; }
	inline CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 ** get_address_of_cookieContainer_19() { return &___cookieContainer_19; }
	inline void set_cookieContainer_19(CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 * value)
	{
		___cookieContainer_19 = value;
		Il2CppCodeGenWriteBarrier((&___cookieContainer_19), value);
	}

	inline static int32_t get_offset_of_credentials_20() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___credentials_20)); }
	inline RuntimeObject* get_credentials_20() const { return ___credentials_20; }
	inline RuntimeObject** get_address_of_credentials_20() { return &___credentials_20; }
	inline void set_credentials_20(RuntimeObject* value)
	{
		___credentials_20 = value;
		Il2CppCodeGenWriteBarrier((&___credentials_20), value);
	}

	inline static int32_t get_offset_of_haveResponse_21() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___haveResponse_21)); }
	inline bool get_haveResponse_21() const { return ___haveResponse_21; }
	inline bool* get_address_of_haveResponse_21() { return &___haveResponse_21; }
	inline void set_haveResponse_21(bool value)
	{
		___haveResponse_21 = value;
	}

	inline static int32_t get_offset_of_haveRequest_22() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___haveRequest_22)); }
	inline bool get_haveRequest_22() const { return ___haveRequest_22; }
	inline bool* get_address_of_haveRequest_22() { return &___haveRequest_22; }
	inline void set_haveRequest_22(bool value)
	{
		___haveRequest_22 = value;
	}

	inline static int32_t get_offset_of_requestSent_23() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___requestSent_23)); }
	inline bool get_requestSent_23() const { return ___requestSent_23; }
	inline bool* get_address_of_requestSent_23() { return &___requestSent_23; }
	inline void set_requestSent_23(bool value)
	{
		___requestSent_23 = value;
	}

	inline static int32_t get_offset_of_webHeaders_24() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___webHeaders_24)); }
	inline WebHeaderCollection_tB57EC4CD795CACE87271D6887BBED385DC37B304 * get_webHeaders_24() const { return ___webHeaders_24; }
	inline WebHeaderCollection_tB57EC4CD795CACE87271D6887BBED385DC37B304 ** get_address_of_webHeaders_24() { return &___webHeaders_24; }
	inline void set_webHeaders_24(WebHeaderCollection_tB57EC4CD795CACE87271D6887BBED385DC37B304 * value)
	{
		___webHeaders_24 = value;
		Il2CppCodeGenWriteBarrier((&___webHeaders_24), value);
	}

	inline static int32_t get_offset_of_keepAlive_25() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___keepAlive_25)); }
	inline bool get_keepAlive_25() const { return ___keepAlive_25; }
	inline bool* get_address_of_keepAlive_25() { return &___keepAlive_25; }
	inline void set_keepAlive_25(bool value)
	{
		___keepAlive_25 = value;
	}

	inline static int32_t get_offset_of_maxAutoRedirect_26() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___maxAutoRedirect_26)); }
	inline int32_t get_maxAutoRedirect_26() const { return ___maxAutoRedirect_26; }
	inline int32_t* get_address_of_maxAutoRedirect_26() { return &___maxAutoRedirect_26; }
	inline void set_maxAutoRedirect_26(int32_t value)
	{
		___maxAutoRedirect_26 = value;
	}

	inline static int32_t get_offset_of_mediaType_27() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___mediaType_27)); }
	inline String_t* get_mediaType_27() const { return ___mediaType_27; }
	inline String_t** get_address_of_mediaType_27() { return &___mediaType_27; }
	inline void set_mediaType_27(String_t* value)
	{
		___mediaType_27 = value;
		Il2CppCodeGenWriteBarrier((&___mediaType_27), value);
	}

	inline static int32_t get_offset_of_method_28() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___method_28)); }
	inline String_t* get_method_28() const { return ___method_28; }
	inline String_t** get_address_of_method_28() { return &___method_28; }
	inline void set_method_28(String_t* value)
	{
		___method_28 = value;
		Il2CppCodeGenWriteBarrier((&___method_28), value);
	}

	inline static int32_t get_offset_of_initialMethod_29() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___initialMethod_29)); }
	inline String_t* get_initialMethod_29() const { return ___initialMethod_29; }
	inline String_t** get_address_of_initialMethod_29() { return &___initialMethod_29; }
	inline void set_initialMethod_29(String_t* value)
	{
		___initialMethod_29 = value;
		Il2CppCodeGenWriteBarrier((&___initialMethod_29), value);
	}

	inline static int32_t get_offset_of_pipelined_30() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___pipelined_30)); }
	inline bool get_pipelined_30() const { return ___pipelined_30; }
	inline bool* get_address_of_pipelined_30() { return &___pipelined_30; }
	inline void set_pipelined_30(bool value)
	{
		___pipelined_30 = value;
	}

	inline static int32_t get_offset_of_preAuthenticate_31() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___preAuthenticate_31)); }
	inline bool get_preAuthenticate_31() const { return ___preAuthenticate_31; }
	inline bool* get_address_of_preAuthenticate_31() { return &___preAuthenticate_31; }
	inline void set_preAuthenticate_31(bool value)
	{
		___preAuthenticate_31 = value;
	}

	inline static int32_t get_offset_of_usedPreAuth_32() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___usedPreAuth_32)); }
	inline bool get_usedPreAuth_32() const { return ___usedPreAuth_32; }
	inline bool* get_address_of_usedPreAuth_32() { return &___usedPreAuth_32; }
	inline void set_usedPreAuth_32(bool value)
	{
		___usedPreAuth_32 = value;
	}

	inline static int32_t get_offset_of_version_33() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___version_33)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_version_33() const { return ___version_33; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_version_33() { return &___version_33; }
	inline void set_version_33(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___version_33 = value;
		Il2CppCodeGenWriteBarrier((&___version_33), value);
	}

	inline static int32_t get_offset_of_force_version_34() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___force_version_34)); }
	inline bool get_force_version_34() const { return ___force_version_34; }
	inline bool* get_address_of_force_version_34() { return &___force_version_34; }
	inline void set_force_version_34(bool value)
	{
		___force_version_34 = value;
	}

	inline static int32_t get_offset_of_actualVersion_35() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___actualVersion_35)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_actualVersion_35() const { return ___actualVersion_35; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_actualVersion_35() { return &___actualVersion_35; }
	inline void set_actualVersion_35(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___actualVersion_35 = value;
		Il2CppCodeGenWriteBarrier((&___actualVersion_35), value);
	}

	inline static int32_t get_offset_of_proxy_36() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___proxy_36)); }
	inline RuntimeObject* get_proxy_36() const { return ___proxy_36; }
	inline RuntimeObject** get_address_of_proxy_36() { return &___proxy_36; }
	inline void set_proxy_36(RuntimeObject* value)
	{
		___proxy_36 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_36), value);
	}

	inline static int32_t get_offset_of_sendChunked_37() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___sendChunked_37)); }
	inline bool get_sendChunked_37() const { return ___sendChunked_37; }
	inline bool* get_address_of_sendChunked_37() { return &___sendChunked_37; }
	inline void set_sendChunked_37(bool value)
	{
		___sendChunked_37 = value;
	}

	inline static int32_t get_offset_of_servicePoint_38() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___servicePoint_38)); }
	inline ServicePoint_t5F42B1A9D56E09B4B051BE0968C81DE3128E3EB4 * get_servicePoint_38() const { return ___servicePoint_38; }
	inline ServicePoint_t5F42B1A9D56E09B4B051BE0968C81DE3128E3EB4 ** get_address_of_servicePoint_38() { return &___servicePoint_38; }
	inline void set_servicePoint_38(ServicePoint_t5F42B1A9D56E09B4B051BE0968C81DE3128E3EB4 * value)
	{
		___servicePoint_38 = value;
		Il2CppCodeGenWriteBarrier((&___servicePoint_38), value);
	}

	inline static int32_t get_offset_of_timeout_39() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___timeout_39)); }
	inline int32_t get_timeout_39() const { return ___timeout_39; }
	inline int32_t* get_address_of_timeout_39() { return &___timeout_39; }
	inline void set_timeout_39(int32_t value)
	{
		___timeout_39 = value;
	}

	inline static int32_t get_offset_of_writeStream_40() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___writeStream_40)); }
	inline WebConnectionStream_t537F33BF6D8999D67791D02F8E6DE6448F2A31FC * get_writeStream_40() const { return ___writeStream_40; }
	inline WebConnectionStream_t537F33BF6D8999D67791D02F8E6DE6448F2A31FC ** get_address_of_writeStream_40() { return &___writeStream_40; }
	inline void set_writeStream_40(WebConnectionStream_t537F33BF6D8999D67791D02F8E6DE6448F2A31FC * value)
	{
		___writeStream_40 = value;
		Il2CppCodeGenWriteBarrier((&___writeStream_40), value);
	}

	inline static int32_t get_offset_of_webResponse_41() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___webResponse_41)); }
	inline HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951 * get_webResponse_41() const { return ___webResponse_41; }
	inline HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951 ** get_address_of_webResponse_41() { return &___webResponse_41; }
	inline void set_webResponse_41(HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951 * value)
	{
		___webResponse_41 = value;
		Il2CppCodeGenWriteBarrier((&___webResponse_41), value);
	}

	inline static int32_t get_offset_of_asyncWrite_42() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___asyncWrite_42)); }
	inline WebAsyncResult_tF700444B9ABA86C7CADBFA7B99DEC52D9FBD87EE * get_asyncWrite_42() const { return ___asyncWrite_42; }
	inline WebAsyncResult_tF700444B9ABA86C7CADBFA7B99DEC52D9FBD87EE ** get_address_of_asyncWrite_42() { return &___asyncWrite_42; }
	inline void set_asyncWrite_42(WebAsyncResult_tF700444B9ABA86C7CADBFA7B99DEC52D9FBD87EE * value)
	{
		___asyncWrite_42 = value;
		Il2CppCodeGenWriteBarrier((&___asyncWrite_42), value);
	}

	inline static int32_t get_offset_of_asyncRead_43() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___asyncRead_43)); }
	inline WebAsyncResult_tF700444B9ABA86C7CADBFA7B99DEC52D9FBD87EE * get_asyncRead_43() const { return ___asyncRead_43; }
	inline WebAsyncResult_tF700444B9ABA86C7CADBFA7B99DEC52D9FBD87EE ** get_address_of_asyncRead_43() { return &___asyncRead_43; }
	inline void set_asyncRead_43(WebAsyncResult_tF700444B9ABA86C7CADBFA7B99DEC52D9FBD87EE * value)
	{
		___asyncRead_43 = value;
		Il2CppCodeGenWriteBarrier((&___asyncRead_43), value);
	}

	inline static int32_t get_offset_of_abortHandler_44() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___abortHandler_44)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_abortHandler_44() const { return ___abortHandler_44; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_abortHandler_44() { return &___abortHandler_44; }
	inline void set_abortHandler_44(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___abortHandler_44 = value;
		Il2CppCodeGenWriteBarrier((&___abortHandler_44), value);
	}

	inline static int32_t get_offset_of_aborted_45() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___aborted_45)); }
	inline int32_t get_aborted_45() const { return ___aborted_45; }
	inline int32_t* get_address_of_aborted_45() { return &___aborted_45; }
	inline void set_aborted_45(int32_t value)
	{
		___aborted_45 = value;
	}

	inline static int32_t get_offset_of_gotRequestStream_46() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___gotRequestStream_46)); }
	inline bool get_gotRequestStream_46() const { return ___gotRequestStream_46; }
	inline bool* get_address_of_gotRequestStream_46() { return &___gotRequestStream_46; }
	inline void set_gotRequestStream_46(bool value)
	{
		___gotRequestStream_46 = value;
	}

	inline static int32_t get_offset_of_redirects_47() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___redirects_47)); }
	inline int32_t get_redirects_47() const { return ___redirects_47; }
	inline int32_t* get_address_of_redirects_47() { return &___redirects_47; }
	inline void set_redirects_47(int32_t value)
	{
		___redirects_47 = value;
	}

	inline static int32_t get_offset_of_expectContinue_48() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___expectContinue_48)); }
	inline bool get_expectContinue_48() const { return ___expectContinue_48; }
	inline bool* get_address_of_expectContinue_48() { return &___expectContinue_48; }
	inline void set_expectContinue_48(bool value)
	{
		___expectContinue_48 = value;
	}

	inline static int32_t get_offset_of_bodyBuffer_49() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___bodyBuffer_49)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_bodyBuffer_49() const { return ___bodyBuffer_49; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_bodyBuffer_49() { return &___bodyBuffer_49; }
	inline void set_bodyBuffer_49(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___bodyBuffer_49 = value;
		Il2CppCodeGenWriteBarrier((&___bodyBuffer_49), value);
	}

	inline static int32_t get_offset_of_bodyBufferLength_50() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___bodyBufferLength_50)); }
	inline int32_t get_bodyBufferLength_50() const { return ___bodyBufferLength_50; }
	inline int32_t* get_address_of_bodyBufferLength_50() { return &___bodyBufferLength_50; }
	inline void set_bodyBufferLength_50(int32_t value)
	{
		___bodyBufferLength_50 = value;
	}

	inline static int32_t get_offset_of_getResponseCalled_51() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___getResponseCalled_51)); }
	inline bool get_getResponseCalled_51() const { return ___getResponseCalled_51; }
	inline bool* get_address_of_getResponseCalled_51() { return &___getResponseCalled_51; }
	inline void set_getResponseCalled_51(bool value)
	{
		___getResponseCalled_51 = value;
	}

	inline static int32_t get_offset_of_saved_exc_52() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___saved_exc_52)); }
	inline Exception_t * get_saved_exc_52() const { return ___saved_exc_52; }
	inline Exception_t ** get_address_of_saved_exc_52() { return &___saved_exc_52; }
	inline void set_saved_exc_52(Exception_t * value)
	{
		___saved_exc_52 = value;
		Il2CppCodeGenWriteBarrier((&___saved_exc_52), value);
	}

	inline static int32_t get_offset_of_locker_53() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___locker_53)); }
	inline RuntimeObject * get_locker_53() const { return ___locker_53; }
	inline RuntimeObject ** get_address_of_locker_53() { return &___locker_53; }
	inline void set_locker_53(RuntimeObject * value)
	{
		___locker_53 = value;
		Il2CppCodeGenWriteBarrier((&___locker_53), value);
	}

	inline static int32_t get_offset_of_finished_reading_54() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___finished_reading_54)); }
	inline bool get_finished_reading_54() const { return ___finished_reading_54; }
	inline bool* get_address_of_finished_reading_54() { return &___finished_reading_54; }
	inline void set_finished_reading_54(bool value)
	{
		___finished_reading_54 = value;
	}

	inline static int32_t get_offset_of_WebConnection_55() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___WebConnection_55)); }
	inline WebConnection_tEB76AEE17361D28CBAD4033026A71DA89289C243 * get_WebConnection_55() const { return ___WebConnection_55; }
	inline WebConnection_tEB76AEE17361D28CBAD4033026A71DA89289C243 ** get_address_of_WebConnection_55() { return &___WebConnection_55; }
	inline void set_WebConnection_55(WebConnection_tEB76AEE17361D28CBAD4033026A71DA89289C243 * value)
	{
		___WebConnection_55 = value;
		Il2CppCodeGenWriteBarrier((&___WebConnection_55), value);
	}

	inline static int32_t get_offset_of_auto_decomp_56() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___auto_decomp_56)); }
	inline int32_t get_auto_decomp_56() const { return ___auto_decomp_56; }
	inline int32_t* get_address_of_auto_decomp_56() { return &___auto_decomp_56; }
	inline void set_auto_decomp_56(int32_t value)
	{
		___auto_decomp_56 = value;
	}

	inline static int32_t get_offset_of_readWriteTimeout_58() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___readWriteTimeout_58)); }
	inline int32_t get_readWriteTimeout_58() const { return ___readWriteTimeout_58; }
	inline int32_t* get_address_of_readWriteTimeout_58() { return &___readWriteTimeout_58; }
	inline void set_readWriteTimeout_58(int32_t value)
	{
		___readWriteTimeout_58 = value;
	}

	inline static int32_t get_offset_of_tlsProvider_59() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___tlsProvider_59)); }
	inline MonoTlsProvider_tDCD056C5BBBE59ED6BAF63F25952B406C1143C27 * get_tlsProvider_59() const { return ___tlsProvider_59; }
	inline MonoTlsProvider_tDCD056C5BBBE59ED6BAF63F25952B406C1143C27 ** get_address_of_tlsProvider_59() { return &___tlsProvider_59; }
	inline void set_tlsProvider_59(MonoTlsProvider_tDCD056C5BBBE59ED6BAF63F25952B406C1143C27 * value)
	{
		___tlsProvider_59 = value;
		Il2CppCodeGenWriteBarrier((&___tlsProvider_59), value);
	}

	inline static int32_t get_offset_of_tlsSettings_60() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___tlsSettings_60)); }
	inline MonoTlsSettings_t5905C7532C92A87F88C8F3440165DF8AA49A1BBF * get_tlsSettings_60() const { return ___tlsSettings_60; }
	inline MonoTlsSettings_t5905C7532C92A87F88C8F3440165DF8AA49A1BBF ** get_address_of_tlsSettings_60() { return &___tlsSettings_60; }
	inline void set_tlsSettings_60(MonoTlsSettings_t5905C7532C92A87F88C8F3440165DF8AA49A1BBF * value)
	{
		___tlsSettings_60 = value;
		Il2CppCodeGenWriteBarrier((&___tlsSettings_60), value);
	}

	inline static int32_t get_offset_of_certValidationCallback_61() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___certValidationCallback_61)); }
	inline ServerCertValidationCallback_t431E949AECAE20901007813737F5B26311F5F9FB * get_certValidationCallback_61() const { return ___certValidationCallback_61; }
	inline ServerCertValidationCallback_t431E949AECAE20901007813737F5B26311F5F9FB ** get_address_of_certValidationCallback_61() { return &___certValidationCallback_61; }
	inline void set_certValidationCallback_61(ServerCertValidationCallback_t431E949AECAE20901007813737F5B26311F5F9FB * value)
	{
		___certValidationCallback_61 = value;
		Il2CppCodeGenWriteBarrier((&___certValidationCallback_61), value);
	}

	inline static int32_t get_offset_of_auth_state_62() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___auth_state_62)); }
	inline AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB  get_auth_state_62() const { return ___auth_state_62; }
	inline AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB * get_address_of_auth_state_62() { return &___auth_state_62; }
	inline void set_auth_state_62(AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB  value)
	{
		___auth_state_62 = value;
	}

	inline static int32_t get_offset_of_proxy_auth_state_63() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___proxy_auth_state_63)); }
	inline AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB  get_proxy_auth_state_63() const { return ___proxy_auth_state_63; }
	inline AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB * get_address_of_proxy_auth_state_63() { return &___proxy_auth_state_63; }
	inline void set_proxy_auth_state_63(AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB  value)
	{
		___proxy_auth_state_63 = value;
	}

	inline static int32_t get_offset_of_host_64() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___host_64)); }
	inline String_t* get_host_64() const { return ___host_64; }
	inline String_t** get_address_of_host_64() { return &___host_64; }
	inline void set_host_64(String_t* value)
	{
		___host_64 = value;
		Il2CppCodeGenWriteBarrier((&___host_64), value);
	}

	inline static int32_t get_offset_of_ResendContentFactory_65() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___ResendContentFactory_65)); }
	inline Action_1_tC8BAB6C7B8E5508F10B3A5EF475B0FFAE7688621 * get_ResendContentFactory_65() const { return ___ResendContentFactory_65; }
	inline Action_1_tC8BAB6C7B8E5508F10B3A5EF475B0FFAE7688621 ** get_address_of_ResendContentFactory_65() { return &___ResendContentFactory_65; }
	inline void set_ResendContentFactory_65(Action_1_tC8BAB6C7B8E5508F10B3A5EF475B0FFAE7688621 * value)
	{
		___ResendContentFactory_65 = value;
		Il2CppCodeGenWriteBarrier((&___ResendContentFactory_65), value);
	}

	inline static int32_t get_offset_of_U3CThrowOnErrorU3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___U3CThrowOnErrorU3Ek__BackingField_66)); }
	inline bool get_U3CThrowOnErrorU3Ek__BackingField_66() const { return ___U3CThrowOnErrorU3Ek__BackingField_66; }
	inline bool* get_address_of_U3CThrowOnErrorU3Ek__BackingField_66() { return &___U3CThrowOnErrorU3Ek__BackingField_66; }
	inline void set_U3CThrowOnErrorU3Ek__BackingField_66(bool value)
	{
		___U3CThrowOnErrorU3Ek__BackingField_66 = value;
	}

	inline static int32_t get_offset_of_unsafe_auth_blah_67() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___unsafe_auth_blah_67)); }
	inline bool get_unsafe_auth_blah_67() const { return ___unsafe_auth_blah_67; }
	inline bool* get_address_of_unsafe_auth_blah_67() { return &___unsafe_auth_blah_67; }
	inline void set_unsafe_auth_blah_67(bool value)
	{
		___unsafe_auth_blah_67 = value;
	}

	inline static int32_t get_offset_of_U3CReuseConnectionU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___U3CReuseConnectionU3Ek__BackingField_68)); }
	inline bool get_U3CReuseConnectionU3Ek__BackingField_68() const { return ___U3CReuseConnectionU3Ek__BackingField_68; }
	inline bool* get_address_of_U3CReuseConnectionU3Ek__BackingField_68() { return &___U3CReuseConnectionU3Ek__BackingField_68; }
	inline void set_U3CReuseConnectionU3Ek__BackingField_68(bool value)
	{
		___U3CReuseConnectionU3Ek__BackingField_68 = value;
	}

	inline static int32_t get_offset_of_StoredConnection_69() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0, ___StoredConnection_69)); }
	inline WebConnection_tEB76AEE17361D28CBAD4033026A71DA89289C243 * get_StoredConnection_69() const { return ___StoredConnection_69; }
	inline WebConnection_tEB76AEE17361D28CBAD4033026A71DA89289C243 ** get_address_of_StoredConnection_69() { return &___StoredConnection_69; }
	inline void set_StoredConnection_69(WebConnection_tEB76AEE17361D28CBAD4033026A71DA89289C243 * value)
	{
		___StoredConnection_69 = value;
		Il2CppCodeGenWriteBarrier((&___StoredConnection_69), value);
	}
};

struct HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0_StaticFields
{
public:
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_57;

public:
	inline static int32_t get_offset_of_defaultMaxResponseHeadersLength_57() { return static_cast<int32_t>(offsetof(HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0_StaticFields, ___defaultMaxResponseHeadersLength_57)); }
	inline int32_t get_defaultMaxResponseHeadersLength_57() const { return ___defaultMaxResponseHeadersLength_57; }
	inline int32_t* get_address_of_defaultMaxResponseHeadersLength_57() { return &___defaultMaxResponseHeadersLength_57; }
	inline void set_defaultMaxResponseHeadersLength_57(int32_t value)
	{
		___defaultMaxResponseHeadersLength_57 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPWEBREQUEST_T5B5BFA163B5AD6134620F315940CE3631D7FAAE0_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef WEBCAMTEXTURE_TEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_H
#define WEBCAMTEXTURE_TEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamTexture
struct  WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXTURE_TEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_H
#ifndef CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#define CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef CODESCANNER_T3077E05DC321D50A7B649FCB158C8A6CA9A71999_H
#define CODESCANNER_T3077E05DC321D50A7B649FCB158C8A6CA9A71999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CodeScanner
struct  CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// WebCamController CodeScanner::wcc
	WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172 * ___wcc_4;
	// ZXing.BarcodeReader CodeScanner::codeScanner
	BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E * ___codeScanner_5;
	// System.String CodeScanner::lastScanned
	String_t* ___lastScanned_6;
	// CodeScanner/Found CodeScanner::OnCodeScanned
	Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * ___OnCodeScanned_7;
	// CodeScanner/Lost CodeScanner::OnCodeLost
	Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * ___OnCodeLost_8;

public:
	inline static int32_t get_offset_of_wcc_4() { return static_cast<int32_t>(offsetof(CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999, ___wcc_4)); }
	inline WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172 * get_wcc_4() const { return ___wcc_4; }
	inline WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172 ** get_address_of_wcc_4() { return &___wcc_4; }
	inline void set_wcc_4(WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172 * value)
	{
		___wcc_4 = value;
		Il2CppCodeGenWriteBarrier((&___wcc_4), value);
	}

	inline static int32_t get_offset_of_codeScanner_5() { return static_cast<int32_t>(offsetof(CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999, ___codeScanner_5)); }
	inline BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E * get_codeScanner_5() const { return ___codeScanner_5; }
	inline BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E ** get_address_of_codeScanner_5() { return &___codeScanner_5; }
	inline void set_codeScanner_5(BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E * value)
	{
		___codeScanner_5 = value;
		Il2CppCodeGenWriteBarrier((&___codeScanner_5), value);
	}

	inline static int32_t get_offset_of_lastScanned_6() { return static_cast<int32_t>(offsetof(CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999, ___lastScanned_6)); }
	inline String_t* get_lastScanned_6() const { return ___lastScanned_6; }
	inline String_t** get_address_of_lastScanned_6() { return &___lastScanned_6; }
	inline void set_lastScanned_6(String_t* value)
	{
		___lastScanned_6 = value;
		Il2CppCodeGenWriteBarrier((&___lastScanned_6), value);
	}

	inline static int32_t get_offset_of_OnCodeScanned_7() { return static_cast<int32_t>(offsetof(CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999, ___OnCodeScanned_7)); }
	inline Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * get_OnCodeScanned_7() const { return ___OnCodeScanned_7; }
	inline Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 ** get_address_of_OnCodeScanned_7() { return &___OnCodeScanned_7; }
	inline void set_OnCodeScanned_7(Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * value)
	{
		___OnCodeScanned_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnCodeScanned_7), value);
	}

	inline static int32_t get_offset_of_OnCodeLost_8() { return static_cast<int32_t>(offsetof(CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999, ___OnCodeLost_8)); }
	inline Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * get_OnCodeLost_8() const { return ___OnCodeLost_8; }
	inline Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D ** get_address_of_OnCodeLost_8() { return &___OnCodeLost_8; }
	inline void set_OnCodeLost_8(Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * value)
	{
		___OnCodeLost_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnCodeLost_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODESCANNER_T3077E05DC321D50A7B649FCB158C8A6CA9A71999_H
#ifndef CUSTOMCODEEVENTHANDLER_TB4B5C92263D67DFABE2E231073086CB7FB3A72EE_H
#define CUSTOMCODEEVENTHANDLER_TB4B5C92263D67DFABE2E231073086CB7FB3A72EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomCodeEventHandler
struct  CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text CustomCodeEventHandler::txt
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___txt_4;
	// CodeScanner CustomCodeEventHandler::codeScanner
	CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * ___codeScanner_6;
	// UnityEngine.Canvas CustomCodeEventHandler::textBox
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___textBox_7;
	// System.String CustomCodeEventHandler::api
	String_t* ___api_9;
	// System.String CustomCodeEventHandler::query_base
	String_t* ___query_base_10;

public:
	inline static int32_t get_offset_of_txt_4() { return static_cast<int32_t>(offsetof(CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE, ___txt_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_txt_4() const { return ___txt_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_txt_4() { return &___txt_4; }
	inline void set_txt_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___txt_4 = value;
		Il2CppCodeGenWriteBarrier((&___txt_4), value);
	}

	inline static int32_t get_offset_of_codeScanner_6() { return static_cast<int32_t>(offsetof(CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE, ___codeScanner_6)); }
	inline CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * get_codeScanner_6() const { return ___codeScanner_6; }
	inline CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 ** get_address_of_codeScanner_6() { return &___codeScanner_6; }
	inline void set_codeScanner_6(CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * value)
	{
		___codeScanner_6 = value;
		Il2CppCodeGenWriteBarrier((&___codeScanner_6), value);
	}

	inline static int32_t get_offset_of_textBox_7() { return static_cast<int32_t>(offsetof(CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE, ___textBox_7)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_textBox_7() const { return ___textBox_7; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_textBox_7() { return &___textBox_7; }
	inline void set_textBox_7(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___textBox_7 = value;
		Il2CppCodeGenWriteBarrier((&___textBox_7), value);
	}

	inline static int32_t get_offset_of_api_9() { return static_cast<int32_t>(offsetof(CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE, ___api_9)); }
	inline String_t* get_api_9() const { return ___api_9; }
	inline String_t** get_address_of_api_9() { return &___api_9; }
	inline void set_api_9(String_t* value)
	{
		___api_9 = value;
		Il2CppCodeGenWriteBarrier((&___api_9), value);
	}

	inline static int32_t get_offset_of_query_base_10() { return static_cast<int32_t>(offsetof(CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE, ___query_base_10)); }
	inline String_t* get_query_base_10() const { return ___query_base_10; }
	inline String_t** get_address_of_query_base_10() { return &___query_base_10; }
	inline void set_query_base_10(String_t* value)
	{
		___query_base_10 = value;
		Il2CppCodeGenWriteBarrier((&___query_base_10), value);
	}
};

struct CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE_StaticFields
{
public:
	// System.String CustomCodeEventHandler::passT
	String_t* ___passT_5;
	// System.String CustomCodeEventHandler::passName
	String_t* ___passName_8;

public:
	inline static int32_t get_offset_of_passT_5() { return static_cast<int32_t>(offsetof(CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE_StaticFields, ___passT_5)); }
	inline String_t* get_passT_5() const { return ___passT_5; }
	inline String_t** get_address_of_passT_5() { return &___passT_5; }
	inline void set_passT_5(String_t* value)
	{
		___passT_5 = value;
		Il2CppCodeGenWriteBarrier((&___passT_5), value);
	}

	inline static int32_t get_offset_of_passName_8() { return static_cast<int32_t>(offsetof(CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE_StaticFields, ___passName_8)); }
	inline String_t* get_passName_8() const { return ___passName_8; }
	inline String_t** get_address_of_passName_8() { return &___passName_8; }
	inline void set_passName_8(String_t* value)
	{
		___passName_8 = value;
		Il2CppCodeGenWriteBarrier((&___passName_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMCODEEVENTHANDLER_TB4B5C92263D67DFABE2E231073086CB7FB3A72EE_H
#ifndef DISRESULT_TEC169A1064D8903E1212DC119DB2522B6315C4BD_H
#define DISRESULT_TEC169A1064D8903E1212DC119DB2522B6315C4BD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DisResult
struct  DisResult_tEC169A1064D8903E1212DC119DB2522B6315C4BD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text DisResult::display
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___display_4;

public:
	inline static int32_t get_offset_of_display_4() { return static_cast<int32_t>(offsetof(DisResult_tEC169A1064D8903E1212DC119DB2522B6315C4BD, ___display_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_display_4() const { return ___display_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_display_4() { return &___display_4; }
	inline void set_display_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___display_4 = value;
		Il2CppCodeGenWriteBarrier((&___display_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISRESULT_TEC169A1064D8903E1212DC119DB2522B6315C4BD_H
#ifndef JUMP_TEC78086838D92297EFE022B32B18A9634CB6469A_H
#define JUMP_TEC78086838D92297EFE022B32B18A9634CB6469A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Jump
struct  Jump_tEC78086838D92297EFE022B32B18A9634CB6469A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JUMP_TEC78086838D92297EFE022B32B18A9634CB6469A_H
#ifndef PHONECAM_T605B581A05BFAB96588CFACFFDA42F07E0ECDEB1_H
#define PHONECAM_T605B581A05BFAB96588CFACFFDA42F07E0ECDEB1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhoneCam
struct  PhoneCam_t605B581A05BFAB96588CFACFFDA42F07E0ECDEB1  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean PhoneCam::camAvailable
	bool ___camAvailable_4;
	// UnityEngine.WebCamTexture PhoneCam::backCam
	WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * ___backCam_5;
	// UnityEngine.Texture PhoneCam::defaultBackground
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___defaultBackground_6;
	// UnityEngine.UI.RawImage PhoneCam::background
	RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * ___background_7;
	// UnityEngine.UI.AspectRatioFitter PhoneCam::fit
	AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6 * ___fit_8;

public:
	inline static int32_t get_offset_of_camAvailable_4() { return static_cast<int32_t>(offsetof(PhoneCam_t605B581A05BFAB96588CFACFFDA42F07E0ECDEB1, ___camAvailable_4)); }
	inline bool get_camAvailable_4() const { return ___camAvailable_4; }
	inline bool* get_address_of_camAvailable_4() { return &___camAvailable_4; }
	inline void set_camAvailable_4(bool value)
	{
		___camAvailable_4 = value;
	}

	inline static int32_t get_offset_of_backCam_5() { return static_cast<int32_t>(offsetof(PhoneCam_t605B581A05BFAB96588CFACFFDA42F07E0ECDEB1, ___backCam_5)); }
	inline WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * get_backCam_5() const { return ___backCam_5; }
	inline WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 ** get_address_of_backCam_5() { return &___backCam_5; }
	inline void set_backCam_5(WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * value)
	{
		___backCam_5 = value;
		Il2CppCodeGenWriteBarrier((&___backCam_5), value);
	}

	inline static int32_t get_offset_of_defaultBackground_6() { return static_cast<int32_t>(offsetof(PhoneCam_t605B581A05BFAB96588CFACFFDA42F07E0ECDEB1, ___defaultBackground_6)); }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * get_defaultBackground_6() const { return ___defaultBackground_6; }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 ** get_address_of_defaultBackground_6() { return &___defaultBackground_6; }
	inline void set_defaultBackground_6(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * value)
	{
		___defaultBackground_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBackground_6), value);
	}

	inline static int32_t get_offset_of_background_7() { return static_cast<int32_t>(offsetof(PhoneCam_t605B581A05BFAB96588CFACFFDA42F07E0ECDEB1, ___background_7)); }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * get_background_7() const { return ___background_7; }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 ** get_address_of_background_7() { return &___background_7; }
	inline void set_background_7(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * value)
	{
		___background_7 = value;
		Il2CppCodeGenWriteBarrier((&___background_7), value);
	}

	inline static int32_t get_offset_of_fit_8() { return static_cast<int32_t>(offsetof(PhoneCam_t605B581A05BFAB96588CFACFFDA42F07E0ECDEB1, ___fit_8)); }
	inline AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6 * get_fit_8() const { return ___fit_8; }
	inline AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6 ** get_address_of_fit_8() { return &___fit_8; }
	inline void set_fit_8(AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6 * value)
	{
		___fit_8 = value;
		Il2CppCodeGenWriteBarrier((&___fit_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHONECAM_T605B581A05BFAB96588CFACFFDA42F07E0ECDEB1_H
#ifndef UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#define UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifndef WEBCAMCONTROLLER_TD3F8A091E9132BBB4A07C7DD07F5D0572B73D172_H
#define WEBCAMCONTROLLER_TD3F8A091E9132BBB4A07C7DD07F5D0572B73D172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamController
struct  WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 WebCamController::desiredWidth
	int32_t ___desiredWidth_4;
	// System.Int32 WebCamController::desiredHeight
	int32_t ___desiredHeight_5;
	// System.Int32 WebCamController::desiredFPS
	int32_t ___desiredFPS_6;
	// UnityEngine.UI.RawImage WebCamController::output
	RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * ___output_7;
	// UnityEngine.WebCamTexture WebCamController::webcamTexture
	WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * ___webcamTexture_8;

public:
	inline static int32_t get_offset_of_desiredWidth_4() { return static_cast<int32_t>(offsetof(WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172, ___desiredWidth_4)); }
	inline int32_t get_desiredWidth_4() const { return ___desiredWidth_4; }
	inline int32_t* get_address_of_desiredWidth_4() { return &___desiredWidth_4; }
	inline void set_desiredWidth_4(int32_t value)
	{
		___desiredWidth_4 = value;
	}

	inline static int32_t get_offset_of_desiredHeight_5() { return static_cast<int32_t>(offsetof(WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172, ___desiredHeight_5)); }
	inline int32_t get_desiredHeight_5() const { return ___desiredHeight_5; }
	inline int32_t* get_address_of_desiredHeight_5() { return &___desiredHeight_5; }
	inline void set_desiredHeight_5(int32_t value)
	{
		___desiredHeight_5 = value;
	}

	inline static int32_t get_offset_of_desiredFPS_6() { return static_cast<int32_t>(offsetof(WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172, ___desiredFPS_6)); }
	inline int32_t get_desiredFPS_6() const { return ___desiredFPS_6; }
	inline int32_t* get_address_of_desiredFPS_6() { return &___desiredFPS_6; }
	inline void set_desiredFPS_6(int32_t value)
	{
		___desiredFPS_6 = value;
	}

	inline static int32_t get_offset_of_output_7() { return static_cast<int32_t>(offsetof(WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172, ___output_7)); }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * get_output_7() const { return ___output_7; }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 ** get_address_of_output_7() { return &___output_7; }
	inline void set_output_7(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * value)
	{
		___output_7 = value;
		Il2CppCodeGenWriteBarrier((&___output_7), value);
	}

	inline static int32_t get_offset_of_webcamTexture_8() { return static_cast<int32_t>(offsetof(WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172, ___webcamTexture_8)); }
	inline WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * get_webcamTexture_8() const { return ___webcamTexture_8; }
	inline WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 ** get_address_of_webcamTexture_8() { return &___webcamTexture_8; }
	inline void set_webcamTexture_8(WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * value)
	{
		___webcamTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___webcamTexture_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMCONTROLLER_TD3F8A091E9132BBB4A07C7DD07F5D0572B73D172_H
#ifndef GETSEARCH_T129C5F2F43DE6A9F1065ABE8CF346CA369301242_H
#define GETSEARCH_T129C5F2F43DE6A9F1065ABE8CF346CA369301242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// getSearch
struct  getSearch_t129C5F2F43DE6A9F1065ABE8CF346CA369301242  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.InputField getSearch::Search
	InputField_t533609195B110760BCFF00B746C87D81969CB005 * ___Search_4;

public:
	inline static int32_t get_offset_of_Search_4() { return static_cast<int32_t>(offsetof(getSearch_t129C5F2F43DE6A9F1065ABE8CF346CA369301242, ___Search_4)); }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 * get_Search_4() const { return ___Search_4; }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 ** get_address_of_Search_4() { return &___Search_4; }
	inline void set_Search_4(InputField_t533609195B110760BCFF00B746C87D81969CB005 * value)
	{
		___Search_4 = value;
		Il2CppCodeGenWriteBarrier((&___Search_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETSEARCH_T129C5F2F43DE6A9F1065ABE8CF346CA369301242_H
#ifndef GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#define GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_9)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_11)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifndef MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#define MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_22)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_23)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_29)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifndef RAWIMAGE_T68991514DB8F48442D614E7904A298C936B3C7C8_H
#define RAWIMAGE_T68991514DB8F48442D614E7904A298C936B3C7C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.RawImage
struct  RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___m_Texture_30;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_UVRect_31;

public:
	inline static int32_t get_offset_of_m_Texture_30() { return static_cast<int32_t>(offsetof(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8, ___m_Texture_30)); }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * get_m_Texture_30() const { return ___m_Texture_30; }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 ** get_address_of_m_Texture_30() { return &___m_Texture_30; }
	inline void set_m_Texture_30(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * value)
	{
		___m_Texture_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_Texture_30), value);
	}

	inline static int32_t get_offset_of_m_UVRect_31() { return static_cast<int32_t>(offsetof(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8, ___m_UVRect_31)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_UVRect_31() const { return ___m_UVRect_31; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_UVRect_31() { return &___m_UVRect_31; }
	inline void set_m_UVRect_31(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_UVRect_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAWIMAGE_T68991514DB8F48442D614E7904A298C936B3C7C8_H
#ifndef TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#define TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_30)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_32)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  m_Items[1];

public:
	inline WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  value)
	{
		m_Items[index] = value;
	}
};


// ZXing.Result ZXing.BarcodeReaderGeneric`1<System.Object>::Decode(!0,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2 * BarcodeReaderGeneric_1_Decode_m25B164D5554F4E2F7F1087461FEB52257086763A_gshared (BarcodeReaderGeneric_1_tEB9934C6B5873957D7F23580EEAA6954C5C84F79 * __this, RuntimeObject * p0, int32_t p1, int32_t p2, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Void ZXing.BarcodeReader::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BarcodeReader__ctor_mDA23AF0C7C722FD13561D0F568033062BBE7AC6E (BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Color32[] UnityEngine.WebCamTexture::GetPixels32()
extern "C" IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* WebCamTexture_GetPixels32_m8A1903E6F3C6E40D34C085FC2DF2B92973F16FF7 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// ZXing.Result ZXing.BarcodeReaderGeneric`1<UnityEngine.Color32[]>::Decode(!0,System.Int32,System.Int32)
inline Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2 * BarcodeReaderGeneric_1_Decode_mC022519E8243ACEF77CE29896FBC0A9F3FC284E2 (BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5 * __this, Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	return ((  Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2 * (*) (BarcodeReaderGeneric_1_t652BB5E1C8B9957CCDC05CA634E0BC58819D44C5 *, Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*, int32_t, int32_t, const RuntimeMethod*))BarcodeReaderGeneric_1_Decode_m25B164D5554F4E2F7F1087461FEB52257086763A_gshared)(__this, p0, p1, p2, method);
}
// System.String ZXing.Result::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* Result_get_Text_mDD3D0DE2D85263EC6372714227F55A41FF43FC82 (Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* p0, String_t* p1, const RuntimeMethod* method);
// ZXing.BarcodeFormat ZXing.Result::get_BarcodeFormat()
extern "C" IL2CPP_METHOD_ATTR int32_t Result_get_BarcodeFormat_m511B2E495C641A071F060AFFAA37FF67C236688D (Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2 * __this, const RuntimeMethod* method);
// System.Void CodeScanner/Found::Invoke(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Found_Invoke_mD2EDE27B5D283FD25FC0841BC176344433D44BC2 (Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * __this, String_t* ___text0, String_t* ___type1, const RuntimeMethod* method);
// System.Void CodeScanner/Lost::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Lost_Invoke_mA5A0CAE7CC889B78CF1B76242E949DBDDAC1D0A9 (Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// System.Void CodeScanner/Found::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Found__ctor_m7468308A72D98A0A88C26940B537558BB5CE8122 (Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void CodeScanner::add_OnCodeScanned(CodeScanner/Found)
extern "C" IL2CPP_METHOD_ATTR void CodeScanner_add_OnCodeScanned_mC7B6211736E3FB5AD436749EAF753CA05E88D3AF (CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * __this, Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * ___value0, const RuntimeMethod* method);
// System.Void CodeScanner/Lost::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Lost__ctor_m40132602A9BB3EF051B766B06DECFAB5409FF56B (Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void CodeScanner::add_OnCodeLost(CodeScanner/Lost)
extern "C" IL2CPP_METHOD_ATTR void CodeScanner_add_OnCodeLost_m11F45D62B31767B275E35D304779ED3A5459D805 (CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * __this, Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
extern "C" IL2CPP_METHOD_ATTR WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8 * WebRequest_Create_m1091F2B969C5E26C5F85E6368BAC1BCC38B61778 (String_t* p0, const RuntimeMethod* method);
// System.Void System.Net.HttpWebRequest::set_AutomaticDecompression(System.Net.DecompressionMethods)
extern "C" IL2CPP_METHOD_ATTR void HttpWebRequest_set_AutomaticDecompression_mE502C9891B02C169B08BBD9CAC025DD5068834C5 (HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void StreamReader__ctor_m6AD25C8043D76E8E4BB14554D59A69035A1908EB (StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * p0, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m588D3BCFA6FC7FA342FC221D4CB02729E901E573 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t p0, const RuntimeMethod* method);
// System.String CustomCodeEventHandler::SearchAPI(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* CustomCodeEventHandler_SearchAPI_m839D08C3CB7FEBE81A3D80B563AB88ECE2D25465 (CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void CustomCodeEventHandler::SceneLoad(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CustomCodeEventHandler_SceneLoad_m17589F1BB492252FCC19235F3B0DA9BA1C08B2C5 (CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE * __this, int32_t ___Index0, const RuntimeMethod* method);
// System.Void System.Console::WriteLine(System.String)
extern "C" IL2CPP_METHOD_ATTR void Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820 (String_t* p0, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C" IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * RawImage_get_texture_mA902F1297E6D0EB804AB7F8FF211C377A69C61AD (RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * __this, const RuntimeMethod* method);
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C" IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* WebCamTexture_get_devices_mF5D7FA78E9C67ADCBF592220A10F4B6678F1A920 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" IL2CPP_METHOD_ATTR bool WebCamDevice_get_isFrontFacing_mD55FF74A2CE25897AD77EAB5935B6A76AD929D38 (WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 * __this, const RuntimeMethod* method);
// System.String UnityEngine.WebCamDevice::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_m4D7362BB29DC20B7C8EF47759A09D54DEE8031F7 (WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::.ctor(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mDE1953773AFEB3650581D5AE2C7B5537715DE68F (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, String_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Play()
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_Play_mCF10A9B5EE587A066396B6378A972B31C9134436 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void RawImage_set_texture_m897BC65663AFF15258A611CC6E3480B078F41D23 (RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture__ctor_m4D851305E5E3D7B24F01F5BE6918959A04108A70 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void getSearch::SceneLoader(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void getSearch_SceneLoader_m2702E6419F5E4D518CE81A0873C074691D48414E (getSearch_t129C5F2F43DE6A9F1065ABE8CF346CA369301242 * __this, int32_t ___Index0, const RuntimeMethod* method);
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
// System.Void CodeScanner::add_OnCodeScanned(CodeScanner/Found)
extern "C" IL2CPP_METHOD_ATTR void CodeScanner_add_OnCodeScanned_mC7B6211736E3FB5AD436749EAF753CA05E88D3AF (CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * __this, Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodeScanner_add_OnCodeScanned_mC7B6211736E3FB5AD436749EAF753CA05E88D3AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * V_0 = NULL;
	Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * V_1 = NULL;
	Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * V_2 = NULL;
	{
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_0 = __this->get_OnCodeScanned_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_1 = V_0;
		V_1 = L_1;
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_2 = V_1;
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 *)CastclassSealed((RuntimeObject*)L_4, Found_t003674D0CB4578FB664098F1D8B65C1891A75D43_il2cpp_TypeInfo_var));
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 ** L_5 = __this->get_address_of_OnCodeScanned_7();
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_6 = V_2;
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_7 = V_1;
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_8 = InterlockedCompareExchangeImpl<Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 *>((Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 **)L_5, L_6, L_7);
		V_0 = L_8;
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_9 = V_0;
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 *)L_9) == ((RuntimeObject*)(Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CodeScanner::remove_OnCodeScanned(CodeScanner/Found)
extern "C" IL2CPP_METHOD_ATTR void CodeScanner_remove_OnCodeScanned_m0D15BCD96B71AD5C8608ECD4ADCC222D4ACD4C90 (CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * __this, Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodeScanner_remove_OnCodeScanned_m0D15BCD96B71AD5C8608ECD4ADCC222D4ACD4C90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * V_0 = NULL;
	Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * V_1 = NULL;
	Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * V_2 = NULL;
	{
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_0 = __this->get_OnCodeScanned_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_1 = V_0;
		V_1 = L_1;
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_2 = V_1;
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 *)CastclassSealed((RuntimeObject*)L_4, Found_t003674D0CB4578FB664098F1D8B65C1891A75D43_il2cpp_TypeInfo_var));
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 ** L_5 = __this->get_address_of_OnCodeScanned_7();
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_6 = V_2;
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_7 = V_1;
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_8 = InterlockedCompareExchangeImpl<Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 *>((Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 **)L_5, L_6, L_7);
		V_0 = L_8;
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_9 = V_0;
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 *)L_9) == ((RuntimeObject*)(Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CodeScanner::add_OnCodeLost(CodeScanner/Lost)
extern "C" IL2CPP_METHOD_ATTR void CodeScanner_add_OnCodeLost_m11F45D62B31767B275E35D304779ED3A5459D805 (CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * __this, Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodeScanner_add_OnCodeLost_m11F45D62B31767B275E35D304779ED3A5459D805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * V_0 = NULL;
	Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * V_1 = NULL;
	Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * V_2 = NULL;
	{
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_0 = __this->get_OnCodeLost_8();
		V_0 = L_0;
	}

IL_0007:
	{
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_1 = V_0;
		V_1 = L_1;
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_2 = V_1;
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D *)CastclassSealed((RuntimeObject*)L_4, Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D_il2cpp_TypeInfo_var));
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D ** L_5 = __this->get_address_of_OnCodeLost_8();
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_6 = V_2;
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_7 = V_1;
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_8 = InterlockedCompareExchangeImpl<Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D *>((Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D **)L_5, L_6, L_7);
		V_0 = L_8;
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_9 = V_0;
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_10 = V_1;
		if ((!(((RuntimeObject*)(Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D *)L_9) == ((RuntimeObject*)(Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CodeScanner::remove_OnCodeLost(CodeScanner/Lost)
extern "C" IL2CPP_METHOD_ATTR void CodeScanner_remove_OnCodeLost_m4F8DD518E76140202458D3AFE6D12F82E1A78FEE (CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * __this, Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodeScanner_remove_OnCodeLost_m4F8DD518E76140202458D3AFE6D12F82E1A78FEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * V_0 = NULL;
	Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * V_1 = NULL;
	Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * V_2 = NULL;
	{
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_0 = __this->get_OnCodeLost_8();
		V_0 = L_0;
	}

IL_0007:
	{
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_1 = V_0;
		V_1 = L_1;
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_2 = V_1;
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D *)CastclassSealed((RuntimeObject*)L_4, Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D_il2cpp_TypeInfo_var));
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D ** L_5 = __this->get_address_of_OnCodeLost_8();
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_6 = V_2;
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_7 = V_1;
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_8 = InterlockedCompareExchangeImpl<Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D *>((Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D **)L_5, L_6, L_7);
		V_0 = L_8;
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_9 = V_0;
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_10 = V_1;
		if ((!(((RuntimeObject*)(Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D *)L_9) == ((RuntimeObject*)(Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CodeScanner::Start()
extern "C" IL2CPP_METHOD_ATTR void CodeScanner_Start_m80EF87F283E574BEB5D481B0919BB606DF9023C7 (CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodeScanner_Start_m80EF87F283E574BEB5D481B0919BB606DF9023C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E * L_0 = (BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E *)il2cpp_codegen_object_new(BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E_il2cpp_TypeInfo_var);
		BarcodeReader__ctor_mDA23AF0C7C722FD13561D0F568033062BBE7AC6E(L_0, /*hidden argument*/NULL);
		__this->set_codeScanner_5(L_0);
		MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593(__this, _stringLiteralD4CA407B55C66523C07600F652EEEF26F9DA7FCB, (2.0f), (0.75f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void CodeScanner::ReadCode()
extern "C" IL2CPP_METHOD_ATTR void CodeScanner_ReadCode_m2DBD394E62D60F1CCA108CD034D488A4117E426C (CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodeScanner_ReadCode_m2DBD394E62D60F1CCA108CD034D488A4117E426C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		BarcodeReader_tB7781177B6B2124C98FF555D424C9E1EF604844E * L_0 = __this->get_codeScanner_5();
		WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172 * L_1 = __this->get_wcc_4();
		NullCheck(L_1);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_2 = L_1->get_webcamTexture_8();
		NullCheck(L_2);
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_3 = WebCamTexture_GetPixels32_m8A1903E6F3C6E40D34C085FC2DF2B92973F16FF7(L_2, /*hidden argument*/NULL);
		WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172 * L_4 = __this->get_wcc_4();
		NullCheck(L_4);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_5 = L_4->get_webcamTexture_8();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172 * L_7 = __this->get_wcc_4();
		NullCheck(L_7);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_8 = L_7->get_webcamTexture_8();
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		NullCheck(L_0);
		Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2 * L_10 = BarcodeReaderGeneric_1_Decode_mC022519E8243ACEF77CE29896FBC0A9F3FC284E2(L_0, L_3, L_6, L_9, /*hidden argument*/BarcodeReaderGeneric_1_Decode_mC022519E8243ACEF77CE29896FBC0A9F3FC284E2_RuntimeMethod_var);
		V_0 = L_10;
		Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2 * L_11 = V_0;
		if (!L_11)
		{
			goto IL_0084;
		}
	}
	{
		Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = Result_get_Text_mDD3D0DE2D85263EC6372714227F55A41FF43FC82(L_12, /*hidden argument*/NULL);
		String_t* L_14 = __this->get_lastScanned_6();
		bool L_15 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0077;
		}
	}
	{
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_16 = __this->get_OnCodeScanned_7();
		Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2 * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = Result_get_Text_mDD3D0DE2D85263EC6372714227F55A41FF43FC82(L_17, /*hidden argument*/NULL);
		Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2 * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = Result_get_BarcodeFormat_m511B2E495C641A071F060AFFAA37FF67C236688D(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		RuntimeObject * L_21 = Box(BarcodeFormat_tA58260A53F2244B790A1B829FC700C4CE0E4E963_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		V_1 = *(int32_t*)UnBox(L_21);
		NullCheck(L_16);
		Found_Invoke_mD2EDE27B5D283FD25FC0841BC176344433D44BC2(L_16, L_18, L_22, /*hidden argument*/NULL);
	}

IL_0077:
	{
		Result_tB2B74A1148FCC03B122A13F9B7B57D9D6312DAC2 * L_23 = V_0;
		NullCheck(L_23);
		String_t* L_24 = Result_get_Text_mDD3D0DE2D85263EC6372714227F55A41FF43FC82(L_23, /*hidden argument*/NULL);
		__this->set_lastScanned_6(L_24);
		return;
	}

IL_0084:
	{
		String_t* L_25 = __this->get_lastScanned_6();
		bool L_26 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_25, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		__this->set_lastScanned_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_27 = __this->get_OnCodeLost_8();
		NullCheck(L_27);
		Lost_Invoke_mA5A0CAE7CC889B78CF1B76242E949DBDDAC1D0A9(L_27, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		return;
	}
}
// System.Void CodeScanner::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CodeScanner__ctor_m347843E1309A425E994D54FD3C8535B511A8FC9F (CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodeScanner__ctor_m347843E1309A425E994D54FD3C8535B511A8FC9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_lastScanned_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 (Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * __this, String_t* ___text0, String_t* ___type1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___text0' to native representation
	char* ____text0_marshaled = NULL;
	____text0_marshaled = il2cpp_codegen_marshal_string(___text0);

	// Marshaling of parameter '___type1' to native representation
	char* ____type1_marshaled = NULL;
	____type1_marshaled = il2cpp_codegen_marshal_string(___type1);

	// Native function invocation
	il2cppPInvokeFunc(____text0_marshaled, ____type1_marshaled);

	// Marshaling cleanup of parameter '___text0' native representation
	il2cpp_codegen_marshal_free(____text0_marshaled);
	____text0_marshaled = NULL;

	// Marshaling cleanup of parameter '___type1' native representation
	il2cpp_codegen_marshal_free(____type1_marshaled);
	____type1_marshaled = NULL;

}
// System.Void CodeScanner/Found::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Found__ctor_m7468308A72D98A0A88C26940B537558BB5CE8122 (Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CodeScanner/Found::Invoke(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Found_Invoke_mD2EDE27B5D283FD25FC0841BC176344433D44BC2 (Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * __this, String_t* ___text0, String_t* ___type1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___text0, ___type1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___type1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___text0, ___type1);
							else
								GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___text0, ___type1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___text0, ___type1);
							else
								VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___text0, ___type1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___text0, ___type1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___text0, ___type1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___text0, ___type1);
							else
								GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___text0, ___type1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___text0, ___type1);
							else
								VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___text0, ___type1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___type1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___text0, ___type1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___type1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___text0, ___type1);
						else
							GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___text0, ___type1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___text0, ___type1);
						else
							VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___text0, ___type1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___text0, ___type1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___text0, ___type1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___text0, ___type1);
						else
							GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___text0, ___type1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___text0, ___type1);
						else
							VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___text0, ___type1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___type1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult CodeScanner/Found::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Found_BeginInvoke_m4E500C26E4514C32870824C86554A439C490A33F (Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * __this, String_t* ___text0, String_t* ___type1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___text0;
	__d_args[1] = ___type1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void CodeScanner/Found::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Found_EndInvoke_mD56FF3E8992B46B2EDABA400F75B585DB96C9D0C (Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D (Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CodeScanner/Lost::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Lost__ctor_m40132602A9BB3EF051B766B06DECFAB5409FF56B (Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CodeScanner/Lost::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Lost_Invoke_mA5A0CAE7CC889B78CF1B76242E949DBDDAC1D0A9 (Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 0)
				{
					// open
					typedef void (*FunctionPointerType) (const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult CodeScanner/Lost::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Lost_BeginInvoke_mDE7AEF8B9B17D87A1DB76859AF93C1B0FE1BD463 (Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void CodeScanner/Lost::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Lost_EndInvoke_m42E5D88CB0EBF69CEF3D9F568D52ECD9C09B12DD (Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CustomCodeEventHandler::Awake()
extern "C" IL2CPP_METHOD_ATTR void CustomCodeEventHandler_Awake_m5BBEB8511CC31BC7E7F11CB964F98E908F197EDF (CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomCodeEventHandler_Awake_m5BBEB8511CC31BC7E7F11CB964F98E908F197EDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_0 = __this->get_textBox_7();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * L_2 = __this->get_codeScanner_6();
		Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 * L_3 = (Found_t003674D0CB4578FB664098F1D8B65C1891A75D43 *)il2cpp_codegen_object_new(Found_t003674D0CB4578FB664098F1D8B65C1891A75D43_il2cpp_TypeInfo_var);
		Found__ctor_m7468308A72D98A0A88C26940B537558BB5CE8122(L_3, __this, (intptr_t)((intptr_t)CustomCodeEventHandler_OnCodeScanned_mC735DCF5823E73308A66F91F0BFC5FC1ABA9B39D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		CodeScanner_add_OnCodeScanned_mC7B6211736E3FB5AD436749EAF753CA05E88D3AF(L_2, L_3, /*hidden argument*/NULL);
		CodeScanner_t3077E05DC321D50A7B649FCB158C8A6CA9A71999 * L_4 = __this->get_codeScanner_6();
		Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D * L_5 = (Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D *)il2cpp_codegen_object_new(Lost_tEA18B11FCC29EEF0E3BC459B11B4DFB127180B8D_il2cpp_TypeInfo_var);
		Lost__ctor_m40132602A9BB3EF051B766B06DECFAB5409FF56B(L_5, __this, (intptr_t)((intptr_t)CustomCodeEventHandler_OnCodeLost_m3FF063E761E536976AC5079CE6ED8D2C9A86843B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		CodeScanner_add_OnCodeLost_m11F45D62B31767B275E35D304779ED3A5459D805(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.String CustomCodeEventHandler::SearchAPI(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* CustomCodeEventHandler_SearchAPI_m839D08C3CB7FEBE81A3D80B563AB88ECE2D25465 (CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomCodeEventHandler_SearchAPI_m839D08C3CB7FEBE81A3D80B563AB88ECE2D25465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951 * V_1 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_2 = NULL;
	StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = __this->get_query_base_10();
		String_t* L_1 = ___text0;
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_0, _stringLiteral103122D66792C369C8EB2304AD1222C1B27A6A67, L_1, /*hidden argument*/NULL);
		__this->set_query_base_10(L_2);
		String_t* L_3 = __this->get_api_9();
		String_t* L_4 = __this->get_query_base_10();
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8_il2cpp_TypeInfo_var);
		WebRequest_t5668DA48802E9FE2F1DE5F5A770B218608B918C8 * L_6 = WebRequest_Create_m1091F2B969C5E26C5F85E6368BAC1BCC38B61778(L_5, /*hidden argument*/NULL);
		HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0 * L_7 = ((HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0 *)CastclassClass((RuntimeObject*)L_6, HttpWebRequest_t5B5BFA163B5AD6134620F315940CE3631D7FAAE0_il2cpp_TypeInfo_var));
		NullCheck(L_7);
		HttpWebRequest_set_AutomaticDecompression_mE502C9891B02C169B08BBD9CAC025DD5068834C5(L_7, 3, /*hidden argument*/NULL);
		NullCheck(L_7);
		WebResponse_t5C91B5B83E2FBA2EABC6FDF2A70E9AFD9BB059BD * L_8 = VirtFuncInvoker0< WebResponse_t5C91B5B83E2FBA2EABC6FDF2A70E9AFD9BB059BD * >::Invoke(17 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_7);
		V_1 = ((HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951 *)CastclassClass((RuntimeObject*)L_8, HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951_il2cpp_TypeInfo_var));
	}

IL_0044:
	try
	{ // begin try (depth: 1)
		{
			HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951 * L_9 = V_1;
			NullCheck(L_9);
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_10 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(11 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_9);
			V_2 = L_10;
		}

IL_004b:
		try
		{ // begin try (depth: 2)
			{
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_11 = V_2;
				StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * L_12 = (StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E *)il2cpp_codegen_object_new(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_il2cpp_TypeInfo_var);
				StreamReader__ctor_m6AD25C8043D76E8E4BB14554D59A69035A1908EB(L_12, L_11, /*hidden argument*/NULL);
				V_3 = L_12;
			}

IL_0052:
			try
			{ // begin try (depth: 3)
				StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * L_13 = V_3;
				NullCheck(L_13);
				String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_13);
				V_0 = L_14;
				IL2CPP_LEAVE(0x79, FINALLY_005b);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_005b;
			}

FINALLY_005b:
			{ // begin finally (depth: 3)
				{
					StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * L_15 = V_3;
					if (!L_15)
					{
						goto IL_0064;
					}
				}

IL_005e:
				{
					StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * L_16 = V_3;
					NullCheck(L_16);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_16);
				}

IL_0064:
				{
					IL2CPP_END_FINALLY(91)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(91)
			{
				IL2CPP_END_CLEANUP(0x79, FINALLY_0065);
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0065;
		}

FINALLY_0065:
		{ // begin finally (depth: 2)
			{
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_17 = V_2;
				if (!L_17)
				{
					goto IL_006e;
				}
			}

IL_0068:
			{
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_18 = V_2;
				NullCheck(L_18);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_18);
			}

IL_006e:
			{
				IL2CPP_END_FINALLY(101)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(101)
		{
			IL2CPP_END_CLEANUP(0x79, FINALLY_006f);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{ // begin finally (depth: 1)
		{
			HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951 * L_19 = V_1;
			if (!L_19)
			{
				goto IL_0078;
			}
		}

IL_0072:
		{
			HttpWebResponse_t34CF6A40A4748A0F8694FEFEA3723D9AE3EF3951 * L_20 = V_1;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_20);
		}

IL_0078:
		{
			IL2CPP_END_FINALLY(111)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_JUMP_TBL(0x79, IL_0079)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0079:
	{
		String_t* L_21 = V_0;
		JsonUtility_ToJson_m588D3BCFA6FC7FA342FC221D4CB02729E901E573(L_21, /*hidden argument*/NULL);
		String_t* L_22 = V_0;
		return L_22;
	}
}
// System.Void CustomCodeEventHandler::SceneLoad(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CustomCodeEventHandler_SceneLoad_m17589F1BB492252FCC19235F3B0DA9BA1C08B2C5 (CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE * __this, int32_t ___Index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___Index0;
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CustomCodeEventHandler::OnCodeScanned(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void CustomCodeEventHandler_OnCodeScanned_mC735DCF5823E73308A66F91F0BFC5FC1ABA9B39D (CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE * __this, String_t* ___text0, String_t* ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomCodeEventHandler_OnCodeScanned_mC735DCF5823E73308A66F91F0BFC5FC1ABA9B39D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_txt_4();
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_2 = __this->get_textBox_7();
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)1, /*hidden argument*/NULL);
		String_t* L_4 = ___text0;
		((CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE_StaticFields*)il2cpp_codegen_static_fields_for(CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE_il2cpp_TypeInfo_var))->set_passT_5(L_4);
		String_t* L_5 = ___text0;
		String_t* L_6 = CustomCodeEventHandler_SearchAPI_m839D08C3CB7FEBE81A3D80B563AB88ECE2D25465(__this, L_5, /*hidden argument*/NULL);
		((CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE_StaticFields*)il2cpp_codegen_static_fields_for(CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE_il2cpp_TypeInfo_var))->set_passName_8(L_6);
		CustomCodeEventHandler_SceneLoad_m17589F1BB492252FCC19235F3B0DA9BA1C08B2C5(__this, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CustomCodeEventHandler::OnCodeLost()
extern "C" IL2CPP_METHOD_ATTR void CustomCodeEventHandler_OnCodeLost_m3FF063E761E536976AC5079CE6ED8D2C9A86843B (CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomCodeEventHandler_OnCodeLost_m3FF063E761E536976AC5079CE6ED8D2C9A86843B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_txt_4();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralE7358BE5E284E32455D130576503D42CA814BFFF);
		return;
	}
}
// System.Void CustomCodeEventHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CustomCodeEventHandler__ctor_m24D93E0505F11693C5B42718C145AF191922D166 (CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomCodeEventHandler__ctor_m24D93E0505F11693C5B42718C145AF191922D166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_api_9(_stringLiteralC834CEB01F76F43C90FEF8F1575B2C33FB996606);
		__this->set_query_base_10(_stringLiteral26D4E90D279F192A7ED09B1ADAC8CEA46ED3517D);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void DisResult::Start()
extern "C" IL2CPP_METHOD_ATTR void DisResult_Start_m04D5B77192D5EDE61556522D8371725703C1C775 (DisResult_tEC169A1064D8903E1212DC119DB2522B6315C4BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DisResult_Start_m04D5B77192D5EDE61556522D8371725703C1C775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_display_4();
		String_t* L_1 = ((CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE_StaticFields*)il2cpp_codegen_static_fields_for(CustomCodeEventHandler_tB4B5C92263D67DFABE2E231073086CB7FB3A72EE_il2cpp_TypeInfo_var))->get_passName_8();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = __this->get_display_4();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DisResult::Update()
extern "C" IL2CPP_METHOD_ATTR void DisResult_Update_m84D4964D0153B7C4F6CD15DAB03CB64A8675CE8E (DisResult_tEC169A1064D8903E1212DC119DB2522B6315C4BD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void DisResult::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DisResult__ctor_m310A0E8A2359EFC8D5A9473F0A9E2FAE0CB09622 (DisResult_tEC169A1064D8903E1212DC119DB2522B6315C4BD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Jump::SceneLoad(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Jump_SceneLoad_m5E058B4F180DA3C0BF10FEF631F6DB16C83F8575 (Jump_tEC78086838D92297EFE022B32B18A9634CB6469A * __this, int32_t ___Index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___Index0;
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Jump::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Jump__ctor_m5FF8975046C5683F92A333A924EC0C511D289C77 (Jump_tEC78086838D92297EFE022B32B18A9634CB6469A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PhoneCam::Start()
extern "C" IL2CPP_METHOD_ATTR void PhoneCam_Start_mFE11157CA15A643B0C9CE7C8A098F7065755222F (PhoneCam_t605B581A05BFAB96588CFACFFDA42F07E0ECDEB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhoneCam_Start_mFE11157CA15A643B0C9CE7C8A098F7065755222F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_0 = __this->get_background_7();
		NullCheck(L_0);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_1 = RawImage_get_texture_mA902F1297E6D0EB804AB7F8FF211C377A69C61AD(L_0, /*hidden argument*/NULL);
		__this->set_defaultBackground_6(L_1);
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_2 = WebCamTexture_get_devices_mF5D7FA78E9C67ADCBF592220A10F4B6678F1A920(/*hidden argument*/NULL);
		V_0 = L_2;
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_3 = V_0;
		NullCheck(L_3);
		if ((((RuntimeArray *)L_3)->max_length))
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral0FB2C372EDEFBECDC4788D82EBB9287218CC503D, /*hidden argument*/NULL);
		__this->set_camAvailable_4((bool)0);
		return;
	}

IL_002d:
	{
		V_1 = 0;
		goto IL_0064;
	}

IL_0031:
	{
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		bool L_6 = WebCamDevice_get_isFrontFacing_mD55FF74A2CE25897AD77EAB5935B6A76AD929D38((WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0060;
		}
	}
	{
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		String_t* L_9 = WebCamDevice_get_name_m4D7362BB29DC20B7C8EF47759A09D54DEE8031F7((WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), /*hidden argument*/NULL);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_10 = (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 *)il2cpp_codegen_object_new(WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_mDE1953773AFEB3650581D5AE2C7B5537715DE68F(L_10, L_9, ((int32_t)560), ((int32_t)560), /*hidden argument*/NULL);
		__this->set_backCam_5(L_10);
	}

IL_0060:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0064:
	{
		int32_t L_12 = V_1;
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_14 = __this->get_backCam_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_14, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0083;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral37F6F293220745B9AAFA387FFE6A62D7611AB160, /*hidden argument*/NULL);
		return;
	}

IL_0083:
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_16 = __this->get_backCam_5();
		NullCheck(L_16);
		WebCamTexture_Play_mCF10A9B5EE587A066396B6378A972B31C9134436(L_16, /*hidden argument*/NULL);
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_17 = __this->get_background_7();
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_18 = __this->get_backCam_5();
		NullCheck(L_17);
		RawImage_set_texture_m897BC65663AFF15258A611CC6E3480B078F41D23(L_17, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PhoneCam::Update()
extern "C" IL2CPP_METHOD_ATTR void PhoneCam_Update_m527A6EFEAC21AED2594666F6B0B800958BBCE734 (PhoneCam_t605B581A05BFAB96588CFACFFDA42F07E0ECDEB1 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_camAvailable_4();
		return;
	}
}
// System.Void PhoneCam::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PhoneCam__ctor_m566EE77EC67539417F94DF2D5C3D8B415AB0F6E5 (PhoneCam_t605B581A05BFAB96588CFACFFDA42F07E0ECDEB1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void WebCamController::Start()
extern "C" IL2CPP_METHOD_ATTR void WebCamController_Start_m4105194DE6EB92BAE3A74AFF9DFC2FB6C23502EF (WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamController_Start_m4105194DE6EB92BAE3A74AFF9DFC2FB6C23502EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_desiredWidth_4();
		int32_t L_1 = __this->get_desiredHeight_5();
		int32_t L_2 = __this->get_desiredFPS_6();
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_3 = (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 *)il2cpp_codegen_object_new(WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m4D851305E5E3D7B24F01F5BE6918959A04108A70(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_webcamTexture_8(L_3);
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_4 = __this->get_output_7();
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_5 = __this->get_webcamTexture_8();
		NullCheck(L_4);
		RawImage_set_texture_m897BC65663AFF15258A611CC6E3480B078F41D23(L_4, L_5, /*hidden argument*/NULL);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_6 = __this->get_webcamTexture_8();
		NullCheck(L_6);
		WebCamTexture_Play_mCF10A9B5EE587A066396B6378A972B31C9134436(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebCamController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebCamController__ctor_m1B01BDDAAB2459718C656E4807B975D6B237B05A (WebCamController_tD3F8A091E9132BBB4A07C7DD07F5D0572B73D172 * __this, const RuntimeMethod* method)
{
	{
		__this->set_desiredWidth_4(((int32_t)1280));
		__this->set_desiredHeight_5(((int32_t)720));
		__this->set_desiredFPS_6(((int32_t)24));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void getSearch::Start()
extern "C" IL2CPP_METHOD_ATTR void getSearch_Start_mE1808C5D6FAE5EF309739390B04A284ABBDC8FD3 (getSearch_t129C5F2F43DE6A9F1065ABE8CF346CA369301242 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void getSearch::SceneLoader(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void getSearch_SceneLoader_m2702E6419F5E4D518CE81A0873C074691D48414E (getSearch_t129C5F2F43DE6A9F1065ABE8CF346CA369301242 * __this, int32_t ___Index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___Index0;
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void getSearch::Check_search()
extern "C" IL2CPP_METHOD_ATTR void getSearch_Check_search_mC79CC02938B2C52D0B173EFCC35373EB2D3BA6AE (getSearch_t129C5F2F43DE6A9F1065ABE8CF346CA369301242 * __this, const RuntimeMethod* method)
{
	{
		getSearch_SceneLoader_m2702E6419F5E4D518CE81A0873C074691D48414E(__this, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void getSearch::.ctor()
extern "C" IL2CPP_METHOD_ATTR void getSearch__ctor_m5147FB3A9767E22E29276E098AFB0BDAFA616AF4 (getSearch_t129C5F2F43DE6A9F1065ABE8CF346CA369301242 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
