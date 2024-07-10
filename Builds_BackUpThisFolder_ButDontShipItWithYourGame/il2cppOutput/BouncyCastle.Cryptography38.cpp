#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Byte[,]
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_tCF9122CB37CF1ED59631FF3661977DEA9E0F3BC3;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t365B2E6F928E8F316920B3343C0F4CB5ACDED6DF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_tEDDF53A39E29A7E233DC39CBCBF2B39DD1DA4DA4;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0;
// Org.BouncyCastle.Crypto.OutputLengthException
struct OutputLengthException_tB57BC6652C8E8A36DCC698125BA59983BA3CA684;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t5F3CF6FEA3FF0BE7A72ECD4BE1DA7270ACDEDA54;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
struct SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217;
// Org.BouncyCastle.Crypto.Engines.SparkleEngine
struct SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.Engines.TeaEngine
struct TeaEngine_t6BC42223B1D728340B8F17D492E937CA2D89AD6E;
// Org.BouncyCastle.Crypto.Engines.ThreefishEngine
struct ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856;
// Org.BouncyCastle.Crypto.Engines.TnepresEngine
struct TnepresEngine_t425E9EFBC4AB32EC5E5EC5D6FEADB4F3BBB28FCE;
// Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters
struct TweakableBlockCipherParameters_t876263FF38FDD4501C518FB9290E1E02E7565E17;
// Org.BouncyCastle.Crypto.Engines.TwofishEngine
struct TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher
struct Threefish1024Cipher_t09C03FC6D8744C65F6E6FA08785807CB8B5035DA;
// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher
struct Threefish256Cipher_tFFB4159F61151680B61A7DE764D3385E6403AD1E;
// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher
struct Threefish512Cipher_tC42033E65F770696004AF3BA13B6225F29E56A35;
// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
struct ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F;

IL2CPP_EXTERN_C RuntimeClass* AeadParameters_t93E8A1B127787EEFD141B5524E4DBA1E88C46380_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataLengthException_tCF9122CB37CF1ED59631FF3661977DEA9E0F3BC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCipherTextException_tEDDF53A39E29A7E233DC39CBCBF2B39DD1DA4DA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutputLengthException_tB57BC6652C8E8A36DCC698125BA59983BA3CA684_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithIV_t5F3CF6FEA3FF0BE7A72ECD4BE1DA7270ACDEDA54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tF9C23619E5FFFC96AC678CFD78D055CEE9CA411F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Threefish1024Cipher_t09C03FC6D8744C65F6E6FA08785807CB8B5035DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Threefish256Cipher_tFFB4159F61151680B61A7DE764D3385E6403AD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Threefish512Cipher_tC42033E65F770696004AF3BA13B6225F29E56A35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweakableBlockCipherParameters_t876263FF38FDD4501C518FB9290E1E02E7565E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7919EF601386C08FC5EFB981B4A1E478D8413596173FC159B15739E87EE1BA50_203_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F42A21A8C4DAEEB40F3FE4E0BB60A6312C546C94759E076AEBC0DA92D92D9D22_432_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CECB4252188823B622C9B595E368C07831C1FA9;
IL2CPP_EXTERN_C String_t* _stringLiteral1246F1BCB575D225CA34C6B97DF1A8756683E2EC;
IL2CPP_EXTERN_C String_t* _stringLiteral14230403A1CFC5A19F854BBF8DBA3B9A2CF7E7AF;
IL2CPP_EXTERN_C String_t* _stringLiteral19A7034042434538838BF70971EC853B1C495314;
IL2CPP_EXTERN_C String_t* _stringLiteral25170142FB4F3488DD4A97779A090DDE52AC8358;
IL2CPP_EXTERN_C String_t* _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2;
IL2CPP_EXTERN_C String_t* _stringLiteral34832F2ED794F0A99009FD00762FE94CEB1FF2DB;
IL2CPP_EXTERN_C String_t* _stringLiteral3CCD77DA02D3DE32F1A27BDC9C50B6019691E14C;
IL2CPP_EXTERN_C String_t* _stringLiteral42E53CCDF342E4FD41E871BB4BBF9E1F824FA4EF;
IL2CPP_EXTERN_C String_t* _stringLiteral47D20EC1D621302B327F8DA26CCC5372F970DFB8;
IL2CPP_EXTERN_C String_t* _stringLiteral4901277BD17A5B2F9FD51DCD98D6CE81842202C4;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9BC2C968B378A43DE4912759FE467E1C07DD79;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBDAE183BC30C2AD6BD85811A7DA978BDAB9809;
IL2CPP_EXTERN_C String_t* _stringLiteral601CCA376E46978BDEF3632F3CF3209C7891C382;
IL2CPP_EXTERN_C String_t* _stringLiteral681750BBC1CAE17823569F11E308FA5F0A2F0AF8;
IL2CPP_EXTERN_C String_t* _stringLiteral6FC2A08F30023C6460F14108C58D275A5F58ED73;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE;
IL2CPP_EXTERN_C String_t* _stringLiteral70AD9209BF10AE024F82A25D14F57A35DA858E85;
IL2CPP_EXTERN_C String_t* _stringLiteral7F5D7630CEB63535569DC2F806E2D2E580AB463C;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD5E9188BC73177F13AD2E0EA3F46D069D1C2B4;
IL2CPP_EXTERN_C String_t* _stringLiteral930666AA55A409F0C125598AF425653A0FDF4C32;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB7C8E902F2422AB97DE40F9CC4FC454C25138E;
IL2CPP_EXTERN_C String_t* _stringLiteral9F954BE9FD9E999DA1677DADC6D2CAB27412A282;
IL2CPP_EXTERN_C String_t* _stringLiteralA00666B082ECFBED37CF7EF580BCCF7C15F6A8FE;
IL2CPP_EXTERN_C String_t* _stringLiteralA0796E90F43FCEAA833791A89357F3DA6E4AAF4E;
IL2CPP_EXTERN_C String_t* _stringLiteralA5421735C67AC5A0AE793A21C6A026FDFEAD5209;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC8716BC5F7CC45A836F8FA5797260DD4DF1462;
IL2CPP_EXTERN_C String_t* _stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841;
IL2CPP_EXTERN_C String_t* _stringLiteralC894542CC15E7FDD0B254592D14D3E16EB7762B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCBF64FEAB7738F7C1069DC9F2288D4FF6434BF27;
IL2CPP_EXTERN_C String_t* _stringLiteralD187D665853B8D7EA2432DDF6CBF2E65DC3BA81D;
IL2CPP_EXTERN_C String_t* _stringLiteralD4587DAEA872EB0581FD7E2ACC74AA38FE7E38A4;
IL2CPP_EXTERN_C String_t* _stringLiteralD55E844A4496F271421F64624D6A74270297F463;
IL2CPP_EXTERN_C String_t* _stringLiteralECAD71D2A48AFE84D642BA9E2C90621A70C4A478;
IL2CPP_EXTERN_C String_t* _stringLiteralF470DB65FA73D79C951B41379E75BE39E0BD26B4;
IL2CPP_EXTERN_C String_t* _stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991;
IL2CPP_EXTERN_C String_t* _stringLiteralFE004A5E158484C188AA92B5BB521E3CD282D19F;
IL2CPP_EXTERN_C const RuntimeMethod* SparkleEngine_CheckAad_m9A18AF8A4FF96A9169EE0A0487D13D856020A3F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SparkleEngine_CheckData_mA2E034F10C039D2636A8ED25A435C5A46EE20EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SparkleEngine_DoFinal_m9E3DBD9D1D6366F8B614A31897D627A58DDA1A7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SparkleEngine_Init_m26133DEFE60823EF9363352B63C10A5785CB548F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SparkleEngine_Reset_m3AA6A834A33DD621002B0120C4B9A6F79EBEAE7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SparkleEngine_SparkleOpt_m92E9A60AA7DA8577CAEF2F5337E319927B794F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SparkleEngine__ctor_m467A6BD4C7757568A70A3CA40C57C7EBFBA00591_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeaEngine_Init_m04800675AE54B01941A8E0DBCF3B8D69E315F039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeaEngine_ProcessBlock_mAB9F67B81EA2DE55185094012B5BAD16A88D519B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish1024Cipher_DecryptBlock_mB788000B0A3A3CFA275D187DE989E74F6548BE90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish1024Cipher_EncryptBlock_mA27B0CEB83AFDCBE762B0F86FA8902C19A27EB93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish256Cipher_DecryptBlock_m6A135145F39BBD4D60E1B33595766EA7D2478675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish256Cipher_EncryptBlock_m57EC48EFEAACE7D0831C3DBB993D6D8523C3BF16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish512Cipher_DecryptBlock_m156834AB1ED24358E1B2425753F0BDDFACDE9FFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish512Cipher_EncryptBlock_m433566865D4D18B25D395825B56362BA364CD545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_Init_m24CEE94DF1B2FC0CC5DE9F92586EE189BB106003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_ProcessBlock_m4E6D2651AC66B89288702DD013F5402EDF189008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_SetKey_m9571B51983654ECAD999DB598AF9F9E16A09B53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_SetTweak_mA281B4FD130242413DCCDFF306C98C31F6FCF009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine__ctor_mEEBD43CC6D8A98A26ED1D8A1F1B025C887FD056C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TnepresEngine_MakeWorkingKey_mB028BB86FEBF2BC2B4C1C423DB961754A7065BA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_Init_m1D5B70BC9642F3FB4541ABC584E69C957C22E671_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_ProcessBlock_mC32BEE0848CCC02DEAAE28B40AF54167D49A6C02_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.AeadParameters
struct AeadParameters_t93E8A1B127787EEFD141B5524E4DBA1E88C46380  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::associatedText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___associatedText_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::nonce
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce_1;
	// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::key
	KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* ___key_2;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::macSize
	int32_t ___macSize_3;
};
struct Il2CppArrayBounds;

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::m_key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_key_0;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t5F3CF6FEA3FF0BE7A72ECD4BE1DA7270ACDEDA54  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::m_parameters
	RuntimeObject* ___m_parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::m_iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_iv_1;
};

// Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
struct SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::encrypting
	bool ___encrypting_3;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::wKey
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___wKey_4;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X0
	int32_t ___X0_5;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X1
	int32_t ___X1_6;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X2
	int32_t ___X2_7;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X3
	int32_t ___X3_8;
};

struct SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::BlockSize
	int32_t ___BlockSize_0;
};

// Org.BouncyCastle.Crypto.Engines.SparkleEngine
struct SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F  : public RuntimeObject
{
	// System.String Org.BouncyCastle.Crypto.Engines.SparkleEngine::algorithmName
	String_t* ___algorithmName_1;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.SparkleEngine::state
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state_2;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.SparkleEngine::k
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___k_3;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.SparkleEngine::npub
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___npub_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.SparkleEngine::tag
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___tag_5;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.SparkleEngine::encrypted
	bool ___encrypted_6;
	// Org.BouncyCastle.Crypto.Engines.SparkleEngine/State Org.BouncyCastle.Crypto.Engines.SparkleEngine::m_state
	int32_t ___m_state_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.SparkleEngine::initialAssociatedText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___initialAssociatedText_8;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::m_bufferSizeDecrypt
	int32_t ___m_bufferSizeDecrypt_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.SparkleEngine::m_buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buf_10;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::m_bufPos
	int32_t ___m_bufPos_11;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::SCHWAEMM_KEY_LEN
	int32_t ___SCHWAEMM_KEY_LEN_12;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::SCHWAEMM_NONCE_LEN
	int32_t ___SCHWAEMM_NONCE_LEN_13;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::SPARKLE_STEPS_SLIM
	int32_t ___SPARKLE_STEPS_SLIM_14;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::SPARKLE_STEPS_BIG
	int32_t ___SPARKLE_STEPS_BIG_15;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::KEY_BYTES
	int32_t ___KEY_BYTES_16;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::KEY_WORDS
	int32_t ___KEY_WORDS_17;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::TAG_WORDS
	int32_t ___TAG_WORDS_18;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::TAG_BYTES
	int32_t ___TAG_BYTES_19;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::STATE_WORDS
	int32_t ___STATE_WORDS_20;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::RATE_WORDS
	int32_t ___RATE_WORDS_21;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::RATE_BYTES
	int32_t ___RATE_BYTES_22;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::CAP_MASK
	int32_t ___CAP_MASK_23;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::_A0
	uint32_t ____A0_24;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::_A1
	uint32_t ____A1_25;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::_M2
	uint32_t ____M2_26;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::_M3
	uint32_t ____M3_27;
};

struct SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.SparkleEngine::RCON
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___RCON_0;
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

// Org.BouncyCastle.Crypto.Engines.TeaEngine
struct TeaEngine_t6BC42223B1D728340B8F17D492E937CA2D89AD6E  : public RuntimeObject
{
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.TeaEngine::_a
	uint32_t ____a_4;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.TeaEngine::_b
	uint32_t ____b_5;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.TeaEngine::_c
	uint32_t ____c_6;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.TeaEngine::_d
	uint32_t ____d_7;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.TeaEngine::_initialised
	bool ____initialised_8;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.TeaEngine::_forEncryption
	bool ____forEncryption_9;
};

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine
struct ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::blocksizeBytes
	int32_t ___blocksizeBytes_14;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::blocksizeWords
	int32_t ___blocksizeWords_15;
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::currentBlock
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___currentBlock_16;
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::t
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t_17;
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::kw
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw_18;
	// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher Org.BouncyCastle.Crypto.Engines.ThreefishEngine::cipher
	ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F* ___cipher_19;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.ThreefishEngine::forEncryption
	bool ___forEncryption_20;
};

struct ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields
{
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD9
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD9_10;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD17
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD17_11;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD5
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD5_12;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD3_13;
};

// Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters
struct TweakableBlockCipherParameters_t876263FF38FDD4501C518FB9290E1E02E7565E17  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters::tweak
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___tweak_0;
	// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters::key
	KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* ___key_1;
};

// Org.BouncyCastle.Crypto.Engines.TwofishEngine
struct TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.Engines.TwofishEngine::encrypting
	bool ___encrypting_36;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS0
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS0_37;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS1
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS1_38;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS2
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS2_39;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS3_40;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gSubKeys
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gSubKeys_41;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gSBox
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gSBox_42;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::k64Cnt
	int32_t ___k64Cnt_43;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::workingKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingKey_44;
};

struct TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields
{
	// System.Byte[,] Org.BouncyCastle.Crypto.Engines.TwofishEngine::P
	ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* ___P_0;
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

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
struct ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F  : public RuntimeObject
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::t
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t_0;
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::kw
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw_1;
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

// Org.BouncyCastle.Crypto.Engines.TnepresEngine
struct TnepresEngine_t425E9EFBC4AB32EC5E5EC5D6FEADB4F3BBB28FCE  : public SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217
{
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

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher
struct Threefish1024Cipher_t09C03FC6D8744C65F6E6FA08785807CB8B5035DA  : public ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F
{
};

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher
struct Threefish256Cipher_tFFB4159F61151680B61A7DE764D3385E6403AD1E  : public ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F
{
};

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher
struct Threefish512Cipher_tC42033E65F770696004AF3BA13B6225F29E56A35  : public ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F
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

// Org.BouncyCastle.Crypto.CryptoException
struct CryptoException_t5642D4C977A522D4030A72AF72BFB5EC3C55082C  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_tCF9122CB37CF1ED59631FF3661977DEA9E0F3BC3  : public CryptoException_t5642D4C977A522D4030A72AF72BFB5EC3C55082C
{
};

// Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_tEDDF53A39E29A7E233DC39CBCBF2B39DD1DA4DA4  : public CryptoException_t5642D4C977A522D4030A72AF72BFB5EC3C55082C
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Org.BouncyCastle.Crypto.OutputLengthException
struct OutputLengthException_tB57BC6652C8E8A36DCC698125BA59983BA3CA684  : public DataLengthException_tCF9122CB37CF1ED59631FF3661977DEA9E0F3BC3
{
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
// System.Byte[,]
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638  : public RuntimeArray
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
	inline uint8_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_mEF1D069E296B40E3A6562D88497CEF4D4071F069_inline (ParametersWithIV_t5F3CF6FEA3FF0BE7A72ECD4BE1DA7270ACDEDA54* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::GetIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ParametersWithIV_GetIV_m40B44C89F5FB59DD7F08898B5223238123C037AA (ParametersWithIV_t5F3CF6FEA3FF0BE7A72ECD4BE1DA7270ACDEDA54* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.KeyParameter::get_KeyLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyParameter_get_KeyLength_m1413437DE93A7031A5D7CBCB1353A14AE70836FD (KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyParameter_GetKey_m4CF60D78522E0F608DD02E0C8DADE59E5303FA23 (KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt32(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_LE_To_UInt32_m5BD6F3A857FB8D1DE3211E57C5EF592968E95E84 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_Reset_m57B2D2C26173AAE00464EEAC91936D1435027E23 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::CheckAad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_CheckAad_m9A18AF8A4FF96A9169EE0A0487D13D856020A3F9 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessBufferAad(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_ProcessBufferAad_mB5548ED7949A0286B4C7E6E73FE2261E05FAF4D3 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___bufOff1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::DataLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_DataLength_mA5DC3F8EEF846867142FFE7FA64C783BE9D20CEF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, String_t* ___message3, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparkleEngine_ProcessBytes_mF34198F0221D297E47F3A55342D8382858790AF0 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes3, int32_t ___outOff4, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Crypto.Engines.SparkleEngine::CheckData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SparkleEngine_CheckData_mA2E034F10C039D2636A8ED25A435C5A46EE20EB9 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessBufferEncrypt(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_ProcessBufferEncrypt_mCCB891765487616881CF17864D5A590E9F1DE1D4 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___bufOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessBufferDecrypt(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_ProcessBufferDecrypt_m776C121C0C9030683CD72E3D012796D3A7ED5C47 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___bufOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.InvalidCipherTextException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCipherTextException__ctor_m156E07D264648E7A2BE3951110CD880B6479C9B5 (InvalidCipherTextException_tEDDF53A39E29A7E233DC39CBCBF2B39DD1DA4DA4* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::OutputLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_OutputLength_mE9721C2E284A57CD53D1F6E2525AF21318146178 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, String_t* ___message3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::SparkleOpt(System.UInt32[],System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SparkleEngine_SparkleOpt_m92E9A60AA7DA8577CAEF2F5337E319927B794F3C_inline (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state0, int32_t ___steps1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_LE(System.UInt32[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_mBF22AD8A701F52819B6DBB82213FA5C656EEBDD4 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, int32_t ___nsOff1, int32_t ___nsLen2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs3, int32_t ___bsOff4, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Arrays::FixedTimeEquals(System.Int32,System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool Arrays_FixedTimeEquals_m4DE1BED3FE5DD986E6BCE11E17813CF9F696BBA2 (int32_t ___len0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a1, int32_t ___aOff2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b3, int32_t ___bOff4, const RuntimeMethod* method) ;
// System.String Org.BouncyCastle.Crypto.Engines.SparkleEngine::get_AlgorithmName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SparkleEngine_get_AlgorithmName_mC597BB5DDC085E0B6B88DE3A979F17E3F9B125CC_inline (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_Reset_m3AA6A834A33DD621002B0120C4B9A6F79EBEAE7C (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, bool ___clearMac0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::FinishAad(Org.BouncyCastle.Crypto.Engines.SparkleEngine/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_FinishAad_m84B5EEA86E7DBFB51CFE5B52FA5F32DF40BFF3C3 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, int32_t ___nextState0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessFinalAad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_ProcessFinalAad_m1C08231CC2130DF4F804EEE9A35E9F6D945BF23B (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_LE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_m5257D54DB27EC5D905B28543D77303149C0BFD45 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Arrays::Clear(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays_Clear_mE465522F2D02073973463252AFD64B5F2E762EE2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_ProcessAadBytes_m9CAC6C6B28AB06C705B853A726FC4724B832E847 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Utilities.Integers::RotateRight(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C (uint32_t ___i0, int32_t ___distance1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::SparkleOpt8(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_SparkleOpt8_m3F12286F0A1D002C2E300EB4057005A47EA23671 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state0, int32_t ___steps1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::SparkleOpt12(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_SparkleOpt12_m71F02DC0C0F7F958B474970C1B732CD1E4FA61C4 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state0, int32_t ___steps1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::SparkleOpt16(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_SparkleOpt16_mF677840D9F41707230E76D9F06017909E9FB31F7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state0, int32_t ___steps1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::ArxBox(System.UInt32,System.UInt32&,System.UInt32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline (uint32_t ___rc0, uint32_t* ___s001, uint32_t* ___s012, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::ELL(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t SparkleEngine_ELL_mDD5087A7ADD4CB36C3DFE603C0C81FEB5A296E46_inline (uint32_t ___x0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.String Org.BouncyCastle.Utilities.Platform::GetTypeName(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_GetTypeName_mAE219F38A7A09C7F3B6FC85DDA460C60675F3A9D (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.TeaEngine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine_SetKey_mAD36DB36B9F820C3B4DFF9F8C06D3CCF16EEFD1A (TeaEngine_t6BC42223B1D728340B8F17D492E937CA2D89AD6E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TeaEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_DecryptBlock_m78A6D1A9B335D22D99C5B71A54E0C722FBBF2BDF (TeaEngine_t6BC42223B1D728340B8F17D492E937CA2D89AD6E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TeaEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_EncryptBlock_m9F3F46954AE5E0074BA15046DC5315F2175BD015 (TeaEngine_t6BC42223B1D728340B8F17D492E937CA2D89AD6E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_BE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m8DE23D6C7E8FB1AD9AA17CF868A8A2ECE246669F (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish256Cipher__ctor_mD4D451FA71FB0AB397E13B2C5E7CAF19E633E7A2 (Threefish256Cipher_tFFB4159F61151680B61A7DE764D3385E6403AD1E* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher__ctor_mC26535F6FADF9C30F8491CEAC5A45B19EB24CE8E (Threefish512Cipher_tC42033E65F770696004AF3BA13B6225F29E56A35* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher__ctor_mB5BA1CC98F6BF4382DF61D31CFBBFF16B2A6015F (Threefish1024Cipher_t09C03FC6D8744C65F6E6FA08785807CB8B5035DA* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* TweakableBlockCipherParameters_get_Key_mB9900872F32F8EED8F09D41B91717B4EF7A33CDD_inline (TweakableBlockCipherParameters_t876263FF38FDD4501C518FB9290E1E02E7565E17* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters::get_Tweak()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TweakableBlockCipherParameters_get_Tweak_m9CCD5E294B94EC79C8D24503FC888F23E9C90D1B_inline (TweakableBlockCipherParameters_t876263FF38FDD4501C518FB9290E1E02E7565E17* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt64(System.Byte[],System.Int32,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_LE_To_UInt64_m9F982E695BE6D3EF44494BC78E9776CDF223DEFC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine::Init(System.Boolean,System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_Init_mE09CE9363E4FAEAE845D7C827C397C7656D9EFC9 (ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856* __this, bool ___forEncryption0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___key1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___tweak2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine::SetKey(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_SetKey_m9571B51983654ECAD999DB598AF9F9E16A09B53F (ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___key0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine::SetTweak(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_SetTweak_mA281B4FD130242413DCCDFF306C98C31F6FCF009 (ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___tweak0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::ProcessBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreefishEngine_ProcessBlock_m4E6D2651AC66B89288702DD013F5402EDF189008 (ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___inWords0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___outWords1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt64_To_LE(System.UInt64[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_mAFA9B22D6B7E546FD2BA7C49DFDAD51FCC2E3D2C (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.DataLengthException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataLengthException__ctor_mC41D5E4EE1387D5FBC20928BCEDC48A063C7761E (DataLengthException_tCF9122CB37CF1ED59631FF3661977DEA9E0F3BC3* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.OutputLengthException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputLengthException__ctor_m73B4222CAFEC8E964DB838871853120F5CEBB527 (OutputLengthException_tB57BC6652C8E8A36DCC698125BA59983BA3CA684* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishCipher__ctor_m0627ED9FD0C928295DBA76FA92B97EB79853BBD8 (ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::RotlXor(System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA (uint64_t ___x0, int32_t ___n1, uint64_t ___xor2, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::XorRotr(System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6 (uint64_t ___x0, int32_t ___n1, uint64_t ___xor2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Integers::RotateLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Integers_RotateLeft_m9347621D8EE9496234E48F81B69A6E6EC815E79E (int32_t ___i0, int32_t ___distance1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb3_m12D2C13C215915C24A4D9768ACA28F39C6E32BB4 (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb2_m8F42880707930B40B23FB1A537C9B888C46485CE (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb1_m396DE687CBFB05AB79224ED7E9F353046F9E87B5 (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb0_m6D2A0FE6156CE012727DC52B39AFA8C4DC308E6E (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb7_mE703FFB70B329F58CEB1BACD603BA1A1669E887D (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb6_m3D54F6A3672F39D2987F8FA789F2CACC751A71BC (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb5_m2D2CCC0A769F88DB30EB039DAA7C388F7F456AB0 (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb4_mD85D11D4803C864407D51D6B93956D21A6666BCE (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::LT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib7_m223C8A4B779C3831BA847DF733419E5A74F7642F (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::InverseLT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32 (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib6_m42C304743C9276B0EDB89EDB15AB45060FCE0C59 (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib5_m8211F7171CE0143080C92309E125875A22F1CA88 (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib4_mD4AAD0D2F16D1533E66D825988E6A8D894D6BB54 (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib3_mB163EA5F93ACBD6333D4E016BF84C10EF5D6C107 (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib2_mC0C053B4D7ED4DB3F57BB4816D88296BF5184BD6 (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib1_m003F971CCB54D63628A162BF1E5D09B374F6B7C0 (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib0_m516707A88B90EBE527499C923D63E7B65744AEA1 (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase__ctor_mE64672FF78CA59CBC57D7202A256E4451C94D062 (SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_X(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_X_mD99DF556D9ECEE54B8EA2C94D1A15F1EEE5FBA62 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_Y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_Y_mF0905677A6AC12000BD763A1BF3EE2D66B559D4C (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_SetKey_m40C426203E4241FBC4B4AED904F9A14E283DB92F (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_EncryptBlock_mE467BB3059007C1A96EDF2A67A5512BC5351B4C5 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_DecryptBlock_mFB3591FB161A20DD71E0FBEC60B4B145CF614B47 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_MDS_Encode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_MDS_Encode_mBCC7A869CB0D6E45508A58FCFC5DD9E5DFCA92D5 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___k00, int32_t ___k11, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::F32(System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_F32_mA1E464AC93E73491171C12F549724C4C3B225B18 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___k321, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b0_m9EFF5BA12AF65D9573436729A13957B1A45BE78F (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b1_m7DA51E93510EAE6E1D25C14D66E83D1A12382289 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b2_mC9FBFAD92C3DBBC07EC10E3D4636C227A5D0BBD3 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b3_m151C91B19B1CDC4B0DF8FFF85AEAFD64A937D3C3 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_0_m4CABE82DCB80F4BAD8A775AF234B4A56830AE814 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_3_m8E7C9DABBF3AA686D6FB785ED2B6A5DAF2F149B8 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.Integers::RotateRight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Integers_RotateRight_m71F39EDEA8A0092EE20905D3BF8FA0086F72981C (int32_t ___i0, int32_t ___distance1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_rem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_rem_mFFE8550A3FFCCCCC4F158D5168753F67849DB130 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR2_m622B8348EE8738CE5DC1A0AA7BFDB22A8AA46916 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR1_mF7512A5846739CEDD9FA004E4B970F6DF2F41D4C (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::.ctor(Org.BouncyCastle.Crypto.Engines.SparkleEngine/SparkleParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine__ctor_m467A6BD4C7757568A70A3CA40C57C7EBFBA00591 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, int32_t ___sparkleParameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1246F1BCB575D225CA34C6B97DF1A8756683E2EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9BC2C968B378A43DE4912759FE467E1C07DD79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral681750BBC1CAE17823569F11E308FA5F0A2F0AF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF470DB65FA73D79C951B41379E75BE39E0BD26B4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* G_B9_0 = NULL;
	SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* G_B10_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___sparkleParameters0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0068;
			}
			case 2:
			{
				goto IL_00af;
			}
			case 3:
			{
				goto IL_00f3;
			}
		}
	}
	{
		goto IL_0137;
	}

IL_0021:
	{
		__this->___SCHWAEMM_KEY_LEN_12 = ((int32_t)128);
		__this->___SCHWAEMM_NONCE_LEN_13 = ((int32_t)128);
		V_1 = ((int32_t)128);
		V_0 = ((int32_t)256);
		V_2 = ((int32_t)128);
		__this->___SPARKLE_STEPS_SLIM_14 = 7;
		__this->___SPARKLE_STEPS_BIG_15 = ((int32_t)10);
		__this->___algorithmName_1 = _stringLiteral4B9BC2C968B378A43DE4912759FE467E1C07DD79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___algorithmName_1), (void*)_stringLiteral4B9BC2C968B378A43DE4912759FE467E1C07DD79);
		goto IL_0142;
	}

IL_0068:
	{
		__this->___SCHWAEMM_KEY_LEN_12 = ((int32_t)128);
		__this->___SCHWAEMM_NONCE_LEN_13 = ((int32_t)256);
		V_1 = ((int32_t)128);
		V_0 = ((int32_t)384);
		V_2 = ((int32_t)128);
		__this->___SPARKLE_STEPS_SLIM_14 = 7;
		__this->___SPARKLE_STEPS_BIG_15 = ((int32_t)11);
		__this->___algorithmName_1 = _stringLiteral681750BBC1CAE17823569F11E308FA5F0A2F0AF8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___algorithmName_1), (void*)_stringLiteral681750BBC1CAE17823569F11E308FA5F0A2F0AF8);
		goto IL_0142;
	}

IL_00af:
	{
		__this->___SCHWAEMM_KEY_LEN_12 = ((int32_t)192);
		__this->___SCHWAEMM_NONCE_LEN_13 = ((int32_t)192);
		V_1 = ((int32_t)192);
		V_0 = ((int32_t)384);
		V_2 = ((int32_t)192);
		__this->___SPARKLE_STEPS_SLIM_14 = 7;
		__this->___SPARKLE_STEPS_BIG_15 = ((int32_t)11);
		__this->___algorithmName_1 = _stringLiteralF470DB65FA73D79C951B41379E75BE39E0BD26B4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___algorithmName_1), (void*)_stringLiteralF470DB65FA73D79C951B41379E75BE39E0BD26B4);
		goto IL_0142;
	}

IL_00f3:
	{
		__this->___SCHWAEMM_KEY_LEN_12 = ((int32_t)256);
		__this->___SCHWAEMM_NONCE_LEN_13 = ((int32_t)256);
		V_1 = ((int32_t)256);
		V_0 = ((int32_t)512);
		V_2 = ((int32_t)256);
		__this->___SPARKLE_STEPS_SLIM_14 = 8;
		__this->___SPARKLE_STEPS_BIG_15 = ((int32_t)12);
		__this->___algorithmName_1 = _stringLiteral1246F1BCB575D225CA34C6B97DF1A8756683E2EC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___algorithmName_1), (void*)_stringLiteral1246F1BCB575D225CA34C6B97DF1A8756683E2EC);
		goto IL_0142;
	}

IL_0137:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBC8716BC5F7CC45A836F8FA5797260DD4DF1462)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine__ctor_m467A6BD4C7757568A70A3CA40C57C7EBFBA00591_RuntimeMethod_var)));
	}

IL_0142:
	{
		int32_t L_2 = __this->___SCHWAEMM_KEY_LEN_12;
		__this->___KEY_WORDS_17 = ((int32_t)(L_2>>5));
		int32_t L_3 = __this->___SCHWAEMM_KEY_LEN_12;
		__this->___KEY_BYTES_16 = ((int32_t)(L_3>>3));
		int32_t L_4 = V_1;
		__this->___TAG_WORDS_18 = ((int32_t)(L_4>>5));
		int32_t L_5 = V_1;
		__this->___TAG_BYTES_19 = ((int32_t)(L_5>>3));
		int32_t L_6 = V_0;
		__this->___STATE_WORDS_20 = ((int32_t)(L_6>>5));
		int32_t L_7 = __this->___SCHWAEMM_NONCE_LEN_13;
		__this->___RATE_WORDS_21 = ((int32_t)(L_7>>5));
		int32_t L_8 = __this->___SCHWAEMM_NONCE_LEN_13;
		__this->___RATE_BYTES_22 = ((int32_t)(L_8>>3));
		int32_t L_9 = V_2;
		V_3 = ((int32_t)(L_9>>6));
		int32_t L_10 = V_2;
		V_4 = ((int32_t)(L_10>>5));
		int32_t L_11 = __this->___RATE_WORDS_21;
		int32_t L_12 = V_4;
		G_B8_0 = __this;
		if ((((int32_t)L_11) > ((int32_t)L_12)))
		{
			G_B9_0 = __this;
			goto IL_01ac;
		}
	}
	{
		G_B10_0 = (-1);
		G_B10_1 = G_B8_0;
		goto IL_01b0;
	}

IL_01ac:
	{
		int32_t L_13 = V_4;
		G_B10_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		G_B10_1 = G_B9_0;
	}

IL_01b0:
	{
		NullCheck(G_B10_1);
		G_B10_1->___CAP_MASK_23 = G_B10_0;
		int32_t L_14 = V_3;
		__this->____A0_24 = ((int32_t)(((int32_t)(1<<((int32_t)(L_14&((int32_t)31)))))<<((int32_t)24)));
		int32_t L_15 = V_3;
		__this->____A1_25 = ((int32_t)(((int32_t)(1^((int32_t)(1<<((int32_t)(L_15&((int32_t)31)))))))<<((int32_t)24)));
		int32_t L_16 = V_3;
		__this->____M2_26 = ((int32_t)(((int32_t)(2^((int32_t)(1<<((int32_t)(L_16&((int32_t)31)))))))<<((int32_t)24)));
		int32_t L_17 = V_3;
		__this->____M3_27 = ((int32_t)(((int32_t)(3^((int32_t)(1<<((int32_t)(L_17&((int32_t)31)))))))<<((int32_t)24)));
		int32_t L_18 = __this->___STATE_WORDS_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->___state_2 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state_2), (void*)L_19);
		int32_t L_20 = __this->___KEY_WORDS_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_20);
		__this->___k_3 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_3), (void*)L_21);
		int32_t L_22 = __this->___RATE_WORDS_21;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_22);
		__this->___npub_4 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___npub_4), (void*)L_23);
		int32_t L_24 = __this->___RATE_BYTES_22;
		int32_t L_25 = __this->___TAG_BYTES_19;
		__this->___m_bufferSizeDecrypt_9 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		int32_t L_26 = __this->___m_bufferSizeDecrypt_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_26);
		__this->___m_buf_10 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_buf_10), (void*)L_27);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::GetKeyBytesSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparkleEngine_GetKeyBytesSize_m7BACC943B64CA486CD239381854D7B896150D27E (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___KEY_BYTES_16;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::GetIVBytesSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparkleEngine_GetIVBytesSize_m398F78F0144D6284AA8297EDDC8E2B00FA456112 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___RATE_BYTES_22;
		return L_0;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.SparkleEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SparkleEngine_get_AlgorithmName_mC597BB5DDC085E0B6B88DE3A979F17E3F9B125CC (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___algorithmName_1;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_Init_m26133DEFE60823EF9363352B63C10A5785CB548F (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AeadParameters_t93E8A1B127787EEFD141B5524E4DBA1E88C46380_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t5F3CF6FEA3FF0BE7A72ECD4BE1DA7270ACDEDA54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	AeadParameters_t93E8A1B127787EEFD141B5524E4DBA1E88C46380* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ParametersWithIV_t5F3CF6FEA3FF0BE7A72ECD4BE1DA7270ACDEDA54* V_6 = NULL;
	SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* G_B14_0 = NULL;
	SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* G_B15_1 = NULL;
	{
		RuntimeObject* L_0 = ___parameters1;
		V_2 = ((AeadParameters_t93E8A1B127787EEFD141B5524E4DBA1E88C46380*)IsInstClass((RuntimeObject*)L_0, AeadParameters_t93E8A1B127787EEFD141B5524E4DBA1E88C46380_il2cpp_TypeInfo_var));
		AeadParameters_t93E8A1B127787EEFD141B5524E4DBA1E88C46380* L_1 = V_2;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		AeadParameters_t93E8A1B127787EEFD141B5524E4DBA1E88C46380* L_2 = V_2;
		NullCheck(L_2);
		KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* L_3;
		L_3 = VirtualFuncInvoker0< KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* >::Invoke(4 /* Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_Key() */, L_2);
		V_0 = L_3;
		AeadParameters_t93E8A1B127787EEFD141B5524E4DBA1E88C46380* L_4 = V_2;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetNonce() */, L_4);
		V_1 = L_5;
		AeadParameters_t93E8A1B127787EEFD141B5524E4DBA1E88C46380* L_6 = V_2;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetAssociatedText() */, L_6);
		__this->___initialAssociatedText_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_8), (void*)L_7);
		AeadParameters_t93E8A1B127787EEFD141B5524E4DBA1E88C46380* L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_8);
		V_5 = L_9;
		int32_t L_10 = V_5;
		int32_t L_11 = __this->___TAG_BYTES_19;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)il2cpp_codegen_multiply(L_11, 8)))))
		{
			goto IL_0084;
		}
	}
	{
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBDAE183BC30C2AD6BD85811A7DA978BDAB9809)), L_12, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_Init_m26133DEFE60823EF9363352B63C10A5785CB548F_RuntimeMethod_var)));
	}

IL_004f:
	{
		RuntimeObject* L_15 = ___parameters1;
		V_6 = ((ParametersWithIV_t5F3CF6FEA3FF0BE7A72ECD4BE1DA7270ACDEDA54*)IsInstClass((RuntimeObject*)L_15, ParametersWithIV_t5F3CF6FEA3FF0BE7A72ECD4BE1DA7270ACDEDA54_il2cpp_TypeInfo_var));
		ParametersWithIV_t5F3CF6FEA3FF0BE7A72ECD4BE1DA7270ACDEDA54* L_16 = V_6;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		ParametersWithIV_t5F3CF6FEA3FF0BE7A72ECD4BE1DA7270ACDEDA54* L_17 = V_6;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = ParametersWithIV_get_Parameters_mEF1D069E296B40E3A6562D88497CEF4D4071F069_inline(L_17, NULL);
		V_0 = ((KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0*)IsInstClass((RuntimeObject*)L_18, KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var));
		ParametersWithIV_t5F3CF6FEA3FF0BE7A72ECD4BE1DA7270ACDEDA54* L_19 = V_6;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = ParametersWithIV_GetIV_m40B44C89F5FB59DD7F08898B5223238123C037AA(L_19, NULL);
		V_1 = L_20;
		__this->___initialAssociatedText_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_8), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		goto IL_0084;
	}

IL_0079:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9EB7C8E902F2422AB97DE40F9CC4FC454C25138E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_Init_m26133DEFE60823EF9363352B63C10A5785CB548F_RuntimeMethod_var)));
	}

IL_0084:
	{
		KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* L_22 = V_0;
		if (L_22)
		{
			goto IL_0092;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral70AD9209BF10AE024F82A25D14F57A35DA858E85)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_Init_m26133DEFE60823EF9363352B63C10A5785CB548F_RuntimeMethod_var)));
	}

IL_0092:
	{
		int32_t L_24 = __this->___KEY_WORDS_17;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_24, 4));
		int32_t L_25 = V_3;
		KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = KeyParameter_get_KeyLength_m1413437DE93A7031A5D7CBCB1353A14AE70836FD(L_26, NULL);
		if ((((int32_t)L_25) == ((int32_t)L_27)))
		{
			goto IL_00c6;
		}
	}
	{
		String_t* L_28 = __this->___algorithmName_1;
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_30;
		L_30 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3CCD77DA02D3DE32F1A27BDC9C50B6019691E14C)), L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD55E844A4496F271421F64624D6A74270297F463)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_31 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_31);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_31, L_30, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_Init_m26133DEFE60823EF9363352B63C10A5785CB548F_RuntimeMethod_var)));
	}

IL_00c6:
	{
		int32_t L_32 = __this->___RATE_WORDS_21;
		V_4 = ((int32_t)il2cpp_codegen_multiply(L_32, 4));
		int32_t L_33 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_1;
		NullCheck(L_34);
		if ((((int32_t)L_33) == ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_00f9;
		}
	}
	{
		String_t* L_35 = __this->___algorithmName_1;
		String_t* L_36;
		L_36 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_37;
		L_37 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_35, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3CCD77DA02D3DE32F1A27BDC9C50B6019691E14C)), L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8BD5E9188BC73177F13AD2E0EA3F46D069D1C2B4)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_38 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_38);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_38, L_37, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_Init_m26133DEFE60823EF9363352B63C10A5785CB548F_RuntimeMethod_var)));
	}

IL_00f9:
	{
		KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* L_39 = V_0;
		NullCheck(L_39);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = KeyParameter_GetKey_m4CF60D78522E0F608DD02E0C8DADE59E5303FA23(L_39, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = __this->___k_3;
		Pack_LE_To_UInt32_m5BD6F3A857FB8D1DE3211E57C5EF592968E95E84(L_40, 0, L_41, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = __this->___npub_4;
		Pack_LE_To_UInt32_m5BD6F3A857FB8D1DE3211E57C5EF592968E95E84(L_42, 0, L_43, NULL);
		bool L_44 = ___forEncryption0;
		G_B13_0 = __this;
		if (L_44)
		{
			G_B14_0 = __this;
			goto IL_011f;
		}
	}
	{
		G_B15_0 = 5;
		G_B15_1 = G_B13_0;
		goto IL_0120;
	}

IL_011f:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
	}

IL_0120:
	{
		NullCheck(G_B15_1);
		G_B15_1->___m_state_7 = G_B15_0;
		SparkleEngine_Reset_m57B2D2C26173AAE00464EEAC91936D1435027E23(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessAadByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_ProcessAadByte_mDC9A46C5A4C066B5B679C37D98325CFCA3E38DA7 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SparkleEngine_CheckAad_m9A18AF8A4FF96A9169EE0A0487D13D856020A3F9(__this, NULL);
		int32_t L_0 = __this->___m_bufPos_11;
		int32_t L_1 = __this->___RATE_BYTES_22;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0028;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_buf_10;
		SparkleEngine_ProcessBufferAad_mB5548ED7949A0286B4C7E6E73FE2261E05FAF4D3(__this, L_2, 0, NULL);
		__this->___m_bufPos_11 = 0;
	}

IL_0028:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_buf_10;
		int32_t L_4 = __this->___m_bufPos_11;
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->___m_bufPos_11 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		uint8_t L_7 = ___input0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)L_7);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_ProcessAadBytes_m9CAC6C6B28AB06C705B853A726FC4724B832E847 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inBytes0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ___len2;
		Check_DataLength_mA5DC3F8EEF846867142FFE7FA64C783BE9D20CEF(L_0, L_1, L_2, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		int32_t L_3 = ___len2;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SparkleEngine_CheckAad_m9A18AF8A4FF96A9169EE0A0487D13D856020A3F9(__this, NULL);
		int32_t L_4 = __this->___m_bufPos_11;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_5 = __this->___RATE_BYTES_22;
		int32_t L_6 = __this->___m_bufPos_11;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		int32_t L_7 = ___len2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0056;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___inBytes0;
		int32_t L_10 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_buf_10;
		int32_t L_12 = __this->___m_bufPos_11;
		int32_t L_13 = ___len2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, L_12, L_13, NULL);
		int32_t L_14 = __this->___m_bufPos_11;
		int32_t L_15 = ___len2;
		__this->___m_bufPos_11 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		return;
	}

IL_0056:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___inBytes0;
		int32_t L_17 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___m_buf_10;
		int32_t L_19 = __this->___m_bufPos_11;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, L_17, (RuntimeArray*)L_18, L_19, L_20, NULL);
		int32_t L_21 = ___inOff1;
		int32_t L_22 = V_0;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
		int32_t L_23 = ___len2;
		int32_t L_24 = V_0;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_23, L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___m_buf_10;
		SparkleEngine_ProcessBufferAad_mB5548ED7949A0286B4C7E6E73FE2261E05FAF4D3(__this, L_25, 0, NULL);
		goto IL_009f;
	}

IL_0083:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___inBytes0;
		int32_t L_27 = ___inOff1;
		SparkleEngine_ProcessBufferAad_mB5548ED7949A0286B4C7E6E73FE2261E05FAF4D3(__this, L_26, L_27, NULL);
		int32_t L_28 = ___inOff1;
		int32_t L_29 = __this->___RATE_BYTES_22;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_28, L_29));
		int32_t L_30 = ___len2;
		int32_t L_31 = __this->___RATE_BYTES_22;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_30, L_31));
	}

IL_009f:
	{
		int32_t L_32 = ___len2;
		int32_t L_33 = __this->___RATE_BYTES_22;
		if ((((int32_t)L_32) > ((int32_t)L_33)))
		{
			goto IL_0083;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___inBytes0;
		int32_t L_35 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___m_buf_10;
		int32_t L_37 = ___len2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_34, L_35, (RuntimeArray*)L_36, 0, L_37, NULL);
		int32_t L_38 = ___len2;
		__this->___m_bufPos_11 = L_38;
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessByte(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparkleEngine_ProcessByte_mB14E50AA6A460262EABC2ACDC8A9F8FAE6D675B3 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, uint8_t ___input0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = ___input0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___outBytes1;
		int32_t L_4 = ___outOff2;
		int32_t L_5;
		L_5 = SparkleEngine_ProcessBytes_mF34198F0221D297E47F3A55342D8382858790AF0(__this, L_1, 0, 1, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparkleEngine_ProcessBytes_mF34198F0221D297E47F3A55342D8382858790AF0 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inBytes0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ___len2;
		Check_DataLength_mA5DC3F8EEF846867142FFE7FA64C783BE9D20CEF(L_0, L_1, L_2, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		bool L_3;
		L_3 = SparkleEngine_CheckData_mA2E034F10C039D2636A8ED25A435C5A46EE20EB9(__this, NULL);
		V_0 = 0;
		if (!L_3)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_4 = __this->___m_bufPos_11;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_5 = __this->___RATE_BYTES_22;
		int32_t L_6 = __this->___m_bufPos_11;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		int32_t L_7 = ___len2;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___inBytes0;
		int32_t L_10 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_buf_10;
		int32_t L_12 = __this->___m_bufPos_11;
		int32_t L_13 = ___len2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, L_12, L_13, NULL);
		int32_t L_14 = __this->___m_bufPos_11;
		int32_t L_15 = ___len2;
		__this->___m_bufPos_11 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		return 0;
	}

IL_005c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___inBytes0;
		int32_t L_17 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___m_buf_10;
		int32_t L_19 = __this->___m_bufPos_11;
		int32_t L_20 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, L_17, (RuntimeArray*)L_18, L_19, L_20, NULL);
		int32_t L_21 = ___inOff1;
		int32_t L_22 = V_1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
		int32_t L_23 = ___len2;
		int32_t L_24 = V_1;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_23, L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___m_buf_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___outBytes3;
		int32_t L_27 = ___outOff4;
		SparkleEngine_ProcessBufferEncrypt_mCCB891765487616881CF17864D5A590E9F1DE1D4(__this, L_25, 0, L_26, L_27, NULL);
		int32_t L_28 = __this->___RATE_BYTES_22;
		V_0 = L_28;
		goto IL_00bf;
	}

IL_0094:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___inBytes0;
		int32_t L_30 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___outBytes3;
		int32_t L_32 = ___outOff4;
		int32_t L_33 = V_0;
		SparkleEngine_ProcessBufferEncrypt_mCCB891765487616881CF17864D5A590E9F1DE1D4(__this, L_29, L_30, L_31, ((int32_t)il2cpp_codegen_add(L_32, L_33)), NULL);
		int32_t L_34 = ___inOff1;
		int32_t L_35 = __this->___RATE_BYTES_22;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		int32_t L_36 = ___len2;
		int32_t L_37 = __this->___RATE_BYTES_22;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
		int32_t L_38 = V_0;
		int32_t L_39 = __this->___RATE_BYTES_22;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, L_39));
	}

IL_00bf:
	{
		int32_t L_40 = ___len2;
		int32_t L_41 = __this->___RATE_BYTES_22;
		if ((((int32_t)L_40) > ((int32_t)L_41)))
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0209;
	}

IL_00cd:
	{
		int32_t L_42 = __this->___m_bufferSizeDecrypt_9;
		int32_t L_43 = __this->___m_bufPos_11;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_42, L_43));
		int32_t L_44 = ___len2;
		int32_t L_45 = V_2;
		if ((((int32_t)L_44) > ((int32_t)L_45)))
		{
			goto IL_0103;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___inBytes0;
		int32_t L_47 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = __this->___m_buf_10;
		int32_t L_49 = __this->___m_bufPos_11;
		int32_t L_50 = ___len2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_46, L_47, (RuntimeArray*)L_48, L_49, L_50, NULL);
		int32_t L_51 = __this->___m_bufPos_11;
		int32_t L_52 = ___len2;
		__this->___m_bufPos_11 = ((int32_t)il2cpp_codegen_add(L_51, L_52));
		return 0;
	}

IL_0103:
	{
		int32_t L_53 = __this->___m_bufPos_11;
		int32_t L_54 = __this->___RATE_BYTES_22;
		if ((((int32_t)L_53) <= ((int32_t)L_54)))
		{
			goto IL_018b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = __this->___m_buf_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___outBytes3;
		int32_t L_57 = ___outOff4;
		SparkleEngine_ProcessBufferDecrypt_m776C121C0C9030683CD72E3D012796D3A7ED5C47(__this, L_55, 0, L_56, L_57, NULL);
		int32_t L_58 = __this->___m_bufPos_11;
		int32_t L_59 = __this->___RATE_BYTES_22;
		__this->___m_bufPos_11 = ((int32_t)il2cpp_codegen_subtract(L_58, L_59));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->___m_buf_10;
		int32_t L_61 = __this->___RATE_BYTES_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = __this->___m_buf_10;
		int32_t L_63 = __this->___m_bufPos_11;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_60, L_61, (RuntimeArray*)L_62, 0, L_63, NULL);
		int32_t L_64 = __this->___RATE_BYTES_22;
		V_0 = L_64;
		int32_t L_65 = V_2;
		int32_t L_66 = __this->___RATE_BYTES_22;
		V_2 = ((int32_t)il2cpp_codegen_add(L_65, L_66));
		int32_t L_67 = ___len2;
		int32_t L_68 = V_2;
		if ((((int32_t)L_67) > ((int32_t)L_68)))
		{
			goto IL_018b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ___inBytes0;
		int32_t L_70 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = __this->___m_buf_10;
		int32_t L_72 = __this->___m_bufPos_11;
		int32_t L_73 = ___len2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_69, L_70, (RuntimeArray*)L_71, L_72, L_73, NULL);
		int32_t L_74 = __this->___m_bufPos_11;
		int32_t L_75 = ___len2;
		__this->___m_bufPos_11 = ((int32_t)il2cpp_codegen_add(L_74, L_75));
		int32_t L_76 = V_0;
		return L_76;
	}

IL_018b:
	{
		int32_t L_77 = __this->___RATE_BYTES_22;
		int32_t L_78 = __this->___m_bufPos_11;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_77, L_78));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ___inBytes0;
		int32_t L_80 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = __this->___m_buf_10;
		int32_t L_82 = __this->___m_bufPos_11;
		int32_t L_83 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_79, L_80, (RuntimeArray*)L_81, L_82, L_83, NULL);
		int32_t L_84 = ___inOff1;
		int32_t L_85 = V_2;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_84, L_85));
		int32_t L_86 = ___len2;
		int32_t L_87 = V_2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_86, L_87));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = __this->___m_buf_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = ___outBytes3;
		int32_t L_90 = ___outOff4;
		int32_t L_91 = V_0;
		SparkleEngine_ProcessBufferDecrypt_m776C121C0C9030683CD72E3D012796D3A7ED5C47(__this, L_88, 0, L_89, ((int32_t)il2cpp_codegen_add(L_90, L_91)), NULL);
		int32_t L_92 = V_0;
		int32_t L_93 = __this->___RATE_BYTES_22;
		V_0 = ((int32_t)il2cpp_codegen_add(L_92, L_93));
		goto IL_0200;
	}

IL_01d5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___inBytes0;
		int32_t L_95 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = ___outBytes3;
		int32_t L_97 = ___outOff4;
		int32_t L_98 = V_0;
		SparkleEngine_ProcessBufferDecrypt_m776C121C0C9030683CD72E3D012796D3A7ED5C47(__this, L_94, L_95, L_96, ((int32_t)il2cpp_codegen_add(L_97, L_98)), NULL);
		int32_t L_99 = ___inOff1;
		int32_t L_100 = __this->___RATE_BYTES_22;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_99, L_100));
		int32_t L_101 = ___len2;
		int32_t L_102 = __this->___RATE_BYTES_22;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_101, L_102));
		int32_t L_103 = V_0;
		int32_t L_104 = __this->___RATE_BYTES_22;
		V_0 = ((int32_t)il2cpp_codegen_add(L_103, L_104));
	}

IL_0200:
	{
		int32_t L_105 = ___len2;
		int32_t L_106 = __this->___m_bufferSizeDecrypt_9;
		if ((((int32_t)L_105) > ((int32_t)L_106)))
		{
			goto IL_01d5;
		}
	}

IL_0209:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = ___inBytes0;
		int32_t L_108 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = __this->___m_buf_10;
		int32_t L_110 = ___len2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_107, L_108, (RuntimeArray*)L_109, 0, L_110, NULL);
		int32_t L_111 = ___len2;
		__this->___m_bufPos_11 = L_111;
		int32_t L_112 = V_0;
		return L_112;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparkleEngine_DoFinal_m9E3DBD9D1D6366F8B614A31897D627A58DDA1A7F (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B9_0 = 0;
	uint32_t* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	uint32_t* G_B8_1 = NULL;
	uint32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	uint32_t* G_B10_2 = NULL;
	{
		bool L_0;
		L_0 = SparkleEngine_CheckData_mA2E034F10C039D2636A8ED25A435C5A46EE20EB9(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = __this->___m_bufPos_11;
		int32_t L_3 = __this->___TAG_BYTES_19;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		goto IL_004d;
	}

IL_001a:
	{
		int32_t L_4 = __this->___m_bufPos_11;
		int32_t L_5 = __this->___TAG_BYTES_19;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidCipherTextException_tEDDF53A39E29A7E233DC39CBCBF2B39DD1DA4DA4* L_6 = (InvalidCipherTextException_tEDDF53A39E29A7E233DC39CBCBF2B39DD1DA4DA4*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_tEDDF53A39E29A7E233DC39CBCBF2B39DD1DA4DA4_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidCipherTextException__ctor_m156E07D264648E7A2BE3951110CD880B6479C9B5(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4901277BD17A5B2F9FD51DCD98D6CE81842202C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_DoFinal_m9E3DBD9D1D6366F8B614A31897D627A58DDA1A7F_RuntimeMethod_var)));
	}

IL_0033:
	{
		int32_t L_7 = __this->___m_bufPos_11;
		int32_t L_8 = __this->___TAG_BYTES_19;
		__this->___m_bufPos_11 = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = __this->___m_bufPos_11;
		V_1 = L_9;
	}

IL_004d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___outBytes0;
		int32_t L_11 = ___outOff1;
		int32_t L_12 = V_1;
		Check_OutputLength_mE9721C2E284A57CD53D1F6E2525AF21318146178(L_10, L_11, L_12, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_13 = __this->___encrypted_6;
		if (L_13)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_14 = __this->___m_bufPos_11;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_02ab;
		}
	}

IL_006e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->___state_2;
		int32_t L_16 = __this->___STATE_WORDS_20;
		NullCheck(L_15);
		uint32_t* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_16, 1)))));
		int32_t L_18 = *((uint32_t*)L_17);
		int32_t L_19 = __this->___m_bufPos_11;
		int32_t L_20 = __this->___RATE_BYTES_22;
		G_B8_0 = L_18;
		G_B8_1 = L_17;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			G_B9_0 = L_18;
			G_B9_1 = L_17;
			goto IL_0099;
		}
	}
	{
		uint32_t L_21 = __this->____M3_27;
		G_B10_0 = L_21;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_009f;
	}

IL_0099:
	{
		uint32_t L_22 = __this->____M2_26;
		G_B10_0 = L_22;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_009f:
	{
		*((int32_t*)G_B10_2) = (int32_t)((int32_t)(G_B10_1^(int32_t)G_B10_0));
		int32_t L_23 = __this->___RATE_WORDS_21;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_23);
		V_2 = L_24;
		V_3 = 0;
		goto IL_00d3;
	}

IL_00b1:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		uint32_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_26>>2)))));
		int32_t L_28 = *((uint32_t*)L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___m_buf_10;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = V_3;
		*((int32_t*)L_27) = (int32_t)((int32_t)(L_28|((int32_t)((int32_t)L_32<<((int32_t)(((int32_t)(((int32_t)(L_33&3))<<3))&((int32_t)31)))))));
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d3:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->___m_bufPos_11;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_37 = __this->___m_bufPos_11;
		int32_t L_38 = __this->___RATE_BYTES_22;
		if ((((int32_t)L_37) >= ((int32_t)L_38)))
		{
			goto IL_0173;
		}
	}
	{
		bool L_39 = V_0;
		if (L_39)
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_40 = __this->___m_bufPos_11;
		V_4 = ((int32_t)(((int32_t)(L_40&3))<<3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_2;
		int32_t L_42 = __this->___m_bufPos_11;
		NullCheck(L_41);
		uint32_t* L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_42>>2)))));
		int32_t L_44 = *((uint32_t*)L_43);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = __this->___state_2;
		int32_t L_46 = __this->___m_bufPos_11;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)(L_46>>2));
		uint32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = V_4;
		int32_t L_50 = V_4;
		*((int32_t*)L_43) = (int32_t)((int32_t)(L_44|((int32_t)(((int32_t)((uint32_t)L_48>>((int32_t)(L_49&((int32_t)31)))))<<((int32_t)(L_50&((int32_t)31)))))));
		int32_t L_51 = __this->___m_bufPos_11;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_51>>2)), 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = __this->___state_2;
		int32_t L_53 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_2;
		int32_t L_55 = V_4;
		int32_t L_56 = __this->___RATE_WORDS_21;
		int32_t L_57 = V_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_52, L_53, (RuntimeArray*)L_54, L_55, ((int32_t)il2cpp_codegen_subtract(L_56, L_57)), NULL);
	}

IL_014e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_2;
		int32_t L_59 = __this->___m_bufPos_11;
		NullCheck(L_58);
		uint32_t* L_60 = ((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_59>>2)))));
		int32_t L_61 = *((uint32_t*)L_60);
		int32_t L_62 = __this->___m_bufPos_11;
		*((int32_t*)L_60) = (int32_t)((int32_t)(L_61^((int32_t)(((int32_t)128)<<((int32_t)(((int32_t)(((int32_t)(L_62&3))<<3))&((int32_t)31)))))));
	}

IL_0173:
	{
		V_5 = 0;
		goto IL_025d;
	}

IL_017b:
	{
		int32_t L_63 = V_5;
		int32_t L_64 = __this->___RATE_WORDS_21;
		V_6 = ((int32_t)il2cpp_codegen_add(L_63, ((int32_t)(L_64/2))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = __this->___state_2;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		uint32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_7 = L_68;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = __this->___state_2;
		int32_t L_70 = V_6;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		uint32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_8 = L_72;
		bool L_73 = V_0;
		if (!L_73)
		{
			goto IL_01ef;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = __this->___state_2;
		int32_t L_75 = V_5;
		uint32_t L_76 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = V_2;
		int32_t L_78 = V_5;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = __this->___state_2;
		int32_t L_82 = __this->___RATE_WORDS_21;
		int32_t L_83 = V_5;
		NullCheck(L_81);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add(L_82, L_83));
		uint32_t L_85 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (uint32_t)((int32_t)(((int32_t)((int32_t)L_76^(int32_t)L_80))^(int32_t)L_85)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = __this->___state_2;
		int32_t L_87 = V_6;
		uint32_t L_88 = V_7;
		uint32_t L_89 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = V_2;
		int32_t L_91 = V_6;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = __this->___state_2;
		int32_t L_95 = __this->___RATE_WORDS_21;
		int32_t L_96 = V_6;
		int32_t L_97 = __this->___CAP_MASK_23;
		NullCheck(L_94);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_95, ((int32_t)(L_96&L_97))));
		uint32_t L_99 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_88^(int32_t)L_89))^(int32_t)L_93))^(int32_t)L_99)));
		goto IL_023b;
	}

IL_01ef:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = __this->___state_2;
		int32_t L_101 = V_5;
		uint32_t L_102 = V_7;
		uint32_t L_103 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = V_2;
		int32_t L_105 = V_5;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		uint32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = __this->___state_2;
		int32_t L_109 = __this->___RATE_WORDS_21;
		int32_t L_110 = V_5;
		NullCheck(L_108);
		int32_t L_111 = ((int32_t)il2cpp_codegen_add(L_109, L_110));
		uint32_t L_112 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(L_101), (uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_102^(int32_t)L_103))^(int32_t)L_107))^(int32_t)L_112)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_113 = __this->___state_2;
		int32_t L_114 = V_6;
		uint32_t L_115 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = V_2;
		int32_t L_117 = V_6;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		uint32_t L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = __this->___state_2;
		int32_t L_121 = __this->___RATE_WORDS_21;
		int32_t L_122 = V_6;
		int32_t L_123 = __this->___CAP_MASK_23;
		NullCheck(L_120);
		int32_t L_124 = ((int32_t)il2cpp_codegen_add(L_121, ((int32_t)(L_122&L_123))));
		uint32_t L_125 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(L_114), (uint32_t)((int32_t)(((int32_t)((int32_t)L_115^(int32_t)L_119))^(int32_t)L_125)));
	}

IL_023b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = V_2;
		int32_t L_127 = V_5;
		NullCheck(L_126);
		uint32_t* L_128 = ((L_126)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_127)));
		int32_t L_129 = *((uint32_t*)L_128);
		uint32_t L_130 = V_7;
		*((int32_t*)L_128) = (int32_t)((int32_t)(L_129^(int32_t)L_130));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_131 = V_2;
		int32_t L_132 = V_6;
		NullCheck(L_131);
		uint32_t* L_133 = ((L_131)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_132)));
		int32_t L_134 = *((uint32_t*)L_133);
		uint32_t L_135 = V_8;
		*((int32_t*)L_133) = (int32_t)((int32_t)(L_134^(int32_t)L_135));
		int32_t L_136 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_025d:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = __this->___RATE_WORDS_21;
		if ((((int32_t)L_137) < ((int32_t)((int32_t)(L_138/2)))))
		{
			goto IL_017b;
		}
	}
	{
		V_9 = 0;
		goto IL_0290;
	}

IL_0271:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_139 = ___outBytes0;
		int32_t L_140 = ___outOff1;
		int32_t L_141 = L_140;
		___outOff1 = ((int32_t)il2cpp_codegen_add(L_141, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_142 = V_2;
		int32_t L_143 = V_9;
		NullCheck(L_142);
		int32_t L_144 = ((int32_t)(L_143>>2));
		uint32_t L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		int32_t L_146 = V_9;
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(L_141), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_145>>((int32_t)(((int32_t)(((int32_t)(L_146&3))<<3))&((int32_t)31)))))));
		int32_t L_147 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_147, 1));
	}

IL_0290:
	{
		int32_t L_148 = V_9;
		int32_t L_149 = __this->___m_bufPos_11;
		if ((((int32_t)L_148) < ((int32_t)L_149)))
		{
			goto IL_0271;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = __this->___state_2;
		int32_t L_151 = __this->___SPARKLE_STEPS_BIG_15;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		SparkleEngine_SparkleOpt_m92E9A60AA7DA8577CAEF2F5337E319927B794F3C_inline(L_150, L_151, NULL);
	}

IL_02ab:
	{
		V_10 = 0;
		goto IL_02d7;
	}

IL_02b0:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_152 = __this->___state_2;
		int32_t L_153 = __this->___RATE_WORDS_21;
		int32_t L_154 = V_10;
		NullCheck(L_152);
		uint32_t* L_155 = ((L_152)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_153, L_154)))));
		int32_t L_156 = *((uint32_t*)L_155);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_157 = __this->___k_3;
		int32_t L_158 = V_10;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		uint32_t L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		*((int32_t*)L_155) = (int32_t)((int32_t)(L_156^(int32_t)L_160));
		int32_t L_161 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_161, 1));
	}

IL_02d7:
	{
		int32_t L_162 = V_10;
		int32_t L_163 = __this->___KEY_WORDS_17;
		if ((((int32_t)L_162) < ((int32_t)L_163)))
		{
			goto IL_02b0;
		}
	}
	{
		int32_t L_164 = __this->___TAG_BYTES_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_165 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_164);
		__this->___tag_5 = L_165;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tag_5), (void*)L_165);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_166 = __this->___state_2;
		int32_t L_167 = __this->___RATE_WORDS_21;
		int32_t L_168 = __this->___TAG_WORDS_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_169 = __this->___tag_5;
		Pack_UInt32_To_LE_mBF22AD8A701F52819B6DBB82213FA5C656EEBDD4(L_166, L_167, L_168, L_169, 0, NULL);
		bool L_170 = V_0;
		if (!L_170)
		{
			goto IL_0329;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_171 = __this->___tag_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_172 = ___outBytes0;
		int32_t L_173 = ___outOff1;
		int32_t L_174 = __this->___TAG_BYTES_19;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_171, 0, (RuntimeArray*)L_172, L_173, L_174, NULL);
		goto IL_0364;
	}

IL_0329:
	{
		int32_t L_175 = __this->___TAG_BYTES_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_176 = __this->___tag_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_177 = __this->___m_buf_10;
		int32_t L_178 = __this->___m_bufPos_11;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		bool L_179;
		L_179 = Arrays_FixedTimeEquals_m4DE1BED3FE5DD986E6BCE11E17813CF9F696BBA2(L_175, L_176, 0, L_177, L_178, NULL);
		if (L_179)
		{
			goto IL_0364;
		}
	}
	{
		String_t* L_180;
		L_180 = SparkleEngine_get_AlgorithmName_mC597BB5DDC085E0B6B88DE3A979F17E3F9B125CC_inline(__this, NULL);
		String_t* L_181;
		L_181 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34832F2ED794F0A99009FD00762FE94CEB1FF2DB)), L_180, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA5421735C67AC5A0AE793A21C6A026FDFEAD5209)), NULL);
		InvalidCipherTextException_tEDDF53A39E29A7E233DC39CBCBF2B39DD1DA4DA4* L_182 = (InvalidCipherTextException_tEDDF53A39E29A7E233DC39CBCBF2B39DD1DA4DA4*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_tEDDF53A39E29A7E233DC39CBCBF2B39DD1DA4DA4_il2cpp_TypeInfo_var)));
		NullCheck(L_182);
		InvalidCipherTextException__ctor_m156E07D264648E7A2BE3951110CD880B6479C9B5(L_182, L_181, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_182, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_DoFinal_m9E3DBD9D1D6366F8B614A31897D627A58DDA1A7F_RuntimeMethod_var)));
	}

IL_0364:
	{
		bool L_183 = V_0;
		SparkleEngine_Reset_m3AA6A834A33DD621002B0120C4B9A6F79EBEAE7C(__this, (bool)((((int32_t)L_183) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_184 = V_1;
		return L_184;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Engines.SparkleEngine::GetMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SparkleEngine_GetMac_m2BE73773AE29C0D8DF85FFBB8A336E6BA241AF95 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___tag_5;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::GetUpdateOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparkleEngine_GetUpdateOutputSize_mE1BEB055489D3033049FF72E0D3366A47E89859C (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, int32_t ___len0, const RuntimeMethod* method) 
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
		int32_t L_0 = ___len0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, L_0, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = __this->___m_state_7;
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 3)))
		{
			case 0:
			{
				goto IL_005c;
			}
			case 1:
			{
				goto IL_005c;
			}
			case 2:
			{
				goto IL_0033;
			}
			case 3:
			{
				goto IL_0033;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_0044;
			}
		}
	}
	{
		goto IL_006b;
	}

IL_0033:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___TAG_BYTES_19;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		V_0 = L_6;
		goto IL_006b;
	}

IL_0044:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___m_bufPos_11;
		int32_t L_9 = __this->___TAG_BYTES_19;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9)), NULL);
		V_0 = L_10;
		goto IL_006b;
	}

IL_005c:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_bufPos_11;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, ((int32_t)il2cpp_codegen_add(L_11, L_12)), NULL);
		V_0 = L_13;
	}

IL_006b:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_0;
		int32_t L_16 = __this->___RATE_BYTES_22;
		return ((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)(L_15%L_16))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::GetOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparkleEngine_GetOutputSize_m79895A0FE4DEF348E3B14EC42DE77569867732E1 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, int32_t ___len0, const RuntimeMethod* method) 
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
		int32_t L_0 = ___len0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = __this->___m_state_7;
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 3)))
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_0031;
			}
			case 4:
			{
				goto IL_0040;
			}
			case 5:
			{
				goto IL_0040;
			}
		}
	}
	{
		goto IL_0066;
	}

IL_0031:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___TAG_BYTES_19;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		return L_6;
	}

IL_0040:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___m_bufPos_11;
		int32_t L_9 = __this->___TAG_BYTES_19;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9)), NULL);
		return L_10;
	}

IL_0056:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_bufPos_11;
		int32_t L_13 = __this->___TAG_BYTES_19;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_11, L_12)), L_13));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___TAG_BYTES_19;
		return ((int32_t)il2cpp_codegen_add(L_14, L_15));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_Reset_m57B2D2C26173AAE00464EEAC91936D1435027E23 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) 
{
	{
		SparkleEngine_Reset_m3AA6A834A33DD621002B0120C4B9A6F79EBEAE7C(__this, (bool)1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::CheckAad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_CheckAad_m9A18AF8A4FF96A9169EE0A0487D13D856020A3F9 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_state_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0039;
			}
			case 4:
			{
				goto IL_0029;
			}
			case 5:
			{
				goto IL_0065;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_0029:
	{
		__this->___m_state_7 = 6;
		return;
	}

IL_0031:
	{
		__this->___m_state_7 = 2;
		return;
	}

IL_0039:
	{
		String_t* L_2;
		L_2 = SparkleEngine_get_AlgorithmName_mC597BB5DDC085E0B6B88DE3A979F17E3F9B125CC_inline(__this, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42E53CCDF342E4FD41E871BB4BBF9E1F824FA4EF)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_CheckAad_m9A18AF8A4FF96A9169EE0A0487D13D856020A3F9_RuntimeMethod_var)));
	}

IL_004f:
	{
		String_t* L_5;
		L_5 = SparkleEngine_get_AlgorithmName_mC597BB5DDC085E0B6B88DE3A979F17E3F9B125CC_inline(__this, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBF64FEAB7738F7C1069DC9F2288D4FF6434BF27)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_CheckAad_m9A18AF8A4FF96A9169EE0A0487D13D856020A3F9_RuntimeMethod_var)));
	}

IL_0065:
	{
		return;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.SparkleEngine::CheckData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SparkleEngine_CheckData_mA2E034F10C039D2636A8ED25A435C5A46EE20EB9 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_state_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0043;
			}
			case 4:
			{
				goto IL_002d;
			}
			case 5:
			{
				goto IL_002d;
			}
			case 6:
			{
				goto IL_003f;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_002d:
	{
		SparkleEngine_FinishAad_m84B5EEA86E7DBFB51CFE5B52FA5F32DF40BFF3C3(__this, 7, NULL);
		return (bool)0;
	}

IL_0036:
	{
		SparkleEngine_FinishAad_m84B5EEA86E7DBFB51CFE5B52FA5F32DF40BFF3C3(__this, 3, NULL);
		return (bool)1;
	}

IL_003f:
	{
		return (bool)0;
	}

IL_0041:
	{
		return (bool)1;
	}

IL_0043:
	{
		String_t* L_2;
		L_2 = SparkleEngine_get_AlgorithmName_mC597BB5DDC085E0B6B88DE3A979F17E3F9B125CC_inline(__this, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42E53CCDF342E4FD41E871BB4BBF9E1F824FA4EF)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_CheckData_mA2E034F10C039D2636A8ED25A435C5A46EE20EB9_RuntimeMethod_var)));
	}

IL_0059:
	{
		String_t* L_5;
		L_5 = SparkleEngine_get_AlgorithmName_mC597BB5DDC085E0B6B88DE3A979F17E3F9B125CC_inline(__this, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBF64FEAB7738F7C1069DC9F2288D4FF6434BF27)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_CheckData_mA2E034F10C039D2636A8ED25A435C5A46EE20EB9_RuntimeMethod_var)));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::FinishAad(Org.BouncyCastle.Crypto.Engines.SparkleEngine/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_FinishAad_m84B5EEA86E7DBFB51CFE5B52FA5F32DF40BFF3C3 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, int32_t ___nextState0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_state_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)6))))
		{
			goto IL_0015;
		}
	}

IL_000f:
	{
		SparkleEngine_ProcessFinalAad_m1C08231CC2130DF4F804EEE9A35E9F6D945BF23B(__this, NULL);
	}

IL_0015:
	{
		__this->___m_bufPos_11 = 0;
		int32_t L_3 = ___nextState0;
		__this->___m_state_7 = L_3;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessBufferAad(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_ProcessBufferAad_mB5548ED7949A0286B4C7E6E73FE2261E05FAF4D3 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___bufOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		V_0 = 0;
		goto IL_0080;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = __this->___RATE_WORDS_21;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(L_1/2))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___state_2;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___state_2;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___buffer0;
		int32_t L_11 = ___bufOff1;
		int32_t L_12 = V_0;
		uint32_t L_13;
		L_13 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_multiply(L_12, 4)))), NULL);
		V_4 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___buffer0;
		int32_t L_15 = ___bufOff1;
		int32_t L_16 = V_1;
		uint32_t L_17;
		L_17 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_14, ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, 4)))), NULL);
		V_5 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->___state_2;
		int32_t L_19 = V_0;
		uint32_t L_20 = V_3;
		uint32_t L_21 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->___state_2;
		int32_t L_23 = __this->___RATE_WORDS_21;
		int32_t L_24 = V_0;
		NullCheck(L_22);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		uint32_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint32_t)((int32_t)(((int32_t)((int32_t)L_20^(int32_t)L_21))^(int32_t)L_26)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = __this->___state_2;
		int32_t L_28 = V_1;
		uint32_t L_29 = V_2;
		uint32_t L_30 = V_3;
		uint32_t L_31 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = __this->___state_2;
		int32_t L_33 = __this->___RATE_WORDS_21;
		int32_t L_34 = V_1;
		int32_t L_35 = __this->___CAP_MASK_23;
		NullCheck(L_32);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_33, ((int32_t)(L_34&L_35))));
		uint32_t L_37 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_29^(int32_t)L_30))^(int32_t)L_31))^(int32_t)L_37)));
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0080:
	{
		int32_t L_39 = V_0;
		int32_t L_40 = __this->___RATE_WORDS_21;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(L_40/2)))))
		{
			goto IL_0004;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = __this->___state_2;
		int32_t L_42 = __this->___SPARKLE_STEPS_SLIM_14;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		SparkleEngine_SparkleOpt_m92E9A60AA7DA8577CAEF2F5337E319927B794F3C_inline(L_41, L_42, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessBufferDecrypt(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_ProcessBufferDecrypt_m776C121C0C9030683CD72E3D012796D3A7ED5C47 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___bufOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output2;
		int32_t L_1 = ___outOff3;
		int32_t L_2 = __this->___RATE_BYTES_22;
		Check_OutputLength_mE9721C2E284A57CD53D1F6E2525AF21318146178(L_0, L_1, L_2, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		V_0 = 0;
		goto IL_00b6;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___RATE_WORDS_21;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(L_4/2))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___state_2;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->___state_2;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___buffer0;
		int32_t L_14 = ___bufOff1;
		int32_t L_15 = V_0;
		uint32_t L_16;
		L_16 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_13, ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)il2cpp_codegen_multiply(L_15, 4)))), NULL);
		V_4 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___buffer0;
		int32_t L_18 = ___bufOff1;
		int32_t L_19 = V_1;
		uint32_t L_20;
		L_20 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_17, ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_multiply(L_19, 4)))), NULL);
		V_5 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->___state_2;
		int32_t L_22 = V_0;
		uint32_t L_23 = V_2;
		uint32_t L_24 = V_3;
		uint32_t L_25 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = __this->___state_2;
		int32_t L_27 = __this->___RATE_WORDS_21;
		int32_t L_28 = V_0;
		NullCheck(L_26);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		uint32_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_23^(int32_t)L_24))^(int32_t)L_25))^(int32_t)L_30)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___state_2;
		int32_t L_32 = V_1;
		uint32_t L_33 = V_2;
		uint32_t L_34 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = __this->___state_2;
		int32_t L_36 = __this->___RATE_WORDS_21;
		int32_t L_37 = V_1;
		int32_t L_38 = __this->___CAP_MASK_23;
		NullCheck(L_35);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_36, ((int32_t)(L_37&L_38))));
		uint32_t L_40 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint32_t)((int32_t)(((int32_t)((int32_t)L_33^(int32_t)L_34))^(int32_t)L_40)));
		uint32_t L_41 = V_4;
		uint32_t L_42 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___output2;
		int32_t L_44 = ___outOff3;
		int32_t L_45 = V_0;
		Pack_UInt32_To_LE_m5257D54DB27EC5D905B28543D77303149C0BFD45(((int32_t)((int32_t)L_41^(int32_t)L_42)), L_43, ((int32_t)il2cpp_codegen_add(L_44, ((int32_t)il2cpp_codegen_multiply(L_45, 4)))), NULL);
		uint32_t L_46 = V_5;
		uint32_t L_47 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___output2;
		int32_t L_49 = ___outOff3;
		int32_t L_50 = V_1;
		Pack_UInt32_To_LE_m5257D54DB27EC5D905B28543D77303149C0BFD45(((int32_t)((int32_t)L_46^(int32_t)L_47)), L_48, ((int32_t)il2cpp_codegen_add(L_49, ((int32_t)il2cpp_codegen_multiply(L_50, 4)))), NULL);
		int32_t L_51 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00b6:
	{
		int32_t L_52 = V_0;
		int32_t L_53 = __this->___RATE_WORDS_21;
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(L_53/2)))))
		{
			goto IL_001a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = __this->___state_2;
		int32_t L_55 = __this->___SPARKLE_STEPS_SLIM_14;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		SparkleEngine_SparkleOpt_m92E9A60AA7DA8577CAEF2F5337E319927B794F3C_inline(L_54, L_55, NULL);
		__this->___encrypted_6 = (bool)1;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessBufferEncrypt(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_ProcessBufferEncrypt_mCCB891765487616881CF17864D5A590E9F1DE1D4 (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___bufOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output2;
		int32_t L_1 = ___outOff3;
		int32_t L_2 = __this->___RATE_BYTES_22;
		Check_OutputLength_mE9721C2E284A57CD53D1F6E2525AF21318146178(L_0, L_1, L_2, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		V_0 = 0;
		goto IL_00b6;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___RATE_WORDS_21;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(L_4/2))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___state_2;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->___state_2;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___buffer0;
		int32_t L_14 = ___bufOff1;
		int32_t L_15 = V_0;
		uint32_t L_16;
		L_16 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_13, ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)il2cpp_codegen_multiply(L_15, 4)))), NULL);
		V_4 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___buffer0;
		int32_t L_18 = ___bufOff1;
		int32_t L_19 = V_1;
		uint32_t L_20;
		L_20 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_17, ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_multiply(L_19, 4)))), NULL);
		V_5 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->___state_2;
		int32_t L_22 = V_0;
		uint32_t L_23 = V_3;
		uint32_t L_24 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = __this->___state_2;
		int32_t L_26 = __this->___RATE_WORDS_21;
		int32_t L_27 = V_0;
		NullCheck(L_25);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		uint32_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint32_t)((int32_t)(((int32_t)((int32_t)L_23^(int32_t)L_24))^(int32_t)L_29)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = __this->___state_2;
		int32_t L_31 = V_1;
		uint32_t L_32 = V_2;
		uint32_t L_33 = V_3;
		uint32_t L_34 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = __this->___state_2;
		int32_t L_36 = __this->___RATE_WORDS_21;
		int32_t L_37 = V_1;
		int32_t L_38 = __this->___CAP_MASK_23;
		NullCheck(L_35);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_36, ((int32_t)(L_37&L_38))));
		uint32_t L_40 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_32^(int32_t)L_33))^(int32_t)L_34))^(int32_t)L_40)));
		uint32_t L_41 = V_4;
		uint32_t L_42 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___output2;
		int32_t L_44 = ___outOff3;
		int32_t L_45 = V_0;
		Pack_UInt32_To_LE_m5257D54DB27EC5D905B28543D77303149C0BFD45(((int32_t)((int32_t)L_41^(int32_t)L_42)), L_43, ((int32_t)il2cpp_codegen_add(L_44, ((int32_t)il2cpp_codegen_multiply(L_45, 4)))), NULL);
		uint32_t L_46 = V_5;
		uint32_t L_47 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___output2;
		int32_t L_49 = ___outOff3;
		int32_t L_50 = V_1;
		Pack_UInt32_To_LE_m5257D54DB27EC5D905B28543D77303149C0BFD45(((int32_t)((int32_t)L_46^(int32_t)L_47)), L_48, ((int32_t)il2cpp_codegen_add(L_49, ((int32_t)il2cpp_codegen_multiply(L_50, 4)))), NULL);
		int32_t L_51 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00b6:
	{
		int32_t L_52 = V_0;
		int32_t L_53 = __this->___RATE_WORDS_21;
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(L_53/2)))))
		{
			goto IL_001a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = __this->___state_2;
		int32_t L_55 = __this->___SPARKLE_STEPS_SLIM_14;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		SparkleEngine_SparkleOpt_m92E9A60AA7DA8577CAEF2F5337E319927B794F3C_inline(L_54, L_55, NULL);
		__this->___encrypted_6 = (bool)1;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::ProcessFinalAad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_ProcessFinalAad_m1C08231CC2130DF4F804EEE9A35E9F6D945BF23B (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	{
		int32_t L_0 = __this->___m_bufPos_11;
		int32_t L_1 = __this->___RATE_BYTES_22;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0068;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___state_2;
		int32_t L_3 = __this->___STATE_WORDS_20;
		NullCheck(L_2);
		uint32_t* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_3, 1)))));
		int32_t L_5 = *((uint32_t*)L_4);
		uint32_t L_6 = __this->____A0_24;
		*((int32_t*)L_4) = (int32_t)((int32_t)(L_5^(int32_t)L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_buf_10;
		int32_t L_8 = __this->___m_bufPos_11;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)128));
		goto IL_004d;
	}

IL_003f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___m_buf_10;
		int32_t L_10 = __this->___m_bufPos_11;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)0);
	}

IL_004d:
	{
		int32_t L_11 = __this->___m_bufPos_11;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_0;
		__this->___m_bufPos_11 = L_12;
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___RATE_BYTES_22;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0085;
	}

IL_0068:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->___state_2;
		int32_t L_16 = __this->___STATE_WORDS_20;
		NullCheck(L_15);
		uint32_t* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_16, 1)))));
		int32_t L_18 = *((uint32_t*)L_17);
		uint32_t L_19 = __this->____A1_25;
		*((int32_t*)L_17) = (int32_t)((int32_t)(L_18^(int32_t)L_19));
	}

IL_0085:
	{
		V_1 = 0;
		goto IL_0111;
	}

IL_008c:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = __this->___RATE_WORDS_21;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)(L_21/2))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->___state_2;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_3 = L_25;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = __this->___state_2;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = L_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___m_buf_10;
		int32_t L_31 = V_1;
		uint32_t L_32;
		L_32 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_30, ((int32_t)il2cpp_codegen_multiply(L_31, 4)), NULL);
		V_5 = L_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___m_buf_10;
		int32_t L_34 = V_2;
		uint32_t L_35;
		L_35 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_33, ((int32_t)il2cpp_codegen_multiply(L_34, 4)), NULL);
		V_6 = L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___state_2;
		int32_t L_37 = V_1;
		uint32_t L_38 = V_4;
		uint32_t L_39 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = __this->___state_2;
		int32_t L_41 = __this->___RATE_WORDS_21;
		int32_t L_42 = V_1;
		NullCheck(L_40);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		uint32_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint32_t)((int32_t)(((int32_t)((int32_t)L_38^(int32_t)L_39))^(int32_t)L_44)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = __this->___state_2;
		int32_t L_46 = V_2;
		uint32_t L_47 = V_3;
		uint32_t L_48 = V_4;
		uint32_t L_49 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = __this->___state_2;
		int32_t L_51 = __this->___RATE_WORDS_21;
		int32_t L_52 = V_2;
		int32_t L_53 = __this->___CAP_MASK_23;
		NullCheck(L_50);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(L_51, ((int32_t)(L_52&L_53))));
		uint32_t L_55 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_47^(int32_t)L_48))^(int32_t)L_49))^(int32_t)L_55)));
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_0111:
	{
		int32_t L_57 = V_1;
		int32_t L_58 = __this->___RATE_WORDS_21;
		if ((((int32_t)L_57) < ((int32_t)((int32_t)(L_58/2)))))
		{
			goto IL_008c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = __this->___state_2;
		int32_t L_60 = __this->___SPARKLE_STEPS_BIG_15;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		SparkleEngine_SparkleOpt_m92E9A60AA7DA8577CAEF2F5337E319927B794F3C_inline(L_59, L_60, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_Reset_m3AA6A834A33DD621002B0120C4B9A6F79EBEAE7C (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, bool ___clearMac0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = ___clearMac0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		__this->___tag_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tag_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___m_buf_10;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		Arrays_Clear_mE465522F2D02073973463252AFD64B5F2E762EE2(L_1, NULL);
		__this->___m_bufPos_11 = 0;
		__this->___encrypted_6 = (bool)0;
		int32_t L_2 = __this->___m_state_7;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_005d;
			}
			case 4:
			{
				goto IL_007b;
			}
			case 5:
			{
				goto IL_0054;
			}
			case 6:
			{
				goto IL_0054;
			}
			case 7:
			{
				goto IL_0054;
			}
		}
	}
	{
		goto IL_0065;
	}

IL_0054:
	{
		__this->___m_state_7 = 5;
		goto IL_007b;
	}

IL_005d:
	{
		__this->___m_state_7 = 4;
		return;
	}

IL_0065:
	{
		String_t* L_4;
		L_4 = SparkleEngine_get_AlgorithmName_mC597BB5DDC085E0B6B88DE3A979F17E3F9B125CC_inline(__this, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBF64FEAB7738F7C1069DC9F2288D4FF6434BF27)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_Reset_m3AA6A834A33DD621002B0120C4B9A6F79EBEAE7C_RuntimeMethod_var)));
	}

IL_007b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___npub_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___state_2;
		int32_t L_9 = __this->___RATE_WORDS_21;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, 0, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___k_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->___state_2;
		int32_t L_12 = __this->___RATE_WORDS_21;
		int32_t L_13 = __this->___KEY_WORDS_17;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, 0, (RuntimeArray*)L_11, L_12, L_13, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->___state_2;
		int32_t L_15 = __this->___SPARKLE_STEPS_BIG_15;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		SparkleEngine_SparkleOpt_m92E9A60AA7DA8577CAEF2F5337E319927B794F3C_inline(L_14, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___initialAssociatedText_8;
		if (!L_16)
		{
			goto IL_00e0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___initialAssociatedText_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___initialAssociatedText_8;
		NullCheck(L_18);
		SparkleEngine_ProcessAadBytes_m9CAC6C6B28AB06C705B853A726FC4724B832E847(__this, L_17, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)), NULL);
	}

IL_00e0:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::ArxBox(System.UInt32,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC (uint32_t ___rc0, uint32_t* ___s001, uint32_t* ___s012, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t* L_0 = ___s001;
		uint32_t* L_1 = ___s001;
		int32_t L_2 = *((uint32_t*)L_1);
		uint32_t* L_3 = ___s012;
		int32_t L_4 = *((uint32_t*)L_3);
		il2cpp_codegen_runtime_class_init_inline(Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_4, ((int32_t)31), NULL);
		*((int32_t*)L_0) = (int32_t)((int32_t)il2cpp_codegen_add(L_2, (int32_t)L_5));
		uint32_t* L_6 = ___s012;
		uint32_t* L_7 = ___s012;
		int32_t L_8 = *((uint32_t*)L_7);
		uint32_t* L_9 = ___s001;
		int32_t L_10 = *((uint32_t*)L_9);
		uint32_t L_11;
		L_11 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_10, ((int32_t)24), NULL);
		*((int32_t*)L_6) = (int32_t)((int32_t)(L_8^(int32_t)L_11));
		uint32_t* L_12 = ___s001;
		uint32_t* L_13 = ___s001;
		int32_t L_14 = *((uint32_t*)L_13);
		uint32_t L_15 = ___rc0;
		*((int32_t*)L_12) = (int32_t)((int32_t)(L_14^(int32_t)L_15));
		uint32_t* L_16 = ___s001;
		uint32_t* L_17 = ___s001;
		int32_t L_18 = *((uint32_t*)L_17);
		uint32_t* L_19 = ___s012;
		int32_t L_20 = *((uint32_t*)L_19);
		uint32_t L_21;
		L_21 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_20, ((int32_t)17), NULL);
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add(L_18, (int32_t)L_21));
		uint32_t* L_22 = ___s012;
		uint32_t* L_23 = ___s012;
		int32_t L_24 = *((uint32_t*)L_23);
		uint32_t* L_25 = ___s001;
		int32_t L_26 = *((uint32_t*)L_25);
		uint32_t L_27;
		L_27 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_26, ((int32_t)17), NULL);
		*((int32_t*)L_22) = (int32_t)((int32_t)(L_24^(int32_t)L_27));
		uint32_t* L_28 = ___s001;
		uint32_t* L_29 = ___s001;
		int32_t L_30 = *((uint32_t*)L_29);
		uint32_t L_31 = ___rc0;
		*((int32_t*)L_28) = (int32_t)((int32_t)(L_30^(int32_t)L_31));
		uint32_t* L_32 = ___s001;
		uint32_t* L_33 = ___s001;
		int32_t L_34 = *((uint32_t*)L_33);
		uint32_t* L_35 = ___s012;
		int32_t L_36 = *((uint32_t*)L_35);
		*((int32_t*)L_32) = (int32_t)((int32_t)il2cpp_codegen_add(L_34, L_36));
		uint32_t* L_37 = ___s012;
		uint32_t* L_38 = ___s012;
		int32_t L_39 = *((uint32_t*)L_38);
		uint32_t* L_40 = ___s001;
		int32_t L_41 = *((uint32_t*)L_40);
		uint32_t L_42;
		L_42 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_41, ((int32_t)31), NULL);
		*((int32_t*)L_37) = (int32_t)((int32_t)(L_39^(int32_t)L_42));
		uint32_t* L_43 = ___s001;
		uint32_t* L_44 = ___s001;
		int32_t L_45 = *((uint32_t*)L_44);
		uint32_t L_46 = ___rc0;
		*((int32_t*)L_43) = (int32_t)((int32_t)(L_45^(int32_t)L_46));
		uint32_t* L_47 = ___s001;
		uint32_t* L_48 = ___s001;
		int32_t L_49 = *((uint32_t*)L_48);
		uint32_t* L_50 = ___s012;
		int32_t L_51 = *((uint32_t*)L_50);
		uint32_t L_52;
		L_52 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_51, ((int32_t)24), NULL);
		*((int32_t*)L_47) = (int32_t)((int32_t)il2cpp_codegen_add(L_49, (int32_t)L_52));
		uint32_t* L_53 = ___s012;
		uint32_t* L_54 = ___s012;
		int32_t L_55 = *((uint32_t*)L_54);
		uint32_t* L_56 = ___s001;
		int32_t L_57 = *((uint32_t*)L_56);
		uint32_t L_58;
		L_58 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_57, ((int32_t)16), NULL);
		*((int32_t*)L_53) = (int32_t)((int32_t)(L_55^(int32_t)L_58));
		uint32_t* L_59 = ___s001;
		uint32_t* L_60 = ___s001;
		int32_t L_61 = *((uint32_t*)L_60);
		uint32_t L_62 = ___rc0;
		*((int32_t*)L_59) = (int32_t)((int32_t)(L_61^(int32_t)L_62));
		return;
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Engines.SparkleEngine::ELL(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SparkleEngine_ELL_mDD5087A7ADD4CB36C3DFE603C0C81FEB5A296E46 (uint32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_0, ((int32_t)16), NULL);
		uint32_t L_2 = ___x0;
		return ((int32_t)((int32_t)L_1^((int32_t)((int32_t)L_2&((int32_t)65535)))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::SparkleOpt(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_SparkleOpt_m92E9A60AA7DA8577CAEF2F5337E319927B794F3C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state0, int32_t ___steps1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___state0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)8)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)12))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_0024;
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___state0;
		int32_t L_5 = ___steps1;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		SparkleEngine_SparkleOpt8_m3F12286F0A1D002C2E300EB4057005A47EA23671(L_4, L_5, NULL);
		return;
	}

IL_001c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___state0;
		int32_t L_7 = ___steps1;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		SparkleEngine_SparkleOpt12_m71F02DC0C0F7F958B474970C1B732CD1E4FA61C4(L_6, L_7, NULL);
		return;
	}

IL_0024:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___state0;
		int32_t L_9 = ___steps1;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		SparkleEngine_SparkleOpt16_mF677840D9F41707230E76D9F06017909E9FB31F7(L_8, L_9, NULL);
		return;
	}

IL_002c:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_SparkleOpt_m92E9A60AA7DA8577CAEF2F5337E319927B794F3C_RuntimeMethod_var)));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::SparkleOpt8(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_SparkleOpt8_m3F12286F0A1D002C2E300EB4057005A47EA23671 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state0, int32_t ___steps1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___state0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___state0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___state0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___state0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___state0;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___state0;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___state0;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___state0;
		NullCheck(L_21);
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		V_8 = 0;
		goto IL_00cc;
	}

IL_002c:
	{
		uint32_t L_24 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		int32_t L_26 = V_8;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)(L_26&7));
		uint32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_1 = ((int32_t)((int32_t)L_24^(int32_t)L_28));
		uint32_t L_29 = V_3;
		int32_t L_30 = V_8;
		V_3 = ((int32_t)((int32_t)L_29^L_30));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_31);
		int32_t L_32 = 0;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_33, (&V_0), (&V_1), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_34);
		int32_t L_35 = 1;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_36, (&V_2), (&V_3), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_37);
		int32_t L_38 = 2;
		uint32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_39, (&V_4), (&V_5), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_40);
		int32_t L_41 = 3;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_42, (&V_6), (&V_7), NULL);
		uint32_t L_43 = V_0;
		uint32_t L_44 = V_2;
		uint32_t L_45;
		L_45 = SparkleEngine_ELL_mDD5087A7ADD4CB36C3DFE603C0C81FEB5A296E46_inline(((int32_t)((int32_t)L_43^(int32_t)L_44)), NULL);
		V_9 = L_45;
		uint32_t L_46 = V_1;
		uint32_t L_47 = V_3;
		uint32_t L_48;
		L_48 = SparkleEngine_ELL_mDD5087A7ADD4CB36C3DFE603C0C81FEB5A296E46_inline(((int32_t)((int32_t)L_46^(int32_t)L_47)), NULL);
		V_10 = L_48;
		uint32_t L_49 = V_0;
		uint32_t L_50 = V_4;
		uint32_t L_51 = V_1;
		uint32_t L_52 = V_5;
		V_11 = ((int32_t)((int32_t)L_51^(int32_t)L_52));
		uint32_t L_53 = V_2;
		uint32_t L_54 = V_6;
		uint32_t L_55 = V_3;
		uint32_t L_56 = V_7;
		V_12 = ((int32_t)((int32_t)L_55^(int32_t)L_56));
		uint32_t L_57 = V_0;
		V_4 = L_57;
		uint32_t L_58 = V_1;
		V_5 = L_58;
		uint32_t L_59 = V_2;
		V_6 = L_59;
		uint32_t L_60 = V_3;
		V_7 = L_60;
		uint32_t L_61 = V_10;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_53^(int32_t)L_54))^(int32_t)L_61));
		uint32_t L_62 = V_12;
		uint32_t L_63 = V_9;
		V_1 = ((int32_t)((int32_t)L_62^(int32_t)L_63));
		uint32_t L_64 = V_10;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_49^(int32_t)L_50))^(int32_t)L_64));
		uint32_t L_65 = V_11;
		uint32_t L_66 = V_9;
		V_3 = ((int32_t)((int32_t)L_65^(int32_t)L_66));
		int32_t L_67 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_00cc:
	{
		int32_t L_68 = V_8;
		int32_t L_69 = ___steps1;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_002c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___state0;
		uint32_t L_71 = V_0;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_71);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___state0;
		uint32_t L_73 = V_1;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_73);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___state0;
		uint32_t L_75 = V_2;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_75);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___state0;
		uint32_t L_77 = V_3;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_77);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = ___state0;
		uint32_t L_79 = V_4;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_79);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___state0;
		uint32_t L_81 = V_5;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_81);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = ___state0;
		uint32_t L_83 = V_6;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_83);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___state0;
		uint32_t L_85 = V_7;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_85);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::SparkleOpt12(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_SparkleOpt12_m71F02DC0C0F7F958B474970C1B732CD1E4FA61C4 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state0, int32_t ___steps1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	int32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___state0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___state0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___state0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___state0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___state0;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___state0;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___state0;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___state0;
		NullCheck(L_21);
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___state0;
		NullCheck(L_24);
		int32_t L_25 = 8;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___state0;
		NullCheck(L_27);
		int32_t L_28 = ((int32_t)9);
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___state0;
		NullCheck(L_30);
		int32_t L_31 = ((int32_t)10);
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___state0;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)11);
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_11 = L_35;
		V_12 = 0;
		goto IL_012d;
	}

IL_0043:
	{
		uint32_t L_36 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		int32_t L_38 = V_12;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)(L_38&7));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_1 = ((int32_t)((int32_t)L_36^(int32_t)L_40));
		uint32_t L_41 = V_3;
		int32_t L_42 = V_12;
		V_3 = ((int32_t)((int32_t)L_41^L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_43);
		int32_t L_44 = 0;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_45, (&V_0), (&V_1), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_46);
		int32_t L_47 = 1;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_48, (&V_2), (&V_3), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_49);
		int32_t L_50 = 2;
		uint32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_51, (&V_4), (&V_5), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_52);
		int32_t L_53 = 3;
		uint32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_54, (&V_6), (&V_7), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_55);
		int32_t L_56 = 4;
		uint32_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_57, (&V_8), (&V_9), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_58);
		int32_t L_59 = 5;
		uint32_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_60, (&V_10), (&V_11), NULL);
		uint32_t L_61 = V_0;
		uint32_t L_62 = V_2;
		uint32_t L_63 = V_4;
		uint32_t L_64;
		L_64 = SparkleEngine_ELL_mDD5087A7ADD4CB36C3DFE603C0C81FEB5A296E46_inline(((int32_t)(((int32_t)((int32_t)L_61^(int32_t)L_62))^(int32_t)L_63)), NULL);
		V_13 = L_64;
		uint32_t L_65 = V_1;
		uint32_t L_66 = V_3;
		uint32_t L_67 = V_5;
		uint32_t L_68;
		L_68 = SparkleEngine_ELL_mDD5087A7ADD4CB36C3DFE603C0C81FEB5A296E46_inline(((int32_t)(((int32_t)((int32_t)L_65^(int32_t)L_66))^(int32_t)L_67)), NULL);
		V_14 = L_68;
		uint32_t L_69 = V_0;
		uint32_t L_70 = V_6;
		uint32_t L_71 = V_1;
		uint32_t L_72 = V_7;
		V_15 = ((int32_t)((int32_t)L_71^(int32_t)L_72));
		uint32_t L_73 = V_2;
		uint32_t L_74 = V_8;
		uint32_t L_75 = V_3;
		uint32_t L_76 = V_9;
		V_16 = ((int32_t)((int32_t)L_75^(int32_t)L_76));
		uint32_t L_77 = V_4;
		uint32_t L_78 = V_10;
		V_17 = ((int32_t)((int32_t)L_77^(int32_t)L_78));
		uint32_t L_79 = V_5;
		uint32_t L_80 = V_11;
		V_18 = ((int32_t)((int32_t)L_79^(int32_t)L_80));
		uint32_t L_81 = V_0;
		V_6 = L_81;
		uint32_t L_82 = V_1;
		V_7 = L_82;
		uint32_t L_83 = V_2;
		V_8 = L_83;
		uint32_t L_84 = V_3;
		V_9 = L_84;
		uint32_t L_85 = V_4;
		V_10 = L_85;
		uint32_t L_86 = V_5;
		V_11 = L_86;
		uint32_t L_87 = V_14;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_73^(int32_t)L_74))^(int32_t)L_87));
		uint32_t L_88 = V_16;
		uint32_t L_89 = V_13;
		V_1 = ((int32_t)((int32_t)L_88^(int32_t)L_89));
		uint32_t L_90 = V_17;
		uint32_t L_91 = V_14;
		V_2 = ((int32_t)((int32_t)L_90^(int32_t)L_91));
		uint32_t L_92 = V_18;
		uint32_t L_93 = V_13;
		V_3 = ((int32_t)((int32_t)L_92^(int32_t)L_93));
		uint32_t L_94 = V_14;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_69^(int32_t)L_70))^(int32_t)L_94));
		uint32_t L_95 = V_15;
		uint32_t L_96 = V_13;
		V_5 = ((int32_t)((int32_t)L_95^(int32_t)L_96));
		int32_t L_97 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_012d:
	{
		int32_t L_98 = V_12;
		int32_t L_99 = ___steps1;
		if ((((int32_t)L_98) < ((int32_t)L_99)))
		{
			goto IL_0043;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = ___state0;
		uint32_t L_101 = V_0;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_101);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_102 = ___state0;
		uint32_t L_103 = V_1;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_103);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = ___state0;
		uint32_t L_105 = V_2;
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_105);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = ___state0;
		uint32_t L_107 = V_3;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_107);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___state0;
		uint32_t L_109 = V_4;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_109);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = ___state0;
		uint32_t L_111 = V_5;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_111);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ___state0;
		uint32_t L_113 = V_6;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_113);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_114 = ___state0;
		uint32_t L_115 = V_7;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_115);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = ___state0;
		uint32_t L_117 = V_8;
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)L_117);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_118 = ___state0;
		uint32_t L_119 = V_9;
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)L_119);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = ___state0;
		uint32_t L_121 = V_10;
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)L_121);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_122 = ___state0;
		uint32_t L_123 = V_11;
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)L_123);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::SparkleOpt16(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine_SparkleOpt16_mF677840D9F41707230E76D9F06017909E9FB31F7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state0, int32_t ___steps1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___state0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___state0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___state0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___state0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___state0;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___state0;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___state0;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___state0;
		NullCheck(L_21);
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___state0;
		NullCheck(L_24);
		int32_t L_25 = 8;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___state0;
		NullCheck(L_27);
		int32_t L_28 = ((int32_t)9);
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___state0;
		NullCheck(L_30);
		int32_t L_31 = ((int32_t)10);
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___state0;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)11);
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_11 = L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___state0;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)12);
		uint32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_12 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___state0;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)13);
		uint32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_13 = L_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___state0;
		NullCheck(L_42);
		int32_t L_43 = ((int32_t)14);
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_14 = L_44;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___state0;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)15);
		uint32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_15 = L_47;
		V_16 = 0;
		goto IL_0271;
	}

IL_005b:
	{
		uint32_t L_48 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		int32_t L_50 = V_16;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)(L_50&7));
		uint32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_1 = ((int32_t)((int32_t)L_48^(int32_t)L_52));
		uint32_t L_53 = V_3;
		int32_t L_54 = V_16;
		int32_t L_55 = L_54;
		V_16 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		V_3 = ((int32_t)((int32_t)L_53^L_55));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_56);
		int32_t L_57 = 0;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_58, (&V_0), (&V_1), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_59);
		int32_t L_60 = 1;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_61, (&V_2), (&V_3), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_62);
		int32_t L_63 = 2;
		uint32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_64, (&V_4), (&V_5), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_65);
		int32_t L_66 = 3;
		uint32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_67, (&V_6), (&V_7), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_68);
		int32_t L_69 = 4;
		uint32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_70, (&V_8), (&V_9), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_71);
		int32_t L_72 = 5;
		uint32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_73, (&V_10), (&V_11), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_74);
		int32_t L_75 = 6;
		uint32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_76, (&V_12), (&V_13), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_77);
		int32_t L_78 = 7;
		uint32_t L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_79, (&V_14), (&V_15), NULL);
		uint32_t L_80 = V_0;
		uint32_t L_81 = V_2;
		uint32_t L_82 = V_4;
		uint32_t L_83 = V_6;
		uint32_t L_84;
		L_84 = SparkleEngine_ELL_mDD5087A7ADD4CB36C3DFE603C0C81FEB5A296E46_inline(((int32_t)(((int32_t)(((int32_t)((int32_t)L_80^(int32_t)L_81))^(int32_t)L_82))^(int32_t)L_83)), NULL);
		V_17 = L_84;
		uint32_t L_85 = V_1;
		uint32_t L_86 = V_3;
		uint32_t L_87 = V_5;
		uint32_t L_88 = V_7;
		uint32_t L_89;
		L_89 = SparkleEngine_ELL_mDD5087A7ADD4CB36C3DFE603C0C81FEB5A296E46_inline(((int32_t)(((int32_t)(((int32_t)((int32_t)L_85^(int32_t)L_86))^(int32_t)L_87))^(int32_t)L_88)), NULL);
		V_18 = L_89;
		uint32_t L_90 = V_8;
		V_19 = L_90;
		uint32_t L_91 = V_9;
		V_20 = L_91;
		uint32_t L_92 = V_2;
		uint32_t L_93 = V_10;
		uint32_t L_94 = V_18;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_92^(int32_t)L_93))^(int32_t)L_94));
		uint32_t L_95 = V_3;
		uint32_t L_96 = V_11;
		uint32_t L_97 = V_17;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_95^(int32_t)L_96))^(int32_t)L_97));
		uint32_t L_98 = V_4;
		uint32_t L_99 = V_12;
		uint32_t L_100 = V_18;
		V_10 = ((int32_t)(((int32_t)((int32_t)L_98^(int32_t)L_99))^(int32_t)L_100));
		uint32_t L_101 = V_5;
		uint32_t L_102 = V_13;
		uint32_t L_103 = V_17;
		V_11 = ((int32_t)(((int32_t)((int32_t)L_101^(int32_t)L_102))^(int32_t)L_103));
		uint32_t L_104 = V_6;
		uint32_t L_105 = V_14;
		uint32_t L_106 = V_18;
		V_12 = ((int32_t)(((int32_t)((int32_t)L_104^(int32_t)L_105))^(int32_t)L_106));
		uint32_t L_107 = V_7;
		uint32_t L_108 = V_15;
		uint32_t L_109 = V_17;
		V_13 = ((int32_t)(((int32_t)((int32_t)L_107^(int32_t)L_108))^(int32_t)L_109));
		uint32_t L_110 = V_0;
		uint32_t L_111 = V_19;
		uint32_t L_112 = V_18;
		V_14 = ((int32_t)(((int32_t)((int32_t)L_110^(int32_t)L_111))^(int32_t)L_112));
		uint32_t L_113 = V_1;
		uint32_t L_114 = V_20;
		uint32_t L_115 = V_17;
		V_15 = ((int32_t)(((int32_t)((int32_t)L_113^(int32_t)L_114))^(int32_t)L_115));
		uint32_t L_116 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		int32_t L_118 = V_16;
		NullCheck(L_117);
		int32_t L_119 = ((int32_t)(L_118&7));
		uint32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		V_9 = ((int32_t)((int32_t)L_116^(int32_t)L_120));
		uint32_t L_121 = V_11;
		int32_t L_122 = V_16;
		int32_t L_123 = L_122;
		V_16 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		V_11 = ((int32_t)((int32_t)L_121^L_123));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_124);
		int32_t L_125 = 0;
		uint32_t L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_126, (&V_8), (&V_9), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_127 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_127);
		int32_t L_128 = 1;
		uint32_t L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_129, (&V_10), (&V_11), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_130);
		int32_t L_131 = 2;
		uint32_t L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_132, (&V_12), (&V_13), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_133);
		int32_t L_134 = 3;
		uint32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_135, (&V_14), (&V_15), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_136 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_136);
		int32_t L_137 = 4;
		uint32_t L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_138, (&V_0), (&V_1), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_139 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_139);
		int32_t L_140 = 5;
		uint32_t L_141 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_141, (&V_2), (&V_3), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_142 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_142);
		int32_t L_143 = 6;
		uint32_t L_144 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_144, (&V_4), (&V_5), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_145 = ((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0;
		NullCheck(L_145);
		int32_t L_146 = 7;
		uint32_t L_147 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline(L_147, (&V_6), (&V_7), NULL);
		uint32_t L_148 = V_8;
		uint32_t L_149 = V_10;
		uint32_t L_150 = V_12;
		uint32_t L_151 = V_14;
		uint32_t L_152;
		L_152 = SparkleEngine_ELL_mDD5087A7ADD4CB36C3DFE603C0C81FEB5A296E46_inline(((int32_t)(((int32_t)(((int32_t)((int32_t)L_148^(int32_t)L_149))^(int32_t)L_150))^(int32_t)L_151)), NULL);
		V_21 = L_152;
		uint32_t L_153 = V_9;
		uint32_t L_154 = V_11;
		uint32_t L_155 = V_13;
		uint32_t L_156 = V_15;
		uint32_t L_157;
		L_157 = SparkleEngine_ELL_mDD5087A7ADD4CB36C3DFE603C0C81FEB5A296E46_inline(((int32_t)(((int32_t)(((int32_t)((int32_t)L_153^(int32_t)L_154))^(int32_t)L_155))^(int32_t)L_156)), NULL);
		V_22 = L_157;
		uint32_t L_158 = V_0;
		uint32_t L_159 = V_1;
		V_23 = L_159;
		uint32_t L_160 = V_2;
		uint32_t L_161 = V_10;
		uint32_t L_162 = V_22;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_160^(int32_t)L_161))^(int32_t)L_162));
		uint32_t L_163 = V_3;
		uint32_t L_164 = V_11;
		uint32_t L_165 = V_21;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_163^(int32_t)L_164))^(int32_t)L_165));
		uint32_t L_166 = V_4;
		uint32_t L_167 = V_12;
		uint32_t L_168 = V_22;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_166^(int32_t)L_167))^(int32_t)L_168));
		uint32_t L_169 = V_5;
		uint32_t L_170 = V_13;
		uint32_t L_171 = V_21;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_169^(int32_t)L_170))^(int32_t)L_171));
		uint32_t L_172 = V_6;
		uint32_t L_173 = V_14;
		uint32_t L_174 = V_22;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_172^(int32_t)L_173))^(int32_t)L_174));
		uint32_t L_175 = V_7;
		uint32_t L_176 = V_15;
		uint32_t L_177 = V_21;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_175^(int32_t)L_176))^(int32_t)L_177));
		uint32_t L_178 = V_8;
		uint32_t L_179 = V_22;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_158^(int32_t)L_178))^(int32_t)L_179));
		uint32_t L_180 = V_23;
		uint32_t L_181 = V_9;
		uint32_t L_182 = V_21;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_180^(int32_t)L_181))^(int32_t)L_182));
	}

IL_0271:
	{
		int32_t L_183 = V_16;
		int32_t L_184 = ___steps1;
		if ((((int32_t)L_183) < ((int32_t)L_184)))
		{
			goto IL_005b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = ___state0;
		uint32_t L_186 = V_0;
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_186);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_187 = ___state0;
		uint32_t L_188 = V_1;
		NullCheck(L_187);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_188);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_189 = ___state0;
		uint32_t L_190 = V_2;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_190);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_191 = ___state0;
		uint32_t L_192 = V_3;
		NullCheck(L_191);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_192);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_193 = ___state0;
		uint32_t L_194 = V_4;
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_194);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_195 = ___state0;
		uint32_t L_196 = V_5;
		NullCheck(L_195);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_196);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_197 = ___state0;
		uint32_t L_198 = V_6;
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_198);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_199 = ___state0;
		uint32_t L_200 = V_7;
		NullCheck(L_199);
		(L_199)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_200);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_201 = ___state0;
		uint32_t L_202 = V_8;
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)L_202);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_203 = ___state0;
		uint32_t L_204 = V_9;
		NullCheck(L_203);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)L_204);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_205 = ___state0;
		uint32_t L_206 = V_10;
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)L_206);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_207 = ___state0;
		uint32_t L_208 = V_11;
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)L_208);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_209 = ___state0;
		uint32_t L_210 = V_12;
		NullCheck(L_209);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)L_210);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_211 = ___state0;
		uint32_t L_212 = V_13;
		NullCheck(L_211);
		(L_211)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)L_212);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_213 = ___state0;
		uint32_t L_214 = V_14;
		NullCheck(L_213);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)L_214);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_215 = ___state0;
		uint32_t L_216 = V_15;
		NullCheck(L_215);
		(L_215)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)L_216);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SparkleEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparkleEngine__cctor_mDCA1C99CCEC0B88ECF64AAED34D6955D3573E632 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F42A21A8C4DAEEB40F3FE4E0BB60A6312C546C94759E076AEBC0DA92D92D9D22_432_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____F42A21A8C4DAEEB40F3FE4E0BB60A6312C546C94759E076AEBC0DA92D92D9D22_432_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_StaticFields*)il2cpp_codegen_static_fields_for(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var))->___RCON_0), (void*)L_1);
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
// System.Void Org.BouncyCastle.Crypto.Engines.TeaEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine__ctor_m999071E4124495D31DDA7A8754D20E6C1C924E0C (TeaEngine_t6BC42223B1D728340B8F17D492E937CA2D89AD6E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->____initialised_8 = (bool)0;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.TeaEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TeaEngine_get_AlgorithmName_m929DFAF60D0F94F57DFE14B38AA1CA8A17AA3036 (TeaEngine_t6BC42223B1D728340B8F17D492E937CA2D89AD6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0796E90F43FCEAA833791A89357F3DA6E4AAF4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA0796E90F43FCEAA833791A89357F3DA6E4AAF4E;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TeaEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_GetBlockSize_m9EDFE401B4649D2A9AC523A61E08E12CCF3B0D3A (TeaEngine_t6BC42223B1D728340B8F17D492E937CA2D89AD6E* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TeaEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine_Init_m04800675AE54B01941A8E0DBCF3B8D69E315F039 (TeaEngine_t6BC42223B1D728340B8F17D492E937CA2D89AD6E* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___parameters1;
		V_0 = ((KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var));
		KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* L_1 = V_0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tF9C23619E5FFFC96AC678CFD78D055CEE9CA411F_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = Platform_GetTypeName_mAE219F38A7A09C7F3B6FC85DDA460C60675F3A9D(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD187D665853B8D7EA2432DDF6CBF2E65DC3BA81D)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TeaEngine_Init_m04800675AE54B01941A8E0DBCF3B8D69E315F039_RuntimeMethod_var)));
	}

IL_0020:
	{
		bool L_6 = ___forEncryption0;
		__this->____forEncryption_9 = L_6;
		__this->____initialised_8 = (bool)1;
		KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m4CF60D78522E0F608DD02E0C8DADE59E5303FA23(L_7, NULL);
		TeaEngine_SetKey_mAD36DB36B9F820C3B4DFF9F8C06D3CCF16EEFD1A(__this, L_8, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TeaEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_ProcessBlock_mAB9F67B81EA2DE55185094012B5BAD16A88D519B (TeaEngine_t6BC42223B1D728340B8F17D492E937CA2D89AD6E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____initialised_8;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String Org.BouncyCastle.Crypto.Engines.TeaEngine::get_AlgorithmName() */, __this);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TeaEngine_ProcessBlock_mAB9F67B81EA2DE55185094012B5BAD16A88D519B_RuntimeMethod_var)));
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___inBytes0;
		int32_t L_5 = ___inOff1;
		Check_DataLength_mA5DC3F8EEF846867142FFE7FA64C783BE9D20CEF(L_4, L_5, 8, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___outBytes2;
		int32_t L_7 = ___outOff3;
		Check_OutputLength_mE9721C2E284A57CD53D1F6E2525AF21318146178(L_6, L_7, 8, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_8 = __this->____forEncryption_9;
		if (L_8)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___inBytes0;
		int32_t L_10 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___outBytes2;
		int32_t L_12 = ___outOff3;
		int32_t L_13;
		L_13 = TeaEngine_DecryptBlock_m78A6D1A9B335D22D99C5B71A54E0C722FBBF2BDF(__this, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}

IL_004d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___inBytes0;
		int32_t L_15 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___outBytes2;
		int32_t L_17 = ___outOff3;
		int32_t L_18;
		L_18 = TeaEngine_EncryptBlock_m9F3F46954AE5E0074BA15046DC5315F2175BD015(__this, L_14, L_15, L_16, L_17, NULL);
		return L_18;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TeaEngine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine_SetKey_mAD36DB36B9F820C3B4DFF9F8C06D3CCF16EEFD1A (TeaEngine_t6BC42223B1D728340B8F17D492E937CA2D89AD6E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___key0;
		uint32_t L_1;
		L_1 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_0, 0, NULL);
		__this->____a_4 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___key0;
		uint32_t L_3;
		L_3 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_2, 4, NULL);
		__this->____b_5 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___key0;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_4, 8, NULL);
		__this->____c_6 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___key0;
		uint32_t L_7;
		L_7 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_6, ((int32_t)12), NULL);
		__this->____d_7 = L_7;
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TeaEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_EncryptBlock_m9F3F46954AE5E0074BA15046DC5315F2175BD015 (TeaEngine_t6BC42223B1D728340B8F17D492E937CA2D89AD6E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inBytes0;
		int32_t L_1 = ___inOff1;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___inBytes0;
		int32_t L_4 = ___inOff1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		V_2 = 0;
		V_3 = 0;
		goto IL_005c;
	}

IL_0018:
	{
		uint32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)-1640531527)));
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		uint32_t L_9 = __this->____a_4;
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		uint32_t L_12 = V_1;
		uint32_t L_13 = __this->____b_5;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_8<<4)), (int32_t)L_9))^((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11))))^((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_12>>5)), (int32_t)L_13))))));
		uint32_t L_14 = V_1;
		uint32_t L_15 = V_0;
		uint32_t L_16 = __this->____c_6;
		uint32_t L_17 = V_0;
		uint32_t L_18 = V_2;
		uint32_t L_19 = V_0;
		uint32_t L_20 = __this->____d_7;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_15<<4)), (int32_t)L_16))^((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18))))^((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_19>>5)), (int32_t)L_20))))));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_005c:
	{
		int32_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___outBytes2;
		int32_t L_25 = ___outOff3;
		Pack_UInt32_To_BE_m8DE23D6C7E8FB1AD9AA17CF868A8A2ECE246669F(L_23, L_24, L_25, NULL);
		uint32_t L_26 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___outBytes2;
		int32_t L_28 = ___outOff3;
		Pack_UInt32_To_BE_m8DE23D6C7E8FB1AD9AA17CF868A8A2ECE246669F(L_26, L_27, ((int32_t)il2cpp_codegen_add(L_28, 4)), NULL);
		return 8;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TeaEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_DecryptBlock_m78A6D1A9B335D22D99C5B71A54E0C722FBBF2BDF (TeaEngine_t6BC42223B1D728340B8F17D492E937CA2D89AD6E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inBytes0;
		int32_t L_1 = ___inOff1;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___inBytes0;
		int32_t L_4 = ___inOff1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		V_2 = ((int32_t)-957401312);
		V_3 = 0;
		goto IL_0060;
	}

IL_001c:
	{
		uint32_t L_6 = V_1;
		uint32_t L_7 = V_0;
		uint32_t L_8 = __this->____c_6;
		uint32_t L_9 = V_0;
		uint32_t L_10 = V_2;
		uint32_t L_11 = V_0;
		uint32_t L_12 = __this->____d_7;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_7<<4)), (int32_t)L_8))^((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10))))^((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_11>>5)), (int32_t)L_12))))));
		uint32_t L_13 = V_0;
		uint32_t L_14 = V_1;
		uint32_t L_15 = __this->____a_4;
		uint32_t L_16 = V_1;
		uint32_t L_17 = V_2;
		uint32_t L_18 = V_1;
		uint32_t L_19 = __this->____b_5;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_14<<4)), (int32_t)L_15))^((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17))))^((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_18>>5)), (int32_t)L_19))))));
		uint32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, ((int32_t)-1640531527)));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0060:
	{
		int32_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001c;
		}
	}
	{
		uint32_t L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___outBytes2;
		int32_t L_25 = ___outOff3;
		Pack_UInt32_To_BE_m8DE23D6C7E8FB1AD9AA17CF868A8A2ECE246669F(L_23, L_24, L_25, NULL);
		uint32_t L_26 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___outBytes2;
		int32_t L_28 = ___outOff3;
		Pack_UInt32_To_BE_m8DE23D6C7E8FB1AD9AA17CF868A8A2ECE246669F(L_26, L_27, ((int32_t)il2cpp_codegen_add(L_28, 4)), NULL);
		return 8;
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
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine__cctor_mFEE9DFDC86C8203323B89DC627DBAF9AA4741A28 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD9_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD9_10), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD9_10;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD17_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD17_11), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD9_10;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD5_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD5_12), (void*)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD9_10;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD3_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD3_13), (void*)L_6);
		V_0 = 0;
		goto IL_0071;
	}

IL_0043:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD17_11;
		int32_t L_8 = V_0;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)((int32_t)(L_9%((int32_t)17))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD9_10;
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int32_t)((int32_t)(L_12%((int32_t)9))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD5_12;
		int32_t L_14 = V_0;
		int32_t L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (int32_t)((int32_t)(L_15%5)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD3_13;
		int32_t L_17 = V_0;
		int32_t L_18 = V_0;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)((int32_t)(L_18%3)));
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0071:
	{
		int32_t L_20 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD9_10;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine__ctor_mEEBD43CC6D8A98A26ED1D8A1F1B025C887FD056C (ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856* __this, int32_t ___blocksizeBits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Threefish1024Cipher_t09C03FC6D8744C65F6E6FA08785807CB8B5035DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Threefish256Cipher_tFFB4159F61151680B61A7DE764D3385E6403AD1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Threefish512Cipher_tC42033E65F770696004AF3BA13B6225F29E56A35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->___t_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_17), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_1 = ___blocksizeBits0;
		__this->___blocksizeBytes_14 = ((int32_t)(L_1/8));
		int32_t L_2 = __this->___blocksizeBytes_14;
		__this->___blocksizeWords_15 = ((int32_t)(L_2/8));
		int32_t L_3 = __this->___blocksizeWords_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___currentBlock_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentBlock_16), (void*)L_4);
		int32_t L_5 = __this->___blocksizeWords_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_5)), 1)));
		__this->___kw_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kw_18), (void*)L_6);
		int32_t L_7 = ___blocksizeBits0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)256))))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_8 = ___blocksizeBits0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)512))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_9 = ___blocksizeBits0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0099;
		}
	}
	{
		goto IL_00b1;
	}

IL_0069:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = __this->___kw_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = __this->___t_17;
		Threefish256Cipher_tFFB4159F61151680B61A7DE764D3385E6403AD1E* L_12 = (Threefish256Cipher_tFFB4159F61151680B61A7DE764D3385E6403AD1E*)il2cpp_codegen_object_new(Threefish256Cipher_tFFB4159F61151680B61A7DE764D3385E6403AD1E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Threefish256Cipher__ctor_mD4D451FA71FB0AB397E13B2C5E7CAF19E633E7A2(L_12, L_10, L_11, NULL);
		__this->___cipher_19 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_19), (void*)L_12);
		return;
	}

IL_0081:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = __this->___kw_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = __this->___t_17;
		Threefish512Cipher_tC42033E65F770696004AF3BA13B6225F29E56A35* L_15 = (Threefish512Cipher_tC42033E65F770696004AF3BA13B6225F29E56A35*)il2cpp_codegen_object_new(Threefish512Cipher_tC42033E65F770696004AF3BA13B6225F29E56A35_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Threefish512Cipher__ctor_mC26535F6FADF9C30F8491CEAC5A45B19EB24CE8E(L_15, L_13, L_14, NULL);
		__this->___cipher_19 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_19), (void*)L_15);
		return;
	}

IL_0099:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = __this->___kw_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = __this->___t_17;
		Threefish1024Cipher_t09C03FC6D8744C65F6E6FA08785807CB8B5035DA* L_18 = (Threefish1024Cipher_t09C03FC6D8744C65F6E6FA08785807CB8B5035DA*)il2cpp_codegen_object_new(Threefish1024Cipher_t09C03FC6D8744C65F6E6FA08785807CB8B5035DA_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Threefish1024Cipher__ctor_mB5BA1CC98F6BF4382DF61D31CFBBFF16B2A6015F(L_18, L_16, L_17, NULL);
		__this->___cipher_19 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_19), (void*)L_18);
		return;
	}

IL_00b1:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE004A5E158484C188AA92B5BB521E3CD282D19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine__ctor_mEEBD43CC6D8A98A26ED1D8A1F1B025C887FD056C_RuntimeMethod_var)));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_Init_m24CEE94DF1B2FC0CC5DE9F92586EE189BB106003 (ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweakableBlockCipherParameters_t876263FF38FDD4501C518FB9290E1E02E7565E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_2 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_3 = NULL;
	int32_t V_4 = 0;
	{
		RuntimeObject* L_0 = ___parameters1;
		if (!((TweakableBlockCipherParameters_t876263FF38FDD4501C518FB9290E1E02E7565E17*)IsInstClass((RuntimeObject*)L_0, TweakableBlockCipherParameters_t876263FF38FDD4501C518FB9290E1E02E7565E17_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters1;
		TweakableBlockCipherParameters_t876263FF38FDD4501C518FB9290E1E02E7565E17* L_2 = ((TweakableBlockCipherParameters_t876263FF38FDD4501C518FB9290E1E02E7565E17*)CastclassClass((RuntimeObject*)L_1, TweakableBlockCipherParameters_t876263FF38FDD4501C518FB9290E1E02E7565E17_il2cpp_TypeInfo_var));
		NullCheck(L_2);
		KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* L_3;
		L_3 = TweakableBlockCipherParameters_get_Key_mB9900872F32F8EED8F09D41B91717B4EF7A33CDD_inline(L_2, NULL);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = KeyParameter_GetKey_m4CF60D78522E0F608DD02E0C8DADE59E5303FA23(L_3, NULL);
		V_0 = L_4;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = TweakableBlockCipherParameters_get_Tweak_m9CCD5E294B94EC79C8D24503FC888F23E9C90D1B_inline(L_2, NULL);
		V_1 = L_5;
		goto IL_0050;
	}

IL_0022:
	{
		RuntimeObject* L_6 = ___parameters1;
		if (!((KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0*)IsInstClass((RuntimeObject*)L_6, KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_7 = ___parameters1;
		NullCheck(((KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0*)CastclassClass((RuntimeObject*)L_7, KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m4CF60D78522E0F608DD02E0C8DADE59E5303FA23(((KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0*)CastclassClass((RuntimeObject*)L_7, KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_8;
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_0050;
	}

IL_003a:
	{
		RuntimeObject* L_9 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tF9C23619E5FFFC96AC678CFD78D055CEE9CA411F_il2cpp_TypeInfo_var)));
		String_t* L_10;
		L_10 = Platform_GetTypeName_mAE219F38A7A09C7F3B6FC85DDA460C60675F3A9D(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25170142FB4F3488DD4A97779A090DDE52AC8358)), L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_Init_m24CEE94DF1B2FC0CC5DE9F92586EE189BB106003_RuntimeMethod_var)));
	}

IL_0050:
	{
		V_2 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL;
		V_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		if (!L_13)
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = __this->___blocksizeBytes_14;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) == ((int32_t)L_15)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_16 = __this->___blocksizeBytes_14;
		V_4 = L_16;
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral930666AA55A409F0C125598AF425653A0FDF4C32)), L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14230403A1CFC5A19F854BBF8DBA3B9A2CF7E7AF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_Init_m24CEE94DF1B2FC0CC5DE9F92586EE189BB106003_RuntimeMethod_var)));
	}

IL_0086:
	{
		int32_t L_20 = __this->___blocksizeWords_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_2 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = V_2;
		Pack_LE_To_UInt64_m9F982E695BE6D3EF44494BC78E9776CDF223DEFC(L_22, 0, L_23, NULL);
	}

IL_009a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_1;
		if (!L_24)
		{
			goto IL_00d3;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_00c4;
		}
	}
	{
		V_4 = ((int32_t)16);
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_27;
		L_27 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA00666B082ECFBED37CF7EF580BCCF7C15F6A8FE)), L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9F954BE9FD9E999DA1677DADC6D2CAB27412A282)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_28 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_Init_m24CEE94DF1B2FC0CC5DE9F92586EE189BB106003_RuntimeMethod_var)));
	}

IL_00c4:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		V_3 = L_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_31 = V_3;
		Pack_LE_To_UInt64_m9F982E695BE6D3EF44494BC78E9776CDF223DEFC(L_30, 0, L_31, NULL);
	}

IL_00d3:
	{
		bool L_32 = ___forEncryption0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_33 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = V_3;
		ThreefishEngine_Init_mE09CE9363E4FAEAE845D7C827C397C7656D9EFC9(__this, L_32, L_33, L_34, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine::Init(System.Boolean,System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_Init_mE09CE9363E4FAEAE845D7C827C397C7656D9EFC9 (ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856* __this, bool ___forEncryption0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___key1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___tweak2, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___forEncryption0;
		__this->___forEncryption_20 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___key1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___key1;
		ThreefishEngine_SetKey_m9571B51983654ECAD999DB598AF9F9E16A09B53F(__this, L_2, NULL);
	}

IL_0011:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___tweak2;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___tweak2;
		ThreefishEngine_SetTweak_mA281B4FD130242413DCCDFF306C98C31F6FCF009(__this, L_4, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine::SetKey(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_SetKey_m9571B51983654ECAD999DB598AF9F9E16A09B53F (ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___key0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___key0;
		NullCheck(L_0);
		int32_t L_1 = __this->___blocksizeWords_15;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = __this->___blocksizeWords_15;
		V_1 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral930666AA55A409F0C125598AF425653A0FDF4C32)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0CECB4252188823B622C9B595E368C07831C1FA9)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_SetKey_m9571B51983654ECAD999DB598AF9F9E16A09B53F_RuntimeMethod_var)));
	}

IL_002e:
	{
		V_0 = ((int64_t)2004413935125273122LL);
		V_2 = 0;
		goto IL_0056;
	}

IL_003c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->___kw_18;
		int32_t L_7 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___key0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int64_t L_11 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint64_t)L_11);
		uint64_t L_12 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = __this->___kw_18;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int64_t L_16 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)((int64_t)L_12^L_16));
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0056:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = __this->___blocksizeWords_15;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_003c;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = __this->___kw_18;
		int32_t L_21 = __this->___blocksizeWords_15;
		uint64_t L_22 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint64_t)L_22);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = __this->___kw_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = __this->___kw_18;
		int32_t L_25 = __this->___blocksizeWords_15;
		int32_t L_26 = __this->___blocksizeWords_15;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_23, 0, (RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, 1)), L_26, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine::SetTweak(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_SetTweak_mA281B4FD130242413DCCDFF306C98C31F6FCF009 (ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___tweak0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___tweak0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		V_0 = 2;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FC2A08F30023C6460F14108C58D275A5F58ED73)), L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19A7034042434538838BF70971EC853B1C495314)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_SetTweak_mA281B4FD130242413DCCDFF306C98C31F6FCF009_RuntimeMethod_var)));
	}

IL_0024:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->___t_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___tweak0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = __this->___t_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___tweak0;
		NullCheck(L_9);
		int32_t L_10 = 1;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = __this->___t_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = __this->___t_17;
		NullCheck(L_13);
		int32_t L_14 = 0;
		int64_t L_15 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = __this->___t_17;
		NullCheck(L_16);
		int32_t L_17 = 1;
		int64_t L_18 = (int64_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)((int64_t)(L_15^L_18)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = __this->___t_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = __this->___t_17;
		NullCheck(L_20);
		int32_t L_21 = 0;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_22);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = __this->___t_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = __this->___t_17;
		NullCheck(L_24);
		int32_t L_25 = 1;
		int64_t L_26 = (int64_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_26);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.ThreefishEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThreefishEngine_get_AlgorithmName_m83235575766BC795BADA2C62734E60D72E45501D (ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5D7630CEB63535569DC2F806E2D2E580AB463C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___blocksizeBytes_14;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 8));
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7F5D7630CEB63535569DC2F806E2D2E580AB463C, L_1, NULL);
		return L_2;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreefishEngine_GetBlockSize_mAFAB56CF346E5FD9A3780CC143F3336A66D5D9AB (ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___blocksizeBytes_14;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreefishEngine_ProcessBlock_m3F833C35FE6D1393E1E0261F37A9EB7F0AFFC5C0 (ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inBytes0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = __this->___blocksizeBytes_14;
		Check_DataLength_mA5DC3F8EEF846867142FFE7FA64C783BE9D20CEF(L_0, L_1, L_2, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___outBytes2;
		int32_t L_4 = ___outOff3;
		int32_t L_5 = __this->___blocksizeBytes_14;
		Check_OutputLength_mE9721C2E284A57CD53D1F6E2525AF21318146178(L_3, L_4, L_5, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___inBytes0;
		int32_t L_7 = ___inOff1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = __this->___currentBlock_16;
		Pack_LE_To_UInt64_m9F982E695BE6D3EF44494BC78E9776CDF223DEFC(L_6, L_7, L_8, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = __this->___currentBlock_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = __this->___currentBlock_16;
		int32_t L_11;
		L_11 = ThreefishEngine_ProcessBlock_m4E6D2651AC66B89288702DD013F5402EDF189008(__this, L_9, L_10, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = __this->___currentBlock_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___outBytes2;
		int32_t L_14 = ___outOff3;
		Pack_UInt64_To_LE_mAFA9B22D6B7E546FD2BA7C49DFDAD51FCC2E3D2C(L_12, L_13, L_14, NULL);
		int32_t L_15 = __this->___blocksizeBytes_14;
		return L_15;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::ProcessBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreefishEngine_ProcessBlock_m4E6D2651AC66B89288702DD013F5402EDF189008 (ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___inWords0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___outWords1, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___kw_18;
		int32_t L_1 = __this->___blocksizeWords_15;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC894542CC15E7FDD0B254592D14D3E16EB7762B6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_ProcessBlock_m4E6D2651AC66B89288702DD013F5402EDF189008_RuntimeMethod_var)));
	}

IL_001a:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___inWords0;
		NullCheck(L_5);
		int32_t L_6 = __this->___blocksizeWords_15;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((int32_t)L_6)))
		{
			goto IL_0030;
		}
	}
	{
		DataLengthException_tCF9122CB37CF1ED59631FF3661977DEA9E0F3BC3* L_7 = (DataLengthException_tCF9122CB37CF1ED59631FF3661977DEA9E0F3BC3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tCF9122CB37CF1ED59631FF3661977DEA9E0F3BC3_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		DataLengthException__ctor_mC41D5E4EE1387D5FBC20928BCEDC48A063C7761E(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_ProcessBlock_m4E6D2651AC66B89288702DD013F5402EDF189008_RuntimeMethod_var)));
	}

IL_0030:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___outWords1;
		NullCheck(L_8);
		int32_t L_9 = __this->___blocksizeWords_15;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		OutputLengthException_tB57BC6652C8E8A36DCC698125BA59983BA3CA684* L_10 = (OutputLengthException_tB57BC6652C8E8A36DCC698125BA59983BA3CA684*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutputLengthException_tB57BC6652C8E8A36DCC698125BA59983BA3CA684_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		OutputLengthException__ctor_m73B4222CAFEC8E964DB838871853120F5CEBB527(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_ProcessBlock_m4E6D2651AC66B89288702DD013F5402EDF189008_RuntimeMethod_var)));
	}

IL_0046:
	{
		bool L_11 = __this->___forEncryption_20;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F* L_12 = __this->___cipher_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___inWords0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___outWords1;
		NullCheck(L_12);
		VirtualActionInvoker2< UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::EncryptBlock(System.UInt64[],System.UInt64[]) */, L_12, L_13, L_14);
		goto IL_006a;
	}

IL_005d:
	{
		ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F* L_15 = __this->___cipher_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___inWords0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___outWords1;
		NullCheck(L_15);
		VirtualActionInvoker2< UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* >::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::DecryptBlock(System.UInt64[],System.UInt64[]) */, L_15, L_16, L_17);
	}

IL_006a:
	{
		int32_t L_18 = __this->___blocksizeWords_15;
		return L_18;
	}
}
// System.UInt64 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::RotlXor(System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA (uint64_t ___x0, int32_t ___n1, uint64_t ___xor2, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___x0;
		int32_t L_1 = ___n1;
		uint64_t L_2 = ___x0;
		int32_t L_3 = ___n1;
		uint64_t L_4 = ___xor2;
		return ((int64_t)(((int64_t)(((int64_t)((int64_t)L_0<<((int32_t)(L_1&((int32_t)63)))))|((int64_t)((uint64_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_3))&((int32_t)63)))))))^(int64_t)L_4));
	}
}
// System.UInt64 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::XorRotr(System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6 (uint64_t ___x0, int32_t ___n1, uint64_t ___xor2, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = ___x0;
		uint64_t L_1 = ___xor2;
		V_0 = ((int64_t)((int64_t)L_0^(int64_t)L_1));
		uint64_t L_2 = V_0;
		int32_t L_3 = ___n1;
		uint64_t L_4 = V_0;
		int32_t L_5 = ___n1;
		return ((int64_t)(((int64_t)((uint64_t)L_2>>((int32_t)(L_3&((int32_t)63)))))|((int64_t)((int64_t)L_4<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_5))&((int32_t)63)))))));
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
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishCipher__ctor_m0627ED9FD0C928295DBA76FA92B97EB79853BBD8 (ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___kw0;
		__this->___kw_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kw_1), (void*)L_0);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___t1;
		__this->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_1);
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
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish256Cipher__ctor_mD4D451FA71FB0AB397E13B2C5E7CAF19E633E7A2 (Threefish256Cipher_tFFB4159F61151680B61A7DE764D3385E6403AD1E* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t1, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___kw0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___t1;
		ThreefishCipher__ctor_m0627ED9FD0C928295DBA76FA92B97EB79853BBD8(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher::EncryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish256Cipher_EncryptBlock_m57EC48EFEAACE7D0831C3DBB993D6D8523C3BF16 (Threefish256Cipher_tFFB4159F61151680B61A7DE764D3385E6403AD1E* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___block0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___outWords1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD5_12;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)9))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish256Cipher_EncryptBlock_m57EC48EFEAACE7D0831C3DBB993D6D8523C3BF16_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish256Cipher_EncryptBlock_m57EC48EFEAACE7D0831C3DBB993D6D8523C3BF16_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___block0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___block0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___block0;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___block0;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		uint64_t L_20 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 0;
		int64_t L_23 = (int64_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, L_23));
		uint64_t L_24 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 1;
		int64_t L_27 = (int64_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = 0;
		int64_t L_30 = (int64_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_24, ((int64_t)il2cpp_codegen_add(L_27, L_30))));
		uint64_t L_31 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = 2;
		int64_t L_34 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = 1;
		int64_t L_37 = (int64_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)il2cpp_codegen_add(L_34, L_37))));
		uint64_t L_38 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = 3;
		int64_t L_41 = (int64_t)(L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_38, L_41));
		V_8 = 1;
		goto IL_0233;
	}

IL_0077:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_2;
		int32_t L_43 = V_8;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_9 = L_45;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_3;
		int32_t L_47 = V_8;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_10 = L_49;
		uint64_t L_50 = V_5;
		uint64_t L_51 = V_4;
		uint64_t L_52 = V_5;
		int64_t L_53 = ((int64_t)il2cpp_codegen_add((int64_t)L_51, (int64_t)L_52));
		V_4 = L_53;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		uint64_t L_54;
		L_54 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_50, ((int32_t)14), L_53, NULL);
		V_5 = L_54;
		uint64_t L_55 = V_7;
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_7;
		int64_t L_58 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, (int64_t)L_57));
		V_6 = L_58;
		uint64_t L_59;
		L_59 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_55, ((int32_t)16), L_58, NULL);
		V_7 = L_59;
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_4;
		uint64_t L_62 = V_7;
		int64_t L_63 = ((int64_t)il2cpp_codegen_add((int64_t)L_61, (int64_t)L_62));
		V_4 = L_63;
		uint64_t L_64;
		L_64 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_60, ((int32_t)52), L_63, NULL);
		V_7 = L_64;
		uint64_t L_65 = V_5;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		int64_t L_68 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, (int64_t)L_67));
		V_6 = L_68;
		uint64_t L_69;
		L_69 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_65, ((int32_t)57), L_68, NULL);
		V_5 = L_69;
		uint64_t L_70 = V_5;
		uint64_t L_71 = V_4;
		uint64_t L_72 = V_5;
		int64_t L_73 = ((int64_t)il2cpp_codegen_add((int64_t)L_71, (int64_t)L_72));
		V_4 = L_73;
		uint64_t L_74;
		L_74 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_70, ((int32_t)23), L_73, NULL);
		V_5 = L_74;
		uint64_t L_75 = V_7;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_7;
		int64_t L_78 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, (int64_t)L_77));
		V_6 = L_78;
		uint64_t L_79;
		L_79 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_75, ((int32_t)40), L_78, NULL);
		V_7 = L_79;
		uint64_t L_80 = V_7;
		uint64_t L_81 = V_4;
		uint64_t L_82 = V_7;
		int64_t L_83 = ((int64_t)il2cpp_codegen_add((int64_t)L_81, (int64_t)L_82));
		V_4 = L_83;
		uint64_t L_84;
		L_84 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_80, 5, L_83, NULL);
		V_7 = L_84;
		uint64_t L_85 = V_5;
		uint64_t L_86 = V_6;
		uint64_t L_87 = V_5;
		int64_t L_88 = ((int64_t)il2cpp_codegen_add((int64_t)L_86, (int64_t)L_87));
		V_6 = L_88;
		uint64_t L_89;
		L_89 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_85, ((int32_t)37), L_88, NULL);
		V_5 = L_89;
		uint64_t L_90 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_91 = V_0;
		int32_t L_92 = V_9;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		int64_t L_94 = (int64_t)(L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_90, L_94));
		uint64_t L_95 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_96 = V_0;
		int32_t L_97 = V_9;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		int64_t L_99 = (int64_t)(L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = V_1;
		int32_t L_101 = V_10;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		int64_t L_103 = (int64_t)(L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_95, ((int64_t)il2cpp_codegen_add(L_99, L_103))));
		uint64_t L_104 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = V_0;
		int32_t L_106 = V_9;
		NullCheck(L_105);
		int32_t L_107 = ((int32_t)il2cpp_codegen_add(L_106, 2));
		int64_t L_108 = (int64_t)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_109 = V_1;
		int32_t L_110 = V_10;
		NullCheck(L_109);
		int32_t L_111 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int64_t L_112 = (int64_t)(L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, ((int64_t)il2cpp_codegen_add(L_108, L_112))));
		uint64_t L_113 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_114 = V_0;
		int32_t L_115 = V_9;
		NullCheck(L_114);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(L_115, 3));
		int64_t L_117 = (int64_t)(L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		int32_t L_118 = V_8;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_add(L_117, ((int64_t)(uint64_t)((uint32_t)L_118))))));
		uint64_t L_119 = V_5;
		uint64_t L_120 = V_4;
		uint64_t L_121 = V_5;
		int64_t L_122 = ((int64_t)il2cpp_codegen_add((int64_t)L_120, (int64_t)L_121));
		V_4 = L_122;
		uint64_t L_123;
		L_123 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_119, ((int32_t)25), L_122, NULL);
		V_5 = L_123;
		uint64_t L_124 = V_7;
		uint64_t L_125 = V_6;
		uint64_t L_126 = V_7;
		int64_t L_127 = ((int64_t)il2cpp_codegen_add((int64_t)L_125, (int64_t)L_126));
		V_6 = L_127;
		uint64_t L_128;
		L_128 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_124, ((int32_t)33), L_127, NULL);
		V_7 = L_128;
		uint64_t L_129 = V_7;
		uint64_t L_130 = V_4;
		uint64_t L_131 = V_7;
		int64_t L_132 = ((int64_t)il2cpp_codegen_add((int64_t)L_130, (int64_t)L_131));
		V_4 = L_132;
		uint64_t L_133;
		L_133 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_129, ((int32_t)46), L_132, NULL);
		V_7 = L_133;
		uint64_t L_134 = V_5;
		uint64_t L_135 = V_6;
		uint64_t L_136 = V_5;
		int64_t L_137 = ((int64_t)il2cpp_codegen_add((int64_t)L_135, (int64_t)L_136));
		V_6 = L_137;
		uint64_t L_138;
		L_138 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_134, ((int32_t)12), L_137, NULL);
		V_5 = L_138;
		uint64_t L_139 = V_5;
		uint64_t L_140 = V_4;
		uint64_t L_141 = V_5;
		int64_t L_142 = ((int64_t)il2cpp_codegen_add((int64_t)L_140, (int64_t)L_141));
		V_4 = L_142;
		uint64_t L_143;
		L_143 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_139, ((int32_t)58), L_142, NULL);
		V_5 = L_143;
		uint64_t L_144 = V_7;
		uint64_t L_145 = V_6;
		uint64_t L_146 = V_7;
		int64_t L_147 = ((int64_t)il2cpp_codegen_add((int64_t)L_145, (int64_t)L_146));
		V_6 = L_147;
		uint64_t L_148;
		L_148 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_144, ((int32_t)22), L_147, NULL);
		V_7 = L_148;
		uint64_t L_149 = V_7;
		uint64_t L_150 = V_4;
		uint64_t L_151 = V_7;
		int64_t L_152 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, (int64_t)L_151));
		V_4 = L_152;
		uint64_t L_153;
		L_153 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_149, ((int32_t)32), L_152, NULL);
		V_7 = L_153;
		uint64_t L_154 = V_5;
		uint64_t L_155 = V_6;
		uint64_t L_156 = V_5;
		int64_t L_157 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, (int64_t)L_156));
		V_6 = L_157;
		uint64_t L_158;
		L_158 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_154, ((int32_t)32), L_157, NULL);
		V_5 = L_158;
		uint64_t L_159 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_160 = V_0;
		int32_t L_161 = V_9;
		NullCheck(L_160);
		int32_t L_162 = ((int32_t)il2cpp_codegen_add(L_161, 1));
		int64_t L_163 = (int64_t)(L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_159, L_163));
		uint64_t L_164 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_165 = V_0;
		int32_t L_166 = V_9;
		NullCheck(L_165);
		int32_t L_167 = ((int32_t)il2cpp_codegen_add(L_166, 2));
		int64_t L_168 = (int64_t)(L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_169 = V_1;
		int32_t L_170 = V_10;
		NullCheck(L_169);
		int32_t L_171 = ((int32_t)il2cpp_codegen_add(L_170, 1));
		int64_t L_172 = (int64_t)(L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_164, ((int64_t)il2cpp_codegen_add(L_168, L_172))));
		uint64_t L_173 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_174 = V_0;
		int32_t L_175 = V_9;
		NullCheck(L_174);
		int32_t L_176 = ((int32_t)il2cpp_codegen_add(L_175, 3));
		int64_t L_177 = (int64_t)(L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_178 = V_1;
		int32_t L_179 = V_10;
		NullCheck(L_178);
		int32_t L_180 = ((int32_t)il2cpp_codegen_add(L_179, 2));
		int64_t L_181 = (int64_t)(L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, ((int64_t)il2cpp_codegen_add(L_177, L_181))));
		uint64_t L_182 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_183 = V_0;
		int32_t L_184 = V_9;
		NullCheck(L_183);
		int32_t L_185 = ((int32_t)il2cpp_codegen_add(L_184, 4));
		int64_t L_186 = (int64_t)(L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = V_8;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_182, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_186, ((int64_t)(uint64_t)((uint32_t)L_187)))), ((int64_t)1)))));
		int32_t L_188 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_188, 2));
	}

IL_0233:
	{
		int32_t L_189 = V_8;
		if ((((int32_t)L_189) < ((int32_t)((int32_t)18))))
		{
			goto IL_0077;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190 = ___outWords1;
		uint64_t L_191 = V_4;
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_191);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_192 = ___outWords1;
		uint64_t L_193 = V_5;
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_193);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_194 = ___outWords1;
		uint64_t L_195 = V_6;
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_195);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_196 = ___outWords1;
		uint64_t L_197 = V_7;
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_197);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher::DecryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish256Cipher_DecryptBlock_m6A135145F39BBD4D60E1B33595766EA7D2478675 (Threefish256Cipher_tFFB4159F61151680B61A7DE764D3385E6403AD1E* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___block0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD5_12;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)9))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish256Cipher_DecryptBlock_m6A135145F39BBD4D60E1B33595766EA7D2478675_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish256Cipher_DecryptBlock_m6A135145F39BBD4D60E1B33595766EA7D2478675_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___block0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___block0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___block0;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___block0;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		V_8 = ((int32_t)17);
		goto IL_021c;
	}

IL_0050:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		int32_t L_21 = V_8;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_9 = L_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_3;
		int32_t L_25 = V_8;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_10 = L_27;
		uint64_t L_28 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = V_0;
		int32_t L_30 = V_9;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		int64_t L_32 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_28, L_32));
		uint64_t L_33 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = V_0;
		int32_t L_35 = V_9;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 2));
		int64_t L_37 = (int64_t)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = V_1;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int64_t L_41 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_33, ((int64_t)il2cpp_codegen_add(L_37, L_41))));
		uint64_t L_42 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = V_0;
		int32_t L_44 = V_9;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 3));
		int64_t L_46 = (int64_t)(L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = V_1;
		int32_t L_48 = V_10;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 2));
		int64_t L_50 = (int64_t)(L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_42, ((int64_t)il2cpp_codegen_add(L_46, L_50))));
		uint64_t L_51 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_52 = V_0;
		int32_t L_53 = V_9;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(L_53, 4));
		int64_t L_55 = (int64_t)(L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = V_8;
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_51, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_55, ((int64_t)(uint64_t)((uint32_t)L_56)))), ((int64_t)1)))));
		uint64_t L_57 = V_7;
		uint64_t L_58 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		uint64_t L_59;
		L_59 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_57, ((int32_t)32), L_58, NULL);
		V_7 = L_59;
		uint64_t L_60 = V_4;
		uint64_t L_61 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_60, (int64_t)L_61));
		uint64_t L_62 = V_5;
		uint64_t L_63 = V_6;
		uint64_t L_64;
		L_64 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_62, ((int32_t)32), L_63, NULL);
		V_5 = L_64;
		uint64_t L_65 = V_6;
		uint64_t L_66 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_65, (int64_t)L_66));
		uint64_t L_67 = V_5;
		uint64_t L_68 = V_4;
		uint64_t L_69;
		L_69 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_67, ((int32_t)58), L_68, NULL);
		V_5 = L_69;
		uint64_t L_70 = V_4;
		uint64_t L_71 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_70, (int64_t)L_71));
		uint64_t L_72 = V_7;
		uint64_t L_73 = V_6;
		uint64_t L_74;
		L_74 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_72, ((int32_t)22), L_73, NULL);
		V_7 = L_74;
		uint64_t L_75 = V_6;
		uint64_t L_76 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_75, (int64_t)L_76));
		uint64_t L_77 = V_7;
		uint64_t L_78 = V_4;
		uint64_t L_79;
		L_79 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_77, ((int32_t)46), L_78, NULL);
		V_7 = L_79;
		uint64_t L_80 = V_4;
		uint64_t L_81 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_80, (int64_t)L_81));
		uint64_t L_82 = V_5;
		uint64_t L_83 = V_6;
		uint64_t L_84;
		L_84 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_82, ((int32_t)12), L_83, NULL);
		V_5 = L_84;
		uint64_t L_85 = V_6;
		uint64_t L_86 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_85, (int64_t)L_86));
		uint64_t L_87 = V_5;
		uint64_t L_88 = V_4;
		uint64_t L_89;
		L_89 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_87, ((int32_t)25), L_88, NULL);
		V_5 = L_89;
		uint64_t L_90 = V_4;
		uint64_t L_91 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_90, (int64_t)L_91));
		uint64_t L_92 = V_7;
		uint64_t L_93 = V_6;
		uint64_t L_94;
		L_94 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_92, ((int32_t)33), L_93, NULL);
		V_7 = L_94;
		uint64_t L_95 = V_6;
		uint64_t L_96 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_95, (int64_t)L_96));
		uint64_t L_97 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_98 = V_0;
		int32_t L_99 = V_9;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		int64_t L_101 = (int64_t)(L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_97, L_101));
		uint64_t L_102 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_103 = V_0;
		int32_t L_104 = V_9;
		NullCheck(L_103);
		int32_t L_105 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		int64_t L_106 = (int64_t)(L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_107 = V_1;
		int32_t L_108 = V_10;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		int64_t L_110 = (int64_t)(L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_102, ((int64_t)il2cpp_codegen_add(L_106, L_110))));
		uint64_t L_111 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_112 = V_0;
		int32_t L_113 = V_9;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(L_113, 2));
		int64_t L_115 = (int64_t)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116 = V_1;
		int32_t L_117 = V_10;
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_117, 1));
		int64_t L_119 = (int64_t)(L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_111, ((int64_t)il2cpp_codegen_add(L_115, L_119))));
		uint64_t L_120 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_121 = V_0;
		int32_t L_122 = V_9;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add(L_122, 3));
		int64_t L_124 = (int64_t)(L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		int32_t L_125 = V_8;
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_120, ((int64_t)il2cpp_codegen_add(L_124, ((int64_t)(uint64_t)((uint32_t)L_125))))));
		uint64_t L_126 = V_7;
		uint64_t L_127 = V_4;
		uint64_t L_128;
		L_128 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_126, 5, L_127, NULL);
		V_7 = L_128;
		uint64_t L_129 = V_4;
		uint64_t L_130 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_129, (int64_t)L_130));
		uint64_t L_131 = V_5;
		uint64_t L_132 = V_6;
		uint64_t L_133;
		L_133 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_131, ((int32_t)37), L_132, NULL);
		V_5 = L_133;
		uint64_t L_134 = V_6;
		uint64_t L_135 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_134, (int64_t)L_135));
		uint64_t L_136 = V_5;
		uint64_t L_137 = V_4;
		uint64_t L_138;
		L_138 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_136, ((int32_t)23), L_137, NULL);
		V_5 = L_138;
		uint64_t L_139 = V_4;
		uint64_t L_140 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_139, (int64_t)L_140));
		uint64_t L_141 = V_7;
		uint64_t L_142 = V_6;
		uint64_t L_143;
		L_143 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_141, ((int32_t)40), L_142, NULL);
		V_7 = L_143;
		uint64_t L_144 = V_6;
		uint64_t L_145 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_144, (int64_t)L_145));
		uint64_t L_146 = V_7;
		uint64_t L_147 = V_4;
		uint64_t L_148;
		L_148 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_146, ((int32_t)52), L_147, NULL);
		V_7 = L_148;
		uint64_t L_149 = V_4;
		uint64_t L_150 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_149, (int64_t)L_150));
		uint64_t L_151 = V_5;
		uint64_t L_152 = V_6;
		uint64_t L_153;
		L_153 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_151, ((int32_t)57), L_152, NULL);
		V_5 = L_153;
		uint64_t L_154 = V_6;
		uint64_t L_155 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_154, (int64_t)L_155));
		uint64_t L_156 = V_5;
		uint64_t L_157 = V_4;
		uint64_t L_158;
		L_158 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_156, ((int32_t)14), L_157, NULL);
		V_5 = L_158;
		uint64_t L_159 = V_4;
		uint64_t L_160 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_159, (int64_t)L_160));
		uint64_t L_161 = V_7;
		uint64_t L_162 = V_6;
		uint64_t L_163;
		L_163 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_161, ((int32_t)16), L_162, NULL);
		V_7 = L_163;
		uint64_t L_164 = V_6;
		uint64_t L_165 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_164, (int64_t)L_165));
		int32_t L_166 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_166, 2));
	}

IL_021c:
	{
		int32_t L_167 = V_8;
		if ((((int32_t)L_167) >= ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		uint64_t L_168 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_169 = V_0;
		NullCheck(L_169);
		int32_t L_170 = 0;
		int64_t L_171 = (int64_t)(L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_168, L_171));
		uint64_t L_172 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_173 = V_0;
		NullCheck(L_173);
		int32_t L_174 = 1;
		int64_t L_175 = (int64_t)(L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_176 = V_1;
		NullCheck(L_176);
		int32_t L_177 = 0;
		int64_t L_178 = (int64_t)(L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_172, ((int64_t)il2cpp_codegen_add(L_175, L_178))));
		uint64_t L_179 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_180 = V_0;
		NullCheck(L_180);
		int32_t L_181 = 2;
		int64_t L_182 = (int64_t)(L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_183 = V_1;
		NullCheck(L_183);
		int32_t L_184 = 1;
		int64_t L_185 = (int64_t)(L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_179, ((int64_t)il2cpp_codegen_add(L_182, L_185))));
		uint64_t L_186 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_187 = V_0;
		NullCheck(L_187);
		int32_t L_188 = 3;
		int64_t L_189 = (int64_t)(L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_186, L_189));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190 = ___state1;
		uint64_t L_191 = V_4;
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_191);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_192 = ___state1;
		uint64_t L_193 = V_5;
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_193);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_194 = ___state1;
		uint64_t L_195 = V_6;
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_195);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_196 = ___state1;
		uint64_t L_197 = V_7;
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_197);
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
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher__ctor_mC26535F6FADF9C30F8491CEAC5A45B19EB24CE8E (Threefish512Cipher_tC42033E65F770696004AF3BA13B6225F29E56A35* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t1, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___kw0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___t1;
		ThreefishCipher__ctor_m0627ED9FD0C928295DBA76FA92B97EB79853BBD8(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::EncryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher_EncryptBlock_m433566865D4D18B25D395825B56362BA364CD545 (Threefish512Cipher_tC42033E65F770696004AF3BA13B6225F29E56A35* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___block0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___outWords1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD9_10;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)17))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_EncryptBlock_m433566865D4D18B25D395825B56362BA364CD545_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_EncryptBlock_m433566865D4D18B25D395825B56362BA364CD545_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___block0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___block0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___block0;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___block0;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___block0;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___block0;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___block0;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___block0;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		uint64_t L_32 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = 0;
		int64_t L_35 = (int64_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_32, L_35));
		uint64_t L_36 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = 1;
		int64_t L_39 = (int64_t)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, L_39));
		uint64_t L_40 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = V_0;
		NullCheck(L_41);
		int32_t L_42 = 2;
		int64_t L_43 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, L_43));
		uint64_t L_44 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = 3;
		int64_t L_47 = (int64_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_44, L_47));
		uint64_t L_48 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = 4;
		int64_t L_51 = (int64_t)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, L_51));
		uint64_t L_52 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = 5;
		int64_t L_55 = (int64_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57 = 0;
		int64_t L_58 = (int64_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(L_55, L_58))));
		uint64_t L_59 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_60 = V_0;
		NullCheck(L_60);
		int32_t L_61 = 6;
		int64_t L_62 = (int64_t)(L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = 1;
		int64_t L_65 = (int64_t)(L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_59, ((int64_t)il2cpp_codegen_add(L_62, L_65))));
		uint64_t L_66 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68 = 7;
		int64_t L_69 = (int64_t)(L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, L_69));
		V_12 = 1;
		goto IL_03ef;
	}

IL_00ab:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_2;
		int32_t L_71 = V_12;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_13 = L_73;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_3;
		int32_t L_75 = V_12;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_14 = L_77;
		uint64_t L_78 = V_5;
		uint64_t L_79 = V_4;
		uint64_t L_80 = V_5;
		int64_t L_81 = ((int64_t)il2cpp_codegen_add((int64_t)L_79, (int64_t)L_80));
		V_4 = L_81;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		uint64_t L_82;
		L_82 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_78, ((int32_t)46), L_81, NULL);
		V_5 = L_82;
		uint64_t L_83 = V_7;
		uint64_t L_84 = V_6;
		uint64_t L_85 = V_7;
		int64_t L_86 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, (int64_t)L_85));
		V_6 = L_86;
		uint64_t L_87;
		L_87 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_83, ((int32_t)36), L_86, NULL);
		V_7 = L_87;
		uint64_t L_88 = V_9;
		uint64_t L_89 = V_8;
		uint64_t L_90 = V_9;
		int64_t L_91 = ((int64_t)il2cpp_codegen_add((int64_t)L_89, (int64_t)L_90));
		V_8 = L_91;
		uint64_t L_92;
		L_92 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_88, ((int32_t)19), L_91, NULL);
		V_9 = L_92;
		uint64_t L_93 = V_11;
		uint64_t L_94 = V_10;
		uint64_t L_95 = V_11;
		int64_t L_96 = ((int64_t)il2cpp_codegen_add((int64_t)L_94, (int64_t)L_95));
		V_10 = L_96;
		uint64_t L_97;
		L_97 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_93, ((int32_t)37), L_96, NULL);
		V_11 = L_97;
		uint64_t L_98 = V_5;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		int64_t L_101 = ((int64_t)il2cpp_codegen_add((int64_t)L_99, (int64_t)L_100));
		V_6 = L_101;
		uint64_t L_102;
		L_102 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_98, ((int32_t)33), L_101, NULL);
		V_5 = L_102;
		uint64_t L_103 = V_11;
		uint64_t L_104 = V_8;
		uint64_t L_105 = V_11;
		int64_t L_106 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, (int64_t)L_105));
		V_8 = L_106;
		uint64_t L_107;
		L_107 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_103, ((int32_t)27), L_106, NULL);
		V_11 = L_107;
		uint64_t L_108 = V_9;
		uint64_t L_109 = V_10;
		uint64_t L_110 = V_9;
		int64_t L_111 = ((int64_t)il2cpp_codegen_add((int64_t)L_109, (int64_t)L_110));
		V_10 = L_111;
		uint64_t L_112;
		L_112 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_108, ((int32_t)14), L_111, NULL);
		V_9 = L_112;
		uint64_t L_113 = V_7;
		uint64_t L_114 = V_4;
		uint64_t L_115 = V_7;
		int64_t L_116 = ((int64_t)il2cpp_codegen_add((int64_t)L_114, (int64_t)L_115));
		V_4 = L_116;
		uint64_t L_117;
		L_117 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_113, ((int32_t)42), L_116, NULL);
		V_7 = L_117;
		uint64_t L_118 = V_5;
		uint64_t L_119 = V_8;
		uint64_t L_120 = V_5;
		int64_t L_121 = ((int64_t)il2cpp_codegen_add((int64_t)L_119, (int64_t)L_120));
		V_8 = L_121;
		uint64_t L_122;
		L_122 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_118, ((int32_t)17), L_121, NULL);
		V_5 = L_122;
		uint64_t L_123 = V_7;
		uint64_t L_124 = V_10;
		uint64_t L_125 = V_7;
		int64_t L_126 = ((int64_t)il2cpp_codegen_add((int64_t)L_124, (int64_t)L_125));
		V_10 = L_126;
		uint64_t L_127;
		L_127 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_123, ((int32_t)49), L_126, NULL);
		V_7 = L_127;
		uint64_t L_128 = V_9;
		uint64_t L_129 = V_4;
		uint64_t L_130 = V_9;
		int64_t L_131 = ((int64_t)il2cpp_codegen_add((int64_t)L_129, (int64_t)L_130));
		V_4 = L_131;
		uint64_t L_132;
		L_132 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_128, ((int32_t)36), L_131, NULL);
		V_9 = L_132;
		uint64_t L_133 = V_11;
		uint64_t L_134 = V_6;
		uint64_t L_135 = V_11;
		int64_t L_136 = ((int64_t)il2cpp_codegen_add((int64_t)L_134, (int64_t)L_135));
		V_6 = L_136;
		uint64_t L_137;
		L_137 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_133, ((int32_t)39), L_136, NULL);
		V_11 = L_137;
		uint64_t L_138 = V_5;
		uint64_t L_139 = V_10;
		uint64_t L_140 = V_5;
		int64_t L_141 = ((int64_t)il2cpp_codegen_add((int64_t)L_139, (int64_t)L_140));
		V_10 = L_141;
		uint64_t L_142;
		L_142 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_138, ((int32_t)44), L_141, NULL);
		V_5 = L_142;
		uint64_t L_143 = V_11;
		uint64_t L_144 = V_4;
		uint64_t L_145 = V_11;
		int64_t L_146 = ((int64_t)il2cpp_codegen_add((int64_t)L_144, (int64_t)L_145));
		V_4 = L_146;
		uint64_t L_147;
		L_147 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_143, ((int32_t)9), L_146, NULL);
		V_11 = L_147;
		uint64_t L_148 = V_9;
		uint64_t L_149 = V_6;
		uint64_t L_150 = V_9;
		int64_t L_151 = ((int64_t)il2cpp_codegen_add((int64_t)L_149, (int64_t)L_150));
		V_6 = L_151;
		uint64_t L_152;
		L_152 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_148, ((int32_t)54), L_151, NULL);
		V_9 = L_152;
		uint64_t L_153 = V_7;
		uint64_t L_154 = V_8;
		uint64_t L_155 = V_7;
		int64_t L_156 = ((int64_t)il2cpp_codegen_add((int64_t)L_154, (int64_t)L_155));
		V_8 = L_156;
		uint64_t L_157;
		L_157 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_153, ((int32_t)56), L_156, NULL);
		V_7 = L_157;
		uint64_t L_158 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_159 = V_0;
		int32_t L_160 = V_13;
		NullCheck(L_159);
		int32_t L_161 = L_160;
		int64_t L_162 = (int64_t)(L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_158, L_162));
		uint64_t L_163 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_164 = V_0;
		int32_t L_165 = V_13;
		NullCheck(L_164);
		int32_t L_166 = ((int32_t)il2cpp_codegen_add(L_165, 1));
		int64_t L_167 = (int64_t)(L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_163, L_167));
		uint64_t L_168 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_169 = V_0;
		int32_t L_170 = V_13;
		NullCheck(L_169);
		int32_t L_171 = ((int32_t)il2cpp_codegen_add(L_170, 2));
		int64_t L_172 = (int64_t)(L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_168, L_172));
		uint64_t L_173 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_174 = V_0;
		int32_t L_175 = V_13;
		NullCheck(L_174);
		int32_t L_176 = ((int32_t)il2cpp_codegen_add(L_175, 3));
		int64_t L_177 = (int64_t)(L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, L_177));
		uint64_t L_178 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_179 = V_0;
		int32_t L_180 = V_13;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		int64_t L_182 = (int64_t)(L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_178, L_182));
		uint64_t L_183 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_184 = V_0;
		int32_t L_185 = V_13;
		NullCheck(L_184);
		int32_t L_186 = ((int32_t)il2cpp_codegen_add(L_185, 5));
		int64_t L_187 = (int64_t)(L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_188 = V_1;
		int32_t L_189 = V_14;
		NullCheck(L_188);
		int32_t L_190 = L_189;
		int64_t L_191 = (int64_t)(L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_183, ((int64_t)il2cpp_codegen_add(L_187, L_191))));
		uint64_t L_192 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_193 = V_0;
		int32_t L_194 = V_13;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)il2cpp_codegen_add(L_194, 6));
		int64_t L_196 = (int64_t)(L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_197 = V_1;
		int32_t L_198 = V_14;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(L_198, 1));
		int64_t L_200 = (int64_t)(L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_192, ((int64_t)il2cpp_codegen_add(L_196, L_200))));
		uint64_t L_201 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_202 = V_0;
		int32_t L_203 = V_13;
		NullCheck(L_202);
		int32_t L_204 = ((int32_t)il2cpp_codegen_add(L_203, 7));
		int64_t L_205 = (int64_t)(L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		int32_t L_206 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_201, ((int64_t)il2cpp_codegen_add(L_205, ((int64_t)(uint64_t)((uint32_t)L_206))))));
		uint64_t L_207 = V_5;
		uint64_t L_208 = V_4;
		uint64_t L_209 = V_5;
		int64_t L_210 = ((int64_t)il2cpp_codegen_add((int64_t)L_208, (int64_t)L_209));
		V_4 = L_210;
		uint64_t L_211;
		L_211 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_207, ((int32_t)39), L_210, NULL);
		V_5 = L_211;
		uint64_t L_212 = V_7;
		uint64_t L_213 = V_6;
		uint64_t L_214 = V_7;
		int64_t L_215 = ((int64_t)il2cpp_codegen_add((int64_t)L_213, (int64_t)L_214));
		V_6 = L_215;
		uint64_t L_216;
		L_216 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_212, ((int32_t)30), L_215, NULL);
		V_7 = L_216;
		uint64_t L_217 = V_9;
		uint64_t L_218 = V_8;
		uint64_t L_219 = V_9;
		int64_t L_220 = ((int64_t)il2cpp_codegen_add((int64_t)L_218, (int64_t)L_219));
		V_8 = L_220;
		uint64_t L_221;
		L_221 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_217, ((int32_t)34), L_220, NULL);
		V_9 = L_221;
		uint64_t L_222 = V_11;
		uint64_t L_223 = V_10;
		uint64_t L_224 = V_11;
		int64_t L_225 = ((int64_t)il2cpp_codegen_add((int64_t)L_223, (int64_t)L_224));
		V_10 = L_225;
		uint64_t L_226;
		L_226 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_222, ((int32_t)24), L_225, NULL);
		V_11 = L_226;
		uint64_t L_227 = V_5;
		uint64_t L_228 = V_6;
		uint64_t L_229 = V_5;
		int64_t L_230 = ((int64_t)il2cpp_codegen_add((int64_t)L_228, (int64_t)L_229));
		V_6 = L_230;
		uint64_t L_231;
		L_231 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_227, ((int32_t)13), L_230, NULL);
		V_5 = L_231;
		uint64_t L_232 = V_11;
		uint64_t L_233 = V_8;
		uint64_t L_234 = V_11;
		int64_t L_235 = ((int64_t)il2cpp_codegen_add((int64_t)L_233, (int64_t)L_234));
		V_8 = L_235;
		uint64_t L_236;
		L_236 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_232, ((int32_t)50), L_235, NULL);
		V_11 = L_236;
		uint64_t L_237 = V_9;
		uint64_t L_238 = V_10;
		uint64_t L_239 = V_9;
		int64_t L_240 = ((int64_t)il2cpp_codegen_add((int64_t)L_238, (int64_t)L_239));
		V_10 = L_240;
		uint64_t L_241;
		L_241 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_237, ((int32_t)10), L_240, NULL);
		V_9 = L_241;
		uint64_t L_242 = V_7;
		uint64_t L_243 = V_4;
		uint64_t L_244 = V_7;
		int64_t L_245 = ((int64_t)il2cpp_codegen_add((int64_t)L_243, (int64_t)L_244));
		V_4 = L_245;
		uint64_t L_246;
		L_246 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_242, ((int32_t)17), L_245, NULL);
		V_7 = L_246;
		uint64_t L_247 = V_5;
		uint64_t L_248 = V_8;
		uint64_t L_249 = V_5;
		int64_t L_250 = ((int64_t)il2cpp_codegen_add((int64_t)L_248, (int64_t)L_249));
		V_8 = L_250;
		uint64_t L_251;
		L_251 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_247, ((int32_t)25), L_250, NULL);
		V_5 = L_251;
		uint64_t L_252 = V_7;
		uint64_t L_253 = V_10;
		uint64_t L_254 = V_7;
		int64_t L_255 = ((int64_t)il2cpp_codegen_add((int64_t)L_253, (int64_t)L_254));
		V_10 = L_255;
		uint64_t L_256;
		L_256 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_252, ((int32_t)29), L_255, NULL);
		V_7 = L_256;
		uint64_t L_257 = V_9;
		uint64_t L_258 = V_4;
		uint64_t L_259 = V_9;
		int64_t L_260 = ((int64_t)il2cpp_codegen_add((int64_t)L_258, (int64_t)L_259));
		V_4 = L_260;
		uint64_t L_261;
		L_261 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_257, ((int32_t)39), L_260, NULL);
		V_9 = L_261;
		uint64_t L_262 = V_11;
		uint64_t L_263 = V_6;
		uint64_t L_264 = V_11;
		int64_t L_265 = ((int64_t)il2cpp_codegen_add((int64_t)L_263, (int64_t)L_264));
		V_6 = L_265;
		uint64_t L_266;
		L_266 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_262, ((int32_t)43), L_265, NULL);
		V_11 = L_266;
		uint64_t L_267 = V_5;
		uint64_t L_268 = V_10;
		uint64_t L_269 = V_5;
		int64_t L_270 = ((int64_t)il2cpp_codegen_add((int64_t)L_268, (int64_t)L_269));
		V_10 = L_270;
		uint64_t L_271;
		L_271 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_267, 8, L_270, NULL);
		V_5 = L_271;
		uint64_t L_272 = V_11;
		uint64_t L_273 = V_4;
		uint64_t L_274 = V_11;
		int64_t L_275 = ((int64_t)il2cpp_codegen_add((int64_t)L_273, (int64_t)L_274));
		V_4 = L_275;
		uint64_t L_276;
		L_276 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_272, ((int32_t)35), L_275, NULL);
		V_11 = L_276;
		uint64_t L_277 = V_9;
		uint64_t L_278 = V_6;
		uint64_t L_279 = V_9;
		int64_t L_280 = ((int64_t)il2cpp_codegen_add((int64_t)L_278, (int64_t)L_279));
		V_6 = L_280;
		uint64_t L_281;
		L_281 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_277, ((int32_t)56), L_280, NULL);
		V_9 = L_281;
		uint64_t L_282 = V_7;
		uint64_t L_283 = V_8;
		uint64_t L_284 = V_7;
		int64_t L_285 = ((int64_t)il2cpp_codegen_add((int64_t)L_283, (int64_t)L_284));
		V_8 = L_285;
		uint64_t L_286;
		L_286 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_282, ((int32_t)22), L_285, NULL);
		V_7 = L_286;
		uint64_t L_287 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_288 = V_0;
		int32_t L_289 = V_13;
		NullCheck(L_288);
		int32_t L_290 = ((int32_t)il2cpp_codegen_add(L_289, 1));
		int64_t L_291 = (int64_t)(L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_287, L_291));
		uint64_t L_292 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_293 = V_0;
		int32_t L_294 = V_13;
		NullCheck(L_293);
		int32_t L_295 = ((int32_t)il2cpp_codegen_add(L_294, 2));
		int64_t L_296 = (int64_t)(L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_292, L_296));
		uint64_t L_297 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_298 = V_0;
		int32_t L_299 = V_13;
		NullCheck(L_298);
		int32_t L_300 = ((int32_t)il2cpp_codegen_add(L_299, 3));
		int64_t L_301 = (int64_t)(L_298)->GetAt(static_cast<il2cpp_array_size_t>(L_300));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_297, L_301));
		uint64_t L_302 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_303 = V_0;
		int32_t L_304 = V_13;
		NullCheck(L_303);
		int32_t L_305 = ((int32_t)il2cpp_codegen_add(L_304, 4));
		int64_t L_306 = (int64_t)(L_303)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_302, L_306));
		uint64_t L_307 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_308 = V_0;
		int32_t L_309 = V_13;
		NullCheck(L_308);
		int32_t L_310 = ((int32_t)il2cpp_codegen_add(L_309, 5));
		int64_t L_311 = (int64_t)(L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_307, L_311));
		uint64_t L_312 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_313 = V_0;
		int32_t L_314 = V_13;
		NullCheck(L_313);
		int32_t L_315 = ((int32_t)il2cpp_codegen_add(L_314, 6));
		int64_t L_316 = (int64_t)(L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_317 = V_1;
		int32_t L_318 = V_14;
		NullCheck(L_317);
		int32_t L_319 = ((int32_t)il2cpp_codegen_add(L_318, 1));
		int64_t L_320 = (int64_t)(L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_319));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_312, ((int64_t)il2cpp_codegen_add(L_316, L_320))));
		uint64_t L_321 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_322 = V_0;
		int32_t L_323 = V_13;
		NullCheck(L_322);
		int32_t L_324 = ((int32_t)il2cpp_codegen_add(L_323, 7));
		int64_t L_325 = (int64_t)(L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_326 = V_1;
		int32_t L_327 = V_14;
		NullCheck(L_326);
		int32_t L_328 = ((int32_t)il2cpp_codegen_add(L_327, 2));
		int64_t L_329 = (int64_t)(L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_321, ((int64_t)il2cpp_codegen_add(L_325, L_329))));
		uint64_t L_330 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_331 = V_0;
		int32_t L_332 = V_13;
		NullCheck(L_331);
		int32_t L_333 = ((int32_t)il2cpp_codegen_add(L_332, 8));
		int64_t L_334 = (int64_t)(L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		int32_t L_335 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_330, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_334, ((int64_t)(uint64_t)((uint32_t)L_335)))), ((int64_t)1)))));
		int32_t L_336 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_336, 2));
	}

IL_03ef:
	{
		int32_t L_337 = V_12;
		if ((((int32_t)L_337) < ((int32_t)((int32_t)18))))
		{
			goto IL_00ab;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_338 = ___outWords1;
		uint64_t L_339 = V_4;
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_339);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = ___outWords1;
		uint64_t L_341 = V_5;
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_341);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_342 = ___outWords1;
		uint64_t L_343 = V_6;
		NullCheck(L_342);
		(L_342)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_343);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = ___outWords1;
		uint64_t L_345 = V_7;
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_345);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_346 = ___outWords1;
		uint64_t L_347 = V_8;
		NullCheck(L_346);
		(L_346)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_347);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_348 = ___outWords1;
		uint64_t L_349 = V_9;
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_349);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = ___outWords1;
		uint64_t L_351 = V_10;
		NullCheck(L_350);
		(L_350)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_351);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_352 = ___outWords1;
		uint64_t L_353 = V_11;
		NullCheck(L_352);
		(L_352)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_353);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::DecryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher_DecryptBlock_m156834AB1ED24358E1B2425753F0BDDFACDE9FFF (Threefish512Cipher_tC42033E65F770696004AF3BA13B6225F29E56A35* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___block0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD9_10;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)17))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_DecryptBlock_m156834AB1ED24358E1B2425753F0BDDFACDE9FFF_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_DecryptBlock_m156834AB1ED24358E1B2425753F0BDDFACDE9FFF_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___block0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___block0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___block0;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___block0;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___block0;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___block0;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___block0;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___block0;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		V_12 = ((int32_t)17);
		goto IL_03c8;
	}

IL_0064:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_2;
		int32_t L_33 = V_12;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_13 = L_35;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_3;
		int32_t L_37 = V_12;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_14 = L_39;
		uint64_t L_40 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = V_0;
		int32_t L_42 = V_13;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int64_t L_44 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_40, L_44));
		uint64_t L_45 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_46 = V_0;
		int32_t L_47 = V_13;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 2));
		int64_t L_49 = (int64_t)(L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_45, L_49));
		uint64_t L_50 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_51 = V_0;
		int32_t L_52 = V_13;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 3));
		int64_t L_54 = (int64_t)(L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_50, L_54));
		uint64_t L_55 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = V_0;
		int32_t L_57 = V_13;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 4));
		int64_t L_59 = (int64_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_55, L_59));
		uint64_t L_60 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_61 = V_0;
		int32_t L_62 = V_13;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 5));
		int64_t L_64 = (int64_t)(L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_60, L_64));
		uint64_t L_65 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = V_0;
		int32_t L_67 = V_13;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 6));
		int64_t L_69 = (int64_t)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = V_1;
		int32_t L_71 = V_14;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		int64_t L_73 = (int64_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_65, ((int64_t)il2cpp_codegen_add(L_69, L_73))));
		uint64_t L_74 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = V_0;
		int32_t L_76 = V_13;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 7));
		int64_t L_78 = (int64_t)(L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_79 = V_1;
		int32_t L_80 = V_14;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 2));
		int64_t L_82 = (int64_t)(L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_74, ((int64_t)il2cpp_codegen_add(L_78, L_82))));
		uint64_t L_83 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_84 = V_0;
		int32_t L_85 = V_13;
		NullCheck(L_84);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add(L_85, 8));
		int64_t L_87 = (int64_t)(L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		int32_t L_88 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_83, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_87, ((int64_t)(uint64_t)((uint32_t)L_88)))), ((int64_t)1)))));
		uint64_t L_89 = V_5;
		uint64_t L_90 = V_10;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		uint64_t L_91;
		L_91 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_89, 8, L_90, NULL);
		V_5 = L_91;
		uint64_t L_92 = V_10;
		uint64_t L_93 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_92, (int64_t)L_93));
		uint64_t L_94 = V_11;
		uint64_t L_95 = V_4;
		uint64_t L_96;
		L_96 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_94, ((int32_t)35), L_95, NULL);
		V_11 = L_96;
		uint64_t L_97 = V_4;
		uint64_t L_98 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_97, (int64_t)L_98));
		uint64_t L_99 = V_9;
		uint64_t L_100 = V_6;
		uint64_t L_101;
		L_101 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_99, ((int32_t)56), L_100, NULL);
		V_9 = L_101;
		uint64_t L_102 = V_6;
		uint64_t L_103 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_102, (int64_t)L_103));
		uint64_t L_104 = V_7;
		uint64_t L_105 = V_8;
		uint64_t L_106;
		L_106 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_104, ((int32_t)22), L_105, NULL);
		V_7 = L_106;
		uint64_t L_107 = V_8;
		uint64_t L_108 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_107, (int64_t)L_108));
		uint64_t L_109 = V_5;
		uint64_t L_110 = V_8;
		uint64_t L_111;
		L_111 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_109, ((int32_t)25), L_110, NULL);
		V_5 = L_111;
		uint64_t L_112 = V_8;
		uint64_t L_113 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_112, (int64_t)L_113));
		uint64_t L_114 = V_7;
		uint64_t L_115 = V_10;
		uint64_t L_116;
		L_116 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_114, ((int32_t)29), L_115, NULL);
		V_7 = L_116;
		uint64_t L_117 = V_10;
		uint64_t L_118 = V_7;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_117, (int64_t)L_118));
		uint64_t L_119 = V_9;
		uint64_t L_120 = V_4;
		uint64_t L_121;
		L_121 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_119, ((int32_t)39), L_120, NULL);
		V_9 = L_121;
		uint64_t L_122 = V_4;
		uint64_t L_123 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_122, (int64_t)L_123));
		uint64_t L_124 = V_11;
		uint64_t L_125 = V_6;
		uint64_t L_126;
		L_126 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_124, ((int32_t)43), L_125, NULL);
		V_11 = L_126;
		uint64_t L_127 = V_6;
		uint64_t L_128 = V_11;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_127, (int64_t)L_128));
		uint64_t L_129 = V_5;
		uint64_t L_130 = V_6;
		uint64_t L_131;
		L_131 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_129, ((int32_t)13), L_130, NULL);
		V_5 = L_131;
		uint64_t L_132 = V_6;
		uint64_t L_133 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_132, (int64_t)L_133));
		uint64_t L_134 = V_11;
		uint64_t L_135 = V_8;
		uint64_t L_136;
		L_136 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_134, ((int32_t)50), L_135, NULL);
		V_11 = L_136;
		uint64_t L_137 = V_8;
		uint64_t L_138 = V_11;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_137, (int64_t)L_138));
		uint64_t L_139 = V_9;
		uint64_t L_140 = V_10;
		uint64_t L_141;
		L_141 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_139, ((int32_t)10), L_140, NULL);
		V_9 = L_141;
		uint64_t L_142 = V_10;
		uint64_t L_143 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_142, (int64_t)L_143));
		uint64_t L_144 = V_7;
		uint64_t L_145 = V_4;
		uint64_t L_146;
		L_146 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_144, ((int32_t)17), L_145, NULL);
		V_7 = L_146;
		uint64_t L_147 = V_4;
		uint64_t L_148 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_147, (int64_t)L_148));
		uint64_t L_149 = V_5;
		uint64_t L_150 = V_4;
		uint64_t L_151;
		L_151 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_149, ((int32_t)39), L_150, NULL);
		V_5 = L_151;
		uint64_t L_152 = V_4;
		uint64_t L_153 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_152, (int64_t)L_153));
		uint64_t L_154 = V_7;
		uint64_t L_155 = V_6;
		uint64_t L_156;
		L_156 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_154, ((int32_t)30), L_155, NULL);
		V_7 = L_156;
		uint64_t L_157 = V_6;
		uint64_t L_158 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_157, (int64_t)L_158));
		uint64_t L_159 = V_9;
		uint64_t L_160 = V_8;
		uint64_t L_161;
		L_161 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_159, ((int32_t)34), L_160, NULL);
		V_9 = L_161;
		uint64_t L_162 = V_8;
		uint64_t L_163 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_162, (int64_t)L_163));
		uint64_t L_164 = V_11;
		uint64_t L_165 = V_10;
		uint64_t L_166;
		L_166 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_164, ((int32_t)24), L_165, NULL);
		V_11 = L_166;
		uint64_t L_167 = V_10;
		uint64_t L_168 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_167, (int64_t)L_168));
		uint64_t L_169 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_170 = V_0;
		int32_t L_171 = V_13;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		int64_t L_173 = (int64_t)(L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_169, L_173));
		uint64_t L_174 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_175 = V_0;
		int32_t L_176 = V_13;
		NullCheck(L_175);
		int32_t L_177 = ((int32_t)il2cpp_codegen_add(L_176, 1));
		int64_t L_178 = (int64_t)(L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_174, L_178));
		uint64_t L_179 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_180 = V_0;
		int32_t L_181 = V_13;
		NullCheck(L_180);
		int32_t L_182 = ((int32_t)il2cpp_codegen_add(L_181, 2));
		int64_t L_183 = (int64_t)(L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_179, L_183));
		uint64_t L_184 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_185 = V_0;
		int32_t L_186 = V_13;
		NullCheck(L_185);
		int32_t L_187 = ((int32_t)il2cpp_codegen_add(L_186, 3));
		int64_t L_188 = (int64_t)(L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_184, L_188));
		uint64_t L_189 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190 = V_0;
		int32_t L_191 = V_13;
		NullCheck(L_190);
		int32_t L_192 = ((int32_t)il2cpp_codegen_add(L_191, 4));
		int64_t L_193 = (int64_t)(L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_189, L_193));
		uint64_t L_194 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_195 = V_0;
		int32_t L_196 = V_13;
		NullCheck(L_195);
		int32_t L_197 = ((int32_t)il2cpp_codegen_add(L_196, 5));
		int64_t L_198 = (int64_t)(L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_199 = V_1;
		int32_t L_200 = V_14;
		NullCheck(L_199);
		int32_t L_201 = L_200;
		int64_t L_202 = (int64_t)(L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_194, ((int64_t)il2cpp_codegen_add(L_198, L_202))));
		uint64_t L_203 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_204 = V_0;
		int32_t L_205 = V_13;
		NullCheck(L_204);
		int32_t L_206 = ((int32_t)il2cpp_codegen_add(L_205, 6));
		int64_t L_207 = (int64_t)(L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_208 = V_1;
		int32_t L_209 = V_14;
		NullCheck(L_208);
		int32_t L_210 = ((int32_t)il2cpp_codegen_add(L_209, 1));
		int64_t L_211 = (int64_t)(L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_203, ((int64_t)il2cpp_codegen_add(L_207, L_211))));
		uint64_t L_212 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_213 = V_0;
		int32_t L_214 = V_13;
		NullCheck(L_213);
		int32_t L_215 = ((int32_t)il2cpp_codegen_add(L_214, 7));
		int64_t L_216 = (int64_t)(L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_212, ((int64_t)il2cpp_codegen_add(L_216, ((int64_t)(uint64_t)((uint32_t)L_217))))));
		uint64_t L_218 = V_5;
		uint64_t L_219 = V_10;
		uint64_t L_220;
		L_220 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_218, ((int32_t)44), L_219, NULL);
		V_5 = L_220;
		uint64_t L_221 = V_10;
		uint64_t L_222 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_221, (int64_t)L_222));
		uint64_t L_223 = V_11;
		uint64_t L_224 = V_4;
		uint64_t L_225;
		L_225 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_223, ((int32_t)9), L_224, NULL);
		V_11 = L_225;
		uint64_t L_226 = V_4;
		uint64_t L_227 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_226, (int64_t)L_227));
		uint64_t L_228 = V_9;
		uint64_t L_229 = V_6;
		uint64_t L_230;
		L_230 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_228, ((int32_t)54), L_229, NULL);
		V_9 = L_230;
		uint64_t L_231 = V_6;
		uint64_t L_232 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_231, (int64_t)L_232));
		uint64_t L_233 = V_7;
		uint64_t L_234 = V_8;
		uint64_t L_235;
		L_235 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_233, ((int32_t)56), L_234, NULL);
		V_7 = L_235;
		uint64_t L_236 = V_8;
		uint64_t L_237 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_236, (int64_t)L_237));
		uint64_t L_238 = V_5;
		uint64_t L_239 = V_8;
		uint64_t L_240;
		L_240 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_238, ((int32_t)17), L_239, NULL);
		V_5 = L_240;
		uint64_t L_241 = V_8;
		uint64_t L_242 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_241, (int64_t)L_242));
		uint64_t L_243 = V_7;
		uint64_t L_244 = V_10;
		uint64_t L_245;
		L_245 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_243, ((int32_t)49), L_244, NULL);
		V_7 = L_245;
		uint64_t L_246 = V_10;
		uint64_t L_247 = V_7;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_246, (int64_t)L_247));
		uint64_t L_248 = V_9;
		uint64_t L_249 = V_4;
		uint64_t L_250;
		L_250 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_248, ((int32_t)36), L_249, NULL);
		V_9 = L_250;
		uint64_t L_251 = V_4;
		uint64_t L_252 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_251, (int64_t)L_252));
		uint64_t L_253 = V_11;
		uint64_t L_254 = V_6;
		uint64_t L_255;
		L_255 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_253, ((int32_t)39), L_254, NULL);
		V_11 = L_255;
		uint64_t L_256 = V_6;
		uint64_t L_257 = V_11;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_256, (int64_t)L_257));
		uint64_t L_258 = V_5;
		uint64_t L_259 = V_6;
		uint64_t L_260;
		L_260 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_258, ((int32_t)33), L_259, NULL);
		V_5 = L_260;
		uint64_t L_261 = V_6;
		uint64_t L_262 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_261, (int64_t)L_262));
		uint64_t L_263 = V_11;
		uint64_t L_264 = V_8;
		uint64_t L_265;
		L_265 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_263, ((int32_t)27), L_264, NULL);
		V_11 = L_265;
		uint64_t L_266 = V_8;
		uint64_t L_267 = V_11;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_266, (int64_t)L_267));
		uint64_t L_268 = V_9;
		uint64_t L_269 = V_10;
		uint64_t L_270;
		L_270 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_268, ((int32_t)14), L_269, NULL);
		V_9 = L_270;
		uint64_t L_271 = V_10;
		uint64_t L_272 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_271, (int64_t)L_272));
		uint64_t L_273 = V_7;
		uint64_t L_274 = V_4;
		uint64_t L_275;
		L_275 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_273, ((int32_t)42), L_274, NULL);
		V_7 = L_275;
		uint64_t L_276 = V_4;
		uint64_t L_277 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_276, (int64_t)L_277));
		uint64_t L_278 = V_5;
		uint64_t L_279 = V_4;
		uint64_t L_280;
		L_280 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_278, ((int32_t)46), L_279, NULL);
		V_5 = L_280;
		uint64_t L_281 = V_4;
		uint64_t L_282 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_281, (int64_t)L_282));
		uint64_t L_283 = V_7;
		uint64_t L_284 = V_6;
		uint64_t L_285;
		L_285 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_283, ((int32_t)36), L_284, NULL);
		V_7 = L_285;
		uint64_t L_286 = V_6;
		uint64_t L_287 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_286, (int64_t)L_287));
		uint64_t L_288 = V_9;
		uint64_t L_289 = V_8;
		uint64_t L_290;
		L_290 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_288, ((int32_t)19), L_289, NULL);
		V_9 = L_290;
		uint64_t L_291 = V_8;
		uint64_t L_292 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_291, (int64_t)L_292));
		uint64_t L_293 = V_11;
		uint64_t L_294 = V_10;
		uint64_t L_295;
		L_295 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_293, ((int32_t)37), L_294, NULL);
		V_11 = L_295;
		uint64_t L_296 = V_10;
		uint64_t L_297 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_296, (int64_t)L_297));
		int32_t L_298 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_298, 2));
	}

IL_03c8:
	{
		int32_t L_299 = V_12;
		if ((((int32_t)L_299) >= ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_300 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_301 = V_0;
		NullCheck(L_301);
		int32_t L_302 = 0;
		int64_t L_303 = (int64_t)(L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_300, L_303));
		uint64_t L_304 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_305 = V_0;
		NullCheck(L_305);
		int32_t L_306 = 1;
		int64_t L_307 = (int64_t)(L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_306));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_304, L_307));
		uint64_t L_308 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_309 = V_0;
		NullCheck(L_309);
		int32_t L_310 = 2;
		int64_t L_311 = (int64_t)(L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_308, L_311));
		uint64_t L_312 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_313 = V_0;
		NullCheck(L_313);
		int32_t L_314 = 3;
		int64_t L_315 = (int64_t)(L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_312, L_315));
		uint64_t L_316 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_317 = V_0;
		NullCheck(L_317);
		int32_t L_318 = 4;
		int64_t L_319 = (int64_t)(L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_316, L_319));
		uint64_t L_320 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_321 = V_0;
		NullCheck(L_321);
		int32_t L_322 = 5;
		int64_t L_323 = (int64_t)(L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_324 = V_1;
		NullCheck(L_324);
		int32_t L_325 = 0;
		int64_t L_326 = (int64_t)(L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_320, ((int64_t)il2cpp_codegen_add(L_323, L_326))));
		uint64_t L_327 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_328 = V_0;
		NullCheck(L_328);
		int32_t L_329 = 6;
		int64_t L_330 = (int64_t)(L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_331 = V_1;
		NullCheck(L_331);
		int32_t L_332 = 1;
		int64_t L_333 = (int64_t)(L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_327, ((int64_t)il2cpp_codegen_add(L_330, L_333))));
		uint64_t L_334 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_335 = V_0;
		NullCheck(L_335);
		int32_t L_336 = 7;
		int64_t L_337 = (int64_t)(L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_334, L_337));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_338 = ___state1;
		uint64_t L_339 = V_4;
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_339);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = ___state1;
		uint64_t L_341 = V_5;
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_341);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_342 = ___state1;
		uint64_t L_343 = V_6;
		NullCheck(L_342);
		(L_342)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_343);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = ___state1;
		uint64_t L_345 = V_7;
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_345);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_346 = ___state1;
		uint64_t L_347 = V_8;
		NullCheck(L_346);
		(L_346)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_347);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_348 = ___state1;
		uint64_t L_349 = V_9;
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_349);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = ___state1;
		uint64_t L_351 = V_10;
		NullCheck(L_350);
		(L_350)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_351);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_352 = ___state1;
		uint64_t L_353 = V_11;
		NullCheck(L_352);
		(L_352)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_353);
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
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher__ctor_mB5BA1CC98F6BF4382DF61D31CFBBFF16B2A6015F (Threefish1024Cipher_t09C03FC6D8744C65F6E6FA08785807CB8B5035DA* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t1, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___kw0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___t1;
		ThreefishCipher__ctor_m0627ED9FD0C928295DBA76FA92B97EB79853BBD8(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::EncryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher_EncryptBlock_mA27B0CEB83AFDCBE762B0F86FA8902C19A27EB93 (Threefish1024Cipher_t09C03FC6D8744C65F6E6FA08785807CB8B5035DA* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___block0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___outWords1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD17_11;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)33))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_EncryptBlock_mA27B0CEB83AFDCBE762B0F86FA8902C19A27EB93_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_EncryptBlock_mA27B0CEB83AFDCBE762B0F86FA8902C19A27EB93_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___block0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___block0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___block0;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___block0;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___block0;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___block0;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___block0;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___block0;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___block0;
		NullCheck(L_32);
		int32_t L_33 = 8;
		int64_t L_34 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_12 = L_34;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = ___block0;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)9);
		int64_t L_37 = (int64_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_13 = L_37;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___block0;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)10);
		int64_t L_40 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_14 = L_40;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = ___block0;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)11);
		int64_t L_43 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_15 = L_43;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___block0;
		NullCheck(L_44);
		int32_t L_45 = ((int32_t)12);
		int64_t L_46 = (int64_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_16 = L_46;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = ___block0;
		NullCheck(L_47);
		int32_t L_48 = ((int32_t)13);
		int64_t L_49 = (int64_t)(L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_17 = L_49;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_50 = ___block0;
		NullCheck(L_50);
		int32_t L_51 = ((int32_t)14);
		int64_t L_52 = (int64_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_18 = L_52;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = ___block0;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)15);
		int64_t L_55 = (int64_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_19 = L_55;
		uint64_t L_56 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = 0;
		int64_t L_59 = (int64_t)(L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, L_59));
		uint64_t L_60 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = 1;
		int64_t L_63 = (int64_t)(L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, L_63));
		uint64_t L_64 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = V_0;
		NullCheck(L_65);
		int32_t L_66 = 2;
		int64_t L_67 = (int64_t)(L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, L_67));
		uint64_t L_68 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = 3;
		int64_t L_71 = (int64_t)(L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, L_71));
		uint64_t L_72 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = 4;
		int64_t L_75 = (int64_t)(L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, L_75));
		uint64_t L_76 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_77 = V_0;
		NullCheck(L_77);
		int32_t L_78 = 5;
		int64_t L_79 = (int64_t)(L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, L_79));
		uint64_t L_80 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = 6;
		int64_t L_83 = (int64_t)(L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, L_83));
		uint64_t L_84 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_85 = V_0;
		NullCheck(L_85);
		int32_t L_86 = 7;
		int64_t L_87 = (int64_t)(L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, L_87));
		uint64_t L_88 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_89 = V_0;
		NullCheck(L_89);
		int32_t L_90 = 8;
		int64_t L_91 = (int64_t)(L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, L_91));
		uint64_t L_92 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_93 = V_0;
		NullCheck(L_93);
		int32_t L_94 = ((int32_t)9);
		int64_t L_95 = (int64_t)(L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, L_95));
		uint64_t L_96 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_97 = V_0;
		NullCheck(L_97);
		int32_t L_98 = ((int32_t)10);
		int64_t L_99 = (int64_t)(L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_99));
		uint64_t L_100 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_101 = V_0;
		NullCheck(L_101);
		int32_t L_102 = ((int32_t)11);
		int64_t L_103 = (int64_t)(L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_100, L_103));
		uint64_t L_104 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = V_0;
		NullCheck(L_105);
		int32_t L_106 = ((int32_t)12);
		int64_t L_107 = (int64_t)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, L_107));
		uint64_t L_108 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_109 = V_0;
		NullCheck(L_109);
		int32_t L_110 = ((int32_t)13);
		int64_t L_111 = (int64_t)(L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_112 = V_1;
		NullCheck(L_112);
		int32_t L_113 = 0;
		int64_t L_114 = (int64_t)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_108, ((int64_t)il2cpp_codegen_add(L_111, L_114))));
		uint64_t L_115 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116 = V_0;
		NullCheck(L_116);
		int32_t L_117 = ((int32_t)14);
		int64_t L_118 = (int64_t)(L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_119 = V_1;
		NullCheck(L_119);
		int32_t L_120 = 1;
		int64_t L_121 = (int64_t)(L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, ((int64_t)il2cpp_codegen_add(L_118, L_121))));
		uint64_t L_122 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124 = ((int32_t)15);
		int64_t L_125 = (int64_t)(L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_122, L_125));
		V_20 = 1;
		goto IL_0780;
	}

IL_0121:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = V_2;
		int32_t L_127 = V_20;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_21 = L_129;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = V_3;
		int32_t L_131 = V_20;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		int32_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		V_22 = L_133;
		uint64_t L_134 = V_5;
		uint64_t L_135 = V_4;
		uint64_t L_136 = V_5;
		int64_t L_137 = ((int64_t)il2cpp_codegen_add((int64_t)L_135, (int64_t)L_136));
		V_4 = L_137;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		uint64_t L_138;
		L_138 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_134, ((int32_t)24), L_137, NULL);
		V_5 = L_138;
		uint64_t L_139 = V_7;
		uint64_t L_140 = V_6;
		uint64_t L_141 = V_7;
		int64_t L_142 = ((int64_t)il2cpp_codegen_add((int64_t)L_140, (int64_t)L_141));
		V_6 = L_142;
		uint64_t L_143;
		L_143 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_139, ((int32_t)13), L_142, NULL);
		V_7 = L_143;
		uint64_t L_144 = V_9;
		uint64_t L_145 = V_8;
		uint64_t L_146 = V_9;
		int64_t L_147 = ((int64_t)il2cpp_codegen_add((int64_t)L_145, (int64_t)L_146));
		V_8 = L_147;
		uint64_t L_148;
		L_148 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_144, 8, L_147, NULL);
		V_9 = L_148;
		uint64_t L_149 = V_11;
		uint64_t L_150 = V_10;
		uint64_t L_151 = V_11;
		int64_t L_152 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, (int64_t)L_151));
		V_10 = L_152;
		uint64_t L_153;
		L_153 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_149, ((int32_t)47), L_152, NULL);
		V_11 = L_153;
		uint64_t L_154 = V_13;
		uint64_t L_155 = V_12;
		uint64_t L_156 = V_13;
		int64_t L_157 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, (int64_t)L_156));
		V_12 = L_157;
		uint64_t L_158;
		L_158 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_154, 8, L_157, NULL);
		V_13 = L_158;
		uint64_t L_159 = V_15;
		uint64_t L_160 = V_14;
		uint64_t L_161 = V_15;
		int64_t L_162 = ((int64_t)il2cpp_codegen_add((int64_t)L_160, (int64_t)L_161));
		V_14 = L_162;
		uint64_t L_163;
		L_163 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_159, ((int32_t)17), L_162, NULL);
		V_15 = L_163;
		uint64_t L_164 = V_17;
		uint64_t L_165 = V_16;
		uint64_t L_166 = V_17;
		int64_t L_167 = ((int64_t)il2cpp_codegen_add((int64_t)L_165, (int64_t)L_166));
		V_16 = L_167;
		uint64_t L_168;
		L_168 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_164, ((int32_t)22), L_167, NULL);
		V_17 = L_168;
		uint64_t L_169 = V_19;
		uint64_t L_170 = V_18;
		uint64_t L_171 = V_19;
		int64_t L_172 = ((int64_t)il2cpp_codegen_add((int64_t)L_170, (int64_t)L_171));
		V_18 = L_172;
		uint64_t L_173;
		L_173 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_169, ((int32_t)37), L_172, NULL);
		V_19 = L_173;
		uint64_t L_174 = V_13;
		uint64_t L_175 = V_4;
		uint64_t L_176 = V_13;
		int64_t L_177 = ((int64_t)il2cpp_codegen_add((int64_t)L_175, (int64_t)L_176));
		V_4 = L_177;
		uint64_t L_178;
		L_178 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_174, ((int32_t)38), L_177, NULL);
		V_13 = L_178;
		uint64_t L_179 = V_17;
		uint64_t L_180 = V_6;
		uint64_t L_181 = V_17;
		int64_t L_182 = ((int64_t)il2cpp_codegen_add((int64_t)L_180, (int64_t)L_181));
		V_6 = L_182;
		uint64_t L_183;
		L_183 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_179, ((int32_t)19), L_182, NULL);
		V_17 = L_183;
		uint64_t L_184 = V_15;
		uint64_t L_185 = V_10;
		uint64_t L_186 = V_15;
		int64_t L_187 = ((int64_t)il2cpp_codegen_add((int64_t)L_185, (int64_t)L_186));
		V_10 = L_187;
		uint64_t L_188;
		L_188 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_184, ((int32_t)10), L_187, NULL);
		V_15 = L_188;
		uint64_t L_189 = V_19;
		uint64_t L_190 = V_8;
		uint64_t L_191 = V_19;
		int64_t L_192 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, (int64_t)L_191));
		V_8 = L_192;
		uint64_t L_193;
		L_193 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_189, ((int32_t)55), L_192, NULL);
		V_19 = L_193;
		uint64_t L_194 = V_11;
		uint64_t L_195 = V_14;
		uint64_t L_196 = V_11;
		int64_t L_197 = ((int64_t)il2cpp_codegen_add((int64_t)L_195, (int64_t)L_196));
		V_14 = L_197;
		uint64_t L_198;
		L_198 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_194, ((int32_t)49), L_197, NULL);
		V_11 = L_198;
		uint64_t L_199 = V_7;
		uint64_t L_200 = V_16;
		uint64_t L_201 = V_7;
		int64_t L_202 = ((int64_t)il2cpp_codegen_add((int64_t)L_200, (int64_t)L_201));
		V_16 = L_202;
		uint64_t L_203;
		L_203 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_199, ((int32_t)18), L_202, NULL);
		V_7 = L_203;
		uint64_t L_204 = V_9;
		uint64_t L_205 = V_18;
		uint64_t L_206 = V_9;
		int64_t L_207 = ((int64_t)il2cpp_codegen_add((int64_t)L_205, (int64_t)L_206));
		V_18 = L_207;
		uint64_t L_208;
		L_208 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_204, ((int32_t)23), L_207, NULL);
		V_9 = L_208;
		uint64_t L_209 = V_5;
		uint64_t L_210 = V_12;
		uint64_t L_211 = V_5;
		int64_t L_212 = ((int64_t)il2cpp_codegen_add((int64_t)L_210, (int64_t)L_211));
		V_12 = L_212;
		uint64_t L_213;
		L_213 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_209, ((int32_t)52), L_212, NULL);
		V_5 = L_213;
		uint64_t L_214 = V_11;
		uint64_t L_215 = V_4;
		uint64_t L_216 = V_11;
		int64_t L_217 = ((int64_t)il2cpp_codegen_add((int64_t)L_215, (int64_t)L_216));
		V_4 = L_217;
		uint64_t L_218;
		L_218 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_214, ((int32_t)33), L_217, NULL);
		V_11 = L_218;
		uint64_t L_219 = V_9;
		uint64_t L_220 = V_6;
		uint64_t L_221 = V_9;
		int64_t L_222 = ((int64_t)il2cpp_codegen_add((int64_t)L_220, (int64_t)L_221));
		V_6 = L_222;
		uint64_t L_223;
		L_223 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_219, 4, L_222, NULL);
		V_9 = L_223;
		uint64_t L_224 = V_7;
		uint64_t L_225 = V_8;
		uint64_t L_226 = V_7;
		int64_t L_227 = ((int64_t)il2cpp_codegen_add((int64_t)L_225, (int64_t)L_226));
		V_8 = L_227;
		uint64_t L_228;
		L_228 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_224, ((int32_t)51), L_227, NULL);
		V_7 = L_228;
		uint64_t L_229 = V_5;
		uint64_t L_230 = V_10;
		uint64_t L_231 = V_5;
		int64_t L_232 = ((int64_t)il2cpp_codegen_add((int64_t)L_230, (int64_t)L_231));
		V_10 = L_232;
		uint64_t L_233;
		L_233 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_229, ((int32_t)13), L_232, NULL);
		V_5 = L_233;
		uint64_t L_234 = V_19;
		uint64_t L_235 = V_16;
		uint64_t L_236 = V_19;
		int64_t L_237 = ((int64_t)il2cpp_codegen_add((int64_t)L_235, (int64_t)L_236));
		V_16 = L_237;
		uint64_t L_238;
		L_238 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_234, ((int32_t)34), L_237, NULL);
		V_19 = L_238;
		uint64_t L_239 = V_17;
		uint64_t L_240 = V_18;
		uint64_t L_241 = V_17;
		int64_t L_242 = ((int64_t)il2cpp_codegen_add((int64_t)L_240, (int64_t)L_241));
		V_18 = L_242;
		uint64_t L_243;
		L_243 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_239, ((int32_t)41), L_242, NULL);
		V_17 = L_243;
		uint64_t L_244 = V_15;
		uint64_t L_245 = V_12;
		uint64_t L_246 = V_15;
		int64_t L_247 = ((int64_t)il2cpp_codegen_add((int64_t)L_245, (int64_t)L_246));
		V_12 = L_247;
		uint64_t L_248;
		L_248 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_244, ((int32_t)59), L_247, NULL);
		V_15 = L_248;
		uint64_t L_249 = V_13;
		uint64_t L_250 = V_14;
		uint64_t L_251 = V_13;
		int64_t L_252 = ((int64_t)il2cpp_codegen_add((int64_t)L_250, (int64_t)L_251));
		V_14 = L_252;
		uint64_t L_253;
		L_253 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_249, ((int32_t)17), L_252, NULL);
		V_13 = L_253;
		uint64_t L_254 = V_19;
		uint64_t L_255 = V_4;
		uint64_t L_256 = V_19;
		int64_t L_257 = ((int64_t)il2cpp_codegen_add((int64_t)L_255, (int64_t)L_256));
		V_4 = L_257;
		uint64_t L_258;
		L_258 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_254, 5, L_257, NULL);
		V_19 = L_258;
		uint64_t L_259 = V_15;
		uint64_t L_260 = V_6;
		uint64_t L_261 = V_15;
		int64_t L_262 = ((int64_t)il2cpp_codegen_add((int64_t)L_260, (int64_t)L_261));
		V_6 = L_262;
		uint64_t L_263;
		L_263 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_259, ((int32_t)20), L_262, NULL);
		V_15 = L_263;
		uint64_t L_264 = V_17;
		uint64_t L_265 = V_10;
		uint64_t L_266 = V_17;
		int64_t L_267 = ((int64_t)il2cpp_codegen_add((int64_t)L_265, (int64_t)L_266));
		V_10 = L_267;
		uint64_t L_268;
		L_268 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_264, ((int32_t)48), L_267, NULL);
		V_17 = L_268;
		uint64_t L_269 = V_13;
		uint64_t L_270 = V_8;
		uint64_t L_271 = V_13;
		int64_t L_272 = ((int64_t)il2cpp_codegen_add((int64_t)L_270, (int64_t)L_271));
		V_8 = L_272;
		uint64_t L_273;
		L_273 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_269, ((int32_t)41), L_272, NULL);
		V_13 = L_273;
		uint64_t L_274 = V_5;
		uint64_t L_275 = V_18;
		uint64_t L_276 = V_5;
		int64_t L_277 = ((int64_t)il2cpp_codegen_add((int64_t)L_275, (int64_t)L_276));
		V_18 = L_277;
		uint64_t L_278;
		L_278 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_274, ((int32_t)47), L_277, NULL);
		V_5 = L_278;
		uint64_t L_279 = V_9;
		uint64_t L_280 = V_12;
		uint64_t L_281 = V_9;
		int64_t L_282 = ((int64_t)il2cpp_codegen_add((int64_t)L_280, (int64_t)L_281));
		V_12 = L_282;
		uint64_t L_283;
		L_283 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_279, ((int32_t)28), L_282, NULL);
		V_9 = L_283;
		uint64_t L_284 = V_7;
		uint64_t L_285 = V_14;
		uint64_t L_286 = V_7;
		int64_t L_287 = ((int64_t)il2cpp_codegen_add((int64_t)L_285, (int64_t)L_286));
		V_14 = L_287;
		uint64_t L_288;
		L_288 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_284, ((int32_t)16), L_287, NULL);
		V_7 = L_288;
		uint64_t L_289 = V_11;
		uint64_t L_290 = V_16;
		uint64_t L_291 = V_11;
		int64_t L_292 = ((int64_t)il2cpp_codegen_add((int64_t)L_290, (int64_t)L_291));
		V_16 = L_292;
		uint64_t L_293;
		L_293 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_289, ((int32_t)25), L_292, NULL);
		V_11 = L_293;
		uint64_t L_294 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_295 = V_0;
		int32_t L_296 = V_21;
		NullCheck(L_295);
		int32_t L_297 = L_296;
		int64_t L_298 = (int64_t)(L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_294, L_298));
		uint64_t L_299 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_300 = V_0;
		int32_t L_301 = V_21;
		NullCheck(L_300);
		int32_t L_302 = ((int32_t)il2cpp_codegen_add(L_301, 1));
		int64_t L_303 = (int64_t)(L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_299, L_303));
		uint64_t L_304 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_305 = V_0;
		int32_t L_306 = V_21;
		NullCheck(L_305);
		int32_t L_307 = ((int32_t)il2cpp_codegen_add(L_306, 2));
		int64_t L_308 = (int64_t)(L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_307));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_304, L_308));
		uint64_t L_309 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_310 = V_0;
		int32_t L_311 = V_21;
		NullCheck(L_310);
		int32_t L_312 = ((int32_t)il2cpp_codegen_add(L_311, 3));
		int64_t L_313 = (int64_t)(L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_309, L_313));
		uint64_t L_314 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_315 = V_0;
		int32_t L_316 = V_21;
		NullCheck(L_315);
		int32_t L_317 = ((int32_t)il2cpp_codegen_add(L_316, 4));
		int64_t L_318 = (int64_t)(L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_314, L_318));
		uint64_t L_319 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_320 = V_0;
		int32_t L_321 = V_21;
		NullCheck(L_320);
		int32_t L_322 = ((int32_t)il2cpp_codegen_add(L_321, 5));
		int64_t L_323 = (int64_t)(L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_319, L_323));
		uint64_t L_324 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_325 = V_0;
		int32_t L_326 = V_21;
		NullCheck(L_325);
		int32_t L_327 = ((int32_t)il2cpp_codegen_add(L_326, 6));
		int64_t L_328 = (int64_t)(L_325)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_324, L_328));
		uint64_t L_329 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_330 = V_0;
		int32_t L_331 = V_21;
		NullCheck(L_330);
		int32_t L_332 = ((int32_t)il2cpp_codegen_add(L_331, 7));
		int64_t L_333 = (int64_t)(L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_329, L_333));
		uint64_t L_334 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_335 = V_0;
		int32_t L_336 = V_21;
		NullCheck(L_335);
		int32_t L_337 = ((int32_t)il2cpp_codegen_add(L_336, 8));
		int64_t L_338 = (int64_t)(L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_334, L_338));
		uint64_t L_339 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = V_0;
		int32_t L_341 = V_21;
		NullCheck(L_340);
		int32_t L_342 = ((int32_t)il2cpp_codegen_add(L_341, ((int32_t)9)));
		int64_t L_343 = (int64_t)(L_340)->GetAt(static_cast<il2cpp_array_size_t>(L_342));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_339, L_343));
		uint64_t L_344 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_345 = V_0;
		int32_t L_346 = V_21;
		NullCheck(L_345);
		int32_t L_347 = ((int32_t)il2cpp_codegen_add(L_346, ((int32_t)10)));
		int64_t L_348 = (int64_t)(L_345)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_344, L_348));
		uint64_t L_349 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = V_0;
		int32_t L_351 = V_21;
		NullCheck(L_350);
		int32_t L_352 = ((int32_t)il2cpp_codegen_add(L_351, ((int32_t)11)));
		int64_t L_353 = (int64_t)(L_350)->GetAt(static_cast<il2cpp_array_size_t>(L_352));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_349, L_353));
		uint64_t L_354 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_355 = V_0;
		int32_t L_356 = V_21;
		NullCheck(L_355);
		int32_t L_357 = ((int32_t)il2cpp_codegen_add(L_356, ((int32_t)12)));
		int64_t L_358 = (int64_t)(L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_354, L_358));
		uint64_t L_359 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_360 = V_0;
		int32_t L_361 = V_21;
		NullCheck(L_360);
		int32_t L_362 = ((int32_t)il2cpp_codegen_add(L_361, ((int32_t)13)));
		int64_t L_363 = (int64_t)(L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_364 = V_1;
		int32_t L_365 = V_22;
		NullCheck(L_364);
		int32_t L_366 = L_365;
		int64_t L_367 = (int64_t)(L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_359, ((int64_t)il2cpp_codegen_add(L_363, L_367))));
		uint64_t L_368 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_369 = V_0;
		int32_t L_370 = V_21;
		NullCheck(L_369);
		int32_t L_371 = ((int32_t)il2cpp_codegen_add(L_370, ((int32_t)14)));
		int64_t L_372 = (int64_t)(L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_371));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_373 = V_1;
		int32_t L_374 = V_22;
		NullCheck(L_373);
		int32_t L_375 = ((int32_t)il2cpp_codegen_add(L_374, 1));
		int64_t L_376 = (int64_t)(L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_375));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_368, ((int64_t)il2cpp_codegen_add(L_372, L_376))));
		uint64_t L_377 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_378 = V_0;
		int32_t L_379 = V_21;
		NullCheck(L_378);
		int32_t L_380 = ((int32_t)il2cpp_codegen_add(L_379, ((int32_t)15)));
		int64_t L_381 = (int64_t)(L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_380));
		int32_t L_382 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_377, ((int64_t)il2cpp_codegen_add(L_381, ((int64_t)(uint64_t)((uint32_t)L_382))))));
		uint64_t L_383 = V_5;
		uint64_t L_384 = V_4;
		uint64_t L_385 = V_5;
		int64_t L_386 = ((int64_t)il2cpp_codegen_add((int64_t)L_384, (int64_t)L_385));
		V_4 = L_386;
		uint64_t L_387;
		L_387 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_383, ((int32_t)41), L_386, NULL);
		V_5 = L_387;
		uint64_t L_388 = V_7;
		uint64_t L_389 = V_6;
		uint64_t L_390 = V_7;
		int64_t L_391 = ((int64_t)il2cpp_codegen_add((int64_t)L_389, (int64_t)L_390));
		V_6 = L_391;
		uint64_t L_392;
		L_392 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_388, ((int32_t)9), L_391, NULL);
		V_7 = L_392;
		uint64_t L_393 = V_9;
		uint64_t L_394 = V_8;
		uint64_t L_395 = V_9;
		int64_t L_396 = ((int64_t)il2cpp_codegen_add((int64_t)L_394, (int64_t)L_395));
		V_8 = L_396;
		uint64_t L_397;
		L_397 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_393, ((int32_t)37), L_396, NULL);
		V_9 = L_397;
		uint64_t L_398 = V_11;
		uint64_t L_399 = V_10;
		uint64_t L_400 = V_11;
		int64_t L_401 = ((int64_t)il2cpp_codegen_add((int64_t)L_399, (int64_t)L_400));
		V_10 = L_401;
		uint64_t L_402;
		L_402 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_398, ((int32_t)31), L_401, NULL);
		V_11 = L_402;
		uint64_t L_403 = V_13;
		uint64_t L_404 = V_12;
		uint64_t L_405 = V_13;
		int64_t L_406 = ((int64_t)il2cpp_codegen_add((int64_t)L_404, (int64_t)L_405));
		V_12 = L_406;
		uint64_t L_407;
		L_407 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_403, ((int32_t)12), L_406, NULL);
		V_13 = L_407;
		uint64_t L_408 = V_15;
		uint64_t L_409 = V_14;
		uint64_t L_410 = V_15;
		int64_t L_411 = ((int64_t)il2cpp_codegen_add((int64_t)L_409, (int64_t)L_410));
		V_14 = L_411;
		uint64_t L_412;
		L_412 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_408, ((int32_t)47), L_411, NULL);
		V_15 = L_412;
		uint64_t L_413 = V_17;
		uint64_t L_414 = V_16;
		uint64_t L_415 = V_17;
		int64_t L_416 = ((int64_t)il2cpp_codegen_add((int64_t)L_414, (int64_t)L_415));
		V_16 = L_416;
		uint64_t L_417;
		L_417 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_413, ((int32_t)44), L_416, NULL);
		V_17 = L_417;
		uint64_t L_418 = V_19;
		uint64_t L_419 = V_18;
		uint64_t L_420 = V_19;
		int64_t L_421 = ((int64_t)il2cpp_codegen_add((int64_t)L_419, (int64_t)L_420));
		V_18 = L_421;
		uint64_t L_422;
		L_422 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_418, ((int32_t)30), L_421, NULL);
		V_19 = L_422;
		uint64_t L_423 = V_13;
		uint64_t L_424 = V_4;
		uint64_t L_425 = V_13;
		int64_t L_426 = ((int64_t)il2cpp_codegen_add((int64_t)L_424, (int64_t)L_425));
		V_4 = L_426;
		uint64_t L_427;
		L_427 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_423, ((int32_t)16), L_426, NULL);
		V_13 = L_427;
		uint64_t L_428 = V_17;
		uint64_t L_429 = V_6;
		uint64_t L_430 = V_17;
		int64_t L_431 = ((int64_t)il2cpp_codegen_add((int64_t)L_429, (int64_t)L_430));
		V_6 = L_431;
		uint64_t L_432;
		L_432 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_428, ((int32_t)34), L_431, NULL);
		V_17 = L_432;
		uint64_t L_433 = V_15;
		uint64_t L_434 = V_10;
		uint64_t L_435 = V_15;
		int64_t L_436 = ((int64_t)il2cpp_codegen_add((int64_t)L_434, (int64_t)L_435));
		V_10 = L_436;
		uint64_t L_437;
		L_437 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_433, ((int32_t)56), L_436, NULL);
		V_15 = L_437;
		uint64_t L_438 = V_19;
		uint64_t L_439 = V_8;
		uint64_t L_440 = V_19;
		int64_t L_441 = ((int64_t)il2cpp_codegen_add((int64_t)L_439, (int64_t)L_440));
		V_8 = L_441;
		uint64_t L_442;
		L_442 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_438, ((int32_t)51), L_441, NULL);
		V_19 = L_442;
		uint64_t L_443 = V_11;
		uint64_t L_444 = V_14;
		uint64_t L_445 = V_11;
		int64_t L_446 = ((int64_t)il2cpp_codegen_add((int64_t)L_444, (int64_t)L_445));
		V_14 = L_446;
		uint64_t L_447;
		L_447 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_443, 4, L_446, NULL);
		V_11 = L_447;
		uint64_t L_448 = V_7;
		uint64_t L_449 = V_16;
		uint64_t L_450 = V_7;
		int64_t L_451 = ((int64_t)il2cpp_codegen_add((int64_t)L_449, (int64_t)L_450));
		V_16 = L_451;
		uint64_t L_452;
		L_452 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_448, ((int32_t)53), L_451, NULL);
		V_7 = L_452;
		uint64_t L_453 = V_9;
		uint64_t L_454 = V_18;
		uint64_t L_455 = V_9;
		int64_t L_456 = ((int64_t)il2cpp_codegen_add((int64_t)L_454, (int64_t)L_455));
		V_18 = L_456;
		uint64_t L_457;
		L_457 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_453, ((int32_t)42), L_456, NULL);
		V_9 = L_457;
		uint64_t L_458 = V_5;
		uint64_t L_459 = V_12;
		uint64_t L_460 = V_5;
		int64_t L_461 = ((int64_t)il2cpp_codegen_add((int64_t)L_459, (int64_t)L_460));
		V_12 = L_461;
		uint64_t L_462;
		L_462 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_458, ((int32_t)41), L_461, NULL);
		V_5 = L_462;
		uint64_t L_463 = V_11;
		uint64_t L_464 = V_4;
		uint64_t L_465 = V_11;
		int64_t L_466 = ((int64_t)il2cpp_codegen_add((int64_t)L_464, (int64_t)L_465));
		V_4 = L_466;
		uint64_t L_467;
		L_467 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_463, ((int32_t)31), L_466, NULL);
		V_11 = L_467;
		uint64_t L_468 = V_9;
		uint64_t L_469 = V_6;
		uint64_t L_470 = V_9;
		int64_t L_471 = ((int64_t)il2cpp_codegen_add((int64_t)L_469, (int64_t)L_470));
		V_6 = L_471;
		uint64_t L_472;
		L_472 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_468, ((int32_t)44), L_471, NULL);
		V_9 = L_472;
		uint64_t L_473 = V_7;
		uint64_t L_474 = V_8;
		uint64_t L_475 = V_7;
		int64_t L_476 = ((int64_t)il2cpp_codegen_add((int64_t)L_474, (int64_t)L_475));
		V_8 = L_476;
		uint64_t L_477;
		L_477 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_473, ((int32_t)47), L_476, NULL);
		V_7 = L_477;
		uint64_t L_478 = V_5;
		uint64_t L_479 = V_10;
		uint64_t L_480 = V_5;
		int64_t L_481 = ((int64_t)il2cpp_codegen_add((int64_t)L_479, (int64_t)L_480));
		V_10 = L_481;
		uint64_t L_482;
		L_482 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_478, ((int32_t)46), L_481, NULL);
		V_5 = L_482;
		uint64_t L_483 = V_19;
		uint64_t L_484 = V_16;
		uint64_t L_485 = V_19;
		int64_t L_486 = ((int64_t)il2cpp_codegen_add((int64_t)L_484, (int64_t)L_485));
		V_16 = L_486;
		uint64_t L_487;
		L_487 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_483, ((int32_t)19), L_486, NULL);
		V_19 = L_487;
		uint64_t L_488 = V_17;
		uint64_t L_489 = V_18;
		uint64_t L_490 = V_17;
		int64_t L_491 = ((int64_t)il2cpp_codegen_add((int64_t)L_489, (int64_t)L_490));
		V_18 = L_491;
		uint64_t L_492;
		L_492 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_488, ((int32_t)42), L_491, NULL);
		V_17 = L_492;
		uint64_t L_493 = V_15;
		uint64_t L_494 = V_12;
		uint64_t L_495 = V_15;
		int64_t L_496 = ((int64_t)il2cpp_codegen_add((int64_t)L_494, (int64_t)L_495));
		V_12 = L_496;
		uint64_t L_497;
		L_497 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_493, ((int32_t)44), L_496, NULL);
		V_15 = L_497;
		uint64_t L_498 = V_13;
		uint64_t L_499 = V_14;
		uint64_t L_500 = V_13;
		int64_t L_501 = ((int64_t)il2cpp_codegen_add((int64_t)L_499, (int64_t)L_500));
		V_14 = L_501;
		uint64_t L_502;
		L_502 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_498, ((int32_t)25), L_501, NULL);
		V_13 = L_502;
		uint64_t L_503 = V_19;
		uint64_t L_504 = V_4;
		uint64_t L_505 = V_19;
		int64_t L_506 = ((int64_t)il2cpp_codegen_add((int64_t)L_504, (int64_t)L_505));
		V_4 = L_506;
		uint64_t L_507;
		L_507 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_503, ((int32_t)9), L_506, NULL);
		V_19 = L_507;
		uint64_t L_508 = V_15;
		uint64_t L_509 = V_6;
		uint64_t L_510 = V_15;
		int64_t L_511 = ((int64_t)il2cpp_codegen_add((int64_t)L_509, (int64_t)L_510));
		V_6 = L_511;
		uint64_t L_512;
		L_512 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_508, ((int32_t)48), L_511, NULL);
		V_15 = L_512;
		uint64_t L_513 = V_17;
		uint64_t L_514 = V_10;
		uint64_t L_515 = V_17;
		int64_t L_516 = ((int64_t)il2cpp_codegen_add((int64_t)L_514, (int64_t)L_515));
		V_10 = L_516;
		uint64_t L_517;
		L_517 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_513, ((int32_t)35), L_516, NULL);
		V_17 = L_517;
		uint64_t L_518 = V_13;
		uint64_t L_519 = V_8;
		uint64_t L_520 = V_13;
		int64_t L_521 = ((int64_t)il2cpp_codegen_add((int64_t)L_519, (int64_t)L_520));
		V_8 = L_521;
		uint64_t L_522;
		L_522 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_518, ((int32_t)52), L_521, NULL);
		V_13 = L_522;
		uint64_t L_523 = V_5;
		uint64_t L_524 = V_18;
		uint64_t L_525 = V_5;
		int64_t L_526 = ((int64_t)il2cpp_codegen_add((int64_t)L_524, (int64_t)L_525));
		V_18 = L_526;
		uint64_t L_527;
		L_527 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_523, ((int32_t)23), L_526, NULL);
		V_5 = L_527;
		uint64_t L_528 = V_9;
		uint64_t L_529 = V_12;
		uint64_t L_530 = V_9;
		int64_t L_531 = ((int64_t)il2cpp_codegen_add((int64_t)L_529, (int64_t)L_530));
		V_12 = L_531;
		uint64_t L_532;
		L_532 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_528, ((int32_t)31), L_531, NULL);
		V_9 = L_532;
		uint64_t L_533 = V_7;
		uint64_t L_534 = V_14;
		uint64_t L_535 = V_7;
		int64_t L_536 = ((int64_t)il2cpp_codegen_add((int64_t)L_534, (int64_t)L_535));
		V_14 = L_536;
		uint64_t L_537;
		L_537 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_533, ((int32_t)37), L_536, NULL);
		V_7 = L_537;
		uint64_t L_538 = V_11;
		uint64_t L_539 = V_16;
		uint64_t L_540 = V_11;
		int64_t L_541 = ((int64_t)il2cpp_codegen_add((int64_t)L_539, (int64_t)L_540));
		V_16 = L_541;
		uint64_t L_542;
		L_542 = ThreefishEngine_RotlXor_mA5958CD38D4A3840454C4E1A54AF96905F520CEA(L_538, ((int32_t)20), L_541, NULL);
		V_11 = L_542;
		uint64_t L_543 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_544 = V_0;
		int32_t L_545 = V_21;
		NullCheck(L_544);
		int32_t L_546 = ((int32_t)il2cpp_codegen_add(L_545, 1));
		int64_t L_547 = (int64_t)(L_544)->GetAt(static_cast<il2cpp_array_size_t>(L_546));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_543, L_547));
		uint64_t L_548 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_549 = V_0;
		int32_t L_550 = V_21;
		NullCheck(L_549);
		int32_t L_551 = ((int32_t)il2cpp_codegen_add(L_550, 2));
		int64_t L_552 = (int64_t)(L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_551));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_548, L_552));
		uint64_t L_553 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_554 = V_0;
		int32_t L_555 = V_21;
		NullCheck(L_554);
		int32_t L_556 = ((int32_t)il2cpp_codegen_add(L_555, 3));
		int64_t L_557 = (int64_t)(L_554)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_553, L_557));
		uint64_t L_558 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_559 = V_0;
		int32_t L_560 = V_21;
		NullCheck(L_559);
		int32_t L_561 = ((int32_t)il2cpp_codegen_add(L_560, 4));
		int64_t L_562 = (int64_t)(L_559)->GetAt(static_cast<il2cpp_array_size_t>(L_561));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_558, L_562));
		uint64_t L_563 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_564 = V_0;
		int32_t L_565 = V_21;
		NullCheck(L_564);
		int32_t L_566 = ((int32_t)il2cpp_codegen_add(L_565, 5));
		int64_t L_567 = (int64_t)(L_564)->GetAt(static_cast<il2cpp_array_size_t>(L_566));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_563, L_567));
		uint64_t L_568 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_569 = V_0;
		int32_t L_570 = V_21;
		NullCheck(L_569);
		int32_t L_571 = ((int32_t)il2cpp_codegen_add(L_570, 6));
		int64_t L_572 = (int64_t)(L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_571));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_568, L_572));
		uint64_t L_573 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_574 = V_0;
		int32_t L_575 = V_21;
		NullCheck(L_574);
		int32_t L_576 = ((int32_t)il2cpp_codegen_add(L_575, 7));
		int64_t L_577 = (int64_t)(L_574)->GetAt(static_cast<il2cpp_array_size_t>(L_576));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_573, L_577));
		uint64_t L_578 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_579 = V_0;
		int32_t L_580 = V_21;
		NullCheck(L_579);
		int32_t L_581 = ((int32_t)il2cpp_codegen_add(L_580, 8));
		int64_t L_582 = (int64_t)(L_579)->GetAt(static_cast<il2cpp_array_size_t>(L_581));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_578, L_582));
		uint64_t L_583 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_584 = V_0;
		int32_t L_585 = V_21;
		NullCheck(L_584);
		int32_t L_586 = ((int32_t)il2cpp_codegen_add(L_585, ((int32_t)9)));
		int64_t L_587 = (int64_t)(L_584)->GetAt(static_cast<il2cpp_array_size_t>(L_586));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_583, L_587));
		uint64_t L_588 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_589 = V_0;
		int32_t L_590 = V_21;
		NullCheck(L_589);
		int32_t L_591 = ((int32_t)il2cpp_codegen_add(L_590, ((int32_t)10)));
		int64_t L_592 = (int64_t)(L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_591));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_588, L_592));
		uint64_t L_593 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_594 = V_0;
		int32_t L_595 = V_21;
		NullCheck(L_594);
		int32_t L_596 = ((int32_t)il2cpp_codegen_add(L_595, ((int32_t)11)));
		int64_t L_597 = (int64_t)(L_594)->GetAt(static_cast<il2cpp_array_size_t>(L_596));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_593, L_597));
		uint64_t L_598 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_599 = V_0;
		int32_t L_600 = V_21;
		NullCheck(L_599);
		int32_t L_601 = ((int32_t)il2cpp_codegen_add(L_600, ((int32_t)12)));
		int64_t L_602 = (int64_t)(L_599)->GetAt(static_cast<il2cpp_array_size_t>(L_601));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_598, L_602));
		uint64_t L_603 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_604 = V_0;
		int32_t L_605 = V_21;
		NullCheck(L_604);
		int32_t L_606 = ((int32_t)il2cpp_codegen_add(L_605, ((int32_t)13)));
		int64_t L_607 = (int64_t)(L_604)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_603, L_607));
		uint64_t L_608 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_609 = V_0;
		int32_t L_610 = V_21;
		NullCheck(L_609);
		int32_t L_611 = ((int32_t)il2cpp_codegen_add(L_610, ((int32_t)14)));
		int64_t L_612 = (int64_t)(L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_611));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_613 = V_1;
		int32_t L_614 = V_22;
		NullCheck(L_613);
		int32_t L_615 = ((int32_t)il2cpp_codegen_add(L_614, 1));
		int64_t L_616 = (int64_t)(L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_615));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_608, ((int64_t)il2cpp_codegen_add(L_612, L_616))));
		uint64_t L_617 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_618 = V_0;
		int32_t L_619 = V_21;
		NullCheck(L_618);
		int32_t L_620 = ((int32_t)il2cpp_codegen_add(L_619, ((int32_t)15)));
		int64_t L_621 = (int64_t)(L_618)->GetAt(static_cast<il2cpp_array_size_t>(L_620));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_622 = V_1;
		int32_t L_623 = V_22;
		NullCheck(L_622);
		int32_t L_624 = ((int32_t)il2cpp_codegen_add(L_623, 2));
		int64_t L_625 = (int64_t)(L_622)->GetAt(static_cast<il2cpp_array_size_t>(L_624));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_617, ((int64_t)il2cpp_codegen_add(L_621, L_625))));
		uint64_t L_626 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_627 = V_0;
		int32_t L_628 = V_21;
		NullCheck(L_627);
		int32_t L_629 = ((int32_t)il2cpp_codegen_add(L_628, ((int32_t)16)));
		int64_t L_630 = (int64_t)(L_627)->GetAt(static_cast<il2cpp_array_size_t>(L_629));
		int32_t L_631 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_626, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_630, ((int64_t)(uint64_t)((uint32_t)L_631)))), ((int64_t)1)))));
		int32_t L_632 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_632, 2));
	}

IL_0780:
	{
		int32_t L_633 = V_20;
		if ((((int32_t)L_633) < ((int32_t)((int32_t)20))))
		{
			goto IL_0121;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_634 = ___outWords1;
		uint64_t L_635 = V_4;
		NullCheck(L_634);
		(L_634)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_635);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_636 = ___outWords1;
		uint64_t L_637 = V_5;
		NullCheck(L_636);
		(L_636)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_637);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_638 = ___outWords1;
		uint64_t L_639 = V_6;
		NullCheck(L_638);
		(L_638)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_639);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_640 = ___outWords1;
		uint64_t L_641 = V_7;
		NullCheck(L_640);
		(L_640)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_641);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_642 = ___outWords1;
		uint64_t L_643 = V_8;
		NullCheck(L_642);
		(L_642)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_643);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_644 = ___outWords1;
		uint64_t L_645 = V_9;
		NullCheck(L_644);
		(L_644)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_645);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_646 = ___outWords1;
		uint64_t L_647 = V_10;
		NullCheck(L_646);
		(L_646)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_647);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_648 = ___outWords1;
		uint64_t L_649 = V_11;
		NullCheck(L_648);
		(L_648)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_649);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_650 = ___outWords1;
		uint64_t L_651 = V_12;
		NullCheck(L_650);
		(L_650)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_651);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_652 = ___outWords1;
		uint64_t L_653 = V_13;
		NullCheck(L_652);
		(L_652)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_653);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_654 = ___outWords1;
		uint64_t L_655 = V_14;
		NullCheck(L_654);
		(L_654)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_655);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_656 = ___outWords1;
		uint64_t L_657 = V_15;
		NullCheck(L_656);
		(L_656)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_657);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_658 = ___outWords1;
		uint64_t L_659 = V_16;
		NullCheck(L_658);
		(L_658)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_659);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_660 = ___outWords1;
		uint64_t L_661 = V_17;
		NullCheck(L_660);
		(L_660)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_661);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_662 = ___outWords1;
		uint64_t L_663 = V_18;
		NullCheck(L_662);
		(L_662)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_663);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_664 = ___outWords1;
		uint64_t L_665 = V_19;
		NullCheck(L_664);
		(L_664)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_665);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::DecryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher_DecryptBlock_mB788000B0A3A3CFA275D187DE989E74F6548BE90 (Threefish1024Cipher_t09C03FC6D8744C65F6E6FA08785807CB8B5035DA* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___block0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tEEB519B46C0539AA4F05BD484B99075EBF1ECA5F*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD17_11;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)33))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_DecryptBlock_mB788000B0A3A3CFA275D187DE989E74F6548BE90_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_DecryptBlock_mB788000B0A3A3CFA275D187DE989E74F6548BE90_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___block0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___block0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___block0;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___block0;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___block0;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___block0;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___block0;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___block0;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___block0;
		NullCheck(L_32);
		int32_t L_33 = 8;
		int64_t L_34 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_12 = L_34;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = ___block0;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)9);
		int64_t L_37 = (int64_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_13 = L_37;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___block0;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)10);
		int64_t L_40 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_14 = L_40;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = ___block0;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)11);
		int64_t L_43 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_15 = L_43;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___block0;
		NullCheck(L_44);
		int32_t L_45 = ((int32_t)12);
		int64_t L_46 = (int64_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_16 = L_46;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = ___block0;
		NullCheck(L_47);
		int32_t L_48 = ((int32_t)13);
		int64_t L_49 = (int64_t)(L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_17 = L_49;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_50 = ___block0;
		NullCheck(L_50);
		int32_t L_51 = ((int32_t)14);
		int64_t L_52 = (int64_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_18 = L_52;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = ___block0;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)15);
		int64_t L_55 = (int64_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_19 = L_55;
		V_20 = ((int32_t)19);
		goto IL_0732;
	}

IL_0093:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_2;
		int32_t L_57 = V_20;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_21 = L_59;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_3;
		int32_t L_61 = V_20;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_22 = L_63;
		uint64_t L_64 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = V_0;
		int32_t L_66 = V_21;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		int64_t L_68 = (int64_t)(L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_64, L_68));
		uint64_t L_69 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = V_0;
		int32_t L_71 = V_21;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 2));
		int64_t L_73 = (int64_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_69, L_73));
		uint64_t L_74 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = V_0;
		int32_t L_76 = V_21;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 3));
		int64_t L_78 = (int64_t)(L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_74, L_78));
		uint64_t L_79 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_80 = V_0;
		int32_t L_81 = V_21;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 4));
		int64_t L_83 = (int64_t)(L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_79, L_83));
		uint64_t L_84 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_85 = V_0;
		int32_t L_86 = V_21;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_86, 5));
		int64_t L_88 = (int64_t)(L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_84, L_88));
		uint64_t L_89 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_90 = V_0;
		int32_t L_91 = V_21;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 6));
		int64_t L_93 = (int64_t)(L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_89, L_93));
		uint64_t L_94 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_95 = V_0;
		int32_t L_96 = V_21;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 7));
		int64_t L_98 = (int64_t)(L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_94, L_98));
		uint64_t L_99 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = V_0;
		int32_t L_101 = V_21;
		NullCheck(L_100);
		int32_t L_102 = ((int32_t)il2cpp_codegen_add(L_101, 8));
		int64_t L_103 = (int64_t)(L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_99, L_103));
		uint64_t L_104 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = V_0;
		int32_t L_106 = V_21;
		NullCheck(L_105);
		int32_t L_107 = ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)9)));
		int64_t L_108 = (int64_t)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_104, L_108));
		uint64_t L_109 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_110 = V_0;
		int32_t L_111 = V_21;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)10)));
		int64_t L_113 = (int64_t)(L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_109, L_113));
		uint64_t L_114 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_115 = V_0;
		int32_t L_116 = V_21;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, ((int32_t)11)));
		int64_t L_118 = (int64_t)(L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_114, L_118));
		uint64_t L_119 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_120 = V_0;
		int32_t L_121 = V_21;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, ((int32_t)12)));
		int64_t L_123 = (int64_t)(L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_119, L_123));
		uint64_t L_124 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_125 = V_0;
		int32_t L_126 = V_21;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)il2cpp_codegen_add(L_126, ((int32_t)13)));
		int64_t L_128 = (int64_t)(L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_124, L_128));
		uint64_t L_129 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_130 = V_0;
		int32_t L_131 = V_21;
		NullCheck(L_130);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(L_131, ((int32_t)14)));
		int64_t L_133 = (int64_t)(L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_134 = V_1;
		int32_t L_135 = V_22;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int64_t L_137 = (int64_t)(L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_129, ((int64_t)il2cpp_codegen_add(L_133, L_137))));
		uint64_t L_138 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_139 = V_0;
		int32_t L_140 = V_21;
		NullCheck(L_139);
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_140, ((int32_t)15)));
		int64_t L_142 = (int64_t)(L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_143 = V_1;
		int32_t L_144 = V_22;
		NullCheck(L_143);
		int32_t L_145 = ((int32_t)il2cpp_codegen_add(L_144, 2));
		int64_t L_146 = (int64_t)(L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_138, ((int64_t)il2cpp_codegen_add(L_142, L_146))));
		uint64_t L_147 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_148 = V_0;
		int32_t L_149 = V_21;
		NullCheck(L_148);
		int32_t L_150 = ((int32_t)il2cpp_codegen_add(L_149, ((int32_t)16)));
		int64_t L_151 = (int64_t)(L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		int32_t L_152 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_147, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_151, ((int64_t)(uint64_t)((uint32_t)L_152)))), ((int64_t)1)))));
		uint64_t L_153 = V_19;
		uint64_t L_154 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t9B68F6C38A3BF3C3F5F80F92EE667819B8537856_il2cpp_TypeInfo_var);
		uint64_t L_155;
		L_155 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_153, ((int32_t)9), L_154, NULL);
		V_19 = L_155;
		uint64_t L_156 = V_4;
		uint64_t L_157 = V_19;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_156, (int64_t)L_157));
		uint64_t L_158 = V_15;
		uint64_t L_159 = V_6;
		uint64_t L_160;
		L_160 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_158, ((int32_t)48), L_159, NULL);
		V_15 = L_160;
		uint64_t L_161 = V_6;
		uint64_t L_162 = V_15;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_161, (int64_t)L_162));
		uint64_t L_163 = V_17;
		uint64_t L_164 = V_10;
		uint64_t L_165;
		L_165 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_163, ((int32_t)35), L_164, NULL);
		V_17 = L_165;
		uint64_t L_166 = V_10;
		uint64_t L_167 = V_17;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_166, (int64_t)L_167));
		uint64_t L_168 = V_13;
		uint64_t L_169 = V_8;
		uint64_t L_170;
		L_170 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_168, ((int32_t)52), L_169, NULL);
		V_13 = L_170;
		uint64_t L_171 = V_8;
		uint64_t L_172 = V_13;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_171, (int64_t)L_172));
		uint64_t L_173 = V_5;
		uint64_t L_174 = V_18;
		uint64_t L_175;
		L_175 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_173, ((int32_t)23), L_174, NULL);
		V_5 = L_175;
		uint64_t L_176 = V_18;
		uint64_t L_177 = V_5;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_176, (int64_t)L_177));
		uint64_t L_178 = V_9;
		uint64_t L_179 = V_12;
		uint64_t L_180;
		L_180 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_178, ((int32_t)31), L_179, NULL);
		V_9 = L_180;
		uint64_t L_181 = V_12;
		uint64_t L_182 = V_9;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_181, (int64_t)L_182));
		uint64_t L_183 = V_7;
		uint64_t L_184 = V_14;
		uint64_t L_185;
		L_185 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_183, ((int32_t)37), L_184, NULL);
		V_7 = L_185;
		uint64_t L_186 = V_14;
		uint64_t L_187 = V_7;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_186, (int64_t)L_187));
		uint64_t L_188 = V_11;
		uint64_t L_189 = V_16;
		uint64_t L_190;
		L_190 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_188, ((int32_t)20), L_189, NULL);
		V_11 = L_190;
		uint64_t L_191 = V_16;
		uint64_t L_192 = V_11;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_191, (int64_t)L_192));
		uint64_t L_193 = V_11;
		uint64_t L_194 = V_4;
		uint64_t L_195;
		L_195 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_193, ((int32_t)31), L_194, NULL);
		V_11 = L_195;
		uint64_t L_196 = V_4;
		uint64_t L_197 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_196, (int64_t)L_197));
		uint64_t L_198 = V_9;
		uint64_t L_199 = V_6;
		uint64_t L_200;
		L_200 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_198, ((int32_t)44), L_199, NULL);
		V_9 = L_200;
		uint64_t L_201 = V_6;
		uint64_t L_202 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_201, (int64_t)L_202));
		uint64_t L_203 = V_7;
		uint64_t L_204 = V_8;
		uint64_t L_205;
		L_205 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_203, ((int32_t)47), L_204, NULL);
		V_7 = L_205;
		uint64_t L_206 = V_8;
		uint64_t L_207 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_206, (int64_t)L_207));
		uint64_t L_208 = V_5;
		uint64_t L_209 = V_10;
		uint64_t L_210;
		L_210 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_208, ((int32_t)46), L_209, NULL);
		V_5 = L_210;
		uint64_t L_211 = V_10;
		uint64_t L_212 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_211, (int64_t)L_212));
		uint64_t L_213 = V_19;
		uint64_t L_214 = V_16;
		uint64_t L_215;
		L_215 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_213, ((int32_t)19), L_214, NULL);
		V_19 = L_215;
		uint64_t L_216 = V_16;
		uint64_t L_217 = V_19;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_216, (int64_t)L_217));
		uint64_t L_218 = V_17;
		uint64_t L_219 = V_18;
		uint64_t L_220;
		L_220 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_218, ((int32_t)42), L_219, NULL);
		V_17 = L_220;
		uint64_t L_221 = V_18;
		uint64_t L_222 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_221, (int64_t)L_222));
		uint64_t L_223 = V_15;
		uint64_t L_224 = V_12;
		uint64_t L_225;
		L_225 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_223, ((int32_t)44), L_224, NULL);
		V_15 = L_225;
		uint64_t L_226 = V_12;
		uint64_t L_227 = V_15;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_226, (int64_t)L_227));
		uint64_t L_228 = V_13;
		uint64_t L_229 = V_14;
		uint64_t L_230;
		L_230 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_228, ((int32_t)25), L_229, NULL);
		V_13 = L_230;
		uint64_t L_231 = V_14;
		uint64_t L_232 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_231, (int64_t)L_232));
		uint64_t L_233 = V_13;
		uint64_t L_234 = V_4;
		uint64_t L_235;
		L_235 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_233, ((int32_t)16), L_234, NULL);
		V_13 = L_235;
		uint64_t L_236 = V_4;
		uint64_t L_237 = V_13;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_236, (int64_t)L_237));
		uint64_t L_238 = V_17;
		uint64_t L_239 = V_6;
		uint64_t L_240;
		L_240 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_238, ((int32_t)34), L_239, NULL);
		V_17 = L_240;
		uint64_t L_241 = V_6;
		uint64_t L_242 = V_17;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_241, (int64_t)L_242));
		uint64_t L_243 = V_15;
		uint64_t L_244 = V_10;
		uint64_t L_245;
		L_245 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_243, ((int32_t)56), L_244, NULL);
		V_15 = L_245;
		uint64_t L_246 = V_10;
		uint64_t L_247 = V_15;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_246, (int64_t)L_247));
		uint64_t L_248 = V_19;
		uint64_t L_249 = V_8;
		uint64_t L_250;
		L_250 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_248, ((int32_t)51), L_249, NULL);
		V_19 = L_250;
		uint64_t L_251 = V_8;
		uint64_t L_252 = V_19;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_251, (int64_t)L_252));
		uint64_t L_253 = V_11;
		uint64_t L_254 = V_14;
		uint64_t L_255;
		L_255 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_253, 4, L_254, NULL);
		V_11 = L_255;
		uint64_t L_256 = V_14;
		uint64_t L_257 = V_11;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_256, (int64_t)L_257));
		uint64_t L_258 = V_7;
		uint64_t L_259 = V_16;
		uint64_t L_260;
		L_260 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_258, ((int32_t)53), L_259, NULL);
		V_7 = L_260;
		uint64_t L_261 = V_16;
		uint64_t L_262 = V_7;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_261, (int64_t)L_262));
		uint64_t L_263 = V_9;
		uint64_t L_264 = V_18;
		uint64_t L_265;
		L_265 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_263, ((int32_t)42), L_264, NULL);
		V_9 = L_265;
		uint64_t L_266 = V_18;
		uint64_t L_267 = V_9;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_266, (int64_t)L_267));
		uint64_t L_268 = V_5;
		uint64_t L_269 = V_12;
		uint64_t L_270;
		L_270 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_268, ((int32_t)41), L_269, NULL);
		V_5 = L_270;
		uint64_t L_271 = V_12;
		uint64_t L_272 = V_5;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_271, (int64_t)L_272));
		uint64_t L_273 = V_5;
		uint64_t L_274 = V_4;
		uint64_t L_275;
		L_275 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_273, ((int32_t)41), L_274, NULL);
		V_5 = L_275;
		uint64_t L_276 = V_4;
		uint64_t L_277 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_276, (int64_t)L_277));
		uint64_t L_278 = V_7;
		uint64_t L_279 = V_6;
		uint64_t L_280;
		L_280 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_278, ((int32_t)9), L_279, NULL);
		V_7 = L_280;
		uint64_t L_281 = V_6;
		uint64_t L_282 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_281, (int64_t)L_282));
		uint64_t L_283 = V_9;
		uint64_t L_284 = V_8;
		uint64_t L_285;
		L_285 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_283, ((int32_t)37), L_284, NULL);
		V_9 = L_285;
		uint64_t L_286 = V_8;
		uint64_t L_287 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_286, (int64_t)L_287));
		uint64_t L_288 = V_11;
		uint64_t L_289 = V_10;
		uint64_t L_290;
		L_290 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_288, ((int32_t)31), L_289, NULL);
		V_11 = L_290;
		uint64_t L_291 = V_10;
		uint64_t L_292 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_291, (int64_t)L_292));
		uint64_t L_293 = V_13;
		uint64_t L_294 = V_12;
		uint64_t L_295;
		L_295 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_293, ((int32_t)12), L_294, NULL);
		V_13 = L_295;
		uint64_t L_296 = V_12;
		uint64_t L_297 = V_13;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_296, (int64_t)L_297));
		uint64_t L_298 = V_15;
		uint64_t L_299 = V_14;
		uint64_t L_300;
		L_300 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_298, ((int32_t)47), L_299, NULL);
		V_15 = L_300;
		uint64_t L_301 = V_14;
		uint64_t L_302 = V_15;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_301, (int64_t)L_302));
		uint64_t L_303 = V_17;
		uint64_t L_304 = V_16;
		uint64_t L_305;
		L_305 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_303, ((int32_t)44), L_304, NULL);
		V_17 = L_305;
		uint64_t L_306 = V_16;
		uint64_t L_307 = V_17;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_306, (int64_t)L_307));
		uint64_t L_308 = V_19;
		uint64_t L_309 = V_18;
		uint64_t L_310;
		L_310 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_308, ((int32_t)30), L_309, NULL);
		V_19 = L_310;
		uint64_t L_311 = V_18;
		uint64_t L_312 = V_19;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_311, (int64_t)L_312));
		uint64_t L_313 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_314 = V_0;
		int32_t L_315 = V_21;
		NullCheck(L_314);
		int32_t L_316 = L_315;
		int64_t L_317 = (int64_t)(L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_313, L_317));
		uint64_t L_318 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_319 = V_0;
		int32_t L_320 = V_21;
		NullCheck(L_319);
		int32_t L_321 = ((int32_t)il2cpp_codegen_add(L_320, 1));
		int64_t L_322 = (int64_t)(L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_318, L_322));
		uint64_t L_323 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_324 = V_0;
		int32_t L_325 = V_21;
		NullCheck(L_324);
		int32_t L_326 = ((int32_t)il2cpp_codegen_add(L_325, 2));
		int64_t L_327 = (int64_t)(L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_326));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_323, L_327));
		uint64_t L_328 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_329 = V_0;
		int32_t L_330 = V_21;
		NullCheck(L_329);
		int32_t L_331 = ((int32_t)il2cpp_codegen_add(L_330, 3));
		int64_t L_332 = (int64_t)(L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_331));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_328, L_332));
		uint64_t L_333 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_334 = V_0;
		int32_t L_335 = V_21;
		NullCheck(L_334);
		int32_t L_336 = ((int32_t)il2cpp_codegen_add(L_335, 4));
		int64_t L_337 = (int64_t)(L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_333, L_337));
		uint64_t L_338 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_339 = V_0;
		int32_t L_340 = V_21;
		NullCheck(L_339);
		int32_t L_341 = ((int32_t)il2cpp_codegen_add(L_340, 5));
		int64_t L_342 = (int64_t)(L_339)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_338, L_342));
		uint64_t L_343 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = V_0;
		int32_t L_345 = V_21;
		NullCheck(L_344);
		int32_t L_346 = ((int32_t)il2cpp_codegen_add(L_345, 6));
		int64_t L_347 = (int64_t)(L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_346));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_343, L_347));
		uint64_t L_348 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_349 = V_0;
		int32_t L_350 = V_21;
		NullCheck(L_349);
		int32_t L_351 = ((int32_t)il2cpp_codegen_add(L_350, 7));
		int64_t L_352 = (int64_t)(L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_351));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_348, L_352));
		uint64_t L_353 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_354 = V_0;
		int32_t L_355 = V_21;
		NullCheck(L_354);
		int32_t L_356 = ((int32_t)il2cpp_codegen_add(L_355, 8));
		int64_t L_357 = (int64_t)(L_354)->GetAt(static_cast<il2cpp_array_size_t>(L_356));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_353, L_357));
		uint64_t L_358 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_359 = V_0;
		int32_t L_360 = V_21;
		NullCheck(L_359);
		int32_t L_361 = ((int32_t)il2cpp_codegen_add(L_360, ((int32_t)9)));
		int64_t L_362 = (int64_t)(L_359)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_358, L_362));
		uint64_t L_363 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_364 = V_0;
		int32_t L_365 = V_21;
		NullCheck(L_364);
		int32_t L_366 = ((int32_t)il2cpp_codegen_add(L_365, ((int32_t)10)));
		int64_t L_367 = (int64_t)(L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_363, L_367));
		uint64_t L_368 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_369 = V_0;
		int32_t L_370 = V_21;
		NullCheck(L_369);
		int32_t L_371 = ((int32_t)il2cpp_codegen_add(L_370, ((int32_t)11)));
		int64_t L_372 = (int64_t)(L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_371));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_368, L_372));
		uint64_t L_373 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_374 = V_0;
		int32_t L_375 = V_21;
		NullCheck(L_374);
		int32_t L_376 = ((int32_t)il2cpp_codegen_add(L_375, ((int32_t)12)));
		int64_t L_377 = (int64_t)(L_374)->GetAt(static_cast<il2cpp_array_size_t>(L_376));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_373, L_377));
		uint64_t L_378 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_379 = V_0;
		int32_t L_380 = V_21;
		NullCheck(L_379);
		int32_t L_381 = ((int32_t)il2cpp_codegen_add(L_380, ((int32_t)13)));
		int64_t L_382 = (int64_t)(L_379)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_383 = V_1;
		int32_t L_384 = V_22;
		NullCheck(L_383);
		int32_t L_385 = L_384;
		int64_t L_386 = (int64_t)(L_383)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_378, ((int64_t)il2cpp_codegen_add(L_382, L_386))));
		uint64_t L_387 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_388 = V_0;
		int32_t L_389 = V_21;
		NullCheck(L_388);
		int32_t L_390 = ((int32_t)il2cpp_codegen_add(L_389, ((int32_t)14)));
		int64_t L_391 = (int64_t)(L_388)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_392 = V_1;
		int32_t L_393 = V_22;
		NullCheck(L_392);
		int32_t L_394 = ((int32_t)il2cpp_codegen_add(L_393, 1));
		int64_t L_395 = (int64_t)(L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_387, ((int64_t)il2cpp_codegen_add(L_391, L_395))));
		uint64_t L_396 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_397 = V_0;
		int32_t L_398 = V_21;
		NullCheck(L_397);
		int32_t L_399 = ((int32_t)il2cpp_codegen_add(L_398, ((int32_t)15)));
		int64_t L_400 = (int64_t)(L_397)->GetAt(static_cast<il2cpp_array_size_t>(L_399));
		int32_t L_401 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_396, ((int64_t)il2cpp_codegen_add(L_400, ((int64_t)(uint64_t)((uint32_t)L_401))))));
		uint64_t L_402 = V_19;
		uint64_t L_403 = V_4;
		uint64_t L_404;
		L_404 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_402, 5, L_403, NULL);
		V_19 = L_404;
		uint64_t L_405 = V_4;
		uint64_t L_406 = V_19;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_405, (int64_t)L_406));
		uint64_t L_407 = V_15;
		uint64_t L_408 = V_6;
		uint64_t L_409;
		L_409 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_407, ((int32_t)20), L_408, NULL);
		V_15 = L_409;
		uint64_t L_410 = V_6;
		uint64_t L_411 = V_15;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_410, (int64_t)L_411));
		uint64_t L_412 = V_17;
		uint64_t L_413 = V_10;
		uint64_t L_414;
		L_414 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_412, ((int32_t)48), L_413, NULL);
		V_17 = L_414;
		uint64_t L_415 = V_10;
		uint64_t L_416 = V_17;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_415, (int64_t)L_416));
		uint64_t L_417 = V_13;
		uint64_t L_418 = V_8;
		uint64_t L_419;
		L_419 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_417, ((int32_t)41), L_418, NULL);
		V_13 = L_419;
		uint64_t L_420 = V_8;
		uint64_t L_421 = V_13;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_420, (int64_t)L_421));
		uint64_t L_422 = V_5;
		uint64_t L_423 = V_18;
		uint64_t L_424;
		L_424 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_422, ((int32_t)47), L_423, NULL);
		V_5 = L_424;
		uint64_t L_425 = V_18;
		uint64_t L_426 = V_5;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_425, (int64_t)L_426));
		uint64_t L_427 = V_9;
		uint64_t L_428 = V_12;
		uint64_t L_429;
		L_429 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_427, ((int32_t)28), L_428, NULL);
		V_9 = L_429;
		uint64_t L_430 = V_12;
		uint64_t L_431 = V_9;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_430, (int64_t)L_431));
		uint64_t L_432 = V_7;
		uint64_t L_433 = V_14;
		uint64_t L_434;
		L_434 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_432, ((int32_t)16), L_433, NULL);
		V_7 = L_434;
		uint64_t L_435 = V_14;
		uint64_t L_436 = V_7;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_435, (int64_t)L_436));
		uint64_t L_437 = V_11;
		uint64_t L_438 = V_16;
		uint64_t L_439;
		L_439 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_437, ((int32_t)25), L_438, NULL);
		V_11 = L_439;
		uint64_t L_440 = V_16;
		uint64_t L_441 = V_11;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_440, (int64_t)L_441));
		uint64_t L_442 = V_11;
		uint64_t L_443 = V_4;
		uint64_t L_444;
		L_444 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_442, ((int32_t)33), L_443, NULL);
		V_11 = L_444;
		uint64_t L_445 = V_4;
		uint64_t L_446 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_445, (int64_t)L_446));
		uint64_t L_447 = V_9;
		uint64_t L_448 = V_6;
		uint64_t L_449;
		L_449 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_447, 4, L_448, NULL);
		V_9 = L_449;
		uint64_t L_450 = V_6;
		uint64_t L_451 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_450, (int64_t)L_451));
		uint64_t L_452 = V_7;
		uint64_t L_453 = V_8;
		uint64_t L_454;
		L_454 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_452, ((int32_t)51), L_453, NULL);
		V_7 = L_454;
		uint64_t L_455 = V_8;
		uint64_t L_456 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_455, (int64_t)L_456));
		uint64_t L_457 = V_5;
		uint64_t L_458 = V_10;
		uint64_t L_459;
		L_459 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_457, ((int32_t)13), L_458, NULL);
		V_5 = L_459;
		uint64_t L_460 = V_10;
		uint64_t L_461 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_460, (int64_t)L_461));
		uint64_t L_462 = V_19;
		uint64_t L_463 = V_16;
		uint64_t L_464;
		L_464 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_462, ((int32_t)34), L_463, NULL);
		V_19 = L_464;
		uint64_t L_465 = V_16;
		uint64_t L_466 = V_19;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_465, (int64_t)L_466));
		uint64_t L_467 = V_17;
		uint64_t L_468 = V_18;
		uint64_t L_469;
		L_469 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_467, ((int32_t)41), L_468, NULL);
		V_17 = L_469;
		uint64_t L_470 = V_18;
		uint64_t L_471 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_470, (int64_t)L_471));
		uint64_t L_472 = V_15;
		uint64_t L_473 = V_12;
		uint64_t L_474;
		L_474 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_472, ((int32_t)59), L_473, NULL);
		V_15 = L_474;
		uint64_t L_475 = V_12;
		uint64_t L_476 = V_15;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_475, (int64_t)L_476));
		uint64_t L_477 = V_13;
		uint64_t L_478 = V_14;
		uint64_t L_479;
		L_479 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_477, ((int32_t)17), L_478, NULL);
		V_13 = L_479;
		uint64_t L_480 = V_14;
		uint64_t L_481 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_480, (int64_t)L_481));
		uint64_t L_482 = V_13;
		uint64_t L_483 = V_4;
		uint64_t L_484;
		L_484 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_482, ((int32_t)38), L_483, NULL);
		V_13 = L_484;
		uint64_t L_485 = V_4;
		uint64_t L_486 = V_13;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_485, (int64_t)L_486));
		uint64_t L_487 = V_17;
		uint64_t L_488 = V_6;
		uint64_t L_489;
		L_489 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_487, ((int32_t)19), L_488, NULL);
		V_17 = L_489;
		uint64_t L_490 = V_6;
		uint64_t L_491 = V_17;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_490, (int64_t)L_491));
		uint64_t L_492 = V_15;
		uint64_t L_493 = V_10;
		uint64_t L_494;
		L_494 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_492, ((int32_t)10), L_493, NULL);
		V_15 = L_494;
		uint64_t L_495 = V_10;
		uint64_t L_496 = V_15;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_495, (int64_t)L_496));
		uint64_t L_497 = V_19;
		uint64_t L_498 = V_8;
		uint64_t L_499;
		L_499 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_497, ((int32_t)55), L_498, NULL);
		V_19 = L_499;
		uint64_t L_500 = V_8;
		uint64_t L_501 = V_19;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_500, (int64_t)L_501));
		uint64_t L_502 = V_11;
		uint64_t L_503 = V_14;
		uint64_t L_504;
		L_504 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_502, ((int32_t)49), L_503, NULL);
		V_11 = L_504;
		uint64_t L_505 = V_14;
		uint64_t L_506 = V_11;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_505, (int64_t)L_506));
		uint64_t L_507 = V_7;
		uint64_t L_508 = V_16;
		uint64_t L_509;
		L_509 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_507, ((int32_t)18), L_508, NULL);
		V_7 = L_509;
		uint64_t L_510 = V_16;
		uint64_t L_511 = V_7;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_510, (int64_t)L_511));
		uint64_t L_512 = V_9;
		uint64_t L_513 = V_18;
		uint64_t L_514;
		L_514 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_512, ((int32_t)23), L_513, NULL);
		V_9 = L_514;
		uint64_t L_515 = V_18;
		uint64_t L_516 = V_9;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_515, (int64_t)L_516));
		uint64_t L_517 = V_5;
		uint64_t L_518 = V_12;
		uint64_t L_519;
		L_519 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_517, ((int32_t)52), L_518, NULL);
		V_5 = L_519;
		uint64_t L_520 = V_12;
		uint64_t L_521 = V_5;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_520, (int64_t)L_521));
		uint64_t L_522 = V_5;
		uint64_t L_523 = V_4;
		uint64_t L_524;
		L_524 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_522, ((int32_t)24), L_523, NULL);
		V_5 = L_524;
		uint64_t L_525 = V_4;
		uint64_t L_526 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_525, (int64_t)L_526));
		uint64_t L_527 = V_7;
		uint64_t L_528 = V_6;
		uint64_t L_529;
		L_529 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_527, ((int32_t)13), L_528, NULL);
		V_7 = L_529;
		uint64_t L_530 = V_6;
		uint64_t L_531 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_530, (int64_t)L_531));
		uint64_t L_532 = V_9;
		uint64_t L_533 = V_8;
		uint64_t L_534;
		L_534 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_532, 8, L_533, NULL);
		V_9 = L_534;
		uint64_t L_535 = V_8;
		uint64_t L_536 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_535, (int64_t)L_536));
		uint64_t L_537 = V_11;
		uint64_t L_538 = V_10;
		uint64_t L_539;
		L_539 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_537, ((int32_t)47), L_538, NULL);
		V_11 = L_539;
		uint64_t L_540 = V_10;
		uint64_t L_541 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_540, (int64_t)L_541));
		uint64_t L_542 = V_13;
		uint64_t L_543 = V_12;
		uint64_t L_544;
		L_544 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_542, 8, L_543, NULL);
		V_13 = L_544;
		uint64_t L_545 = V_12;
		uint64_t L_546 = V_13;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_545, (int64_t)L_546));
		uint64_t L_547 = V_15;
		uint64_t L_548 = V_14;
		uint64_t L_549;
		L_549 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_547, ((int32_t)17), L_548, NULL);
		V_15 = L_549;
		uint64_t L_550 = V_14;
		uint64_t L_551 = V_15;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_550, (int64_t)L_551));
		uint64_t L_552 = V_17;
		uint64_t L_553 = V_16;
		uint64_t L_554;
		L_554 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_552, ((int32_t)22), L_553, NULL);
		V_17 = L_554;
		uint64_t L_555 = V_16;
		uint64_t L_556 = V_17;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_555, (int64_t)L_556));
		uint64_t L_557 = V_19;
		uint64_t L_558 = V_18;
		uint64_t L_559;
		L_559 = ThreefishEngine_XorRotr_m2E61C3FD8A0865609BB567143A35BDDB3BE2A5E6(L_557, ((int32_t)37), L_558, NULL);
		V_19 = L_559;
		uint64_t L_560 = V_18;
		uint64_t L_561 = V_19;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_560, (int64_t)L_561));
		int32_t L_562 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_subtract(L_562, 2));
	}

IL_0732:
	{
		int32_t L_563 = V_20;
		if ((((int32_t)L_563) >= ((int32_t)1)))
		{
			goto IL_0093;
		}
	}
	{
		uint64_t L_564 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_565 = V_0;
		NullCheck(L_565);
		int32_t L_566 = 0;
		int64_t L_567 = (int64_t)(L_565)->GetAt(static_cast<il2cpp_array_size_t>(L_566));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_564, L_567));
		uint64_t L_568 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_569 = V_0;
		NullCheck(L_569);
		int32_t L_570 = 1;
		int64_t L_571 = (int64_t)(L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_568, L_571));
		uint64_t L_572 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_573 = V_0;
		NullCheck(L_573);
		int32_t L_574 = 2;
		int64_t L_575 = (int64_t)(L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_574));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_572, L_575));
		uint64_t L_576 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_577 = V_0;
		NullCheck(L_577);
		int32_t L_578 = 3;
		int64_t L_579 = (int64_t)(L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_578));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_576, L_579));
		uint64_t L_580 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_581 = V_0;
		NullCheck(L_581);
		int32_t L_582 = 4;
		int64_t L_583 = (int64_t)(L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_582));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_580, L_583));
		uint64_t L_584 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_585 = V_0;
		NullCheck(L_585);
		int32_t L_586 = 5;
		int64_t L_587 = (int64_t)(L_585)->GetAt(static_cast<il2cpp_array_size_t>(L_586));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_584, L_587));
		uint64_t L_588 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_589 = V_0;
		NullCheck(L_589);
		int32_t L_590 = 6;
		int64_t L_591 = (int64_t)(L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_588, L_591));
		uint64_t L_592 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_593 = V_0;
		NullCheck(L_593);
		int32_t L_594 = 7;
		int64_t L_595 = (int64_t)(L_593)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_592, L_595));
		uint64_t L_596 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_597 = V_0;
		NullCheck(L_597);
		int32_t L_598 = 8;
		int64_t L_599 = (int64_t)(L_597)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_596, L_599));
		uint64_t L_600 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_601 = V_0;
		NullCheck(L_601);
		int32_t L_602 = ((int32_t)9);
		int64_t L_603 = (int64_t)(L_601)->GetAt(static_cast<il2cpp_array_size_t>(L_602));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_600, L_603));
		uint64_t L_604 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_605 = V_0;
		NullCheck(L_605);
		int32_t L_606 = ((int32_t)10);
		int64_t L_607 = (int64_t)(L_605)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_604, L_607));
		uint64_t L_608 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_609 = V_0;
		NullCheck(L_609);
		int32_t L_610 = ((int32_t)11);
		int64_t L_611 = (int64_t)(L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_608, L_611));
		uint64_t L_612 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_613 = V_0;
		NullCheck(L_613);
		int32_t L_614 = ((int32_t)12);
		int64_t L_615 = (int64_t)(L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_614));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_612, L_615));
		uint64_t L_616 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_617 = V_0;
		NullCheck(L_617);
		int32_t L_618 = ((int32_t)13);
		int64_t L_619 = (int64_t)(L_617)->GetAt(static_cast<il2cpp_array_size_t>(L_618));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_620 = V_1;
		NullCheck(L_620);
		int32_t L_621 = 0;
		int64_t L_622 = (int64_t)(L_620)->GetAt(static_cast<il2cpp_array_size_t>(L_621));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_616, ((int64_t)il2cpp_codegen_add(L_619, L_622))));
		uint64_t L_623 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_624 = V_0;
		NullCheck(L_624);
		int32_t L_625 = ((int32_t)14);
		int64_t L_626 = (int64_t)(L_624)->GetAt(static_cast<il2cpp_array_size_t>(L_625));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_627 = V_1;
		NullCheck(L_627);
		int32_t L_628 = 1;
		int64_t L_629 = (int64_t)(L_627)->GetAt(static_cast<il2cpp_array_size_t>(L_628));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_623, ((int64_t)il2cpp_codegen_add(L_626, L_629))));
		uint64_t L_630 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_631 = V_0;
		NullCheck(L_631);
		int32_t L_632 = ((int32_t)15);
		int64_t L_633 = (int64_t)(L_631)->GetAt(static_cast<il2cpp_array_size_t>(L_632));
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_630, L_633));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_634 = ___state1;
		uint64_t L_635 = V_4;
		NullCheck(L_634);
		(L_634)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_635);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_636 = ___state1;
		uint64_t L_637 = V_5;
		NullCheck(L_636);
		(L_636)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_637);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_638 = ___state1;
		uint64_t L_639 = V_6;
		NullCheck(L_638);
		(L_638)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_639);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_640 = ___state1;
		uint64_t L_641 = V_7;
		NullCheck(L_640);
		(L_640)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_641);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_642 = ___state1;
		uint64_t L_643 = V_8;
		NullCheck(L_642);
		(L_642)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_643);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_644 = ___state1;
		uint64_t L_645 = V_9;
		NullCheck(L_644);
		(L_644)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_645);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_646 = ___state1;
		uint64_t L_647 = V_10;
		NullCheck(L_646);
		(L_646)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_647);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_648 = ___state1;
		uint64_t L_649 = V_11;
		NullCheck(L_648);
		(L_648)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_649);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_650 = ___state1;
		uint64_t L_651 = V_12;
		NullCheck(L_650);
		(L_650)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_651);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_652 = ___state1;
		uint64_t L_653 = V_13;
		NullCheck(L_652);
		(L_652)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_653);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_654 = ___state1;
		uint64_t L_655 = V_14;
		NullCheck(L_654);
		(L_654)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_655);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_656 = ___state1;
		uint64_t L_657 = V_15;
		NullCheck(L_656);
		(L_656)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_657);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_658 = ___state1;
		uint64_t L_659 = V_16;
		NullCheck(L_658);
		(L_658)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_659);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_660 = ___state1;
		uint64_t L_661 = V_17;
		NullCheck(L_660);
		(L_660)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_661);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_662 = ___state1;
		uint64_t L_663 = V_18;
		NullCheck(L_662);
		(L_662)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_663);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_664 = ___state1;
		uint64_t L_665 = V_19;
		NullCheck(L_664);
		(L_664)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_665);
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
// System.String Org.BouncyCastle.Crypto.Engines.TnepresEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TnepresEngine_get_AlgorithmName_mC03280C3AA3538D01A4BBD3D0CBD801D74C519A0 (TnepresEngine_t425E9EFBC4AB32EC5E5EC5D6FEADB4F3BBB28FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE;
	}
}
// System.Int32[] Org.BouncyCastle.Crypto.Engines.TnepresEngine::MakeWorkingKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* TnepresEngine_MakeWorkingKey_mB028BB86FEBF2BC2B4C1C423DB961754A7065BA9 (TnepresEngine_t425E9EFBC4AB32EC5E5EC5D6FEADB4F3BBB28FCE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___key0;
		NullCheck(L_1);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 4));
		goto IL_0026;
	}

IL_0014:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___key0;
		int32_t L_6 = V_1;
		uint32_t L_7;
		L_7 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_5, L_6, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 4));
	}

IL_0026:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_10 = V_1;
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___key0;
		uint32_t L_15;
		L_15 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_14, 0, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_15);
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) >= ((int32_t)8)))
		{
			goto IL_0050;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)1);
		goto IL_0050;
	}

IL_0045:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47D20EC1D621302B327F8DA26CCC5372F970DFB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TnepresEngine_MakeWorkingKey_mB028BB86FEBF2BC2B4C1C423DB961754A7065BA9_RuntimeMethod_var)));
	}

IL_0050:
	{
		V_3 = ((int32_t)132);
		int32_t L_20 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_4 = L_21;
		V_5 = 8;
		goto IL_009a;
	}

IL_0063:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		int32_t L_23 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(L_25, 8));
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_subtract(L_29, 5));
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(L_33, 3));
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		int32_t L_40 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = Integers_RotateLeft_m9347621D8EE9496234E48F81B69A6E6EC815E79E(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_27^L_31))^L_35))^L_39))^((int32_t)-1640531527)))^((int32_t)il2cpp_codegen_subtract(L_40, 8)))), ((int32_t)11), NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_41);
		int32_t L_42 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_009a:
	{
		int32_t L_43 = V_5;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)16))))
		{
			goto IL_0063;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_44, 8, (RuntimeArray*)L_45, 0, 8, NULL);
		V_6 = 8;
		goto IL_00ea;
	}

IL_00b0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_4;
		int32_t L_47 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_4;
		int32_t L_49 = V_6;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract(L_49, 8));
		int32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_4;
		int32_t L_53 = V_6;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_subtract(L_53, 5));
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_4;
		int32_t L_57 = V_6;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_subtract(L_57, 3));
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_4;
		int32_t L_61 = V_6;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		int32_t L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		int32_t L_65;
		L_65 = Integers_RotateLeft_m9347621D8EE9496234E48F81B69A6E6EC815E79E(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_51^L_55))^L_59))^L_63))^((int32_t)-1640531527)))^L_64)), ((int32_t)11), NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (int32_t)L_65);
		int32_t L_66 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_00ea:
	{
		int32_t L_67 = V_6;
		int32_t L_68 = V_3;
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_00b0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_4;
		NullCheck(L_69);
		int32_t L_70 = 0;
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_4;
		NullCheck(L_72);
		int32_t L_73 = 1;
		int32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_4;
		NullCheck(L_75);
		int32_t L_76 = 2;
		int32_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = V_4;
		NullCheck(L_78);
		int32_t L_79 = 3;
		int32_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		SerpentEngineBase_Sb3_m12D2C13C215915C24A4D9768ACA28F39C6E32BB4(__this, L_71, L_74, L_77, L_80, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = V_4;
		int32_t L_82 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_82);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = V_4;
		int32_t L_84 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_84);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = V_4;
		int32_t L_86 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_86);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = V_4;
		int32_t L_88 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_88);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_4;
		NullCheck(L_89);
		int32_t L_90 = 4;
		int32_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = 5;
		int32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = V_4;
		NullCheck(L_95);
		int32_t L_96 = 6;
		int32_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_4;
		NullCheck(L_98);
		int32_t L_99 = 7;
		int32_t L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		SerpentEngineBase_Sb2_m8F42880707930B40B23FB1A537C9B888C46485CE(__this, L_91, L_94, L_97, L_100, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = V_4;
		int32_t L_102 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_102);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = V_4;
		int32_t L_104 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_104);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = V_4;
		int32_t L_106 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)L_106);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = V_4;
		int32_t L_108 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_108);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = V_4;
		NullCheck(L_109);
		int32_t L_110 = 8;
		int32_t L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = V_4;
		NullCheck(L_112);
		int32_t L_113 = ((int32_t)9);
		int32_t L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = V_4;
		NullCheck(L_115);
		int32_t L_116 = ((int32_t)10);
		int32_t L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = V_4;
		NullCheck(L_118);
		int32_t L_119 = ((int32_t)11);
		int32_t L_120 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		SerpentEngineBase_Sb1_m396DE687CBFB05AB79224ED7E9F353046F9E87B5(__this, L_111, L_114, L_117, L_120, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = V_4;
		int32_t L_122 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(8), (int32_t)L_122);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = V_4;
		int32_t L_124 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (int32_t)L_124);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_125 = V_4;
		int32_t L_126 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (int32_t)L_126);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = V_4;
		int32_t L_128 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (int32_t)L_128);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = V_4;
		NullCheck(L_129);
		int32_t L_130 = ((int32_t)12);
		int32_t L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = V_4;
		NullCheck(L_132);
		int32_t L_133 = ((int32_t)13);
		int32_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = V_4;
		NullCheck(L_135);
		int32_t L_136 = ((int32_t)14);
		int32_t L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = V_4;
		NullCheck(L_138);
		int32_t L_139 = ((int32_t)15);
		int32_t L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		SerpentEngineBase_Sb0_m6D2A0FE6156CE012727DC52B39AFA8C4DC308E6E(__this, L_131, L_134, L_137, L_140, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = V_4;
		int32_t L_142 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (int32_t)L_142);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_143 = V_4;
		int32_t L_144 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (int32_t)L_144);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = V_4;
		int32_t L_146 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (int32_t)L_146);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_147 = V_4;
		int32_t L_148 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (int32_t)L_148);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = V_4;
		NullCheck(L_149);
		int32_t L_150 = ((int32_t)16);
		int32_t L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = V_4;
		NullCheck(L_152);
		int32_t L_153 = ((int32_t)17);
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = V_4;
		NullCheck(L_155);
		int32_t L_156 = ((int32_t)18);
		int32_t L_157 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_158 = V_4;
		NullCheck(L_158);
		int32_t L_159 = ((int32_t)19);
		int32_t L_160 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		SerpentEngineBase_Sb7_mE703FFB70B329F58CEB1BACD603BA1A1669E887D(__this, L_151, L_154, L_157, L_160, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = V_4;
		int32_t L_162 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (int32_t)L_162);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_163 = V_4;
		int32_t L_164 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (int32_t)L_164);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_165 = V_4;
		int32_t L_166 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (int32_t)L_166);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_167 = V_4;
		int32_t L_168 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (int32_t)L_168);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = V_4;
		NullCheck(L_169);
		int32_t L_170 = ((int32_t)20);
		int32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = V_4;
		NullCheck(L_172);
		int32_t L_173 = ((int32_t)21);
		int32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_175 = V_4;
		NullCheck(L_175);
		int32_t L_176 = ((int32_t)22);
		int32_t L_177 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = V_4;
		NullCheck(L_178);
		int32_t L_179 = ((int32_t)23);
		int32_t L_180 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		SerpentEngineBase_Sb6_m3D54F6A3672F39D2987F8FA789F2CACC751A71BC(__this, L_171, L_174, L_177, L_180, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = V_4;
		int32_t L_182 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (int32_t)L_182);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = V_4;
		int32_t L_184 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (int32_t)L_184);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_185 = V_4;
		int32_t L_186 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (int32_t)L_186);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_187 = V_4;
		int32_t L_188 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_187);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (int32_t)L_188);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = V_4;
		NullCheck(L_189);
		int32_t L_190 = ((int32_t)24);
		int32_t L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = V_4;
		NullCheck(L_192);
		int32_t L_193 = ((int32_t)25);
		int32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = V_4;
		NullCheck(L_195);
		int32_t L_196 = ((int32_t)26);
		int32_t L_197 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_198 = V_4;
		NullCheck(L_198);
		int32_t L_199 = ((int32_t)27);
		int32_t L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		SerpentEngineBase_Sb5_m2D2CCC0A769F88DB30EB039DAA7C388F7F456AB0(__this, L_191, L_194, L_197, L_200, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = V_4;
		int32_t L_202 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (int32_t)L_202);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_203 = V_4;
		int32_t L_204 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_203);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (int32_t)L_204);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_205 = V_4;
		int32_t L_206 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (int32_t)L_206);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = V_4;
		int32_t L_208 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (int32_t)L_208);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_209 = V_4;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)28);
		int32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = V_4;
		NullCheck(L_212);
		int32_t L_213 = ((int32_t)29);
		int32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_215 = V_4;
		NullCheck(L_215);
		int32_t L_216 = ((int32_t)30);
		int32_t L_217 = (L_215)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_218 = V_4;
		NullCheck(L_218);
		int32_t L_219 = ((int32_t)31);
		int32_t L_220 = (L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		SerpentEngineBase_Sb4_mD85D11D4803C864407D51D6B93956D21A6666BCE(__this, L_211, L_214, L_217, L_220, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = V_4;
		int32_t L_222 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_221);
		(L_221)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (int32_t)L_222);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_223 = V_4;
		int32_t L_224 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_223);
		(L_223)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (int32_t)L_224);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_225 = V_4;
		int32_t L_226 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (int32_t)L_226);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_227 = V_4;
		int32_t L_228 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_227);
		(L_227)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (int32_t)L_228);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_229 = V_4;
		NullCheck(L_229);
		int32_t L_230 = ((int32_t)32);
		int32_t L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = V_4;
		NullCheck(L_232);
		int32_t L_233 = ((int32_t)33);
		int32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_235 = V_4;
		NullCheck(L_235);
		int32_t L_236 = ((int32_t)34);
		int32_t L_237 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_236));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_238 = V_4;
		NullCheck(L_238);
		int32_t L_239 = ((int32_t)35);
		int32_t L_240 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		SerpentEngineBase_Sb3_m12D2C13C215915C24A4D9768ACA28F39C6E32BB4(__this, L_231, L_234, L_237, L_240, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = V_4;
		int32_t L_242 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_241);
		(L_241)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)L_242);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_243 = V_4;
		int32_t L_244 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_243);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (int32_t)L_244);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_245 = V_4;
		int32_t L_246 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_245);
		(L_245)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (int32_t)L_246);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_247 = V_4;
		int32_t L_248 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_247);
		(L_247)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (int32_t)L_248);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = V_4;
		NullCheck(L_249);
		int32_t L_250 = ((int32_t)36);
		int32_t L_251 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = V_4;
		NullCheck(L_252);
		int32_t L_253 = ((int32_t)37);
		int32_t L_254 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_255 = V_4;
		NullCheck(L_255);
		int32_t L_256 = ((int32_t)38);
		int32_t L_257 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_258 = V_4;
		NullCheck(L_258);
		int32_t L_259 = ((int32_t)39);
		int32_t L_260 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		SerpentEngineBase_Sb2_m8F42880707930B40B23FB1A537C9B888C46485CE(__this, L_251, L_254, L_257, L_260, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = V_4;
		int32_t L_262 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_261);
		(L_261)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (int32_t)L_262);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_263 = V_4;
		int32_t L_264 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_263);
		(L_263)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (int32_t)L_264);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_265 = V_4;
		int32_t L_266 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_265);
		(L_265)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (int32_t)L_266);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = V_4;
		int32_t L_268 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_267);
		(L_267)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (int32_t)L_268);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = V_4;
		NullCheck(L_269);
		int32_t L_270 = ((int32_t)40);
		int32_t L_271 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = V_4;
		NullCheck(L_272);
		int32_t L_273 = ((int32_t)41);
		int32_t L_274 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_275 = V_4;
		NullCheck(L_275);
		int32_t L_276 = ((int32_t)42);
		int32_t L_277 = (L_275)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_278 = V_4;
		NullCheck(L_278);
		int32_t L_279 = ((int32_t)43);
		int32_t L_280 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		SerpentEngineBase_Sb1_m396DE687CBFB05AB79224ED7E9F353046F9E87B5(__this, L_271, L_274, L_277, L_280, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_281 = V_4;
		int32_t L_282 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_281);
		(L_281)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (int32_t)L_282);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_283 = V_4;
		int32_t L_284 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_283);
		(L_283)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (int32_t)L_284);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_285 = V_4;
		int32_t L_286 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_285);
		(L_285)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (int32_t)L_286);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_287 = V_4;
		int32_t L_288 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_287);
		(L_287)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (int32_t)L_288);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_289 = V_4;
		NullCheck(L_289);
		int32_t L_290 = ((int32_t)44);
		int32_t L_291 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = V_4;
		NullCheck(L_292);
		int32_t L_293 = ((int32_t)45);
		int32_t L_294 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_295 = V_4;
		NullCheck(L_295);
		int32_t L_296 = ((int32_t)46);
		int32_t L_297 = (L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_296));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_298 = V_4;
		NullCheck(L_298);
		int32_t L_299 = ((int32_t)47);
		int32_t L_300 = (L_298)->GetAt(static_cast<il2cpp_array_size_t>(L_299));
		SerpentEngineBase_Sb0_m6D2A0FE6156CE012727DC52B39AFA8C4DC308E6E(__this, L_291, L_294, L_297, L_300, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_301 = V_4;
		int32_t L_302 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_301);
		(L_301)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (int32_t)L_302);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_303 = V_4;
		int32_t L_304 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_303);
		(L_303)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (int32_t)L_304);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_305 = V_4;
		int32_t L_306 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_305);
		(L_305)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (int32_t)L_306);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_307 = V_4;
		int32_t L_308 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_307);
		(L_307)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (int32_t)L_308);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_309 = V_4;
		NullCheck(L_309);
		int32_t L_310 = ((int32_t)48);
		int32_t L_311 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_312 = V_4;
		NullCheck(L_312);
		int32_t L_313 = ((int32_t)49);
		int32_t L_314 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_315 = V_4;
		NullCheck(L_315);
		int32_t L_316 = ((int32_t)50);
		int32_t L_317 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_318 = V_4;
		NullCheck(L_318);
		int32_t L_319 = ((int32_t)51);
		int32_t L_320 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_319));
		SerpentEngineBase_Sb7_mE703FFB70B329F58CEB1BACD603BA1A1669E887D(__this, L_311, L_314, L_317, L_320, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = V_4;
		int32_t L_322 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_321);
		(L_321)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (int32_t)L_322);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_323 = V_4;
		int32_t L_324 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_323);
		(L_323)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)49)), (int32_t)L_324);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_325 = V_4;
		int32_t L_326 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_325);
		(L_325)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)50)), (int32_t)L_326);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_327 = V_4;
		int32_t L_328 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_327);
		(L_327)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)51)), (int32_t)L_328);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_329 = V_4;
		NullCheck(L_329);
		int32_t L_330 = ((int32_t)52);
		int32_t L_331 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = V_4;
		NullCheck(L_332);
		int32_t L_333 = ((int32_t)53);
		int32_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_335 = V_4;
		NullCheck(L_335);
		int32_t L_336 = ((int32_t)54);
		int32_t L_337 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_338 = V_4;
		NullCheck(L_338);
		int32_t L_339 = ((int32_t)55);
		int32_t L_340 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		SerpentEngineBase_Sb6_m3D54F6A3672F39D2987F8FA789F2CACC751A71BC(__this, L_331, L_334, L_337, L_340, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = V_4;
		int32_t L_342 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_341);
		(L_341)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)52)), (int32_t)L_342);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_343 = V_4;
		int32_t L_344 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_343);
		(L_343)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)53)), (int32_t)L_344);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_345 = V_4;
		int32_t L_346 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_345);
		(L_345)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)54)), (int32_t)L_346);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_347 = V_4;
		int32_t L_348 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_347);
		(L_347)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)55)), (int32_t)L_348);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_349 = V_4;
		NullCheck(L_349);
		int32_t L_350 = ((int32_t)56);
		int32_t L_351 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_352 = V_4;
		NullCheck(L_352);
		int32_t L_353 = ((int32_t)57);
		int32_t L_354 = (L_352)->GetAt(static_cast<il2cpp_array_size_t>(L_353));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_355 = V_4;
		NullCheck(L_355);
		int32_t L_356 = ((int32_t)58);
		int32_t L_357 = (L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_356));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_358 = V_4;
		NullCheck(L_358);
		int32_t L_359 = ((int32_t)59);
		int32_t L_360 = (L_358)->GetAt(static_cast<il2cpp_array_size_t>(L_359));
		SerpentEngineBase_Sb5_m2D2CCC0A769F88DB30EB039DAA7C388F7F456AB0(__this, L_351, L_354, L_357, L_360, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = V_4;
		int32_t L_362 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_361);
		(L_361)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)56)), (int32_t)L_362);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_363 = V_4;
		int32_t L_364 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_363);
		(L_363)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)57)), (int32_t)L_364);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_365 = V_4;
		int32_t L_366 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_365);
		(L_365)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)58)), (int32_t)L_366);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_367 = V_4;
		int32_t L_368 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_367);
		(L_367)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)59)), (int32_t)L_368);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = V_4;
		NullCheck(L_369);
		int32_t L_370 = ((int32_t)60);
		int32_t L_371 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = V_4;
		NullCheck(L_372);
		int32_t L_373 = ((int32_t)61);
		int32_t L_374 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_375 = V_4;
		NullCheck(L_375);
		int32_t L_376 = ((int32_t)62);
		int32_t L_377 = (L_375)->GetAt(static_cast<il2cpp_array_size_t>(L_376));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_378 = V_4;
		NullCheck(L_378);
		int32_t L_379 = ((int32_t)63);
		int32_t L_380 = (L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_379));
		SerpentEngineBase_Sb4_mD85D11D4803C864407D51D6B93956D21A6666BCE(__this, L_371, L_374, L_377, L_380, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_381 = V_4;
		int32_t L_382 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_381);
		(L_381)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)60)), (int32_t)L_382);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_383 = V_4;
		int32_t L_384 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_383);
		(L_383)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)61)), (int32_t)L_384);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_385 = V_4;
		int32_t L_386 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_385);
		(L_385)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)62)), (int32_t)L_386);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_387 = V_4;
		int32_t L_388 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_387);
		(L_387)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)63)), (int32_t)L_388);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_389 = V_4;
		NullCheck(L_389);
		int32_t L_390 = ((int32_t)64);
		int32_t L_391 = (L_389)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_392 = V_4;
		NullCheck(L_392);
		int32_t L_393 = ((int32_t)65);
		int32_t L_394 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_395 = V_4;
		NullCheck(L_395);
		int32_t L_396 = ((int32_t)66);
		int32_t L_397 = (L_395)->GetAt(static_cast<il2cpp_array_size_t>(L_396));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_398 = V_4;
		NullCheck(L_398);
		int32_t L_399 = ((int32_t)67);
		int32_t L_400 = (L_398)->GetAt(static_cast<il2cpp_array_size_t>(L_399));
		SerpentEngineBase_Sb3_m12D2C13C215915C24A4D9768ACA28F39C6E32BB4(__this, L_391, L_394, L_397, L_400, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = V_4;
		int32_t L_402 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_401);
		(L_401)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)64)), (int32_t)L_402);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_403 = V_4;
		int32_t L_404 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_403);
		(L_403)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)65)), (int32_t)L_404);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_405 = V_4;
		int32_t L_406 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_405);
		(L_405)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)66)), (int32_t)L_406);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_407 = V_4;
		int32_t L_408 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_407);
		(L_407)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)67)), (int32_t)L_408);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = V_4;
		NullCheck(L_409);
		int32_t L_410 = ((int32_t)68);
		int32_t L_411 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = V_4;
		NullCheck(L_412);
		int32_t L_413 = ((int32_t)69);
		int32_t L_414 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_415 = V_4;
		NullCheck(L_415);
		int32_t L_416 = ((int32_t)70);
		int32_t L_417 = (L_415)->GetAt(static_cast<il2cpp_array_size_t>(L_416));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_418 = V_4;
		NullCheck(L_418);
		int32_t L_419 = ((int32_t)71);
		int32_t L_420 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		SerpentEngineBase_Sb2_m8F42880707930B40B23FB1A537C9B888C46485CE(__this, L_411, L_414, L_417, L_420, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_421 = V_4;
		int32_t L_422 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_421);
		(L_421)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)68)), (int32_t)L_422);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_423 = V_4;
		int32_t L_424 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_423);
		(L_423)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)69)), (int32_t)L_424);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_425 = V_4;
		int32_t L_426 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_425);
		(L_425)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)70)), (int32_t)L_426);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_427 = V_4;
		int32_t L_428 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_427);
		(L_427)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)71)), (int32_t)L_428);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_429 = V_4;
		NullCheck(L_429);
		int32_t L_430 = ((int32_t)72);
		int32_t L_431 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = V_4;
		NullCheck(L_432);
		int32_t L_433 = ((int32_t)73);
		int32_t L_434 = (L_432)->GetAt(static_cast<il2cpp_array_size_t>(L_433));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_435 = V_4;
		NullCheck(L_435);
		int32_t L_436 = ((int32_t)74);
		int32_t L_437 = (L_435)->GetAt(static_cast<il2cpp_array_size_t>(L_436));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_438 = V_4;
		NullCheck(L_438);
		int32_t L_439 = ((int32_t)75);
		int32_t L_440 = (L_438)->GetAt(static_cast<il2cpp_array_size_t>(L_439));
		SerpentEngineBase_Sb1_m396DE687CBFB05AB79224ED7E9F353046F9E87B5(__this, L_431, L_434, L_437, L_440, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_441 = V_4;
		int32_t L_442 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_441);
		(L_441)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)72)), (int32_t)L_442);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_443 = V_4;
		int32_t L_444 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_443);
		(L_443)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)73)), (int32_t)L_444);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_445 = V_4;
		int32_t L_446 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_445);
		(L_445)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)74)), (int32_t)L_446);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_447 = V_4;
		int32_t L_448 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_447);
		(L_447)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)75)), (int32_t)L_448);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_449 = V_4;
		NullCheck(L_449);
		int32_t L_450 = ((int32_t)76);
		int32_t L_451 = (L_449)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = V_4;
		NullCheck(L_452);
		int32_t L_453 = ((int32_t)77);
		int32_t L_454 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_453));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_455 = V_4;
		NullCheck(L_455);
		int32_t L_456 = ((int32_t)78);
		int32_t L_457 = (L_455)->GetAt(static_cast<il2cpp_array_size_t>(L_456));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_458 = V_4;
		NullCheck(L_458);
		int32_t L_459 = ((int32_t)79);
		int32_t L_460 = (L_458)->GetAt(static_cast<il2cpp_array_size_t>(L_459));
		SerpentEngineBase_Sb0_m6D2A0FE6156CE012727DC52B39AFA8C4DC308E6E(__this, L_451, L_454, L_457, L_460, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_461 = V_4;
		int32_t L_462 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_461);
		(L_461)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)76)), (int32_t)L_462);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_463 = V_4;
		int32_t L_464 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_463);
		(L_463)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)77)), (int32_t)L_464);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_465 = V_4;
		int32_t L_466 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_465);
		(L_465)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)78)), (int32_t)L_466);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_467 = V_4;
		int32_t L_468 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_467);
		(L_467)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)79)), (int32_t)L_468);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_469 = V_4;
		NullCheck(L_469);
		int32_t L_470 = ((int32_t)80);
		int32_t L_471 = (L_469)->GetAt(static_cast<il2cpp_array_size_t>(L_470));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_472 = V_4;
		NullCheck(L_472);
		int32_t L_473 = ((int32_t)81);
		int32_t L_474 = (L_472)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_475 = V_4;
		NullCheck(L_475);
		int32_t L_476 = ((int32_t)82);
		int32_t L_477 = (L_475)->GetAt(static_cast<il2cpp_array_size_t>(L_476));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_478 = V_4;
		NullCheck(L_478);
		int32_t L_479 = ((int32_t)83);
		int32_t L_480 = (L_478)->GetAt(static_cast<il2cpp_array_size_t>(L_479));
		SerpentEngineBase_Sb7_mE703FFB70B329F58CEB1BACD603BA1A1669E887D(__this, L_471, L_474, L_477, L_480, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_481 = V_4;
		int32_t L_482 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_481);
		(L_481)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)80)), (int32_t)L_482);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_483 = V_4;
		int32_t L_484 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_483);
		(L_483)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)81)), (int32_t)L_484);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_485 = V_4;
		int32_t L_486 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_485);
		(L_485)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)82)), (int32_t)L_486);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_487 = V_4;
		int32_t L_488 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_487);
		(L_487)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)83)), (int32_t)L_488);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_489 = V_4;
		NullCheck(L_489);
		int32_t L_490 = ((int32_t)84);
		int32_t L_491 = (L_489)->GetAt(static_cast<il2cpp_array_size_t>(L_490));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = V_4;
		NullCheck(L_492);
		int32_t L_493 = ((int32_t)85);
		int32_t L_494 = (L_492)->GetAt(static_cast<il2cpp_array_size_t>(L_493));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_495 = V_4;
		NullCheck(L_495);
		int32_t L_496 = ((int32_t)86);
		int32_t L_497 = (L_495)->GetAt(static_cast<il2cpp_array_size_t>(L_496));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_498 = V_4;
		NullCheck(L_498);
		int32_t L_499 = ((int32_t)87);
		int32_t L_500 = (L_498)->GetAt(static_cast<il2cpp_array_size_t>(L_499));
		SerpentEngineBase_Sb6_m3D54F6A3672F39D2987F8FA789F2CACC751A71BC(__this, L_491, L_494, L_497, L_500, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_501 = V_4;
		int32_t L_502 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_501);
		(L_501)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)84)), (int32_t)L_502);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_503 = V_4;
		int32_t L_504 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_503);
		(L_503)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)85)), (int32_t)L_504);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_505 = V_4;
		int32_t L_506 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_505);
		(L_505)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)86)), (int32_t)L_506);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_507 = V_4;
		int32_t L_508 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_507);
		(L_507)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)87)), (int32_t)L_508);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_509 = V_4;
		NullCheck(L_509);
		int32_t L_510 = ((int32_t)88);
		int32_t L_511 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_510));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_512 = V_4;
		NullCheck(L_512);
		int32_t L_513 = ((int32_t)89);
		int32_t L_514 = (L_512)->GetAt(static_cast<il2cpp_array_size_t>(L_513));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_515 = V_4;
		NullCheck(L_515);
		int32_t L_516 = ((int32_t)90);
		int32_t L_517 = (L_515)->GetAt(static_cast<il2cpp_array_size_t>(L_516));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_518 = V_4;
		NullCheck(L_518);
		int32_t L_519 = ((int32_t)91);
		int32_t L_520 = (L_518)->GetAt(static_cast<il2cpp_array_size_t>(L_519));
		SerpentEngineBase_Sb5_m2D2CCC0A769F88DB30EB039DAA7C388F7F456AB0(__this, L_511, L_514, L_517, L_520, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = V_4;
		int32_t L_522 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_521);
		(L_521)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)88)), (int32_t)L_522);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_523 = V_4;
		int32_t L_524 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_523);
		(L_523)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)89)), (int32_t)L_524);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_525 = V_4;
		int32_t L_526 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_525);
		(L_525)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)90)), (int32_t)L_526);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_527 = V_4;
		int32_t L_528 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_527);
		(L_527)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)91)), (int32_t)L_528);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = V_4;
		NullCheck(L_529);
		int32_t L_530 = ((int32_t)92);
		int32_t L_531 = (L_529)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_532 = V_4;
		NullCheck(L_532);
		int32_t L_533 = ((int32_t)93);
		int32_t L_534 = (L_532)->GetAt(static_cast<il2cpp_array_size_t>(L_533));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_535 = V_4;
		NullCheck(L_535);
		int32_t L_536 = ((int32_t)94);
		int32_t L_537 = (L_535)->GetAt(static_cast<il2cpp_array_size_t>(L_536));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_538 = V_4;
		NullCheck(L_538);
		int32_t L_539 = ((int32_t)95);
		int32_t L_540 = (L_538)->GetAt(static_cast<il2cpp_array_size_t>(L_539));
		SerpentEngineBase_Sb4_mD85D11D4803C864407D51D6B93956D21A6666BCE(__this, L_531, L_534, L_537, L_540, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = V_4;
		int32_t L_542 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_541);
		(L_541)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)92)), (int32_t)L_542);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_543 = V_4;
		int32_t L_544 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_543);
		(L_543)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)93)), (int32_t)L_544);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_545 = V_4;
		int32_t L_546 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_545);
		(L_545)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)94)), (int32_t)L_546);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_547 = V_4;
		int32_t L_548 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_547);
		(L_547)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)95)), (int32_t)L_548);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_549 = V_4;
		NullCheck(L_549);
		int32_t L_550 = ((int32_t)96);
		int32_t L_551 = (L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_552 = V_4;
		NullCheck(L_552);
		int32_t L_553 = ((int32_t)97);
		int32_t L_554 = (L_552)->GetAt(static_cast<il2cpp_array_size_t>(L_553));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_555 = V_4;
		NullCheck(L_555);
		int32_t L_556 = ((int32_t)98);
		int32_t L_557 = (L_555)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_558 = V_4;
		NullCheck(L_558);
		int32_t L_559 = ((int32_t)99);
		int32_t L_560 = (L_558)->GetAt(static_cast<il2cpp_array_size_t>(L_559));
		SerpentEngineBase_Sb3_m12D2C13C215915C24A4D9768ACA28F39C6E32BB4(__this, L_551, L_554, L_557, L_560, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_561 = V_4;
		int32_t L_562 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_561);
		(L_561)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)96)), (int32_t)L_562);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_563 = V_4;
		int32_t L_564 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_563);
		(L_563)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)97)), (int32_t)L_564);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_565 = V_4;
		int32_t L_566 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_565);
		(L_565)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)98)), (int32_t)L_566);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_567 = V_4;
		int32_t L_568 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_567);
		(L_567)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)99)), (int32_t)L_568);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_569 = V_4;
		NullCheck(L_569);
		int32_t L_570 = ((int32_t)100);
		int32_t L_571 = (L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_572 = V_4;
		NullCheck(L_572);
		int32_t L_573 = ((int32_t)101);
		int32_t L_574 = (L_572)->GetAt(static_cast<il2cpp_array_size_t>(L_573));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_575 = V_4;
		NullCheck(L_575);
		int32_t L_576 = ((int32_t)102);
		int32_t L_577 = (L_575)->GetAt(static_cast<il2cpp_array_size_t>(L_576));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_578 = V_4;
		NullCheck(L_578);
		int32_t L_579 = ((int32_t)103);
		int32_t L_580 = (L_578)->GetAt(static_cast<il2cpp_array_size_t>(L_579));
		SerpentEngineBase_Sb2_m8F42880707930B40B23FB1A537C9B888C46485CE(__this, L_571, L_574, L_577, L_580, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = V_4;
		int32_t L_582 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_581);
		(L_581)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)100)), (int32_t)L_582);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_583 = V_4;
		int32_t L_584 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_583);
		(L_583)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)101)), (int32_t)L_584);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_585 = V_4;
		int32_t L_586 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_585);
		(L_585)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)102)), (int32_t)L_586);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_587 = V_4;
		int32_t L_588 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_587);
		(L_587)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)103)), (int32_t)L_588);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_589 = V_4;
		NullCheck(L_589);
		int32_t L_590 = ((int32_t)104);
		int32_t L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_592 = V_4;
		NullCheck(L_592);
		int32_t L_593 = ((int32_t)105);
		int32_t L_594 = (L_592)->GetAt(static_cast<il2cpp_array_size_t>(L_593));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_595 = V_4;
		NullCheck(L_595);
		int32_t L_596 = ((int32_t)106);
		int32_t L_597 = (L_595)->GetAt(static_cast<il2cpp_array_size_t>(L_596));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_598 = V_4;
		NullCheck(L_598);
		int32_t L_599 = ((int32_t)107);
		int32_t L_600 = (L_598)->GetAt(static_cast<il2cpp_array_size_t>(L_599));
		SerpentEngineBase_Sb1_m396DE687CBFB05AB79224ED7E9F353046F9E87B5(__this, L_591, L_594, L_597, L_600, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_601 = V_4;
		int32_t L_602 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_601);
		(L_601)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)104)), (int32_t)L_602);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_603 = V_4;
		int32_t L_604 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_603);
		(L_603)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)105)), (int32_t)L_604);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_605 = V_4;
		int32_t L_606 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_605);
		(L_605)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)106)), (int32_t)L_606);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_607 = V_4;
		int32_t L_608 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_607);
		(L_607)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)107)), (int32_t)L_608);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_609 = V_4;
		NullCheck(L_609);
		int32_t L_610 = ((int32_t)108);
		int32_t L_611 = (L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_612 = V_4;
		NullCheck(L_612);
		int32_t L_613 = ((int32_t)109);
		int32_t L_614 = (L_612)->GetAt(static_cast<il2cpp_array_size_t>(L_613));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_615 = V_4;
		NullCheck(L_615);
		int32_t L_616 = ((int32_t)110);
		int32_t L_617 = (L_615)->GetAt(static_cast<il2cpp_array_size_t>(L_616));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_618 = V_4;
		NullCheck(L_618);
		int32_t L_619 = ((int32_t)111);
		int32_t L_620 = (L_618)->GetAt(static_cast<il2cpp_array_size_t>(L_619));
		SerpentEngineBase_Sb0_m6D2A0FE6156CE012727DC52B39AFA8C4DC308E6E(__this, L_611, L_614, L_617, L_620, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_621 = V_4;
		int32_t L_622 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_621);
		(L_621)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)108)), (int32_t)L_622);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_623 = V_4;
		int32_t L_624 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_623);
		(L_623)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)109)), (int32_t)L_624);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_625 = V_4;
		int32_t L_626 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_625);
		(L_625)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)110)), (int32_t)L_626);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_627 = V_4;
		int32_t L_628 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_627);
		(L_627)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)111)), (int32_t)L_628);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = V_4;
		NullCheck(L_629);
		int32_t L_630 = ((int32_t)112);
		int32_t L_631 = (L_629)->GetAt(static_cast<il2cpp_array_size_t>(L_630));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_632 = V_4;
		NullCheck(L_632);
		int32_t L_633 = ((int32_t)113);
		int32_t L_634 = (L_632)->GetAt(static_cast<il2cpp_array_size_t>(L_633));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_635 = V_4;
		NullCheck(L_635);
		int32_t L_636 = ((int32_t)114);
		int32_t L_637 = (L_635)->GetAt(static_cast<il2cpp_array_size_t>(L_636));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_638 = V_4;
		NullCheck(L_638);
		int32_t L_639 = ((int32_t)115);
		int32_t L_640 = (L_638)->GetAt(static_cast<il2cpp_array_size_t>(L_639));
		SerpentEngineBase_Sb7_mE703FFB70B329F58CEB1BACD603BA1A1669E887D(__this, L_631, L_634, L_637, L_640, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_641 = V_4;
		int32_t L_642 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_641);
		(L_641)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)112)), (int32_t)L_642);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_643 = V_4;
		int32_t L_644 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_643);
		(L_643)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)113)), (int32_t)L_644);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_645 = V_4;
		int32_t L_646 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_645);
		(L_645)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)114)), (int32_t)L_646);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_647 = V_4;
		int32_t L_648 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_647);
		(L_647)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)115)), (int32_t)L_648);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_649 = V_4;
		NullCheck(L_649);
		int32_t L_650 = ((int32_t)116);
		int32_t L_651 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_650));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_652 = V_4;
		NullCheck(L_652);
		int32_t L_653 = ((int32_t)117);
		int32_t L_654 = (L_652)->GetAt(static_cast<il2cpp_array_size_t>(L_653));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_655 = V_4;
		NullCheck(L_655);
		int32_t L_656 = ((int32_t)118);
		int32_t L_657 = (L_655)->GetAt(static_cast<il2cpp_array_size_t>(L_656));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_658 = V_4;
		NullCheck(L_658);
		int32_t L_659 = ((int32_t)119);
		int32_t L_660 = (L_658)->GetAt(static_cast<il2cpp_array_size_t>(L_659));
		SerpentEngineBase_Sb6_m3D54F6A3672F39D2987F8FA789F2CACC751A71BC(__this, L_651, L_654, L_657, L_660, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_661 = V_4;
		int32_t L_662 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_661);
		(L_661)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)116)), (int32_t)L_662);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_663 = V_4;
		int32_t L_664 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_663);
		(L_663)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)117)), (int32_t)L_664);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_665 = V_4;
		int32_t L_666 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_665);
		(L_665)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)118)), (int32_t)L_666);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_667 = V_4;
		int32_t L_668 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_667);
		(L_667)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)119)), (int32_t)L_668);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_669 = V_4;
		NullCheck(L_669);
		int32_t L_670 = ((int32_t)120);
		int32_t L_671 = (L_669)->GetAt(static_cast<il2cpp_array_size_t>(L_670));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_672 = V_4;
		NullCheck(L_672);
		int32_t L_673 = ((int32_t)121);
		int32_t L_674 = (L_672)->GetAt(static_cast<il2cpp_array_size_t>(L_673));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_675 = V_4;
		NullCheck(L_675);
		int32_t L_676 = ((int32_t)122);
		int32_t L_677 = (L_675)->GetAt(static_cast<il2cpp_array_size_t>(L_676));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_678 = V_4;
		NullCheck(L_678);
		int32_t L_679 = ((int32_t)123);
		int32_t L_680 = (L_678)->GetAt(static_cast<il2cpp_array_size_t>(L_679));
		SerpentEngineBase_Sb5_m2D2CCC0A769F88DB30EB039DAA7C388F7F456AB0(__this, L_671, L_674, L_677, L_680, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_681 = V_4;
		int32_t L_682 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_681);
		(L_681)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)120)), (int32_t)L_682);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_683 = V_4;
		int32_t L_684 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_683);
		(L_683)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)121)), (int32_t)L_684);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_685 = V_4;
		int32_t L_686 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_685);
		(L_685)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)122)), (int32_t)L_686);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_687 = V_4;
		int32_t L_688 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_687);
		(L_687)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)123)), (int32_t)L_688);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_689 = V_4;
		NullCheck(L_689);
		int32_t L_690 = ((int32_t)124);
		int32_t L_691 = (L_689)->GetAt(static_cast<il2cpp_array_size_t>(L_690));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_692 = V_4;
		NullCheck(L_692);
		int32_t L_693 = ((int32_t)125);
		int32_t L_694 = (L_692)->GetAt(static_cast<il2cpp_array_size_t>(L_693));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_695 = V_4;
		NullCheck(L_695);
		int32_t L_696 = ((int32_t)126);
		int32_t L_697 = (L_695)->GetAt(static_cast<il2cpp_array_size_t>(L_696));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_698 = V_4;
		NullCheck(L_698);
		int32_t L_699 = ((int32_t)127);
		int32_t L_700 = (L_698)->GetAt(static_cast<il2cpp_array_size_t>(L_699));
		SerpentEngineBase_Sb4_mD85D11D4803C864407D51D6B93956D21A6666BCE(__this, L_691, L_694, L_697, L_700, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_701 = V_4;
		int32_t L_702 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_701);
		(L_701)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)124)), (int32_t)L_702);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_703 = V_4;
		int32_t L_704 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_703);
		(L_703)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)125)), (int32_t)L_704);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_705 = V_4;
		int32_t L_706 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_705);
		(L_705)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)126)), (int32_t)L_706);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_707 = V_4;
		int32_t L_708 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_707);
		(L_707)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)127)), (int32_t)L_708);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_709 = V_4;
		NullCheck(L_709);
		int32_t L_710 = ((int32_t)128);
		int32_t L_711 = (L_709)->GetAt(static_cast<il2cpp_array_size_t>(L_710));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_712 = V_4;
		NullCheck(L_712);
		int32_t L_713 = ((int32_t)129);
		int32_t L_714 = (L_712)->GetAt(static_cast<il2cpp_array_size_t>(L_713));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_715 = V_4;
		NullCheck(L_715);
		int32_t L_716 = ((int32_t)130);
		int32_t L_717 = (L_715)->GetAt(static_cast<il2cpp_array_size_t>(L_716));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_718 = V_4;
		NullCheck(L_718);
		int32_t L_719 = ((int32_t)131);
		int32_t L_720 = (L_718)->GetAt(static_cast<il2cpp_array_size_t>(L_719));
		SerpentEngineBase_Sb3_m12D2C13C215915C24A4D9768ACA28F39C6E32BB4(__this, L_711, L_714, L_717, L_720, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_721 = V_4;
		int32_t L_722 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		NullCheck(L_721);
		(L_721)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)128)), (int32_t)L_722);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_723 = V_4;
		int32_t L_724 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		NullCheck(L_723);
		(L_723)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)129)), (int32_t)L_724);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_725 = V_4;
		int32_t L_726 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		NullCheck(L_725);
		(L_725)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)130)), (int32_t)L_726);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_727 = V_4;
		int32_t L_728 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		NullCheck(L_727);
		(L_727)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)131)), (int32_t)L_728);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_729 = V_4;
		return L_729;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TnepresEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine_EncryptBlock_m5F7B38FA45F4641E509816CBB34E208163B41E31 (TnepresEngine_t425E9EFBC4AB32EC5E5EC5D6FEADB4F3BBB28FCE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_0, L_1, NULL);
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		int32_t L_4 = ___inOff1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input0;
		int32_t L_7 = ___inOff1;
		uint32_t L_8;
		L_8 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_6, ((int32_t)il2cpp_codegen_add(L_7, 8)), NULL);
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___input0;
		int32_t L_10 = ___inOff1;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_9, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)12))), NULL);
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_16);
		int32_t L_17 = 1;
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_20);
		int32_t L_21 = 2;
		int32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_24);
		int32_t L_25 = 3;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb0_m6D2A0FE6156CE012727DC52B39AFA8C4DC308E6E(__this, ((int32_t)(L_14^L_15)), ((int32_t)(L_18^L_19)), ((int32_t)(L_22^L_23)), ((int32_t)(L_26^L_27)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_28);
		int32_t L_29 = 4;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_32);
		int32_t L_33 = 5;
		int32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_36);
		int32_t L_37 = 6;
		int32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_40);
		int32_t L_41 = 7;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb1_m396DE687CBFB05AB79224ED7E9F353046F9E87B5(__this, ((int32_t)(L_30^L_31)), ((int32_t)(L_34^L_35)), ((int32_t)(L_38^L_39)), ((int32_t)(L_42^L_43)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_44);
		int32_t L_45 = 8;
		int32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)9);
		int32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		int32_t L_51 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_52);
		int32_t L_53 = ((int32_t)10);
		int32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		int32_t L_55 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_56);
		int32_t L_57 = ((int32_t)11);
		int32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m8F42880707930B40B23FB1A537C9B888C46485CE(__this, ((int32_t)(L_46^L_47)), ((int32_t)(L_50^L_51)), ((int32_t)(L_54^L_55)), ((int32_t)(L_58^L_59)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_60);
		int32_t L_61 = ((int32_t)12);
		int32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_64);
		int32_t L_65 = ((int32_t)13);
		int32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_68);
		int32_t L_69 = ((int32_t)14);
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		int32_t L_71 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_72);
		int32_t L_73 = ((int32_t)15);
		int32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m12D2C13C215915C24A4D9768ACA28F39C6E32BB4(__this, ((int32_t)(L_62^L_63)), ((int32_t)(L_66^L_67)), ((int32_t)(L_70^L_71)), ((int32_t)(L_74^L_75)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_76);
		int32_t L_77 = ((int32_t)16);
		int32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		int32_t L_79 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_80);
		int32_t L_81 = ((int32_t)17);
		int32_t L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		int32_t L_83 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_84);
		int32_t L_85 = ((int32_t)18);
		int32_t L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_88);
		int32_t L_89 = ((int32_t)19);
		int32_t L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		int32_t L_91 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb4_mD85D11D4803C864407D51D6B93956D21A6666BCE(__this, ((int32_t)(L_78^L_79)), ((int32_t)(L_82^L_83)), ((int32_t)(L_86^L_87)), ((int32_t)(L_90^L_91)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_92);
		int32_t L_93 = ((int32_t)20);
		int32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		int32_t L_95 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_96 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_96);
		int32_t L_97 = ((int32_t)21);
		int32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		int32_t L_99 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_100);
		int32_t L_101 = ((int32_t)22);
		int32_t L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_104);
		int32_t L_105 = ((int32_t)23);
		int32_t L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int32_t L_107 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m2D2CCC0A769F88DB30EB039DAA7C388F7F456AB0(__this, ((int32_t)(L_94^L_95)), ((int32_t)(L_98^L_99)), ((int32_t)(L_102^L_103)), ((int32_t)(L_106^L_107)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_108);
		int32_t L_109 = ((int32_t)24);
		int32_t L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		int32_t L_111 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_112);
		int32_t L_113 = ((int32_t)25);
		int32_t L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		int32_t L_115 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_116);
		int32_t L_117 = ((int32_t)26);
		int32_t L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		int32_t L_119 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_120);
		int32_t L_121 = ((int32_t)27);
		int32_t L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		int32_t L_123 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m3D54F6A3672F39D2987F8FA789F2CACC751A71BC(__this, ((int32_t)(L_110^L_111)), ((int32_t)(L_114^L_115)), ((int32_t)(L_118^L_119)), ((int32_t)(L_122^L_123)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_124);
		int32_t L_125 = ((int32_t)28);
		int32_t L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		int32_t L_127 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_128);
		int32_t L_129 = ((int32_t)29);
		int32_t L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		int32_t L_131 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_132);
		int32_t L_133 = ((int32_t)30);
		int32_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		int32_t L_135 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_136);
		int32_t L_137 = ((int32_t)31);
		int32_t L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		int32_t L_139 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb7_mE703FFB70B329F58CEB1BACD603BA1A1669E887D(__this, ((int32_t)(L_126^L_127)), ((int32_t)(L_130^L_131)), ((int32_t)(L_134^L_135)), ((int32_t)(L_138^L_139)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_140);
		int32_t L_141 = ((int32_t)32);
		int32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		int32_t L_143 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_144);
		int32_t L_145 = ((int32_t)33);
		int32_t L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_148);
		int32_t L_149 = ((int32_t)34);
		int32_t L_150 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_152);
		int32_t L_153 = ((int32_t)35);
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		int32_t L_155 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb0_m6D2A0FE6156CE012727DC52B39AFA8C4DC308E6E(__this, ((int32_t)(L_142^L_143)), ((int32_t)(L_146^L_147)), ((int32_t)(L_150^L_151)), ((int32_t)(L_154^L_155)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_156 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_156);
		int32_t L_157 = ((int32_t)36);
		int32_t L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		int32_t L_159 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_160 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_160);
		int32_t L_161 = ((int32_t)37);
		int32_t L_162 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		int32_t L_163 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_164 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_164);
		int32_t L_165 = ((int32_t)38);
		int32_t L_166 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		int32_t L_167 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_168);
		int32_t L_169 = ((int32_t)39);
		int32_t L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		int32_t L_171 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb1_m396DE687CBFB05AB79224ED7E9F353046F9E87B5(__this, ((int32_t)(L_158^L_159)), ((int32_t)(L_162^L_163)), ((int32_t)(L_166^L_167)), ((int32_t)(L_170^L_171)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_172);
		int32_t L_173 = ((int32_t)40);
		int32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		int32_t L_175 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_176 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_176);
		int32_t L_177 = ((int32_t)41);
		int32_t L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		int32_t L_179 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_180);
		int32_t L_181 = ((int32_t)42);
		int32_t L_182 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_184 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_184);
		int32_t L_185 = ((int32_t)43);
		int32_t L_186 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m8F42880707930B40B23FB1A537C9B888C46485CE(__this, ((int32_t)(L_174^L_175)), ((int32_t)(L_178^L_179)), ((int32_t)(L_182^L_183)), ((int32_t)(L_186^L_187)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_188);
		int32_t L_189 = ((int32_t)44);
		int32_t L_190 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		int32_t L_191 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_192);
		int32_t L_193 = ((int32_t)45);
		int32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_196 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_196);
		int32_t L_197 = ((int32_t)46);
		int32_t L_198 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_200 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_200);
		int32_t L_201 = ((int32_t)47);
		int32_t L_202 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		int32_t L_203 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m12D2C13C215915C24A4D9768ACA28F39C6E32BB4(__this, ((int32_t)(L_190^L_191)), ((int32_t)(L_194^L_195)), ((int32_t)(L_198^L_199)), ((int32_t)(L_202^L_203)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_204);
		int32_t L_205 = ((int32_t)48);
		int32_t L_206 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		int32_t L_207 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_208 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_208);
		int32_t L_209 = ((int32_t)49);
		int32_t L_210 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		int32_t L_211 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_212);
		int32_t L_213 = ((int32_t)50);
		int32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		int32_t L_215 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_216 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_216);
		int32_t L_217 = ((int32_t)51);
		int32_t L_218 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		int32_t L_219 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb4_mD85D11D4803C864407D51D6B93956D21A6666BCE(__this, ((int32_t)(L_206^L_207)), ((int32_t)(L_210^L_211)), ((int32_t)(L_214^L_215)), ((int32_t)(L_218^L_219)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_220 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_220);
		int32_t L_221 = ((int32_t)52);
		int32_t L_222 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		int32_t L_223 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_224 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_224);
		int32_t L_225 = ((int32_t)53);
		int32_t L_226 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_228 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_228);
		int32_t L_229 = ((int32_t)54);
		int32_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_232);
		int32_t L_233 = ((int32_t)55);
		int32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		int32_t L_235 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m2D2CCC0A769F88DB30EB039DAA7C388F7F456AB0(__this, ((int32_t)(L_222^L_223)), ((int32_t)(L_226^L_227)), ((int32_t)(L_230^L_231)), ((int32_t)(L_234^L_235)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_236 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_236);
		int32_t L_237 = ((int32_t)56);
		int32_t L_238 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		int32_t L_239 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_240 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_240);
		int32_t L_241 = ((int32_t)57);
		int32_t L_242 = (L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		int32_t L_243 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_244 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_244);
		int32_t L_245 = ((int32_t)58);
		int32_t L_246 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		int32_t L_247 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_248 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_248);
		int32_t L_249 = ((int32_t)59);
		int32_t L_250 = (L_248)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		int32_t L_251 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m3D54F6A3672F39D2987F8FA789F2CACC751A71BC(__this, ((int32_t)(L_238^L_239)), ((int32_t)(L_242^L_243)), ((int32_t)(L_246^L_247)), ((int32_t)(L_250^L_251)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_252);
		int32_t L_253 = ((int32_t)60);
		int32_t L_254 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		int32_t L_255 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_256 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_256);
		int32_t L_257 = ((int32_t)61);
		int32_t L_258 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		int32_t L_259 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_260 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_260);
		int32_t L_261 = ((int32_t)62);
		int32_t L_262 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_264 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_264);
		int32_t L_265 = ((int32_t)63);
		int32_t L_266 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		int32_t L_267 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb7_mE703FFB70B329F58CEB1BACD603BA1A1669E887D(__this, ((int32_t)(L_254^L_255)), ((int32_t)(L_258^L_259)), ((int32_t)(L_262^L_263)), ((int32_t)(L_266^L_267)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_268);
		int32_t L_269 = ((int32_t)64);
		int32_t L_270 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		int32_t L_271 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_272);
		int32_t L_273 = ((int32_t)65);
		int32_t L_274 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		int32_t L_275 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_276 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_276);
		int32_t L_277 = ((int32_t)66);
		int32_t L_278 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		int32_t L_279 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_280 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_280);
		int32_t L_281 = ((int32_t)67);
		int32_t L_282 = (L_280)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		int32_t L_283 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb0_m6D2A0FE6156CE012727DC52B39AFA8C4DC308E6E(__this, ((int32_t)(L_270^L_271)), ((int32_t)(L_274^L_275)), ((int32_t)(L_278^L_279)), ((int32_t)(L_282^L_283)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_284 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_284);
		int32_t L_285 = ((int32_t)68);
		int32_t L_286 = (L_284)->GetAt(static_cast<il2cpp_array_size_t>(L_285));
		int32_t L_287 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_288);
		int32_t L_289 = ((int32_t)69);
		int32_t L_290 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_289));
		int32_t L_291 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_292);
		int32_t L_293 = ((int32_t)70);
		int32_t L_294 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		int32_t L_295 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_296 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_296);
		int32_t L_297 = ((int32_t)71);
		int32_t L_298 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		int32_t L_299 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb1_m396DE687CBFB05AB79224ED7E9F353046F9E87B5(__this, ((int32_t)(L_286^L_287)), ((int32_t)(L_290^L_291)), ((int32_t)(L_294^L_295)), ((int32_t)(L_298^L_299)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_300 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_300);
		int32_t L_301 = ((int32_t)72);
		int32_t L_302 = (L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		int32_t L_303 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_304 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_304);
		int32_t L_305 = ((int32_t)73);
		int32_t L_306 = (L_304)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		int32_t L_307 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_308 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_308);
		int32_t L_309 = ((int32_t)74);
		int32_t L_310 = (L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		int32_t L_311 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_312 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_312);
		int32_t L_313 = ((int32_t)75);
		int32_t L_314 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		int32_t L_315 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m8F42880707930B40B23FB1A537C9B888C46485CE(__this, ((int32_t)(L_302^L_303)), ((int32_t)(L_306^L_307)), ((int32_t)(L_310^L_311)), ((int32_t)(L_314^L_315)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_316 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_316);
		int32_t L_317 = ((int32_t)76);
		int32_t L_318 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		int32_t L_319 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_320 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_320);
		int32_t L_321 = ((int32_t)77);
		int32_t L_322 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		int32_t L_323 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_324 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_324);
		int32_t L_325 = ((int32_t)78);
		int32_t L_326 = (L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_328 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_328);
		int32_t L_329 = ((int32_t)79);
		int32_t L_330 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		int32_t L_331 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m12D2C13C215915C24A4D9768ACA28F39C6E32BB4(__this, ((int32_t)(L_318^L_319)), ((int32_t)(L_322^L_323)), ((int32_t)(L_326^L_327)), ((int32_t)(L_330^L_331)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_332);
		int32_t L_333 = ((int32_t)80);
		int32_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		int32_t L_335 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_336 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_336);
		int32_t L_337 = ((int32_t)81);
		int32_t L_338 = (L_336)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		int32_t L_339 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_340 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_340);
		int32_t L_341 = ((int32_t)82);
		int32_t L_342 = (L_340)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		int32_t L_343 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_344 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_344);
		int32_t L_345 = ((int32_t)83);
		int32_t L_346 = (L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		int32_t L_347 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb4_mD85D11D4803C864407D51D6B93956D21A6666BCE(__this, ((int32_t)(L_334^L_335)), ((int32_t)(L_338^L_339)), ((int32_t)(L_342^L_343)), ((int32_t)(L_346^L_347)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_348 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_348);
		int32_t L_349 = ((int32_t)84);
		int32_t L_350 = (L_348)->GetAt(static_cast<il2cpp_array_size_t>(L_349));
		int32_t L_351 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_352 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_352);
		int32_t L_353 = ((int32_t)85);
		int32_t L_354 = (L_352)->GetAt(static_cast<il2cpp_array_size_t>(L_353));
		int32_t L_355 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_356 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_356);
		int32_t L_357 = ((int32_t)86);
		int32_t L_358 = (L_356)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		int32_t L_359 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_360 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_360);
		int32_t L_361 = ((int32_t)87);
		int32_t L_362 = (L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		int32_t L_363 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m2D2CCC0A769F88DB30EB039DAA7C388F7F456AB0(__this, ((int32_t)(L_350^L_351)), ((int32_t)(L_354^L_355)), ((int32_t)(L_358^L_359)), ((int32_t)(L_362^L_363)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_364 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_364);
		int32_t L_365 = ((int32_t)88);
		int32_t L_366 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_365));
		int32_t L_367 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_368 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_368);
		int32_t L_369 = ((int32_t)89);
		int32_t L_370 = (L_368)->GetAt(static_cast<il2cpp_array_size_t>(L_369));
		int32_t L_371 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_372);
		int32_t L_373 = ((int32_t)90);
		int32_t L_374 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		int32_t L_375 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_376 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_376);
		int32_t L_377 = ((int32_t)91);
		int32_t L_378 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_377));
		int32_t L_379 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m3D54F6A3672F39D2987F8FA789F2CACC751A71BC(__this, ((int32_t)(L_366^L_367)), ((int32_t)(L_370^L_371)), ((int32_t)(L_374^L_375)), ((int32_t)(L_378^L_379)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_380 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_380);
		int32_t L_381 = ((int32_t)92);
		int32_t L_382 = (L_380)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		int32_t L_383 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_384 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_384);
		int32_t L_385 = ((int32_t)93);
		int32_t L_386 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		int32_t L_387 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_388 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_388);
		int32_t L_389 = ((int32_t)94);
		int32_t L_390 = (L_388)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		int32_t L_391 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_392 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_392);
		int32_t L_393 = ((int32_t)95);
		int32_t L_394 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		int32_t L_395 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb7_mE703FFB70B329F58CEB1BACD603BA1A1669E887D(__this, ((int32_t)(L_382^L_383)), ((int32_t)(L_386^L_387)), ((int32_t)(L_390^L_391)), ((int32_t)(L_394^L_395)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_396 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_396);
		int32_t L_397 = ((int32_t)96);
		int32_t L_398 = (L_396)->GetAt(static_cast<il2cpp_array_size_t>(L_397));
		int32_t L_399 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_400 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_400);
		int32_t L_401 = ((int32_t)97);
		int32_t L_402 = (L_400)->GetAt(static_cast<il2cpp_array_size_t>(L_401));
		int32_t L_403 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_404 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_404);
		int32_t L_405 = ((int32_t)98);
		int32_t L_406 = (L_404)->GetAt(static_cast<il2cpp_array_size_t>(L_405));
		int32_t L_407 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_408 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_408);
		int32_t L_409 = ((int32_t)99);
		int32_t L_410 = (L_408)->GetAt(static_cast<il2cpp_array_size_t>(L_409));
		int32_t L_411 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb0_m6D2A0FE6156CE012727DC52B39AFA8C4DC308E6E(__this, ((int32_t)(L_398^L_399)), ((int32_t)(L_402^L_403)), ((int32_t)(L_406^L_407)), ((int32_t)(L_410^L_411)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_412);
		int32_t L_413 = ((int32_t)100);
		int32_t L_414 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		int32_t L_415 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_416 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_416);
		int32_t L_417 = ((int32_t)101);
		int32_t L_418 = (L_416)->GetAt(static_cast<il2cpp_array_size_t>(L_417));
		int32_t L_419 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_420 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_420);
		int32_t L_421 = ((int32_t)102);
		int32_t L_422 = (L_420)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		int32_t L_423 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_424 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_424);
		int32_t L_425 = ((int32_t)103);
		int32_t L_426 = (L_424)->GetAt(static_cast<il2cpp_array_size_t>(L_425));
		int32_t L_427 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb1_m396DE687CBFB05AB79224ED7E9F353046F9E87B5(__this, ((int32_t)(L_414^L_415)), ((int32_t)(L_418^L_419)), ((int32_t)(L_422^L_423)), ((int32_t)(L_426^L_427)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_428 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_428);
		int32_t L_429 = ((int32_t)104);
		int32_t L_430 = (L_428)->GetAt(static_cast<il2cpp_array_size_t>(L_429));
		int32_t L_431 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_432);
		int32_t L_433 = ((int32_t)105);
		int32_t L_434 = (L_432)->GetAt(static_cast<il2cpp_array_size_t>(L_433));
		int32_t L_435 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_436 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_436);
		int32_t L_437 = ((int32_t)106);
		int32_t L_438 = (L_436)->GetAt(static_cast<il2cpp_array_size_t>(L_437));
		int32_t L_439 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_440 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_440);
		int32_t L_441 = ((int32_t)107);
		int32_t L_442 = (L_440)->GetAt(static_cast<il2cpp_array_size_t>(L_441));
		int32_t L_443 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m8F42880707930B40B23FB1A537C9B888C46485CE(__this, ((int32_t)(L_430^L_431)), ((int32_t)(L_434^L_435)), ((int32_t)(L_438^L_439)), ((int32_t)(L_442^L_443)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_444 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_444);
		int32_t L_445 = ((int32_t)108);
		int32_t L_446 = (L_444)->GetAt(static_cast<il2cpp_array_size_t>(L_445));
		int32_t L_447 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_448 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_448);
		int32_t L_449 = ((int32_t)109);
		int32_t L_450 = (L_448)->GetAt(static_cast<il2cpp_array_size_t>(L_449));
		int32_t L_451 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_452);
		int32_t L_453 = ((int32_t)110);
		int32_t L_454 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_453));
		int32_t L_455 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_456 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_456);
		int32_t L_457 = ((int32_t)111);
		int32_t L_458 = (L_456)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		int32_t L_459 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m12D2C13C215915C24A4D9768ACA28F39C6E32BB4(__this, ((int32_t)(L_446^L_447)), ((int32_t)(L_450^L_451)), ((int32_t)(L_454^L_455)), ((int32_t)(L_458^L_459)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_460 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_460);
		int32_t L_461 = ((int32_t)112);
		int32_t L_462 = (L_460)->GetAt(static_cast<il2cpp_array_size_t>(L_461));
		int32_t L_463 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_464 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_464);
		int32_t L_465 = ((int32_t)113);
		int32_t L_466 = (L_464)->GetAt(static_cast<il2cpp_array_size_t>(L_465));
		int32_t L_467 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_468 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_468);
		int32_t L_469 = ((int32_t)114);
		int32_t L_470 = (L_468)->GetAt(static_cast<il2cpp_array_size_t>(L_469));
		int32_t L_471 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_472 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_472);
		int32_t L_473 = ((int32_t)115);
		int32_t L_474 = (L_472)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		int32_t L_475 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb4_mD85D11D4803C864407D51D6B93956D21A6666BCE(__this, ((int32_t)(L_462^L_463)), ((int32_t)(L_466^L_467)), ((int32_t)(L_470^L_471)), ((int32_t)(L_474^L_475)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_476 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_476);
		int32_t L_477 = ((int32_t)116);
		int32_t L_478 = (L_476)->GetAt(static_cast<il2cpp_array_size_t>(L_477));
		int32_t L_479 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_480 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_480);
		int32_t L_481 = ((int32_t)117);
		int32_t L_482 = (L_480)->GetAt(static_cast<il2cpp_array_size_t>(L_481));
		int32_t L_483 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_484 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_484);
		int32_t L_485 = ((int32_t)118);
		int32_t L_486 = (L_484)->GetAt(static_cast<il2cpp_array_size_t>(L_485));
		int32_t L_487 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_488 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_488);
		int32_t L_489 = ((int32_t)119);
		int32_t L_490 = (L_488)->GetAt(static_cast<il2cpp_array_size_t>(L_489));
		int32_t L_491 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m2D2CCC0A769F88DB30EB039DAA7C388F7F456AB0(__this, ((int32_t)(L_478^L_479)), ((int32_t)(L_482^L_483)), ((int32_t)(L_486^L_487)), ((int32_t)(L_490^L_491)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_492);
		int32_t L_493 = ((int32_t)120);
		int32_t L_494 = (L_492)->GetAt(static_cast<il2cpp_array_size_t>(L_493));
		int32_t L_495 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_496 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_496);
		int32_t L_497 = ((int32_t)121);
		int32_t L_498 = (L_496)->GetAt(static_cast<il2cpp_array_size_t>(L_497));
		int32_t L_499 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_500 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_500);
		int32_t L_501 = ((int32_t)122);
		int32_t L_502 = (L_500)->GetAt(static_cast<il2cpp_array_size_t>(L_501));
		int32_t L_503 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_504 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_504);
		int32_t L_505 = ((int32_t)123);
		int32_t L_506 = (L_504)->GetAt(static_cast<il2cpp_array_size_t>(L_505));
		int32_t L_507 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m3D54F6A3672F39D2987F8FA789F2CACC751A71BC(__this, ((int32_t)(L_494^L_495)), ((int32_t)(L_498^L_499)), ((int32_t)(L_502^L_503)), ((int32_t)(L_506^L_507)), NULL);
		SerpentEngineBase_LT_mA6C465783DAC892A4BF2CF98E708C5901B05C2CF(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_508 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_508);
		int32_t L_509 = ((int32_t)124);
		int32_t L_510 = (L_508)->GetAt(static_cast<il2cpp_array_size_t>(L_509));
		int32_t L_511 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_512 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_512);
		int32_t L_513 = ((int32_t)125);
		int32_t L_514 = (L_512)->GetAt(static_cast<il2cpp_array_size_t>(L_513));
		int32_t L_515 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_516 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_516);
		int32_t L_517 = ((int32_t)126);
		int32_t L_518 = (L_516)->GetAt(static_cast<il2cpp_array_size_t>(L_517));
		int32_t L_519 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_520 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_520);
		int32_t L_521 = ((int32_t)127);
		int32_t L_522 = (L_520)->GetAt(static_cast<il2cpp_array_size_t>(L_521));
		int32_t L_523 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Sb7_mE703FFB70B329F58CEB1BACD603BA1A1669E887D(__this, ((int32_t)(L_510^L_511)), ((int32_t)(L_514^L_515)), ((int32_t)(L_518^L_519)), ((int32_t)(L_522^L_523)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_524 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_524);
		int32_t L_525 = ((int32_t)131);
		int32_t L_526 = (L_524)->GetAt(static_cast<il2cpp_array_size_t>(L_525));
		int32_t L_527 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_528 = ___output2;
		int32_t L_529 = ___outOff3;
		Pack_UInt32_To_BE_m8DE23D6C7E8FB1AD9AA17CF868A8A2ECE246669F(((int32_t)(L_526^L_527)), L_528, L_529, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_530 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_530);
		int32_t L_531 = ((int32_t)130);
		int32_t L_532 = (L_530)->GetAt(static_cast<il2cpp_array_size_t>(L_531));
		int32_t L_533 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_534 = ___output2;
		int32_t L_535 = ___outOff3;
		Pack_UInt32_To_BE_m8DE23D6C7E8FB1AD9AA17CF868A8A2ECE246669F(((int32_t)(L_532^L_533)), L_534, ((int32_t)il2cpp_codegen_add(L_535, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_536 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_536);
		int32_t L_537 = ((int32_t)129);
		int32_t L_538 = (L_536)->GetAt(static_cast<il2cpp_array_size_t>(L_537));
		int32_t L_539 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_540 = ___output2;
		int32_t L_541 = ___outOff3;
		Pack_UInt32_To_BE_m8DE23D6C7E8FB1AD9AA17CF868A8A2ECE246669F(((int32_t)(L_538^L_539)), L_540, ((int32_t)il2cpp_codegen_add(L_541, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_542 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_542);
		int32_t L_543 = ((int32_t)128);
		int32_t L_544 = (L_542)->GetAt(static_cast<il2cpp_array_size_t>(L_543));
		int32_t L_545 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_546 = ___output2;
		int32_t L_547 = ___outOff3;
		Pack_UInt32_To_BE_m8DE23D6C7E8FB1AD9AA17CF868A8A2ECE246669F(((int32_t)(L_544^L_545)), L_546, ((int32_t)il2cpp_codegen_add(L_547, ((int32_t)12))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TnepresEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine_DecryptBlock_m54EE2D3559C584A3DF8E954CB604C236FAEEC9AB (TnepresEngine_t425E9EFBC4AB32EC5E5EC5D6FEADB4F3BBB28FCE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)131);
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		int32_t L_4 = ___inOff1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_3, L_4, NULL);
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_2^(int32_t)L_5));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)130);
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___input0;
		int32_t L_10 = ___inOff1;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_9, ((int32_t)il2cpp_codegen_add(L_10, 4)), NULL);
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_8^(int32_t)L_11));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_12);
		int32_t L_13 = ((int32_t)129);
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___input0;
		int32_t L_16 = ___inOff1;
		uint32_t L_17;
		L_17 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_15, ((int32_t)il2cpp_codegen_add(L_16, 8)), NULL);
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_14^(int32_t)L_17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_18);
		int32_t L_19 = ((int32_t)128);
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___input0;
		int32_t L_22 = ___inOff1;
		uint32_t L_23;
		L_23 = Pack_BE_To_UInt32_m7BB954A45138AE7773B725CA6F225ED43105C172(L_21, ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)12))), NULL);
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_20^(int32_t)L_23));
		int32_t L_24 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_25 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_26 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_27 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m223C8A4B779C3831BA847DF733419E5A74F7642F(__this, L_24, L_25, L_26, L_27, NULL);
		int32_t L_28 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_29);
		int32_t L_30 = ((int32_t)124);
		int32_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_28^L_31));
		int32_t L_32 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)125);
		int32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_32^L_35));
		int32_t L_36 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)126);
		int32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_36^L_39));
		int32_t L_40 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)127);
		int32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_40^L_43));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_44 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_45 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_46 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_47 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m42C304743C9276B0EDB89EDB15AB45060FCE0C59(__this, L_44, L_45, L_46, L_47, NULL);
		int32_t L_48 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_49);
		int32_t L_50 = ((int32_t)120);
		int32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_48^L_51));
		int32_t L_52 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)121);
		int32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_52^L_55));
		int32_t L_56 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_57);
		int32_t L_58 = ((int32_t)122);
		int32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_56^L_59));
		int32_t L_60 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_61);
		int32_t L_62 = ((int32_t)123);
		int32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_60^L_63));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_64 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_65 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_66 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_67 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib5_m8211F7171CE0143080C92309E125875A22F1CA88(__this, L_64, L_65, L_66, L_67, NULL);
		int32_t L_68 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_69);
		int32_t L_70 = ((int32_t)116);
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_68^L_71));
		int32_t L_72 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_73);
		int32_t L_74 = ((int32_t)117);
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_72^L_75));
		int32_t L_76 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_77);
		int32_t L_78 = ((int32_t)118);
		int32_t L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_76^L_79));
		int32_t L_80 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_81);
		int32_t L_82 = ((int32_t)119);
		int32_t L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_80^L_83));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_84 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_85 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_86 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_87 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mD4AAD0D2F16D1533E66D825988E6A8D894D6BB54(__this, L_84, L_85, L_86, L_87, NULL);
		int32_t L_88 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_89);
		int32_t L_90 = ((int32_t)112);
		int32_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_88^L_91));
		int32_t L_92 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_93);
		int32_t L_94 = ((int32_t)113);
		int32_t L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_92^L_95));
		int32_t L_96 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_97);
		int32_t L_98 = ((int32_t)114);
		int32_t L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_96^L_99));
		int32_t L_100 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_101);
		int32_t L_102 = ((int32_t)115);
		int32_t L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_100^L_103));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_104 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_105 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_106 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_107 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib3_mB163EA5F93ACBD6333D4E016BF84C10EF5D6C107(__this, L_104, L_105, L_106, L_107, NULL);
		int32_t L_108 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_109);
		int32_t L_110 = ((int32_t)108);
		int32_t L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_108^L_111));
		int32_t L_112 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_113);
		int32_t L_114 = ((int32_t)109);
		int32_t L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_112^L_115));
		int32_t L_116 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_117);
		int32_t L_118 = ((int32_t)110);
		int32_t L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_116^L_119));
		int32_t L_120 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_121);
		int32_t L_122 = ((int32_t)111);
		int32_t L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_120^L_123));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_124 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_125 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_126 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_127 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib2_mC0C053B4D7ED4DB3F57BB4816D88296BF5184BD6(__this, L_124, L_125, L_126, L_127, NULL);
		int32_t L_128 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_129);
		int32_t L_130 = ((int32_t)104);
		int32_t L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_128^L_131));
		int32_t L_132 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_133);
		int32_t L_134 = ((int32_t)105);
		int32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_132^L_135));
		int32_t L_136 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_137);
		int32_t L_138 = ((int32_t)106);
		int32_t L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_136^L_139));
		int32_t L_140 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_141);
		int32_t L_142 = ((int32_t)107);
		int32_t L_143 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_140^L_143));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_144 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_145 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_146 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_147 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib1_m003F971CCB54D63628A162BF1E5D09B374F6B7C0(__this, L_144, L_145, L_146, L_147, NULL);
		int32_t L_148 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_149);
		int32_t L_150 = ((int32_t)100);
		int32_t L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_148^L_151));
		int32_t L_152 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_153 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_153);
		int32_t L_154 = ((int32_t)101);
		int32_t L_155 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_152^L_155));
		int32_t L_156 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_157);
		int32_t L_158 = ((int32_t)102);
		int32_t L_159 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_156^L_159));
		int32_t L_160 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_161);
		int32_t L_162 = ((int32_t)103);
		int32_t L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_160^L_163));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_164 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_165 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_166 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_167 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m516707A88B90EBE527499C923D63E7B65744AEA1(__this, L_164, L_165, L_166, L_167, NULL);
		int32_t L_168 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_169);
		int32_t L_170 = ((int32_t)96);
		int32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_168^L_171));
		int32_t L_172 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_173);
		int32_t L_174 = ((int32_t)97);
		int32_t L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_172^L_175));
		int32_t L_176 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_177);
		int32_t L_178 = ((int32_t)98);
		int32_t L_179 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_176^L_179));
		int32_t L_180 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_181);
		int32_t L_182 = ((int32_t)99);
		int32_t L_183 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_180^L_183));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_184 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_185 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_186 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_187 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m223C8A4B779C3831BA847DF733419E5A74F7642F(__this, L_184, L_185, L_186, L_187, NULL);
		int32_t L_188 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_189);
		int32_t L_190 = ((int32_t)92);
		int32_t L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_188^L_191));
		int32_t L_192 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_193);
		int32_t L_194 = ((int32_t)93);
		int32_t L_195 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_192^L_195));
		int32_t L_196 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_197);
		int32_t L_198 = ((int32_t)94);
		int32_t L_199 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_196^L_199));
		int32_t L_200 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_201);
		int32_t L_202 = ((int32_t)95);
		int32_t L_203 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_200^L_203));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_204 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_205 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_206 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_207 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m42C304743C9276B0EDB89EDB15AB45060FCE0C59(__this, L_204, L_205, L_206, L_207, NULL);
		int32_t L_208 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_209 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)88);
		int32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_208^L_211));
		int32_t L_212 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_213 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_213);
		int32_t L_214 = ((int32_t)89);
		int32_t L_215 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_212^L_215));
		int32_t L_216 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_217 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_217);
		int32_t L_218 = ((int32_t)90);
		int32_t L_219 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_216^L_219));
		int32_t L_220 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_221);
		int32_t L_222 = ((int32_t)91);
		int32_t L_223 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_220^L_223));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_224 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_225 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_226 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_227 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib5_m8211F7171CE0143080C92309E125875A22F1CA88(__this, L_224, L_225, L_226, L_227, NULL);
		int32_t L_228 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_229 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_229);
		int32_t L_230 = ((int32_t)84);
		int32_t L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_228^L_231));
		int32_t L_232 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_233);
		int32_t L_234 = ((int32_t)85);
		int32_t L_235 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_232^L_235));
		int32_t L_236 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_237 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_237);
		int32_t L_238 = ((int32_t)86);
		int32_t L_239 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_236^L_239));
		int32_t L_240 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_241);
		int32_t L_242 = ((int32_t)87);
		int32_t L_243 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_240^L_243));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_244 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_245 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_246 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_247 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mD4AAD0D2F16D1533E66D825988E6A8D894D6BB54(__this, L_244, L_245, L_246, L_247, NULL);
		int32_t L_248 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_249);
		int32_t L_250 = ((int32_t)80);
		int32_t L_251 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_248^L_251));
		int32_t L_252 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_253 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_253);
		int32_t L_254 = ((int32_t)81);
		int32_t L_255 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_252^L_255));
		int32_t L_256 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_257);
		int32_t L_258 = ((int32_t)82);
		int32_t L_259 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_256^L_259));
		int32_t L_260 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_261);
		int32_t L_262 = ((int32_t)83);
		int32_t L_263 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_260^L_263));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_264 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_265 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_266 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_267 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib3_mB163EA5F93ACBD6333D4E016BF84C10EF5D6C107(__this, L_264, L_265, L_266, L_267, NULL);
		int32_t L_268 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_269);
		int32_t L_270 = ((int32_t)76);
		int32_t L_271 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_268^L_271));
		int32_t L_272 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_273 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_273);
		int32_t L_274 = ((int32_t)77);
		int32_t L_275 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_272^L_275));
		int32_t L_276 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_277 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_277);
		int32_t L_278 = ((int32_t)78);
		int32_t L_279 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_278));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_276^L_279));
		int32_t L_280 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_281 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_281);
		int32_t L_282 = ((int32_t)79);
		int32_t L_283 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_280^L_283));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_284 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_285 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_286 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_287 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib2_mC0C053B4D7ED4DB3F57BB4816D88296BF5184BD6(__this, L_284, L_285, L_286, L_287, NULL);
		int32_t L_288 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_289 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_289);
		int32_t L_290 = ((int32_t)72);
		int32_t L_291 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_288^L_291));
		int32_t L_292 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_293 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_293);
		int32_t L_294 = ((int32_t)73);
		int32_t L_295 = (L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_292^L_295));
		int32_t L_296 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_297 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_297);
		int32_t L_298 = ((int32_t)74);
		int32_t L_299 = (L_297)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_296^L_299));
		int32_t L_300 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_301 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_301);
		int32_t L_302 = ((int32_t)75);
		int32_t L_303 = (L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_300^L_303));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_304 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_305 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_306 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_307 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib1_m003F971CCB54D63628A162BF1E5D09B374F6B7C0(__this, L_304, L_305, L_306, L_307, NULL);
		int32_t L_308 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_309 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_309);
		int32_t L_310 = ((int32_t)68);
		int32_t L_311 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_308^L_311));
		int32_t L_312 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_313 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_313);
		int32_t L_314 = ((int32_t)69);
		int32_t L_315 = (L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_312^L_315));
		int32_t L_316 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_317 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_317);
		int32_t L_318 = ((int32_t)70);
		int32_t L_319 = (L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_316^L_319));
		int32_t L_320 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_321);
		int32_t L_322 = ((int32_t)71);
		int32_t L_323 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_320^L_323));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_324 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_325 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_326 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_327 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m516707A88B90EBE527499C923D63E7B65744AEA1(__this, L_324, L_325, L_326, L_327, NULL);
		int32_t L_328 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_329 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_329);
		int32_t L_330 = ((int32_t)64);
		int32_t L_331 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_328^L_331));
		int32_t L_332 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_333);
		int32_t L_334 = ((int32_t)65);
		int32_t L_335 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_334));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_332^L_335));
		int32_t L_336 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_337 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_337);
		int32_t L_338 = ((int32_t)66);
		int32_t L_339 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_338));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_336^L_339));
		int32_t L_340 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_341);
		int32_t L_342 = ((int32_t)67);
		int32_t L_343 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_342));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_340^L_343));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_344 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_345 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_346 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_347 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m223C8A4B779C3831BA847DF733419E5A74F7642F(__this, L_344, L_345, L_346, L_347, NULL);
		int32_t L_348 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_349 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_349);
		int32_t L_350 = ((int32_t)60);
		int32_t L_351 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_348^L_351));
		int32_t L_352 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_353 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_353);
		int32_t L_354 = ((int32_t)61);
		int32_t L_355 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_352^L_355));
		int32_t L_356 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_357 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_357);
		int32_t L_358 = ((int32_t)62);
		int32_t L_359 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_358));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_356^L_359));
		int32_t L_360 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_361);
		int32_t L_362 = ((int32_t)63);
		int32_t L_363 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_360^L_363));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_364 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_365 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_366 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_367 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m42C304743C9276B0EDB89EDB15AB45060FCE0C59(__this, L_364, L_365, L_366, L_367, NULL);
		int32_t L_368 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_369);
		int32_t L_370 = ((int32_t)56);
		int32_t L_371 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_368^L_371));
		int32_t L_372 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_373 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_373);
		int32_t L_374 = ((int32_t)57);
		int32_t L_375 = (L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_372^L_375));
		int32_t L_376 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_377 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_377);
		int32_t L_378 = ((int32_t)58);
		int32_t L_379 = (L_377)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_376^L_379));
		int32_t L_380 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_381 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_381);
		int32_t L_382 = ((int32_t)59);
		int32_t L_383 = (L_381)->GetAt(static_cast<il2cpp_array_size_t>(L_382));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_380^L_383));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_384 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_385 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_386 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_387 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib5_m8211F7171CE0143080C92309E125875A22F1CA88(__this, L_384, L_385, L_386, L_387, NULL);
		int32_t L_388 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_389 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_389);
		int32_t L_390 = ((int32_t)52);
		int32_t L_391 = (L_389)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_388^L_391));
		int32_t L_392 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_393 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_393);
		int32_t L_394 = ((int32_t)53);
		int32_t L_395 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_392^L_395));
		int32_t L_396 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_397 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_397);
		int32_t L_398 = ((int32_t)54);
		int32_t L_399 = (L_397)->GetAt(static_cast<il2cpp_array_size_t>(L_398));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_396^L_399));
		int32_t L_400 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_401);
		int32_t L_402 = ((int32_t)55);
		int32_t L_403 = (L_401)->GetAt(static_cast<il2cpp_array_size_t>(L_402));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_400^L_403));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_404 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_405 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_406 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_407 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mD4AAD0D2F16D1533E66D825988E6A8D894D6BB54(__this, L_404, L_405, L_406, L_407, NULL);
		int32_t L_408 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_409);
		int32_t L_410 = ((int32_t)48);
		int32_t L_411 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_408^L_411));
		int32_t L_412 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_413 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_413);
		int32_t L_414 = ((int32_t)49);
		int32_t L_415 = (L_413)->GetAt(static_cast<il2cpp_array_size_t>(L_414));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_412^L_415));
		int32_t L_416 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_417 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_417);
		int32_t L_418 = ((int32_t)50);
		int32_t L_419 = (L_417)->GetAt(static_cast<il2cpp_array_size_t>(L_418));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_416^L_419));
		int32_t L_420 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_421 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_421);
		int32_t L_422 = ((int32_t)51);
		int32_t L_423 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_422));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_420^L_423));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_424 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_425 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_426 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_427 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib3_mB163EA5F93ACBD6333D4E016BF84C10EF5D6C107(__this, L_424, L_425, L_426, L_427, NULL);
		int32_t L_428 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_429 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_429);
		int32_t L_430 = ((int32_t)44);
		int32_t L_431 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_428^L_431));
		int32_t L_432 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_433 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_433);
		int32_t L_434 = ((int32_t)45);
		int32_t L_435 = (L_433)->GetAt(static_cast<il2cpp_array_size_t>(L_434));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_432^L_435));
		int32_t L_436 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_437 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_437);
		int32_t L_438 = ((int32_t)46);
		int32_t L_439 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_436^L_439));
		int32_t L_440 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_441 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_441);
		int32_t L_442 = ((int32_t)47);
		int32_t L_443 = (L_441)->GetAt(static_cast<il2cpp_array_size_t>(L_442));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_440^L_443));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_444 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_445 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_446 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_447 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib2_mC0C053B4D7ED4DB3F57BB4816D88296BF5184BD6(__this, L_444, L_445, L_446, L_447, NULL);
		int32_t L_448 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_449 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_449);
		int32_t L_450 = ((int32_t)40);
		int32_t L_451 = (L_449)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_448^L_451));
		int32_t L_452 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_453 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_453);
		int32_t L_454 = ((int32_t)41);
		int32_t L_455 = (L_453)->GetAt(static_cast<il2cpp_array_size_t>(L_454));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_452^L_455));
		int32_t L_456 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_457 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_457);
		int32_t L_458 = ((int32_t)42);
		int32_t L_459 = (L_457)->GetAt(static_cast<il2cpp_array_size_t>(L_458));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_456^L_459));
		int32_t L_460 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_461 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_461);
		int32_t L_462 = ((int32_t)43);
		int32_t L_463 = (L_461)->GetAt(static_cast<il2cpp_array_size_t>(L_462));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_460^L_463));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_464 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_465 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_466 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_467 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib1_m003F971CCB54D63628A162BF1E5D09B374F6B7C0(__this, L_464, L_465, L_466, L_467, NULL);
		int32_t L_468 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_469 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_469);
		int32_t L_470 = ((int32_t)36);
		int32_t L_471 = (L_469)->GetAt(static_cast<il2cpp_array_size_t>(L_470));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_468^L_471));
		int32_t L_472 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_473 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_473);
		int32_t L_474 = ((int32_t)37);
		int32_t L_475 = (L_473)->GetAt(static_cast<il2cpp_array_size_t>(L_474));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_472^L_475));
		int32_t L_476 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_477 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_477);
		int32_t L_478 = ((int32_t)38);
		int32_t L_479 = (L_477)->GetAt(static_cast<il2cpp_array_size_t>(L_478));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_476^L_479));
		int32_t L_480 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_481 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_481);
		int32_t L_482 = ((int32_t)39);
		int32_t L_483 = (L_481)->GetAt(static_cast<il2cpp_array_size_t>(L_482));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_480^L_483));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_484 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_485 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_486 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_487 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m516707A88B90EBE527499C923D63E7B65744AEA1(__this, L_484, L_485, L_486, L_487, NULL);
		int32_t L_488 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_489 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_489);
		int32_t L_490 = ((int32_t)32);
		int32_t L_491 = (L_489)->GetAt(static_cast<il2cpp_array_size_t>(L_490));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_488^L_491));
		int32_t L_492 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_493 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_493);
		int32_t L_494 = ((int32_t)33);
		int32_t L_495 = (L_493)->GetAt(static_cast<il2cpp_array_size_t>(L_494));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_492^L_495));
		int32_t L_496 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_497 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_497);
		int32_t L_498 = ((int32_t)34);
		int32_t L_499 = (L_497)->GetAt(static_cast<il2cpp_array_size_t>(L_498));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_496^L_499));
		int32_t L_500 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_501 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_501);
		int32_t L_502 = ((int32_t)35);
		int32_t L_503 = (L_501)->GetAt(static_cast<il2cpp_array_size_t>(L_502));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_500^L_503));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_504 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_505 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_506 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_507 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m223C8A4B779C3831BA847DF733419E5A74F7642F(__this, L_504, L_505, L_506, L_507, NULL);
		int32_t L_508 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_509 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_509);
		int32_t L_510 = ((int32_t)28);
		int32_t L_511 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_510));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_508^L_511));
		int32_t L_512 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_513 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_513);
		int32_t L_514 = ((int32_t)29);
		int32_t L_515 = (L_513)->GetAt(static_cast<il2cpp_array_size_t>(L_514));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_512^L_515));
		int32_t L_516 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_517 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_517);
		int32_t L_518 = ((int32_t)30);
		int32_t L_519 = (L_517)->GetAt(static_cast<il2cpp_array_size_t>(L_518));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_516^L_519));
		int32_t L_520 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_521);
		int32_t L_522 = ((int32_t)31);
		int32_t L_523 = (L_521)->GetAt(static_cast<il2cpp_array_size_t>(L_522));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_520^L_523));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_524 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_525 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_526 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_527 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m42C304743C9276B0EDB89EDB15AB45060FCE0C59(__this, L_524, L_525, L_526, L_527, NULL);
		int32_t L_528 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_529);
		int32_t L_530 = ((int32_t)24);
		int32_t L_531 = (L_529)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_528^L_531));
		int32_t L_532 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_533 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_533);
		int32_t L_534 = ((int32_t)25);
		int32_t L_535 = (L_533)->GetAt(static_cast<il2cpp_array_size_t>(L_534));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_532^L_535));
		int32_t L_536 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_537 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_537);
		int32_t L_538 = ((int32_t)26);
		int32_t L_539 = (L_537)->GetAt(static_cast<il2cpp_array_size_t>(L_538));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_536^L_539));
		int32_t L_540 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_541);
		int32_t L_542 = ((int32_t)27);
		int32_t L_543 = (L_541)->GetAt(static_cast<il2cpp_array_size_t>(L_542));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_540^L_543));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_544 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_545 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_546 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_547 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib5_m8211F7171CE0143080C92309E125875A22F1CA88(__this, L_544, L_545, L_546, L_547, NULL);
		int32_t L_548 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_549 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_549);
		int32_t L_550 = ((int32_t)20);
		int32_t L_551 = (L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_550));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_548^L_551));
		int32_t L_552 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_553 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_553);
		int32_t L_554 = ((int32_t)21);
		int32_t L_555 = (L_553)->GetAt(static_cast<il2cpp_array_size_t>(L_554));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_552^L_555));
		int32_t L_556 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_557 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_557);
		int32_t L_558 = ((int32_t)22);
		int32_t L_559 = (L_557)->GetAt(static_cast<il2cpp_array_size_t>(L_558));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_556^L_559));
		int32_t L_560 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_561 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_561);
		int32_t L_562 = ((int32_t)23);
		int32_t L_563 = (L_561)->GetAt(static_cast<il2cpp_array_size_t>(L_562));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_560^L_563));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_564 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_565 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_566 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_567 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mD4AAD0D2F16D1533E66D825988E6A8D894D6BB54(__this, L_564, L_565, L_566, L_567, NULL);
		int32_t L_568 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_569 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_569);
		int32_t L_570 = ((int32_t)16);
		int32_t L_571 = (L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_568^L_571));
		int32_t L_572 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_573 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_573);
		int32_t L_574 = ((int32_t)17);
		int32_t L_575 = (L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_574));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_572^L_575));
		int32_t L_576 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_577 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_577);
		int32_t L_578 = ((int32_t)18);
		int32_t L_579 = (L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_578));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_576^L_579));
		int32_t L_580 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_581);
		int32_t L_582 = ((int32_t)19);
		int32_t L_583 = (L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_582));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_580^L_583));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_584 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_585 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_586 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_587 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib3_mB163EA5F93ACBD6333D4E016BF84C10EF5D6C107(__this, L_584, L_585, L_586, L_587, NULL);
		int32_t L_588 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_589 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_589);
		int32_t L_590 = ((int32_t)12);
		int32_t L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_588^L_591));
		int32_t L_592 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_593 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_593);
		int32_t L_594 = ((int32_t)13);
		int32_t L_595 = (L_593)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_592^L_595));
		int32_t L_596 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_597 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_597);
		int32_t L_598 = ((int32_t)14);
		int32_t L_599 = (L_597)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_596^L_599));
		int32_t L_600 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_601 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_601);
		int32_t L_602 = ((int32_t)15);
		int32_t L_603 = (L_601)->GetAt(static_cast<il2cpp_array_size_t>(L_602));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_600^L_603));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_604 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_605 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_606 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_607 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib2_mC0C053B4D7ED4DB3F57BB4816D88296BF5184BD6(__this, L_604, L_605, L_606, L_607, NULL);
		int32_t L_608 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_609 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_609);
		int32_t L_610 = 8;
		int32_t L_611 = (L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_608^L_611));
		int32_t L_612 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_613 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_613);
		int32_t L_614 = ((int32_t)9);
		int32_t L_615 = (L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_614));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_612^L_615));
		int32_t L_616 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_617 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_617);
		int32_t L_618 = ((int32_t)10);
		int32_t L_619 = (L_617)->GetAt(static_cast<il2cpp_array_size_t>(L_618));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_616^L_619));
		int32_t L_620 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_621 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_621);
		int32_t L_622 = ((int32_t)11);
		int32_t L_623 = (L_621)->GetAt(static_cast<il2cpp_array_size_t>(L_622));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_620^L_623));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_624 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_625 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_626 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_627 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib1_m003F971CCB54D63628A162BF1E5D09B374F6B7C0(__this, L_624, L_625, L_626, L_627, NULL);
		int32_t L_628 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_629);
		int32_t L_630 = 4;
		int32_t L_631 = (L_629)->GetAt(static_cast<il2cpp_array_size_t>(L_630));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5 = ((int32_t)(L_628^L_631));
		int32_t L_632 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_633 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_633);
		int32_t L_634 = 5;
		int32_t L_635 = (L_633)->GetAt(static_cast<il2cpp_array_size_t>(L_634));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6 = ((int32_t)(L_632^L_635));
		int32_t L_636 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_637 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_637);
		int32_t L_638 = 6;
		int32_t L_639 = (L_637)->GetAt(static_cast<il2cpp_array_size_t>(L_638));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7 = ((int32_t)(L_636^L_639));
		int32_t L_640 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_641 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_641);
		int32_t L_642 = 7;
		int32_t L_643 = (L_641)->GetAt(static_cast<il2cpp_array_size_t>(L_642));
		((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8 = ((int32_t)(L_640^L_643));
		SerpentEngineBase_InverseLT_m40C5B0E2227E0BF771142B93F2C7ADF9BB8AEF32(__this, NULL);
		int32_t L_644 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		int32_t L_645 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		int32_t L_646 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		int32_t L_647 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m516707A88B90EBE527499C923D63E7B65744AEA1(__this, L_644, L_645, L_646, L_647, NULL);
		int32_t L_648 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_649 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_649);
		int32_t L_650 = 3;
		int32_t L_651 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_650));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_652 = ___output2;
		int32_t L_653 = ___outOff3;
		Pack_UInt32_To_BE_m8DE23D6C7E8FB1AD9AA17CF868A8A2ECE246669F(((int32_t)(L_648^L_651)), L_652, L_653, NULL);
		int32_t L_654 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_655 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_655);
		int32_t L_656 = 2;
		int32_t L_657 = (L_655)->GetAt(static_cast<il2cpp_array_size_t>(L_656));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_658 = ___output2;
		int32_t L_659 = ___outOff3;
		Pack_UInt32_To_BE_m8DE23D6C7E8FB1AD9AA17CF868A8A2ECE246669F(((int32_t)(L_654^L_657)), L_658, ((int32_t)il2cpp_codegen_add(L_659, 4)), NULL);
		int32_t L_660 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_661 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_661);
		int32_t L_662 = 1;
		int32_t L_663 = (L_661)->GetAt(static_cast<il2cpp_array_size_t>(L_662));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_664 = ___output2;
		int32_t L_665 = ___outOff3;
		Pack_UInt32_To_BE_m8DE23D6C7E8FB1AD9AA17CF868A8A2ECE246669F(((int32_t)(L_660^L_663)), L_664, ((int32_t)il2cpp_codegen_add(L_665, 8)), NULL);
		int32_t L_666 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_667 = ((SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217*)__this)->___wKey_4;
		NullCheck(L_667);
		int32_t L_668 = 0;
		int32_t L_669 = (L_667)->GetAt(static_cast<il2cpp_array_size_t>(L_668));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_670 = ___output2;
		int32_t L_671 = ___outOff3;
		Pack_UInt32_To_BE_m8DE23D6C7E8FB1AD9AA17CF868A8A2ECE246669F(((int32_t)(L_666^L_669)), L_670, ((int32_t)il2cpp_codegen_add(L_671, ((int32_t)12))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TnepresEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine__ctor_m04F8272C4E457C7D55D980CE4C87328E8E2F1394 (TnepresEngine_t425E9EFBC4AB32EC5E5EC5D6FEADB4F3BBB28FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_t85F5570128B212BB0D3DCFDC960F3AD30DD6A217_il2cpp_TypeInfo_var);
		SerpentEngineBase__ctor_mE64672FF78CA59CBC57D7202A256E4451C94D062(__this, NULL);
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
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine__ctor_mA8F62CDAE05183933F19DCA00D2210B16DC84C56 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS0_37 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS0_37), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS1_38 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS1_38), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS2_39 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS2_39), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS3_40 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS3_40), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_2 = L_6;
		V_4 = 0;
		goto IL_0159;
	}

IL_0063:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_7 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		uint8_t L_9;
		L_9 = (L_7)->GetAt(0, L_8);
		V_3 = ((int32_t)((int32_t)L_9&((int32_t)255)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_0;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		int32_t L_13 = V_3;
		int32_t L_14;
		L_14 = TwofishEngine_Mx_X_mD99DF556D9ECEE54B8EA2C94D1A15F1EEE5FBA62(__this, L_13, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(L_14&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17;
		L_17 = TwofishEngine_Mx_Y_mF0905677A6AC12000BD763A1BF3EE2D66B559D4C(__this, L_16, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(L_17&((int32_t)255))));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_18 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		uint8_t L_20;
		L_20 = (L_18)->GetAt(1, L_19);
		V_3 = ((int32_t)((int32_t)L_20&((int32_t)255)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_22);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25;
		L_25 = TwofishEngine_Mx_X_mD99DF556D9ECEE54B8EA2C94D1A15F1EEE5FBA62(__this, L_24, NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(L_25&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_2;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = TwofishEngine_Mx_Y_mF0905677A6AC12000BD763A1BF3EE2D66B559D4C(__this, L_27, NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(L_28&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___gMDS0_37;
		int32_t L_30 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = 1;
		int32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = 1;
		int32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38 = 1;
		int32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_2;
		NullCheck(L_40);
		int32_t L_41 = 1;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_33|((int32_t)(L_36<<8))))|((int32_t)(L_39<<((int32_t)16)))))|((int32_t)(L_42<<((int32_t)24))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->___gMDS1_38;
		int32_t L_44 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_2;
		NullCheck(L_45);
		int32_t L_46 = 0;
		int32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_2;
		NullCheck(L_48);
		int32_t L_49 = 0;
		int32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_1;
		NullCheck(L_51);
		int32_t L_52 = 0;
		int32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = 0;
		int32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_47|((int32_t)(L_50<<8))))|((int32_t)(L_53<<((int32_t)16)))))|((int32_t)(L_56<<((int32_t)24))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___gMDS2_39;
		int32_t L_58 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_1;
		NullCheck(L_59);
		int32_t L_60 = 1;
		int32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_2;
		NullCheck(L_62);
		int32_t L_63 = 1;
		int32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_0;
		NullCheck(L_65);
		int32_t L_66 = 1;
		int32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = V_2;
		NullCheck(L_68);
		int32_t L_69 = 1;
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_61|((int32_t)(L_64<<8))))|((int32_t)(L_67<<((int32_t)16)))))|((int32_t)(L_70<<((int32_t)24))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = __this->___gMDS3_40;
		int32_t L_72 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_1;
		NullCheck(L_73);
		int32_t L_74 = 0;
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = V_0;
		NullCheck(L_76);
		int32_t L_77 = 0;
		int32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = V_2;
		NullCheck(L_79);
		int32_t L_80 = 0;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = V_1;
		NullCheck(L_82);
		int32_t L_83 = 0;
		int32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_75|((int32_t)(L_78<<8))))|((int32_t)(L_81<<((int32_t)16)))))|((int32_t)(L_84<<((int32_t)24))))));
		int32_t L_85 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0159:
	{
		int32_t L_86 = V_4;
		if ((((int32_t)L_86) < ((int32_t)((int32_t)256))))
		{
			goto IL_0063;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Init_m1D5B70BC9642F3FB4541ABC584E69C957C22E671 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___parameters1;
		if (((KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tF9C23619E5FFFC96AC678CFD78D055CEE9CA411F_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_mAE219F38A7A09C7F3B6FC85DDA460C60675F3A9D(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral601CCA376E46978BDEF3632F3CF3209C7891C382)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_Init_m1D5B70BC9642F3FB4541ABC584E69C957C22E671_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_5 = ___forEncryption0;
		__this->___encrypting_36 = L_5;
		RuntimeObject* L_6 = ___parameters1;
		NullCheck(((KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m4CF60D78522E0F608DD02E0C8DADE59E5303FA23(((KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var)), NULL);
		__this->___workingKey_44 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_44), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___workingKey_44;
		NullCheck(L_8);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_8)->max_length)), 8));
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)128))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)192))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)256))))
		{
			goto IL_0064;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD4587DAEA872EB0581FD7E2ACC74AA38FE7E38A4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_Init_m1D5B70BC9642F3FB4541ABC584E69C957C22E671_RuntimeMethod_var)));
	}

IL_0064:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___workingKey_44;
		NullCheck(L_13);
		__this->___k64Cnt_43 = ((int32_t)(((int32_t)(((RuntimeArray*)L_13)->max_length))/8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___workingKey_44;
		TwofishEngine_SetKey_m40C426203E4241FBC4B4AED904F9A14E283DB92F(__this, L_14, NULL);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.TwofishEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TwofishEngine_get_AlgorithmName_m758291767C8CBB6CD5F02AF554D2D9A915D045B1 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_ProcessBlock_mC32BEE0848CCC02DEAAE28B40AF54167D49A6C02 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey_44;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAD71D2A48AFE84D642BA9E2C90621A70C4A478)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_ProcessBlock_mC32BEE0848CCC02DEAAE28B40AF54167D49A6C02_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		Check_DataLength_mA5DC3F8EEF846867142FFE7FA64C783BE9D20CEF(L_2, L_3, ((int32_t)16), _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t L_5 = ___outOff3;
		Check_OutputLength_mE9721C2E284A57CD53D1F6E2525AF21318146178(L_4, L_5, ((int32_t)16), _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_6 = __this->___encrypting_36;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input0;
		int32_t L_8 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___output2;
		int32_t L_10 = ___outOff3;
		TwofishEngine_EncryptBlock_mE467BB3059007C1A96EDF2A67A5512BC5351B4C5(__this, L_7, L_8, L_9, L_10, NULL);
		goto IL_0050;
	}

IL_0045:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___input0;
		int32_t L_12 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output2;
		int32_t L_14 = ___outOff3;
		TwofishEngine_DecryptBlock_mFB3591FB161A20DD71E0FBEC60B4B145CF614B47(__this, L_11, L_12, L_13, L_14, NULL);
	}

IL_0050:
	{
		return ((int32_t)16);
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_GetBlockSize_m2651393BAD56956AD4B7908F76E6C6160CFD84D8 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_SetKey_m40C426203E4241FBC4B4AED904F9A14E283DB92F (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
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
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		__this->___gSubKeys_41 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gSubKeys_41), (void*)L_3);
		V_14 = 0;
		goto IL_0068;
	}

IL_0027:
	{
		int32_t L_4 = V_14;
		V_15 = ((int32_t)il2cpp_codegen_multiply(L_4, 8));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		int32_t L_6 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___key0;
		int32_t L_8 = V_15;
		uint32_t L_9;
		L_9 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_7, L_8, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		int32_t L_11 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___key0;
		int32_t L_13 = V_15;
		uint32_t L_14;
		L_14 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_12, ((int32_t)il2cpp_codegen_add(L_13, 4)), NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int32_t)L_14);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		int32_t L_16 = __this->___k64Cnt_43;
		int32_t L_17 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_0;
		int32_t L_19 = V_14;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_1;
		int32_t L_23 = V_14;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26;
		L_26 = TwofishEngine_RS_MDS_Encode_mBCC7A869CB0D6E45508A58FCFC5DD9E5DFCA92D5(__this, L_21, L_25, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_16, 1)), L_17))), (int32_t)L_26);
		int32_t L_27 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0068:
	{
		int32_t L_28 = V_14;
		int32_t L_29 = __this->___k64Cnt_43;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0027;
		}
	}
	{
		V_16 = 0;
		goto IL_00db;
	}

IL_0077:
	{
		int32_t L_30 = V_16;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_30, ((int32_t)33686018)));
		int32_t L_31 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33;
		L_33 = TwofishEngine_F32_mA1E464AC93E73491171C12F549724C4C3B225B18(__this, L_31, L_32, NULL);
		V_4 = L_33;
		int32_t L_34 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_1;
		int32_t L_36;
		L_36 = TwofishEngine_F32_mA1E464AC93E73491171C12F549724C4C3B225B18(__this, ((int32_t)il2cpp_codegen_add(L_34, ((int32_t)16843009))), L_35, NULL);
		V_5 = L_36;
		int32_t L_37 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		int32_t L_38;
		L_38 = Integers_RotateLeft_m9347621D8EE9496234E48F81B69A6E6EC815E79E(L_37, 8, NULL);
		V_5 = L_38;
		int32_t L_39 = V_4;
		int32_t L_40 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add(L_39, L_40));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->___gSubKeys_41;
		int32_t L_42 = V_16;
		int32_t L_43 = V_4;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_42, 2))), (int32_t)L_43);
		int32_t L_44 = V_4;
		int32_t L_45 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, L_45));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = __this->___gSubKeys_41;
		int32_t L_47 = V_16;
		int32_t L_48 = V_4;
		int32_t L_49;
		L_49 = Integers_RotateLeft_m9347621D8EE9496234E48F81B69A6E6EC815E79E(L_48, ((int32_t)9), NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_47, 2)), 1))), (int32_t)L_49);
		int32_t L_50 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00db:
	{
		int32_t L_51 = V_16;
		if ((((int32_t)L_51) < ((int32_t)((int32_t)20))))
		{
			goto IL_0077;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53 = 0;
		int32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_6 = L_54;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_2;
		NullCheck(L_55);
		int32_t L_56 = 1;
		int32_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_7 = L_57;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_2;
		NullCheck(L_58);
		int32_t L_59 = 2;
		int32_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_8 = L_60;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_2;
		NullCheck(L_61);
		int32_t L_62 = 3;
		int32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_9 = L_63;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___gSBox_42 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gSBox_42), (void*)L_64);
		V_17 = 0;
		goto IL_042f;
	}

IL_010d:
	{
		int32_t L_65 = V_17;
		int32_t L_66 = L_65;
		V_13 = L_66;
		int32_t L_67 = L_66;
		V_12 = L_67;
		int32_t L_68 = L_67;
		V_11 = L_68;
		V_10 = L_68;
		int32_t L_69 = __this->___k64Cnt_43;
		V_18 = ((int32_t)(L_69&3));
		int32_t L_70 = V_18;
		switch (L_70)
		{
			case 0:
			{
				goto IL_020b;
			}
			case 1:
			{
				goto IL_0140;
			}
			case 2:
			{
				goto IL_02fb;
			}
			case 3:
			{
				goto IL_0283;
			}
		}
	}
	{
		goto IL_0429;
	}

IL_0140:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = __this->___gSBox_42;
		int32_t L_72 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_74 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_75 = V_10;
		NullCheck(L_74);
		uint8_t L_76;
		L_76 = (L_74)->GetAt(0, L_75);
		int32_t L_77 = V_6;
		int32_t L_78;
		L_78 = TwofishEngine_M_b0_m9EFF5BA12AF65D9573436729A13957B1A45BE78F(__this, L_77, NULL);
		NullCheck(L_73);
		int32_t L_79 = ((int32_t)(((int32_t)((int32_t)L_76&((int32_t)255)))^L_78));
		int32_t L_80 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_72, 2))), (int32_t)L_80);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->___gSBox_42;
		int32_t L_82 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_84 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_85 = V_11;
		NullCheck(L_84);
		uint8_t L_86;
		L_86 = (L_84)->GetAt(0, L_85);
		int32_t L_87 = V_6;
		int32_t L_88;
		L_88 = TwofishEngine_M_b1_m7DA51E93510EAE6E1D25C14D66E83D1A12382289(__this, L_87, NULL);
		NullCheck(L_83);
		int32_t L_89 = ((int32_t)(((int32_t)((int32_t)L_86&((int32_t)255)))^L_88));
		int32_t L_90 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_82, 2)), 1))), (int32_t)L_90);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___gSBox_42;
		int32_t L_92 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_94 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_95 = V_12;
		NullCheck(L_94);
		uint8_t L_96;
		L_96 = (L_94)->GetAt(1, L_95);
		int32_t L_97 = V_6;
		int32_t L_98;
		L_98 = TwofishEngine_M_b2_mC9FBFAD92C3DBBC07EC10E3D4636C227A5D0BBD3(__this, L_97, NULL);
		NullCheck(L_93);
		int32_t L_99 = ((int32_t)(((int32_t)((int32_t)L_96&((int32_t)255)))^L_98));
		int32_t L_100 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_92, 2)), ((int32_t)512)))), (int32_t)L_100);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = __this->___gSBox_42;
		int32_t L_102 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_104 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_105 = V_13;
		NullCheck(L_104);
		uint8_t L_106;
		L_106 = (L_104)->GetAt(1, L_105);
		int32_t L_107 = V_6;
		int32_t L_108;
		L_108 = TwofishEngine_M_b3_m151C91B19B1CDC4B0DF8FFF85AEAFD64A937D3C3(__this, L_107, NULL);
		NullCheck(L_103);
		int32_t L_109 = ((int32_t)(((int32_t)((int32_t)L_106&((int32_t)255)))^L_108));
		int32_t L_110 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_102, 2)), ((int32_t)513)))), (int32_t)L_110);
		goto IL_0429;
	}

IL_020b:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_111 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_112 = V_10;
		NullCheck(L_111);
		uint8_t L_113;
		L_113 = (L_111)->GetAt(1, L_112);
		int32_t L_114 = V_9;
		int32_t L_115;
		L_115 = TwofishEngine_M_b0_m9EFF5BA12AF65D9573436729A13957B1A45BE78F(__this, L_114, NULL);
		V_10 = ((int32_t)(((int32_t)((int32_t)L_113&((int32_t)255)))^L_115));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_116 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_117 = V_11;
		NullCheck(L_116);
		uint8_t L_118;
		L_118 = (L_116)->GetAt(0, L_117);
		int32_t L_119 = V_9;
		int32_t L_120;
		L_120 = TwofishEngine_M_b1_m7DA51E93510EAE6E1D25C14D66E83D1A12382289(__this, L_119, NULL);
		V_11 = ((int32_t)(((int32_t)((int32_t)L_118&((int32_t)255)))^L_120));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_121 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_122 = V_12;
		NullCheck(L_121);
		uint8_t L_123;
		L_123 = (L_121)->GetAt(0, L_122);
		int32_t L_124 = V_9;
		int32_t L_125;
		L_125 = TwofishEngine_M_b2_mC9FBFAD92C3DBBC07EC10E3D4636C227A5D0BBD3(__this, L_124, NULL);
		V_12 = ((int32_t)(((int32_t)((int32_t)L_123&((int32_t)255)))^L_125));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_126 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_127 = V_13;
		NullCheck(L_126);
		uint8_t L_128;
		L_128 = (L_126)->GetAt(1, L_127);
		int32_t L_129 = V_9;
		int32_t L_130;
		L_130 = TwofishEngine_M_b3_m151C91B19B1CDC4B0DF8FFF85AEAFD64A937D3C3(__this, L_129, NULL);
		V_13 = ((int32_t)(((int32_t)((int32_t)L_128&((int32_t)255)))^L_130));
	}

IL_0283:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_131 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_132 = V_10;
		NullCheck(L_131);
		uint8_t L_133;
		L_133 = (L_131)->GetAt(1, L_132);
		int32_t L_134 = V_8;
		int32_t L_135;
		L_135 = TwofishEngine_M_b0_m9EFF5BA12AF65D9573436729A13957B1A45BE78F(__this, L_134, NULL);
		V_10 = ((int32_t)(((int32_t)((int32_t)L_133&((int32_t)255)))^L_135));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_136 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_137 = V_11;
		NullCheck(L_136);
		uint8_t L_138;
		L_138 = (L_136)->GetAt(1, L_137);
		int32_t L_139 = V_8;
		int32_t L_140;
		L_140 = TwofishEngine_M_b1_m7DA51E93510EAE6E1D25C14D66E83D1A12382289(__this, L_139, NULL);
		V_11 = ((int32_t)(((int32_t)((int32_t)L_138&((int32_t)255)))^L_140));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_141 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_142 = V_12;
		NullCheck(L_141);
		uint8_t L_143;
		L_143 = (L_141)->GetAt(0, L_142);
		int32_t L_144 = V_8;
		int32_t L_145;
		L_145 = TwofishEngine_M_b2_mC9FBFAD92C3DBBC07EC10E3D4636C227A5D0BBD3(__this, L_144, NULL);
		V_12 = ((int32_t)(((int32_t)((int32_t)L_143&((int32_t)255)))^L_145));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_146 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_147 = V_13;
		NullCheck(L_146);
		uint8_t L_148;
		L_148 = (L_146)->GetAt(0, L_147);
		int32_t L_149 = V_8;
		int32_t L_150;
		L_150 = TwofishEngine_M_b3_m151C91B19B1CDC4B0DF8FFF85AEAFD64A937D3C3(__this, L_149, NULL);
		V_13 = ((int32_t)(((int32_t)((int32_t)L_148&((int32_t)255)))^L_150));
	}

IL_02fb:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_151 = __this->___gSBox_42;
		int32_t L_152 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_153 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_154 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_155 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_156 = V_10;
		NullCheck(L_155);
		uint8_t L_157;
		L_157 = (L_155)->GetAt(0, L_156);
		int32_t L_158 = V_7;
		int32_t L_159;
		L_159 = TwofishEngine_M_b0_m9EFF5BA12AF65D9573436729A13957B1A45BE78F(__this, L_158, NULL);
		NullCheck(L_154);
		uint8_t L_160;
		L_160 = (L_154)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_157&((int32_t)255)))^L_159)));
		int32_t L_161 = V_6;
		int32_t L_162;
		L_162 = TwofishEngine_M_b0_m9EFF5BA12AF65D9573436729A13957B1A45BE78F(__this, L_161, NULL);
		NullCheck(L_153);
		int32_t L_163 = ((int32_t)(((int32_t)((int32_t)L_160&((int32_t)255)))^L_162));
		int32_t L_164 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		NullCheck(L_151);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_152, 2))), (int32_t)L_164);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_165 = __this->___gSBox_42;
		int32_t L_166 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_167 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_168 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_169 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_170 = V_11;
		NullCheck(L_169);
		uint8_t L_171;
		L_171 = (L_169)->GetAt(1, L_170);
		int32_t L_172 = V_7;
		int32_t L_173;
		L_173 = TwofishEngine_M_b1_m7DA51E93510EAE6E1D25C14D66E83D1A12382289(__this, L_172, NULL);
		NullCheck(L_168);
		uint8_t L_174;
		L_174 = (L_168)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_171&((int32_t)255)))^L_173)));
		int32_t L_175 = V_6;
		int32_t L_176;
		L_176 = TwofishEngine_M_b1_m7DA51E93510EAE6E1D25C14D66E83D1A12382289(__this, L_175, NULL);
		NullCheck(L_167);
		int32_t L_177 = ((int32_t)(((int32_t)((int32_t)L_174&((int32_t)255)))^L_176));
		int32_t L_178 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_166, 2)), 1))), (int32_t)L_178);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_179 = __this->___gSBox_42;
		int32_t L_180 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_182 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_183 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_184 = V_12;
		NullCheck(L_183);
		uint8_t L_185;
		L_185 = (L_183)->GetAt(0, L_184);
		int32_t L_186 = V_7;
		int32_t L_187;
		L_187 = TwofishEngine_M_b2_mC9FBFAD92C3DBBC07EC10E3D4636C227A5D0BBD3(__this, L_186, NULL);
		NullCheck(L_182);
		uint8_t L_188;
		L_188 = (L_182)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_185&((int32_t)255)))^L_187)));
		int32_t L_189 = V_6;
		int32_t L_190;
		L_190 = TwofishEngine_M_b2_mC9FBFAD92C3DBBC07EC10E3D4636C227A5D0BBD3(__this, L_189, NULL);
		NullCheck(L_181);
		int32_t L_191 = ((int32_t)(((int32_t)((int32_t)L_188&((int32_t)255)))^L_190));
		int32_t L_192 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		NullCheck(L_179);
		(L_179)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_180, 2)), ((int32_t)512)))), (int32_t)L_192);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = __this->___gSBox_42;
		int32_t L_194 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_196 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_197 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_198 = V_13;
		NullCheck(L_197);
		uint8_t L_199;
		L_199 = (L_197)->GetAt(1, L_198);
		int32_t L_200 = V_7;
		int32_t L_201;
		L_201 = TwofishEngine_M_b3_m151C91B19B1CDC4B0DF8FFF85AEAFD64A937D3C3(__this, L_200, NULL);
		NullCheck(L_196);
		uint8_t L_202;
		L_202 = (L_196)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_199&((int32_t)255)))^L_201)));
		int32_t L_203 = V_6;
		int32_t L_204;
		L_204 = TwofishEngine_M_b3_m151C91B19B1CDC4B0DF8FFF85AEAFD64A937D3C3(__this, L_203, NULL);
		NullCheck(L_195);
		int32_t L_205 = ((int32_t)(((int32_t)((int32_t)L_202&((int32_t)255)))^L_204));
		int32_t L_206 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_194, 2)), ((int32_t)513)))), (int32_t)L_206);
	}

IL_0429:
	{
		int32_t L_207 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_207, 1));
	}

IL_042f:
	{
		int32_t L_208 = V_17;
		if ((((int32_t)L_208) < ((int32_t)((int32_t)256))))
		{
			goto IL_010d;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_EncryptBlock_mE467BB3059007C1A96EDF2A67A5512BC5351B4C5 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
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
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___src0;
		int32_t L_1 = ___srcIndex1;
		uint32_t L_2;
		L_2 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_0, L_1, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___gSubKeys_41;
		NullCheck(L_3);
		int32_t L_4 = 0;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)((int32_t)L_2^L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___src0;
		int32_t L_7 = ___srcIndex1;
		uint32_t L_8;
		L_8 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_6, ((int32_t)il2cpp_codegen_add(L_7, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___gSubKeys_41;
		NullCheck(L_9);
		int32_t L_10 = 1;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)((int32_t)L_8^L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___src0;
		int32_t L_13 = ___srcIndex1;
		uint32_t L_14;
		L_14 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_12, ((int32_t)il2cpp_codegen_add(L_13, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___gSubKeys_41;
		NullCheck(L_15);
		int32_t L_16 = 2;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = ((int32_t)((int32_t)L_14^L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___src0;
		int32_t L_19 = ___srcIndex1;
		uint32_t L_20;
		L_20 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_18, ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)12))), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___gSubKeys_41;
		NullCheck(L_21);
		int32_t L_22 = 3;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((int32_t)((int32_t)L_20^L_23));
		V_4 = 8;
		V_7 = 0;
		goto IL_00fc;
	}

IL_0056:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = TwofishEngine_Fe32_0_m4CABE82DCB80F4BAD8A775AF234B4A56830AE814(__this, L_24, NULL);
		V_5 = L_25;
		int32_t L_26 = V_1;
		int32_t L_27;
		L_27 = TwofishEngine_Fe32_3_m8E7C9DABBF3AA686D6FB785ED2B6A5DAF2F149B8(__this, L_26, NULL);
		V_6 = L_27;
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___gSubKeys_41;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		NullCheck(L_31);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_2 = ((int32_t)(L_28^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), L_35))));
		int32_t L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = Integers_RotateRight_m71F39EDEA8A0092EE20905D3BF8FA0086F72981C(L_36, 1, NULL);
		V_2 = L_37;
		int32_t L_38 = V_3;
		int32_t L_39;
		L_39 = Integers_RotateLeft_m9347621D8EE9496234E48F81B69A6E6EC815E79E(L_38, 1, NULL);
		int32_t L_40 = V_5;
		int32_t L_41 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = __this->___gSubKeys_41;
		int32_t L_43 = V_4;
		int32_t L_44 = L_43;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		NullCheck(L_42);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_3 = ((int32_t)(L_39^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_multiply(2, L_41)))), L_46))));
		int32_t L_47 = V_2;
		int32_t L_48;
		L_48 = TwofishEngine_Fe32_0_m4CABE82DCB80F4BAD8A775AF234B4A56830AE814(__this, L_47, NULL);
		V_5 = L_48;
		int32_t L_49 = V_3;
		int32_t L_50;
		L_50 = TwofishEngine_Fe32_3_m8E7C9DABBF3AA686D6FB785ED2B6A5DAF2F149B8(__this, L_49, NULL);
		V_6 = L_50;
		int32_t L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->___gSubKeys_41;
		int32_t L_55 = V_4;
		int32_t L_56 = L_55;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		NullCheck(L_54);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_0 = ((int32_t)(L_51^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, L_53)), L_58))));
		int32_t L_59 = V_0;
		int32_t L_60;
		L_60 = Integers_RotateRight_m71F39EDEA8A0092EE20905D3BF8FA0086F72981C(L_59, 1, NULL);
		V_0 = L_60;
		int32_t L_61 = V_1;
		int32_t L_62;
		L_62 = Integers_RotateLeft_m9347621D8EE9496234E48F81B69A6E6EC815E79E(L_61, 1, NULL);
		int32_t L_63 = V_5;
		int32_t L_64 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___gSubKeys_41;
		int32_t L_66 = V_4;
		int32_t L_67 = L_66;
		V_4 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		NullCheck(L_65);
		int32_t L_68 = L_67;
		int32_t L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_1 = ((int32_t)(L_62^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_63, ((int32_t)il2cpp_codegen_multiply(2, L_64)))), L_69))));
		int32_t L_70 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_70, 2));
	}

IL_00fc:
	{
		int32_t L_71 = V_7;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_72 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->___gSubKeys_41;
		NullCheck(L_73);
		int32_t L_74 = 4;
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___dst2;
		int32_t L_77 = ___dstIndex3;
		Pack_UInt32_To_LE_m5257D54DB27EC5D905B28543D77303149C0BFD45(((int32_t)(L_72^L_75)), L_76, L_77, NULL);
		int32_t L_78 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = __this->___gSubKeys_41;
		NullCheck(L_79);
		int32_t L_80 = 5;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___dst2;
		int32_t L_83 = ___dstIndex3;
		Pack_UInt32_To_LE_m5257D54DB27EC5D905B28543D77303149C0BFD45(((int32_t)(L_78^L_81)), L_82, ((int32_t)il2cpp_codegen_add(L_83, 4)), NULL);
		int32_t L_84 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSubKeys_41;
		NullCheck(L_85);
		int32_t L_86 = 6;
		int32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___dst2;
		int32_t L_89 = ___dstIndex3;
		Pack_UInt32_To_LE_m5257D54DB27EC5D905B28543D77303149C0BFD45(((int32_t)(L_84^L_87)), L_88, ((int32_t)il2cpp_codegen_add(L_89, 8)), NULL);
		int32_t L_90 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___gSubKeys_41;
		NullCheck(L_91);
		int32_t L_92 = 7;
		int32_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___dst2;
		int32_t L_95 = ___dstIndex3;
		Pack_UInt32_To_LE_m5257D54DB27EC5D905B28543D77303149C0BFD45(((int32_t)(L_90^L_93)), L_94, ((int32_t)il2cpp_codegen_add(L_95, ((int32_t)12))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_DecryptBlock_mFB3591FB161A20DD71E0FBEC60B4B145CF614B47 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
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
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___src0;
		int32_t L_1 = ___srcIndex1;
		uint32_t L_2;
		L_2 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_0, L_1, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___gSubKeys_41;
		NullCheck(L_3);
		int32_t L_4 = 4;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)((int32_t)L_2^L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___src0;
		int32_t L_7 = ___srcIndex1;
		uint32_t L_8;
		L_8 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_6, ((int32_t)il2cpp_codegen_add(L_7, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___gSubKeys_41;
		NullCheck(L_9);
		int32_t L_10 = 5;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)((int32_t)L_8^L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___src0;
		int32_t L_13 = ___srcIndex1;
		uint32_t L_14;
		L_14 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_12, ((int32_t)il2cpp_codegen_add(L_13, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___gSubKeys_41;
		NullCheck(L_15);
		int32_t L_16 = 6;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = ((int32_t)((int32_t)L_14^L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___src0;
		int32_t L_19 = ___srcIndex1;
		uint32_t L_20;
		L_20 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_18, ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)12))), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___gSubKeys_41;
		NullCheck(L_21);
		int32_t L_22 = 7;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((int32_t)((int32_t)L_20^L_23));
		V_4 = ((int32_t)39);
		V_7 = 0;
		goto IL_00fd;
	}

IL_0057:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = TwofishEngine_Fe32_0_m4CABE82DCB80F4BAD8A775AF234B4A56830AE814(__this, L_24, NULL);
		V_5 = L_25;
		int32_t L_26 = V_1;
		int32_t L_27;
		L_27 = TwofishEngine_Fe32_3_m8E7C9DABBF3AA686D6FB785ED2B6A5DAF2F149B8(__this, L_26, NULL);
		V_6 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___gSubKeys_41;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		NullCheck(L_31);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = ((int32_t)(L_28^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)il2cpp_codegen_multiply(2, L_30)))), L_35))));
		int32_t L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = Integers_RotateLeft_m9347621D8EE9496234E48F81B69A6E6EC815E79E(L_36, 1, NULL);
		int32_t L_38 = V_5;
		int32_t L_39 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->___gSubKeys_41;
		int32_t L_41 = V_4;
		int32_t L_42 = L_41;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		NullCheck(L_40);
		int32_t L_43 = L_42;
		int32_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = ((int32_t)(L_37^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_38, L_39)), L_44))));
		int32_t L_45 = V_3;
		int32_t L_46;
		L_46 = Integers_RotateRight_m71F39EDEA8A0092EE20905D3BF8FA0086F72981C(L_45, 1, NULL);
		V_3 = L_46;
		int32_t L_47 = V_2;
		int32_t L_48;
		L_48 = TwofishEngine_Fe32_0_m4CABE82DCB80F4BAD8A775AF234B4A56830AE814(__this, L_47, NULL);
		V_5 = L_48;
		int32_t L_49 = V_3;
		int32_t L_50;
		L_50 = TwofishEngine_Fe32_3_m8E7C9DABBF3AA686D6FB785ED2B6A5DAF2F149B8(__this, L_49, NULL);
		V_6 = L_50;
		int32_t L_51 = V_1;
		int32_t L_52 = V_5;
		int32_t L_53 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->___gSubKeys_41;
		int32_t L_55 = V_4;
		int32_t L_56 = L_55;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		NullCheck(L_54);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_1 = ((int32_t)(L_51^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, ((int32_t)il2cpp_codegen_multiply(2, L_53)))), L_58))));
		int32_t L_59 = V_0;
		int32_t L_60;
		L_60 = Integers_RotateLeft_m9347621D8EE9496234E48F81B69A6E6EC815E79E(L_59, 1, NULL);
		int32_t L_61 = V_5;
		int32_t L_62 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = __this->___gSubKeys_41;
		int32_t L_64 = V_4;
		int32_t L_65 = L_64;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		NullCheck(L_63);
		int32_t L_66 = L_65;
		int32_t L_67 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_0 = ((int32_t)(L_60^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_61, L_62)), L_67))));
		int32_t L_68 = V_1;
		int32_t L_69;
		L_69 = Integers_RotateRight_m71F39EDEA8A0092EE20905D3BF8FA0086F72981C(L_68, 1, NULL);
		V_1 = L_69;
		int32_t L_70 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_70, 2));
	}

IL_00fd:
	{
		int32_t L_71 = V_7;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)16))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_72 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->___gSubKeys_41;
		NullCheck(L_73);
		int32_t L_74 = 0;
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___dst2;
		int32_t L_77 = ___dstIndex3;
		Pack_UInt32_To_LE_m5257D54DB27EC5D905B28543D77303149C0BFD45(((int32_t)(L_72^L_75)), L_76, L_77, NULL);
		int32_t L_78 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = __this->___gSubKeys_41;
		NullCheck(L_79);
		int32_t L_80 = 1;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___dst2;
		int32_t L_83 = ___dstIndex3;
		Pack_UInt32_To_LE_m5257D54DB27EC5D905B28543D77303149C0BFD45(((int32_t)(L_78^L_81)), L_82, ((int32_t)il2cpp_codegen_add(L_83, 4)), NULL);
		int32_t L_84 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSubKeys_41;
		NullCheck(L_85);
		int32_t L_86 = 2;
		int32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___dst2;
		int32_t L_89 = ___dstIndex3;
		Pack_UInt32_To_LE_m5257D54DB27EC5D905B28543D77303149C0BFD45(((int32_t)(L_84^L_87)), L_88, ((int32_t)il2cpp_codegen_add(L_89, 8)), NULL);
		int32_t L_90 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___gSubKeys_41;
		NullCheck(L_91);
		int32_t L_92 = 3;
		int32_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___dst2;
		int32_t L_95 = ___dstIndex3;
		Pack_UInt32_To_LE_m5257D54DB27EC5D905B28543D77303149C0BFD45(((int32_t)(L_90^L_93)), L_94, ((int32_t)il2cpp_codegen_add(L_95, ((int32_t)12))), NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::F32(System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_F32_mA1E464AC93E73491171C12F549724C4C3B225B18 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___k321, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var);
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
	{
		int32_t L_0 = ___x0;
		int32_t L_1;
		L_1 = TwofishEngine_M_b0_m9EFF5BA12AF65D9573436729A13957B1A45BE78F(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___x0;
		int32_t L_3;
		L_3 = TwofishEngine_M_b1_m7DA51E93510EAE6E1D25C14D66E83D1A12382289(__this, L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = ___x0;
		int32_t L_5;
		L_5 = TwofishEngine_M_b2_mC9FBFAD92C3DBBC07EC10E3D4636C227A5D0BBD3(__this, L_4, NULL);
		V_2 = L_5;
		int32_t L_6 = ___x0;
		int32_t L_7;
		L_7 = TwofishEngine_M_b3_m151C91B19B1CDC4B0DF8FFF85AEAFD64A937D3C3(__this, L_6, NULL);
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___k321;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___k321;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___k321;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___k321;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		V_8 = 0;
		int32_t L_20 = __this->___k64Cnt_43;
		V_9 = ((int32_t)(L_20&3));
		int32_t L_21 = V_9;
		switch (L_21)
		{
			case 0:
			{
				goto IL_00ef;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_01cf;
			}
			case 3:
			{
				goto IL_015f;
			}
		}
	}
	{
		goto IL_02c4;
	}

IL_005d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_23 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		uint8_t L_25;
		L_25 = (L_23)->GetAt(0, L_24);
		int32_t L_26 = V_4;
		int32_t L_27;
		L_27 = TwofishEngine_M_b0_m9EFF5BA12AF65D9573436729A13957B1A45BE78F(__this, L_26, NULL);
		NullCheck(L_22);
		int32_t L_28 = ((int32_t)(((int32_t)((int32_t)L_25&((int32_t)255)))^L_27));
		int32_t L_29 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_31 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		uint8_t L_33;
		L_33 = (L_31)->GetAt(0, L_32);
		int32_t L_34 = V_4;
		int32_t L_35;
		L_35 = TwofishEngine_M_b1_m7DA51E93510EAE6E1D25C14D66E83D1A12382289(__this, L_34, NULL);
		NullCheck(L_30);
		int32_t L_36 = ((int32_t)(((int32_t)((int32_t)L_33&((int32_t)255)))^L_35));
		int32_t L_37 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_39 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		uint8_t L_41;
		L_41 = (L_39)->GetAt(1, L_40);
		int32_t L_42 = V_4;
		int32_t L_43;
		L_43 = TwofishEngine_M_b2_mC9FBFAD92C3DBBC07EC10E3D4636C227A5D0BBD3(__this, L_42, NULL);
		NullCheck(L_38);
		int32_t L_44 = ((int32_t)(((int32_t)((int32_t)L_41&((int32_t)255)))^L_43));
		int32_t L_45 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_47 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		uint8_t L_49;
		L_49 = (L_47)->GetAt(1, L_48);
		int32_t L_50 = V_4;
		int32_t L_51;
		L_51 = TwofishEngine_M_b3_m151C91B19B1CDC4B0DF8FFF85AEAFD64A937D3C3(__this, L_50, NULL);
		NullCheck(L_46);
		int32_t L_52 = ((int32_t)(((int32_t)((int32_t)L_49&((int32_t)255)))^L_51));
		int32_t L_53 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(L_29^L_37))^L_45))^L_53));
		goto IL_02c4;
	}

IL_00ef:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_54 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_55 = V_0;
		NullCheck(L_54);
		uint8_t L_56;
		L_56 = (L_54)->GetAt(1, L_55);
		int32_t L_57 = V_7;
		int32_t L_58;
		L_58 = TwofishEngine_M_b0_m9EFF5BA12AF65D9573436729A13957B1A45BE78F(__this, L_57, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_56&((int32_t)255)))^L_58));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_59 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_60 = V_1;
		NullCheck(L_59);
		uint8_t L_61;
		L_61 = (L_59)->GetAt(0, L_60);
		int32_t L_62 = V_7;
		int32_t L_63;
		L_63 = TwofishEngine_M_b1_m7DA51E93510EAE6E1D25C14D66E83D1A12382289(__this, L_62, NULL);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_61&((int32_t)255)))^L_63));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_64 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		uint8_t L_66;
		L_66 = (L_64)->GetAt(0, L_65);
		int32_t L_67 = V_7;
		int32_t L_68;
		L_68 = TwofishEngine_M_b2_mC9FBFAD92C3DBBC07EC10E3D4636C227A5D0BBD3(__this, L_67, NULL);
		V_2 = ((int32_t)(((int32_t)((int32_t)L_66&((int32_t)255)))^L_68));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_69 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_70 = V_3;
		NullCheck(L_69);
		uint8_t L_71;
		L_71 = (L_69)->GetAt(1, L_70);
		int32_t L_72 = V_7;
		int32_t L_73;
		L_73 = TwofishEngine_M_b3_m151C91B19B1CDC4B0DF8FFF85AEAFD64A937D3C3(__this, L_72, NULL);
		V_3 = ((int32_t)(((int32_t)((int32_t)L_71&((int32_t)255)))^L_73));
	}

IL_015f:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_74 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_75 = V_0;
		NullCheck(L_74);
		uint8_t L_76;
		L_76 = (L_74)->GetAt(1, L_75);
		int32_t L_77 = V_6;
		int32_t L_78;
		L_78 = TwofishEngine_M_b0_m9EFF5BA12AF65D9573436729A13957B1A45BE78F(__this, L_77, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_76&((int32_t)255)))^L_78));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_79 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_80 = V_1;
		NullCheck(L_79);
		uint8_t L_81;
		L_81 = (L_79)->GetAt(1, L_80);
		int32_t L_82 = V_6;
		int32_t L_83;
		L_83 = TwofishEngine_M_b1_m7DA51E93510EAE6E1D25C14D66E83D1A12382289(__this, L_82, NULL);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_81&((int32_t)255)))^L_83));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_84 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_85 = V_2;
		NullCheck(L_84);
		uint8_t L_86;
		L_86 = (L_84)->GetAt(0, L_85);
		int32_t L_87 = V_6;
		int32_t L_88;
		L_88 = TwofishEngine_M_b2_mC9FBFAD92C3DBBC07EC10E3D4636C227A5D0BBD3(__this, L_87, NULL);
		V_2 = ((int32_t)(((int32_t)((int32_t)L_86&((int32_t)255)))^L_88));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_89 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_90 = V_3;
		NullCheck(L_89);
		uint8_t L_91;
		L_91 = (L_89)->GetAt(0, L_90);
		int32_t L_92 = V_6;
		int32_t L_93;
		L_93 = TwofishEngine_M_b3_m151C91B19B1CDC4B0DF8FFF85AEAFD64A937D3C3(__this, L_92, NULL);
		V_3 = ((int32_t)(((int32_t)((int32_t)L_91&((int32_t)255)))^L_93));
	}

IL_01cf:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_95 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_96 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_97 = V_0;
		NullCheck(L_96);
		uint8_t L_98;
		L_98 = (L_96)->GetAt(0, L_97);
		int32_t L_99 = V_5;
		int32_t L_100;
		L_100 = TwofishEngine_M_b0_m9EFF5BA12AF65D9573436729A13957B1A45BE78F(__this, L_99, NULL);
		NullCheck(L_95);
		uint8_t L_101;
		L_101 = (L_95)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_98&((int32_t)255)))^L_100)));
		int32_t L_102 = V_4;
		int32_t L_103;
		L_103 = TwofishEngine_M_b0_m9EFF5BA12AF65D9573436729A13957B1A45BE78F(__this, L_102, NULL);
		NullCheck(L_94);
		int32_t L_104 = ((int32_t)(((int32_t)((int32_t)L_101&((int32_t)255)))^L_103));
		int32_t L_105 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_107 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_108 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_109 = V_1;
		NullCheck(L_108);
		uint8_t L_110;
		L_110 = (L_108)->GetAt(1, L_109);
		int32_t L_111 = V_5;
		int32_t L_112;
		L_112 = TwofishEngine_M_b1_m7DA51E93510EAE6E1D25C14D66E83D1A12382289(__this, L_111, NULL);
		NullCheck(L_107);
		uint8_t L_113;
		L_113 = (L_107)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_110&((int32_t)255)))^L_112)));
		int32_t L_114 = V_4;
		int32_t L_115;
		L_115 = TwofishEngine_M_b1_m7DA51E93510EAE6E1D25C14D66E83D1A12382289(__this, L_114, NULL);
		NullCheck(L_106);
		int32_t L_116 = ((int32_t)(((int32_t)((int32_t)L_113&((int32_t)255)))^L_115));
		int32_t L_117 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_119 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_120 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_121 = V_2;
		NullCheck(L_120);
		uint8_t L_122;
		L_122 = (L_120)->GetAt(0, L_121);
		int32_t L_123 = V_5;
		int32_t L_124;
		L_124 = TwofishEngine_M_b2_mC9FBFAD92C3DBBC07EC10E3D4636C227A5D0BBD3(__this, L_123, NULL);
		NullCheck(L_119);
		uint8_t L_125;
		L_125 = (L_119)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_122&((int32_t)255)))^L_124)));
		int32_t L_126 = V_4;
		int32_t L_127;
		L_127 = TwofishEngine_M_b2_mC9FBFAD92C3DBBC07EC10E3D4636C227A5D0BBD3(__this, L_126, NULL);
		NullCheck(L_118);
		int32_t L_128 = ((int32_t)(((int32_t)((int32_t)L_125&((int32_t)255)))^L_127));
		int32_t L_129 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_131 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_132 = ((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_133 = V_3;
		NullCheck(L_132);
		uint8_t L_134;
		L_134 = (L_132)->GetAt(1, L_133);
		int32_t L_135 = V_5;
		int32_t L_136;
		L_136 = TwofishEngine_M_b3_m151C91B19B1CDC4B0DF8FFF85AEAFD64A937D3C3(__this, L_135, NULL);
		NullCheck(L_131);
		uint8_t L_137;
		L_137 = (L_131)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_134&((int32_t)255)))^L_136)));
		int32_t L_138 = V_4;
		int32_t L_139;
		L_139 = TwofishEngine_M_b3_m151C91B19B1CDC4B0DF8FFF85AEAFD64A937D3C3(__this, L_138, NULL);
		NullCheck(L_130);
		int32_t L_140 = ((int32_t)(((int32_t)((int32_t)L_137&((int32_t)255)))^L_139));
		int32_t L_141 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(L_105^L_117))^L_129))^L_141));
	}

IL_02c4:
	{
		int32_t L_142 = V_8;
		return L_142;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_MDS_Encode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_MDS_Encode_mBCC7A869CB0D6E45508A58FCFC5DD9E5DFCA92D5 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___k00, int32_t ___k11, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___k11;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0012;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = TwofishEngine_RS_rem_mFFE8550A3FFCCCCC4F158D5168753F67849DB130(__this, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0012:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)4)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___k00;
		V_0 = ((int32_t)(L_5^L_6));
		V_2 = 0;
		goto IL_002a;
	}

IL_001e:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = TwofishEngine_RS_rem_mFFE8550A3FFCCCCC4F158D5168753F67849DB130(__this, L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002a:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_rem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_rem_mFFE8550A3FFCCCCC4F158D5168753F67849DB130 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		int32_t L_0 = ___x0;
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)24)))&((int32_t)255)));
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		G_B1_0 = ((int32_t)(L_1<<1));
		if (((int32_t)(L_2&((int32_t)128))))
		{
			G_B2_0 = ((int32_t)(L_1<<1));
			goto IL_001a;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001a:
	{
		G_B3_0 = ((int32_t)333);
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		V_1 = ((int32_t)(((int32_t)(G_B3_1^G_B3_0))&((int32_t)255)));
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		G_B4_0 = ((int32_t)((uint32_t)L_3>>1));
		if (((int32_t)(L_4&1)))
		{
			G_B5_0 = ((int32_t)((uint32_t)L_3>>1));
			goto IL_0032;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0037;
	}

IL_0032:
	{
		G_B6_0 = ((int32_t)166);
		G_B6_1 = G_B5_0;
	}

IL_0037:
	{
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(((int32_t)(G_B6_1^G_B6_0))^L_5));
		int32_t L_6 = ___x0;
		int32_t L_7 = V_2;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = V_0;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_6<<8))^((int32_t)(L_7<<((int32_t)24)))))^((int32_t)(L_8<<((int32_t)16)))))^((int32_t)(L_9<<8))))^L_10));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR1_mF7512A5846739CEDD9FA004E4B970F6DF2F41D4C (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___x0;
		G_B1_0 = ((int32_t)(L_0>>1));
		if (((int32_t)(L_1&1)))
		{
			G_B2_0 = ((int32_t)(L_0>>1));
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = ((int32_t)180);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		return ((int32_t)(G_B3_1^G_B3_0));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR2_m622B8348EE8738CE5DC1A0AA7BFDB22A8AA46916 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___x0;
		G_B1_0 = ((int32_t)(L_0>>2));
		if (((int32_t)(L_1&2)))
		{
			G_B2_0 = ((int32_t)(L_0>>2));
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = ((int32_t)180);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		int32_t L_2 = ___x0;
		G_B4_0 = ((int32_t)(G_B3_1^G_B3_0));
		if (((int32_t)(L_2&1)))
		{
			G_B5_0 = ((int32_t)(G_B3_1^G_B3_0));
			goto IL_0019;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_001b;
	}

IL_0019:
	{
		G_B6_0 = ((int32_t)90);
		G_B6_1 = G_B5_0;
	}

IL_001b:
	{
		return ((int32_t)(G_B6_1^G_B6_0));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_X(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_X_mD99DF556D9ECEE54B8EA2C94D1A15F1EEE5FBA62 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___x0;
		int32_t L_2;
		L_2 = TwofishEngine_LFSR2_m622B8348EE8738CE5DC1A0AA7BFDB22A8AA46916(__this, L_1, NULL);
		return ((int32_t)(L_0^L_2));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_Y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_Y_mF0905677A6AC12000BD763A1BF3EE2D66B559D4C (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___x0;
		int32_t L_2;
		L_2 = TwofishEngine_LFSR1_mF7512A5846739CEDD9FA004E4B970F6DF2F41D4C(__this, L_1, NULL);
		int32_t L_3 = ___x0;
		int32_t L_4;
		L_4 = TwofishEngine_LFSR2_m622B8348EE8738CE5DC1A0AA7BFDB22A8AA46916(__this, L_3, NULL);
		return ((int32_t)(((int32_t)(L_0^L_2))^L_4));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b0_m9EFF5BA12AF65D9573436729A13957B1A45BE78F (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		return ((int32_t)(L_0&((int32_t)255)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b1_m7DA51E93510EAE6E1D25C14D66E83D1A12382289 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>8))&((int32_t)255)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b2_mC9FBFAD92C3DBBC07EC10E3D4636C227A5D0BBD3 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)16)))&((int32_t)255)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b3_m151C91B19B1CDC4B0DF8FFF85AEAFD64A937D3C3 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)24)))&((int32_t)255)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_0_m4CABE82DCB80F4BAD8A775AF234B4A56830AE814 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___gSBox_42;
		int32_t L_1 = ___x0;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(L_1&((int32_t)255)))));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___gSBox_42;
		int32_t L_5 = ___x0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_5>>8))&((int32_t)255)))))));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___gSBox_42;
		int32_t L_9 = ___x0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))&((int32_t)255)))))));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___gSBox_42;
		int32_t L_13 = ___x0;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(((int32_t)513), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)24)))&((int32_t)255)))))));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(L_3^L_7))^L_11))^L_15));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_3_m8E7C9DABBF3AA686D6FB785ED2B6A5DAF2F149B8 (TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___gSBox_42;
		int32_t L_1 = ___x0;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_1>>((int32_t)24)))&((int32_t)255)))));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___gSBox_42;
		int32_t L_5 = ___x0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(L_5&((int32_t)255)))))));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___gSBox_42;
		int32_t L_9 = ___x0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_9>>8))&((int32_t)255)))))));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___gSBox_42;
		int32_t L_13 = ___x0;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(((int32_t)513), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)16)))&((int32_t)255)))))));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(L_3^L_7))^L_11))^L_15));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine__cctor_mCF7D8DEAEB2943EE664DBCB3D69C93B94782A610 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7919EF601386C08FC5EFB981B4A1E478D8413596173FC159B15739E87EE1BA50_203_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)((int32_t)256) };
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_0 = (ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638*)GenArrayNew(ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var, L_1);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_2 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____7919EF601386C08FC5EFB981B4A1E478D8413596173FC159B15739E87EE1BA50_203_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t14A456544332958D30BE070BF44ECC2EEE083E4A_il2cpp_TypeInfo_var))->___P_0), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_mEF1D069E296B40E3A6562D88497CEF4D4071F069_inline (ParametersWithIV_t5F3CF6FEA3FF0BE7A72ECD4BE1DA7270ACDEDA54* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_parameters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SparkleEngine_SparkleOpt_m92E9A60AA7DA8577CAEF2F5337E319927B794F3C_inline (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___state0, int32_t ___steps1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___state0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)8)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)12))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_0024;
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___state0;
		int32_t L_5 = ___steps1;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		SparkleEngine_SparkleOpt8_m3F12286F0A1D002C2E300EB4057005A47EA23671(L_4, L_5, NULL);
		return;
	}

IL_001c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___state0;
		int32_t L_7 = ___steps1;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		SparkleEngine_SparkleOpt12_m71F02DC0C0F7F958B474970C1B732CD1E4FA61C4(L_6, L_7, NULL);
		return;
	}

IL_0024:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___state0;
		int32_t L_9 = ___steps1;
		il2cpp_codegen_runtime_class_init_inline(SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F_il2cpp_TypeInfo_var);
		SparkleEngine_SparkleOpt16_mF677840D9F41707230E76D9F06017909E9FB31F7(L_8, L_9, NULL);
		return;
	}

IL_002c:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SparkleEngine_SparkleOpt_m92E9A60AA7DA8577CAEF2F5337E319927B794F3C_RuntimeMethod_var)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SparkleEngine_get_AlgorithmName_mC597BB5DDC085E0B6B88DE3A979F17E3F9B125CC_inline (SparkleEngine_tD1D7AABB79EEE2F2CA7604622F948C43F9BE7F5F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___algorithmName_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SparkleEngine_ArxBox_m32F78C222C3063401C45F5D5576F3162850F9BEC_inline (uint32_t ___rc0, uint32_t* ___s001, uint32_t* ___s012, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t* L_0 = ___s001;
		uint32_t* L_1 = ___s001;
		int32_t L_2 = *((uint32_t*)L_1);
		uint32_t* L_3 = ___s012;
		int32_t L_4 = *((uint32_t*)L_3);
		il2cpp_codegen_runtime_class_init_inline(Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_4, ((int32_t)31), NULL);
		*((int32_t*)L_0) = (int32_t)((int32_t)il2cpp_codegen_add(L_2, (int32_t)L_5));
		uint32_t* L_6 = ___s012;
		uint32_t* L_7 = ___s012;
		int32_t L_8 = *((uint32_t*)L_7);
		uint32_t* L_9 = ___s001;
		int32_t L_10 = *((uint32_t*)L_9);
		uint32_t L_11;
		L_11 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_10, ((int32_t)24), NULL);
		*((int32_t*)L_6) = (int32_t)((int32_t)(L_8^(int32_t)L_11));
		uint32_t* L_12 = ___s001;
		uint32_t* L_13 = ___s001;
		int32_t L_14 = *((uint32_t*)L_13);
		uint32_t L_15 = ___rc0;
		*((int32_t*)L_12) = (int32_t)((int32_t)(L_14^(int32_t)L_15));
		uint32_t* L_16 = ___s001;
		uint32_t* L_17 = ___s001;
		int32_t L_18 = *((uint32_t*)L_17);
		uint32_t* L_19 = ___s012;
		int32_t L_20 = *((uint32_t*)L_19);
		uint32_t L_21;
		L_21 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_20, ((int32_t)17), NULL);
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add(L_18, (int32_t)L_21));
		uint32_t* L_22 = ___s012;
		uint32_t* L_23 = ___s012;
		int32_t L_24 = *((uint32_t*)L_23);
		uint32_t* L_25 = ___s001;
		int32_t L_26 = *((uint32_t*)L_25);
		uint32_t L_27;
		L_27 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_26, ((int32_t)17), NULL);
		*((int32_t*)L_22) = (int32_t)((int32_t)(L_24^(int32_t)L_27));
		uint32_t* L_28 = ___s001;
		uint32_t* L_29 = ___s001;
		int32_t L_30 = *((uint32_t*)L_29);
		uint32_t L_31 = ___rc0;
		*((int32_t*)L_28) = (int32_t)((int32_t)(L_30^(int32_t)L_31));
		uint32_t* L_32 = ___s001;
		uint32_t* L_33 = ___s001;
		int32_t L_34 = *((uint32_t*)L_33);
		uint32_t* L_35 = ___s012;
		int32_t L_36 = *((uint32_t*)L_35);
		*((int32_t*)L_32) = (int32_t)((int32_t)il2cpp_codegen_add(L_34, L_36));
		uint32_t* L_37 = ___s012;
		uint32_t* L_38 = ___s012;
		int32_t L_39 = *((uint32_t*)L_38);
		uint32_t* L_40 = ___s001;
		int32_t L_41 = *((uint32_t*)L_40);
		uint32_t L_42;
		L_42 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_41, ((int32_t)31), NULL);
		*((int32_t*)L_37) = (int32_t)((int32_t)(L_39^(int32_t)L_42));
		uint32_t* L_43 = ___s001;
		uint32_t* L_44 = ___s001;
		int32_t L_45 = *((uint32_t*)L_44);
		uint32_t L_46 = ___rc0;
		*((int32_t*)L_43) = (int32_t)((int32_t)(L_45^(int32_t)L_46));
		uint32_t* L_47 = ___s001;
		uint32_t* L_48 = ___s001;
		int32_t L_49 = *((uint32_t*)L_48);
		uint32_t* L_50 = ___s012;
		int32_t L_51 = *((uint32_t*)L_50);
		uint32_t L_52;
		L_52 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_51, ((int32_t)24), NULL);
		*((int32_t*)L_47) = (int32_t)((int32_t)il2cpp_codegen_add(L_49, (int32_t)L_52));
		uint32_t* L_53 = ___s012;
		uint32_t* L_54 = ___s012;
		int32_t L_55 = *((uint32_t*)L_54);
		uint32_t* L_56 = ___s001;
		int32_t L_57 = *((uint32_t*)L_56);
		uint32_t L_58;
		L_58 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_57, ((int32_t)16), NULL);
		*((int32_t*)L_53) = (int32_t)((int32_t)(L_55^(int32_t)L_58));
		uint32_t* L_59 = ___s001;
		uint32_t* L_60 = ___s001;
		int32_t L_61 = *((uint32_t*)L_60);
		uint32_t L_62 = ___rc0;
		*((int32_t*)L_59) = (int32_t)((int32_t)(L_61^(int32_t)L_62));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t SparkleEngine_ELL_mDD5087A7ADD4CB36C3DFE603C0C81FEB5A296E46_inline (uint32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Integers_t9F2551DC5468CE7F4FFBDB2F0FBDE9C503CC0186_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Integers_RotateRight_m518052B64EFD91C606B9EF63889033C4A3E0C34C(L_0, ((int32_t)16), NULL);
		uint32_t L_2 = ___x0;
		return ((int32_t)((int32_t)L_1^((int32_t)((int32_t)L_2&((int32_t)65535)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* TweakableBlockCipherParameters_get_Key_mB9900872F32F8EED8F09D41B91717B4EF7A33CDD_inline (TweakableBlockCipherParameters_t876263FF38FDD4501C518FB9290E1E02E7565E17* __this, const RuntimeMethod* method) 
{
	{
		KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* L_0 = __this->___key_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TweakableBlockCipherParameters_get_Tweak_m9CCD5E294B94EC79C8D24503FC888F23E9C90D1B_inline (TweakableBlockCipherParameters_t876263FF38FDD4501C518FB9290E1E02E7565E17* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___tweak_0;
		return L_0;
	}
}
