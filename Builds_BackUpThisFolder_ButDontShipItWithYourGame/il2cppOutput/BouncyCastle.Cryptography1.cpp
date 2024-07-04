#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Org.BouncyCastle.Utilities.Zlib.Deflate/Config[]
struct ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD;
// Org.BouncyCastle.Utilities.Zlib.Adler32
struct Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F;
// Org.BouncyCastle.Utilities.IO.BaseInputStream
struct BaseInputStream_tD3E6BAE62AB4C0EB995C0565971D8A43C2F0D015;
// Org.BouncyCastle.Utilities.IO.BaseOutputStream
struct BaseOutputStream_t2CFDF94C8843606C7372FEA87E5FDFB0A9BF7B82;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// Org.BouncyCastle.Utilities.Zlib.Deflate
struct Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// Org.BouncyCastle.Utilities.Zlib.InfBlocks
struct InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54;
// Org.BouncyCastle.Utilities.Zlib.InfCodes
struct InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03;
// Org.BouncyCastle.Utilities.Zlib.InfTree
struct InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD;
// Org.BouncyCastle.Utilities.Zlib.Inflate
struct Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568;
// Org.BouncyCastle.Utilities.Zlib.JZlib
struct JZlib_tE94698389600A48C5C8D9B39063930657BDD5990;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Org.BouncyCastle.Utilities.Zlib.StaticTree
struct StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// Org.BouncyCastle.Utilities.Zlib.Tree
struct Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Org.BouncyCastle.Utilities.Zlib.ZInputStream
struct ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36;
// Org.BouncyCastle.Utilities.Zlib.ZInputStreamLeaveOpen
struct ZInputStreamLeaveOpen_t6A63FD5BB9A3C35617DB3542F39F5E70F0961A25;
// Org.BouncyCastle.Utilities.Zlib.ZOutputStream
struct ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D;
// Org.BouncyCastle.Utilities.Zlib.ZOutputStreamLeaveOpen
struct ZOutputStreamLeaveOpen_tA041B4BC55EE80220EB008E57321F931EA2BAF5E;
// Org.BouncyCastle.Utilities.Zlib.ZStream
struct ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A;
// Org.BouncyCastle.Utilities.Zlib.Deflate/Config
struct Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Streams_t887A84321A9B6C945302CE33070663C833A0E1D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_20_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_89_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_97_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_146_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_153_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_154_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_158_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_214_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_237_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_245_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_249_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_307_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_325_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_345_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_367_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_437_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_448_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40;
IL2CPP_EXTERN_C String_t* _stringLiteral10970F72C2D0D7F199946EF78672994F037BA021;
IL2CPP_EXTERN_C String_t* _stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94;
IL2CPP_EXTERN_C String_t* _stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43;
IL2CPP_EXTERN_C String_t* _stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384;
IL2CPP_EXTERN_C String_t* _stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D;
IL2CPP_EXTERN_C String_t* _stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0;
IL2CPP_EXTERN_C String_t* _stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE;
IL2CPP_EXTERN_C String_t* _stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766;
IL2CPP_EXTERN_C String_t* _stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6;
IL2CPP_EXTERN_C String_t* _stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417;
IL2CPP_EXTERN_C String_t* _stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8;
IL2CPP_EXTERN_C String_t* _stringLiteral69FE75F973979D88233BE3F28BCE349DB4C0C438;
IL2CPP_EXTERN_C String_t* _stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5;
IL2CPP_EXTERN_C String_t* _stringLiteral81B54C81CE5770A2FB716FE3138FA18CE998793D;
IL2CPP_EXTERN_C String_t* _stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4;
IL2CPP_EXTERN_C String_t* _stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16;
IL2CPP_EXTERN_C String_t* _stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06;
IL2CPP_EXTERN_C String_t* _stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB;
IL2CPP_EXTERN_C String_t* _stringLiteralA840F25536BE8295D00B8780BF11900F5EE6774E;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948;
IL2CPP_EXTERN_C String_t* _stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110;
IL2CPP_EXTERN_C String_t* _stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113;
IL2CPP_EXTERN_C String_t* _stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA84EF263557F5F56FABA93B2A6EC89E8F3E0102;
IL2CPP_EXTERN_C String_t* _stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F;
IL2CPP_EXTERN_C String_t* _stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4;
IL2CPP_EXTERN_C const RuntimeMethod* ZInputStream_Read_m16B31A5DB17883EA846942A0D33F9ED3FF6E798A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZOutputStream_Finish_m6A5C2108FFF891C550C5A1588E4B04EF99CCDCB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZOutputStream_Write_mF448B1FE6BCDC2A0E81C730082A5E324ACC35BD1_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Utilities.Zlib.Adler32
struct Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Org.BouncyCastle.Utilities.Zlib.Deflate
struct Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5  : public RuntimeObject
{
	// Org.BouncyCastle.Utilities.Zlib.ZStream Org.BouncyCastle.Utilities.Zlib.Deflate::strm
	ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm_56;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::status
	int32_t ___status_57;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Deflate::pending_buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pending_buf_58;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::pending_out
	int32_t ___pending_out_59;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::pending
	int32_t ___pending_60;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::noheader
	int32_t ___noheader_61;
	// System.Byte Org.BouncyCastle.Utilities.Zlib.Deflate::data_type
	uint8_t ___data_type_62;
	// System.Byte Org.BouncyCastle.Utilities.Zlib.Deflate::method
	uint8_t ___method_63;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::last_flush
	int32_t ___last_flush_64;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::w_size
	int32_t ___w_size_65;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::w_bits
	int32_t ___w_bits_66;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::w_mask
	int32_t ___w_mask_67;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Deflate::window
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___window_68;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::window_size
	int32_t ___window_size_69;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Deflate::prev
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___prev_70;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Deflate::head
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___head_71;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::ins_h
	int32_t ___ins_h_72;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::hash_size
	int32_t ___hash_size_73;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::hash_bits
	int32_t ___hash_bits_74;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::hash_mask
	int32_t ___hash_mask_75;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::hash_shift
	int32_t ___hash_shift_76;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::block_start
	int32_t ___block_start_77;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::match_length
	int32_t ___match_length_78;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::prev_match
	int32_t ___prev_match_79;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::match_available
	int32_t ___match_available_80;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::strstart
	int32_t ___strstart_81;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::match_start
	int32_t ___match_start_82;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::lookahead
	int32_t ___lookahead_83;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::prev_length
	int32_t ___prev_length_84;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::max_chain_length
	int32_t ___max_chain_length_85;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::max_lazy_match
	int32_t ___max_lazy_match_86;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::level
	int32_t ___level_87;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::strategy
	int32_t ___strategy_88;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::good_match
	int32_t ___good_match_89;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::nice_match
	int32_t ___nice_match_90;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Deflate::dyn_ltree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dyn_ltree_91;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Deflate::dyn_dtree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dyn_dtree_92;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Deflate::bl_tree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___bl_tree_93;
	// Org.BouncyCastle.Utilities.Zlib.Tree Org.BouncyCastle.Utilities.Zlib.Deflate::l_desc
	Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* ___l_desc_94;
	// Org.BouncyCastle.Utilities.Zlib.Tree Org.BouncyCastle.Utilities.Zlib.Deflate::d_desc
	Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* ___d_desc_95;
	// Org.BouncyCastle.Utilities.Zlib.Tree Org.BouncyCastle.Utilities.Zlib.Deflate::bl_desc
	Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* ___bl_desc_96;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Deflate::bl_count
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___bl_count_97;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.Deflate::heap
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___heap_98;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::heap_len
	int32_t ___heap_len_99;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::heap_max
	int32_t ___heap_max_100;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Deflate::depth
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___depth_101;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::l_buf
	int32_t ___l_buf_102;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::lit_bufsize
	int32_t ___lit_bufsize_103;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::last_lit
	int32_t ___last_lit_104;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::d_buf
	int32_t ___d_buf_105;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::opt_len
	int32_t ___opt_len_106;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::static_len
	int32_t ___static_len_107;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::matches
	int32_t ___matches_108;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::last_eob_len
	int32_t ___last_eob_len_109;
	// System.UInt32 Org.BouncyCastle.Utilities.Zlib.Deflate::bi_buf
	uint32_t ___bi_buf_110;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::bi_valid
	int32_t ___bi_valid_111;
};

struct Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields
{
	// Org.BouncyCastle.Utilities.Zlib.Deflate/Config[] Org.BouncyCastle.Utilities.Zlib.Deflate::config_table
	ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* ___config_table_7;
	// System.String[] Org.BouncyCastle.Utilities.Zlib.Deflate::z_errmsg
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___z_errmsg_8;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// Org.BouncyCastle.Utilities.Zlib.InfBlocks
struct InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::mode
	int32_t ___mode_22;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::left
	int32_t ___left_23;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::table
	int32_t ___table_24;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::index
	int32_t ___index_25;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::blens
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___blens_26;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::bb
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bb_27;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::tb
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tb_28;
	// Org.BouncyCastle.Utilities.Zlib.InfCodes Org.BouncyCastle.Utilities.Zlib.InfBlocks::codes
	InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* ___codes_29;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::last
	int32_t ___last_30;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::bitk
	int32_t ___bitk_31;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::bitb
	int32_t ___bitb_32;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::hufts
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hufts_33;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::window
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___window_34;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::end
	int32_t ___end_35;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::read
	int32_t ___read_36;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::write
	int32_t ___write_37;
	// System.Object Org.BouncyCastle.Utilities.Zlib.InfBlocks::checkfn
	RuntimeObject* ___checkfn_38;
	// System.Int64 Org.BouncyCastle.Utilities.Zlib.InfBlocks::check
	int64_t ___check_39;
	// Org.BouncyCastle.Utilities.Zlib.InfTree Org.BouncyCastle.Utilities.Zlib.InfBlocks::inftree
	InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* ___inftree_40;
};

struct InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_StaticFields
{
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::inflate_mask
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___inflate_mask_1;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfBlocks::border
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___border_2;
};

// Org.BouncyCastle.Utilities.Zlib.InfCodes
struct InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::mode
	int32_t ___mode_20;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::len
	int32_t ___len_21;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfCodes::tree
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tree_22;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::tree_index
	int32_t ___tree_index_23;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::need
	int32_t ___need_24;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::lit
	int32_t ___lit_25;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::get
	int32_t ___get_26;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::dist
	int32_t ___dist_27;
	// System.Byte Org.BouncyCastle.Utilities.Zlib.InfCodes::lbits
	uint8_t ___lbits_28;
	// System.Byte Org.BouncyCastle.Utilities.Zlib.InfCodes::dbits
	uint8_t ___dbits_29;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfCodes::ltree
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ltree_30;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::ltree_index
	int32_t ___ltree_index_31;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfCodes::dtree
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___dtree_32;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::dtree_index
	int32_t ___dtree_index_33;
};

struct InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_StaticFields
{
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfCodes::inflate_mask
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___inflate_mask_0;
};

// Org.BouncyCastle.Utilities.Zlib.InfTree
struct InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::hn
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hn_19;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::v
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___v_20;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::c
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c_21;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::r
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___r_22;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::u
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___u_23;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::x
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x_24;
};

struct InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields
{
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::fixed_tl
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___fixed_tl_12;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::fixed_td
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___fixed_td_13;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::cplens
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cplens_14;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::cplext
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cplext_15;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::cpdist
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cpdist_16;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.InfTree::cpdext
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cpdext_17;
};

// Org.BouncyCastle.Utilities.Zlib.Inflate
struct Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::mode
	int32_t ___mode_31;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::method
	int32_t ___method_32;
	// System.Int64[] Org.BouncyCastle.Utilities.Zlib.Inflate::was
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___was_33;
	// System.Int64 Org.BouncyCastle.Utilities.Zlib.Inflate::need
	int64_t ___need_34;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::marker
	int32_t ___marker_35;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::nowrap
	int32_t ___nowrap_36;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::wbits
	int32_t ___wbits_37;
	// Org.BouncyCastle.Utilities.Zlib.InfBlocks Org.BouncyCastle.Utilities.Zlib.Inflate::blocks
	InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* ___blocks_38;
};

struct Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Inflate::mark
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mark_39;
};

// Org.BouncyCastle.Utilities.Zlib.JZlib
struct JZlib_tE94698389600A48C5C8D9B39063930657BDD5990  : public RuntimeObject
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

// Org.BouncyCastle.Utilities.Shorts
struct Shorts_t1A25F1F84F05798034D3D0FB81F3947F771000E3  : public RuntimeObject
{
};

// Org.BouncyCastle.Utilities.Zlib.StaticTree
struct StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A  : public RuntimeObject
{
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.StaticTree::static_tree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___static_tree_12;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.StaticTree::extra_bits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___extra_bits_13;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.StaticTree::extra_base
	int32_t ___extra_base_14;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.StaticTree::elems
	int32_t ___elems_15;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.StaticTree::max_length
	int32_t ___max_length_16;
};

struct StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields
{
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.StaticTree::static_ltree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___static_ltree_7;
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.StaticTree::static_dtree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___static_dtree_8;
	// Org.BouncyCastle.Utilities.Zlib.StaticTree Org.BouncyCastle.Utilities.Zlib.StaticTree::static_l_desc
	StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* ___static_l_desc_9;
	// Org.BouncyCastle.Utilities.Zlib.StaticTree Org.BouncyCastle.Utilities.Zlib.StaticTree::static_d_desc
	StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* ___static_d_desc_10;
	// Org.BouncyCastle.Utilities.Zlib.StaticTree Org.BouncyCastle.Utilities.Zlib.StaticTree::static_bl_desc
	StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* ___static_bl_desc_11;
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

// Org.BouncyCastle.Utilities.Strings
struct Strings_t5E61E91336816E79473A958F181EC6DBF3276AAA  : public RuntimeObject
{
};

// Org.BouncyCastle.Utilities.Zlib.Tree
struct Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831  : public RuntimeObject
{
	// System.Int16[] Org.BouncyCastle.Utilities.Zlib.Tree::dyn_tree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dyn_tree_22;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Tree::max_code
	int32_t ___max_code_23;
	// Org.BouncyCastle.Utilities.Zlib.StaticTree Org.BouncyCastle.Utilities.Zlib.Tree::stat_desc
	StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* ___stat_desc_24;
};

struct Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields
{
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.Tree::extra_lbits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___extra_lbits_12;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.Tree::extra_dbits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___extra_dbits_13;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.Tree::extra_blbits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___extra_blbits_14;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Tree::bl_order
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bl_order_15;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Tree::_dist_code
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____dist_code_18;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.Tree::_length_code
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____length_code_19;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.Tree::base_length
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___base_length_20;
	// System.Int32[] Org.BouncyCastle.Utilities.Zlib.Tree::base_dist
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___base_dist_21;
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

// Org.BouncyCastle.Utilities.Zlib.ZStream
struct ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.ZStream::next_in
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___next_in_17;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::next_in_index
	int32_t ___next_in_index_18;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::avail_in
	int32_t ___avail_in_19;
	// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZStream::total_in
	int64_t ___total_in_20;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.ZStream::next_out
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___next_out_21;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::next_out_index
	int32_t ___next_out_index_22;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::avail_out
	int32_t ___avail_out_23;
	// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZStream::total_out
	int64_t ___total_out_24;
	// System.String Org.BouncyCastle.Utilities.Zlib.ZStream::msg
	String_t* ___msg_25;
	// Org.BouncyCastle.Utilities.Zlib.Deflate Org.BouncyCastle.Utilities.Zlib.ZStream::dstate
	Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* ___dstate_26;
	// Org.BouncyCastle.Utilities.Zlib.Inflate Org.BouncyCastle.Utilities.Zlib.ZStream::istate
	Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* ___istate_27;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::data_type
	int32_t ___data_type_28;
	// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZStream::adler
	int64_t ___adler_29;
	// Org.BouncyCastle.Utilities.Zlib.Adler32 Org.BouncyCastle.Utilities.Zlib.ZStream::_adler
	Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* ____adler_30;
};

// Org.BouncyCastle.Utilities.Zlib.Deflate/Config
struct Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate/Config::good_length
	int32_t ___good_length_0;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate/Config::max_lazy
	int32_t ___max_lazy_1;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate/Config::nice_length
	int32_t ___nice_length_2;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate/Config::max_chain
	int32_t ___max_chain_3;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate/Config::func
	int32_t ___func_4;
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

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// Org.BouncyCastle.Utilities.IO.BaseInputStream
struct BaseInputStream_tD3E6BAE62AB4C0EB995C0565971D8A43C2F0D015  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
};

// Org.BouncyCastle.Utilities.IO.BaseOutputStream
struct BaseOutputStream_t2CFDF94C8843606C7372FEA87E5FDFB0A9BF7B82  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Org.BouncyCastle.Utilities.Zlib.ZInputStream
struct ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36  : public BaseInputStream_tD3E6BAE62AB4C0EB995C0565971D8A43C2F0D015
{
	// Org.BouncyCastle.Utilities.Zlib.ZStream Org.BouncyCastle.Utilities.Zlib.ZInputStream::z
	ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z_6;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZInputStream::flushLevel
	int32_t ___flushLevel_7;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.ZInputStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_8;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.ZInputStream::buf1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf1_9;
	// System.Boolean Org.BouncyCastle.Utilities.Zlib.ZInputStream::compress
	bool ___compress_10;
	// System.IO.Stream Org.BouncyCastle.Utilities.Zlib.ZInputStream::input
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input_11;
	// System.Boolean Org.BouncyCastle.Utilities.Zlib.ZInputStream::closed
	bool ___closed_12;
	// System.Boolean Org.BouncyCastle.Utilities.Zlib.ZInputStream::nomoreinput
	bool ___nomoreinput_13;
};

// Org.BouncyCastle.Utilities.Zlib.ZOutputStream
struct ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D  : public BaseOutputStream_t2CFDF94C8843606C7372FEA87E5FDFB0A9BF7B82
{
	// Org.BouncyCastle.Utilities.Zlib.ZStream Org.BouncyCastle.Utilities.Zlib.ZOutputStream::z
	ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z_6;
	// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZOutputStream::flushLevel
	int32_t ___flushLevel_7;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.ZOutputStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_8;
	// System.Byte[] Org.BouncyCastle.Utilities.Zlib.ZOutputStream::buf1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf1_9;
	// System.Boolean Org.BouncyCastle.Utilities.Zlib.ZOutputStream::compress
	bool ___compress_10;
	// System.IO.Stream Org.BouncyCastle.Utilities.Zlib.ZOutputStream::output
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output_11;
	// System.Boolean Org.BouncyCastle.Utilities.Zlib.ZOutputStream::closed
	bool ___closed_12;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Org.BouncyCastle.Utilities.Zlib.ZInputStreamLeaveOpen
struct ZInputStreamLeaveOpen_t6A63FD5BB9A3C35617DB3542F39F5E70F0961A25  : public ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36
{
};

// Org.BouncyCastle.Utilities.Zlib.ZOutputStreamLeaveOpen
struct ZOutputStreamLeaveOpen_tA041B4BC55EE80220EB008E57321F931EA2BAF5E  : public ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D
{
};
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
// Org.BouncyCastle.Utilities.Zlib.Deflate/Config[]
struct ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD  : public RuntimeArray
{
	ALIGN_FIELD (8) Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* m_Items[1];

	inline Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Int16 Org.BouncyCastle.Utilities.Shorts::RotateLeft(System.Int16,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Shorts_RotateLeft_mC3BBBA284B46281EF28359FED9332D2CAF6106BC (int16_t ___i0, int32_t ___distance1, const RuntimeMethod* method) ;
// System.UInt16 Org.BouncyCastle.Utilities.Shorts::RotateLeft(System.UInt16,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Shorts_RotateLeft_m803E2EB0D8C22FF69C23E14B51DCF58223158944 (uint16_t ___i0, int32_t ___distance1, const RuntimeMethod* method) ;
// System.UInt16 Org.BouncyCastle.Utilities.Shorts::RotateRight(System.UInt16,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Shorts_RotateRight_m70005CFED1AE351F2BEC8705A6D39158B1FCD784 (uint16_t ___i0, int32_t ___distance1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m6E532F05E049A23446AEE906828CDC10E21164C6 (uint8_t ___value0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m9CC1302B0E62A32203AF91B40BF71A251EDF17C6 (Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_mAFEB18CB3A134C89816E0D4756B1B3236FC8D859 (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* __this, int32_t ___good_length0, int32_t ___max_lazy1, int32_t ___nice_length2, int32_t ___max_chain3, int32_t ___func4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Tree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__ctor_m0F6D4A33E615C41BB79BB36FC4C7A640C81EEE02 (Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::init_block()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_init_block_m7763CEE9F7307AEEE20AED3E2BAE67B06A90F3AB (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Zlib.Deflate::smaller(System.Int16[],System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Deflate_smaller_m5BBF5AD72E96D742C751BA1DB54A7A15898F0EC6 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___n1, int32_t ___m2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___depth3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::scan_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_scan_tree_m2E1C3564627F3D39881C8C2A744DAD4083BE2FAE (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Tree::build_tree(Org.BouncyCastle.Utilities.Zlib.Deflate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_build_tree_m6AD17B945B675C5899F611E55A25142879AF1811 (Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* __this, Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* ___s0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::send_bits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___val0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::send_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_tree_m61D8AF468A5EBB3E3C7E6221EC84634AD4364E9D (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::send_code(System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_code_mDC25901760DD8BFC9126C05117A294FF2FCD769A (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___c0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::bi_flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_bi_flush_m52D73C6B8AB35C93331BDAB06080BC5A249C1A59 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Tree::d_code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_d_code_m608B3E1D9B6BE3AEB14048BB610911A5EDA0ABD5 (int32_t ___dist0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::bi_windup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_bi_windup_m5474965BAB98722D09F8710EBF2E1A8A43067907 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::put_short(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_put_short_m7D34E3E7FA3A2DF5DB3B1DEF244A3D48A0CC9475 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___w0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::put_byte(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_put_byte_mBCC91C909D84C5C060BABABC4AEA9F611094F7A4 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__tr_flush_block_m256627F6E7524E00A2E5699E62E7AFFEDA5711ED (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZStream::flush_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream_flush_pending_m40001A1615B81C64E1DBDE95F39E28C2C3E7C7F7 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::fill_window()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_fill_window_m0674345FA07803FF0950A76D9D732AE944B44C16 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::flush_block_only(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_flush_block_only_mD258D3552462A53985F32A321BF2DE9BE315F862 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, bool ___eof0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::copy_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_copy_block_m0893882F1974FF4A14FAFEB3838950CB77496559 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::set_data_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_set_data_type_m42F51E9C53B8FE479FE55F01FC6D7064CC85E654 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::build_bl_tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_build_bl_tree_m991C438BA3945C83626F948624515A2CB28CC032 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__tr_stored_block_m7701D20FC7E188CA05250F4007735ADD6EC212E4 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::compress_block(System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_compress_block_m3900A315DA6C82E9671BE704E461CCC6D7AF7E4E (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___ltree0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dtree1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::send_all_trees(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_all_trees_mC77987661DA0939EC16A006EAD1DA5D25BEE98AA (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::read_buf(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_read_buf_mDDD9071E93E13B3AF2BEA67DDB8EBBE7E162F5DB (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___start1, int32_t ___size2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::longest_match(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_longest_match_m74D591396E192555D89E63E9647966049A84920E (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___cur_match0, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Zlib.Deflate::_tr_tally(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Deflate__tr_tally_m3F07AE549862C785E77444CA950DAEBE95A747F3 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___dist0, int32_t ___lc1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateInit2(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateInit2_mE4C244B30C992BB6FDED12FBB9B24AD75EBDEC90 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm0, int32_t ___level1, int32_t ___method2, int32_t ___windowBits3, int32_t ___memLevel4, int32_t ___strategy5, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateInit(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateInit_m74C21FBD59700B799049BF8AC85904787A1483D1 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm0, int32_t ___level1, int32_t ___bits2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateReset(Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateReset_m3F21BFB27E27C791A7E662F5F312FC9A45DD3283 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm0, const RuntimeMethod* method) ;
// System.Int64 Org.BouncyCastle.Utilities.Zlib.Adler32::adler32(System.Int64,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Adler32_adler32_m8F1E88AC5C7EB23108FD9110F0D3ADFAD85BB611 (Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* __this, int64_t ___adler0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::tr_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_tr_init_m09251E711F1ADA86AD99B59226C3898D83AFCDE0 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::lm_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_lm_init_m4EC4EE1F40BEE2F860165B43FEDD1223751E9F24 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflate_mDC34A5CE1DD26E2AFB85788944E9B76D4222B67B (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___flush0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::putShortMSB(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_putShortMSB_mBB16049C51577098C775572D946F540E4B9E41C7 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___b0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflate_stored(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_stored_m02B82CE6EF72F037EB0141FDC901389AD480E67E (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___flush0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflate_fast(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_fast_mCA9ADDB03D375920244CFADC5487DA07A67042CD (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___flush0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflate_slow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_slow_m3B14BABC594B90978895F2ACE334F7BB99C57B47 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___flush0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::_tr_align()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__tr_align_m8A044F5EDBAE869E3BA0654923A0746598E2A50F (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfCodes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes__ctor_m4EC64920F33B0AF2A39A8ADEFCB149D53F48E104 (InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__ctor_mC9C1BE5E5E637AE2A14AD9DCCF1A685DB3C74C78 (InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::reset(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks_reset_mCF7F8F6D95FA3BA6CB321A23408D19B13D5FF090 (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___c1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfCodes::free(Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes_free_m9DF0F76B38993417A6487CDBC2DE8C56BC4F7448 (InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::inflate_flush(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, int32_t ___r1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_mABD9F198FFE57A5BFF990BF3D3CD286030C300CB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bl0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bd1, Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___tl2, Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___td3, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfCodes::init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes_init_m7AA4132CA4E845097A658CA9D6F748AFBA26B4FB (InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td4, int32_t ___td_index5, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z6, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_m659600B74B72360544490963A5775F76347094F1 (InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bb1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tb2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp3, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z4, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m05C92EFBBFF721B38E5E04FB6D0421C36A3094B1 (InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bl3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bd4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp7, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z8, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::proc(Org.BouncyCastle.Utilities.Zlib.InfBlocks,Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfCodes_proc_m72239D31140A6B42DCF0A5C5380C8ECAC3E66F49 (InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* __this, InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* ___s0, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z1, int32_t ___r2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::inflate_fast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Org.BouncyCastle.Utilities.Zlib.InfBlocks,Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfCodes_inflate_fast_m95D581BDEC8F4FCC0E3BC2C88891A7C6FFF48149 (InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td4, int32_t ___td_index5, InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* ___s6, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z7, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::free(Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks_free_mA1E3C82DCF66642EB72A346E558CD50FEA4389F1 (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateEnd(Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateEnd_m7DE4EE94BC35E24DDD74A6005B3AF8CF5C61E410 (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::.ctor(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks__ctor_mBEC9FDE2FCF80BDA5FE0CF05655AA8C5019E187B (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, RuntimeObject* ___checkfn1, int32_t ___w2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateReset(Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateReset_m3BE5D6498A176BA49D1425BCCA320DB1D6FBA6C9 (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::proc(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfBlocks_proc_mC70327D37A4CBA908F9C618512725C1C2E704EE3 (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, int32_t ___r1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::set_dictionary(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks_set_dictionary_m5C32A9D05ABD12D38FDF443AC44F22D88C8517AE (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___d0, int32_t ___start1, int32_t ___n2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::sync_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfBlocks_sync_point_mC629829A89E65C3F67BA2B57B3144B8C37FC04CB (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.InfTree::initWorkArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree_initWorkArea_m96A867886F06572C2AC5B304720607E89E0172A4 (InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* __this, int32_t ___vsize0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m46FE263E3A6E9FCE87A230BA65177C63F7171B2F (InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___d4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___e5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___t6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m7, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp8, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hn9, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___v10, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.StaticTree::.ctor(System.Int16[],System.Int32[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTree__ctor_mF3EB2DB1F52AE8D8A6F7B13DCF436C6C0C4BC86D (StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___static_tree0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___extra_bits1, int32_t ___extra_base2, int32_t ___elems3, int32_t ___max_length4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::pqdownheap(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_pqdownheap_m773E61EAFC164F2ED9D721F443EFAE03C1AA9605 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___k1, const RuntimeMethod* method) ;
// System.Byte System.Math::Max(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Math_Max_m12FB4E1302123ADB441E3A7BDF52E8404DDE53A2 (uint8_t ___val10, uint8_t ___val21, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Tree::gen_bitlen(Org.BouncyCastle.Utilities.Zlib.Deflate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_bitlen_m5F27FB1A13AC3C009FBB2FE85C3F44E1462FC140 (Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* __this, Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* ___s0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Tree::gen_codes(System.Int16[],System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_codes_m88116EEEF9D3AD850DCA9411DC3955A5DB4B3BB0 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___bl_count2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Tree::bi_reverse(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_bi_reverse_mA9BF3CFC5FB4BAECFEB1F07CEC7419BB67437674 (int32_t ___code0, int32_t ___len1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream__ctor_mBE20025BEFCE530A6D52A02D175B3F909281C9E8 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateInit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateInit_m8BEE1A8C1AD87D243EEC4D5F93CDCFFB670C64DE (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, bool ___nowrap0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream__ctor_mB60CBF53B051F947C4253E02990D40C608C925EA (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, bool ___nowrap1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Utilities.Zlib.ZStream Org.BouncyCastle.Utilities.Zlib.ZInputStream::GetDefaultZStream(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ZInputStream_GetDefaultZStream_m7DA5807361E3F0271FC5B7612B74B29FB71455B9 (bool ___nowrap0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::.ctor(System.IO.Stream,Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream__ctor_mE6AEB54FD2E1B89860427851077F1CC1B56952C6 (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.IO.BaseInputStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputStream__ctor_mE11907C5748B7FDB28FD1C98DC7021F0A8AB26C2 (BaseInputStream_tD3E6BAE62AB4C0EB995C0565971D8A43C2F0D015* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateInit_mFB731DDCCAF09E92C4C56C3572CC69E11C5C2613 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::.ctor(System.IO.Stream,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream__ctor_m3805FBB86B63A0660C6CBA028655E5C50C47E8CA (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, int32_t ___level1, bool ___nowrap2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateInit(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_mC0824C75A3049F836143A79A0DC3CF1EC7A66BBB (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___level0, bool ___nowrap1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::ImplDisposing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream_ImplDisposing_m6B6AC9EAC19234FAA131BFC727FB382560D6D91E (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, bool ___disposeInput0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.IO.Streams::ValidateBufferArguments(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Streams_ValidateBufferArguments_m233D29B534DA4B49A50BA11368B5713BAFBEB03E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflate_m4009306F2D1A99748B30E600F1531D286F58421A (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___f0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream__ctor_m93B1CAE7891AC5C27B6596CE0A80A3E76EA2C6E1 (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream__ctor_m14AA2E3836065FD1A329FE037ABBEA5662832A7B (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, int32_t ___level1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::Detach(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream_Detach_m7EF42C8D96226FB7AF29EBDB4B3F24175197A96E (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream__ctor_m67BE5B3F97B479085449A140F77C5C64C09B800C (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, bool ___nowrap1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Utilities.Zlib.ZStream Org.BouncyCastle.Utilities.Zlib.ZOutputStream::GetDefaultZStream(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ZOutputStream_GetDefaultZStream_mCBBABF218A610FB45F6CDEC0E9740BE2CC51AF65 (bool ___nowrap0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream,Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream__ctor_m85DB8A7A9FA6C5141D61F99CFAF0FA4E4E58086D (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.IO.BaseOutputStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseOutputStream__ctor_m253F5C52EDB41525E5D7753DADF91AF40B70ECC6 (BaseOutputStream_t2CFDF94C8843606C7372FEA87E5FDFB0A9BF7B82* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream__ctor_m758F8442717F2B85CF38AD97A416308A73498B69 (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, int32_t ___level1, bool ___nowrap2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::ImplDisposing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_ImplDisposing_mEC080C84E8E3BC2D9CA83BBE235D3626F699CCFE (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, bool ___disposeOutput0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateEnd_m7D4423F1CED1E553B6BDECCBBA560A1EC470B02A (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateEnd_m2EFD970A32AAA3394CF7C51620D7CD7C4C844185 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZStream::free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream_free_mED7B6D68AF5367EA7F81BFA479C8FC6FC3B6FFDF (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream__ctor_m7A80637E8841596BEBDB09A6E9F152128403E297 (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream__ctor_m69B91A767C69866726CF9C316DBEDB918A38D6D1 (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, int32_t ___level1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::Detach(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_Detach_mB63341A25B78B9DBAE0B6C94FCF0CD6616EA3941 (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateInit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateInit_m685AE4A3EA17C1AD909ABEBDEED9F8163A1108B1 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___w0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateInit(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateInit_m0B55FE89DEE64C41776E8CA40368B7DD7DACD8DC (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___w0, bool ___nowrap1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Inflate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflate__ctor_mC9D3BC1448740A6F818E30CCD47F85E720F6F20F (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateInit(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateInit_mD400EDDA880FBBB05FBBC77F9DB6AB9583214084 (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, int32_t ___w1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflate(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflate_mD4DEF2B6B03F0011D482E7EB2190C61B7F5C1747 (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, int32_t ___f1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateSync(Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateSync_m9017752868197E9912BBCD62CBDD19F381644429 (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateSetDictionary(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateSetDictionary_m30171385BE53EA43A26E9D2648165F661F198392 (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dictionary1, int32_t ___dictLength2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateInit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_m99782A597750BD9BEDE02751A9ED8D961731DF55 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___level0, int32_t ___bits1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateInit(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_m977453E3A64BE7812C6F49955368BF0AF5163AEF (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___level0, int32_t ___bits1, bool ___nowrap2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__ctor_m4E9C8614F21BA09C94FD817471E720B8BFA8DB4E (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflate(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_m9FDC8959B852F56EB5E2C7B26771E6AF72172C27 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm0, int32_t ___flush1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateEnd_mDB79F1E31028902CE105F8C76D433B1F17FA08BA (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateParams(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateParams_m94A3953A6A31C1F0F4771D9703D724FDB7E889F8 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm0, int32_t ____level1, int32_t ____strategy2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateSetDictionary(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateSetDictionary_mE1DED130289FCE6831034479A220F0FC40263A91 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dictionary1, int32_t ___dictLength2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Zlib.Adler32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32__ctor_m58BB0F179C2D5601584A545B808ACF78E7D01A2D (Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int16 Org.BouncyCastle.Utilities.Shorts::ReverseBytes(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Shorts_ReverseBytes_m1ADB2757CF44B626FA7867E20E243AB1EA190F25 (int16_t ___i0, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___i0;
		int16_t L_1;
		L_1 = Shorts_RotateLeft_mC3BBBA284B46281EF28359FED9332D2CAF6106BC(L_0, 8, NULL);
		return L_1;
	}
}
// System.UInt16 Org.BouncyCastle.Utilities.Shorts::ReverseBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Shorts_ReverseBytes_mD7AFB604D6948C9836065B0B7CB14AA063C3513D (uint16_t ___i0, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___i0;
		uint16_t L_1;
		L_1 = Shorts_RotateLeft_m803E2EB0D8C22FF69C23E14B51DCF58223158944(L_0, 8, NULL);
		return L_1;
	}
}
// System.Int16 Org.BouncyCastle.Utilities.Shorts::RotateLeft(System.Int16,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Shorts_RotateLeft_mC3BBBA284B46281EF28359FED9332D2CAF6106BC (int16_t ___i0, int32_t ___distance1, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___i0;
		int32_t L_1 = ___distance1;
		uint16_t L_2;
		L_2 = Shorts_RotateLeft_m803E2EB0D8C22FF69C23E14B51DCF58223158944((uint16_t)((int32_t)(uint16_t)L_0), L_1, NULL);
		return ((int16_t)L_2);
	}
}
// System.UInt16 Org.BouncyCastle.Utilities.Shorts::RotateLeft(System.UInt16,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Shorts_RotateLeft_m803E2EB0D8C22FF69C23E14B51DCF58223158944 (uint16_t ___i0, int32_t ___distance1, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___i0;
		int32_t L_1 = ___distance1;
		uint16_t L_2 = ___i0;
		int32_t L_3 = ___distance1;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((int32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)16), L_3))&((int32_t)31))))))));
	}
}
// System.Int16 Org.BouncyCastle.Utilities.Shorts::RotateRight(System.Int16,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Shorts_RotateRight_m16A241BB5CBB0E0F212DB57115C899B907C586B1 (int16_t ___i0, int32_t ___distance1, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___i0;
		int32_t L_1 = ___distance1;
		uint16_t L_2;
		L_2 = Shorts_RotateRight_m70005CFED1AE351F2BEC8705A6D39158B1FCD784((uint16_t)((int32_t)(uint16_t)L_0), L_1, NULL);
		return ((int16_t)L_2);
	}
}
// System.UInt16 Org.BouncyCastle.Utilities.Shorts::RotateRight(System.UInt16,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Shorts_RotateRight_m70005CFED1AE351F2BEC8705A6D39158B1FCD784 (uint16_t ___i0, int32_t ___distance1, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___i0;
		int32_t L_1 = ___distance1;
		uint16_t L_2 = ___i0;
		int32_t L_3 = ___distance1;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_0>>((int32_t)(L_1&((int32_t)31)))))|((int32_t)((int32_t)L_2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)16), L_3))&((int32_t)31))))))));
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
// System.Boolean Org.BouncyCastle.Utilities.Strings::IsOneOf(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Strings_IsOneOf_m41149C134FA4987A92D5F24A7DB3F534CDFBE341 (String_t* ___s0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___candidates1, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___candidates1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0019;
	}

IL_0006:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		String_t* L_5 = ___s0;
		String_t* L_6 = V_2;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}

IL_0015:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0019:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}
}
// System.String Org.BouncyCastle.Utilities.Strings::FromByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_FromByteArray_m64936D0ACC9976B34C50824B553B2B11D58A63FF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		NullCheck(L_0);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = V_0;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_8;
		L_8 = Convert_ToChar_m6E532F05E049A23446AEE906828CDC10E21164C6(L_7, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Il2CppChar)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001c:
	{
		int32_t L_10 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = V_0;
		String_t* L_13;
		L_13 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_12, NULL);
		return L_13;
	}
}
// System.Byte[] Org.BouncyCastle.Utilities.Strings::ToByteArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Strings_ToByteArray_m0A2C9562CD094E355653F045A2E171C189CD77CA (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___cs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___cs0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		int32_t L_3 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___cs0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_8;
		L_8 = Convert_ToByte_m9CC1302B0E62A32203AF91B40BF71A251EDF17C6(L_7, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001c:
	{
		int32_t L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		return L_12;
	}
}
// System.Byte[] Org.BouncyCastle.Utilities.Strings::ToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Strings_ToByteArray_m18AC73519C47730D39C247B5050520865E6BD68F (String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0023;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = V_1;
		String_t* L_5 = ___s0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_8;
		L_8 = Convert_ToByte_m9CC1302B0E62A32203AF91B40BF71A251EDF17C6(L_7, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		return L_12;
	}
}
// System.String Org.BouncyCastle.Utilities.Strings::FromAsciiByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_FromAsciiByteArray_m3C13BCE77790269F76B391B665A8EBAC9D850988 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		return L_2;
	}
}
// System.Byte[] Org.BouncyCastle.Utilities.Strings::ToAsciiByteArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Strings_ToAsciiByteArray_m8543559A1B0EB1FDB9A6804371EFCB3B7E8DADA4 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___cs0, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___cs0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_0, L_1);
		return L_2;
	}
}
// System.Byte[] Org.BouncyCastle.Utilities.Strings::ToAsciiByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Strings_ToAsciiByteArray_mE26740F4061B3850F1254BF535C850A3008037A9 (String_t* ___s0, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.String Org.BouncyCastle.Utilities.Strings::FromUtf8ByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_FromUtf8ByteArray_mD10534D874967597C212019B1FA0E0C986AD8045 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		return L_2;
	}
}
// System.String Org.BouncyCastle.Utilities.Strings::FromUtf8ByteArray(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_FromUtf8ByteArray_mBC022D50D737272734FB215D1DE6982B8F11E023 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		String_t* L_4;
		L_4 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Byte[] Org.BouncyCastle.Utilities.Strings::ToUtf8ByteArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Strings_ToUtf8ByteArray_mEEAAB137BD2FF82C52B7EBD9E5D0A6203451A63B (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___cs0, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___cs0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_0, L_1);
		return L_2;
	}
}
// System.Byte[] Org.BouncyCastle.Utilities.Strings::ToUtf8ByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Strings_ToUtf8ByteArray_m847E451EE440F7CC820F9E78C31906C039D4FDB5 (String_t* ___s0, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		return L_2;
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
// System.Int64 Org.BouncyCastle.Utilities.Zlib.Adler32::adler32(System.Int64,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Adler32_adler32_m8F1E88AC5C7EB23108FD9110F0D3ADFAD85BB611 (Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* __this, int64_t ___adler0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B6_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buf1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return ((int64_t)1);
	}

IL_0006:
	{
		int64_t L_1 = ___adler0;
		V_0 = ((int64_t)(L_1&((int64_t)((int32_t)65535))));
		int64_t L_2 = ___adler0;
		V_1 = ((int64_t)(((int64_t)(L_2>>((int32_t)16)))&((int64_t)((int32_t)65535))));
		goto IL_01dd;
	}

IL_0020:
	{
		int32_t L_3 = ___len3;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)5552))))
		{
			goto IL_0030;
		}
	}
	{
		G_B6_0 = ((int32_t)5552);
		goto IL_0032;
	}

IL_0030:
	{
		int32_t L_4 = ___len3;
		G_B6_0 = L_4;
	}

IL_0032:
	{
		V_2 = G_B6_0;
		int32_t L_5 = ___len3;
		int32_t L_6 = V_2;
		___len3 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		goto IL_01a3;
	}

IL_003e:
	{
		int64_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___buf1;
		int32_t L_9 = ___index2;
		int32_t L_10 = L_9;
		___index2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		NullCheck(L_8);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int64_t)il2cpp_codegen_add(L_7, ((int64_t)((int32_t)((int32_t)L_12&((int32_t)255))))));
		int64_t L_13 = V_1;
		int64_t L_14 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_13, L_14));
		int64_t L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___buf1;
		int32_t L_17 = ___index2;
		int32_t L_18 = L_17;
		___index2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		NullCheck(L_16);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_0 = ((int64_t)il2cpp_codegen_add(L_15, ((int64_t)((int32_t)((int32_t)L_20&((int32_t)255))))));
		int64_t L_21 = V_1;
		int64_t L_22 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_21, L_22));
		int64_t L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___buf1;
		int32_t L_25 = ___index2;
		int32_t L_26 = L_25;
		___index2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_0 = ((int64_t)il2cpp_codegen_add(L_23, ((int64_t)((int32_t)((int32_t)L_28&((int32_t)255))))));
		int64_t L_29 = V_1;
		int64_t L_30 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_29, L_30));
		int64_t L_31 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___buf1;
		int32_t L_33 = ___index2;
		int32_t L_34 = L_33;
		___index2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		NullCheck(L_32);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_31, ((int64_t)((int32_t)((int32_t)L_36&((int32_t)255))))));
		int64_t L_37 = V_1;
		int64_t L_38 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_37, L_38));
		int64_t L_39 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___buf1;
		int32_t L_41 = ___index2;
		int32_t L_42 = L_41;
		___index2 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		NullCheck(L_40);
		int32_t L_43 = L_42;
		uint8_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_0 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)((int32_t)((int32_t)L_44&((int32_t)255))))));
		int64_t L_45 = V_1;
		int64_t L_46 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_45, L_46));
		int64_t L_47 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___buf1;
		int32_t L_49 = ___index2;
		int32_t L_50 = L_49;
		___index2 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		NullCheck(L_48);
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_0 = ((int64_t)il2cpp_codegen_add(L_47, ((int64_t)((int32_t)((int32_t)L_52&((int32_t)255))))));
		int64_t L_53 = V_1;
		int64_t L_54 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_53, L_54));
		int64_t L_55 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___buf1;
		int32_t L_57 = ___index2;
		int32_t L_58 = L_57;
		___index2 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		NullCheck(L_56);
		int32_t L_59 = L_58;
		uint8_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int64_t)il2cpp_codegen_add(L_55, ((int64_t)((int32_t)((int32_t)L_60&((int32_t)255))))));
		int64_t L_61 = V_1;
		int64_t L_62 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_61, L_62));
		int64_t L_63 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ___buf1;
		int32_t L_65 = ___index2;
		int32_t L_66 = L_65;
		___index2 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		NullCheck(L_64);
		int32_t L_67 = L_66;
		uint8_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_0 = ((int64_t)il2cpp_codegen_add(L_63, ((int64_t)((int32_t)((int32_t)L_68&((int32_t)255))))));
		int64_t L_69 = V_1;
		int64_t L_70 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_69, L_70));
		int64_t L_71 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ___buf1;
		int32_t L_73 = ___index2;
		int32_t L_74 = L_73;
		___index2 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		NullCheck(L_72);
		int32_t L_75 = L_74;
		uint8_t L_76 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_0 = ((int64_t)il2cpp_codegen_add(L_71, ((int64_t)((int32_t)((int32_t)L_76&((int32_t)255))))));
		int64_t L_77 = V_1;
		int64_t L_78 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_77, L_78));
		int64_t L_79 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = ___buf1;
		int32_t L_81 = ___index2;
		int32_t L_82 = L_81;
		___index2 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		NullCheck(L_80);
		int32_t L_83 = L_82;
		uint8_t L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_0 = ((int64_t)il2cpp_codegen_add(L_79, ((int64_t)((int32_t)((int32_t)L_84&((int32_t)255))))));
		int64_t L_85 = V_1;
		int64_t L_86 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_85, L_86));
		int64_t L_87 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___buf1;
		int32_t L_89 = ___index2;
		int32_t L_90 = L_89;
		___index2 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		NullCheck(L_88);
		int32_t L_91 = L_90;
		uint8_t L_92 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		V_0 = ((int64_t)il2cpp_codegen_add(L_87, ((int64_t)((int32_t)((int32_t)L_92&((int32_t)255))))));
		int64_t L_93 = V_1;
		int64_t L_94 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_93, L_94));
		int64_t L_95 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = ___buf1;
		int32_t L_97 = ___index2;
		int32_t L_98 = L_97;
		___index2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		NullCheck(L_96);
		int32_t L_99 = L_98;
		uint8_t L_100 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_0 = ((int64_t)il2cpp_codegen_add(L_95, ((int64_t)((int32_t)((int32_t)L_100&((int32_t)255))))));
		int64_t L_101 = V_1;
		int64_t L_102 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_101, L_102));
		int64_t L_103 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = ___buf1;
		int32_t L_105 = ___index2;
		int32_t L_106 = L_105;
		___index2 = ((int32_t)il2cpp_codegen_add(L_106, 1));
		NullCheck(L_104);
		int32_t L_107 = L_106;
		uint8_t L_108 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_0 = ((int64_t)il2cpp_codegen_add(L_103, ((int64_t)((int32_t)((int32_t)L_108&((int32_t)255))))));
		int64_t L_109 = V_1;
		int64_t L_110 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_109, L_110));
		int64_t L_111 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = ___buf1;
		int32_t L_113 = ___index2;
		int32_t L_114 = L_113;
		___index2 = ((int32_t)il2cpp_codegen_add(L_114, 1));
		NullCheck(L_112);
		int32_t L_115 = L_114;
		uint8_t L_116 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		V_0 = ((int64_t)il2cpp_codegen_add(L_111, ((int64_t)((int32_t)((int32_t)L_116&((int32_t)255))))));
		int64_t L_117 = V_1;
		int64_t L_118 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_117, L_118));
		int64_t L_119 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_120 = ___buf1;
		int32_t L_121 = ___index2;
		int32_t L_122 = L_121;
		___index2 = ((int32_t)il2cpp_codegen_add(L_122, 1));
		NullCheck(L_120);
		int32_t L_123 = L_122;
		uint8_t L_124 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		V_0 = ((int64_t)il2cpp_codegen_add(L_119, ((int64_t)((int32_t)((int32_t)L_124&((int32_t)255))))));
		int64_t L_125 = V_1;
		int64_t L_126 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_125, L_126));
		int64_t L_127 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = ___buf1;
		int32_t L_129 = ___index2;
		int32_t L_130 = L_129;
		___index2 = ((int32_t)il2cpp_codegen_add(L_130, 1));
		NullCheck(L_128);
		int32_t L_131 = L_130;
		uint8_t L_132 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		V_0 = ((int64_t)il2cpp_codegen_add(L_127, ((int64_t)((int32_t)((int32_t)L_132&((int32_t)255))))));
		int64_t L_133 = V_1;
		int64_t L_134 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_133, L_134));
		int32_t L_135 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_135, ((int32_t)16)));
	}

IL_01a3:
	{
		int32_t L_136 = V_2;
		if ((((int32_t)L_136) >= ((int32_t)((int32_t)16))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_137 = V_2;
		if (!L_137)
		{
			goto IL_01cb;
		}
	}

IL_01ae:
	{
		int64_t L_138 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_139 = ___buf1;
		int32_t L_140 = ___index2;
		int32_t L_141 = L_140;
		___index2 = ((int32_t)il2cpp_codegen_add(L_141, 1));
		NullCheck(L_139);
		int32_t L_142 = L_141;
		uint8_t L_143 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		V_0 = ((int64_t)il2cpp_codegen_add(L_138, ((int64_t)((int32_t)((int32_t)L_143&((int32_t)255))))));
		int64_t L_144 = V_1;
		int64_t L_145 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_144, L_145));
		int32_t L_146 = V_2;
		int32_t L_147 = ((int32_t)il2cpp_codegen_subtract(L_146, 1));
		V_2 = L_147;
		if (L_147)
		{
			goto IL_01ae;
		}
	}

IL_01cb:
	{
		int64_t L_148 = V_0;
		V_0 = ((int64_t)(L_148%((int64_t)((int32_t)65521))));
		int64_t L_149 = V_1;
		V_1 = ((int64_t)(L_149%((int64_t)((int32_t)65521))));
	}

IL_01dd:
	{
		int32_t L_150 = ___len3;
		if ((((int32_t)L_150) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int64_t L_151 = V_1;
		int64_t L_152 = V_0;
		return ((int64_t)(((int64_t)(L_151<<((int32_t)16)))|L_152));
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Adler32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32__ctor_m58BB0F179C2D5601584A545B808ACF78E7D01A2D (Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__cctor_m19C8FA8FD9598DCDD317ED7E5B8F0E856AAC09B6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___z_errmsg_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___z_errmsg_8), (void*)L_10);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_11 = (ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD*)(ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD*)SZArrayNew(ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7), (void*)L_11);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_12 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_13 = (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)il2cpp_codegen_object_new(Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Config__ctor_mAFEB18CB3A134C89816E0D4756B1B3236FC8D859(L_13, 0, 0, 0, 0, 0, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)L_13);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_14 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_15 = (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)il2cpp_codegen_object_new(Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Config__ctor_mAFEB18CB3A134C89816E0D4756B1B3236FC8D859(L_15, 4, 4, 8, 4, 1, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)L_15);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_16 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_17 = (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)il2cpp_codegen_object_new(Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Config__ctor_mAFEB18CB3A134C89816E0D4756B1B3236FC8D859(L_17, 4, 5, ((int32_t)16), 8, 1, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)L_17);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_18 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_19 = (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)il2cpp_codegen_object_new(Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Config__ctor_mAFEB18CB3A134C89816E0D4756B1B3236FC8D859(L_19, 4, 6, ((int32_t)32), ((int32_t)32), 1, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)L_19);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_20 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_21 = (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)il2cpp_codegen_object_new(Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Config__ctor_mAFEB18CB3A134C89816E0D4756B1B3236FC8D859(L_21, 4, 4, ((int32_t)16), ((int32_t)16), 2, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)L_21);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_22 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_23 = (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)il2cpp_codegen_object_new(Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Config__ctor_mAFEB18CB3A134C89816E0D4756B1B3236FC8D859(L_23, 8, ((int32_t)16), ((int32_t)32), ((int32_t)32), 2, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)L_23);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_24 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_25 = (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)il2cpp_codegen_object_new(Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Config__ctor_mAFEB18CB3A134C89816E0D4756B1B3236FC8D859(L_25, 8, ((int32_t)16), ((int32_t)128), ((int32_t)128), 2, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)L_25);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_26 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_27 = (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)il2cpp_codegen_object_new(Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Config__ctor_mAFEB18CB3A134C89816E0D4756B1B3236FC8D859(L_27, 8, ((int32_t)32), ((int32_t)128), ((int32_t)256), 2, NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)L_27);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_28 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_29 = (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)il2cpp_codegen_object_new(Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Config__ctor_mAFEB18CB3A134C89816E0D4756B1B3236FC8D859(L_29, ((int32_t)32), ((int32_t)128), ((int32_t)258), ((int32_t)1024), 2, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(8), (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)L_29);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_30 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_31 = (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)il2cpp_codegen_object_new(Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Config__ctor_mAFEB18CB3A134C89816E0D4756B1B3236FC8D859(L_31, ((int32_t)32), ((int32_t)258), ((int32_t)258), ((int32_t)4096), 2, NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F*)L_31);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__ctor_m4E9C8614F21BA09C94FD817471E720B8BFA8DB4E (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_0 = (Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831*)il2cpp_codegen_object_new(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Tree__ctor_m0F6D4A33E615C41BB79BB36FC4C7A640C81EEE02(L_0, NULL);
		__this->___l_desc_94 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___l_desc_94), (void*)L_0);
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_1 = (Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831*)il2cpp_codegen_object_new(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Tree__ctor_m0F6D4A33E615C41BB79BB36FC4C7A640C81EEE02(L_1, NULL);
		__this->___d_desc_95 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___d_desc_95), (void*)L_1);
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_2 = (Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831*)il2cpp_codegen_object_new(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Tree__ctor_m0F6D4A33E615C41BB79BB36FC4C7A640C81EEE02(L_2, NULL);
		__this->___bl_desc_96 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bl_desc_96), (void*)L_2);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___bl_count_97 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bl_count_97), (void*)L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)573));
		__this->___heap_98 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heap_98), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)573));
		__this->___depth_101 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depth_101), (void*)L_5);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1146));
		__this->___dyn_ltree_91 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dyn_ltree_91), (void*)L_6);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)122));
		__this->___dyn_dtree_92 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dyn_dtree_92), (void*)L_7);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)78));
		__this->___bl_tree_93 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bl_tree_93), (void*)L_8);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::lm_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_lm_init_m4EC4EE1F40BEE2F860165B43FEDD1223751E9F24 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___w_size_65;
		__this->___window_size_69 = ((int32_t)il2cpp_codegen_multiply(2, L_0));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = __this->___head_71;
		int32_t L_2 = __this->___hash_size_73;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_2, 1))), (int16_t)0);
		V_0 = 0;
		goto IL_002f;
	}

IL_0022:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = __this->___head_71;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int16_t)0);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002f:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___hash_size_73;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_8 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		int32_t L_9 = __this->___level_87;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		int32_t L_12 = L_11->___max_lazy_1;
		__this->___max_lazy_match_86 = L_12;
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_13 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		int32_t L_14 = __this->___level_87;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = L_16->___good_length_0;
		__this->___good_match_89 = L_17;
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_18 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		int32_t L_19 = __this->___level_87;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		int32_t L_22 = L_21->___nice_length_2;
		__this->___nice_match_90 = L_22;
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_23 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		int32_t L_24 = __this->___level_87;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		int32_t L_27 = L_26->___max_chain_3;
		__this->___max_chain_length_85 = L_27;
		__this->___strstart_81 = 0;
		__this->___block_start_77 = 0;
		__this->___lookahead_83 = 0;
		int32_t L_28 = 2;
		V_1 = L_28;
		__this->___prev_length_84 = L_28;
		int32_t L_29 = V_1;
		__this->___match_length_78 = L_29;
		__this->___match_available_80 = 0;
		__this->___ins_h_72 = 0;
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::tr_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_tr_init_m09251E711F1ADA86AD99B59226C3898D83AFCDE0 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_0 = __this->___l_desc_94;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = __this->___dyn_ltree_91;
		NullCheck(L_0);
		L_0->___dyn_tree_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___dyn_tree_22), (void*)L_1);
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_2 = __this->___l_desc_94;
		il2cpp_codegen_runtime_class_init_inline(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var);
		StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* L_3 = ((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_l_desc_9;
		NullCheck(L_2);
		L_2->___stat_desc_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___stat_desc_24), (void*)L_3);
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_4 = __this->___d_desc_95;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = __this->___dyn_dtree_92;
		NullCheck(L_4);
		L_4->___dyn_tree_22 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___dyn_tree_22), (void*)L_5);
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_6 = __this->___d_desc_95;
		StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* L_7 = ((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_d_desc_10;
		NullCheck(L_6);
		L_6->___stat_desc_24 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___stat_desc_24), (void*)L_7);
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_8 = __this->___bl_desc_96;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = __this->___bl_tree_93;
		NullCheck(L_8);
		L_8->___dyn_tree_22 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___dyn_tree_22), (void*)L_9);
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_10 = __this->___bl_desc_96;
		StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* L_11 = ((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_bl_desc_11;
		NullCheck(L_10);
		L_10->___stat_desc_24 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___stat_desc_24), (void*)L_11);
		__this->___bi_buf_110 = 0;
		__this->___bi_valid_111 = 0;
		__this->___last_eob_len_109 = 8;
		Deflate_init_block_m7763CEE9F7307AEEE20AED3E2BAE67B06A90F3AB(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::init_block()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_init_block_m7763CEE9F7307AEEE20AED3E2BAE67B06A90F3AB (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_0013;
	}

IL_0004:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = __this->___dyn_ltree_91;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_1, 2))), (int16_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0013:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)286))))
		{
			goto IL_0004;
		}
	}
	{
		V_1 = 0;
		goto IL_002e;
	}

IL_001f:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = __this->___dyn_dtree_92;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_5, 2))), (int16_t)0);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002e:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)30))))
		{
			goto IL_001f;
		}
	}
	{
		V_2 = 0;
		goto IL_0046;
	}

IL_0037:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = __this->___bl_tree_93;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_9, 2))), (int16_t)0);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0046:
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)19))))
		{
			goto IL_0037;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_12 = __this->___dyn_ltree_91;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)512)), (int16_t)1);
		int32_t L_13 = 0;
		V_3 = L_13;
		__this->___static_len_107 = L_13;
		int32_t L_14 = V_3;
		__this->___opt_len_106 = L_14;
		int32_t L_15 = 0;
		V_3 = L_15;
		__this->___matches_108 = L_15;
		int32_t L_16 = V_3;
		__this->___last_lit_104 = L_16;
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::pqdownheap(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_pqdownheap_m773E61EAFC164F2ED9D721F443EFAE03C1AA9605 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___k1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___heap_98;
		int32_t L_1 = ___k1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = ___k1;
		V_1 = ((int32_t)(L_4<<1));
		goto IL_006a;
	}

IL_000f:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = __this->___heap_len_99;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_003c;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___tree0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___heap_98;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___heap_98;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___depth_101;
		il2cpp_codegen_runtime_class_init_inline(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Deflate_smaller_m5BBF5AD72E96D742C751BA1DB54A7A15898F0EC6(L_7, L_11, L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_003c:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_19 = ___tree0;
		int32_t L_20 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___heap_98;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___depth_101;
		il2cpp_codegen_runtime_class_init_inline(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Deflate_smaller_m5BBF5AD72E96D742C751BA1DB54A7A15898F0EC6(L_19, L_20, L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_0073;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->___heap_98;
		int32_t L_28 = ___k1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___heap_98;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		int32_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_32);
		int32_t L_33 = V_1;
		___k1 = L_33;
		int32_t L_34 = V_1;
		V_1 = ((int32_t)(L_34<<1));
	}

IL_006a:
	{
		int32_t L_35 = V_1;
		int32_t L_36 = __this->___heap_len_99;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_000f;
		}
	}

IL_0073:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->___heap_98;
		int32_t L_38 = ___k1;
		int32_t L_39 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)L_39);
		return;
	}
}
// System.Boolean Org.BouncyCastle.Utilities.Zlib.Deflate::smaller(System.Int16[],System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Deflate_smaller_m5BBF5AD72E96D742C751BA1DB54A7A15898F0EC6 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___n1, int32_t ___m2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___depth3, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	int16_t V_1 = 0;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___tree0;
		int32_t L_1 = ___n1;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply(L_1, 2));
		int16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = ___tree0;
		int32_t L_5 = ___m2;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		int16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		int16_t L_8 = V_0;
		int16_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0022;
		}
	}
	{
		int16_t L_10 = V_0;
		int16_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___depth3;
		int32_t L_13 = ___n1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___depth3;
		int32_t L_17 = ___m2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		return (bool)((((int32_t)((((int32_t)L_15) > ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)0;
	}

IL_0022:
	{
		return (bool)1;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::scan_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_scan_tree_m2E1C3564627F3D39881C8C2A744DAD4083BE2FAE (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_1 = (-1);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___tree0;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int16_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_3 = L_2;
		V_4 = 0;
		V_5 = 7;
		V_6 = 4;
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
	}

IL_001c:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = ___tree0;
		int32_t L_5 = ___max_code1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_5, 1)), 2)), 1))), (int16_t)(-1));
		V_0 = 0;
		goto IL_00f1;
	}

IL_002d:
	{
		int32_t L_6 = V_3;
		V_2 = L_6;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___tree0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_8, 1)), 2)), 1));
		int16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		int32_t L_11 = V_4;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		V_4 = L_12;
		int32_t L_13 = V_5;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_00ed;
		}
	}

IL_004b:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = V_6;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0069;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_18 = __this->___bl_tree_93;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int16_t* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_19, 2)))));
		int32_t L_21 = *((int16_t*)L_20);
		int32_t L_22 = V_4;
		*((int16_t*)L_20) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_21, (int32_t)((int16_t)L_22))));
		goto IL_00c7;
	}

IL_0069:
	{
		int32_t L_23 = V_2;
		if (!L_23)
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_1;
		if ((((int32_t)L_24) == ((int32_t)L_25)))
		{
			goto IL_0084;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_26 = __this->___bl_tree_93;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int16_t* L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_27, 2)))));
		int32_t L_29 = *((int16_t*)L_28);
		*((int16_t*)L_28) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
	}

IL_0084:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_30 = __this->___bl_tree_93;
		NullCheck(L_30);
		int16_t* L_31 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)32))));
		int32_t L_32 = *((int16_t*)L_31);
		*((int16_t*)L_31) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_32, 1)));
		goto IL_00c7;
	}

IL_0099:
	{
		int32_t L_33 = V_4;
		if ((((int32_t)L_33) > ((int32_t)((int32_t)10))))
		{
			goto IL_00b4;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34 = __this->___bl_tree_93;
		NullCheck(L_34);
		int16_t* L_35 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)34))));
		int32_t L_36 = *((int16_t*)L_35);
		*((int16_t*)L_35) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_36, 1)));
		goto IL_00c7;
	}

IL_00b4:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_37 = __this->___bl_tree_93;
		NullCheck(L_37);
		int16_t* L_38 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)36))));
		int32_t L_39 = *((int16_t*)L_38);
		*((int16_t*)L_38) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c7:
	{
		V_4 = 0;
		int32_t L_40 = V_2;
		V_1 = L_40;
		int32_t L_41 = V_3;
		if (L_41)
		{
			goto IL_00db;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
		goto IL_00ed;
	}

IL_00db:
	{
		int32_t L_42 = V_2;
		int32_t L_43 = V_3;
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_00e7;
		}
	}
	{
		V_5 = 6;
		V_6 = 3;
		goto IL_00ed;
	}

IL_00e7:
	{
		V_5 = 7;
		V_6 = 4;
	}

IL_00ed:
	{
		int32_t L_44 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00f1:
	{
		int32_t L_45 = V_0;
		int32_t L_46 = ___max_code1;
		if ((((int32_t)L_45) <= ((int32_t)L_46)))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::build_bl_tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_build_bl_tree_m991C438BA3945C83626F948624515A2CB28CC032 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = __this->___dyn_ltree_91;
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_1 = __this->___l_desc_94;
		NullCheck(L_1);
		int32_t L_2 = L_1->___max_code_23;
		Deflate_scan_tree_m2E1C3564627F3D39881C8C2A744DAD4083BE2FAE(__this, L_0, L_2, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = __this->___dyn_dtree_92;
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_4 = __this->___d_desc_95;
		NullCheck(L_4);
		int32_t L_5 = L_4->___max_code_23;
		Deflate_scan_tree_m2E1C3564627F3D39881C8C2A744DAD4083BE2FAE(__this, L_3, L_5, NULL);
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_6 = __this->___bl_desc_96;
		NullCheck(L_6);
		Tree_build_tree_m6AD17B945B675C5899F611E55A25142879AF1811(L_6, __this, NULL);
		V_0 = ((int32_t)18);
		goto IL_0057;
	}

IL_003f:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = __this->___bl_tree_93;
		il2cpp_codegen_runtime_class_init_inline(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___bl_order_15;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, 2)), 1));
		int16_t L_13 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0057:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)3)))
		{
			goto IL_003f;
		}
	}

IL_005b:
	{
		int32_t L_16 = __this->___opt_len_106;
		int32_t L_17 = V_0;
		__this->___opt_len_106 = ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, ((int32_t)il2cpp_codegen_add(L_17, 1)))), 5)), 5)), 4))));
		int32_t L_18 = V_0;
		return L_18;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::send_all_trees(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_all_trees_mC77987661DA0939EC16A006EAD1DA5D25BEE98AA (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___lcodes0;
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, ((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)257))), 5, NULL);
		int32_t L_1 = ___dcodes1;
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), 5, NULL);
		int32_t L_2 = ___blcodes2;
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, ((int32_t)il2cpp_codegen_subtract(L_2, 4)), 4, NULL);
		V_0 = 0;
		goto IL_0043;
	}

IL_0026:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = __this->___bl_tree_93;
		il2cpp_codegen_runtime_class_init_inline(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___bl_order_15;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, 2)), 1));
		int16_t L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, L_9, 3, NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0043:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___blcodes2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0026;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_13 = __this->___dyn_ltree_91;
		int32_t L_14 = ___lcodes0;
		Deflate_send_tree_m61D8AF468A5EBB3E3C7E6221EC84634AD4364E9D(__this, L_13, ((int32_t)il2cpp_codegen_subtract(L_14, 1)), NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_15 = __this->___dyn_dtree_92;
		int32_t L_16 = ___dcodes1;
		Deflate_send_tree_m61D8AF468A5EBB3E3C7E6221EC84634AD4364E9D(__this, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::send_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_tree_m61D8AF468A5EBB3E3C7E6221EC84634AD4364E9D (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_1 = (-1);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___tree0;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int16_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_3 = L_2;
		V_4 = 0;
		V_5 = 7;
		V_6 = 4;
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
	}

IL_001c:
	{
		V_0 = 0;
		goto IL_00f9;
	}

IL_0023:
	{
		int32_t L_4 = V_3;
		V_2 = L_4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = ___tree0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_6, 1)), 2)), 1));
		int16_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		int32_t L_9 = V_4;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		V_4 = L_10;
		int32_t L_11 = V_5;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_00f5;
		}
	}

IL_0041:
	{
		int32_t L_14 = V_4;
		int32_t L_15 = V_6;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_005f;
		}
	}

IL_0047:
	{
		int32_t L_16 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_17 = __this->___bl_tree_93;
		Deflate_send_code_mDC25901760DD8BFC9126C05117A294FF2FCD769A(__this, L_16, L_17, NULL);
		int32_t L_18 = V_4;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		V_4 = L_19;
		if (L_19)
		{
			goto IL_0047;
		}
	}
	{
		goto IL_00cf;
	}

IL_005f:
	{
		int32_t L_20 = V_2;
		if (!L_20)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_23 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_24 = __this->___bl_tree_93;
		Deflate_send_code_mDC25901760DD8BFC9126C05117A294FF2FCD769A(__this, L_23, L_24, NULL);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0079:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_26 = __this->___bl_tree_93;
		Deflate_send_code_mDC25901760DD8BFC9126C05117A294FF2FCD769A(__this, ((int32_t)16), L_26, NULL);
		int32_t L_27 = V_4;
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, ((int32_t)il2cpp_codegen_subtract(L_27, 3)), 2, NULL);
		goto IL_00cf;
	}

IL_0094:
	{
		int32_t L_28 = V_4;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)10))))
		{
			goto IL_00b5;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = __this->___bl_tree_93;
		Deflate_send_code_mDC25901760DD8BFC9126C05117A294FF2FCD769A(__this, ((int32_t)17), L_29, NULL);
		int32_t L_30 = V_4;
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, ((int32_t)il2cpp_codegen_subtract(L_30, 3)), 3, NULL);
		goto IL_00cf;
	}

IL_00b5:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_31 = __this->___bl_tree_93;
		Deflate_send_code_mDC25901760DD8BFC9126C05117A294FF2FCD769A(__this, ((int32_t)18), L_31, NULL);
		int32_t L_32 = V_4;
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, ((int32_t)il2cpp_codegen_subtract(L_32, ((int32_t)11))), 7, NULL);
	}

IL_00cf:
	{
		V_4 = 0;
		int32_t L_33 = V_2;
		V_1 = L_33;
		int32_t L_34 = V_3;
		if (L_34)
		{
			goto IL_00e3;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
		goto IL_00f5;
	}

IL_00e3:
	{
		int32_t L_35 = V_2;
		int32_t L_36 = V_3;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_36))))
		{
			goto IL_00ef;
		}
	}
	{
		V_5 = 6;
		V_6 = 3;
		goto IL_00f5;
	}

IL_00ef:
	{
		V_5 = 7;
		V_6 = 4;
	}

IL_00f5:
	{
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00f9:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = ___max_code1;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::put_byte(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_put_byte_mBCC91C909D84C5C060BABABC4AEA9F611094F7A4 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___p0;
		int32_t L_1 = ___start1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___pending_buf_58;
		int32_t L_3 = __this->___pending_60;
		int32_t L_4 = ___len2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, L_3, L_4, NULL);
		int32_t L_5 = __this->___pending_60;
		int32_t L_6 = ___len2;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::put_byte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_put_byte_m280AD56BA27FE1E2B59D0A14771DE87C622EA1C4 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, uint8_t ___c0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___pending_buf_58;
		int32_t L_1 = __this->___pending_60;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint8_t L_4 = ___c0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::put_short(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_put_short_m7D34E3E7FA3A2DF5DB3B1DEF244A3D48A0CC9475 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___w0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___pending_buf_58;
		int32_t L_1 = __this->___pending_60;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		int32_t L_4 = ___w0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___pending_buf_58;
		int32_t L_6 = __this->___pending_60;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		int32_t L_9 = ___w0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_9>>8))));
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::putShortMSB(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_putShortMSB_mBB16049C51577098C775572D946F540E4B9E41C7 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___b0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___pending_buf_58;
		int32_t L_1 = __this->___pending_60;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		int32_t L_4 = ___b0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_4>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___pending_buf_58;
		int32_t L_6 = __this->___pending_60;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		int32_t L_9 = ___b0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)L_9));
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::send_code(System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_code_mDC25901760DD8BFC9126C05117A294FF2FCD769A (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___c0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___c0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 2));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ___tree1;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = ___tree1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int16_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, ((int32_t)((int32_t)L_4&((int32_t)65535))), ((int32_t)((int32_t)L_8&((int32_t)65535))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::send_bits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___val0, int32_t ___length1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bi_valid_111;
		int32_t L_1 = ___length1;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)16), L_1)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_2 = __this->___bi_buf_110;
		int32_t L_3 = ___val0;
		int32_t L_4 = __this->___bi_valid_111;
		__this->___bi_buf_110 = ((int32_t)((int32_t)L_2|((int32_t)(L_3<<((int32_t)(L_4&((int32_t)31)))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___pending_buf_58;
		int32_t L_6 = __this->___pending_60;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		uint32_t L_9 = __this->___bi_buf_110;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___pending_buf_58;
		int32_t L_11 = __this->___pending_60;
		V_0 = L_11;
		int32_t L_12 = V_0;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_0;
		uint32_t L_14 = __this->___bi_buf_110;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>8))));
		int32_t L_15 = ___val0;
		int32_t L_16 = __this->___bi_valid_111;
		__this->___bi_buf_110 = ((int32_t)((uint32_t)L_15>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)16), L_16))&((int32_t)31)))));
		int32_t L_17 = __this->___bi_valid_111;
		int32_t L_18 = ___length1;
		__this->___bi_valid_111 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)))));
		return;
	}

IL_008a:
	{
		uint32_t L_19 = __this->___bi_buf_110;
		int32_t L_20 = ___val0;
		int32_t L_21 = __this->___bi_valid_111;
		__this->___bi_buf_110 = ((int32_t)((int32_t)L_19|((int32_t)(L_20<<((int32_t)(L_21&((int32_t)31)))))));
		int32_t L_22 = __this->___bi_valid_111;
		int32_t L_23 = ___length1;
		__this->___bi_valid_111 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::_tr_align()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__tr_align_m8A044F5EDBAE869E3BA0654923A0746598E2A50F (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, 2, 3, NULL);
		il2cpp_codegen_runtime_class_init_inline(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_ltree_7;
		Deflate_send_code_mDC25901760DD8BFC9126C05117A294FF2FCD769A(__this, ((int32_t)256), L_0, NULL);
		Deflate_bi_flush_m52D73C6B8AB35C93331BDAB06080BC5A249C1A59(__this, NULL);
		int32_t L_1 = __this->___last_eob_len_109;
		int32_t L_2 = __this->___bi_valid_111;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, L_1)), ((int32_t)10))), L_2))) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0052;
		}
	}
	{
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, 2, 3, NULL);
		il2cpp_codegen_runtime_class_init_inline(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = ((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_ltree_7;
		Deflate_send_code_mDC25901760DD8BFC9126C05117A294FF2FCD769A(__this, ((int32_t)256), L_3, NULL);
		Deflate_bi_flush_m52D73C6B8AB35C93331BDAB06080BC5A249C1A59(__this, NULL);
	}

IL_0052:
	{
		__this->___last_eob_len_109 = 7;
		return;
	}
}
// System.Boolean Org.BouncyCastle.Utilities.Zlib.Deflate::_tr_tally(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Deflate__tr_tally_m3F07AE549862C785E77444CA950DAEBE95A747F3 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___dist0, int32_t ___lc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___pending_buf_58;
		int32_t L_1 = __this->___d_buf_105;
		int32_t L_2 = __this->___last_lit_104;
		int32_t L_3 = ___dist0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 2))))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_3>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___pending_buf_58;
		int32_t L_5 = __this->___d_buf_105;
		int32_t L_6 = __this->___last_lit_104;
		int32_t L_7 = ___dist0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_5, ((int32_t)il2cpp_codegen_multiply(L_6, 2)))), 1))), (uint8_t)((int32_t)(uint8_t)L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___pending_buf_58;
		int32_t L_9 = __this->___l_buf_102;
		int32_t L_10 = __this->___last_lit_104;
		int32_t L_11 = ___lc1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_9, L_10))), (uint8_t)((int32_t)(uint8_t)L_11));
		int32_t L_12 = __this->___last_lit_104;
		__this->___last_lit_104 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = ___dist0;
		if (L_13)
		{
			goto IL_0071;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_14 = __this->___dyn_ltree_91;
		int32_t L_15 = ___lc1;
		NullCheck(L_14);
		int16_t* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_15, 2)))));
		int32_t L_17 = *((int16_t*)L_16);
		*((int16_t*)L_16) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		goto IL_00bf;
	}

IL_0071:
	{
		int32_t L_18 = __this->___matches_108;
		__this->___matches_108 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = ___dist0;
		___dist0 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = __this->___dyn_ltree_91;
		il2cpp_codegen_runtime_class_init_inline(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->____length_code_19;
		int32_t L_22 = ___lc1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_20);
		int16_t* L_25 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_24, ((int32_t)256))), 1)), 2)))));
		int32_t L_26 = *((int16_t*)L_25);
		*((int16_t*)L_25) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = __this->___dyn_dtree_92;
		int32_t L_28 = ___dist0;
		int32_t L_29;
		L_29 = Tree_d_code_m608B3E1D9B6BE3AEB14048BB610911A5EDA0ABD5(L_28, NULL);
		NullCheck(L_27);
		int16_t* L_30 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_29, 2)))));
		int32_t L_31 = *((int16_t*)L_30);
		*((int16_t*)L_30) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_31, 1)));
	}

IL_00bf:
	{
		int32_t L_32 = __this->___last_lit_104;
		if (((int32_t)(L_32&((int32_t)8191))))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_33 = __this->___level_87;
		if ((((int32_t)L_33) <= ((int32_t)2)))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_34 = __this->___last_lit_104;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_34, 8));
		int32_t L_35 = __this->___strstart_81;
		int32_t L_36 = __this->___block_start_77;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_35, L_36));
		V_2 = 0;
		goto IL_0110;
	}

IL_00f1:
	{
		int32_t L_37 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_38 = __this->___dyn_dtree_92;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_multiply(L_39, 2));
		int16_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		il2cpp_codegen_runtime_class_init_inline(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___extra_dbits_13;
		int32_t L_43 = V_2;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_0 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_41), ((int64_t)il2cpp_codegen_add(((int64_t)5), ((int64_t)L_45))))))));
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0110:
	{
		int32_t L_47 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)30))))
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_48 = V_0;
		V_0 = ((int32_t)(L_48>>3));
		int32_t L_49 = __this->___matches_108;
		int32_t L_50 = __this->___last_lit_104;
		if ((((int32_t)L_49) >= ((int32_t)((int32_t)(L_50/2)))))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_1;
		if ((((int32_t)L_51) >= ((int32_t)((int32_t)(L_52/2)))))
		{
			goto IL_0131;
		}
	}
	{
		return (bool)1;
	}

IL_0131:
	{
		int32_t L_53 = __this->___last_lit_104;
		int32_t L_54 = __this->___lit_bufsize_103;
		return (bool)((((int32_t)L_53) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_54, 1))))? 1 : 0);
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::compress_block(System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_compress_block_m3900A315DA6C82E9671BE704E461CCC6D7AF7E4E (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___ltree0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dtree1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_2 = 0;
		int32_t L_0 = __this->___last_lit_104;
		if (!L_0)
		{
			goto IL_00df;
		}
	}

IL_000d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___pending_buf_58;
		int32_t L_2 = __this->___d_buf_105;
		int32_t L_3 = V_2;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_multiply(L_3, 2))));
		uint8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___pending_buf_58;
		int32_t L_7 = __this->___d_buf_105;
		int32_t L_8 = V_2;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, ((int32_t)il2cpp_codegen_multiply(L_8, 2)))), 1));
		uint8_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_5<<8))&((int32_t)65280)))|((int32_t)((int32_t)L_10&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___pending_buf_58;
		int32_t L_12 = __this->___l_buf_102;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)((int32_t)L_15&((int32_t)255)));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_0;
		if (L_17)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_18 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_19 = ___ltree0;
		Deflate_send_code_mDC25901760DD8BFC9126C05117A294FF2FCD769A(__this, L_18, L_19, NULL);
		goto IL_00d3;
	}

IL_0068:
	{
		il2cpp_codegen_runtime_class_init_inline(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->____length_code_19;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = L_23;
		int32_t L_24 = V_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_25 = ___ltree0;
		Deflate_send_code_mDC25901760DD8BFC9126C05117A294FF2FCD769A(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_24, ((int32_t)256))), 1)), L_25, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___extra_lbits_12;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = L_29;
		int32_t L_30 = V_4;
		if (!L_30)
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___base_length_20;
		int32_t L_33 = V_3;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_31, L_35));
		int32_t L_36 = V_1;
		int32_t L_37 = V_4;
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, L_36, L_37, NULL);
	}

IL_00a0:
	{
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		int32_t L_39 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		int32_t L_40;
		L_40 = Tree_d_code_m608B3E1D9B6BE3AEB14048BB610911A5EDA0ABD5(L_39, NULL);
		V_3 = L_40;
		int32_t L_41 = V_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_42 = ___dtree1;
		Deflate_send_code_mDC25901760DD8BFC9126C05117A294FF2FCD769A(__this, L_41, L_42, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___extra_dbits_13;
		int32_t L_44 = V_3;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_4 = L_46;
		int32_t L_47 = V_4;
		if (!L_47)
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_48 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___base_dist_21;
		int32_t L_50 = V_3;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_48, L_52));
		int32_t L_53 = V_0;
		int32_t L_54 = V_4;
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, L_53, L_54, NULL);
	}

IL_00d3:
	{
		int32_t L_55 = V_2;
		int32_t L_56 = __this->___last_lit_104;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_000d;
		}
	}

IL_00df:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_57 = ___ltree0;
		Deflate_send_code_mDC25901760DD8BFC9126C05117A294FF2FCD769A(__this, ((int32_t)256), L_57, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_58 = ___ltree0;
		NullCheck(L_58);
		int32_t L_59 = ((int32_t)513);
		int16_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		__this->___last_eob_len_109 = L_60;
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::set_data_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_set_data_type_m42F51E9C53B8FE479FE55F01FC6D7064CC85E654 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_0019;
	}

IL_0008:
	{
		int32_t L_0 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = __this->___dyn_ltree_91;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_multiply(L_2, 2));
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int32_t)il2cpp_codegen_add(L_0, (int32_t)L_4));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0019:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)7)))
		{
			goto IL_0008;
		}
	}
	{
		goto IL_0030;
	}

IL_001f:
	{
		int32_t L_7 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = __this->___dyn_ltree_91;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply(L_9, 2));
		int16_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, (int32_t)L_11));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0030:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_004b;
	}

IL_003a:
	{
		int32_t L_14 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_15 = __this->___dyn_ltree_91;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_multiply(L_16, 2));
		int16_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, (int32_t)L_18));
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004b:
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)256))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		__this->___data_type_62 = (uint8_t)((int32_t)(uint8_t)((((int32_t)((((int32_t)L_21) > ((int32_t)((int32_t)(L_22>>2))))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::bi_flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_bi_flush_m52D73C6B8AB35C93331BDAB06080BC5A249C1A59 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bi_valid_111;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0059;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___pending_buf_58;
		int32_t L_2 = __this->___pending_60;
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		uint32_t L_5 = __this->___bi_buf_110;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___pending_buf_58;
		int32_t L_7 = __this->___pending_60;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		uint32_t L_10 = __this->___bi_buf_110;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>8))));
		__this->___bi_buf_110 = 0;
		__this->___bi_valid_111 = 0;
		return;
	}

IL_0059:
	{
		int32_t L_11 = __this->___bi_valid_111;
		if ((((int32_t)L_11) < ((int32_t)8)))
		{
			goto IL_00af;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___pending_buf_58;
		int32_t L_13 = __this->___pending_60;
		V_0 = L_13;
		int32_t L_14 = V_0;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_0;
		uint32_t L_16 = __this->___bi_buf_110;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)(uint8_t)L_16));
		uint32_t L_17 = __this->___bi_buf_110;
		__this->___bi_buf_110 = ((int32_t)((uint32_t)L_17>>8));
		uint32_t L_18 = __this->___bi_buf_110;
		__this->___bi_buf_110 = ((int32_t)((int32_t)L_18&((int32_t)255)));
		int32_t L_19 = __this->___bi_valid_111;
		__this->___bi_valid_111 = ((int32_t)il2cpp_codegen_subtract(L_19, 8));
	}

IL_00af:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::bi_windup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_bi_windup_m5474965BAB98722D09F8710EBF2E1A8A43067907 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bi_valid_111;
		if ((((int32_t)L_0) <= ((int32_t)8)))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___pending_buf_58;
		int32_t L_2 = __this->___pending_60;
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		uint32_t L_5 = __this->___bi_buf_110;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___pending_buf_58;
		int32_t L_7 = __this->___pending_60;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		uint32_t L_10 = __this->___bi_buf_110;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>8))));
		goto IL_0073;
	}

IL_004b:
	{
		int32_t L_11 = __this->___bi_valid_111;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___pending_buf_58;
		int32_t L_13 = __this->___pending_60;
		V_0 = L_13;
		int32_t L_14 = V_0;
		__this->___pending_60 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_0;
		uint32_t L_16 = __this->___bi_buf_110;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)(uint8_t)L_16));
	}

IL_0073:
	{
		__this->___bi_buf_110 = 0;
		__this->___bi_valid_111 = 0;
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::copy_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_copy_block_m0893882F1974FF4A14FAFEB3838950CB77496559 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const RuntimeMethod* method) 
{
	{
		Deflate_bi_windup_m5474965BAB98722D09F8710EBF2E1A8A43067907(__this, NULL);
		__this->___last_eob_len_109 = 8;
		bool L_0 = ___header2;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = ___len1;
		Deflate_put_short_m7D34E3E7FA3A2DF5DB3B1DEF244A3D48A0CC9475(__this, ((int16_t)L_1), NULL);
		int32_t L_2 = ___len1;
		Deflate_put_short_m7D34E3E7FA3A2DF5DB3B1DEF244A3D48A0CC9475(__this, ((int16_t)((~L_2))), NULL);
	}

IL_0021:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___window_68;
		int32_t L_4 = ___buf0;
		int32_t L_5 = ___len1;
		Deflate_put_byte_mBCC91C909D84C5C060BABABC4AEA9F611094F7A4(__this, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::flush_block_only(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_flush_block_only_mD258D3552462A53985F32A321BF2DE9BE315F862 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, bool ___eof0, const RuntimeMethod* method) 
{
	Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* G_B2_0 = NULL;
	Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* G_B3_1 = NULL;
	{
		int32_t L_0 = __this->___block_start_77;
		G_B1_0 = __this;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_000d:
	{
		int32_t L_1 = __this->___block_start_77;
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		int32_t L_2 = __this->___strstart_81;
		int32_t L_3 = __this->___block_start_77;
		bool L_4 = ___eof0;
		NullCheck(G_B3_1);
		Deflate__tr_flush_block_m256627F6E7524E00A2E5699E62E7AFFEDA5711ED(G_B3_1, G_B3_0, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), L_4, NULL);
		int32_t L_5 = __this->___strstart_81;
		__this->___block_start_77 = L_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_6 = __this->___strm_56;
		NullCheck(L_6);
		ZStream_flush_pending_m40001A1615B81C64E1DBDE95F39E28C2C3E7C7F7(L_6, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflate_stored(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_stored_m02B82CE6EF72F037EB0141FDC901389AD480E67E (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___pending_buf_58;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)65535), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 5)), NULL);
		V_0 = L_1;
	}

IL_0015:
	{
		int32_t L_2 = __this->___lookahead_83;
		if ((((int32_t)L_2) > ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		Deflate_fill_window_m0674345FA07803FF0950A76D9D732AE944B44C16(__this, NULL);
		int32_t L_3 = __this->___lookahead_83;
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = ___flush0;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		return 0;
	}

IL_0031:
	{
		int32_t L_5 = __this->___lookahead_83;
		if (!L_5)
		{
			goto IL_00d2;
		}
	}

IL_003c:
	{
		int32_t L_6 = __this->___strstart_81;
		int32_t L_7 = __this->___lookahead_83;
		__this->___strstart_81 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		__this->___lookahead_83 = 0;
		int32_t L_8 = __this->___block_start_77;
		int32_t L_9 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		int32_t L_10 = __this->___strstart_81;
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_11 = __this->___strstart_81;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_009b;
		}
	}

IL_0070:
	{
		int32_t L_13 = __this->___strstart_81;
		int32_t L_14 = V_1;
		__this->___lookahead_83 = ((int32_t)il2cpp_codegen_subtract(L_13, L_14));
		int32_t L_15 = V_1;
		__this->___strstart_81 = L_15;
		Deflate_flush_block_only_mD258D3552462A53985F32A321BF2DE9BE315F862(__this, (bool)0, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_16 = __this->___strm_56;
		NullCheck(L_16);
		int32_t L_17 = L_16->___avail_out_23;
		if (L_17)
		{
			goto IL_009b;
		}
	}
	{
		return 0;
	}

IL_009b:
	{
		int32_t L_18 = __this->___strstart_81;
		int32_t L_19 = __this->___block_start_77;
		int32_t L_20 = __this->___w_size_65;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, L_19))) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)262))))))
		{
			goto IL_0015;
		}
	}
	{
		Deflate_flush_block_only_mD258D3552462A53985F32A321BF2DE9BE315F862(__this, (bool)0, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_21 = __this->___strm_56;
		NullCheck(L_21);
		int32_t L_22 = L_21->___avail_out_23;
		if (L_22)
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_00d2:
	{
		int32_t L_23 = ___flush0;
		Deflate_flush_block_only_mD258D3552462A53985F32A321BF2DE9BE315F862(__this, (bool)((((int32_t)L_23) == ((int32_t)4))? 1 : 0), NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_24 = __this->___strm_56;
		NullCheck(L_24);
		int32_t L_25 = L_24->___avail_out_23;
		if (L_25)
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_26 = ___flush0;
		if ((((int32_t)L_26) == ((int32_t)4)))
		{
			goto IL_00ef;
		}
	}
	{
		return 0;
	}

IL_00ef:
	{
		return 2;
	}

IL_00f1:
	{
		int32_t L_27 = ___flush0;
		if ((((int32_t)L_27) == ((int32_t)4)))
		{
			goto IL_00f7;
		}
	}
	{
		return 1;
	}

IL_00f7:
	{
		return 3;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__tr_stored_block_m7701D20FC7E188CA05250F4007735ADD6EC212E4 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___eof2;
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, ((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0), 3, NULL);
		int32_t L_1 = ___buf0;
		int32_t L_2 = ___stored_len1;
		Deflate_copy_block_m0893882F1974FF4A14FAFEB3838950CB77496559(__this, L_1, L_2, (bool)1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__tr_flush_block_m256627F6E7524E00A2E5699E62E7AFFEDA5711ED (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_2 = 0;
		int32_t L_0 = __this->___level_87;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_1 = __this->___data_type_62;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}
	{
		Deflate_set_data_type_m42F51E9C53B8FE479FE55F01FC6D7064CC85E654(__this, NULL);
	}

IL_001a:
	{
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_2 = __this->___l_desc_94;
		NullCheck(L_2);
		Tree_build_tree_m6AD17B945B675C5899F611E55A25142879AF1811(L_2, __this, NULL);
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_3 = __this->___d_desc_95;
		NullCheck(L_3);
		Tree_build_tree_m6AD17B945B675C5899F611E55A25142879AF1811(L_3, __this, NULL);
		int32_t L_4;
		L_4 = Deflate_build_bl_tree_m991C438BA3945C83626F948624515A2CB28CC032(__this, NULL);
		V_2 = L_4;
		int32_t L_5 = __this->___opt_len_106;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_5, 3)), 7))>>3));
		int32_t L_6 = __this->___static_len_107;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_6, 3)), 7))>>3));
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		V_0 = L_9;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_10 = ___stored_len1;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 5));
		V_1 = L_11;
		V_0 = L_11;
	}

IL_0061:
	{
		int32_t L_12 = ___stored_len1;
		int32_t L_13 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, 4))) > ((int32_t)L_13)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_14 = ___buf0;
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_15 = ___buf0;
		int32_t L_16 = ___stored_len1;
		bool L_17 = ___eof2;
		Deflate__tr_stored_block_m7701D20FC7E188CA05250F4007735ADD6EC212E4(__this, L_15, L_16, L_17, NULL);
		goto IL_00db;
	}

IL_0076:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0099;
		}
	}
	{
		bool L_20 = ___eof2;
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, ((int32_t)il2cpp_codegen_add(2, ((!(((uint32_t)L_20) <= ((uint32_t)0)))? 1 : 0))), 3, NULL);
		il2cpp_codegen_runtime_class_init_inline(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_21 = ((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_ltree_7;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_22 = ((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_dtree_8;
		Deflate_compress_block_m3900A315DA6C82E9671BE704E461CCC6D7AF7E4E(__this, L_21, L_22, NULL);
		goto IL_00db;
	}

IL_0099:
	{
		bool L_23 = ___eof2;
		Deflate_send_bits_m9AB0DA6B16D057E0622059D8C71244B8D27EB3FC(__this, ((int32_t)il2cpp_codegen_add(4, ((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0))), 3, NULL);
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_24 = __this->___l_desc_94;
		NullCheck(L_24);
		int32_t L_25 = L_24->___max_code_23;
		Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* L_26 = __this->___d_desc_95;
		NullCheck(L_26);
		int32_t L_27 = L_26->___max_code_23;
		int32_t L_28 = V_2;
		Deflate_send_all_trees_mC77987661DA0939EC16A006EAD1DA5D25BEE98AA(__this, ((int32_t)il2cpp_codegen_add(L_25, 1)), ((int32_t)il2cpp_codegen_add(L_27, 1)), ((int32_t)il2cpp_codegen_add(L_28, 1)), NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = __this->___dyn_ltree_91;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_30 = __this->___dyn_dtree_92;
		Deflate_compress_block_m3900A315DA6C82E9671BE704E461CCC6D7AF7E4E(__this, L_29, L_30, NULL);
	}

IL_00db:
	{
		Deflate_init_block_m7763CEE9F7307AEEE20AED3E2BAE67B06A90F3AB(__this, NULL);
		bool L_31 = ___eof2;
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		Deflate_bi_windup_m5474965BAB98722D09F8710EBF2E1A8A43067907(__this, NULL);
	}

IL_00ea:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate::fill_window()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_fill_window_m0674345FA07803FF0950A76D9D732AE944B44C16 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B10_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B10_1 = NULL;
	int32_t G_B9_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B11_2 = NULL;
	int32_t G_B15_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B15_1 = NULL;
	int32_t G_B14_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B16_2 = NULL;

IL_0000:
	{
		int32_t L_0 = __this->___window_size_69;
		int32_t L_1 = __this->___lookahead_83;
		int32_t L_2 = __this->___strstart_81;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), L_2));
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_4 = __this->___strstart_81;
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = __this->___lookahead_83;
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = __this->___w_size_65;
		V_3 = L_6;
		goto IL_013f;
	}

IL_0034:
	{
		int32_t L_7 = V_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_013f;
	}

IL_0041:
	{
		int32_t L_9 = __this->___strstart_81;
		int32_t L_10 = __this->___w_size_65;
		int32_t L_11 = __this->___w_size_65;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_10, L_11)), ((int32_t)262))))))
		{
			goto IL_013f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___window_68;
		int32_t L_13 = __this->___w_size_65;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___window_68;
		int32_t L_15 = __this->___w_size_65;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, L_15, NULL);
		int32_t L_16 = __this->___match_start_82;
		int32_t L_17 = __this->___w_size_65;
		__this->___match_start_82 = ((int32_t)il2cpp_codegen_subtract(L_16, L_17));
		int32_t L_18 = __this->___strstart_81;
		int32_t L_19 = __this->___w_size_65;
		__this->___strstart_81 = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
		int32_t L_20 = __this->___block_start_77;
		int32_t L_21 = __this->___w_size_65;
		__this->___block_start_77 = ((int32_t)il2cpp_codegen_subtract(L_20, L_21));
		int32_t L_22 = __this->___hash_size_73;
		V_0 = L_22;
		int32_t L_23 = V_0;
		V_2 = L_23;
	}

IL_00bf:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_24 = __this->___head_71;
		int32_t L_25 = V_2;
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		V_2 = L_26;
		NullCheck(L_24);
		int32_t L_27 = L_26;
		int16_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_1 = ((int32_t)((int32_t)L_28&((int32_t)65535)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = __this->___head_71;
		int32_t L_30 = V_2;
		int32_t L_31 = V_1;
		int32_t L_32 = __this->___w_size_65;
		G_B9_0 = L_30;
		G_B9_1 = L_29;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			G_B10_0 = L_30;
			G_B10_1 = L_29;
			goto IL_00e5;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00ed;
	}

IL_00e5:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->___w_size_65;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract(L_33, L_34));
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00ed:
	{
		NullCheck(G_B11_2);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (int16_t)((int16_t)G_B11_0));
		int32_t L_35 = V_0;
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		V_0 = L_36;
		if (L_36)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_37 = __this->___w_size_65;
		V_0 = L_37;
		int32_t L_38 = V_0;
		V_2 = L_38;
	}

IL_00ff:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_39 = __this->___prev_70;
		int32_t L_40 = V_2;
		int32_t L_41 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		V_2 = L_41;
		NullCheck(L_39);
		int32_t L_42 = L_41;
		int16_t L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_1 = ((int32_t)((int32_t)L_43&((int32_t)65535)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_44 = __this->___prev_70;
		int32_t L_45 = V_2;
		int32_t L_46 = V_1;
		int32_t L_47 = __this->___w_size_65;
		G_B14_0 = L_45;
		G_B14_1 = L_44;
		if ((((int32_t)L_46) >= ((int32_t)L_47)))
		{
			G_B15_0 = L_45;
			G_B15_1 = L_44;
			goto IL_0125;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_012d;
	}

IL_0125:
	{
		int32_t L_48 = V_1;
		int32_t L_49 = __this->___w_size_65;
		G_B16_0 = ((int32_t)il2cpp_codegen_subtract(L_48, L_49));
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_012d:
	{
		NullCheck(G_B16_2);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (int16_t)((int16_t)G_B16_0));
		int32_t L_50 = V_0;
		int32_t L_51 = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
		V_0 = L_51;
		if (L_51)
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_52 = V_3;
		int32_t L_53 = __this->___w_size_65;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, L_53));
	}

IL_013f:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_54 = __this->___strm_56;
		NullCheck(L_54);
		int32_t L_55 = L_54->___avail_in_19;
		if (L_55)
		{
			goto IL_014d;
		}
	}
	{
		return;
	}

IL_014d:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_56 = __this->___strm_56;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___window_68;
		int32_t L_58 = __this->___strstart_81;
		int32_t L_59 = __this->___lookahead_83;
		int32_t L_60 = V_3;
		NullCheck(L_56);
		int32_t L_61;
		L_61 = ZStream_read_buf_mDDD9071E93E13B3AF2BEA67DDB8EBBE7E162F5DB(L_56, L_57, ((int32_t)il2cpp_codegen_add(L_58, L_59)), L_60, NULL);
		V_0 = L_61;
		int32_t L_62 = __this->___lookahead_83;
		int32_t L_63 = V_0;
		__this->___lookahead_83 = ((int32_t)il2cpp_codegen_add(L_62, L_63));
		int32_t L_64 = __this->___lookahead_83;
		if ((((int32_t)L_64) < ((int32_t)3)))
		{
			goto IL_01d0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->___window_68;
		int32_t L_66 = __this->___strstart_81;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		uint8_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		__this->___ins_h_72 = ((int32_t)((int32_t)L_68&((int32_t)255)));
		int32_t L_69 = __this->___ins_h_72;
		int32_t L_70 = __this->___hash_shift_76;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = __this->___window_68;
		int32_t L_72 = __this->___strstart_81;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		uint8_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = __this->___hash_mask_75;
		__this->___ins_h_72 = ((int32_t)(((int32_t)(((int32_t)(L_69<<((int32_t)(L_70&((int32_t)31)))))^((int32_t)((int32_t)L_74&((int32_t)255)))))&L_75));
	}

IL_01d0:
	{
		int32_t L_76 = __this->___lookahead_83;
		if ((((int32_t)L_76) >= ((int32_t)((int32_t)262))))
		{
			goto IL_01ed;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_77 = __this->___strm_56;
		NullCheck(L_77);
		int32_t L_78 = L_77->___avail_in_19;
		if (L_78)
		{
			goto IL_0000;
		}
	}

IL_01ed:
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflate_fast(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_fast_mCA9ADDB03D375920244CFADC5487DA07A67042CD (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = __this->___lookahead_83;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)262))))
		{
			goto IL_0032;
		}
	}
	{
		Deflate_fill_window_m0674345FA07803FF0950A76D9D732AE944B44C16(__this, NULL);
		int32_t L_1 = __this->___lookahead_83;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)262))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = ___flush0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		return 0;
	}

IL_0027:
	{
		int32_t L_3 = __this->___lookahead_83;
		if (!L_3)
		{
			goto IL_02c4;
		}
	}

IL_0032:
	{
		int32_t L_4 = __this->___lookahead_83;
		if ((((int32_t)L_4) < ((int32_t)3)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_5 = __this->___ins_h_72;
		int32_t L_6 = __this->___hash_shift_76;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___window_68;
		int32_t L_8 = __this->___strstart_81;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 2));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = __this->___hash_mask_75;
		__this->___ins_h_72 = ((int32_t)(((int32_t)(((int32_t)(L_5<<((int32_t)(L_6&((int32_t)31)))))^((int32_t)((int32_t)L_10&((int32_t)255)))))&L_11));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_12 = __this->___head_71;
		int32_t L_13 = __this->___ins_h_72;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int16_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)((int32_t)L_15&((int32_t)65535)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_16 = __this->___prev_70;
		int32_t L_17 = __this->___strstart_81;
		int32_t L_18 = __this->___w_mask_67;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_19 = __this->___head_71;
		int32_t L_20 = __this->___ins_h_72;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int16_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_17&L_18))), (int16_t)L_22);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_23 = __this->___head_71;
		int32_t L_24 = __this->___ins_h_72;
		int32_t L_25 = __this->___strstart_81;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (int16_t)((int16_t)L_25));
	}

IL_00b7:
	{
		int32_t L_26 = V_0;
		if (!((int64_t)L_26))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_27 = __this->___strstart_81;
		int32_t L_28 = V_0;
		int32_t L_29 = __this->___w_size_65;
		if ((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_27, L_28))&((int32_t)65535)))) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_29, ((int32_t)262))))))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_30 = __this->___strategy_88;
		if ((((int32_t)L_30) == ((int32_t)2)))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32;
		L_32 = Deflate_longest_match_m74D591396E192555D89E63E9647966049A84920E(__this, L_31, NULL);
		__this->___match_length_78 = L_32;
	}

IL_00ed:
	{
		int32_t L_33 = __this->___match_length_78;
		if ((((int32_t)L_33) < ((int32_t)3)))
		{
			goto IL_026e;
		}
	}
	{
		int32_t L_34 = __this->___strstart_81;
		int32_t L_35 = __this->___match_start_82;
		int32_t L_36 = __this->___match_length_78;
		bool L_37;
		L_37 = Deflate__tr_tally_m3F07AE549862C785E77444CA950DAEBE95A747F3(__this, ((int32_t)il2cpp_codegen_subtract(L_34, L_35)), ((int32_t)il2cpp_codegen_subtract(L_36, 3)), NULL);
		V_1 = L_37;
		int32_t L_38 = __this->___lookahead_83;
		int32_t L_39 = __this->___match_length_78;
		__this->___lookahead_83 = ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
		int32_t L_40 = __this->___match_length_78;
		int32_t L_41 = __this->___max_lazy_match_86;
		if ((((int32_t)L_40) > ((int32_t)L_41)))
		{
			goto IL_0206;
		}
	}
	{
		int32_t L_42 = __this->___lookahead_83;
		if ((((int32_t)L_42) < ((int32_t)3)))
		{
			goto IL_0206;
		}
	}
	{
		int32_t L_43 = __this->___match_length_78;
		__this->___match_length_78 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
	}

IL_0153:
	{
		int32_t L_44 = __this->___strstart_81;
		__this->___strstart_81 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->___ins_h_72;
		int32_t L_46 = __this->___hash_shift_76;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___window_68;
		int32_t L_48 = __this->___strstart_81;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 2));
		uint8_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		int32_t L_51 = __this->___hash_mask_75;
		__this->___ins_h_72 = ((int32_t)(((int32_t)(((int32_t)(L_45<<((int32_t)(L_46&((int32_t)31)))))^((int32_t)((int32_t)L_50&((int32_t)255)))))&L_51));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_52 = __this->___head_71;
		int32_t L_53 = __this->___ins_h_72;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_0 = ((int32_t)((int32_t)L_55&((int32_t)65535)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_56 = __this->___prev_70;
		int32_t L_57 = __this->___strstart_81;
		int32_t L_58 = __this->___w_mask_67;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_59 = __this->___head_71;
		int32_t L_60 = __this->___ins_h_72;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		int16_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_57&L_58))), (int16_t)L_62);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_63 = __this->___head_71;
		int32_t L_64 = __this->___ins_h_72;
		int32_t L_65 = __this->___strstart_81;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (int16_t)((int16_t)L_65));
		int32_t L_66 = __this->___match_length_78;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		int32_t L_67 = V_2;
		__this->___match_length_78 = L_67;
		int32_t L_68 = V_2;
		if (L_68)
		{
			goto IL_0153;
		}
	}
	{
		int32_t L_69 = __this->___strstart_81;
		__this->___strstart_81 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_02a5;
	}

IL_0206:
	{
		int32_t L_70 = __this->___strstart_81;
		int32_t L_71 = __this->___match_length_78;
		__this->___strstart_81 = ((int32_t)il2cpp_codegen_add(L_70, L_71));
		__this->___match_length_78 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = __this->___window_68;
		int32_t L_73 = __this->___strstart_81;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		uint8_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		__this->___ins_h_72 = ((int32_t)((int32_t)L_75&((int32_t)255)));
		int32_t L_76 = __this->___ins_h_72;
		int32_t L_77 = __this->___hash_shift_76;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = __this->___window_68;
		int32_t L_79 = __this->___strstart_81;
		NullCheck(L_78);
		int32_t L_80 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		uint8_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		int32_t L_82 = __this->___hash_mask_75;
		__this->___ins_h_72 = ((int32_t)(((int32_t)(((int32_t)(L_76<<((int32_t)(L_77&((int32_t)31)))))^((int32_t)((int32_t)L_81&((int32_t)255)))))&L_82));
		goto IL_02a5;
	}

IL_026e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = __this->___window_68;
		int32_t L_84 = __this->___strstart_81;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		uint8_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		bool L_87;
		L_87 = Deflate__tr_tally_m3F07AE549862C785E77444CA950DAEBE95A747F3(__this, 0, ((int32_t)((int32_t)L_86&((int32_t)255))), NULL);
		V_1 = L_87;
		int32_t L_88 = __this->___lookahead_83;
		__this->___lookahead_83 = ((int32_t)il2cpp_codegen_subtract(L_88, 1));
		int32_t L_89 = __this->___strstart_81;
		__this->___strstart_81 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_02a5:
	{
		bool L_90 = V_1;
		if (!L_90)
		{
			goto IL_0002;
		}
	}
	{
		Deflate_flush_block_only_mD258D3552462A53985F32A321BF2DE9BE315F862(__this, (bool)0, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_91 = __this->___strm_56;
		NullCheck(L_91);
		int32_t L_92 = L_91->___avail_out_23;
		if (L_92)
		{
			goto IL_0002;
		}
	}
	{
		return 0;
	}

IL_02c4:
	{
		int32_t L_93 = ___flush0;
		Deflate_flush_block_only_mD258D3552462A53985F32A321BF2DE9BE315F862(__this, (bool)((((int32_t)L_93) == ((int32_t)4))? 1 : 0), NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_94 = __this->___strm_56;
		NullCheck(L_94);
		int32_t L_95 = L_94->___avail_out_23;
		if (L_95)
		{
			goto IL_02e3;
		}
	}
	{
		int32_t L_96 = ___flush0;
		if ((!(((uint32_t)L_96) == ((uint32_t)4))))
		{
			goto IL_02e1;
		}
	}
	{
		return 2;
	}

IL_02e1:
	{
		return 0;
	}

IL_02e3:
	{
		int32_t L_97 = ___flush0;
		if ((((int32_t)L_97) == ((int32_t)4)))
		{
			goto IL_02e9;
		}
	}
	{
		return 1;
	}

IL_02e9:
	{
		return 3;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflate_slow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_slow_m3B14BABC594B90978895F2ACE334F7BB99C57B47 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = __this->___lookahead_83;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)262))))
		{
			goto IL_0032;
		}
	}
	{
		Deflate_fill_window_m0674345FA07803FF0950A76D9D732AE944B44C16(__this, NULL);
		int32_t L_1 = __this->___lookahead_83;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)262))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = ___flush0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		return 0;
	}

IL_0027:
	{
		int32_t L_3 = __this->___lookahead_83;
		if (!L_3)
		{
			goto IL_0323;
		}
	}

IL_0032:
	{
		int32_t L_4 = __this->___lookahead_83;
		if ((((int32_t)L_4) < ((int32_t)3)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_5 = __this->___ins_h_72;
		int32_t L_6 = __this->___hash_shift_76;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___window_68;
		int32_t L_8 = __this->___strstart_81;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 2));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = __this->___hash_mask_75;
		__this->___ins_h_72 = ((int32_t)(((int32_t)(((int32_t)(L_5<<((int32_t)(L_6&((int32_t)31)))))^((int32_t)((int32_t)L_10&((int32_t)255)))))&L_11));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_12 = __this->___head_71;
		int32_t L_13 = __this->___ins_h_72;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int16_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)((int32_t)L_15&((int32_t)65535)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_16 = __this->___prev_70;
		int32_t L_17 = __this->___strstart_81;
		int32_t L_18 = __this->___w_mask_67;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_19 = __this->___head_71;
		int32_t L_20 = __this->___ins_h_72;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int16_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_17&L_18))), (int16_t)L_22);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_23 = __this->___head_71;
		int32_t L_24 = __this->___ins_h_72;
		int32_t L_25 = __this->___strstart_81;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (int16_t)((int16_t)L_25));
	}

IL_00b7:
	{
		int32_t L_26 = __this->___match_length_78;
		__this->___prev_length_84 = L_26;
		int32_t L_27 = __this->___match_start_82;
		__this->___prev_match_79 = L_27;
		__this->___match_length_78 = 2;
		int32_t L_28 = V_0;
		if (!L_28)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_29 = __this->___prev_length_84;
		int32_t L_30 = __this->___max_lazy_match_86;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_31 = __this->___strstart_81;
		int32_t L_32 = V_0;
		int32_t L_33 = __this->___w_size_65;
		if ((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_31, L_32))&((int32_t)65535)))) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_33, ((int32_t)262))))))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_34 = __this->___strategy_88;
		if ((((int32_t)L_34) == ((int32_t)2)))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_35 = V_0;
		int32_t L_36;
		L_36 = Deflate_longest_match_m74D591396E192555D89E63E9647966049A84920E(__this, L_35, NULL);
		__this->___match_length_78 = L_36;
	}

IL_0119:
	{
		int32_t L_37 = __this->___match_length_78;
		if ((((int32_t)L_37) > ((int32_t)5)))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_38 = __this->___strategy_88;
		if ((((int32_t)L_38) == ((int32_t)1)))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_39 = __this->___match_length_78;
		if ((!(((uint32_t)L_39) == ((uint32_t)3))))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_40 = __this->___strstart_81;
		int32_t L_41 = __this->___match_start_82;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_40, L_41))) <= ((int32_t)((int32_t)4096))))
		{
			goto IL_014f;
		}
	}

IL_0148:
	{
		__this->___match_length_78 = 2;
	}

IL_014f:
	{
		int32_t L_42 = __this->___prev_length_84;
		if ((((int32_t)L_42) < ((int32_t)3)))
		{
			goto IL_029e;
		}
	}
	{
		int32_t L_43 = __this->___match_length_78;
		int32_t L_44 = __this->___prev_length_84;
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_029e;
		}
	}
	{
		int32_t L_45 = __this->___strstart_81;
		int32_t L_46 = __this->___lookahead_83;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_45, L_46)), 3));
		int32_t L_47 = __this->___strstart_81;
		int32_t L_48 = __this->___prev_match_79;
		int32_t L_49 = __this->___prev_length_84;
		bool L_50;
		L_50 = Deflate__tr_tally_m3F07AE549862C785E77444CA950DAEBE95A747F3(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_47, 1)), L_48)), ((int32_t)il2cpp_codegen_subtract(L_49, 3)), NULL);
		V_1 = L_50;
		int32_t L_51 = __this->___lookahead_83;
		int32_t L_52 = __this->___prev_length_84;
		__this->___lookahead_83 = ((int32_t)il2cpp_codegen_subtract(L_51, ((int32_t)il2cpp_codegen_subtract(L_52, 1))));
		int32_t L_53 = __this->___prev_length_84;
		__this->___prev_length_84 = ((int32_t)il2cpp_codegen_subtract(L_53, 2));
	}

IL_01bd:
	{
		int32_t L_54 = __this->___strstart_81;
		V_3 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		int32_t L_55 = V_3;
		__this->___strstart_81 = L_55;
		int32_t L_56 = V_3;
		int32_t L_57 = V_2;
		if ((((int32_t)L_56) > ((int32_t)L_57)))
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_58 = __this->___ins_h_72;
		int32_t L_59 = __this->___hash_shift_76;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->___window_68;
		int32_t L_61 = __this->___strstart_81;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add(L_61, 2));
		uint8_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		int32_t L_64 = __this->___hash_mask_75;
		__this->___ins_h_72 = ((int32_t)(((int32_t)(((int32_t)(L_58<<((int32_t)(L_59&((int32_t)31)))))^((int32_t)((int32_t)L_63&((int32_t)255)))))&L_64));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_65 = __this->___head_71;
		int32_t L_66 = __this->___ins_h_72;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		int16_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_0 = ((int32_t)((int32_t)L_68&((int32_t)65535)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_69 = __this->___prev_70;
		int32_t L_70 = __this->___strstart_81;
		int32_t L_71 = __this->___w_mask_67;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_72 = __this->___head_71;
		int32_t L_73 = __this->___ins_h_72;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		int16_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_70&L_71))), (int16_t)L_75);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_76 = __this->___head_71;
		int32_t L_77 = __this->___ins_h_72;
		int32_t L_78 = __this->___strstart_81;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (int16_t)((int16_t)L_78));
	}

IL_024d:
	{
		int32_t L_79 = __this->___prev_length_84;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_79, 1));
		int32_t L_80 = V_3;
		__this->___prev_length_84 = L_80;
		int32_t L_81 = V_3;
		if (L_81)
		{
			goto IL_01bd;
		}
	}
	{
		__this->___match_available_80 = 0;
		__this->___match_length_78 = 2;
		int32_t L_82 = __this->___strstart_81;
		__this->___strstart_81 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		bool L_83 = V_1;
		if (!L_83)
		{
			goto IL_0002;
		}
	}
	{
		Deflate_flush_block_only_mD258D3552462A53985F32A321BF2DE9BE315F862(__this, (bool)0, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_84 = __this->___strm_56;
		NullCheck(L_84);
		int32_t L_85 = L_84->___avail_out_23;
		if (L_85)
		{
			goto IL_0002;
		}
	}
	{
		return 0;
	}

IL_029e:
	{
		int32_t L_86 = __this->___match_available_80;
		if (!L_86)
		{
			goto IL_02fb;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = __this->___window_68;
		int32_t L_88 = __this->___strstart_81;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_subtract(L_88, 1));
		uint8_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		bool L_91;
		L_91 = Deflate__tr_tally_m3F07AE549862C785E77444CA950DAEBE95A747F3(__this, 0, ((int32_t)((int32_t)L_90&((int32_t)255))), NULL);
		V_1 = L_91;
		bool L_92 = V_1;
		if (!L_92)
		{
			goto IL_02cd;
		}
	}
	{
		Deflate_flush_block_only_mD258D3552462A53985F32A321BF2DE9BE315F862(__this, (bool)0, NULL);
	}

IL_02cd:
	{
		int32_t L_93 = __this->___strstart_81;
		__this->___strstart_81 = ((int32_t)il2cpp_codegen_add(L_93, 1));
		int32_t L_94 = __this->___lookahead_83;
		__this->___lookahead_83 = ((int32_t)il2cpp_codegen_subtract(L_94, 1));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_95 = __this->___strm_56;
		NullCheck(L_95);
		int32_t L_96 = L_95->___avail_out_23;
		if (L_96)
		{
			goto IL_0002;
		}
	}
	{
		return 0;
	}

IL_02fb:
	{
		__this->___match_available_80 = 1;
		int32_t L_97 = __this->___strstart_81;
		__this->___strstart_81 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		int32_t L_98 = __this->___lookahead_83;
		__this->___lookahead_83 = ((int32_t)il2cpp_codegen_subtract(L_98, 1));
		goto IL_0002;
	}

IL_0323:
	{
		int32_t L_99 = __this->___match_available_80;
		if (!L_99)
		{
			goto IL_034f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = __this->___window_68;
		int32_t L_101 = __this->___strstart_81;
		NullCheck(L_100);
		int32_t L_102 = ((int32_t)il2cpp_codegen_subtract(L_101, 1));
		uint8_t L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		bool L_104;
		L_104 = Deflate__tr_tally_m3F07AE549862C785E77444CA950DAEBE95A747F3(__this, 0, ((int32_t)((int32_t)L_103&((int32_t)255))), NULL);
		V_1 = L_104;
		__this->___match_available_80 = 0;
	}

IL_034f:
	{
		int32_t L_105 = ___flush0;
		Deflate_flush_block_only_mD258D3552462A53985F32A321BF2DE9BE315F862(__this, (bool)((((int32_t)L_105) == ((int32_t)4))? 1 : 0), NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_106 = __this->___strm_56;
		NullCheck(L_106);
		int32_t L_107 = L_106->___avail_out_23;
		if (L_107)
		{
			goto IL_036e;
		}
	}
	{
		int32_t L_108 = ___flush0;
		if ((!(((uint32_t)L_108) == ((uint32_t)4))))
		{
			goto IL_036c;
		}
	}
	{
		return 2;
	}

IL_036c:
	{
		return 0;
	}

IL_036e:
	{
		int32_t L_109 = ___flush0;
		if ((((int32_t)L_109) == ((int32_t)4)))
		{
			goto IL_0374;
		}
	}
	{
		return 1;
	}

IL_0374:
	{
		return 3;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::longest_match(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_longest_match_m74D591396E192555D89E63E9647966049A84920E (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, int32_t ___cur_match0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint8_t V_9 = 0x0;
	uint8_t V_10 = 0x0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___max_chain_length_85;
		V_0 = L_0;
		int32_t L_1 = __this->___strstart_81;
		V_1 = L_1;
		int32_t L_2 = __this->___prev_length_84;
		V_4 = L_2;
		int32_t L_3 = __this->___strstart_81;
		int32_t L_4 = __this->___w_size_65;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)262))))))
		{
			goto IL_002d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0040;
	}

IL_002d:
	{
		int32_t L_5 = __this->___strstart_81;
		int32_t L_6 = __this->___w_size_65;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)262)))));
	}

IL_0040:
	{
		V_5 = G_B3_0;
		int32_t L_7 = __this->___nice_match_90;
		V_6 = L_7;
		int32_t L_8 = __this->___w_mask_67;
		V_7 = L_8;
		int32_t L_9 = __this->___strstart_81;
		V_8 = ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)258)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___window_68;
		int32_t L_11 = V_1;
		int32_t L_12 = V_4;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_11, L_12)), 1));
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_9 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___window_68;
		int32_t L_16 = V_1;
		int32_t L_17 = V_4;
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_10 = L_19;
		int32_t L_20 = __this->___prev_length_84;
		int32_t L_21 = __this->___good_match_89;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)(L_22>>2));
	}

IL_008e:
	{
		int32_t L_23 = V_6;
		int32_t L_24 = __this->___lookahead_83;
		if ((((int32_t)L_23) <= ((int32_t)L_24)))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_25 = __this->___lookahead_83;
		V_6 = L_25;
	}

IL_00a0:
	{
		int32_t L_26 = ___cur_match0;
		V_2 = L_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___window_68;
		int32_t L_28 = V_2;
		int32_t L_29 = V_4;
		NullCheck(L_27);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_28, L_29));
		uint8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		uint8_t L_32 = V_10;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0225;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___window_68;
		int32_t L_34 = V_2;
		int32_t L_35 = V_4;
		NullCheck(L_33);
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_34, L_35)), 1));
		uint8_t L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		uint8_t L_38 = V_9;
		if ((!(((uint32_t)L_37) == ((uint32_t)L_38))))
		{
			goto IL_0225;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->___window_68;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->___window_68;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		if ((!(((uint32_t)L_42) == ((uint32_t)L_46))))
		{
			goto IL_0225;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___window_68;
		int32_t L_48 = V_2;
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		V_2 = L_49;
		NullCheck(L_47);
		int32_t L_50 = L_49;
		uint8_t L_51 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = __this->___window_68;
		int32_t L_53 = V_1;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		uint8_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		if ((!(((uint32_t)L_51) == ((uint32_t)L_55))))
		{
			goto IL_0225;
		}
	}
	{
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 2));
		int32_t L_57 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0100:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->___window_68;
		int32_t L_59 = V_1;
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		V_1 = L_60;
		NullCheck(L_58);
		int32_t L_61 = L_60;
		uint8_t L_62 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = __this->___window_68;
		int32_t L_64 = V_2;
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		V_2 = L_65;
		NullCheck(L_63);
		int32_t L_66 = L_65;
		uint8_t L_67 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		if ((!(((uint32_t)L_62) == ((uint32_t)L_67))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = __this->___window_68;
		int32_t L_69 = V_1;
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		V_1 = L_70;
		NullCheck(L_68);
		int32_t L_71 = L_70;
		uint8_t L_72 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = __this->___window_68;
		int32_t L_74 = V_2;
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		V_2 = L_75;
		NullCheck(L_73);
		int32_t L_76 = L_75;
		uint8_t L_77 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		if ((!(((uint32_t)L_72) == ((uint32_t)L_77))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = __this->___window_68;
		int32_t L_79 = V_1;
		int32_t L_80 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		V_1 = L_80;
		NullCheck(L_78);
		int32_t L_81 = L_80;
		uint8_t L_82 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = __this->___window_68;
		int32_t L_84 = V_2;
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		V_2 = L_85;
		NullCheck(L_83);
		int32_t L_86 = L_85;
		uint8_t L_87 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		if ((!(((uint32_t)L_82) == ((uint32_t)L_87))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = __this->___window_68;
		int32_t L_89 = V_1;
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		V_1 = L_90;
		NullCheck(L_88);
		int32_t L_91 = L_90;
		uint8_t L_92 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = __this->___window_68;
		int32_t L_94 = V_2;
		int32_t L_95 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		V_2 = L_95;
		NullCheck(L_93);
		int32_t L_96 = L_95;
		uint8_t L_97 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		if ((!(((uint32_t)L_92) == ((uint32_t)L_97))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = __this->___window_68;
		int32_t L_99 = V_1;
		int32_t L_100 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		V_1 = L_100;
		NullCheck(L_98);
		int32_t L_101 = L_100;
		uint8_t L_102 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = __this->___window_68;
		int32_t L_104 = V_2;
		int32_t L_105 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		V_2 = L_105;
		NullCheck(L_103);
		int32_t L_106 = L_105;
		uint8_t L_107 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		if ((!(((uint32_t)L_102) == ((uint32_t)L_107))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = __this->___window_68;
		int32_t L_109 = V_1;
		int32_t L_110 = ((int32_t)il2cpp_codegen_add(L_109, 1));
		V_1 = L_110;
		NullCheck(L_108);
		int32_t L_111 = L_110;
		uint8_t L_112 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = __this->___window_68;
		int32_t L_114 = V_2;
		int32_t L_115 = ((int32_t)il2cpp_codegen_add(L_114, 1));
		V_2 = L_115;
		NullCheck(L_113);
		int32_t L_116 = L_115;
		uint8_t L_117 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		if ((!(((uint32_t)L_112) == ((uint32_t)L_117))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118 = __this->___window_68;
		int32_t L_119 = V_1;
		int32_t L_120 = ((int32_t)il2cpp_codegen_add(L_119, 1));
		V_1 = L_120;
		NullCheck(L_118);
		int32_t L_121 = L_120;
		uint8_t L_122 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123 = __this->___window_68;
		int32_t L_124 = V_2;
		int32_t L_125 = ((int32_t)il2cpp_codegen_add(L_124, 1));
		V_2 = L_125;
		NullCheck(L_123);
		int32_t L_126 = L_125;
		uint8_t L_127 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		if ((!(((uint32_t)L_122) == ((uint32_t)L_127))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = __this->___window_68;
		int32_t L_129 = V_1;
		int32_t L_130 = ((int32_t)il2cpp_codegen_add(L_129, 1));
		V_1 = L_130;
		NullCheck(L_128);
		int32_t L_131 = L_130;
		uint8_t L_132 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_133 = __this->___window_68;
		int32_t L_134 = V_2;
		int32_t L_135 = ((int32_t)il2cpp_codegen_add(L_134, 1));
		V_2 = L_135;
		NullCheck(L_133);
		int32_t L_136 = L_135;
		uint8_t L_137 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		if ((!(((uint32_t)L_132) == ((uint32_t)L_137))))
		{
			goto IL_01e1;
		}
	}
	{
		int32_t L_138 = V_1;
		int32_t L_139 = V_8;
		if ((((int32_t)L_138) < ((int32_t)L_139)))
		{
			goto IL_0100;
		}
	}

IL_01e1:
	{
		int32_t L_140 = V_8;
		int32_t L_141 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)258), ((int32_t)il2cpp_codegen_subtract(L_140, L_141))));
		int32_t L_142 = V_8;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_142, ((int32_t)258)));
		int32_t L_143 = V_3;
		int32_t L_144 = V_4;
		if ((((int32_t)L_143) <= ((int32_t)L_144)))
		{
			goto IL_0225;
		}
	}
	{
		int32_t L_145 = ___cur_match0;
		__this->___match_start_82 = L_145;
		int32_t L_146 = V_3;
		V_4 = L_146;
		int32_t L_147 = V_3;
		int32_t L_148 = V_6;
		if ((((int32_t)L_147) >= ((int32_t)L_148)))
		{
			goto IL_0247;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_149 = __this->___window_68;
		int32_t L_150 = V_1;
		int32_t L_151 = V_4;
		NullCheck(L_149);
		int32_t L_152 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_150, L_151)), 1));
		uint8_t L_153 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_9 = L_153;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_154 = __this->___window_68;
		int32_t L_155 = V_1;
		int32_t L_156 = V_4;
		NullCheck(L_154);
		int32_t L_157 = ((int32_t)il2cpp_codegen_add(L_155, L_156));
		uint8_t L_158 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		V_10 = L_158;
	}

IL_0225:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_159 = __this->___prev_70;
		int32_t L_160 = ___cur_match0;
		int32_t L_161 = V_7;
		NullCheck(L_159);
		int32_t L_162 = ((int32_t)(L_160&L_161));
		int16_t L_163 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		int32_t L_164 = ((int32_t)((int32_t)L_163&((int32_t)65535)));
		___cur_match0 = L_164;
		int32_t L_165 = V_5;
		if ((((int32_t)L_164) <= ((int32_t)L_165)))
		{
			goto IL_0247;
		}
	}
	{
		int32_t L_166 = V_0;
		int32_t L_167 = ((int32_t)il2cpp_codegen_subtract(L_166, 1));
		V_0 = L_167;
		if (L_167)
		{
			goto IL_00a0;
		}
	}

IL_0247:
	{
		int32_t L_168 = V_4;
		int32_t L_169 = __this->___lookahead_83;
		if ((((int32_t)L_168) > ((int32_t)L_169)))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_170 = V_4;
		return L_170;
	}

IL_0254:
	{
		int32_t L_171 = __this->___lookahead_83;
		return L_171;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateInit(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateInit_m74C21FBD59700B799049BF8AC85904787A1483D1 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm0, int32_t ___level1, int32_t ___bits2, const RuntimeMethod* method) 
{
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___strm0;
		int32_t L_1 = ___level1;
		int32_t L_2 = ___bits2;
		int32_t L_3;
		L_3 = Deflate_deflateInit2_mE4C244B30C992BB6FDED12FBB9B24AD75EBDEC90(__this, L_0, L_1, 8, L_2, 8, 0, NULL);
		return L_3;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateInit(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateInit_m9E20CFBCB1CB9B0246CDC93A482F5B17868A179F (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm0, int32_t ___level1, const RuntimeMethod* method) 
{
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___strm0;
		int32_t L_1 = ___level1;
		int32_t L_2;
		L_2 = Deflate_deflateInit_m74C21FBD59700B799049BF8AC85904787A1483D1(__this, L_0, L_1, ((int32_t)15), NULL);
		return L_2;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateInit2(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateInit2_mE4C244B30C992BB6FDED12FBB9B24AD75EBDEC90 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm0, int32_t ___level1, int32_t ___method2, int32_t ___windowBits3, int32_t ___memLevel4, int32_t ___strategy5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___strm0;
		NullCheck(L_0);
		L_0->___msg_25 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___msg_25), (void*)(String_t*)NULL);
		int32_t L_1 = ___level1;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0010;
		}
	}
	{
		___level1 = 6;
	}

IL_0010:
	{
		int32_t L_2 = ___windowBits3;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		V_0 = 1;
		int32_t L_3 = ___windowBits3;
		___windowBits3 = ((-L_3));
	}

IL_001c:
	{
		int32_t L_4 = ___memLevel4;
		if ((((int32_t)L_4) < ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_5 = ___memLevel4;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)9))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_6 = ___method2;
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_7 = ___windowBits3;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)9))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_8 = ___windowBits3;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)15))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_9 = ___level1;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_10 = ___level1;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)9))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_11 = ___strategy5;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_12 = ___strategy5;
		if ((((int32_t)L_12) <= ((int32_t)2)))
		{
			goto IL_004d;
		}
	}

IL_004a:
	{
		return ((int32_t)-2);
	}

IL_004d:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_13 = ___strm0;
		NullCheck(L_13);
		L_13->___dstate_26 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___dstate_26), (void*)__this);
		int32_t L_14 = V_0;
		__this->___noheader_61 = L_14;
		int32_t L_15 = ___windowBits3;
		__this->___w_bits_66 = L_15;
		int32_t L_16 = __this->___w_bits_66;
		__this->___w_size_65 = ((int32_t)(1<<((int32_t)(L_16&((int32_t)31)))));
		int32_t L_17 = __this->___w_size_65;
		__this->___w_mask_67 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		int32_t L_18 = ___memLevel4;
		__this->___hash_bits_74 = ((int32_t)il2cpp_codegen_add(L_18, 7));
		int32_t L_19 = __this->___hash_bits_74;
		__this->___hash_size_73 = ((int32_t)(1<<((int32_t)(L_19&((int32_t)31)))));
		int32_t L_20 = __this->___hash_size_73;
		__this->___hash_mask_75 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		int32_t L_21 = __this->___hash_bits_74;
		__this->___hash_shift_76 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_21, 3)), 1))/3));
		int32_t L_22 = __this->___w_size_65;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_22, 2)));
		__this->___window_68 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_68), (void*)L_23);
		int32_t L_24 = __this->___w_size_65;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_25 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)L_24);
		__this->___prev_70 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prev_70), (void*)L_25);
		int32_t L_26 = __this->___hash_size_73;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)L_26);
		__this->___head_71 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head_71), (void*)L_27);
		int32_t L_28 = ___memLevel4;
		__this->___lit_bufsize_103 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_28, 6))&((int32_t)31)))));
		int32_t L_29 = __this->___lit_bufsize_103;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_29, 4)));
		__this->___pending_buf_58 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pending_buf_58), (void*)L_30);
		int32_t L_31 = __this->___lit_bufsize_103;
		__this->___d_buf_105 = L_31;
		int32_t L_32 = __this->___lit_bufsize_103;
		__this->___l_buf_102 = ((int32_t)il2cpp_codegen_multiply(3, L_32));
		int32_t L_33 = ___level1;
		__this->___level_87 = L_33;
		int32_t L_34 = ___strategy5;
		__this->___strategy_88 = L_34;
		int32_t L_35 = ___method2;
		__this->___method_63 = (uint8_t)((int32_t)(uint8_t)L_35);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_36 = ___strm0;
		int32_t L_37;
		L_37 = Deflate_deflateReset_m3F21BFB27E27C791A7E662F5F312FC9A45DD3283(__this, L_36, NULL);
		return L_37;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateReset(Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateReset_m3F21BFB27E27C791A7E662F5F312FC9A45DD3283 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm0, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* G_B4_0 = NULL;
	Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* G_B5_1 = NULL;
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___strm0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_1 = ___strm0;
		int64_t L_2 = ((int64_t)0);
		V_0 = L_2;
		NullCheck(L_1);
		L_1->___total_out_24 = L_2;
		int64_t L_3 = V_0;
		NullCheck(L_0);
		L_0->___total_in_20 = L_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_4 = ___strm0;
		NullCheck(L_4);
		L_4->___msg_25 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___msg_25), (void*)(String_t*)NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_5 = ___strm0;
		NullCheck(L_5);
		L_5->___data_type_28 = 2;
		__this->___pending_60 = 0;
		__this->___pending_out_59 = 0;
		int32_t L_6 = __this->___noheader_61;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		__this->___noheader_61 = 0;
	}

IL_003d:
	{
		int32_t L_7 = __this->___noheader_61;
		G_B3_0 = __this;
		if (L_7)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		G_B5_0 = ((int32_t)42);
		G_B5_1 = G_B3_0;
		goto IL_004c;
	}

IL_004a:
	{
		G_B5_0 = ((int32_t)113);
		G_B5_1 = G_B4_0;
	}

IL_004c:
	{
		NullCheck(G_B5_1);
		G_B5_1->___status_57 = G_B5_0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_8 = ___strm0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_9 = ___strm0;
		NullCheck(L_9);
		Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* L_10 = L_9->____adler_30;
		NullCheck(L_10);
		int64_t L_11;
		L_11 = Adler32_adler32_m8F1E88AC5C7EB23108FD9110F0D3ADFAD85BB611(L_10, ((int64_t)0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, 0, NULL);
		NullCheck(L_8);
		L_8->___adler_29 = L_11;
		__this->___last_flush_64 = 0;
		Deflate_tr_init_m09251E711F1ADA86AD99B59226C3898D83AFCDE0(__this, NULL);
		Deflate_lm_init_m4EC4EE1F40BEE2F860165B43FEDD1223751E9F24(__this, NULL);
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateEnd_mDB79F1E31028902CE105F8C76D433B1F17FA08BA (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___status_57;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)42))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = __this->___status_57;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)113))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = __this->___status_57;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)666))))
		{
			goto IL_0024;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_0024:
	{
		__this->___pending_buf_58 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pending_buf_58), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___head_71 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head_71), (void*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)NULL);
		__this->___prev_70 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prev_70), (void*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)NULL);
		__this->___window_68 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_68), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		int32_t L_3 = __this->___status_57;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)113))))
		{
			goto IL_004c;
		}
	}
	{
		return 0;
	}

IL_004c:
	{
		return ((int32_t)-3);
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateParams(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateParams_m94A3953A6A31C1F0F4771D9703D724FDB7E889F8 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm0, int32_t ____level1, int32_t ____strategy2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ____level1;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0009;
		}
	}
	{
		____level1 = 6;
	}

IL_0009:
	{
		int32_t L_1 = ____level1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ____level1;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)9))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = ____strategy2;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = ____strategy2;
		if ((((int32_t)L_4) <= ((int32_t)2)))
		{
			goto IL_001d;
		}
	}

IL_001a:
	{
		return ((int32_t)-2);
	}

IL_001d:
	{
		il2cpp_codegen_runtime_class_init_inline(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_5 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		int32_t L_6 = __this->___level_87;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		int32_t L_9 = L_8->___func_4;
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_10 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		int32_t L_11 = ____level1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		int32_t L_14 = L_13->___func_4;
		if ((((int32_t)L_9) == ((int32_t)L_14)))
		{
			goto IL_004c;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_15 = ___strm0;
		NullCheck(L_15);
		int64_t L_16 = L_15->___total_in_20;
		if (!L_16)
		{
			goto IL_004c;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_17 = ___strm0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ZStream_deflate_mDC34A5CE1DD26E2AFB85788944E9B76D4222B67B(L_17, 1, NULL);
		V_0 = L_18;
	}

IL_004c:
	{
		int32_t L_19 = __this->___level_87;
		int32_t L_20 = ____level1;
		if ((((int32_t)L_19) == ((int32_t)L_20)))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_21 = ____level1;
		__this->___level_87 = L_21;
		il2cpp_codegen_runtime_class_init_inline(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_22 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		int32_t L_23 = __this->___level_87;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		int32_t L_26 = L_25->___max_lazy_1;
		__this->___max_lazy_match_86 = L_26;
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_27 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		int32_t L_28 = __this->___level_87;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		int32_t L_31 = L_30->___good_length_0;
		__this->___good_match_89 = L_31;
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_32 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		int32_t L_33 = __this->___level_87;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		int32_t L_36 = L_35->___nice_length_2;
		__this->___nice_match_90 = L_36;
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_37 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		int32_t L_38 = __this->___level_87;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		int32_t L_41 = L_40->___max_chain_3;
		__this->___max_chain_length_85 = L_41;
	}

IL_00b8:
	{
		int32_t L_42 = ____strategy2;
		__this->___strategy_88 = L_42;
		int32_t L_43 = V_0;
		return L_43;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflateSetDictionary(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateSetDictionary_mE1DED130289FCE6831034479A220F0FC40263A91 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dictionary1, int32_t ___dictLength2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___dictLength2;
		V_0 = L_0;
		V_1 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___dictionary1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = __this->___status_57;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)42))))
		{
			goto IL_0014;
		}
	}

IL_0011:
	{
		return ((int32_t)-2);
	}

IL_0014:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_3 = ___strm0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_4 = ___strm0;
		NullCheck(L_4);
		Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* L_5 = L_4->____adler_30;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_6 = ___strm0;
		NullCheck(L_6);
		int64_t L_7 = L_6->___adler_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___dictionary1;
		int32_t L_9 = ___dictLength2;
		NullCheck(L_5);
		int64_t L_10;
		L_10 = Adler32_adler32_m8F1E88AC5C7EB23108FD9110F0D3ADFAD85BB611(L_5, L_7, L_8, 0, L_9, NULL);
		NullCheck(L_3);
		L_3->___adler_29 = L_10;
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)3)))
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->___w_size_65;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)262))))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_14 = __this->___w_size_65;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)262)));
		int32_t L_15 = ___dictLength2;
		int32_t L_16 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___dictionary1;
		int32_t L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___window_68;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, L_18, (RuntimeArray*)L_19, 0, L_20, NULL);
		int32_t L_21 = V_0;
		__this->___strstart_81 = L_21;
		int32_t L_22 = V_0;
		__this->___block_start_77 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___window_68;
		NullCheck(L_23);
		int32_t L_24 = 0;
		uint8_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		__this->___ins_h_72 = ((int32_t)((int32_t)L_25&((int32_t)255)));
		int32_t L_26 = __this->___ins_h_72;
		int32_t L_27 = __this->___hash_shift_76;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___window_68;
		NullCheck(L_28);
		int32_t L_29 = 1;
		uint8_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = __this->___hash_mask_75;
		__this->___ins_h_72 = ((int32_t)(((int32_t)(((int32_t)(L_26<<((int32_t)(L_27&((int32_t)31)))))^((int32_t)((int32_t)L_30&((int32_t)255)))))&L_31));
		V_2 = 0;
		goto IL_0112;
	}

IL_00b5:
	{
		int32_t L_32 = __this->___ins_h_72;
		int32_t L_33 = __this->___hash_shift_76;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___window_68;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 2));
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = __this->___hash_mask_75;
		__this->___ins_h_72 = ((int32_t)(((int32_t)(((int32_t)(L_32<<((int32_t)(L_33&((int32_t)31)))))^((int32_t)((int32_t)L_37&((int32_t)255)))))&L_38));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_39 = __this->___prev_70;
		int32_t L_40 = V_2;
		int32_t L_41 = __this->___w_mask_67;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_42 = __this->___head_71;
		int32_t L_43 = __this->___ins_h_72;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int16_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_40&L_41))), (int16_t)L_45);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_46 = __this->___head_71;
		int32_t L_47 = __this->___ins_h_72;
		int32_t L_48 = V_2;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (int16_t)((int16_t)L_48));
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0112:
	{
		int32_t L_50 = V_2;
		int32_t L_51 = V_0;
		if ((((int32_t)L_50) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_51, 3)))))
		{
			goto IL_00b5;
		}
	}
	{
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Deflate::deflate(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_m9FDC8959B852F56EB5E2C7B26771E6AF72172C27 (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___strm0, int32_t ___flush1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___flush1;
		if ((((int32_t)L_0) > ((int32_t)4)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___flush1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}

IL_0008:
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_2 = ___strm0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2->___next_out_21;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_4 = ___strm0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4->___next_in_17;
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_6 = ___strm0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___avail_in_19;
		if (L_7)
		{
			goto IL_0034;
		}
	}

IL_0023:
	{
		int32_t L_8 = __this->___status_57;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)666)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = ___flush1;
		if ((((int32_t)L_9) == ((int32_t)4)))
		{
			goto IL_0044;
		}
	}

IL_0034:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_10 = ___strm0;
		il2cpp_codegen_runtime_class_init_inline(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___z_errmsg_8;
		NullCheck(L_11);
		int32_t L_12 = 4;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_10);
		L_10->___msg_25 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___msg_25), (void*)L_13);
		return ((int32_t)-2);
	}

IL_0044:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_14 = ___strm0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___avail_out_23;
		if (L_15)
		{
			goto IL_005c;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_16 = ___strm0;
		il2cpp_codegen_runtime_class_init_inline(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___z_errmsg_8;
		NullCheck(L_17);
		int32_t L_18 = 7;
		String_t* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		L_16->___msg_25 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___msg_25), (void*)L_19);
		return ((int32_t)-5);
	}

IL_005c:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_20 = ___strm0;
		__this->___strm_56 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___strm_56), (void*)L_20);
		int32_t L_21 = __this->___last_flush_64;
		V_0 = L_21;
		int32_t L_22 = ___flush1;
		__this->___last_flush_64 = L_22;
		int32_t L_23 = __this->___status_57;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_24 = __this->___w_bits_66;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(8, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_24, 8))<<4))))<<8));
		int32_t L_25 = __this->___level_87;
		V_2 = ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_25, 1))&((int32_t)255)))>>1));
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) <= ((int32_t)3)))
		{
			goto IL_00a4;
		}
	}
	{
		V_2 = 3;
	}

IL_00a4:
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_2;
		V_1 = ((int32_t)(L_27|((int32_t)(L_28<<6))));
		int32_t L_29 = __this->___strstart_81;
		if (!L_29)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)(L_30|((int32_t)32)));
	}

IL_00b7:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, ((int32_t)il2cpp_codegen_subtract(((int32_t)31), ((int32_t)(L_32%((int32_t)31)))))));
		__this->___status_57 = ((int32_t)113);
		int32_t L_33 = V_1;
		Deflate_putShortMSB_mBB16049C51577098C775572D946F540E4B9E41C7(__this, L_33, NULL);
		int32_t L_34 = __this->___strstart_81;
		if (!L_34)
		{
			goto IL_00fc;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_35 = ___strm0;
		NullCheck(L_35);
		int64_t L_36 = L_35->___adler_29;
		Deflate_putShortMSB_mBB16049C51577098C775572D946F540E4B9E41C7(__this, ((int32_t)((int64_t)(L_36>>((int32_t)16)))), NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_37 = ___strm0;
		NullCheck(L_37);
		int64_t L_38 = L_37->___adler_29;
		Deflate_putShortMSB_mBB16049C51577098C775572D946F540E4B9E41C7(__this, ((int32_t)((int64_t)(L_38&((int64_t)((int32_t)65535))))), NULL);
	}

IL_00fc:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_39 = ___strm0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_40 = ___strm0;
		NullCheck(L_40);
		Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* L_41 = L_40->____adler_30;
		NullCheck(L_41);
		int64_t L_42;
		L_42 = Adler32_adler32_m8F1E88AC5C7EB23108FD9110F0D3ADFAD85BB611(L_41, ((int64_t)0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, 0, NULL);
		NullCheck(L_39);
		L_39->___adler_29 = L_42;
	}

IL_0112:
	{
		int32_t L_43 = __this->___pending_60;
		if (!L_43)
		{
			goto IL_0131;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_44 = ___strm0;
		NullCheck(L_44);
		ZStream_flush_pending_m40001A1615B81C64E1DBDE95F39E28C2C3E7C7F7(L_44, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_45 = ___strm0;
		NullCheck(L_45);
		int32_t L_46 = L_45->___avail_out_23;
		if (L_46)
		{
			goto IL_0151;
		}
	}
	{
		__this->___last_flush_64 = (-1);
		return 0;
	}

IL_0131:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_47 = ___strm0;
		NullCheck(L_47);
		int32_t L_48 = L_47->___avail_in_19;
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		int32_t L_49 = ___flush1;
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) > ((int32_t)L_50)))
		{
			goto IL_0151;
		}
	}
	{
		int32_t L_51 = ___flush1;
		if ((((int32_t)L_51) == ((int32_t)4)))
		{
			goto IL_0151;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_52 = ___strm0;
		il2cpp_codegen_runtime_class_init_inline(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___z_errmsg_8;
		NullCheck(L_53);
		int32_t L_54 = 7;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_52);
		L_52->___msg_25 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&L_52->___msg_25), (void*)L_55);
		return ((int32_t)-5);
	}

IL_0151:
	{
		int32_t L_56 = __this->___status_57;
		if ((!(((uint32_t)L_56) == ((uint32_t)((int32_t)666)))))
		{
			goto IL_0176;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_57 = ___strm0;
		NullCheck(L_57);
		int32_t L_58 = L_57->___avail_in_19;
		if (!L_58)
		{
			goto IL_0176;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_59 = ___strm0;
		il2cpp_codegen_runtime_class_init_inline(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___z_errmsg_8;
		NullCheck(L_60);
		int32_t L_61 = 7;
		String_t* L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_59);
		L_59->___msg_25 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&L_59->___msg_25), (void*)L_62);
		return ((int32_t)-5);
	}

IL_0176:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_63 = ___strm0;
		NullCheck(L_63);
		int32_t L_64 = L_63->___avail_in_19;
		if (L_64)
		{
			goto IL_019c;
		}
	}
	{
		int32_t L_65 = __this->___lookahead_83;
		if (L_65)
		{
			goto IL_019c;
		}
	}
	{
		int32_t L_66 = ___flush1;
		if (!L_66)
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_67 = __this->___status_57;
		if ((((int32_t)L_67) == ((int32_t)((int32_t)666))))
		{
			goto IL_0260;
		}
	}

IL_019c:
	{
		V_3 = (-1);
		il2cpp_codegen_runtime_class_init_inline(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		ConfigU5BU5D_t5CBA983092DEC08F7F05A3677C2225B1B88C5DBD* L_68 = ((Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var))->___config_table_7;
		int32_t L_69 = __this->___level_87;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		int32_t L_72 = L_71->___func_4;
		V_4 = L_72;
		int32_t L_73 = V_4;
		switch (L_73)
		{
			case 0:
			{
				goto IL_01c6;
			}
			case 1:
			{
				goto IL_01d0;
			}
			case 2:
			{
				goto IL_01da;
			}
		}
	}
	{
		goto IL_01e2;
	}

IL_01c6:
	{
		int32_t L_74 = ___flush1;
		int32_t L_75;
		L_75 = Deflate_deflate_stored_m02B82CE6EF72F037EB0141FDC901389AD480E67E(__this, L_74, NULL);
		V_3 = L_75;
		goto IL_01e2;
	}

IL_01d0:
	{
		int32_t L_76 = ___flush1;
		int32_t L_77;
		L_77 = Deflate_deflate_fast_mCA9ADDB03D375920244CFADC5487DA07A67042CD(__this, L_76, NULL);
		V_3 = L_77;
		goto IL_01e2;
	}

IL_01da:
	{
		int32_t L_78 = ___flush1;
		int32_t L_79;
		L_79 = Deflate_deflate_slow_m3B14BABC594B90978895F2ACE334F7BB99C57B47(__this, L_78, NULL);
		V_3 = L_79;
	}

IL_01e2:
	{
		int32_t L_80 = V_3;
		if ((((int32_t)L_80) == ((int32_t)2)))
		{
			goto IL_01ea;
		}
	}
	{
		int32_t L_81 = V_3;
		if ((!(((uint32_t)L_81) == ((uint32_t)3))))
		{
			goto IL_01f5;
		}
	}

IL_01ea:
	{
		__this->___status_57 = ((int32_t)666);
	}

IL_01f5:
	{
		int32_t L_82 = V_3;
		if (!L_82)
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_83 = V_3;
		if ((!(((uint32_t)L_83) == ((uint32_t)2))))
		{
			goto IL_020d;
		}
	}

IL_01fc:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_84 = ___strm0;
		NullCheck(L_84);
		int32_t L_85 = L_84->___avail_out_23;
		if (L_85)
		{
			goto IL_020b;
		}
	}
	{
		__this->___last_flush_64 = (-1);
	}

IL_020b:
	{
		return 0;
	}

IL_020d:
	{
		int32_t L_86 = V_3;
		if ((!(((uint32_t)L_86) == ((uint32_t)1))))
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_87 = ___flush1;
		if ((!(((uint32_t)L_87) == ((uint32_t)1))))
		{
			goto IL_021d;
		}
	}
	{
		Deflate__tr_align_m8A044F5EDBAE869E3BA0654923A0746598E2A50F(__this, NULL);
		goto IL_0249;
	}

IL_021d:
	{
		Deflate__tr_stored_block_m7701D20FC7E188CA05250F4007735ADD6EC212E4(__this, 0, 0, (bool)0, NULL);
		int32_t L_88 = ___flush1;
		if ((!(((uint32_t)L_88) == ((uint32_t)3))))
		{
			goto IL_0249;
		}
	}
	{
		V_5 = 0;
		goto IL_023f;
	}

IL_022f:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_89 = __this->___head_71;
		int32_t L_90 = V_5;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (int16_t)0);
		int32_t L_91 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_023f:
	{
		int32_t L_92 = V_5;
		int32_t L_93 = __this->___hash_size_73;
		if ((((int32_t)L_92) < ((int32_t)L_93)))
		{
			goto IL_022f;
		}
	}

IL_0249:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_94 = ___strm0;
		NullCheck(L_94);
		ZStream_flush_pending_m40001A1615B81C64E1DBDE95F39E28C2C3E7C7F7(L_94, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_95 = ___strm0;
		NullCheck(L_95);
		int32_t L_96 = L_95->___avail_out_23;
		if (L_96)
		{
			goto IL_0260;
		}
	}
	{
		__this->___last_flush_64 = (-1);
		return 0;
	}

IL_0260:
	{
		int32_t L_97 = ___flush1;
		if ((((int32_t)L_97) == ((int32_t)4)))
		{
			goto IL_0266;
		}
	}
	{
		return 0;
	}

IL_0266:
	{
		int32_t L_98 = __this->___noheader_61;
		if (!L_98)
		{
			goto IL_0270;
		}
	}
	{
		return 1;
	}

IL_0270:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_99 = ___strm0;
		NullCheck(L_99);
		int64_t L_100 = L_99->___adler_29;
		Deflate_putShortMSB_mBB16049C51577098C775572D946F540E4B9E41C7(__this, ((int32_t)((int64_t)(L_100>>((int32_t)16)))), NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_101 = ___strm0;
		NullCheck(L_101);
		int64_t L_102 = L_101->___adler_29;
		Deflate_putShortMSB_mBB16049C51577098C775572D946F540E4B9E41C7(__this, ((int32_t)((int64_t)(L_102&((int64_t)((int32_t)65535))))), NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_103 = ___strm0;
		NullCheck(L_103);
		ZStream_flush_pending_m40001A1615B81C64E1DBDE95F39E28C2C3E7C7F7(L_103, NULL);
		__this->___noheader_61 = (-1);
		int32_t L_104 = __this->___pending_60;
		return ((((int32_t)L_104) == ((int32_t)0))? 1 : 0);
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
// System.Void Org.BouncyCastle.Utilities.Zlib.Deflate/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_mAFEB18CB3A134C89816E0D4756B1B3236FC8D859 (Config_t108970B32DFF32DE78AE840B4ABAE3FEDADD7A9F* __this, int32_t ___good_length0, int32_t ___max_lazy1, int32_t ___nice_length2, int32_t ___max_chain3, int32_t ___func4, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___good_length0;
		__this->___good_length_0 = L_0;
		int32_t L_1 = ___max_lazy1;
		__this->___max_lazy_1 = L_1;
		int32_t L_2 = ___nice_length2;
		__this->___nice_length_2 = L_2;
		int32_t L_3 = ___max_chain3;
		__this->___max_chain_3 = L_3;
		int32_t L_4 = ___func4;
		__this->___func_4 = L_4;
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
// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::.ctor(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks__ctor_mBEC9FDE2FCF80BDA5FE0CF05655AA8C5019E187B (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, RuntimeObject* ___checkfn1, int32_t ___w2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___bb_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bb_27), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___tb_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tb_28), (void*)L_1);
		InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* L_2 = (InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03*)il2cpp_codegen_object_new(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InfCodes__ctor_m4EC64920F33B0AF2A39A8ADEFCB149D53F48E104(L_2, NULL);
		__this->___codes_29 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___codes_29), (void*)L_2);
		InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* L_3 = (InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD*)il2cpp_codegen_object_new(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InfTree__ctor_mC9C1BE5E5E637AE2A14AD9DCCF1A685DB3C74C78(L_3, NULL);
		__this->___inftree_40 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inftree_40), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4320));
		__this->___hufts_33 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hufts_33), (void*)L_4);
		int32_t L_5 = ___w2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->___window_34 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_34), (void*)L_6);
		int32_t L_7 = ___w2;
		__this->___end_35 = L_7;
		RuntimeObject* L_8 = ___checkfn1;
		__this->___checkfn_38 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checkfn_38), (void*)L_8);
		__this->___mode_22 = 0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_9 = ___z0;
		InfBlocks_reset_mCF7F8F6D95FA3BA6CB321A23408D19B13D5FF090(__this, L_9, (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)NULL, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::reset(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks_reset_mCF7F8F6D95FA3BA6CB321A23408D19B13D5FF090 (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___c1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___c1;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ___c1;
		int64_t L_2 = __this->___check_39;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int64_t)L_2);
	}

IL_000c:
	{
		int32_t L_3 = __this->___mode_22;
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_4 = __this->___mode_22;
	}

IL_001e:
	{
		int32_t L_5 = __this->___mode_22;
		if ((!(((uint32_t)L_5) == ((uint32_t)6))))
		{
			goto IL_0033;
		}
	}
	{
		InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* L_6 = __this->___codes_29;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_7 = ___z0;
		NullCheck(L_6);
		InfCodes_free_m9DF0F76B38993417A6487CDBC2DE8C56BC4F7448(L_6, L_7, NULL);
	}

IL_0033:
	{
		__this->___mode_22 = 0;
		__this->___bitk_31 = 0;
		__this->___bitb_32 = 0;
		int32_t L_8 = 0;
		V_0 = L_8;
		__this->___write_37 = L_8;
		int32_t L_9 = V_0;
		__this->___read_36 = L_9;
		RuntimeObject* L_10 = __this->___checkfn_38;
		if (!L_10)
		{
			goto IL_007f;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_11 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_12 = ___z0;
		NullCheck(L_12);
		Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* L_13 = L_12->____adler_30;
		NullCheck(L_13);
		int64_t L_14;
		L_14 = Adler32_adler32_m8F1E88AC5C7EB23108FD9110F0D3ADFAD85BB611(L_13, ((int64_t)0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, 0, NULL);
		int64_t L_15 = L_14;
		V_1 = L_15;
		__this->___check_39 = L_15;
		int64_t L_16 = V_1;
		NullCheck(L_11);
		L_11->___adler_29 = L_16;
	}

IL_007f:
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::proc(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfBlocks_proc_mC70327D37A4CBA908F9C618512725C1C2E704EE3 (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, int32_t ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_11 = NULL;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_17 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_18 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_19 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_20 = NULL;
	int32_t G_B3_0 = 0;
	InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* G_B28_0 = NULL;
	InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* G_B25_0 = NULL;
	InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* G_B27_0 = NULL;
	InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* G_B26_0 = NULL;
	int32_t G_B29_0 = 0;
	InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* G_B29_1 = NULL;
	int32_t G_B38_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B48_0 = 0;
	InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* G_B58_0 = NULL;
	InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* G_B57_0 = NULL;
	int32_t G_B59_0 = 0;
	InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* G_B59_1 = NULL;
	int32_t G_B102_0 = 0;
	int32_t G_B105_0 = 0;
	int32_t G_B118_0 = 0;
	int32_t G_B131_0 = 0;
	int32_t G_B137_0 = 0;
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___z0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___next_in_index_18;
		V_3 = L_1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_2 = ___z0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___avail_in_19;
		V_4 = L_3;
		int32_t L_4 = __this->___bitb_32;
		V_1 = L_4;
		int32_t L_5 = __this->___bitk_31;
		V_2 = L_5;
		int32_t L_6 = __this->___write_37;
		V_5 = L_6;
		int32_t L_7 = V_5;
		int32_t L_8 = __this->___read_36;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_9 = __this->___end_35;
		int32_t L_10 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_9, L_10));
		goto IL_0045;
	}

IL_003a:
	{
		int32_t L_11 = __this->___read_36;
		int32_t L_12 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_11, L_12)), 1));
	}

IL_0045:
	{
		V_6 = G_B3_0;
	}

IL_0047:
	{
		int32_t L_13 = __this->___mode_22;
		V_7 = L_13;
		int32_t L_14 = V_7;
		switch (L_14)
		{
			case 0:
			{
				goto IL_00f4;
			}
			case 1:
			{
				goto IL_0292;
			}
			case 2:
			{
				goto IL_0339;
			}
			case 3:
			{
				goto IL_0566;
			}
			case 4:
			{
				goto IL_06f2;
			}
			case 5:
			{
				goto IL_07cd;
			}
			case 6:
			{
				goto IL_0b74;
			}
			case 7:
			{
				goto IL_0c3d;
			}
			case 8:
			{
				goto IL_0cd2;
			}
			case 9:
			{
				goto IL_0d19;
			}
		}
	}
	{
		goto IL_0d61;
	}

IL_0083:
	{
		int32_t L_15 = V_4;
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		___r1 = 0;
		goto IL_00d0;
	}

IL_008c:
	{
		int32_t L_16 = V_1;
		__this->___bitb_32 = L_16;
		int32_t L_17 = V_2;
		__this->___bitk_31 = L_17;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_18 = ___z0;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		L_18->___avail_in_19 = L_19;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_20 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_21 = L_20;
		NullCheck(L_21);
		int64_t L_22 = L_21->___total_in_20;
		int32_t L_23 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_24 = ___z0;
		NullCheck(L_24);
		int32_t L_25 = L_24->___next_in_index_18;
		NullCheck(L_21);
		L_21->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_22, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_23, L_25)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_26 = ___z0;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		L_26->___next_in_index_18 = L_27;
		int32_t L_28 = V_5;
		__this->___write_37 = L_28;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_29 = ___z0;
		int32_t L_30 = ___r1;
		int32_t L_31;
		L_31 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_29, L_30, NULL);
		return L_31;
	}

IL_00d0:
	{
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		int32_t L_33 = V_1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_34 = ___z0;
		NullCheck(L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = L_34->___next_in_17;
		int32_t L_36 = V_3;
		int32_t L_37 = L_36;
		V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		NullCheck(L_35);
		int32_t L_38 = L_37;
		uint8_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		int32_t L_40 = V_2;
		V_1 = ((int32_t)(L_33|((int32_t)(((int32_t)((int32_t)L_39&((int32_t)255)))<<((int32_t)(L_40&((int32_t)31)))))));
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 8));
	}

IL_00f4:
	{
		int32_t L_42 = V_2;
		if ((((int32_t)L_42) < ((int32_t)3)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_43 = V_1;
		V_0 = ((int32_t)(L_43&7));
		int32_t L_44 = V_0;
		__this->___last_30 = ((int32_t)(L_44&1));
		int32_t L_45 = V_0;
		V_8 = ((int32_t)(L_45>>1));
		int32_t L_46 = V_8;
		switch (L_46)
		{
			case 0:
			{
				goto IL_0126;
			}
			case 1:
			{
				goto IL_0149;
			}
			case 2:
			{
				goto IL_01aa;
			}
			case 3:
			{
				goto IL_01be;
			}
		}
	}
	{
		goto IL_0047;
	}

IL_0126:
	{
		int32_t L_47 = V_1;
		V_1 = ((int32_t)(L_47>>3));
		int32_t L_48 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_48, 3));
		int32_t L_49 = V_2;
		V_0 = ((int32_t)(L_49&7));
		int32_t L_50 = V_1;
		int32_t L_51 = V_0;
		V_1 = ((int32_t)(L_50>>((int32_t)(L_51&((int32_t)31)))));
		int32_t L_52 = V_2;
		int32_t L_53 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_52, L_53));
		__this->___mode_22 = 1;
		goto IL_0047;
	}

IL_0149:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_9 = L_54;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_10 = L_55;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_56 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)1);
		V_11 = L_56;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_57 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)1);
		V_12 = L_57;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_10;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_60 = V_11;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_61 = V_12;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_62 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var);
		int32_t L_63;
		L_63 = InfTree_inflate_trees_fixed_mABD9F198FFE57A5BFF990BF3D3CD286030C300CB(L_58, L_59, L_60, L_61, L_62, NULL);
		InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* L_64 = __this->___codes_29;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_9;
		NullCheck(L_65);
		int32_t L_66 = 0;
		int32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = V_10;
		NullCheck(L_68);
		int32_t L_69 = 0;
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_71 = V_11;
		NullCheck(L_71);
		int32_t L_72 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_74 = V_12;
		NullCheck(L_74);
		int32_t L_75 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_77 = ___z0;
		NullCheck(L_64);
		InfCodes_init_m7AA4132CA4E845097A658CA9D6F748AFBA26B4FB(L_64, L_67, L_70, L_73, 0, L_76, 0, L_77, NULL);
		int32_t L_78 = V_1;
		V_1 = ((int32_t)(L_78>>3));
		int32_t L_79 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_79, 3));
		__this->___mode_22 = 6;
		goto IL_0047;
	}

IL_01aa:
	{
		int32_t L_80 = V_1;
		V_1 = ((int32_t)(L_80>>3));
		int32_t L_81 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_81, 3));
		__this->___mode_22 = 3;
		goto IL_0047;
	}

IL_01be:
	{
		int32_t L_82 = V_1;
		V_1 = ((int32_t)(L_82>>3));
		int32_t L_83 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_83, 3));
		__this->___mode_22 = ((int32_t)9);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_84 = ___z0;
		NullCheck(L_84);
		L_84->___msg_25 = _stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06;
		Il2CppCodeGenWriteBarrier((void**)(&L_84->___msg_25), (void*)_stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06);
		___r1 = ((int32_t)-3);
		int32_t L_85 = V_1;
		__this->___bitb_32 = L_85;
		int32_t L_86 = V_2;
		__this->___bitk_31 = L_86;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_87 = ___z0;
		int32_t L_88 = V_4;
		NullCheck(L_87);
		L_87->___avail_in_19 = L_88;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_89 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_90 = L_89;
		NullCheck(L_90);
		int64_t L_91 = L_90->___total_in_20;
		int32_t L_92 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_93 = ___z0;
		NullCheck(L_93);
		int32_t L_94 = L_93->___next_in_index_18;
		NullCheck(L_90);
		L_90->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_91, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_92, L_94)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_95 = ___z0;
		int32_t L_96 = V_3;
		NullCheck(L_95);
		L_95->___next_in_index_18 = L_96;
		int32_t L_97 = V_5;
		__this->___write_37 = L_97;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_98 = ___z0;
		int32_t L_99 = ___r1;
		int32_t L_100;
		L_100 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_98, L_99, NULL);
		return L_100;
	}

IL_0221:
	{
		int32_t L_101 = V_4;
		if (!L_101)
		{
			goto IL_022a;
		}
	}
	{
		___r1 = 0;
		goto IL_026e;
	}

IL_022a:
	{
		int32_t L_102 = V_1;
		__this->___bitb_32 = L_102;
		int32_t L_103 = V_2;
		__this->___bitk_31 = L_103;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_104 = ___z0;
		int32_t L_105 = V_4;
		NullCheck(L_104);
		L_104->___avail_in_19 = L_105;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_106 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_107 = L_106;
		NullCheck(L_107);
		int64_t L_108 = L_107->___total_in_20;
		int32_t L_109 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_110 = ___z0;
		NullCheck(L_110);
		int32_t L_111 = L_110->___next_in_index_18;
		NullCheck(L_107);
		L_107->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_108, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_109, L_111)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_112 = ___z0;
		int32_t L_113 = V_3;
		NullCheck(L_112);
		L_112->___next_in_index_18 = L_113;
		int32_t L_114 = V_5;
		__this->___write_37 = L_114;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_115 = ___z0;
		int32_t L_116 = ___r1;
		int32_t L_117;
		L_117 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_115, L_116, NULL);
		return L_117;
	}

IL_026e:
	{
		int32_t L_118 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_118, 1));
		int32_t L_119 = V_1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_120 = ___z0;
		NullCheck(L_120);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_121 = L_120->___next_in_17;
		int32_t L_122 = V_3;
		int32_t L_123 = L_122;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		NullCheck(L_121);
		int32_t L_124 = L_123;
		uint8_t L_125 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		int32_t L_126 = V_2;
		V_1 = ((int32_t)(L_119|((int32_t)(((int32_t)((int32_t)L_125&((int32_t)255)))<<((int32_t)(L_126&((int32_t)31)))))));
		int32_t L_127 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_127, 8));
	}

IL_0292:
	{
		int32_t L_128 = V_2;
		if ((((int32_t)L_128) < ((int32_t)((int32_t)32))))
		{
			goto IL_0221;
		}
	}
	{
		int32_t L_129 = V_1;
		int32_t L_130 = V_1;
		if ((((int32_t)((int32_t)(((int32_t)(((~L_129))>>((int32_t)16)))&((int32_t)65535)))) == ((int32_t)((int32_t)(L_130&((int32_t)65535))))))
		{
			goto IL_0306;
		}
	}
	{
		__this->___mode_22 = ((int32_t)9);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_131 = ___z0;
		NullCheck(L_131);
		L_131->___msg_25 = _stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113;
		Il2CppCodeGenWriteBarrier((void**)(&L_131->___msg_25), (void*)_stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113);
		___r1 = ((int32_t)-3);
		int32_t L_132 = V_1;
		__this->___bitb_32 = L_132;
		int32_t L_133 = V_2;
		__this->___bitk_31 = L_133;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_134 = ___z0;
		int32_t L_135 = V_4;
		NullCheck(L_134);
		L_134->___avail_in_19 = L_135;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_136 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_137 = L_136;
		NullCheck(L_137);
		int64_t L_138 = L_137->___total_in_20;
		int32_t L_139 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_140 = ___z0;
		NullCheck(L_140);
		int32_t L_141 = L_140->___next_in_index_18;
		NullCheck(L_137);
		L_137->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_138, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_139, L_141)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_142 = ___z0;
		int32_t L_143 = V_3;
		NullCheck(L_142);
		L_142->___next_in_index_18 = L_143;
		int32_t L_144 = V_5;
		__this->___write_37 = L_144;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_145 = ___z0;
		int32_t L_146 = ___r1;
		int32_t L_147;
		L_147 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_145, L_146, NULL);
		return L_147;
	}

IL_0306:
	{
		int32_t L_148 = V_1;
		__this->___left_23 = ((int32_t)(L_148&((int32_t)65535)));
		int32_t L_149 = 0;
		V_2 = L_149;
		V_1 = L_149;
		int32_t L_150 = __this->___left_23;
		G_B25_0 = __this;
		if (L_150)
		{
			G_B28_0 = __this;
			goto IL_032e;
		}
	}
	{
		int32_t L_151 = __this->___last_30;
		G_B26_0 = G_B25_0;
		if (L_151)
		{
			G_B27_0 = G_B25_0;
			goto IL_032b;
		}
	}
	{
		G_B29_0 = 0;
		G_B29_1 = G_B26_0;
		goto IL_032f;
	}

IL_032b:
	{
		G_B29_0 = 7;
		G_B29_1 = G_B27_0;
		goto IL_032f;
	}

IL_032e:
	{
		G_B29_0 = 2;
		G_B29_1 = G_B28_0;
	}

IL_032f:
	{
		NullCheck(G_B29_1);
		G_B29_1->___mode_22 = G_B29_0;
		goto IL_0047;
	}

IL_0339:
	{
		int32_t L_152 = V_4;
		if (L_152)
		{
			goto IL_0381;
		}
	}
	{
		int32_t L_153 = V_1;
		__this->___bitb_32 = L_153;
		int32_t L_154 = V_2;
		__this->___bitk_31 = L_154;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_155 = ___z0;
		int32_t L_156 = V_4;
		NullCheck(L_155);
		L_155->___avail_in_19 = L_156;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_157 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_158 = L_157;
		NullCheck(L_158);
		int64_t L_159 = L_158->___total_in_20;
		int32_t L_160 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_161 = ___z0;
		NullCheck(L_161);
		int32_t L_162 = L_161->___next_in_index_18;
		NullCheck(L_158);
		L_158->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_159, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_160, L_162)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_163 = ___z0;
		int32_t L_164 = V_3;
		NullCheck(L_163);
		L_163->___next_in_index_18 = L_164;
		int32_t L_165 = V_5;
		__this->___write_37 = L_165;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_166 = ___z0;
		int32_t L_167 = ___r1;
		int32_t L_168;
		L_168 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_166, L_167, NULL);
		return L_168;
	}

IL_0381:
	{
		int32_t L_169 = V_6;
		if (L_169)
		{
			goto IL_0481;
		}
	}
	{
		int32_t L_170 = V_5;
		int32_t L_171 = __this->___end_35;
		if ((!(((uint32_t)L_170) == ((uint32_t)L_171))))
		{
			goto IL_03bf;
		}
	}
	{
		int32_t L_172 = __this->___read_36;
		if (!L_172)
		{
			goto IL_03bf;
		}
	}
	{
		V_5 = 0;
		int32_t L_173 = V_5;
		int32_t L_174 = __this->___read_36;
		if ((((int32_t)L_173) < ((int32_t)L_174)))
		{
			goto IL_03b2;
		}
	}
	{
		int32_t L_175 = __this->___end_35;
		int32_t L_176 = V_5;
		G_B38_0 = ((int32_t)il2cpp_codegen_subtract(L_175, L_176));
		goto IL_03bd;
	}

IL_03b2:
	{
		int32_t L_177 = __this->___read_36;
		int32_t L_178 = V_5;
		G_B38_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_177, L_178)), 1));
	}

IL_03bd:
	{
		V_6 = G_B38_0;
	}

IL_03bf:
	{
		int32_t L_179 = V_6;
		if (L_179)
		{
			goto IL_0481;
		}
	}
	{
		int32_t L_180 = V_5;
		__this->___write_37 = L_180;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_181 = ___z0;
		int32_t L_182 = ___r1;
		int32_t L_183;
		L_183 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_181, L_182, NULL);
		___r1 = L_183;
		int32_t L_184 = __this->___write_37;
		V_5 = L_184;
		int32_t L_185 = V_5;
		int32_t L_186 = __this->___read_36;
		if ((((int32_t)L_185) < ((int32_t)L_186)))
		{
			goto IL_03f5;
		}
	}
	{
		int32_t L_187 = __this->___end_35;
		int32_t L_188 = V_5;
		G_B43_0 = ((int32_t)il2cpp_codegen_subtract(L_187, L_188));
		goto IL_0400;
	}

IL_03f5:
	{
		int32_t L_189 = __this->___read_36;
		int32_t L_190 = V_5;
		G_B43_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_189, L_190)), 1));
	}

IL_0400:
	{
		V_6 = G_B43_0;
		int32_t L_191 = V_5;
		int32_t L_192 = __this->___end_35;
		if ((!(((uint32_t)L_191) == ((uint32_t)L_192))))
		{
			goto IL_0439;
		}
	}
	{
		int32_t L_193 = __this->___read_36;
		if (!L_193)
		{
			goto IL_0439;
		}
	}
	{
		V_5 = 0;
		int32_t L_194 = V_5;
		int32_t L_195 = __this->___read_36;
		if ((((int32_t)L_194) < ((int32_t)L_195)))
		{
			goto IL_042c;
		}
	}
	{
		int32_t L_196 = __this->___end_35;
		int32_t L_197 = V_5;
		G_B48_0 = ((int32_t)il2cpp_codegen_subtract(L_196, L_197));
		goto IL_0437;
	}

IL_042c:
	{
		int32_t L_198 = __this->___read_36;
		int32_t L_199 = V_5;
		G_B48_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_198, L_199)), 1));
	}

IL_0437:
	{
		V_6 = G_B48_0;
	}

IL_0439:
	{
		int32_t L_200 = V_6;
		if (L_200)
		{
			goto IL_0481;
		}
	}
	{
		int32_t L_201 = V_1;
		__this->___bitb_32 = L_201;
		int32_t L_202 = V_2;
		__this->___bitk_31 = L_202;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_203 = ___z0;
		int32_t L_204 = V_4;
		NullCheck(L_203);
		L_203->___avail_in_19 = L_204;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_205 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_206 = L_205;
		NullCheck(L_206);
		int64_t L_207 = L_206->___total_in_20;
		int32_t L_208 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_209 = ___z0;
		NullCheck(L_209);
		int32_t L_210 = L_209->___next_in_index_18;
		NullCheck(L_206);
		L_206->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_207, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_208, L_210)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_211 = ___z0;
		int32_t L_212 = V_3;
		NullCheck(L_211);
		L_211->___next_in_index_18 = L_212;
		int32_t L_213 = V_5;
		__this->___write_37 = L_213;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_214 = ___z0;
		int32_t L_215 = ___r1;
		int32_t L_216;
		L_216 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_214, L_215, NULL);
		return L_216;
	}

IL_0481:
	{
		___r1 = 0;
		int32_t L_217 = __this->___left_23;
		V_0 = L_217;
		int32_t L_218 = V_0;
		int32_t L_219 = V_4;
		if ((((int32_t)L_218) <= ((int32_t)L_219)))
		{
			goto IL_0493;
		}
	}
	{
		int32_t L_220 = V_4;
		V_0 = L_220;
	}

IL_0493:
	{
		int32_t L_221 = V_0;
		int32_t L_222 = V_6;
		if ((((int32_t)L_221) <= ((int32_t)L_222)))
		{
			goto IL_049b;
		}
	}
	{
		int32_t L_223 = V_6;
		V_0 = L_223;
	}

IL_049b:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_224 = ___z0;
		NullCheck(L_224);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_225 = L_224->___next_in_17;
		int32_t L_226 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_227 = __this->___window_34;
		int32_t L_228 = V_5;
		int32_t L_229 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_225, L_226, (RuntimeArray*)L_227, L_228, L_229, NULL);
		int32_t L_230 = V_3;
		int32_t L_231 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_230, L_231));
		int32_t L_232 = V_4;
		int32_t L_233 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_232, L_233));
		int32_t L_234 = V_5;
		int32_t L_235 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_add(L_234, L_235));
		int32_t L_236 = V_6;
		int32_t L_237 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_236, L_237));
		int32_t L_238 = __this->___left_23;
		int32_t L_239 = V_0;
		int32_t L_240 = ((int32_t)il2cpp_codegen_subtract(L_238, L_239));
		V_8 = L_240;
		__this->___left_23 = L_240;
		int32_t L_241 = V_8;
		if (L_241)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_242 = __this->___last_30;
		G_B57_0 = __this;
		if (L_242)
		{
			G_B58_0 = __this;
			goto IL_04ea;
		}
	}
	{
		G_B59_0 = 0;
		G_B59_1 = G_B57_0;
		goto IL_04eb;
	}

IL_04ea:
	{
		G_B59_0 = 7;
		G_B59_1 = G_B58_0;
	}

IL_04eb:
	{
		NullCheck(G_B59_1);
		G_B59_1->___mode_22 = G_B59_0;
		goto IL_0047;
	}

IL_04f5:
	{
		int32_t L_243 = V_4;
		if (!L_243)
		{
			goto IL_04fe;
		}
	}
	{
		___r1 = 0;
		goto IL_0542;
	}

IL_04fe:
	{
		int32_t L_244 = V_1;
		__this->___bitb_32 = L_244;
		int32_t L_245 = V_2;
		__this->___bitk_31 = L_245;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_246 = ___z0;
		int32_t L_247 = V_4;
		NullCheck(L_246);
		L_246->___avail_in_19 = L_247;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_248 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_249 = L_248;
		NullCheck(L_249);
		int64_t L_250 = L_249->___total_in_20;
		int32_t L_251 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_252 = ___z0;
		NullCheck(L_252);
		int32_t L_253 = L_252->___next_in_index_18;
		NullCheck(L_249);
		L_249->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_250, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_251, L_253)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_254 = ___z0;
		int32_t L_255 = V_3;
		NullCheck(L_254);
		L_254->___next_in_index_18 = L_255;
		int32_t L_256 = V_5;
		__this->___write_37 = L_256;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_257 = ___z0;
		int32_t L_258 = ___r1;
		int32_t L_259;
		L_259 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_257, L_258, NULL);
		return L_259;
	}

IL_0542:
	{
		int32_t L_260 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_260, 1));
		int32_t L_261 = V_1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_262 = ___z0;
		NullCheck(L_262);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_263 = L_262->___next_in_17;
		int32_t L_264 = V_3;
		int32_t L_265 = L_264;
		V_3 = ((int32_t)il2cpp_codegen_add(L_265, 1));
		NullCheck(L_263);
		int32_t L_266 = L_265;
		uint8_t L_267 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_266));
		int32_t L_268 = V_2;
		V_1 = ((int32_t)(L_261|((int32_t)(((int32_t)((int32_t)L_267&((int32_t)255)))<<((int32_t)(L_268&((int32_t)31)))))));
		int32_t L_269 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_269, 8));
	}

IL_0566:
	{
		int32_t L_270 = V_2;
		if ((((int32_t)L_270) < ((int32_t)((int32_t)14))))
		{
			goto IL_04f5;
		}
	}
	{
		int32_t L_271 = V_1;
		int32_t L_272 = ((int32_t)(L_271&((int32_t)16383)));
		V_0 = L_272;
		__this->___table_24 = L_272;
		int32_t L_273 = V_0;
		if ((((int32_t)((int32_t)(L_273&((int32_t)31)))) > ((int32_t)((int32_t)29))))
		{
			goto IL_058c;
		}
	}
	{
		int32_t L_274 = V_0;
		if ((((int32_t)((int32_t)(((int32_t)(L_274>>5))&((int32_t)31)))) <= ((int32_t)((int32_t)29))))
		{
			goto IL_05e7;
		}
	}

IL_058c:
	{
		__this->___mode_22 = ((int32_t)9);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_275 = ___z0;
		NullCheck(L_275);
		L_275->___msg_25 = _stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43;
		Il2CppCodeGenWriteBarrier((void**)(&L_275->___msg_25), (void*)_stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43);
		___r1 = ((int32_t)-3);
		int32_t L_276 = V_1;
		__this->___bitb_32 = L_276;
		int32_t L_277 = V_2;
		__this->___bitk_31 = L_277;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_278 = ___z0;
		int32_t L_279 = V_4;
		NullCheck(L_278);
		L_278->___avail_in_19 = L_279;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_280 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_281 = L_280;
		NullCheck(L_281);
		int64_t L_282 = L_281->___total_in_20;
		int32_t L_283 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_284 = ___z0;
		NullCheck(L_284);
		int32_t L_285 = L_284->___next_in_index_18;
		NullCheck(L_281);
		L_281->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_282, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_283, L_285)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_286 = ___z0;
		int32_t L_287 = V_3;
		NullCheck(L_286);
		L_286->___next_in_index_18 = L_287;
		int32_t L_288 = V_5;
		__this->___write_37 = L_288;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_289 = ___z0;
		int32_t L_290 = ___r1;
		int32_t L_291;
		L_291 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_289, L_290, NULL);
		return L_291;
	}

IL_05e7:
	{
		int32_t L_292 = V_0;
		int32_t L_293 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)258), ((int32_t)(L_292&((int32_t)31))))), ((int32_t)(((int32_t)(L_293>>5))&((int32_t)31)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_294 = __this->___blens_26;
		if (!L_294)
		{
			goto IL_060c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_295 = __this->___blens_26;
		NullCheck(L_295);
		int32_t L_296 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_295)->max_length))) >= ((int32_t)L_296)))
		{
			goto IL_061a;
		}
	}

IL_060c:
	{
		int32_t L_297 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_298 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_297);
		__this->___blens_26 = L_298;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blens_26), (void*)L_298);
		goto IL_0634;
	}

IL_061a:
	{
		V_13 = 0;
		goto IL_062f;
	}

IL_061f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_299 = __this->___blens_26;
		int32_t L_300 = V_13;
		NullCheck(L_299);
		(L_299)->SetAt(static_cast<il2cpp_array_size_t>(L_300), (int32_t)0);
		int32_t L_301 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_301, 1));
	}

IL_062f:
	{
		int32_t L_302 = V_13;
		int32_t L_303 = V_0;
		if ((((int32_t)L_302) < ((int32_t)L_303)))
		{
			goto IL_061f;
		}
	}

IL_0634:
	{
		int32_t L_304 = V_1;
		V_1 = ((int32_t)(L_304>>((int32_t)14)));
		int32_t L_305 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_305, ((int32_t)14)));
		__this->___index_25 = 0;
		__this->___mode_22 = 4;
		goto IL_06f2;
	}

IL_0651:
	{
		int32_t L_306 = V_4;
		if (!L_306)
		{
			goto IL_065a;
		}
	}
	{
		___r1 = 0;
		goto IL_069e;
	}

IL_065a:
	{
		int32_t L_307 = V_1;
		__this->___bitb_32 = L_307;
		int32_t L_308 = V_2;
		__this->___bitk_31 = L_308;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_309 = ___z0;
		int32_t L_310 = V_4;
		NullCheck(L_309);
		L_309->___avail_in_19 = L_310;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_311 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_312 = L_311;
		NullCheck(L_312);
		int64_t L_313 = L_312->___total_in_20;
		int32_t L_314 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_315 = ___z0;
		NullCheck(L_315);
		int32_t L_316 = L_315->___next_in_index_18;
		NullCheck(L_312);
		L_312->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_313, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_314, L_316)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_317 = ___z0;
		int32_t L_318 = V_3;
		NullCheck(L_317);
		L_317->___next_in_index_18 = L_318;
		int32_t L_319 = V_5;
		__this->___write_37 = L_319;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_320 = ___z0;
		int32_t L_321 = ___r1;
		int32_t L_322;
		L_322 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_320, L_321, NULL);
		return L_322;
	}

IL_069e:
	{
		int32_t L_323 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_323, 1));
		int32_t L_324 = V_1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_325 = ___z0;
		NullCheck(L_325);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_326 = L_325->___next_in_17;
		int32_t L_327 = V_3;
		int32_t L_328 = L_327;
		V_3 = ((int32_t)il2cpp_codegen_add(L_328, 1));
		NullCheck(L_326);
		int32_t L_329 = L_328;
		uint8_t L_330 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		int32_t L_331 = V_2;
		V_1 = ((int32_t)(L_324|((int32_t)(((int32_t)((int32_t)L_330&((int32_t)255)))<<((int32_t)(L_331&((int32_t)31)))))));
		int32_t L_332 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_332, 8));
	}

IL_06c2:
	{
		int32_t L_333 = V_2;
		if ((((int32_t)L_333) < ((int32_t)3)))
		{
			goto IL_0651;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_334 = __this->___blens_26;
		il2cpp_codegen_runtime_class_init_inline(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_335 = ((InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var))->___border_2;
		int32_t L_336 = __this->___index_25;
		V_8 = L_336;
		int32_t L_337 = V_8;
		__this->___index_25 = ((int32_t)il2cpp_codegen_add(L_337, 1));
		int32_t L_338 = V_8;
		NullCheck(L_335);
		int32_t L_339 = L_338;
		int32_t L_340 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		int32_t L_341 = V_1;
		NullCheck(L_334);
		(L_334)->SetAt(static_cast<il2cpp_array_size_t>(L_340), (int32_t)((int32_t)(L_341&7)));
		int32_t L_342 = V_1;
		V_1 = ((int32_t)(L_342>>3));
		int32_t L_343 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_343, 3));
	}

IL_06f2:
	{
		int32_t L_344 = __this->___index_25;
		int32_t L_345 = __this->___table_24;
		if ((((int32_t)L_344) < ((int32_t)((int32_t)il2cpp_codegen_add(4, ((int32_t)(L_345>>((int32_t)10))))))))
		{
			goto IL_06c2;
		}
	}
	{
		goto IL_0729;
	}

IL_0707:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_346 = __this->___blens_26;
		il2cpp_codegen_runtime_class_init_inline(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_347 = ((InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var))->___border_2;
		int32_t L_348 = __this->___index_25;
		V_8 = L_348;
		int32_t L_349 = V_8;
		__this->___index_25 = ((int32_t)il2cpp_codegen_add(L_349, 1));
		int32_t L_350 = V_8;
		NullCheck(L_347);
		int32_t L_351 = L_350;
		int32_t L_352 = (L_347)->GetAt(static_cast<il2cpp_array_size_t>(L_351));
		NullCheck(L_346);
		(L_346)->SetAt(static_cast<il2cpp_array_size_t>(L_352), (int32_t)0);
	}

IL_0729:
	{
		int32_t L_353 = __this->___index_25;
		if ((((int32_t)L_353) < ((int32_t)((int32_t)19))))
		{
			goto IL_0707;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_354 = __this->___bb_27;
		NullCheck(L_354);
		(L_354)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)7);
		InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* L_355 = __this->___inftree_40;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_356 = __this->___blens_26;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_357 = __this->___bb_27;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_358 = __this->___tb_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_359 = __this->___hufts_33;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_360 = ___z0;
		NullCheck(L_355);
		int32_t L_361;
		L_361 = InfTree_inflate_trees_bits_m659600B74B72360544490963A5775F76347094F1(L_355, L_356, L_357, L_358, L_359, L_360, NULL);
		V_0 = L_361;
		int32_t L_362 = V_0;
		if (!L_362)
		{
			goto IL_07bf;
		}
	}
	{
		int32_t L_363 = V_0;
		___r1 = L_363;
		int32_t L_364 = ___r1;
		if ((!(((uint32_t)L_364) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_077b;
		}
	}
	{
		__this->___blens_26 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blens_26), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->___mode_22 = ((int32_t)9);
	}

IL_077b:
	{
		int32_t L_365 = V_1;
		__this->___bitb_32 = L_365;
		int32_t L_366 = V_2;
		__this->___bitk_31 = L_366;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_367 = ___z0;
		int32_t L_368 = V_4;
		NullCheck(L_367);
		L_367->___avail_in_19 = L_368;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_369 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_370 = L_369;
		NullCheck(L_370);
		int64_t L_371 = L_370->___total_in_20;
		int32_t L_372 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_373 = ___z0;
		NullCheck(L_373);
		int32_t L_374 = L_373->___next_in_index_18;
		NullCheck(L_370);
		L_370->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_371, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_372, L_374)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_375 = ___z0;
		int32_t L_376 = V_3;
		NullCheck(L_375);
		L_375->___next_in_index_18 = L_376;
		int32_t L_377 = V_5;
		__this->___write_37 = L_377;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_378 = ___z0;
		int32_t L_379 = ___r1;
		int32_t L_380;
		L_380 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_378, L_379, NULL);
		return L_380;
	}

IL_07bf:
	{
		__this->___index_25 = 0;
		__this->___mode_22 = 5;
	}

IL_07cd:
	{
		int32_t L_381 = __this->___table_24;
		V_0 = L_381;
		int32_t L_382 = __this->___index_25;
		int32_t L_383 = V_0;
		int32_t L_384 = V_0;
		if ((((int32_t)L_382) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)258), ((int32_t)(L_383&((int32_t)31))))), ((int32_t)(((int32_t)(L_384>>5))&((int32_t)31))))))))
		{
			goto IL_0a79;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_385 = __this->___bb_27;
		NullCheck(L_385);
		int32_t L_386 = 0;
		int32_t L_387 = (L_385)->GetAt(static_cast<il2cpp_array_size_t>(L_386));
		V_0 = L_387;
		goto IL_086c;
	}

IL_07fb:
	{
		int32_t L_388 = V_4;
		if (!L_388)
		{
			goto IL_0804;
		}
	}
	{
		___r1 = 0;
		goto IL_0848;
	}

IL_0804:
	{
		int32_t L_389 = V_1;
		__this->___bitb_32 = L_389;
		int32_t L_390 = V_2;
		__this->___bitk_31 = L_390;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_391 = ___z0;
		int32_t L_392 = V_4;
		NullCheck(L_391);
		L_391->___avail_in_19 = L_392;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_393 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_394 = L_393;
		NullCheck(L_394);
		int64_t L_395 = L_394->___total_in_20;
		int32_t L_396 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_397 = ___z0;
		NullCheck(L_397);
		int32_t L_398 = L_397->___next_in_index_18;
		NullCheck(L_394);
		L_394->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_395, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_396, L_398)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_399 = ___z0;
		int32_t L_400 = V_3;
		NullCheck(L_399);
		L_399->___next_in_index_18 = L_400;
		int32_t L_401 = V_5;
		__this->___write_37 = L_401;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_402 = ___z0;
		int32_t L_403 = ___r1;
		int32_t L_404;
		L_404 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_402, L_403, NULL);
		return L_404;
	}

IL_0848:
	{
		int32_t L_405 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_405, 1));
		int32_t L_406 = V_1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_407 = ___z0;
		NullCheck(L_407);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_408 = L_407->___next_in_17;
		int32_t L_409 = V_3;
		int32_t L_410 = L_409;
		V_3 = ((int32_t)il2cpp_codegen_add(L_410, 1));
		NullCheck(L_408);
		int32_t L_411 = L_410;
		uint8_t L_412 = (L_408)->GetAt(static_cast<il2cpp_array_size_t>(L_411));
		int32_t L_413 = V_2;
		V_1 = ((int32_t)(L_406|((int32_t)(((int32_t)((int32_t)L_412&((int32_t)255)))<<((int32_t)(L_413&((int32_t)31)))))));
		int32_t L_414 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_414, 8));
	}

IL_086c:
	{
		int32_t L_415 = V_2;
		int32_t L_416 = V_0;
		if ((((int32_t)L_415) < ((int32_t)L_416)))
		{
			goto IL_07fb;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_417 = __this->___tb_28;
		NullCheck(L_417);
		int32_t L_418 = 0;
		int32_t L_419 = (L_417)->GetAt(static_cast<il2cpp_array_size_t>(L_418));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_420 = __this->___hufts_33;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_421 = __this->___tb_28;
		NullCheck(L_421);
		int32_t L_422 = 0;
		int32_t L_423 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_422));
		int32_t L_424 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_425 = ((InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var))->___inflate_mask_1;
		int32_t L_426 = V_0;
		NullCheck(L_425);
		int32_t L_427 = L_426;
		int32_t L_428 = (L_425)->GetAt(static_cast<il2cpp_array_size_t>(L_427));
		NullCheck(L_420);
		int32_t L_429 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_423, ((int32_t)(L_424&L_428)))), 3)), 1));
		int32_t L_430 = (L_420)->GetAt(static_cast<il2cpp_array_size_t>(L_429));
		V_0 = L_430;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_431 = __this->___hufts_33;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = __this->___tb_28;
		NullCheck(L_432);
		int32_t L_433 = 0;
		int32_t L_434 = (L_432)->GetAt(static_cast<il2cpp_array_size_t>(L_433));
		int32_t L_435 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_436 = ((InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var))->___inflate_mask_1;
		int32_t L_437 = V_0;
		NullCheck(L_436);
		int32_t L_438 = L_437;
		int32_t L_439 = (L_436)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
		NullCheck(L_431);
		int32_t L_440 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_434, ((int32_t)(L_435&L_439)))), 3)), 2));
		int32_t L_441 = (L_431)->GetAt(static_cast<il2cpp_array_size_t>(L_440));
		V_16 = L_441;
		int32_t L_442 = V_16;
		if ((((int32_t)L_442) >= ((int32_t)((int32_t)16))))
		{
			goto IL_08eb;
		}
	}
	{
		int32_t L_443 = V_1;
		int32_t L_444 = V_0;
		V_1 = ((int32_t)(L_443>>((int32_t)(L_444&((int32_t)31)))));
		int32_t L_445 = V_2;
		int32_t L_446 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_445, L_446));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_447 = __this->___blens_26;
		int32_t L_448 = __this->___index_25;
		V_8 = L_448;
		int32_t L_449 = V_8;
		__this->___index_25 = ((int32_t)il2cpp_codegen_add(L_449, 1));
		int32_t L_450 = V_8;
		int32_t L_451 = V_16;
		NullCheck(L_447);
		(L_447)->SetAt(static_cast<il2cpp_array_size_t>(L_450), (int32_t)L_451);
		goto IL_07cd;
	}

IL_08eb:
	{
		int32_t L_452 = V_16;
		if ((((int32_t)L_452) == ((int32_t)((int32_t)18))))
		{
			goto IL_08f8;
		}
	}
	{
		int32_t L_453 = V_16;
		G_B102_0 = ((int32_t)il2cpp_codegen_subtract(L_453, ((int32_t)14)));
		goto IL_08f9;
	}

IL_08f8:
	{
		G_B102_0 = 7;
	}

IL_08f9:
	{
		V_14 = G_B102_0;
		int32_t L_454 = V_16;
		if ((((int32_t)L_454) == ((int32_t)((int32_t)18))))
		{
			goto IL_0904;
		}
	}
	{
		G_B105_0 = 3;
		goto IL_0906;
	}

IL_0904:
	{
		G_B105_0 = ((int32_t)11);
	}

IL_0906:
	{
		V_15 = G_B105_0;
		goto IL_097b;
	}

IL_090a:
	{
		int32_t L_455 = V_4;
		if (!L_455)
		{
			goto IL_0913;
		}
	}
	{
		___r1 = 0;
		goto IL_0957;
	}

IL_0913:
	{
		int32_t L_456 = V_1;
		__this->___bitb_32 = L_456;
		int32_t L_457 = V_2;
		__this->___bitk_31 = L_457;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_458 = ___z0;
		int32_t L_459 = V_4;
		NullCheck(L_458);
		L_458->___avail_in_19 = L_459;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_460 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_461 = L_460;
		NullCheck(L_461);
		int64_t L_462 = L_461->___total_in_20;
		int32_t L_463 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_464 = ___z0;
		NullCheck(L_464);
		int32_t L_465 = L_464->___next_in_index_18;
		NullCheck(L_461);
		L_461->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_462, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_463, L_465)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_466 = ___z0;
		int32_t L_467 = V_3;
		NullCheck(L_466);
		L_466->___next_in_index_18 = L_467;
		int32_t L_468 = V_5;
		__this->___write_37 = L_468;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_469 = ___z0;
		int32_t L_470 = ___r1;
		int32_t L_471;
		L_471 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_469, L_470, NULL);
		return L_471;
	}

IL_0957:
	{
		int32_t L_472 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_472, 1));
		int32_t L_473 = V_1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_474 = ___z0;
		NullCheck(L_474);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_475 = L_474->___next_in_17;
		int32_t L_476 = V_3;
		int32_t L_477 = L_476;
		V_3 = ((int32_t)il2cpp_codegen_add(L_477, 1));
		NullCheck(L_475);
		int32_t L_478 = L_477;
		uint8_t L_479 = (L_475)->GetAt(static_cast<il2cpp_array_size_t>(L_478));
		int32_t L_480 = V_2;
		V_1 = ((int32_t)(L_473|((int32_t)(((int32_t)((int32_t)L_479&((int32_t)255)))<<((int32_t)(L_480&((int32_t)31)))))));
		int32_t L_481 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_481, 8));
	}

IL_097b:
	{
		int32_t L_482 = V_2;
		int32_t L_483 = V_0;
		int32_t L_484 = V_14;
		if ((((int32_t)L_482) < ((int32_t)((int32_t)il2cpp_codegen_add(L_483, L_484)))))
		{
			goto IL_090a;
		}
	}
	{
		int32_t L_485 = V_1;
		int32_t L_486 = V_0;
		V_1 = ((int32_t)(L_485>>((int32_t)(L_486&((int32_t)31)))));
		int32_t L_487 = V_2;
		int32_t L_488 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_487, L_488));
		int32_t L_489 = V_15;
		int32_t L_490 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_491 = ((InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var))->___inflate_mask_1;
		int32_t L_492 = V_14;
		NullCheck(L_491);
		int32_t L_493 = L_492;
		int32_t L_494 = (L_491)->GetAt(static_cast<il2cpp_array_size_t>(L_493));
		V_15 = ((int32_t)il2cpp_codegen_add(L_489, ((int32_t)(L_490&L_494))));
		int32_t L_495 = V_1;
		int32_t L_496 = V_14;
		V_1 = ((int32_t)(L_495>>((int32_t)(L_496&((int32_t)31)))));
		int32_t L_497 = V_2;
		int32_t L_498 = V_14;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_497, L_498));
		int32_t L_499 = __this->___index_25;
		V_14 = L_499;
		int32_t L_500 = __this->___table_24;
		V_0 = L_500;
		int32_t L_501 = V_14;
		int32_t L_502 = V_15;
		int32_t L_503 = V_0;
		int32_t L_504 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_501, L_502))) > ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)258), ((int32_t)(L_503&((int32_t)31))))), ((int32_t)(((int32_t)(L_504>>5))&((int32_t)31))))))))
		{
			goto IL_09db;
		}
	}
	{
		int32_t L_505 = V_16;
		if ((!(((uint32_t)L_505) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0a3d;
		}
	}
	{
		int32_t L_506 = V_14;
		if ((((int32_t)L_506) >= ((int32_t)1)))
		{
			goto IL_0a3d;
		}
	}

IL_09db:
	{
		__this->___blens_26 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blens_26), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->___mode_22 = ((int32_t)9);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_507 = ___z0;
		NullCheck(L_507);
		L_507->___msg_25 = _stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384;
		Il2CppCodeGenWriteBarrier((void**)(&L_507->___msg_25), (void*)_stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384);
		___r1 = ((int32_t)-3);
		int32_t L_508 = V_1;
		__this->___bitb_32 = L_508;
		int32_t L_509 = V_2;
		__this->___bitk_31 = L_509;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_510 = ___z0;
		int32_t L_511 = V_4;
		NullCheck(L_510);
		L_510->___avail_in_19 = L_511;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_512 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_513 = L_512;
		NullCheck(L_513);
		int64_t L_514 = L_513->___total_in_20;
		int32_t L_515 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_516 = ___z0;
		NullCheck(L_516);
		int32_t L_517 = L_516->___next_in_index_18;
		NullCheck(L_513);
		L_513->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_514, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_515, L_517)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_518 = ___z0;
		int32_t L_519 = V_3;
		NullCheck(L_518);
		L_518->___next_in_index_18 = L_519;
		int32_t L_520 = V_5;
		__this->___write_37 = L_520;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_521 = ___z0;
		int32_t L_522 = ___r1;
		int32_t L_523;
		L_523 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_521, L_522, NULL);
		return L_523;
	}

IL_0a3d:
	{
		int32_t L_524 = V_16;
		if ((((int32_t)L_524) == ((int32_t)((int32_t)16))))
		{
			goto IL_0a46;
		}
	}
	{
		G_B118_0 = 0;
		goto IL_0a51;
	}

IL_0a46:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_525 = __this->___blens_26;
		int32_t L_526 = V_14;
		NullCheck(L_525);
		int32_t L_527 = ((int32_t)il2cpp_codegen_subtract(L_526, 1));
		int32_t L_528 = (L_525)->GetAt(static_cast<il2cpp_array_size_t>(L_527));
		G_B118_0 = L_528;
	}

IL_0a51:
	{
		V_16 = G_B118_0;
	}

IL_0a53:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = __this->___blens_26;
		int32_t L_530 = V_14;
		int32_t L_531 = L_530;
		V_14 = ((int32_t)il2cpp_codegen_add(L_531, 1));
		int32_t L_532 = V_16;
		NullCheck(L_529);
		(L_529)->SetAt(static_cast<il2cpp_array_size_t>(L_531), (int32_t)L_532);
		int32_t L_533 = V_15;
		int32_t L_534 = ((int32_t)il2cpp_codegen_subtract(L_533, 1));
		V_15 = L_534;
		if (L_534)
		{
			goto IL_0a53;
		}
	}
	{
		int32_t L_535 = V_14;
		__this->___index_25 = L_535;
		goto IL_07cd;
	}

IL_0a79:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_536 = __this->___tb_28;
		NullCheck(L_536);
		(L_536)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_537 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_17 = L_537;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_538 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_18 = L_538;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_539 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_19 = L_539;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_540 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_20 = L_540;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = V_17;
		NullCheck(L_541);
		(L_541)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_542 = V_18;
		NullCheck(L_542);
		(L_542)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)6);
		int32_t L_543 = __this->___table_24;
		V_0 = L_543;
		InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* L_544 = __this->___inftree_40;
		int32_t L_545 = V_0;
		int32_t L_546 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_547 = __this->___blens_26;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_548 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_549 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_550 = V_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_551 = V_20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_552 = __this->___hufts_33;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_553 = ___z0;
		NullCheck(L_544);
		int32_t L_554;
		L_554 = InfTree_inflate_trees_dynamic_m05C92EFBBFF721B38E5E04FB6D0421C36A3094B1(L_544, ((int32_t)il2cpp_codegen_add(((int32_t)257), ((int32_t)(L_545&((int32_t)31))))), ((int32_t)il2cpp_codegen_add(1, ((int32_t)(((int32_t)(L_546>>5))&((int32_t)31))))), L_547, L_548, L_549, L_550, L_551, L_552, L_553, NULL);
		V_0 = L_554;
		int32_t L_555 = V_0;
		if (!L_555)
		{
			goto IL_0b45;
		}
	}
	{
		int32_t L_556 = V_0;
		if ((!(((uint32_t)L_556) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0afe;
		}
	}
	{
		__this->___blens_26 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blens_26), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->___mode_22 = ((int32_t)9);
	}

IL_0afe:
	{
		int32_t L_557 = V_0;
		___r1 = L_557;
		int32_t L_558 = V_1;
		__this->___bitb_32 = L_558;
		int32_t L_559 = V_2;
		__this->___bitk_31 = L_559;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_560 = ___z0;
		int32_t L_561 = V_4;
		NullCheck(L_560);
		L_560->___avail_in_19 = L_561;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_562 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_563 = L_562;
		NullCheck(L_563);
		int64_t L_564 = L_563->___total_in_20;
		int32_t L_565 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_566 = ___z0;
		NullCheck(L_566);
		int32_t L_567 = L_566->___next_in_index_18;
		NullCheck(L_563);
		L_563->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_564, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_565, L_567)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_568 = ___z0;
		int32_t L_569 = V_3;
		NullCheck(L_568);
		L_568->___next_in_index_18 = L_569;
		int32_t L_570 = V_5;
		__this->___write_37 = L_570;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_571 = ___z0;
		int32_t L_572 = ___r1;
		int32_t L_573;
		L_573 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_571, L_572, NULL);
		return L_573;
	}

IL_0b45:
	{
		InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* L_574 = __this->___codes_29;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_575 = V_17;
		NullCheck(L_575);
		int32_t L_576 = 0;
		int32_t L_577 = (L_575)->GetAt(static_cast<il2cpp_array_size_t>(L_576));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_578 = V_18;
		NullCheck(L_578);
		int32_t L_579 = 0;
		int32_t L_580 = (L_578)->GetAt(static_cast<il2cpp_array_size_t>(L_579));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = __this->___hufts_33;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_582 = V_19;
		NullCheck(L_582);
		int32_t L_583 = 0;
		int32_t L_584 = (L_582)->GetAt(static_cast<il2cpp_array_size_t>(L_583));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_585 = __this->___hufts_33;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_586 = V_20;
		NullCheck(L_586);
		int32_t L_587 = 0;
		int32_t L_588 = (L_586)->GetAt(static_cast<il2cpp_array_size_t>(L_587));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_589 = ___z0;
		NullCheck(L_574);
		InfCodes_init_m7AA4132CA4E845097A658CA9D6F748AFBA26B4FB(L_574, L_577, L_580, L_581, L_584, L_585, L_588, L_589, NULL);
		__this->___mode_22 = 6;
	}

IL_0b74:
	{
		int32_t L_590 = V_1;
		__this->___bitb_32 = L_590;
		int32_t L_591 = V_2;
		__this->___bitk_31 = L_591;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_592 = ___z0;
		int32_t L_593 = V_4;
		NullCheck(L_592);
		L_592->___avail_in_19 = L_593;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_594 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_595 = L_594;
		NullCheck(L_595);
		int64_t L_596 = L_595->___total_in_20;
		int32_t L_597 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_598 = ___z0;
		NullCheck(L_598);
		int32_t L_599 = L_598->___next_in_index_18;
		NullCheck(L_595);
		L_595->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_596, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_597, L_599)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_600 = ___z0;
		int32_t L_601 = V_3;
		NullCheck(L_600);
		L_600->___next_in_index_18 = L_601;
		int32_t L_602 = V_5;
		__this->___write_37 = L_602;
		InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* L_603 = __this->___codes_29;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_604 = ___z0;
		int32_t L_605 = ___r1;
		NullCheck(L_603);
		int32_t L_606;
		L_606 = InfCodes_proc_m72239D31140A6B42DCF0A5C5380C8ECAC3E66F49(L_603, __this, L_604, L_605, NULL);
		int32_t L_607 = L_606;
		___r1 = L_607;
		if ((((int32_t)L_607) == ((int32_t)1)))
		{
			goto IL_0bcc;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_608 = ___z0;
		int32_t L_609 = ___r1;
		int32_t L_610;
		L_610 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_608, L_609, NULL);
		return L_610;
	}

IL_0bcc:
	{
		___r1 = 0;
		InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* L_611 = __this->___codes_29;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_612 = ___z0;
		NullCheck(L_611);
		InfCodes_free_m9DF0F76B38993417A6487CDBC2DE8C56BC4F7448(L_611, L_612, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_613 = ___z0;
		NullCheck(L_613);
		int32_t L_614 = L_613->___next_in_index_18;
		V_3 = L_614;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_615 = ___z0;
		NullCheck(L_615);
		int32_t L_616 = L_615->___avail_in_19;
		V_4 = L_616;
		int32_t L_617 = __this->___bitb_32;
		V_1 = L_617;
		int32_t L_618 = __this->___bitk_31;
		V_2 = L_618;
		int32_t L_619 = __this->___write_37;
		V_5 = L_619;
		int32_t L_620 = V_5;
		int32_t L_621 = __this->___read_36;
		if ((((int32_t)L_620) < ((int32_t)L_621)))
		{
			goto IL_0c15;
		}
	}
	{
		int32_t L_622 = __this->___end_35;
		int32_t L_623 = V_5;
		G_B131_0 = ((int32_t)il2cpp_codegen_subtract(L_622, L_623));
		goto IL_0c20;
	}

IL_0c15:
	{
		int32_t L_624 = __this->___read_36;
		int32_t L_625 = V_5;
		G_B131_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_624, L_625)), 1));
	}

IL_0c20:
	{
		V_6 = G_B131_0;
		int32_t L_626 = __this->___last_30;
		if (L_626)
		{
			goto IL_0c36;
		}
	}
	{
		__this->___mode_22 = 0;
		goto IL_0047;
	}

IL_0c36:
	{
		__this->___mode_22 = 7;
	}

IL_0c3d:
	{
		int32_t L_627 = V_5;
		__this->___write_37 = L_627;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_628 = ___z0;
		int32_t L_629 = ___r1;
		int32_t L_630;
		L_630 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_628, L_629, NULL);
		___r1 = L_630;
		int32_t L_631 = __this->___write_37;
		V_5 = L_631;
		int32_t L_632 = V_5;
		int32_t L_633 = __this->___read_36;
		if ((((int32_t)L_632) < ((int32_t)L_633)))
		{
			goto IL_0c6c;
		}
	}
	{
		int32_t L_634 = __this->___end_35;
		int32_t L_635 = V_5;
		G_B137_0 = ((int32_t)il2cpp_codegen_subtract(L_634, L_635));
		goto IL_0c77;
	}

IL_0c6c:
	{
		int32_t L_636 = __this->___read_36;
		int32_t L_637 = V_5;
		G_B137_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_636, L_637)), 1));
	}

IL_0c77:
	{
		V_6 = G_B137_0;
		int32_t L_638 = __this->___read_36;
		int32_t L_639 = __this->___write_37;
		if ((((int32_t)L_638) == ((int32_t)L_639)))
		{
			goto IL_0ccb;
		}
	}
	{
		int32_t L_640 = V_1;
		__this->___bitb_32 = L_640;
		int32_t L_641 = V_2;
		__this->___bitk_31 = L_641;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_642 = ___z0;
		int32_t L_643 = V_4;
		NullCheck(L_642);
		L_642->___avail_in_19 = L_643;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_644 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_645 = L_644;
		NullCheck(L_645);
		int64_t L_646 = L_645->___total_in_20;
		int32_t L_647 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_648 = ___z0;
		NullCheck(L_648);
		int32_t L_649 = L_648->___next_in_index_18;
		NullCheck(L_645);
		L_645->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_646, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_647, L_649)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_650 = ___z0;
		int32_t L_651 = V_3;
		NullCheck(L_650);
		L_650->___next_in_index_18 = L_651;
		int32_t L_652 = V_5;
		__this->___write_37 = L_652;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_653 = ___z0;
		int32_t L_654 = ___r1;
		int32_t L_655;
		L_655 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_653, L_654, NULL);
		return L_655;
	}

IL_0ccb:
	{
		__this->___mode_22 = 8;
	}

IL_0cd2:
	{
		___r1 = 1;
		int32_t L_656 = V_1;
		__this->___bitb_32 = L_656;
		int32_t L_657 = V_2;
		__this->___bitk_31 = L_657;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_658 = ___z0;
		int32_t L_659 = V_4;
		NullCheck(L_658);
		L_658->___avail_in_19 = L_659;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_660 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_661 = L_660;
		NullCheck(L_661);
		int64_t L_662 = L_661->___total_in_20;
		int32_t L_663 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_664 = ___z0;
		NullCheck(L_664);
		int32_t L_665 = L_664->___next_in_index_18;
		NullCheck(L_661);
		L_661->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_662, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_663, L_665)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_666 = ___z0;
		int32_t L_667 = V_3;
		NullCheck(L_666);
		L_666->___next_in_index_18 = L_667;
		int32_t L_668 = V_5;
		__this->___write_37 = L_668;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_669 = ___z0;
		int32_t L_670 = ___r1;
		int32_t L_671;
		L_671 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_669, L_670, NULL);
		return L_671;
	}

IL_0d19:
	{
		___r1 = ((int32_t)-3);
		int32_t L_672 = V_1;
		__this->___bitb_32 = L_672;
		int32_t L_673 = V_2;
		__this->___bitk_31 = L_673;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_674 = ___z0;
		int32_t L_675 = V_4;
		NullCheck(L_674);
		L_674->___avail_in_19 = L_675;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_676 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_677 = L_676;
		NullCheck(L_677);
		int64_t L_678 = L_677->___total_in_20;
		int32_t L_679 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_680 = ___z0;
		NullCheck(L_680);
		int32_t L_681 = L_680->___next_in_index_18;
		NullCheck(L_677);
		L_677->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_678, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_679, L_681)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_682 = ___z0;
		int32_t L_683 = V_3;
		NullCheck(L_682);
		L_682->___next_in_index_18 = L_683;
		int32_t L_684 = V_5;
		__this->___write_37 = L_684;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_685 = ___z0;
		int32_t L_686 = ___r1;
		int32_t L_687;
		L_687 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_685, L_686, NULL);
		return L_687;
	}

IL_0d61:
	{
		___r1 = ((int32_t)-2);
		int32_t L_688 = V_1;
		__this->___bitb_32 = L_688;
		int32_t L_689 = V_2;
		__this->___bitk_31 = L_689;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_690 = ___z0;
		int32_t L_691 = V_4;
		NullCheck(L_690);
		L_690->___avail_in_19 = L_691;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_692 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_693 = L_692;
		NullCheck(L_693);
		int64_t L_694 = L_693->___total_in_20;
		int32_t L_695 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_696 = ___z0;
		NullCheck(L_696);
		int32_t L_697 = L_696->___next_in_index_18;
		NullCheck(L_693);
		L_693->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_694, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_695, L_697)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_698 = ___z0;
		int32_t L_699 = V_3;
		NullCheck(L_698);
		L_698->___next_in_index_18 = L_699;
		int32_t L_700 = V_5;
		__this->___write_37 = L_700;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_701 = ___z0;
		int32_t L_702 = ___r1;
		int32_t L_703;
		L_703 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(__this, L_701, L_702, NULL);
		return L_703;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::free(Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks_free_mA1E3C82DCF66642EB72A346E558CD50FEA4389F1 (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, const RuntimeMethod* method) 
{
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___z0;
		InfBlocks_reset_mCF7F8F6D95FA3BA6CB321A23408D19B13D5FF090(__this, L_0, (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)NULL, NULL);
		__this->___window_34 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_34), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___hufts_33 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hufts_33), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::set_dictionary(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks_set_dictionary_m5C32A9D05ABD12D38FDF443AC44F22D88C8517AE (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___d0, int32_t ___start1, int32_t ___n2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___d0;
		int32_t L_1 = ___start1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___window_34;
		int32_t L_3 = ___n2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, 0, L_3, NULL);
		int32_t L_4 = ___n2;
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->___write_37 = L_5;
		int32_t L_6 = V_0;
		__this->___read_36 = L_6;
		return;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::sync_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfBlocks_sync_point_mC629829A89E65C3F67BA2B57B3144B8C37FC04CB (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mode_22;
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfBlocks::inflate_flush(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, int32_t ___r1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t G_B3_0 = 0;
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___z0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___next_out_index_22;
		V_1 = L_1;
		int32_t L_2 = __this->___read_36;
		V_2 = L_2;
		int32_t L_3 = V_2;
		int32_t L_4 = __this->___write_37;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_5 = __this->___end_35;
		G_B3_0 = L_5;
		goto IL_0025;
	}

IL_001f:
	{
		int32_t L_6 = __this->___write_37;
		G_B3_0 = L_6;
	}

IL_0025:
	{
		int32_t L_7 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(G_B3_0, L_7));
		int32_t L_8 = V_0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_9 = ___z0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___avail_out_23;
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0038;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_11 = ___z0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___avail_out_23;
		V_0 = L_12;
	}

IL_0038:
	{
		int32_t L_13 = V_0;
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_14 = ___r1;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_0043;
		}
	}
	{
		___r1 = 0;
	}

IL_0043:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_15 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17 = L_16->___avail_out_23;
		int32_t L_18 = V_0;
		NullCheck(L_16);
		L_16->___avail_out_23 = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_19 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_20 = L_19;
		NullCheck(L_20);
		int64_t L_21 = L_20->___total_out_24;
		int32_t L_22 = V_0;
		NullCheck(L_20);
		L_20->___total_out_24 = ((int64_t)il2cpp_codegen_add(L_21, ((int64_t)L_22)));
		RuntimeObject* L_23 = __this->___checkfn_38;
		if (!L_23)
		{
			goto IL_0090;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_24 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_25 = ___z0;
		NullCheck(L_25);
		Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* L_26 = L_25->____adler_30;
		int64_t L_27 = __this->___check_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___window_34;
		int32_t L_29 = V_2;
		int32_t L_30 = V_0;
		NullCheck(L_26);
		int64_t L_31;
		L_31 = Adler32_adler32_m8F1E88AC5C7EB23108FD9110F0D3ADFAD85BB611(L_26, L_27, L_28, L_29, L_30, NULL);
		int64_t L_32 = L_31;
		V_3 = L_32;
		__this->___check_39 = L_32;
		int64_t L_33 = V_3;
		NullCheck(L_24);
		L_24->___adler_29 = L_33;
	}

IL_0090:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___window_34;
		int32_t L_35 = V_2;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_36 = ___z0;
		NullCheck(L_36);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = L_36->___next_out_21;
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_34, L_35, (RuntimeArray*)L_37, L_38, L_39, NULL);
		int32_t L_40 = V_1;
		int32_t L_41 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_40, L_41));
		int32_t L_42 = V_2;
		int32_t L_43 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		int32_t L_44 = V_2;
		int32_t L_45 = __this->___end_35;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_015c;
		}
	}
	{
		V_2 = 0;
		int32_t L_46 = __this->___write_37;
		int32_t L_47 = __this->___end_35;
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_00cf;
		}
	}
	{
		__this->___write_37 = 0;
	}

IL_00cf:
	{
		int32_t L_48 = __this->___write_37;
		int32_t L_49 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_48, L_49));
		int32_t L_50 = V_0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_51 = ___z0;
		NullCheck(L_51);
		int32_t L_52 = L_51->___avail_out_23;
		if ((((int32_t)L_50) <= ((int32_t)L_52)))
		{
			goto IL_00e8;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_53 = ___z0;
		NullCheck(L_53);
		int32_t L_54 = L_53->___avail_out_23;
		V_0 = L_54;
	}

IL_00e8:
	{
		int32_t L_55 = V_0;
		if (!L_55)
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_56 = ___r1;
		if ((!(((uint32_t)L_56) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_00f3;
		}
	}
	{
		___r1 = 0;
	}

IL_00f3:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_57 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_58 = L_57;
		NullCheck(L_58);
		int32_t L_59 = L_58->___avail_out_23;
		int32_t L_60 = V_0;
		NullCheck(L_58);
		L_58->___avail_out_23 = ((int32_t)il2cpp_codegen_subtract(L_59, L_60));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_61 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_62 = L_61;
		NullCheck(L_62);
		int64_t L_63 = L_62->___total_out_24;
		int32_t L_64 = V_0;
		NullCheck(L_62);
		L_62->___total_out_24 = ((int64_t)il2cpp_codegen_add(L_63, ((int64_t)L_64)));
		RuntimeObject* L_65 = __this->___checkfn_38;
		if (!L_65)
		{
			goto IL_0140;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_66 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_67 = ___z0;
		NullCheck(L_67);
		Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* L_68 = L_67->____adler_30;
		int64_t L_69 = __this->___check_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = __this->___window_34;
		int32_t L_71 = V_2;
		int32_t L_72 = V_0;
		NullCheck(L_68);
		int64_t L_73;
		L_73 = Adler32_adler32_m8F1E88AC5C7EB23108FD9110F0D3ADFAD85BB611(L_68, L_69, L_70, L_71, L_72, NULL);
		int64_t L_74 = L_73;
		V_3 = L_74;
		__this->___check_39 = L_74;
		int64_t L_75 = V_3;
		NullCheck(L_66);
		L_66->___adler_29 = L_75;
	}

IL_0140:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = __this->___window_34;
		int32_t L_77 = V_2;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_78 = ___z0;
		NullCheck(L_78);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = L_78->___next_out_21;
		int32_t L_80 = V_1;
		int32_t L_81 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_76, L_77, (RuntimeArray*)L_79, L_80, L_81, NULL);
		int32_t L_82 = V_1;
		int32_t L_83 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_82, L_83));
		int32_t L_84 = V_2;
		int32_t L_85 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_84, L_85));
	}

IL_015c:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_86 = ___z0;
		int32_t L_87 = V_1;
		NullCheck(L_86);
		L_86->___next_out_index_22 = L_87;
		int32_t L_88 = V_2;
		__this->___read_36 = L_88;
		int32_t L_89 = ___r1;
		return L_89;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.InfBlocks::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks__cctor_m500375EBBDEFF12A5FBD6A51D562D3A9FA92F644 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_345_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_367_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_367_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var))->___inflate_mask_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var))->___inflate_mask_1), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_345_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var))->___border_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var))->___border_2), (void*)L_4);
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
// System.Void Org.BouncyCastle.Utilities.Zlib.InfCodes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes__ctor_m4EC64920F33B0AF2A39A8ADEFCB149D53F48E104 (InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.InfCodes::init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes_init_m7AA4132CA4E845097A658CA9D6F748AFBA26B4FB (InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td4, int32_t ___td_index5, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z6, const RuntimeMethod* method) 
{
	{
		__this->___mode_20 = 0;
		int32_t L_0 = ___bl0;
		__this->___lbits_28 = (uint8_t)((int32_t)(uint8_t)L_0);
		int32_t L_1 = ___bd1;
		__this->___dbits_29 = (uint8_t)((int32_t)(uint8_t)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___tl2;
		__this->___ltree_30 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ltree_30), (void*)L_2);
		int32_t L_3 = ___tl_index3;
		__this->___ltree_index_31 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___td4;
		__this->___dtree_32 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dtree_32), (void*)L_4);
		int32_t L_5 = ___td_index5;
		__this->___dtree_index_33 = L_5;
		__this->___tree_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_22), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::proc(Org.BouncyCastle.Utilities.Zlib.InfBlocks,Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfCodes_proc_m72239D31140A6B42DCF0A5C5380C8ECAC3E66F49 (InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* __this, InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* ___s0, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z1, int32_t ___r2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* G_B14_0 = NULL;
	InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* G_B15_1 = NULL;
	int32_t G_B67_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B77_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B96_0 = 0;
	int32_t G_B101_0 = 0;
	int32_t G_B110_0 = 0;
	{
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___z1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___next_in_index_18;
		V_5 = L_1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_2 = ___z1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___avail_in_19;
		V_6 = L_3;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_4 = ___s0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___bitb_32;
		V_3 = L_5;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bitk_31;
		V_4 = L_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_8 = ___s0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___write_37;
		V_7 = L_9;
		int32_t L_10 = V_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_11 = ___s0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___read_36;
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0044;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_13 = ___s0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___end_35;
		int32_t L_15 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		goto IL_004f;
	}

IL_0044:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_16 = ___s0;
		NullCheck(L_16);
		int32_t L_17 = L_16->___read_36;
		int32_t L_18 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_17, L_18)), 1));
	}

IL_004f:
	{
		V_8 = G_B3_0;
	}

IL_0051:
	{
		int32_t L_19 = __this->___mode_20;
		V_10 = L_19;
		int32_t L_20 = V_10;
		switch (L_20)
		{
			case 0:
			{
				goto IL_008d;
			}
			case 1:
			{
				goto IL_0199;
			}
			case 2:
			{
				goto IL_033c;
			}
			case 3:
			{
				goto IL_0411;
			}
			case 4:
			{
				goto IL_0583;
			}
			case 5:
			{
				goto IL_0634;
			}
			case 6:
			{
				goto IL_07ad;
			}
			case 7:
			{
				goto IL_08da;
			}
			case 8:
			{
				goto IL_0989;
			}
			case 9:
			{
				goto IL_09d3;
			}
		}
	}
	{
		goto IL_0a1e;
	}

IL_008d:
	{
		int32_t L_21 = V_8;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)258))))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_22 = V_6;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)10))))
		{
			goto IL_016e;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_23 = ___s0;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		L_23->___bitb_32 = L_24;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_25 = ___s0;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		L_25->___bitk_31 = L_26;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_27 = ___z1;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		L_27->___avail_in_19 = L_28;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_29 = ___z1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_30 = L_29;
		NullCheck(L_30);
		int64_t L_31 = L_30->___total_in_20;
		int32_t L_32 = V_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_33 = ___z1;
		NullCheck(L_33);
		int32_t L_34 = L_33->___next_in_index_18;
		NullCheck(L_30);
		L_30->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_31, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_32, L_34)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_35 = ___z1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		L_35->___next_in_index_18 = L_36;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_37 = ___s0;
		int32_t L_38 = V_7;
		NullCheck(L_37);
		L_37->___write_37 = L_38;
		uint8_t L_39 = __this->___lbits_28;
		uint8_t L_40 = __this->___dbits_29;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->___ltree_30;
		int32_t L_42 = __this->___ltree_index_31;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->___dtree_32;
		int32_t L_44 = __this->___dtree_index_33;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_45 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_46 = ___z1;
		int32_t L_47;
		L_47 = InfCodes_inflate_fast_m95D581BDEC8F4FCC0E3BC2C88891A7C6FFF48149(__this, L_39, L_40, L_41, L_42, L_43, L_44, L_45, L_46, NULL);
		___r2 = L_47;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_48 = ___z1;
		NullCheck(L_48);
		int32_t L_49 = L_48->___next_in_index_18;
		V_5 = L_49;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_50 = ___z1;
		NullCheck(L_50);
		int32_t L_51 = L_50->___avail_in_19;
		V_6 = L_51;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_52 = ___s0;
		NullCheck(L_52);
		int32_t L_53 = L_52->___bitb_32;
		V_3 = L_53;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_54 = ___s0;
		NullCheck(L_54);
		int32_t L_55 = L_54->___bitk_31;
		V_4 = L_55;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_56 = ___s0;
		NullCheck(L_56);
		int32_t L_57 = L_56->___write_37;
		V_7 = L_57;
		int32_t L_58 = V_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_59 = ___s0;
		NullCheck(L_59);
		int32_t L_60 = L_59->___read_36;
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_014a;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_61 = ___s0;
		NullCheck(L_61);
		int32_t L_62 = L_61->___end_35;
		int32_t L_63 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract(L_62, L_63));
		goto IL_0155;
	}

IL_014a:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_64 = ___s0;
		NullCheck(L_64);
		int32_t L_65 = L_64->___read_36;
		int32_t L_66 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_65, L_66)), 1));
	}

IL_0155:
	{
		V_8 = G_B11_0;
		int32_t L_67 = ___r2;
		if (!L_67)
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_68 = ___r2;
		G_B13_0 = __this;
		if ((((int32_t)L_68) == ((int32_t)1)))
		{
			G_B14_0 = __this;
			goto IL_0163;
		}
	}
	{
		G_B15_0 = ((int32_t)9);
		G_B15_1 = G_B13_0;
		goto IL_0164;
	}

IL_0163:
	{
		G_B15_0 = 7;
		G_B15_1 = G_B14_0;
	}

IL_0164:
	{
		NullCheck(G_B15_1);
		G_B15_1->___mode_20 = G_B15_0;
		goto IL_0051;
	}

IL_016e:
	{
		uint8_t L_69 = __this->___lbits_28;
		__this->___need_24 = L_69;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = __this->___ltree_30;
		__this->___tree_22 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_22), (void*)L_70);
		int32_t L_71 = __this->___ltree_index_31;
		__this->___tree_index_23 = L_71;
		__this->___mode_20 = 1;
	}

IL_0199:
	{
		int32_t L_72 = __this->___need_24;
		V_0 = L_72;
		goto IL_021b;
	}

IL_01a2:
	{
		int32_t L_73 = V_6;
		if (!L_73)
		{
			goto IL_01ab;
		}
	}
	{
		___r2 = 0;
		goto IL_01f2;
	}

IL_01ab:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_74 = ___s0;
		int32_t L_75 = V_3;
		NullCheck(L_74);
		L_74->___bitb_32 = L_75;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_76 = ___s0;
		int32_t L_77 = V_4;
		NullCheck(L_76);
		L_76->___bitk_31 = L_77;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_78 = ___z1;
		int32_t L_79 = V_6;
		NullCheck(L_78);
		L_78->___avail_in_19 = L_79;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_80 = ___z1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_81 = L_80;
		NullCheck(L_81);
		int64_t L_82 = L_81->___total_in_20;
		int32_t L_83 = V_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_84 = ___z1;
		NullCheck(L_84);
		int32_t L_85 = L_84->___next_in_index_18;
		NullCheck(L_81);
		L_81->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_82, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_83, L_85)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_86 = ___z1;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		L_86->___next_in_index_18 = L_87;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_88 = ___s0;
		int32_t L_89 = V_7;
		NullCheck(L_88);
		L_88->___write_37 = L_89;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_90 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_91 = ___z1;
		int32_t L_92 = ___r2;
		NullCheck(L_90);
		int32_t L_93;
		L_93 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_90, L_91, L_92, NULL);
		return L_93;
	}

IL_01f2:
	{
		int32_t L_94 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_94, 1));
		int32_t L_95 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_96 = ___z1;
		NullCheck(L_96);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = L_96->___next_in_17;
		int32_t L_98 = V_5;
		int32_t L_99 = L_98;
		V_5 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		NullCheck(L_97);
		int32_t L_100 = L_99;
		uint8_t L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		int32_t L_102 = V_4;
		V_3 = ((int32_t)(L_95|((int32_t)(((int32_t)((int32_t)L_101&((int32_t)255)))<<((int32_t)(L_102&((int32_t)31)))))));
		int32_t L_103 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_103, 8));
	}

IL_021b:
	{
		int32_t L_104 = V_4;
		int32_t L_105 = V_0;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_01a2;
		}
	}
	{
		int32_t L_106 = __this->___tree_index_23;
		int32_t L_107 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = ((InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var))->___inflate_mask_0;
		int32_t L_109 = V_0;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		int32_t L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_1 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_106, ((int32_t)(L_107&L_111)))), 3));
		int32_t L_112 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = __this->___tree_22;
		int32_t L_114 = V_1;
		NullCheck(L_113);
		int32_t L_115 = ((int32_t)il2cpp_codegen_add(L_114, 1));
		int32_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		V_3 = ((int32_t)(L_112>>((int32_t)(L_116&((int32_t)31)))));
		int32_t L_117 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = __this->___tree_22;
		int32_t L_119 = V_1;
		NullCheck(L_118);
		int32_t L_120 = ((int32_t)il2cpp_codegen_add(L_119, 1));
		int32_t L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_117, L_121));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_122 = __this->___tree_22;
		int32_t L_123 = V_1;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		int32_t L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		V_2 = L_125;
		int32_t L_126 = V_2;
		if (L_126)
		{
			goto IL_027a;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = __this->___tree_22;
		int32_t L_128 = V_1;
		NullCheck(L_127);
		int32_t L_129 = ((int32_t)il2cpp_codegen_add(L_128, 2));
		int32_t L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		__this->___lit_25 = L_130;
		__this->___mode_20 = 6;
		goto IL_0051;
	}

IL_027a:
	{
		int32_t L_131 = V_2;
		if (!((int32_t)(L_131&((int32_t)16))))
		{
			goto IL_02a6;
		}
	}
	{
		int32_t L_132 = V_2;
		__this->___get_26 = ((int32_t)(L_132&((int32_t)15)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = __this->___tree_22;
		int32_t L_134 = V_1;
		NullCheck(L_133);
		int32_t L_135 = ((int32_t)il2cpp_codegen_add(L_134, 2));
		int32_t L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		__this->___len_21 = L_136;
		__this->___mode_20 = 2;
		goto IL_0051;
	}

IL_02a6:
	{
		int32_t L_137 = V_2;
		if (((int32_t)(L_137&((int32_t)64))))
		{
			goto IL_02cc;
		}
	}
	{
		int32_t L_138 = V_2;
		__this->___need_24 = L_138;
		int32_t L_139 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = __this->___tree_22;
		int32_t L_141 = V_1;
		NullCheck(L_140);
		int32_t L_142 = ((int32_t)il2cpp_codegen_add(L_141, 2));
		int32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		__this->___tree_index_23 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_139/3)), L_143));
		goto IL_0051;
	}

IL_02cc:
	{
		int32_t L_144 = V_2;
		if (!((int32_t)(L_144&((int32_t)32))))
		{
			goto IL_02de;
		}
	}
	{
		__this->___mode_20 = 7;
		goto IL_0051;
	}

IL_02de:
	{
		__this->___mode_20 = ((int32_t)9);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_145 = ___z1;
		NullCheck(L_145);
		L_145->___msg_25 = _stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16;
		Il2CppCodeGenWriteBarrier((void**)(&L_145->___msg_25), (void*)_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		___r2 = ((int32_t)-3);
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_146 = ___s0;
		int32_t L_147 = V_3;
		NullCheck(L_146);
		L_146->___bitb_32 = L_147;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_148 = ___s0;
		int32_t L_149 = V_4;
		NullCheck(L_148);
		L_148->___bitk_31 = L_149;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_150 = ___z1;
		int32_t L_151 = V_6;
		NullCheck(L_150);
		L_150->___avail_in_19 = L_151;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_152 = ___z1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_153 = L_152;
		NullCheck(L_153);
		int64_t L_154 = L_153->___total_in_20;
		int32_t L_155 = V_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_156 = ___z1;
		NullCheck(L_156);
		int32_t L_157 = L_156->___next_in_index_18;
		NullCheck(L_153);
		L_153->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_154, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_155, L_157)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_158 = ___z1;
		int32_t L_159 = V_5;
		NullCheck(L_158);
		L_158->___next_in_index_18 = L_159;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_160 = ___s0;
		int32_t L_161 = V_7;
		NullCheck(L_160);
		L_160->___write_37 = L_161;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_162 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_163 = ___z1;
		int32_t L_164 = ___r2;
		NullCheck(L_162);
		int32_t L_165;
		L_165 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_162, L_163, L_164, NULL);
		return L_165;
	}

IL_033c:
	{
		int32_t L_166 = __this->___get_26;
		V_0 = L_166;
		goto IL_03be;
	}

IL_0345:
	{
		int32_t L_167 = V_6;
		if (!L_167)
		{
			goto IL_034e;
		}
	}
	{
		___r2 = 0;
		goto IL_0395;
	}

IL_034e:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_168 = ___s0;
		int32_t L_169 = V_3;
		NullCheck(L_168);
		L_168->___bitb_32 = L_169;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_170 = ___s0;
		int32_t L_171 = V_4;
		NullCheck(L_170);
		L_170->___bitk_31 = L_171;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_172 = ___z1;
		int32_t L_173 = V_6;
		NullCheck(L_172);
		L_172->___avail_in_19 = L_173;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_174 = ___z1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_175 = L_174;
		NullCheck(L_175);
		int64_t L_176 = L_175->___total_in_20;
		int32_t L_177 = V_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_178 = ___z1;
		NullCheck(L_178);
		int32_t L_179 = L_178->___next_in_index_18;
		NullCheck(L_175);
		L_175->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_176, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_177, L_179)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_180 = ___z1;
		int32_t L_181 = V_5;
		NullCheck(L_180);
		L_180->___next_in_index_18 = L_181;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_182 = ___s0;
		int32_t L_183 = V_7;
		NullCheck(L_182);
		L_182->___write_37 = L_183;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_184 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_185 = ___z1;
		int32_t L_186 = ___r2;
		NullCheck(L_184);
		int32_t L_187;
		L_187 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_184, L_185, L_186, NULL);
		return L_187;
	}

IL_0395:
	{
		int32_t L_188 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_188, 1));
		int32_t L_189 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_190 = ___z1;
		NullCheck(L_190);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_191 = L_190->___next_in_17;
		int32_t L_192 = V_5;
		int32_t L_193 = L_192;
		V_5 = ((int32_t)il2cpp_codegen_add(L_193, 1));
		NullCheck(L_191);
		int32_t L_194 = L_193;
		uint8_t L_195 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		int32_t L_196 = V_4;
		V_3 = ((int32_t)(L_189|((int32_t)(((int32_t)((int32_t)L_195&((int32_t)255)))<<((int32_t)(L_196&((int32_t)31)))))));
		int32_t L_197 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_197, 8));
	}

IL_03be:
	{
		int32_t L_198 = V_4;
		int32_t L_199 = V_0;
		if ((((int32_t)L_198) < ((int32_t)L_199)))
		{
			goto IL_0345;
		}
	}
	{
		int32_t L_200 = __this->___len_21;
		int32_t L_201 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_202 = ((InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var))->___inflate_mask_0;
		int32_t L_203 = V_0;
		NullCheck(L_202);
		int32_t L_204 = L_203;
		int32_t L_205 = (L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		__this->___len_21 = ((int32_t)il2cpp_codegen_add(L_200, ((int32_t)(L_201&L_205))));
		int32_t L_206 = V_3;
		int32_t L_207 = V_0;
		V_3 = ((int32_t)(L_206>>((int32_t)(L_207&((int32_t)31)))));
		int32_t L_208 = V_4;
		int32_t L_209 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_208, L_209));
		uint8_t L_210 = __this->___dbits_29;
		__this->___need_24 = L_210;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_211 = __this->___dtree_32;
		__this->___tree_22 = L_211;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_22), (void*)L_211);
		int32_t L_212 = __this->___dtree_index_33;
		__this->___tree_index_23 = L_212;
		__this->___mode_20 = 3;
	}

IL_0411:
	{
		int32_t L_213 = __this->___need_24;
		V_0 = L_213;
		goto IL_0493;
	}

IL_041a:
	{
		int32_t L_214 = V_6;
		if (!L_214)
		{
			goto IL_0423;
		}
	}
	{
		___r2 = 0;
		goto IL_046a;
	}

IL_0423:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_215 = ___s0;
		int32_t L_216 = V_3;
		NullCheck(L_215);
		L_215->___bitb_32 = L_216;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_217 = ___s0;
		int32_t L_218 = V_4;
		NullCheck(L_217);
		L_217->___bitk_31 = L_218;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_219 = ___z1;
		int32_t L_220 = V_6;
		NullCheck(L_219);
		L_219->___avail_in_19 = L_220;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_221 = ___z1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_222 = L_221;
		NullCheck(L_222);
		int64_t L_223 = L_222->___total_in_20;
		int32_t L_224 = V_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_225 = ___z1;
		NullCheck(L_225);
		int32_t L_226 = L_225->___next_in_index_18;
		NullCheck(L_222);
		L_222->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_223, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_224, L_226)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_227 = ___z1;
		int32_t L_228 = V_5;
		NullCheck(L_227);
		L_227->___next_in_index_18 = L_228;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_229 = ___s0;
		int32_t L_230 = V_7;
		NullCheck(L_229);
		L_229->___write_37 = L_230;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_231 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_232 = ___z1;
		int32_t L_233 = ___r2;
		NullCheck(L_231);
		int32_t L_234;
		L_234 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_231, L_232, L_233, NULL);
		return L_234;
	}

IL_046a:
	{
		int32_t L_235 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_235, 1));
		int32_t L_236 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_237 = ___z1;
		NullCheck(L_237);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_238 = L_237->___next_in_17;
		int32_t L_239 = V_5;
		int32_t L_240 = L_239;
		V_5 = ((int32_t)il2cpp_codegen_add(L_240, 1));
		NullCheck(L_238);
		int32_t L_241 = L_240;
		uint8_t L_242 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		int32_t L_243 = V_4;
		V_3 = ((int32_t)(L_236|((int32_t)(((int32_t)((int32_t)L_242&((int32_t)255)))<<((int32_t)(L_243&((int32_t)31)))))));
		int32_t L_244 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_244, 8));
	}

IL_0493:
	{
		int32_t L_245 = V_4;
		int32_t L_246 = V_0;
		if ((((int32_t)L_245) < ((int32_t)L_246)))
		{
			goto IL_041a;
		}
	}
	{
		int32_t L_247 = __this->___tree_index_23;
		int32_t L_248 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = ((InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var))->___inflate_mask_0;
		int32_t L_250 = V_0;
		NullCheck(L_249);
		int32_t L_251 = L_250;
		int32_t L_252 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		V_1 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_247, ((int32_t)(L_248&L_252)))), 3));
		int32_t L_253 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_254 = __this->___tree_22;
		int32_t L_255 = V_1;
		NullCheck(L_254);
		int32_t L_256 = ((int32_t)il2cpp_codegen_add(L_255, 1));
		int32_t L_257 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		V_3 = ((int32_t)(L_253>>((int32_t)(L_257&((int32_t)31)))));
		int32_t L_258 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_259 = __this->___tree_22;
		int32_t L_260 = V_1;
		NullCheck(L_259);
		int32_t L_261 = ((int32_t)il2cpp_codegen_add(L_260, 1));
		int32_t L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_258, L_262));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_263 = __this->___tree_22;
		int32_t L_264 = V_1;
		NullCheck(L_263);
		int32_t L_265 = L_264;
		int32_t L_266 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		V_2 = L_266;
		int32_t L_267 = V_2;
		if (!((int32_t)(L_267&((int32_t)16))))
		{
			goto IL_04ff;
		}
	}
	{
		int32_t L_268 = V_2;
		__this->___get_26 = ((int32_t)(L_268&((int32_t)15)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = __this->___tree_22;
		int32_t L_270 = V_1;
		NullCheck(L_269);
		int32_t L_271 = ((int32_t)il2cpp_codegen_add(L_270, 2));
		int32_t L_272 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		__this->___dist_27 = L_272;
		__this->___mode_20 = 4;
		goto IL_0051;
	}

IL_04ff:
	{
		int32_t L_273 = V_2;
		if (((int32_t)(L_273&((int32_t)64))))
		{
			goto IL_0525;
		}
	}
	{
		int32_t L_274 = V_2;
		__this->___need_24 = L_274;
		int32_t L_275 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_276 = __this->___tree_22;
		int32_t L_277 = V_1;
		NullCheck(L_276);
		int32_t L_278 = ((int32_t)il2cpp_codegen_add(L_277, 2));
		int32_t L_279 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_278));
		__this->___tree_index_23 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_275/3)), L_279));
		goto IL_0051;
	}

IL_0525:
	{
		__this->___mode_20 = ((int32_t)9);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_280 = ___z1;
		NullCheck(L_280);
		L_280->___msg_25 = _stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948;
		Il2CppCodeGenWriteBarrier((void**)(&L_280->___msg_25), (void*)_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		___r2 = ((int32_t)-3);
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_281 = ___s0;
		int32_t L_282 = V_3;
		NullCheck(L_281);
		L_281->___bitb_32 = L_282;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_283 = ___s0;
		int32_t L_284 = V_4;
		NullCheck(L_283);
		L_283->___bitk_31 = L_284;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_285 = ___z1;
		int32_t L_286 = V_6;
		NullCheck(L_285);
		L_285->___avail_in_19 = L_286;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_287 = ___z1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_288 = L_287;
		NullCheck(L_288);
		int64_t L_289 = L_288->___total_in_20;
		int32_t L_290 = V_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_291 = ___z1;
		NullCheck(L_291);
		int32_t L_292 = L_291->___next_in_index_18;
		NullCheck(L_288);
		L_288->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_289, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_290, L_292)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_293 = ___z1;
		int32_t L_294 = V_5;
		NullCheck(L_293);
		L_293->___next_in_index_18 = L_294;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_295 = ___s0;
		int32_t L_296 = V_7;
		NullCheck(L_295);
		L_295->___write_37 = L_296;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_297 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_298 = ___z1;
		int32_t L_299 = ___r2;
		NullCheck(L_297);
		int32_t L_300;
		L_300 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_297, L_298, L_299, NULL);
		return L_300;
	}

IL_0583:
	{
		int32_t L_301 = __this->___get_26;
		V_0 = L_301;
		goto IL_0605;
	}

IL_058c:
	{
		int32_t L_302 = V_6;
		if (!L_302)
		{
			goto IL_0595;
		}
	}
	{
		___r2 = 0;
		goto IL_05dc;
	}

IL_0595:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_303 = ___s0;
		int32_t L_304 = V_3;
		NullCheck(L_303);
		L_303->___bitb_32 = L_304;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_305 = ___s0;
		int32_t L_306 = V_4;
		NullCheck(L_305);
		L_305->___bitk_31 = L_306;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_307 = ___z1;
		int32_t L_308 = V_6;
		NullCheck(L_307);
		L_307->___avail_in_19 = L_308;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_309 = ___z1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_310 = L_309;
		NullCheck(L_310);
		int64_t L_311 = L_310->___total_in_20;
		int32_t L_312 = V_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_313 = ___z1;
		NullCheck(L_313);
		int32_t L_314 = L_313->___next_in_index_18;
		NullCheck(L_310);
		L_310->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_311, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_312, L_314)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_315 = ___z1;
		int32_t L_316 = V_5;
		NullCheck(L_315);
		L_315->___next_in_index_18 = L_316;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_317 = ___s0;
		int32_t L_318 = V_7;
		NullCheck(L_317);
		L_317->___write_37 = L_318;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_319 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_320 = ___z1;
		int32_t L_321 = ___r2;
		NullCheck(L_319);
		int32_t L_322;
		L_322 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_319, L_320, L_321, NULL);
		return L_322;
	}

IL_05dc:
	{
		int32_t L_323 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_323, 1));
		int32_t L_324 = V_3;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_325 = ___z1;
		NullCheck(L_325);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_326 = L_325->___next_in_17;
		int32_t L_327 = V_5;
		int32_t L_328 = L_327;
		V_5 = ((int32_t)il2cpp_codegen_add(L_328, 1));
		NullCheck(L_326);
		int32_t L_329 = L_328;
		uint8_t L_330 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		int32_t L_331 = V_4;
		V_3 = ((int32_t)(L_324|((int32_t)(((int32_t)((int32_t)L_330&((int32_t)255)))<<((int32_t)(L_331&((int32_t)31)))))));
		int32_t L_332 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_332, 8));
	}

IL_0605:
	{
		int32_t L_333 = V_4;
		int32_t L_334 = V_0;
		if ((((int32_t)L_333) < ((int32_t)L_334)))
		{
			goto IL_058c;
		}
	}
	{
		int32_t L_335 = __this->___dist_27;
		int32_t L_336 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_337 = ((InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var))->___inflate_mask_0;
		int32_t L_338 = V_0;
		NullCheck(L_337);
		int32_t L_339 = L_338;
		int32_t L_340 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		__this->___dist_27 = ((int32_t)il2cpp_codegen_add(L_335, ((int32_t)(L_336&L_340))));
		int32_t L_341 = V_3;
		int32_t L_342 = V_0;
		V_3 = ((int32_t)(L_341>>((int32_t)(L_342&((int32_t)31)))));
		int32_t L_343 = V_4;
		int32_t L_344 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_343, L_344));
		__this->___mode_20 = 5;
	}

IL_0634:
	{
		int32_t L_345 = V_7;
		int32_t L_346 = __this->___dist_27;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_345, L_346));
		goto IL_064c;
	}

IL_0641:
	{
		int32_t L_347 = V_9;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_348 = ___s0;
		NullCheck(L_348);
		int32_t L_349 = L_348->___end_35;
		V_9 = ((int32_t)il2cpp_codegen_add(L_347, L_349));
	}

IL_064c:
	{
		int32_t L_350 = V_9;
		if ((((int32_t)L_350) < ((int32_t)0)))
		{
			goto IL_0641;
		}
	}
	{
		goto IL_0796;
	}

IL_0656:
	{
		int32_t L_351 = V_8;
		if (L_351)
		{
			goto IL_0759;
		}
	}
	{
		int32_t L_352 = V_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_353 = ___s0;
		NullCheck(L_353);
		int32_t L_354 = L_353->___end_35;
		if ((!(((uint32_t)L_352) == ((uint32_t)L_354))))
		{
			goto IL_0694;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_355 = ___s0;
		NullCheck(L_355);
		int32_t L_356 = L_355->___read_36;
		if (!L_356)
		{
			goto IL_0694;
		}
	}
	{
		V_7 = 0;
		int32_t L_357 = V_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_358 = ___s0;
		NullCheck(L_358);
		int32_t L_359 = L_358->___read_36;
		if ((((int32_t)L_357) < ((int32_t)L_359)))
		{
			goto IL_0687;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_360 = ___s0;
		NullCheck(L_360);
		int32_t L_361 = L_360->___end_35;
		int32_t L_362 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract(L_361, L_362));
		goto IL_0692;
	}

IL_0687:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_363 = ___s0;
		NullCheck(L_363);
		int32_t L_364 = L_363->___read_36;
		int32_t L_365 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_364, L_365)), 1));
	}

IL_0692:
	{
		V_8 = G_B67_0;
	}

IL_0694:
	{
		int32_t L_366 = V_8;
		if (L_366)
		{
			goto IL_0759;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_367 = ___s0;
		int32_t L_368 = V_7;
		NullCheck(L_367);
		L_367->___write_37 = L_368;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_369 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_370 = ___z1;
		int32_t L_371 = ___r2;
		NullCheck(L_369);
		int32_t L_372;
		L_372 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_369, L_370, L_371, NULL);
		___r2 = L_372;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_373 = ___s0;
		NullCheck(L_373);
		int32_t L_374 = L_373->___write_37;
		V_7 = L_374;
		int32_t L_375 = V_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_376 = ___s0;
		NullCheck(L_376);
		int32_t L_377 = L_376->___read_36;
		if ((((int32_t)L_375) < ((int32_t)L_377)))
		{
			goto IL_06ca;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_378 = ___s0;
		NullCheck(L_378);
		int32_t L_379 = L_378->___end_35;
		int32_t L_380 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract(L_379, L_380));
		goto IL_06d5;
	}

IL_06ca:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_381 = ___s0;
		NullCheck(L_381);
		int32_t L_382 = L_381->___read_36;
		int32_t L_383 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_382, L_383)), 1));
	}

IL_06d5:
	{
		V_8 = G_B72_0;
		int32_t L_384 = V_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_385 = ___s0;
		NullCheck(L_385);
		int32_t L_386 = L_385->___end_35;
		if ((!(((uint32_t)L_384) == ((uint32_t)L_386))))
		{
			goto IL_070e;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_387 = ___s0;
		NullCheck(L_387);
		int32_t L_388 = L_387->___read_36;
		if (!L_388)
		{
			goto IL_070e;
		}
	}
	{
		V_7 = 0;
		int32_t L_389 = V_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_390 = ___s0;
		NullCheck(L_390);
		int32_t L_391 = L_390->___read_36;
		if ((((int32_t)L_389) < ((int32_t)L_391)))
		{
			goto IL_0701;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_392 = ___s0;
		NullCheck(L_392);
		int32_t L_393 = L_392->___end_35;
		int32_t L_394 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract(L_393, L_394));
		goto IL_070c;
	}

IL_0701:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_395 = ___s0;
		NullCheck(L_395);
		int32_t L_396 = L_395->___read_36;
		int32_t L_397 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_396, L_397)), 1));
	}

IL_070c:
	{
		V_8 = G_B77_0;
	}

IL_070e:
	{
		int32_t L_398 = V_8;
		if (L_398)
		{
			goto IL_0759;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_399 = ___s0;
		int32_t L_400 = V_3;
		NullCheck(L_399);
		L_399->___bitb_32 = L_400;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_401 = ___s0;
		int32_t L_402 = V_4;
		NullCheck(L_401);
		L_401->___bitk_31 = L_402;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_403 = ___z1;
		int32_t L_404 = V_6;
		NullCheck(L_403);
		L_403->___avail_in_19 = L_404;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_405 = ___z1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_406 = L_405;
		NullCheck(L_406);
		int64_t L_407 = L_406->___total_in_20;
		int32_t L_408 = V_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_409 = ___z1;
		NullCheck(L_409);
		int32_t L_410 = L_409->___next_in_index_18;
		NullCheck(L_406);
		L_406->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_407, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_408, L_410)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_411 = ___z1;
		int32_t L_412 = V_5;
		NullCheck(L_411);
		L_411->___next_in_index_18 = L_412;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_413 = ___s0;
		int32_t L_414 = V_7;
		NullCheck(L_413);
		L_413->___write_37 = L_414;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_415 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_416 = ___z1;
		int32_t L_417 = ___r2;
		NullCheck(L_415);
		int32_t L_418;
		L_418 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_415, L_416, L_417, NULL);
		return L_418;
	}

IL_0759:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_419 = ___s0;
		NullCheck(L_419);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_420 = L_419->___window_34;
		int32_t L_421 = V_7;
		int32_t L_422 = L_421;
		V_7 = ((int32_t)il2cpp_codegen_add(L_422, 1));
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_423 = ___s0;
		NullCheck(L_423);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_424 = L_423->___window_34;
		int32_t L_425 = V_9;
		int32_t L_426 = L_425;
		V_9 = ((int32_t)il2cpp_codegen_add(L_426, 1));
		NullCheck(L_424);
		int32_t L_427 = L_426;
		uint8_t L_428 = (L_424)->GetAt(static_cast<il2cpp_array_size_t>(L_427));
		NullCheck(L_420);
		(L_420)->SetAt(static_cast<il2cpp_array_size_t>(L_422), (uint8_t)L_428);
		int32_t L_429 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_429, 1));
		int32_t L_430 = V_9;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_431 = ___s0;
		NullCheck(L_431);
		int32_t L_432 = L_431->___end_35;
		if ((!(((uint32_t)L_430) == ((uint32_t)L_432))))
		{
			goto IL_0788;
		}
	}
	{
		V_9 = 0;
	}

IL_0788:
	{
		int32_t L_433 = __this->___len_21;
		__this->___len_21 = ((int32_t)il2cpp_codegen_subtract(L_433, 1));
	}

IL_0796:
	{
		int32_t L_434 = __this->___len_21;
		if (L_434)
		{
			goto IL_0656;
		}
	}
	{
		__this->___mode_20 = 0;
		goto IL_0051;
	}

IL_07ad:
	{
		int32_t L_435 = V_8;
		if (L_435)
		{
			goto IL_08b0;
		}
	}
	{
		int32_t L_436 = V_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_437 = ___s0;
		NullCheck(L_437);
		int32_t L_438 = L_437->___end_35;
		if ((!(((uint32_t)L_436) == ((uint32_t)L_438))))
		{
			goto IL_07eb;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_439 = ___s0;
		NullCheck(L_439);
		int32_t L_440 = L_439->___read_36;
		if (!L_440)
		{
			goto IL_07eb;
		}
	}
	{
		V_7 = 0;
		int32_t L_441 = V_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_442 = ___s0;
		NullCheck(L_442);
		int32_t L_443 = L_442->___read_36;
		if ((((int32_t)L_441) < ((int32_t)L_443)))
		{
			goto IL_07de;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_444 = ___s0;
		NullCheck(L_444);
		int32_t L_445 = L_444->___end_35;
		int32_t L_446 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract(L_445, L_446));
		goto IL_07e9;
	}

IL_07de:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_447 = ___s0;
		NullCheck(L_447);
		int32_t L_448 = L_447->___read_36;
		int32_t L_449 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_448, L_449)), 1));
	}

IL_07e9:
	{
		V_8 = G_B91_0;
	}

IL_07eb:
	{
		int32_t L_450 = V_8;
		if (L_450)
		{
			goto IL_08b0;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_451 = ___s0;
		int32_t L_452 = V_7;
		NullCheck(L_451);
		L_451->___write_37 = L_452;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_453 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_454 = ___z1;
		int32_t L_455 = ___r2;
		NullCheck(L_453);
		int32_t L_456;
		L_456 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_453, L_454, L_455, NULL);
		___r2 = L_456;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_457 = ___s0;
		NullCheck(L_457);
		int32_t L_458 = L_457->___write_37;
		V_7 = L_458;
		int32_t L_459 = V_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_460 = ___s0;
		NullCheck(L_460);
		int32_t L_461 = L_460->___read_36;
		if ((((int32_t)L_459) < ((int32_t)L_461)))
		{
			goto IL_0821;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_462 = ___s0;
		NullCheck(L_462);
		int32_t L_463 = L_462->___end_35;
		int32_t L_464 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract(L_463, L_464));
		goto IL_082c;
	}

IL_0821:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_465 = ___s0;
		NullCheck(L_465);
		int32_t L_466 = L_465->___read_36;
		int32_t L_467 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_466, L_467)), 1));
	}

IL_082c:
	{
		V_8 = G_B96_0;
		int32_t L_468 = V_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_469 = ___s0;
		NullCheck(L_469);
		int32_t L_470 = L_469->___end_35;
		if ((!(((uint32_t)L_468) == ((uint32_t)L_470))))
		{
			goto IL_0865;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_471 = ___s0;
		NullCheck(L_471);
		int32_t L_472 = L_471->___read_36;
		if (!L_472)
		{
			goto IL_0865;
		}
	}
	{
		V_7 = 0;
		int32_t L_473 = V_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_474 = ___s0;
		NullCheck(L_474);
		int32_t L_475 = L_474->___read_36;
		if ((((int32_t)L_473) < ((int32_t)L_475)))
		{
			goto IL_0858;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_476 = ___s0;
		NullCheck(L_476);
		int32_t L_477 = L_476->___end_35;
		int32_t L_478 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract(L_477, L_478));
		goto IL_0863;
	}

IL_0858:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_479 = ___s0;
		NullCheck(L_479);
		int32_t L_480 = L_479->___read_36;
		int32_t L_481 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_480, L_481)), 1));
	}

IL_0863:
	{
		V_8 = G_B101_0;
	}

IL_0865:
	{
		int32_t L_482 = V_8;
		if (L_482)
		{
			goto IL_08b0;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_483 = ___s0;
		int32_t L_484 = V_3;
		NullCheck(L_483);
		L_483->___bitb_32 = L_484;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_485 = ___s0;
		int32_t L_486 = V_4;
		NullCheck(L_485);
		L_485->___bitk_31 = L_486;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_487 = ___z1;
		int32_t L_488 = V_6;
		NullCheck(L_487);
		L_487->___avail_in_19 = L_488;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_489 = ___z1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_490 = L_489;
		NullCheck(L_490);
		int64_t L_491 = L_490->___total_in_20;
		int32_t L_492 = V_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_493 = ___z1;
		NullCheck(L_493);
		int32_t L_494 = L_493->___next_in_index_18;
		NullCheck(L_490);
		L_490->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_491, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_492, L_494)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_495 = ___z1;
		int32_t L_496 = V_5;
		NullCheck(L_495);
		L_495->___next_in_index_18 = L_496;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_497 = ___s0;
		int32_t L_498 = V_7;
		NullCheck(L_497);
		L_497->___write_37 = L_498;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_499 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_500 = ___z1;
		int32_t L_501 = ___r2;
		NullCheck(L_499);
		int32_t L_502;
		L_502 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_499, L_500, L_501, NULL);
		return L_502;
	}

IL_08b0:
	{
		___r2 = 0;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_503 = ___s0;
		NullCheck(L_503);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_504 = L_503->___window_34;
		int32_t L_505 = V_7;
		int32_t L_506 = L_505;
		V_7 = ((int32_t)il2cpp_codegen_add(L_506, 1));
		int32_t L_507 = __this->___lit_25;
		NullCheck(L_504);
		(L_504)->SetAt(static_cast<il2cpp_array_size_t>(L_506), (uint8_t)((int32_t)(uint8_t)L_507));
		int32_t L_508 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_508, 1));
		__this->___mode_20 = 0;
		goto IL_0051;
	}

IL_08da:
	{
		int32_t L_509 = V_4;
		if ((((int32_t)L_509) <= ((int32_t)7)))
		{
			goto IL_08f1;
		}
	}
	{
		int32_t L_510 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_510, 8));
		int32_t L_511 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_511, 1));
		int32_t L_512 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_512, 1));
	}

IL_08f1:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_513 = ___s0;
		int32_t L_514 = V_7;
		NullCheck(L_513);
		L_513->___write_37 = L_514;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_515 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_516 = ___z1;
		int32_t L_517 = ___r2;
		NullCheck(L_515);
		int32_t L_518;
		L_518 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_515, L_516, L_517, NULL);
		___r2 = L_518;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_519 = ___s0;
		NullCheck(L_519);
		int32_t L_520 = L_519->___write_37;
		V_7 = L_520;
		int32_t L_521 = V_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_522 = ___s0;
		NullCheck(L_522);
		int32_t L_523 = L_522->___read_36;
		if ((((int32_t)L_521) < ((int32_t)L_523)))
		{
			goto IL_0920;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_524 = ___s0;
		NullCheck(L_524);
		int32_t L_525 = L_524->___end_35;
		int32_t L_526 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract(L_525, L_526));
		goto IL_092b;
	}

IL_0920:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_527 = ___s0;
		NullCheck(L_527);
		int32_t L_528 = L_527->___read_36;
		int32_t L_529 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_528, L_529)), 1));
	}

IL_092b:
	{
		V_8 = G_B110_0;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_530 = ___s0;
		NullCheck(L_530);
		int32_t L_531 = L_530->___read_36;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_532 = ___s0;
		NullCheck(L_532);
		int32_t L_533 = L_532->___write_37;
		if ((((int32_t)L_531) == ((int32_t)L_533)))
		{
			goto IL_0982;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_534 = ___s0;
		int32_t L_535 = V_3;
		NullCheck(L_534);
		L_534->___bitb_32 = L_535;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_536 = ___s0;
		int32_t L_537 = V_4;
		NullCheck(L_536);
		L_536->___bitk_31 = L_537;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_538 = ___z1;
		int32_t L_539 = V_6;
		NullCheck(L_538);
		L_538->___avail_in_19 = L_539;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_540 = ___z1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_541 = L_540;
		NullCheck(L_541);
		int64_t L_542 = L_541->___total_in_20;
		int32_t L_543 = V_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_544 = ___z1;
		NullCheck(L_544);
		int32_t L_545 = L_544->___next_in_index_18;
		NullCheck(L_541);
		L_541->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_542, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_543, L_545)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_546 = ___z1;
		int32_t L_547 = V_5;
		NullCheck(L_546);
		L_546->___next_in_index_18 = L_547;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_548 = ___s0;
		int32_t L_549 = V_7;
		NullCheck(L_548);
		L_548->___write_37 = L_549;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_550 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_551 = ___z1;
		int32_t L_552 = ___r2;
		NullCheck(L_550);
		int32_t L_553;
		L_553 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_550, L_551, L_552, NULL);
		return L_553;
	}

IL_0982:
	{
		__this->___mode_20 = 8;
	}

IL_0989:
	{
		___r2 = 1;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_554 = ___s0;
		int32_t L_555 = V_3;
		NullCheck(L_554);
		L_554->___bitb_32 = L_555;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_556 = ___s0;
		int32_t L_557 = V_4;
		NullCheck(L_556);
		L_556->___bitk_31 = L_557;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_558 = ___z1;
		int32_t L_559 = V_6;
		NullCheck(L_558);
		L_558->___avail_in_19 = L_559;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_560 = ___z1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_561 = L_560;
		NullCheck(L_561);
		int64_t L_562 = L_561->___total_in_20;
		int32_t L_563 = V_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_564 = ___z1;
		NullCheck(L_564);
		int32_t L_565 = L_564->___next_in_index_18;
		NullCheck(L_561);
		L_561->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_562, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_563, L_565)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_566 = ___z1;
		int32_t L_567 = V_5;
		NullCheck(L_566);
		L_566->___next_in_index_18 = L_567;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_568 = ___s0;
		int32_t L_569 = V_7;
		NullCheck(L_568);
		L_568->___write_37 = L_569;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_570 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_571 = ___z1;
		int32_t L_572 = ___r2;
		NullCheck(L_570);
		int32_t L_573;
		L_573 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_570, L_571, L_572, NULL);
		return L_573;
	}

IL_09d3:
	{
		___r2 = ((int32_t)-3);
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_574 = ___s0;
		int32_t L_575 = V_3;
		NullCheck(L_574);
		L_574->___bitb_32 = L_575;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_576 = ___s0;
		int32_t L_577 = V_4;
		NullCheck(L_576);
		L_576->___bitk_31 = L_577;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_578 = ___z1;
		int32_t L_579 = V_6;
		NullCheck(L_578);
		L_578->___avail_in_19 = L_579;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_580 = ___z1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_581 = L_580;
		NullCheck(L_581);
		int64_t L_582 = L_581->___total_in_20;
		int32_t L_583 = V_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_584 = ___z1;
		NullCheck(L_584);
		int32_t L_585 = L_584->___next_in_index_18;
		NullCheck(L_581);
		L_581->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_582, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_583, L_585)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_586 = ___z1;
		int32_t L_587 = V_5;
		NullCheck(L_586);
		L_586->___next_in_index_18 = L_587;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_588 = ___s0;
		int32_t L_589 = V_7;
		NullCheck(L_588);
		L_588->___write_37 = L_589;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_590 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_591 = ___z1;
		int32_t L_592 = ___r2;
		NullCheck(L_590);
		int32_t L_593;
		L_593 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_590, L_591, L_592, NULL);
		return L_593;
	}

IL_0a1e:
	{
		___r2 = ((int32_t)-2);
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_594 = ___s0;
		int32_t L_595 = V_3;
		NullCheck(L_594);
		L_594->___bitb_32 = L_595;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_596 = ___s0;
		int32_t L_597 = V_4;
		NullCheck(L_596);
		L_596->___bitk_31 = L_597;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_598 = ___z1;
		int32_t L_599 = V_6;
		NullCheck(L_598);
		L_598->___avail_in_19 = L_599;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_600 = ___z1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_601 = L_600;
		NullCheck(L_601);
		int64_t L_602 = L_601->___total_in_20;
		int32_t L_603 = V_5;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_604 = ___z1;
		NullCheck(L_604);
		int32_t L_605 = L_604->___next_in_index_18;
		NullCheck(L_601);
		L_601->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_602, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_603, L_605)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_606 = ___z1;
		int32_t L_607 = V_5;
		NullCheck(L_606);
		L_606->___next_in_index_18 = L_607;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_608 = ___s0;
		int32_t L_609 = V_7;
		NullCheck(L_608);
		L_608->___write_37 = L_609;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_610 = ___s0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_611 = ___z1;
		int32_t L_612 = ___r2;
		NullCheck(L_610);
		int32_t L_613;
		L_613 = InfBlocks_inflate_flush_m42742F3F0B22FA8880AEA9DA8BD970A343D1EBAE(L_610, L_611, L_612, NULL);
		return L_613;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.InfCodes::free(Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes_free_m9DF0F76B38993417A6487CDBC2DE8C56BC4F7448 (InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfCodes::inflate_fast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Org.BouncyCastle.Utilities.Zlib.InfBlocks,Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfCodes_inflate_fast_m95D581BDEC8F4FCC0E3BC2C88891A7C6FFF48149 (InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03* __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td4, int32_t ___td_index5, InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* ___s6, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B53_0 = 0;
	int32_t G_B59_0 = 0;
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___z7;
		NullCheck(L_0);
		int32_t L_1 = L_0->___next_in_index_18;
		V_6 = L_1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_2 = ___z7;
		NullCheck(L_2);
		int32_t L_3 = L_2->___avail_in_19;
		V_7 = L_3;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_4 = ___s6;
		NullCheck(L_4);
		int32_t L_5 = L_4->___bitb_32;
		V_4 = L_5;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_6 = ___s6;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bitk_31;
		V_5 = L_7;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_8 = ___s6;
		NullCheck(L_8);
		int32_t L_9 = L_8->___write_37;
		V_8 = L_9;
		int32_t L_10 = V_8;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_11 = ___s6;
		NullCheck(L_11);
		int32_t L_12 = L_11->___read_36;
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0044;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_13 = ___s6;
		NullCheck(L_13);
		int32_t L_14 = L_13->___end_35;
		int32_t L_15 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		goto IL_0050;
	}

IL_0044:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_16 = ___s6;
		NullCheck(L_16);
		int32_t L_17 = L_16->___read_36;
		int32_t L_18 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_17, L_18)), 1));
	}

IL_0050:
	{
		V_9 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ((InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var))->___inflate_mask_0;
		int32_t L_20 = ___bl0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_10 = L_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ((InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var))->___inflate_mask_0;
		int32_t L_24 = ___bd1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_11 = L_26;
		goto IL_0092;
	}

IL_0066:
	{
		int32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		int32_t L_28 = V_4;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_29 = ___z7;
		NullCheck(L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = L_29->___next_in_17;
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		NullCheck(L_30);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_5;
		V_4 = ((int32_t)(L_28|((int32_t)(((int32_t)((int32_t)L_34&((int32_t)255)))<<((int32_t)(L_35&((int32_t)31)))))));
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_36, 8));
	}

IL_0092:
	{
		int32_t L_37 = V_5;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)20))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_38 = V_4;
		int32_t L_39 = V_10;
		V_0 = ((int32_t)(L_38&L_39));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ___tl2;
		V_1 = L_40;
		int32_t L_41 = ___tl_index3;
		V_2 = L_41;
		int32_t L_42 = V_2;
		int32_t L_43 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_42, L_43)), 3));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_1;
		int32_t L_45 = V_15;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = L_47;
		V_3 = L_48;
		if (L_48)
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_49 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_1;
		int32_t L_51 = V_15;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_4 = ((int32_t)(L_49>>((int32_t)(L_53&((int32_t)31)))));
		int32_t L_54 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = V_15;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_54, L_58));
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_59 = ___s6;
		NullCheck(L_59);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = L_59->___window_34;
		int32_t L_61 = V_8;
		int32_t L_62 = L_61;
		V_8 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = V_1;
		int32_t L_64 = V_15;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_64, 2));
		int32_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)((int32_t)(uint8_t)L_66));
		int32_t L_67 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_67, 1));
		goto IL_05c0;
	}

IL_00ec:
	{
		int32_t L_68 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_1;
		int32_t L_70 = V_15;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		int32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_4 = ((int32_t)(L_68>>((int32_t)(L_72&((int32_t)31)))));
		int32_t L_73 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_1;
		int32_t L_75 = V_15;
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_73, L_77));
		int32_t L_78 = V_3;
		if (!((int32_t)(L_78&((int32_t)16))))
		{
			goto IL_044b;
		}
	}
	{
		int32_t L_79 = V_3;
		V_3 = ((int32_t)(L_79&((int32_t)15)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_1;
		int32_t L_81 = V_15;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 2));
		int32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = V_4;
		il2cpp_codegen_runtime_class_init_inline(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = ((InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var))->___inflate_mask_0;
		int32_t L_86 = V_3;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		int32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_12 = ((int32_t)il2cpp_codegen_add(L_83, ((int32_t)(L_84&L_88))));
		int32_t L_89 = V_4;
		int32_t L_90 = V_3;
		V_4 = ((int32_t)(L_89>>((int32_t)(L_90&((int32_t)31)))));
		int32_t L_91 = V_5;
		int32_t L_92 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_91, L_92));
		goto IL_0163;
	}

IL_0137:
	{
		int32_t L_93 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		int32_t L_94 = V_4;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_95 = ___z7;
		NullCheck(L_95);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = L_95->___next_in_17;
		int32_t L_97 = V_6;
		int32_t L_98 = L_97;
		V_6 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		NullCheck(L_96);
		int32_t L_99 = L_98;
		uint8_t L_100 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		int32_t L_101 = V_5;
		V_4 = ((int32_t)(L_94|((int32_t)(((int32_t)((int32_t)L_100&((int32_t)255)))<<((int32_t)(L_101&((int32_t)31)))))));
		int32_t L_102 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_102, 8));
	}

IL_0163:
	{
		int32_t L_103 = V_5;
		if ((((int32_t)L_103) < ((int32_t)((int32_t)15))))
		{
			goto IL_0137;
		}
	}
	{
		int32_t L_104 = V_4;
		int32_t L_105 = V_11;
		V_0 = ((int32_t)(L_104&L_105));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = ___td4;
		V_1 = L_106;
		int32_t L_107 = ___td_index5;
		V_2 = L_107;
		int32_t L_108 = V_2;
		int32_t L_109 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_108, L_109)), 3));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_1;
		int32_t L_111 = V_15;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_3 = L_113;
	}

IL_0181:
	{
		int32_t L_114 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = V_1;
		int32_t L_116 = V_15;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, 1));
		int32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_4 = ((int32_t)(L_114>>((int32_t)(L_118&((int32_t)31)))));
		int32_t L_119 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = V_1;
		int32_t L_121 = V_15;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, 1));
		int32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_119, L_123));
		int32_t L_124 = V_3;
		if (!((int32_t)(L_124&((int32_t)16))))
		{
			goto IL_0394;
		}
	}
	{
		int32_t L_125 = V_3;
		V_3 = ((int32_t)(L_125&((int32_t)15)));
		goto IL_01d6;
	}

IL_01aa:
	{
		int32_t L_126 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_126, 1));
		int32_t L_127 = V_4;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_128 = ___z7;
		NullCheck(L_128);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = L_128->___next_in_17;
		int32_t L_130 = V_6;
		int32_t L_131 = L_130;
		V_6 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		NullCheck(L_129);
		int32_t L_132 = L_131;
		uint8_t L_133 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		int32_t L_134 = V_5;
		V_4 = ((int32_t)(L_127|((int32_t)(((int32_t)((int32_t)L_133&((int32_t)255)))<<((int32_t)(L_134&((int32_t)31)))))));
		int32_t L_135 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_135, 8));
	}

IL_01d6:
	{
		int32_t L_136 = V_5;
		int32_t L_137 = V_3;
		if ((((int32_t)L_136) < ((int32_t)L_137)))
		{
			goto IL_01aa;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = V_1;
		int32_t L_139 = V_15;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add(L_139, 2));
		int32_t L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		int32_t L_142 = V_4;
		il2cpp_codegen_runtime_class_init_inline(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_143 = ((InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var))->___inflate_mask_0;
		int32_t L_144 = V_3;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		int32_t L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		V_13 = ((int32_t)il2cpp_codegen_add(L_141, ((int32_t)(L_142&L_146))));
		int32_t L_147 = V_4;
		int32_t L_148 = V_3;
		V_4 = ((int32_t)(L_147>>((int32_t)(L_148&((int32_t)31)))));
		int32_t L_149 = V_5;
		int32_t L_150 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_149, L_150));
		int32_t L_151 = V_9;
		int32_t L_152 = V_12;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_151, L_152));
		int32_t L_153 = V_8;
		int32_t L_154 = V_13;
		if ((((int32_t)L_153) < ((int32_t)L_154)))
		{
			goto IL_029a;
		}
	}
	{
		int32_t L_155 = V_8;
		int32_t L_156 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_155, L_156));
		int32_t L_157 = V_8;
		int32_t L_158 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_157, L_158))) <= ((int32_t)0)))
		{
			goto IL_026b;
		}
	}
	{
		int32_t L_159 = V_8;
		int32_t L_160 = V_14;
		if ((((int32_t)2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_159, L_160)))))
		{
			goto IL_026b;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_161 = ___s6;
		NullCheck(L_161);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_162 = L_161->___window_34;
		int32_t L_163 = V_8;
		int32_t L_164 = L_163;
		V_8 = ((int32_t)il2cpp_codegen_add(L_164, 1));
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_165 = ___s6;
		NullCheck(L_165);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_166 = L_165->___window_34;
		int32_t L_167 = V_14;
		int32_t L_168 = L_167;
		V_14 = ((int32_t)il2cpp_codegen_add(L_168, 1));
		NullCheck(L_166);
		int32_t L_169 = L_168;
		uint8_t L_170 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(L_164), (uint8_t)L_170);
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_171 = ___s6;
		NullCheck(L_171);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_172 = L_171->___window_34;
		int32_t L_173 = V_8;
		int32_t L_174 = L_173;
		V_8 = ((int32_t)il2cpp_codegen_add(L_174, 1));
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_175 = ___s6;
		NullCheck(L_175);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_176 = L_175->___window_34;
		int32_t L_177 = V_14;
		int32_t L_178 = L_177;
		V_14 = ((int32_t)il2cpp_codegen_add(L_178, 1));
		NullCheck(L_176);
		int32_t L_179 = L_178;
		uint8_t L_180 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(L_174), (uint8_t)L_180);
		int32_t L_181 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_181, 2));
		goto IL_0328;
	}

IL_026b:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_182 = ___s6;
		NullCheck(L_182);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_183 = L_182->___window_34;
		int32_t L_184 = V_14;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_185 = ___s6;
		NullCheck(L_185);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_186 = L_185->___window_34;
		int32_t L_187 = V_8;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_183, L_184, (RuntimeArray*)L_186, L_187, 2, NULL);
		int32_t L_188 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_188, 2));
		int32_t L_189 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_189, 2));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_190, 2));
		goto IL_0328;
	}

IL_029a:
	{
		int32_t L_191 = V_8;
		int32_t L_192 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_191, L_192));
	}

IL_02a1:
	{
		int32_t L_193 = V_14;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_194 = ___s6;
		NullCheck(L_194);
		int32_t L_195 = L_194->___end_35;
		V_14 = ((int32_t)il2cpp_codegen_add(L_193, L_195));
		int32_t L_196 = V_14;
		if ((((int32_t)L_196) < ((int32_t)0)))
		{
			goto IL_02a1;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_197 = ___s6;
		NullCheck(L_197);
		int32_t L_198 = L_197->___end_35;
		int32_t L_199 = V_14;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_198, L_199));
		int32_t L_200 = V_12;
		int32_t L_201 = V_3;
		if ((((int32_t)L_200) <= ((int32_t)L_201)))
		{
			goto IL_0328;
		}
	}
	{
		int32_t L_202 = V_12;
		int32_t L_203 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_202, L_203));
		int32_t L_204 = V_8;
		int32_t L_205 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_204, L_205))) <= ((int32_t)0)))
		{
			goto IL_02ff;
		}
	}
	{
		int32_t L_206 = V_3;
		int32_t L_207 = V_8;
		int32_t L_208 = V_14;
		if ((((int32_t)L_206) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_207, L_208)))))
		{
			goto IL_02ff;
		}
	}

IL_02d8:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_209 = ___s6;
		NullCheck(L_209);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_210 = L_209->___window_34;
		int32_t L_211 = V_8;
		int32_t L_212 = L_211;
		V_8 = ((int32_t)il2cpp_codegen_add(L_212, 1));
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_213 = ___s6;
		NullCheck(L_213);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_214 = L_213->___window_34;
		int32_t L_215 = V_14;
		int32_t L_216 = L_215;
		V_14 = ((int32_t)il2cpp_codegen_add(L_216, 1));
		NullCheck(L_214);
		int32_t L_217 = L_216;
		uint8_t L_218 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(L_212), (uint8_t)L_218);
		int32_t L_219 = V_3;
		int32_t L_220 = ((int32_t)il2cpp_codegen_subtract(L_219, 1));
		V_3 = L_220;
		if (L_220)
		{
			goto IL_02d8;
		}
	}
	{
		goto IL_0325;
	}

IL_02ff:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_221 = ___s6;
		NullCheck(L_221);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_222 = L_221->___window_34;
		int32_t L_223 = V_14;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_224 = ___s6;
		NullCheck(L_224);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_225 = L_224->___window_34;
		int32_t L_226 = V_8;
		int32_t L_227 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_222, L_223, (RuntimeArray*)L_225, L_226, L_227, NULL);
		int32_t L_228 = V_8;
		int32_t L_229 = V_3;
		V_8 = ((int32_t)il2cpp_codegen_add(L_228, L_229));
		int32_t L_230 = V_14;
		int32_t L_231 = V_3;
		V_14 = ((int32_t)il2cpp_codegen_add(L_230, L_231));
		V_3 = 0;
	}

IL_0325:
	{
		V_14 = 0;
	}

IL_0328:
	{
		int32_t L_232 = V_8;
		int32_t L_233 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_232, L_233))) <= ((int32_t)0)))
		{
			goto IL_0365;
		}
	}
	{
		int32_t L_234 = V_12;
		int32_t L_235 = V_8;
		int32_t L_236 = V_14;
		if ((((int32_t)L_234) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_235, L_236)))))
		{
			goto IL_0365;
		}
	}

IL_0339:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_237 = ___s6;
		NullCheck(L_237);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_238 = L_237->___window_34;
		int32_t L_239 = V_8;
		int32_t L_240 = L_239;
		V_8 = ((int32_t)il2cpp_codegen_add(L_240, 1));
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_241 = ___s6;
		NullCheck(L_241);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_242 = L_241->___window_34;
		int32_t L_243 = V_14;
		int32_t L_244 = L_243;
		V_14 = ((int32_t)il2cpp_codegen_add(L_244, 1));
		NullCheck(L_242);
		int32_t L_245 = L_244;
		uint8_t L_246 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		NullCheck(L_238);
		(L_238)->SetAt(static_cast<il2cpp_array_size_t>(L_240), (uint8_t)L_246);
		int32_t L_247 = V_12;
		int32_t L_248 = ((int32_t)il2cpp_codegen_subtract(L_247, 1));
		V_12 = L_248;
		if (L_248)
		{
			goto IL_0339;
		}
	}
	{
		goto IL_05c0;
	}

IL_0365:
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_249 = ___s6;
		NullCheck(L_249);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_250 = L_249->___window_34;
		int32_t L_251 = V_14;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_252 = ___s6;
		NullCheck(L_252);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_253 = L_252->___window_34;
		int32_t L_254 = V_8;
		int32_t L_255 = V_12;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_250, L_251, (RuntimeArray*)L_253, L_254, L_255, NULL);
		int32_t L_256 = V_8;
		int32_t L_257 = V_12;
		V_8 = ((int32_t)il2cpp_codegen_add(L_256, L_257));
		int32_t L_258 = V_14;
		int32_t L_259 = V_12;
		V_14 = ((int32_t)il2cpp_codegen_add(L_258, L_259));
		V_12 = 0;
		goto IL_05c0;
	}

IL_0394:
	{
		int32_t L_260 = V_3;
		if (((int32_t)(L_260&((int32_t)64))))
		{
			goto IL_03c1;
		}
	}
	{
		int32_t L_261 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_262 = V_1;
		int32_t L_263 = V_15;
		NullCheck(L_262);
		int32_t L_264 = ((int32_t)il2cpp_codegen_add(L_263, 2));
		int32_t L_265 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		V_0 = ((int32_t)il2cpp_codegen_add(L_261, L_265));
		int32_t L_266 = V_0;
		int32_t L_267 = V_4;
		il2cpp_codegen_runtime_class_init_inline(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = ((InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var))->___inflate_mask_0;
		int32_t L_269 = V_3;
		NullCheck(L_268);
		int32_t L_270 = L_269;
		int32_t L_271 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		V_0 = ((int32_t)il2cpp_codegen_add(L_266, ((int32_t)(L_267&L_271))));
		int32_t L_272 = V_2;
		int32_t L_273 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_272, L_273)), 3));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_274 = V_1;
		int32_t L_275 = V_15;
		NullCheck(L_274);
		int32_t L_276 = L_275;
		int32_t L_277 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		V_3 = L_277;
		goto IL_0181;
	}

IL_03c1:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_278 = ___z7;
		NullCheck(L_278);
		L_278->___msg_25 = _stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948;
		Il2CppCodeGenWriteBarrier((void**)(&L_278->___msg_25), (void*)_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_279 = ___z7;
		NullCheck(L_279);
		int32_t L_280 = L_279->___avail_in_19;
		int32_t L_281 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_280, L_281));
		int32_t L_282 = V_5;
		int32_t L_283 = V_12;
		if ((((int32_t)((int32_t)(L_282>>3))) < ((int32_t)L_283)))
		{
			goto IL_03e5;
		}
	}
	{
		int32_t L_284 = V_12;
		G_B41_0 = L_284;
		goto IL_03e9;
	}

IL_03e5:
	{
		int32_t L_285 = V_5;
		G_B41_0 = ((int32_t)(L_285>>3));
	}

IL_03e9:
	{
		V_12 = G_B41_0;
		int32_t L_286 = V_7;
		int32_t L_287 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add(L_286, L_287));
		int32_t L_288 = V_6;
		int32_t L_289 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_288, L_289));
		int32_t L_290 = V_5;
		int32_t L_291 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_290, ((int32_t)(L_291<<3))));
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_292 = ___s6;
		int32_t L_293 = V_4;
		NullCheck(L_292);
		L_292->___bitb_32 = L_293;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_294 = ___s6;
		int32_t L_295 = V_5;
		NullCheck(L_294);
		L_294->___bitk_31 = L_295;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_296 = ___z7;
		int32_t L_297 = V_7;
		NullCheck(L_296);
		L_296->___avail_in_19 = L_297;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_298 = ___z7;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_299 = L_298;
		NullCheck(L_299);
		int64_t L_300 = L_299->___total_in_20;
		int32_t L_301 = V_6;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_302 = ___z7;
		NullCheck(L_302);
		int32_t L_303 = L_302->___next_in_index_18;
		NullCheck(L_299);
		L_299->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_300, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_301, L_303)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_304 = ___z7;
		int32_t L_305 = V_6;
		NullCheck(L_304);
		L_304->___next_in_index_18 = L_305;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_306 = ___s6;
		int32_t L_307 = V_8;
		NullCheck(L_306);
		L_306->___write_37 = L_307;
		return ((int32_t)-3);
	}

IL_044b:
	{
		int32_t L_308 = V_3;
		if (((int32_t)(L_308&((int32_t)64))))
		{
			goto IL_04b3;
		}
	}
	{
		int32_t L_309 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_310 = V_1;
		int32_t L_311 = V_15;
		NullCheck(L_310);
		int32_t L_312 = ((int32_t)il2cpp_codegen_add(L_311, 2));
		int32_t L_313 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		V_0 = ((int32_t)il2cpp_codegen_add(L_309, L_313));
		int32_t L_314 = V_0;
		int32_t L_315 = V_4;
		il2cpp_codegen_runtime_class_init_inline(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_316 = ((InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var))->___inflate_mask_0;
		int32_t L_317 = V_3;
		NullCheck(L_316);
		int32_t L_318 = L_317;
		int32_t L_319 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		V_0 = ((int32_t)il2cpp_codegen_add(L_314, ((int32_t)(L_315&L_319))));
		int32_t L_320 = V_2;
		int32_t L_321 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_320, L_321)), 3));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_322 = V_1;
		int32_t L_323 = V_15;
		NullCheck(L_322);
		int32_t L_324 = L_323;
		int32_t L_325 = (L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		int32_t L_326 = L_325;
		V_3 = L_326;
		if (L_326)
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_327 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_328 = V_1;
		int32_t L_329 = V_15;
		NullCheck(L_328);
		int32_t L_330 = ((int32_t)il2cpp_codegen_add(L_329, 1));
		int32_t L_331 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		V_4 = ((int32_t)(L_327>>((int32_t)(L_331&((int32_t)31)))));
		int32_t L_332 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = V_1;
		int32_t L_334 = V_15;
		NullCheck(L_333);
		int32_t L_335 = ((int32_t)il2cpp_codegen_add(L_334, 1));
		int32_t L_336 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_332, L_336));
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_337 = ___s6;
		NullCheck(L_337);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_338 = L_337->___window_34;
		int32_t L_339 = V_8;
		int32_t L_340 = L_339;
		V_8 = ((int32_t)il2cpp_codegen_add(L_340, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = V_1;
		int32_t L_342 = V_15;
		NullCheck(L_341);
		int32_t L_343 = ((int32_t)il2cpp_codegen_add(L_342, 2));
		int32_t L_344 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(L_340), (uint8_t)((int32_t)(uint8_t)L_344));
		int32_t L_345 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_345, 1));
		goto IL_05c0;
	}

IL_04b3:
	{
		int32_t L_346 = V_3;
		if (!((int32_t)(L_346&((int32_t)32))))
		{
			goto IL_0536;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_347 = ___z7;
		NullCheck(L_347);
		int32_t L_348 = L_347->___avail_in_19;
		int32_t L_349 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_348, L_349));
		int32_t L_350 = V_5;
		int32_t L_351 = V_12;
		if ((((int32_t)((int32_t)(L_350>>3))) < ((int32_t)L_351)))
		{
			goto IL_04d1;
		}
	}
	{
		int32_t L_352 = V_12;
		G_B49_0 = L_352;
		goto IL_04d5;
	}

IL_04d1:
	{
		int32_t L_353 = V_5;
		G_B49_0 = ((int32_t)(L_353>>3));
	}

IL_04d5:
	{
		V_12 = G_B49_0;
		int32_t L_354 = V_7;
		int32_t L_355 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add(L_354, L_355));
		int32_t L_356 = V_6;
		int32_t L_357 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_356, L_357));
		int32_t L_358 = V_5;
		int32_t L_359 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_358, ((int32_t)(L_359<<3))));
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_360 = ___s6;
		int32_t L_361 = V_4;
		NullCheck(L_360);
		L_360->___bitb_32 = L_361;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_362 = ___s6;
		int32_t L_363 = V_5;
		NullCheck(L_362);
		L_362->___bitk_31 = L_363;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_364 = ___z7;
		int32_t L_365 = V_7;
		NullCheck(L_364);
		L_364->___avail_in_19 = L_365;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_366 = ___z7;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_367 = L_366;
		NullCheck(L_367);
		int64_t L_368 = L_367->___total_in_20;
		int32_t L_369 = V_6;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_370 = ___z7;
		NullCheck(L_370);
		int32_t L_371 = L_370->___next_in_index_18;
		NullCheck(L_367);
		L_367->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_368, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_369, L_371)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_372 = ___z7;
		int32_t L_373 = V_6;
		NullCheck(L_372);
		L_372->___next_in_index_18 = L_373;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_374 = ___s6;
		int32_t L_375 = V_8;
		NullCheck(L_374);
		L_374->___write_37 = L_375;
		return 1;
	}

IL_0536:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_376 = ___z7;
		NullCheck(L_376);
		L_376->___msg_25 = _stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16;
		Il2CppCodeGenWriteBarrier((void**)(&L_376->___msg_25), (void*)_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_377 = ___z7;
		NullCheck(L_377);
		int32_t L_378 = L_377->___avail_in_19;
		int32_t L_379 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_378, L_379));
		int32_t L_380 = V_5;
		int32_t L_381 = V_12;
		if ((((int32_t)((int32_t)(L_380>>3))) < ((int32_t)L_381)))
		{
			goto IL_055a;
		}
	}
	{
		int32_t L_382 = V_12;
		G_B53_0 = L_382;
		goto IL_055e;
	}

IL_055a:
	{
		int32_t L_383 = V_5;
		G_B53_0 = ((int32_t)(L_383>>3));
	}

IL_055e:
	{
		V_12 = G_B53_0;
		int32_t L_384 = V_7;
		int32_t L_385 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add(L_384, L_385));
		int32_t L_386 = V_6;
		int32_t L_387 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_386, L_387));
		int32_t L_388 = V_5;
		int32_t L_389 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_388, ((int32_t)(L_389<<3))));
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_390 = ___s6;
		int32_t L_391 = V_4;
		NullCheck(L_390);
		L_390->___bitb_32 = L_391;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_392 = ___s6;
		int32_t L_393 = V_5;
		NullCheck(L_392);
		L_392->___bitk_31 = L_393;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_394 = ___z7;
		int32_t L_395 = V_7;
		NullCheck(L_394);
		L_394->___avail_in_19 = L_395;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_396 = ___z7;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_397 = L_396;
		NullCheck(L_397);
		int64_t L_398 = L_397->___total_in_20;
		int32_t L_399 = V_6;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_400 = ___z7;
		NullCheck(L_400);
		int32_t L_401 = L_400->___next_in_index_18;
		NullCheck(L_397);
		L_397->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_398, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_399, L_401)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_402 = ___z7;
		int32_t L_403 = V_6;
		NullCheck(L_402);
		L_402->___next_in_index_18 = L_403;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_404 = ___s6;
		int32_t L_405 = V_8;
		NullCheck(L_404);
		L_404->___write_37 = L_405;
		return ((int32_t)-3);
	}

IL_05c0:
	{
		int32_t L_406 = V_9;
		if ((((int32_t)L_406) < ((int32_t)((int32_t)258))))
		{
			goto IL_05d2;
		}
	}
	{
		int32_t L_407 = V_7;
		if ((((int32_t)L_407) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0092;
		}
	}

IL_05d2:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_408 = ___z7;
		NullCheck(L_408);
		int32_t L_409 = L_408->___avail_in_19;
		int32_t L_410 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_409, L_410));
		int32_t L_411 = V_5;
		int32_t L_412 = V_12;
		if ((((int32_t)((int32_t)(L_411>>3))) < ((int32_t)L_412)))
		{
			goto IL_05ea;
		}
	}
	{
		int32_t L_413 = V_12;
		G_B59_0 = L_413;
		goto IL_05ee;
	}

IL_05ea:
	{
		int32_t L_414 = V_5;
		G_B59_0 = ((int32_t)(L_414>>3));
	}

IL_05ee:
	{
		V_12 = G_B59_0;
		int32_t L_415 = V_7;
		int32_t L_416 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add(L_415, L_416));
		int32_t L_417 = V_6;
		int32_t L_418 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_417, L_418));
		int32_t L_419 = V_5;
		int32_t L_420 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_419, ((int32_t)(L_420<<3))));
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_421 = ___s6;
		int32_t L_422 = V_4;
		NullCheck(L_421);
		L_421->___bitb_32 = L_422;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_423 = ___s6;
		int32_t L_424 = V_5;
		NullCheck(L_423);
		L_423->___bitk_31 = L_424;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_425 = ___z7;
		int32_t L_426 = V_7;
		NullCheck(L_425);
		L_425->___avail_in_19 = L_426;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_427 = ___z7;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_428 = L_427;
		NullCheck(L_428);
		int64_t L_429 = L_428->___total_in_20;
		int32_t L_430 = V_6;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_431 = ___z7;
		NullCheck(L_431);
		int32_t L_432 = L_431->___next_in_index_18;
		NullCheck(L_428);
		L_428->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_429, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_430, L_432)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_433 = ___z7;
		int32_t L_434 = V_6;
		NullCheck(L_433);
		L_433->___next_in_index_18 = L_434;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_435 = ___s6;
		int32_t L_436 = V_8;
		NullCheck(L_435);
		L_435->___write_37 = L_436;
		return 0;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.InfCodes::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes__cctor_m2CFEB78701F09513F4E3D0658D302A42A344C494 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_367_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_367_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var))->___inflate_mask_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t174233DFEC84CCDC22CADA2046992B2475D31E03_il2cpp_TypeInfo_var))->___inflate_mask_0), (void*)L_1);
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
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateReset(Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateReset_m3BE5D6498A176BA49D1425BCCA320DB1D6FBA6C9 (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* G_B5_0 = NULL;
	Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* G_B6_1 = NULL;
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___z0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_1 = ___z0;
		NullCheck(L_1);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_2 = L_1->___istate_27;
		if (L_2)
		{
			goto IL_000e;
		}
	}

IL_000b:
	{
		return ((int32_t)-2);
	}

IL_000e:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_3 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_4 = ___z0;
		int64_t L_5 = ((int64_t)0);
		V_0 = L_5;
		NullCheck(L_4);
		L_4->___total_out_24 = L_5;
		int64_t L_6 = V_0;
		NullCheck(L_3);
		L_3->___total_in_20 = L_6;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_7 = ___z0;
		NullCheck(L_7);
		L_7->___msg_25 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___msg_25), (void*)(String_t*)NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_8 = ___z0;
		NullCheck(L_8);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_9 = L_8->___istate_27;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_10 = ___z0;
		NullCheck(L_10);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_11 = L_10->___istate_27;
		NullCheck(L_11);
		int32_t L_12 = L_11->___nowrap_36;
		G_B4_0 = L_9;
		if (L_12)
		{
			G_B5_0 = L_9;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_003d;
	}

IL_003c:
	{
		G_B6_0 = 7;
		G_B6_1 = G_B5_0;
	}

IL_003d:
	{
		NullCheck(G_B6_1);
		G_B6_1->___mode_31 = G_B6_0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_13 = ___z0;
		NullCheck(L_13);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_14 = L_13->___istate_27;
		NullCheck(L_14);
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_15 = L_14->___blocks_38;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_16 = ___z0;
		NullCheck(L_15);
		InfBlocks_reset_mCF7F8F6D95FA3BA6CB321A23408D19B13D5FF090(L_15, L_16, (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)NULL, NULL);
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateEnd(Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateEnd_m7DE4EE94BC35E24DDD74A6005B3AF8CF5C61E410 (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, const RuntimeMethod* method) 
{
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_0 = __this->___blocks_38;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_1 = __this->___blocks_38;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_2 = ___z0;
		NullCheck(L_1);
		InfBlocks_free_mA1E3C82DCF66642EB72A346E558CD50FEA4389F1(L_1, L_2, NULL);
	}

IL_0014:
	{
		__this->___blocks_38 = (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blocks_38), (void*)(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54*)NULL);
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateInit(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateInit_mD400EDDA880FBBB05FBBC77F9DB6AB9583214084 (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, int32_t ___w1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* G_B7_0 = NULL;
	Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* G_B7_1 = NULL;
	ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* G_B6_0 = NULL;
	Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* G_B6_1 = NULL;
	Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* G_B8_0 = NULL;
	ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* G_B8_1 = NULL;
	Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* G_B8_2 = NULL;
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___z0;
		NullCheck(L_0);
		L_0->___msg_25 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___msg_25), (void*)(String_t*)NULL);
		__this->___blocks_38 = (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blocks_38), (void*)(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54*)NULL);
		__this->___nowrap_36 = 0;
		int32_t L_1 = ___w1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___w1;
		___w1 = ((-L_2));
		__this->___nowrap_36 = 1;
	}

IL_0024:
	{
		int32_t L_3 = ___w1;
		if ((((int32_t)L_3) < ((int32_t)8)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = ___w1;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0038;
		}
	}

IL_002d:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_5 = ___z0;
		int32_t L_6;
		L_6 = Inflate_inflateEnd_m7DE4EE94BC35E24DDD74A6005B3AF8CF5C61E410(__this, L_5, NULL);
		return ((int32_t)-2);
	}

IL_0038:
	{
		int32_t L_7 = ___w1;
		__this->___wbits_37 = L_7;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_8 = ___z0;
		NullCheck(L_8);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_9 = L_8->___istate_27;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_10 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_11 = ___z0;
		NullCheck(L_11);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_12 = L_11->___istate_27;
		NullCheck(L_12);
		int32_t L_13 = L_12->___nowrap_36;
		G_B6_0 = L_10;
		G_B6_1 = L_9;
		if (L_13)
		{
			G_B7_0 = L_10;
			G_B7_1 = L_9;
			goto IL_0056;
		}
	}
	{
		G_B8_0 = __this;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = ((Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568*)(NULL));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0057:
	{
		int32_t L_14 = ___w1;
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_15 = (InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54*)il2cpp_codegen_object_new(InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		InfBlocks__ctor_mBEC9FDE2FCF80BDA5FE0CF05655AA8C5019E187B(L_15, G_B8_1, G_B8_0, ((int32_t)(1<<((int32_t)(L_14&((int32_t)31))))), NULL);
		NullCheck(G_B8_2);
		G_B8_2->___blocks_38 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_2->___blocks_38), (void*)L_15);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_16 = ___z0;
		int32_t L_17;
		L_17 = Inflate_inflateReset_m3BE5D6498A176BA49D1425BCCA320DB1D6FBA6C9(__this, L_16, NULL);
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflate(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflate_mD4DEF2B6B03F0011D482E7EB2190C61B7F5C1747 (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, int32_t ___f1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA840F25536BE8295D00B8780BF11900F5EE6774E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA84EF263557F5F56FABA93B2A6EC89E8F3E0102);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B7_0 = 0;
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___z0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_1 = ___z0;
		NullCheck(L_1);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_2 = L_1->___istate_27;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_3 = ___z0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3->___next_in_17;
		if (L_4)
		{
			goto IL_0016;
		}
	}

IL_0013:
	{
		return ((int32_t)-2);
	}

IL_0016:
	{
		int32_t L_5 = ___f1;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_001f;
	}

IL_001d:
	{
		G_B7_0 = ((int32_t)-5);
	}

IL_001f:
	{
		___f1 = G_B7_0;
		V_0 = ((int32_t)-5);
	}

IL_0024:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_6 = ___z0;
		NullCheck(L_6);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_7 = L_6->___istate_27;
		NullCheck(L_7);
		int32_t L_8 = L_7->___mode_31;
		V_2 = L_8;
		int32_t L_9 = V_2;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0073;
			}
			case 1:
			{
				goto IL_0142;
			}
			case 2:
			{
				goto IL_01ea;
			}
			case 3:
			{
				goto IL_0253;
			}
			case 4:
			{
				goto IL_02c3;
			}
			case 5:
			{
				goto IL_0332;
			}
			case 6:
			{
				goto IL_03ac;
			}
			case 7:
			{
				goto IL_03d3;
			}
			case 8:
			{
				goto IL_045d;
			}
			case 9:
			{
				goto IL_04c7;
			}
			case 10:
			{
				goto IL_0538;
			}
			case 11:
			{
				goto IL_05a8;
			}
			case 12:
			{
				goto IL_0655;
			}
			case 13:
			{
				goto IL_0657;
			}
		}
	}
	{
		goto IL_065a;
	}

IL_0073:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_10 = ___z0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___avail_in_19;
		if (L_11)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_007d:
	{
		int32_t L_13 = ___f1;
		V_0 = L_13;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_14 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->___avail_in_19;
		NullCheck(L_15);
		L_15->___avail_in_19 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_17 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_18 = L_17;
		NullCheck(L_18);
		int64_t L_19 = L_18->___total_in_20;
		NullCheck(L_18);
		L_18->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_19, ((int64_t)1)));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_20 = ___z0;
		NullCheck(L_20);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_21 = L_20->___istate_27;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_22 = ___z0;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = L_22->___next_in_17;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_24 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26 = L_25->___next_in_index_18;
		V_3 = L_26;
		int32_t L_27 = V_3;
		NullCheck(L_25);
		L_25->___next_in_index_18 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_3;
		NullCheck(L_23);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		uint8_t L_31 = L_30;
		V_3 = L_31;
		NullCheck(L_21);
		L_21->___method_32 = L_31;
		int32_t L_32 = V_3;
		if ((((int32_t)((int32_t)(L_32&((int32_t)15)))) == ((int32_t)8)))
		{
			goto IL_00f1;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_33 = ___z0;
		NullCheck(L_33);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_34 = L_33->___istate_27;
		NullCheck(L_34);
		L_34->___mode_31 = ((int32_t)13);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_35 = ___z0;
		NullCheck(L_35);
		L_35->___msg_25 = _stringLiteralA840F25536BE8295D00B8780BF11900F5EE6774E;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->___msg_25), (void*)_stringLiteralA840F25536BE8295D00B8780BF11900F5EE6774E);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_36 = ___z0;
		NullCheck(L_36);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_37 = L_36->___istate_27;
		NullCheck(L_37);
		L_37->___marker_35 = 5;
		goto IL_0024;
	}

IL_00f1:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_38 = ___z0;
		NullCheck(L_38);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_39 = L_38->___istate_27;
		NullCheck(L_39);
		int32_t L_40 = L_39->___method_32;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_41 = ___z0;
		NullCheck(L_41);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_42 = L_41->___istate_27;
		NullCheck(L_42);
		int32_t L_43 = L_42->___wbits_37;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_40>>4)), 8))) <= ((int32_t)L_43)))
		{
			goto IL_0136;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_44 = ___z0;
		NullCheck(L_44);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_45 = L_44->___istate_27;
		NullCheck(L_45);
		L_45->___mode_31 = ((int32_t)13);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_46 = ___z0;
		NullCheck(L_46);
		L_46->___msg_25 = _stringLiteralDA84EF263557F5F56FABA93B2A6EC89E8F3E0102;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->___msg_25), (void*)_stringLiteralDA84EF263557F5F56FABA93B2A6EC89E8F3E0102);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_47 = ___z0;
		NullCheck(L_47);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_48 = L_47->___istate_27;
		NullCheck(L_48);
		L_48->___marker_35 = 5;
		goto IL_0024;
	}

IL_0136:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_49 = ___z0;
		NullCheck(L_49);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_50 = L_49->___istate_27;
		NullCheck(L_50);
		L_50->___mode_31 = 1;
	}

IL_0142:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_51 = ___z0;
		NullCheck(L_51);
		int32_t L_52 = L_51->___avail_in_19;
		if (L_52)
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_53 = V_0;
		return L_53;
	}

IL_014c:
	{
		int32_t L_54 = ___f1;
		V_0 = L_54;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_55 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_56 = L_55;
		NullCheck(L_56);
		int32_t L_57 = L_56->___avail_in_19;
		NullCheck(L_56);
		L_56->___avail_in_19 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_58 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_59 = L_58;
		NullCheck(L_59);
		int64_t L_60 = L_59->___total_in_20;
		NullCheck(L_59);
		L_59->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_60, ((int64_t)1)));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_61 = ___z0;
		NullCheck(L_61);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = L_61->___next_in_17;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_63 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_64 = L_63;
		NullCheck(L_64);
		int32_t L_65 = L_64->___next_in_index_18;
		V_3 = L_65;
		int32_t L_66 = V_3;
		NullCheck(L_64);
		L_64->___next_in_index_18 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		int32_t L_67 = V_3;
		NullCheck(L_62);
		int32_t L_68 = L_67;
		uint8_t L_69 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_1 = ((int32_t)((int32_t)L_69&((int32_t)255)));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_70 = ___z0;
		NullCheck(L_70);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_71 = L_70->___istate_27;
		NullCheck(L_71);
		int32_t L_72 = L_71->___method_32;
		int32_t L_73 = V_1;
		if (!((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(L_72<<8)), L_73))%((int32_t)31))))
		{
			goto IL_01c7;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_74 = ___z0;
		NullCheck(L_74);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_75 = L_74->___istate_27;
		NullCheck(L_75);
		L_75->___mode_31 = ((int32_t)13);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_76 = ___z0;
		NullCheck(L_76);
		L_76->___msg_25 = _stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417;
		Il2CppCodeGenWriteBarrier((void**)(&L_76->___msg_25), (void*)_stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_77 = ___z0;
		NullCheck(L_77);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_78 = L_77->___istate_27;
		NullCheck(L_78);
		L_78->___marker_35 = 5;
		goto IL_0024;
	}

IL_01c7:
	{
		int32_t L_79 = V_1;
		if (((int32_t)(L_79&((int32_t)32))))
		{
			goto IL_01de;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_80 = ___z0;
		NullCheck(L_80);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_81 = L_80->___istate_27;
		NullCheck(L_81);
		L_81->___mode_31 = 7;
		goto IL_0024;
	}

IL_01de:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_82 = ___z0;
		NullCheck(L_82);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_83 = L_82->___istate_27;
		NullCheck(L_83);
		L_83->___mode_31 = 2;
	}

IL_01ea:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_84 = ___z0;
		NullCheck(L_84);
		int32_t L_85 = L_84->___avail_in_19;
		if (L_85)
		{
			goto IL_01f4;
		}
	}
	{
		int32_t L_86 = V_0;
		return L_86;
	}

IL_01f4:
	{
		int32_t L_87 = ___f1;
		V_0 = L_87;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_88 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_89 = L_88;
		NullCheck(L_89);
		int32_t L_90 = L_89->___avail_in_19;
		NullCheck(L_89);
		L_89->___avail_in_19 = ((int32_t)il2cpp_codegen_subtract(L_90, 1));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_91 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_92 = L_91;
		NullCheck(L_92);
		int64_t L_93 = L_92->___total_in_20;
		NullCheck(L_92);
		L_92->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_93, ((int64_t)1)));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_94 = ___z0;
		NullCheck(L_94);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_95 = L_94->___istate_27;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_96 = ___z0;
		NullCheck(L_96);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = L_96->___next_in_17;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_98 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_99 = L_98;
		NullCheck(L_99);
		int32_t L_100 = L_99->___next_in_index_18;
		V_3 = L_100;
		int32_t L_101 = V_3;
		NullCheck(L_99);
		L_99->___next_in_index_18 = ((int32_t)il2cpp_codegen_add(L_101, 1));
		int32_t L_102 = V_3;
		NullCheck(L_97);
		int32_t L_103 = L_102;
		uint8_t L_104 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_95);
		L_95->___need_34 = ((int64_t)(((int64_t)((int32_t)(((int32_t)((int32_t)L_104&((int32_t)255)))<<((int32_t)24))))&((int64_t)(uint64_t)((uint32_t)((int32_t)-16777216)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_105 = ___z0;
		NullCheck(L_105);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_106 = L_105->___istate_27;
		NullCheck(L_106);
		L_106->___mode_31 = 3;
	}

IL_0253:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_107 = ___z0;
		NullCheck(L_107);
		int32_t L_108 = L_107->___avail_in_19;
		if (L_108)
		{
			goto IL_025d;
		}
	}
	{
		int32_t L_109 = V_0;
		return L_109;
	}

IL_025d:
	{
		int32_t L_110 = ___f1;
		V_0 = L_110;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_111 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_112 = L_111;
		NullCheck(L_112);
		int32_t L_113 = L_112->___avail_in_19;
		NullCheck(L_112);
		L_112->___avail_in_19 = ((int32_t)il2cpp_codegen_subtract(L_113, 1));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_114 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_115 = L_114;
		NullCheck(L_115);
		int64_t L_116 = L_115->___total_in_20;
		NullCheck(L_115);
		L_115->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_116, ((int64_t)1)));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_117 = ___z0;
		NullCheck(L_117);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_118 = L_117->___istate_27;
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_119 = L_118;
		NullCheck(L_119);
		int64_t L_120 = L_119->___need_34;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_121 = ___z0;
		NullCheck(L_121);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_122 = L_121->___next_in_17;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_123 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_124 = L_123;
		NullCheck(L_124);
		int32_t L_125 = L_124->___next_in_index_18;
		V_3 = L_125;
		int32_t L_126 = V_3;
		NullCheck(L_124);
		L_124->___next_in_index_18 = ((int32_t)il2cpp_codegen_add(L_126, 1));
		int32_t L_127 = V_3;
		NullCheck(L_122);
		int32_t L_128 = L_127;
		uint8_t L_129 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_119);
		L_119->___need_34 = ((int64_t)il2cpp_codegen_add(L_120, ((int64_t)(((int64_t)((int32_t)(((int32_t)((int32_t)L_129&((int32_t)255)))<<((int32_t)16))))&((int64_t)((int32_t)16711680))))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_130 = ___z0;
		NullCheck(L_130);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_131 = L_130->___istate_27;
		NullCheck(L_131);
		L_131->___mode_31 = 4;
	}

IL_02c3:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_132 = ___z0;
		NullCheck(L_132);
		int32_t L_133 = L_132->___avail_in_19;
		if (L_133)
		{
			goto IL_02cd;
		}
	}
	{
		int32_t L_134 = V_0;
		return L_134;
	}

IL_02cd:
	{
		int32_t L_135 = ___f1;
		V_0 = L_135;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_136 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_137 = L_136;
		NullCheck(L_137);
		int32_t L_138 = L_137->___avail_in_19;
		NullCheck(L_137);
		L_137->___avail_in_19 = ((int32_t)il2cpp_codegen_subtract(L_138, 1));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_139 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_140 = L_139;
		NullCheck(L_140);
		int64_t L_141 = L_140->___total_in_20;
		NullCheck(L_140);
		L_140->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_141, ((int64_t)1)));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_142 = ___z0;
		NullCheck(L_142);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_143 = L_142->___istate_27;
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_144 = L_143;
		NullCheck(L_144);
		int64_t L_145 = L_144->___need_34;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_146 = ___z0;
		NullCheck(L_146);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_147 = L_146->___next_in_17;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_148 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_149 = L_148;
		NullCheck(L_149);
		int32_t L_150 = L_149->___next_in_index_18;
		V_3 = L_150;
		int32_t L_151 = V_3;
		NullCheck(L_149);
		L_149->___next_in_index_18 = ((int32_t)il2cpp_codegen_add(L_151, 1));
		int32_t L_152 = V_3;
		NullCheck(L_147);
		int32_t L_153 = L_152;
		uint8_t L_154 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_144);
		L_144->___need_34 = ((int64_t)il2cpp_codegen_add(L_145, ((int64_t)(((int64_t)((int32_t)(((int32_t)((int32_t)L_154&((int32_t)255)))<<8)))&((int64_t)((int32_t)65280))))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_155 = ___z0;
		NullCheck(L_155);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_156 = L_155->___istate_27;
		NullCheck(L_156);
		L_156->___mode_31 = 5;
	}

IL_0332:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_157 = ___z0;
		NullCheck(L_157);
		int32_t L_158 = L_157->___avail_in_19;
		if (L_158)
		{
			goto IL_033c;
		}
	}
	{
		int32_t L_159 = V_0;
		return L_159;
	}

IL_033c:
	{
		int32_t L_160 = ___f1;
		V_0 = L_160;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_161 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_162 = L_161;
		NullCheck(L_162);
		int32_t L_163 = L_162->___avail_in_19;
		NullCheck(L_162);
		L_162->___avail_in_19 = ((int32_t)il2cpp_codegen_subtract(L_163, 1));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_164 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_165 = L_164;
		NullCheck(L_165);
		int64_t L_166 = L_165->___total_in_20;
		NullCheck(L_165);
		L_165->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_166, ((int64_t)1)));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_167 = ___z0;
		NullCheck(L_167);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_168 = L_167->___istate_27;
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_169 = L_168;
		NullCheck(L_169);
		int64_t L_170 = L_169->___need_34;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_171 = ___z0;
		NullCheck(L_171);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_172 = L_171->___next_in_17;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_173 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_174 = L_173;
		NullCheck(L_174);
		int32_t L_175 = L_174->___next_in_index_18;
		V_3 = L_175;
		int32_t L_176 = V_3;
		NullCheck(L_174);
		L_174->___next_in_index_18 = ((int32_t)il2cpp_codegen_add(L_176, 1));
		int32_t L_177 = V_3;
		NullCheck(L_172);
		int32_t L_178 = L_177;
		uint8_t L_179 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		NullCheck(L_169);
		L_169->___need_34 = ((int64_t)il2cpp_codegen_add(L_170, ((int64_t)(((int64_t)(uint64_t)L_179)&((int64_t)((int32_t)255))))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_180 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_181 = ___z0;
		NullCheck(L_181);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_182 = L_181->___istate_27;
		NullCheck(L_182);
		int64_t L_183 = L_182->___need_34;
		NullCheck(L_180);
		L_180->___adler_29 = L_183;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_184 = ___z0;
		NullCheck(L_184);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_185 = L_184->___istate_27;
		NullCheck(L_185);
		L_185->___mode_31 = 6;
		return 2;
	}

IL_03ac:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_186 = ___z0;
		NullCheck(L_186);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_187 = L_186->___istate_27;
		NullCheck(L_187);
		L_187->___mode_31 = ((int32_t)13);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_188 = ___z0;
		NullCheck(L_188);
		L_188->___msg_25 = _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E;
		Il2CppCodeGenWriteBarrier((void**)(&L_188->___msg_25), (void*)_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_189 = ___z0;
		NullCheck(L_189);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_190 = L_189->___istate_27;
		NullCheck(L_190);
		L_190->___marker_35 = 0;
		return ((int32_t)-2);
	}

IL_03d3:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_191 = ___z0;
		NullCheck(L_191);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_192 = L_191->___istate_27;
		NullCheck(L_192);
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_193 = L_192->___blocks_38;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_194 = ___z0;
		int32_t L_195 = V_0;
		NullCheck(L_193);
		int32_t L_196;
		L_196 = InfBlocks_proc_mC70327D37A4CBA908F9C618512725C1C2E704EE3(L_193, L_194, L_195, NULL);
		V_0 = L_196;
		int32_t L_197 = V_0;
		if ((!(((uint32_t)L_197) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0409;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_198 = ___z0;
		NullCheck(L_198);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_199 = L_198->___istate_27;
		NullCheck(L_199);
		L_199->___mode_31 = ((int32_t)13);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_200 = ___z0;
		NullCheck(L_200);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_201 = L_200->___istate_27;
		NullCheck(L_201);
		L_201->___marker_35 = 0;
		goto IL_0024;
	}

IL_0409:
	{
		int32_t L_202 = V_0;
		if (L_202)
		{
			goto IL_040e;
		}
	}
	{
		int32_t L_203 = ___f1;
		V_0 = L_203;
	}

IL_040e:
	{
		int32_t L_204 = V_0;
		if ((((int32_t)L_204) == ((int32_t)1)))
		{
			goto IL_0414;
		}
	}
	{
		int32_t L_205 = V_0;
		return L_205;
	}

IL_0414:
	{
		int32_t L_206 = ___f1;
		V_0 = L_206;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_207 = ___z0;
		NullCheck(L_207);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_208 = L_207->___istate_27;
		NullCheck(L_208);
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_209 = L_208->___blocks_38;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_210 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_211 = ___z0;
		NullCheck(L_211);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_212 = L_211->___istate_27;
		NullCheck(L_212);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_213 = L_212->___was_33;
		NullCheck(L_209);
		InfBlocks_reset_mCF7F8F6D95FA3BA6CB321A23408D19B13D5FF090(L_209, L_210, L_213, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_214 = ___z0;
		NullCheck(L_214);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_215 = L_214->___istate_27;
		NullCheck(L_215);
		int32_t L_216 = L_215->___nowrap_36;
		if (!L_216)
		{
			goto IL_0451;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_217 = ___z0;
		NullCheck(L_217);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_218 = L_217->___istate_27;
		NullCheck(L_218);
		L_218->___mode_31 = ((int32_t)12);
		goto IL_0024;
	}

IL_0451:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_219 = ___z0;
		NullCheck(L_219);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_220 = L_219->___istate_27;
		NullCheck(L_220);
		L_220->___mode_31 = 8;
	}

IL_045d:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_221 = ___z0;
		NullCheck(L_221);
		int32_t L_222 = L_221->___avail_in_19;
		if (L_222)
		{
			goto IL_0467;
		}
	}
	{
		int32_t L_223 = V_0;
		return L_223;
	}

IL_0467:
	{
		int32_t L_224 = ___f1;
		V_0 = L_224;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_225 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_226 = L_225;
		NullCheck(L_226);
		int32_t L_227 = L_226->___avail_in_19;
		NullCheck(L_226);
		L_226->___avail_in_19 = ((int32_t)il2cpp_codegen_subtract(L_227, 1));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_228 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_229 = L_228;
		NullCheck(L_229);
		int64_t L_230 = L_229->___total_in_20;
		NullCheck(L_229);
		L_229->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_230, ((int64_t)1)));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_231 = ___z0;
		NullCheck(L_231);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_232 = L_231->___istate_27;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_233 = ___z0;
		NullCheck(L_233);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_234 = L_233->___next_in_17;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_235 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_236 = L_235;
		NullCheck(L_236);
		int32_t L_237 = L_236->___next_in_index_18;
		V_3 = L_237;
		int32_t L_238 = V_3;
		NullCheck(L_236);
		L_236->___next_in_index_18 = ((int32_t)il2cpp_codegen_add(L_238, 1));
		int32_t L_239 = V_3;
		NullCheck(L_234);
		int32_t L_240 = L_239;
		uint8_t L_241 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_240));
		NullCheck(L_232);
		L_232->___need_34 = ((int64_t)(((int64_t)((int32_t)(((int32_t)((int32_t)L_241&((int32_t)255)))<<((int32_t)24))))&((int64_t)(uint64_t)((uint32_t)((int32_t)-16777216)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_242 = ___z0;
		NullCheck(L_242);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_243 = L_242->___istate_27;
		NullCheck(L_243);
		L_243->___mode_31 = ((int32_t)9);
	}

IL_04c7:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_244 = ___z0;
		NullCheck(L_244);
		int32_t L_245 = L_244->___avail_in_19;
		if (L_245)
		{
			goto IL_04d1;
		}
	}
	{
		int32_t L_246 = V_0;
		return L_246;
	}

IL_04d1:
	{
		int32_t L_247 = ___f1;
		V_0 = L_247;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_248 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_249 = L_248;
		NullCheck(L_249);
		int32_t L_250 = L_249->___avail_in_19;
		NullCheck(L_249);
		L_249->___avail_in_19 = ((int32_t)il2cpp_codegen_subtract(L_250, 1));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_251 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_252 = L_251;
		NullCheck(L_252);
		int64_t L_253 = L_252->___total_in_20;
		NullCheck(L_252);
		L_252->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_253, ((int64_t)1)));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_254 = ___z0;
		NullCheck(L_254);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_255 = L_254->___istate_27;
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_256 = L_255;
		NullCheck(L_256);
		int64_t L_257 = L_256->___need_34;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_258 = ___z0;
		NullCheck(L_258);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_259 = L_258->___next_in_17;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_260 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_261 = L_260;
		NullCheck(L_261);
		int32_t L_262 = L_261->___next_in_index_18;
		V_3 = L_262;
		int32_t L_263 = V_3;
		NullCheck(L_261);
		L_261->___next_in_index_18 = ((int32_t)il2cpp_codegen_add(L_263, 1));
		int32_t L_264 = V_3;
		NullCheck(L_259);
		int32_t L_265 = L_264;
		uint8_t L_266 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		NullCheck(L_256);
		L_256->___need_34 = ((int64_t)il2cpp_codegen_add(L_257, ((int64_t)(((int64_t)((int32_t)(((int32_t)((int32_t)L_266&((int32_t)255)))<<((int32_t)16))))&((int64_t)((int32_t)16711680))))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_267 = ___z0;
		NullCheck(L_267);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_268 = L_267->___istate_27;
		NullCheck(L_268);
		L_268->___mode_31 = ((int32_t)10);
	}

IL_0538:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_269 = ___z0;
		NullCheck(L_269);
		int32_t L_270 = L_269->___avail_in_19;
		if (L_270)
		{
			goto IL_0542;
		}
	}
	{
		int32_t L_271 = V_0;
		return L_271;
	}

IL_0542:
	{
		int32_t L_272 = ___f1;
		V_0 = L_272;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_273 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_274 = L_273;
		NullCheck(L_274);
		int32_t L_275 = L_274->___avail_in_19;
		NullCheck(L_274);
		L_274->___avail_in_19 = ((int32_t)il2cpp_codegen_subtract(L_275, 1));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_276 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_277 = L_276;
		NullCheck(L_277);
		int64_t L_278 = L_277->___total_in_20;
		NullCheck(L_277);
		L_277->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_278, ((int64_t)1)));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_279 = ___z0;
		NullCheck(L_279);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_280 = L_279->___istate_27;
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_281 = L_280;
		NullCheck(L_281);
		int64_t L_282 = L_281->___need_34;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_283 = ___z0;
		NullCheck(L_283);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_284 = L_283->___next_in_17;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_285 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_286 = L_285;
		NullCheck(L_286);
		int32_t L_287 = L_286->___next_in_index_18;
		V_3 = L_287;
		int32_t L_288 = V_3;
		NullCheck(L_286);
		L_286->___next_in_index_18 = ((int32_t)il2cpp_codegen_add(L_288, 1));
		int32_t L_289 = V_3;
		NullCheck(L_284);
		int32_t L_290 = L_289;
		uint8_t L_291 = (L_284)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		NullCheck(L_281);
		L_281->___need_34 = ((int64_t)il2cpp_codegen_add(L_282, ((int64_t)(((int64_t)((int32_t)(((int32_t)((int32_t)L_291&((int32_t)255)))<<8)))&((int64_t)((int32_t)65280))))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_292 = ___z0;
		NullCheck(L_292);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_293 = L_292->___istate_27;
		NullCheck(L_293);
		L_293->___mode_31 = ((int32_t)11);
	}

IL_05a8:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_294 = ___z0;
		NullCheck(L_294);
		int32_t L_295 = L_294->___avail_in_19;
		if (L_295)
		{
			goto IL_05b2;
		}
	}
	{
		int32_t L_296 = V_0;
		return L_296;
	}

IL_05b2:
	{
		int32_t L_297 = ___f1;
		V_0 = L_297;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_298 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_299 = L_298;
		NullCheck(L_299);
		int32_t L_300 = L_299->___avail_in_19;
		NullCheck(L_299);
		L_299->___avail_in_19 = ((int32_t)il2cpp_codegen_subtract(L_300, 1));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_301 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_302 = L_301;
		NullCheck(L_302);
		int64_t L_303 = L_302->___total_in_20;
		NullCheck(L_302);
		L_302->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_303, ((int64_t)1)));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_304 = ___z0;
		NullCheck(L_304);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_305 = L_304->___istate_27;
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_306 = L_305;
		NullCheck(L_306);
		int64_t L_307 = L_306->___need_34;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_308 = ___z0;
		NullCheck(L_308);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_309 = L_308->___next_in_17;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_310 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_311 = L_310;
		NullCheck(L_311);
		int32_t L_312 = L_311->___next_in_index_18;
		V_3 = L_312;
		int32_t L_313 = V_3;
		NullCheck(L_311);
		L_311->___next_in_index_18 = ((int32_t)il2cpp_codegen_add(L_313, 1));
		int32_t L_314 = V_3;
		NullCheck(L_309);
		int32_t L_315 = L_314;
		uint8_t L_316 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		NullCheck(L_306);
		L_306->___need_34 = ((int64_t)il2cpp_codegen_add(L_307, ((int64_t)(((int64_t)(uint64_t)L_316)&((int64_t)((int32_t)255))))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_317 = ___z0;
		NullCheck(L_317);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_318 = L_317->___istate_27;
		NullCheck(L_318);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_319 = L_318->___was_33;
		NullCheck(L_319);
		int32_t L_320 = 0;
		int64_t L_321 = (L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_322 = ___z0;
		NullCheck(L_322);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_323 = L_322->___istate_27;
		NullCheck(L_323);
		int64_t L_324 = L_323->___need_34;
		if ((((int32_t)((int32_t)L_321)) == ((int32_t)((int32_t)L_324))))
		{
			goto IL_0648;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_325 = ___z0;
		NullCheck(L_325);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_326 = L_325->___istate_27;
		NullCheck(L_326);
		L_326->___mode_31 = ((int32_t)13);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_327 = ___z0;
		NullCheck(L_327);
		L_327->___msg_25 = _stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40;
		Il2CppCodeGenWriteBarrier((void**)(&L_327->___msg_25), (void*)_stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_328 = ___z0;
		NullCheck(L_328);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_329 = L_328->___istate_27;
		NullCheck(L_329);
		L_329->___marker_35 = 5;
		goto IL_0024;
	}

IL_0648:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_330 = ___z0;
		NullCheck(L_330);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_331 = L_330->___istate_27;
		NullCheck(L_331);
		L_331->___mode_31 = ((int32_t)12);
	}

IL_0655:
	{
		return 1;
	}

IL_0657:
	{
		return ((int32_t)-3);
	}

IL_065a:
	{
		return ((int32_t)-2);
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateSetDictionary(Org.BouncyCastle.Utilities.Zlib.ZStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateSetDictionary_m30171385BE53EA43A26E9D2648165F661F198392 (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dictionary1, int32_t ___dictLength2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___dictLength2;
		V_1 = L_0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_1 = ___z0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_2 = ___z0;
		NullCheck(L_2);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_3 = L_2->___istate_27;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_4 = ___z0;
		NullCheck(L_4);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_5 = L_4->___istate_27;
		NullCheck(L_5);
		int32_t L_6 = L_5->___mode_31;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0020;
		}
	}

IL_001d:
	{
		return ((int32_t)-2);
	}

IL_0020:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_7 = ___z0;
		NullCheck(L_7);
		Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* L_8 = L_7->____adler_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___dictionary1;
		int32_t L_10 = ___dictLength2;
		NullCheck(L_8);
		int64_t L_11;
		L_11 = Adler32_adler32_m8F1E88AC5C7EB23108FD9110F0D3ADFAD85BB611(L_8, ((int64_t)1), L_9, 0, L_10, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_12 = ___z0;
		NullCheck(L_12);
		int64_t L_13 = L_12->___adler_29;
		if ((((int64_t)L_11) == ((int64_t)L_13)))
		{
			goto IL_003b;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_003b:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_14 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_15 = ___z0;
		NullCheck(L_15);
		Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* L_16 = L_15->____adler_30;
		NullCheck(L_16);
		int64_t L_17;
		L_17 = Adler32_adler32_m8F1E88AC5C7EB23108FD9110F0D3ADFAD85BB611(L_16, ((int64_t)0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, 0, NULL);
		NullCheck(L_14);
		L_14->___adler_29 = L_17;
		int32_t L_18 = V_1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_19 = ___z0;
		NullCheck(L_19);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_20 = L_19->___istate_27;
		NullCheck(L_20);
		int32_t L_21 = L_20->___wbits_37;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(1<<((int32_t)(L_21&((int32_t)31))))))))
		{
			goto IL_007b;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_22 = ___z0;
		NullCheck(L_22);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_23 = L_22->___istate_27;
		NullCheck(L_23);
		int32_t L_24 = L_23->___wbits_37;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_24&((int32_t)31))))), 1));
		int32_t L_25 = ___dictLength2;
		int32_t L_26 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_25, L_26));
	}

IL_007b:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_27 = ___z0;
		NullCheck(L_27);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_28 = L_27->___istate_27;
		NullCheck(L_28);
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_29 = L_28->___blocks_38;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___dictionary1;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		NullCheck(L_29);
		InfBlocks_set_dictionary_m5C32A9D05ABD12D38FDF443AC44F22D88C8517AE(L_29, L_30, L_31, L_32, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_33 = ___z0;
		NullCheck(L_33);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_34 = L_33->___istate_27;
		NullCheck(L_34);
		L_34->___mode_31 = 7;
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateSync(Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateSync_m9017752868197E9912BBCD62CBDD19F381644429 (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___z0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_1 = ___z0;
		NullCheck(L_1);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_2 = L_1->___istate_27;
		if (L_2)
		{
			goto IL_000e;
		}
	}

IL_000b:
	{
		return ((int32_t)-2);
	}

IL_000e:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_3 = ___z0;
		NullCheck(L_3);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_4 = L_3->___istate_27;
		NullCheck(L_4);
		int32_t L_5 = L_4->___mode_31;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)13))))
		{
			goto IL_0036;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_6 = ___z0;
		NullCheck(L_6);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_7 = L_6->___istate_27;
		NullCheck(L_7);
		L_7->___mode_31 = ((int32_t)13);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_8 = ___z0;
		NullCheck(L_8);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_9 = L_8->___istate_27;
		NullCheck(L_9);
		L_9->___marker_35 = 0;
	}

IL_0036:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_10 = ___z0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___avail_in_19;
		int32_t L_12 = L_11;
		V_0 = L_12;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return ((int32_t)-5);
	}

IL_0043:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_13 = ___z0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___next_in_index_18;
		V_1 = L_14;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_15 = ___z0;
		NullCheck(L_15);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_16 = L_15->___istate_27;
		NullCheck(L_16);
		int32_t L_17 = L_16->___marker_35;
		V_2 = L_17;
		goto IL_0089;
	}

IL_0058:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_18 = ___z0;
		NullCheck(L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_18->___next_in_17;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		il2cpp_codegen_runtime_class_init_inline(Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ((Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568_StaticFields*)il2cpp_codegen_static_fields_for(Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568_il2cpp_TypeInfo_var))->___mark_39;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((!(((uint32_t)L_22) == ((uint32_t)L_26))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		goto IL_0081;
	}

IL_006f:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_28 = ___z0;
		NullCheck(L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = L_28->___next_in_17;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if (!L_32)
		{
			goto IL_007d;
		}
	}
	{
		V_2 = 0;
		goto IL_0081;
	}

IL_007d:
	{
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(4, L_33));
	}

IL_0081:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
	}

IL_0089:
	{
		int32_t L_36 = V_0;
		if (!L_36)
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_37 = V_2;
		if ((((int32_t)L_37) < ((int32_t)4)))
		{
			goto IL_0058;
		}
	}

IL_0090:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_38 = ___z0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_39 = L_38;
		NullCheck(L_39);
		int64_t L_40 = L_39->___total_in_20;
		int32_t L_41 = V_1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_42 = ___z0;
		NullCheck(L_42);
		int32_t L_43 = L_42->___next_in_index_18;
		NullCheck(L_39);
		L_39->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_41, L_43)))));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_44 = ___z0;
		int32_t L_45 = V_1;
		NullCheck(L_44);
		L_44->___next_in_index_18 = L_45;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_46 = ___z0;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		L_46->___avail_in_19 = L_47;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_48 = ___z0;
		NullCheck(L_48);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_49 = L_48->___istate_27;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		L_49->___marker_35 = L_50;
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) == ((int32_t)4)))
		{
			goto IL_00c7;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_00c7:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_52 = ___z0;
		NullCheck(L_52);
		int64_t L_53 = L_52->___total_in_20;
		V_3 = L_53;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_54 = ___z0;
		NullCheck(L_54);
		int64_t L_55 = L_54->___total_out_24;
		V_4 = L_55;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_56 = ___z0;
		int32_t L_57;
		L_57 = Inflate_inflateReset_m3BE5D6498A176BA49D1425BCCA320DB1D6FBA6C9(__this, L_56, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_58 = ___z0;
		int64_t L_59 = V_3;
		NullCheck(L_58);
		L_58->___total_in_20 = L_59;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_60 = ___z0;
		int64_t L_61 = V_4;
		NullCheck(L_60);
		L_60->___total_out_24 = L_61;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_62 = ___z0;
		NullCheck(L_62);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_63 = L_62->___istate_27;
		NullCheck(L_63);
		L_63->___mode_31 = 7;
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Inflate::inflateSyncPoint(Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateSyncPoint_m5DF33589840369CEB8EEE9FE87DB51C66BA67854 (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z0, const RuntimeMethod* method) 
{
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = ___z0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_1 = ___z0;
		NullCheck(L_1);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_2 = L_1->___istate_27;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_3 = ___z0;
		NullCheck(L_3);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_4 = L_3->___istate_27;
		NullCheck(L_4);
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_5 = L_4->___blocks_38;
		if (L_5)
		{
			goto IL_001b;
		}
	}

IL_0018:
	{
		return ((int32_t)-2);
	}

IL_001b:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_6 = ___z0;
		NullCheck(L_6);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_7 = L_6->___istate_27;
		NullCheck(L_7);
		InfBlocks_t4FD0843DFAA3B5610FADB3B4B0765DED93E72A54* L_8 = L_7->___blocks_38;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InfBlocks_sync_point_mC629829A89E65C3F67BA2B57B3144B8C37FC04CB(L_8, NULL);
		return L_9;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Inflate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflate__ctor_mC9D3BC1448740A6F818E30CCD47F85E720F6F20F (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___was_33 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___was_33), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Inflate::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflate__cctor_mDF30B38C2F6A113C79274226E452C9858FCB8C78 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)255));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)255));
		((Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568_StaticFields*)il2cpp_codegen_static_fields_for(Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568_il2cpp_TypeInfo_var))->___mark_39 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568_StaticFields*)il2cpp_codegen_static_fields_for(Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568_il2cpp_TypeInfo_var))->___mark_39), (void*)L_2);
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
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m46FE263E3A6E9FCE87A230BA65177C63F7171B2F (InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___d4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___e5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___t6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m7, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp8, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hn9, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___v10, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B52_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B52_1 = NULL;
	int32_t G_B51_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B51_1 = NULL;
	int32_t G_B53_0 = 0;
	int32_t G_B53_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B53_2 = NULL;
	{
		V_9 = 0;
		int32_t L_0 = ___n2;
		V_4 = L_0;
	}

IL_0006:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___c_21;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___b0;
		int32_t L_3 = ___bindex1;
		int32_t L_4 = V_9;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		int32_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		int32_t* L_7 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0006;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___c_21;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ___n2;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0043;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___t6;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___m7;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		return 0;
	}

IL_0043:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___m7;
		NullCheck(L_18);
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_7 = L_20;
		V_5 = 1;
		goto IL_005f;
	}

IL_004e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___c_21;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (L_24)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005f:
	{
		int32_t L_26 = V_5;
		if ((((int32_t)L_26) <= ((int32_t)((int32_t)15))))
		{
			goto IL_004e;
		}
	}

IL_0065:
	{
		int32_t L_27 = V_5;
		V_6 = L_27;
		int32_t L_28 = V_7;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_30 = V_5;
		V_7 = L_30;
	}

IL_0073:
	{
		V_4 = ((int32_t)15);
		goto IL_008a;
	}

IL_0079:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___c_21;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if (L_34)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
	}

IL_008a:
	{
		int32_t L_36 = V_4;
		if (L_36)
		{
			goto IL_0079;
		}
	}

IL_008e:
	{
		int32_t L_37 = V_4;
		V_2 = L_37;
		int32_t L_38 = V_7;
		int32_t L_39 = V_4;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_40 = V_4;
		V_7 = L_40;
	}

IL_009b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ___m7;
		int32_t L_42 = V_7;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_42);
		int32_t L_43 = V_5;
		V_13 = ((int32_t)(1<<((int32_t)(L_43&((int32_t)31)))));
		goto IL_00cd;
	}

IL_00ac:
	{
		int32_t L_44 = V_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___c_21;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract(L_44, L_48));
		V_13 = L_49;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_00c1;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_00c1:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = V_13;
		V_13 = ((int32_t)(L_51<<1));
	}

IL_00cd:
	{
		int32_t L_52 = V_5;
		int32_t L_53 = V_4;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_54 = V_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = __this->___c_21;
		int32_t L_56 = V_4;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract(L_54, L_58));
		V_13 = L_59;
		if ((((int32_t)L_59) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_00e8:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___c_21;
		int32_t L_61 = V_4;
		NullCheck(L_60);
		int32_t* L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)));
		int32_t L_63 = *((int32_t*)L_62);
		int32_t L_64 = V_13;
		*((int32_t*)L_62) = (int32_t)((int32_t)il2cpp_codegen_add(L_63, L_64));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___x_24;
		int32_t L_66 = 0;
		V_5 = L_66;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_66);
		V_9 = 1;
		V_12 = 2;
		goto IL_0133;
	}

IL_010f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = __this->___x_24;
		int32_t L_68 = V_12;
		int32_t L_69 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = __this->___c_21;
		int32_t L_71 = V_9;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		int32_t L_74 = ((int32_t)il2cpp_codegen_add(L_69, L_73));
		V_5 = L_74;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (int32_t)L_74);
		int32_t L_75 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		int32_t L_76 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0133:
	{
		int32_t L_77 = V_4;
		int32_t L_78 = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		V_4 = L_78;
		if (L_78)
		{
			goto IL_010f;
		}
	}
	{
		V_4 = 0;
		V_9 = 0;
	}

IL_0142:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = ___b0;
		int32_t L_80 = ___bindex1;
		int32_t L_81 = V_9;
		NullCheck(L_79);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_80, L_81));
		int32_t L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = L_83;
		V_5 = L_84;
		if (!L_84)
		{
			goto IL_016a;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = ___v10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = __this->___x_24;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		int32_t* L_88 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)));
		int32_t L_89 = *((int32_t*)L_88);
		V_15 = L_89;
		int32_t L_90 = V_15;
		*((int32_t*)L_88) = (int32_t)((int32_t)il2cpp_codegen_add(L_90, 1));
		int32_t L_91 = V_15;
		int32_t L_92 = V_4;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (int32_t)L_92);
	}

IL_016a:
	{
		int32_t L_93 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_93, 1));
		int32_t L_94 = V_4;
		int32_t L_95 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		V_4 = L_95;
		int32_t L_96 = ___n2;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_0142;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = __this->___x_24;
		int32_t L_98 = V_2;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		int32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		___n2 = L_100;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = __this->___x_24;
		int32_t L_102 = 0;
		V_4 = L_102;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_102);
		V_9 = 0;
		V_3 = (-1);
		int32_t L_103 = V_7;
		V_11 = ((-L_103));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->___u_23;
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		V_10 = 0;
		V_14 = 0;
		goto IL_040d;
	}

IL_01ae:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = __this->___c_21;
		int32_t L_106 = V_6;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		int32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_0 = L_108;
		goto IL_03fd;
	}

IL_01bd:
	{
		int32_t L_109 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_109, 1));
		int32_t L_110 = V_11;
		int32_t L_111 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, L_111));
		int32_t L_112 = V_2;
		int32_t L_113 = V_11;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_112, L_113));
		int32_t L_114 = V_14;
		int32_t L_115 = V_7;
		if ((((int32_t)L_114) > ((int32_t)L_115)))
		{
			goto IL_01d8;
		}
	}
	{
		int32_t L_116 = V_14;
		G_B35_0 = L_116;
		goto IL_01da;
	}

IL_01d8:
	{
		int32_t L_117 = V_7;
		G_B35_0 = L_117;
	}

IL_01da:
	{
		V_14 = G_B35_0;
		int32_t L_118 = V_6;
		int32_t L_119 = V_11;
		int32_t L_120 = ((int32_t)il2cpp_codegen_subtract(L_118, L_119));
		V_5 = L_120;
		int32_t L_121 = ((int32_t)(1<<((int32_t)(L_120&((int32_t)31)))));
		V_1 = L_121;
		int32_t L_122 = V_0;
		if ((((int32_t)L_121) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_122, 1)))))
		{
			goto IL_022e;
		}
	}
	{
		int32_t L_123 = V_1;
		int32_t L_124 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_123, ((int32_t)il2cpp_codegen_add(L_124, 1))));
		int32_t L_125 = V_6;
		V_12 = L_125;
		int32_t L_126 = V_5;
		int32_t L_127 = V_14;
		if ((((int32_t)L_126) >= ((int32_t)L_127)))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0223;
	}

IL_0202:
	{
		int32_t L_128 = V_1;
		int32_t L_129 = ((int32_t)(L_128<<1));
		V_1 = L_129;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = __this->___c_21;
		int32_t L_131 = V_12;
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		V_12 = L_132;
		NullCheck(L_130);
		int32_t L_133 = L_132;
		int32_t L_134 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		if ((((int32_t)L_129) <= ((int32_t)L_134)))
		{
			goto IL_022e;
		}
	}
	{
		int32_t L_135 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = __this->___c_21;
		int32_t L_137 = V_12;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		int32_t L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_135, L_139));
	}

IL_0223:
	{
		int32_t L_140 = V_5;
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_140, 1));
		V_5 = L_141;
		int32_t L_142 = V_14;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_0202;
		}
	}

IL_022e:
	{
		int32_t L_143 = V_5;
		V_14 = ((int32_t)(1<<((int32_t)(L_143&((int32_t)31)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = ___hn9;
		NullCheck(L_144);
		int32_t L_145 = 0;
		int32_t L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_146, L_147))) <= ((int32_t)((int32_t)1440))))
		{
			goto IL_0248;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_0248:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = __this->___u_23;
		int32_t L_149 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_150 = ___hn9;
		NullCheck(L_150);
		int32_t L_151 = 0;
		int32_t L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		int32_t L_153 = L_152;
		V_10 = L_153;
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (int32_t)L_153);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_154 = ___hn9;
		NullCheck(L_154);
		int32_t* L_155 = ((L_154)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_156 = *((int32_t*)L_155);
		int32_t L_157 = V_14;
		*((int32_t*)L_155) = (int32_t)((int32_t)il2cpp_codegen_add(L_156, L_157));
		int32_t L_158 = V_3;
		if (!L_158)
		{
			goto IL_02cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_159 = __this->___x_24;
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(L_160), (int32_t)L_161);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = __this->___r_22;
		int32_t L_163 = V_5;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(uint8_t)L_163));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_164 = __this->___r_22;
		int32_t L_165 = V_7;
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(uint8_t)L_165));
		int32_t L_166 = V_4;
		int32_t L_167 = V_11;
		int32_t L_168 = V_7;
		V_5 = ((int32_t)(L_166>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_167, L_168))&((int32_t)31)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = __this->___r_22;
		int32_t L_170 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = __this->___u_23;
		int32_t L_172 = V_3;
		NullCheck(L_171);
		int32_t L_173 = ((int32_t)il2cpp_codegen_subtract(L_172, 1));
		int32_t L_174 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		int32_t L_175 = V_5;
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_170, L_174)), L_175)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_176 = __this->___r_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = ___hp8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = __this->___u_23;
		int32_t L_179 = V_3;
		NullCheck(L_178);
		int32_t L_180 = ((int32_t)il2cpp_codegen_subtract(L_179, 1));
		int32_t L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		int32_t L_182 = V_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_176, 0, (RuntimeArray*)L_177, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_181, L_182)), 3)), 3, NULL);
		goto IL_02d3;
	}

IL_02cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = ___t6;
		int32_t L_184 = V_10;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_184);
	}

IL_02d3:
	{
		int32_t L_185 = V_6;
		int32_t L_186 = V_11;
		int32_t L_187 = V_7;
		if ((((int32_t)L_185) > ((int32_t)((int32_t)il2cpp_codegen_add(L_186, L_187)))))
		{
			goto IL_01bd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = __this->___r_22;
		int32_t L_189 = V_6;
		int32_t L_190 = V_11;
		NullCheck(L_188);
		(L_188)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(L_189, L_190))));
		int32_t L_191 = V_9;
		int32_t L_192 = ___n2;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_0301;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = __this->___r_22;
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)192));
		goto IL_036a;
	}

IL_0301:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_194 = ___v10;
		int32_t L_195 = V_9;
		NullCheck(L_194);
		int32_t L_196 = L_195;
		int32_t L_197 = (L_194)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		int32_t L_198 = ___s3;
		if ((((int32_t)L_197) >= ((int32_t)L_198)))
		{
			goto IL_0338;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_199 = __this->___r_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_200 = ___v10;
		int32_t L_201 = V_9;
		NullCheck(L_200);
		int32_t L_202 = L_201;
		int32_t L_203 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		G_B51_0 = 0;
		G_B51_1 = L_199;
		if ((((int32_t)L_203) < ((int32_t)((int32_t)256))))
		{
			G_B52_0 = 0;
			G_B52_1 = L_199;
			goto IL_0321;
		}
	}
	{
		G_B53_0 = ((int32_t)96);
		G_B53_1 = G_B51_0;
		G_B53_2 = G_B51_1;
		goto IL_0322;
	}

IL_0321:
	{
		G_B53_0 = 0;
		G_B53_1 = G_B52_0;
		G_B53_2 = G_B52_1;
	}

IL_0322:
	{
		NullCheck(G_B53_2);
		(G_B53_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B53_1), (int32_t)((int32_t)(uint8_t)G_B53_0));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = __this->___r_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_205 = ___v10;
		int32_t L_206 = V_9;
		int32_t L_207 = L_206;
		V_9 = ((int32_t)il2cpp_codegen_add(L_207, 1));
		NullCheck(L_205);
		int32_t L_208 = L_207;
		int32_t L_209 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		NullCheck(L_204);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_209);
		goto IL_036a;
	}

IL_0338:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210 = __this->___r_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_211 = ___e5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = ___v10;
		int32_t L_213 = V_9;
		NullCheck(L_212);
		int32_t L_214 = L_213;
		int32_t L_215 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		int32_t L_216 = ___s3;
		NullCheck(L_211);
		int32_t L_217 = ((int32_t)il2cpp_codegen_subtract(L_215, L_216));
		int32_t L_218 = (L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_218, ((int32_t)16))), ((int32_t)64)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_219 = __this->___r_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_220 = ___d4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = ___v10;
		int32_t L_222 = V_9;
		int32_t L_223 = L_222;
		V_9 = ((int32_t)il2cpp_codegen_add(L_223, 1));
		NullCheck(L_221);
		int32_t L_224 = L_223;
		int32_t L_225 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		int32_t L_226 = ___s3;
		NullCheck(L_220);
		int32_t L_227 = ((int32_t)il2cpp_codegen_subtract(L_225, L_226));
		int32_t L_228 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		NullCheck(L_219);
		(L_219)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_228);
	}

IL_036a:
	{
		int32_t L_229 = V_6;
		int32_t L_230 = V_11;
		V_1 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_229, L_230))&((int32_t)31)))));
		int32_t L_231 = V_4;
		int32_t L_232 = V_11;
		V_5 = ((int32_t)(L_231>>((int32_t)(L_232&((int32_t)31)))));
		goto IL_039d;
	}

IL_0381:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = __this->___r_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_234 = ___hp8;
		int32_t L_235 = V_10;
		int32_t L_236 = V_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_233, 0, (RuntimeArray*)L_234, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_235, L_236)), 3)), 3, NULL);
		int32_t L_237 = V_5;
		int32_t L_238 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add(L_237, L_238));
	}

IL_039d:
	{
		int32_t L_239 = V_5;
		int32_t L_240 = V_14;
		if ((((int32_t)L_239) < ((int32_t)L_240)))
		{
			goto IL_0381;
		}
	}
	{
		int32_t L_241 = V_6;
		V_5 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_241, 1))&((int32_t)31)))));
		goto IL_03bd;
	}

IL_03b0:
	{
		int32_t L_242 = V_4;
		int32_t L_243 = V_5;
		V_4 = ((int32_t)(L_242^L_243));
		int32_t L_244 = V_5;
		V_5 = ((int32_t)(L_244>>1));
	}

IL_03bd:
	{
		int32_t L_245 = V_4;
		int32_t L_246 = V_5;
		if (((int32_t)(L_245&L_246)))
		{
			goto IL_03b0;
		}
	}
	{
		int32_t L_247 = V_4;
		int32_t L_248 = V_5;
		V_4 = ((int32_t)(L_247^L_248));
		int32_t L_249 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_249&((int32_t)31))))), 1));
		goto IL_03ee;
	}

IL_03d8:
	{
		int32_t L_250 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_250, 1));
		int32_t L_251 = V_11;
		int32_t L_252 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_251, L_252));
		int32_t L_253 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_253&((int32_t)31))))), 1));
	}

IL_03ee:
	{
		int32_t L_254 = V_4;
		int32_t L_255 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_256 = __this->___x_24;
		int32_t L_257 = V_3;
		NullCheck(L_256);
		int32_t L_258 = L_257;
		int32_t L_259 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		if ((!(((uint32_t)((int32_t)(L_254&L_255))) == ((uint32_t)L_259))))
		{
			goto IL_03d8;
		}
	}

IL_03fd:
	{
		int32_t L_260 = V_0;
		int32_t L_261 = L_260;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_261, 1));
		if (L_261)
		{
			goto IL_02d3;
		}
	}
	{
		int32_t L_262 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_262, 1));
	}

IL_040d:
	{
		int32_t L_263 = V_6;
		int32_t L_264 = V_2;
		if ((((int32_t)L_263) <= ((int32_t)L_264)))
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_265 = V_13;
		if (!L_265)
		{
			goto IL_041d;
		}
	}
	{
		int32_t L_266 = V_2;
		if ((!(((uint32_t)L_266) == ((uint32_t)1))))
		{
			goto IL_041f;
		}
	}

IL_041d:
	{
		return 0;
	}

IL_041f:
	{
		return ((int32_t)-5);
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_m659600B74B72360544490963A5775F76347094F1 (InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bb1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tb2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp3, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		InfTree_initWorkArea_m96A867886F06572C2AC5B304720607E89E0172A4(__this, ((int32_t)19), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___hn_19;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___c0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___tb2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___bb1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___hp3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___hn_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___v_20;
		int32_t L_7;
		L_7 = InfTree_huft_build_m46FE263E3A6E9FCE87A230BA65177C63F7171B2F(__this, L_1, 0, ((int32_t)19), ((int32_t)19), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, L_2, L_3, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0043;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_9 = ___z4;
		NullCheck(L_9);
		L_9->___msg_25 = _stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___msg_25), (void*)_stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4);
		goto IL_005c;
	}

IL_0043:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-5))))
		{
			goto IL_004d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___bb1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (L_13)
		{
			goto IL_005c;
		}
	}

IL_004d:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_14 = ___z4;
		NullCheck(L_14);
		L_14->___msg_25 = _stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___msg_25), (void*)_stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94);
		V_0 = ((int32_t)-3);
	}

IL_005c:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m05C92EFBBFF721B38E5E04FB6D0421C36A3094B1 (InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bl3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bd4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp7, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		InfTree_initWorkArea_m96A867886F06572C2AC5B304720607E89E0172A4(__this, ((int32_t)288), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___hn_19;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___c2;
		int32_t L_2 = ___nl0;
		il2cpp_codegen_runtime_class_init_inline(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___cplens_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___cplext_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___tl5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___bl3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___hp7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___hn_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___v_20;
		int32_t L_10;
		L_10 = InfTree_huft_build_m46FE263E3A6E9FCE87A230BA65177C63F7171B2F(__this, L_1, 0, L_2, ((int32_t)257), L_3, L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0048;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___bl3;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_0071;
		}
	}

IL_0048:
	{
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_005b;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_16 = ___z8;
		NullCheck(L_16);
		L_16->___msg_25 = _stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___msg_25), (void*)_stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0);
		goto IL_006f;
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-4))))
		{
			goto IL_006f;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_18 = ___z8;
		NullCheck(L_18);
		L_18->___msg_25 = _stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___msg_25), (void*)_stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4);
		V_0 = ((int32_t)-3);
	}

IL_006f:
	{
		int32_t L_19 = V_0;
		return L_19;
	}

IL_0071:
	{
		InfTree_initWorkArea_m96A867886F06572C2AC5B304720607E89E0172A4(__this, ((int32_t)288), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ___c2;
		int32_t L_21 = ___nl0;
		int32_t L_22 = ___nd1;
		il2cpp_codegen_runtime_class_init_inline(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___cpdist_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___cpdext_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___td6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = ___bd4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___hp7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->___hn_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___v_20;
		int32_t L_30;
		L_30 = InfTree_huft_build_m46FE263E3A6E9FCE87A230BA65177C63F7171B2F(__this, L_20, L_21, L_22, 0, L_23, L_24, L_25, L_26, L_27, L_28, L_29, NULL);
		V_0 = L_30;
		int32_t L_31 = V_0;
		if (L_31)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___bd4;
		NullCheck(L_32);
		int32_t L_33 = 0;
		int32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if (L_34)
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_35 = ___nl0;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)257))))
		{
			goto IL_00f3;
		}
	}

IL_00b4:
	{
		int32_t L_36 = V_0;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_00c7;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_37 = ___z8;
		NullCheck(L_37);
		L_37->___msg_25 = _stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->___msg_25), (void*)_stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE);
		goto IL_00f1;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_00dd;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_39 = ___z8;
		NullCheck(L_39);
		L_39->___msg_25 = _stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C;
		Il2CppCodeGenWriteBarrier((void**)(&L_39->___msg_25), (void*)_stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C);
		V_0 = ((int32_t)-3);
		goto IL_00f1;
	}

IL_00dd:
	{
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-4))))
		{
			goto IL_00f1;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_41 = ___z8;
		NullCheck(L_41);
		L_41->___msg_25 = _stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6;
		Il2CppCodeGenWriteBarrier((void**)(&L_41->___msg_25), (void*)_stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6);
		V_0 = ((int32_t)-3);
	}

IL_00f1:
	{
		int32_t L_42 = V_0;
		return L_42;
	}

IL_00f3:
	{
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_mABD9F198FFE57A5BFF990BF3D3CD286030C300CB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bl0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bd1, Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___tl2, Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___td3, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___bl0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___bd1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)5);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_2 = ___tl2;
		il2cpp_codegen_runtime_class_init_inline(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___fixed_tl_12;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_3);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = ___td3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___fixed_td_13;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_5);
		return 0;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.InfTree::initWorkArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree_initWorkArea_m96A867886F06572C2AC5B304720607E89E0172A4 (InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* __this, int32_t ___vsize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___hn_19;
		if (L_0)
		{
			goto IL_0053;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___hn_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hn_19), (void*)L_1);
		int32_t L_2 = ___vsize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___v_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___v_20), (void*)L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___c_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c_21), (void*)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___r_22 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___r_22), (void*)L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		__this->___u_23 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___u_23), (void*)L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___x_24 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_24), (void*)L_7);
	}

IL_0053:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___v_20;
		NullCheck(L_8);
		int32_t L_9 = ___vsize0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) >= ((int32_t)L_9)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_10 = ___vsize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___v_20 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___v_20), (void*)L_11);
	}

IL_006a:
	{
		V_0 = 0;
		goto IL_007b;
	}

IL_006e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___v_20;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)0);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_007b:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = ___vsize0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_006e;
		}
	}
	{
		V_1 = 0;
		goto IL_0090;
	}

IL_0083:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___c_21;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)0);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0090:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)16))))
		{
			goto IL_0083;
		}
	}
	{
		V_2 = 0;
		goto IL_00a6;
	}

IL_0099:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___r_22;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)0);
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a6:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) < ((int32_t)3)))
		{
			goto IL_0099;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->___c_21;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___u_23;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_25, 0, (RuntimeArray*)L_26, 0, ((int32_t)15), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->___c_21;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->___x_24;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, 0, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.InfTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__ctor_mC9C1BE5E5E637AE2A14AD9DCCF1A685DB3C74C78 (InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.InfTree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__cctor_m4193E418B377EA75C732B1B4A2644608E2DE0874 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_153_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_154_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_158_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_237_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_307_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_448_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1536));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_237_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___fixed_tl_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___fixed_tl_12), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_153_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___fixed_td_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___fixed_td_13), (void*)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_158_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___cplens_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___cplens_14), (void*)L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_154_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___cplext_15 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___cplext_15), (void*)L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_448_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___cpdist_16 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___cpdist_16), (void*)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_307_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_16, L_17, NULL);
		((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___cpdext_17 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t62343B262A8660FA3683A0BFA52F9A03550F6ACD_il2cpp_TypeInfo_var))->___cpdext_17), (void*)L_16);
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
// System.String Org.BouncyCastle.Utilities.Zlib.JZlib::version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JZlib_version_mAE50BE8A5BDB0F75FFD5F9812F01696C0B4B1ED0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69FE75F973979D88233BE3F28BCE349DB4C0C438);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral69FE75F973979D88233BE3F28BCE349DB4C0C438;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.JZlib::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JZlib__ctor_m09231F5DA2DE1617123F7DAE78E5DEE8808656F7 (JZlib_tE94698389600A48C5C8D9B39063930657BDD5990* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Utilities.Zlib.StaticTree::.ctor(System.Int16[],System.Int32[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTree__ctor_mF3EB2DB1F52AE8D8A6F7B13DCF436C6C0C4BC86D (StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___static_tree0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___extra_bits1, int32_t ___extra_base2, int32_t ___elems3, int32_t ___max_length4, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___static_tree0;
		__this->___static_tree_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___static_tree_12), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___extra_bits1;
		__this->___extra_bits_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extra_bits_13), (void*)L_1);
		int32_t L_2 = ___extra_base2;
		__this->___extra_base_14 = L_2;
		int32_t L_3 = ___elems3;
		__this->___elems_15 = L_3;
		int32_t L_4 = ___max_length4;
		__this->___max_length_16 = L_4;
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.StaticTree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTree__cctor_mED8FDE7EC6590C1634DDEF77BD0F8F9A05742D6F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_89_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_249_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)576));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_89_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_ltree_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_ltree_7), (void*)L_1);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)60));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_249_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_dtree_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_dtree_8), (void*)L_4);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = ((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_ltree_7;
		il2cpp_codegen_runtime_class_init_inline(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___extra_lbits_12;
		StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* L_8 = (StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A*)il2cpp_codegen_object_new(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		StaticTree__ctor_mF3EB2DB1F52AE8D8A6F7B13DCF436C6C0C4BC86D(L_8, L_6, L_7, ((int32_t)257), ((int32_t)286), ((int32_t)15), NULL);
		((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_l_desc_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_l_desc_9), (void*)L_8);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = ((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_dtree_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___extra_dbits_13;
		StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* L_11 = (StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A*)il2cpp_codegen_object_new(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StaticTree__ctor_mF3EB2DB1F52AE8D8A6F7B13DCF436C6C0C4BC86D(L_11, L_9, L_10, 0, ((int32_t)30), ((int32_t)15), NULL);
		((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_d_desc_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_d_desc_10), (void*)L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___extra_blbits_14;
		StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* L_13 = (StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A*)il2cpp_codegen_object_new(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StaticTree__ctor_mF3EB2DB1F52AE8D8A6F7B13DCF436C6C0C4BC86D(L_13, (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)NULL, L_12, 0, ((int32_t)19), 7, NULL);
		((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_bl_desc_11 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A_il2cpp_TypeInfo_var))->___static_bl_desc_11), (void*)L_13);
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
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Tree::d_code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_d_code_m608B3E1D9B6BE3AEB14048BB610911A5EDA0ABD5 (int32_t ___dist0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___dist0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)256))))
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->____dist_code_18;
		int32_t L_2 = ___dist0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(((int32_t)256), ((int32_t)(L_2>>7))));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->____dist_code_18;
		int32_t L_6 = ___dist0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return L_8;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Tree::gen_bitlen(Org.BouncyCastle.Utilities.Zlib.Deflate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_bitlen_m5F27FB1A13AC3C009FBB2FE85C3F44E1462FC140 (Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* __this, Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* ___s0, const RuntimeMethod* method) 
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int16_t V_10 = 0;
	int32_t V_11 = 0;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = __this->___dyn_tree_22;
		V_0 = L_0;
		StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* L_1 = __this->___stat_desc_24;
		NullCheck(L_1);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = L_1->___static_tree_12;
		V_1 = L_2;
		StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* L_3 = __this->___stat_desc_24;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___extra_bits_13;
		V_2 = L_4;
		StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* L_5 = __this->___stat_desc_24;
		NullCheck(L_5);
		int32_t L_6 = L_5->___extra_base_14;
		V_3 = L_6;
		StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* L_7 = __this->___stat_desc_24;
		NullCheck(L_7);
		int32_t L_8 = L_7->___max_length_16;
		V_4 = L_8;
		V_11 = 0;
		V_8 = 0;
		goto IL_0050;
	}

IL_0040:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_9 = ___s0;
		NullCheck(L_9);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = L_9->___bl_count_97;
		int32_t L_11 = V_8;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int16_t)0);
		int32_t L_12 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0050:
	{
		int32_t L_13 = V_8;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0040;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_14 = V_0;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_15 = ___s0;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15->___heap_98;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_17 = ___s0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___heap_max_100;
		NullCheck(L_16);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_20, 2)), 1))), (int16_t)0);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_21 = ___s0;
		NullCheck(L_21);
		int32_t L_22 = L_21->___heap_max_100;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		goto IL_011f;
	}

IL_0079:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_23 = ___s0;
		NullCheck(L_23);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23->___heap_98;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = L_27;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_28 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = V_0;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_30, 2)), 1));
		int16_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_28);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_32, 2)), 1));
		int16_t L_34 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, 1));
		int32_t L_35 = V_8;
		int32_t L_36 = V_4;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_37 = V_4;
		V_8 = L_37;
		int32_t L_38 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00a6:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_39 = V_0;
		int32_t L_40 = V_6;
		int32_t L_41 = V_8;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_40, 2)), 1))), (int16_t)((int16_t)L_41));
		int32_t L_42 = V_6;
		int32_t L_43 = __this->___max_code_23;
		if ((((int32_t)L_42) > ((int32_t)L_43)))
		{
			goto IL_0119;
		}
	}
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_44 = ___s0;
		NullCheck(L_44);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_45 = L_44->___bl_count_97;
		int32_t L_46 = V_8;
		NullCheck(L_45);
		int16_t* L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)));
		int32_t L_48 = *((int16_t*)L_47);
		*((int16_t*)L_47) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_48, 1)));
		V_9 = 0;
		int32_t L_49 = V_6;
		int32_t L_50 = V_3;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00de;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_2;
		int32_t L_52 = V_6;
		int32_t L_53 = V_3;
		NullCheck(L_51);
		int32_t L_54 = ((int32_t)il2cpp_codegen_subtract(L_52, L_53));
		int32_t L_55 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_9 = L_55;
	}

IL_00de:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_56 = V_0;
		int32_t L_57 = V_6;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_multiply(L_57, 2));
		int16_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_10 = L_59;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_60 = ___s0;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_61 = L_60;
		NullCheck(L_61);
		int32_t L_62 = L_61->___opt_len_106;
		int16_t L_63 = V_10;
		int32_t L_64 = V_8;
		int32_t L_65 = V_9;
		NullCheck(L_61);
		L_61->___opt_len_106 = ((int32_t)il2cpp_codegen_add(L_62, ((int32_t)il2cpp_codegen_multiply((int32_t)L_63, ((int32_t)il2cpp_codegen_add(L_64, L_65))))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_66 = V_1;
		if (!L_66)
		{
			goto IL_0119;
		}
	}
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_67 = ___s0;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_68 = L_67;
		NullCheck(L_68);
		int32_t L_69 = L_68->___static_len_107;
		int16_t L_70 = V_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_71 = V_1;
		int32_t L_72 = V_6;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_72, 2)), 1));
		int16_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = V_9;
		NullCheck(L_68);
		L_68->___static_len_107 = ((int32_t)il2cpp_codegen_add(L_69, ((int32_t)il2cpp_codegen_multiply((int32_t)L_70, ((int32_t)il2cpp_codegen_add((int32_t)L_74, L_75))))));
	}

IL_0119:
	{
		int32_t L_76 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_011f:
	{
		int32_t L_77 = V_5;
		if ((((int32_t)L_77) < ((int32_t)((int32_t)573))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_78 = V_11;
		if (L_78)
		{
			goto IL_0130;
		}
	}
	{
		return;
	}

IL_0130:
	{
		int32_t L_79 = V_4;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_79, 1));
		goto IL_013e;
	}

IL_0138:
	{
		int32_t L_80 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_80, 1));
	}

IL_013e:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_81 = ___s0;
		NullCheck(L_81);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_82 = L_81->___bl_count_97;
		int32_t L_83 = V_8;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		int16_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		if (!L_85)
		{
			goto IL_0138;
		}
	}
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_86 = ___s0;
		NullCheck(L_86);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_87 = L_86->___bl_count_97;
		int32_t L_88 = V_8;
		NullCheck(L_87);
		int16_t* L_89 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_88)));
		int32_t L_90 = *((int16_t*)L_89);
		*((int16_t*)L_89) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract(L_90, 1)));
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_91 = ___s0;
		NullCheck(L_91);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_92 = L_91->___bl_count_97;
		int32_t L_93 = V_8;
		NullCheck(L_92);
		int16_t* L_94 = ((L_92)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 1)))));
		int32_t L_95 = *((int16_t*)L_94);
		*((int16_t*)L_94) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_95, 2)));
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_96 = ___s0;
		NullCheck(L_96);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_97 = L_96->___bl_count_97;
		int32_t L_98 = V_4;
		NullCheck(L_97);
		int16_t* L_99 = ((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_98)));
		int32_t L_100 = *((int16_t*)L_99);
		*((int16_t*)L_99) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract(L_100, 1)));
		int32_t L_101 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_101, 2));
		int32_t L_102 = V_11;
		if ((((int32_t)L_102) > ((int32_t)0)))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_103 = V_4;
		V_8 = L_103;
		goto IL_0206;
	}

IL_0195:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_104 = ___s0;
		NullCheck(L_104);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_105 = L_104->___bl_count_97;
		int32_t L_106 = V_8;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		int16_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_6 = L_108;
		goto IL_01fc;
	}

IL_01a2:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_109 = ___s0;
		NullCheck(L_109);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = L_109->___heap_98;
		int32_t L_111 = V_5;
		int32_t L_112 = ((int32_t)il2cpp_codegen_subtract(L_111, 1));
		V_5 = L_112;
		NullCheck(L_110);
		int32_t L_113 = L_112;
		int32_t L_114 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		V_7 = L_114;
		int32_t L_115 = V_7;
		int32_t L_116 = __this->___max_code_23;
		if ((((int32_t)L_115) > ((int32_t)L_116)))
		{
			goto IL_01fc;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_117 = V_0;
		int32_t L_118 = V_7;
		NullCheck(L_117);
		int32_t L_119 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_118, 2)), 1));
		int16_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		int32_t L_121 = V_8;
		if ((((int32_t)L_120) == ((int32_t)L_121)))
		{
			goto IL_01f6;
		}
	}
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_122 = ___s0;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_123 = L_122;
		NullCheck(L_123);
		int32_t L_124 = L_123->___opt_len_106;
		int32_t L_125 = V_8;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_126 = V_0;
		int32_t L_127 = V_7;
		NullCheck(L_126);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_127, 2)), 1));
		int16_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_130 = V_0;
		int32_t L_131 = V_7;
		NullCheck(L_130);
		int32_t L_132 = ((int32_t)il2cpp_codegen_multiply(L_131, 2));
		int16_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		NullCheck(L_123);
		L_123->___opt_len_106 = ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)L_125), ((int64_t)L_129))), ((int64_t)L_133))))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_134 = V_0;
		int32_t L_135 = V_7;
		int32_t L_136 = V_8;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_135, 2)), 1))), (int16_t)((int16_t)L_136));
	}

IL_01f6:
	{
		int32_t L_137 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_137, 1));
	}

IL_01fc:
	{
		int32_t L_138 = V_6;
		if (L_138)
		{
			goto IL_01a2;
		}
	}
	{
		int32_t L_139 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_139, 1));
	}

IL_0206:
	{
		int32_t L_140 = V_8;
		if (L_140)
		{
			goto IL_0195;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Tree::build_tree(Org.BouncyCastle.Utilities.Zlib.Deflate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_build_tree_m6AD17B945B675C5899F611E55A25142879AF1811 (Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* __this, Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t G_B9_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B8_1 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B10_2 = NULL;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = __this->___dyn_tree_22;
		V_0 = L_0;
		StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* L_1 = __this->___stat_desc_24;
		NullCheck(L_1);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = L_1->___static_tree_12;
		V_1 = L_2;
		StaticTree_tAE8EEC1830DDF80A13A76C701E3C1DC79FBF974A* L_3 = __this->___stat_desc_24;
		NullCheck(L_3);
		int32_t L_4 = L_3->___elems_15;
		V_2 = L_4;
		V_5 = (-1);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_5 = ___s0;
		NullCheck(L_5);
		L_5->___heap_len_99 = 0;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_6 = ___s0;
		NullCheck(L_6);
		L_6->___heap_max_100 = ((int32_t)573);
		V_3 = 0;
		goto IL_0075;
	}

IL_0038:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_multiply(L_8, 2));
		int16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if (!L_10)
		{
			goto IL_0069;
		}
	}
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_11 = ___s0;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___heap_98;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_13 = ___s0;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_14 = L_13;
		NullCheck(L_14);
		int32_t L_15 = L_14->___heap_len_99;
		V_7 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_7;
		NullCheck(L_14);
		L_14->___heap_len_99 = L_16;
		int32_t L_17 = V_7;
		int32_t L_18 = V_3;
		int32_t L_19 = L_18;
		V_5 = L_19;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)L_19);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_20 = ___s0;
		NullCheck(L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_20->___depth_101;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)0);
		goto IL_0071;
	}

IL_0069:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_23 = V_0;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_24, 2)), 1))), (int16_t)0);
	}

IL_0071:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0075:
	{
		int32_t L_26 = V_3;
		int32_t L_27 = V_2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_00e3;
	}

IL_007b:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_28 = ___s0;
		NullCheck(L_28);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = L_28->___heap_98;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_30 = ___s0;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_31 = L_30;
		NullCheck(L_31);
		int32_t L_32 = L_31->___heap_len_99;
		V_7 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		int32_t L_33 = V_7;
		NullCheck(L_31);
		L_31->___heap_len_99 = L_33;
		int32_t L_34 = V_7;
		int32_t L_35 = V_5;
		G_B8_0 = L_34;
		G_B8_1 = L_29;
		if ((((int32_t)L_35) < ((int32_t)2)))
		{
			G_B9_0 = L_34;
			G_B9_1 = L_29;
			goto IL_009d;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00a4;
	}

IL_009d:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		V_5 = L_37;
		G_B10_0 = L_37;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00a4:
	{
		int32_t L_38 = G_B10_0;
		V_7 = L_38;
		NullCheck(G_B10_2);
		(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (int32_t)L_38);
		int32_t L_39 = V_7;
		V_6 = L_39;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_40 = V_0;
		int32_t L_41 = V_6;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_41, 2))), (int16_t)1);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_42 = ___s0;
		NullCheck(L_42);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = L_42->___depth_101;
		int32_t L_44 = V_6;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint8_t)0);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_45 = ___s0;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_46 = L_45;
		NullCheck(L_46);
		int32_t L_47 = L_46->___opt_len_106;
		NullCheck(L_46);
		L_46->___opt_len_106 = ((int32_t)il2cpp_codegen_subtract(L_47, 1));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_48 = V_1;
		if (!L_48)
		{
			goto IL_00e3;
		}
	}
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_49 = ___s0;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_50 = L_49;
		NullCheck(L_50);
		int32_t L_51 = L_50->___static_len_107;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_52 = V_1;
		int32_t L_53 = V_6;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_53, 2)), 1));
		int16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_50);
		L_50->___static_len_107 = ((int32_t)il2cpp_codegen_subtract(L_51, (int32_t)L_55));
	}

IL_00e3:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_56 = ___s0;
		NullCheck(L_56);
		int32_t L_57 = L_56->___heap_len_99;
		if ((((int32_t)L_57) < ((int32_t)2)))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_58 = V_5;
		__this->___max_code_23 = L_58;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_59 = ___s0;
		NullCheck(L_59);
		int32_t L_60 = L_59->___heap_len_99;
		V_3 = ((int32_t)(L_60/2));
		goto IL_010b;
	}

IL_00ff:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_61 = ___s0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_62 = V_0;
		int32_t L_63 = V_3;
		NullCheck(L_61);
		Deflate_pqdownheap_m773E61EAFC164F2ED9D721F443EFAE03C1AA9605(L_61, L_62, L_63, NULL);
		int32_t L_64 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_64, 1));
	}

IL_010b:
	{
		int32_t L_65 = V_3;
		if ((((int32_t)L_65) >= ((int32_t)1)))
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_66 = V_2;
		V_6 = L_66;
	}

IL_0112:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_67 = ___s0;
		NullCheck(L_67);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = L_67->___heap_98;
		NullCheck(L_68);
		int32_t L_69 = 1;
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_3 = L_70;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_71 = ___s0;
		NullCheck(L_71);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = L_71->___heap_98;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_73 = ___s0;
		NullCheck(L_73);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = L_73->___heap_98;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_75 = ___s0;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_76 = L_75;
		NullCheck(L_76);
		int32_t L_77 = L_76->___heap_len_99;
		V_7 = L_77;
		int32_t L_78 = V_7;
		NullCheck(L_76);
		L_76->___heap_len_99 = ((int32_t)il2cpp_codegen_subtract(L_78, 1));
		int32_t L_79 = V_7;
		NullCheck(L_74);
		int32_t L_80 = L_79;
		int32_t L_81 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_81);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_82 = ___s0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_83 = V_0;
		NullCheck(L_82);
		Deflate_pqdownheap_m773E61EAFC164F2ED9D721F443EFAE03C1AA9605(L_82, L_83, 1, NULL);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_84 = ___s0;
		NullCheck(L_84);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = L_84->___heap_98;
		NullCheck(L_85);
		int32_t L_86 = 1;
		int32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_4 = L_87;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_88 = ___s0;
		NullCheck(L_88);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = L_88->___heap_98;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_90 = ___s0;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_91 = L_90;
		NullCheck(L_91);
		int32_t L_92 = L_91->___heap_max_100;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_92, 1));
		int32_t L_93 = V_7;
		NullCheck(L_91);
		L_91->___heap_max_100 = L_93;
		int32_t L_94 = V_7;
		int32_t L_95 = V_3;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_94), (int32_t)L_95);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_96 = ___s0;
		NullCheck(L_96);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = L_96->___heap_98;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_98 = ___s0;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_99 = L_98;
		NullCheck(L_99);
		int32_t L_100 = L_99->___heap_max_100;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		int32_t L_101 = V_7;
		NullCheck(L_99);
		L_99->___heap_max_100 = L_101;
		int32_t L_102 = V_7;
		int32_t L_103 = V_4;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (int32_t)L_103);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_104 = V_0;
		int32_t L_105 = V_6;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_106 = V_0;
		int32_t L_107 = V_3;
		NullCheck(L_106);
		int32_t L_108 = ((int32_t)il2cpp_codegen_multiply(L_107, 2));
		int16_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_110 = V_0;
		int32_t L_111 = V_4;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_multiply(L_111, 2));
		int16_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_105, 2))), (int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)L_113))));
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_114 = ___s0;
		NullCheck(L_114);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = L_114->___depth_101;
		int32_t L_116 = V_6;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_117 = ___s0;
		NullCheck(L_117);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118 = L_117->___depth_101;
		int32_t L_119 = V_3;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		uint8_t L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_122 = ___s0;
		NullCheck(L_122);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123 = L_122->___depth_101;
		int32_t L_124 = V_4;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		uint8_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint8_t L_127;
		L_127 = Math_Max_m12FB4E1302123ADB441E3A7BDF52E8404DDE53A2(L_121, L_126, NULL);
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(L_116), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_127, 1))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_128 = V_0;
		int32_t L_129 = V_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_130 = V_0;
		int32_t L_131 = V_4;
		int32_t L_132 = V_6;
		int16_t L_133 = ((int16_t)L_132);
		V_8 = L_133;
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_131, 2)), 1))), (int16_t)L_133);
		int16_t L_134 = V_8;
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_129, 2)), 1))), (int16_t)L_134);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_135 = ___s0;
		NullCheck(L_135);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = L_135->___heap_98;
		int32_t L_137 = V_6;
		int32_t L_138 = L_137;
		V_6 = ((int32_t)il2cpp_codegen_add(L_138, 1));
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_138);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_139 = ___s0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_140 = V_0;
		NullCheck(L_139);
		Deflate_pqdownheap_m773E61EAFC164F2ED9D721F443EFAE03C1AA9605(L_139, L_140, 1, NULL);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_141 = ___s0;
		NullCheck(L_141);
		int32_t L_142 = L_141->___heap_len_99;
		if ((((int32_t)L_142) >= ((int32_t)2)))
		{
			goto IL_0112;
		}
	}
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_143 = ___s0;
		NullCheck(L_143);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = L_143->___heap_98;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_145 = ___s0;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_146 = L_145;
		NullCheck(L_146);
		int32_t L_147 = L_146->___heap_max_100;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_147, 1));
		int32_t L_148 = V_7;
		NullCheck(L_146);
		L_146->___heap_max_100 = L_148;
		int32_t L_149 = V_7;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_150 = ___s0;
		NullCheck(L_150);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_151 = L_150->___heap_98;
		NullCheck(L_151);
		int32_t L_152 = 1;
		int32_t L_153 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (int32_t)L_153);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_154 = ___s0;
		Tree_gen_bitlen_m5F27FB1A13AC3C009FBB2FE85C3F44E1462FC140(__this, L_154, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_155 = V_0;
		int32_t L_156 = V_5;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_157 = ___s0;
		NullCheck(L_157);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_158 = L_157->___bl_count_97;
		il2cpp_codegen_runtime_class_init_inline(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		Tree_gen_codes_m88116EEEF9D3AD850DCA9411DC3955A5DB4B3BB0(L_155, L_156, L_158, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Tree::gen_codes(System.Int16[],System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_codes_m88116EEEF9D3AD850DCA9411DC3955A5DB4B3BB0 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___bl_count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	int16_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int16_t V_5 = 0;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		V_1 = (int16_t)0;
		V_2 = 1;
		goto IL_0021;
	}

IL_000e:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = V_0;
		int32_t L_2 = V_2;
		int16_t L_3 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = ___bl_count2;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		int16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int16_t L_8 = ((int16_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_7))<<1)));
		V_1 = L_8;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (int16_t)L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0021:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)15))))
		{
			goto IL_000e;
		}
	}
	{
		V_3 = 0;
		goto IL_005c;
	}

IL_002a:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = ___tree0;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, 2)), 1));
		int16_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		int32_t L_15 = V_4;
		if (!L_15)
		{
			goto IL_0058;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_16 = ___tree0;
		int32_t L_17 = V_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_18 = V_0;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int16_t* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)));
		int32_t L_21 = *((int16_t*)L_20);
		V_5 = (int16_t)L_21;
		int16_t L_22 = V_5;
		*((int16_t*)L_20) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, 1)));
		int16_t L_23 = V_5;
		int32_t L_24 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = Tree_bi_reverse_mA9BF3CFC5FB4BAECFEB1F07CEC7419BB67437674(L_23, L_24, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_17, 2))), (int16_t)((int16_t)L_25));
	}

IL_0058:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_005c:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = ___max_code1;
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.Tree::bi_reverse(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_bi_reverse_mA9BF3CFC5FB4BAECFEB1F07CEC7419BB67437674 (int32_t ___code0, int32_t ___len1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = ___code0;
		V_0 = ((int32_t)(L_0|((int32_t)(L_1&1))));
		int32_t L_2 = ___code0;
		___code0 = ((int32_t)(L_2>>1));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)(L_3<<1));
		int32_t L_4 = ___len1;
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		___len1 = L_5;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_6 = V_0;
		return ((int32_t)(L_6>>1));
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Tree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__ctor_m0F6D4A33E615C41BB79BB36FC4C7A640C81EEE02 (Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.Tree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__cctor_m9668923404534C7A23B228DEE592A9B7AB21CAF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_20_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_97_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_146_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_214_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_245_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_307_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_325_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_437_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_437_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___extra_lbits_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___extra_lbits_12), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_307_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___extra_dbits_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___extra_dbits_13), (void*)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_245_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___extra_blbits_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___extra_blbits_14), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_20_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___bl_order_15 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___bl_order_15), (void*)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_97_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->____dist_code_18 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->____dist_code_18), (void*)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_325_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_16, L_17, NULL);
		((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->____length_code_19 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->____length_code_19), (void*)L_16);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_214_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_19, L_20, NULL);
		((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___base_length_20 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___base_length_20), (void*)L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = L_21;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_23 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_146_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_22, L_23, NULL);
		((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___base_dist_21 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t851F5EE0F4A044E23FB7F49B03334F6DDF2F1831_il2cpp_TypeInfo_var))->___base_dist_21), (void*)L_22);
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
// Org.BouncyCastle.Utilities.Zlib.ZStream Org.BouncyCastle.Utilities.Zlib.ZInputStream::GetDefaultZStream(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ZInputStream_GetDefaultZStream_m7DA5807361E3F0271FC5B7612B74B29FB71455B9 (bool ___nowrap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A*)il2cpp_codegen_object_new(ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ZStream__ctor_mBE20025BEFCE530A6D52A02D175B3F909281C9E8(L_0, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_1 = L_0;
		bool L_2 = ___nowrap0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ZStream_inflateInit_m8BEE1A8C1AD87D243EEC4D5F93CDCFFB670C64DE(L_1, L_2, NULL);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream__ctor_m93B1CAE7891AC5C27B6596CE0A80A3E76EA2C6E1 (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___input0;
		ZInputStream__ctor_mB60CBF53B051F947C4253E02990D40C608C925EA(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream__ctor_mB60CBF53B051F947C4253E02990D40C608C925EA (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, bool ___nowrap1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___input0;
		bool L_1 = ___nowrap1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_2;
		L_2 = ZInputStream_GetDefaultZStream_m7DA5807361E3F0271FC5B7612B74B29FB71455B9(L_1, NULL);
		ZInputStream__ctor_mE6AEB54FD2E1B89860427851077F1CC1B56952C6(__this, L_0, L_2, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::.ctor(System.IO.Stream,Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream__ctor_mE6AEB54FD2E1B89860427851077F1CC1B56952C6 (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___buf_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf_8), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___buf1_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf1_9), (void*)L_1);
		BaseInputStream__ctor_mE11907C5748B7FDB28FD1C98DC7021F0A8AB26C2(__this, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_2 = ___z1;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_3 = (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A*)il2cpp_codegen_object_new(ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ZStream__ctor_mBE20025BEFCE530A6D52A02D175B3F909281C9E8(L_3, NULL);
		___z1 = L_3;
	}

IL_002c:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_4 = ___z1;
		NullCheck(L_4);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_5 = L_4->___istate_27;
		if (L_5)
		{
			goto IL_0043;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_6 = ___z1;
		NullCheck(L_6);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_7 = L_6->___dstate_26;
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_8 = ___z1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ZStream_inflateInit_mFB731DDCCAF09E92C4C56C3572CC69E11C5C2613(L_8, NULL);
	}

IL_0043:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = ___input0;
		__this->___input_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_11), (void*)L_10);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_11 = ___z1;
		NullCheck(L_11);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_12 = L_11->___istate_27;
		__this->___compress_10 = (bool)((((RuntimeObject*)(Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_13 = ___z1;
		__this->___z_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z_6), (void*)L_13);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_14 = __this->___z_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___buf_8;
		NullCheck(L_14);
		L_14->___next_in_17 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___next_in_17), (void*)L_15);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_16 = __this->___z_6;
		NullCheck(L_16);
		L_16->___next_in_index_18 = 0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_17 = __this->___z_6;
		NullCheck(L_17);
		L_17->___avail_in_19 = 0;
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream__ctor_m14AA2E3836065FD1A329FE037ABBEA5662832A7B (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, int32_t ___level1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___input0;
		int32_t L_1 = ___level1;
		ZInputStream__ctor_m3805FBB86B63A0660C6CBA028655E5C50C47E8CA(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::.ctor(System.IO.Stream,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream__ctor_m3805FBB86B63A0660C6CBA028655E5C50C47E8CA (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, int32_t ___level1, bool ___nowrap2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___buf_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf_8), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___buf1_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf1_9), (void*)L_1);
		BaseInputStream__ctor_mE11907C5748B7FDB28FD1C98DC7021F0A8AB26C2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___input0;
		__this->___input_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_11), (void*)L_2);
		__this->___compress_10 = (bool)1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_3 = (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A*)il2cpp_codegen_object_new(ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ZStream__ctor_mBE20025BEFCE530A6D52A02D175B3F909281C9E8(L_3, NULL);
		__this->___z_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z_6), (void*)L_3);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_4 = __this->___z_6;
		int32_t L_5 = ___level1;
		bool L_6 = ___nowrap2;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = ZStream_deflateInit_mC0824C75A3049F836143A79A0DC3CF1EC7A66BBB(L_4, L_5, L_6, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_8 = __this->___z_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___buf_8;
		NullCheck(L_8);
		L_8->___next_in_17 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___next_in_17), (void*)L_9);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_10 = __this->___z_6;
		NullCheck(L_10);
		L_10->___next_in_index_18 = 0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_11 = __this->___z_6;
		NullCheck(L_11);
		L_11->___avail_in_19 = 0;
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::Detach(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream_Detach_m7EF42C8D96226FB7AF29EBDB4B3F24175197A96E (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		ZInputStream_ImplDisposing_m6B6AC9EAC19234FAA131BFC727FB382560D6D91E(__this, (bool)0, NULL);
	}

IL_000a:
	{
		bool L_1 = ___disposing0;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream_Dispose_m7F40CA4368FEE8F09414605E463F8A1FC28652E8 (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		ZInputStream_ImplDisposing_m6B6AC9EAC19234FAA131BFC727FB382560D6D91E(__this, (bool)1, NULL);
	}

IL_000a:
	{
		bool L_1 = ___disposing0;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::ImplDisposing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream_ImplDisposing_m6B6AC9EAC19234FAA131BFC727FB382560D6D91E (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, bool ___disposeInput0, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___closed_12;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		__this->___closed_12 = (bool)1;
		bool L_1 = ___disposeInput0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___input_11;
		NullCheck(L_2);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_2, NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZInputStream::get_FlushMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZInputStream_get_FlushMode_m14B5D27675A24DC340382A82F990C163C6F8F1D8 (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___flushLevel_7;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStream::set_FlushMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream_set_FlushMode_m51E5628B6904438BF54903ACE0D4A76DB5ECA195 (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___flushLevel_7 = L_0;
		return;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZInputStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZInputStream_Read_m16B31A5DB17883EA846942A0D33F9ED3FF6E798A (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Streams_t887A84321A9B6C945302CE33070663C833A0E1D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B10_0 = 0;
	String_t* G_B18_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		il2cpp_codegen_runtime_class_init_inline(Streams_t887A84321A9B6C945302CE33070663C833A0E1D7_il2cpp_TypeInfo_var);
		Streams_ValidateBufferArguments_m233D29B534DA4B49A50BA11368B5713BAFBEB03E(L_0, L_1, L_2, NULL);
		int32_t L_3 = ___count2;
		if (L_3)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_4 = __this->___z_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer0;
		NullCheck(L_4);
		L_4->___next_out_21 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___next_out_21), (void*)L_5);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_6 = __this->___z_6;
		int32_t L_7 = ___offset1;
		NullCheck(L_6);
		L_6->___next_out_index_22 = L_7;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_8 = __this->___z_6;
		int32_t L_9 = ___count2;
		NullCheck(L_8);
		L_8->___avail_out_23 = L_9;
	}

IL_0031:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_10 = __this->___z_6;
		NullCheck(L_10);
		int32_t L_11 = L_10->___avail_in_19;
		if (L_11)
		{
			goto IL_0098;
		}
	}
	{
		bool L_12 = __this->___nomoreinput_13;
		if (L_12)
		{
			goto IL_0098;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_13 = __this->___z_6;
		NullCheck(L_13);
		L_13->___next_in_index_18 = 0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_14 = __this->___z_6;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = __this->___input_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___buf_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___buf_8;
		NullCheck(L_17);
		NullCheck(L_15);
		int32_t L_18;
		L_18 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, 0, ((int32_t)(((RuntimeArray*)L_17)->max_length)));
		NullCheck(L_14);
		L_14->___avail_in_19 = L_18;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_19 = __this->___z_6;
		NullCheck(L_19);
		int32_t L_20 = L_19->___avail_in_19;
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_21 = __this->___z_6;
		NullCheck(L_21);
		L_21->___avail_in_19 = 0;
		__this->___nomoreinput_13 = (bool)1;
	}

IL_0098:
	{
		bool L_22 = __this->___compress_10;
		if (L_22)
		{
			goto IL_00b3;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_23 = __this->___z_6;
		int32_t L_24 = __this->___flushLevel_7;
		NullCheck(L_23);
		int32_t L_25;
		L_25 = ZStream_inflate_m4009306F2D1A99748B30E600F1531D286F58421A(L_23, L_24, NULL);
		G_B10_0 = L_25;
		goto IL_00c4;
	}

IL_00b3:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_26 = __this->___z_6;
		int32_t L_27 = __this->___flushLevel_7;
		NullCheck(L_26);
		int32_t L_28;
		L_28 = ZStream_deflate_mDC34A5CE1DD26E2AFB85788944E9B76D4222B67B(L_26, L_27, NULL);
		G_B10_0 = L_28;
	}

IL_00c4:
	{
		V_0 = G_B10_0;
		bool L_29 = __this->___nomoreinput_13;
		if (!L_29)
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_00d4;
		}
	}
	{
		return 0;
	}

IL_00d4:
	{
		int32_t L_31 = V_0;
		if (!L_31)
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)1)))
		{
			goto IL_010a;
		}
	}
	{
		bool L_33 = __this->___compress_10;
		if (L_33)
		{
			goto IL_00ea;
		}
	}
	{
		G_B18_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110));
		goto IL_00ef;
	}

IL_00ea:
	{
		G_B18_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F));
	}

IL_00ef:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_34 = __this->___z_6;
		NullCheck(L_34);
		String_t* L_35 = L_34->___msg_25;
		String_t* L_36;
		L_36 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B18_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81B54C81CE5770A2FB716FE3138FA18CE998793D)), L_35, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_37 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_37, L_36, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZInputStream_Read_m16B31A5DB17883EA846942A0D33F9ED3FF6E798A_RuntimeMethod_var)));
	}

IL_010a:
	{
		bool L_38 = __this->___nomoreinput_13;
		if (L_38)
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_39 = V_0;
		if ((!(((uint32_t)L_39) == ((uint32_t)1))))
		{
			goto IL_0126;
		}
	}

IL_0116:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_40 = __this->___z_6;
		NullCheck(L_40);
		int32_t L_41 = L_40->___avail_out_23;
		int32_t L_42 = ___count2;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_0126;
		}
	}
	{
		return 0;
	}

IL_0126:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_43 = __this->___z_6;
		NullCheck(L_43);
		int32_t L_44 = L_43->___avail_out_23;
		int32_t L_45 = ___count2;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_46 = V_0;
		if (!L_46)
		{
			goto IL_0031;
		}
	}

IL_013a:
	{
		int32_t L_47 = ___count2;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_48 = __this->___z_6;
		NullCheck(L_48);
		int32_t L_49 = L_48->___avail_out_23;
		return ((int32_t)il2cpp_codegen_subtract(L_47, L_49));
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZInputStream::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZInputStream_ReadByte_m3E00110F78DDB634DB6AE8BCD232954D36BFE98E (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___buf1_9;
		int32_t L_1;
		L_1 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_0, 0, 1);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		return (-1);
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___buf1_9;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZInputStream::get_TotalIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZInputStream_get_TotalIn_m2146939023611569D4FDAD2C36534495989F7A25 (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, const RuntimeMethod* method) 
{
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = __this->___z_6;
		NullCheck(L_0);
		int64_t L_1 = L_0->___total_in_20;
		return L_1;
	}
}
// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZInputStream::get_TotalOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZInputStream_get_TotalOut_m345002CF4641126FA6C5EC9A7E2D279D3423AF7F (ZInputStream_t1FF7B7A73883EF3D179988DCB0B8D74E4F090A36* __this, const RuntimeMethod* method) 
{
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = __this->___z_6;
		NullCheck(L_0);
		int64_t L_1 = L_0->___total_out_24;
		return L_1;
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
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStreamLeaveOpen::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStreamLeaveOpen__ctor_m2346FB723287AE1AE2CCC9B841E74A0F84C204C1 (ZInputStreamLeaveOpen_t6A63FD5BB9A3C35617DB3542F39F5E70F0961A25* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___input0;
		ZInputStream__ctor_m93B1CAE7891AC5C27B6596CE0A80A3E76EA2C6E1(__this, L_0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStreamLeaveOpen::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStreamLeaveOpen__ctor_mFB1DC0C020C835814966BA1EA742CE3FF59D3343 (ZInputStreamLeaveOpen_t6A63FD5BB9A3C35617DB3542F39F5E70F0961A25* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, bool ___nowrap1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___input0;
		bool L_1 = ___nowrap1;
		ZInputStream__ctor_mB60CBF53B051F947C4253E02990D40C608C925EA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStreamLeaveOpen::.ctor(System.IO.Stream,Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStreamLeaveOpen__ctor_mE695FE6E9438D2068943323FA5ADF8A9C06A9F8B (ZInputStreamLeaveOpen_t6A63FD5BB9A3C35617DB3542F39F5E70F0961A25* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___input0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_1 = ___z1;
		ZInputStream__ctor_mE6AEB54FD2E1B89860427851077F1CC1B56952C6(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStreamLeaveOpen::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStreamLeaveOpen__ctor_m6D1C2B9F77BE64CDDEE88EFA2A8995B1D2BBEDBB (ZInputStreamLeaveOpen_t6A63FD5BB9A3C35617DB3542F39F5E70F0961A25* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, int32_t ___level1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___input0;
		int32_t L_1 = ___level1;
		ZInputStream__ctor_m14AA2E3836065FD1A329FE037ABBEA5662832A7B(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStreamLeaveOpen::.ctor(System.IO.Stream,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStreamLeaveOpen__ctor_mF1F24994306133A9DC3DF11F4074EC7FA2D15C21 (ZInputStreamLeaveOpen_t6A63FD5BB9A3C35617DB3542F39F5E70F0961A25* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, int32_t ___level1, bool ___nowrap2, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___input0;
		int32_t L_1 = ___level1;
		bool L_2 = ___nowrap2;
		ZInputStream__ctor_m3805FBB86B63A0660C6CBA028655E5C50C47E8CA(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZInputStreamLeaveOpen::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStreamLeaveOpen_Dispose_mC217D765625717CA8BA9AD66DD5B021D8D805946 (ZInputStreamLeaveOpen_t6A63FD5BB9A3C35617DB3542F39F5E70F0961A25* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___disposing0;
		ZInputStream_Detach_m7EF42C8D96226FB7AF29EBDB4B3F24175197A96E(__this, L_0, NULL);
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
// Org.BouncyCastle.Utilities.Zlib.ZStream Org.BouncyCastle.Utilities.Zlib.ZOutputStream::GetDefaultZStream(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ZOutputStream_GetDefaultZStream_mCBBABF218A610FB45F6CDEC0E9740BE2CC51AF65 (bool ___nowrap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A*)il2cpp_codegen_object_new(ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ZStream__ctor_mBE20025BEFCE530A6D52A02D175B3F909281C9E8(L_0, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_1 = L_0;
		bool L_2 = ___nowrap0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ZStream_inflateInit_m8BEE1A8C1AD87D243EEC4D5F93CDCFFB670C64DE(L_1, L_2, NULL);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream__ctor_m7A80637E8841596BEBDB09A6E9F152128403E297 (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___output0;
		ZOutputStream__ctor_m67BE5B3F97B479085449A140F77C5C64C09B800C(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream__ctor_m67BE5B3F97B479085449A140F77C5C64C09B800C (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, bool ___nowrap1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___output0;
		bool L_1 = ___nowrap1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_2;
		L_2 = ZOutputStream_GetDefaultZStream_mCBBABF218A610FB45F6CDEC0E9740BE2CC51AF65(L_1, NULL);
		ZOutputStream__ctor_m85DB8A7A9FA6C5141D61F99CFAF0FA4E4E58086D(__this, L_0, L_2, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream,Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream__ctor_m85DB8A7A9FA6C5141D61F99CFAF0FA4E4E58086D (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___buf_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf_8), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___buf1_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf1_9), (void*)L_1);
		BaseOutputStream__ctor_m253F5C52EDB41525E5D7753DADF91AF40B70ECC6(__this, NULL);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_2 = ___z1;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_3 = (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A*)il2cpp_codegen_object_new(ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ZStream__ctor_mBE20025BEFCE530A6D52A02D175B3F909281C9E8(L_3, NULL);
		___z1 = L_3;
	}

IL_002c:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_4 = ___z1;
		NullCheck(L_4);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_5 = L_4->___istate_27;
		if (L_5)
		{
			goto IL_0043;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_6 = ___z1;
		NullCheck(L_6);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_7 = L_6->___dstate_26;
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_8 = ___z1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ZStream_inflateInit_mFB731DDCCAF09E92C4C56C3572CC69E11C5C2613(L_8, NULL);
	}

IL_0043:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = ___output0;
		__this->___output_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___output_11), (void*)L_10);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_11 = ___z1;
		NullCheck(L_11);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_12 = L_11->___istate_27;
		__this->___compress_10 = (bool)((((RuntimeObject*)(Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_13 = ___z1;
		__this->___z_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z_6), (void*)L_13);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream__ctor_m69B91A767C69866726CF9C316DBEDB918A38D6D1 (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, int32_t ___level1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___output0;
		int32_t L_1 = ___level1;
		ZOutputStream__ctor_m758F8442717F2B85CF38AD97A416308A73498B69(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::.ctor(System.IO.Stream,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream__ctor_m758F8442717F2B85CF38AD97A416308A73498B69 (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, int32_t ___level1, bool ___nowrap2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___buf_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf_8), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___buf1_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf1_9), (void*)L_1);
		BaseOutputStream__ctor_m253F5C52EDB41525E5D7753DADF91AF40B70ECC6(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___output0;
		__this->___output_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___output_11), (void*)L_2);
		__this->___compress_10 = (bool)1;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_3 = (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A*)il2cpp_codegen_object_new(ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ZStream__ctor_mBE20025BEFCE530A6D52A02D175B3F909281C9E8(L_3, NULL);
		__this->___z_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z_6), (void*)L_3);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_4 = __this->___z_6;
		int32_t L_5 = ___level1;
		bool L_6 = ___nowrap2;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = ZStream_deflateInit_mC0824C75A3049F836143A79A0DC3CF1EC7A66BBB(L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::Detach(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_Detach_mB63341A25B78B9DBAE0B6C94FCF0CD6616EA3941 (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		ZOutputStream_ImplDisposing_mEC080C84E8E3BC2D9CA83BBE235D3626F699CCFE(__this, (bool)0, NULL);
	}

IL_000a:
	{
		bool L_1 = ___disposing0;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_Dispose_m90D40AD7CF06527523470747E2A22EECCFA25FED (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		ZOutputStream_ImplDisposing_mEC080C84E8E3BC2D9CA83BBE235D3626F699CCFE(__this, (bool)1, NULL);
	}

IL_000a:
	{
		bool L_1 = ___disposing0;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::ImplDisposing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_ImplDisposing_mEC080C84E8E3BC2D9CA83BBE235D3626F699CCFE (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, bool ___disposeOutput0, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0 = __this->___closed_12;
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				{
					__this->___closed_12 = (bool)1;
					VirtualActionInvoker0::Invoke(40 /* System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::End() */, __this);
					bool L_1 = ___disposeOutput0;
					if (!L_1)
					{
						goto IL_002e;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___output_11;
					NullCheck(L_2);
					Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_2, NULL);
				}

IL_002e:
				{
					__this->___output_11 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___output_11), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				VirtualActionInvoker0::Invoke(41 /* System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::Finish() */, __this);
				goto IL_0036;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0010_1;
				}
				throw e;
			}

CATCH_0010_1:
			{// begin catch(System.IO.IOException)
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0036;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_End_mF63FB523EBB92AD8551DB8C5AA154F33FEA2EC8C (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, const RuntimeMethod* method) 
{
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = __this->___z_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = __this->___compress_10;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_2 = __this->___z_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ZStream_deflateEnd_m7D4423F1CED1E553B6BDECCBBA560A1EC470B02A(L_2, NULL);
		goto IL_002b;
	}

IL_001f:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_4 = __this->___z_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ZStream_inflateEnd_m2EFD970A32AAA3394CF7C51620D7CD7C4C844185(L_4, NULL);
	}

IL_002b:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_6 = __this->___z_6;
		NullCheck(L_6);
		ZStream_free_mED7B6D68AF5367EA7F81BFA479C8FC6FC3B6FFDF(L_6, NULL);
		__this->___z_6 = (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z_6), (void*)(ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A*)NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_Finish_m6A5C2108FFF891C550C5A1588E4B04EF99CCDCB1 (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B8_0 = NULL;

IL_0000:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = __this->___z_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buf_8;
		NullCheck(L_0);
		L_0->___next_out_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___next_out_21), (void*)L_1);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_2 = __this->___z_6;
		NullCheck(L_2);
		L_2->___next_out_index_22 = 0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_3 = __this->___z_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___buf_8;
		NullCheck(L_4);
		NullCheck(L_3);
		L_3->___avail_out_23 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		bool L_5 = __this->___compress_10;
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_6 = __this->___z_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ZStream_inflate_m4009306F2D1A99748B30E600F1531D286F58421A(L_6, 4, NULL);
		G_B3_0 = L_7;
		goto IL_0052;
	}

IL_0046:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_8 = __this->___z_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ZStream_deflate_mDC34A5CE1DD26E2AFB85788944E9B76D4222B67B(L_8, 4, NULL);
		G_B3_0 = L_9;
	}

IL_0052:
	{
		V_0 = G_B3_0;
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_11 = V_0;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		bool L_12 = __this->___compress_10;
		if (L_12)
		{
			goto IL_0069;
		}
	}
	{
		G_B8_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110));
		goto IL_006e;
	}

IL_0069:
	{
		G_B8_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F));
	}

IL_006e:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_13 = __this->___z_6;
		NullCheck(L_13);
		String_t* L_14 = L_13->___msg_25;
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B8_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81B54C81CE5770A2FB716FE3138FA18CE998793D)), L_14, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_16 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZOutputStream_Finish_m6A5C2108FFF891C550C5A1588E4B04EF99CCDCB1_RuntimeMethod_var)));
	}

IL_0089:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___buf_8;
		NullCheck(L_17);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_18 = __this->___z_6;
		NullCheck(L_18);
		int32_t L_19 = L_18->___avail_out_23;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_19));
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = __this->___output_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___buf_8;
		int32_t L_23 = V_1;
		NullCheck(L_21);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_21, L_22, 0, L_23);
	}

IL_00b5:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_24 = __this->___z_6;
		NullCheck(L_24);
		int32_t L_25 = L_24->___avail_in_19;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_0000;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_26 = __this->___z_6;
		NullCheck(L_26);
		int32_t L_27 = L_26->___avail_out_23;
		if (!L_27)
		{
			goto IL_0000;
		}
	}
	{
		VirtualActionInvoker0::Invoke(21 /* System.Void System.IO.Stream::Flush() */, __this);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_Flush_mF17068A8E086BFBB7436448C24F94A2F61C33C4C (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___output_11;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(21 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZOutputStream::get_FlushMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZOutputStream_get_FlushMode_m5831D59DEE53648322CBA77C9FC4A3EF61FC3CBB (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___flushLevel_7;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::set_FlushMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_set_FlushMode_m71DC8819441060DF824254EEEA439A2CE13739D6 (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___flushLevel_7 = L_0;
		return;
	}
}
// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZOutputStream::get_TotalIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZOutputStream_get_TotalIn_mA94F68957D72723F62F9D2379F86C299EF06E64E (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, const RuntimeMethod* method) 
{
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = __this->___z_6;
		NullCheck(L_0);
		int64_t L_1 = L_0->___total_in_20;
		return L_1;
	}
}
// System.Int64 Org.BouncyCastle.Utilities.Zlib.ZOutputStream::get_TotalOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZOutputStream_get_TotalOut_mF8945626B0C3F7D53662F0E054D4E5C5D14EC15B (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, const RuntimeMethod* method) 
{
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_0 = __this->___z_6;
		NullCheck(L_0);
		int64_t L_1 = L_0->___total_out_24;
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_Write_mF448B1FE6BCDC2A0E81C730082A5E324ACC35BD1 (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Streams_t887A84321A9B6C945302CE33070663C833A0E1D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	String_t* G_B10_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		il2cpp_codegen_runtime_class_init_inline(Streams_t887A84321A9B6C945302CE33070663C833A0E1D7_il2cpp_TypeInfo_var);
		Streams_ValidateBufferArguments_m233D29B534DA4B49A50BA11368B5713BAFBEB03E(L_0, L_1, L_2, NULL);
		int32_t L_3 = ___count2;
		if (L_3)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_4 = __this->___z_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer0;
		NullCheck(L_4);
		L_4->___next_in_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___next_in_17), (void*)L_5);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_6 = __this->___z_6;
		int32_t L_7 = ___offset1;
		NullCheck(L_6);
		L_6->___next_in_index_18 = L_7;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_8 = __this->___z_6;
		int32_t L_9 = ___count2;
		NullCheck(L_8);
		L_8->___avail_in_19 = L_9;
	}

IL_0030:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_10 = __this->___z_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___buf_8;
		NullCheck(L_10);
		L_10->___next_out_21 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___next_out_21), (void*)L_11);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_12 = __this->___z_6;
		NullCheck(L_12);
		L_12->___next_out_index_22 = 0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_13 = __this->___z_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___buf_8;
		NullCheck(L_14);
		NullCheck(L_13);
		L_13->___avail_out_23 = ((int32_t)(((RuntimeArray*)L_14)->max_length));
		bool L_15 = __this->___compress_10;
		if (L_15)
		{
			goto IL_007b;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_16 = __this->___z_6;
		int32_t L_17 = __this->___flushLevel_7;
		NullCheck(L_16);
		int32_t L_18;
		L_18 = ZStream_inflate_m4009306F2D1A99748B30E600F1531D286F58421A(L_16, L_17, NULL);
		G_B6_0 = L_18;
		goto IL_008c;
	}

IL_007b:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_19 = __this->___z_6;
		int32_t L_20 = __this->___flushLevel_7;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = ZStream_deflate_mDC34A5CE1DD26E2AFB85788944E9B76D4222B67B(L_19, L_20, NULL);
		G_B6_0 = L_21;
	}

IL_008c:
	{
		if (!G_B6_0)
		{
			goto IL_00bd;
		}
	}
	{
		bool L_22 = __this->___compress_10;
		if (L_22)
		{
			goto IL_009d;
		}
	}
	{
		G_B10_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110));
		goto IL_00a2;
	}

IL_009d:
	{
		G_B10_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F));
	}

IL_00a2:
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_23 = __this->___z_6;
		NullCheck(L_23);
		String_t* L_24 = L_23->___msg_25;
		String_t* L_25;
		L_25 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B10_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81B54C81CE5770A2FB716FE3138FA18CE998793D)), L_24, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_26 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_26, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZOutputStream_Write_mF448B1FE6BCDC2A0E81C730082A5E324ACC35BD1_RuntimeMethod_var)));
	}

IL_00bd:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_27 = __this->___output_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___buf_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___buf_8;
		NullCheck(L_29);
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_30 = __this->___z_6;
		NullCheck(L_30);
		int32_t L_31 = L_30->___avail_out_23;
		NullCheck(L_27);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_27, L_28, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_29)->max_length)), L_31)));
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_32 = __this->___z_6;
		NullCheck(L_32);
		int32_t L_33 = L_32->___avail_in_19;
		if ((((int32_t)L_33) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_34 = __this->___z_6;
		NullCheck(L_34);
		int32_t L_35 = L_34->___avail_out_23;
		if (!L_35)
		{
			goto IL_0030;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStream::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_WriteByte_m0D3B28F7DB8A5E94408F54726E0693E45441644D (ZOutputStream_t99206793D3173D0AB82589017321A43FEAE8970D* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___buf1_9;
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___buf1_9;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_2, 0, 1);
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
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStreamLeaveOpen::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStreamLeaveOpen__ctor_mC9CDEFC5DA9BB8F999F8ADC08245F888591B778E (ZOutputStreamLeaveOpen_tA041B4BC55EE80220EB008E57321F931EA2BAF5E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___output0;
		ZOutputStream__ctor_m7A80637E8841596BEBDB09A6E9F152128403E297(__this, L_0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStreamLeaveOpen::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStreamLeaveOpen__ctor_mCC37B29385D5CFEF9DBA1AB85CD76D4D911B0A14 (ZOutputStreamLeaveOpen_tA041B4BC55EE80220EB008E57321F931EA2BAF5E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, bool ___nowrap1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___output0;
		bool L_1 = ___nowrap1;
		ZOutputStream__ctor_m67BE5B3F97B479085449A140F77C5C64C09B800C(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStreamLeaveOpen::.ctor(System.IO.Stream,Org.BouncyCastle.Utilities.Zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStreamLeaveOpen__ctor_mFCDA7E825C5988296EAC2E07386F032E3F76212D (ZOutputStreamLeaveOpen_tA041B4BC55EE80220EB008E57321F931EA2BAF5E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* ___z1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___output0;
		ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* L_1 = ___z1;
		ZOutputStream__ctor_m85DB8A7A9FA6C5141D61F99CFAF0FA4E4E58086D(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStreamLeaveOpen::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStreamLeaveOpen__ctor_m598F29D60EE24D13448049113E3FF875BC8B752D (ZOutputStreamLeaveOpen_tA041B4BC55EE80220EB008E57321F931EA2BAF5E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, int32_t ___level1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___output0;
		int32_t L_1 = ___level1;
		ZOutputStream__ctor_m69B91A767C69866726CF9C316DBEDB918A38D6D1(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStreamLeaveOpen::.ctor(System.IO.Stream,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStreamLeaveOpen__ctor_mA66085A3432AC492E2BC3A77FE0D6286EF25759F (ZOutputStreamLeaveOpen_tA041B4BC55EE80220EB008E57321F931EA2BAF5E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, int32_t ___level1, bool ___nowrap2, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___output0;
		int32_t L_1 = ___level1;
		bool L_2 = ___nowrap2;
		ZOutputStream__ctor_m758F8442717F2B85CF38AD97A416308A73498B69(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZOutputStreamLeaveOpen::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStreamLeaveOpen_Dispose_m162CBADD98861BAF93B9BBD4DECC6182B1443110 (ZOutputStreamLeaveOpen_tA041B4BC55EE80220EB008E57321F931EA2BAF5E* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___disposing0;
		ZOutputStream_Detach_mB63341A25B78B9DBAE0B6C94FCF0CD6616EA3941(__this, L_0, NULL);
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
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateInit_mFB731DDCCAF09E92C4C56C3572CC69E11C5C2613 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ZStream_inflateInit_m685AE4A3EA17C1AD909ABEBDEED9F8163A1108B1(__this, ((int32_t)15), NULL);
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateInit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateInit_m8BEE1A8C1AD87D243EEC4D5F93CDCFFB670C64DE (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, bool ___nowrap0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___nowrap0;
		int32_t L_1;
		L_1 = ZStream_inflateInit_m0B55FE89DEE64C41776E8CA40368B7DD7DACD8DC(__this, ((int32_t)15), L_0, NULL);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateInit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateInit_m685AE4A3EA17C1AD909ABEBDEED9F8163A1108B1 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___w0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___w0;
		int32_t L_1;
		L_1 = ZStream_inflateInit_m0B55FE89DEE64C41776E8CA40368B7DD7DACD8DC(__this, L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateInit(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateInit_m0B55FE89DEE64C41776E8CA40368B7DD7DACD8DC (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___w0, bool ___nowrap1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* G_B2_0 = NULL;
	Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* G_B2_1 = NULL;
	ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* G_B1_0 = NULL;
	Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* G_B3_1 = NULL;
	Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* G_B3_2 = NULL;
	{
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_0 = (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568*)il2cpp_codegen_object_new(Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Inflate__ctor_mC9D3BC1448740A6F818E30CCD47F85E720F6F20F(L_0, NULL);
		__this->___istate_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___istate_27), (void*)L_0);
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_1 = __this->___istate_27;
		bool L_2 = ___nowrap1;
		G_B1_0 = __this;
		G_B1_1 = L_1;
		if (L_2)
		{
			G_B2_0 = __this;
			G_B2_1 = L_1;
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___w0;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0018:
	{
		int32_t L_4 = ___w0;
		G_B3_0 = ((-L_4));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		NullCheck(G_B3_2);
		int32_t L_5;
		L_5 = Inflate_inflateInit_mD400EDDA880FBBB05FBBC77F9DB6AB9583214084(G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_5;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflate_m4009306F2D1A99748B30E600F1531D286F58421A (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___f0, const RuntimeMethod* method) 
{
	{
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_0 = __this->___istate_27;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_1 = __this->___istate_27;
		int32_t L_2 = ___f0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = Inflate_inflate_mD4DEF2B6B03F0011D482E7EB2190C61B7F5C1747(L_1, __this, L_2, NULL);
		return L_3;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateEnd_m2EFD970A32AAA3394CF7C51620D7CD7C4C844185 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, const RuntimeMethod* method) 
{
	{
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_0 = __this->___istate_27;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_1 = __this->___istate_27;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Inflate_inflateEnd_m7DE4EE94BC35E24DDD74A6005B3AF8CF5C61E410(L_1, __this, NULL);
		__this->___istate_27 = (Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___istate_27), (void*)(Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568*)NULL);
		return L_2;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateSync_mAD10E85147837CC034E71E960ED284841174EC6A (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, const RuntimeMethod* method) 
{
	{
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_0 = __this->___istate_27;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_1 = __this->___istate_27;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Inflate_inflateSync_m9017752868197E9912BBCD62CBDD19F381644429(L_1, __this, NULL);
		return L_2;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::inflateSetDictionary(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateSetDictionary_m65D673F68B76D47C83B09D322BB389C96BCC1A59 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dictionary0, int32_t ___dictLength1, const RuntimeMethod* method) 
{
	{
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_0 = __this->___istate_27;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Inflate_t3461F0DA55A1528EC48FFBEFB467A6EDF7F57568* L_1 = __this->___istate_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___dictionary0;
		int32_t L_3 = ___dictLength1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Inflate_inflateSetDictionary_m30171385BE53EA43A26E9D2648165F661F198392(L_1, __this, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateInit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_mDC62641556D8770CFA0BE6F8E94F02CEAACF6CD7 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___level0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___level0;
		int32_t L_1;
		L_1 = ZStream_deflateInit_m99782A597750BD9BEDE02751A9ED8D961731DF55(__this, L_0, ((int32_t)15), NULL);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateInit(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_mC0824C75A3049F836143A79A0DC3CF1EC7A66BBB (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___level0, bool ___nowrap1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___level0;
		bool L_1 = ___nowrap1;
		int32_t L_2;
		L_2 = ZStream_deflateInit_m977453E3A64BE7812C6F49955368BF0AF5163AEF(__this, L_0, ((int32_t)15), L_1, NULL);
		return L_2;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateInit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_m99782A597750BD9BEDE02751A9ED8D961731DF55 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___level0, int32_t ___bits1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___level0;
		int32_t L_1 = ___bits1;
		int32_t L_2;
		L_2 = ZStream_deflateInit_m977453E3A64BE7812C6F49955368BF0AF5163AEF(__this, L_0, L_1, (bool)0, NULL);
		return L_2;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateInit(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_m977453E3A64BE7812C6F49955368BF0AF5163AEF (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___level0, int32_t ___bits1, bool ___nowrap2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* G_B2_1 = NULL;
	Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* G_B1_1 = NULL;
	Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* G_B3_2 = NULL;
	Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* G_B3_3 = NULL;
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_0 = (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5*)il2cpp_codegen_object_new(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Deflate__ctor_m4E9C8614F21BA09C94FD817471E720B8BFA8DB4E(L_0, NULL);
		__this->___dstate_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dstate_26), (void*)L_0);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_1 = __this->___dstate_26;
		int32_t L_2 = ___level0;
		bool L_3 = ___nowrap2;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		G_B1_2 = L_1;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			G_B2_2 = L_1;
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = ___bits1;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_001b;
	}

IL_0019:
	{
		int32_t L_5 = ___bits1;
		G_B3_0 = ((-L_5));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_001b:
	{
		NullCheck(G_B3_3);
		int32_t L_6;
		L_6 = Deflate_deflateInit_m74C21FBD59700B799049BF8AC85904787A1483D1(G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_6;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflate_mDC34A5CE1DD26E2AFB85788944E9B76D4222B67B (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_0 = __this->___dstate_26;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_1 = __this->___dstate_26;
		int32_t L_2 = ___flush0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = Deflate_deflate_m9FDC8959B852F56EB5E2C7B26771E6AF72172C27(L_1, __this, L_2, NULL);
		return L_3;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateEnd_m7D4423F1CED1E553B6BDECCBBA560A1EC470B02A (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, const RuntimeMethod* method) 
{
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_0 = __this->___dstate_26;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_1 = __this->___dstate_26;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Deflate_deflateEnd_mDB79F1E31028902CE105F8C76D433B1F17FA08BA(L_1, NULL);
		__this->___dstate_26 = (Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dstate_26), (void*)(Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5*)NULL);
		return L_2;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateParams(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateParams_m7A3AB5BD08F5C53A7AE111109737D7C940B106DB (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, int32_t ___level0, int32_t ___strategy1, const RuntimeMethod* method) 
{
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_0 = __this->___dstate_26;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_1 = __this->___dstate_26;
		int32_t L_2 = ___level0;
		int32_t L_3 = ___strategy1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Deflate_deflateParams_m94A3953A6A31C1F0F4771D9703D724FDB7E889F8(L_1, __this, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::deflateSetDictionary(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateSetDictionary_m077E9F17BDEC8F00F2C29705DFD6A140D061A81C (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dictionary0, int32_t ___dictLength1, const RuntimeMethod* method) 
{
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_0 = __this->___dstate_26;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_1 = __this->___dstate_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___dictionary0;
		int32_t L_3 = ___dictLength1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Deflate_deflateSetDictionary_mE1DED130289FCE6831034479A220F0FC40263A91(L_1, __this, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZStream::flush_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream_flush_pending_m40001A1615B81C64E1DBDE95F39E28C2C3E7C7F7 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_0 = __this->___dstate_26;
		NullCheck(L_0);
		int32_t L_1 = L_0->___pending_60;
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___avail_out_23;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = __this->___avail_out_23;
		V_0 = L_4;
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_6 = __this->___dstate_26;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6->___pending_buf_58;
		NullCheck(L_7);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_8 = __this->___dstate_26;
		NullCheck(L_8);
		int32_t L_9 = L_8->___pending_out_59;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) <= ((int32_t)L_9)))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___next_out_21;
		NullCheck(L_10);
		int32_t L_11 = __this->___next_out_index_22;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))) <= ((int32_t)L_11)))
		{
			goto IL_0078;
		}
	}
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_12 = __this->___dstate_26;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12->___pending_buf_58;
		NullCheck(L_13);
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_14 = __this->___dstate_26;
		NullCheck(L_14);
		int32_t L_15 = L_14->___pending_out_59;
		int32_t L_16 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16)))))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___next_out_21;
		NullCheck(L_17);
		int32_t L_18 = __this->___next_out_index_22;
		int32_t L_19 = V_0;
	}

IL_0078:
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_20 = __this->___dstate_26;
		NullCheck(L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_20->___pending_buf_58;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_22 = __this->___dstate_26;
		NullCheck(L_22);
		int32_t L_23 = L_22->___pending_out_59;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___next_out_21;
		int32_t L_25 = __this->___next_out_index_22;
		int32_t L_26 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, L_23, (RuntimeArray*)L_24, L_25, L_26, NULL);
		int32_t L_27 = __this->___next_out_index_22;
		int32_t L_28 = V_0;
		__this->___next_out_index_22 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_29 = __this->___dstate_26;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_30 = L_29;
		NullCheck(L_30);
		int32_t L_31 = L_30->___pending_out_59;
		int32_t L_32 = V_0;
		NullCheck(L_30);
		L_30->___pending_out_59 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
		int64_t L_33 = __this->___total_out_24;
		int32_t L_34 = V_0;
		__this->___total_out_24 = ((int64_t)il2cpp_codegen_add(L_33, ((int64_t)L_34)));
		int32_t L_35 = __this->___avail_out_23;
		int32_t L_36 = V_0;
		__this->___avail_out_23 = ((int32_t)il2cpp_codegen_subtract(L_35, L_36));
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_37 = __this->___dstate_26;
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_38 = L_37;
		NullCheck(L_38);
		int32_t L_39 = L_38->___pending_60;
		int32_t L_40 = V_0;
		NullCheck(L_38);
		L_38->___pending_60 = ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_41 = __this->___dstate_26;
		NullCheck(L_41);
		int32_t L_42 = L_41->___pending_60;
		if (L_42)
		{
			goto IL_010a;
		}
	}
	{
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_43 = __this->___dstate_26;
		NullCheck(L_43);
		L_43->___pending_out_59 = 0;
	}

IL_010a:
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Utilities.Zlib.ZStream::read_buf(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_read_buf_mDDD9071E93E13B3AF2BEA67DDB8EBBE7E162F5DB (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___start1, int32_t ___size2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___avail_in_19;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___size2;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_3 = ___size2;
		V_0 = L_3;
	}

IL_000d:
	{
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		int32_t L_5 = __this->___avail_in_19;
		int32_t L_6 = V_0;
		__this->___avail_in_19 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		Deflate_t10D3FD1A0FE3F0719E94FD03F588111697DFABC5* L_7 = __this->___dstate_26;
		NullCheck(L_7);
		int32_t L_8 = L_7->___noheader_61;
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* L_9 = __this->____adler_30;
		int64_t L_10 = __this->___adler_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___next_in_17;
		int32_t L_12 = __this->___next_in_index_18;
		int32_t L_13 = V_0;
		NullCheck(L_9);
		int64_t L_14;
		L_14 = Adler32_adler32_m8F1E88AC5C7EB23108FD9110F0D3ADFAD85BB611(L_9, L_10, L_11, L_12, L_13, NULL);
		__this->___adler_29 = L_14;
	}

IL_0051:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___next_in_17;
		int32_t L_16 = __this->___next_in_index_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___buf0;
		int32_t L_18 = ___start1;
		int32_t L_19 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, L_19, NULL);
		int32_t L_20 = __this->___next_in_index_18;
		int32_t L_21 = V_0;
		__this->___next_in_index_18 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		int64_t L_22 = __this->___total_in_20;
		int32_t L_23 = V_0;
		__this->___total_in_20 = ((int64_t)il2cpp_codegen_add(L_22, ((int64_t)L_23)));
		int32_t L_24 = V_0;
		return L_24;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZStream::free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream_free_mED7B6D68AF5367EA7F81BFA479C8FC6FC3B6FFDF (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, const RuntimeMethod* method) 
{
	{
		__this->___next_in_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___next_in_17), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___next_out_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___next_out_21), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___msg_25 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___msg_25), (void*)(String_t*)NULL);
		__this->____adler_30 = (Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adler_30), (void*)(Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F*)NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Utilities.Zlib.ZStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream__ctor_mBE20025BEFCE530A6D52A02D175B3F909281C9E8 (ZStream_t029C7F08844C64CD4910C01ED269763D7AA9353A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F* L_0 = (Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F*)il2cpp_codegen_object_new(Adler32_t52F5DAA2B318D80751E836178D6D7BD12E6CEA6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Adler32__ctor_m58BB0F179C2D5601584A545B808ACF78E7D01A2D(L_0, NULL);
		__this->____adler_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adler_30), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
