#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.UInt64[][][]
struct UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F;
// System.UInt64[][]
struct UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Org.BouncyCastle.Pqc.Crypto.Sike.Fpx
struct Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t7E843F4456A9C306B8158B975352B907634D0A42;
// Org.BouncyCastle.Pqc.Crypto.Sike.Internal
struct Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C;
// Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny
struct Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Org.BouncyCastle.Pqc.Crypto.Sike.P434
struct P434_tB7A0DD0094CE697943602B3FF77CCB96688C5CE4;
// Org.BouncyCastle.Pqc.Crypto.Sike.P503
struct P503_t440CF9866747506339B086C9CE26A6DA86ACE318;
// Org.BouncyCastle.Pqc.Crypto.Sike.P610
struct P610_tCB51325DCDB36D48587D6A2927D16E2928A76F54;
// Org.BouncyCastle.Pqc.Crypto.Sike.P751
struct P751_t3638C0562DE61897220563A0889919EAF3420C9A;
// Org.BouncyCastle.Pqc.Crypto.Sike.PointProj
struct PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121;
// Org.BouncyCastle.Pqc.Crypto.Sike.PointProjFull
struct PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Org.BouncyCastle.Crypto.Digests.ShakeDigest
struct ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D;
// Org.BouncyCastle.Pqc.Crypto.Sike.Sidh
struct Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE;
// Org.BouncyCastle.Pqc.Crypto.Sike.SidhCompressed
struct SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F;
// Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine
struct SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hex_tE1EF40FEEC6279861917D4DFB9CCC75FD8B36CA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P434_tB7A0DD0094CE697943602B3FF77CCB96688C5CE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P503_t440CF9866747506339B086C9CE26A6DA86ACE318_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P610_tCB51325DCDB36D48587D6A2927D16E2928A76F54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P751_t3638C0562DE61897220563A0889919EAF3420C9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____0D5E04033CFDF0B51FE1A2D8683C03A198BF47BF9BC4FBC586C14349A912F3E8_17_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____1A656D546FA3EC25711E9938E57456DC405FC94FC365095CBF0EE67D64F0E0EE_37_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2066D0CEF59F04322EDE720147716EC917E294CEB01402069AAF60DA01783589_43_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2541BC30AEEE47C1E2CD6ED62C5E387CB159C19E357E6E846EC8AABAD5AA8B65_58_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2AFF8D585A4398C45D3094B6F34B73275BE74BE2891925D12AD161D042432DC3_62_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2B5147D6B22724C5885188AAFFD14CED290364902FB9ABC779ECA096280B9686_64_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____34DF24B8F3948791F3063D3DBE0C1F9B09A8639D784786223234BEC089E8B850_83_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____4C2830C4E5B987FBFCC701F46320AC7D5B36188263033818292900BFB28BF7F9_125_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____550C3DFDE625907FEF7C0B4DB1A442ABDC106D409C562ACEEAFB8EA78B248C26_137_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5708EA23084F9E6EB1F6F902A20183BD53AB053F59EE29EADC23AA440949833D_141_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5753A960C564DD99E5980C9A150CDDC39F8C36B65836D8D1AD0427F9B12480CE_142_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5905613E02E9ECB38A8A0FE322F32222D1A0E667D6B01BFAB40276929F0C618B_145_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5A6EA34087D3D9F8963F478DEE9F2514C7ADF82018B6F95E5F0C9F35CA631AC0_148_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____62B0B99A90CF348B296641E627D3C0278DBD27D2F6FD5C66AA86BCA7BC32014E_163_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____669C05E216A0B007F8BCC449F3B23766D63E5E1FC36219BC54378367849D8542_167_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____675D55EB421ADAA655D122BEBC8F20ABC3E69A51DA5C6EE0FE699F356AEE7716_169_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6D736CA2760B98500A289548A45768A0347EDD83FFAF27A406ADE7F0DF13A883_183_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6F3DEC14A777BFB31AA272349BEBD2C61CDF9EA31B79B5F6BDE4C8A0E5015DD3_186_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6F75933D3AC11E0F251AF6310500E30D147CF7CB8911C64CF8F401061EAAB88F_187_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7409A8840065C2B1ABBC5ED7DCF94D2FAA1E32ECC5F39CBA5CA4D9F316E63CF6_193_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7A7E2DA28EA306D72C66AF6CC2D3929CEFC609108B484742A63328A57DCB4B64_207_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7C863A911E2AA252865A3EE4E316B05DC2041DF571B44D33DEEFAF79DE33E285_210_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7FA63BA1E20A9C8950945582B3A4C86272FCCE4341D0D29F1F68E75DB58AFB65_218_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____9185B9A22F0EC9A6E01EC78D9395C1D68BAD29F6501229B101F4E789225714B2_247_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____99E8C63009F88B142C11AB5F933B3773F78A2B27E15AD734EE5922DF2681C193_258_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____9B803B35415DA0CD08CBEDF0C0E261F57E1266F0BA53C39D2208ADD2F38F5C85_265_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____A504C689CF9091DF80B5A04BEEE2BE97822ED72E26518D7F3377E2D7AC6D522A_285_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B4058E7F52AD2232429965C913DCD28A06AC0A2440960C66FE897CA0A2D64C8A_311_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B5B337AAF4AB1DA76C5AC52B6B47409154E519A0E609D31832654D4AD22E8D0F_313_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B62054CCBB9806DA5278E1490083AE2AADB9FFD737147F5AA4A20D05AFCF9D1D_314_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B9D06DBC3EF70A5469EAC655358FDF24EA2B0D7B00CFAE2FAEB46E0435A75E75_324_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BD0803FFBB094DC636588CB801AA84B33963BF6A1DE5BEEEAB20613CC326ABB4_331_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BD7BD1177FB5EC6CFD98E00E763A9AC1AA45B645130F051074D265485CDD8745_334_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BDFF3716BE6B0C2920220FE8812E0EC9C0A9E716E1AB32606DCE45B69A1E91B4_337_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BF62C56CED2420B3754F87B461864E919485B10766B29BE8DDC0C0C510745182_341_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____C016C4D2C812AC5CA053CDEC62FB3011C7C881655DAF70265ABE7FA089B9119D_342_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____C17FC0D6B61086A3027A72269EA83B74E5D4DE90109784012BCBD40D5E0A7F9E_346_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____D418DB486BF8B92DFFFCE10BAD8A6FC3264E79F69335936023763DDA2F6DC2BB_374_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____DA5BDA15352EE630B7F2B5B73A13086272FD1AEBCD11CAF4DF6F23E8CD88A6D2_383_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____DCEC920EACDC77E3CD816EAF55038172FE433A419673896671BACC1260BAA287_388_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____E33F0F47E0AF3A894FCCB1E7A0A361A5B755B6050AD72E9CEC692900EC7E5A15_401_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____E7BFA12A4BD73B706BF3866FE18F93A4BC8C63A9EBE87405EDA03FDDF28BBB0A_411_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____EE6E1CBF3DD198235B836FA8CEAE76D590D422037F6F8685E5B41CBAB8448A81_424_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F322B1C31AC162C97BA845471208C5BAA8709C65BD446AC5BB11267912EAFFE5_431_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F51A5E73B47ACEDA9BB9091E80F92B81F5E98C82889DACD4D6C9DF8B230C6FB9_434_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F542419C019F996698636B099E1479F11362C67C5331FF2CD10FB833EB5F8607_435_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____FB3891EAFF6D32739F9BE64EBF38958D55D4F8146C3967D62F6ADC652CF41E88_446_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____FC2D643DD9472B6F409E319DD565570A2F9F78DDE4B4B561B9DDE85C377CD8F6_449_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F1967AB9EE43A8722FE6AB7BB5E825AE1C5AD88;
IL2CPP_EXTERN_C String_t* _stringLiteral1DB9693B05FF4A5E84C8D5C5550EA55B01F7A1A1;
IL2CPP_EXTERN_C String_t* _stringLiteral22B4A1495AF1D07979059260712B84EB2EE45A23;
IL2CPP_EXTERN_C String_t* _stringLiteral23B6A11B5CA2BAC72A79EE310AC7E72482BFDD67;
IL2CPP_EXTERN_C String_t* _stringLiteral244FF46894136E267DB65035B457FC1EA89906C9;
IL2CPP_EXTERN_C String_t* _stringLiteral24BBC287144D11D9300B60341E1FFC5F4C29F51E;
IL2CPP_EXTERN_C String_t* _stringLiteral25BDC80D7A7E767D10FC62CA755437B045BA1984;
IL2CPP_EXTERN_C String_t* _stringLiteral3686ED23DB5B4D2451BFCCAD33657B91C49659AB;
IL2CPP_EXTERN_C String_t* _stringLiteral3B203E07967DEAE4589997F74AD1EAC47D7D9A80;
IL2CPP_EXTERN_C String_t* _stringLiteral3D1C868CE98547C068E88416E510D9F9B3852E21;
IL2CPP_EXTERN_C String_t* _stringLiteral4F207BBDDD754E636B9914515BA573769A1D9E78;
IL2CPP_EXTERN_C String_t* _stringLiteral5B490C25D3CEFC256E0122739B72D36A98B7C49F;
IL2CPP_EXTERN_C String_t* _stringLiteral5DB670F032EF1526CADB734921118CC9AC3A09E1;
IL2CPP_EXTERN_C String_t* _stringLiteral62D5449140B647EE64073099F5964374ED4DED59;
IL2CPP_EXTERN_C String_t* _stringLiteral7B19D2817BE28E3E7484EE24102E61ABABFA2BFD;
IL2CPP_EXTERN_C String_t* _stringLiteral7BA01AF474C9BC28AE06E7BF58BA8CEF86EF57F7;
IL2CPP_EXTERN_C String_t* _stringLiteral7BC81B39A2DF89FCA8CBDA7383862559D940CE82;
IL2CPP_EXTERN_C String_t* _stringLiteral7FD7C9E3DD45BCE6533767C961ECE16050A8643D;
IL2CPP_EXTERN_C String_t* _stringLiteral8AD761457B0CD5989A6D4E4A9ADD6C8B55CDADD5;
IL2CPP_EXTERN_C String_t* _stringLiteral90F0A34A3D5B7832D904D9B5CF179CA2539BDED1;
IL2CPP_EXTERN_C String_t* _stringLiteral9C50276D1EF6B72022FD5732B6D44183D2C137F8;
IL2CPP_EXTERN_C String_t* _stringLiteralA0CA1BE51A1E11FEB5B328D1477386642C00360E;
IL2CPP_EXTERN_C String_t* _stringLiteralA6441EE2CBD867925669EC65B291428AC23A6EC7;
IL2CPP_EXTERN_C String_t* _stringLiteralB5B613AA23C85A9071682A3FB095197D560F175E;
IL2CPP_EXTERN_C String_t* _stringLiteralBBAB7924C1AFB6D526772477B281B73D108CC884;
IL2CPP_EXTERN_C String_t* _stringLiteralBF6F3BA23B36E142BB08F24F1853EA4CC885B96B;
IL2CPP_EXTERN_C String_t* _stringLiteralC110AB9A73FD55443F1944A84D07116A493F09E3;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC697CF5131BD9146CFC20439274920998A81AEAB;
IL2CPP_EXTERN_C String_t* _stringLiteralC96ED51C4278D5D94A04DA1A0DC127A8785ED0D4;
IL2CPP_EXTERN_C String_t* _stringLiteralD37DD0368077A5CE5F6C3ECA2FFD8C1EFCC0D119;
IL2CPP_EXTERN_C String_t* _stringLiteralD7ACA133DBBD0FA2F5CE1B7A7AE478A1482A704B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA07D7D7E9194079F9CFC13424894359F104664;
IL2CPP_EXTERN_C String_t* _stringLiteralE59848203DD4B2C0BCC1B8494ABF8A311654124B;
IL2CPP_EXTERN_C String_t* _stringLiteralF4081F0E6AD1B73E8A6D9390CB09A08A266E0568;
IL2CPP_EXTERN_C String_t* _stringLiteralFB3974B7AF812453B8260E35FAE3CA28B3CC1EEF;
IL2CPP_EXTERN_C String_t* _stringLiteralFE2E44B714EEF0DADDE20C47F3CF009474038666;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SikeEngine_crypto_kem_dec_mA9D965AD6AA5E3FBFEF17A05D1195D28FCE7EA56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SikeEngine_crypto_kem_enc_m555AB7A8EEE40D00D35662F9ACD754F80AB2CDFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* P434_tB7A0DD0094CE697943602B3FF77CCB96688C5CE4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* P503_t440CF9866747506339B086C9CE26A6DA86ACE318_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* P610_tCB51325DCDB36D48587D6A2927D16E2928A76F54_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* P751_t3638C0562DE61897220563A0889919EAF3420C9A_0_0_0_var;

struct UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F;
struct UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

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

// Org.BouncyCastle.Pqc.Crypto.Sike.Fpx
struct Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01  : public RuntimeObject
{
	// Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::engine
	SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* ___engine_0;
};

// Org.BouncyCastle.Pqc.Crypto.Sike.Internal
struct Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C  : public RuntimeObject
{
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::CRYPTO_PUBLICKEYBYTES
	uint32_t ___CRYPTO_PUBLICKEYBYTES_2;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::CRYPTO_CIPHERTEXTBYTES
	int32_t ___CRYPTO_CIPHERTEXTBYTES_3;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::CRYPTO_BYTES
	uint32_t ___CRYPTO_BYTES_4;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::CRYPTO_SECRETKEYBYTES
	uint32_t ___CRYPTO_SECRETKEYBYTES_5;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::NWORDS_FIELD
	uint32_t ___NWORDS_FIELD_6;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::PRIME_ZERO_WORDS
	uint32_t ___PRIME_ZERO_WORDS_7;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::NBITS_FIELD
	uint32_t ___NBITS_FIELD_8;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::MAXBITS_FIELD
	uint32_t ___MAXBITS_FIELD_9;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::MAXWORDS_FIELD
	uint32_t ___MAXWORDS_FIELD_10;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::NWORDS64_FIELD
	uint32_t ___NWORDS64_FIELD_11;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::NBITS_ORDER
	uint32_t ___NBITS_ORDER_12;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::NWORDS_ORDER
	uint32_t ___NWORDS_ORDER_13;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::NWORDS64_ORDER
	uint32_t ___NWORDS64_ORDER_14;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::MAXBITS_ORDER
	uint32_t ___MAXBITS_ORDER_15;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ALICE
	uint32_t ___ALICE_16;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::BOB
	uint32_t ___BOB_17;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::OALICE_BITS
	uint32_t ___OALICE_BITS_18;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::OBOB_BITS
	uint32_t ___OBOB_BITS_19;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::OBOB_EXPON
	uint32_t ___OBOB_EXPON_20;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::MASK_ALICE
	uint32_t ___MASK_ALICE_21;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::MASK_BOB
	uint32_t ___MASK_BOB_22;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::PARAM_A
	uint32_t ___PARAM_A_23;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::PARAM_C
	uint32_t ___PARAM_C_24;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::MAX_INT_POINTS_ALICE
	uint32_t ___MAX_INT_POINTS_ALICE_25;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::MAX_INT_POINTS_BOB
	uint32_t ___MAX_INT_POINTS_BOB_26;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::MAX_Alice
	uint32_t ___MAX_Alice_27;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::MAX_Bob
	uint32_t ___MAX_Bob_28;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::MSG_BYTES
	uint32_t ___MSG_BYTES_29;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::SECRETKEY_A_BYTES
	uint32_t ___SECRETKEY_A_BYTES_30;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::SECRETKEY_B_BYTES
	uint32_t ___SECRETKEY_B_BYTES_31;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::FP2_ENCODED_BYTES
	uint32_t ___FP2_ENCODED_BYTES_32;
	// System.Boolean Org.BouncyCastle.Pqc.Crypto.Sike.Internal::COMPRESS
	bool ___COMPRESS_33;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::MASK2_BOB
	uint32_t ___MASK2_BOB_34;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::MASK3_BOB
	uint32_t ___MASK3_BOB_35;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ORDER_A_ENCODED_BYTES
	uint32_t ___ORDER_A_ENCODED_BYTES_36;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ORDER_B_ENCODED_BYTES
	uint32_t ___ORDER_B_ENCODED_BYTES_37;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::PARTIALLY_COMPRESSED_CHUNK_CT
	uint32_t ___PARTIALLY_COMPRESSED_CHUNK_CT_38;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::COMPRESSED_CHUNK_CT
	uint32_t ___COMPRESSED_CHUNK_CT_39;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::UNCOMPRESSEDPK_BYTES
	uint32_t ___UNCOMPRESSEDPK_BYTES_40;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::TABLE_R_LEN
	uint32_t ___TABLE_R_LEN_41;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::TABLE_V_LEN
	uint32_t ___TABLE_V_LEN_42;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::TABLE_V3_LEN
	uint32_t ___TABLE_V3_LEN_43;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::W_2
	uint32_t ___W_2_44;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::W_3
	uint32_t ___W_3_45;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ELL2_W
	uint32_t ___ELL2_W_46;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ELL3_W
	uint32_t ___ELL3_W_47;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ELL2_EMODW
	uint32_t ___ELL2_EMODW_48;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ELL3_EMODW
	uint32_t ___ELL3_EMODW_49;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::DLEN_2
	uint32_t ___DLEN_2_50;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::DLEN_3
	uint32_t ___DLEN_3_51;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::PLEN_2
	uint32_t ___PLEN_2_52;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::PLEN_3
	uint32_t ___PLEN_3_53;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::PRIME
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___PRIME_54;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::PRIMEx2
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___PRIMEx2_55;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::PRIMEx4
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___PRIMEx4_56;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::PRIMEp1
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___PRIMEp1_57;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::PRIMEx16p
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___PRIMEx16p_58;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::PRIMEp1x64
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___PRIMEp1x64_59;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::Alice_order
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___Alice_order_60;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::Bob_order
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___Bob_order_61;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::A_gen
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___A_gen_62;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::B_gen
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___B_gen_63;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::Montgomery_R2
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___Montgomery_R2_64;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::Montgomery_one
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___Montgomery_one_65;
	// System.UInt32[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::strat_Alice
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___strat_Alice_66;
	// System.UInt32[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::strat_Bob
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___strat_Bob_67;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::XQB3
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___XQB3_68;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::A_basis_zero
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___A_basis_zero_69;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::B_basis_zero
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___B_basis_zero_70;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::B_gen_3_tors
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___B_gen_3_tors_71;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::g_R_S_im
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___g_R_S_im_72;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::g_phiR_phiS_re
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___g_phiR_phiS_re_73;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::g_phiR_phiS_im
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___g_phiR_phiS_im_74;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::Montgomery_R
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___Montgomery_R_75;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::Montgomery_RB1
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___Montgomery_RB1_76;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::Montgomery_RB2
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___Montgomery_RB2_77;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::threeinv
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___threeinv_78;
	// System.UInt32[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ph2_path
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ph2_path_79;
	// System.UInt32[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ph3_path
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ph3_path_80;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::u_entang
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___u_entang_81;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::u0_entang
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___u0_entang_82;
	// System.UInt64[][] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::table_r_qr
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___table_r_qr_83;
	// System.UInt64[][] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::table_r_qnr
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___table_r_qnr_84;
	// System.UInt64[][] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::table_v_qr
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___table_v_qr_85;
	// System.UInt64[][] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::table_v_qnr
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___table_v_qnr_86;
	// System.UInt64[][][] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::v_3_torsion
	UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* ___v_3_torsion_87;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::T_tate3
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___T_tate3_88;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::T_tate2_firststep_P
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___T_tate2_firststep_P_89;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::T_tate2_P
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___T_tate2_P_90;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::T_tate2_firststep_Q
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___T_tate2_firststep_Q_91;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::T_tate2_Q
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___T_tate2_Q_92;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ph2_T
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ph2_T_93;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ph2_T1
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ph2_T1_94;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ph2_T2
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ph2_T2_95;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ph3_T
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ph3_T_96;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ph3_T1
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ph3_T1_97;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ph3_T2
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ph3_T2_98;
};

struct Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields
{
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::RADIX
	uint32_t ___RADIX_0;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.Internal::LOG2RADIX
	uint32_t ___LOG2RADIX_1;
};

// Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny
struct Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C  : public RuntimeObject
{
	// Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::engine
	SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* ___engine_0;
};

// Org.BouncyCastle.Crypto.Digests.KeccakDigest
struct KeccakDigest_tCAD72536B022AE83C7F7E14A56E9B83DCD26C484  : public RuntimeObject
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::state
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::dataQueue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataQueue_2;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::rate
	int32_t ___rate_3;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::bitsInQueue
	int32_t ___bitsInQueue_4;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::fixedOutputLength
	int32_t ___fixedOutputLength_5;
	// System.Boolean Org.BouncyCastle.Crypto.Digests.KeccakDigest::squeezing
	bool ___squeezing_6;
};

struct KeccakDigest_tCAD72536B022AE83C7F7E14A56E9B83DCD26C484_StaticFields
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::KeccakRoundConstants
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___KeccakRoundConstants_0;
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

// Org.BouncyCastle.Pqc.Crypto.Sike.PointProj
struct PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121  : public RuntimeObject
{
	// System.UInt64[][] Org.BouncyCastle.Pqc.Crypto.Sike.PointProj::X
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___X_0;
	// System.UInt64[][] Org.BouncyCastle.Pqc.Crypto.Sike.PointProj::Z
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___Z_1;
};

// Org.BouncyCastle.Pqc.Crypto.Sike.PointProjFull
struct PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A  : public RuntimeObject
{
	// System.UInt64[][] Org.BouncyCastle.Pqc.Crypto.Sike.PointProjFull::X
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___X_0;
	// System.UInt64[][] Org.BouncyCastle.Pqc.Crypto.Sike.PointProjFull::Y
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___Y_1;
	// System.UInt64[][] Org.BouncyCastle.Pqc.Crypto.Sike.PointProjFull::Z
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___Z_2;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// Org.BouncyCastle.Pqc.Crypto.Sike.Sidh
struct Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE  : public RuntimeObject
{
	// Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine Org.BouncyCastle.Pqc.Crypto.Sike.Sidh::engine
	SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* ___engine_0;
};

// Org.BouncyCastle.Pqc.Crypto.Sike.SidhCompressed
struct SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F  : public RuntimeObject
{
	// Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine Org.BouncyCastle.Pqc.Crypto.Sike.SidhCompressed::engine
	SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* ___engine_0;
};

struct SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F_StaticFields
{
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.SidhCompressed::t_points
	uint32_t ___t_points_1;
};

// Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine
struct SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8  : public RuntimeObject
{
	// Org.BouncyCastle.Pqc.Crypto.Sike.Internal Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::param
	Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* ___param_0;
	// Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::isogeny
	Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* ___isogeny_1;
	// Org.BouncyCastle.Pqc.Crypto.Sike.Fpx Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::fpx
	Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* ___fpx_2;
	// Org.BouncyCastle.Pqc.Crypto.Sike.Sidh Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::sidh
	Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* ___sidh_3;
	// Org.BouncyCastle.Pqc.Crypto.Sike.SidhCompressed Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::sidhCompressed
	SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* ___sidhCompressed_4;
	// System.Boolean Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::isCompressed
	bool ___isCompressed_5;
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

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// Org.BouncyCastle.Pqc.Crypto.Sike.P434
struct P434_tB7A0DD0094CE697943602B3FF77CCB96688C5CE4  : public Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C
{
};

// Org.BouncyCastle.Pqc.Crypto.Sike.P503
struct P503_t440CF9866747506339B086C9CE26A6DA86ACE318  : public Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C
{
};

// Org.BouncyCastle.Pqc.Crypto.Sike.P610
struct P610_tCB51325DCDB36D48587D6A2927D16E2928A76F54  : public Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C
{
};

// Org.BouncyCastle.Pqc.Crypto.Sike.P751
struct P751_t3638C0562DE61897220563A0889919EAF3420C9A  : public Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C
{
};

// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	// Org.BouncyCastle.Crypto.Prng.IRandomGenerator Org.BouncyCastle.Security.SecureRandom::generator
	RuntimeObject* ___generator_11;
};

struct SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8_StaticFields
{
	// System.Int64 Org.BouncyCastle.Security.SecureRandom::counter
	int64_t ___counter_8;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Security.SecureRandom::MasterRandom
	SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___MasterRandom_9;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Security.SecureRandom::ArbitraryRandom
	SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___ArbitraryRandom_10;
	// System.Double Org.BouncyCastle.Security.SecureRandom::DoubleScale
	double ___DoubleScale_12;
};

// Org.BouncyCastle.Crypto.Digests.ShakeDigest
struct ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D  : public KeccakDigest_tCAD72536B022AE83C7F7E14A56E9B83DCD26C484
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
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
// System.UInt64[][]
struct UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11  : public RuntimeArray
{
	ALIGN_FIELD (8) UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* m_Items[1];

	inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt64[][][]
struct UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F  : public RuntimeArray
{
	ALIGN_FIELD (8) UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* m_Items[1];

	inline UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Org.BouncyCastle.Pqc.Crypto.Sike.PointProj[]
struct PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B  : public RuntimeArray
{
	ALIGN_FIELD (8) PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* m_Items[1];

	inline PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;

// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.UInt32 System.UInt32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UInt32_Parse_m32C977B504D6D93DFA67F6A77615A063E013E523 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Encoders.Hex::Decode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Hex_Decode_m096F3811AC1AA54EF62BA939B9372074BD43906A (String_t* ___data0, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_BE_To_UInt64_mBAD65F4F2F56020123C739E646EC1732A5AA1847 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.UInt64[][] Org.BouncyCastle.Pqc.Crypto.Sike.SikeUtilities::InitArray(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4 (uint32_t ___size10, uint32_t ___size21, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fp2copy(System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___a0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___c1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fp2add(System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___a0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___b1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___c2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fp2sub(System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___a0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___b1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___c2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fp2sqr_mont(System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___a0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___c1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fp2mul_mont(System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___a0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___b1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___c2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fpcopy(System.UInt64[],System.Int64,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___a0, int64_t ___aOffset1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___c2, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::subarrayEquals(System.UInt64[],System.UInt64[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fpx_subarrayEquals_m24186C2D348F7503098ED5418E202E0E4B65B85F (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___a0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___b1, uint32_t ___length2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fpsubPRIME(System.UInt64[],System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fpsubPRIME_mBA46B5FA9D18C45A2573F8B8827C3E194668EED2 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___a0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___b1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___c2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fpaddPRIME(System.UInt64[],System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fpaddPRIME_mFACB303487D8A75183EEFEC6178487CF426389B3 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___a0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___b1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___c2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::sqrt_Fp2(System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_sqrt_Fp2_mBAD2FE7526437FBB5F1A7AA19C5AD16E266A5473 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___u0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___y1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fp2inv_mont_bingcd(System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fp2inv_mont_bingcd_mB0AEF7C42B0A607F6885D285489E1F29FB2AD31C (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___a0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.PointProj::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8 (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* __this, uint32_t ___nwords_field0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fp2div2(System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fp2div2_m6D6E7C9B591D9C2EEF23B4648BF5FB668045C0A2 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___a0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___c1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XDblE(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XDblE_m2F2BEE8F6ACD774D562E30366BF812DCDE8DD61E (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A242, int32_t ___e3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::SwapPoints(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_SwapPoints_m1D2C97D8AE72417E75758F0C584E54627EE0496A (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, uint64_t ___option2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XDblAddProj(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XDblAddProj_m461E716CD53A01B711378E5958013D74AC1BAF81 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___XPQ2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___ZPQ3, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A244, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fp2correction(System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fp2correction_mCE341AA63E6B2984F0332DAA8C1F586B02488690 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___a0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::copy_words(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_copy_words_mB93FD5D6B53AEE8D0698FD8B352FC5AB3F8644DB (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___a0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___c1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XTplFast(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XTplFast_m277EB46F916DFE54B3DEC790AD991644EC5E6B4E (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A22, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fp2shl(System.UInt64[][],System.UInt32,System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fp2shl_mD2BA9DDD435A9C3110F6262A3472D6F4C2FABCF7 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___a0, uint32_t ___k1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___c2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::mp2_add(System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___a0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___b1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___c2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fpzero(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fpzero_m1FE9F196233A44E38C643C8E9212ECB369B1C320 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___a0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XDblAdd(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XDblAdd_m29F954796B207528D9730A25AB9F4FD2E6067EDD (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xPQ2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A243, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::mp2_sub_p2(System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___a0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___b1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___c2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XDbl(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XDbl_m85A8A67AEEFCBD2B8396BF760AABD41814008282 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24plus2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___C243, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XTpl(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XTpl_mEE4B248A6E68E53BD0B88EA460CE17B640BDF28A (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24minus2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24plus3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fp2inv_mont(System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fp2inv_mont_m8C347A23FBAB417585D11D78B13CF81EB2E096DC (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___a0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Internal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal__ctor_mA04410C329B8427AF2952E6273C581E1EBD667A5 (Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.IO.Stream Org.BouncyCastle.Utilities.IO.Compression.Bzip2::DecompressInput(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* Bzip2_DecompressInput_m9886025B5F0EB978D3967FDA68240E817D6EBF1E (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___leaveOpen1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.UInt32[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ReadIntsFromProperty(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Internal_ReadIntsFromProperty_m5F8A544EDF82EA30BE329D684763D4BD0D250394 (RuntimeObject* ___props0, String_t* ___key1, uint32_t ___intSize2, const RuntimeMethod* method) ;
// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ReadFromProperty(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228 (RuntimeObject* ___props0, String_t* ___key1, uint32_t ___ulongSize2, const RuntimeMethod* method) ;
// System.UInt64[][] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ReadFromProperty(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C (RuntimeObject* ___props0, String_t* ___key1, uint32_t ___d1Size2, uint32_t ___d2Size3, const RuntimeMethod* method) ;
// System.UInt64[][][] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ReadFromProperty(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* Internal_ReadFromProperty_m198C32C0F8CF56125237CD2F2E594004A5FD4D69 (RuntimeObject* ___props0, String_t* ___key1, uint32_t ___d1Size2, uint32_t ___d2Size3, uint32_t ___d3Size4, const RuntimeMethod* method) ;
// System.UInt64[][][] Org.BouncyCastle.Pqc.Crypto.Sike.SikeUtilities::InitArray(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* SikeUtilities_InitArray_mCFAD719DDB9949735E6B56F71BE414E5EB8AF0D8 (uint32_t ___size10, uint32_t ___size21, uint32_t ___size32, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Sidh::init_basis(System.UInt64[],System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sidh_init_basis_m6CAD1AA4DF4649216867B17E66586AECEB91DC8E (Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___gen0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___XP1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___XQ2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___XR3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::decode_to_digits(System.Byte[],System.UInt32,System.UInt64[],System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_decode_to_digits_m1A48649F7C0A1966AED62553A023C9960BBFBC7F (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, uint32_t ___xOffset1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___dec2, uint32_t ___nbytes3, uint32_t ___ndigits4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::LADDER3PT(System.UInt64[][],System.UInt64[][],System.UInt64[][],System.UInt64[],System.UInt32,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_LADDER3PT_m697E167624E95A4212EF745138F1E8B8E746BF5B (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xP0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xQ1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xPQ2, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___m3, uint32_t ___AliceOrBob4, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___R5, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A6, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XTplE(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XTplE_mC1DA626473B73DDBD4E25448E5D273C34181B354 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24minus2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24plus3, uint32_t ___e4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Get3Isog(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][],System.UInt64[][][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Get3Isog_m5DADF8D462F9C0343EE77C4C8F1418C76BC3E1A0 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24minus1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24plus2, UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* ___coeff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Eval3Isog(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Eval3Isog_m15D728965FB4D17986573368A38DAB94C8578481 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q0, UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* ___coeff1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Inv3Way(System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Inv3Way_m8D006D0C54B4447226F2038B2D20EF94B82C1419 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___z10, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___z21, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___z32, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fp2_encode(System.UInt64[][],System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fp2_encode_m51DE285ED128D4F78A91B995E9E60081896C9BBB (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___enc1, uint32_t ___encOffset2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XDblE(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XDblE_m0F743C7F0D64AA6B7B8765A580942A9B6831AD46 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24plus2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___C243, uint32_t ___e4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Get2Isog(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Get2Isog_m4D12A9542815D2F2CF7C8A76310E9FC2614823F7 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___C2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Eval2Isog(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Eval2Isog_mF5377153D3E6A3EBBEFAF1222220690F6078179F (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Get4Isog(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][],System.UInt64[][][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Get4Isog_m4B3F2335927822F9007849AE9EEAB33D396AC7D9 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24plus1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___C242, UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* ___coeff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Eval4Isog(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Eval4Isog_m0DD93770EC9BA1C30840735DEC7047778FF82F62 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* ___coeff1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::fp2_decode(System.Byte[],System.UInt64[][],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_fp2_decode_mC238530529B9C2A0C70F6A1A5EBC1EDC427B1E3D (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___dec1, uint32_t ___xOffset2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::GetA(System.UInt64[][],System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_GetA_mE384008803EE7E4F2968AF7E7CC6E224396E877A (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xP0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xQ1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xR2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A3, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::mp_add(System.UInt64[],System.UInt64[],System.UInt64[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Fpx_mp_add_mF0E756044126E539FB5680B3E61597C466752CEB (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___a0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___b1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___c2, uint32_t ___nwords3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::JInv(System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_JInv_m3031B751565B59E0027AC120F06C3B1DF08AD765 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___C1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___jinv2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.P434::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P434__ctor_m0AB8C5D6B03C07C8069227CA878329CA8DDFAF06 (P434_tB7A0DD0094CE697943602B3FF77CCB96688C5CE4* __this, bool ___isCompressed0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.P503::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P503__ctor_m57C457A3C8017B30C5BCEA25E430934624E6341D (P503_t440CF9866747506339B086C9CE26A6DA86ACE318* __this, bool ___isCompressed0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.P610::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P610__ctor_m90669E889653A5BF505D02FA73928A7E8E83F429 (P610_tCB51325DCDB36D48587D6A2927D16E2928A76F54* __this, bool ___isCompressed0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.P751::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P751__ctor_m65607C07E73CFA0B2D261DDF0332B499B60E39FE (P751_t3638C0562DE61897220563A0889919EAF3420C9A* __this, bool ___isCompressed0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::.ctor(Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx__ctor_m17D6428D36E248CA2B40CAE2C3A83DBD2248C2A5 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* ___engine0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::.ctor(Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny__ctor_m40E8E82386A4616FDB77DDFEB9A811B6871986D5 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* ___engine0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.SidhCompressed::.ctor(Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SidhCompressed__ctor_mC055DBCF6DE9D7D596F0CA2270A50EE3FA8B8691 (SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* __this, SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* ___engine0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Sidh::.ctor(Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sidh__ctor_m6FC2226DE6DD0592F76A6F22A05463734B99DA54 (Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* __this, SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* ___engine0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.SidhCompressed::EphemeralKeyGeneration_A_extended(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SidhCompressed_EphemeralKeyGeneration_A_extended_mB3022DB51EBCD2A9165555464ED18209396D05BA (SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PrivateKeyA0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___CompressedPKA1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0 (RuntimeArray* ___sourceArray0, int64_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int64_t ___destinationIndex3, int64_t ___length4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Sidh::EphemeralKeyGeneration_B(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sidh_EphemeralKeyGeneration_B_m0403D400094C2931AF510D603CBE075AC5CE381D (Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m6216739ECC19D7C9735EF5B2D5E7B498FA91964A (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.SidhCompressed::FormatPrivKey_B(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SidhCompressed_FormatPrivKey_B_m84102D24AABE7E19A809F05E070D5E5723274377 (SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___skB0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.SidhCompressed::EphemeralKeyGeneration_B_extended(System.Byte[],System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SidhCompressed_EphemeralKeyGeneration_B_extended_m08EEB5CA59AA692D90B626512E7105D80AA88B45 (SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PrivateKeyB0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___CompressedPKB1, uint32_t ___sike2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.SidhCompressed::EphemeralSecretAgreement_B(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SidhCompressed_EphemeralSecretAgreement_B_m4928DCFE73A8120A785B3F92F4B1F7D7DFEAB21F (SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PrivateKeyB0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PKA1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SharedSecretB2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Sidh::EphemeralKeyGeneration_A(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sidh_EphemeralKeyGeneration_A_mD73E9184B29B19DB5591E0B8933B9B63A95B6082 (Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ephemeralsk0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ct1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Sidh::EphemeralSecretAgreement_A(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sidh_EphemeralSecretAgreement_A_m2EA62578D131FE60CEEFE1FC7F331A7E0F8990C4 (Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ephemeralsk0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___jinvariant2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.SidhCompressed::EphemeralSecretAgreement_A_extended(System.Byte[],System.UInt32,System.Byte[],System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SidhCompressed_EphemeralSecretAgreement_A_extended_m3BB82E4B81DE74C83CBFBF867181FD167802EAB7 (SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PrivateKeyA0, uint32_t ___PrivateKeyAOffset1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PKB2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SharedSecretA3, uint32_t ___sike4, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Pqc.Crypto.Sike.SidhCompressed::validate_ciphertext(System.Byte[],System.Byte[],System.Byte[],System.UInt32,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SidhCompressed_validate_ciphertext_mA185073E38DE0BA52AC2D7631D7B20AC22DD8D6D (SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ephemeralsk_0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___CompressedPKB1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xKA2, uint32_t ___xKAOffset3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___tphiBKA_t4, uint32_t ___tphiBKA_tOffset5, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::ct_cmov(System.Byte[],System.Byte[],System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fpx_ct_cmov_m799CE95BC501AFAB5B0BB9883DF6FB4FEF128C53 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a1, uint32_t ___len2, uint8_t ___selector3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Sidh::EphemeralSecretAgreement_B(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sidh_EphemeralSecretAgreement_B_mCD5E78449576B28704FD85A890E7B642D04D18CC (Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ct1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___jinvariant_2, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Pqc.Crypto.Sike.Fpx::ct_compare(System.Byte[],System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Fpx_ct_compare_mB4117541923E4E99CC57961FA96ADB4A81071381 (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, uint32_t ___len2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ReadIntsFromProperty(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Internal_ReadIntsFromProperty_m5F8A544EDF82EA30BE329D684763D4BD0D250394 (RuntimeObject* ___props0, String_t* ___key1, uint32_t ___intSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		uint32_t L_0 = ___intSize2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = ___props0;
		String_t* L_3 = ___key1;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = 0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_4, L_6, NULL);
		V_2 = L_7;
		V_3 = 0;
		goto IL_003c;
	}

IL_0025:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		uint32_t L_13 = V_1;
		String_t* L_14 = V_4;
		uint32_t L_15;
		L_15 = UInt32_Parse_m32C977B504D6D93DFA67F6A77615A063E013E523(L_14, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)L_15);
		uint32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, 1));
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_003c:
	{
		int32_t L_18 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_2;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_0;
		return L_20;
	}
}
// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ReadFromProperty(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228 (RuntimeObject* ___props0, String_t* ___key1, uint32_t ___ulongSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hex_tE1EF40FEEC6279861917D4DFB9CCC75FD8B36CA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___props0;
		String_t* L_1 = ___key1;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_0, L_1);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		il2cpp_codegen_runtime_class_init_inline(Hex_tE1EF40FEEC6279861917D4DFB9CCC75FD8B36CA1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Hex_Decode_m096F3811AC1AA54EF62BA939B9372074BD43906A(L_3, NULL);
		V_0 = L_4;
		uint32_t L_5 = ___ulongSize2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0037;
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = V_1;
		int32_t L_8 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = V_2;
		uint64_t L_11;
		L_11 = Pack_BE_To_UInt64_mBAD65F4F2F56020123C739E646EC1732A5AA1847(L_9, ((int32_t)il2cpp_codegen_multiply(L_10, 8)), NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint64_t)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0037:
	{
		int32_t L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_14)->max_length))/8)))))
		{
			goto IL_0027;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = V_1;
		return L_15;
	}
}
// System.UInt64[][] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ReadFromProperty(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C (RuntimeObject* ___props0, String_t* ___key1, uint32_t ___d1Size2, uint32_t ___d2Size3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hex_tE1EF40FEEC6279861917D4DFB9CCC75FD8B36CA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		RuntimeObject* L_0 = ___props0;
		String_t* L_1 = ___key1;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_0, L_1);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		il2cpp_codegen_runtime_class_init_inline(Hex_tE1EF40FEEC6279861917D4DFB9CCC75FD8B36CA1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Hex_Decode_m096F3811AC1AA54EF62BA939B9372074BD43906A(L_3, NULL);
		V_0 = L_4;
		uint32_t L_5 = ___d1Size2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_6 = (UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11*)(UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11*)SZArrayNew(UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		V_4 = 0;
		goto IL_0038;
	}

IL_0028:
	{
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7 = V_1;
		int32_t L_8 = V_4;
		uint32_t L_9 = ___d2Size3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)L_10);
		int32_t L_11 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0038:
	{
		int32_t L_12 = V_4;
		uint32_t L_13 = ___d1Size2;
		if ((((int64_t)((int64_t)L_12)) < ((int64_t)((int64_t)(uint64_t)L_13))))
		{
			goto IL_0028;
		}
	}
	{
		V_5 = 0;
		goto IL_0063;
	}

IL_0044:
	{
		uint32_t L_14 = V_5;
		uint32_t L_15 = ___d2Size3;
		V_2 = ((int32_t)((uint32_t)(int32_t)L_14/(uint32_t)(int32_t)L_15));
		uint32_t L_16 = V_5;
		uint32_t L_17 = ___d2Size3;
		V_3 = ((int32_t)((uint32_t)(int32_t)L_16%(uint32_t)(int32_t)L_17));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_18 = V_1;
		uint32_t L_19 = V_2;
		NullCheck(L_18);
		uint32_t L_20 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		uint32_t L_22 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		uint32_t L_24 = V_5;
		uint64_t L_25;
		L_25 = Pack_BE_To_UInt64_mBAD65F4F2F56020123C739E646EC1732A5AA1847(L_23, ((int32_t)il2cpp_codegen_multiply((int32_t)L_24, 8)), NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint64_t)L_25);
		uint32_t L_26 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, 1));
	}

IL_0063:
	{
		uint32_t L_27 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_0;
		NullCheck(L_28);
		if ((((int64_t)((int64_t)(uint64_t)L_27)) < ((int64_t)((int64_t)((int32_t)(((int32_t)(((RuntimeArray*)L_28)->max_length))/8))))))
		{
			goto IL_0044;
		}
	}
	{
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_29 = V_1;
		return L_29;
	}
}
// System.UInt64[][][] Org.BouncyCastle.Pqc.Crypto.Sike.Internal::ReadFromProperty(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* Internal_ReadFromProperty_m198C32C0F8CF56125237CD2F2E594004A5FD4D69 (RuntimeObject* ___props0, String_t* ___key1, uint32_t ___d1Size2, uint32_t ___d2Size3, uint32_t ___d3Size4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hex_tE1EF40FEEC6279861917D4DFB9CCC75FD8B36CA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	{
		RuntimeObject* L_0 = ___props0;
		String_t* L_1 = ___key1;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_0, L_1);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		il2cpp_codegen_runtime_class_init_inline(Hex_tE1EF40FEEC6279861917D4DFB9CCC75FD8B36CA1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Hex_Decode_m096F3811AC1AA54EF62BA939B9372074BD43906A(L_3, NULL);
		V_0 = L_4;
		uint32_t L_5 = ___d1Size2;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_6 = (UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F*)(UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F*)SZArrayNew(UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		V_5 = 0;
		goto IL_0058;
	}

IL_0028:
	{
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_7 = V_1;
		int32_t L_8 = V_5;
		uint32_t L_9 = ___d2Size3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_10 = (UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11*)(UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11*)SZArrayNew(UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11_il2cpp_TypeInfo_var, (uint32_t)L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11*)L_10);
		V_6 = 0;
		goto IL_004b;
	}

IL_0037:
	{
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_11 = V_1;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = V_6;
		uint32_t L_16 = ___d3Size4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)L_17);
		int32_t L_18 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_6;
		uint32_t L_20 = ___d2Size3;
		if ((((int64_t)((int64_t)L_19)) < ((int64_t)((int64_t)(uint64_t)L_20))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_5;
		uint32_t L_23 = ___d1Size2;
		if ((((int64_t)((int64_t)L_22)) < ((int64_t)((int64_t)(uint64_t)L_23))))
		{
			goto IL_0028;
		}
	}
	{
		V_7 = 0;
		goto IL_0096;
	}

IL_0064:
	{
		uint32_t L_24 = V_7;
		uint32_t L_25 = ___d2Size3;
		uint32_t L_26 = ___d3Size4;
		V_2 = ((int32_t)((uint32_t)(int32_t)L_24/(uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26))));
		uint32_t L_27 = V_7;
		uint32_t L_28 = ___d2Size3;
		uint32_t L_29 = ___d3Size4;
		uint32_t L_30 = ___d3Size4;
		V_3 = ((int32_t)((uint32_t)(int32_t)((int32_t)((uint32_t)(int32_t)L_27%(uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_28, (int32_t)L_29))))/(uint32_t)(int32_t)L_30));
		uint32_t L_31 = V_7;
		uint32_t L_32 = ___d3Size4;
		V_4 = ((int32_t)((uint32_t)(int32_t)L_31%(uint32_t)(int32_t)L_32));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_33 = V_1;
		uint32_t L_34 = V_2;
		NullCheck(L_33);
		uint32_t L_35 = L_34;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		uint32_t L_37 = V_3;
		NullCheck(L_36);
		uint32_t L_38 = L_37;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		uint32_t L_40 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_0;
		uint32_t L_42 = V_7;
		uint64_t L_43;
		L_43 = Pack_BE_To_UInt64_mBAD65F4F2F56020123C739E646EC1732A5AA1847(L_41, ((int32_t)il2cpp_codegen_multiply((int32_t)L_42, 8)), NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint64_t)L_43);
		uint32_t L_44 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, 1));
	}

IL_0096:
	{
		uint32_t L_45 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		NullCheck(L_46);
		if ((((int64_t)((int64_t)(uint64_t)L_45)) < ((int64_t)((int64_t)((int32_t)(((int32_t)(((RuntimeArray*)L_46)->max_length))/8))))))
		{
			goto IL_0064;
		}
	}
	{
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_47 = V_1;
		return L_47;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Internal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal__ctor_mA04410C329B8427AF2952E6273C581E1EBD667A5 (Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Internal::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal__cctor_mF87D8C89891AF74182F107718EC6CF33CA5EA44B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0 = ((int32_t)64);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___LOG2RADIX_1 = 6;
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::.ctor(Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny__ctor_m40E8E82386A4616FDB77DDFEB9A811B6871986D5 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* ___engine0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = ___engine0;
		__this->___engine_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_0), (void*)L_0);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Double(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Double_mE4F6A34B56D51D07F857D94729C9B0D4499864B9 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A242, uint32_t ___k3, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_3 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_4 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_5 = NULL;
	int32_t V_6 = 0;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_13 = L_12->___param_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_15;
		L_15 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_14, NULL);
		V_3 = L_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_17 = L_16->___param_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_19;
		L_19 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_18, NULL);
		V_4 = L_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_20 = __this->___engine_0;
		NullCheck(L_20);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_21 = L_20->___param_0;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_23;
		L_23 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_22, NULL);
		V_5 = L_23;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_24 = __this->___engine_0;
		NullCheck(L_24);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_25 = L_24->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_26 = ___P0;
		NullCheck(L_26);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_27 = L_26->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_28 = ___Q1;
		NullCheck(L_28);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_29 = L_28->___X_0;
		NullCheck(L_25);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_25, L_27, L_29, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_30 = __this->___engine_0;
		NullCheck(L_30);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_31 = L_30->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_32 = ___P0;
		NullCheck(L_32);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_33 = L_32->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_34 = ___Q1;
		NullCheck(L_34);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_35 = L_34->___Z_1;
		NullCheck(L_31);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_31, L_33, L_35, NULL);
		V_6 = 0;
		goto IL_01a0;
	}

IL_00cc:
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_36 = __this->___engine_0;
		NullCheck(L_36);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_37 = L_36->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_38 = ___Q1;
		NullCheck(L_38);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_39 = L_38->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_40 = ___Q1;
		NullCheck(L_40);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_41 = L_40->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_42 = V_1;
		NullCheck(L_37);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_37, L_39, L_41, L_42, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_43 = __this->___engine_0;
		NullCheck(L_43);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_44 = L_43->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_45 = ___Q1;
		NullCheck(L_45);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_46 = L_45->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_47 = ___Q1;
		NullCheck(L_47);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = L_47->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_49 = V_2;
		NullCheck(L_44);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_44, L_46, L_48, L_49, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_50 = __this->___engine_0;
		NullCheck(L_50);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_51 = L_50->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_52 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_53 = V_4;
		NullCheck(L_51);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_51, L_52, L_53, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_54 = __this->___engine_0;
		NullCheck(L_54);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_55 = L_54->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_56 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_57 = V_5;
		NullCheck(L_55);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_55, L_56, L_57, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_58 = __this->___engine_0;
		NullCheck(L_58);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_59 = L_58->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_60 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_61 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_62 = V_3;
		NullCheck(L_59);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_59, L_60, L_61, L_62, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_63 = __this->___engine_0;
		NullCheck(L_63);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_64 = L_63->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_65 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_66 = V_5;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_67 = ___Q1;
		NullCheck(L_67);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = L_67->___X_0;
		NullCheck(L_64);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_64, L_65, L_66, L_68, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_69 = __this->___engine_0;
		NullCheck(L_69);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_70 = L_69->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_71 = ___A242;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_72 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_73 = V_0;
		NullCheck(L_70);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_70, L_71, L_72, L_73, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_74 = __this->___engine_0;
		NullCheck(L_74);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_75 = L_74->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_76 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_77 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_78 = V_0;
		NullCheck(L_75);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_75, L_76, L_77, L_78, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_79 = __this->___engine_0;
		NullCheck(L_79);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_80 = L_79->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_81 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_82 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_83 = ___Q1;
		NullCheck(L_83);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_84 = L_83->___Z_1;
		NullCheck(L_80);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_80, L_81, L_82, L_84, NULL);
		int32_t L_85 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_01a0:
	{
		int32_t L_86 = V_6;
		uint32_t L_87 = ___k3;
		if ((((int64_t)((int64_t)L_86)) < ((int64_t)((int64_t)(uint64_t)L_87))))
		{
			goto IL_00cc;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::CompleteMPoint(System.UInt64[][],Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProjFull)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_CompleteMPoint_mA623481E376E4958E0895418C71A2585517BE718 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P1, PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A* ___R2, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_3 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_4 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_5 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_6 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_7 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_8 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_13 = L_12->___param_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_15;
		L_15 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_14, NULL);
		V_3 = L_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_17 = L_16->___param_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_19;
		L_19 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_18, NULL);
		V_4 = L_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_20 = __this->___engine_0;
		NullCheck(L_20);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_21 = L_20->___param_0;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_23;
		L_23 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_22, NULL);
		V_5 = L_23;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_24 = __this->___engine_0;
		NullCheck(L_24);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_25 = L_24->___param_0;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_27;
		L_27 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_26, NULL);
		V_6 = L_27;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_28 = __this->___engine_0;
		NullCheck(L_28);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_29 = L_28->___param_0;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_31;
		L_31 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_30, NULL);
		V_7 = L_31;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_32 = __this->___engine_0;
		NullCheck(L_32);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_33 = L_32->___param_0;
		NullCheck(L_33);
		uint32_t L_34 = L_33->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_35;
		L_35 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_34, NULL);
		V_8 = L_35;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_36 = __this->___engine_0;
		NullCheck(L_36);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_37 = L_36->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_38 = __this->___engine_0;
		NullCheck(L_38);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_39 = L_38->___param_0;
		NullCheck(L_39);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = L_39->___Montgomery_one_65;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_37);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_37, L_40, ((int64_t)0), L_43, NULL);
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_44 = ___P1;
		NullCheck(L_44);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_45 = L_44->___Z_1;
		NullCheck(L_45);
		int32_t L_46 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_51 = __this->___engine_0;
		NullCheck(L_51);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_52 = L_51->___param_0;
		NullCheck(L_52);
		uint32_t L_53 = L_52->___NWORDS_FIELD_6;
		bool L_54;
		L_54 = Fpx_subarrayEquals_m24186C2D348F7503098ED5418E202E0E4B65B85F(L_47, L_50, L_53, NULL);
		if (!L_54)
		{
			goto IL_0140;
		}
	}
	{
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_55 = ___P1;
		NullCheck(L_55);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_56 = L_55->___Z_1;
		NullCheck(L_56);
		int32_t L_57 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_62 = __this->___engine_0;
		NullCheck(L_62);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_63 = L_62->___param_0;
		NullCheck(L_63);
		uint32_t L_64 = L_63->___NWORDS_FIELD_6;
		bool L_65;
		L_65 = Fpx_subarrayEquals_m24186C2D348F7503098ED5418E202E0E4B65B85F(L_58, L_61, L_64, NULL);
		if (L_65)
		{
			goto IL_02e2;
		}
	}

IL_0140:
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_66 = __this->___engine_0;
		NullCheck(L_66);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_67 = L_66->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_68 = ___P1;
		NullCheck(L_68);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_69 = L_68->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_70 = ___P1;
		NullCheck(L_70);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_71 = L_70->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_72 = V_2;
		NullCheck(L_67);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_67, L_69, L_71, L_72, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_73 = __this->___engine_0;
		NullCheck(L_73);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_74 = L_73->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_75 = ___P1;
		NullCheck(L_75);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_76 = L_75->___X_0;
		NullCheck(L_76);
		int32_t L_77 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_79 = ___P1;
		NullCheck(L_79);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_80 = L_79->___Z_1;
		NullCheck(L_80);
		int32_t L_81 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_83 = V_7;
		NullCheck(L_83);
		int32_t L_84 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_74);
		Fpx_fpsubPRIME_mBA46B5FA9D18C45A2573F8B8827C3E194668EED2(L_74, L_78, L_82, L_85, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_86 = __this->___engine_0;
		NullCheck(L_86);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_87 = L_86->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_88 = ___P1;
		NullCheck(L_88);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_89 = L_88->___X_0;
		NullCheck(L_89);
		int32_t L_90 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_92 = ___P1;
		NullCheck(L_92);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_93 = L_92->___Z_1;
		NullCheck(L_93);
		int32_t L_94 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_96 = V_7;
		NullCheck(L_96);
		int32_t L_97 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_87);
		Fpx_fpaddPRIME_mFACB303487D8A75183EEFEC6178487CF426389B3(L_87, L_91, L_95, L_98, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_99 = __this->___engine_0;
		NullCheck(L_99);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_100 = L_99->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_101 = ___P1;
		NullCheck(L_101);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_102 = L_101->___X_0;
		NullCheck(L_102);
		int32_t L_103 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_105 = ___P1;
		NullCheck(L_105);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_106 = L_105->___Z_1;
		NullCheck(L_106);
		int32_t L_107 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_109 = V_8;
		NullCheck(L_109);
		int32_t L_110 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_100);
		Fpx_fpaddPRIME_mFACB303487D8A75183EEFEC6178487CF426389B3(L_100, L_104, L_108, L_111, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_112 = __this->___engine_0;
		NullCheck(L_112);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_113 = L_112->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_114 = ___P1;
		NullCheck(L_114);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_115 = L_114->___X_0;
		NullCheck(L_115);
		int32_t L_116 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_118 = ___P1;
		NullCheck(L_118);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_119 = L_118->___Z_1;
		NullCheck(L_119);
		int32_t L_120 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_122 = V_8;
		NullCheck(L_122);
		int32_t L_123 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_113);
		Fpx_fpsubPRIME_mBA46B5FA9D18C45A2573F8B8827C3E194668EED2(L_113, L_117, L_121, L_124, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_125 = __this->___engine_0;
		NullCheck(L_125);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_126 = L_125->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_127 = V_7;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_128 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_129 = V_4;
		NullCheck(L_126);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_126, L_127, L_128, L_129, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_130 = __this->___engine_0;
		NullCheck(L_130);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_131 = L_130->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_132 = ___A0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_133 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_134 = V_7;
		NullCheck(L_131);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_131, L_132, L_133, L_134, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_135 = __this->___engine_0;
		NullCheck(L_135);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_136 = L_135->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_137 = V_7;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_138 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_139 = V_8;
		NullCheck(L_136);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_136, L_137, L_138, L_139, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_140 = __this->___engine_0;
		NullCheck(L_140);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_141 = L_140->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_142 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_143 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_144 = V_5;
		NullCheck(L_141);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_141, L_142, L_143, L_144, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_145 = __this->___engine_0;
		NullCheck(L_145);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_146 = L_145->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_147 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_148 = V_3;
		NullCheck(L_146);
		Fpx_sqrt_Fp2_mBAD2FE7526437FBB5F1A7AA19C5AD16E266A5473(L_146, L_147, L_148, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_149 = __this->___engine_0;
		NullCheck(L_149);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_150 = L_149->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_151 = ___P1;
		NullCheck(L_151);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_152 = L_151->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_153 = V_6;
		NullCheck(L_150);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_150, L_152, L_153, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_154 = __this->___engine_0;
		NullCheck(L_154);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_155 = L_154->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_156 = V_6;
		NullCheck(L_155);
		Fpx_fp2inv_mont_bingcd_mB0AEF7C42B0A607F6885D285489E1F29FB2AD31C(L_155, L_156, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_157 = __this->___engine_0;
		NullCheck(L_157);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_158 = L_157->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_159 = ___P1;
		NullCheck(L_159);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_160 = L_159->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_161 = V_6;
		PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A* L_162 = ___R2;
		NullCheck(L_162);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_163 = L_162->___X_0;
		NullCheck(L_158);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_158, L_160, L_161, L_163, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_164 = __this->___engine_0;
		NullCheck(L_164);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_165 = L_164->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_166 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_167 = V_7;
		NullCheck(L_165);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_165, L_166, L_167, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_168 = __this->___engine_0;
		NullCheck(L_168);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_169 = L_168->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_170 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_171 = V_7;
		PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A* L_172 = ___R2;
		NullCheck(L_172);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_173 = L_172->___Y_1;
		NullCheck(L_169);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_169, L_170, L_171, L_173, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_174 = __this->___engine_0;
		NullCheck(L_174);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_175 = L_174->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_176 = V_1;
		PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A* L_177 = ___R2;
		NullCheck(L_177);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_178 = L_177->___Z_2;
		NullCheck(L_175);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_175, L_176, L_178, NULL);
		return;
	}

IL_02e2:
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_179 = __this->___engine_0;
		NullCheck(L_179);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_180 = L_179->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_181 = V_0;
		PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A* L_182 = ___R2;
		NullCheck(L_182);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_183 = L_182->___X_0;
		NullCheck(L_180);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_180, L_181, L_183, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_184 = __this->___engine_0;
		NullCheck(L_184);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_185 = L_184->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_186 = V_1;
		PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A* L_187 = ___R2;
		NullCheck(L_187);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_188 = L_187->___Y_1;
		NullCheck(L_185);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_185, L_186, L_188, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_189 = __this->___engine_0;
		NullCheck(L_189);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_190 = L_189->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_191 = V_0;
		PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A* L_192 = ___R2;
		NullCheck(L_192);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_193 = L_192->___Z_2;
		NullCheck(L_190);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_190, L_191, L_193, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Ladder(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[],System.UInt64[][],System.UInt32,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Ladder_mCCE54B57257470D6CC9D9FDD6D3A89485F64F6B6 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___m1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A2, uint32_t ___order_bits3, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___R4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_0 = NULL;
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_3 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_3, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_7 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_7, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		V_6 = 0;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_13 = L_12->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_14 = __this->___engine_0;
		NullCheck(L_14);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_15 = L_14->___param_0;
		NullCheck(L_15);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = L_15->___Montgomery_one_65;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_13, L_16, ((int64_t)0), L_19, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_20 = __this->___engine_0;
		NullCheck(L_20);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_21 = L_20->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_25 = V_2;
		NullCheck(L_25);
		int32_t L_26 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_21);
		Fpx_fpaddPRIME_mFACB303487D8A75183EEFEC6178487CF426389B3(L_21, L_24, L_27, L_30, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_31 = __this->___engine_0;
		NullCheck(L_31);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_32 = L_31->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_33 = ___A2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_34 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_35 = V_2;
		NullCheck(L_32);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_32, L_33, L_34, L_35, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_36 = __this->___engine_0;
		NullCheck(L_36);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_37 = L_36->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_38 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_39 = V_2;
		NullCheck(L_37);
		Fpx_fp2div2_m6D6E7C9B591D9C2EEF23B4648BF5FB668045C0A2(L_37, L_38, L_39, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_40 = __this->___engine_0;
		NullCheck(L_40);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_41 = L_40->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_42 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_43 = V_2;
		NullCheck(L_41);
		Fpx_fp2div2_m6D6E7C9B591D9C2EEF23B4648BF5FB668045C0A2(L_41, L_42, L_43, NULL);
		uint32_t L_44 = ___order_bits3;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, 1));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_45 = ___m1;
		int32_t L_46 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		uint32_t L_47 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___LOG2RADIX_1;
		NullCheck(L_45);
		int32_t L_48 = ((int32_t)(L_46>>((int32_t)((int32_t)L_47&((int32_t)31)))));
		int64_t L_49 = (int64_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		int32_t L_50 = V_4;
		uint32_t L_51 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		V_7 = ((int32_t)(uint32_t)((int64_t)(((int64_t)((uint64_t)L_49>>((int32_t)(((int32_t)((int64_t)(((int64_t)L_50)&((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_51, 1)))))))&((int32_t)63)))))&((int64_t)1))));
		goto IL_0111;
	}

IL_00e7:
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = ___m1;
		int32_t L_54 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		uint32_t L_55 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___LOG2RADIX_1;
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54>>((int32_t)((int32_t)L_55&((int32_t)31)))));
		int64_t L_57 = (int64_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		int32_t L_58 = V_4;
		uint32_t L_59 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		V_7 = ((int32_t)(uint32_t)((int64_t)(((int64_t)((uint64_t)L_57>>((int32_t)(((int32_t)((int64_t)(((int64_t)L_58)&((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_59, 1)))))))&((int32_t)63)))))&((int64_t)1))));
	}

IL_0111:
	{
		uint32_t L_60 = V_7;
		if (!L_60)
		{
			goto IL_00e7;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_61 = __this->___engine_0;
		NullCheck(L_61);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_62 = L_61->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_63 = ___P0;
		NullCheck(L_63);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_64 = L_63->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_65 = V_0;
		NullCheck(L_65);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_66 = L_65->___X_0;
		NullCheck(L_62);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_62, L_64, L_66, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_67 = __this->___engine_0;
		NullCheck(L_67);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_68 = L_67->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_69 = ___P0;
		NullCheck(L_69);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_70 = L_69->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_71 = V_0;
		NullCheck(L_71);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_72 = L_71->___Z_1;
		NullCheck(L_68);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_68, L_70, L_72, NULL);
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_73 = ___P0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_74 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_75 = V_2;
		Isogeny_XDblE_m2F2BEE8F6ACD774D562E30366BF812DCDE8DD61E(__this, L_73, L_74, L_75, 1, NULL);
		int32_t L_76 = V_4;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_76, 1));
		goto IL_01bb;
	}

IL_015f:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_77 = ___m1;
		int32_t L_78 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		uint32_t L_79 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___LOG2RADIX_1;
		NullCheck(L_77);
		int32_t L_80 = ((int32_t)(L_78>>((int32_t)((int32_t)L_79&((int32_t)31)))));
		int64_t L_81 = (int64_t)(L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		int32_t L_82 = V_8;
		uint32_t L_83 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		V_7 = ((int32_t)(uint32_t)((int64_t)(((int64_t)((uint64_t)L_81>>((int32_t)(((int32_t)((int64_t)(((int64_t)L_82)&((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_83, 1)))))))&((int32_t)63)))))&((int64_t)1))));
		uint32_t L_84 = V_7;
		int32_t L_85 = V_6;
		V_5 = ((int32_t)((int64_t)(((int64_t)(uint64_t)L_84)^((int64_t)L_85))));
		uint32_t L_86 = V_7;
		V_6 = L_86;
		int32_t L_87 = V_5;
		V_3 = ((int64_t)((int32_t)il2cpp_codegen_subtract(0, L_87)));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_88 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_89 = V_1;
		uint64_t L_90 = V_3;
		Isogeny_SwapPoints_m1D2C97D8AE72417E75758F0C584E54627EE0496A(__this, L_88, L_89, L_90, NULL);
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_91 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_92 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_93 = ___P0;
		NullCheck(L_93);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_94 = L_93->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_95 = ___P0;
		NullCheck(L_95);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_96 = L_95->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_97 = V_2;
		Isogeny_XDblAddProj_m461E716CD53A01B711378E5958013D74AC1BAF81(__this, L_91, L_92, L_94, L_96, L_97, NULL);
		int32_t L_98 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_98, 1));
	}

IL_01bb:
	{
		int32_t L_99 = V_8;
		if ((((int32_t)L_99) >= ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_100 = V_6;
		V_5 = ((int32_t)(0^L_100));
		int32_t L_101 = V_5;
		V_3 = ((int64_t)((int32_t)il2cpp_codegen_subtract(0, L_101)));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_102 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_103 = V_1;
		uint64_t L_104 = V_3;
		Isogeny_SwapPoints_m1D2C97D8AE72417E75758F0C584E54627EE0496A(__this, L_102, L_103, L_104, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_105 = __this->___engine_0;
		NullCheck(L_105);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_106 = L_105->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_107 = V_0;
		NullCheck(L_107);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_108 = L_107->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_109 = ___R4;
		NullCheck(L_109);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_110 = L_109->___X_0;
		NullCheck(L_106);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_106, L_108, L_110, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_111 = __this->___engine_0;
		NullCheck(L_111);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_112 = L_111->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_113 = V_0;
		NullCheck(L_113);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_114 = L_113->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_115 = ___R4;
		NullCheck(L_115);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_116 = L_115->___Z_1;
		NullCheck(L_112);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_112, L_114, L_116, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XDblAddProj(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XDblAddProj_m461E716CD53A01B711378E5958013D74AC1BAF81 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___XPQ2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___ZPQ3, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A244, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_13 = L_12->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_14 = ___P0;
		NullCheck(L_14);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_15 = L_14->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_16 = ___P0;
		NullCheck(L_16);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_17 = L_16->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_18 = V_0;
		NullCheck(L_13);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_13, L_15, L_17, L_18, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_19 = __this->___engine_0;
		NullCheck(L_19);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_20 = L_19->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_21 = ___P0;
		NullCheck(L_21);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_22 = L_21->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_23 = ___P0;
		NullCheck(L_23);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_24 = L_23->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_25 = V_1;
		NullCheck(L_20);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_20, L_22, L_24, L_25, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_26 = __this->___engine_0;
		NullCheck(L_26);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_27 = L_26->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_28 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_29 = ___P0;
		NullCheck(L_29);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_30 = L_29->___X_0;
		NullCheck(L_27);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_27, L_28, L_30, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_31 = __this->___engine_0;
		NullCheck(L_31);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_32 = L_31->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_33 = ___Q1;
		NullCheck(L_33);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_34 = L_33->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_35 = ___Q1;
		NullCheck(L_35);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_36 = L_35->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_37 = V_2;
		NullCheck(L_32);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_32, L_34, L_36, L_37, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_38 = __this->___engine_0;
		NullCheck(L_38);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_39 = L_38->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_40 = V_2;
		NullCheck(L_39);
		Fpx_fp2correction_mCE341AA63E6B2984F0332DAA8C1F586B02488690(L_39, L_40, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_41 = __this->___engine_0;
		NullCheck(L_41);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_42 = L_41->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_43 = ___Q1;
		NullCheck(L_43);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_44 = L_43->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_45 = ___Q1;
		NullCheck(L_45);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_46 = L_45->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_47 = ___Q1;
		NullCheck(L_47);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = L_47->___X_0;
		NullCheck(L_42);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_42, L_44, L_46, L_48, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_49 = __this->___engine_0;
		NullCheck(L_49);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_50 = L_49->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_51 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_52 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_53 = V_0;
		NullCheck(L_50);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_50, L_51, L_52, L_53, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_54 = __this->___engine_0;
		NullCheck(L_54);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_55 = L_54->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_56 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_57 = ___P0;
		NullCheck(L_57);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_58 = L_57->___Z_1;
		NullCheck(L_55);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_55, L_56, L_58, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_59 = __this->___engine_0;
		NullCheck(L_59);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_60 = L_59->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_61 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_62 = ___Q1;
		NullCheck(L_62);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_63 = L_62->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_64 = V_1;
		NullCheck(L_60);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_60, L_61, L_63, L_64, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_65 = __this->___engine_0;
		NullCheck(L_65);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_66 = L_65->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_67 = ___P0;
		NullCheck(L_67);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = L_67->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_69 = ___P0;
		NullCheck(L_69);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_70 = L_69->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_71 = V_2;
		NullCheck(L_66);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_66, L_68, L_70, L_71, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_72 = __this->___engine_0;
		NullCheck(L_72);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_73 = L_72->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_74 = ___P0;
		NullCheck(L_74);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_75 = L_74->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_76 = ___P0;
		NullCheck(L_76);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_77 = L_76->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_78 = ___P0;
		NullCheck(L_78);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_79 = L_78->___X_0;
		NullCheck(L_73);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_73, L_75, L_77, L_79, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_80 = __this->___engine_0;
		NullCheck(L_80);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_81 = L_80->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_82 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_83 = ___A244;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_84 = ___Q1;
		NullCheck(L_84);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_85 = L_84->___X_0;
		NullCheck(L_81);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_81, L_82, L_83, L_85, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_86 = __this->___engine_0;
		NullCheck(L_86);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_87 = L_86->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_88 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_89 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_90 = ___Q1;
		NullCheck(L_90);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_91 = L_90->___Z_1;
		NullCheck(L_87);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_87, L_88, L_89, L_91, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_92 = __this->___engine_0;
		NullCheck(L_92);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_93 = L_92->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_94 = ___Q1;
		NullCheck(L_94);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_95 = L_94->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_96 = ___P0;
		NullCheck(L_96);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_97 = L_96->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_98 = ___P0;
		NullCheck(L_98);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_99 = L_98->___Z_1;
		NullCheck(L_93);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_93, L_95, L_97, L_99, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_100 = __this->___engine_0;
		NullCheck(L_100);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_101 = L_100->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_102 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_103 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_104 = ___Q1;
		NullCheck(L_104);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_105 = L_104->___X_0;
		NullCheck(L_101);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_101, L_102, L_103, L_105, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_106 = __this->___engine_0;
		NullCheck(L_106);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_107 = L_106->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_108 = ___P0;
		NullCheck(L_108);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_109 = L_108->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_110 = V_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_111 = ___P0;
		NullCheck(L_111);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_112 = L_111->___Z_1;
		NullCheck(L_107);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_107, L_109, L_110, L_112, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_113 = __this->___engine_0;
		NullCheck(L_113);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_114 = L_113->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_115 = ___Q1;
		NullCheck(L_115);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_116 = L_115->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_117 = ___Q1;
		NullCheck(L_117);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_118 = L_117->___Z_1;
		NullCheck(L_114);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_114, L_116, L_118, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_119 = __this->___engine_0;
		NullCheck(L_119);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_120 = L_119->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_121 = ___Q1;
		NullCheck(L_121);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_122 = L_121->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_123 = ___Q1;
		NullCheck(L_123);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_124 = L_123->___X_0;
		NullCheck(L_120);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_120, L_122, L_124, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_125 = __this->___engine_0;
		NullCheck(L_125);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_126 = L_125->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_127 = ___Q1;
		NullCheck(L_127);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_128 = L_127->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_129 = ___ZPQ3;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_130 = ___Q1;
		NullCheck(L_130);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_131 = L_130->___X_0;
		NullCheck(L_126);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_126, L_128, L_129, L_131, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_132 = __this->___engine_0;
		NullCheck(L_132);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_133 = L_132->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_134 = ___Q1;
		NullCheck(L_134);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_135 = L_134->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_136 = ___XPQ2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_137 = ___Q1;
		NullCheck(L_137);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_138 = L_137->___Z_1;
		NullCheck(L_133);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_133, L_135, L_136, L_138, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XDblE(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XDblE_m2F2BEE8F6ACD774D562E30366BF812DCDE8DD61E (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A242, int32_t ___e3, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_3 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_4 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_5 = NULL;
	int32_t V_6 = 0;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_13 = L_12->___param_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_15;
		L_15 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_14, NULL);
		V_3 = L_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_17 = L_16->___param_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_19;
		L_19 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_18, NULL);
		V_4 = L_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_20 = __this->___engine_0;
		NullCheck(L_20);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_21 = L_20->___param_0;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_23;
		L_23 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_22, NULL);
		V_5 = L_23;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_24 = __this->___engine_0;
		NullCheck(L_24);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_25 = L_24->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_26 = ___P0;
		NullCheck(L_26);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_27 = L_26->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_28 = ___Q1;
		NullCheck(L_28);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_29 = L_28->___X_0;
		NullCheck(L_25);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_25, L_27, L_29, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_30 = __this->___engine_0;
		NullCheck(L_30);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_31 = L_30->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_32 = ___P0;
		NullCheck(L_32);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_33 = L_32->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_34 = ___Q1;
		NullCheck(L_34);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_35 = L_34->___Z_1;
		NullCheck(L_31);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_31, L_33, L_35, NULL);
		V_6 = 0;
		goto IL_01a0;
	}

IL_00cc:
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_36 = __this->___engine_0;
		NullCheck(L_36);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_37 = L_36->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_38 = ___Q1;
		NullCheck(L_38);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_39 = L_38->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_40 = ___Q1;
		NullCheck(L_40);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_41 = L_40->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_42 = V_1;
		NullCheck(L_37);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_37, L_39, L_41, L_42, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_43 = __this->___engine_0;
		NullCheck(L_43);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_44 = L_43->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_45 = ___Q1;
		NullCheck(L_45);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_46 = L_45->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_47 = ___Q1;
		NullCheck(L_47);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = L_47->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_49 = V_2;
		NullCheck(L_44);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_44, L_46, L_48, L_49, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_50 = __this->___engine_0;
		NullCheck(L_50);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_51 = L_50->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_52 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_53 = V_4;
		NullCheck(L_51);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_51, L_52, L_53, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_54 = __this->___engine_0;
		NullCheck(L_54);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_55 = L_54->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_56 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_57 = V_5;
		NullCheck(L_55);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_55, L_56, L_57, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_58 = __this->___engine_0;
		NullCheck(L_58);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_59 = L_58->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_60 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_61 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_62 = V_3;
		NullCheck(L_59);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_59, L_60, L_61, L_62, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_63 = __this->___engine_0;
		NullCheck(L_63);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_64 = L_63->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_65 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_66 = V_5;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_67 = ___Q1;
		NullCheck(L_67);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = L_67->___X_0;
		NullCheck(L_64);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_64, L_65, L_66, L_68, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_69 = __this->___engine_0;
		NullCheck(L_69);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_70 = L_69->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_71 = ___A242;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_72 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_73 = V_0;
		NullCheck(L_70);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_70, L_71, L_72, L_73, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_74 = __this->___engine_0;
		NullCheck(L_74);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_75 = L_74->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_76 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_77 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_78 = V_0;
		NullCheck(L_75);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_75, L_76, L_77, L_78, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_79 = __this->___engine_0;
		NullCheck(L_79);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_80 = L_79->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_81 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_82 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_83 = ___Q1;
		NullCheck(L_83);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_84 = L_83->___Z_1;
		NullCheck(L_80);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_80, L_81, L_82, L_84, NULL);
		int32_t L_85 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_01a0:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___e3;
		if ((((int32_t)L_86) < ((int32_t)L_87)))
		{
			goto IL_00cc;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XTplEFast(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XTplEFast_m9BC28E4B489A099EB09203AA311FF2FCB616D0BC (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A22, uint32_t ___e3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_0 = NULL;
	int32_t V_1 = 0;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_3 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_3, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_5 = L_4->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_6 = ___P0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_7 = V_0;
		NullCheck(L_5);
		Fpx_copy_words_mB93FD5D6B53AEE8D0698FD8B352FC5AB3F8644DB(L_5, L_6, L_7, NULL);
		V_1 = 0;
		goto IL_0039;
	}

IL_002c:
	{
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_8 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_9 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_10 = ___A22;
		Isogeny_XTplFast_m277EB46F916DFE54B3DEC790AD991644EC5E6B4E(__this, L_8, L_9, L_10, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0039:
	{
		int32_t L_12 = V_1;
		uint32_t L_13 = ___e3;
		if ((((int64_t)((int64_t)L_12)) < ((int64_t)((int64_t)(uint64_t)L_13))))
		{
			goto IL_002c;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_14 = __this->___engine_0;
		NullCheck(L_14);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_15 = L_14->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_16 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_17 = ___Q1;
		NullCheck(L_15);
		Fpx_copy_words_mB93FD5D6B53AEE8D0698FD8B352FC5AB3F8644DB(L_15, L_16, L_17, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XTplFast(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XTplFast_m277EB46F916DFE54B3DEC790AD991644EC5E6B4E (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A22, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_3 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_13 = L_12->___param_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_15;
		L_15 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_14, NULL);
		V_3 = L_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_17 = L_16->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_18 = ___P0;
		NullCheck(L_18);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_19 = L_18->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_20 = V_0;
		NullCheck(L_17);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_17, L_19, L_20, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_21 = __this->___engine_0;
		NullCheck(L_21);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_22 = L_21->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_23 = ___P0;
		NullCheck(L_23);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_24 = L_23->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_25 = V_1;
		NullCheck(L_22);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_22, L_24, L_25, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_26 = __this->___engine_0;
		NullCheck(L_26);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_27 = L_26->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_28 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_29 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_30 = V_2;
		NullCheck(L_27);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_27, L_28, L_29, L_30, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_31 = __this->___engine_0;
		NullCheck(L_31);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_32 = L_31->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_33 = ___P0;
		NullCheck(L_33);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_34 = L_33->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_35 = ___P0;
		NullCheck(L_35);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_36 = L_35->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_37 = V_3;
		NullCheck(L_32);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_32, L_34, L_36, L_37, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_38 = __this->___engine_0;
		NullCheck(L_38);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_39 = L_38->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_40 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_41 = V_3;
		NullCheck(L_39);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_39, L_40, L_41, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_42 = __this->___engine_0;
		NullCheck(L_42);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_43 = L_42->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_44 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_45 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_46 = V_3;
		NullCheck(L_43);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_43, L_44, L_45, L_46, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_47 = __this->___engine_0;
		NullCheck(L_47);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_48 = L_47->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_49 = ___A22;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_50 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_51 = V_3;
		NullCheck(L_48);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_48, L_49, L_50, L_51, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_52 = __this->___engine_0;
		NullCheck(L_52);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_53 = L_52->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_54 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_55 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_56 = V_3;
		NullCheck(L_53);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_53, L_54, L_55, L_56, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_57 = __this->___engine_0;
		NullCheck(L_57);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_58 = L_57->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_59 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_60 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_61 = V_2;
		NullCheck(L_58);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_58, L_59, L_60, L_61, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_62 = __this->___engine_0;
		NullCheck(L_62);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_63 = L_62->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_64 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_65 = V_2;
		NullCheck(L_63);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_63, L_64, L_65, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_66 = __this->___engine_0;
		NullCheck(L_66);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_67 = L_66->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_69 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_70 = V_0;
		NullCheck(L_67);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_67, L_68, L_69, L_70, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_71 = __this->___engine_0;
		NullCheck(L_71);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_72 = L_71->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_73 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_74 = V_0;
		NullCheck(L_72);
		Fpx_fp2shl_mD2BA9DDD435A9C3110F6262A3472D6F4C2FABCF7(L_72, L_73, 2, L_74, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_75 = __this->___engine_0;
		NullCheck(L_75);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_76 = L_75->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_77 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_78 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_79 = V_0;
		NullCheck(L_76);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_76, L_77, L_78, L_79, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_80 = __this->___engine_0;
		NullCheck(L_80);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_81 = L_80->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_82 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_83 = V_0;
		NullCheck(L_81);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_81, L_82, L_83, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_84 = __this->___engine_0;
		NullCheck(L_84);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_85 = L_84->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_86 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_87 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_88 = V_1;
		NullCheck(L_85);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_85, L_86, L_87, L_88, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_89 = __this->___engine_0;
		NullCheck(L_89);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_90 = L_89->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_91 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_92 = V_1;
		NullCheck(L_90);
		Fpx_fp2shl_mD2BA9DDD435A9C3110F6262A3472D6F4C2FABCF7(L_90, L_91, 2, L_92, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_93 = __this->___engine_0;
		NullCheck(L_93);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_94 = L_93->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_95 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_96 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_97 = V_1;
		NullCheck(L_94);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_94, L_95, L_96, L_97, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_98 = __this->___engine_0;
		NullCheck(L_98);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_99 = L_98->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_100 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_101 = V_1;
		NullCheck(L_99);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_99, L_100, L_101, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_102 = __this->___engine_0;
		NullCheck(L_102);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_103 = L_102->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_104 = ___P0;
		NullCheck(L_104);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_105 = L_104->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_106 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_107 = ___Q1;
		NullCheck(L_107);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_108 = L_107->___X_0;
		NullCheck(L_103);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_103, L_105, L_106, L_108, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_109 = __this->___engine_0;
		NullCheck(L_109);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_110 = L_109->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_111 = ___P0;
		NullCheck(L_111);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_112 = L_111->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_113 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_114 = ___Q1;
		NullCheck(L_114);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_115 = L_114->___Z_1;
		NullCheck(L_110);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_110, L_112, L_113, L_115, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::LADDER3PT(System.UInt64[][],System.UInt64[][],System.UInt64[][],System.UInt64[],System.UInt32,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_LADDER3PT_m697E167624E95A4212EF745138F1E8B8E746BF5B (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xP0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xQ1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xPQ2, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___m3, uint32_t ___AliceOrBob4, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___R5, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_0 = NULL;
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	uint64_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_3 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_3, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_7 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_7, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		V_7 = 0;
		uint32_t L_12 = ___AliceOrBob4;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_13 = __this->___engine_0;
		NullCheck(L_13);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_14 = L_13->___param_0;
		NullCheck(L_14);
		uint32_t L_15 = L_14->___ALICE_16;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_15))))
		{
			goto IL_006e;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_17 = L_16->___param_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___OALICE_BITS_18;
		V_5 = L_18;
		goto IL_0082;
	}

IL_006e:
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_19 = __this->___engine_0;
		NullCheck(L_19);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_20 = L_19->___param_0;
		NullCheck(L_20);
		uint32_t L_21 = L_20->___OBOB_BITS_19;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, 1));
	}

IL_0082:
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_22 = __this->___engine_0;
		NullCheck(L_22);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_23 = L_22->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_24 = __this->___engine_0;
		NullCheck(L_24);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_25 = L_24->___param_0;
		NullCheck(L_25);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = L_25->___Montgomery_one_65;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_23);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_23, L_26, ((int64_t)0), L_29, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_30 = __this->___engine_0;
		NullCheck(L_30);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_31 = L_30->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_32 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_33 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_34 = V_2;
		NullCheck(L_31);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_31, L_32, L_33, L_34, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_35 = __this->___engine_0;
		NullCheck(L_35);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_36 = L_35->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_37 = ___A6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_38 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_39 = V_2;
		NullCheck(L_36);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_36, L_37, L_38, L_39, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_40 = __this->___engine_0;
		NullCheck(L_40);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_41 = L_40->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_42 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_43 = V_2;
		NullCheck(L_41);
		Fpx_fp2div2_m6D6E7C9B591D9C2EEF23B4648BF5FB668045C0A2(L_41, L_42, L_43, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_44 = __this->___engine_0;
		NullCheck(L_44);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_45 = L_44->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_46 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_47 = V_2;
		NullCheck(L_45);
		Fpx_fp2div2_m6D6E7C9B591D9C2EEF23B4648BF5FB668045C0A2(L_45, L_46, L_47, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_48 = __this->___engine_0;
		NullCheck(L_48);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_49 = L_48->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_50 = ___xQ1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_51 = V_0;
		NullCheck(L_51);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_52 = L_51->___X_0;
		NullCheck(L_49);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_49, L_50, L_52, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_53 = __this->___engine_0;
		NullCheck(L_53);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_54 = L_53->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_55 = __this->___engine_0;
		NullCheck(L_55);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_56 = L_55->___param_0;
		NullCheck(L_56);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_57 = L_56->___Montgomery_one_65;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_58 = V_0;
		NullCheck(L_58);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_59 = L_58->___Z_1;
		NullCheck(L_59);
		int32_t L_60 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_54);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_54, L_57, ((int64_t)0), L_61, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_62 = __this->___engine_0;
		NullCheck(L_62);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_63 = L_62->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_64 = ___xPQ2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_65 = V_1;
		NullCheck(L_65);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_66 = L_65->___X_0;
		NullCheck(L_63);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_63, L_64, L_66, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_67 = __this->___engine_0;
		NullCheck(L_67);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_68 = L_67->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_69 = __this->___engine_0;
		NullCheck(L_69);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_70 = L_69->___param_0;
		NullCheck(L_70);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_71 = L_70->___Montgomery_one_65;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_72 = V_1;
		NullCheck(L_72);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_73 = L_72->___Z_1;
		NullCheck(L_73);
		int32_t L_74 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_68);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_68, L_71, ((int64_t)0), L_75, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_76 = __this->___engine_0;
		NullCheck(L_76);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_77 = L_76->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_78 = ___xP0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_79 = ___R5;
		NullCheck(L_79);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_80 = L_79->___X_0;
		NullCheck(L_77);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_77, L_78, L_80, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_81 = __this->___engine_0;
		NullCheck(L_81);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_82 = L_81->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_83 = __this->___engine_0;
		NullCheck(L_83);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_84 = L_83->___param_0;
		NullCheck(L_84);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_85 = L_84->___Montgomery_one_65;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_86 = ___R5;
		NullCheck(L_86);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_87 = L_86->___Z_1;
		NullCheck(L_87);
		int32_t L_88 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		NullCheck(L_82);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_82, L_85, ((int64_t)0), L_89, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_90 = __this->___engine_0;
		NullCheck(L_90);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_91 = L_90->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_92 = ___R5;
		NullCheck(L_92);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_93 = L_92->___Z_1;
		NullCheck(L_93);
		int32_t L_94 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_91);
		Fpx_fpzero_m1FE9F196233A44E38C643C8E9212ECB369B1C320(L_91, L_95, NULL);
		V_4 = 0;
		goto IL_0247;
	}

IL_01d5:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_96 = ___m3;
		uint32_t L_97 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		uint32_t L_98 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___LOG2RADIX_1;
		NullCheck(L_96);
		int32_t L_99 = ((int32_t)((uint32_t)L_97>>((int32_t)((int32_t)L_98&((int32_t)31)))));
		int64_t L_100 = (int64_t)(L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		uint32_t L_101 = V_4;
		uint32_t L_102 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		int32_t L_103 = ((int32_t)(uint32_t)((int64_t)(((int64_t)((uint64_t)L_100>>((int32_t)(((int32_t)((int32_t)L_101&((int32_t)il2cpp_codegen_subtract((int32_t)L_102, 1))))&((int32_t)63)))))&((int64_t)1))));
		uint32_t L_104 = V_7;
		V_6 = ((int32_t)(L_103^(int32_t)L_104));
		V_7 = L_103;
		uint32_t L_105 = V_6;
		V_3 = ((int64_t)il2cpp_codegen_subtract(((int64_t)0), ((int64_t)(uint64_t)L_105)));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_106 = ___R5;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_107 = V_1;
		uint64_t L_108 = V_3;
		Isogeny_SwapPoints_m1D2C97D8AE72417E75758F0C584E54627EE0496A(__this, L_106, L_107, L_108, NULL);
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_109 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_110 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_111 = ___R5;
		NullCheck(L_111);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_112 = L_111->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_113 = V_2;
		Isogeny_XDblAdd_m29F954796B207528D9730A25AB9F4FD2E6067EDD(__this, L_109, L_110, L_112, L_113, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_114 = __this->___engine_0;
		NullCheck(L_114);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_115 = L_114->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_116 = V_1;
		NullCheck(L_116);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_117 = L_116->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_118 = ___R5;
		NullCheck(L_118);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_119 = L_118->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_120 = V_1;
		NullCheck(L_120);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_121 = L_120->___X_0;
		NullCheck(L_115);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_115, L_117, L_119, L_121, NULL);
		uint32_t L_122 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, 1));
	}

IL_0247:
	{
		uint32_t L_123 = V_4;
		uint32_t L_124 = V_5;
		if ((!(((uint32_t)L_123) >= ((uint32_t)L_124))))
		{
			goto IL_01d5;
		}
	}
	{
		uint32_t L_125 = V_7;
		V_6 = ((int32_t)(0^(int32_t)L_125));
		uint32_t L_126 = V_6;
		V_3 = ((int64_t)il2cpp_codegen_subtract(((int64_t)0), ((int64_t)(uint64_t)L_126)));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_127 = ___R5;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_128 = V_1;
		uint64_t L_129 = V_3;
		Isogeny_SwapPoints_m1D2C97D8AE72417E75758F0C584E54627EE0496A(__this, L_127, L_128, L_129, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::CompletePoint(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProjFull)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_CompletePoint_mA9F7B63D7B423FCFBFED48614ED94571494FB5B0 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A* ___R1, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_3 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_4 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_5 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_6 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_7 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_13 = L_12->___param_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_15;
		L_15 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_14, NULL);
		V_3 = L_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_17 = L_16->___param_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_19;
		L_19 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_18, NULL);
		V_4 = L_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_20 = __this->___engine_0;
		NullCheck(L_20);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_21 = L_20->___param_0;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_23;
		L_23 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_22, NULL);
		V_5 = L_23;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_24 = __this->___engine_0;
		NullCheck(L_24);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_25 = L_24->___param_0;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_27;
		L_27 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_26, NULL);
		V_6 = L_27;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_28 = __this->___engine_0;
		NullCheck(L_28);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_29 = L_28->___param_0;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_31;
		L_31 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_30, NULL);
		V_7 = L_31;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_32 = __this->___engine_0;
		NullCheck(L_32);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_33 = L_32->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_34 = __this->___engine_0;
		NullCheck(L_34);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_35 = L_34->___param_0;
		NullCheck(L_35);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_36 = L_35->___Montgomery_one_65;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_37 = V_7;
		NullCheck(L_37);
		int32_t L_38 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_33, L_36, ((int64_t)0), L_39, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_40 = __this->___engine_0;
		NullCheck(L_40);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_41 = L_40->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_42 = ___P0;
		NullCheck(L_42);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_43 = L_42->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_44 = ___P0;
		NullCheck(L_44);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_45 = L_44->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_46 = V_0;
		NullCheck(L_41);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_41, L_43, L_45, L_46, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_47 = __this->___engine_0;
		NullCheck(L_47);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_48 = L_47->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_49 = ___P0;
		NullCheck(L_49);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_50 = L_49->___X_0;
		NullCheck(L_50);
		int32_t L_51 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_53 = ___P0;
		NullCheck(L_53);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_54 = L_53->___Z_1;
		NullCheck(L_54);
		int32_t L_55 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_57 = V_5;
		NullCheck(L_57);
		int32_t L_58 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_48);
		Fpx_fpsubPRIME_mBA46B5FA9D18C45A2573F8B8827C3E194668EED2(L_48, L_52, L_56, L_59, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_60 = __this->___engine_0;
		NullCheck(L_60);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_61 = L_60->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_62 = ___P0;
		NullCheck(L_62);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_63 = L_62->___X_0;
		NullCheck(L_63);
		int32_t L_64 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_66 = ___P0;
		NullCheck(L_66);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_67 = L_66->___Z_1;
		NullCheck(L_67);
		int32_t L_68 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_70 = V_5;
		NullCheck(L_70);
		int32_t L_71 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_61);
		Fpx_fpaddPRIME_mFACB303487D8A75183EEFEC6178487CF426389B3(L_61, L_65, L_69, L_72, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_73 = __this->___engine_0;
		NullCheck(L_73);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_74 = L_73->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_75 = ___P0;
		NullCheck(L_75);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_76 = L_75->___X_0;
		NullCheck(L_76);
		int32_t L_77 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_79 = ___P0;
		NullCheck(L_79);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_80 = L_79->___Z_1;
		NullCheck(L_80);
		int32_t L_81 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_83 = V_6;
		NullCheck(L_83);
		int32_t L_84 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_74);
		Fpx_fpaddPRIME_mFACB303487D8A75183EEFEC6178487CF426389B3(L_74, L_78, L_82, L_85, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_86 = __this->___engine_0;
		NullCheck(L_86);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_87 = L_86->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_88 = ___P0;
		NullCheck(L_88);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_89 = L_88->___X_0;
		NullCheck(L_89);
		int32_t L_90 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_92 = ___P0;
		NullCheck(L_92);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_93 = L_92->___Z_1;
		NullCheck(L_93);
		int32_t L_94 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_96 = V_6;
		NullCheck(L_96);
		int32_t L_97 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_87);
		Fpx_fpsubPRIME_mBA46B5FA9D18C45A2573F8B8827C3E194668EED2(L_87, L_91, L_95, L_98, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_99 = __this->___engine_0;
		NullCheck(L_99);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_100 = L_99->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_101 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_102 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_103 = V_1;
		NullCheck(L_100);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_100, L_101, L_102, L_103, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_104 = __this->___engine_0;
		NullCheck(L_104);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_105 = L_104->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_106 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_107 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_108 = V_2;
		NullCheck(L_105);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_105, L_106, L_107, L_108, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_109 = __this->___engine_0;
		NullCheck(L_109);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_110 = L_109->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_111 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_112 = V_3;
		NullCheck(L_110);
		Fpx_sqrt_Fp2_mBAD2FE7526437FBB5F1A7AA19C5AD16E266A5473(L_110, L_111, L_112, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_113 = __this->___engine_0;
		NullCheck(L_113);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_114 = L_113->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_115 = ___P0;
		NullCheck(L_115);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_116 = L_115->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_117 = V_4;
		NullCheck(L_114);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_114, L_116, L_117, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_118 = __this->___engine_0;
		NullCheck(L_118);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_119 = L_118->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_120 = V_4;
		NullCheck(L_119);
		Fpx_fp2inv_mont_bingcd_mB0AEF7C42B0A607F6885D285489E1F29FB2AD31C(L_119, L_120, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_121 = __this->___engine_0;
		NullCheck(L_121);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_122 = L_121->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_123 = ___P0;
		NullCheck(L_123);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_124 = L_123->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_125 = V_4;
		PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A* L_126 = ___R1;
		NullCheck(L_126);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_127 = L_126->___X_0;
		NullCheck(L_122);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_122, L_124, L_125, L_127, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_128 = __this->___engine_0;
		NullCheck(L_128);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_129 = L_128->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_130 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_131 = V_5;
		NullCheck(L_129);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_129, L_130, L_131, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_132 = __this->___engine_0;
		NullCheck(L_132);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_133 = L_132->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_134 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_135 = V_5;
		PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A* L_136 = ___R1;
		NullCheck(L_136);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_137 = L_136->___Y_1;
		NullCheck(L_133);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_133, L_134, L_135, L_137, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_138 = __this->___engine_0;
		NullCheck(L_138);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_139 = L_138->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_140 = V_7;
		PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A* L_141 = ___R1;
		NullCheck(L_141);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_142 = L_141->___Z_2;
		NullCheck(L_139);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_139, L_140, L_142, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::SwapPoints(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_SwapPoints_m1D2C97D8AE72417E75758F0C584E54627EE0496A (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, uint64_t ___option2, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_011b;
	}

IL_0007:
	{
		uint64_t L_0 = ___option2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_1 = ___P0;
		NullCheck(L_1);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_2 = L_1->___X_0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_8 = ___Q1;
		NullCheck(L_8);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_9 = L_8->___X_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int64_t L_14 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int64_t)((int64_t)L_0&((int64_t)(L_7^L_14))));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_15 = ___P0;
		NullCheck(L_15);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_16 = L_15->___X_0;
		NullCheck(L_16);
		int32_t L_17 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_1;
		uint64_t L_20 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_21 = ___P0;
		NullCheck(L_21);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_22 = L_21->___X_0;
		NullCheck(L_22);
		int32_t L_23 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int64_t L_27 = (int64_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint64_t)((int64_t)((int64_t)L_20^L_27)));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_28 = ___Q1;
		NullCheck(L_28);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_29 = L_28->___X_0;
		NullCheck(L_29);
		int32_t L_30 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		int32_t L_32 = V_1;
		uint64_t L_33 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_34 = ___Q1;
		NullCheck(L_34);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_35 = L_34->___X_0;
		NullCheck(L_35);
		int32_t L_36 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		int64_t L_40 = (int64_t)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint64_t)((int64_t)((int64_t)L_33^L_40)));
		uint64_t L_41 = ___option2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_42 = ___P0;
		NullCheck(L_42);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_43 = L_42->___X_0;
		NullCheck(L_43);
		int32_t L_44 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		int32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int64_t L_48 = (int64_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_49 = ___Q1;
		NullCheck(L_49);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_50 = L_49->___X_0;
		NullCheck(L_50);
		int32_t L_51 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = V_1;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int64_t L_55 = (int64_t)(L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_0 = ((int64_t)((int64_t)L_41&((int64_t)(L_48^L_55))));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_56 = ___P0;
		NullCheck(L_56);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_57 = L_56->___X_0;
		NullCheck(L_57);
		int32_t L_58 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		int32_t L_60 = V_1;
		uint64_t L_61 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_62 = ___P0;
		NullCheck(L_62);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_63 = L_62->___X_0;
		NullCheck(L_63);
		int32_t L_64 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		int32_t L_66 = V_1;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		int64_t L_68 = (int64_t)(L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (uint64_t)((int64_t)((int64_t)L_61^L_68)));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_69 = ___Q1;
		NullCheck(L_69);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_70 = L_69->___X_0;
		NullCheck(L_70);
		int32_t L_71 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		int32_t L_73 = V_1;
		uint64_t L_74 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_75 = ___Q1;
		NullCheck(L_75);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_76 = L_75->___X_0;
		NullCheck(L_76);
		int32_t L_77 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		int32_t L_79 = V_1;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		int64_t L_81 = (int64_t)(L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (uint64_t)((int64_t)((int64_t)L_74^L_81)));
		uint64_t L_82 = ___option2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_83 = ___P0;
		NullCheck(L_83);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_84 = L_83->___Z_1;
		NullCheck(L_84);
		int32_t L_85 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = V_1;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		int64_t L_89 = (int64_t)(L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_90 = ___Q1;
		NullCheck(L_90);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_91 = L_90->___Z_1;
		NullCheck(L_91);
		int32_t L_92 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		int32_t L_94 = V_1;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		int64_t L_96 = (int64_t)(L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_0 = ((int64_t)((int64_t)L_82&((int64_t)(L_89^L_96))));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_97 = ___P0;
		NullCheck(L_97);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_98 = L_97->___Z_1;
		NullCheck(L_98);
		int32_t L_99 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		int32_t L_101 = V_1;
		uint64_t L_102 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_103 = ___P0;
		NullCheck(L_103);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_104 = L_103->___Z_1;
		NullCheck(L_104);
		int32_t L_105 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int32_t L_107 = V_1;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		int64_t L_109 = (int64_t)(L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(L_101), (uint64_t)((int64_t)((int64_t)L_102^L_109)));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_110 = ___Q1;
		NullCheck(L_110);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_111 = L_110->___Z_1;
		NullCheck(L_111);
		int32_t L_112 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_113 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		int32_t L_114 = V_1;
		uint64_t L_115 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_116 = ___Q1;
		NullCheck(L_116);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_117 = L_116->___Z_1;
		NullCheck(L_117);
		int32_t L_118 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		int32_t L_120 = V_1;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		int64_t L_122 = (int64_t)(L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(L_114), (uint64_t)((int64_t)((int64_t)L_115^L_122)));
		uint64_t L_123 = ___option2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_124 = ___P0;
		NullCheck(L_124);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_125 = L_124->___Z_1;
		NullCheck(L_125);
		int32_t L_126 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		int32_t L_128 = V_1;
		NullCheck(L_127);
		int32_t L_129 = L_128;
		int64_t L_130 = (int64_t)(L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_131 = ___Q1;
		NullCheck(L_131);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_132 = L_131->___Z_1;
		NullCheck(L_132);
		int32_t L_133 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		int32_t L_135 = V_1;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		int64_t L_137 = (int64_t)(L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		V_0 = ((int64_t)((int64_t)L_123&((int64_t)(L_130^L_137))));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_138 = ___P0;
		NullCheck(L_138);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_139 = L_138->___Z_1;
		NullCheck(L_139);
		int32_t L_140 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_141 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		int32_t L_142 = V_1;
		uint64_t L_143 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_144 = ___P0;
		NullCheck(L_144);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_145 = L_144->___Z_1;
		NullCheck(L_145);
		int32_t L_146 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_147 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		int32_t L_148 = V_1;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		int64_t L_150 = (int64_t)(L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(L_142), (uint64_t)((int64_t)((int64_t)L_143^L_150)));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_151 = ___Q1;
		NullCheck(L_151);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_152 = L_151->___Z_1;
		NullCheck(L_152);
		int32_t L_153 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		int32_t L_155 = V_1;
		uint64_t L_156 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_157 = ___Q1;
		NullCheck(L_157);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_158 = L_157->___Z_1;
		NullCheck(L_158);
		int32_t L_159 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_160 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		int32_t L_161 = V_1;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		int64_t L_163 = (int64_t)(L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_154);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(L_155), (uint64_t)((int64_t)((int64_t)L_156^L_163)));
		int32_t L_164 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_164, 1));
	}

IL_011b:
	{
		int32_t L_165 = V_1;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_166 = __this->___engine_0;
		NullCheck(L_166);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_167 = L_166->___param_0;
		NullCheck(L_167);
		uint32_t L_168 = L_167->___NWORDS_FIELD_6;
		if ((((int64_t)((int64_t)L_165)) < ((int64_t)((int64_t)(uint64_t)L_168))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XDblAdd(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XDblAdd_m29F954796B207528D9730A25AB9F4FD2E6067EDD (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xPQ2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A243, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_13 = L_12->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_14 = ___P0;
		NullCheck(L_14);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_15 = L_14->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_16 = ___P0;
		NullCheck(L_16);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_17 = L_16->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_18 = V_0;
		NullCheck(L_13);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_13, L_15, L_17, L_18, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_19 = __this->___engine_0;
		NullCheck(L_19);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_20 = L_19->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_21 = ___P0;
		NullCheck(L_21);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_22 = L_21->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_23 = ___P0;
		NullCheck(L_23);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_24 = L_23->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_25 = V_1;
		NullCheck(L_20);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_20, L_22, L_24, L_25, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_26 = __this->___engine_0;
		NullCheck(L_26);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_27 = L_26->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_28 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_29 = ___P0;
		NullCheck(L_29);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_30 = L_29->___X_0;
		NullCheck(L_27);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_27, L_28, L_30, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_31 = __this->___engine_0;
		NullCheck(L_31);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_32 = L_31->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_33 = ___Q1;
		NullCheck(L_33);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_34 = L_33->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_35 = ___Q1;
		NullCheck(L_35);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_36 = L_35->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_37 = V_2;
		NullCheck(L_32);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_32, L_34, L_36, L_37, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_38 = __this->___engine_0;
		NullCheck(L_38);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_39 = L_38->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_40 = ___Q1;
		NullCheck(L_40);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_41 = L_40->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_42 = ___Q1;
		NullCheck(L_42);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_43 = L_42->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_44 = ___Q1;
		NullCheck(L_44);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_45 = L_44->___X_0;
		NullCheck(L_39);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_39, L_41, L_43, L_45, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_46 = __this->___engine_0;
		NullCheck(L_46);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_47 = L_46->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_49 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_50 = V_0;
		NullCheck(L_47);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_47, L_48, L_49, L_50, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_51 = __this->___engine_0;
		NullCheck(L_51);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_52 = L_51->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_53 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_54 = ___P0;
		NullCheck(L_54);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_55 = L_54->___Z_1;
		NullCheck(L_52);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_52, L_53, L_55, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_56 = __this->___engine_0;
		NullCheck(L_56);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_57 = L_56->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_58 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_59 = ___Q1;
		NullCheck(L_59);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_60 = L_59->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_61 = V_1;
		NullCheck(L_57);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_57, L_58, L_60, L_61, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_62 = __this->___engine_0;
		NullCheck(L_62);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_63 = L_62->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_64 = ___P0;
		NullCheck(L_64);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_65 = L_64->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_66 = ___P0;
		NullCheck(L_66);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_67 = L_66->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = V_2;
		NullCheck(L_63);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_63, L_65, L_67, L_68, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_69 = __this->___engine_0;
		NullCheck(L_69);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_70 = L_69->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_71 = ___P0;
		NullCheck(L_71);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_72 = L_71->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_73 = ___P0;
		NullCheck(L_73);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_74 = L_73->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_75 = ___P0;
		NullCheck(L_75);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_76 = L_75->___X_0;
		NullCheck(L_70);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_70, L_72, L_74, L_76, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_77 = __this->___engine_0;
		NullCheck(L_77);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_78 = L_77->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_79 = ___A243;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_80 = V_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_81 = ___Q1;
		NullCheck(L_81);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_82 = L_81->___X_0;
		NullCheck(L_78);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_78, L_79, L_80, L_82, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_83 = __this->___engine_0;
		NullCheck(L_83);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_84 = L_83->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_85 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_86 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_87 = ___Q1;
		NullCheck(L_87);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_88 = L_87->___Z_1;
		NullCheck(L_84);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_84, L_85, L_86, L_88, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_89 = __this->___engine_0;
		NullCheck(L_89);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_90 = L_89->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_91 = ___Q1;
		NullCheck(L_91);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_92 = L_91->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_93 = ___P0;
		NullCheck(L_93);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_94 = L_93->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_95 = ___P0;
		NullCheck(L_95);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_96 = L_95->___Z_1;
		NullCheck(L_90);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_90, L_92, L_94, L_96, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_97 = __this->___engine_0;
		NullCheck(L_97);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_98 = L_97->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_99 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_100 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_101 = ___Q1;
		NullCheck(L_101);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_102 = L_101->___X_0;
		NullCheck(L_98);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_98, L_99, L_100, L_102, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_103 = __this->___engine_0;
		NullCheck(L_103);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_104 = L_103->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_105 = ___P0;
		NullCheck(L_105);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_106 = L_105->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_107 = V_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_108 = ___P0;
		NullCheck(L_108);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_109 = L_108->___Z_1;
		NullCheck(L_104);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_104, L_106, L_107, L_109, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_110 = __this->___engine_0;
		NullCheck(L_110);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_111 = L_110->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_112 = ___Q1;
		NullCheck(L_112);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_113 = L_112->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_114 = ___Q1;
		NullCheck(L_114);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_115 = L_114->___Z_1;
		NullCheck(L_111);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_111, L_113, L_115, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_116 = __this->___engine_0;
		NullCheck(L_116);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_117 = L_116->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_118 = ___Q1;
		NullCheck(L_118);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_119 = L_118->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_120 = ___Q1;
		NullCheck(L_120);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_121 = L_120->___X_0;
		NullCheck(L_117);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_117, L_119, L_121, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_122 = __this->___engine_0;
		NullCheck(L_122);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_123 = L_122->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_124 = ___Q1;
		NullCheck(L_124);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_125 = L_124->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_126 = ___xPQ2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_127 = ___Q1;
		NullCheck(L_127);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_128 = L_127->___Z_1;
		NullCheck(L_123);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_123, L_125, L_126, L_128, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XDblE(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XDblE_m0F743C7F0D64AA6B7B8765A580942A9B6831AD46 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24plus2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___C243, uint32_t ___e4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_1 = L_0->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_2 = ___P0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_3 = ___Q1;
		NullCheck(L_1);
		Fpx_copy_words_mB93FD5D6B53AEE8D0698FD8B352FC5AB3F8644DB(L_1, L_2, L_3, NULL);
		V_0 = 0;
		goto IL_0025;
	}

IL_0016:
	{
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_4 = ___Q1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_5 = ___Q1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_6 = ___A24plus2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7 = ___C243;
		Isogeny_XDbl_m85A8A67AEEFCBD2B8396BF760AABD41814008282(__this, L_4, L_5, L_6, L_7, NULL);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		int32_t L_9 = V_0;
		uint32_t L_10 = ___e4;
		if ((((int64_t)((int64_t)L_9)) < ((int64_t)((int64_t)(uint64_t)L_10))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XDbl(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XDbl_m85A8A67AEEFCBD2B8396BF760AABD41814008282 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24plus2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___C243, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_9 = L_8->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_10 = ___P0;
		NullCheck(L_10);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11 = L_10->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_12 = ___P0;
		NullCheck(L_12);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_13 = L_12->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_14 = V_0;
		NullCheck(L_9);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_9, L_11, L_13, L_14, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_15 = __this->___engine_0;
		NullCheck(L_15);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_16 = L_15->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_17 = ___P0;
		NullCheck(L_17);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_18 = L_17->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_19 = ___P0;
		NullCheck(L_19);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_20 = L_19->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_21 = V_1;
		NullCheck(L_16);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_16, L_18, L_20, L_21, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_22 = __this->___engine_0;
		NullCheck(L_22);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_23 = L_22->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_24 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_25 = V_0;
		NullCheck(L_23);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_23, L_24, L_25, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_26 = __this->___engine_0;
		NullCheck(L_26);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_27 = L_26->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_28 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_29 = V_1;
		NullCheck(L_27);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_27, L_28, L_29, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_30 = __this->___engine_0;
		NullCheck(L_30);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_31 = L_30->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_32 = ___C243;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_33 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_34 = ___Q1;
		NullCheck(L_34);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_35 = L_34->___Z_1;
		NullCheck(L_31);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_31, L_32, L_33, L_35, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_36 = __this->___engine_0;
		NullCheck(L_36);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_37 = L_36->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_38 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_39 = ___Q1;
		NullCheck(L_39);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_40 = L_39->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_41 = ___Q1;
		NullCheck(L_41);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_42 = L_41->___X_0;
		NullCheck(L_37);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_37, L_38, L_40, L_42, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_43 = __this->___engine_0;
		NullCheck(L_43);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_44 = L_43->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_45 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_46 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_47 = V_1;
		NullCheck(L_44);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_44, L_45, L_46, L_47, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_48 = __this->___engine_0;
		NullCheck(L_48);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_49 = L_48->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_50 = ___A24plus2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_51 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_52 = V_0;
		NullCheck(L_49);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_49, L_50, L_51, L_52, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_53 = __this->___engine_0;
		NullCheck(L_53);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_54 = L_53->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_55 = ___Q1;
		NullCheck(L_55);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_56 = L_55->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_57 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_58 = ___Q1;
		NullCheck(L_58);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_59 = L_58->___Z_1;
		NullCheck(L_54);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_54, L_56, L_57, L_59, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_60 = __this->___engine_0;
		NullCheck(L_60);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_61 = L_60->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_62 = ___Q1;
		NullCheck(L_62);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_63 = L_62->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_64 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_65 = ___Q1;
		NullCheck(L_65);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_66 = L_65->___Z_1;
		NullCheck(L_61);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_61, L_63, L_64, L_66, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XTpl(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XTpl_mEE4B248A6E68E53BD0B88EA460CE17B640BDF28A (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24minus2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24plus3, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_3 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_4 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_5 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_6 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_13 = L_12->___param_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_15;
		L_15 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_14, NULL);
		V_3 = L_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_17 = L_16->___param_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_19;
		L_19 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_18, NULL);
		V_4 = L_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_20 = __this->___engine_0;
		NullCheck(L_20);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_21 = L_20->___param_0;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_23;
		L_23 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_22, NULL);
		V_5 = L_23;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_24 = __this->___engine_0;
		NullCheck(L_24);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_25 = L_24->___param_0;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_27;
		L_27 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_26, NULL);
		V_6 = L_27;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_28 = __this->___engine_0;
		NullCheck(L_28);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_29 = L_28->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_30 = ___P0;
		NullCheck(L_30);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_31 = L_30->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_32 = ___P0;
		NullCheck(L_32);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_33 = L_32->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_34 = V_0;
		NullCheck(L_29);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_29, L_31, L_33, L_34, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_35 = __this->___engine_0;
		NullCheck(L_35);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_36 = L_35->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_37 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_38 = V_2;
		NullCheck(L_36);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_36, L_37, L_38, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_39 = __this->___engine_0;
		NullCheck(L_39);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_40 = L_39->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_41 = ___P0;
		NullCheck(L_41);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_42 = L_41->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_43 = ___P0;
		NullCheck(L_43);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_44 = L_43->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_45 = V_1;
		NullCheck(L_40);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_40, L_42, L_44, L_45, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_46 = __this->___engine_0;
		NullCheck(L_46);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_47 = L_46->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_49 = V_3;
		NullCheck(L_47);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_47, L_48, L_49, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_50 = __this->___engine_0;
		NullCheck(L_50);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_51 = L_50->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_52 = ___P0;
		NullCheck(L_52);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_53 = L_52->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_54 = ___P0;
		NullCheck(L_54);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_55 = L_54->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_56 = V_4;
		NullCheck(L_51);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_51, L_53, L_55, L_56, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_57 = __this->___engine_0;
		NullCheck(L_57);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_58 = L_57->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_59 = ___P0;
		NullCheck(L_59);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_60 = L_59->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_61 = ___P0;
		NullCheck(L_61);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_62 = L_61->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_63 = V_0;
		NullCheck(L_58);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_58, L_60, L_62, L_63, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_64 = __this->___engine_0;
		NullCheck(L_64);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_65 = L_64->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_66 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_67 = V_1;
		NullCheck(L_65);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_65, L_66, L_67, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_68 = __this->___engine_0;
		NullCheck(L_68);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_69 = L_68->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_70 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_71 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_72 = V_1;
		NullCheck(L_69);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_69, L_70, L_71, L_72, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_73 = __this->___engine_0;
		NullCheck(L_73);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_74 = L_73->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_75 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_76 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_77 = V_1;
		NullCheck(L_74);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_74, L_75, L_76, L_77, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_78 = __this->___engine_0;
		NullCheck(L_78);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_79 = L_78->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_80 = ___A24plus3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_81 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_82 = V_5;
		NullCheck(L_79);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_79, L_80, L_81, L_82, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_83 = __this->___engine_0;
		NullCheck(L_83);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_84 = L_83->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_85 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_86 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_87 = V_3;
		NullCheck(L_84);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_84, L_85, L_86, L_87, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_88 = __this->___engine_0;
		NullCheck(L_88);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_89 = L_88->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_90 = ___A24minus2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_91 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_92 = V_6;
		NullCheck(L_89);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_89, L_90, L_91, L_92, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_93 = __this->___engine_0;
		NullCheck(L_93);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_94 = L_93->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_95 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_96 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_97 = V_2;
		NullCheck(L_94);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_94, L_95, L_96, L_97, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_98 = __this->___engine_0;
		NullCheck(L_98);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_99 = L_98->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_100 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_101 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_102 = V_3;
		NullCheck(L_99);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_99, L_100, L_101, L_102, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_103 = __this->___engine_0;
		NullCheck(L_103);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_104 = L_103->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_105 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_106 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_107 = V_2;
		NullCheck(L_104);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_104, L_105, L_106, L_107, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_108 = __this->___engine_0;
		NullCheck(L_108);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_109 = L_108->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_110 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_111 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_112 = V_1;
		NullCheck(L_109);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_109, L_110, L_111, L_112, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_113 = __this->___engine_0;
		NullCheck(L_113);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_114 = L_113->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_115 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_116 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_117 = V_2;
		NullCheck(L_114);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_114, L_115, L_116, L_117, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_118 = __this->___engine_0;
		NullCheck(L_118);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_119 = L_118->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_120 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_121 = V_2;
		NullCheck(L_119);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_119, L_120, L_121, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_122 = __this->___engine_0;
		NullCheck(L_122);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_123 = L_122->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_124 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_125 = V_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_126 = ___Q1;
		NullCheck(L_126);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_127 = L_126->___X_0;
		NullCheck(L_123);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_123, L_124, L_125, L_127, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_128 = __this->___engine_0;
		NullCheck(L_128);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_129 = L_128->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_130 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_131 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_132 = V_1;
		NullCheck(L_129);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_129, L_130, L_131, L_132, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_133 = __this->___engine_0;
		NullCheck(L_133);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_134 = L_133->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_135 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_136 = V_1;
		NullCheck(L_134);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_134, L_135, L_136, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_137 = __this->___engine_0;
		NullCheck(L_137);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_138 = L_137->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_139 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_140 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_141 = ___Q1;
		NullCheck(L_141);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_142 = L_141->___Z_1;
		NullCheck(L_138);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_138, L_139, L_140, L_142, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::XTplE(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_XTplE_mC1DA626473B73DDBD4E25448E5D273C34181B354 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24minus2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24plus3, uint32_t ___e4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_1 = L_0->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_2 = ___P0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_3 = ___Q1;
		NullCheck(L_1);
		Fpx_copy_words_mB93FD5D6B53AEE8D0698FD8B352FC5AB3F8644DB(L_1, L_2, L_3, NULL);
		V_0 = 0;
		goto IL_0025;
	}

IL_0016:
	{
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_4 = ___Q1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_5 = ___Q1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_6 = ___A24minus2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7 = ___A24plus3;
		Isogeny_XTpl_mEE4B248A6E68E53BD0B88EA460CE17B640BDF28A(__this, L_4, L_5, L_6, L_7, NULL);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		int32_t L_9 = V_0;
		uint32_t L_10 = ___e4;
		if ((((int64_t)((int64_t)L_9)) < ((int64_t)((int64_t)(uint64_t)L_10))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::GetA(System.UInt64[][],System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_GetA_mE384008803EE7E4F2968AF7E7CC6E224396E877A (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xP0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xQ1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___xR2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A3, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_13 = L_12->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_14 = __this->___engine_0;
		NullCheck(L_14);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_15 = L_14->___param_0;
		NullCheck(L_15);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = L_15->___Montgomery_one_65;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_13, L_16, ((int64_t)0), L_19, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_20 = __this->___engine_0;
		NullCheck(L_20);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_21 = L_20->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_22 = ___xP0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_23 = ___xQ1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_24 = V_1;
		NullCheck(L_21);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_21, L_22, L_23, L_24, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_25 = __this->___engine_0;
		NullCheck(L_25);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_26 = L_25->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_27 = ___xP0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_28 = ___xQ1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_29 = V_0;
		NullCheck(L_26);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_26, L_27, L_28, L_29, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_30 = __this->___engine_0;
		NullCheck(L_30);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_31 = L_30->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_32 = ___xR2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_33 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_34 = ___A3;
		NullCheck(L_31);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_31, L_32, L_33, L_34, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_35 = __this->___engine_0;
		NullCheck(L_35);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_36 = L_35->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_37 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_38 = ___A3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_39 = ___A3;
		NullCheck(L_36);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_36, L_37, L_38, L_39, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_40 = __this->___engine_0;
		NullCheck(L_40);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_41 = L_40->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_42 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_43 = ___xR2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_44 = V_0;
		NullCheck(L_41);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_41, L_42, L_43, L_44, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_45 = __this->___engine_0;
		NullCheck(L_45);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_46 = L_45->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_47 = ___A3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_49 = ___A3;
		NullCheck(L_46);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_46, L_47, L_48, L_49, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_50 = __this->___engine_0;
		NullCheck(L_50);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_51 = L_50->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_52 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_53 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_54 = V_0;
		NullCheck(L_51);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_51, L_52, L_53, L_54, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_55 = __this->___engine_0;
		NullCheck(L_55);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_56 = L_55->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_57 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_58 = ___xR2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_59 = V_1;
		NullCheck(L_56);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_56, L_57, L_58, L_59, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_60 = __this->___engine_0;
		NullCheck(L_60);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_61 = L_60->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_62 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_63 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_64 = V_0;
		NullCheck(L_61);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_61, L_62, L_63, L_64, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_65 = __this->___engine_0;
		NullCheck(L_65);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_66 = L_65->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_67 = ___A3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = ___A3;
		NullCheck(L_66);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_66, L_67, L_68, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_69 = __this->___engine_0;
		NullCheck(L_69);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_70 = L_69->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_71 = V_0;
		NullCheck(L_70);
		Fpx_fp2inv_mont_m8C347A23FBAB417585D11D78B13CF81EB2E096DC(L_70, L_71, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_72 = __this->___engine_0;
		NullCheck(L_72);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_73 = L_72->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_74 = ___A3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_75 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_76 = ___A3;
		NullCheck(L_73);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_73, L_74, L_75, L_76, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_77 = __this->___engine_0;
		NullCheck(L_77);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_78 = L_77->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_79 = ___A3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_80 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_81 = ___A3;
		NullCheck(L_78);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_78, L_79, L_80, L_81, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::JInv(System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_JInv_m3031B751565B59E0027AC120F06C3B1DF08AD765 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___C1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___jinv2, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_9 = L_8->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_10 = ___A0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11 = ___jinv2;
		NullCheck(L_9);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_9, L_10, L_11, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_13 = L_12->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_14 = ___C1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_15 = V_1;
		NullCheck(L_13);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_13, L_14, L_15, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_17 = L_16->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_18 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_19 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_20 = V_0;
		NullCheck(L_17);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_17, L_18, L_19, L_20, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_21 = __this->___engine_0;
		NullCheck(L_21);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_22 = L_21->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_23 = ___jinv2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_24 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_25 = V_0;
		NullCheck(L_22);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_22, L_23, L_24, L_25, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_26 = __this->___engine_0;
		NullCheck(L_26);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_27 = L_26->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_28 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_29 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_30 = V_0;
		NullCheck(L_27);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_27, L_28, L_29, L_30, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_31 = __this->___engine_0;
		NullCheck(L_31);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_32 = L_31->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_33 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_34 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_35 = ___jinv2;
		NullCheck(L_32);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_32, L_33, L_34, L_35, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_36 = __this->___engine_0;
		NullCheck(L_36);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_37 = L_36->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_38 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_39 = V_1;
		NullCheck(L_37);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_37, L_38, L_39, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_40 = __this->___engine_0;
		NullCheck(L_40);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_41 = L_40->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_42 = ___jinv2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_43 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_44 = ___jinv2;
		NullCheck(L_41);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_41, L_42, L_43, L_44, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_45 = __this->___engine_0;
		NullCheck(L_45);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_46 = L_45->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_47 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_49 = V_0;
		NullCheck(L_46);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_46, L_47, L_48, L_49, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_50 = __this->___engine_0;
		NullCheck(L_50);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_51 = L_50->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_52 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_53 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_54 = V_0;
		NullCheck(L_51);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_51, L_52, L_53, L_54, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_55 = __this->___engine_0;
		NullCheck(L_55);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_56 = L_55->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_57 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_58 = V_1;
		NullCheck(L_56);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_56, L_57, L_58, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_59 = __this->___engine_0;
		NullCheck(L_59);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_60 = L_59->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_61 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_62 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_63 = V_0;
		NullCheck(L_60);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_60, L_61, L_62, L_63, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_64 = __this->___engine_0;
		NullCheck(L_64);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_65 = L_64->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_66 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_67 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = V_0;
		NullCheck(L_65);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_65, L_66, L_67, L_68, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_69 = __this->___engine_0;
		NullCheck(L_69);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_70 = L_69->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_71 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_72 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_73 = V_0;
		NullCheck(L_70);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_70, L_71, L_72, L_73, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_74 = __this->___engine_0;
		NullCheck(L_74);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_75 = L_74->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_76 = ___jinv2;
		NullCheck(L_75);
		Fpx_fp2inv_mont_m8C347A23FBAB417585D11D78B13CF81EB2E096DC(L_75, L_76, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_77 = __this->___engine_0;
		NullCheck(L_77);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_78 = L_77->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_79 = ___jinv2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_80 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_81 = ___jinv2;
		NullCheck(L_78);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_78, L_79, L_80, L_81, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Get3Isog(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][],System.UInt64[][][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Get3Isog_m5DADF8D462F9C0343EE77C4C8F1418C76BC3E1A0 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24minus1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24plus2, UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* ___coeff3, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_3 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_4 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_13 = L_12->___param_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_15;
		L_15 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_14, NULL);
		V_3 = L_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_17 = L_16->___param_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_19;
		L_19 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_18, NULL);
		V_4 = L_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_20 = __this->___engine_0;
		NullCheck(L_20);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_21 = L_20->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_22 = ___P0;
		NullCheck(L_22);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_23 = L_22->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_24 = ___P0;
		NullCheck(L_24);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_25 = L_24->___Z_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_26 = ___coeff3;
		NullCheck(L_26);
		int32_t L_27 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_21);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_21, L_23, L_25, L_28, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_29 = __this->___engine_0;
		NullCheck(L_29);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_30 = L_29->___fpx_2;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_31 = ___coeff3;
		NullCheck(L_31);
		int32_t L_32 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_34 = V_0;
		NullCheck(L_30);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_30, L_33, L_34, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_35 = __this->___engine_0;
		NullCheck(L_35);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_36 = L_35->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_37 = ___P0;
		NullCheck(L_37);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_38 = L_37->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_39 = ___P0;
		NullCheck(L_39);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_40 = L_39->___Z_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_41 = ___coeff3;
		NullCheck(L_41);
		int32_t L_42 = 1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_36);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_36, L_38, L_40, L_43, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_44 = __this->___engine_0;
		NullCheck(L_44);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_45 = L_44->___fpx_2;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_46 = ___coeff3;
		NullCheck(L_46);
		int32_t L_47 = 1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_49 = V_1;
		NullCheck(L_45);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_45, L_48, L_49, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_50 = __this->___engine_0;
		NullCheck(L_50);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_51 = L_50->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_52 = ___P0;
		NullCheck(L_52);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_53 = L_52->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_54 = ___P0;
		NullCheck(L_54);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_55 = L_54->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_56 = V_3;
		NullCheck(L_51);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_51, L_53, L_55, L_56, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_57 = __this->___engine_0;
		NullCheck(L_57);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_58 = L_57->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_59 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_60 = V_3;
		NullCheck(L_58);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_58, L_59, L_60, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_61 = __this->___engine_0;
		NullCheck(L_61);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_62 = L_61->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_63 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_64 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_65 = V_2;
		NullCheck(L_62);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_62, L_63, L_64, L_65, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_66 = __this->___engine_0;
		NullCheck(L_66);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_67 = L_66->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_69 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_70 = V_3;
		NullCheck(L_67);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_67, L_68, L_69, L_70, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_71 = __this->___engine_0;
		NullCheck(L_71);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_72 = L_71->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_73 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_74 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_75 = V_4;
		NullCheck(L_72);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_72, L_73, L_74, L_75, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_76 = __this->___engine_0;
		NullCheck(L_76);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_77 = L_76->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_78 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_79 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_80 = V_4;
		NullCheck(L_77);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_77, L_78, L_79, L_80, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_81 = __this->___engine_0;
		NullCheck(L_81);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_82 = L_81->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_83 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_84 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_85 = V_4;
		NullCheck(L_82);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_82, L_83, L_84, L_85, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_86 = __this->___engine_0;
		NullCheck(L_86);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_87 = L_86->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_88 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_89 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_90 = ___A24minus1;
		NullCheck(L_87);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_87, L_88, L_89, L_90, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_91 = __this->___engine_0;
		NullCheck(L_91);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_92 = L_91->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_93 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_94 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_95 = V_4;
		NullCheck(L_92);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_92, L_93, L_94, L_95, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_96 = __this->___engine_0;
		NullCheck(L_96);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_97 = L_96->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_98 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_99 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_100 = V_4;
		NullCheck(L_97);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_97, L_98, L_99, L_100, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_101 = __this->___engine_0;
		NullCheck(L_101);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_102 = L_101->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_103 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_104 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_105 = V_4;
		NullCheck(L_102);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_102, L_103, L_104, L_105, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_106 = __this->___engine_0;
		NullCheck(L_106);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_107 = L_106->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_108 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_109 = V_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_110 = ___A24plus2;
		NullCheck(L_107);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_107, L_108, L_109, L_110, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Eval3Isog(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Eval3Isog_m15D728965FB4D17986573368A38DAB94C8578481 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q0, UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* ___coeff1, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_13 = L_12->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_14 = ___Q0;
		NullCheck(L_14);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_15 = L_14->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_16 = ___Q0;
		NullCheck(L_16);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_17 = L_16->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_18 = V_0;
		NullCheck(L_13);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_13, L_15, L_17, L_18, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_19 = __this->___engine_0;
		NullCheck(L_19);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_20 = L_19->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_21 = ___Q0;
		NullCheck(L_21);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_22 = L_21->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_23 = ___Q0;
		NullCheck(L_23);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_24 = L_23->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_25 = V_1;
		NullCheck(L_20);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_20, L_22, L_24, L_25, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_26 = __this->___engine_0;
		NullCheck(L_26);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_27 = L_26->___fpx_2;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_28 = ___coeff1;
		NullCheck(L_28);
		int32_t L_29 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_31 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_32 = V_0;
		NullCheck(L_27);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_27, L_30, L_31, L_32, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_33 = __this->___engine_0;
		NullCheck(L_33);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_34 = L_33->___fpx_2;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_35 = ___coeff1;
		NullCheck(L_35);
		int32_t L_36 = 1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_38 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_39 = V_1;
		NullCheck(L_34);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_34, L_37, L_38, L_39, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_40 = __this->___engine_0;
		NullCheck(L_40);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_41 = L_40->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_42 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_43 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_44 = V_2;
		NullCheck(L_41);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_41, L_42, L_43, L_44, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_45 = __this->___engine_0;
		NullCheck(L_45);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_46 = L_45->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_47 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_49 = V_0;
		NullCheck(L_46);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_46, L_47, L_48, L_49, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_50 = __this->___engine_0;
		NullCheck(L_50);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_51 = L_50->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_52 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_53 = V_2;
		NullCheck(L_51);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_51, L_52, L_53, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_54 = __this->___engine_0;
		NullCheck(L_54);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_55 = L_54->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_56 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_57 = V_0;
		NullCheck(L_55);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_55, L_56, L_57, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_58 = __this->___engine_0;
		NullCheck(L_58);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_59 = L_58->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_60 = ___Q0;
		NullCheck(L_60);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_61 = L_60->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_62 = V_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_63 = ___Q0;
		NullCheck(L_63);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_64 = L_63->___X_0;
		NullCheck(L_59);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_59, L_61, L_62, L_64, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_65 = __this->___engine_0;
		NullCheck(L_65);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_66 = L_65->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_67 = ___Q0;
		NullCheck(L_67);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = L_67->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_69 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_70 = ___Q0;
		NullCheck(L_70);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_71 = L_70->___Z_1;
		NullCheck(L_66);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_66, L_68, L_69, L_71, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Inv3Way(System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Inv3Way_m8D006D0C54B4447226F2038B2D20EF94B82C1419 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___z10, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___z21, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___z32, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_3 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_13 = L_12->___param_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_15;
		L_15 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_14, NULL);
		V_3 = L_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_17 = L_16->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_18 = ___z10;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_19 = ___z21;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_20 = V_0;
		NullCheck(L_17);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_17, L_18, L_19, L_20, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_21 = __this->___engine_0;
		NullCheck(L_21);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_22 = L_21->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_23 = ___z32;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_24 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_25 = V_1;
		NullCheck(L_22);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_22, L_23, L_24, L_25, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_26 = __this->___engine_0;
		NullCheck(L_26);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_27 = L_26->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_28 = V_1;
		NullCheck(L_27);
		Fpx_fp2inv_mont_m8C347A23FBAB417585D11D78B13CF81EB2E096DC(L_27, L_28, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_29 = __this->___engine_0;
		NullCheck(L_29);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_30 = L_29->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_31 = ___z32;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_32 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_33 = V_2;
		NullCheck(L_30);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_30, L_31, L_32, L_33, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_34 = __this->___engine_0;
		NullCheck(L_34);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_35 = L_34->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_36 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_37 = ___z21;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_38 = V_3;
		NullCheck(L_35);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_35, L_36, L_37, L_38, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_39 = __this->___engine_0;
		NullCheck(L_39);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_40 = L_39->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_41 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_42 = ___z10;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_43 = ___z21;
		NullCheck(L_40);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_40, L_41, L_42, L_43, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_44 = __this->___engine_0;
		NullCheck(L_44);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_45 = L_44->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_46 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_47 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = ___z32;
		NullCheck(L_45);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_45, L_46, L_47, L_48, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_49 = __this->___engine_0;
		NullCheck(L_49);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_50 = L_49->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_51 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_52 = ___z10;
		NullCheck(L_50);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_50, L_51, L_52, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Get2Isog(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Get2Isog_m4D12A9542815D2F2CF7C8A76310E9FC2614823F7 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___C2, const RuntimeMethod* method) 
{
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_1 = L_0->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_2 = ___P0;
		NullCheck(L_2);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3 = L_2->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_4 = ___A1;
		NullCheck(L_1);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_1, L_3, L_4, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_5 = __this->___engine_0;
		NullCheck(L_5);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_6 = L_5->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_7 = ___P0;
		NullCheck(L_7);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_8 = L_7->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_9 = ___C2;
		NullCheck(L_6);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_6, L_8, L_9, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_10 = __this->___engine_0;
		NullCheck(L_10);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_11 = L_10->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_12 = ___C2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_13 = ___A1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_14 = ___A1;
		NullCheck(L_11);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_11, L_12, L_13, L_14, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Eval2Isog(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,Org.BouncyCastle.Pqc.Crypto.Sike.PointProj)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Eval2Isog_mF5377153D3E6A3EBBEFAF1222220690F6078179F (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___Q1, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_3 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11;
		L_11 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_13 = L_12->___param_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_15;
		L_15 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_14, NULL);
		V_3 = L_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_17 = L_16->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_18 = ___Q1;
		NullCheck(L_18);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_19 = L_18->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_20 = ___Q1;
		NullCheck(L_20);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_21 = L_20->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_22 = V_0;
		NullCheck(L_17);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_17, L_19, L_21, L_22, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_23 = __this->___engine_0;
		NullCheck(L_23);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_24 = L_23->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_25 = ___Q1;
		NullCheck(L_25);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_26 = L_25->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_27 = ___Q1;
		NullCheck(L_27);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_28 = L_27->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_29 = V_1;
		NullCheck(L_24);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_24, L_26, L_28, L_29, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_30 = __this->___engine_0;
		NullCheck(L_30);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_31 = L_30->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_32 = ___P0;
		NullCheck(L_32);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_33 = L_32->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_34 = ___P0;
		NullCheck(L_34);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_35 = L_34->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_36 = V_2;
		NullCheck(L_31);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_31, L_33, L_35, L_36, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_37 = __this->___engine_0;
		NullCheck(L_37);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_38 = L_37->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_39 = ___P0;
		NullCheck(L_39);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_40 = L_39->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_41 = ___P0;
		NullCheck(L_41);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_42 = L_41->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_43 = V_3;
		NullCheck(L_38);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_38, L_40, L_42, L_43, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_44 = __this->___engine_0;
		NullCheck(L_44);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_45 = L_44->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_46 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_47 = V_3;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = V_0;
		NullCheck(L_45);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_45, L_46, L_47, L_48, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_49 = __this->___engine_0;
		NullCheck(L_49);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_50 = L_49->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_51 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_52 = V_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_53 = V_1;
		NullCheck(L_50);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_50, L_51, L_52, L_53, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_54 = __this->___engine_0;
		NullCheck(L_54);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_55 = L_54->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_56 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_57 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_58 = V_2;
		NullCheck(L_55);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_55, L_56, L_57, L_58, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_59 = __this->___engine_0;
		NullCheck(L_59);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_60 = L_59->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_61 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_62 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_63 = V_3;
		NullCheck(L_60);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_60, L_61, L_62, L_63, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_64 = __this->___engine_0;
		NullCheck(L_64);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_65 = L_64->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_66 = ___P0;
		NullCheck(L_66);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_67 = L_66->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = V_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_69 = ___P0;
		NullCheck(L_69);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_70 = L_69->___X_0;
		NullCheck(L_65);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_65, L_67, L_68, L_70, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_71 = __this->___engine_0;
		NullCheck(L_71);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_72 = L_71->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_73 = ___P0;
		NullCheck(L_73);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_74 = L_73->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_75 = V_3;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_76 = ___P0;
		NullCheck(L_76);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_77 = L_76->___Z_1;
		NullCheck(L_72);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_72, L_74, L_75, L_77, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Get4Isog(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][],System.UInt64[][],System.UInt64[][][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Get4Isog_m4B3F2335927822F9007849AE9EEAB33D396AC7D9 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___A24plus1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___C242, UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* ___coeff3, const RuntimeMethod* method) 
{
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_1 = L_0->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_2 = ___P0;
		NullCheck(L_2);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3 = L_2->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_4 = ___P0;
		NullCheck(L_4);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_5 = L_4->___Z_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_6 = ___coeff3;
		NullCheck(L_6);
		int32_t L_7 = 1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_1);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_1, L_3, L_5, L_8, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_9 = __this->___engine_0;
		NullCheck(L_9);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_10 = L_9->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_11 = ___P0;
		NullCheck(L_11);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_12 = L_11->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_13 = ___P0;
		NullCheck(L_13);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_14 = L_13->___Z_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_15 = ___coeff3;
		NullCheck(L_15);
		int32_t L_16 = 2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_10);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_10, L_12, L_14, L_17, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_18 = __this->___engine_0;
		NullCheck(L_18);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_19 = L_18->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_20 = ___P0;
		NullCheck(L_20);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_21 = L_20->___Z_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_22 = ___coeff3;
		NullCheck(L_22);
		int32_t L_23 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_19);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_19, L_21, L_24, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_25 = __this->___engine_0;
		NullCheck(L_25);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_26 = L_25->___fpx_2;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_27 = ___coeff3;
		NullCheck(L_27);
		int32_t L_28 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_30 = ___coeff3;
		NullCheck(L_30);
		int32_t L_31 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_33 = ___coeff3;
		NullCheck(L_33);
		int32_t L_34 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_26);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_26, L_29, L_32, L_35, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_36 = __this->___engine_0;
		NullCheck(L_36);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_37 = L_36->___fpx_2;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_38 = ___coeff3;
		NullCheck(L_38);
		int32_t L_39 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_41 = ___C242;
		NullCheck(L_37);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_37, L_40, L_41, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_42 = __this->___engine_0;
		NullCheck(L_42);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_43 = L_42->___fpx_2;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_44 = ___coeff3;
		NullCheck(L_44);
		int32_t L_45 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_47 = ___coeff3;
		NullCheck(L_47);
		int32_t L_48 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_50 = ___coeff3;
		NullCheck(L_50);
		int32_t L_51 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_43);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_43, L_46, L_49, L_52, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_53 = __this->___engine_0;
		NullCheck(L_53);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_54 = L_53->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_55 = ___P0;
		NullCheck(L_55);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_56 = L_55->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_57 = ___A24plus1;
		NullCheck(L_54);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_54, L_56, L_57, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_58 = __this->___engine_0;
		NullCheck(L_58);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_59 = L_58->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_60 = ___A24plus1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_61 = ___A24plus1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_62 = ___A24plus1;
		NullCheck(L_59);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_59, L_60, L_61, L_62, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_63 = __this->___engine_0;
		NullCheck(L_63);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_64 = L_63->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_65 = ___A24plus1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_66 = ___A24plus1;
		NullCheck(L_64);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_64, L_65, L_66, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Isogeny::Eval4Isog(Org.BouncyCastle.Pqc.Crypto.Sike.PointProj,System.UInt64[][][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Isogeny_Eval4Isog_m0DD93770EC9BA1C30840735DEC7047778FF82F62 (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* __this, PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* ___P0, UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* ___coeff1, const RuntimeMethod* method) 
{
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_0 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_1 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7;
		L_7 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_9 = L_8->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_10 = ___P0;
		NullCheck(L_10);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11 = L_10->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_12 = ___P0;
		NullCheck(L_12);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_13 = L_12->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_14 = V_0;
		NullCheck(L_9);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_9, L_11, L_13, L_14, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_15 = __this->___engine_0;
		NullCheck(L_15);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_16 = L_15->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_17 = ___P0;
		NullCheck(L_17);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_18 = L_17->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_19 = ___P0;
		NullCheck(L_19);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_20 = L_19->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_21 = V_1;
		NullCheck(L_16);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_16, L_18, L_20, L_21, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_22 = __this->___engine_0;
		NullCheck(L_22);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_23 = L_22->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_24 = V_0;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_25 = ___coeff1;
		NullCheck(L_25);
		int32_t L_26 = 1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_28 = ___P0;
		NullCheck(L_28);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_29 = L_28->___X_0;
		NullCheck(L_23);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_23, L_24, L_27, L_29, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_30 = __this->___engine_0;
		NullCheck(L_30);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_31 = L_30->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_32 = V_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_33 = ___coeff1;
		NullCheck(L_33);
		int32_t L_34 = 2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_36 = ___P0;
		NullCheck(L_36);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_37 = L_36->___Z_1;
		NullCheck(L_31);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_31, L_32, L_35, L_37, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_38 = __this->___engine_0;
		NullCheck(L_38);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_39 = L_38->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_40 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_41 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_42 = V_0;
		NullCheck(L_39);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_39, L_40, L_41, L_42, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_43 = __this->___engine_0;
		NullCheck(L_43);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_44 = L_43->___fpx_2;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_45 = ___coeff1;
		NullCheck(L_45);
		int32_t L_46 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_49 = V_0;
		NullCheck(L_44);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_44, L_47, L_48, L_49, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_50 = __this->___engine_0;
		NullCheck(L_50);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_51 = L_50->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_52 = ___P0;
		NullCheck(L_52);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_53 = L_52->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_54 = ___P0;
		NullCheck(L_54);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_55 = L_54->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_56 = V_1;
		NullCheck(L_51);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_51, L_53, L_55, L_56, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_57 = __this->___engine_0;
		NullCheck(L_57);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_58 = L_57->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_59 = ___P0;
		NullCheck(L_59);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_60 = L_59->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_61 = ___P0;
		NullCheck(L_61);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_62 = L_61->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_63 = ___P0;
		NullCheck(L_63);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_64 = L_63->___Z_1;
		NullCheck(L_58);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_58, L_60, L_62, L_64, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_65 = __this->___engine_0;
		NullCheck(L_65);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_66 = L_65->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_67 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = V_1;
		NullCheck(L_66);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_66, L_67, L_68, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_69 = __this->___engine_0;
		NullCheck(L_69);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_70 = L_69->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_71 = ___P0;
		NullCheck(L_71);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_72 = L_71->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_73 = ___P0;
		NullCheck(L_73);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_74 = L_73->___Z_1;
		NullCheck(L_70);
		Fpx_fp2sqr_mont_m7BA728822FAA03C9FF9902E3002A8AB29494B010(L_70, L_72, L_74, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_75 = __this->___engine_0;
		NullCheck(L_75);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_76 = L_75->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_77 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_78 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_79 = ___P0;
		NullCheck(L_79);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_80 = L_79->___X_0;
		NullCheck(L_76);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_76, L_77, L_78, L_80, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_81 = __this->___engine_0;
		NullCheck(L_81);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_82 = L_81->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_83 = ___P0;
		NullCheck(L_83);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_84 = L_83->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_85 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_86 = V_0;
		NullCheck(L_82);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_82, L_84, L_85, L_86, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_87 = __this->___engine_0;
		NullCheck(L_87);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_88 = L_87->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_89 = ___P0;
		NullCheck(L_89);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_90 = L_89->___X_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_91 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_92 = ___P0;
		NullCheck(L_92);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_93 = L_92->___X_0;
		NullCheck(L_88);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_88, L_90, L_91, L_93, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_94 = __this->___engine_0;
		NullCheck(L_94);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_95 = L_94->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_96 = ___P0;
		NullCheck(L_96);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_97 = L_96->___Z_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_98 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_99 = ___P0;
		NullCheck(L_99);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_100 = L_99->___Z_1;
		NullCheck(L_95);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_95, L_97, L_98, L_100, NULL);
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.P434::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P434__ctor_m0AB8C5D6B03C07C8069227CA878329CA8DDFAF06 (P434_tB7A0DD0094CE697943602B3FF77CCB96688C5CE4* __this, bool ___isCompressed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P434_tB7A0DD0094CE697943602B3FF77CCB96688C5CE4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5753A960C564DD99E5980C9A150CDDC39F8C36B65836D8D1AD0427F9B12480CE_142_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____675D55EB421ADAA655D122BEBC8F20ABC3E69A51DA5C6EE0FE699F356AEE7716_169_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6F3DEC14A777BFB31AA272349BEBD2C61CDF9EA31B79B5F6BDE4C8A0E5015DD3_186_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7FA63BA1E20A9C8950945582B3A4C86272FCCE4341D0D29F1F68E75DB58AFB65_218_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____9185B9A22F0EC9A6E01EC78D9395C1D68BAD29F6501229B101F4E789225714B2_247_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____99E8C63009F88B142C11AB5F933B3773F78A2B27E15AD734EE5922DF2681C193_258_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B5B337AAF4AB1DA76C5AC52B6B47409154E519A0E609D31832654D4AD22E8D0F_313_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BD7BD1177FB5EC6CFD98E00E763A9AC1AA45B645130F051074D265485CDD8745_334_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BDFF3716BE6B0C2920220FE8812E0EC9C0A9E716E1AB32606DCE45B69A1E91B4_337_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____C016C4D2C812AC5CA053CDEC62FB3011C7C881655DAF70265ABE7FA089B9119D_342_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____DA5BDA15352EE630B7F2B5B73A13086272FD1AEBCD11CAF4DF6F23E8CD88A6D2_383_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F322B1C31AC162C97BA845471208C5BAA8709C65BD446AC5BB11267912EAFFE5_431_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F1967AB9EE43A8722FE6AB7BB5E825AE1C5AD88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22B4A1495AF1D07979059260712B84EB2EE45A23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23B6A11B5CA2BAC72A79EE310AC7E72482BFDD67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244FF46894136E267DB65035B457FC1EA89906C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24BBC287144D11D9300B60341E1FFC5F4C29F51E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25BDC80D7A7E767D10FC62CA755437B045BA1984);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D1C868CE98547C068E88416E510D9F9B3852E21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F207BBDDD754E636B9914515BA573769A1D9E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B490C25D3CEFC256E0122739B72D36A98B7C49F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DB670F032EF1526CADB734921118CC9AC3A09E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B19D2817BE28E3E7484EE24102E61ABABFA2BFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BA01AF474C9BC28AE06E7BF58BA8CEF86EF57F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BC81B39A2DF89FCA8CBDA7383862559D940CE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD7C9E3DD45BCE6533767C961ECE16050A8643D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD761457B0CD5989A6D4E4A9ADD6C8B55CDADD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90F0A34A3D5B7832D904D9B5CF179CA2539BDED1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C50276D1EF6B72022FD5732B6D44183D2C137F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0CA1BE51A1E11FEB5B328D1477386642C00360E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6441EE2CBD867925669EC65B291428AC23A6EC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5B613AA23C85A9071682A3FB095197D560F175E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBAB7924C1AFB6D526772477B281B73D108CC884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF6F3BA23B36E142BB08F24F1853EA4CC885B96B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC110AB9A73FD55443F1944A84D07116A493F09E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD37DD0368077A5CE5F6C3ECA2FFD8C1EFCC0D119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7ACA133DBBD0FA2F5CE1B7A7AE478A1482A704B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA07D7D7E9194079F9CFC13424894359F104664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE59848203DD4B2C0BCC1B8494ABF8A311654124B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4081F0E6AD1B73E8A6D9390CB09A08A266E0568);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB3974B7AF812453B8260E35FAE3CA28B3CC1EEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE2E44B714EEF0DADDE20C47F3CF009474038666);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		Internal__ctor_mA04410C329B8427AF2952E6273C581E1EBD667A5(__this, NULL);
		bool L_0 = ___isCompressed0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___COMPRESS_33 = L_0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_SECRETKEYBYTES_5 = ((int32_t)374);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_PUBLICKEYBYTES_2 = ((int32_t)330);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_BYTES_4 = ((int32_t)16);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_CIPHERTEXTBYTES_3 = ((int32_t)346);
		bool L_1 = ___isCompressed0;
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_SECRETKEYBYTES_5 = ((int32_t)350);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_PUBLICKEYBYTES_2 = ((int32_t)197);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_CIPHERTEXTBYTES_3 = ((int32_t)236);
	}

IL_005a:
	{
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS_FIELD_6 = 7;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIME_ZERO_WORDS_7 = 3;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_FIELD_8 = ((int32_t)434);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXBITS_FIELD_9 = ((int32_t)448);
		uint32_t L_2 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXBITS_FIELD_9;
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		uint32_t L_3 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		uint32_t L_4 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXWORDS_FIELD_10 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), 1))/(uint32_t)(int32_t)L_4));
		uint32_t L_5 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_FIELD_8;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, ((int32_t)63)))/(uint32_t)(int32_t)((int32_t)64)));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12 = ((int32_t)256);
		uint32_t L_6 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12;
		uint32_t L_7 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		uint32_t L_8 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS_ORDER_13 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), 1))/(uint32_t)(int32_t)L_8));
		uint32_t L_9 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_ORDER_14 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)63)))/(uint32_t)(int32_t)((int32_t)64)));
		uint32_t L_10 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXBITS_ORDER_15 = L_10;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ALICE_16 = 0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___BOB_17 = 1;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18 = ((int32_t)216);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_BITS_19 = ((int32_t)218);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_EXPON_20 = ((int32_t)137);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK_ALICE_21 = ((int32_t)255);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK_BOB_22 = 1;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PARAM_A_23 = 6;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PARAM_C_24 = 1;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_INT_POINTS_ALICE_25 = 7;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_INT_POINTS_BOB_26 = 8;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_Alice_27 = ((int32_t)108);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_Bob_28 = ((int32_t)137);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MSG_BYTES_29 = ((int32_t)16);
		uint32_t L_11 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_A_BYTES_30 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, 7))/(uint32_t)(int32_t)8));
		uint32_t L_12 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_BITS_19;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_B_BYTES_31 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)), 7))/(uint32_t)(int32_t)8));
		uint32_t L_13 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_FIELD_8;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___FP2_ENCODED_BYTES_32 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, 7))/(uint32_t)(int32_t)8))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = L_14;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_16 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BDFF3716BE6B0C2920220FE8812E0EC9C0A9E716E1AB32606DCE45B69A1E91B4_337_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_15, L_16, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIME_54 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIME_54), (void*)L_15);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F322B1C31AC162C97BA845471208C5BAA8709C65BD446AC5BB11267912EAFFE5_431_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx2_55 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx2_55), (void*)L_18);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = L_20;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_22 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BD7BD1177FB5EC6CFD98E00E763A9AC1AA45B645130F051074D265485CDD8745_334_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_21, L_22, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx4_56 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx4_56), (void*)L_21);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = L_23;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_25 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7FA63BA1E20A9C8950945582B3A4C86272FCCE4341D0D29F1F68E75DB58AFB65_218_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_24, L_25, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEp1_57 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEp1_57), (void*)L_24);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_27 = L_26;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_28 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____9185B9A22F0EC9A6E01EC78D9395C1D68BAD29F6501229B101F4E789225714B2_247_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_27, L_28, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx16p_58 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx16p_58), (void*)L_27);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_30 = L_29;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)((int64_t)((int32_t)16777216)));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Alice_order_60 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Alice_order_60), (void*)L_30);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_31 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = L_31;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_33 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____99E8C63009F88B142C11AB5F933B3773F78A2B27E15AD734EE5922DF2681C193_258_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_32, L_33, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Bob_order_61 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Bob_order_61), (void*)L_32);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)42));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = L_34;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_36 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____DA5BDA15352EE630B7F2B5B73A13086272FD1AEBCD11CAF4DF6F23E8CD88A6D2_383_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_35, L_36, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62), (void*)L_35);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)42));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = L_37;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_39 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B5B337AAF4AB1DA76C5AC52B6B47409154E519A0E609D31832654D4AD22E8D0F_313_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_38, L_39, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63), (void*)L_38);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = L_40;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_42 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5753A960C564DD99E5980C9A150CDDC39F8C36B65836D8D1AD0427F9B12480CE_142_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_41, L_42, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64), (void*)L_41);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = L_43;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_45 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____675D55EB421ADAA655D122BEBC8F20ABC3E69A51DA5C6EE0FE699F356AEE7716_169_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_44, L_45, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65), (void*)L_44);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)107));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_48 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6F3DEC14A777BFB31AA272349BEBD2C61CDF9EA31B79B5F6BDE4C8A0E5015DD3_186_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_47, L_48, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Alice_66 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Alice_66), (void*)L_47);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)136));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = L_49;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_51 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____C016C4D2C812AC5CA053CDEC62FB3011C7C881655DAF70265ABE7FA089B9119D_342_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_50, L_51, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Bob_67 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Bob_67), (void*)L_50);
		bool L_52 = ___isCompressed0;
		if (!L_52)
		{
			goto IL_084f;
		}
	}
	{
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK2_BOB_34 = 0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK3_BOB_35 = ((int32_t)127);
		uint32_t L_53 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_A_BYTES_30;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_A_ENCODED_BYTES_36 = L_53;
		uint32_t L_54 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_B_BYTES_31;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_B_ENCODED_BYTES_37 = L_54;
		uint32_t L_55 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_A_ENCODED_BYTES_36;
		uint32_t L_56 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___FP2_ENCODED_BYTES_32;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PARTIALLY_COMPRESSED_CHUNK_CT_38 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, (int32_t)L_55)), (int32_t)L_56)), 2));
		uint32_t L_57 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_A_ENCODED_BYTES_36;
		uint32_t L_58 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___FP2_ENCODED_BYTES_32;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___COMPRESSED_CHUNK_CT_39 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, (int32_t)L_57)), (int32_t)L_58)), 2));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___UNCOMPRESSEDPK_BYTES_40 = ((int32_t)330);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_R_LEN_41 = ((int32_t)17);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V_LEN_42 = ((int32_t)34);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V3_LEN_43 = ((int32_t)20);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44 = 4;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_3_45 = 3;
		uint32_t L_59 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46 = ((int32_t)(1<<((int32_t)((int32_t)L_59&((int32_t)31)))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47 = ((int32_t)27);
		uint32_t L_60 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_61 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_EMODW_48 = ((int32_t)(1<<((int32_t)(((int32_t)((uint32_t)(int32_t)L_60%(uint32_t)(int32_t)L_61))&((int32_t)31)))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_EMODW_49 = ((int32_t)9);
		uint32_t L_62 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_63 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		uint32_t L_64 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)L_63)), 1))/(uint32_t)(int32_t)L_64));
		uint32_t L_65 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_EXPON_20;
		uint32_t L_66 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_3_45;
		uint32_t L_67 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_3_45;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)), 1))/(uint32_t)(int32_t)L_67));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52 = ((int32_t)55);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_3_53 = ((int32_t)47);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_68 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_68, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_68;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (P434_tB7A0DD0094CE697943602B3FF77CCB96688C5CE4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		NullCheck(L_70);
		Assembly_t* L_71;
		L_71 = VirtualFuncInvoker0< Assembly_t* >::Invoke(27 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_70);
		NullCheck(L_71);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_72;
		L_72 = VirtualFuncInvoker1< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, String_t* >::Invoke(16 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_71, _stringLiteralA0CA1BE51A1E11FEB5B328D1477386642C00360E);
		V_1 = L_72;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_048d:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_73 = V_1;
					if (!L_73)
					{
						goto IL_0496;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_74 = V_1;
					NullCheck(L_74);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_74);
				}

IL_0496:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_75 = V_1;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_76;
				L_76 = Bzip2_DecompressInput_m9886025B5F0EB978D3967FDA68240E817D6EBF1E(L_75, (bool)0, NULL);
				StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_77 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
				NullCheck(L_77);
				StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_77, L_76, NULL);
				V_2 = L_77;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0483_1:
					{// begin finally (depth: 2)
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_78 = V_2;
							if (!L_78)
							{
								goto IL_048c_1;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_79 = V_2;
							NullCheck(L_79);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_79);
						}

IL_048c_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						V_3 = 0;
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_80 = V_2;
						NullCheck(L_80);
						String_t* L_81;
						L_81 = VirtualFuncInvoker0< String_t* >::Invoke(14 /* System.String System.IO.TextReader::ReadLine() */, L_80);
						V_4 = L_81;
						goto IL_047d_2;
					}

IL_0410_2:
					{
						String_t* L_82 = V_4;
						V_7 = L_82;
						String_t* L_83 = V_7;
						bool L_84;
						L_84 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_83, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
						if (!L_84)
						{
							goto IL_0475_2;
						}
					}
					{
						int32_t L_85 = V_3;
						if ((((int32_t)L_85) <= ((int32_t)1)))
						{
							goto IL_0439_2;
						}
					}
					{
						String_t* L_86 = V_7;
						NullCheck(L_86);
						String_t* L_87;
						L_87 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_86, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
						V_7 = L_87;
					}

IL_0439_2:
					{
						String_t* L_88 = V_7;
						NullCheck(L_88);
						int32_t L_89;
						L_89 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_88, ((int32_t)61), NULL);
						V_8 = L_89;
						String_t* L_90 = V_7;
						int32_t L_91 = V_8;
						NullCheck(L_90);
						String_t* L_92;
						L_92 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_90, 0, L_91, NULL);
						NullCheck(L_92);
						String_t* L_93;
						L_93 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_92, NULL);
						V_5 = L_93;
						String_t* L_94 = V_7;
						int32_t L_95 = V_8;
						NullCheck(L_94);
						String_t* L_96;
						L_96 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_94, ((int32_t)il2cpp_codegen_add(L_95, 1)), NULL);
						NullCheck(L_96);
						String_t* L_97;
						L_97 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_96, NULL);
						V_6 = L_97;
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_98 = V_0;
						String_t* L_99 = V_5;
						String_t* L_100 = V_6;
						NullCheck(L_98);
						Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_98, L_99, L_100, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
						int32_t L_101 = V_3;
						V_3 = ((int32_t)il2cpp_codegen_add(L_101, 1));
					}

IL_0475_2:
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_102 = V_2;
						NullCheck(L_102);
						String_t* L_103;
						L_103 = VirtualFuncInvoker0< String_t* >::Invoke(14 /* System.String System.IO.TextReader::ReadLine() */, L_102);
						V_4 = L_103;
					}

IL_047d_2:
					{
						String_t* L_104 = V_4;
						if (L_104)
						{
							goto IL_0410_2;
						}
					}
					{
						goto IL_0497;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0497:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_105 = V_0;
		uint32_t L_106 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52;
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107;
		L_107 = Internal_ReadIntsFromProperty_m5F8A544EDF82EA30BE329D684763D4BD0D250394(L_105, _stringLiteralE59848203DD4B2C0BCC1B8494ABF8A311654124B, L_106, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79), (void*)L_107);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_108 = V_0;
		uint32_t L_109 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_3_53;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110;
		L_110 = Internal_ReadIntsFromProperty_m5F8A544EDF82EA30BE329D684763D4BD0D250394(L_108, _stringLiteralF4081F0E6AD1B73E8A6D9390CB09A08A266E0568, L_109, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_path_80 = L_110;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_path_80), (void*)L_110);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_111 = V_0;
		uint32_t L_112 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_113;
		L_113 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_111, _stringLiteral7BA01AF474C9BC28AE06E7BF58BA8CEF86EF57F7, ((int32_t)il2cpp_codegen_multiply(6, (int32_t)L_112)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62 = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62), (void*)L_113);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_114 = V_0;
		uint32_t L_115 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116;
		L_116 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_114, _stringLiteral90F0A34A3D5B7832D904D9B5CF179CA2539BDED1, ((int32_t)il2cpp_codegen_multiply(6, (int32_t)L_115)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63), (void*)L_116);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_117 = V_0;
		uint32_t L_118 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_119;
		L_119 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_117, _stringLiteral25BDC80D7A7E767D10FC62CA755437B045BA1984, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_118)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___XQB3_68 = L_119;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___XQB3_68), (void*)L_119);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_120 = V_0;
		uint32_t L_121 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_122;
		L_122 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_120, _stringLiteralBBAB7924C1AFB6D526772477B281B73D108CC884, ((int32_t)il2cpp_codegen_multiply(8, (int32_t)L_121)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_basis_zero_69 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_basis_zero_69), (void*)L_122);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_123 = V_0;
		uint32_t L_124 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_125;
		L_125 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_123, _stringLiteral7FD7C9E3DD45BCE6533767C961ECE16050A8643D, ((int32_t)il2cpp_codegen_multiply(8, (int32_t)L_124)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_basis_zero_70 = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_basis_zero_70), (void*)L_125);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_126 = V_0;
		uint32_t L_127 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_128;
		L_128 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_126, _stringLiteral4F207BBDDD754E636B9914515BA573769A1D9E78, ((int32_t)il2cpp_codegen_multiply(((int32_t)16), (int32_t)L_127)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_3_tors_71 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_3_tors_71), (void*)L_128);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_129 = V_0;
		uint32_t L_130 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_131;
		L_131 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_129, _stringLiteralBF6F3BA23B36E142BB08F24F1853EA4CC885B96B, L_130, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___g_R_S_im_72 = L_131;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___g_R_S_im_72), (void*)L_131);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_132 = V_0;
		uint32_t L_133 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_134;
		L_134 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_132, _stringLiteralB5B613AA23C85A9071682A3FB095197D560F175E, L_133, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___g_phiR_phiS_re_73 = L_134;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___g_phiR_phiS_re_73), (void*)L_134);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_135 = V_0;
		uint32_t L_136 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_137;
		L_137 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_135, _stringLiteral23B6A11B5CA2BAC72A79EE310AC7E72482BFDD67, L_136, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___g_phiR_phiS_im_74 = L_137;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___g_phiR_phiS_im_74), (void*)L_137);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_138 = V_0;
		uint32_t L_139 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_140;
		L_140 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_138, _stringLiteral24BBC287144D11D9300B60341E1FFC5F4C29F51E, L_139, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB1_76 = L_140;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB1_76), (void*)L_140);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_141 = V_0;
		uint32_t L_142 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_143;
		L_143 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_141, _stringLiteral9C50276D1EF6B72022FD5732B6D44183D2C137F8, L_142, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB2_77 = L_143;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB2_77), (void*)L_143);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_144 = V_0;
		uint32_t L_145 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_146;
		L_146 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_144, _stringLiteralD37DD0368077A5CE5F6C3ECA2FFD8C1EFCC0D119, L_145, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___threeinv_78 = L_146;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___threeinv_78), (void*)L_146);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_147 = V_0;
		uint32_t L_148 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_149;
		L_149 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_147, _stringLiteralFB3974B7AF812453B8260E35FAE3CA28B3CC1EEF, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_148)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u_entang_81 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u_entang_81), (void*)L_149);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_150 = V_0;
		uint32_t L_151 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_152;
		L_152 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_150, _stringLiteral3D1C868CE98547C068E88416E510D9F9B3852E21, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_151)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u0_entang_82 = L_152;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u0_entang_82), (void*)L_152);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_153 = V_0;
		uint32_t L_154 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_R_LEN_41;
		uint32_t L_155 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_156;
		L_156 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_153, _stringLiteralFE2E44B714EEF0DADDE20C47F3CF009474038666, L_154, L_155, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qr_83 = L_156;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qr_83), (void*)L_156);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_157 = V_0;
		uint32_t L_158 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_R_LEN_41;
		uint32_t L_159 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_160;
		L_160 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_157, _stringLiteral7BC81B39A2DF89FCA8CBDA7383862559D940CE82, L_158, L_159, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qnr_84 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qnr_84), (void*)L_160);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_161 = V_0;
		uint32_t L_162 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V_LEN_42;
		uint32_t L_163 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_164;
		L_164 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_161, _stringLiteral244FF46894136E267DB65035B457FC1EA89906C9, L_162, L_163, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qr_85 = L_164;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qr_85), (void*)L_164);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_165 = V_0;
		uint32_t L_166 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V_LEN_42;
		uint32_t L_167 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_168;
		L_168 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_165, _stringLiteralD7ACA133DBBD0FA2F5CE1B7A7AE478A1482A704B, L_166, L_167, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qnr_86 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qnr_86), (void*)L_168);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_169 = V_0;
		uint32_t L_170 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V3_LEN_43;
		uint32_t L_171 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_172;
		L_172 = Internal_ReadFromProperty_m198C32C0F8CF56125237CD2F2E594004A5FD4D69(L_169, _stringLiteralDDA07D7D7E9194079F9CFC13424894359F104664, L_170, 2, L_171, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___v_3_torsion_87 = L_172;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___v_3_torsion_87), (void*)L_172);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_173 = V_0;
		uint32_t L_174 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_EXPON_20;
		uint32_t L_175 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_176;
		L_176 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_173, _stringLiteral7B19D2817BE28E3E7484EE24102E61ABABFA2BFD, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_174, 1)))), 4)), (int32_t)L_175)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate3_88 = L_176;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate3_88), (void*)L_176);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_177 = V_0;
		uint32_t L_178 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_179;
		L_179 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_177, _stringLiteralA6441EE2CBD867925669EC65B291428AC23A6EC7, ((int32_t)il2cpp_codegen_multiply(4, (int32_t)L_178)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_P_89 = L_179;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_P_89), (void*)L_179);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_180 = V_0;
		uint32_t L_181 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_182 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_183;
		L_183 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_180, _stringLiteral8AD761457B0CD5989A6D4E4A9ADD6C8B55CDADD5, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_181, 2)))), (int32_t)L_182)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_P_90 = L_183;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_P_90), (void*)L_183);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_184 = V_0;
		uint32_t L_185 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_186;
		L_186 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_184, _stringLiteral5DB670F032EF1526CADB734921118CC9AC3A09E1, ((int32_t)il2cpp_codegen_multiply(4, (int32_t)L_185)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_Q_91 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_Q_91), (void*)L_186);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_187 = V_0;
		uint32_t L_188 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_189 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190;
		L_190 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_187, _stringLiteralC110AB9A73FD55443F1944A84D07116A493F09E3, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_188, 2)))), (int32_t)L_189)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_Q_92 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_Q_92), (void*)L_190);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_191 = V_0;
		uint32_t L_192 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50;
		uint32_t L_193 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46;
		uint32_t L_194 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_195;
		L_195 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_191, _stringLiteral5B490C25D3CEFC256E0122739B72D36A98B7C49F, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_192, ((int32_t)((uint32_t)L_193>>1)))), 2)), (int32_t)L_194)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T_93 = L_195;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T_93), (void*)L_195);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_196 = V_0;
		uint32_t L_197 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51;
		uint32_t L_198 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47;
		uint32_t L_199 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_200;
		L_200 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_196, _stringLiteral0F1967AB9EE43A8722FE6AB7BB5E825AE1C5AD88, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_197, ((int32_t)((uint32_t)L_198>>1)))), 2)), (int32_t)L_199)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T1_97 = L_200;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T1_97), (void*)L_200);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_201 = V_0;
		uint32_t L_202 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51;
		uint32_t L_203 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47;
		uint32_t L_204 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_205;
		L_205 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_201, _stringLiteral22B4A1495AF1D07979059260712B84EB2EE45A23, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_202, ((int32_t)((uint32_t)L_203>>1)))), 2)), (int32_t)L_204)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T2_98 = L_205;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T2_98), (void*)L_205);
		uint32_t L_206 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50;
		uint32_t L_207 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_208 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79;
		uint32_t L_209 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52;
		NullCheck(L_208);
		int32_t L_210 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_209, 1));
		uint32_t L_211 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_212 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract((int32_t)L_206, 1)), ((int32_t)((uint32_t)(int32_t)L_207/(uint32_t)(int32_t)2)))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_211, 1)))))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T1_94 = L_212;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T1_94), (void*)L_212);
		uint32_t L_213 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50;
		uint32_t L_214 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_215 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79;
		uint32_t L_216 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52;
		NullCheck(L_215);
		int32_t L_217 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_216, 1));
		uint32_t L_218 = (L_215)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_219 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract((int32_t)L_213, 1)), ((int32_t)((uint32_t)(int32_t)L_214/(uint32_t)(int32_t)2)))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_218, 1)))))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T2_95 = L_219;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T2_95), (void*)L_219);
		uint32_t L_220 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51;
		uint32_t L_221 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_222 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_path_80;
		uint32_t L_223 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_3_53;
		NullCheck(L_222);
		int32_t L_224 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_223, 1));
		uint32_t L_225 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_226 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract((int32_t)L_220, 1)), ((int32_t)((uint32_t)(int32_t)L_221/(uint32_t)(int32_t)2)))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_225, 1)))))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T_96 = L_226;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T_96), (void*)L_226);
	}

IL_084f:
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.P503::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P503__ctor_m57C457A3C8017B30C5BCEA25E430934624E6341D (P503_t440CF9866747506339B086C9CE26A6DA86ACE318* __this, bool ___isCompressed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P503_t440CF9866747506339B086C9CE26A6DA86ACE318_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2541BC30AEEE47C1E2CD6ED62C5E387CB159C19E357E6E846EC8AABAD5AA8B65_58_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2B5147D6B22724C5885188AAFFD14CED290364902FB9ABC779ECA096280B9686_64_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5A6EA34087D3D9F8963F478DEE9F2514C7ADF82018B6F95E5F0C9F35CA631AC0_148_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____62B0B99A90CF348B296641E627D3C0278DBD27D2F6FD5C66AA86BCA7BC32014E_163_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6F75933D3AC11E0F251AF6310500E30D147CF7CB8911C64CF8F401061EAAB88F_187_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7409A8840065C2B1ABBC5ED7DCF94D2FAA1E32ECC5F39CBA5CA4D9F316E63CF6_193_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____9B803B35415DA0CD08CBEDF0C0E261F57E1266F0BA53C39D2208ADD2F38F5C85_265_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____E33F0F47E0AF3A894FCCB1E7A0A361A5B755B6050AD72E9CEC692900EC7E5A15_401_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____E7BFA12A4BD73B706BF3866FE18F93A4BC8C63A9EBE87405EDA03FDDF28BBB0A_411_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F51A5E73B47ACEDA9BB9091E80F92B81F5E98C82889DACD4D6C9DF8B230C6FB9_434_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F542419C019F996698636B099E1479F11362C67C5331FF2CD10FB833EB5F8607_435_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____FB3891EAFF6D32739F9BE64EBF38958D55D4F8146C3967D62F6ADC652CF41E88_446_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244FF46894136E267DB65035B457FC1EA89906C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24BBC287144D11D9300B60341E1FFC5F4C29F51E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25BDC80D7A7E767D10FC62CA755437B045BA1984);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3686ED23DB5B4D2451BFCCAD33657B91C49659AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B203E07967DEAE4589997F74AD1EAC47D7D9A80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D1C868CE98547C068E88416E510D9F9B3852E21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F207BBDDD754E636B9914515BA573769A1D9E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B490C25D3CEFC256E0122739B72D36A98B7C49F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DB670F032EF1526CADB734921118CC9AC3A09E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B19D2817BE28E3E7484EE24102E61ABABFA2BFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BA01AF474C9BC28AE06E7BF58BA8CEF86EF57F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BC81B39A2DF89FCA8CBDA7383862559D940CE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD7C9E3DD45BCE6533767C961ECE16050A8643D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD761457B0CD5989A6D4E4A9ADD6C8B55CDADD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90F0A34A3D5B7832D904D9B5CF179CA2539BDED1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C50276D1EF6B72022FD5732B6D44183D2C137F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6441EE2CBD867925669EC65B291428AC23A6EC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBAB7924C1AFB6D526772477B281B73D108CC884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF6F3BA23B36E142BB08F24F1853EA4CC885B96B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC110AB9A73FD55443F1944A84D07116A493F09E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC697CF5131BD9146CFC20439274920998A81AEAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC96ED51C4278D5D94A04DA1A0DC127A8785ED0D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD37DD0368077A5CE5F6C3ECA2FFD8C1EFCC0D119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7ACA133DBBD0FA2F5CE1B7A7AE478A1482A704B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA07D7D7E9194079F9CFC13424894359F104664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE59848203DD4B2C0BCC1B8494ABF8A311654124B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4081F0E6AD1B73E8A6D9390CB09A08A266E0568);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB3974B7AF812453B8260E35FAE3CA28B3CC1EEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE2E44B714EEF0DADDE20C47F3CF009474038666);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		Internal__ctor_mA04410C329B8427AF2952E6273C581E1EBD667A5(__this, NULL);
		bool L_0 = ___isCompressed0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___COMPRESS_33 = L_0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_SECRETKEYBYTES_5 = ((int32_t)434);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_PUBLICKEYBYTES_2 = ((int32_t)378);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_BYTES_4 = ((int32_t)24);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_CIPHERTEXTBYTES_3 = ((int32_t)402);
		bool L_1 = ___isCompressed0;
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_SECRETKEYBYTES_5 = ((int32_t)407);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_PUBLICKEYBYTES_2 = ((int32_t)225);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_CIPHERTEXTBYTES_3 = ((int32_t)280);
	}

IL_005a:
	{
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS_FIELD_6 = 8;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIME_ZERO_WORDS_7 = 3;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_FIELD_8 = ((int32_t)503);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXBITS_FIELD_9 = ((int32_t)512);
		uint32_t L_2 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXBITS_FIELD_9;
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		uint32_t L_3 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		uint32_t L_4 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXWORDS_FIELD_10 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), 1))/(uint32_t)(int32_t)L_4));
		uint32_t L_5 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_FIELD_8;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, ((int32_t)63)))/(uint32_t)(int32_t)((int32_t)64)));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12 = ((int32_t)256);
		uint32_t L_6 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12;
		uint32_t L_7 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		uint32_t L_8 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS_ORDER_13 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), 1))/(uint32_t)(int32_t)L_8));
		uint32_t L_9 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_ORDER_14 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)63)))/(uint32_t)(int32_t)((int32_t)64)));
		uint32_t L_10 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXBITS_ORDER_15 = L_10;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ALICE_16 = 0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___BOB_17 = 1;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18 = ((int32_t)250);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_BITS_19 = ((int32_t)253);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_EXPON_20 = ((int32_t)159);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK_ALICE_21 = 3;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK_BOB_22 = ((int32_t)15);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PARAM_A_23 = 6;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PARAM_C_24 = 1;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_INT_POINTS_ALICE_25 = 7;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_INT_POINTS_BOB_26 = 8;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_Alice_27 = ((int32_t)125);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_Bob_28 = ((int32_t)159);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MSG_BYTES_29 = ((int32_t)24);
		uint32_t L_11 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_A_BYTES_30 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, 7))/(uint32_t)(int32_t)8));
		uint32_t L_12 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_BITS_19;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_B_BYTES_31 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)), 7))/(uint32_t)(int32_t)8));
		uint32_t L_13 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_FIELD_8;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___FP2_ENCODED_BYTES_32 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, 7))/(uint32_t)(int32_t)8))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = L_14;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_16 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2B5147D6B22724C5885188AAFFD14CED290364902FB9ABC779ECA096280B9686_64_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_15, L_16, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIME_54 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIME_54), (void*)L_15);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____E33F0F47E0AF3A894FCCB1E7A0A361A5B755B6050AD72E9CEC692900EC7E5A15_401_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx2_55 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx2_55), (void*)L_18);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = L_20;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_22 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____62B0B99A90CF348B296641E627D3C0278DBD27D2F6FD5C66AA86BCA7BC32014E_163_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_21, L_22, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx4_56 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx4_56), (void*)L_21);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = L_23;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_25 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____E7BFA12A4BD73B706BF3866FE18F93A4BC8C63A9EBE87405EDA03FDDF28BBB0A_411_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_24, L_25, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEp1_57 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEp1_57), (void*)L_24);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_27 = L_26;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_28 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F542419C019F996698636B099E1479F11362C67C5331FF2CD10FB833EB5F8607_435_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_27, L_28, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEp1x64_59 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEp1x64_59), (void*)L_27);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_30 = L_29;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_31 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5A6EA34087D3D9F8963F478DEE9F2514C7ADF82018B6F95E5F0C9F35CA631AC0_148_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_30, L_31, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx16p_58 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx16p_58), (void*)L_30);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_33 = L_32;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)((int64_t)288230376151711744LL));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Alice_order_60 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Alice_order_60), (void*)L_33);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = L_34;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_36 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F542419C019F996698636B099E1479F11362C67C5331FF2CD10FB833EB5F8607_435_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_35, L_36, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Bob_order_61 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Bob_order_61), (void*)L_35);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = L_37;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_39 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____9B803B35415DA0CD08CBEDF0C0E261F57E1266F0BA53C39D2208ADD2F38F5C85_265_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_38, L_39, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62), (void*)L_38);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = L_40;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_42 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____FB3891EAFF6D32739F9BE64EBF38958D55D4F8146C3967D62F6ADC652CF41E88_446_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_41, L_42, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63), (void*)L_41);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = L_43;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_45 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F51A5E73B47ACEDA9BB9091E80F92B81F5E98C82889DACD4D6C9DF8B230C6FB9_434_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_44, L_45, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64), (void*)L_44);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_46 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = L_46;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_48 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7409A8840065C2B1ABBC5ED7DCF94D2FAA1E32ECC5F39CBA5CA4D9F316E63CF6_193_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_47, L_48, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65), (void*)L_47);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)124));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = L_49;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_51 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2541BC30AEEE47C1E2CD6ED62C5E387CB159C19E357E6E846EC8AABAD5AA8B65_58_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_50, L_51, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Alice_66 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Alice_66), (void*)L_50);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)158));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = L_52;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_54 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6F75933D3AC11E0F251AF6310500E30D147CF7CB8911C64CF8F401061EAAB88F_187_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_53, L_54, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Bob_67 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Bob_67), (void*)L_53);
		bool L_55 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___COMPRESS_33;
		if (!L_55)
		{
			goto IL_086b;
		}
	}
	{
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK2_BOB_34 = 3;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK3_BOB_35 = ((int32_t)255);
		uint32_t L_56 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_A_BYTES_30;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_A_ENCODED_BYTES_36 = L_56;
		uint32_t L_57 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_B_BYTES_31;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_B_ENCODED_BYTES_37 = L_57;
		uint32_t L_58 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_A_ENCODED_BYTES_36;
		uint32_t L_59 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___FP2_ENCODED_BYTES_32;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PARTIALLY_COMPRESSED_CHUNK_CT_38 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, (int32_t)L_58)), (int32_t)L_59)), 2));
		uint32_t L_60 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_A_ENCODED_BYTES_36;
		uint32_t L_61 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___FP2_ENCODED_BYTES_32;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___COMPRESSED_CHUNK_CT_39 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, (int32_t)L_60)), (int32_t)L_61)), 2));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___UNCOMPRESSEDPK_BYTES_40 = ((int32_t)378);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_R_LEN_41 = ((int32_t)17);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V_LEN_42 = ((int32_t)34);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V3_LEN_43 = ((int32_t)20);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44 = 5;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_3_45 = 3;
		uint32_t L_62 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46 = ((int32_t)(1<<((int32_t)((int32_t)L_62&((int32_t)31)))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47 = ((int32_t)27);
		uint32_t L_63 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_64 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_EMODW_48 = ((int32_t)(1<<((int32_t)(((int32_t)((uint32_t)(int32_t)L_63%(uint32_t)(int32_t)L_64))&((int32_t)31)))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_EMODW_49 = 1;
		uint32_t L_65 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_66 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		uint32_t L_67 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)), 1))/(uint32_t)(int32_t)L_67));
		uint32_t L_68 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_EXPON_20;
		uint32_t L_69 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_3_45;
		uint32_t L_70 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_3_45;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_69)), 1))/(uint32_t)(int32_t)L_70));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52 = ((int32_t)51);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_3_53 = ((int32_t)54);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_71 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_71, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_71;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (P503_t440CF9866747506339B086C9CE26A6DA86ACE318_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		NullCheck(L_73);
		Assembly_t* L_74;
		L_74 = VirtualFuncInvoker0< Assembly_t* >::Invoke(27 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_73);
		NullCheck(L_74);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_75;
		L_75 = VirtualFuncInvoker1< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, String_t* >::Invoke(16 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_74, _stringLiteral3686ED23DB5B4D2451BFCCAD33657B91C49659AB);
		V_1 = L_75;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_04ab:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_76 = V_1;
					if (!L_76)
					{
						goto IL_04b4;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_77 = V_1;
					NullCheck(L_77);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_77);
				}

IL_04b4:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_78 = V_1;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_79;
				L_79 = Bzip2_DecompressInput_m9886025B5F0EB978D3967FDA68240E817D6EBF1E(L_78, (bool)0, NULL);
				StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_80 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
				NullCheck(L_80);
				StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_80, L_79, NULL);
				V_2 = L_80;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_04a1_1:
					{// begin finally (depth: 2)
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_81 = V_2;
							if (!L_81)
							{
								goto IL_04aa_1;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_82 = V_2;
							NullCheck(L_82);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_82);
						}

IL_04aa_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_83 = V_2;
						NullCheck(L_83);
						String_t* L_84;
						L_84 = VirtualFuncInvoker0< String_t* >::Invoke(14 /* System.String System.IO.TextReader::ReadLine() */, L_83);
						V_3 = L_84;
						V_6 = 0;
						goto IL_049c_2;
					}

IL_042e_2:
					{
						String_t* L_85 = V_3;
						V_7 = L_85;
						String_t* L_86 = V_7;
						bool L_87;
						L_87 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_86, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
						if (!L_87)
						{
							goto IL_0495_2;
						}
					}
					{
						int32_t L_88 = V_6;
						if ((((int32_t)L_88) <= ((int32_t)1)))
						{
							goto IL_0457_2;
						}
					}
					{
						String_t* L_89 = V_7;
						NullCheck(L_89);
						String_t* L_90;
						L_90 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_89, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
						V_7 = L_90;
					}

IL_0457_2:
					{
						String_t* L_91 = V_7;
						NullCheck(L_91);
						int32_t L_92;
						L_92 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_91, ((int32_t)61), NULL);
						V_8 = L_92;
						String_t* L_93 = V_7;
						int32_t L_94 = V_8;
						NullCheck(L_93);
						String_t* L_95;
						L_95 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_93, 0, L_94, NULL);
						NullCheck(L_95);
						String_t* L_96;
						L_96 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_95, NULL);
						V_4 = L_96;
						String_t* L_97 = V_7;
						int32_t L_98 = V_8;
						NullCheck(L_97);
						String_t* L_99;
						L_99 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_97, ((int32_t)il2cpp_codegen_add(L_98, 1)), NULL);
						NullCheck(L_99);
						String_t* L_100;
						L_100 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_99, NULL);
						V_5 = L_100;
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_101 = V_0;
						String_t* L_102 = V_4;
						String_t* L_103 = V_5;
						NullCheck(L_101);
						Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_101, L_102, L_103, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
						int32_t L_104 = V_6;
						V_6 = ((int32_t)il2cpp_codegen_add(L_104, 1));
					}

IL_0495_2:
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_105 = V_2;
						NullCheck(L_105);
						String_t* L_106;
						L_106 = VirtualFuncInvoker0< String_t* >::Invoke(14 /* System.String System.IO.TextReader::ReadLine() */, L_105);
						V_3 = L_106;
					}

IL_049c_2:
					{
						String_t* L_107 = V_3;
						if (L_107)
						{
							goto IL_042e_2;
						}
					}
					{
						goto IL_04b5;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_04b5:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_108 = V_0;
		uint32_t L_109 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52;
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110;
		L_110 = Internal_ReadIntsFromProperty_m5F8A544EDF82EA30BE329D684763D4BD0D250394(L_108, _stringLiteralE59848203DD4B2C0BCC1B8494ABF8A311654124B, L_109, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79 = L_110;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79), (void*)L_110);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_111 = V_0;
		uint32_t L_112 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_3_53;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_113;
		L_113 = Internal_ReadIntsFromProperty_m5F8A544EDF82EA30BE329D684763D4BD0D250394(L_111, _stringLiteralF4081F0E6AD1B73E8A6D9390CB09A08A266E0568, L_112, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_path_80 = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_path_80), (void*)L_113);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_114 = V_0;
		uint32_t L_115 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116;
		L_116 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_114, _stringLiteral7BA01AF474C9BC28AE06E7BF58BA8CEF86EF57F7, ((int32_t)il2cpp_codegen_multiply(6, (int32_t)L_115)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62), (void*)L_116);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_117 = V_0;
		uint32_t L_118 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_119;
		L_119 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_117, _stringLiteral90F0A34A3D5B7832D904D9B5CF179CA2539BDED1, ((int32_t)il2cpp_codegen_multiply(6, (int32_t)L_118)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63 = L_119;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63), (void*)L_119);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_120 = V_0;
		uint32_t L_121 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_122;
		L_122 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_120, _stringLiteral25BDC80D7A7E767D10FC62CA755437B045BA1984, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_121)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___XQB3_68 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___XQB3_68), (void*)L_122);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_123 = V_0;
		uint32_t L_124 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_125;
		L_125 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_123, _stringLiteralBBAB7924C1AFB6D526772477B281B73D108CC884, ((int32_t)il2cpp_codegen_multiply(8, (int32_t)L_124)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_basis_zero_69 = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_basis_zero_69), (void*)L_125);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_126 = V_0;
		uint32_t L_127 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_128;
		L_128 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_126, _stringLiteral7FD7C9E3DD45BCE6533767C961ECE16050A8643D, ((int32_t)il2cpp_codegen_multiply(8, (int32_t)L_127)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_basis_zero_70 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_basis_zero_70), (void*)L_128);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_129 = V_0;
		uint32_t L_130 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_131;
		L_131 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_129, _stringLiteral4F207BBDDD754E636B9914515BA573769A1D9E78, ((int32_t)il2cpp_codegen_multiply(((int32_t)16), (int32_t)L_130)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_3_tors_71 = L_131;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_3_tors_71), (void*)L_131);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_132 = V_0;
		uint32_t L_133 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_134;
		L_134 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_132, _stringLiteralBF6F3BA23B36E142BB08F24F1853EA4CC885B96B, L_133, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___g_R_S_im_72 = L_134;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___g_R_S_im_72), (void*)L_134);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_135 = V_0;
		uint32_t L_136 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_137;
		L_137 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_135, _stringLiteral3B203E07967DEAE4589997F74AD1EAC47D7D9A80, L_136, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64 = L_137;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64), (void*)L_137);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_138 = V_0;
		uint32_t L_139 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_140;
		L_140 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_138, _stringLiteral24BBC287144D11D9300B60341E1FFC5F4C29F51E, L_139, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB1_76 = L_140;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB1_76), (void*)L_140);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_141 = V_0;
		uint32_t L_142 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_143;
		L_143 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_141, _stringLiteral9C50276D1EF6B72022FD5732B6D44183D2C137F8, L_142, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB2_77 = L_143;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB2_77), (void*)L_143);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_144 = V_0;
		uint32_t L_145 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_146;
		L_146 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_144, _stringLiteralC96ED51C4278D5D94A04DA1A0DC127A8785ED0D4, L_145, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65 = L_146;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65), (void*)L_146);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_147 = V_0;
		uint32_t L_148 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_149;
		L_149 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_147, _stringLiteralD37DD0368077A5CE5F6C3ECA2FFD8C1EFCC0D119, L_148, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___threeinv_78 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___threeinv_78), (void*)L_149);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_150 = V_0;
		uint32_t L_151 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_152;
		L_152 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_150, _stringLiteralFB3974B7AF812453B8260E35FAE3CA28B3CC1EEF, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_151)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u_entang_81 = L_152;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u_entang_81), (void*)L_152);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_153 = V_0;
		uint32_t L_154 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_155;
		L_155 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_153, _stringLiteral3D1C868CE98547C068E88416E510D9F9B3852E21, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_154)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u0_entang_82 = L_155;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u0_entang_82), (void*)L_155);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_156 = V_0;
		uint32_t L_157 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_R_LEN_41;
		uint32_t L_158 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_159;
		L_159 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_156, _stringLiteralFE2E44B714EEF0DADDE20C47F3CF009474038666, L_157, L_158, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qr_83 = L_159;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qr_83), (void*)L_159);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_160 = V_0;
		uint32_t L_161 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_R_LEN_41;
		uint32_t L_162 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_163;
		L_163 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_160, _stringLiteral7BC81B39A2DF89FCA8CBDA7383862559D940CE82, L_161, L_162, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qnr_84 = L_163;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qnr_84), (void*)L_163);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_164 = V_0;
		uint32_t L_165 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V_LEN_42;
		uint32_t L_166 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_167;
		L_167 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_164, _stringLiteral244FF46894136E267DB65035B457FC1EA89906C9, L_165, L_166, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qr_85 = L_167;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qr_85), (void*)L_167);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_168 = V_0;
		uint32_t L_169 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V_LEN_42;
		uint32_t L_170 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_171;
		L_171 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_168, _stringLiteralD7ACA133DBBD0FA2F5CE1B7A7AE478A1482A704B, L_169, L_170, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qnr_86 = L_171;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qnr_86), (void*)L_171);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_172 = V_0;
		uint32_t L_173 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V3_LEN_43;
		uint32_t L_174 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_175;
		L_175 = Internal_ReadFromProperty_m198C32C0F8CF56125237CD2F2E594004A5FD4D69(L_172, _stringLiteralDDA07D7D7E9194079F9CFC13424894359F104664, L_173, 2, L_174, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___v_3_torsion_87 = L_175;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___v_3_torsion_87), (void*)L_175);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_176 = V_0;
		uint32_t L_177 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_EXPON_20;
		uint32_t L_178 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_179;
		L_179 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_176, _stringLiteral7B19D2817BE28E3E7484EE24102E61ABABFA2BFD, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_177, 1)))), 4)), (int32_t)L_178)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate3_88 = L_179;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate3_88), (void*)L_179);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_180 = V_0;
		uint32_t L_181 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_182;
		L_182 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_180, _stringLiteralA6441EE2CBD867925669EC65B291428AC23A6EC7, ((int32_t)il2cpp_codegen_multiply(4, (int32_t)L_181)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_P_89 = L_182;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_P_89), (void*)L_182);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_183 = V_0;
		uint32_t L_184 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_185 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_186;
		L_186 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_183, _stringLiteral8AD761457B0CD5989A6D4E4A9ADD6C8B55CDADD5, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_184, 2)))), (int32_t)L_185)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_P_90 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_P_90), (void*)L_186);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_187 = V_0;
		uint32_t L_188 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_189;
		L_189 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_187, _stringLiteral5DB670F032EF1526CADB734921118CC9AC3A09E1, ((int32_t)il2cpp_codegen_multiply(4, (int32_t)L_188)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_Q_91 = L_189;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_Q_91), (void*)L_189);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_190 = V_0;
		uint32_t L_191 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_192 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_193;
		L_193 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_190, _stringLiteralC110AB9A73FD55443F1944A84D07116A493F09E3, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_191, 2)))), (int32_t)L_192)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_Q_92 = L_193;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_Q_92), (void*)L_193);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_194 = V_0;
		uint32_t L_195 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50;
		uint32_t L_196 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46;
		uint32_t L_197 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_198;
		L_198 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_194, _stringLiteral5B490C25D3CEFC256E0122739B72D36A98B7C49F, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_195, ((int32_t)((uint32_t)L_196>>1)))), 2)), (int32_t)L_197)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T_93 = L_198;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T_93), (void*)L_198);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_199 = V_0;
		uint32_t L_200 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51;
		uint32_t L_201 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47;
		uint32_t L_202 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_203;
		L_203 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_199, _stringLiteralC697CF5131BD9146CFC20439274920998A81AEAB, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_200, ((int32_t)((uint32_t)L_201>>1)))), 2)), (int32_t)L_202)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T_96 = L_203;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T_96), (void*)L_203);
		uint32_t L_204 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_205 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_204);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R_75 = L_205;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R_75), (void*)L_205);
		uint32_t L_206 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51;
		uint32_t L_207 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47;
		uint32_t L_208 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_209 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_206, ((int32_t)((uint32_t)L_207>>1)))), 2)), (int32_t)L_208)));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T1_97 = L_209;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T1_97), (void*)L_209);
		uint32_t L_210 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51;
		uint32_t L_211 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47;
		uint32_t L_212 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_213 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_210, ((int32_t)((uint32_t)L_211>>1)))), 2)), (int32_t)L_212)));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T2_98 = L_213;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T2_98), (void*)L_213);
		uint32_t L_214 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50;
		uint32_t L_215 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_216 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79;
		uint32_t L_217 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52;
		NullCheck(L_216);
		int32_t L_218 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_217, 1));
		uint32_t L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_220 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract((int32_t)L_214, 1)), ((int32_t)((uint32_t)(int32_t)L_215/(uint32_t)(int32_t)2)))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_219, 1)))))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T1_94 = L_220;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T1_94), (void*)L_220);
		uint32_t L_221 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50;
		uint32_t L_222 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_223 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79;
		uint32_t L_224 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52;
		NullCheck(L_223);
		int32_t L_225 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_224, 1));
		uint32_t L_226 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_227 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract((int32_t)L_221, 1)), ((int32_t)((uint32_t)(int32_t)L_222/(uint32_t)(int32_t)2)))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_226, 1)))))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T2_95 = L_227;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T2_95), (void*)L_227);
	}

IL_086b:
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.P610::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P610__ctor_m90669E889653A5BF505D02FA73928A7E8E83F429 (P610_tCB51325DCDB36D48587D6A2927D16E2928A76F54* __this, bool ___isCompressed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P610_tCB51325DCDB36D48587D6A2927D16E2928A76F54_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____0D5E04033CFDF0B51FE1A2D8683C03A198BF47BF9BC4FBC586C14349A912F3E8_17_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2066D0CEF59F04322EDE720147716EC917E294CEB01402069AAF60DA01783589_43_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____34DF24B8F3948791F3063D3DBE0C1F9B09A8639D784786223234BEC089E8B850_83_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____550C3DFDE625907FEF7C0B4DB1A442ABDC106D409C562ACEEAFB8EA78B248C26_137_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5905613E02E9ECB38A8A0FE322F32222D1A0E667D6B01BFAB40276929F0C618B_145_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7C863A911E2AA252865A3EE4E316B05DC2041DF571B44D33DEEFAF79DE33E285_210_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____A504C689CF9091DF80B5A04BEEE2BE97822ED72E26518D7F3377E2D7AC6D522A_285_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B62054CCBB9806DA5278E1490083AE2AADB9FFD737147F5AA4A20D05AFCF9D1D_314_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BF62C56CED2420B3754F87B461864E919485B10766B29BE8DDC0C0C510745182_341_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____D418DB486BF8B92DFFFCE10BAD8A6FC3264E79F69335936023763DDA2F6DC2BB_374_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____DCEC920EACDC77E3CD816EAF55038172FE433A419673896671BACC1260BAA287_388_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____EE6E1CBF3DD198235B836FA8CEAE76D590D422037F6F8685E5B41CBAB8448A81_424_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244FF46894136E267DB65035B457FC1EA89906C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24BBC287144D11D9300B60341E1FFC5F4C29F51E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25BDC80D7A7E767D10FC62CA755437B045BA1984);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B203E07967DEAE4589997F74AD1EAC47D7D9A80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D1C868CE98547C068E88416E510D9F9B3852E21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F207BBDDD754E636B9914515BA573769A1D9E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B490C25D3CEFC256E0122739B72D36A98B7C49F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DB670F032EF1526CADB734921118CC9AC3A09E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62D5449140B647EE64073099F5964374ED4DED59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B19D2817BE28E3E7484EE24102E61ABABFA2BFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BA01AF474C9BC28AE06E7BF58BA8CEF86EF57F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BC81B39A2DF89FCA8CBDA7383862559D940CE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD7C9E3DD45BCE6533767C961ECE16050A8643D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD761457B0CD5989A6D4E4A9ADD6C8B55CDADD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90F0A34A3D5B7832D904D9B5CF179CA2539BDED1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C50276D1EF6B72022FD5732B6D44183D2C137F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6441EE2CBD867925669EC65B291428AC23A6EC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBAB7924C1AFB6D526772477B281B73D108CC884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF6F3BA23B36E142BB08F24F1853EA4CC885B96B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC110AB9A73FD55443F1944A84D07116A493F09E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC697CF5131BD9146CFC20439274920998A81AEAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC96ED51C4278D5D94A04DA1A0DC127A8785ED0D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD37DD0368077A5CE5F6C3ECA2FFD8C1EFCC0D119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7ACA133DBBD0FA2F5CE1B7A7AE478A1482A704B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA07D7D7E9194079F9CFC13424894359F104664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE59848203DD4B2C0BCC1B8494ABF8A311654124B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4081F0E6AD1B73E8A6D9390CB09A08A266E0568);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB3974B7AF812453B8260E35FAE3CA28B3CC1EEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE2E44B714EEF0DADDE20C47F3CF009474038666);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		Internal__ctor_mA04410C329B8427AF2952E6273C581E1EBD667A5(__this, NULL);
		bool L_0 = ___isCompressed0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___COMPRESS_33 = L_0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_SECRETKEYBYTES_5 = ((int32_t)524);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_PUBLICKEYBYTES_2 = ((int32_t)462);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_BYTES_4 = ((int32_t)24);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_CIPHERTEXTBYTES_3 = ((int32_t)486);
		bool L_1 = ___isCompressed0;
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_SECRETKEYBYTES_5 = ((int32_t)491);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_PUBLICKEYBYTES_2 = ((int32_t)274);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_CIPHERTEXTBYTES_3 = ((int32_t)336);
	}

IL_005a:
	{
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS_FIELD_6 = ((int32_t)10);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIME_ZERO_WORDS_7 = 4;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_FIELD_8 = ((int32_t)610);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXBITS_FIELD_9 = ((int32_t)640);
		uint32_t L_2 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXBITS_FIELD_9;
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		uint32_t L_3 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		uint32_t L_4 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXWORDS_FIELD_10 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), 1))/(uint32_t)(int32_t)L_4));
		uint32_t L_5 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_FIELD_8;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, ((int32_t)63)))/(uint32_t)(int32_t)((int32_t)64)));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12 = ((int32_t)320);
		uint32_t L_6 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12;
		uint32_t L_7 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		uint32_t L_8 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS_ORDER_13 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), 1))/(uint32_t)(int32_t)L_8));
		uint32_t L_9 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_ORDER_14 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)63)))/(uint32_t)(int32_t)((int32_t)64)));
		uint32_t L_10 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXBITS_ORDER_15 = L_10;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ALICE_16 = 0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___BOB_17 = 1;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18 = ((int32_t)305);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_BITS_19 = ((int32_t)305);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_EXPON_20 = ((int32_t)192);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK_ALICE_21 = 1;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK_BOB_22 = ((int32_t)255);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PARAM_A_23 = 6;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PARAM_C_24 = 1;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_INT_POINTS_ALICE_25 = 8;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_INT_POINTS_BOB_26 = ((int32_t)10);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_Alice_27 = ((int32_t)152);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_Bob_28 = ((int32_t)192);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MSG_BYTES_29 = ((int32_t)24);
		uint32_t L_11 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_A_BYTES_30 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, 7))/(uint32_t)(int32_t)8));
		uint32_t L_12 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_BITS_19;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_B_BYTES_31 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)), 7))/(uint32_t)(int32_t)8));
		uint32_t L_13 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_FIELD_8;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___FP2_ENCODED_BYTES_32 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, 7))/(uint32_t)(int32_t)8))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = L_14;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_16 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BF62C56CED2420B3754F87B461864E919485B10766B29BE8DDC0C0C510745182_341_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_15, L_16, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIME_54 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIME_54), (void*)L_15);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____A504C689CF9091DF80B5A04BEEE2BE97822ED72E26518D7F3377E2D7AC6D522A_285_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx2_55 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx2_55), (void*)L_18);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = L_20;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_22 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____550C3DFDE625907FEF7C0B4DB1A442ABDC106D409C562ACEEAFB8EA78B248C26_137_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_21, L_22, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx4_56 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx4_56), (void*)L_21);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = L_23;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_25 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5905613E02E9ECB38A8A0FE322F32222D1A0E667D6B01BFAB40276929F0C618B_145_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_24, L_25, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEp1_57 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEp1_57), (void*)L_24);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_27 = L_26;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_28 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B62054CCBB9806DA5278E1490083AE2AADB9FFD737147F5AA4A20D05AFCF9D1D_314_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_27, L_28, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx16p_58 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx16p_58), (void*)L_27);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)5);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_30 = L_29;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)((int64_t)562949953421312LL));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Alice_order_60 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Alice_order_60), (void*)L_30);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_31 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)5);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = L_31;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_33 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____D418DB486BF8B92DFFFCE10BAD8A6FC3264E79F69335936023763DDA2F6DC2BB_374_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_32, L_33, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Bob_order_61 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Bob_order_61), (void*)L_32);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)60));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = L_34;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_36 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7C863A911E2AA252865A3EE4E316B05DC2041DF571B44D33DEEFAF79DE33E285_210_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_35, L_36, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62), (void*)L_35);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)60));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = L_37;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_39 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____DCEC920EACDC77E3CD816EAF55038172FE433A419673896671BACC1260BAA287_388_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_38, L_39, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63), (void*)L_38);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = L_40;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_42 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____EE6E1CBF3DD198235B836FA8CEAE76D590D422037F6F8685E5B41CBAB8448A81_424_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_41, L_42, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64), (void*)L_41);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = L_43;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_45 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2066D0CEF59F04322EDE720147716EC917E294CEB01402069AAF60DA01783589_43_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_44, L_45, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65), (void*)L_44);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)151));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_48 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____0D5E04033CFDF0B51FE1A2D8683C03A198BF47BF9BC4FBC586C14349A912F3E8_17_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_47, L_48, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Alice_66 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Alice_66), (void*)L_47);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)191));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = L_49;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_51 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____34DF24B8F3948791F3063D3DBE0C1F9B09A8639D784786223234BEC089E8B850_83_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_50, L_51, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Bob_67 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Bob_67), (void*)L_50);
		bool L_52 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___COMPRESS_33;
		if (!L_52)
		{
			goto IL_0867;
		}
	}
	{
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK2_BOB_34 = 7;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK3_BOB_35 = ((int32_t)255);
		uint32_t L_53 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_A_BYTES_30;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_A_ENCODED_BYTES_36 = L_53;
		uint32_t L_54 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_B_BYTES_31;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_B_ENCODED_BYTES_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, 1));
		uint32_t L_55 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_A_ENCODED_BYTES_36;
		uint32_t L_56 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___FP2_ENCODED_BYTES_32;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PARTIALLY_COMPRESSED_CHUNK_CT_38 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, (int32_t)L_55)), (int32_t)L_56)), 2));
		uint32_t L_57 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_A_ENCODED_BYTES_36;
		uint32_t L_58 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___FP2_ENCODED_BYTES_32;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___COMPRESSED_CHUNK_CT_39 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, (int32_t)L_57)), (int32_t)L_58)), 2));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___UNCOMPRESSEDPK_BYTES_40 = ((int32_t)480);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_R_LEN_41 = ((int32_t)17);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V_LEN_42 = ((int32_t)34);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V3_LEN_43 = ((int32_t)20);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44 = 5;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_3_45 = 3;
		uint32_t L_59 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46 = ((int32_t)(1<<((int32_t)((int32_t)L_59&((int32_t)31)))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47 = ((int32_t)27);
		uint32_t L_60 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_61 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_EMODW_48 = ((int32_t)(1<<((int32_t)(((int32_t)((uint32_t)(int32_t)L_60%(uint32_t)(int32_t)L_61))&((int32_t)31)))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_EMODW_49 = 1;
		uint32_t L_62 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_63 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		uint32_t L_64 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)L_63)), 1))/(uint32_t)(int32_t)L_64));
		uint32_t L_65 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_EXPON_20;
		uint32_t L_66 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_3_45;
		uint32_t L_67 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_3_45;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)), 1))/(uint32_t)(int32_t)L_67));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52 = ((int32_t)62);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_3_53 = ((int32_t)65);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_68 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_68, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_68;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (P610_tCB51325DCDB36D48587D6A2927D16E2928A76F54_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		NullCheck(L_70);
		Assembly_t* L_71;
		L_71 = VirtualFuncInvoker0< Assembly_t* >::Invoke(27 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_70);
		NullCheck(L_71);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_72;
		L_72 = VirtualFuncInvoker1< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, String_t* >::Invoke(16 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_71, _stringLiteral62D5449140B647EE64073099F5964374ED4DED59);
		V_1 = L_72;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_04a7:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_73 = V_1;
					if (!L_73)
					{
						goto IL_04b0;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_74 = V_1;
					NullCheck(L_74);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_74);
				}

IL_04b0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_75 = V_1;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_76;
				L_76 = Bzip2_DecompressInput_m9886025B5F0EB978D3967FDA68240E817D6EBF1E(L_75, (bool)0, NULL);
				StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_77 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
				NullCheck(L_77);
				StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_77, L_76, NULL);
				V_2 = L_77;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_049d_1:
					{// begin finally (depth: 2)
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_78 = V_2;
							if (!L_78)
							{
								goto IL_04a6_1;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_79 = V_2;
							NullCheck(L_79);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_79);
						}

IL_04a6_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_80 = V_2;
						NullCheck(L_80);
						String_t* L_81;
						L_81 = VirtualFuncInvoker0< String_t* >::Invoke(14 /* System.String System.IO.TextReader::ReadLine() */, L_80);
						V_3 = L_81;
						V_6 = 0;
						goto IL_0498_2;
					}

IL_042a_2:
					{
						String_t* L_82 = V_3;
						V_7 = L_82;
						String_t* L_83 = V_7;
						bool L_84;
						L_84 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_83, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
						if (!L_84)
						{
							goto IL_0491_2;
						}
					}
					{
						int32_t L_85 = V_6;
						if ((((int32_t)L_85) <= ((int32_t)1)))
						{
							goto IL_0453_2;
						}
					}
					{
						String_t* L_86 = V_7;
						NullCheck(L_86);
						String_t* L_87;
						L_87 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_86, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
						V_7 = L_87;
					}

IL_0453_2:
					{
						String_t* L_88 = V_7;
						NullCheck(L_88);
						int32_t L_89;
						L_89 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_88, ((int32_t)61), NULL);
						V_8 = L_89;
						String_t* L_90 = V_7;
						int32_t L_91 = V_8;
						NullCheck(L_90);
						String_t* L_92;
						L_92 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_90, 0, L_91, NULL);
						NullCheck(L_92);
						String_t* L_93;
						L_93 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_92, NULL);
						V_4 = L_93;
						String_t* L_94 = V_7;
						int32_t L_95 = V_8;
						NullCheck(L_94);
						String_t* L_96;
						L_96 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_94, ((int32_t)il2cpp_codegen_add(L_95, 1)), NULL);
						NullCheck(L_96);
						String_t* L_97;
						L_97 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_96, NULL);
						V_5 = L_97;
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_98 = V_0;
						String_t* L_99 = V_4;
						String_t* L_100 = V_5;
						NullCheck(L_98);
						Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_98, L_99, L_100, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
						int32_t L_101 = V_6;
						V_6 = ((int32_t)il2cpp_codegen_add(L_101, 1));
					}

IL_0491_2:
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_102 = V_2;
						NullCheck(L_102);
						String_t* L_103;
						L_103 = VirtualFuncInvoker0< String_t* >::Invoke(14 /* System.String System.IO.TextReader::ReadLine() */, L_102);
						V_3 = L_103;
					}

IL_0498_2:
					{
						String_t* L_104 = V_3;
						if (L_104)
						{
							goto IL_042a_2;
						}
					}
					{
						goto IL_04b1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_04b1:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_105 = V_0;
		uint32_t L_106 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52;
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107;
		L_107 = Internal_ReadIntsFromProperty_m5F8A544EDF82EA30BE329D684763D4BD0D250394(L_105, _stringLiteralE59848203DD4B2C0BCC1B8494ABF8A311654124B, L_106, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79), (void*)L_107);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_108 = V_0;
		uint32_t L_109 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_3_53;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110;
		L_110 = Internal_ReadIntsFromProperty_m5F8A544EDF82EA30BE329D684763D4BD0D250394(L_108, _stringLiteralF4081F0E6AD1B73E8A6D9390CB09A08A266E0568, L_109, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_path_80 = L_110;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_path_80), (void*)L_110);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_111 = V_0;
		uint32_t L_112 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_113;
		L_113 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_111, _stringLiteral7BA01AF474C9BC28AE06E7BF58BA8CEF86EF57F7, ((int32_t)il2cpp_codegen_multiply(6, (int32_t)L_112)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62 = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62), (void*)L_113);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_114 = V_0;
		uint32_t L_115 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116;
		L_116 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_114, _stringLiteral90F0A34A3D5B7832D904D9B5CF179CA2539BDED1, ((int32_t)il2cpp_codegen_multiply(6, (int32_t)L_115)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63), (void*)L_116);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_117 = V_0;
		uint32_t L_118 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_119;
		L_119 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_117, _stringLiteral25BDC80D7A7E767D10FC62CA755437B045BA1984, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_118)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___XQB3_68 = L_119;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___XQB3_68), (void*)L_119);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_120 = V_0;
		uint32_t L_121 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_122;
		L_122 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_120, _stringLiteralBBAB7924C1AFB6D526772477B281B73D108CC884, ((int32_t)il2cpp_codegen_multiply(8, (int32_t)L_121)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_basis_zero_69 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_basis_zero_69), (void*)L_122);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_123 = V_0;
		uint32_t L_124 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_125;
		L_125 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_123, _stringLiteral7FD7C9E3DD45BCE6533767C961ECE16050A8643D, ((int32_t)il2cpp_codegen_multiply(8, (int32_t)L_124)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_basis_zero_70 = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_basis_zero_70), (void*)L_125);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_126 = V_0;
		uint32_t L_127 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_128;
		L_128 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_126, _stringLiteral4F207BBDDD754E636B9914515BA573769A1D9E78, ((int32_t)il2cpp_codegen_multiply(((int32_t)16), (int32_t)L_127)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_3_tors_71 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_3_tors_71), (void*)L_128);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_129 = V_0;
		uint32_t L_130 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_131;
		L_131 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_129, _stringLiteralBF6F3BA23B36E142BB08F24F1853EA4CC885B96B, L_130, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___g_R_S_im_72 = L_131;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___g_R_S_im_72), (void*)L_131);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_132 = V_0;
		uint32_t L_133 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_134;
		L_134 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_132, _stringLiteral3B203E07967DEAE4589997F74AD1EAC47D7D9A80, L_133, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64 = L_134;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64), (void*)L_134);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_135 = V_0;
		uint32_t L_136 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_137;
		L_137 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_135, _stringLiteral24BBC287144D11D9300B60341E1FFC5F4C29F51E, L_136, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB1_76 = L_137;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB1_76), (void*)L_137);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_138 = V_0;
		uint32_t L_139 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_140;
		L_140 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_138, _stringLiteral9C50276D1EF6B72022FD5732B6D44183D2C137F8, L_139, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB2_77 = L_140;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB2_77), (void*)L_140);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_141 = V_0;
		uint32_t L_142 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_143;
		L_143 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_141, _stringLiteralC96ED51C4278D5D94A04DA1A0DC127A8785ED0D4, L_142, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65 = L_143;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65), (void*)L_143);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_144 = V_0;
		uint32_t L_145 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_146;
		L_146 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_144, _stringLiteralD37DD0368077A5CE5F6C3ECA2FFD8C1EFCC0D119, L_145, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___threeinv_78 = L_146;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___threeinv_78), (void*)L_146);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_147 = V_0;
		uint32_t L_148 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_149;
		L_149 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_147, _stringLiteralFB3974B7AF812453B8260E35FAE3CA28B3CC1EEF, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_148)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u_entang_81 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u_entang_81), (void*)L_149);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_150 = V_0;
		uint32_t L_151 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_152;
		L_152 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_150, _stringLiteral3D1C868CE98547C068E88416E510D9F9B3852E21, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_151)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u0_entang_82 = L_152;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u0_entang_82), (void*)L_152);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_153 = V_0;
		uint32_t L_154 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_R_LEN_41;
		uint32_t L_155 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_156;
		L_156 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_153, _stringLiteralFE2E44B714EEF0DADDE20C47F3CF009474038666, L_154, L_155, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qr_83 = L_156;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qr_83), (void*)L_156);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_157 = V_0;
		uint32_t L_158 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_R_LEN_41;
		uint32_t L_159 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_160;
		L_160 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_157, _stringLiteral7BC81B39A2DF89FCA8CBDA7383862559D940CE82, L_158, L_159, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qnr_84 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qnr_84), (void*)L_160);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_161 = V_0;
		uint32_t L_162 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V_LEN_42;
		uint32_t L_163 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_164;
		L_164 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_161, _stringLiteral244FF46894136E267DB65035B457FC1EA89906C9, L_162, L_163, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qr_85 = L_164;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qr_85), (void*)L_164);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_165 = V_0;
		uint32_t L_166 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V_LEN_42;
		uint32_t L_167 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_168;
		L_168 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_165, _stringLiteralD7ACA133DBBD0FA2F5CE1B7A7AE478A1482A704B, L_166, L_167, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qnr_86 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qnr_86), (void*)L_168);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_169 = V_0;
		uint32_t L_170 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V3_LEN_43;
		uint32_t L_171 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_172;
		L_172 = Internal_ReadFromProperty_m198C32C0F8CF56125237CD2F2E594004A5FD4D69(L_169, _stringLiteralDDA07D7D7E9194079F9CFC13424894359F104664, L_170, 2, L_171, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___v_3_torsion_87 = L_172;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___v_3_torsion_87), (void*)L_172);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_173 = V_0;
		uint32_t L_174 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_EXPON_20;
		uint32_t L_175 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_176;
		L_176 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_173, _stringLiteral7B19D2817BE28E3E7484EE24102E61ABABFA2BFD, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_174, 1)))), 4)), (int32_t)L_175)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate3_88 = L_176;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate3_88), (void*)L_176);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_177 = V_0;
		uint32_t L_178 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_179;
		L_179 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_177, _stringLiteralA6441EE2CBD867925669EC65B291428AC23A6EC7, ((int32_t)il2cpp_codegen_multiply(4, (int32_t)L_178)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_P_89 = L_179;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_P_89), (void*)L_179);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_180 = V_0;
		uint32_t L_181 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_182 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_183;
		L_183 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_180, _stringLiteral8AD761457B0CD5989A6D4E4A9ADD6C8B55CDADD5, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_181, 2)))), (int32_t)L_182)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_P_90 = L_183;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_P_90), (void*)L_183);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_184 = V_0;
		uint32_t L_185 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_186;
		L_186 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_184, _stringLiteral5DB670F032EF1526CADB734921118CC9AC3A09E1, ((int32_t)il2cpp_codegen_multiply(4, (int32_t)L_185)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_Q_91 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_Q_91), (void*)L_186);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_187 = V_0;
		uint32_t L_188 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_189 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190;
		L_190 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_187, _stringLiteralC110AB9A73FD55443F1944A84D07116A493F09E3, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_188, 2)))), (int32_t)L_189)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_Q_92 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_Q_92), (void*)L_190);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_191 = V_0;
		uint32_t L_192 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50;
		uint32_t L_193 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46;
		uint32_t L_194 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_195;
		L_195 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_191, _stringLiteral5B490C25D3CEFC256E0122739B72D36A98B7C49F, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_192, ((int32_t)((uint32_t)L_193>>1)))), 2)), (int32_t)L_194)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T_93 = L_195;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T_93), (void*)L_195);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_196 = V_0;
		uint32_t L_197 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51;
		uint32_t L_198 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47;
		uint32_t L_199 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_200;
		L_200 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_196, _stringLiteralC697CF5131BD9146CFC20439274920998A81AEAB, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_197, ((int32_t)((uint32_t)L_198>>1)))), 2)), (int32_t)L_199)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T_96 = L_200;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T_96), (void*)L_200);
		uint32_t L_201 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_202 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_201);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R_75 = L_202;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R_75), (void*)L_202);
		uint32_t L_203 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51;
		uint32_t L_204 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47;
		uint32_t L_205 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_206 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_203, ((int32_t)((uint32_t)L_204>>1)))), 2)), (int32_t)L_205)));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T1_97 = L_206;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T1_97), (void*)L_206);
		uint32_t L_207 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51;
		uint32_t L_208 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47;
		uint32_t L_209 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_210 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_207, ((int32_t)((uint32_t)L_208>>1)))), 2)), (int32_t)L_209)));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T2_98 = L_210;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T2_98), (void*)L_210);
		uint32_t L_211 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50;
		uint32_t L_212 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_213 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79;
		uint32_t L_214 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52;
		NullCheck(L_213);
		int32_t L_215 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_214, 1));
		uint32_t L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_217 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract((int32_t)L_211, 1)), ((int32_t)((uint32_t)(int32_t)L_212/(uint32_t)(int32_t)2)))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_216, 1)))))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T1_94 = L_217;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T1_94), (void*)L_217);
		uint32_t L_218 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50;
		uint32_t L_219 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_220 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79;
		uint32_t L_221 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52;
		NullCheck(L_220);
		int32_t L_222 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_221, 1));
		uint32_t L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_224 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract((int32_t)L_218, 1)), ((int32_t)((uint32_t)(int32_t)L_219/(uint32_t)(int32_t)2)))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_223, 1)))))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T2_95 = L_224;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T2_95), (void*)L_224);
	}

IL_0867:
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.P751::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P751__ctor_m65607C07E73CFA0B2D261DDF0332B499B60E39FE (P751_t3638C0562DE61897220563A0889919EAF3420C9A* __this, bool ___isCompressed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P751_t3638C0562DE61897220563A0889919EAF3420C9A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____1A656D546FA3EC25711E9938E57456DC405FC94FC365095CBF0EE67D64F0E0EE_37_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2AFF8D585A4398C45D3094B6F34B73275BE74BE2891925D12AD161D042432DC3_62_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____4C2830C4E5B987FBFCC701F46320AC7D5B36188263033818292900BFB28BF7F9_125_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5708EA23084F9E6EB1F6F902A20183BD53AB053F59EE29EADC23AA440949833D_141_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____669C05E216A0B007F8BCC449F3B23766D63E5E1FC36219BC54378367849D8542_167_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6D736CA2760B98500A289548A45768A0347EDD83FFAF27A406ADE7F0DF13A883_183_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7A7E2DA28EA306D72C66AF6CC2D3929CEFC609108B484742A63328A57DCB4B64_207_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B4058E7F52AD2232429965C913DCD28A06AC0A2440960C66FE897CA0A2D64C8A_311_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B9D06DBC3EF70A5469EAC655358FDF24EA2B0D7B00CFAE2FAEB46E0435A75E75_324_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BD0803FFBB094DC636588CB801AA84B33963BF6A1DE5BEEEAB20613CC326ABB4_331_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____C17FC0D6B61086A3027A72269EA83B74E5D4DE90109784012BCBD40D5E0A7F9E_346_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____FC2D643DD9472B6F409E319DD565570A2F9F78DDE4B4B561B9DDE85C377CD8F6_449_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F1967AB9EE43A8722FE6AB7BB5E825AE1C5AD88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DB9693B05FF4A5E84C8D5C5550EA55B01F7A1A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22B4A1495AF1D07979059260712B84EB2EE45A23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244FF46894136E267DB65035B457FC1EA89906C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24BBC287144D11D9300B60341E1FFC5F4C29F51E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25BDC80D7A7E767D10FC62CA755437B045BA1984);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B203E07967DEAE4589997F74AD1EAC47D7D9A80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D1C868CE98547C068E88416E510D9F9B3852E21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F207BBDDD754E636B9914515BA573769A1D9E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B490C25D3CEFC256E0122739B72D36A98B7C49F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DB670F032EF1526CADB734921118CC9AC3A09E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B19D2817BE28E3E7484EE24102E61ABABFA2BFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BA01AF474C9BC28AE06E7BF58BA8CEF86EF57F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BC81B39A2DF89FCA8CBDA7383862559D940CE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD7C9E3DD45BCE6533767C961ECE16050A8643D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD761457B0CD5989A6D4E4A9ADD6C8B55CDADD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90F0A34A3D5B7832D904D9B5CF179CA2539BDED1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C50276D1EF6B72022FD5732B6D44183D2C137F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6441EE2CBD867925669EC65B291428AC23A6EC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBAB7924C1AFB6D526772477B281B73D108CC884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF6F3BA23B36E142BB08F24F1853EA4CC885B96B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC110AB9A73FD55443F1944A84D07116A493F09E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC96ED51C4278D5D94A04DA1A0DC127A8785ED0D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD37DD0368077A5CE5F6C3ECA2FFD8C1EFCC0D119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7ACA133DBBD0FA2F5CE1B7A7AE478A1482A704B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA07D7D7E9194079F9CFC13424894359F104664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE59848203DD4B2C0BCC1B8494ABF8A311654124B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4081F0E6AD1B73E8A6D9390CB09A08A266E0568);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB3974B7AF812453B8260E35FAE3CA28B3CC1EEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE2E44B714EEF0DADDE20C47F3CF009474038666);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		Internal__ctor_mA04410C329B8427AF2952E6273C581E1EBD667A5(__this, NULL);
		bool L_0 = ___isCompressed0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___COMPRESS_33 = L_0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_SECRETKEYBYTES_5 = ((int32_t)644);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_PUBLICKEYBYTES_2 = ((int32_t)564);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_BYTES_4 = ((int32_t)32);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_CIPHERTEXTBYTES_3 = ((int32_t)596);
		bool L_1 = ___isCompressed0;
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_SECRETKEYBYTES_5 = ((int32_t)602);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_PUBLICKEYBYTES_2 = ((int32_t)335);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___CRYPTO_CIPHERTEXTBYTES_3 = ((int32_t)410);
	}

IL_005a:
	{
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS_FIELD_6 = ((int32_t)12);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIME_ZERO_WORDS_7 = 5;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_FIELD_8 = ((int32_t)751);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXBITS_FIELD_9 = ((int32_t)768);
		uint32_t L_2 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXBITS_FIELD_9;
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		uint32_t L_3 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		uint32_t L_4 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXWORDS_FIELD_10 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), 1))/(uint32_t)(int32_t)L_4));
		uint32_t L_5 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_FIELD_8;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, ((int32_t)63)))/(uint32_t)(int32_t)((int32_t)64)));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12 = ((int32_t)384);
		uint32_t L_6 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12;
		uint32_t L_7 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		uint32_t L_8 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_StaticFields*)il2cpp_codegen_static_fields_for(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var))->___RADIX_0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS_ORDER_13 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), 1))/(uint32_t)(int32_t)L_8));
		uint32_t L_9 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_ORDER_14 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)63)))/(uint32_t)(int32_t)((int32_t)64)));
		uint32_t L_10 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_ORDER_12;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAXBITS_ORDER_15 = L_10;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ALICE_16 = 0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___BOB_17 = 1;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18 = ((int32_t)372);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_BITS_19 = ((int32_t)379);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_EXPON_20 = ((int32_t)239);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK_ALICE_21 = ((int32_t)15);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK_BOB_22 = 3;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PARAM_A_23 = 6;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PARAM_C_24 = 1;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_INT_POINTS_ALICE_25 = 8;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_INT_POINTS_BOB_26 = ((int32_t)10);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_Alice_27 = ((int32_t)186);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MAX_Bob_28 = ((int32_t)239);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MSG_BYTES_29 = ((int32_t)32);
		uint32_t L_11 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_A_BYTES_30 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, 7))/(uint32_t)(int32_t)8));
		uint32_t L_12 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_BITS_19;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_B_BYTES_31 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)), 7))/(uint32_t)(int32_t)8));
		uint32_t L_13 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NBITS_FIELD_8;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___FP2_ENCODED_BYTES_32 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, 7))/(uint32_t)(int32_t)8))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = L_14;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_16 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____4C2830C4E5B987FBFCC701F46320AC7D5B36188263033818292900BFB28BF7F9_125_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_15, L_16, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIME_54 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIME_54), (void*)L_15);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B9D06DBC3EF70A5469EAC655358FDF24EA2B0D7B00CFAE2FAEB46E0435A75E75_324_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_18, L_19, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx2_55 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx2_55), (void*)L_18);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = L_20;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_22 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5708EA23084F9E6EB1F6F902A20183BD53AB053F59EE29EADC23AA440949833D_141_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_21, L_22, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx4_56 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx4_56), (void*)L_21);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = L_23;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_25 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____FC2D643DD9472B6F409E319DD565570A2F9F78DDE4B4B561B9DDE85C377CD8F6_449_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_24, L_25, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEp1_57 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEp1_57), (void*)L_24);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_27 = L_26;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_28 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6D736CA2760B98500A289548A45768A0347EDD83FFAF27A406ADE7F0DF13A883_183_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_27, L_28, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx16p_58 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PRIMEx16p_58), (void*)L_27);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)6);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_30 = L_29;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)((int64_t)4503599627370496LL));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Alice_order_60 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Alice_order_60), (void*)L_30);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_31 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)6);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = L_31;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_33 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B4058E7F52AD2232429965C913DCD28A06AC0A2440960C66FE897CA0A2D64C8A_311_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_32, L_33, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Bob_order_61 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Bob_order_61), (void*)L_32);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)72));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = L_34;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_36 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____669C05E216A0B007F8BCC449F3B23766D63E5E1FC36219BC54378367849D8542_167_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_35, L_36, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62), (void*)L_35);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)72));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = L_37;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_39 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7A7E2DA28EA306D72C66AF6CC2D3929CEFC609108B484742A63328A57DCB4B64_207_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_38, L_39, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63), (void*)L_38);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = L_40;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_42 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BD0803FFBB094DC636588CB801AA84B33963BF6A1DE5BEEEAB20613CC326ABB4_331_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_41, L_42, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64), (void*)L_41);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = L_43;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_45 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____C17FC0D6B61086A3027A72269EA83B74E5D4DE90109784012BCBD40D5E0A7F9E_346_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_44, L_45, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65), (void*)L_44);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)185));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_48 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2AFF8D585A4398C45D3094B6F34B73275BE74BE2891925D12AD161D042432DC3_62_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_47, L_48, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Alice_66 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Alice_66), (void*)L_47);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)238));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = L_49;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_51 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____1A656D546FA3EC25711E9938E57456DC405FC94FC365095CBF0EE67D64F0E0EE_37_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_50, L_51, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Bob_67 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___strat_Bob_67), (void*)L_50);
		bool L_52 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___COMPRESS_33;
		if (!L_52)
		{
			goto IL_0869;
		}
	}
	{
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK2_BOB_34 = 0;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___MASK3_BOB_35 = ((int32_t)255);
		uint32_t L_53 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_A_BYTES_30;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_A_ENCODED_BYTES_36 = L_53;
		uint32_t L_54 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___SECRETKEY_B_BYTES_31;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_B_ENCODED_BYTES_37 = L_54;
		uint32_t L_55 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_A_ENCODED_BYTES_36;
		uint32_t L_56 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___FP2_ENCODED_BYTES_32;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PARTIALLY_COMPRESSED_CHUNK_CT_38 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, (int32_t)L_55)), (int32_t)L_56)), 2));
		uint32_t L_57 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ORDER_A_ENCODED_BYTES_36;
		uint32_t L_58 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___FP2_ENCODED_BYTES_32;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___COMPRESSED_CHUNK_CT_39 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, (int32_t)L_57)), (int32_t)L_58)), 2));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___UNCOMPRESSEDPK_BYTES_40 = ((int32_t)564);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_R_LEN_41 = ((int32_t)17);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V_LEN_42 = ((int32_t)34);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V3_LEN_43 = ((int32_t)20);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44 = 4;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_3_45 = 3;
		uint32_t L_59 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46 = ((int32_t)(1<<((int32_t)((int32_t)L_59&((int32_t)31)))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47 = ((int32_t)27);
		uint32_t L_60 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_61 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_EMODW_48 = ((int32_t)(1<<((int32_t)(((int32_t)((uint32_t)(int32_t)L_60%(uint32_t)(int32_t)L_61))&((int32_t)31)))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_EMODW_49 = ((int32_t)9);
		uint32_t L_62 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_63 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		uint32_t L_64 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_2_44;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)L_63)), 1))/(uint32_t)(int32_t)L_64));
		uint32_t L_65 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_EXPON_20;
		uint32_t L_66 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_3_45;
		uint32_t L_67 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___W_3_45;
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)), 1))/(uint32_t)(int32_t)L_67));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52 = ((int32_t)94);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_3_53 = ((int32_t)81);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_68 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_68, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_68;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (P751_t3638C0562DE61897220563A0889919EAF3420C9A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		NullCheck(L_70);
		Assembly_t* L_71;
		L_71 = VirtualFuncInvoker0< Assembly_t* >::Invoke(27 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_70);
		NullCheck(L_71);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_72;
		L_72 = VirtualFuncInvoker1< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, String_t* >::Invoke(16 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_71, _stringLiteral1DB9693B05FF4A5E84C8D5C5550EA55B01F7A1A1);
		V_1 = L_72;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_04a3:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_73 = V_1;
					if (!L_73)
					{
						goto IL_04ac;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_74 = V_1;
					NullCheck(L_74);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_74);
				}

IL_04ac:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_75 = V_1;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_76;
				L_76 = Bzip2_DecompressInput_m9886025B5F0EB978D3967FDA68240E817D6EBF1E(L_75, (bool)0, NULL);
				StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_77 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
				NullCheck(L_77);
				StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_77, L_76, NULL);
				V_2 = L_77;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0499_1:
					{// begin finally (depth: 2)
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_78 = V_2;
							if (!L_78)
							{
								goto IL_04a2_1;
							}
						}
						{
							StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_79 = V_2;
							NullCheck(L_79);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_79);
						}

IL_04a2_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_80 = V_2;
						NullCheck(L_80);
						String_t* L_81;
						L_81 = VirtualFuncInvoker0< String_t* >::Invoke(14 /* System.String System.IO.TextReader::ReadLine() */, L_80);
						V_3 = L_81;
						V_6 = 0;
						goto IL_0494_2;
					}

IL_0426_2:
					{
						String_t* L_82 = V_3;
						V_7 = L_82;
						String_t* L_83 = V_7;
						bool L_84;
						L_84 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_83, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
						if (!L_84)
						{
							goto IL_0487_2;
						}
					}
					{
						int32_t L_85 = V_6;
						if ((((int32_t)L_85) <= ((int32_t)1)))
						{
							goto IL_044f_2;
						}
					}
					{
						String_t* L_86 = V_7;
						NullCheck(L_86);
						String_t* L_87;
						L_87 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_86, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
						V_7 = L_87;
					}

IL_044f_2:
					{
						String_t* L_88 = V_7;
						NullCheck(L_88);
						int32_t L_89;
						L_89 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_88, ((int32_t)61), NULL);
						V_8 = L_89;
						String_t* L_90 = V_7;
						int32_t L_91 = V_8;
						NullCheck(L_90);
						String_t* L_92;
						L_92 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_90, 0, L_91, NULL);
						NullCheck(L_92);
						String_t* L_93;
						L_93 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_92, NULL);
						V_4 = L_93;
						String_t* L_94 = V_7;
						int32_t L_95 = V_8;
						NullCheck(L_94);
						String_t* L_96;
						L_96 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_94, ((int32_t)il2cpp_codegen_add(L_95, 1)), NULL);
						NullCheck(L_96);
						String_t* L_97;
						L_97 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_96, NULL);
						V_5 = L_97;
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_98 = V_0;
						String_t* L_99 = V_4;
						String_t* L_100 = V_5;
						NullCheck(L_98);
						Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_98, L_99, L_100, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
					}

IL_0487_2:
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_101 = V_2;
						NullCheck(L_101);
						String_t* L_102;
						L_102 = VirtualFuncInvoker0< String_t* >::Invoke(14 /* System.String System.IO.TextReader::ReadLine() */, L_101);
						V_3 = L_102;
						int32_t L_103 = V_6;
						V_6 = ((int32_t)il2cpp_codegen_add(L_103, 1));
					}

IL_0494_2:
					{
						String_t* L_104 = V_3;
						if (L_104)
						{
							goto IL_0426_2;
						}
					}
					{
						goto IL_04ad;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_04ad:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_105 = V_0;
		uint32_t L_106 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52;
		il2cpp_codegen_runtime_class_init_inline(Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107;
		L_107 = Internal_ReadIntsFromProperty_m5F8A544EDF82EA30BE329D684763D4BD0D250394(L_105, _stringLiteralE59848203DD4B2C0BCC1B8494ABF8A311654124B, L_106, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79), (void*)L_107);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_108 = V_0;
		uint32_t L_109 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_3_53;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110;
		L_110 = Internal_ReadIntsFromProperty_m5F8A544EDF82EA30BE329D684763D4BD0D250394(L_108, _stringLiteralF4081F0E6AD1B73E8A6D9390CB09A08A266E0568, L_109, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_path_80 = L_110;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_path_80), (void*)L_110);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_111 = V_0;
		uint32_t L_112 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_113;
		L_113 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_111, _stringLiteral7BA01AF474C9BC28AE06E7BF58BA8CEF86EF57F7, ((int32_t)il2cpp_codegen_multiply(6, (int32_t)L_112)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62 = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_gen_62), (void*)L_113);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_114 = V_0;
		uint32_t L_115 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116;
		L_116 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_114, _stringLiteral90F0A34A3D5B7832D904D9B5CF179CA2539BDED1, ((int32_t)il2cpp_codegen_multiply(6, (int32_t)L_115)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_63), (void*)L_116);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_117 = V_0;
		uint32_t L_118 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_119;
		L_119 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_117, _stringLiteral25BDC80D7A7E767D10FC62CA755437B045BA1984, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_118)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___XQB3_68 = L_119;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___XQB3_68), (void*)L_119);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_120 = V_0;
		uint32_t L_121 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_122;
		L_122 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_120, _stringLiteralBBAB7924C1AFB6D526772477B281B73D108CC884, ((int32_t)il2cpp_codegen_multiply(8, (int32_t)L_121)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_basis_zero_69 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___A_basis_zero_69), (void*)L_122);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_123 = V_0;
		uint32_t L_124 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_125;
		L_125 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_123, _stringLiteral7FD7C9E3DD45BCE6533767C961ECE16050A8643D, ((int32_t)il2cpp_codegen_multiply(8, (int32_t)L_124)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_basis_zero_70 = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_basis_zero_70), (void*)L_125);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_126 = V_0;
		uint32_t L_127 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_128;
		L_128 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_126, _stringLiteral4F207BBDDD754E636B9914515BA573769A1D9E78, ((int32_t)il2cpp_codegen_multiply(((int32_t)16), (int32_t)L_127)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_3_tors_71 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___B_gen_3_tors_71), (void*)L_128);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_129 = V_0;
		uint32_t L_130 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_131;
		L_131 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_129, _stringLiteralBF6F3BA23B36E142BB08F24F1853EA4CC885B96B, L_130, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___g_R_S_im_72 = L_131;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___g_R_S_im_72), (void*)L_131);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_132 = V_0;
		uint32_t L_133 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_134;
		L_134 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_132, _stringLiteral3B203E07967DEAE4589997F74AD1EAC47D7D9A80, L_133, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64 = L_134;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R2_64), (void*)L_134);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_135 = V_0;
		uint32_t L_136 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_137;
		L_137 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_135, _stringLiteral24BBC287144D11D9300B60341E1FFC5F4C29F51E, L_136, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB1_76 = L_137;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB1_76), (void*)L_137);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_138 = V_0;
		uint32_t L_139 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_140;
		L_140 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_138, _stringLiteral9C50276D1EF6B72022FD5732B6D44183D2C137F8, L_139, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB2_77 = L_140;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_RB2_77), (void*)L_140);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_141 = V_0;
		uint32_t L_142 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_143;
		L_143 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_141, _stringLiteralC96ED51C4278D5D94A04DA1A0DC127A8785ED0D4, L_142, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65 = L_143;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_one_65), (void*)L_143);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_144 = V_0;
		uint32_t L_145 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_146;
		L_146 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_144, _stringLiteralD37DD0368077A5CE5F6C3ECA2FFD8C1EFCC0D119, L_145, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___threeinv_78 = L_146;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___threeinv_78), (void*)L_146);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_147 = V_0;
		uint32_t L_148 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_149;
		L_149 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_147, _stringLiteralFB3974B7AF812453B8260E35FAE3CA28B3CC1EEF, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_148)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u_entang_81 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u_entang_81), (void*)L_149);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_150 = V_0;
		uint32_t L_151 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_152;
		L_152 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_150, _stringLiteral3D1C868CE98547C068E88416E510D9F9B3852E21, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_151)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u0_entang_82 = L_152;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___u0_entang_82), (void*)L_152);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_153 = V_0;
		uint32_t L_154 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_R_LEN_41;
		uint32_t L_155 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_156;
		L_156 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_153, _stringLiteralFE2E44B714EEF0DADDE20C47F3CF009474038666, L_154, L_155, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qr_83 = L_156;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qr_83), (void*)L_156);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_157 = V_0;
		uint32_t L_158 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_R_LEN_41;
		uint32_t L_159 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_160;
		L_160 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_157, _stringLiteral7BC81B39A2DF89FCA8CBDA7383862559D940CE82, L_158, L_159, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qnr_84 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_r_qnr_84), (void*)L_160);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_161 = V_0;
		uint32_t L_162 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V_LEN_42;
		uint32_t L_163 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_164;
		L_164 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_161, _stringLiteral244FF46894136E267DB65035B457FC1EA89906C9, L_162, L_163, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qr_85 = L_164;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qr_85), (void*)L_164);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_165 = V_0;
		uint32_t L_166 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V_LEN_42;
		uint32_t L_167 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_168;
		L_168 = Internal_ReadFromProperty_m310CA1D4AD3E8271A54802BDDB363552C7135F0C(L_165, _stringLiteralD7ACA133DBBD0FA2F5CE1B7A7AE478A1482A704B, L_166, L_167, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qnr_86 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___table_v_qnr_86), (void*)L_168);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_169 = V_0;
		uint32_t L_170 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___TABLE_V3_LEN_43;
		uint32_t L_171 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_172;
		L_172 = Internal_ReadFromProperty_m198C32C0F8CF56125237CD2F2E594004A5FD4D69(L_169, _stringLiteralDDA07D7D7E9194079F9CFC13424894359F104664, L_170, 2, L_171, NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___v_3_torsion_87 = L_172;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___v_3_torsion_87), (void*)L_172);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_173 = V_0;
		uint32_t L_174 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OBOB_EXPON_20;
		uint32_t L_175 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_176;
		L_176 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_173, _stringLiteral7B19D2817BE28E3E7484EE24102E61ABABFA2BFD, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_174, 1)))), 4)), (int32_t)L_175)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate3_88 = L_176;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate3_88), (void*)L_176);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_177 = V_0;
		uint32_t L_178 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_179;
		L_179 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_177, _stringLiteralA6441EE2CBD867925669EC65B291428AC23A6EC7, ((int32_t)il2cpp_codegen_multiply(4, (int32_t)L_178)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_P_89 = L_179;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_P_89), (void*)L_179);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_180 = V_0;
		uint32_t L_181 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_182 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_183;
		L_183 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_180, _stringLiteral8AD761457B0CD5989A6D4E4A9ADD6C8B55CDADD5, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_181, 2)))), (int32_t)L_182)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_P_90 = L_183;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_P_90), (void*)L_183);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_184 = V_0;
		uint32_t L_185 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_186;
		L_186 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_184, _stringLiteral5DB670F032EF1526CADB734921118CC9AC3A09E1, ((int32_t)il2cpp_codegen_multiply(4, (int32_t)L_185)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_Q_91 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_firststep_Q_91), (void*)L_186);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_187 = V_0;
		uint32_t L_188 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___OALICE_BITS_18;
		uint32_t L_189 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190;
		L_190 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_187, _stringLiteralC110AB9A73FD55443F1944A84D07116A493F09E3, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_188, 2)))), (int32_t)L_189)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_Q_92 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___T_tate2_Q_92), (void*)L_190);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_191 = V_0;
		uint32_t L_192 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50;
		uint32_t L_193 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46;
		uint32_t L_194 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_195;
		L_195 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_191, _stringLiteral5B490C25D3CEFC256E0122739B72D36A98B7C49F, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_192, ((int32_t)((uint32_t)L_193>>1)))), 2)), (int32_t)L_194)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T_93 = L_195;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T_93), (void*)L_195);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_196 = V_0;
		uint32_t L_197 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51;
		uint32_t L_198 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47;
		uint32_t L_199 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_200;
		L_200 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_196, _stringLiteral0F1967AB9EE43A8722FE6AB7BB5E825AE1C5AD88, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_197, ((int32_t)((uint32_t)L_198>>1)))), 2)), (int32_t)L_199)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T1_97 = L_200;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T1_97), (void*)L_200);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_201 = V_0;
		uint32_t L_202 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51;
		uint32_t L_203 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47;
		uint32_t L_204 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_205;
		L_205 = Internal_ReadFromProperty_mD358945B3C1B14CF11B21AC632CE0531BD684228(L_201, _stringLiteral22B4A1495AF1D07979059260712B84EB2EE45A23, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_202, ((int32_t)((uint32_t)L_203>>1)))), 2)), (int32_t)L_204)), NULL);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T2_98 = L_205;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T2_98), (void*)L_205);
		uint32_t L_206 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_207 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_206);
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R_75 = L_207;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___Montgomery_R_75), (void*)L_207);
		uint32_t L_208 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50;
		uint32_t L_209 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_210 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79;
		uint32_t L_211 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52;
		NullCheck(L_210);
		int32_t L_212 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_211, 1));
		uint32_t L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_214 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract((int32_t)L_208, 1)), ((int32_t)((uint32_t)(int32_t)L_209/(uint32_t)(int32_t)2)))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_213, 1)))))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T1_94 = L_214;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T1_94), (void*)L_214);
		uint32_t L_215 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_2_50;
		uint32_t L_216 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL2_W_46;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_217 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_path_79;
		uint32_t L_218 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___PLEN_2_52;
		NullCheck(L_217);
		int32_t L_219 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_218, 1));
		uint32_t L_220 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_221 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract((int32_t)L_215, 1)), ((int32_t)((uint32_t)(int32_t)L_216/(uint32_t)(int32_t)2)))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_220, 1)))))));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T2_95 = L_221;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph2_T2_95), (void*)L_221);
		uint32_t L_222 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___DLEN_3_51;
		uint32_t L_223 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ELL3_W_47;
		uint32_t L_224 = ((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___NWORDS64_FIELD_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_225 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply((int32_t)L_222, ((int32_t)((uint32_t)L_223>>1)))), 2)), (int32_t)L_224)));
		((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T_96 = L_225;
		Il2CppCodeGenWriteBarrier((void**)(&((Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C*)__this)->___ph3_T_96), (void*)L_225);
	}

IL_0869:
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.PointProj::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8 (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* __this, uint32_t ___nwords_field0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		uint32_t L_0 = ___nwords_field0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_1;
		L_1 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_0, NULL);
		__this->___X_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_0), (void*)L_1);
		uint32_t L_2 = ___nwords_field0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		__this->___Z_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Z_1), (void*)L_3);
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.PointProjFull::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointProjFull__ctor_m3DD7BE138812189179BC8AB285D9BBD388E44F34 (PointProjFull_tD1BB8A967B99292A8958FEA3DE606547AB934B1A* __this, uint32_t ___nwords_field0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		uint32_t L_0 = ___nwords_field0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_1;
		L_1 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_0, NULL);
		__this->___X_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_0), (void*)L_1);
		uint32_t L_2 = ___nwords_field0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3;
		L_3 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_2, NULL);
		__this->___Y_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Y_1), (void*)L_3);
		uint32_t L_4 = ___nwords_field0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_5;
		L_5 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_4, NULL);
		__this->___Z_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Z_2), (void*)L_5);
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Sidh::.ctor(Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sidh__ctor_m6FC2226DE6DD0592F76A6F22A05463734B99DA54 (Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* __this, SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* ___engine0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = ___engine0;
		__this->___engine_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_0), (void*)L_0);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Sidh::init_basis(System.UInt64[],System.UInt64[][],System.UInt64[][],System.UInt64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sidh_init_basis_m6CAD1AA4DF4649216867B17E66586AECEB91DC8E (Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___gen0, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___XP1, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___XQ2, UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___XR3, const RuntimeMethod* method) 
{
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_1 = L_0->___fpx_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___gen0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_3 = ___XP1;
		NullCheck(L_3);
		int32_t L_4 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_1, L_2, ((int64_t)0), L_5, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_6 = __this->___engine_0;
		NullCheck(L_6);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_7 = L_6->___fpx_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___gen0;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_9 = __this->___engine_0;
		NullCheck(L_9);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_10 = L_9->___param_0;
		NullCheck(L_10);
		uint32_t L_11 = L_10->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_12 = ___XP1;
		NullCheck(L_12);
		int32_t L_13 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_7);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_7, L_8, ((int64_t)(uint64_t)L_11), L_14, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_15 = __this->___engine_0;
		NullCheck(L_15);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_16 = L_15->___fpx_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___gen0;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_18 = __this->___engine_0;
		NullCheck(L_18);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_19 = L_18->___param_0;
		NullCheck(L_19);
		uint32_t L_20 = L_19->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_21 = ___XQ2;
		NullCheck(L_21);
		int32_t L_22 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_16);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_16, L_17, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_20)))), L_23, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_24 = __this->___engine_0;
		NullCheck(L_24);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_25 = L_24->___fpx_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___gen0;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_27 = __this->___engine_0;
		NullCheck(L_27);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_28 = L_27->___param_0;
		NullCheck(L_28);
		uint32_t L_29 = L_28->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_30 = ___XQ2;
		NullCheck(L_30);
		int32_t L_31 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_25);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_25, L_26, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(3, (int32_t)L_29)))), L_32, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_33 = __this->___engine_0;
		NullCheck(L_33);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_34 = L_33->___fpx_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = ___gen0;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_36 = __this->___engine_0;
		NullCheck(L_36);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_37 = L_36->___param_0;
		NullCheck(L_37);
		uint32_t L_38 = L_37->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_39 = ___XR3;
		NullCheck(L_39);
		int32_t L_40 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_34);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_34, L_35, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(4, (int32_t)L_38)))), L_41, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_42 = __this->___engine_0;
		NullCheck(L_42);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_43 = L_42->___fpx_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___gen0;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_45 = __this->___engine_0;
		NullCheck(L_45);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_46 = L_45->___param_0;
		NullCheck(L_46);
		uint32_t L_47 = L_46->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_48 = ___XR3;
		NullCheck(L_48);
		int32_t L_49 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_43);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_43, L_44, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(5, (int32_t)L_47)))), L_50, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Sidh::EphemeralKeyGeneration_B(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sidh_EphemeralKeyGeneration_B_m0403D400094C2931AF510D603CBE075AC5CE381D (Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_0 = NULL;
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_1 = NULL;
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_2 = NULL;
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_3 = NULL;
	PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* V_4 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_5 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_6 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_7 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_8 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_9 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_10 = NULL;
	UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* V_11 = NULL;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_18 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_19 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_3 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_3, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_7 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_7, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_11 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_11, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_13 = L_12->___param_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_15 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_15, L_14, NULL);
		V_3 = L_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_17 = L_16->___param_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___MAX_INT_POINTS_BOB_26;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_19 = (PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B*)(PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B*)SZArrayNew(PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B_il2cpp_TypeInfo_var, (uint32_t)L_18);
		V_4 = L_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_20 = __this->___engine_0;
		NullCheck(L_20);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_21 = L_20->___param_0;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_23;
		L_23 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_22, NULL);
		V_5 = L_23;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_24 = __this->___engine_0;
		NullCheck(L_24);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_25 = L_24->___param_0;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_27;
		L_27 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_26, NULL);
		V_6 = L_27;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_28 = __this->___engine_0;
		NullCheck(L_28);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_29 = L_28->___param_0;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_31;
		L_31 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_30, NULL);
		V_7 = L_31;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_32 = __this->___engine_0;
		NullCheck(L_32);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_33 = L_32->___param_0;
		NullCheck(L_33);
		uint32_t L_34 = L_33->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_35;
		L_35 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_34, NULL);
		V_8 = L_35;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_36 = __this->___engine_0;
		NullCheck(L_36);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_37 = L_36->___param_0;
		NullCheck(L_37);
		uint32_t L_38 = L_37->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_39;
		L_39 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_38, NULL);
		V_9 = L_39;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_40 = __this->___engine_0;
		NullCheck(L_40);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_41 = L_40->___param_0;
		NullCheck(L_41);
		uint32_t L_42 = L_41->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_43;
		L_43 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_42, NULL);
		V_10 = L_43;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_44 = __this->___engine_0;
		NullCheck(L_44);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_45 = L_44->___param_0;
		NullCheck(L_45);
		uint32_t L_46 = L_45->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_47;
		L_47 = SikeUtilities_InitArray_mCFAD719DDB9949735E6B56F71BE414E5EB8AF0D8(3, 2, L_46, NULL);
		V_11 = L_47;
		V_15 = 0;
		V_16 = 0;
		V_17 = 0;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_48 = __this->___engine_0;
		NullCheck(L_48);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_49 = L_48->___param_0;
		NullCheck(L_49);
		uint32_t L_50 = L_49->___MAX_INT_POINTS_BOB_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_50);
		V_18 = L_51;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_52 = __this->___engine_0;
		NullCheck(L_52);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_53 = L_52->___param_0;
		NullCheck(L_53);
		uint32_t L_54 = L_53->___NWORDS_ORDER_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_55 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_54);
		V_19 = L_55;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_56 = __this->___engine_0;
		NullCheck(L_56);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_57 = L_56->___param_0;
		NullCheck(L_57);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_58 = L_57->___B_gen_63;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_59 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_60 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_61 = V_7;
		Sidh_init_basis_m6CAD1AA4DF4649216867B17E66586AECEB91DC8E(__this, L_58, L_59, L_60, L_61, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_62 = __this->___engine_0;
		NullCheck(L_62);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_63 = L_62->___param_0;
		NullCheck(L_63);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_64 = L_63->___A_gen_62;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_65 = V_1;
		NullCheck(L_65);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_66 = L_65->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_67 = V_2;
		NullCheck(L_67);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = L_67->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_69 = V_3;
		NullCheck(L_69);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_70 = L_69->___X_0;
		Sidh_init_basis_m6CAD1AA4DF4649216867B17E66586AECEB91DC8E(__this, L_64, L_66, L_68, L_70, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_71 = __this->___engine_0;
		NullCheck(L_71);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_72 = L_71->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_73 = __this->___engine_0;
		NullCheck(L_73);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_74 = L_73->___param_0;
		NullCheck(L_74);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = L_74->___Montgomery_one_65;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_76 = V_1;
		NullCheck(L_76);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_77 = L_76->___Z_1;
		NullCheck(L_77);
		int32_t L_78 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_72);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_72, L_75, ((int64_t)0), L_79, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_80 = __this->___engine_0;
		NullCheck(L_80);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_81 = L_80->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_82 = __this->___engine_0;
		NullCheck(L_82);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_83 = L_82->___param_0;
		NullCheck(L_83);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_84 = L_83->___Montgomery_one_65;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_85 = V_2;
		NullCheck(L_85);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_86 = L_85->___Z_1;
		NullCheck(L_86);
		int32_t L_87 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_81);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_81, L_84, ((int64_t)0), L_88, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_89 = __this->___engine_0;
		NullCheck(L_89);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_90 = L_89->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_91 = __this->___engine_0;
		NullCheck(L_91);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_92 = L_91->___param_0;
		NullCheck(L_92);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_93 = L_92->___Montgomery_one_65;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_94 = V_3;
		NullCheck(L_94);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_95 = L_94->___Z_1;
		NullCheck(L_95);
		int32_t L_96 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_90);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_90, L_93, ((int64_t)0), L_97, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_98 = __this->___engine_0;
		NullCheck(L_98);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_99 = L_98->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_100 = __this->___engine_0;
		NullCheck(L_100);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_101 = L_100->___param_0;
		NullCheck(L_101);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_102 = L_101->___Montgomery_one_65;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_103 = V_8;
		NullCheck(L_103);
		int32_t L_104 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_99);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_99, L_102, ((int64_t)0), L_105, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_106 = __this->___engine_0;
		NullCheck(L_106);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_107 = L_106->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_108 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_109 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_110 = V_8;
		NullCheck(L_107);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_107, L_108, L_109, L_110, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_111 = __this->___engine_0;
		NullCheck(L_111);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_112 = L_111->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_113 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_114 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_115 = V_9;
		NullCheck(L_112);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_112, L_113, L_114, L_115, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_116 = __this->___engine_0;
		NullCheck(L_116);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_117 = L_116->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_118 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_119 = V_9;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_120 = V_10;
		NullCheck(L_117);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_117, L_118, L_119, L_120, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_121 = __this->___engine_0;
		NullCheck(L_121);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_122 = L_121->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_123 = V_9;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_124 = V_9;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_125 = V_8;
		NullCheck(L_122);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_122, L_123, L_124, L_125, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_126 = __this->___engine_0;
		NullCheck(L_126);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_127 = L_126->___fpx_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = ___sk0;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_129 = __this->___engine_0;
		NullCheck(L_129);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_130 = L_129->___param_0;
		NullCheck(L_130);
		uint32_t L_131 = L_130->___MSG_BYTES_29;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_132 = V_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_133 = __this->___engine_0;
		NullCheck(L_133);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_134 = L_133->___param_0;
		NullCheck(L_134);
		uint32_t L_135 = L_134->___SECRETKEY_B_BYTES_31;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_136 = __this->___engine_0;
		NullCheck(L_136);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_137 = L_136->___param_0;
		NullCheck(L_137);
		uint32_t L_138 = L_137->___NWORDS_ORDER_13;
		NullCheck(L_127);
		Fpx_decode_to_digits_m1A48649F7C0A1966AED62553A023C9960BBFBC7F(L_127, L_128, L_131, L_132, L_135, L_138, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_139 = __this->___engine_0;
		NullCheck(L_139);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_140 = L_139->___isogeny_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_141 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_142 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_143 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_144 = V_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_145 = __this->___engine_0;
		NullCheck(L_145);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_146 = L_145->___param_0;
		NullCheck(L_146);
		uint32_t L_147 = L_146->___BOB_17;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_148 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_149 = V_10;
		NullCheck(L_140);
		Isogeny_LADDER3PT_m697E167624E95A4212EF745138F1E8B8E746BF5B(L_140, L_141, L_142, L_143, L_144, L_147, L_148, L_149, NULL);
		V_15 = 0;
		V_13 = 1;
		goto IL_0492;
	}

IL_0308:
	{
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_150 = V_4;
		uint32_t L_151 = V_16;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_152 = __this->___engine_0;
		NullCheck(L_152);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_153 = L_152->___param_0;
		NullCheck(L_153);
		uint32_t L_154 = L_153->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_155 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_155);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_155, L_154, NULL);
		NullCheck(L_150);
		ArrayElementTypeCheck (L_150, L_155);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(L_151), (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)L_155);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_156 = __this->___engine_0;
		NullCheck(L_156);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_157 = L_156->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_158 = V_0;
		NullCheck(L_158);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_159 = L_158->___X_0;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_160 = V_4;
		uint32_t L_161 = V_16;
		NullCheck(L_160);
		uint32_t L_162 = L_161;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_163);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_164 = L_163->___X_0;
		NullCheck(L_157);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_157, L_159, L_164, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_165 = __this->___engine_0;
		NullCheck(L_165);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_166 = L_165->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_167 = V_0;
		NullCheck(L_167);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_168 = L_167->___Z_1;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_169 = V_4;
		uint32_t L_170 = V_16;
		NullCheck(L_169);
		uint32_t L_171 = L_170;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		NullCheck(L_172);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_173 = L_172->___Z_1;
		NullCheck(L_166);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_166, L_168, L_173, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_174 = V_18;
		uint32_t L_175 = V_16;
		uint32_t L_176 = L_175;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_176, 1));
		uint32_t L_177 = V_15;
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(L_176), (uint32_t)L_177);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_178 = __this->___engine_0;
		NullCheck(L_178);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_179 = L_178->___param_0;
		NullCheck(L_179);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_180 = L_179->___strat_Bob_67;
		uint32_t L_181 = V_17;
		uint32_t L_182 = L_181;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_182, 1));
		NullCheck(L_180);
		uint32_t L_183 = L_182;
		uint32_t L_184 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		V_14 = L_184;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_185 = __this->___engine_0;
		NullCheck(L_185);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_186 = L_185->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_187 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_188 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_189 = V_9;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_190 = V_8;
		uint32_t L_191 = V_14;
		NullCheck(L_186);
		Isogeny_XTplE_mC1DA626473B73DDBD4E25448E5D273C34181B354(L_186, L_187, L_188, L_189, L_190, L_191, NULL);
		uint32_t L_192 = V_15;
		uint32_t L_193 = V_14;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_192, (int32_t)L_193));
	}

IL_03a7:
	{
		uint32_t L_194 = V_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_195 = __this->___engine_0;
		NullCheck(L_195);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_196 = L_195->___param_0;
		NullCheck(L_196);
		uint32_t L_197 = L_196->___MAX_Bob_28;
		uint32_t L_198 = V_13;
		if ((!(((uint32_t)L_194) >= ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_197, (int32_t)L_198))))))
		{
			goto IL_0308;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_199 = __this->___engine_0;
		NullCheck(L_199);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_200 = L_199->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_201 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_202 = V_9;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_203 = V_8;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_204 = V_11;
		NullCheck(L_200);
		Isogeny_Get3Isog_m5DADF8D462F9C0343EE77C4C8F1418C76BC3E1A0(L_200, L_201, L_202, L_203, L_204, NULL);
		V_12 = 0;
		goto IL_03fa;
	}

IL_03dd:
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_205 = __this->___engine_0;
		NullCheck(L_205);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_206 = L_205->___isogeny_1;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_207 = V_4;
		uint32_t L_208 = V_12;
		NullCheck(L_207);
		uint32_t L_209 = L_208;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_211 = V_11;
		NullCheck(L_206);
		Isogeny_Eval3Isog_m15D728965FB4D17986573368A38DAB94C8578481(L_206, L_210, L_211, NULL);
		uint32_t L_212 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_212, 1));
	}

IL_03fa:
	{
		uint32_t L_213 = V_12;
		uint32_t L_214 = V_16;
		if ((!(((uint32_t)L_213) >= ((uint32_t)L_214))))
		{
			goto IL_03dd;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_215 = __this->___engine_0;
		NullCheck(L_215);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_216 = L_215->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_217 = V_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_218 = V_11;
		NullCheck(L_216);
		Isogeny_Eval3Isog_m15D728965FB4D17986573368A38DAB94C8578481(L_216, L_217, L_218, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_219 = __this->___engine_0;
		NullCheck(L_219);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_220 = L_219->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_221 = V_2;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_222 = V_11;
		NullCheck(L_220);
		Isogeny_Eval3Isog_m15D728965FB4D17986573368A38DAB94C8578481(L_220, L_221, L_222, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_223 = __this->___engine_0;
		NullCheck(L_223);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_224 = L_223->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_225 = V_3;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_226 = V_11;
		NullCheck(L_224);
		Isogeny_Eval3Isog_m15D728965FB4D17986573368A38DAB94C8578481(L_224, L_225, L_226, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_227 = __this->___engine_0;
		NullCheck(L_227);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_228 = L_227->___fpx_2;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_229 = V_4;
		uint32_t L_230 = V_16;
		NullCheck(L_229);
		int32_t L_231 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_230, 1));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_232 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		NullCheck(L_232);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_233 = L_232->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_234 = V_0;
		NullCheck(L_234);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_235 = L_234->___X_0;
		NullCheck(L_228);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_228, L_233, L_235, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_236 = __this->___engine_0;
		NullCheck(L_236);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_237 = L_236->___fpx_2;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_238 = V_4;
		uint32_t L_239 = V_16;
		NullCheck(L_238);
		int32_t L_240 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_239, 1));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_241 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_240));
		NullCheck(L_241);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_242 = L_241->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_243 = V_0;
		NullCheck(L_243);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_244 = L_243->___Z_1;
		NullCheck(L_237);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_237, L_242, L_244, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_245 = V_18;
		uint32_t L_246 = V_16;
		NullCheck(L_245);
		int32_t L_247 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_246, 1));
		uint32_t L_248 = (L_245)->GetAt(static_cast<il2cpp_array_size_t>(L_247));
		V_15 = L_248;
		uint32_t L_249 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_249, 1));
		uint32_t L_250 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_250, 1));
	}

IL_0492:
	{
		uint32_t L_251 = V_13;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_252 = __this->___engine_0;
		NullCheck(L_252);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_253 = L_252->___param_0;
		NullCheck(L_253);
		uint32_t L_254 = L_253->___MAX_Bob_28;
		if ((!(((uint32_t)L_251) >= ((uint32_t)L_254))))
		{
			goto IL_03a7;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_255 = __this->___engine_0;
		NullCheck(L_255);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_256 = L_255->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_257 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_258 = V_9;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_259 = V_8;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_260 = V_11;
		NullCheck(L_256);
		Isogeny_Get3Isog_m5DADF8D462F9C0343EE77C4C8F1418C76BC3E1A0(L_256, L_257, L_258, L_259, L_260, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_261 = __this->___engine_0;
		NullCheck(L_261);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_262 = L_261->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_263 = V_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_264 = V_11;
		NullCheck(L_262);
		Isogeny_Eval3Isog_m15D728965FB4D17986573368A38DAB94C8578481(L_262, L_263, L_264, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_265 = __this->___engine_0;
		NullCheck(L_265);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_266 = L_265->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_267 = V_2;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_268 = V_11;
		NullCheck(L_266);
		Isogeny_Eval3Isog_m15D728965FB4D17986573368A38DAB94C8578481(L_266, L_267, L_268, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_269 = __this->___engine_0;
		NullCheck(L_269);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_270 = L_269->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_271 = V_3;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_272 = V_11;
		NullCheck(L_270);
		Isogeny_Eval3Isog_m15D728965FB4D17986573368A38DAB94C8578481(L_270, L_271, L_272, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_273 = __this->___engine_0;
		NullCheck(L_273);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_274 = L_273->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_275 = V_1;
		NullCheck(L_275);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_276 = L_275->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_277 = V_2;
		NullCheck(L_277);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_278 = L_277->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_279 = V_3;
		NullCheck(L_279);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_280 = L_279->___Z_1;
		NullCheck(L_274);
		Isogeny_Inv3Way_m8D006D0C54B4447226F2038B2D20EF94B82C1419(L_274, L_276, L_278, L_280, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_281 = __this->___engine_0;
		NullCheck(L_281);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_282 = L_281->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_283 = V_1;
		NullCheck(L_283);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_284 = L_283->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_285 = V_1;
		NullCheck(L_285);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_286 = L_285->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_287 = V_1;
		NullCheck(L_287);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_288 = L_287->___X_0;
		NullCheck(L_282);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_282, L_284, L_286, L_288, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_289 = __this->___engine_0;
		NullCheck(L_289);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_290 = L_289->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_291 = V_2;
		NullCheck(L_291);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_292 = L_291->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_293 = V_2;
		NullCheck(L_293);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_294 = L_293->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_295 = V_2;
		NullCheck(L_295);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_296 = L_295->___X_0;
		NullCheck(L_290);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_290, L_292, L_294, L_296, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_297 = __this->___engine_0;
		NullCheck(L_297);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_298 = L_297->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_299 = V_3;
		NullCheck(L_299);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_300 = L_299->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_301 = V_3;
		NullCheck(L_301);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_302 = L_301->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_303 = V_3;
		NullCheck(L_303);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_304 = L_303->___X_0;
		NullCheck(L_298);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_298, L_300, L_302, L_304, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_305 = __this->___engine_0;
		NullCheck(L_305);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_306 = L_305->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_307 = V_1;
		NullCheck(L_307);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_308 = L_307->___X_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_309 = ___pk1;
		NullCheck(L_306);
		Fpx_fp2_encode_m51DE285ED128D4F78A91B995E9E60081896C9BBB(L_306, L_308, L_309, 0, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_310 = __this->___engine_0;
		NullCheck(L_310);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_311 = L_310->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_312 = V_2;
		NullCheck(L_312);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_313 = L_312->___X_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_314 = ___pk1;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_315 = __this->___engine_0;
		NullCheck(L_315);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_316 = L_315->___param_0;
		NullCheck(L_316);
		uint32_t L_317 = L_316->___FP2_ENCODED_BYTES_32;
		NullCheck(L_311);
		Fpx_fp2_encode_m51DE285ED128D4F78A91B995E9E60081896C9BBB(L_311, L_313, L_314, L_317, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_318 = __this->___engine_0;
		NullCheck(L_318);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_319 = L_318->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_320 = V_3;
		NullCheck(L_320);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_321 = L_320->___X_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_322 = ___pk1;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_323 = __this->___engine_0;
		NullCheck(L_323);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_324 = L_323->___param_0;
		NullCheck(L_324);
		uint32_t L_325 = L_324->___FP2_ENCODED_BYTES_32;
		NullCheck(L_319);
		Fpx_fp2_encode_m51DE285ED128D4F78A91B995E9E60081896C9BBB(L_319, L_321, L_322, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_325)), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Sidh::EphemeralKeyGeneration_A(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sidh_EphemeralKeyGeneration_A_mD73E9184B29B19DB5591E0B8933B9B63A95B6082 (Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ephemeralsk0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ct1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_0 = NULL;
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_1 = NULL;
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_2 = NULL;
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_3 = NULL;
	PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* V_4 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_5 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_6 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_7 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_8 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_9 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_10 = NULL;
	UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* V_11 = NULL;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_18 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_19 = NULL;
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_20 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_3 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_3, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_7 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_7, L_6, NULL);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_11 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_11, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_13 = L_12->___param_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_15 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_15, L_14, NULL);
		V_3 = L_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_17 = L_16->___param_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___MAX_INT_POINTS_ALICE_25;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_19 = (PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B*)(PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B*)SZArrayNew(PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B_il2cpp_TypeInfo_var, (uint32_t)L_18);
		V_4 = L_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_20 = __this->___engine_0;
		NullCheck(L_20);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_21 = L_20->___param_0;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_23;
		L_23 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_22, NULL);
		V_5 = L_23;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_24 = __this->___engine_0;
		NullCheck(L_24);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_25 = L_24->___param_0;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_27;
		L_27 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_26, NULL);
		V_6 = L_27;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_28 = __this->___engine_0;
		NullCheck(L_28);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_29 = L_28->___param_0;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_31;
		L_31 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_30, NULL);
		V_7 = L_31;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_32 = __this->___engine_0;
		NullCheck(L_32);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_33 = L_32->___param_0;
		NullCheck(L_33);
		uint32_t L_34 = L_33->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_35;
		L_35 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_34, NULL);
		V_8 = L_35;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_36 = __this->___engine_0;
		NullCheck(L_36);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_37 = L_36->___param_0;
		NullCheck(L_37);
		uint32_t L_38 = L_37->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_39;
		L_39 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_38, NULL);
		V_9 = L_39;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_40 = __this->___engine_0;
		NullCheck(L_40);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_41 = L_40->___param_0;
		NullCheck(L_41);
		uint32_t L_42 = L_41->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_43;
		L_43 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_42, NULL);
		V_10 = L_43;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_44 = __this->___engine_0;
		NullCheck(L_44);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_45 = L_44->___param_0;
		NullCheck(L_45);
		uint32_t L_46 = L_45->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_47;
		L_47 = SikeUtilities_InitArray_mCFAD719DDB9949735E6B56F71BE414E5EB8AF0D8(3, 2, L_46, NULL);
		V_11 = L_47;
		V_12 = 0;
		V_13 = 0;
		V_14 = 0;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_48 = __this->___engine_0;
		NullCheck(L_48);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_49 = L_48->___param_0;
		NullCheck(L_49);
		uint32_t L_50 = L_49->___MAX_INT_POINTS_ALICE_25;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_50);
		V_18 = L_51;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_52 = __this->___engine_0;
		NullCheck(L_52);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_53 = L_52->___param_0;
		NullCheck(L_53);
		uint32_t L_54 = L_53->___NWORDS_ORDER_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_55 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_54);
		V_19 = L_55;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_56 = __this->___engine_0;
		NullCheck(L_56);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_57 = L_56->___param_0;
		NullCheck(L_57);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_58 = L_57->___A_gen_62;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_59 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_60 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_61 = V_7;
		Sidh_init_basis_m6CAD1AA4DF4649216867B17E66586AECEB91DC8E(__this, L_58, L_59, L_60, L_61, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_62 = __this->___engine_0;
		NullCheck(L_62);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_63 = L_62->___param_0;
		NullCheck(L_63);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_64 = L_63->___B_gen_63;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_65 = V_1;
		NullCheck(L_65);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_66 = L_65->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_67 = V_2;
		NullCheck(L_67);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = L_67->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_69 = V_3;
		NullCheck(L_69);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_70 = L_69->___X_0;
		Sidh_init_basis_m6CAD1AA4DF4649216867B17E66586AECEB91DC8E(__this, L_64, L_66, L_68, L_70, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_71 = __this->___engine_0;
		NullCheck(L_71);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_72 = L_71->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_73 = __this->___engine_0;
		NullCheck(L_73);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_74 = L_73->___param_0;
		NullCheck(L_74);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = L_74->___Montgomery_one_65;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_76 = V_1;
		NullCheck(L_76);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_77 = L_76->___Z_1;
		NullCheck(L_77);
		int32_t L_78 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_72);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_72, L_75, ((int64_t)0), L_79, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_80 = __this->___engine_0;
		NullCheck(L_80);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_81 = L_80->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_82 = __this->___engine_0;
		NullCheck(L_82);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_83 = L_82->___param_0;
		NullCheck(L_83);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_84 = L_83->___Montgomery_one_65;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_85 = V_2;
		NullCheck(L_85);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_86 = L_85->___Z_1;
		NullCheck(L_86);
		int32_t L_87 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_81);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_81, L_84, ((int64_t)0), L_88, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_89 = __this->___engine_0;
		NullCheck(L_89);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_90 = L_89->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_91 = __this->___engine_0;
		NullCheck(L_91);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_92 = L_91->___param_0;
		NullCheck(L_92);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_93 = L_92->___Montgomery_one_65;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_94 = V_3;
		NullCheck(L_94);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_95 = L_94->___Z_1;
		NullCheck(L_95);
		int32_t L_96 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_90);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_90, L_93, ((int64_t)0), L_97, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_98 = __this->___engine_0;
		NullCheck(L_98);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_99 = L_98->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_100 = __this->___engine_0;
		NullCheck(L_100);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_101 = L_100->___param_0;
		NullCheck(L_101);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_102 = L_101->___Montgomery_one_65;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_103 = V_8;
		NullCheck(L_103);
		int32_t L_104 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_99);
		Fpx_fpcopy_mA8B6F68F2605B0248B4EB2D1BC22582FE1D33190(L_99, L_102, ((int64_t)0), L_105, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_106 = __this->___engine_0;
		NullCheck(L_106);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_107 = L_106->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_108 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_109 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_110 = V_8;
		NullCheck(L_107);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_107, L_108, L_109, L_110, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_111 = __this->___engine_0;
		NullCheck(L_111);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_112 = L_111->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_113 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_114 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_115 = V_9;
		NullCheck(L_112);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_112, L_113, L_114, L_115, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_116 = __this->___engine_0;
		NullCheck(L_116);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_117 = L_116->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_118 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_119 = V_9;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_120 = V_10;
		NullCheck(L_117);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_117, L_118, L_119, L_120, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_121 = __this->___engine_0;
		NullCheck(L_121);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_122 = L_121->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_123 = V_9;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_124 = V_9;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_125 = V_8;
		NullCheck(L_122);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_122, L_123, L_124, L_125, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_126 = __this->___engine_0;
		NullCheck(L_126);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_127 = L_126->___fpx_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = ___ephemeralsk0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_129 = V_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_130 = __this->___engine_0;
		NullCheck(L_130);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_131 = L_130->___param_0;
		NullCheck(L_131);
		uint32_t L_132 = L_131->___SECRETKEY_A_BYTES_30;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_133 = __this->___engine_0;
		NullCheck(L_133);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_134 = L_133->___param_0;
		NullCheck(L_134);
		uint32_t L_135 = L_134->___NWORDS_ORDER_13;
		NullCheck(L_127);
		Fpx_decode_to_digits_m1A48649F7C0A1966AED62553A023C9960BBFBC7F(L_127, L_128, 0, L_129, L_132, L_135, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_136 = __this->___engine_0;
		NullCheck(L_136);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_137 = L_136->___isogeny_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_138 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_139 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_140 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_141 = V_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_142 = __this->___engine_0;
		NullCheck(L_142);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_143 = L_142->___param_0;
		NullCheck(L_143);
		uint32_t L_144 = L_143->___ALICE_16;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_145 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_146 = V_10;
		NullCheck(L_137);
		Isogeny_LADDER3PT_m697E167624E95A4212EF745138F1E8B8E746BF5B(L_137, L_138, L_139, L_140, L_141, L_144, L_145, L_146, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_147 = __this->___engine_0;
		NullCheck(L_147);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_148 = L_147->___param_0;
		NullCheck(L_148);
		uint32_t L_149 = L_148->___OALICE_BITS_18;
		if ((!(((uint32_t)((int32_t)((uint32_t)(int32_t)L_149%(uint32_t)(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_03a8;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_150 = __this->___engine_0;
		NullCheck(L_150);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_151 = L_150->___param_0;
		NullCheck(L_151);
		uint32_t L_152 = L_151->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_153 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_153);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_153, L_152, NULL);
		V_20 = L_153;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_154 = __this->___engine_0;
		NullCheck(L_154);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_155 = L_154->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_156 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_157 = V_20;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_158 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_159 = V_9;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_160 = __this->___engine_0;
		NullCheck(L_160);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_161 = L_160->___param_0;
		NullCheck(L_161);
		uint32_t L_162 = L_161->___OALICE_BITS_18;
		NullCheck(L_155);
		Isogeny_XDblE_m0F743C7F0D64AA6B7B8765A580942A9B6831AD46(L_155, L_156, L_157, L_158, L_159, ((int32_t)il2cpp_codegen_subtract((int32_t)L_162, 1)), NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_163 = __this->___engine_0;
		NullCheck(L_163);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_164 = L_163->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_165 = V_20;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_166 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_167 = V_9;
		NullCheck(L_164);
		Isogeny_Get2Isog_m4D12A9542815D2F2CF7C8A76310E9FC2614823F7(L_164, L_165, L_166, L_167, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_168 = __this->___engine_0;
		NullCheck(L_168);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_169 = L_168->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_170 = V_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_171 = V_20;
		NullCheck(L_169);
		Isogeny_Eval2Isog_mF5377153D3E6A3EBBEFAF1222220690F6078179F(L_169, L_170, L_171, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_172 = __this->___engine_0;
		NullCheck(L_172);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_173 = L_172->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_174 = V_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_175 = V_20;
		NullCheck(L_173);
		Isogeny_Eval2Isog_mF5377153D3E6A3EBBEFAF1222220690F6078179F(L_173, L_174, L_175, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_176 = __this->___engine_0;
		NullCheck(L_176);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_177 = L_176->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_178 = V_3;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_179 = V_20;
		NullCheck(L_177);
		Isogeny_Eval2Isog_mF5377153D3E6A3EBBEFAF1222220690F6078179F(L_177, L_178, L_179, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_180 = __this->___engine_0;
		NullCheck(L_180);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_181 = L_180->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_182 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_183 = V_20;
		NullCheck(L_181);
		Isogeny_Eval2Isog_mF5377153D3E6A3EBBEFAF1222220690F6078179F(L_181, L_182, L_183, NULL);
	}

IL_03a8:
	{
		V_12 = 0;
		V_17 = 1;
		goto IL_053f;
	}

IL_03b3:
	{
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_184 = V_4;
		uint32_t L_185 = V_13;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_186 = __this->___engine_0;
		NullCheck(L_186);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_187 = L_186->___param_0;
		NullCheck(L_187);
		uint32_t L_188 = L_187->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_189 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_189);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_189, L_188, NULL);
		NullCheck(L_184);
		ArrayElementTypeCheck (L_184, L_189);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(L_185), (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)L_189);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_190 = __this->___engine_0;
		NullCheck(L_190);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_191 = L_190->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_192 = V_0;
		NullCheck(L_192);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_193 = L_192->___X_0;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_194 = V_4;
		uint32_t L_195 = V_13;
		NullCheck(L_194);
		uint32_t L_196 = L_195;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_197 = (L_194)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		NullCheck(L_197);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_198 = L_197->___X_0;
		NullCheck(L_191);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_191, L_193, L_198, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_199 = __this->___engine_0;
		NullCheck(L_199);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_200 = L_199->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_201 = V_0;
		NullCheck(L_201);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_202 = L_201->___Z_1;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_203 = V_4;
		uint32_t L_204 = V_13;
		NullCheck(L_203);
		uint32_t L_205 = L_204;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_206 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		NullCheck(L_206);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_207 = L_206->___Z_1;
		NullCheck(L_200);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_200, L_202, L_207, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_208 = V_18;
		uint32_t L_209 = V_13;
		uint32_t L_210 = L_209;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_210, 1));
		uint32_t L_211 = V_12;
		NullCheck(L_208);
		(L_208)->SetAt(static_cast<il2cpp_array_size_t>(L_210), (uint32_t)L_211);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_212 = __this->___engine_0;
		NullCheck(L_212);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_213 = L_212->___param_0;
		NullCheck(L_213);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_214 = L_213->___strat_Alice_66;
		uint32_t L_215 = V_14;
		uint32_t L_216 = L_215;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_216, 1));
		NullCheck(L_214);
		uint32_t L_217 = L_216;
		uint32_t L_218 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		V_15 = L_218;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_219 = __this->___engine_0;
		NullCheck(L_219);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_220 = L_219->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_221 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_222 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_223 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_224 = V_9;
		uint32_t L_225 = V_15;
		NullCheck(L_220);
		Isogeny_XDblE_m0F743C7F0D64AA6B7B8765A580942A9B6831AD46(L_220, L_221, L_222, L_223, L_224, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_225)), NULL);
		uint32_t L_226 = V_12;
		uint32_t L_227 = V_15;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_226, (int32_t)L_227));
	}

IL_0454:
	{
		uint32_t L_228 = V_12;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_229 = __this->___engine_0;
		NullCheck(L_229);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_230 = L_229->___param_0;
		NullCheck(L_230);
		uint32_t L_231 = L_230->___MAX_Alice_27;
		uint32_t L_232 = V_17;
		if ((!(((uint32_t)L_228) >= ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_231, (int32_t)L_232))))))
		{
			goto IL_03b3;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_233 = __this->___engine_0;
		NullCheck(L_233);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_234 = L_233->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_235 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_236 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_237 = V_9;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_238 = V_11;
		NullCheck(L_234);
		Isogeny_Get4Isog_m4B3F2335927822F9007849AE9EEAB33D396AC7D9(L_234, L_235, L_236, L_237, L_238, NULL);
		V_16 = 0;
		goto IL_04a7;
	}

IL_048a:
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_239 = __this->___engine_0;
		NullCheck(L_239);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_240 = L_239->___isogeny_1;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_241 = V_4;
		uint32_t L_242 = V_16;
		NullCheck(L_241);
		uint32_t L_243 = L_242;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_244 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_245 = V_11;
		NullCheck(L_240);
		Isogeny_Eval4Isog_m0DD93770EC9BA1C30840735DEC7047778FF82F62(L_240, L_244, L_245, NULL);
		uint32_t L_246 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_246, 1));
	}

IL_04a7:
	{
		uint32_t L_247 = V_16;
		uint32_t L_248 = V_13;
		if ((!(((uint32_t)L_247) >= ((uint32_t)L_248))))
		{
			goto IL_048a;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_249 = __this->___engine_0;
		NullCheck(L_249);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_250 = L_249->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_251 = V_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_252 = V_11;
		NullCheck(L_250);
		Isogeny_Eval4Isog_m0DD93770EC9BA1C30840735DEC7047778FF82F62(L_250, L_251, L_252, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_253 = __this->___engine_0;
		NullCheck(L_253);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_254 = L_253->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_255 = V_2;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_256 = V_11;
		NullCheck(L_254);
		Isogeny_Eval4Isog_m0DD93770EC9BA1C30840735DEC7047778FF82F62(L_254, L_255, L_256, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_257 = __this->___engine_0;
		NullCheck(L_257);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_258 = L_257->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_259 = V_3;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_260 = V_11;
		NullCheck(L_258);
		Isogeny_Eval4Isog_m0DD93770EC9BA1C30840735DEC7047778FF82F62(L_258, L_259, L_260, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_261 = __this->___engine_0;
		NullCheck(L_261);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_262 = L_261->___fpx_2;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_263 = V_4;
		uint32_t L_264 = V_13;
		NullCheck(L_263);
		int32_t L_265 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_264, 1));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_266 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		NullCheck(L_266);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_267 = L_266->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_268 = V_0;
		NullCheck(L_268);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_269 = L_268->___X_0;
		NullCheck(L_262);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_262, L_267, L_269, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_270 = __this->___engine_0;
		NullCheck(L_270);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_271 = L_270->___fpx_2;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_272 = V_4;
		uint32_t L_273 = V_13;
		NullCheck(L_272);
		int32_t L_274 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_273, 1));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_275 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		NullCheck(L_275);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_276 = L_275->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_277 = V_0;
		NullCheck(L_277);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_278 = L_277->___Z_1;
		NullCheck(L_271);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_271, L_276, L_278, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_279 = V_18;
		uint32_t L_280 = V_13;
		NullCheck(L_279);
		int32_t L_281 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_280, 1));
		uint32_t L_282 = (L_279)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		V_12 = L_282;
		uint32_t L_283 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_283, 1));
		uint32_t L_284 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_284, 1));
	}

IL_053f:
	{
		uint32_t L_285 = V_17;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_286 = __this->___engine_0;
		NullCheck(L_286);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_287 = L_286->___param_0;
		NullCheck(L_287);
		uint32_t L_288 = L_287->___MAX_Alice_27;
		if ((!(((uint32_t)L_285) >= ((uint32_t)L_288))))
		{
			goto IL_0454;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_289 = __this->___engine_0;
		NullCheck(L_289);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_290 = L_289->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_291 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_292 = V_8;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_293 = V_9;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_294 = V_11;
		NullCheck(L_290);
		Isogeny_Get4Isog_m4B3F2335927822F9007849AE9EEAB33D396AC7D9(L_290, L_291, L_292, L_293, L_294, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_295 = __this->___engine_0;
		NullCheck(L_295);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_296 = L_295->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_297 = V_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_298 = V_11;
		NullCheck(L_296);
		Isogeny_Eval4Isog_m0DD93770EC9BA1C30840735DEC7047778FF82F62(L_296, L_297, L_298, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_299 = __this->___engine_0;
		NullCheck(L_299);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_300 = L_299->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_301 = V_2;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_302 = V_11;
		NullCheck(L_300);
		Isogeny_Eval4Isog_m0DD93770EC9BA1C30840735DEC7047778FF82F62(L_300, L_301, L_302, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_303 = __this->___engine_0;
		NullCheck(L_303);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_304 = L_303->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_305 = V_3;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_306 = V_11;
		NullCheck(L_304);
		Isogeny_Eval4Isog_m0DD93770EC9BA1C30840735DEC7047778FF82F62(L_304, L_305, L_306, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_307 = __this->___engine_0;
		NullCheck(L_307);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_308 = L_307->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_309 = V_1;
		NullCheck(L_309);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_310 = L_309->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_311 = V_2;
		NullCheck(L_311);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_312 = L_311->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_313 = V_3;
		NullCheck(L_313);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_314 = L_313->___Z_1;
		NullCheck(L_308);
		Isogeny_Inv3Way_m8D006D0C54B4447226F2038B2D20EF94B82C1419(L_308, L_310, L_312, L_314, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_315 = __this->___engine_0;
		NullCheck(L_315);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_316 = L_315->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_317 = V_1;
		NullCheck(L_317);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_318 = L_317->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_319 = V_1;
		NullCheck(L_319);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_320 = L_319->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_321 = V_1;
		NullCheck(L_321);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_322 = L_321->___X_0;
		NullCheck(L_316);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_316, L_318, L_320, L_322, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_323 = __this->___engine_0;
		NullCheck(L_323);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_324 = L_323->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_325 = V_2;
		NullCheck(L_325);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_326 = L_325->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_327 = V_2;
		NullCheck(L_327);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_328 = L_327->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_329 = V_2;
		NullCheck(L_329);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_330 = L_329->___X_0;
		NullCheck(L_324);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_324, L_326, L_328, L_330, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_331 = __this->___engine_0;
		NullCheck(L_331);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_332 = L_331->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_333 = V_3;
		NullCheck(L_333);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_334 = L_333->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_335 = V_3;
		NullCheck(L_335);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_336 = L_335->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_337 = V_3;
		NullCheck(L_337);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_338 = L_337->___X_0;
		NullCheck(L_332);
		Fpx_fp2mul_mont_mF758A46351EFD5ECB8D582E0F2A6D7AB25FA7C00(L_332, L_334, L_336, L_338, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_339 = __this->___engine_0;
		NullCheck(L_339);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_340 = L_339->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_341 = V_1;
		NullCheck(L_341);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_342 = L_341->___X_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_343 = ___ct1;
		NullCheck(L_340);
		Fpx_fp2_encode_m51DE285ED128D4F78A91B995E9E60081896C9BBB(L_340, L_342, L_343, 0, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_344 = __this->___engine_0;
		NullCheck(L_344);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_345 = L_344->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_346 = V_2;
		NullCheck(L_346);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_347 = L_346->___X_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_348 = ___ct1;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_349 = __this->___engine_0;
		NullCheck(L_349);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_350 = L_349->___param_0;
		NullCheck(L_350);
		uint32_t L_351 = L_350->___FP2_ENCODED_BYTES_32;
		NullCheck(L_345);
		Fpx_fp2_encode_m51DE285ED128D4F78A91B995E9E60081896C9BBB(L_345, L_347, L_348, L_351, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_352 = __this->___engine_0;
		NullCheck(L_352);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_353 = L_352->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_354 = V_3;
		NullCheck(L_354);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_355 = L_354->___X_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_356 = ___ct1;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_357 = __this->___engine_0;
		NullCheck(L_357);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_358 = L_357->___param_0;
		NullCheck(L_358);
		uint32_t L_359 = L_358->___FP2_ENCODED_BYTES_32;
		NullCheck(L_353);
		Fpx_fp2_encode_m51DE285ED128D4F78A91B995E9E60081896C9BBB(L_353, L_355, L_356, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_359)), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Sidh::EphemeralSecretAgreement_A(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sidh_EphemeralSecretAgreement_A_m2EA62578D131FE60CEEFE1FC7F331A7E0F8990C4 (Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ephemeralsk0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___jinvariant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_0 = NULL;
	PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* V_1 = NULL;
	UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* V_2 = NULL;
	UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* V_3 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_4 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_5 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_6 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_7 = NULL;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_14 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_15 = NULL;
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_16 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_3 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_3, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___MAX_INT_POINTS_ALICE_25;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_7 = (PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B*)(PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B*)SZArrayNew(PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_11;
		L_11 = SikeUtilities_InitArray_mCFAD719DDB9949735E6B56F71BE414E5EB8AF0D8(3, 2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_13 = L_12->___param_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_15;
		L_15 = SikeUtilities_InitArray_mCFAD719DDB9949735E6B56F71BE414E5EB8AF0D8(3, 2, L_14, NULL);
		V_3 = L_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_17 = L_16->___param_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_19;
		L_19 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_18, NULL);
		V_4 = L_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_20 = __this->___engine_0;
		NullCheck(L_20);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_21 = L_20->___param_0;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_23;
		L_23 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_22, NULL);
		V_5 = L_23;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_24 = __this->___engine_0;
		NullCheck(L_24);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_25 = L_24->___param_0;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_27;
		L_27 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_26, NULL);
		V_6 = L_27;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_28 = __this->___engine_0;
		NullCheck(L_28);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_29 = L_28->___param_0;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_31;
		L_31 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_30, NULL);
		V_7 = L_31;
		V_8 = 0;
		V_9 = 0;
		V_10 = 0;
		V_11 = 0;
		V_12 = 0;
		V_13 = 0;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_32 = __this->___engine_0;
		NullCheck(L_32);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_33 = L_32->___param_0;
		NullCheck(L_33);
		uint32_t L_34 = L_33->___MAX_INT_POINTS_ALICE_25;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_14 = L_35;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_36 = __this->___engine_0;
		NullCheck(L_36);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_37 = L_36->___param_0;
		NullCheck(L_37);
		uint32_t L_38 = L_37->___NWORDS_ORDER_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_38);
		V_15 = L_39;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_40 = __this->___engine_0;
		NullCheck(L_40);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_41 = L_40->___fpx_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___pk1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_43 = V_2;
		NullCheck(L_43);
		int32_t L_44 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_41);
		Fpx_fp2_decode_mC238530529B9C2A0C70F6A1A5EBC1EDC427B1E3D(L_41, L_42, L_45, 0, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_46 = __this->___engine_0;
		NullCheck(L_46);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_47 = L_46->___fpx_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___pk1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_49 = V_2;
		NullCheck(L_49);
		int32_t L_50 = 1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_52 = __this->___engine_0;
		NullCheck(L_52);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_53 = L_52->___param_0;
		NullCheck(L_53);
		uint32_t L_54 = L_53->___FP2_ENCODED_BYTES_32;
		NullCheck(L_47);
		Fpx_fp2_decode_mC238530529B9C2A0C70F6A1A5EBC1EDC427B1E3D(L_47, L_48, L_51, L_54, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_55 = __this->___engine_0;
		NullCheck(L_55);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_56 = L_55->___fpx_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___pk1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_58 = V_2;
		NullCheck(L_58);
		int32_t L_59 = 2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_61 = __this->___engine_0;
		NullCheck(L_61);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_62 = L_61->___param_0;
		NullCheck(L_62);
		uint32_t L_63 = L_62->___FP2_ENCODED_BYTES_32;
		NullCheck(L_56);
		Fpx_fp2_decode_mC238530529B9C2A0C70F6A1A5EBC1EDC427B1E3D(L_56, L_57, L_60, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_63)), NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_64 = __this->___engine_0;
		NullCheck(L_64);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_65 = L_64->___isogeny_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_66 = V_2;
		NullCheck(L_66);
		int32_t L_67 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_69 = V_2;
		NullCheck(L_69);
		int32_t L_70 = 1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_72 = V_2;
		NullCheck(L_72);
		int32_t L_73 = 2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_75 = V_7;
		NullCheck(L_65);
		Isogeny_GetA_mE384008803EE7E4F2968AF7E7CC6E224396E877A(L_65, L_68, L_71, L_74, L_75, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_76 = __this->___engine_0;
		NullCheck(L_76);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_77 = L_76->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_78 = __this->___engine_0;
		NullCheck(L_78);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_79 = L_78->___param_0;
		NullCheck(L_79);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_80 = L_79->___Montgomery_one_65;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_81 = __this->___engine_0;
		NullCheck(L_81);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_82 = L_81->___param_0;
		NullCheck(L_82);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_83 = L_82->___Montgomery_one_65;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_84 = V_6;
		NullCheck(L_84);
		int32_t L_85 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_87 = __this->___engine_0;
		NullCheck(L_87);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_88 = L_87->___param_0;
		NullCheck(L_88);
		uint32_t L_89 = L_88->___NWORDS_FIELD_6;
		NullCheck(L_77);
		uint64_t L_90;
		L_90 = Fpx_mp_add_mF0E756044126E539FB5680B3E61597C466752CEB(L_77, L_80, L_83, L_86, L_89, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_91 = __this->___engine_0;
		NullCheck(L_91);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_92 = L_91->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_93 = V_7;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_94 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_95 = V_5;
		NullCheck(L_92);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_92, L_93, L_94, L_95, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_96 = __this->___engine_0;
		NullCheck(L_96);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_97 = L_96->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_98 = V_6;
		NullCheck(L_98);
		int32_t L_99 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_101 = V_6;
		NullCheck(L_101);
		int32_t L_102 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_104 = V_6;
		NullCheck(L_104);
		int32_t L_105 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_107 = __this->___engine_0;
		NullCheck(L_107);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_108 = L_107->___param_0;
		NullCheck(L_108);
		uint32_t L_109 = L_108->___NWORDS_FIELD_6;
		NullCheck(L_97);
		uint64_t L_110;
		L_110 = Fpx_mp_add_mF0E756044126E539FB5680B3E61597C466752CEB(L_97, L_100, L_103, L_106, L_109, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_111 = __this->___engine_0;
		NullCheck(L_111);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_112 = L_111->___fpx_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = ___ephemeralsk0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_114 = V_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_115 = __this->___engine_0;
		NullCheck(L_115);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_116 = L_115->___param_0;
		NullCheck(L_116);
		uint32_t L_117 = L_116->___SECRETKEY_A_BYTES_30;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_118 = __this->___engine_0;
		NullCheck(L_118);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_119 = L_118->___param_0;
		NullCheck(L_119);
		uint32_t L_120 = L_119->___NWORDS_ORDER_13;
		NullCheck(L_112);
		Fpx_decode_to_digits_m1A48649F7C0A1966AED62553A023C9960BBFBC7F(L_112, L_113, 0, L_114, L_117, L_120, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_121 = __this->___engine_0;
		NullCheck(L_121);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_122 = L_121->___isogeny_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_123 = V_2;
		NullCheck(L_123);
		int32_t L_124 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_125 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_126 = V_2;
		NullCheck(L_126);
		int32_t L_127 = 1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_129 = V_2;
		NullCheck(L_129);
		int32_t L_130 = 2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_132 = V_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_133 = __this->___engine_0;
		NullCheck(L_133);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_134 = L_133->___param_0;
		NullCheck(L_134);
		uint32_t L_135 = L_134->___ALICE_16;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_136 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_137 = V_7;
		NullCheck(L_122);
		Isogeny_LADDER3PT_m697E167624E95A4212EF745138F1E8B8E746BF5B(L_122, L_125, L_128, L_131, L_132, L_135, L_136, L_137, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_138 = __this->___engine_0;
		NullCheck(L_138);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_139 = L_138->___param_0;
		NullCheck(L_139);
		uint32_t L_140 = L_139->___OALICE_BITS_18;
		if ((!(((uint32_t)((int32_t)((uint32_t)(int32_t)L_140%(uint32_t)(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_02de;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_141 = __this->___engine_0;
		NullCheck(L_141);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_142 = L_141->___param_0;
		NullCheck(L_142);
		uint32_t L_143 = L_142->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_144 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_144);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_144, L_143, NULL);
		V_16 = L_144;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_145 = __this->___engine_0;
		NullCheck(L_145);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_146 = L_145->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_147 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_148 = V_16;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_149 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_150 = V_6;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_151 = __this->___engine_0;
		NullCheck(L_151);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_152 = L_151->___param_0;
		NullCheck(L_152);
		uint32_t L_153 = L_152->___OALICE_BITS_18;
		NullCheck(L_146);
		Isogeny_XDblE_m0F743C7F0D64AA6B7B8765A580942A9B6831AD46(L_146, L_147, L_148, L_149, L_150, ((int32_t)il2cpp_codegen_subtract((int32_t)L_153, 1)), NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_154 = __this->___engine_0;
		NullCheck(L_154);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_155 = L_154->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_156 = V_16;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_157 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_158 = V_6;
		NullCheck(L_155);
		Isogeny_Get2Isog_m4D12A9542815D2F2CF7C8A76310E9FC2614823F7(L_155, L_156, L_157, L_158, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_159 = __this->___engine_0;
		NullCheck(L_159);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_160 = L_159->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_161 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_162 = V_16;
		NullCheck(L_160);
		Isogeny_Eval2Isog_mF5377153D3E6A3EBBEFAF1222220690F6078179F(L_160, L_161, L_162, NULL);
	}

IL_02de:
	{
		V_11 = 0;
		V_9 = 1;
		goto IL_0434;
	}

IL_02e9:
	{
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_163 = V_1;
		uint32_t L_164 = V_12;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_165 = __this->___engine_0;
		NullCheck(L_165);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_166 = L_165->___param_0;
		NullCheck(L_166);
		uint32_t L_167 = L_166->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_168 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_168);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_168, L_167, NULL);
		NullCheck(L_163);
		ArrayElementTypeCheck (L_163, L_168);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(L_164), (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)L_168);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_169 = __this->___engine_0;
		NullCheck(L_169);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_170 = L_169->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_171 = V_0;
		NullCheck(L_171);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_172 = L_171->___X_0;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_173 = V_1;
		uint32_t L_174 = V_12;
		NullCheck(L_173);
		uint32_t L_175 = L_174;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_176);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_177 = L_176->___X_0;
		NullCheck(L_170);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_170, L_172, L_177, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_178 = __this->___engine_0;
		NullCheck(L_178);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_179 = L_178->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_180 = V_0;
		NullCheck(L_180);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_181 = L_180->___Z_1;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_182 = V_1;
		uint32_t L_183 = V_12;
		NullCheck(L_182);
		uint32_t L_184 = L_183;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		NullCheck(L_185);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_186 = L_185->___Z_1;
		NullCheck(L_179);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_179, L_181, L_186, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_187 = V_14;
		uint32_t L_188 = V_12;
		uint32_t L_189 = L_188;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_189, 1));
		uint32_t L_190 = V_11;
		NullCheck(L_187);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(L_189), (uint32_t)L_190);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_191 = __this->___engine_0;
		NullCheck(L_191);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_192 = L_191->___param_0;
		NullCheck(L_192);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_193 = L_192->___strat_Alice_66;
		uint32_t L_194 = V_13;
		uint32_t L_195 = L_194;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_195, 1));
		NullCheck(L_193);
		uint32_t L_196 = L_195;
		uint32_t L_197 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		V_10 = L_197;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_198 = __this->___engine_0;
		NullCheck(L_198);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_199 = L_198->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_200 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_201 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_202 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_203 = V_6;
		uint32_t L_204 = V_10;
		NullCheck(L_199);
		Isogeny_XDblE_m0F743C7F0D64AA6B7B8765A580942A9B6831AD46(L_199, L_200, L_201, L_202, L_203, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_204)), NULL);
		uint32_t L_205 = V_11;
		uint32_t L_206 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_205, (int32_t)L_206));
	}

IL_0387:
	{
		uint32_t L_207 = V_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_208 = __this->___engine_0;
		NullCheck(L_208);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_209 = L_208->___param_0;
		NullCheck(L_209);
		uint32_t L_210 = L_209->___MAX_Alice_27;
		uint32_t L_211 = V_9;
		if ((!(((uint32_t)L_207) >= ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_210, (int32_t)L_211))))))
		{
			goto IL_02e9;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_212 = __this->___engine_0;
		NullCheck(L_212);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_213 = L_212->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_214 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_215 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_216 = V_6;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_217 = V_3;
		NullCheck(L_213);
		Isogeny_Get4Isog_m4B3F2335927822F9007849AE9EEAB33D396AC7D9(L_213, L_214, L_215, L_216, L_217, NULL);
		V_8 = 0;
		goto IL_03d7;
	}

IL_03bc:
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_218 = __this->___engine_0;
		NullCheck(L_218);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_219 = L_218->___isogeny_1;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_220 = V_1;
		uint32_t L_221 = V_8;
		NullCheck(L_220);
		uint32_t L_222 = L_221;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_224 = V_3;
		NullCheck(L_219);
		Isogeny_Eval4Isog_m0DD93770EC9BA1C30840735DEC7047778FF82F62(L_219, L_223, L_224, NULL);
		uint32_t L_225 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_225, 1));
	}

IL_03d7:
	{
		uint32_t L_226 = V_8;
		uint32_t L_227 = V_12;
		if ((!(((uint32_t)L_226) >= ((uint32_t)L_227))))
		{
			goto IL_03bc;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_228 = __this->___engine_0;
		NullCheck(L_228);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_229 = L_228->___fpx_2;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_230 = V_1;
		uint32_t L_231 = V_12;
		NullCheck(L_230);
		int32_t L_232 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_231, 1));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_233 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		NullCheck(L_233);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_234 = L_233->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_235 = V_0;
		NullCheck(L_235);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_236 = L_235->___X_0;
		NullCheck(L_229);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_229, L_234, L_236, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_237 = __this->___engine_0;
		NullCheck(L_237);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_238 = L_237->___fpx_2;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_239 = V_1;
		uint32_t L_240 = V_12;
		NullCheck(L_239);
		int32_t L_241 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_240, 1));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_242 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		NullCheck(L_242);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_243 = L_242->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_244 = V_0;
		NullCheck(L_244);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_245 = L_244->___Z_1;
		NullCheck(L_238);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_238, L_243, L_245, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_246 = V_14;
		uint32_t L_247 = V_12;
		NullCheck(L_246);
		int32_t L_248 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_247, 1));
		uint32_t L_249 = (L_246)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		V_11 = L_249;
		uint32_t L_250 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_250, 1));
		uint32_t L_251 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_251, 1));
	}

IL_0434:
	{
		uint32_t L_252 = V_9;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_253 = __this->___engine_0;
		NullCheck(L_253);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_254 = L_253->___param_0;
		NullCheck(L_254);
		uint32_t L_255 = L_254->___MAX_Alice_27;
		if ((!(((uint32_t)L_252) >= ((uint32_t)L_255))))
		{
			goto IL_0387;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_256 = __this->___engine_0;
		NullCheck(L_256);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_257 = L_256->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_258 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_259 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_260 = V_6;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_261 = V_3;
		NullCheck(L_257);
		Isogeny_Get4Isog_m4B3F2335927822F9007849AE9EEAB33D396AC7D9(L_257, L_258, L_259, L_260, L_261, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_262 = __this->___engine_0;
		NullCheck(L_262);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_263 = L_262->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_264 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_265 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_266 = V_5;
		NullCheck(L_263);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_263, L_264, L_265, L_266, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_267 = __this->___engine_0;
		NullCheck(L_267);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_268 = L_267->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_269 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_270 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_271 = V_5;
		NullCheck(L_268);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_268, L_269, L_270, L_271, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_272 = __this->___engine_0;
		NullCheck(L_272);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_273 = L_272->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_274 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_275 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_276 = V_5;
		NullCheck(L_273);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_273, L_274, L_275, L_276, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_277 = __this->___engine_0;
		NullCheck(L_277);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_278 = L_277->___isogeny_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_279 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_280 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_281 = V_4;
		NullCheck(L_278);
		Isogeny_JInv_m3031B751565B59E0027AC120F06C3B1DF08AD765(L_278, L_279, L_280, L_281, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_282 = __this->___engine_0;
		NullCheck(L_282);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_283 = L_282->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_284 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_285 = ___jinvariant2;
		NullCheck(L_283);
		Fpx_fp2_encode_m51DE285ED128D4F78A91B995E9E60081896C9BBB(L_283, L_284, L_285, 0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.Sidh::EphemeralSecretAgreement_B(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sidh_EphemeralSecretAgreement_B_mCD5E78449576B28704FD85A890E7B642D04D18CC (Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ct1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___jinvariant_2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* V_0 = NULL;
	PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* V_1 = NULL;
	UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* V_2 = NULL;
	UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* V_3 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_4 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_5 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_6 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_7 = NULL;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_14 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_15 = NULL;
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_0 = __this->___engine_0;
		NullCheck(L_0);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = L_0->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_3 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_3, L_2, NULL);
		V_0 = L_3;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_4 = __this->___engine_0;
		NullCheck(L_4);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_5 = L_4->___param_0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___MAX_INT_POINTS_BOB_26;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_7 = (PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B*)(PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B*)SZArrayNew(PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_8 = __this->___engine_0;
		NullCheck(L_8);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = L_8->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_11;
		L_11 = SikeUtilities_InitArray_mCFAD719DDB9949735E6B56F71BE414E5EB8AF0D8(3, 2, L_10, NULL);
		V_2 = L_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_12 = __this->___engine_0;
		NullCheck(L_12);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_13 = L_12->___param_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_15;
		L_15 = SikeUtilities_InitArray_mCFAD719DDB9949735E6B56F71BE414E5EB8AF0D8(3, 2, L_14, NULL);
		V_3 = L_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_16 = __this->___engine_0;
		NullCheck(L_16);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_17 = L_16->___param_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_19;
		L_19 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_18, NULL);
		V_4 = L_19;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_20 = __this->___engine_0;
		NullCheck(L_20);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_21 = L_20->___param_0;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_23;
		L_23 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_22, NULL);
		V_5 = L_23;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_24 = __this->___engine_0;
		NullCheck(L_24);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_25 = L_24->___param_0;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_27;
		L_27 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_26, NULL);
		V_6 = L_27;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_28 = __this->___engine_0;
		NullCheck(L_28);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_29 = L_28->___param_0;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___NWORDS_FIELD_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_31;
		L_31 = SikeUtilities_InitArray_m158E18E4B4A6BA1F7C565AF080F258A1F0FD97F4(2, L_30, NULL);
		V_7 = L_31;
		V_11 = 0;
		V_12 = 0;
		V_13 = 0;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_32 = __this->___engine_0;
		NullCheck(L_32);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_33 = L_32->___param_0;
		NullCheck(L_33);
		uint32_t L_34 = L_33->___MAX_INT_POINTS_BOB_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_14 = L_35;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_36 = __this->___engine_0;
		NullCheck(L_36);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_37 = L_36->___param_0;
		NullCheck(L_37);
		uint32_t L_38 = L_37->___NWORDS_ORDER_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_38);
		V_15 = L_39;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_40 = __this->___engine_0;
		NullCheck(L_40);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_41 = L_40->___fpx_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___ct1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_43 = V_3;
		NullCheck(L_43);
		int32_t L_44 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_41);
		Fpx_fp2_decode_mC238530529B9C2A0C70F6A1A5EBC1EDC427B1E3D(L_41, L_42, L_45, 0, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_46 = __this->___engine_0;
		NullCheck(L_46);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_47 = L_46->___fpx_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___ct1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_49 = V_3;
		NullCheck(L_49);
		int32_t L_50 = 1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_52 = __this->___engine_0;
		NullCheck(L_52);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_53 = L_52->___param_0;
		NullCheck(L_53);
		uint32_t L_54 = L_53->___FP2_ENCODED_BYTES_32;
		NullCheck(L_47);
		Fpx_fp2_decode_mC238530529B9C2A0C70F6A1A5EBC1EDC427B1E3D(L_47, L_48, L_51, L_54, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_55 = __this->___engine_0;
		NullCheck(L_55);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_56 = L_55->___fpx_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___ct1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_58 = V_3;
		NullCheck(L_58);
		int32_t L_59 = 2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_61 = __this->___engine_0;
		NullCheck(L_61);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_62 = L_61->___param_0;
		NullCheck(L_62);
		uint32_t L_63 = L_62->___FP2_ENCODED_BYTES_32;
		NullCheck(L_56);
		Fpx_fp2_decode_mC238530529B9C2A0C70F6A1A5EBC1EDC427B1E3D(L_56, L_57, L_60, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_63)), NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_64 = __this->___engine_0;
		NullCheck(L_64);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_65 = L_64->___isogeny_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_66 = V_3;
		NullCheck(L_66);
		int32_t L_67 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_69 = V_3;
		NullCheck(L_69);
		int32_t L_70 = 1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_72 = V_3;
		NullCheck(L_72);
		int32_t L_73 = 2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_75 = V_7;
		NullCheck(L_65);
		Isogeny_GetA_mE384008803EE7E4F2968AF7E7CC6E224396E877A(L_65, L_68, L_71, L_74, L_75, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_76 = __this->___engine_0;
		NullCheck(L_76);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_77 = L_76->___fpx_2;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_78 = __this->___engine_0;
		NullCheck(L_78);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_79 = L_78->___param_0;
		NullCheck(L_79);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_80 = L_79->___Montgomery_one_65;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_81 = __this->___engine_0;
		NullCheck(L_81);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_82 = L_81->___param_0;
		NullCheck(L_82);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_83 = L_82->___Montgomery_one_65;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_84 = V_6;
		NullCheck(L_84);
		int32_t L_85 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_87 = __this->___engine_0;
		NullCheck(L_87);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_88 = L_87->___param_0;
		NullCheck(L_88);
		uint32_t L_89 = L_88->___NWORDS_FIELD_6;
		NullCheck(L_77);
		uint64_t L_90;
		L_90 = Fpx_mp_add_mF0E756044126E539FB5680B3E61597C466752CEB(L_77, L_80, L_83, L_86, L_89, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_91 = __this->___engine_0;
		NullCheck(L_91);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_92 = L_91->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_93 = V_7;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_94 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_95 = V_5;
		NullCheck(L_92);
		Fpx_mp2_add_m7CD996AE26B07A0470632ED1CC7BB574A631F2A1(L_92, L_93, L_94, L_95, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_96 = __this->___engine_0;
		NullCheck(L_96);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_97 = L_96->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_98 = V_7;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_99 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_100 = V_6;
		NullCheck(L_97);
		Fpx_mp2_sub_p2_m827CA14136ADF05AB94A4FF51420B2DCCA6F28C2(L_97, L_98, L_99, L_100, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_101 = __this->___engine_0;
		NullCheck(L_101);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_102 = L_101->___fpx_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = ___sk0;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_104 = __this->___engine_0;
		NullCheck(L_104);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_105 = L_104->___param_0;
		NullCheck(L_105);
		uint32_t L_106 = L_105->___MSG_BYTES_29;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_107 = V_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_108 = __this->___engine_0;
		NullCheck(L_108);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_109 = L_108->___param_0;
		NullCheck(L_109);
		uint32_t L_110 = L_109->___SECRETKEY_B_BYTES_31;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_111 = __this->___engine_0;
		NullCheck(L_111);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_112 = L_111->___param_0;
		NullCheck(L_112);
		uint32_t L_113 = L_112->___NWORDS_ORDER_13;
		NullCheck(L_102);
		Fpx_decode_to_digits_m1A48649F7C0A1966AED62553A023C9960BBFBC7F(L_102, L_103, L_106, L_107, L_110, L_113, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_114 = __this->___engine_0;
		NullCheck(L_114);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_115 = L_114->___isogeny_1;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_116 = V_3;
		NullCheck(L_116);
		int32_t L_117 = 0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_119 = V_3;
		NullCheck(L_119);
		int32_t L_120 = 1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_122 = V_3;
		NullCheck(L_122);
		int32_t L_123 = 2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_125 = V_15;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_126 = __this->___engine_0;
		NullCheck(L_126);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_127 = L_126->___param_0;
		NullCheck(L_127);
		uint32_t L_128 = L_127->___BOB_17;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_129 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_130 = V_7;
		NullCheck(L_115);
		Isogeny_LADDER3PT_m697E167624E95A4212EF745138F1E8B8E746BF5B(L_115, L_118, L_121, L_124, L_125, L_128, L_129, L_130, NULL);
		V_11 = 0;
		V_9 = 1;
		goto IL_03a3;
	}

IL_025a:
	{
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_131 = V_1;
		uint32_t L_132 = V_12;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_133 = __this->___engine_0;
		NullCheck(L_133);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_134 = L_133->___param_0;
		NullCheck(L_134);
		uint32_t L_135 = L_134->___NWORDS_FIELD_6;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_136 = (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)il2cpp_codegen_object_new(PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121_il2cpp_TypeInfo_var);
		NullCheck(L_136);
		PointProj__ctor_m1B65DE32FB01A70D94F2E4A811EBB3E8A5CB8BB8(L_136, L_135, NULL);
		NullCheck(L_131);
		ArrayElementTypeCheck (L_131, L_136);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(L_132), (PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121*)L_136);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_137 = __this->___engine_0;
		NullCheck(L_137);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_138 = L_137->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_139 = V_0;
		NullCheck(L_139);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_140 = L_139->___X_0;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_141 = V_1;
		uint32_t L_142 = V_12;
		NullCheck(L_141);
		uint32_t L_143 = L_142;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_144);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_145 = L_144->___X_0;
		NullCheck(L_138);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_138, L_140, L_145, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_146 = __this->___engine_0;
		NullCheck(L_146);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_147 = L_146->___fpx_2;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_148 = V_0;
		NullCheck(L_148);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_149 = L_148->___Z_1;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_150 = V_1;
		uint32_t L_151 = V_12;
		NullCheck(L_150);
		uint32_t L_152 = L_151;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		NullCheck(L_153);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_154 = L_153->___Z_1;
		NullCheck(L_147);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_147, L_149, L_154, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_155 = V_14;
		uint32_t L_156 = V_12;
		uint32_t L_157 = L_156;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_157, 1));
		uint32_t L_158 = V_11;
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(L_157), (uint32_t)L_158);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_159 = __this->___engine_0;
		NullCheck(L_159);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_160 = L_159->___param_0;
		NullCheck(L_160);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_161 = L_160->___strat_Bob_67;
		uint32_t L_162 = V_13;
		uint32_t L_163 = L_162;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_163, 1));
		NullCheck(L_161);
		uint32_t L_164 = L_163;
		uint32_t L_165 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		V_10 = L_165;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_166 = __this->___engine_0;
		NullCheck(L_166);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_167 = L_166->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_168 = V_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_169 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_170 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_171 = V_5;
		uint32_t L_172 = V_10;
		NullCheck(L_167);
		Isogeny_XTplE_mC1DA626473B73DDBD4E25448E5D273C34181B354(L_167, L_168, L_169, L_170, L_171, L_172, NULL);
		uint32_t L_173 = V_11;
		uint32_t L_174 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)L_174));
	}

IL_02f6:
	{
		uint32_t L_175 = V_11;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_176 = __this->___engine_0;
		NullCheck(L_176);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_177 = L_176->___param_0;
		NullCheck(L_177);
		uint32_t L_178 = L_177->___MAX_Bob_28;
		uint32_t L_179 = V_9;
		if ((!(((uint32_t)L_175) >= ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_178, (int32_t)L_179))))))
		{
			goto IL_025a;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_180 = __this->___engine_0;
		NullCheck(L_180);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_181 = L_180->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_182 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_183 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_184 = V_5;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_185 = V_2;
		NullCheck(L_181);
		Isogeny_Get3Isog_m5DADF8D462F9C0343EE77C4C8F1418C76BC3E1A0(L_181, L_182, L_183, L_184, L_185, NULL);
		V_8 = 0;
		goto IL_0346;
	}

IL_032b:
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_186 = __this->___engine_0;
		NullCheck(L_186);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_187 = L_186->___isogeny_1;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_188 = V_1;
		uint32_t L_189 = V_8;
		NullCheck(L_188);
		uint32_t L_190 = L_189;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_191 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_192 = V_2;
		NullCheck(L_187);
		Isogeny_Eval3Isog_m15D728965FB4D17986573368A38DAB94C8578481(L_187, L_191, L_192, NULL);
		uint32_t L_193 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_193, 1));
	}

IL_0346:
	{
		uint32_t L_194 = V_8;
		uint32_t L_195 = V_12;
		if ((!(((uint32_t)L_194) >= ((uint32_t)L_195))))
		{
			goto IL_032b;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_196 = __this->___engine_0;
		NullCheck(L_196);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_197 = L_196->___fpx_2;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_198 = V_1;
		uint32_t L_199 = V_12;
		NullCheck(L_198);
		int32_t L_200 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_199, 1));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_201 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		NullCheck(L_201);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_202 = L_201->___X_0;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_203 = V_0;
		NullCheck(L_203);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_204 = L_203->___X_0;
		NullCheck(L_197);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_197, L_202, L_204, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_205 = __this->___engine_0;
		NullCheck(L_205);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_206 = L_205->___fpx_2;
		PointProjU5BU5D_t443C207B7800EF7F71379C606C5D7F11CB3AC17B* L_207 = V_1;
		uint32_t L_208 = V_12;
		NullCheck(L_207);
		int32_t L_209 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_208, 1));
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		NullCheck(L_210);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_211 = L_210->___Z_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_212 = V_0;
		NullCheck(L_212);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_213 = L_212->___Z_1;
		NullCheck(L_206);
		Fpx_fp2copy_mDD3CE599D57613A4EA3F2CE920C48903B6579399(L_206, L_211, L_213, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_214 = V_14;
		uint32_t L_215 = V_12;
		NullCheck(L_214);
		int32_t L_216 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_215, 1));
		uint32_t L_217 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		V_11 = L_217;
		uint32_t L_218 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_218, 1));
		uint32_t L_219 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_219, 1));
	}

IL_03a3:
	{
		uint32_t L_220 = V_9;
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_221 = __this->___engine_0;
		NullCheck(L_221);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_222 = L_221->___param_0;
		NullCheck(L_222);
		uint32_t L_223 = L_222->___MAX_Bob_28;
		if ((!(((uint32_t)L_220) >= ((uint32_t)L_223))))
		{
			goto IL_02f6;
		}
	}
	{
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_224 = __this->___engine_0;
		NullCheck(L_224);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_225 = L_224->___isogeny_1;
		PointProj_tFAD381CBCB9B36CB751F746336C13C2167F5D121* L_226 = V_0;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_227 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_228 = V_5;
		UInt64U5BU5DU5BU5DU5BU5D_t4B9468BF915F91ACD157E63905B712E1700F764F* L_229 = V_2;
		NullCheck(L_225);
		Isogeny_Get3Isog_m5DADF8D462F9C0343EE77C4C8F1418C76BC3E1A0(L_225, L_226, L_227, L_228, L_229, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_230 = __this->___engine_0;
		NullCheck(L_230);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_231 = L_230->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_232 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_233 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_234 = V_7;
		NullCheck(L_231);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_231, L_232, L_233, L_234, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_235 = __this->___engine_0;
		NullCheck(L_235);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_236 = L_235->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_237 = V_7;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_238 = V_7;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_239 = V_7;
		NullCheck(L_236);
		Fpx_fp2add_mAE24827F76248802AC7B2E883C4AE345F942AEB0(L_236, L_237, L_238, L_239, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_240 = __this->___engine_0;
		NullCheck(L_240);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_241 = L_240->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_242 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_243 = V_6;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_244 = V_5;
		NullCheck(L_241);
		Fpx_fp2sub_m3F782FE8F36DD7DA4FD18D321BBB39600D30FA06(L_241, L_242, L_243, L_244, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_245 = __this->___engine_0;
		NullCheck(L_245);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_246 = L_245->___isogeny_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_247 = V_7;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_248 = V_5;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_249 = V_4;
		NullCheck(L_246);
		Isogeny_JInv_m3031B751565B59E0027AC120F06C3B1DF08AD765(L_246, L_247, L_248, L_249, NULL);
		SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* L_250 = __this->___engine_0;
		NullCheck(L_250);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_251 = L_250->___fpx_2;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_252 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_253 = ___jinvariant_2;
		NullCheck(L_251);
		Fpx_fp2_encode_m51DE285ED128D4F78A91B995E9E60081896C9BBB(L_251, L_252, L_253, 0, NULL);
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
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::GetDefaultSessionKeySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SikeEngine_GetDefaultSessionKeySize_mAE7F14E38284BE575FE85A658EA7F1A3404BC2DE (SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* __this, const RuntimeMethod* method) 
{
	{
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_0 = __this->___param_0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___MSG_BYTES_29;
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, 8));
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::GetCipherTextSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SikeEngine_GetCipherTextSize_m7296999BA9C93CF9B31964189A0042CF199D6550 (SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* __this, const RuntimeMethod* method) 
{
	{
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_0 = __this->___param_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___CRYPTO_CIPHERTEXTBYTES_3;
		return L_1;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::GetPrivateKeySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SikeEngine_GetPrivateKeySize_mE135062139DA60EF41805F5B37EB1D527AA9D5F5 (SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* __this, const RuntimeMethod* method) 
{
	{
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_0 = __this->___param_0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___CRYPTO_SECRETKEYBYTES_5;
		return L_1;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::GetPublicKeySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SikeEngine_GetPublicKeySize_mAA4770E2F88AE46759450CC717F0FB5EC770F37C (SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* __this, const RuntimeMethod* method) 
{
	{
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_0 = __this->___param_0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___CRYPTO_PUBLICKEYBYTES_2;
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::.ctor(System.Int32,System.Boolean,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SikeEngine__ctor_m82A50819CA696FA1495E72D2B49FDE0356EDC185 (SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* __this, int32_t ___ver0, bool ___isCompressed1, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___random2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P434_tB7A0DD0094CE697943602B3FF77CCB96688C5CE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P503_t440CF9866747506339B086C9CE26A6DA86ACE318_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P610_tCB51325DCDB36D48587D6A2927D16E2928A76F54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P751_t3638C0562DE61897220563A0889919EAF3420C9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___isCompressed1;
		__this->___isCompressed_5 = L_0;
		int32_t L_1 = ___ver0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)503))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = ___ver0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)434))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = ___ver0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)503))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_006f;
	}

IL_0027:
	{
		int32_t L_4 = ___ver0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)610))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_5 = ___ver0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)751))))
		{
			goto IL_0063;
		}
	}
	{
		goto IL_006f;
	}

IL_0039:
	{
		bool L_6 = ___isCompressed1;
		P434_tB7A0DD0094CE697943602B3FF77CCB96688C5CE4* L_7 = (P434_tB7A0DD0094CE697943602B3FF77CCB96688C5CE4*)il2cpp_codegen_object_new(P434_tB7A0DD0094CE697943602B3FF77CCB96688C5CE4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		P434__ctor_m0AB8C5D6B03C07C8069227CA878329CA8DDFAF06(L_7, L_6, NULL);
		__this->___param_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___param_0), (void*)L_7);
		goto IL_006f;
	}

IL_0047:
	{
		bool L_8 = ___isCompressed1;
		P503_t440CF9866747506339B086C9CE26A6DA86ACE318* L_9 = (P503_t440CF9866747506339B086C9CE26A6DA86ACE318*)il2cpp_codegen_object_new(P503_t440CF9866747506339B086C9CE26A6DA86ACE318_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		P503__ctor_m57C457A3C8017B30C5BCEA25E430934624E6341D(L_9, L_8, NULL);
		__this->___param_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___param_0), (void*)L_9);
		goto IL_006f;
	}

IL_0055:
	{
		bool L_10 = ___isCompressed1;
		P610_tCB51325DCDB36D48587D6A2927D16E2928A76F54* L_11 = (P610_tCB51325DCDB36D48587D6A2927D16E2928A76F54*)il2cpp_codegen_object_new(P610_tCB51325DCDB36D48587D6A2927D16E2928A76F54_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		P610__ctor_m90669E889653A5BF505D02FA73928A7E8E83F429(L_11, L_10, NULL);
		__this->___param_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___param_0), (void*)L_11);
		goto IL_006f;
	}

IL_0063:
	{
		bool L_12 = ___isCompressed1;
		P751_t3638C0562DE61897220563A0889919EAF3420C9A* L_13 = (P751_t3638C0562DE61897220563A0889919EAF3420C9A*)il2cpp_codegen_object_new(P751_t3638C0562DE61897220563A0889919EAF3420C9A_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		P751__ctor_m65607C07E73CFA0B2D261DDF0332B499B60E39FE(L_13, L_12, NULL);
		__this->___param_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___param_0), (void*)L_13);
	}

IL_006f:
	{
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_14 = (Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01*)il2cpp_codegen_object_new(Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Fpx__ctor_m17D6428D36E248CA2B40CAE2C3A83DBD2248C2A5(L_14, __this, NULL);
		__this->___fpx_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fpx_2), (void*)L_14);
		Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C* L_15 = (Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C*)il2cpp_codegen_object_new(Isogeny_tEE20FE9D0E6B9095AED052A6B526F6409552029C_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Isogeny__ctor_m40E8E82386A4616FDB77DDFEB9A811B6871986D5(L_15, __this, NULL);
		__this->___isogeny_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isogeny_1), (void*)L_15);
		bool L_16 = ___isCompressed1;
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* L_17 = (SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F*)il2cpp_codegen_object_new(SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		SidhCompressed__ctor_mC055DBCF6DE9D7D596F0CA2270A50EE3FA8B8691(L_17, __this, NULL);
		__this->___sidhCompressed_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sidhCompressed_4), (void*)L_17);
	}

IL_0096:
	{
		Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* L_18 = (Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE*)il2cpp_codegen_object_new(Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Sidh__ctor_m6FC2226DE6DD0592F76A6F22A05463734B99DA54(L_18, __this, NULL);
		__this->___sidh_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sidh_3), (void*)L_18);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::crypto_kem_keypair(System.Byte[],System.Byte[],Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SikeEngine_crypto_kem_keypair_mAC9116C47B841371F81CE77E2BD225617BC194E0 (SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk1, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___random2, const RuntimeMethod* method) 
{
	{
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_0 = ___random2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___sk1;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_2 = __this->___param_0;
		NullCheck(L_2);
		uint32_t L_3 = L_2->___MSG_BYTES_29;
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void Org.BouncyCastle.Security.SecureRandom::NextBytes(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, L_3);
		bool L_4 = __this->___isCompressed_5;
		if (!L_4)
		{
			goto IL_00c6;
		}
	}
	{
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_5 = ___random2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___sk1;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_7 = __this->___param_0;
		NullCheck(L_7);
		uint32_t L_8 = L_7->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_9 = __this->___param_0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___SECRETKEY_A_BYTES_30;
		NullCheck(L_5);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void Org.BouncyCastle.Security.SecureRandom::NextBytes(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, L_8, L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___sk1;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_12 = __this->___param_0;
		NullCheck(L_12);
		uint32_t L_13 = L_12->___MSG_BYTES_29;
		NullCheck(L_11);
		uint8_t* L_14 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)));
		int32_t L_15 = *((uint8_t*)L_14);
		*((int8_t*)L_14) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_15&((int32_t)254))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___sk1;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_17 = __this->___param_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_19 = __this->___param_0;
		NullCheck(L_19);
		uint32_t L_20 = L_19->___SECRETKEY_A_BYTES_30;
		NullCheck(L_16);
		uint8_t* L_21 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_20)), 1)))));
		int32_t L_22 = *((uint8_t*)L_21);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_23 = __this->___param_0;
		NullCheck(L_23);
		uint32_t L_24 = L_23->___MASK_ALICE_21;
		*((int8_t*)L_21) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_22&((int32_t)(uint8_t)L_24))));
		SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* L_25 = __this->___sidhCompressed_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___sk1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___pk0;
		NullCheck(L_25);
		uint32_t L_28;
		L_28 = SidhCompressed_EphemeralKeyGeneration_A_extended_mB3022DB51EBCD2A9165555464ED18209396D05BA(L_25, L_26, L_27, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___pk0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___sk1;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_31 = __this->___param_0;
		NullCheck(L_31);
		uint32_t L_32 = L_31->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_33 = __this->___param_0;
		NullCheck(L_33);
		uint32_t L_34 = L_33->___SECRETKEY_A_BYTES_30;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_35 = __this->___param_0;
		NullCheck(L_35);
		uint32_t L_36 = L_35->___CRYPTO_PUBLICKEYBYTES_2;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_29, ((int64_t)0), (RuntimeArray*)L_30, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_34)))), ((int64_t)(uint64_t)L_36), NULL);
		goto IL_014d;
	}

IL_00c6:
	{
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_37 = ___random2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___sk1;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_39 = __this->___param_0;
		NullCheck(L_39);
		uint32_t L_40 = L_39->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_41 = __this->___param_0;
		NullCheck(L_41);
		uint32_t L_42 = L_41->___SECRETKEY_B_BYTES_31;
		NullCheck(L_37);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void Org.BouncyCastle.Security.SecureRandom::NextBytes(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, L_40, L_42);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___sk1;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_44 = __this->___param_0;
		NullCheck(L_44);
		uint32_t L_45 = L_44->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_46 = __this->___param_0;
		NullCheck(L_46);
		uint32_t L_47 = L_46->___SECRETKEY_B_BYTES_31;
		NullCheck(L_43);
		uint8_t* L_48 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_47)), 1)))));
		int32_t L_49 = *((uint8_t*)L_48);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_50 = __this->___param_0;
		NullCheck(L_50);
		uint32_t L_51 = L_50->___MASK_BOB_22;
		*((int8_t*)L_48) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_49&((int32_t)(uint8_t)L_51))));
		Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* L_52 = __this->___sidh_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___sk1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = ___pk0;
		NullCheck(L_52);
		Sidh_EphemeralKeyGeneration_B_m0403D400094C2931AF510D603CBE075AC5CE381D(L_52, L_53, L_54, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ___pk0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___sk1;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_57 = __this->___param_0;
		NullCheck(L_57);
		uint32_t L_58 = L_57->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_59 = __this->___param_0;
		NullCheck(L_59);
		uint32_t L_60 = L_59->___SECRETKEY_B_BYTES_31;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_61 = __this->___param_0;
		NullCheck(L_61);
		uint32_t L_62 = L_61->___CRYPTO_PUBLICKEYBYTES_2;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_55, ((int64_t)0), (RuntimeArray*)L_56, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)L_60)))), ((int64_t)(uint64_t)L_62), NULL);
	}

IL_014d:
	{
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::crypto_kem_enc(System.Byte[],System.Byte[],System.Byte[],Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SikeEngine_crypto_kem_enc_m555AB7A8EEE40D00D35662F9ACD754F80AB2CDFE (SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ct0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ss1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___random3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SikeEngine_crypto_kem_enc_m555AB7A8EEE40D00D35662F9ACD754F80AB2CDFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	int32_t V_11 = 0;
	{
		bool L_0 = __this->___isCompressed_5;
		if (!L_0)
		{
			goto IL_01bb;
		}
	}
	{
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = __this->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___SECRETKEY_B_BYTES_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_4 = __this->___param_0;
		NullCheck(L_4);
		uint32_t L_5 = L_4->___FP2_ENCODED_BYTES_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_7 = __this->___param_0;
		NullCheck(L_7);
		uint32_t L_8 = L_7->___MSG_BYTES_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_10 = __this->___param_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___CRYPTO_CIPHERTEXTBYTES_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_12 = __this->___param_0;
		NullCheck(L_12);
		uint32_t L_13 = L_12->___MSG_BYTES_29;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_11), ((int64_t)(uint64_t)L_13)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SikeEngine_crypto_kem_enc_m555AB7A8EEE40D00D35662F9ACD754F80AB2CDFE_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)L_11), ((int64_t)(uint64_t)L_13)))));
		V_3 = L_14;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_15 = ___random3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_17 = __this->___param_0;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___MSG_BYTES_29;
		NullCheck(L_15);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void Org.BouncyCastle.Security.SecureRandom::NextBytes(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, 0, L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___pk2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_21 = __this->___param_0;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_23 = __this->___param_0;
		NullCheck(L_23);
		uint32_t L_24 = L_23->___CRYPTO_PUBLICKEYBYTES_2;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_19, ((int64_t)0), (RuntimeArray*)L_20, ((int64_t)(uint64_t)L_22), ((int64_t)(uint64_t)L_24), NULL);
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_25 = (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D*)il2cpp_codegen_object_new(ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		ShakeDigest__ctor_m6216739ECC19D7C9735EF5B2D5E7B498FA91964A(L_25, ((int32_t)256), NULL);
		V_4 = L_25;
		RuntimeObject* L_26 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_28 = __this->___param_0;
		NullCheck(L_28);
		uint32_t L_29 = L_28->___CRYPTO_PUBLICKEYBYTES_2;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_30 = __this->___param_0;
		NullCheck(L_30);
		uint32_t L_31 = L_30->___MSG_BYTES_29;
		NullCheck(L_26);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_26, L_27, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_31)));
		RuntimeObject* L_32 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_0;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_34 = __this->___param_0;
		NullCheck(L_34);
		uint32_t L_35 = L_34->___SECRETKEY_B_BYTES_31;
		NullCheck(L_32);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, L_32, L_33, 0, L_35);
		SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* L_37 = __this->___sidhCompressed_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_0;
		NullCheck(L_37);
		SidhCompressed_FormatPrivKey_B_m84102D24AABE7E19A809F05E070D5E5723274377(L_37, L_38, NULL);
		SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* L_39 = __this->___sidhCompressed_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___ct0;
		NullCheck(L_39);
		uint32_t L_42;
		L_42 = SidhCompressed_EphemeralKeyGeneration_B_extended_m08EEB5CA59AA692D90B626512E7105D80AA88B45(L_39, L_40, L_41, 1, NULL);
		SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* L_43 = __this->___sidhCompressed_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___pk2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_1;
		NullCheck(L_43);
		uint32_t L_47;
		L_47 = SidhCompressed_EphemeralSecretAgreement_B_m4928DCFE73A8120A785B3F92F4B1F7D7DFEAB21F(L_43, L_44, L_45, L_46, NULL);
		RuntimeObject* L_48 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_1;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_50 = __this->___param_0;
		NullCheck(L_50);
		uint32_t L_51 = L_50->___FP2_ENCODED_BYTES_32;
		NullCheck(L_48);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_48, L_49, 0, L_51);
		RuntimeObject* L_52 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_2;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_54 = __this->___param_0;
		NullCheck(L_54);
		uint32_t L_55 = L_54->___MSG_BYTES_29;
		NullCheck(L_52);
		int32_t L_56;
		L_56 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, L_52, L_53, 0, L_55);
		V_5 = 0;
		goto IL_014f;
	}

IL_012c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___ct0;
		int32_t L_58 = V_5;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_59 = __this->___param_0;
		NullCheck(L_59);
		uint32_t L_60 = L_59->___PARTIALLY_COMPRESSED_CHUNK_CT_38;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_58), ((int64_t)(uint64_t)L_60)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SikeEngine_crypto_kem_enc_m555AB7A8EEE40D00D35662F9ACD754F80AB2CDFE_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_3;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint8_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_2;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		uint8_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)L_58), ((int64_t)(uint64_t)L_60))))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_64^(int32_t)L_68))));
		int32_t L_69 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_014f:
	{
		int32_t L_70 = V_5;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_71 = __this->___param_0;
		NullCheck(L_71);
		uint32_t L_72 = L_71->___MSG_BYTES_29;
		if ((((int64_t)((int64_t)L_70)) < ((int64_t)((int64_t)(uint64_t)L_72))))
		{
			goto IL_012c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ___ct0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_75 = __this->___param_0;
		NullCheck(L_75);
		uint32_t L_76 = L_75->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_77 = __this->___param_0;
		NullCheck(L_77);
		int32_t L_78 = L_77->___CRYPTO_CIPHERTEXTBYTES_3;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_73, ((int64_t)0), (RuntimeArray*)L_74, ((int64_t)(uint64_t)L_76), ((int64_t)L_78), NULL);
		RuntimeObject* L_79 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = V_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_81 = __this->___param_0;
		NullCheck(L_81);
		int32_t L_82 = L_81->___CRYPTO_CIPHERTEXTBYTES_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_83 = __this->___param_0;
		NullCheck(L_83);
		uint32_t L_84 = L_83->___MSG_BYTES_29;
		NullCheck(L_79);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_79, L_80, 0, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_82), ((int64_t)(uint64_t)L_84)))));
		RuntimeObject* L_85 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ___ss1;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_87 = __this->___param_0;
		NullCheck(L_87);
		uint32_t L_88 = L_87->___CRYPTO_BYTES_4;
		NullCheck(L_85);
		int32_t L_89;
		L_89 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, L_85, L_86, 0, L_88);
		return 0;
	}

IL_01bb:
	{
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_90 = __this->___param_0;
		NullCheck(L_90);
		uint32_t L_91 = L_90->___SECRETKEY_A_BYTES_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_91);
		V_6 = L_92;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_93 = __this->___param_0;
		NullCheck(L_93);
		uint32_t L_94 = L_93->___FP2_ENCODED_BYTES_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_94);
		V_7 = L_95;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_96 = __this->___param_0;
		NullCheck(L_96);
		uint32_t L_97 = L_96->___MSG_BYTES_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_8 = L_98;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_99 = __this->___param_0;
		NullCheck(L_99);
		int32_t L_100 = L_99->___CRYPTO_CIPHERTEXTBYTES_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_101 = __this->___param_0;
		NullCheck(L_101);
		uint32_t L_102 = L_101->___MSG_BYTES_29;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_100), ((int64_t)(uint64_t)L_102)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SikeEngine_crypto_kem_enc_m555AB7A8EEE40D00D35662F9ACD754F80AB2CDFE_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)L_100), ((int64_t)(uint64_t)L_102)))));
		V_9 = L_103;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_104 = ___random3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = V_9;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_106 = __this->___param_0;
		NullCheck(L_106);
		uint32_t L_107 = L_106->___MSG_BYTES_29;
		NullCheck(L_104);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void Org.BouncyCastle.Security.SecureRandom::NextBytes(System.Byte[],System.Int32,System.Int32) */, L_104, L_105, 0, L_107);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = ___pk2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = V_9;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_110 = __this->___param_0;
		NullCheck(L_110);
		uint32_t L_111 = L_110->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_112 = __this->___param_0;
		NullCheck(L_112);
		uint32_t L_113 = L_112->___CRYPTO_PUBLICKEYBYTES_2;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_108, ((int64_t)0), (RuntimeArray*)L_109, ((int64_t)(uint64_t)L_111), ((int64_t)(uint64_t)L_113), NULL);
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_114 = (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D*)il2cpp_codegen_object_new(ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		NullCheck(L_114);
		ShakeDigest__ctor_m6216739ECC19D7C9735EF5B2D5E7B498FA91964A(L_114, ((int32_t)256), NULL);
		V_10 = L_114;
		RuntimeObject* L_115 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_116 = V_9;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_117 = __this->___param_0;
		NullCheck(L_117);
		uint32_t L_118 = L_117->___CRYPTO_PUBLICKEYBYTES_2;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_119 = __this->___param_0;
		NullCheck(L_119);
		uint32_t L_120 = L_119->___MSG_BYTES_29;
		NullCheck(L_115);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_115, L_116, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)L_120)));
		RuntimeObject* L_121 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_122 = V_6;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_123 = __this->___param_0;
		NullCheck(L_123);
		uint32_t L_124 = L_123->___SECRETKEY_A_BYTES_30;
		NullCheck(L_121);
		int32_t L_125;
		L_125 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, L_121, L_122, 0, L_124);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126 = V_6;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_127 = __this->___param_0;
		NullCheck(L_127);
		uint32_t L_128 = L_127->___SECRETKEY_A_BYTES_30;
		NullCheck(L_126);
		uint8_t* L_129 = ((L_126)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_128, 1)))));
		int32_t L_130 = *((uint8_t*)L_129);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_131 = __this->___param_0;
		NullCheck(L_131);
		uint32_t L_132 = L_131->___MASK_ALICE_21;
		*((int8_t*)L_129) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_130&((int32_t)(uint8_t)L_132))));
		Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* L_133 = __this->___sidh_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_134 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_135 = ___ct0;
		NullCheck(L_133);
		Sidh_EphemeralKeyGeneration_A_mD73E9184B29B19DB5591E0B8933B9B63A95B6082(L_133, L_134, L_135, NULL);
		Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* L_136 = __this->___sidh_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_137 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_138 = ___pk2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_139 = V_7;
		NullCheck(L_136);
		Sidh_EphemeralSecretAgreement_A_m2EA62578D131FE60CEEFE1FC7F331A7E0F8990C4(L_136, L_137, L_138, L_139, NULL);
		RuntimeObject* L_140 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141 = V_7;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_142 = __this->___param_0;
		NullCheck(L_142);
		uint32_t L_143 = L_142->___FP2_ENCODED_BYTES_32;
		NullCheck(L_140);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_140, L_141, 0, L_143);
		RuntimeObject* L_144 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_145 = V_8;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_146 = __this->___param_0;
		NullCheck(L_146);
		uint32_t L_147 = L_146->___MSG_BYTES_29;
		NullCheck(L_144);
		int32_t L_148;
		L_148 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, L_144, L_145, 0, L_147);
		V_11 = 0;
		goto IL_0324;
	}

IL_02ff:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_149 = ___ct0;
		int32_t L_150 = V_11;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_151 = __this->___param_0;
		NullCheck(L_151);
		uint32_t L_152 = L_151->___CRYPTO_PUBLICKEYBYTES_2;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_150), ((int64_t)(uint64_t)L_152)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SikeEngine_crypto_kem_enc_m555AB7A8EEE40D00D35662F9ACD754F80AB2CDFE_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_153 = V_9;
		int32_t L_154 = V_11;
		NullCheck(L_153);
		int32_t L_155 = L_154;
		uint8_t L_156 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_157 = V_8;
		int32_t L_158 = V_11;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		uint8_t L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)L_150), ((int64_t)(uint64_t)L_152))))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_156^(int32_t)L_160))));
		int32_t L_161 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_161, 1));
	}

IL_0324:
	{
		int32_t L_162 = V_11;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_163 = __this->___param_0;
		NullCheck(L_163);
		uint32_t L_164 = L_163->___MSG_BYTES_29;
		if ((((int64_t)((int64_t)L_162)) < ((int64_t)((int64_t)(uint64_t)L_164))))
		{
			goto IL_02ff;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_165 = ___ct0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_166 = V_9;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_167 = __this->___param_0;
		NullCheck(L_167);
		uint32_t L_168 = L_167->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_169 = __this->___param_0;
		NullCheck(L_169);
		int32_t L_170 = L_169->___CRYPTO_CIPHERTEXTBYTES_3;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_165, ((int64_t)0), (RuntimeArray*)L_166, ((int64_t)(uint64_t)L_168), ((int64_t)L_170), NULL);
		RuntimeObject* L_171 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_172 = V_9;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_173 = __this->___param_0;
		NullCheck(L_173);
		int32_t L_174 = L_173->___CRYPTO_CIPHERTEXTBYTES_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_175 = __this->___param_0;
		NullCheck(L_175);
		uint32_t L_176 = L_175->___MSG_BYTES_29;
		NullCheck(L_171);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_171, L_172, 0, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_174), ((int64_t)(uint64_t)L_176)))));
		RuntimeObject* L_177 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_178 = ___ss1;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_179 = __this->___param_0;
		NullCheck(L_179);
		uint32_t L_180 = L_179->___CRYPTO_BYTES_4;
		NullCheck(L_177);
		int32_t L_181;
		L_181 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, L_177, L_178, 0, L_180);
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Sike.SikeEngine::crypto_kem_dec(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SikeEngine_crypto_kem_dec_mA9D965AD6AA5E3FBFEF17A05D1195D28FCE7EA56 (SikeEngine_tD4B57E4D8478BA466A70D2BCC0400E66BF6692A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ss0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ct1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SikeEngine_crypto_kem_dec_mA9D965AD6AA5E3FBFEF17A05D1195D28FCE7EA56_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	uint8_t V_6 = 0x0;
	int32_t V_7 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	uint8_t V_14 = 0x0;
	int32_t V_15 = 0;
	{
		bool L_0 = __this->___isCompressed_5;
		if (!L_0)
		{
			goto IL_0231;
		}
	}
	{
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_1 = __this->___param_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___SECRETKEY_B_BYTES_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_4 = __this->___param_0;
		NullCheck(L_4);
		uint32_t L_5 = L_4->___FP2_ENCODED_BYTES_32;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_6 = __this->___param_0;
		NullCheck(L_6);
		uint32_t L_7 = L_6->___FP2_ENCODED_BYTES_32;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_8 = __this->___param_0;
		NullCheck(L_8);
		uint32_t L_9 = L_8->___SECRETKEY_A_BYTES_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_5, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_7)))), (int32_t)L_9)));
		V_1 = L_10;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_11 = __this->___param_0;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___MSG_BYTES_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_2 = L_13;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_14 = __this->___param_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___CRYPTO_CIPHERTEXTBYTES_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_16 = __this->___param_0;
		NullCheck(L_16);
		uint32_t L_17 = L_16->___MSG_BYTES_29;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_15), ((int64_t)(uint64_t)L_17)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SikeEngine_crypto_kem_dec_mA9D965AD6AA5E3FBFEF17A05D1195D28FCE7EA56_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)L_15), ((int64_t)(uint64_t)L_17)))));
		V_3 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		V_4 = L_19;
		SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* L_20 = __this->___sidhCompressed_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___sk2;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_22 = __this->___param_0;
		NullCheck(L_22);
		uint32_t L_23 = L_22->___MSG_BYTES_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___ct1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_1;
		NullCheck(L_20);
		uint32_t L_26;
		L_26 = SidhCompressed_EphemeralSecretAgreement_A_extended_m3BB82E4B81DE74C83CBFBF867181FD167802EAB7(L_20, L_21, L_23, L_24, L_25, 1, NULL);
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_27 = (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D*)il2cpp_codegen_object_new(ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		ShakeDigest__ctor_m6216739ECC19D7C9735EF5B2D5E7B498FA91964A(L_27, ((int32_t)256), NULL);
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_1;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_30 = __this->___param_0;
		NullCheck(L_30);
		uint32_t L_31 = L_30->___FP2_ENCODED_BYTES_32;
		NullCheck(L_28);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_28, L_29, 0, L_31);
		RuntimeObject* L_32 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_2;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_34 = __this->___param_0;
		NullCheck(L_34);
		uint32_t L_35 = L_34->___MSG_BYTES_29;
		NullCheck(L_32);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, L_32, L_33, 0, L_35);
		V_7 = 0;
		goto IL_00f3;
	}

IL_00d0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_3;
		int32_t L_38 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___ct1;
		int32_t L_40 = V_7;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_41 = __this->___param_0;
		NullCheck(L_41);
		uint32_t L_42 = L_41->___PARTIALLY_COMPRESSED_CHUNK_CT_38;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_40), ((int64_t)(uint64_t)L_42)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SikeEngine_crypto_kem_dec_mA9D965AD6AA5E3FBFEF17A05D1195D28FCE7EA56_RuntimeMethod_var);
		NullCheck(L_39);
		intptr_t L_43 = ((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)L_40), ((int64_t)(uint64_t)L_42))));
		uint8_t L_44 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_2;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_44^(int32_t)L_48))));
		int32_t L_49 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00f3:
	{
		int32_t L_50 = V_7;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_51 = __this->___param_0;
		NullCheck(L_51);
		uint32_t L_52 = L_51->___MSG_BYTES_29;
		if ((((int64_t)((int64_t)L_50)) < ((int64_t)((int64_t)(uint64_t)L_52))))
		{
			goto IL_00d0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___sk2;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_54 = __this->___param_0;
		NullCheck(L_54);
		uint32_t L_55 = L_54->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_56 = __this->___param_0;
		NullCheck(L_56);
		uint32_t L_57 = L_56->___SECRETKEY_A_BYTES_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_59 = __this->___param_0;
		NullCheck(L_59);
		uint32_t L_60 = L_59->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_61 = __this->___param_0;
		NullCheck(L_61);
		uint32_t L_62 = L_61->___CRYPTO_PUBLICKEYBYTES_2;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_53, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_57)))), (RuntimeArray*)L_58, ((int64_t)(uint64_t)L_60), ((int64_t)(uint64_t)L_62), NULL);
		RuntimeObject* L_63 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_65 = __this->___param_0;
		NullCheck(L_65);
		uint32_t L_66 = L_65->___CRYPTO_PUBLICKEYBYTES_2;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_67 = __this->___param_0;
		NullCheck(L_67);
		uint32_t L_68 = L_67->___MSG_BYTES_29;
		NullCheck(L_63);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_63, L_64, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)L_68)));
		RuntimeObject* L_69 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_0;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_71 = __this->___param_0;
		NullCheck(L_71);
		uint32_t L_72 = L_71->___SECRETKEY_B_BYTES_31;
		NullCheck(L_69);
		int32_t L_73;
		L_73 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, L_69, L_70, 0, L_72);
		SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* L_74 = __this->___sidhCompressed_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_0;
		NullCheck(L_74);
		SidhCompressed_FormatPrivKey_B_m84102D24AABE7E19A809F05E070D5E5723274377(L_74, L_75, NULL);
		SidhCompressed_tAB74A53C4C4C532C6A59B73188682171F658767F* L_76 = __this->___sidhCompressed_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ___ct1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ___sk2;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_80 = __this->___param_0;
		NullCheck(L_80);
		uint32_t L_81 = L_80->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_82 = __this->___param_0;
		NullCheck(L_82);
		uint32_t L_83 = L_82->___SECRETKEY_A_BYTES_30;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_84 = __this->___param_0;
		NullCheck(L_84);
		uint32_t L_85 = L_84->___CRYPTO_PUBLICKEYBYTES_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_4;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_87 = __this->___param_0;
		NullCheck(L_87);
		uint32_t L_88 = L_87->___FP2_ENCODED_BYTES_32;
		NullCheck(L_76);
		uint8_t L_89;
		L_89 = SidhCompressed_validate_ciphertext_mA185073E38DE0BA52AC2D7631D7B20AC22DD8D6D(L_76, L_77, L_78, L_79, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)L_83)), (int32_t)L_85)), L_86, L_88, NULL);
		V_6 = L_89;
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_90 = __this->___fpx_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ___sk2;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_93 = __this->___param_0;
		NullCheck(L_93);
		uint32_t L_94 = L_93->___MSG_BYTES_29;
		uint8_t L_95 = V_6;
		NullCheck(L_90);
		Fpx_ct_cmov_m799CE95BC501AFAB5B0BB9883DF6FB4FEF128C53(L_90, L_91, L_92, L_94, L_95, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = ___ct1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = V_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_98 = __this->___param_0;
		NullCheck(L_98);
		uint32_t L_99 = L_98->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_100 = __this->___param_0;
		NullCheck(L_100);
		int32_t L_101 = L_100->___CRYPTO_CIPHERTEXTBYTES_3;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_96, ((int64_t)0), (RuntimeArray*)L_97, ((int64_t)(uint64_t)L_99), ((int64_t)L_101), NULL);
		RuntimeObject* L_102 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = V_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_104 = __this->___param_0;
		NullCheck(L_104);
		int32_t L_105 = L_104->___CRYPTO_CIPHERTEXTBYTES_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_106 = __this->___param_0;
		NullCheck(L_106);
		uint32_t L_107 = L_106->___MSG_BYTES_29;
		NullCheck(L_102);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_102, L_103, 0, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_105), ((int64_t)(uint64_t)L_107)))));
		RuntimeObject* L_108 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = ___ss0;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_110 = __this->___param_0;
		NullCheck(L_110);
		uint32_t L_111 = L_110->___CRYPTO_BYTES_4;
		NullCheck(L_108);
		int32_t L_112;
		L_112 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, L_108, L_109, 0, L_111);
		return 0;
	}

IL_0231:
	{
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_113 = __this->___param_0;
		NullCheck(L_113);
		uint32_t L_114 = L_113->___SECRETKEY_A_BYTES_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_114);
		V_8 = L_115;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_116 = __this->___param_0;
		NullCheck(L_116);
		uint32_t L_117 = L_116->___FP2_ENCODED_BYTES_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_117);
		V_9 = L_118;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_119 = __this->___param_0;
		NullCheck(L_119);
		uint32_t L_120 = L_119->___MSG_BYTES_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_121 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_120);
		V_10 = L_121;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_122 = __this->___param_0;
		NullCheck(L_122);
		uint32_t L_123 = L_122->___CRYPTO_PUBLICKEYBYTES_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_123);
		V_11 = L_124;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_125 = __this->___param_0;
		NullCheck(L_125);
		int32_t L_126 = L_125->___CRYPTO_CIPHERTEXTBYTES_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_127 = __this->___param_0;
		NullCheck(L_127);
		uint32_t L_128 = L_127->___MSG_BYTES_29;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_126), ((int64_t)(uint64_t)L_128)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SikeEngine_crypto_kem_dec_mA9D965AD6AA5E3FBFEF17A05D1195D28FCE7EA56_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)L_126), ((int64_t)(uint64_t)L_128)))));
		V_12 = L_129;
		Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* L_130 = __this->___sidh_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_131 = ___sk2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_132 = ___ct1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_133 = V_9;
		NullCheck(L_130);
		Sidh_EphemeralSecretAgreement_B_mCD5E78449576B28704FD85A890E7B642D04D18CC(L_130, L_131, L_132, L_133, NULL);
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_134 = (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D*)il2cpp_codegen_object_new(ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		NullCheck(L_134);
		ShakeDigest__ctor_m6216739ECC19D7C9735EF5B2D5E7B498FA91964A(L_134, ((int32_t)256), NULL);
		V_13 = L_134;
		RuntimeObject* L_135 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_136 = V_9;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_137 = __this->___param_0;
		NullCheck(L_137);
		uint32_t L_138 = L_137->___FP2_ENCODED_BYTES_32;
		NullCheck(L_135);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_135, L_136, 0, L_138);
		RuntimeObject* L_139 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_140 = V_10;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_141 = __this->___param_0;
		NullCheck(L_141);
		uint32_t L_142 = L_141->___MSG_BYTES_29;
		NullCheck(L_139);
		int32_t L_143;
		L_143 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, L_139, L_140, 0, L_142);
		V_15 = 0;
		goto IL_030a;
	}

IL_02e5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_144 = V_12;
		int32_t L_145 = V_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_146 = ___ct1;
		int32_t L_147 = V_15;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_148 = __this->___param_0;
		NullCheck(L_148);
		uint32_t L_149 = L_148->___CRYPTO_PUBLICKEYBYTES_2;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_147), ((int64_t)(uint64_t)L_149)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SikeEngine_crypto_kem_dec_mA9D965AD6AA5E3FBFEF17A05D1195D28FCE7EA56_RuntimeMethod_var);
		NullCheck(L_146);
		intptr_t L_150 = ((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)L_147), ((int64_t)(uint64_t)L_149))));
		uint8_t L_151 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_152 = V_10;
		int32_t L_153 = V_15;
		NullCheck(L_152);
		int32_t L_154 = L_153;
		uint8_t L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(L_145), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_151^(int32_t)L_155))));
		int32_t L_156 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_156, 1));
	}

IL_030a:
	{
		int32_t L_157 = V_15;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_158 = __this->___param_0;
		NullCheck(L_158);
		uint32_t L_159 = L_158->___MSG_BYTES_29;
		if ((((int64_t)((int64_t)L_157)) < ((int64_t)((int64_t)(uint64_t)L_159))))
		{
			goto IL_02e5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_160 = ___sk2;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_161 = __this->___param_0;
		NullCheck(L_161);
		uint32_t L_162 = L_161->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_163 = __this->___param_0;
		NullCheck(L_163);
		uint32_t L_164 = L_163->___SECRETKEY_B_BYTES_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_165 = V_12;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_166 = __this->___param_0;
		NullCheck(L_166);
		uint32_t L_167 = L_166->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_168 = __this->___param_0;
		NullCheck(L_168);
		uint32_t L_169 = L_168->___CRYPTO_PUBLICKEYBYTES_2;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_160, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_162, (int32_t)L_164)))), (RuntimeArray*)L_165, ((int64_t)(uint64_t)L_167), ((int64_t)(uint64_t)L_169), NULL);
		RuntimeObject* L_170 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_171 = V_12;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_172 = __this->___param_0;
		NullCheck(L_172);
		uint32_t L_173 = L_172->___CRYPTO_PUBLICKEYBYTES_2;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_174 = __this->___param_0;
		NullCheck(L_174);
		uint32_t L_175 = L_174->___MSG_BYTES_29;
		NullCheck(L_170);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_170, L_171, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)L_175)));
		RuntimeObject* L_176 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_177 = V_8;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_178 = __this->___param_0;
		NullCheck(L_178);
		uint32_t L_179 = L_178->___SECRETKEY_A_BYTES_30;
		NullCheck(L_176);
		int32_t L_180;
		L_180 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, L_176, L_177, 0, L_179);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_181 = V_8;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_182 = __this->___param_0;
		NullCheck(L_182);
		uint32_t L_183 = L_182->___SECRETKEY_A_BYTES_30;
		NullCheck(L_181);
		uint8_t* L_184 = ((L_181)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_183, 1)))));
		int32_t L_185 = *((uint8_t*)L_184);
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_186 = __this->___param_0;
		NullCheck(L_186);
		uint32_t L_187 = L_186->___MASK_ALICE_21;
		*((int8_t*)L_184) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_185&((int32_t)(uint8_t)L_187))));
		Sidh_t98FECDE53C43FE950E4A94AD771365271B9BC5FE* L_188 = __this->___sidh_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_189 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_190 = V_11;
		NullCheck(L_188);
		Sidh_EphemeralKeyGeneration_A_mD73E9184B29B19DB5591E0B8933B9B63A95B6082(L_188, L_189, L_190, NULL);
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_191 = __this->___fpx_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_192 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_193 = ___ct1;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_194 = __this->___param_0;
		NullCheck(L_194);
		uint32_t L_195 = L_194->___CRYPTO_PUBLICKEYBYTES_2;
		NullCheck(L_191);
		uint8_t L_196;
		L_196 = Fpx_ct_compare_mB4117541923E4E99CC57961FA96ADB4A81071381(L_191, L_192, L_193, L_195, NULL);
		V_14 = L_196;
		Fpx_t1553B8182D80F180FE6C2E2FB8E3372BDD5CAC01* L_197 = __this->___fpx_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_198 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_199 = ___sk2;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_200 = __this->___param_0;
		NullCheck(L_200);
		uint32_t L_201 = L_200->___MSG_BYTES_29;
		uint8_t L_202 = V_14;
		NullCheck(L_197);
		Fpx_ct_cmov_m799CE95BC501AFAB5B0BB9883DF6FB4FEF128C53(L_197, L_198, L_199, L_201, L_202, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_203 = ___ct1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_204 = V_12;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_205 = __this->___param_0;
		NullCheck(L_205);
		uint32_t L_206 = L_205->___MSG_BYTES_29;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_207 = __this->___param_0;
		NullCheck(L_207);
		int32_t L_208 = L_207->___CRYPTO_CIPHERTEXTBYTES_3;
		Array_Copy_m4C8D50AF6A1886B553D019FDE15A1F03D145B8F0((RuntimeArray*)L_203, ((int64_t)0), (RuntimeArray*)L_204, ((int64_t)(uint64_t)L_206), ((int64_t)L_208), NULL);
		RuntimeObject* L_209 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_210 = V_12;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_211 = __this->___param_0;
		NullCheck(L_211);
		int32_t L_212 = L_211->___CRYPTO_CIPHERTEXTBYTES_3;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_213 = __this->___param_0;
		NullCheck(L_213);
		uint32_t L_214 = L_213->___MSG_BYTES_29;
		NullCheck(L_209);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_209, L_210, 0, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_212), ((int64_t)(uint64_t)L_214)))));
		RuntimeObject* L_215 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_216 = ___ss0;
		Internal_tDF131EE27F5BE4E349DC01B5A2490D7A99E7761C* L_217 = __this->___param_0;
		NullCheck(L_217);
		uint32_t L_218 = L_217->___CRYPTO_BYTES_4;
		NullCheck(L_215);
		int32_t L_219;
		L_219 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, L_215, L_216, 0, L_218);
		return 0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
