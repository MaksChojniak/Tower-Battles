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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[]
struct FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrime[]
struct FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
struct AsymmetricCipherKeyPair_t0A38E877BA777BFA3F5DDA45B8FBC0165CB6A4D2;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_tCE60A7D19FCA9FDF79E1498387921695CDCB4444;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec
struct FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCommon
struct FalconCommon_tEFDB4AD001D50E5699C7BB07A21300E78EFE1CB9;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconConversions
struct FalconConversions_t9071D8FA0C7EAC3B74E8ADCB2C01E884C5B6A94B;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT
struct FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen
struct FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrime
struct FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrimes
struct FalconSmallPrimes_t68BE663EDE0D6BA4978651AD039C3996981CFDD2;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconVrfy
struct FalconVrfy_t4EC770FA3A4E50BFAEECBF9DE90619A954893F20;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine
struct FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine
struct FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKEMExtractor
struct FrodoKEMExtractor_tB37A5B127633EC47D927281CC48D4FF41412E3B4;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKEMGenerator
struct FrodoKEMGenerator_t3DA4AF3905DBE09DE01455A956B421599DCBD091;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyGenerationParameters
struct FrodoKeyGenerationParameters_t6C3B3E0BAF240849FB4533656F739B6363EB6EF6;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyPairGenerator
struct FrodoKeyPairGenerator_tBD10662F7C67388331370173F325D00FA1F3EBD0;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyParameters
struct FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator
struct FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters
struct FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPrivateKeyParameters
struct FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPublicKeyParameters
struct FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_tE665095B452452ABA78804BD9DDD438F9062C70F;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t7E843F4456A9C306B8158B975352B907634D0A42;
// Org.BouncyCastle.Crypto.ISecretWithEncapsulation
struct ISecretWithEncapsulation_tC25095D0869BCC064C96E3FDA96B67BB1ABEEEB2;
// Org.BouncyCastle.Crypto.KeyGenerationParameters
struct KeyGenerationParameters_t0C9F19AF6E594DCE7C04692AA71CD73157392B29;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0;
// Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256
struct SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10;
// Org.BouncyCastle.Pqc.Crypto.Utilities.SecretWithEncapsulationImpl
struct SecretWithEncapsulationImpl_t4C0A3C59485A8CB7ABAD4360FA25D977A2871003;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8;
// Org.BouncyCastle.Crypto.Digests.ShakeDigest
struct ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D;
// System.String
struct String_t;
// Org.BouncyCastle.Pqc.Crypto.Hqc.Utils
struct Utils_t5A4BA04535CAFB09FCD92F65D94646583B6FAD71;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator/Aes128MatrixGenerator
struct Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator/Shake128MatrixGenerator
struct Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403;

IL2CPP_EXTERN_C RuntimeClass* Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsymmetricCipherKeyPair_t0A38E877BA777BFA3F5DDA45B8FBC0165CB6A4D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FalconSmallPrimes_t68BE663EDE0D6BA4978651AD039C3996981CFDD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FalconVrfy_t4EC770FA3A4E50BFAEECBF9DE90619A954893F20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrodoKeyGenerationParameters_t6C3B3E0BAF240849FB4533656F739B6363EB6EF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBlockCipher_tE665095B452452ABA78804BD9DDD438F9062C70F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecretWithEncapsulationImpl_t4C0A3C59485A8CB7ABAD4360FA25D977A2871003_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____1691A129931FB25BD1A6B61962B1BC2DBF4A35C6D0F66CAFB00E7D325A043AFD_34_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____1E02B1D50A1940A51671DC0BE3D58967EF531D51879B55F71FB1B70C5DE3C92F_42_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2381073588085DEC186E7DFAE3F577D65E9C0A020A4B17488C127A60897C6642_50_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____251E3E8D6C8623BD8E24A20F50BCD78E044188FA6C113F018525B266C15001C6_56_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____29E73BE4AE667DAA40ECB03060CB774323057723391BBD27872966CB3CA33D2F_60_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____34D542F5ED8A11EC9DE5E3882B3F28866A9377F5A748F5D649B6404BCF8CCDAC_82_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____3D0EBB5DC33F10BDCF03701C753BECBEAA73D3F1D739FDA70A09F5D78947149A_96_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____46C4D06226E74471A7B52BA70A1533E5FB906912EA7D01D88D2142B3EB30B918_113_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6532F51A82E7FD04EE2E8DCB8A6CA9D49B2AFC893C7B06813C9E7C4000FE85AF_165_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____8546F1BCB5C4931501D810E34637ECD4C72DD549D16C439CE1B3C769A181A9A9_228_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B3C6C9A7B91F13134F7F6E0078C416CF1DE1E2CA7ED333F41696359779D6F3C8_310_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BE24C09865A93221DF3247D5C3D727BCFDAB57D6B41C510D3AA53F0DE08E4C2C_338_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____D1F54F5BBFE626A7CD4332F4064FD2BFF36A5421C7224B12D7DC963DCE097FD5_370_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral18EE2265CD923C3BE0C753F7C5BA5E621962344F;
IL2CPP_EXTERN_C String_t* _stringLiteral22F8221AC3074FAAE5631705773DBCB6E41A0DBE;
IL2CPP_EXTERN_C String_t* _stringLiteral3AA8A2B5B83E553368BCAD17320E82953578B9C1;
IL2CPP_EXTERN_C String_t* _stringLiteralA521D3AC5CD2FD2D7036E955E442EE91FAA8A6AC;
IL2CPP_EXTERN_C String_t* _stringLiteralE462556F5566CA665374C61FFF2039C8DF43955C;
IL2CPP_EXTERN_C String_t* _stringLiteralE7A1D3AD4268BB6FB05A7A58DFF603CC69E438F9;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971;
struct FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
struct AsymmetricCipherKeyPair_t0A38E877BA777BFA3F5DDA45B8FBC0165CB6A4D2  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.AsymmetricKeyParameter Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair::publicParameter
	AsymmetricKeyParameter_tCE60A7D19FCA9FDF79E1498387921695CDCB4444* ___publicParameter_0;
	// Org.BouncyCastle.Crypto.AsymmetricKeyParameter Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair::privateParameter
	AsymmetricKeyParameter_tCE60A7D19FCA9FDF79E1498387921695CDCB4444* ___privateParameter_1;
};

// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_tCE60A7D19FCA9FDF79E1498387921695CDCB4444  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.AsymmetricKeyParameter::privateKey
	bool ___privateKey_0;
};

// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec
struct FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec::max_fg_bits
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___max_fg_bits_0;
	// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec::max_FG_bits
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___max_FG_bits_1;
	// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec::max_sig_bits
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___max_sig_bits_2;
};

// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCommon
struct FalconCommon_tEFDB4AD001D50E5699C7BB07A21300E78EFE1CB9  : public RuntimeObject
{
	// System.UInt32[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCommon::l2bound
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___l2bound_0;
};

// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconConversions
struct FalconConversions_t9071D8FA0C7EAC3B74E8ADCB2C01E884C5B6A94B  : public RuntimeObject
{
};

// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT
struct FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF  : public RuntimeObject
{
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::fpre
	FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* ___fpre_0;
};

// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen
struct FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35  : public RuntimeObject
{
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::fpre
	FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* ___fpre_0;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::ffte
	FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* ___ffte_1;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrime[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::PRIMES
	FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* ___PRIMES_2;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::codec
	FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* ___codec_3;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconVrfy Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::vrfy
	FalconVrfy_t4EC770FA3A4E50BFAEECBF9DE90619A954893F20* ___vrfy_4;
	// System.UInt16[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::REV10
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___REV10_5;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::gauss_1024_12289
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___gauss_1024_12289_6;
	// System.Int32[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::MAX_BL_SMALL
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MAX_BL_SMALL_7;
	// System.Int32[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::MAX_BL_LARGE
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MAX_BL_LARGE_8;
	// System.Int32[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::BITLENGTH_avg
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___BITLENGTH_avg_9;
	// System.Int32[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::BITLENGTH_std
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___BITLENGTH_std_10;
};

// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrime
struct FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12  : public RuntimeObject
{
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrime::p
	uint32_t ___p_0;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrime::g
	uint32_t ___g_1;
	// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrime::s
	uint32_t ___s_2;
};

// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrimes
struct FalconSmallPrimes_t68BE663EDE0D6BA4978651AD039C3996981CFDD2  : public RuntimeObject
{
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrime[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrimes::PRIMES
	FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* ___PRIMES_0;
};

// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconVrfy
struct FalconVrfy_t4EC770FA3A4E50BFAEECBF9DE90619A954893F20  : public RuntimeObject
{
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCommon Org.BouncyCastle.Pqc.Crypto.Falcon.FalconVrfy::common
	FalconCommon_tEFDB4AD001D50E5699C7BB07A21300E78EFE1CB9* ___common_0;
	// System.UInt16[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconVrfy::GMb
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___GMb_5;
	// System.UInt16[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconVrfy::iGMb
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___iGMb_6;
};

// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine
struct FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::D
	int32_t ___D_8;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::q
	int32_t ___q_9;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::n
	int32_t ___n_10;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::B
	int32_t ___B_11;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_sk_bytes
	int32_t ___len_sk_bytes_12;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_pk_bytes
	int32_t ___len_pk_bytes_13;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_ct_bytes
	int32_t ___len_ct_bytes_14;
	// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::T_chi
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___T_chi_15;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_mu
	int32_t ___len_mu_16;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_seedSE
	int32_t ___len_seedSE_17;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_s
	int32_t ___len_s_18;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_k
	int32_t ___len_k_19;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_pkh
	int32_t ___len_pkh_20;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_ss
	int32_t ___len_ss_21;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_mu_bytes
	int32_t ___len_mu_bytes_22;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_seedSE_bytes
	int32_t ___len_seedSE_bytes_23;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_s_bytes
	int32_t ___len_s_bytes_24;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_k_bytes
	int32_t ___len_k_bytes_25;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_pkh_bytes
	int32_t ___len_pkh_bytes_26;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_ss_bytes
	int32_t ___len_ss_bytes_27;
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::digest
	RuntimeObject* ___digest_28;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::gen
	FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* ___gen_29;
};

struct FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields
{
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::nbar
	int32_t ___nbar_0;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::mbar
	int32_t ___mbar_1;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_seedA
	int32_t ___len_seedA_2;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_z
	int32_t ___len_z_3;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_chi
	int32_t ___len_chi_4;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_seedA_bytes
	int32_t ___len_seedA_bytes_5;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_z_bytes
	int32_t ___len_z_bytes_6;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::len_chi_bytes
	int32_t ___len_chi_bytes_7;
};

// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKEMExtractor
struct FrodoKEMExtractor_tB37A5B127633EC47D927281CC48D4FF41412E3B4  : public RuntimeObject
{
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKEMExtractor::m_key
	FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C* ___m_key_0;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKEMExtractor::m_engine
	FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* ___m_engine_1;
};

// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKEMGenerator
struct FrodoKEMGenerator_t3DA4AF3905DBE09DE01455A956B421599DCBD091  : public RuntimeObject
{
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKEMGenerator::m_random
	SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___m_random_0;
};

// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyPairGenerator
struct FrodoKeyPairGenerator_tBD10662F7C67388331370173F325D00FA1F3EBD0  : public RuntimeObject
{
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyPairGenerator::m_parameters
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___m_parameters_0;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyPairGenerator::m_random
	SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___m_random_1;
};

// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator
struct FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator::n
	int32_t ___n_0;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator::q
	int32_t ___q_1;
};

// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters
struct FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133  : public RuntimeObject
{
	// System.String Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::name
	String_t* ___name_15;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::n
	int32_t ___n_16;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::d
	int32_t ___d_17;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::b
	int32_t ___b_18;
	// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::cdf_table
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___cdf_table_19;
	// Org.BouncyCastle.Crypto.Digests.ShakeDigest Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::digest
	ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* ___digest_20;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::mGen
	FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* ___mGen_21;
	// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::defaultKeySize
	int32_t ___defaultKeySize_22;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::engine
	FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* ___engine_23;
};

struct FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields
{
	// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::cdf_table640
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___cdf_table640_0;
	// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::cdf_table976
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___cdf_table976_1;
	// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::cdf_table1344
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___cdf_table1344_2;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::frodokem640aes
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___frodokem640aes_3;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::frodokem640shake
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___frodokem640shake_4;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::frodokem976aes
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___frodokem976aes_5;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::frodokem976shake
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___frodokem976shake_6;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::frodokem1344aes
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___frodokem1344aes_7;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::frodokem1344shake
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___frodokem1344shake_8;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::frodokem19888r3
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___frodokem19888r3_9;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::frodokem19888shaker3
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___frodokem19888shaker3_10;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::frodokem31296r3
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___frodokem31296r3_11;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::frodokem31296shaker3
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___frodokem31296shaker3_12;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::frodokem43088r3
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___frodokem43088r3_13;
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::frodokem43088shaker3
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___frodokem43088shaker3_14;
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

// Org.BouncyCastle.Crypto.KeyGenerationParameters
struct KeyGenerationParameters_t0C9F19AF6E594DCE7C04692AA71CD73157392B29  : public RuntimeObject
{
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.KeyGenerationParameters::random
	SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___random_0;
	// System.Int32 Org.BouncyCastle.Crypto.KeyGenerationParameters::strength
	int32_t ___strength_1;
};

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::m_key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_key_0;
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

// Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256
struct SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10  : public RuntimeObject
{
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256::A
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___A_0;
	// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256::dubf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dubf_1;
	// System.UInt64 Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256::dptr
	uint64_t ___dptr_2;
	// System.UInt64[] Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256::RC
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___RC_3;
};

// Org.BouncyCastle.Pqc.Crypto.Utilities.SecretWithEncapsulationImpl
struct SecretWithEncapsulationImpl_t4C0A3C59485A8CB7ABAD4360FA25D977A2871003  : public RuntimeObject
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Org.BouncyCastle.Pqc.Crypto.Utilities.SecretWithEncapsulationImpl::hasBeenDestroyed
	bool ___hasBeenDestroyed_0;
	// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Utilities.SecretWithEncapsulationImpl::sessionKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sessionKey_1;
	// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Utilities.SecretWithEncapsulationImpl::cipher_text
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipher_text_2;
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

// Org.BouncyCastle.Pqc.Crypto.Hqc.Utils
struct Utils_t5A4BA04535CAFB09FCD92F65D94646583B6FAD71  : public RuntimeObject
{
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR
struct FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE 
{
	// System.Double Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR::v
	double ___v_0;
};

// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyGenerationParameters
struct FrodoKeyGenerationParameters_t6C3B3E0BAF240849FB4533656F739B6363EB6EF6  : public KeyGenerationParameters_t0C9F19AF6E594DCE7C04692AA71CD73157392B29
{
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyGenerationParameters::m_parameters
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___m_parameters_2;
};

// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyParameters
struct FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C  : public AsymmetricKeyParameter_tCE60A7D19FCA9FDF79E1498387921695CDCB4444
{
	// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyParameters::m_parameters
	FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___m_parameters_1;
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
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

// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator/Aes128MatrixGenerator
struct Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA  : public FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E
{
};

// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator/Shake128MatrixGenerator
struct Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403  : public FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E
{
};

// Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine
struct FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796  : public RuntimeObject
{
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_gm_tab
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___fpr_gm_tab_0;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_p2_tab
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___fpr_p2_tab_1;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_log2
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_log2_2;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_inv_log2
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_inv_log2_3;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_bnorm_max
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_bnorm_max_4;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_zero
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_zero_5;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_one
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_one_6;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_two
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_two_7;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_onehalf
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_onehalf_8;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_invsqrt2
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_invsqrt2_9;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_invsqrt8
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_invsqrt8_10;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_ptwo31
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_ptwo31_11;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_ptwo31m1
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_ptwo31m1_12;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_mtwo31m1
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_mtwo31m1_13;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_ptwo63m1
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_ptwo63m1_14;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_mtwo63m1
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_mtwo63m1_15;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_ptwo63
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_ptwo63_16;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_q
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_q_17;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_inverse_of_q
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_inverse_of_q_18;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_inv_2sqrsigma0
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___fpr_inv_2sqrsigma0_19;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_inv_sigma
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___fpr_inv_sigma_20;
	// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_sigma_min
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___fpr_sigma_min_21;
};

// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPrivateKeyParameters
struct FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5  : public FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C
{
	// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPrivateKeyParameters::privateKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___privateKey_2;
};

// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPublicKeyParameters
struct FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335  : public FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C
{
	// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPublicKeyParameters::m_publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_publicKey_2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
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
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
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
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[]
struct FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971  : public RuntimeArray
{
	ALIGN_FIELD (8) FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE m_Items[1];

	inline FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE value)
	{
		m_Items[index] = value;
	}
};
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrime[]
struct FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6  : public RuntimeArray
{
	ALIGN_FIELD (8) FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* m_Items[1];

	inline FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt64_To_LE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_mB44FF8D75991052CA3DD7E7998CECE06565B9D10 (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_mE6956BD2F8D5A8E940BEBD516250C1090B3252FF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.UInt16 Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Pack_LE_To_UInt16_m4FC2AD5B4BDEDF633F41D05BADFA604CAC07E097 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int16 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::Sample(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t FrodoEngine_Sample_m7D5BD389A82E57D30DCE39233181521227097EE4 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, int16_t ___r0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Arrays::CopyOfRange(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___from1, int32_t ___to2, const RuntimeMethod* method) ;
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::SampleMatrix(System.Int16[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_SampleMatrix_m9BDA6DDC168B2FF9B61626D805125F0624469333 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___r0, int32_t ___offset1, int32_t ___n12, int32_t ___n23, const RuntimeMethod* method) ;
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::MatrixTranspose(System.Int16[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_MatrixTranspose_m231B4A5255CA8ECB93D3BCCC2CB4BE02689607DC (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___X0, int32_t ___n11, int32_t ___n22, const RuntimeMethod* method) ;
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::MatrixMul(System.Int16[],System.Int32,System.Int32,System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_MatrixMul_mDB3D84C635F07DDA0A8717AD7E73B5346459DE3A (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___X0, int32_t ___Xrow1, int32_t ___Xcol2, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___Y3, int32_t ___Ycol4, const RuntimeMethod* method) ;
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::MatrixAdd(System.Int16[],System.Int16[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_MatrixAdd_m176EDADC79D11948D48CBCF8C918BB90F326E98B (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___X0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___Y1, int32_t ___n12, int32_t ___m13, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::FrodoPack(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FrodoEngine_FrodoPack_m50869610764094A850667928A50F863142FC72F0 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___C0, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Arrays::Concatenate(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Concatenate_m65A66808E9C337266905FA04349EFB8F02B48E2E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt16_To_LE(System.UInt16,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt16_To_LE_m6A3649365325626457A6E634238A2A523E437850 (uint16_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, const RuntimeMethod* method) ;
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::FrodoUnpack(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_FrodoUnpack_mB344E784DAA7CAF19E93A56B41912B08229ADE85 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___n11, int32_t ___n22, const RuntimeMethod* method) ;
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::Encode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_Encode_m315ECA55BBB5B046EE1248310BA2254D27D21392 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, const RuntimeMethod* method) ;
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::MatrixSub(System.Int16[],System.Int16[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_MatrixSub_m4C5A0977852B920A44A434C1DAA4FA84E2AE4DFB (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___X0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___Y1, int32_t ___n12, int32_t ___n23, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::Decode(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FrodoEngine_Decode_mC5F49B26234D45D379EA0D4AA39C128C6086995F (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___input0, const RuntimeMethod* method) ;
// System.Int16 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::CTVerify(System.Int16[],System.Int16[],System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t FrodoEngine_CTVerify_mBC9F03778ADBE5A59F2EF2C2494303E18E713F13 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___a10, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___a21, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___b12, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___b23, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::CTSelect(System.Byte[],System.Byte[],System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FrodoEngine_CTSelect_m9958C82E224AB9D9851A3AF488335D13B1E027B3 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, int16_t ___selector2, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyParameters::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* FrodoKeyParameters_get_Parameters_mFFDAC4609368734FFED0371ADDFA2FDA3BC3028D_inline (FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::get_Engine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* FrodoParameters_get_Engine_m867F36BC59F0B14A5E4BC6F01940071FFC3819B3_inline (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::get_SessionKeySize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FrodoEngine_get_SessionKeySize_mBF0BE50AFF293123ACC1C4277D5BD2D25784B18E_inline (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::kem_dec(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoEngine_kem_dec_mEA78771B476C3669E79C68E2E344923B975485F0 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ss0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ct1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::get_CipherTextSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FrodoEngine_get_CipherTextSize_m4D3D3654A1DE0B125B60CC27FAD8B215CA5A3301_inline (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::kem_enc(System.Byte[],System.Byte[],System.Byte[],Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoEngine_kem_enc_mD750D86E7DD15A0C0C8F093909D5B2EC0DBCF046 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ct0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ss1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___random3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Utilities.SecretWithEncapsulationImpl::.ctor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretWithEncapsulationImpl__ctor_mFA1DD8E1A7AFDDADB78C4961153CD91024C4C150 (SecretWithEncapsulationImpl_t4C0A3C59485A8CB7ABAD4360FA25D977A2871003* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sessionKey0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipher_text1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.KeyGenerationParameters::.ctor(Org.BouncyCastle.Security.SecureRandom,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGenerationParameters__ctor_m4627FC453252D781277FB559AC9FB3DD6E4793DB (KeyGenerationParameters_t0C9F19AF6E594DCE7C04692AA71CD73157392B29* __this, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___random0, int32_t ___strength1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyGenerationParameters::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* FrodoKeyGenerationParameters_get_Parameters_m8B7D1AF5B86D7EC55F175EE838DDFB2A0FC76436_inline (FrodoKeyGenerationParameters_t6C3B3E0BAF240849FB4533656F739B6363EB6EF6* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.KeyGenerationParameters::get_Random()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* KeyGenerationParameters_get_Random_m1A6E9BB56C308C3A41AD11C2CFBBB475E25050D5_inline (KeyGenerationParameters_t0C9F19AF6E594DCE7C04692AA71CD73157392B29* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::get_PrivateKeySize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FrodoEngine_get_PrivateKeySize_m7BA719C63D22147425D88AC1FA8541E427375986_inline (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::get_PublicKeySize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FrodoEngine_get_PublicKeySize_m3FFB358D6C94BAEA0E814446583A04197F2C517D_inline (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::kem_keypair(System.Byte[],System.Byte[],Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoEngine_kem_keypair_m08949D20031C9C67F1D5A05D1CDAF86DFD906F34 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk1, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___random2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPublicKeyParameters::.ctor(Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoPublicKeyParameters__ctor_m51B713785CA8404CC35C2CF1DA1535C1C31B795D (FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335* __this, FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___parameters0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___publicKey1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPrivateKeyParameters::.ctor(Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoPrivateKeyParameters__ctor_m667342D19A802793FC790543C35086D14E9CE8E9 (FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5* __this, FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___parameters0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___privateKey1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair::.ctor(Org.BouncyCastle.Crypto.AsymmetricKeyParameter,Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsymmetricCipherKeyPair__ctor_m1E0F04422A71FFB7AE441D701555BFA8A97DE5F7 (AsymmetricCipherKeyPair_t0A38E877BA777BFA3F5DDA45B8FBC0165CB6A4D2* __this, AsymmetricKeyParameter_tCE60A7D19FCA9FDF79E1498387921695CDCB4444* ___publicParameter0, AsymmetricKeyParameter_tCE60A7D19FCA9FDF79E1498387921695CDCB4444* ___privateParameter1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.AsymmetricKeyParameter::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsymmetricKeyParameter__ctor_m1D8679CC1116F2495CCD108475E79A1FE95B1106 (AsymmetricKeyParameter_tCE60A7D19FCA9FDF79E1498387921695CDCB4444* __this, bool ___privateKey0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoMatrixGenerator__ctor_m1212B5CAFE7C6BD3BFE017DE22ADEF57288CA882 (FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* __this, int32_t ___n0, int32_t ___q1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m6216739ECC19D7C9735EF5B2D5E7B498FA91964A (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.AesUtilities::CreateEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AesUtilities_CreateEngine_mF61AABA724D754603FF18E6F6A1F01362D8594FA (const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.KeyParameter::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyParameter__ctor_m6F40CE65781E440BF20F17867ECA04BF6A8A660F (KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt16_To_LE(System.UInt16,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt16_To_LE_mC32154C784222BE0AFD80BE60B8792543D4B5A92 (uint16_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::.ctor(System.Int32,System.Int32,System.Int32,System.Int16[],Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoEngine__ctor_m6CA995AB2075CB80F0F6A941A0A2130CD0218330 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, int32_t ___n0, int32_t ___D1, int32_t ___B2, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___cdf_table3, RuntimeObject* ___digest4, FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* ___mGen5, const RuntimeMethod* method) ;
// System.Int16[] Org.BouncyCastle.Utilities.Arrays::Clone(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Arrays_Clone_mC84BF5DF1FC9D9CD457705AF50AE502F6B35BCD7 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___data0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor(Org.BouncyCastle.Crypto.Digests.ShakeDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m73490929801CAE613C76979D948F42B0C1E54264 (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* __this, ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* ___source0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator/Aes128MatrixGenerator::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Aes128MatrixGenerator__ctor_mF59C2D93301679355570E45A303BB40C25DA43F1 (Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA* __this, int32_t ___n0, int32_t ___q1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int16[],Org.BouncyCastle.Crypto.Digests.ShakeDigest,Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoParameters__ctor_mAE448954DCE57E51FE54D82E6CDB3C32B19E26AD (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* __this, String_t* ___name0, int32_t ___n1, int32_t ___d2, int32_t ___b3, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___cdf_table4, ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* ___digest5, FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* ___mGen6, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator/Shake128MatrixGenerator::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shake128MatrixGenerator__ctor_m390B473680280C7B30CFF414DEC1225F73C31EE1 (Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403* __this, int32_t ___n0, int32_t ___q1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyParameters::.ctor(System.Boolean,Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoKeyParameters__ctor_m03DE7DF3C16104BF2F43574EB8B4C510F1601A2F (FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C* __this, bool ___isPrivate0, FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___parameters1, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Arrays::Clone(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Clone_m3447725699DFC9BC50FB07E820FBA4CC454E198C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPublicKeyParameters::GetPublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FrodoPublicKeyParameters_GetPublicKey_m8F14BBA1947BC0847DD9D71ADD7E1840C9AD1121 (FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256::i_shake256_extract(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHAKE256_i_shake256_extract_m7989D33EFD07984A599C6ECC1E439B4844D9318E (SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outsrc0, int32_t ___outarray1, int32_t ___len2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconConversions::bytes_to_uint(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconConversions_bytes_to_uint_mC0A927E4DDA9F097CDBF6225CFD8DF6823E5CD9A (FalconConversions_t9071D8FA0C7EAC3B74E8ADCB2C01E884C5B6A94B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___pos1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FprEngine__ctor_mE6E0E995655AE8844C7233074F31C9E8D94F4BB6 (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_add(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504 (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___x0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___y1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_sub(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE FprEngine_fpr_sub_mB6D81D4DA5EEB30E7E91945015E70874378C3A66 (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___x0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___y1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_mul(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___x0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___y1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_sqr(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___x0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_double(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE FprEngine_fpr_double_mC82F7ACF56F2B18995D7D7BFE32C09306E583B92 (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___x0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_inv(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE FprEngine_fpr_inv_m3AF34CA7BDF942C63923FB4FA7EEDF8EC9B1A3AB (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___x0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_neg(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___x0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::FPC_MUL(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* FalconFFT_FPC_MUL_mF3FFC41890CDFC01BDCE77A91F67FE9B5337D590 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_re0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_im1, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_re2, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_im3, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::FPC_ADD(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* FalconFFT_FPC_ADD_mB82B3CD699DA185FAE3031E44D2BCC03432FEF87 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_re0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_im1, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_re2, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_im3, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::FPC_SUB(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* FalconFFT_FPC_SUB_m1C617491749509F1209F7258DB46E2A63FCC0E5F (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_re0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_im1, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_re2, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_im3, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::FPC_DIV(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* FalconFFT_FPC_DIV_mA4E103421E0A0F1DE3A40887BA08353259E31708 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_re0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_im1, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_re2, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_im3, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_half(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE FprEngine_fpr_half_mF67809B82C11A1D4C118888BEF1C8E8219473612 (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___x0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR::.ctor(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FalconFPR__ctor_m04B570CA07BB8A0A0F3884B9086C9040E28DAF22_inline (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE* __this, double ___v0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrimes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconSmallPrimes__ctor_m9271B253BFEB6D3D73DD559828397EFCF988AF4B (FalconSmallPrimes_t68BE663EDE0D6BA4978651AD039C3996981CFDD2* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::.ctor(Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT__ctor_m8ED2C1B9E18FE2120AB4D9B69232AAA39A4A57CA (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* ___fprengine0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconCodec__ctor_mF041EBA80B369B5E1B548E9C38252516F75B6C73 (FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconVrfy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconVrfy__ctor_mD13F0C5A7B9F79FF75929D262AC5E15EE6015936 (FalconVrfy_t4EC770FA3A4E50BFAEECBF9DE90619A954893F20* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT__ctor_mDFB34FFF9500E004BEFDCA23A9126FAC9DE1192F (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_R(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_R_m0085B0566737E57E6BD5BD3C4A879A95B01BB436 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___p0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_add(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_add_m0C9050405D198B39828FE8729BC3C3B1CFCF41B2 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___a0, uint32_t ___b1, uint32_t ___p2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_montymul(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___a0, uint32_t ___b1, uint32_t ___p2, uint32_t ___p0i3, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_R2(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_R2_mFDF10C899F4DAC34C48E9CA91B075A78FE793634 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___p0, uint32_t ___p0i1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_div(System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_div_mB0AF51EC80EACC389C8B7587AEF01695C44E4D82 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___a0, uint32_t ___b1, uint32_t ___p2, uint32_t ___p0i3, uint32_t ___R4, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_sub(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_sub_m209143B45E60A57D543566124663AA52011EBFEE (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___a0, uint32_t ___b1, uint32_t ___p2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_NTT2_ext(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_modp_NTT2_ext_m05236D570394BFFBAF718038203581885B8ED31A (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, int32_t ___stride2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___gmsrc3, int32_t ___gm4, uint32_t ___logn5, uint32_t ___p6, uint32_t ___p0i7, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_iNTT2_ext(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, int32_t ___stride2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___igmsrc3, int32_t ___igm4, uint32_t ___logn5, uint32_t ___p6, uint32_t ___p0i7, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_mod_small_uint(System.UInt32[],System.Int32,System.Int32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_zint_mod_small_uint_mF2A4B42959575DA89BC329C6439D688A4211384F (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___dsrc0, int32_t ___d1, int32_t ___dlen2, uint32_t ___p3, uint32_t ___p0i4, uint32_t ___R25, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_sub(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_zint_sub_mAD454B35A3228E8F547562F40C5A833F0F3AE4C4 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___bsrc2, int32_t ___b3, int32_t ___len4, uint32_t ___ctl5, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_ninv31(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___p0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_add_mul_small(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_add_mul_small_m4534816232A7144C3BDAF176AC1DBFCAE4D1AD03 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xsrc0, int32_t ___x1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ysrc2, int32_t ___y3, int32_t ___len4, uint32_t ___s5, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_mul_small(System.UInt32[],System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_zint_mul_small_mB77F1B1585761BE4710BA9687E6933137B0F48E6 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___msrc0, int32_t ___m1, int32_t ___mlen2, uint32_t ___x3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_norm_zero(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_norm_zero_m004B1883D9AFC2D9D455F075ADD4E21545AB17C0 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xsrc0, int32_t ___x1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___psrc2, int32_t ___p3, int32_t ___len4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_negate(System.UInt32[],System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_negate_m202887C1232DF7BF7DA769A41032C915FA7D9F66 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, int32_t ___len2, uint32_t ___ctl3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_finish_mod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_finish_mod_m1D8A316D66CB2A9E92FC037D2793042A7392AB2D (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, int32_t ___len2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___msrc3, int32_t ___m4, uint32_t ___neg5, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_co_reduce(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.Int64,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_zint_co_reduce_m5964FFE0832870992D1580F260F28F19BDFA0C52 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___bsrc2, int32_t ___b3, int32_t ___len4, int64_t ___xa5, int64_t ___xb6, int64_t ___ya7, int64_t ___yb8, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_co_reduce_mod(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32,System.Int64,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_co_reduce_mod_m9802F2AA3F636DC4B9D29281C1EDF219A9205830 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___bsrc2, int32_t ___b3, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___msrc4, int32_t ___m5, int32_t ___len6, uint32_t ___m0i7, int64_t ___xa8, int64_t ___xb9, int64_t ___ya10, int64_t ___yb11, const RuntimeMethod* method) ;
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_of(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE FprEngine_fpr_of_mE2CCAB33E9E22FC76315E34C34FB1C5A854F621D (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* __this, int64_t ___i0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_one_to_plain(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_zint_one_to_plain_m01BEF4E63BA72C4DA4D6CEDEC5DB266C30A26DA2 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xsrc0, int32_t ___x1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_add_scaled_mul_small(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.Int32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_add_scaled_mul_small_m5023A209696BCE13F5D513C10957E768F0A4C53A (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xsrc0, int32_t ___x1, int32_t ___xlen2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ysrc3, int32_t ___y4, int32_t ___ylen5, int32_t ___k6, uint32_t ___sch7, uint32_t ___scl8, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_Rx(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_Rx_mE6091B563F2ACAC7BB7ABE09D31961273EB89A79 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___x0, uint32_t ___p1, uint32_t ___p0i2, uint32_t ___R23, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_mkgm2(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_modp_mkgm2_m059C61ADC3900310EDA79EBC8573C3D66CBB86A5 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___gmsrc0, int32_t ___gm1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___igmsrc2, int32_t ___igm3, uint32_t ___logn4, uint32_t ___g5, uint32_t ___p6, uint32_t ___p0i7, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_set(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, int32_t ___x0, uint32_t ___p1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_NTT2(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___gmsrc2, int32_t ___gm3, uint32_t ___logn4, uint32_t ___p5, uint32_t ___p0i6, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_mod_small_signed(System.UInt32[],System.Int32,System.Int32,System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_zint_mod_small_signed_m8C67FB119B15C5E02BC12B3D0B9AEFB26C9829C3 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___dsrc0, int32_t ___d1, int32_t ___dlen2, uint32_t ___p3, uint32_t ___p0i4, uint32_t ___R25, uint32_t ___Rx6, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_rebuild_CRT(System.UInt32[],System.Int32,System.Int32,System.Int32,System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrime[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_rebuild_CRT_mFDDBAA64799A444D72449A4F4866B19D204C9DB5 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xxsrc0, int32_t ___xx1, int32_t ___xlen2, int32_t ___xstride3, int32_t ___num4, FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* ___primes5, int32_t ___normalize_signed6, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc7, int32_t ___tmp8, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_sub_scaled(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_sub_scaled_m4382A0E728414E4E2F3D5FAA63CFFFF8F759EB60 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xsrc0, int32_t ___x1, int32_t ___xlen2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ysrc3, int32_t ___y4, int32_t ___ylen5, uint32_t ___sch6, uint32_t ___scl7, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::get_rng_u64(Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FalconKeygen_get_rng_u64_m6AD9A885C4A2F6C4DA05AD4B725753B40F74A85E (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* ___rng0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::make_fg_step(System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_make_fg_step_m4D174A823656BB89D30796F1A94EAAB781A56DFF (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___datasrc0, int32_t ___data1, uint32_t ___logn2, uint32_t ___depth3, int32_t ___in_ntt4, int32_t ___out_ntt5, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::make_fg(System.UInt32[],System.Int32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.UInt32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_make_fg_m6A40DC06365345E53FA5E362A70BAB1B7B7345F7 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___datasrc0, int32_t ___data1, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc2, int32_t ___f3, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc4, int32_t ___g5, uint32_t ___logn6, uint32_t ___depth7, int32_t ___out_ntt8, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_bezout(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_zint_bezout_m14FD9F7D82925C64BDFFF1E50FC3918CDE77AB46 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___usrc0, int32_t ___u1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___vsrc2, int32_t ___v3, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xsrc4, int32_t ___x5, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ysrc6, int32_t ___y7, int32_t ___len8, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc9, int32_t ___tmp10, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_big_to_fp(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_poly_big_to_fp_m184E71EAEB8A8964C0E509E9A160DD2482D76168 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___dsrc0, int32_t ___d1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___fsrc2, int32_t ___f3, int32_t ___flen4, int32_t ___fstride5, uint32_t ___logn6, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::FFT(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___fsrc0, int32_t ___f1, uint32_t ___logn2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_invnorm2_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_invnorm2_fft_mDF55588BAD67975250860E1437DCC4E7ECCE7043 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___dsrc0, int32_t ___d1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc2, int32_t ___a3, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc4, int32_t ___b5, uint32_t ___logn6, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_adj_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_adj_fft_mA5CE00AB69D7431DFC350AB819CC71B90645B163 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, uint32_t ___logn2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_mul_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_mul_fft_mE10CFC18FB478674D4DE3F6EFF9080617F4B921C (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc2, int32_t ___b3, uint32_t ___logn4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_add(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_add_m62B50EBCD7036165E701DC6538F340560C0D5943 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc2, int32_t ___b3, uint32_t ___logn4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_mul_autoadj_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_mul_autoadj_fft_mA719D26DC7D3B099509230DB13D2546EF7583693 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc2, int32_t ___b3, uint32_t ___logn4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::iFFT(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_iFFT_mC2AEDA0BE2CBCF043C45A2E9F9734843602E8BBB (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___fsrc0, int32_t ___f1, uint32_t ___logn2, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_lt(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FprEngine_fpr_lt_mBD3CB70126D34865E4E33DF05BC74503638323E7 (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___x0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___y1, const RuntimeMethod* method) ;
// System.Int64 Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine::fpr_rint(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FprEngine_fpr_rint_m89FD9868C85461C89E4656BD48AB86FDBBE3FBB6 (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___x0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_sub_scaled_ntt(System.UInt32[],System.Int32,System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32,System.UInt32,System.UInt32,System.UInt32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_poly_sub_scaled_ntt_m046CCC267E23369C890D2E5743E991806A1DA9D0 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Fsrc0, int32_t ___F1, int32_t ___Flen2, int32_t ___Fstride3, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___fsrc4, int32_t ___f5, int32_t ___flen6, int32_t ___fstride7, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ksrc8, int32_t ___k9, uint32_t ___sch10, uint32_t ___scl11, uint32_t ___logn12, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc13, int32_t ___tmp14, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_sub_scaled(System.UInt32[],System.Int32,System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_poly_sub_scaled_m7BB451DC8925199192E980A58A62E3A3E0059118 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Fsrc0, int32_t ___F1, int32_t ___Flen2, int32_t ___Fstride3, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___fsrc4, int32_t ___f5, int32_t ___flen6, int32_t ___fstride7, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ksrc8, int32_t ___k9, uint32_t ___sch10, uint32_t ___scl11, uint32_t ___logn12, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_poly_rec_res(System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_modp_poly_rec_res_m6C2BECEED8772C62A18C107545E1263A893FF7DD (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___fsrc0, int32_t ___f1, uint32_t ___logn2, uint32_t ___p3, uint32_t ___p0i4, uint32_t ___R25, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_iNTT2(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_modp_iNTT2_mDFACB12D5576DA2A212FE9ABBABE5884B7A071FB (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___igmsrc2, int32_t ___igm3, uint32_t ___logn4, uint32_t ___p5, uint32_t ___p0i6, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_add_muladj_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_add_muladj_fft_m0B5E0560683C156FDC097CC42E7FDCEA4E3E87EF (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___dsrc0, int32_t ___d1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___Fsrc2, int32_t ___F3, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___Gsrc4, int32_t ___G5, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___fsrc6, int32_t ___f7, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___gsrc8, int32_t ___g9, uint32_t ___logn10, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_sub(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_sub_m0822D820FBBE7F74B282B342075BF58887457C23 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc2, int32_t ___b3, uint32_t ___logn4, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_norm(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_modp_norm_m67648EFF57E2368DD307FA15DB2CDB8F9076D847 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___x0, uint32_t ___p1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_div_autoadj_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_div_autoadj_fft_m278A66E8C63244B1A75A3E98631A9C76391471D9 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc2, int32_t ___b3, uint32_t ___logn4, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::solve_NTRU_deepest(System.UInt32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_solve_NTRU_deepest_mD1FBCE9F88B00A820D4CAB1DD7DD528D505D320E (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___logn_top0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc1, int32_t ___f2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc3, int32_t ___g4, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc5, int32_t ___tmp6, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::solve_NTRU_intermediate(System.UInt32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.UInt32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_solve_NTRU_intermediate_m1ED1640A12DB051A398D898F3E5116CC2877B81C (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___logn_top0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc1, int32_t ___f2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc3, int32_t ___g4, uint32_t ___depth5, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc6, int32_t ___tmp7, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::solve_NTRU_binary_depth1(System.UInt32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_solve_NTRU_binary_depth1_m39D04331C3134F6F81D8901DC907F4B327BF8DCD (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___logn_top0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc1, int32_t ___f2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc3, int32_t ___g4, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc5, int32_t ___tmp6, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::solve_NTRU_binary_depth0(System.UInt32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_solve_NTRU_binary_depth0_mA0E94B647C9439D26CDBFFB6544A1AC48FB70725 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___logn0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc1, int32_t ___f2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc3, int32_t ___g4, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc5, int32_t ___tmp6, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_big_to_small(System.SByte[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_poly_big_to_small_m1C62C8FE3D146DF26B66282E5B5E57E60AC8E0CB (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___dsrc0, int32_t ___d1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ssrc2, int32_t ___s3, int32_t ___lim4, uint32_t ___logn5, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::mkgauss(Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_mkgauss_mDFDB345F9D2D637DDEF974BFB0FFFF5B2694BEFE (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* ___rng0, uint32_t ___logn1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_small_mkgauss(Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256,System.SByte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_poly_small_mkgauss_m58FE7C300355632DB7D479591103F734997A1CF4 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* ___rng0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc1, int32_t ___f2, uint32_t ___logn3, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_small_sqnorm(System.SByte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_poly_small_sqnorm_m982EF4ADD62F41BC69AE18FE7F794F51AD1675DE (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc0, int32_t ___f1, uint32_t ___logn2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_small_to_fp(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.SByte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_poly_small_to_fp_m5D6F42E508FBC9648A097F69E5DD04233A888580 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___xsrc0, int32_t ___x1, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc2, int32_t ___f3, uint32_t ___logn4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_mulconst(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_mulconst_mF6BB1CE00CB5D7077F5489ED8E7F9B46B2ACB881 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___x2, uint32_t ___logn3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconVrfy::compute_public(System.UInt16[],System.Int32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.UInt32,System.UInt16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconVrfy_compute_public_mCCE4D3E1D61DD4798F5C329E1660E12E16BD5D95 (FalconVrfy_t4EC770FA3A4E50BFAEECBF9DE90619A954893F20* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___hsrc0, int32_t ___h1, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc2, int32_t ___f3, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc4, int32_t ___g5, uint32_t ___logn6, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___tmpsrc7, int32_t ___tmp8, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::solve_NTRU(System.UInt32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_solve_NTRU_mF63B74B8BEDEAAB34A1AF5BE86977174CE8C8544 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___logn0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___Fsrc1, int32_t ___F2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___Gsrc3, int32_t ___G4, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc5, int32_t ___f6, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc7, int32_t ___g8, int32_t ___lim9, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc10, int32_t ___tmp11, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::ResizeArray(System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_ResizeArray_mE3E4056876560646DACF0E992BC98EB7E7A8C1FE (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___output0, int32_t ___sizeOutBits1, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___input2, int32_t ___sizeInBits3, int32_t ___n1n2ByteSize4, int32_t ___n1n2Byte64Size5, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int64_t)(std::numeric_limits<int64_t>::max)());
		V_1 = 0;
		int32_t L_0 = ___sizeOutBits1;
		int32_t L_1 = ___sizeInBits3;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_2 = ___sizeOutBits1;
		if (!((int32_t)(L_2%((int32_t)64))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___sizeOutBits1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)64), ((int32_t)(L_3%((int32_t)64)))));
	}

IL_001e:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = ___input2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = ___output0;
		int32_t L_6 = ___n1n2ByteSize4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		V_2 = 0;
		goto IL_0045;
	}

IL_002d:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = ___output0;
		int32_t L_8 = ___n1n2Byte64Size5;
		NullCheck(L_7);
		int64_t* L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_8, 1)))));
		int64_t L_10 = *((int64_t*)L_9);
		int64_t L_11 = V_0;
		int32_t L_12 = V_2;
		*((int64_t*)L_9) = (int64_t)((int64_t)(L_10&((int64_t)(L_11>>((int32_t)(L_12&((int32_t)63)))))));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0045:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}

IL_004a:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_16 = ___input2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = ___output0;
		int32_t L_18 = ___sizeInBits3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, 0, ((int32_t)(((int32_t)il2cpp_codegen_add(L_18, 7))/8)), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::FromLongArrayToByteArray(System.Byte[],System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_FromLongArrayToByteArray_mA6F26C8B6102D751CD172E6865658342C1369C8D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___input1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_0)->max_length))/8));
		V_1 = 0;
		goto IL_001a;
	}

IL_000a:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ___input1;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___output0;
		int32_t L_6 = V_1;
		Pack_UInt64_To_LE_mB44FF8D75991052CA3DD7E7998CECE06565B9D10(L_4, L_5, ((int32_t)il2cpp_codegen_multiply(L_6, 8)), NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001a:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___output0;
		NullCheck(L_10);
		if (!((int32_t)(((int32_t)(((RuntimeArray*)L_10)->max_length))%8)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_11, 8));
		V_3 = 0;
		goto IL_0043;
	}

IL_002d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___output0;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = ___input1;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int64_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_18>>((int32_t)(((int32_t)il2cpp_codegen_multiply(L_20, 8))&((int32_t)63)))))));
	}

IL_0043:
	{
		int32_t L_21 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___output0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_002d;
		}
	}

IL_0049:
	{
		return;
	}
}
// System.Int64 Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::BitMask(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Utils_BitMask_m18E37446053448EC920B7275D90230E7E86A2300 (uint64_t ___a0, uint64_t ___b1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint64_t L_0 = ___a0;
		uint64_t L_1 = ___b1;
		V_0 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_0%(uint64_t)(int64_t)L_1)));
		uint32_t L_2 = V_0;
		return ((int64_t)il2cpp_codegen_subtract(((int64_t)(((int64_t)1)<<((int32_t)((int32_t)L_2&((int32_t)63))))), ((int64_t)1)));
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::FromByteArrayToLongArray(System.Int64[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_FromByteArrayToLongArray_mD1BE0FBC07AB27E5345D216D18AA17738286C157 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___output0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input1;
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input1;
		NullCheck(L_1);
		if (!((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))%8)))
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input1;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_2)->max_length)), 7))/8)), 8)));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input1;
		NullCheck(L_6);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
	}

IL_0024:
	{
		V_1 = 0;
		V_2 = 0;
		goto IL_003c;
	}

IL_002a:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = ___output0;
		int32_t L_8 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = V_1;
		uint64_t L_11;
		L_11 = Pack_LE_To_UInt64_mE6956BD2F8D5A8E940BEBD516250C1090B3252FF(L_9, L_10, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int64_t)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 8));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003c:
	{
		int32_t L_14 = V_2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = ___output0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::FromByteArrayToByte16Array(System.Int32[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_FromByteArrayToByte16Array_m2CD84DA5E55C6345EAC7E6749B7ABC356D9C98A8 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___output0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input1;
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input1;
		NullCheck(L_1);
		if (!((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))%2)))
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input1;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1))/2)), 2)));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input1;
		NullCheck(L_6);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
	}

IL_0024:
	{
		V_1 = 0;
		V_2 = 0;
		goto IL_003c;
	}

IL_002a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___output0;
		int32_t L_8 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = V_1;
		uint16_t L_11;
		L_11 = Pack_LE_To_UInt16_m4FC2AD5B4BDEDF633F41D05BADFA604CAC07E097(L_9, L_10, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 2));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003c:
	{
		int32_t L_14 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___output0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::FromByte32ArrayToLongArray(System.Int64[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_FromByte32ArrayToLongArray_m264554E155E7972BE615DF9C9879B17B8C749168 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___output0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___input1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_0004:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___output0;
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___input1;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_1/2))), (int64_t)((int64_t)(uint64_t)((uint32_t)L_5)));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___output0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int64_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_7/2)))));
		int64_t L_9 = *((int64_t*)L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___input1;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		*((int64_t*)L_8) = (int64_t)((int64_t)(L_9|((int64_t)(((int64_t)L_13)<<((int32_t)32)))));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 2));
	}

IL_0027:
	{
		int32_t L_15 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___input1;
		NullCheck(L_16);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::FromByte16ArrayToULongArray(System.UInt64[],System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_FromByte16ArrayToULongArray_mDF915554524A285E39CB696E16D777C8AA770EAB (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___output0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___input1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0053;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___output0;
		int32_t L_1 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___input1;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_1/4))), (uint64_t)((int64_t)(uint64_t)L_5));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___output0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		uint64_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_7/4)))));
		int64_t L_9 = *((int64_t*)L_8);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_10 = ___input1;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		uint16_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		*((int64_t*)L_8) = (int64_t)((int64_t)(L_9|((int64_t)(((int64_t)(uint64_t)L_13)<<((int32_t)16)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___output0;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		uint64_t* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_15/4)))));
		int64_t L_17 = *((int64_t*)L_16);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_18 = ___input1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 2));
		uint16_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		*((int64_t*)L_16) = (int64_t)((int64_t)(L_17|((int64_t)(((int64_t)(uint64_t)L_21)<<((int32_t)32)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = ___output0;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		uint64_t* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23/4)))));
		int64_t L_25 = *((int64_t*)L_24);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_26 = ___input1;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 3));
		uint16_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		*((int64_t*)L_24) = (int64_t)((int64_t)(L_25|((int64_t)(((int64_t)(uint64_t)L_29)<<((int32_t)48)))));
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 4));
	}

IL_0053:
	{
		int32_t L_31 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = ___input1;
		NullCheck(L_32);
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::FromLongArrayToByte32Array(System.Int32[],System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_FromLongArrayToByte32Array_m9824BBFACD5070A1B8BF270E72FF736E7739B3F4 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___output0, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___input1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___output0;
		int32_t L_1 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = ___input1;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_1))), (int32_t)((int32_t)L_5));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___output0;
		int32_t L_7 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = ___input1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int64_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_7)), 1))), (int32_t)((int32_t)((int64_t)(L_11>>((int32_t)32)))));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_001f:
	{
		int32_t L_13 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_14 = ___input1;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::CopyBytes(System.Int32[],System.Int32,System.Int32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_CopyBytes_mBA4EC65E16F57DFEBD727A5990DF0B4A821DF6DD (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___src0, int32_t ___offsetSrc1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___dst2, int32_t ___offsetDst3, int32_t ___lengthBytes4, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___src0;
		int32_t L_1 = ___offsetSrc1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___dst2;
		int32_t L_3 = ___offsetDst3;
		int32_t L_4 = ___lengthBytes4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, L_3, ((int32_t)(L_4/2)), NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::GetByteSizeFromBitSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetByteSizeFromBitSize_mBAEBEB1645335AD6DDF6408B276D3384034E2DE6 (int32_t ___size0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___size0;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 7))/8));
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::GetByte64SizeFromBitSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetByte64SizeFromBitSize_m5CCA4518E8A576E2CB31A0007D76F8FD3CFCB37F (int32_t ___size0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___size0;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, ((int32_t)63)))/((int32_t)64)));
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::ToUnsigned8bits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_ToUnsigned8bits_m62226015D064AE940898A5CB1D0B81F8860345EF (int32_t ___a0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___a0;
		return ((int32_t)(L_0&((int32_t)255)));
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::ToUnsigned16Bits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_ToUnsigned16Bits_m97BB452A2EFB679DF336F2C6939DF0C2E5B099A5 (int32_t ___a0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___a0;
		return ((int32_t)(L_0&((int32_t)65535)));
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::XorULongToByte16Array(System.UInt16[],System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_XorULongToByte16Array_mA8FDC2813A3CEC6D0E58AA87E69BE04C99CF515B (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___output0, int32_t ___outOff1, uint64_t ___input2, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___output0;
		int32_t L_1 = ___outOff1;
		NullCheck(L_0);
		uint16_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		int32_t L_3 = *((uint16_t*)L_2);
		uint64_t L_4 = ___input2;
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_3^((int32_t)(uint16_t)L_4))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = ___output0;
		int32_t L_6 = ___outOff1;
		NullCheck(L_5);
		uint16_t* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1)))));
		int32_t L_8 = *((uint16_t*)L_7);
		uint64_t L_9 = ___input2;
		*((int16_t*)L_7) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_8^((int32_t)(uint16_t)((int64_t)((uint64_t)L_9>>((int32_t)16)))))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_10 = ___output0;
		int32_t L_11 = ___outOff1;
		NullCheck(L_10);
		uint16_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 2)))));
		int32_t L_13 = *((uint16_t*)L_12);
		uint64_t L_14 = ___input2;
		*((int16_t*)L_12) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_13^((int32_t)(uint16_t)((int64_t)((uint64_t)L_14>>((int32_t)32)))))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = ___output0;
		int32_t L_16 = ___outOff1;
		NullCheck(L_15);
		uint16_t* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, 3)))));
		int32_t L_18 = *((uint16_t*)L_17);
		uint64_t L_19 = ___input2;
		*((int16_t*)L_17) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_18^((int32_t)(uint16_t)((int64_t)((uint64_t)L_19>>((int32_t)48)))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Hqc.Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_m5AEE63E3601606D3DCE46D99074D10016A871A3D (Utils_t5A4BA04535CAFB09FCD92F65D94646583B6FAD71* __this, const RuntimeMethod* method) 
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
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::get_CipherTextSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrodoEngine_get_CipherTextSize_m4D3D3654A1DE0B125B60CC27FAD8B215CA5A3301 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___len_ct_bytes_14;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::get_SessionKeySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrodoEngine_get_SessionKeySize_mBF0BE50AFF293123ACC1C4277D5BD2D25784B18E (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___len_ss_bytes_27;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::get_PrivateKeySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrodoEngine_get_PrivateKeySize_m7BA719C63D22147425D88AC1FA8541E427375986 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___len_sk_bytes_12;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::get_PublicKeySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrodoEngine_get_PublicKeySize_m3FFB358D6C94BAEA0E814446583A04197F2C517D (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___len_pk_bytes_13;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::.ctor(System.Int32,System.Int32,System.Int32,System.Int16[],Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoEngine__ctor_m6CA995AB2075CB80F0F6A941A0A2130CD0218330 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, int32_t ___n0, int32_t ___D1, int32_t ___B2, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___cdf_table3, RuntimeObject* ___digest4, FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* ___mGen5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___n0;
		__this->___n_10 = L_0;
		int32_t L_1 = ___D1;
		__this->___D_8 = L_1;
		int32_t L_2 = ___D1;
		__this->___q_9 = ((int32_t)(1<<((int32_t)(L_2&((int32_t)31)))));
		int32_t L_3 = ___B2;
		__this->___B_11 = L_3;
		int32_t L_4 = ___B2;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_5 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_6 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		__this->___len_mu_16 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_4, L_5)), L_6));
		int32_t L_7 = __this->___len_mu_16;
		__this->___len_seedSE_17 = L_7;
		int32_t L_8 = __this->___len_mu_16;
		__this->___len_s_18 = L_8;
		int32_t L_9 = __this->___len_mu_16;
		__this->___len_k_19 = L_9;
		int32_t L_10 = __this->___len_mu_16;
		__this->___len_pkh_20 = L_10;
		int32_t L_11 = __this->___len_mu_16;
		__this->___len_ss_21 = L_11;
		int32_t L_12 = __this->___len_mu_16;
		__this->___len_mu_bytes_22 = ((int32_t)(L_12/8));
		int32_t L_13 = __this->___len_seedSE_17;
		__this->___len_seedSE_bytes_23 = ((int32_t)(L_13/8));
		int32_t L_14 = __this->___len_s_18;
		__this->___len_s_bytes_24 = ((int32_t)(L_14/8));
		int32_t L_15 = __this->___len_k_19;
		__this->___len_k_bytes_25 = ((int32_t)(L_15/8));
		int32_t L_16 = __this->___len_pkh_20;
		__this->___len_pkh_bytes_26 = ((int32_t)(L_16/8));
		int32_t L_17 = __this->___len_ss_21;
		__this->___len_ss_bytes_27 = ((int32_t)(L_17/8));
		int32_t L_18 = ___D1;
		int32_t L_19 = ___n0;
		int32_t L_20 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_21 = ___D1;
		int32_t L_22 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_23 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		__this->___len_ct_bytes_14 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_18, L_19)), L_20))/8)), ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_21, L_22)), L_23))/8))));
		int32_t L_24 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_seedA_bytes_5;
		int32_t L_25 = ___D1;
		int32_t L_26 = ___n0;
		int32_t L_27 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		__this->___len_pk_bytes_13 = ((int32_t)il2cpp_codegen_add(L_24, ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_25, L_26)), L_27))/8))));
		int32_t L_28 = __this->___len_s_bytes_24;
		int32_t L_29 = __this->___len_pk_bytes_13;
		int32_t L_30 = ___n0;
		int32_t L_31 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_32 = __this->___len_pkh_bytes_26;
		__this->___len_sk_bytes_12 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_28, L_29)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_30)), L_31)), L_32))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_33 = ___cdf_table3;
		__this->___T_chi_15 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___T_chi_15), (void*)L_33);
		RuntimeObject* L_34 = ___digest4;
		__this->___digest_28 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digest_28), (void*)L_34);
		FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* L_35 = ___mGen5;
		__this->___gen_29 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gen_29), (void*)L_35);
		return;
	}
}
// System.Int16 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::Sample(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t FrodoEngine_Sample_m7D5BD389A82E57D30DCE39233181521227097EE4 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, int16_t ___r0, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	int16_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int16_t L_0 = ___r0;
		V_0 = ((int16_t)((int32_t)(((int32_t)((int32_t)L_0&((int32_t)65535)))>>1)));
		V_1 = (int16_t)0;
		V_2 = 0;
		goto IL_0025;
	}

IL_0011:
	{
		int16_t L_1 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = __this->___T_chi_15;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((((int32_t)L_1) <= ((int32_t)L_5)))
		{
			goto IL_0021;
		}
	}
	{
		int16_t L_6 = V_1;
		V_1 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, 1)));
	}

IL_0021:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		int32_t L_8 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = __this->___T_chi_15;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		int16_t L_10 = ___r0;
		if ((!(((uint32_t)((int32_t)(((int32_t)((int32_t)L_10&((int32_t)65535)))%2))) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		int16_t L_11 = V_1;
		V_1 = ((int16_t)((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (-1)))&((int32_t)65535))));
	}

IL_0047:
	{
		int16_t L_12 = V_1;
		return L_12;
	}
}
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::SampleMatrix(System.Int16[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_SampleMatrix_m9BDA6DDC168B2FF9B61626D805125F0624469333 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___r0, int32_t ___offset1, int32_t ___n12, int32_t ___n23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___n12;
		int32_t L_1 = ___n23;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		V_1 = 0;
		goto IL_0037;
	}

IL_000e:
	{
		V_2 = 0;
		goto IL_002e;
	}

IL_0012:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = ___n23;
		int32_t L_6 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___r0;
		int32_t L_8 = V_1;
		int32_t L_9 = ___n23;
		int32_t L_10 = V_2;
		int32_t L_11 = ___offset1;
		NullCheck(L_7);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), L_10)), L_11));
		int16_t L_13 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int16_t L_14;
		L_14 = FrodoEngine_Sample_m7D5BD389A82E57D30DCE39233181521227097EE4(__this, L_13, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_4, L_5)), L_6))), (int16_t)L_14);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_002e:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = ___n23;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0037:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___n12;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_000e;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_21 = V_0;
		return L_21;
	}
}
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::MatrixTranspose(System.Int16[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_MatrixTranspose_m231B4A5255CA8ECB93D3BCCC2CB4BE02689607DC (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___X0, int32_t ___n11, int32_t ___n22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___n11;
		int32_t L_1 = ___n22;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		V_1 = 0;
		goto IL_002b;
	}

IL_000d:
	{
		V_2 = 0;
		goto IL_0023;
	}

IL_0011:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = ___n11;
		int32_t L_6 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___X0;
		int32_t L_8 = V_2;
		int32_t L_9 = ___n22;
		int32_t L_10 = V_1;
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), L_10));
		int16_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_4, L_5)), L_6))), (int16_t)L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0023:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = ___n11;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_002b:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = ___n22;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_000d;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_19 = V_0;
		return L_19;
	}
}
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::MatrixMul(System.Int16[],System.Int32,System.Int32,System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_MatrixMul_mDB3D84C635F07DDA0A8717AD7E73B5346459DE3A (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___X0, int32_t ___Xrow1, int32_t ___Xcol2, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___Y3, int32_t ___Ycol4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->___q_9;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = ___Xrow1;
		int32_t L_2 = ___Ycol4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2)));
		V_1 = L_3;
		V_2 = 0;
		goto IL_0060;
	}

IL_0017:
	{
		V_3 = 0;
		goto IL_0057;
	}

IL_001b:
	{
		V_4 = 0;
		V_5 = 0;
		goto IL_0041;
	}

IL_0023:
	{
		int32_t L_4 = V_4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = ___X0;
		int32_t L_6 = V_2;
		int32_t L_7 = ___Xcol2;
		int32_t L_8 = V_5;
		NullCheck(L_5);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, L_7)), L_8));
		int16_t L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = ___Y3;
		int32_t L_12 = V_5;
		int32_t L_13 = ___Ycol4;
		int32_t L_14 = V_3;
		NullCheck(L_11);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, L_13)), L_14));
		int16_t L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_16))));
		int32_t L_17 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0041:
	{
		int32_t L_18 = V_5;
		int32_t L_19 = ___Xcol2;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0023;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = V_1;
		int32_t L_21 = V_2;
		int32_t L_22 = ___Ycol4;
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		int32_t L_25 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_21, L_22)), L_23))), (int16_t)((int16_t)((int32_t)(L_24&L_25))));
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0057:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = ___Ycol4;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0060:
	{
		int32_t L_30 = V_2;
		int32_t L_31 = ___Xrow1;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0017;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_32 = V_1;
		return L_32;
	}
}
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::MatrixAdd(System.Int16[],System.Int16[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_MatrixAdd_m176EDADC79D11948D48CBCF8C918BB90F326E98B (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___X0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___Y1, int32_t ___n12, int32_t ___m13, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___q_9;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = ___n12;
		int32_t L_2 = ___m13;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2)));
		V_1 = L_3;
		V_2 = 0;
		goto IL_0044;
	}

IL_0017:
	{
		V_3 = 0;
		goto IL_003b;
	}

IL_001b:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = ___m13;
		int32_t L_7 = V_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = ___X0;
		int32_t L_9 = V_2;
		int32_t L_10 = ___m13;
		int32_t L_11 = V_3;
		NullCheck(L_8);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, L_10)), L_11));
		int16_t L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_14 = ___Y1;
		int32_t L_15 = V_2;
		int32_t L_16 = ___m13;
		int32_t L_17 = V_3;
		NullCheck(L_14);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, L_16)), L_17));
		int16_t L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), L_7))), (int16_t)((int16_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_19))&L_20))));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_003b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = ___m13;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0044:
	{
		int32_t L_25 = V_2;
		int32_t L_26 = ___n12;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0017;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = V_1;
		return L_27;
	}
}
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::FrodoPack(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FrodoEngine_FrodoPack_m50869610764094A850667928A50F863142FC72F0 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___C0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int16_t V_2 = 0;
	int16_t V_3 = 0;
	int16_t V_4 = 0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	uint8_t V_9 = 0x0;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___C0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = __this->___D_8;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, L_2))/8)));
		V_1 = L_3;
		V_2 = (int16_t)0;
		V_3 = (int16_t)0;
		V_4 = (int16_t)0;
		V_5 = (uint8_t)0;
		goto IL_00a3;
	}

IL_0023:
	{
		V_6 = (uint8_t)0;
		goto IL_0094;
	}

IL_0028:
	{
		uint8_t L_4 = V_6;
		uint8_t L_5 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(8, (int32_t)L_4)), L_5, NULL);
		V_7 = L_6;
		int32_t L_7 = V_7;
		V_8 = ((int16_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_7&((int32_t)31))))), 1)));
		int16_t L_8 = V_4;
		uint8_t L_9 = V_5;
		int32_t L_10 = V_7;
		int16_t L_11 = V_8;
		V_9 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_8>>((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, L_10))&((int32_t)31)))))&(int32_t)L_11)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		int16_t L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		int16_t L_15 = V_2;
		NullCheck(L_14);
		int16_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		uint8_t L_18 = V_9;
		uint8_t L_19 = V_6;
		int32_t L_20 = V_7;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, ((int32_t)((int32_t)L_18<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(8, (int32_t)L_19)), L_20))&((int32_t)31)))))))));
		uint8_t L_21 = V_6;
		int32_t L_22 = V_7;
		V_6 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, ((int32_t)(uint8_t)L_22))));
		uint8_t L_23 = V_5;
		int32_t L_24 = V_7;
		V_5 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, ((int32_t)(uint8_t)L_24))));
		uint8_t L_25 = V_5;
		if (L_25)
		{
			goto IL_0094;
		}
	}
	{
		int16_t L_26 = V_3;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_0099;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_28 = ___C0;
		int16_t L_29 = V_3;
		NullCheck(L_28);
		int16_t L_30 = L_29;
		int16_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_4 = L_31;
		int32_t L_32 = __this->___D_8;
		V_5 = (uint8_t)((int32_t)(uint8_t)L_32);
		int16_t L_33 = V_3;
		V_3 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_33, 1)));
	}

IL_0094:
	{
		uint8_t L_34 = V_6;
		if ((((int32_t)L_34) < ((int32_t)8)))
		{
			goto IL_0028;
		}
	}

IL_0099:
	{
		uint8_t L_35 = V_6;
		if ((!(((uint32_t)L_35) == ((uint32_t)8))))
		{
			goto IL_00a3;
		}
	}
	{
		int16_t L_36 = V_2;
		V_2 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, 1)));
	}

IL_00a3:
	{
		int16_t L_37 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_1;
		NullCheck(L_38);
		if ((((int32_t)L_37) >= ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_00bc;
		}
	}
	{
		int16_t L_39 = V_3;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0023;
		}
	}
	{
		int16_t L_41 = V_3;
		int32_t L_42 = V_0;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_00bc;
		}
	}
	{
		uint8_t L_43 = V_5;
		if ((((int32_t)L_43) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_00bc:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_1;
		return L_44;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::kem_keypair(System.Byte[],System.Byte[],Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoEngine_kem_keypair_m08949D20031C9C67F1D5A05D1CDAF86DFD906F34 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk1, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___random2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_7 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_8 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_9 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_10 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_11 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_14 = NULL;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	{
		int32_t L_0 = __this->___len_s_bytes_24;
		int32_t L_1 = __this->___len_seedSE_bytes_23;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_2 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_z_bytes_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_1)), L_2)));
		V_0 = L_3;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_4 = ___random2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_4, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = __this->___len_s_bytes_24;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_6, 0, L_7, NULL);
		V_1 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = __this->___len_s_bytes_24;
		int32_t L_11 = __this->___len_s_bytes_24;
		int32_t L_12 = __this->___len_seedSE_bytes_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, L_12)), NULL);
		V_2 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = __this->___len_s_bytes_24;
		int32_t L_16 = __this->___len_seedSE_bytes_23;
		int32_t L_17 = __this->___len_s_bytes_24;
		int32_t L_18 = __this->___len_seedSE_bytes_23;
		int32_t L_19 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_z_bytes_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_17, L_18)), L_19)), NULL);
		V_3 = L_20;
		int32_t L_21 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_seedA_bytes_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_21);
		V_4 = L_22;
		RuntimeObject* L_23 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_3;
		NullCheck(L_25);
		NullCheck(L_23);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_23, L_24, 0, ((int32_t)(((RuntimeArray*)L_25)->max_length)));
		RuntimeObject* L_26 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_4;
		NullCheck(L_28);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_26, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_29;
		L_29 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_26, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_27, 0, ((int32_t)(((RuntimeArray*)L_28)->max_length)));
		FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* L_30 = __this->___gen_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_4;
		NullCheck(L_30);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_32;
		L_32 = VirtualFuncInvoker1< Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator::GenMatrix(System.Byte[]) */, L_30, L_31);
		V_5 = L_32;
		int32_t L_33 = __this->___n_10;
		int32_t L_34 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_35 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_chi_bytes_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_33)), L_34)), L_35)));
		V_6 = L_36;
		RuntimeObject* L_37 = __this->___digest_28;
		NullCheck(L_37);
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IDigest::Update(System.Byte) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_37, (uint8_t)((int32_t)95));
		RuntimeObject* L_38 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_2;
		NullCheck(L_40);
		NullCheck(L_38);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_38, L_39, 0, ((int32_t)(((RuntimeArray*)L_40)->max_length)));
		RuntimeObject* L_41 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_6;
		NullCheck(L_43);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_41, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_44;
		L_44 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_41, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_42, 0, ((int32_t)(((RuntimeArray*)L_43)->max_length)));
		int32_t L_45 = __this->___n_10;
		int32_t L_46 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_47 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_45)), L_46)));
		V_7 = L_47;
		V_15 = 0;
		goto IL_0133;
	}

IL_011c:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_48 = V_7;
		int32_t L_49 = V_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_6;
		int32_t L_51 = V_15;
		uint16_t L_52;
		L_52 = Pack_LE_To_UInt16_m4FC2AD5B4BDEDF633F41D05BADFA604CAC07E097(L_50, ((int32_t)il2cpp_codegen_multiply(L_51, 2)), NULL);
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (int16_t)((int16_t)L_52));
		int32_t L_53 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0133:
	{
		int32_t L_54 = V_15;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_55 = V_7;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_011c;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_56 = V_7;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_57 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_58 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_59;
		L_59 = FrodoEngine_SampleMatrix_m9BDA6DDC168B2FF9B61626D805125F0624469333(__this, L_56, 0, L_57, L_58, NULL);
		V_8 = L_59;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_60 = V_8;
		int32_t L_61 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_62 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_63;
		L_63 = FrodoEngine_MatrixTranspose_m231B4A5255CA8ECB93D3BCCC2CB4BE02689607DC(__this, L_60, L_61, L_62, NULL);
		V_9 = L_63;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_64 = V_7;
		int32_t L_65 = __this->___n_10;
		int32_t L_66 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_67 = __this->___n_10;
		int32_t L_68 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_69;
		L_69 = FrodoEngine_SampleMatrix_m9BDA6DDC168B2FF9B61626D805125F0624469333(__this, L_64, ((int32_t)il2cpp_codegen_multiply(L_65, L_66)), L_67, L_68, NULL);
		V_10 = L_69;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_70 = V_5;
		int32_t L_71 = __this->___n_10;
		int32_t L_72 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_73 = V_9;
		int32_t L_74 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_75;
		L_75 = FrodoEngine_MatrixMul_mDB3D84C635F07DDA0A8717AD7E73B5346459DE3A(__this, L_70, L_71, L_72, L_73, L_74, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_76 = V_10;
		int32_t L_77 = __this->___n_10;
		int32_t L_78 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_79;
		L_79 = FrodoEngine_MatrixAdd_m176EDADC79D11948D48CBCF8C918BB90F326E98B(__this, L_75, L_76, L_77, L_78, NULL);
		V_11 = L_79;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_80 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81;
		L_81 = FrodoEngine_FrodoPack_m50869610764094A850667928A50F863142FC72F0(__this, L_80, NULL);
		V_12 = L_81;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84;
		L_84 = Arrays_Concatenate_m65A66808E9C337266905FA04349EFB8F02B48E2E(L_82, L_83, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = ___pk0;
		int32_t L_86 = __this->___len_pk_bytes_13;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_84, 0, (RuntimeArray*)L_85, 0, L_86, NULL);
		int32_t L_87 = __this->___len_pkh_bytes_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_13 = L_88;
		RuntimeObject* L_89 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ___pk0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = ___pk0;
		NullCheck(L_91);
		NullCheck(L_89);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_89, L_90, 0, ((int32_t)(((RuntimeArray*)L_91)->max_length)));
		RuntimeObject* L_92 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = V_13;
		NullCheck(L_94);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_92, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_95;
		L_95 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_92, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_93, 0, ((int32_t)(((RuntimeArray*)L_94)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ___pk0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98;
		L_98 = Arrays_Concatenate_m65A66808E9C337266905FA04349EFB8F02B48E2E(L_96, L_97, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = ___sk1;
		int32_t L_100 = __this->___len_s_bytes_24;
		int32_t L_101 = __this->___len_pk_bytes_13;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_98, 0, (RuntimeArray*)L_99, 0, ((int32_t)il2cpp_codegen_add(L_100, L_101)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		V_14 = L_102;
		V_16 = 0;
		goto IL_0290;
	}

IL_0236:
	{
		V_17 = 0;
		goto IL_0280;
	}

IL_023b:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_103 = V_8;
		int32_t L_104 = V_16;
		int32_t L_105 = __this->___n_10;
		int32_t L_106 = V_17;
		NullCheck(L_103);
		int32_t L_107 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_104, L_105)), L_106));
		int16_t L_108 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = V_14;
		Pack_UInt16_To_LE_m6A3649365325626457A6E634238A2A523E437850((uint16_t)((int32_t)(uint16_t)L_108), L_109, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = ___sk1;
		int32_t L_112 = __this->___len_s_bytes_24;
		int32_t L_113 = __this->___len_pk_bytes_13;
		int32_t L_114 = V_16;
		int32_t L_115 = __this->___n_10;
		int32_t L_116 = V_17;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_110, 0, (RuntimeArray*)L_111, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_112, L_113)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_114, L_115)), 2)))), ((int32_t)il2cpp_codegen_multiply(L_116, 2)))), 2, NULL);
		int32_t L_117 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_117, 1));
	}

IL_0280:
	{
		int32_t L_118 = V_17;
		int32_t L_119 = __this->___n_10;
		if ((((int32_t)L_118) < ((int32_t)L_119)))
		{
			goto IL_023b;
		}
	}
	{
		int32_t L_120 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_120, 1));
	}

IL_0290:
	{
		int32_t L_121 = V_16;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_122 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		if ((((int32_t)L_121) < ((int32_t)L_122)))
		{
			goto IL_0236;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124 = ___sk1;
		int32_t L_125 = __this->___len_sk_bytes_12;
		int32_t L_126 = __this->___len_pkh_bytes_26;
		int32_t L_127 = __this->___len_pkh_bytes_26;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_123, 0, (RuntimeArray*)L_124, ((int32_t)il2cpp_codegen_subtract(L_125, L_126)), L_127, NULL);
		return;
	}
}
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::FrodoUnpack(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_FrodoUnpack_mB344E784DAA7CAF19E93A56B41912B08229ADE85 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___n11, int32_t ___n22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	int16_t V_1 = 0;
	int16_t V_2 = 0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	int32_t V_6 = 0;
	int16_t V_7 = 0;
	uint8_t V_8 = 0x0;
	{
		int32_t L_0 = ___n11;
		int32_t L_1 = ___n22;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		V_1 = (int16_t)0;
		V_2 = (int16_t)0;
		V_3 = (uint8_t)0;
		V_4 = (uint8_t)0;
		goto IL_00ef;
	}

IL_0017:
	{
		V_5 = (uint8_t)0;
		goto IL_00d3;
	}

IL_001f:
	{
		int32_t L_3 = __this->___D_8;
		uint8_t L_4 = V_5;
		uint8_t L_5 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_3, (int32_t)L_4)), L_5, NULL);
		V_6 = L_6;
		int32_t L_7 = V_6;
		V_7 = ((int16_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_7&((int32_t)31))))), 1))&((int32_t)65535))));
		uint8_t L_8 = V_3;
		uint8_t L_9 = V_4;
		int32_t L_10 = V_6;
		int16_t L_11 = V_7;
		V_8 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_8&((int32_t)255)))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)((int32_t)L_9&((int32_t)255))), L_10))&((int32_t)31)))))&((int32_t)((int32_t)L_11&((int32_t)65535)))))&((int32_t)255))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_12 = V_0;
		int16_t L_13 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_14 = V_0;
		int16_t L_15 = V_1;
		NullCheck(L_14);
		int16_t L_16 = L_15;
		int16_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		uint8_t L_18 = V_8;
		int32_t L_19 = __this->___D_8;
		uint8_t L_20 = V_5;
		int32_t L_21 = V_6;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int16_t)((int16_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_17&((int32_t)65535))), ((int32_t)(((int32_t)((int32_t)L_18&((int32_t)255)))<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)((int32_t)L_20&((int32_t)255))))), L_21))&((int32_t)31)))))))&((int32_t)65535)))));
		uint8_t L_22 = V_5;
		int32_t L_23 = V_6;
		V_5 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, ((int32_t)(uint8_t)L_23))));
		uint8_t L_24 = V_4;
		int32_t L_25 = V_6;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, ((int32_t)(uint8_t)L_25))));
		uint8_t L_26 = V_3;
		int16_t L_27 = V_7;
		uint8_t L_28 = V_4;
		V_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_26&((int32_t)(uint8_t)((~((int32_t)((int32_t)L_27<<((int32_t)((int32_t)L_28&((int32_t)31)))))))))));
		uint8_t L_29 = V_4;
		if (L_29)
		{
			goto IL_00d3;
		}
	}
	{
		int16_t L_30 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___input0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_00e0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___input0;
		int16_t L_33 = V_2;
		NullCheck(L_32);
		int16_t L_34 = L_33;
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = L_35;
		V_4 = (uint8_t)8;
		int16_t L_36 = V_2;
		V_2 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, 1)));
	}

IL_00d3:
	{
		uint8_t L_37 = V_5;
		int32_t L_38 = __this->___D_8;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_001f;
		}
	}

IL_00e0:
	{
		uint8_t L_39 = V_5;
		int32_t L_40 = __this->___D_8;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_00ef;
		}
	}
	{
		int16_t L_41 = V_1;
		V_1 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, 1)));
	}

IL_00ef:
	{
		int16_t L_42 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) >= ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_010c;
		}
	}
	{
		int16_t L_44 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___input0;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		int16_t L_46 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___input0;
		NullCheck(L_47);
		if ((!(((uint32_t)L_46) == ((uint32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))))
		{
			goto IL_010c;
		}
	}
	{
		uint8_t L_48 = V_4;
		if ((((int32_t)L_48) > ((int32_t)0)))
		{
			goto IL_0017;
		}
	}

IL_010c:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_49 = V_0;
		return L_49;
	}
}
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::Encode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_Encode_m315ECA55BBB5B046EE1248310BA2254D27D21392 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_1 = 0;
		V_2 = (uint8_t)1;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_0 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_1 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_3 = L_2;
		V_5 = 0;
		goto IL_008c;
	}

IL_001a:
	{
		V_6 = 0;
		goto IL_007d;
	}

IL_001f:
	{
		V_4 = 0;
		V_0 = 0;
		goto IL_004b;
	}

IL_0026:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___k0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint8_t L_7 = V_2;
		uint8_t L_8 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_6&(int32_t)L_7))) == ((uint32_t)L_8))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = V_4;
		int32_t L_10 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)(1<<((int32_t)(L_10&((int32_t)31)))))));
	}

IL_0039:
	{
		uint8_t L_11 = V_2;
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_11<<1)));
		uint8_t L_12 = V_2;
		if (L_12)
		{
			goto IL_0047;
		}
	}
	{
		V_2 = (uint8_t)1;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0047:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004b:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = __this->___B_11;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0026;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_17 = V_3;
		int32_t L_18 = V_5;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_19 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_20 = V_6;
		int32_t L_21 = V_4;
		int32_t L_22 = __this->___q_9;
		int32_t L_23 = __this->___B_11;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_18, L_19)), L_20))), (int16_t)((int16_t)((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)(L_22/((int32_t)(1<<((int32_t)(L_23&((int32_t)31)))))))))));
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007d:
	{
		int32_t L_25 = V_6;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_26 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_27 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_008c:
	{
		int32_t L_28 = V_5;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_29 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_001a;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_30 = V_3;
		return L_30;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::kem_enc(System.Byte[],System.Byte[],System.Byte[],Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoEngine_kem_enc_mD750D86E7DD15A0C0C8F093909D5B2EC0DBCF046 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ct0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ss1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___random3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_6 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_7 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_8 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_9 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_10 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_12 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_13 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_14 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_15 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_16 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_17 = NULL;
	int32_t V_18 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___pk2;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_1 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_seedA_bytes_5;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_0, 0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___pk2;
		int32_t L_4 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_seedA_bytes_5;
		int32_t L_5 = __this->___len_pk_bytes_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_3, L_4, L_5, NULL);
		V_1 = L_6;
		int32_t L_7 = __this->___len_mu_bytes_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_2 = L_8;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_9 = ___random3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		NullCheck(L_9);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_9, L_10);
		int32_t L_11 = __this->___len_pkh_bytes_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_11);
		V_3 = L_12;
		RuntimeObject* L_13 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___pk2;
		int32_t L_15 = __this->___len_pk_bytes_13;
		NullCheck(L_13);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_13, L_14, 0, L_15);
		RuntimeObject* L_16 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_3;
		int32_t L_18 = __this->___len_pkh_bytes_26;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_16, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_19;
		L_19 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_17, 0, L_18);
		int32_t L_20 = __this->___len_seedSE_17;
		int32_t L_21 = __this->___len_k_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_20, L_21)));
		V_4 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_4;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)150));
		RuntimeObject* L_24 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_3;
		int32_t L_26 = __this->___len_pkh_bytes_26;
		NullCheck(L_24);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_24, L_25, 0, L_26);
		RuntimeObject* L_27 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_2;
		int32_t L_29 = __this->___len_mu_bytes_22;
		NullCheck(L_27);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_27, L_28, 0, L_29);
		RuntimeObject* L_30 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_4;
		int32_t L_32 = __this->___len_seedSE_bytes_23;
		int32_t L_33 = __this->___len_k_bytes_25;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_30, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_34;
		L_34 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_30, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_31, 1, ((int32_t)il2cpp_codegen_add(L_32, L_33)));
		int32_t L_35 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_36 = __this->___n_10;
		int32_t L_37 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_38 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_39 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_chi_bytes_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_35)), L_36)), ((int32_t)il2cpp_codegen_multiply(L_37, L_38)))), L_39)));
		V_5 = L_40;
		RuntimeObject* L_41 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_4;
		int32_t L_43 = __this->___len_seedSE_bytes_23;
		NullCheck(L_41);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_41, L_42, 0, ((int32_t)il2cpp_codegen_add(1, L_43)));
		RuntimeObject* L_44 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_5;
		NullCheck(L_46);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_44, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_47;
		L_47 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_44, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_45, 0, ((int32_t)(((RuntimeArray*)L_46)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_5;
		NullCheck(L_48);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_49 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_48)->max_length))/2)));
		V_6 = L_49;
		V_18 = 0;
		goto IL_014d;
	}

IL_0136:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_50 = V_6;
		int32_t L_51 = V_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_5;
		int32_t L_53 = V_18;
		uint16_t L_54;
		L_54 = Pack_LE_To_UInt16_m4FC2AD5B4BDEDF633F41D05BADFA604CAC07E097(L_52, ((int32_t)il2cpp_codegen_multiply(L_53, 2)), NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (int16_t)((int16_t)L_54));
		int32_t L_55 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_014d:
	{
		int32_t L_56 = V_18;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_57 = V_6;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_0136;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_58 = V_6;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_59 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_60 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_61;
		L_61 = FrodoEngine_SampleMatrix_m9BDA6DDC168B2FF9B61626D805125F0624469333(__this, L_58, 0, L_59, L_60, NULL);
		V_7 = L_61;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_62 = V_6;
		int32_t L_63 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_64 = __this->___n_10;
		int32_t L_65 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_66 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_67;
		L_67 = FrodoEngine_SampleMatrix_m9BDA6DDC168B2FF9B61626D805125F0624469333(__this, L_62, ((int32_t)il2cpp_codegen_multiply(L_63, L_64)), L_65, L_66, NULL);
		V_8 = L_67;
		FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* L_68 = __this->___gen_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_0;
		NullCheck(L_68);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_70;
		L_70 = VirtualFuncInvoker1< Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator::GenMatrix(System.Byte[]) */, L_68, L_69);
		V_9 = L_70;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_71 = V_7;
		int32_t L_72 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_73 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_74 = V_9;
		int32_t L_75 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_76;
		L_76 = FrodoEngine_MatrixMul_mDB3D84C635F07DDA0A8717AD7E73B5346459DE3A(__this, L_71, L_72, L_73, L_74, L_75, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_77 = V_8;
		int32_t L_78 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_79 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_80;
		L_80 = FrodoEngine_MatrixAdd_m176EDADC79D11948D48CBCF8C918BB90F326E98B(__this, L_76, L_77, L_78, L_79, NULL);
		V_10 = L_80;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_81 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82;
		L_82 = FrodoEngine_FrodoPack_m50869610764094A850667928A50F863142FC72F0(__this, L_81, NULL);
		V_11 = L_82;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_83 = V_6;
		int32_t L_84 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_85 = __this->___n_10;
		int32_t L_86 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_87 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_88;
		L_88 = FrodoEngine_SampleMatrix_m9BDA6DDC168B2FF9B61626D805125F0624469333(__this, L_83, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_84)), L_85)), L_86, L_87, NULL);
		V_12 = L_88;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_1;
		int32_t L_90 = __this->___n_10;
		int32_t L_91 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_92;
		L_92 = FrodoEngine_FrodoUnpack_mB344E784DAA7CAF19E93A56B41912B08229ADE85(__this, L_89, L_90, L_91, NULL);
		V_13 = L_92;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_93 = V_7;
		int32_t L_94 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_95 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_96 = V_13;
		int32_t L_97 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_98;
		L_98 = FrodoEngine_MatrixMul_mDB3D84C635F07DDA0A8717AD7E73B5346459DE3A(__this, L_93, L_94, L_95, L_96, L_97, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_99 = V_12;
		int32_t L_100 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_101 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_102;
		L_102 = FrodoEngine_MatrixAdd_m176EDADC79D11948D48CBCF8C918BB90F326E98B(__this, L_98, L_99, L_100, L_101, NULL);
		V_14 = L_102;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_104;
		L_104 = FrodoEngine_Encode_m315ECA55BBB5B046EE1248310BA2254D27D21392(__this, L_103, NULL);
		V_15 = L_104;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_105 = V_14;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_106 = V_15;
		int32_t L_107 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_108 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_109;
		L_109 = FrodoEngine_MatrixAdd_m176EDADC79D11948D48CBCF8C918BB90F326E98B(__this, L_105, L_106, L_107, L_108, NULL);
		V_16 = L_109;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_110 = V_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111;
		L_111 = FrodoEngine_FrodoPack_m50869610764094A850667928A50F863142FC72F0(__this, L_110, NULL);
		V_17 = L_111;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = V_17;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114;
		L_114 = Arrays_Concatenate_m65A66808E9C337266905FA04349EFB8F02B48E2E(L_112, L_113, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = ___ct0;
		int32_t L_116 = __this->___len_ct_bytes_14;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_114, 0, (RuntimeArray*)L_115, 0, L_116, NULL);
		RuntimeObject* L_117 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = V_11;
		NullCheck(L_119);
		NullCheck(L_117);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_117, L_118, 0, ((int32_t)(((RuntimeArray*)L_119)->max_length)));
		RuntimeObject* L_120 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_121 = V_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_122 = V_17;
		NullCheck(L_122);
		NullCheck(L_120);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_120, L_121, 0, ((int32_t)(((RuntimeArray*)L_122)->max_length)));
		RuntimeObject* L_123 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124 = V_4;
		int32_t L_125 = __this->___len_seedSE_bytes_23;
		int32_t L_126 = __this->___len_k_bytes_25;
		NullCheck(L_123);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_123, L_124, ((int32_t)il2cpp_codegen_add(1, L_125)), L_126);
		RuntimeObject* L_127 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = ___ss1;
		int32_t L_129 = __this->___len_s_bytes_24;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_127, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_130;
		L_130 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_127, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_128, 0, L_129);
		return;
	}
}
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::MatrixSub(System.Int16[],System.Int16[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoEngine_MatrixSub_m4C5A0977852B920A44A434C1DAA4FA84E2AE4DFB (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___X0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___Y1, int32_t ___n12, int32_t ___n23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___q_9;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = ___n12;
		int32_t L_2 = ___n23;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2)));
		V_1 = L_3;
		V_2 = 0;
		goto IL_0044;
	}

IL_0017:
	{
		V_3 = 0;
		goto IL_003b;
	}

IL_001b:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = ___n23;
		int32_t L_7 = V_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = ___X0;
		int32_t L_9 = V_2;
		int32_t L_10 = ___n23;
		int32_t L_11 = V_3;
		NullCheck(L_8);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, L_10)), L_11));
		int16_t L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_14 = ___Y1;
		int32_t L_15 = V_2;
		int32_t L_16 = ___n23;
		int32_t L_17 = V_3;
		NullCheck(L_14);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, L_16)), L_17));
		int16_t L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), L_7))), (int16_t)((int16_t)((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_19))&L_20))));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_003b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = ___n23;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0044:
	{
		int32_t L_25 = V_2;
		int32_t L_26 = ___n12;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0017;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = V_1;
		return L_27;
	}
}
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::Decode(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FrodoEngine_Decode_mC5F49B26234D45D379EA0D4AA39C128C6086995F (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int16_t V_5 = 0;
	int16_t V_6 = 0;
	int16_t V_7 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	int64_t V_9 = 0;
	{
		V_2 = 0;
		V_3 = 8;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_0 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_1 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, L_1))/8));
		int32_t L_2 = __this->___B_11;
		V_6 = ((int16_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_2&((int32_t)31))))), 1)));
		int32_t L_3 = __this->___D_8;
		V_7 = ((int16_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))), 1)));
		int32_t L_4 = V_3;
		int32_t L_5 = __this->___B_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_4, L_5)));
		V_8 = L_6;
		V_0 = 0;
		goto IL_00d6;
	}

IL_0049:
	{
		V_9 = ((int64_t)0);
		V_1 = 0;
		goto IL_009f;
	}

IL_0051:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___input0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int16_t L_11 = V_7;
		int32_t L_12 = __this->___D_8;
		int32_t L_13 = __this->___B_11;
		int32_t L_14 = __this->___D_8;
		int32_t L_15 = __this->___B_11;
		V_5 = ((int16_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_10&(int32_t)L_11)), ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), 1))&((int32_t)31)))))))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_14, L_15))&((int32_t)31))))));
		int64_t L_16 = V_9;
		int16_t L_17 = V_5;
		int16_t L_18 = V_6;
		int32_t L_19 = __this->___B_11;
		int32_t L_20 = V_1;
		V_9 = ((int64_t)(L_16|((int64_t)(((int64_t)((int32_t)((int32_t)L_17&(int32_t)L_18)))<<((int32_t)(((int32_t)il2cpp_codegen_multiply(L_19, L_20))&((int32_t)63)))))));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_009f:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = V_3;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0051;
		}
	}
	{
		V_1 = 0;
		goto IL_00c9;
	}

IL_00a7:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_8;
		int32_t L_26 = V_0;
		int32_t L_27 = __this->___B_11;
		int32_t L_28 = V_1;
		int64_t L_29 = V_9;
		int32_t L_30 = V_1;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_26, L_27)), L_28))), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_29>>((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_30))&((int32_t)63)))))&((int64_t)((int32_t)255))))));
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00c9:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->___B_11;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d6:
	{
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0049;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_8;
		return L_37;
	}
}
// System.Int16 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::CTVerify(System.Int16[],System.Int16[],System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t FrodoEngine_CTVerify_mBC9F03778ADBE5A59F2EF2C2494303E18E713F13 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___a10, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___a21, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___b12, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___b23, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	int16_t V_1 = 0;
	int16_t V_2 = 0;
	{
		V_0 = (int16_t)0;
		V_1 = (int16_t)0;
		goto IL_0017;
	}

IL_0006:
	{
		int16_t L_0 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ___a10;
		int16_t L_2 = V_1;
		NullCheck(L_1);
		int16_t L_3 = L_2;
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = ___b12;
		int16_t L_6 = V_1;
		NullCheck(L_5);
		int16_t L_7 = L_6;
		int16_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int16_t)((int32_t)((int32_t)L_0|(int32_t)((int16_t)((int32_t)((int32_t)L_4^(int32_t)L_8))))));
		int16_t L_9 = V_1;
		V_1 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, 1)));
	}

IL_0017:
	{
		int16_t L_10 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = ___a10;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		V_2 = (int16_t)0;
		goto IL_0033;
	}

IL_0021:
	{
		int16_t L_12 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_13 = ___a21;
		int16_t L_14 = V_2;
		NullCheck(L_13);
		int16_t L_15 = L_14;
		int16_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_17 = ___b23;
		int16_t L_18 = V_2;
		NullCheck(L_17);
		int16_t L_19 = L_18;
		int16_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_0 = ((int16_t)((int32_t)((int32_t)L_12|(int32_t)((int16_t)((int32_t)((int32_t)L_16^(int32_t)L_20))))));
		int16_t L_21 = V_2;
		V_2 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, 1)));
	}

IL_0033:
	{
		int16_t L_22 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_23 = ___a21;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		int16_t L_24 = V_0;
		if (L_24)
		{
			goto IL_003e;
		}
	}
	{
		return (int16_t)0;
	}

IL_003e:
	{
		return (int16_t)(-1);
	}
}
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::CTSelect(System.Byte[],System.Byte[],System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FrodoEngine_CTSelect_m9958C82E224AB9D9851A3AF488335D13B1E027B3 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, int16_t ___selector2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_002d;
	}

IL_000d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		int32_t L_3 = V_1;
		int16_t L_4 = ___selector2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___a0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int16_t L_9 = ___selector2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___b1;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)((~L_4))&(int32_t)L_8))&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_9&(int32_t)L_13))&((int32_t)255)))))));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_002d:
	{
		int32_t L_15 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___a0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		return L_17;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::kem_dec(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoEngine_kem_dec_mEA78771B476C3669E79C68E2E344923B975485F0 (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ss0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ct1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_8 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_11 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_12 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_13 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_14 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_15 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_16 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_17 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_18 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_19 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_20 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_21 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_22 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_23 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_24 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_25 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_26 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_27 = NULL;
	int16_t V_28 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_29 = NULL;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	{
		V_0 = 0;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_0 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_1 = __this->___n_10;
		int32_t L_2 = __this->___D_8;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), L_2))/8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___ct1;
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), NULL);
		V_2 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		int32_t L_10 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_11 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_12 = __this->___D_8;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_10, L_11)), L_12))/8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___ct1;
		int32_t L_14 = V_0;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_13, L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), NULL);
		V_3 = L_17;
		V_0 = 0;
		int32_t L_18 = __this->___len_s_bytes_24;
		V_1 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___sk2;
		int32_t L_20 = V_0;
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_19, L_20, ((int32_t)il2cpp_codegen_add(L_21, L_22)), NULL);
		V_4 = L_23;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		int32_t L_26 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_seedA_bytes_5;
		V_1 = L_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___sk2;
		int32_t L_28 = V_0;
		int32_t L_29 = V_0;
		int32_t L_30 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_27, L_28, ((int32_t)il2cpp_codegen_add(L_29, L_30)), NULL);
		V_5 = L_31;
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, L_33));
		int32_t L_34 = __this->___D_8;
		int32_t L_35 = __this->___n_10;
		int32_t L_36 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_34, L_35)), L_36))/8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___sk2;
		int32_t L_38 = V_0;
		int32_t L_39 = V_0;
		int32_t L_40 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_37, L_38, ((int32_t)il2cpp_codegen_add(L_39, L_40)), NULL);
		V_6 = L_41;
		int32_t L_42 = V_0;
		int32_t L_43 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		int32_t L_44 = __this->___n_10;
		int32_t L_45 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_44, L_45)), ((int32_t)16)))/8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___sk2;
		int32_t L_47 = V_0;
		int32_t L_48 = V_0;
		int32_t L_49 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_46, L_47, ((int32_t)il2cpp_codegen_add(L_48, L_49)), NULL);
		V_7 = L_50;
		int32_t L_51 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_52 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_53 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_51, L_52)));
		V_8 = L_53;
		V_30 = 0;
		goto IL_0114;
	}

IL_00d2:
	{
		V_31 = 0;
		goto IL_0104;
	}

IL_00d7:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_54 = V_8;
		int32_t L_55 = V_30;
		int32_t L_56 = __this->___n_10;
		int32_t L_57 = V_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_7;
		int32_t L_59 = V_30;
		int32_t L_60 = __this->___n_10;
		int32_t L_61 = V_31;
		uint16_t L_62;
		L_62 = Pack_LE_To_UInt16_m4FC2AD5B4BDEDF633F41D05BADFA604CAC07E097(L_58, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_59, L_60)), 2)), ((int32_t)il2cpp_codegen_multiply(L_61, 2)))), NULL);
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_55, L_56)), L_57))), (int16_t)((int16_t)L_62));
		int32_t L_63 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0104:
	{
		int32_t L_64 = V_31;
		int32_t L_65 = __this->___n_10;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_66 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_0114:
	{
		int32_t L_67 = V_30;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_68 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_00d2;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_69 = V_8;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_70 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_71 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_72;
		L_72 = FrodoEngine_MatrixTranspose_m231B4A5255CA8ECB93D3BCCC2CB4BE02689607DC(__this, L_69, L_70, L_71, NULL);
		V_9 = L_72;
		int32_t L_73 = V_0;
		int32_t L_74 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_73, L_74));
		int32_t L_75 = __this->___len_pkh_bytes_26;
		V_1 = L_75;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___sk2;
		int32_t L_77 = V_0;
		int32_t L_78 = V_0;
		int32_t L_79 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80;
		L_80 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_76, L_77, ((int32_t)il2cpp_codegen_add(L_78, L_79)), NULL);
		V_10 = L_80;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = V_2;
		int32_t L_82 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_83 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_84;
		L_84 = FrodoEngine_FrodoUnpack_mB344E784DAA7CAF19E93A56B41912B08229ADE85(__this, L_81, L_82, L_83, NULL);
		V_11 = L_84;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = V_3;
		int32_t L_86 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_87 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_88;
		L_88 = FrodoEngine_FrodoUnpack_mB344E784DAA7CAF19E93A56B41912B08229ADE85(__this, L_85, L_86, L_87, NULL);
		V_12 = L_88;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_89 = V_11;
		int32_t L_90 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_91 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_92 = V_9;
		int32_t L_93 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_94;
		L_94 = FrodoEngine_MatrixMul_mDB3D84C635F07DDA0A8717AD7E73B5346459DE3A(__this, L_89, L_90, L_91, L_92, L_93, NULL);
		V_13 = L_94;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_95 = V_12;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_96 = V_13;
		int32_t L_97 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_98 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_99;
		L_99 = FrodoEngine_MatrixSub_m4C5A0977852B920A44A434C1DAA4FA84E2AE4DFB(__this, L_95, L_96, L_97, L_98, NULL);
		V_14 = L_99;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_100 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101;
		L_101 = FrodoEngine_Decode_mC5F49B26234D45D379EA0D4AA39C128C6086995F(__this, L_100, NULL);
		V_15 = L_101;
		int32_t L_102 = __this->___len_seedSE_bytes_23;
		int32_t L_103 = __this->___len_k_bytes_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_102, L_103)));
		V_16 = L_104;
		RuntimeObject* L_105 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = V_10;
		int32_t L_107 = __this->___len_pkh_bytes_26;
		NullCheck(L_105);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_105, L_106, 0, L_107);
		RuntimeObject* L_108 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = V_15;
		int32_t L_110 = __this->___len_mu_bytes_22;
		NullCheck(L_108);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_108, L_109, 0, L_110);
		RuntimeObject* L_111 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_16;
		int32_t L_113 = __this->___len_seedSE_bytes_23;
		int32_t L_114 = __this->___len_k_bytes_25;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_111, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_115;
		L_115 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_111, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_112, 0, ((int32_t)il2cpp_codegen_add(L_113, L_114)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_116 = V_16;
		int32_t L_117 = __this->___len_seedSE_bytes_23;
		int32_t L_118 = __this->___len_seedSE_bytes_23;
		int32_t L_119 = __this->___len_k_bytes_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_120;
		L_120 = Arrays_CopyOfRange_m4793A142C8368F7476B1FACDC7CFB29518F4C65B(L_116, L_117, ((int32_t)il2cpp_codegen_add(L_118, L_119)), NULL);
		V_17 = L_120;
		int32_t L_121 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_122 = __this->___n_10;
		int32_t L_123 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_124 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_125 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_chi_bytes_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_121)), L_122)), ((int32_t)il2cpp_codegen_multiply(L_123, L_124)))), L_125)));
		V_18 = L_126;
		RuntimeObject* L_127 = __this->___digest_28;
		NullCheck(L_127);
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IDigest::Update(System.Byte) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_127, (uint8_t)((int32_t)150));
		RuntimeObject* L_128 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = V_16;
		int32_t L_130 = __this->___len_seedSE_bytes_23;
		NullCheck(L_128);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_128, L_129, 0, L_130);
		RuntimeObject* L_131 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_132 = V_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_133 = V_18;
		NullCheck(L_133);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_131, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_134;
		L_134 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_131, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_132, 0, ((int32_t)(((RuntimeArray*)L_133)->max_length)));
		int32_t L_135 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_136 = __this->___n_10;
		int32_t L_137 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_138 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_139 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_135)), L_136)), ((int32_t)il2cpp_codegen_multiply(L_137, L_138)))));
		V_19 = L_139;
		V_32 = 0;
		goto IL_02c5;
	}

IL_02ae:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_140 = V_19;
		int32_t L_141 = V_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_142 = V_18;
		int32_t L_143 = V_32;
		uint16_t L_144;
		L_144 = Pack_LE_To_UInt16_m4FC2AD5B4BDEDF633F41D05BADFA604CAC07E097(L_142, ((int32_t)il2cpp_codegen_multiply(L_143, 2)), NULL);
		NullCheck(L_140);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(L_141), (int16_t)((int16_t)L_144));
		int32_t L_145 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add(L_145, 1));
	}

IL_02c5:
	{
		int32_t L_146 = V_32;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_147 = V_19;
		NullCheck(L_147);
		if ((((int32_t)L_146) < ((int32_t)((int32_t)(((RuntimeArray*)L_147)->max_length)))))
		{
			goto IL_02ae;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_148 = V_19;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_149 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_150 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_151;
		L_151 = FrodoEngine_SampleMatrix_m9BDA6DDC168B2FF9B61626D805125F0624469333(__this, L_148, 0, L_149, L_150, NULL);
		V_20 = L_151;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_152 = V_19;
		int32_t L_153 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_154 = __this->___n_10;
		int32_t L_155 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_156 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_157;
		L_157 = FrodoEngine_SampleMatrix_m9BDA6DDC168B2FF9B61626D805125F0624469333(__this, L_152, ((int32_t)il2cpp_codegen_multiply(L_153, L_154)), L_155, L_156, NULL);
		V_21 = L_157;
		FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* L_158 = __this->___gen_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_159 = V_5;
		NullCheck(L_158);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_160;
		L_160 = VirtualFuncInvoker1< Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator::GenMatrix(System.Byte[]) */, L_158, L_159);
		V_22 = L_160;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_161 = V_20;
		int32_t L_162 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_163 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_164 = V_22;
		int32_t L_165 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_166;
		L_166 = FrodoEngine_MatrixMul_mDB3D84C635F07DDA0A8717AD7E73B5346459DE3A(__this, L_161, L_162, L_163, L_164, L_165, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_167 = V_21;
		int32_t L_168 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_169 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_170;
		L_170 = FrodoEngine_MatrixAdd_m176EDADC79D11948D48CBCF8C918BB90F326E98B(__this, L_166, L_167, L_168, L_169, NULL);
		V_23 = L_170;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_171 = V_19;
		int32_t L_172 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_173 = __this->___n_10;
		int32_t L_174 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_175 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_176;
		L_176 = FrodoEngine_SampleMatrix_m9BDA6DDC168B2FF9B61626D805125F0624469333(__this, L_171, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_172)), L_173)), L_174, L_175, NULL);
		V_24 = L_176;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_177 = V_6;
		int32_t L_178 = __this->___n_10;
		int32_t L_179 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_180;
		L_180 = FrodoEngine_FrodoUnpack_mB344E784DAA7CAF19E93A56B41912B08229ADE85(__this, L_177, L_178, L_179, NULL);
		V_25 = L_180;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_181 = V_20;
		int32_t L_182 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_183 = __this->___n_10;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_184 = V_25;
		int32_t L_185 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_186;
		L_186 = FrodoEngine_MatrixMul_mDB3D84C635F07DDA0A8717AD7E73B5346459DE3A(__this, L_181, L_182, L_183, L_184, L_185, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_187 = V_24;
		int32_t L_188 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_189 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_190;
		L_190 = FrodoEngine_MatrixAdd_m176EDADC79D11948D48CBCF8C918BB90F326E98B(__this, L_186, L_187, L_188, L_189, NULL);
		V_26 = L_190;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_191 = V_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_192 = V_15;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_193;
		L_193 = FrodoEngine_Encode_m315ECA55BBB5B046EE1248310BA2254D27D21392(__this, L_192, NULL);
		int32_t L_194 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1;
		int32_t L_195 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_196;
		L_196 = FrodoEngine_MatrixAdd_m176EDADC79D11948D48CBCF8C918BB90F326E98B(__this, L_191, L_193, L_194, L_195, NULL);
		V_27 = L_196;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_197 = V_11;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_198 = V_12;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_199 = V_23;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_200 = V_27;
		int16_t L_201;
		L_201 = FrodoEngine_CTVerify_mBC9F03778ADBE5A59F2EF2C2494303E18E713F13(__this, L_197, L_198, L_199, L_200, NULL);
		V_28 = L_201;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_202 = V_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_203 = V_4;
		int16_t L_204 = V_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_205;
		L_205 = FrodoEngine_CTSelect_m9958C82E224AB9D9851A3AF488335D13B1E027B3(__this, L_202, L_203, L_204, NULL);
		V_29 = L_205;
		RuntimeObject* L_206 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_207 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_208 = V_2;
		NullCheck(L_208);
		NullCheck(L_206);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_206, L_207, 0, ((int32_t)(((RuntimeArray*)L_208)->max_length)));
		RuntimeObject* L_209 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_210 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_211 = V_3;
		NullCheck(L_211);
		NullCheck(L_209);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_209, L_210, 0, ((int32_t)(((RuntimeArray*)L_211)->max_length)));
		RuntimeObject* L_212 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_213 = V_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_214 = V_29;
		NullCheck(L_214);
		NullCheck(L_212);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_212, L_213, 0, ((int32_t)(((RuntimeArray*)L_214)->max_length)));
		RuntimeObject* L_215 = __this->___digest_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_216 = ___ss0;
		int32_t L_217 = __this->___len_ss_bytes_27;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_215, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)));
		int32_t L_218;
		L_218 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_215, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var)), L_216, 0, L_217);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoEngine__cctor_mD1F19152FC76A62371235EF8E38DF92A4C6BEF31 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0 = 8;
		((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___mbar_1 = 8;
		((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_seedA_2 = ((int32_t)128);
		((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_z_3 = ((int32_t)128);
		((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_chi_4 = ((int32_t)16);
		int32_t L_0 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_seedA_2;
		((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_seedA_bytes_5 = ((int32_t)(L_0/8));
		int32_t L_1 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_z_3;
		((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_z_bytes_6 = ((int32_t)(L_1/8));
		int32_t L_2 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_chi_4;
		((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___len_chi_bytes_7 = ((int32_t)(L_2/8));
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKEMExtractor::.ctor(Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoKEMExtractor__ctor_mEEEC19D25707B853FCFA10AB4DEA6B73280DDFFA (FrodoKEMExtractor_tB37A5B127633EC47D927281CC48D4FF41412E3B4* __this, FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C* ___privParams0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C* L_0 = ___privParams0;
		__this->___m_key_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_key_0), (void*)L_0);
		FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C* L_1 = ___privParams0;
		NullCheck(L_1);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_2;
		L_2 = FrodoKeyParameters_get_Parameters_mFFDAC4609368734FFED0371ADDFA2FDA3BC3028D_inline(L_1, NULL);
		NullCheck(L_2);
		FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* L_3;
		L_3 = FrodoParameters_get_Engine_m867F36BC59F0B14A5E4BC6F01940071FFC3819B3_inline(L_2, NULL);
		__this->___m_engine_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_engine_1), (void*)L_3);
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKEMExtractor::ExtractSecret(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FrodoKEMExtractor_ExtractSecret_m0473083BF2FCFA75FA47931AB91C0E2FDDF9FB12 (FrodoKEMExtractor_tB37A5B127633EC47D927281CC48D4FF41412E3B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encapsulation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* L_0 = __this->___m_engine_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FrodoEngine_get_SessionKeySize_mBF0BE50AFF293123ACC1C4277D5BD2D25784B18E_inline(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* L_3 = __this->___m_engine_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___encapsulation0;
		FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C* L_6 = __this->___m_key_0;
		NullCheck(((FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5*)CastclassSealed((RuntimeObject*)L_6, FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5*)CastclassSealed((RuntimeObject*)L_6, FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5_il2cpp_TypeInfo_var))->___privateKey_2;
		NullCheck(L_3);
		FrodoEngine_kem_dec_mEA78771B476C3669E79C68E2E344923B975485F0(L_3, L_4, L_5, L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKEMExtractor::get_EncapsulationLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrodoKEMExtractor_get_EncapsulationLength_m71B4ABADABEDC3DCC449C22F424930F5DC370B57 (FrodoKEMExtractor_tB37A5B127633EC47D927281CC48D4FF41412E3B4* __this, const RuntimeMethod* method) 
{
	{
		FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* L_0 = __this->___m_engine_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FrodoEngine_get_CipherTextSize_m4D3D3654A1DE0B125B60CC27FAD8B215CA5A3301_inline(L_0, NULL);
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKEMGenerator::.ctor(Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoKEMGenerator__ctor_m521D16E6C49EC03D51525C69740222A85B2A446B (FrodoKEMGenerator_t3DA4AF3905DBE09DE01455A956B421599DCBD091* __this, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___random0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_0 = ___random0;
		__this->___m_random_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_random_0), (void*)L_0);
		return;
	}
}
// Org.BouncyCastle.Crypto.ISecretWithEncapsulation Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKEMGenerator::GenerateEncapsulated(Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FrodoKEMGenerator_GenerateEncapsulated_mFF50C2D768E9757B3888B5964CAB785DFDE593E9 (FrodoKEMGenerator_t3DA4AF3905DBE09DE01455A956B421599DCBD091* __this, AsymmetricKeyParameter_tCE60A7D19FCA9FDF79E1498387921695CDCB4444* ___recipientKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecretWithEncapsulationImpl_t4C0A3C59485A8CB7ABAD4360FA25D977A2871003_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		AsymmetricKeyParameter_tCE60A7D19FCA9FDF79E1498387921695CDCB4444* L_0 = ___recipientKey0;
		V_0 = ((FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335*)CastclassSealed((RuntimeObject*)L_0, FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335_il2cpp_TypeInfo_var));
		FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335* L_1 = V_0;
		NullCheck(L_1);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_2;
		L_2 = FrodoKeyParameters_get_Parameters_mFFDAC4609368734FFED0371ADDFA2FDA3BC3028D_inline(L_1, NULL);
		NullCheck(L_2);
		FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* L_3;
		L_3 = FrodoParameters_get_Engine_m867F36BC59F0B14A5E4BC6F01940071FFC3819B3_inline(L_2, NULL);
		FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = FrodoEngine_get_CipherTextSize_m4D3D3654A1DE0B125B60CC27FAD8B215CA5A3301_inline(L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* L_7 = L_4;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = FrodoEngine_get_SessionKeySize_mBF0BE50AFF293123ACC1C4277D5BD2D25784B18E_inline(L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12->___m_publicKey_2;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_14 = __this->___m_random_0;
		NullCheck(L_7);
		FrodoEngine_kem_enc_mD750D86E7DD15A0C0C8F093909D5B2EC0DBCF046(L_7, L_10, L_11, L_13, L_14, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		SecretWithEncapsulationImpl_t4C0A3C59485A8CB7ABAD4360FA25D977A2871003* L_17 = (SecretWithEncapsulationImpl_t4C0A3C59485A8CB7ABAD4360FA25D977A2871003*)il2cpp_codegen_object_new(SecretWithEncapsulationImpl_t4C0A3C59485A8CB7ABAD4360FA25D977A2871003_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		SecretWithEncapsulationImpl__ctor_mFA1DD8E1A7AFDDADB78C4961153CD91024C4C150(L_17, L_15, L_16, NULL);
		return L_17;
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyGenerationParameters::.ctor(Org.BouncyCastle.Security.SecureRandom,Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoKeyGenerationParameters__ctor_m6C051C1274B6C0ED06686FC52C2C232A295F19A8 (FrodoKeyGenerationParameters_t6C3B3E0BAF240849FB4533656F739B6363EB6EF6* __this, SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* ___random0, FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___frodoParameters1, const RuntimeMethod* method) 
{
	{
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_0 = ___random0;
		KeyGenerationParameters__ctor_m4627FC453252D781277FB559AC9FB3DD6E4793DB(__this, L_0, ((int32_t)256), NULL);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_1 = ___frodoParameters1;
		__this->___m_parameters_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_parameters_2), (void*)L_1);
		return;
	}
}
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyGenerationParameters::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* FrodoKeyGenerationParameters_get_Parameters_m8B7D1AF5B86D7EC55F175EE838DDFB2A0FC76436 (FrodoKeyGenerationParameters_t6C3B3E0BAF240849FB4533656F739B6363EB6EF6* __this, const RuntimeMethod* method) 
{
	{
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_0 = __this->___m_parameters_2;
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyPairGenerator::Init(Org.BouncyCastle.Crypto.KeyGenerationParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoKeyPairGenerator_Init_mECA96FD1FA74A238BF051519D8277A619F026497 (FrodoKeyPairGenerator_tBD10662F7C67388331370173F325D00FA1F3EBD0* __this, KeyGenerationParameters_t0C9F19AF6E594DCE7C04692AA71CD73157392B29* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoKeyGenerationParameters_t6C3B3E0BAF240849FB4533656F739B6363EB6EF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FrodoKeyGenerationParameters_t6C3B3E0BAF240849FB4533656F739B6363EB6EF6* V_0 = NULL;
	{
		KeyGenerationParameters_t0C9F19AF6E594DCE7C04692AA71CD73157392B29* L_0 = ___param0;
		V_0 = ((FrodoKeyGenerationParameters_t6C3B3E0BAF240849FB4533656F739B6363EB6EF6*)CastclassClass((RuntimeObject*)L_0, FrodoKeyGenerationParameters_t6C3B3E0BAF240849FB4533656F739B6363EB6EF6_il2cpp_TypeInfo_var));
		FrodoKeyGenerationParameters_t6C3B3E0BAF240849FB4533656F739B6363EB6EF6* L_1 = V_0;
		NullCheck(L_1);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_2;
		L_2 = FrodoKeyGenerationParameters_get_Parameters_m8B7D1AF5B86D7EC55F175EE838DDFB2A0FC76436_inline(L_1, NULL);
		__this->___m_parameters_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_parameters_0), (void*)L_2);
		FrodoKeyGenerationParameters_t6C3B3E0BAF240849FB4533656F739B6363EB6EF6* L_3 = V_0;
		NullCheck(L_3);
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_4;
		L_4 = KeyGenerationParameters_get_Random_m1A6E9BB56C308C3A41AD11C2CFBBB475E25050D5_inline(L_3, NULL);
		__this->___m_random_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_random_1), (void*)L_4);
		return;
	}
}
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyPairGenerator::GenerateKeyPair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsymmetricCipherKeyPair_t0A38E877BA777BFA3F5DDA45B8FBC0165CB6A4D2* FrodoKeyPairGenerator_GenerateKeyPair_mF53D19A9A1E940C5C3611017888B389C5A51A6A6 (FrodoKeyPairGenerator_tBD10662F7C67388331370173F325D00FA1F3EBD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsymmetricCipherKeyPair_t0A38E877BA777BFA3F5DDA45B8FBC0165CB6A4D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_0 = __this->___m_parameters_0;
		NullCheck(L_0);
		FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* L_1;
		L_1 = FrodoParameters_get_Engine_m867F36BC59F0B14A5E4BC6F01940071FFC3819B3_inline(L_0, NULL);
		FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FrodoEngine_get_PrivateKeySize_m7BA719C63D22147425D88AC1FA8541E427375986_inline(L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* L_5 = L_2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = FrodoEngine_get_PublicKeySize_m3FFB358D6C94BAEA0E814446583A04197F2C517D_inline(L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_10 = __this->___m_random_1;
		NullCheck(L_5);
		FrodoEngine_kem_keypair_m08949D20031C9C67F1D5A05D1CDAF86DFD906F34(L_5, L_8, L_9, L_10, NULL);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_11 = __this->___m_parameters_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335* L_13 = (FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335*)il2cpp_codegen_object_new(FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		FrodoPublicKeyParameters__ctor_m51B713785CA8404CC35C2CF1DA1535C1C31B795D(L_13, L_11, L_12, NULL);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_14 = __this->___m_parameters_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5* L_16 = (FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5*)il2cpp_codegen_object_new(FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		FrodoPrivateKeyParameters__ctor_m667342D19A802793FC790543C35086D14E9CE8E9(L_16, L_14, L_15, NULL);
		AsymmetricCipherKeyPair_t0A38E877BA777BFA3F5DDA45B8FBC0165CB6A4D2* L_17 = (AsymmetricCipherKeyPair_t0A38E877BA777BFA3F5DDA45B8FBC0165CB6A4D2*)il2cpp_codegen_object_new(AsymmetricCipherKeyPair_t0A38E877BA777BFA3F5DDA45B8FBC0165CB6A4D2_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		AsymmetricCipherKeyPair__ctor_m1E0F04422A71FFB7AE441D701555BFA8A97DE5F7(L_17, L_13, L_16, NULL);
		return L_17;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyPairGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoKeyPairGenerator__ctor_m10BE8CFCF0D21079A7FC2DADA930D0A3F1B4BF65 (FrodoKeyPairGenerator_tBD10662F7C67388331370173F325D00FA1F3EBD0* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyParameters::.ctor(System.Boolean,Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoKeyParameters__ctor_m03DE7DF3C16104BF2F43574EB8B4C510F1601A2F (FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C* __this, bool ___isPrivate0, FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___parameters1, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___isPrivate0;
		AsymmetricKeyParameter__ctor_m1D8679CC1116F2495CCD108475E79A1FE95B1106(__this, L_0, NULL);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_1 = ___parameters1;
		__this->___m_parameters_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_parameters_1), (void*)L_1);
		return;
	}
}
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoKeyParameters::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* FrodoKeyParameters_get_Parameters_mFFDAC4609368734FFED0371ADDFA2FDA3BC3028D (FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C* __this, const RuntimeMethod* method) 
{
	{
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_0 = __this->___m_parameters_1;
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoMatrixGenerator__ctor_m1212B5CAFE7C6BD3BFE017DE22ADEF57288CA882 (FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* __this, int32_t ___n0, int32_t ___q1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___n0;
		__this->___n_0 = L_0;
		int32_t L_1 = ___q1;
		__this->___q_1 = L_1;
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator/Shake128MatrixGenerator::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shake128MatrixGenerator__ctor_m390B473680280C7B30CFF414DEC1225F73C31EE1 (Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403* __this, int32_t ___n0, int32_t ___q1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___n0;
		int32_t L_1 = ___q1;
		FrodoMatrixGenerator__ctor_m1212B5CAFE7C6BD3BFE017DE22ADEF57288CA882(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator/Shake128MatrixGenerator::GenMatrix(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Shake128MatrixGenerator_GenMatrix_m3F03A1B5B067C7842C09BA1A68A9AF4D055A727E (Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seedA0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	uint32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	{
		int32_t L_0 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		int32_t L_1 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		int32_t L_3 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)16), L_3))/8)));
		V_3 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___seedA0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(2, ((int32_t)(((RuntimeArray*)L_5)->max_length)))));
		V_4 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___seedA0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___seedA0;
		NullCheck(L_9);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, 2, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		int32_t L_10 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___q_1;
		int32_t L_11 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___q_1;
		V_5 = ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_10, 1))<<((int32_t)16)))|((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract(L_11, 1)))));
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_12 = (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D*)il2cpp_codegen_object_new(ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ShakeDigest__ctor_m6216739ECC19D7C9735EF5B2D5E7B498FA91964A(L_12, ((int32_t)128), NULL);
		V_6 = L_12;
		V_1 = (uint16_t)0;
		goto IL_0178;
	}

IL_0067:
	{
		uint16_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_4;
		Pack_UInt16_To_LE_m6A3649365325626457A6E634238A2A523E437850(L_13, L_14, NULL);
		RuntimeObject* L_15 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_4;
		NullCheck(L_17);
		NullCheck(L_15);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tEDC4BB180322E92E26D83A351AFB7F0D385DEBAF_il2cpp_TypeInfo_var, L_15, L_16, 0, ((int32_t)(((RuntimeArray*)L_17)->max_length)));
		RuntimeObject* L_18 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
		NullCheck(L_20);
		NullCheck(L_18);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::OutputFinal(System.Byte[],System.Int32,System.Int32) */, IXof_tD4CEEB0F5472D631D59EC7338214D42ED4DFD5D4_il2cpp_TypeInfo_var, L_18, L_19, 0, ((int32_t)(((RuntimeArray*)L_20)->max_length)));
		V_2 = (uint16_t)0;
		goto IL_0167;
	}

IL_0091:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_3;
		uint16_t L_23 = V_2;
		uint32_t L_24;
		L_24 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_22, ((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_23)), NULL);
		uint32_t L_25 = V_5;
		V_7 = ((int32_t)((int32_t)L_24&(int32_t)L_25));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_3;
		uint16_t L_27 = V_2;
		uint32_t L_28;
		L_28 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_26, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_27)), 4)), NULL);
		uint32_t L_29 = V_5;
		V_8 = ((int32_t)((int32_t)L_28&(int32_t)L_29));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_3;
		uint16_t L_31 = V_2;
		uint32_t L_32;
		L_32 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_30, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_31)), 8)), NULL);
		uint32_t L_33 = V_5;
		V_9 = ((int32_t)((int32_t)L_32&(int32_t)L_33));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_3;
		uint16_t L_35 = V_2;
		uint32_t L_36;
		L_36 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_34, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_35)), ((int32_t)12))), NULL);
		uint32_t L_37 = V_5;
		V_10 = ((int32_t)((int32_t)L_36&(int32_t)L_37));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_38 = V_0;
		uint16_t L_39 = V_1;
		int32_t L_40 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		uint16_t L_41 = V_2;
		uint32_t L_42 = V_7;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, L_40)), (int32_t)L_41))), (int16_t)((int16_t)L_42));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43 = V_0;
		uint16_t L_44 = V_1;
		int32_t L_45 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		uint16_t L_46 = V_2;
		uint32_t L_47 = V_7;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_44, L_45)), (int32_t)L_46)), 1))), (int16_t)((int16_t)((int32_t)((uint32_t)L_47>>((int32_t)16)))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_48 = V_0;
		uint16_t L_49 = V_1;
		int32_t L_50 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		uint16_t L_51 = V_2;
		uint32_t L_52 = V_8;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_49, L_50)), (int32_t)L_51)), 2))), (int16_t)((int16_t)L_52));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_53 = V_0;
		uint16_t L_54 = V_1;
		int32_t L_55 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		uint16_t L_56 = V_2;
		uint32_t L_57 = V_8;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_54, L_55)), (int32_t)L_56)), 3))), (int16_t)((int16_t)((int32_t)((uint32_t)L_57>>((int32_t)16)))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_58 = V_0;
		uint16_t L_59 = V_1;
		int32_t L_60 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		uint16_t L_61 = V_2;
		uint32_t L_62 = V_9;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_59, L_60)), (int32_t)L_61)), 4))), (int16_t)((int16_t)L_62));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_63 = V_0;
		uint16_t L_64 = V_1;
		int32_t L_65 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		uint16_t L_66 = V_2;
		uint32_t L_67 = V_9;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_64, L_65)), (int32_t)L_66)), 5))), (int16_t)((int16_t)((int32_t)((uint32_t)L_67>>((int32_t)16)))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_68 = V_0;
		uint16_t L_69 = V_1;
		int32_t L_70 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		uint16_t L_71 = V_2;
		uint32_t L_72 = V_10;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_69, L_70)), (int32_t)L_71)), 6))), (int16_t)((int16_t)L_72));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_73 = V_0;
		uint16_t L_74 = V_1;
		int32_t L_75 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		uint16_t L_76 = V_2;
		uint32_t L_77 = V_10;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_74, L_75)), (int32_t)L_76)), 7))), (int16_t)((int16_t)((int32_t)((uint32_t)L_77>>((int32_t)16)))));
		uint16_t L_78 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_78, 8)));
	}

IL_0167:
	{
		uint16_t L_79 = V_2;
		int32_t L_80 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_0091;
		}
	}
	{
		uint16_t L_81 = V_1;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_81, 1)));
	}

IL_0178:
	{
		uint16_t L_82 = V_1;
		int32_t L_83 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		if ((((int32_t)L_82) < ((int32_t)L_83)))
		{
			goto IL_0067;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_84 = V_0;
		return L_84;
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator/Aes128MatrixGenerator::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Aes128MatrixGenerator__ctor_mF59C2D93301679355570E45A303BB40C25DA43F1 (Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA* __this, int32_t ___n0, int32_t ___q1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___n0;
		int32_t L_1 = ___q1;
		FrodoMatrixGenerator__ctor_m1212B5CAFE7C6BD3BFE017DE22ADEF57288CA882(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator/Aes128MatrixGenerator::GenMatrix(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Aes128MatrixGenerator_GenMatrix_m18B4C8DF854A44D94A6119E013E5B904A880F660 (Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seedA0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_tE665095B452452ABA78804BD9DDD438F9062C70F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	{
		int32_t L_0 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		int32_t L_1 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_2 = L_4;
		int32_t L_5 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___q_1;
		int32_t L_6 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___q_1;
		V_3 = ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_5, 1))<<((int32_t)16)))|((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract(L_6, 1)))));
		RuntimeObject* L_7;
		L_7 = AesUtilities_CreateEngine_mF61AABA724D754603FF18E6F6A1F01362D8594FA(NULL);
		V_4 = L_7;
		RuntimeObject* L_8 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___seedA0;
		KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0* L_10 = (KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0*)il2cpp_codegen_object_new(KeyParameter_t4BBDB4D04B60FF5A903740E5A9C95E5CA63E40B0_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		KeyParameter__ctor_m6F40CE65781E440BF20F17867ECA04BF6A8A660F(L_10, L_9, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_tE665095B452452ABA78804BD9DDD438F9062C70F_il2cpp_TypeInfo_var, L_8, (bool)1, L_10);
		V_5 = 0;
		goto IL_0166;
	}

IL_0056:
	{
		int32_t L_11 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		Pack_UInt16_To_LE_mC32154C784222BE0AFD80BE60B8792543D4B5A92((uint16_t)((int32_t)(uint16_t)L_11), L_12, 0, NULL);
		V_6 = 0;
		goto IL_0153;
	}

IL_0068:
	{
		int32_t L_13 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		Pack_UInt16_To_LE_mC32154C784222BE0AFD80BE60B8792543D4B5A92((uint16_t)((int32_t)(uint16_t)L_13), L_14, 2, NULL);
		RuntimeObject* L_15 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		NullCheck(L_15);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(3 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_tE665095B452452ABA78804BD9DDD438F9062C70F_il2cpp_TypeInfo_var, L_15, L_16, 0, L_17, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		uint32_t L_20;
		L_20 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_19, 0, NULL);
		uint32_t L_21 = V_3;
		V_7 = ((int32_t)((int32_t)L_20&(int32_t)L_21));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
		uint32_t L_23;
		L_23 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_22, 4, NULL);
		uint32_t L_24 = V_3;
		V_8 = ((int32_t)((int32_t)L_23&(int32_t)L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_2;
		uint32_t L_26;
		L_26 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_25, 8, NULL);
		uint32_t L_27 = V_3;
		V_9 = ((int32_t)((int32_t)L_26&(int32_t)L_27));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_2;
		uint32_t L_29;
		L_29 = Pack_LE_To_UInt32_mD29A82809004F7E328D35274BD077D7BC250209C(L_28, ((int32_t)12), NULL);
		uint32_t L_30 = V_3;
		V_10 = ((int32_t)((int32_t)L_29&(int32_t)L_30));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_31 = V_0;
		int32_t L_32 = V_5;
		int32_t L_33 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		int32_t L_34 = V_6;
		uint32_t L_35 = V_7;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_32, L_33)), L_34))), (int16_t)((int16_t)L_35));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_36 = V_0;
		int32_t L_37 = V_5;
		int32_t L_38 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		int32_t L_39 = V_6;
		uint32_t L_40 = V_7;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_37, L_38)), L_39)), 1))), (int16_t)((int16_t)((int32_t)((uint32_t)L_40>>((int32_t)16)))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_41 = V_0;
		int32_t L_42 = V_5;
		int32_t L_43 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		int32_t L_44 = V_6;
		uint32_t L_45 = V_8;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_42, L_43)), L_44)), 2))), (int16_t)((int16_t)L_45));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		int32_t L_49 = V_6;
		uint32_t L_50 = V_8;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_47, L_48)), L_49)), 3))), (int16_t)((int16_t)((int32_t)((uint32_t)L_50>>((int32_t)16)))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		int32_t L_54 = V_6;
		uint32_t L_55 = V_9;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_52, L_53)), L_54)), 4))), (int16_t)((int16_t)L_55));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_56 = V_0;
		int32_t L_57 = V_5;
		int32_t L_58 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		int32_t L_59 = V_6;
		uint32_t L_60 = V_9;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_57, L_58)), L_59)), 5))), (int16_t)((int16_t)((int32_t)((uint32_t)L_60>>((int32_t)16)))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_61 = V_0;
		int32_t L_62 = V_5;
		int32_t L_63 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		int32_t L_64 = V_6;
		uint32_t L_65 = V_10;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_62, L_63)), L_64)), 6))), (int16_t)((int16_t)L_65));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_66 = V_0;
		int32_t L_67 = V_5;
		int32_t L_68 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		int32_t L_69 = V_6;
		uint32_t L_70 = V_10;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_67, L_68)), L_69)), 7))), (int16_t)((int16_t)((int32_t)((uint32_t)L_70>>((int32_t)16)))));
		int32_t L_71 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_71, 8));
	}

IL_0153:
	{
		int32_t L_72 = V_6;
		int32_t L_73 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_74 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_0166:
	{
		int32_t L_75 = V_5;
		int32_t L_76 = ((FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E*)__this)->___n_0;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_0056;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_77 = V_0;
		return L_77;
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int16[],Org.BouncyCastle.Crypto.Digests.ShakeDigest,Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoParameters__ctor_mAE448954DCE57E51FE54D82E6CDB3C32B19E26AD (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* __this, String_t* ___name0, int32_t ___n1, int32_t ___d2, int32_t ___b3, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___cdf_table4, ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* ___digest5, FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* ___mGen6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___name_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_15), (void*)L_0);
		int32_t L_1 = ___n1;
		__this->___n_16 = L_1;
		int32_t L_2 = ___d2;
		__this->___d_17 = L_2;
		int32_t L_3 = ___b3;
		__this->___b_18 = L_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = ___cdf_table4;
		__this->___cdf_table_19 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cdf_table_19), (void*)L_4);
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_5 = ___digest5;
		__this->___digest_20 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digest_20), (void*)L_5);
		FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* L_6 = ___mGen6;
		__this->___mGen_21 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mGen_21), (void*)L_6);
		int32_t L_7 = ___b3;
		il2cpp_codegen_runtime_class_init_inline(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		int32_t L_8 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		int32_t L_9 = ((FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_StaticFields*)il2cpp_codegen_static_fields_for(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var))->___nbar_0;
		__this->___defaultKeySize_22 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_7, L_8)), L_9));
		int32_t L_10 = ___n1;
		int32_t L_11 = ___d2;
		int32_t L_12 = ___b3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_13 = ___cdf_table4;
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_14 = ___digest5;
		FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* L_15 = ___mGen6;
		FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* L_16 = (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84*)il2cpp_codegen_object_new(FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		FrodoEngine__ctor_m6CA995AB2075CB80F0F6A941A0A2130CD0218330(L_16, L_10, L_11, L_12, L_13, L_14, L_15, NULL);
		__this->___engine_23 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_23), (void*)L_16);
		return;
	}
}
// System.String Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FrodoParameters_get_Name_mA1DC5FC9A47B3FA16B2BA2AC2D73E275B0033A3C (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_15;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::get_DefaultKeySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrodoParameters_get_DefaultKeySize_m24A1A33F5284870AF96587654F14762ABB786704 (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___defaultKeySize_22;
		return L_0;
	}
}
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoEngine Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::get_Engine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* FrodoParameters_get_Engine_m867F36BC59F0B14A5E4BC6F01940071FFC3819B3 (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* __this, const RuntimeMethod* method) 
{
	{
		FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* L_0 = __this->___engine_23;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::get_N()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrodoParameters_get_N_m75FA336C05AB1877742C08D28EB905354B570D7D (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___n_16;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::get_D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrodoParameters_get_D_mAACCD7AABA34BD51A431FD6EBA27A2C76798F8EE (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___d_17;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::get_B()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrodoParameters_get_B_m4B8E28CFF3153CD454F83222FF128821AE064B21 (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___b_18;
		return L_0;
	}
}
// System.Int16[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::get_CdfTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* FrodoParameters_get_CdfTable_m18713170BDC00EFA9A6EAF2EA805CCEA3E5102F4 (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = __this->___cdf_table_19;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1;
		L_1 = Arrays_Clone_mC84BF5DF1FC9D9CD457705AF50AE502F6B35BCD7(L_0, NULL);
		return L_1;
	}
}
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::get_Digest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FrodoParameters_get_Digest_m69FE4DB2EA96B1315B04D4A36A865DCC22C86376 (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_0 = __this->___digest_20;
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_1 = (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D*)il2cpp_codegen_object_new(ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ShakeDigest__ctor_m73490929801CAE613C76979D948F42B0C1E54264(L_1, L_0, NULL);
		return L_1;
	}
}
// Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoMatrixGenerator Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::get_MGen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* FrodoParameters_get_MGen_m8DF82A42C065FB1B2E9A85146A6F730B1A08E9F5 (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* __this, const RuntimeMethod* method) 
{
	{
		FrodoMatrixGenerator_t8973E6A1D131BC6AA35BDE1EF6F5EA1206AEA06E* L_0 = __this->___mGen_21;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoParameters__cctor_mAD1495554D4B02353AE13B362DE976551CD7FE7A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2381073588085DEC186E7DFAE3F577D65E9C0A020A4B17488C127A60897C6642_50_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____251E3E8D6C8623BD8E24A20F50BCD78E044188FA6C113F018525B266C15001C6_56_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____D1F54F5BBFE626A7CD4332F4064FD2BFF36A5421C7224B12D7DC963DCE097FD5_370_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18EE2265CD923C3BE0C753F7C5BA5E621962344F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22F8221AC3074FAAE5631705773DBCB6E41A0DBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AA8A2B5B83E553368BCAD17320E82953578B9C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA521D3AC5CD2FD2D7036E955E442EE91FAA8A6AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE462556F5566CA665374C61FFF2039C8DF43955C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7A1D3AD4268BB6FB05A7A58DFF603CC69E438F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____D1F54F5BBFE626A7CD4332F4064FD2BFF36A5421C7224B12D7DC963DCE097FD5_370_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___cdf_table640_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___cdf_table640_0), (void*)L_1);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____251E3E8D6C8623BD8E24A20F50BCD78E044188FA6C113F018525B266C15001C6_56_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___cdf_table976_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___cdf_table976_1), (void*)L_4);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)7);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____2381073588085DEC186E7DFAE3F577D65E9C0A020A4B17488C127A60897C6642_50_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___cdf_table1344_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___cdf_table1344_2), (void*)L_7);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = ((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___cdf_table640_0;
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_10 = (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D*)il2cpp_codegen_object_new(ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ShakeDigest__ctor_m6216739ECC19D7C9735EF5B2D5E7B498FA91964A(L_10, ((int32_t)128), NULL);
		Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA* L_11 = (Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA*)il2cpp_codegen_object_new(Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Aes128MatrixGenerator__ctor_mF59C2D93301679355570E45A303BB40C25DA43F1(L_11, ((int32_t)640), ((int32_t)32768), NULL);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_12 = (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133*)il2cpp_codegen_object_new(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		FrodoParameters__ctor_mAE448954DCE57E51FE54D82E6CDB3C32B19E26AD(L_12, _stringLiteral3AA8A2B5B83E553368BCAD17320E82953578B9C1, ((int32_t)640), ((int32_t)15), 2, L_9, L_10, L_11, NULL);
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem640aes_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem640aes_3), (void*)L_12);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_13 = ((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___cdf_table640_0;
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_14 = (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D*)il2cpp_codegen_object_new(ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ShakeDigest__ctor_m6216739ECC19D7C9735EF5B2D5E7B498FA91964A(L_14, ((int32_t)128), NULL);
		Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403* L_15 = (Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403*)il2cpp_codegen_object_new(Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Shake128MatrixGenerator__ctor_m390B473680280C7B30CFF414DEC1225F73C31EE1(L_15, ((int32_t)640), ((int32_t)32768), NULL);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_16 = (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133*)il2cpp_codegen_object_new(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		FrodoParameters__ctor_mAE448954DCE57E51FE54D82E6CDB3C32B19E26AD(L_16, _stringLiteralE462556F5566CA665374C61FFF2039C8DF43955C, ((int32_t)640), ((int32_t)15), 2, L_13, L_14, L_15, NULL);
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem640shake_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem640shake_4), (void*)L_16);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_17 = ((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___cdf_table976_1;
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_18 = (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D*)il2cpp_codegen_object_new(ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ShakeDigest__ctor_m6216739ECC19D7C9735EF5B2D5E7B498FA91964A(L_18, ((int32_t)256), NULL);
		Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA* L_19 = (Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA*)il2cpp_codegen_object_new(Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Aes128MatrixGenerator__ctor_mF59C2D93301679355570E45A303BB40C25DA43F1(L_19, ((int32_t)976), ((int32_t)65536), NULL);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_20 = (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133*)il2cpp_codegen_object_new(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		FrodoParameters__ctor_mAE448954DCE57E51FE54D82E6CDB3C32B19E26AD(L_20, _stringLiteral22F8221AC3074FAAE5631705773DBCB6E41A0DBE, ((int32_t)976), ((int32_t)16), 3, L_17, L_18, L_19, NULL);
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem976aes_5 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem976aes_5), (void*)L_20);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_21 = ((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___cdf_table976_1;
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_22 = (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D*)il2cpp_codegen_object_new(ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		ShakeDigest__ctor_m6216739ECC19D7C9735EF5B2D5E7B498FA91964A(L_22, ((int32_t)256), NULL);
		Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403* L_23 = (Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403*)il2cpp_codegen_object_new(Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Shake128MatrixGenerator__ctor_m390B473680280C7B30CFF414DEC1225F73C31EE1(L_23, ((int32_t)976), ((int32_t)65536), NULL);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_24 = (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133*)il2cpp_codegen_object_new(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		FrodoParameters__ctor_mAE448954DCE57E51FE54D82E6CDB3C32B19E26AD(L_24, _stringLiteralA521D3AC5CD2FD2D7036E955E442EE91FAA8A6AC, ((int32_t)976), ((int32_t)16), 3, L_21, L_22, L_23, NULL);
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem976shake_6 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem976shake_6), (void*)L_24);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_25 = ((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___cdf_table1344_2;
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_26 = (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D*)il2cpp_codegen_object_new(ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		ShakeDigest__ctor_m6216739ECC19D7C9735EF5B2D5E7B498FA91964A(L_26, ((int32_t)256), NULL);
		Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA* L_27 = (Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA*)il2cpp_codegen_object_new(Aes128MatrixGenerator_t8F87A9825602CB13071FA1CCD1DE90078A6E6CDA_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Aes128MatrixGenerator__ctor_mF59C2D93301679355570E45A303BB40C25DA43F1(L_27, ((int32_t)1344), ((int32_t)65536), NULL);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_28 = (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133*)il2cpp_codegen_object_new(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		FrodoParameters__ctor_mAE448954DCE57E51FE54D82E6CDB3C32B19E26AD(L_28, _stringLiteralE7A1D3AD4268BB6FB05A7A58DFF603CC69E438F9, ((int32_t)1344), ((int32_t)16), 4, L_25, L_26, L_27, NULL);
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem1344aes_7 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem1344aes_7), (void*)L_28);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = ((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___cdf_table1344_2;
		ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D* L_30 = (ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D*)il2cpp_codegen_object_new(ShakeDigest_t1DD5684EEF5F1104D8B4C9CEB54193B32E5B5D8D_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		ShakeDigest__ctor_m6216739ECC19D7C9735EF5B2D5E7B498FA91964A(L_30, ((int32_t)256), NULL);
		Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403* L_31 = (Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403*)il2cpp_codegen_object_new(Shake128MatrixGenerator_t66616BB0158D43C49741ADE8A3A4381810599403_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Shake128MatrixGenerator__ctor_m390B473680280C7B30CFF414DEC1225F73C31EE1(L_31, ((int32_t)1344), ((int32_t)65536), NULL);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_32 = (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133*)il2cpp_codegen_object_new(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		FrodoParameters__ctor_mAE448954DCE57E51FE54D82E6CDB3C32B19E26AD(L_32, _stringLiteral18EE2265CD923C3BE0C753F7C5BA5E621962344F, ((int32_t)1344), ((int32_t)16), 4, L_29, L_30, L_31, NULL);
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem1344shake_8 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem1344shake_8), (void*)L_32);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_33 = ((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem640aes_3;
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem19888r3_9 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem19888r3_9), (void*)L_33);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_34 = ((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem640shake_4;
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem19888shaker3_10 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem19888shaker3_10), (void*)L_34);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_35 = ((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem976aes_5;
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem31296r3_11 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem31296r3_11), (void*)L_35);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_36 = ((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem976shake_6;
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem31296shaker3_12 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem31296shaker3_12), (void*)L_36);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_37 = ((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem1344aes_7;
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem43088r3_13 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem43088r3_13), (void*)L_37);
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_38 = ((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem1344shake_8;
		((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem43088shaker3_14 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_StaticFields*)il2cpp_codegen_static_fields_for(FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133_il2cpp_TypeInfo_var))->___frodokem43088shaker3_14), (void*)L_38);
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPrivateKeyParameters::.ctor(Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoPrivateKeyParameters__ctor_m667342D19A802793FC790543C35086D14E9CE8E9 (FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5* __this, FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___parameters0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___privateKey1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_0 = ___parameters0;
		FrodoKeyParameters__ctor_m03DE7DF3C16104BF2F43574EB8B4C510F1601A2F(__this, (bool)1, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___privateKey1;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Arrays_Clone_m3447725699DFC9BC50FB07E820FBA4CC454E198C(L_1, NULL);
		__this->___privateKey_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___privateKey_2), (void*)L_2);
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPrivateKeyParameters::GetPrivateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FrodoPrivateKeyParameters_GetPrivateKey_mD2CFB492303EA44F6D574D9CCC9A4F302811B479 (FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___privateKey_2;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Arrays_Clone_m3447725699DFC9BC50FB07E820FBA4CC454E198C(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPrivateKeyParameters::GetEncoded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FrodoPrivateKeyParameters_GetEncoded_mFD4F07AF08FF629240E7E9D079237B5E46009D1B (FrodoPrivateKeyParameters_tE46EA18C9F29B14E184B79DFD4A94160F477EDB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___privateKey_2;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Arrays_Clone_m3447725699DFC9BC50FB07E820FBA4CC454E198C(L_0, NULL);
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPublicKeyParameters::.ctor(Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoParameters,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrodoPublicKeyParameters__ctor_m51B713785CA8404CC35C2CF1DA1535C1C31B795D (FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335* __this, FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* ___parameters0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___publicKey1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_0 = ___parameters0;
		FrodoKeyParameters__ctor_m03DE7DF3C16104BF2F43574EB8B4C510F1601A2F(__this, (bool)0, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___publicKey1;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Arrays_Clone_m3447725699DFC9BC50FB07E820FBA4CC454E198C(L_1, NULL);
		__this->___m_publicKey_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_publicKey_2), (void*)L_2);
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPublicKeyParameters::GetPublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FrodoPublicKeyParameters_GetPublicKey_m8F14BBA1947BC0847DD9D71ADD7E1840C9AD1121 (FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___m_publicKey_2;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t6BDC8E78F10D8936A91EDFDBEAB95996D4E94496_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Arrays_Clone_m3447725699DFC9BC50FB07E820FBA4CC454E198C(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Frodo.FrodoPublicKeyParameters::GetEncoded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FrodoPublicKeyParameters_GetEncoded_m5C32DD4B489C9E69B2776C35BA35D17AA96E0F37 (FrodoPublicKeyParameters_t7DF0F50854C142C300AED070139CDFF236C61335* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = FrodoPublicKeyParameters_GetPublicKey_m8F14BBA1947BC0847DD9D71ADD7E1840C9AD1121(__this, NULL);
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconCodec__ctor_mF041EBA80B369B5E1B548E9C38252516F75B6C73 (FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____1E02B1D50A1940A51671DC0BE3D58967EF531D51879B55F71FB1B70C5DE3C92F_42_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B3C6C9A7B91F13134F7F6E0078C416CF1DE1E2CA7ED333F41696359779D6F3C8_310_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BE24C09865A93221DF3247D5C3D727BCFDAB57D6B41C510D3AA53F0DE08E4C2C_338_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____BE24C09865A93221DF3247D5C3D727BCFDAB57D6B41C510D3AA53F0DE08E4C2C_338_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		__this->___max_fg_bits_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___max_fg_bits_0), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____B3C6C9A7B91F13134F7F6E0078C416CF1DE1E2CA7ED333F41696359779D6F3C8_310_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		__this->___max_FG_bits_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___max_FG_bits_1), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____1E02B1D50A1940A51671DC0BE3D58967EF531D51879B55F71FB1B70C5DE3C92F_42_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		__this->___max_sig_bits_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___max_sig_bits_2), (void*)L_7);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec::modq_encode(System.Byte[],System.Int32,System.Int32,System.UInt16[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconCodec_modq_encode_mBDB2B824ED7F2903BCE2E7340EBE88F9C7D511B8 (FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outarrsrc0, int32_t ___outarr1, int32_t ___max_out_len2, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___xsrc3, int32_t ___x4, uint32_t ___logn5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		uint32_t L_0 = ___logn5;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		V_2 = 0;
		goto IL_0020;
	}

IL_000c:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___xsrc3;
		int32_t L_2 = ___x4;
		int32_t L_3 = V_2;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint16_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((((int32_t)L_5) < ((int32_t)((int32_t)12289))))
		{
			goto IL_001c;
		}
	}
	{
		return 0;
	}

IL_001c:
	{
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0020:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_9 = V_0;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)14))), 7))>>3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___outarrsrc0;
		if (L_10)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_11 = V_1;
		return L_11;
	}

IL_0032:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___max_out_len2;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0038;
		}
	}
	{
		return 0;
	}

IL_0038:
	{
		int32_t L_14 = ___outarr1;
		V_3 = L_14;
		V_4 = 0;
		V_5 = 0;
		V_2 = 0;
		goto IL_007b;
	}

IL_0044:
	{
		uint32_t L_15 = V_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_16 = ___xsrc3;
		int32_t L_17 = ___x4;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		uint16_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_4 = ((int32_t)(((int32_t)((int32_t)L_15<<((int32_t)14)))|(int32_t)L_20));
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)14)));
		goto IL_0072;
	}

IL_005c:
	{
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_22, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___outarrsrc0;
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint32_t L_26 = V_4;
		int32_t L_27 = V_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_26>>((int32_t)(L_27&((int32_t)31)))))));
	}

IL_0072:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)8)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_007b:
	{
		int32_t L_30 = V_2;
		int32_t L_31 = V_0;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_32 = V_5;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_0092;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___outarrsrc0;
		int32_t L_34 = V_3;
		uint32_t L_35 = V_4;
		int32_t L_36 = V_5;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_35<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_36))&((int32_t)31)))))));
	}

IL_0092:
	{
		int32_t L_37 = V_1;
		return L_37;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec::modq_decode(System.UInt16[],System.Int32,System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconCodec_modq_decode_m8887B98D164EE3F1ADF486FEC26625F61B1DB6C6 (FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___xsrc0, int32_t ___x1, uint32_t ___logn2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inarrsrc3, int32_t ___inarr4, int32_t ___max_in_len5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	{
		uint32_t L_0 = ___logn2;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)14))), 7))>>3));
		int32_t L_2 = V_1;
		int32_t L_3 = ___max_in_len5;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_4 = ___inarr4;
		V_3 = L_4;
		V_4 = 0;
		V_5 = 0;
		V_2 = 0;
		goto IL_006d;
	}

IL_0024:
	{
		uint32_t L_5 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___inarrsrc3;
		int32_t L_7 = V_3;
		int32_t L_8 = L_7;
		V_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		NullCheck(L_6);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = ((int32_t)(((int32_t)((int32_t)L_5<<8))|(int32_t)L_10));
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_11, 8));
		int32_t L_12 = V_5;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)14))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_13 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)14)));
		uint32_t L_14 = V_4;
		int32_t L_15 = V_5;
		V_6 = ((int32_t)(((int32_t)((uint32_t)L_14>>((int32_t)(L_15&((int32_t)31)))))&((int32_t)16383)));
		uint32_t L_16 = V_6;
		if ((!(((uint32_t)L_16) >= ((uint32_t)((int32_t)12289)))))
		{
			goto IL_0061;
		}
	}
	{
		return 0;
	}

IL_0061:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_17 = ___xsrc0;
		int32_t L_18 = ___x1;
		int32_t L_19 = V_2;
		uint32_t L_20 = V_6;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, L_19))), (uint16_t)((int32_t)(uint16_t)L_20));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_006d:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0024;
		}
	}
	{
		uint32_t L_24 = V_4;
		int32_t L_25 = V_5;
		if (!((int32_t)((int32_t)L_24&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_25&((int32_t)31))))), 1)))))
		{
			goto IL_0081;
		}
	}
	{
		return 0;
	}

IL_0081:
	{
		int32_t L_26 = V_1;
		return L_26;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec::trim_i16_encode(System.Byte[],System.Int32,System.Int32,System.Int16[],System.Int32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconCodec_trim_i16_encode_mC7165A839B41BB09CE9D0DD702A83279EE31359D (FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outarrsrc0, int32_t ___outarr1, int32_t ___max_out_len2, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___xsrc3, int32_t ___x4, uint32_t ___logn5, uint32_t ___bits6, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	{
		uint32_t L_0 = ___logn5;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		uint32_t L_1 = ___bits6;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1))&((int32_t)31))))), 1));
		int32_t L_2 = V_4;
		V_3 = ((-L_2));
		V_1 = 0;
		goto IL_0038;
	}

IL_001d:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = ___xsrc3;
		int32_t L_4 = ___x4;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int16_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_3;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0032;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = ___xsrc3;
		int32_t L_10 = ___x4;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		int16_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = V_4;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_0034;
		}
	}

IL_0032:
	{
		return 0;
	}

IL_0034:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0038:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_18 = V_0;
		uint32_t L_19 = ___bits6;
		V_2 = ((int32_t)(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_18), ((int64_t)(uint64_t)L_19))), ((int64_t)7))))>>3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___outarrsrc0;
		if (L_20)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_21 = V_2;
		return L_21;
	}

IL_004e:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = ___max_out_len2;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_0054;
		}
	}
	{
		return 0;
	}

IL_0054:
	{
		int32_t L_24 = ___outarr1;
		V_5 = L_24;
		V_6 = 0;
		V_8 = 0;
		uint32_t L_25 = ___bits6;
		V_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)((int32_t)L_25&((int32_t)31))))), 1));
		V_1 = 0;
		goto IL_00ac;
	}

IL_006c:
	{
		uint32_t L_26 = V_6;
		uint32_t L_27 = ___bits6;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_28 = ___xsrc3;
		int32_t L_29 = ___x4;
		int32_t L_30 = V_1;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		int16_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		uint32_t L_33 = V_7;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_26<<((int32_t)((int32_t)L_27&((int32_t)31)))))|((int32_t)(((int32_t)(uint16_t)L_32)&(int32_t)L_33))));
		uint32_t L_34 = V_8;
		uint32_t L_35 = ___bits6;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35));
		goto IL_00a3;
	}

IL_008b:
	{
		uint32_t L_36 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___outarrsrc0;
		int32_t L_38 = V_5;
		int32_t L_39 = L_38;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		uint32_t L_40 = V_6;
		uint32_t L_41 = V_8;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_40>>((int32_t)((int32_t)L_41&((int32_t)31)))))));
	}

IL_00a3:
	{
		uint32_t L_42 = V_8;
		if ((!(((uint32_t)L_42) < ((uint32_t)8))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00ac:
	{
		int32_t L_44 = V_1;
		int32_t L_45 = V_0;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_46 = V_8;
		if ((!(((uint32_t)L_46) > ((uint32_t)0))))
		{
			goto IL_00c9;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___outarrsrc0;
		int32_t L_48 = V_5;
		int32_t L_49 = L_48;
		V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		uint32_t L_50 = V_6;
		uint32_t L_51 = V_8;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_50<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, (int32_t)L_51))&((int32_t)31)))))));
	}

IL_00c9:
	{
		int32_t L_52 = V_2;
		return L_52;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec::trim_i16_decode(System.Int16[],System.Int32,System.UInt32,System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconCodec_trim_i16_decode_mAA4C3AB14FC0C58C1ED06E566C8BA065ABF992AE (FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___xsrc0, int32_t ___x1, uint32_t ___logn2, uint32_t ___bits3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inarrsrc4, int32_t ___inarr5, int32_t ___max_in_len6, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	{
		uint32_t L_0 = ___logn2;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		int32_t L_1 = V_0;
		uint32_t L_2 = ___bits3;
		V_1 = ((int32_t)(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)(uint64_t)L_2))), ((int64_t)7))))>>3));
		int32_t L_3 = V_1;
		int32_t L_4 = ___max_in_len6;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}

IL_001b:
	{
		int32_t L_5 = ___inarr5;
		V_2 = L_5;
		V_3 = 0;
		V_4 = 0;
		V_7 = 0;
		uint32_t L_6 = ___bits3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)((int32_t)L_6&((int32_t)31))))), 1));
		uint32_t L_7 = ___bits3;
		V_6 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 1))&((int32_t)31)))));
		goto IL_00b2;
	}

IL_003e:
	{
		uint32_t L_8 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___inarrsrc4;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = ((int32_t)(((int32_t)((int32_t)L_8<<8))|(int32_t)L_13));
		uint32_t L_14 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, 8));
		goto IL_00a8;
	}

IL_0055:
	{
		uint32_t L_15 = V_7;
		uint32_t L_16 = ___bits3;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16));
		uint32_t L_17 = V_4;
		uint32_t L_18 = V_7;
		uint32_t L_19 = V_5;
		V_8 = ((int32_t)(((int32_t)((uint32_t)L_17>>((int32_t)((int32_t)L_18&((int32_t)31)))))&(int32_t)L_19));
		uint32_t L_20 = V_8;
		uint32_t L_21 = V_8;
		uint32_t L_22 = V_6;
		V_8 = ((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)L_20)|((-((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_21&(int32_t)L_22)))))))));
		uint32_t L_23 = V_8;
		uint32_t L_24 = V_8;
		uint32_t L_25 = V_6;
		V_8 = ((int32_t)((int32_t)L_23|((int32_t)(uint32_t)((-((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_24&(int32_t)L_25)))))))));
		uint32_t L_26 = V_8;
		uint32_t L_27 = V_6;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_26)) == ((uint64_t)((-((int64_t)(uint64_t)L_27)))))))
		{
			goto IL_008f;
		}
	}
	{
		return 0;
	}

IL_008f:
	{
		uint32_t L_28 = V_8;
		uint32_t L_29 = V_8;
		uint32_t L_30 = V_6;
		V_8 = ((int32_t)((int32_t)L_28|((int32_t)(uint32_t)((-((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_29&(int32_t)L_30)))))))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_31 = ___xsrc0;
		int32_t L_32 = ___x1;
		int32_t L_33 = V_3;
		uint32_t L_34 = V_8;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_32, L_33))), (int16_t)((int16_t)L_34));
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00a8:
	{
		uint32_t L_36 = V_7;
		uint32_t L_37 = ___bits3;
		if ((!(((uint32_t)L_36) >= ((uint32_t)L_37))))
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_38 = V_3;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0055;
		}
	}

IL_00b2:
	{
		int32_t L_40 = V_3;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_42 = V_4;
		uint32_t L_43 = V_7;
		if (!((int32_t)((int32_t)L_42&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)((int32_t)L_43&((int32_t)31))))), 1)))))
		{
			goto IL_00c6;
		}
	}
	{
		return 0;
	}

IL_00c6:
	{
		int32_t L_44 = V_1;
		return L_44;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec::trim_i8_encode(System.Byte[],System.Int32,System.Int32,System.SByte[],System.Int32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconCodec_trim_i8_encode_m60BD21ADC9D013CFE30E63FCCFE48E7733C6ADA6 (FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outarrsrc0, int32_t ___outarr1, int32_t ___max_out_len2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___xsrc3, int32_t ___x4, uint32_t ___logn5, uint32_t ___bits6, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	{
		uint32_t L_0 = ___logn5;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		uint32_t L_1 = ___bits6;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1))&((int32_t)31))))), 1));
		int32_t L_2 = V_4;
		V_3 = ((-L_2));
		V_1 = 0;
		goto IL_0038;
	}

IL_001d:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = ___xsrc3;
		int32_t L_4 = ___x4;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int8_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_3;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0032;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = ___xsrc3;
		int32_t L_10 = ___x4;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		int8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = V_4;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_0034;
		}
	}

IL_0032:
	{
		return 0;
	}

IL_0034:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0038:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_18 = V_0;
		uint32_t L_19 = ___bits6;
		V_2 = ((int32_t)(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_18), ((int64_t)(uint64_t)L_19))), ((int64_t)7))))>>3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___outarrsrc0;
		if (L_20)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_21 = V_2;
		return L_21;
	}

IL_004e:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = ___max_out_len2;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_0054;
		}
	}
	{
		return 0;
	}

IL_0054:
	{
		int32_t L_24 = ___outarr1;
		V_5 = L_24;
		V_6 = 0;
		V_8 = 0;
		uint32_t L_25 = ___bits6;
		V_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)((int32_t)L_25&((int32_t)31))))), 1));
		V_1 = 0;
		goto IL_00ac;
	}

IL_006c:
	{
		uint32_t L_26 = V_6;
		uint32_t L_27 = ___bits6;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_28 = ___xsrc3;
		int32_t L_29 = ___x4;
		int32_t L_30 = V_1;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		int8_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		uint32_t L_33 = V_7;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_26<<((int32_t)((int32_t)L_27&((int32_t)31)))))|((int32_t)(((int32_t)(uint8_t)L_32)&(int32_t)L_33))));
		uint32_t L_34 = V_8;
		uint32_t L_35 = ___bits6;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35));
		goto IL_00a3;
	}

IL_008b:
	{
		uint32_t L_36 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___outarrsrc0;
		int32_t L_38 = V_5;
		int32_t L_39 = L_38;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		uint32_t L_40 = V_6;
		uint32_t L_41 = V_8;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_40>>((int32_t)((int32_t)L_41&((int32_t)31)))))));
	}

IL_00a3:
	{
		uint32_t L_42 = V_8;
		if ((!(((uint32_t)L_42) < ((uint32_t)8))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00ac:
	{
		int32_t L_44 = V_1;
		int32_t L_45 = V_0;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_46 = V_8;
		if ((!(((uint32_t)L_46) > ((uint32_t)0))))
		{
			goto IL_00c9;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___outarrsrc0;
		int32_t L_48 = V_5;
		int32_t L_49 = L_48;
		V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		uint32_t L_50 = V_6;
		uint32_t L_51 = V_8;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_50<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, (int32_t)L_51))&((int32_t)31)))))));
	}

IL_00c9:
	{
		int32_t L_52 = V_2;
		return L_52;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec::trim_i8_decode(System.SByte[],System.Int32,System.UInt32,System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconCodec_trim_i8_decode_m402212C35199C2943A3F2D6846F66E13ECC2B54D (FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___xsrc0, int32_t ___x1, uint32_t ___logn2, uint32_t ___bits3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inarrsrc4, int32_t ___inarr5, int32_t ___max_in_len6, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	{
		uint32_t L_0 = ___logn2;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		int32_t L_1 = V_0;
		uint32_t L_2 = ___bits3;
		V_1 = ((int32_t)(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)(uint64_t)L_2))), ((int64_t)7))))>>3));
		int32_t L_3 = V_1;
		int32_t L_4 = ___max_in_len6;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}

IL_001b:
	{
		int32_t L_5 = ___inarr5;
		V_2 = L_5;
		V_3 = 0;
		V_4 = 0;
		V_7 = 0;
		uint32_t L_6 = ___bits3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)((int32_t)L_6&((int32_t)31))))), 1));
		uint32_t L_7 = ___bits3;
		V_6 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 1))&((int32_t)31)))));
		goto IL_0097;
	}

IL_003e:
	{
		uint32_t L_8 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___inarrsrc4;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = ((int32_t)(((int32_t)((int32_t)L_8<<8))|(int32_t)L_13));
		uint32_t L_14 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, 8));
		goto IL_008d;
	}

IL_0055:
	{
		uint32_t L_15 = V_7;
		uint32_t L_16 = ___bits3;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16));
		uint32_t L_17 = V_4;
		uint32_t L_18 = V_7;
		uint32_t L_19 = V_5;
		V_8 = ((int32_t)(((int32_t)((uint32_t)L_17>>((int32_t)((int32_t)L_18&((int32_t)31)))))&(int32_t)L_19));
		uint32_t L_20 = V_8;
		uint32_t L_21 = V_8;
		uint32_t L_22 = V_6;
		V_8 = ((int32_t)((int32_t)L_20|((int32_t)(uint32_t)((-((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_21&(int32_t)L_22)))))))));
		uint32_t L_23 = V_8;
		uint32_t L_24 = V_6;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_23)) == ((uint64_t)((-((int64_t)(uint64_t)L_24)))))))
		{
			goto IL_0081;
		}
	}
	{
		return 0;
	}

IL_0081:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_25 = ___xsrc0;
		int32_t L_26 = ___x1;
		int32_t L_27 = V_3;
		uint32_t L_28 = V_8;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, L_27))), (int8_t)((int8_t)L_28));
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_008d:
	{
		uint32_t L_30 = V_7;
		uint32_t L_31 = ___bits3;
		if ((!(((uint32_t)L_30) >= ((uint32_t)L_31))))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_0;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0055;
		}
	}

IL_0097:
	{
		int32_t L_34 = V_3;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_36 = V_4;
		uint32_t L_37 = V_7;
		if (!((int32_t)((int32_t)L_36&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)((int32_t)L_37&((int32_t)31))))), 1)))))
		{
			goto IL_00ab;
		}
	}
	{
		return 0;
	}

IL_00ab:
	{
		int32_t L_38 = V_1;
		return L_38;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec::comp_encode(System.Byte[],System.Int32,System.Int32,System.Int16[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconCodec_comp_encode_mC1D2D6494F7452C84572485CEE0662013B172E0B (FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outarrsrc0, int32_t ___outarr1, int32_t ___max_out_len2, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___xsrc3, int32_t ___x4, uint32_t ___logn5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	{
		uint32_t L_0 = ___logn5;
		V_1 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		int32_t L_1 = ___outarr1;
		V_0 = L_1;
		V_2 = 0;
		goto IL_0030;
	}

IL_000e:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ___xsrc3;
		int32_t L_3 = ___x4;
		int32_t L_4 = V_2;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		int16_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((((int32_t)L_6) < ((int32_t)((int32_t)-2047))))
		{
			goto IL_002a;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___xsrc3;
		int32_t L_8 = ___x4;
		int32_t L_9 = V_2;
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		int16_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)2047))))
		{
			goto IL_002c;
		}
	}

IL_002a:
	{
		return 0;
	}

IL_002c:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0030:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		V_4 = 0;
		V_5 = 0;
		V_3 = 0;
		V_2 = 0;
		goto IL_00c9;
	}

IL_0043:
	{
		uint32_t L_15 = V_4;
		V_4 = ((int32_t)((int32_t)L_15<<1));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_16 = ___xsrc3;
		int32_t L_17 = ___x4;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		int16_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		int32_t L_21 = V_6;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_22 = V_6;
		V_6 = ((-L_22));
		uint32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23|1));
	}

IL_0062:
	{
		int32_t L_24 = V_6;
		V_7 = L_24;
		uint32_t L_25 = V_4;
		V_4 = ((int32_t)((int32_t)L_25<<7));
		uint32_t L_26 = V_4;
		uint32_t L_27 = V_7;
		V_4 = ((int32_t)((int32_t)L_26|((int32_t)((int32_t)L_27&((int32_t)127)))));
		uint32_t L_28 = V_7;
		V_7 = ((int32_t)((uint32_t)L_28>>7));
		uint32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, 8));
		uint32_t L_30 = V_4;
		uint32_t L_31 = V_7;
		V_4 = ((int32_t)((int32_t)L_30<<((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_31, 1))&((int32_t)31)))));
		uint32_t L_32 = V_4;
		V_4 = ((int32_t)((int32_t)L_32|1));
		uint32_t L_33 = V_5;
		uint32_t L_34 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_34, 1))));
		goto IL_00c0;
	}

IL_009f:
	{
		uint32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___outarrsrc0;
		if (!L_36)
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_37 = V_3;
		int32_t L_38 = ___max_out_len2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_00ae;
		}
	}
	{
		return 0;
	}

IL_00ae:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___outarrsrc0;
		int32_t L_40 = V_0;
		int32_t L_41 = V_3;
		uint32_t L_42 = V_4;
		uint32_t L_43 = V_5;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_40, L_41))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_42>>((int32_t)((int32_t)L_43&((int32_t)31)))))));
	}

IL_00bc:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00c0:
	{
		uint32_t L_45 = V_5;
		if ((!(((uint32_t)L_45) < ((uint32_t)8))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c9:
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_1;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_0043;
		}
	}
	{
		uint32_t L_49 = V_5;
		if ((!(((uint32_t)L_49) > ((uint32_t)0))))
		{
			goto IL_00f2;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___outarrsrc0;
		if (!L_50)
		{
			goto IL_00ee;
		}
	}
	{
		int32_t L_51 = V_3;
		int32_t L_52 = ___max_out_len2;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_00de;
		}
	}
	{
		return 0;
	}

IL_00de:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___outarrsrc0;
		int32_t L_54 = V_0;
		int32_t L_55 = V_3;
		uint32_t L_56 = V_4;
		uint32_t L_57 = V_5;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_54, L_55))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_56<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, (int32_t)L_57))&((int32_t)31)))))));
	}

IL_00ee:
	{
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_00f2:
	{
		int32_t L_59 = V_3;
		return L_59;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec::comp_decode(System.Int16[],System.Int32,System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconCodec_comp_decode_mCA4FD1F10F81C118A1204F8C32F86C49899DD313 (FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___xsrc0, int32_t ___x1, uint32_t ___logn2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inarrsrc3, int32_t ___inarr4, int32_t ___max_in_len5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t G_B16_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B16_1 = NULL;
	int32_t G_B15_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B15_1 = NULL;
	uint32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B17_2 = NULL;
	{
		uint32_t L_0 = ___logn2;
		V_1 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		int32_t L_1 = ___inarr4;
		V_0 = L_1;
		V_4 = 0;
		V_5 = 0;
		V_3 = 0;
		V_2 = 0;
		goto IL_00ac;
	}

IL_0019:
	{
		int32_t L_2 = V_3;
		int32_t L_3 = ___max_in_len5;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		return 0;
	}

IL_0020:
	{
		uint32_t L_4 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___inarrsrc3;
		int32_t L_6 = V_0;
		int32_t L_7 = V_3;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = ((int32_t)(((int32_t)((int32_t)L_4<<8))|(int32_t)L_9));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		uint32_t L_11 = V_4;
		uint32_t L_12 = V_5;
		int32_t L_13 = ((int32_t)((uint32_t)L_11>>((int32_t)((int32_t)L_12&((int32_t)31)))));
		V_6 = ((int32_t)(L_13&((int32_t)128)));
		V_7 = ((int32_t)(L_13&((int32_t)127)));
	}

IL_0047:
	{
		uint32_t L_14 = V_5;
		if (L_14)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_15 = V_3;
		int32_t L_16 = ___max_in_len5;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0052;
		}
	}
	{
		return 0;
	}

IL_0052:
	{
		uint32_t L_17 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___inarrsrc3;
		int32_t L_19 = V_0;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		uint8_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_4 = ((int32_t)(((int32_t)((int32_t)L_17<<8))|(int32_t)L_22));
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		V_5 = 8;
	}

IL_0066:
	{
		uint32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, 1));
		uint32_t L_25 = V_4;
		uint32_t L_26 = V_5;
		if (((int32_t)(((int32_t)((uint32_t)L_25>>((int32_t)((int32_t)L_26&((int32_t)31)))))&1)))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, ((int32_t)128)));
		uint32_t L_28 = V_7;
		if ((!(((uint32_t)L_28) > ((uint32_t)((int32_t)2047)))))
		{
			goto IL_0047;
		}
	}
	{
		return 0;
	}

IL_008d:
	{
		uint32_t L_29 = V_6;
		if (!L_29)
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_30 = V_7;
		if (L_30)
		{
			goto IL_0097;
		}
	}
	{
		return 0;
	}

IL_0097:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_31 = ___xsrc0;
		int32_t L_32 = ___x1;
		int32_t L_33 = V_2;
		uint32_t L_34 = V_6;
		G_B15_0 = ((int32_t)il2cpp_codegen_add(L_32, L_33));
		G_B15_1 = L_31;
		if (L_34)
		{
			G_B16_0 = ((int32_t)il2cpp_codegen_add(L_32, L_33));
			G_B16_1 = L_31;
			goto IL_00a3;
		}
	}
	{
		uint32_t L_35 = V_7;
		G_B17_0 = L_35;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		goto IL_00a6;
	}

IL_00a3:
	{
		uint32_t L_36 = V_7;
		G_B17_0 = ((-((int32_t)L_36)));
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
	}

IL_00a6:
	{
		NullCheck(G_B17_2);
		(G_B17_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B17_1), (int16_t)((int16_t)G_B17_0));
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ac:
	{
		int32_t L_38 = V_2;
		int32_t L_39 = V_1;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0019;
		}
	}
	{
		uint32_t L_40 = V_4;
		uint32_t L_41 = V_5;
		if (!((int32_t)((int32_t)L_40&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)((int32_t)L_41&((int32_t)31))))), 1)))))
		{
			goto IL_00c3;
		}
	}
	{
		return 0;
	}

IL_00c3:
	{
		int32_t L_42 = V_3;
		return L_42;
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCommon::hash_to_point_vartime(Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256,System.UInt16[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconCommon_hash_to_point_vartime_m86159EE95A611024AC4D105DBB2F9F7016AED287 (FalconCommon_tEFDB4AD001D50E5699C7BB07A21300E78EFE1CB9* __this, SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* ___sc0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___xsrc1, int32_t ___x2, uint32_t ___logn3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		uint32_t L_0 = ___logn3;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		goto IL_004c;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_1;
		SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* L_2 = ___sc0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_2);
		SHAKE256_i_shake256_extract_m7989D33EFD07984A599C6ECC1E439B4844D9318E(L_2, L_3, 0, 2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = 1;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = ((int32_t)(((int32_t)((int32_t)L_6<<8))|(int32_t)L_9));
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) < ((uint32_t)((int32_t)61445)))))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0036;
	}

IL_002e:
	{
		uint32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, ((int32_t)12289)));
	}

IL_0036:
	{
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) < ((uint32_t)((int32_t)12289)))))
		{
			goto IL_002e;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_13 = ___xsrc1;
		int32_t L_14 = ___x2;
		int32_t L_15 = L_14;
		___x2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_16 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint16_t)((int32_t)(uint16_t)L_16));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_004c:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Boolean Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCommon::is_short(System.Int16[],System.Int32,System.Int16[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FalconCommon_is_short_mB4D1AA3CDF528665DF10BBF508A95004CF729253 (FalconCommon_tEFDB4AD001D50E5699C7BB07A21300E78EFE1CB9* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___s1src0, int32_t ___s11, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___s2src2, int32_t ___s23, uint32_t ___logn4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		uint32_t L_0 = ___logn4;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		V_2 = 0;
		V_3 = 0;
		V_1 = 0;
		goto IL_003b;
	}

IL_0010:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ___s1src0;
		int32_t L_2 = ___s11;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		int16_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_4 = L_5;
		uint32_t L_6 = V_2;
		int32_t L_7 = V_4;
		int32_t L_8 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)il2cpp_codegen_multiply(L_7, L_8))));
		uint32_t L_9 = V_3;
		uint32_t L_10 = V_2;
		V_3 = ((int32_t)((int32_t)L_9|(int32_t)L_10));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = ___s2src2;
		int32_t L_12 = ___s23;
		int32_t L_13 = V_1;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		int16_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		uint32_t L_16 = V_2;
		int32_t L_17 = V_4;
		int32_t L_18 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, ((int32_t)il2cpp_codegen_multiply(L_17, L_18))));
		uint32_t L_19 = V_3;
		uint32_t L_20 = V_2;
		V_3 = ((int32_t)((int32_t)L_19|(int32_t)L_20));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_003b:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0010;
		}
	}
	{
		uint32_t L_24 = V_2;
		uint32_t L_25 = V_3;
		V_2 = ((int32_t)((int32_t)L_24|((int32_t)(uint32_t)((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_25>>((int32_t)31))))))))));
		uint32_t L_26 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = __this->___l2bound_0;
		uint32_t L_28 = ___logn4;
		NullCheck(L_27);
		uint32_t L_29 = L_28;
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		return (bool)((((int32_t)((!(((uint32_t)L_26) <= ((uint32_t)L_30)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCommon::is_short_half(System.UInt32,System.Int16[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FalconCommon_is_short_half_m25A6DD582D9A0C0597C02BF462820B706DC31B2D (FalconCommon_tEFDB4AD001D50E5699C7BB07A21300E78EFE1CB9* __this, uint32_t ___sqn0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___s2src1, int32_t ___s22, uint32_t ___logn3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		uint32_t L_0 = ___logn3;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		uint32_t L_1 = ___sqn0;
		V_2 = ((int32_t)(uint32_t)((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_1>>((int32_t)31))))))));
		V_1 = 0;
		goto IL_0029;
	}

IL_0014:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ___s2src1;
		int32_t L_3 = ___s22;
		int32_t L_4 = V_1;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		int16_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		uint32_t L_7 = ___sqn0;
		int32_t L_8 = V_3;
		int32_t L_9 = V_3;
		___sqn0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, ((int32_t)il2cpp_codegen_multiply(L_8, L_9))));
		uint32_t L_10 = V_2;
		uint32_t L_11 = ___sqn0;
		V_2 = ((int32_t)((int32_t)L_10|(int32_t)L_11));
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0029:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0014;
		}
	}
	{
		uint32_t L_15 = ___sqn0;
		uint32_t L_16 = V_2;
		___sqn0 = ((int32_t)((int32_t)L_15|((int32_t)(uint32_t)((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_16>>((int32_t)31))))))))));
		uint32_t L_17 = ___sqn0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->___l2bound_0;
		uint32_t L_19 = ___logn3;
		NullCheck(L_18);
		uint32_t L_20 = L_19;
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		return (bool)((((int32_t)((!(((uint32_t)L_17) <= ((uint32_t)L_21)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCommon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconCommon__ctor_mDED05E204F7EEF50B302759897A5C563937BE112 (FalconCommon_tEFDB4AD001D50E5699C7BB07A21300E78EFE1CB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____1691A129931FB25BD1A6B61962B1BC2DBF4A35C6D0F66CAFB00E7D325A043AFD_34_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____1691A129931FB25BD1A6B61962B1BC2DBF4A35C6D0F66CAFB00E7D325A043AFD_34_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		__this->___l2bound_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___l2bound_0), (void*)L_1);
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconConversions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconConversions__ctor_m7E2E73D27A99E0D215A8E4FD8B870642C4FCD67C (FalconConversions_t9071D8FA0C7EAC3B74E8ADCB2C01E884C5B6A94B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconConversions::int_to_bytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FalconConversions_int_to_bytes_m8A3B89B600EE27E8B1DFD284C560BE237F2055C8 (FalconConversions_t9071D8FA0C7EAC3B74E8ADCB2C01E884C5B6A94B* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		int32_t L_2 = ___x0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_1;
		int32_t L_4 = ___x0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_4>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_3;
		int32_t L_6 = ___x0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_6>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_5;
		int32_t L_8 = ___x0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_8>>((int32_t)24)))));
		return L_7;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconConversions::bytes_to_uint(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconConversions_bytes_to_uint_mC0A927E4DDA9F097CDBF6225CFD8DF6823E5CD9A (FalconConversions_t9071D8FA0C7EAC3B74E8ADCB2C01E884C5B6A94B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___pos1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___src0;
		int32_t L_1 = ___pos1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___src0;
		int32_t L_5 = ___pos1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___src0;
		int32_t L_9 = ___pos1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___src0;
		int32_t L_13 = ___pos1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_7<<8))))|((int32_t)((int32_t)L_11<<((int32_t)16)))))|((int32_t)((int32_t)L_15<<((int32_t)24)))));
	}
}
// System.Byte[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconConversions::ulong_to_bytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FalconConversions_ulong_to_bytes_mB15941373F85F9979C76B34619B347087E3F6BC3 (FalconConversions_t9071D8FA0C7EAC3B74E8ADCB2C01E884C5B6A94B* __this, uint64_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint64_t L_2 = ___x0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_1;
		uint64_t L_4 = ___x0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_4>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_3;
		uint64_t L_6 = ___x0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_6>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_5;
		uint64_t L_8 = ___x0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_8>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_7;
		uint64_t L_10 = ___x0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_10>>((int32_t)32)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_9;
		uint64_t L_12 = ___x0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_12>>((int32_t)40)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_11;
		uint64_t L_14 = ___x0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_14>>((int32_t)48)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_13;
		uint64_t L_16 = ___x0;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_16>>((int32_t)56)))));
		return L_15;
	}
}
// System.UInt64 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconConversions::bytes_to_ulong(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FalconConversions_bytes_to_ulong_m497C7BC5FCB1DFEB414276AC61051B91BE8E8AD0 (FalconConversions_t9071D8FA0C7EAC3B74E8ADCB2C01E884C5B6A94B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___pos1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___src0;
		int32_t L_1 = ___pos1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___src0;
		int32_t L_5 = ___pos1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___src0;
		int32_t L_9 = ___pos1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___src0;
		int32_t L_13 = ___pos1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___src0;
		int32_t L_17 = ___pos1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___src0;
		int32_t L_21 = ___pos1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___src0;
		int32_t L_25 = ___pos1;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___src0;
		int32_t L_29 = ___pos1;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 7));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_3)|((int64_t)(((int64_t)(uint64_t)L_7)<<8))))|((int64_t)(((int64_t)(uint64_t)L_11)<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)L_15)<<((int32_t)24)))))|((int64_t)(((int64_t)(uint64_t)L_19)<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)L_23)<<((int32_t)40)))))|((int64_t)(((int64_t)(uint64_t)L_27)<<((int32_t)48)))))|((int64_t)(((int64_t)(uint64_t)L_31)<<((int32_t)56)))));
	}
}
// System.UInt32[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconConversions::bytes_to_uint_array(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* FalconConversions_bytes_to_uint_array_m14ED112E3EA71BB6E138B318CFB47260BD8C6496 (FalconConversions_t9071D8FA0C7EAC3B74E8ADCB2C01E884C5B6A94B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___pos1, int32_t ___num2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___num2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001e;
	}

IL_000b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___src0;
		int32_t L_5 = ___pos1;
		int32_t L_6 = V_1;
		uint32_t L_7;
		L_7 = FalconConversions_bytes_to_uint_mC0A927E4DDA9F097CDBF6225CFD8DF6823E5CD9A(__this, L_4, ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)il2cpp_codegen_multiply(4, L_6)))), NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = ___num2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		return L_11;
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT__ctor_mDFB34FFF9500E004BEFDCA23A9126FAC9DE1192F (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_0 = (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796*)il2cpp_codegen_object_new(FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FprEngine__ctor_mE6E0E995655AE8844C7233074F31C9E8D94F4BB6(L_0, NULL);
		__this->___fpre_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fpre_0), (void*)L_0);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::.ctor(Org.BouncyCastle.Pqc.Crypto.Falcon.FprEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT__ctor_m8ED2C1B9E18FE2120AB4D9B69232AAA39A4A57CA (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* ___fprengine0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_0 = ___fprengine0;
		__this->___fpre_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fpre_0), (void*)L_0);
		return;
	}
}
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::FPC_ADD(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* FalconFFT_FPC_ADD_mB82B3CD699DA185FAE3031E44D2BCC03432FEF87 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_re0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_im1, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_re2, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_im3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_0;
	memset((&V_0), 0, sizeof(V_0));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_0 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_1 = ___a_re0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_2 = ___b_re2;
		NullCheck(L_0);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_3;
		L_3 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_4 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_5 = ___a_im1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_6 = ___b_im3;
		NullCheck(L_4);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_7;
		L_7 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_8 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)2);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_9 = L_8;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_10 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_10);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_11 = L_9;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_12 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_12);
		return L_11;
	}
}
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::FPC_SUB(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* FalconFFT_FPC_SUB_m1C617491749509F1209F7258DB46E2A63FCC0E5F (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_re0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_im1, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_re2, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_im3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_0;
	memset((&V_0), 0, sizeof(V_0));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_0 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_1 = ___a_re0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_2 = ___b_re2;
		NullCheck(L_0);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_3;
		L_3 = FprEngine_fpr_sub_mB6D81D4DA5EEB30E7E91945015E70874378C3A66(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_4 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_5 = ___a_im1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_6 = ___b_im3;
		NullCheck(L_4);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_7;
		L_7 = FprEngine_fpr_sub_mB6D81D4DA5EEB30E7E91945015E70874378C3A66(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_8 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)2);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_9 = L_8;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_10 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_10);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_11 = L_9;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_12 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_12);
		return L_11;
	}
}
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::FPC_MUL(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* FalconFFT_FPC_MUL_mF3FFC41890CDFC01BDCE77A91F67FE9B5337D590 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_re0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_im1, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_re2, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_im3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_0;
	memset((&V_0), 0, sizeof(V_0));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_1;
	memset((&V_1), 0, sizeof(V_1));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_4;
	memset((&V_4), 0, sizeof(V_4));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_0 = ___a_re0;
		V_0 = L_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_1 = ___a_im1;
		V_1 = L_1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_2 = ___b_re2;
		V_2 = L_2;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_3 = ___b_im3;
		V_3 = L_3;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_4 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_5 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_6 = V_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_7 = V_2;
		NullCheck(L_5);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_8;
		L_8 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_5, L_6, L_7, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_9 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_10 = V_1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11 = V_3;
		NullCheck(L_9);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_12;
		L_12 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_9, L_10, L_11, NULL);
		NullCheck(L_4);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_13;
		L_13 = FprEngine_fpr_sub_mB6D81D4DA5EEB30E7E91945015E70874378C3A66(L_4, L_8, L_12, NULL);
		V_4 = L_13;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_14 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_15 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_16 = V_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_17 = V_3;
		NullCheck(L_15);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_18;
		L_18 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_15, L_16, L_17, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_19 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_20 = V_1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_21 = V_2;
		NullCheck(L_19);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_22;
		L_22 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_19, L_20, L_21, NULL);
		NullCheck(L_14);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_23;
		L_23 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_14, L_18, L_22, NULL);
		V_5 = L_23;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_24 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)2);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_25 = L_24;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_26 = V_4;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_26);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_27 = L_25;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_28 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_28);
		return L_27;
	}
}
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::FPC_SQR(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* FalconFFT_FPC_SQR_mBEEC658682CBEFD085FF8DE69369DF864EE50257 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___d_re0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___d_im1, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_re2, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_im3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_0;
	memset((&V_0), 0, sizeof(V_0));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_1;
	memset((&V_1), 0, sizeof(V_1));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_0 = ___a_re2;
		V_0 = L_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_1 = ___a_im3;
		V_1 = L_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_2 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_3 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_4 = V_0;
		NullCheck(L_3);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_5;
		L_5 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_3, L_4, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_6 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_7 = V_1;
		NullCheck(L_6);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_8;
		L_8 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_6, L_7, NULL);
		NullCheck(L_2);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_9;
		L_9 = FprEngine_fpr_sub_mB6D81D4DA5EEB30E7E91945015E70874378C3A66(L_2, L_5, L_8, NULL);
		V_2 = L_9;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_10 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_11 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_12 = V_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_13 = V_1;
		NullCheck(L_11);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_14;
		L_14 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_11, L_12, L_13, NULL);
		NullCheck(L_10);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_15;
		L_15 = FprEngine_fpr_double_mC82F7ACF56F2B18995D7D7BFE32C09306E583B92(L_10, L_14, NULL);
		V_3 = L_15;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_16 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)2);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_17 = L_16;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_18 = V_2;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_18);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_19 = L_17;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_20 = V_3;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_20);
		return L_19;
	}
}
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::FPC_INV(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* FalconFFT_FPC_INV_mC25289A07F53528C29A105D82FDD316C9481B955 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_re0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_im1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_0;
	memset((&V_0), 0, sizeof(V_0));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_1;
	memset((&V_1), 0, sizeof(V_1));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_0 = ___a_re0;
		V_0 = L_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_1 = ___a_im1;
		V_1 = L_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_2 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_3 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_4 = V_0;
		NullCheck(L_3);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_5;
		L_5 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_3, L_4, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_6 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_7 = V_1;
		NullCheck(L_6);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_8;
		L_8 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_6, L_7, NULL);
		NullCheck(L_2);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_9;
		L_9 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_2, L_5, L_8, NULL);
		V_4 = L_9;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_10 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11 = V_4;
		NullCheck(L_10);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_12;
		L_12 = FprEngine_fpr_inv_m3AF34CA7BDF942C63923FB4FA7EEDF8EC9B1A3AB(L_10, L_11, NULL);
		V_4 = L_12;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_13 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_14 = V_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_15 = V_4;
		NullCheck(L_13);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_16;
		L_16 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_13, L_14, L_15, NULL);
		V_2 = L_16;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_17 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_18 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_19 = V_1;
		NullCheck(L_18);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_20;
		L_20 = FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D(L_18, L_19, NULL);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_21 = V_4;
		NullCheck(L_17);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_22;
		L_22 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_17, L_20, L_21, NULL);
		V_3 = L_22;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_23 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)2);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_24 = L_23;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_25 = V_2;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_25);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_26 = L_24;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_27 = V_3;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_27);
		return L_26;
	}
}
// Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[] Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::FPC_DIV(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* FalconFFT_FPC_DIV_mA4E103421E0A0F1DE3A40887BA08353259E31708 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_re0, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___a_im1, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_re2, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___b_im3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_0;
	memset((&V_0), 0, sizeof(V_0));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_1;
	memset((&V_1), 0, sizeof(V_1));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_4;
	memset((&V_4), 0, sizeof(V_4));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_5;
	memset((&V_5), 0, sizeof(V_5));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_0 = ___a_re0;
		V_0 = L_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_1 = ___a_im1;
		V_1 = L_1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_2 = ___b_re2;
		V_2 = L_2;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_3 = ___b_im3;
		V_3 = L_3;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_4 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_5 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_6 = V_2;
		NullCheck(L_5);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_7;
		L_7 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_5, L_6, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_8 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_9 = V_3;
		NullCheck(L_8);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_10;
		L_10 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_8, L_9, NULL);
		NullCheck(L_4);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11;
		L_11 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_4, L_7, L_10, NULL);
		V_6 = L_11;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_12 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_13 = V_6;
		NullCheck(L_12);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_14;
		L_14 = FprEngine_fpr_inv_m3AF34CA7BDF942C63923FB4FA7EEDF8EC9B1A3AB(L_12, L_13, NULL);
		V_6 = L_14;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_15 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_16 = V_2;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_17 = V_6;
		NullCheck(L_15);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_18;
		L_18 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_15, L_16, L_17, NULL);
		V_2 = L_18;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_19 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_20 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_21 = V_3;
		NullCheck(L_20);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_22;
		L_22 = FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D(L_20, L_21, NULL);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_23 = V_6;
		NullCheck(L_19);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_24;
		L_24 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_19, L_22, L_23, NULL);
		V_3 = L_24;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_25 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_26 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_27 = V_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_28 = V_2;
		NullCheck(L_26);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_29;
		L_29 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_26, L_27, L_28, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_30 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_31 = V_1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_32 = V_3;
		NullCheck(L_30);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_33;
		L_33 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_30, L_31, L_32, NULL);
		NullCheck(L_25);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_34;
		L_34 = FprEngine_fpr_sub_mB6D81D4DA5EEB30E7E91945015E70874378C3A66(L_25, L_29, L_33, NULL);
		V_4 = L_34;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_35 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_36 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_37 = V_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_38 = V_3;
		NullCheck(L_36);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_39;
		L_39 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_36, L_37, L_38, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_40 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_41 = V_1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_42 = V_2;
		NullCheck(L_40);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_43;
		L_43 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_40, L_41, L_42, NULL);
		NullCheck(L_35);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_44;
		L_44 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_35, L_39, L_43, NULL);
		V_5 = L_44;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_45 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)2);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_46 = L_45;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_47 = V_4;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_47);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_48 = L_46;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_49 = V_5;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(1), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_49);
		return L_48;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::FFT(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___fsrc0, int32_t ___f1, uint32_t ___logn2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_11;
	memset((&V_11), 0, sizeof(V_11));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_12;
	memset((&V_12), 0, sizeof(V_12));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_14;
	memset((&V_14), 0, sizeof(V_14));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_15;
	memset((&V_15), 0, sizeof(V_15));
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_16 = NULL;
	{
		uint32_t L_0 = ___logn2;
		V_2 = ((int32_t)(((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))))>>1));
		int32_t L_1 = V_2;
		V_1 = L_1;
		V_0 = 1;
		V_3 = 2;
		goto IL_016a;
	}

IL_0014:
	{
		int32_t L_2 = V_1;
		V_4 = ((int32_t)(L_2>>1));
		int32_t L_3 = V_3;
		V_5 = ((int32_t)(L_3>>1));
		V_6 = 0;
		V_7 = 0;
		goto IL_0156;
	}

IL_0029:
	{
		int32_t L_4 = V_7;
		int32_t L_5 = V_4;
		V_9 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_6 = __this->___fpre_0;
		NullCheck(L_6);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_7 = L_6->___fpr_gm_tab_0;
		int32_t L_8 = V_3;
		int32_t L_9 = V_6;
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_8, L_9))<<1));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_10 = L_11;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_12 = __this->___fpre_0;
		NullCheck(L_12);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_13 = L_12->___fpr_gm_tab_0;
		int32_t L_14 = V_3;
		int32_t L_15 = V_6;
		NullCheck(L_13);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_add(L_14, L_15))<<1)), 1));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_11 = L_17;
		int32_t L_18 = V_7;
		V_8 = L_18;
		goto IL_0141;
	}

IL_006b:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_19 = ___fsrc0;
		int32_t L_20 = ___f1;
		int32_t L_21 = V_8;
		NullCheck(L_19);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_12 = L_23;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_24 = ___fsrc0;
		int32_t L_25 = ___f1;
		int32_t L_26 = V_8;
		int32_t L_27 = V_2;
		NullCheck(L_24);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_25, L_26)), L_27));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_29 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_13 = L_29;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_30 = ___fsrc0;
		int32_t L_31 = ___f1;
		int32_t L_32 = V_8;
		int32_t L_33 = V_4;
		NullCheck(L_30);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_31, L_32)), L_33));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_35 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_14 = L_35;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_36 = ___fsrc0;
		int32_t L_37 = ___f1;
		int32_t L_38 = V_8;
		int32_t L_39 = V_4;
		int32_t L_40 = V_2;
		NullCheck(L_36);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_37, L_38)), L_39)), L_40));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_42 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_15 = L_42;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_43 = V_14;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_44 = V_15;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_45 = V_10;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_46 = V_11;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_47;
		L_47 = FalconFFT_FPC_MUL_mF3FFC41890CDFC01BDCE77A91F67FE9B5337D590(__this, L_43, L_44, L_45, L_46, NULL);
		V_16 = L_47;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_48 = V_16;
		NullCheck(L_48);
		int32_t L_49 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_14 = L_50;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_51 = V_16;
		NullCheck(L_51);
		int32_t L_52 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_15 = L_53;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_54 = V_12;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_55 = V_13;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_56 = V_14;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_57 = V_15;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_58;
		L_58 = FalconFFT_FPC_ADD_mB82B3CD699DA185FAE3031E44D2BCC03432FEF87(__this, L_54, L_55, L_56, L_57, NULL);
		V_16 = L_58;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_59 = ___fsrc0;
		int32_t L_60 = ___f1;
		int32_t L_61 = V_8;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_62 = V_16;
		NullCheck(L_62);
		int32_t L_63 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_60, L_61))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_64);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_65 = ___fsrc0;
		int32_t L_66 = ___f1;
		int32_t L_67 = V_8;
		int32_t L_68 = V_2;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_69 = V_16;
		NullCheck(L_69);
		int32_t L_70 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_66, L_67)), L_68))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_71);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_72 = V_12;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_73 = V_13;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_74 = V_14;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_75 = V_15;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_76;
		L_76 = FalconFFT_FPC_SUB_m1C617491749509F1209F7258DB46E2A63FCC0E5F(__this, L_72, L_73, L_74, L_75, NULL);
		V_16 = L_76;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_77 = ___fsrc0;
		int32_t L_78 = ___f1;
		int32_t L_79 = V_8;
		int32_t L_80 = V_4;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_81 = V_16;
		NullCheck(L_81);
		int32_t L_82 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_78, L_79)), L_80))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_83);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_84 = ___fsrc0;
		int32_t L_85 = ___f1;
		int32_t L_86 = V_8;
		int32_t L_87 = V_4;
		int32_t L_88 = V_2;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_89 = V_16;
		NullCheck(L_89);
		int32_t L_90 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_85, L_86)), L_87)), L_88))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_91);
		int32_t L_92 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0141:
	{
		int32_t L_93 = V_8;
		int32_t L_94 = V_9;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_95 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_95, 1));
		int32_t L_96 = V_7;
		int32_t L_97 = V_1;
		V_7 = ((int32_t)il2cpp_codegen_add(L_96, L_97));
	}

IL_0156:
	{
		int32_t L_98 = V_6;
		int32_t L_99 = V_5;
		if ((((int32_t)L_98) < ((int32_t)L_99)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_100 = V_4;
		V_1 = L_100;
		uint32_t L_101 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, 1));
		int32_t L_102 = V_3;
		V_3 = ((int32_t)(L_102<<1));
	}

IL_016a:
	{
		uint32_t L_103 = V_0;
		uint32_t L_104 = ___logn2;
		if ((!(((uint32_t)L_103) >= ((uint32_t)L_104))))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::iFFT(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_iFFT_mC2AEDA0BE2CBCF043C45A2E9F9734843602E8BBB (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___fsrc0, int32_t ___f1, uint32_t ___logn2, const RuntimeMethod* method) 
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
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_11;
	memset((&V_11), 0, sizeof(V_11));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_12;
	memset((&V_12), 0, sizeof(V_12));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_14;
	memset((&V_14), 0, sizeof(V_14));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_15;
	memset((&V_15), 0, sizeof(V_15));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_16;
	memset((&V_16), 0, sizeof(V_16));
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_17 = NULL;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_18;
	memset((&V_18), 0, sizeof(V_18));
	{
		uint32_t L_0 = ___logn2;
		V_1 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		V_3 = 1;
		int32_t L_1 = V_1;
		V_4 = L_1;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)(L_2>>1));
		uint32_t L_3 = ___logn2;
		V_0 = L_3;
		goto IL_0176;
	}

IL_0017:
	{
		int32_t L_4 = V_4;
		V_5 = ((int32_t)(L_4>>1));
		int32_t L_5 = V_3;
		V_6 = ((int32_t)(L_5<<1));
		V_7 = 0;
		V_8 = 0;
		goto IL_0163;
	}

IL_002d:
	{
		int32_t L_6 = V_8;
		int32_t L_7 = V_3;
		V_10 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_8 = __this->___fpre_0;
		NullCheck(L_8);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_9 = L_8->___fpr_gm_tab_0;
		int32_t L_10 = V_5;
		int32_t L_11 = V_7;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_10, L_11))<<1));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_11 = L_13;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_14 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_15 = __this->___fpre_0;
		NullCheck(L_15);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_16 = L_15->___fpr_gm_tab_0;
		int32_t L_17 = V_5;
		int32_t L_18 = V_7;
		NullCheck(L_16);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_add(L_17, L_18))<<1)), 1));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_14);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_21;
		L_21 = FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D(L_14, L_20, NULL);
		V_12 = L_21;
		int32_t L_22 = V_8;
		V_9 = L_22;
		goto IL_014d;
	}

IL_007b:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_23 = ___fsrc0;
		int32_t L_24 = ___f1;
		int32_t L_25 = V_9;
		NullCheck(L_23);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_13 = L_27;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_28 = ___fsrc0;
		int32_t L_29 = ___f1;
		int32_t L_30 = V_9;
		int32_t L_31 = V_2;
		NullCheck(L_28);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), L_31));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_33 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_14 = L_33;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_34 = ___fsrc0;
		int32_t L_35 = ___f1;
		int32_t L_36 = V_9;
		int32_t L_37 = V_3;
		NullCheck(L_34);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_35, L_36)), L_37));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_39 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_15 = L_39;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_40 = ___fsrc0;
		int32_t L_41 = ___f1;
		int32_t L_42 = V_9;
		int32_t L_43 = V_3;
		int32_t L_44 = V_2;
		NullCheck(L_40);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_41, L_42)), L_43)), L_44));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_46 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_16 = L_46;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_47 = V_13;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_48 = V_14;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_49 = V_15;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_50 = V_16;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_51;
		L_51 = FalconFFT_FPC_ADD_mB82B3CD699DA185FAE3031E44D2BCC03432FEF87(__this, L_47, L_48, L_49, L_50, NULL);
		V_17 = L_51;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_52 = ___fsrc0;
		int32_t L_53 = ___f1;
		int32_t L_54 = V_9;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_55 = V_17;
		NullCheck(L_55);
		int32_t L_56 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_53, L_54))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_57);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_58 = ___fsrc0;
		int32_t L_59 = ___f1;
		int32_t L_60 = V_9;
		int32_t L_61 = V_2;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_62 = V_17;
		NullCheck(L_62);
		int32_t L_63 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_59, L_60)), L_61))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_64);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_65 = V_13;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_66 = V_14;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_67 = V_15;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_68 = V_16;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_69;
		L_69 = FalconFFT_FPC_SUB_m1C617491749509F1209F7258DB46E2A63FCC0E5F(__this, L_65, L_66, L_67, L_68, NULL);
		V_17 = L_69;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_70 = V_17;
		NullCheck(L_70);
		int32_t L_71 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_13 = L_72;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_73 = V_17;
		NullCheck(L_73);
		int32_t L_74 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_14 = L_75;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_76 = V_13;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_77 = V_14;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_78 = V_11;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_79 = V_12;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_80;
		L_80 = FalconFFT_FPC_MUL_mF3FFC41890CDFC01BDCE77A91F67FE9B5337D590(__this, L_76, L_77, L_78, L_79, NULL);
		V_17 = L_80;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_81 = ___fsrc0;
		int32_t L_82 = ___f1;
		int32_t L_83 = V_9;
		int32_t L_84 = V_3;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_85 = V_17;
		NullCheck(L_85);
		int32_t L_86 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_82, L_83)), L_84))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_87);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_88 = ___fsrc0;
		int32_t L_89 = ___f1;
		int32_t L_90 = V_9;
		int32_t L_91 = V_3;
		int32_t L_92 = V_2;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_93 = V_17;
		NullCheck(L_93);
		int32_t L_94 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_89, L_90)), L_91)), L_92))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_95);
		int32_t L_96 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_014d:
	{
		int32_t L_97 = V_9;
		int32_t L_98 = V_10;
		if ((((int32_t)L_97) < ((int32_t)L_98)))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_99 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		int32_t L_100 = V_8;
		int32_t L_101 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_100, L_101));
	}

IL_0163:
	{
		int32_t L_102 = V_8;
		int32_t L_103 = V_2;
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_104 = V_6;
		V_3 = L_104;
		int32_t L_105 = V_5;
		V_4 = L_105;
		int32_t L_106 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_106, 1));
	}

IL_0176:
	{
		int32_t L_107 = V_0;
		if ((((int32_t)L_107) > ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		uint32_t L_108 = ___logn2;
		if ((!(((uint32_t)L_108) > ((uint32_t)0))))
		{
			goto IL_01bf;
		}
	}
	{
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_109 = __this->___fpre_0;
		NullCheck(L_109);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_110 = L_109->___fpr_p2_tab_1;
		uint32_t L_111 = ___logn2;
		NullCheck(L_110);
		uint32_t L_112 = L_111;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_18 = L_113;
		V_0 = 0;
		goto IL_01bb;
	}

IL_0198:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_114 = ___fsrc0;
		int32_t L_115 = ___f1;
		int32_t L_116 = V_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_117 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_118 = ___fsrc0;
		int32_t L_119 = ___f1;
		int32_t L_120 = V_0;
		NullCheck(L_118);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_119, L_120));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_122 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_123 = V_18;
		NullCheck(L_117);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_124;
		L_124 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_117, L_122, L_123, NULL);
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_115, L_116))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_124);
		int32_t L_125 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_01bb:
	{
		int32_t L_126 = V_0;
		int32_t L_127 = V_1;
		if ((((int32_t)L_126) < ((int32_t)L_127)))
		{
			goto IL_0198;
		}
	}

IL_01bf:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_add(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_add_m62B50EBCD7036165E701DC6538F340560C0D5943 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc2, int32_t ___b3, uint32_t ___logn4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___logn4;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		V_1 = 0;
		goto IL_0037;
	}

IL_000c:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___asrc0;
		int32_t L_2 = ___a1;
		int32_t L_3 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_4 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_5 = ___asrc0;
		int32_t L_6 = ___a1;
		int32_t L_7 = V_1;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_10 = ___bsrc2;
		int32_t L_11 = ___b3;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_4);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_15;
		L_15 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_4, L_9, L_14, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_2, L_3))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_15);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0037:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_sub(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_sub_m0822D820FBBE7F74B282B342075BF58887457C23 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc2, int32_t ___b3, uint32_t ___logn4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___logn4;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		V_1 = 0;
		goto IL_0037;
	}

IL_000c:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___asrc0;
		int32_t L_2 = ___a1;
		int32_t L_3 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_4 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_5 = ___asrc0;
		int32_t L_6 = ___a1;
		int32_t L_7 = V_1;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_10 = ___bsrc2;
		int32_t L_11 = ___b3;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_4);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_15;
		L_15 = FprEngine_fpr_sub_mB6D81D4DA5EEB30E7E91945015E70874378C3A66(L_4, L_9, L_14, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_2, L_3))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_15);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0037:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_neg(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_neg_mC7B34F7737C89406A5897BCD52515395B4840E80 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, uint32_t ___logn2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___logn2;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		V_1 = 0;
		goto IL_002c;
	}

IL_000b:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___asrc0;
		int32_t L_2 = ___a1;
		int32_t L_3 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_4 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_5 = ___asrc0;
		int32_t L_6 = ___a1;
		int32_t L_7 = V_1;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_10;
		L_10 = FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D(L_4, L_9, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_2, L_3))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002c:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_adj_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_adj_fft_mA5CE00AB69D7431DFC350AB819CC71B90645B163 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, uint32_t ___logn2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___logn2;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1>>1));
		goto IL_002e;
	}

IL_000d:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_2 = ___asrc0;
		int32_t L_3 = ___a1;
		int32_t L_4 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_5 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_6 = ___asrc0;
		int32_t L_7 = ___a1;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11;
		L_11 = FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D(L_5, L_10, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_3, L_4))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_mul_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_mul_fft_mE10CFC18FB478674D4DE3F6EFF9080617F4B921C (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc2, int32_t ___b3, uint32_t ___logn4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_4;
	memset((&V_4), 0, sizeof(V_4));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_5;
	memset((&V_5), 0, sizeof(V_5));
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_6 = NULL;
	{
		uint32_t L_0 = ___logn4;
		V_0 = ((int32_t)(((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))))>>1));
		V_1 = 0;
		goto IL_0074;
	}

IL_000e:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___asrc0;
		int32_t L_2 = ___a1;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_6 = ___asrc0;
		int32_t L_7 = ___a1;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_12 = ___bsrc2;
		int32_t L_13 = ___b3;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_17 = ___bsrc2;
		int32_t L_18 = ___b3;
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		NullCheck(L_17);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_18, L_19)), L_20));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_22 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_23 = V_2;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_24 = V_3;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_25 = V_4;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_26 = V_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_27;
		L_27 = FalconFFT_FPC_MUL_mF3FFC41890CDFC01BDCE77A91F67FE9B5337D590(__this, L_23, L_24, L_25, L_26, NULL);
		V_6 = L_27;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_28 = ___asrc0;
		int32_t L_29 = ___a1;
		int32_t L_30 = V_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_31 = V_6;
		NullCheck(L_31);
		int32_t L_32 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, L_30))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_33);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_34 = ___asrc0;
		int32_t L_35 = ___a1;
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_38 = V_6;
		NullCheck(L_38);
		int32_t L_39 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_35, L_36)), L_37))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_40);
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0074:
	{
		int32_t L_42 = V_1;
		int32_t L_43 = V_0;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_muladj_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_muladj_fft_mB107B332EE9DFC0E71B0435EC0086DE80EAA7C72 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc2, int32_t ___b3, uint32_t ___logn4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_4;
	memset((&V_4), 0, sizeof(V_4));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_5;
	memset((&V_5), 0, sizeof(V_5));
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_6 = NULL;
	{
		uint32_t L_0 = ___logn4;
		V_0 = ((int32_t)(((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))))>>1));
		V_1 = 0;
		goto IL_007f;
	}

IL_000e:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___asrc0;
		int32_t L_2 = ___a1;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_6 = ___asrc0;
		int32_t L_7 = ___a1;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_12 = ___bsrc2;
		int32_t L_13 = ___b3;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_17 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_18 = ___bsrc2;
		int32_t L_19 = ___b3;
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		NullCheck(L_18);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_19, L_20)), L_21));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_23 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_24;
		L_24 = FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D(L_17, L_23, NULL);
		V_5 = L_24;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_25 = V_2;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_26 = V_3;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_27 = V_4;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_28 = V_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_29;
		L_29 = FalconFFT_FPC_MUL_mF3FFC41890CDFC01BDCE77A91F67FE9B5337D590(__this, L_25, L_26, L_27, L_28, NULL);
		V_6 = L_29;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_30 = ___asrc0;
		int32_t L_31 = ___a1;
		int32_t L_32 = V_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_33 = V_6;
		NullCheck(L_33);
		int32_t L_34 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_31, L_32))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_35);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_36 = ___asrc0;
		int32_t L_37 = ___a1;
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_40 = V_6;
		NullCheck(L_40);
		int32_t L_41 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_37, L_38)), L_39))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_42);
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_007f:
	{
		int32_t L_44 = V_1;
		int32_t L_45 = V_0;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_mulselfadj_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_mulselfadj_fft_mE5B8316A682C1535D2A7AE196BA404121EB22983 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, uint32_t ___logn2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		uint32_t L_0 = ___logn2;
		V_0 = ((int32_t)(((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))))>>1));
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___asrc0;
		int32_t L_2 = ___a1;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_6 = ___asrc0;
		int32_t L_7 = ___a1;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_12 = ___asrc0;
		int32_t L_13 = ___a1;
		int32_t L_14 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_15 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_16 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_17 = V_2;
		NullCheck(L_16);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_18;
		L_18 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_16, L_17, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_19 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_20 = V_3;
		NullCheck(L_19);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_21;
		L_21 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_19, L_20, NULL);
		NullCheck(L_15);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_22;
		L_22 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_15, L_18, L_21, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, L_14))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_22);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_23 = ___asrc0;
		int32_t L_24 = ___a1;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_27 = __this->___fpre_0;
		NullCheck(L_27);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_28 = L_27->___fpr_zero_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_24, L_25)), L_26))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_28);
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0069:
	{
		int32_t L_30 = V_1;
		int32_t L_31 = V_0;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_mulconst(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_mulconst_mF6BB1CE00CB5D7077F5489ED8E7F9B46B2ACB881 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE ___x2, uint32_t ___logn3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___logn3;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		V_1 = 0;
		goto IL_002e;
	}

IL_000c:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___asrc0;
		int32_t L_2 = ___a1;
		int32_t L_3 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_4 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_5 = ___asrc0;
		int32_t L_6 = ___a1;
		int32_t L_7 = V_1;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_10 = ___x2;
		NullCheck(L_4);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11;
		L_11 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_4, L_9, L_10, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_2, L_3))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_div_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_div_fft_m9A7E6EDB536302763643947EB33492447A3A8254 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc2, int32_t ___b3, uint32_t ___logn4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_4;
	memset((&V_4), 0, sizeof(V_4));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_5;
	memset((&V_5), 0, sizeof(V_5));
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_6 = NULL;
	{
		uint32_t L_0 = ___logn4;
		V_0 = ((int32_t)(((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))))>>1));
		V_1 = 0;
		goto IL_0074;
	}

IL_000e:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___asrc0;
		int32_t L_2 = ___a1;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_6 = ___asrc0;
		int32_t L_7 = ___a1;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_12 = ___bsrc2;
		int32_t L_13 = ___b3;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_17 = ___bsrc2;
		int32_t L_18 = ___b3;
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		NullCheck(L_17);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_18, L_19)), L_20));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_22 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_23 = V_2;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_24 = V_3;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_25 = V_4;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_26 = V_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_27;
		L_27 = FalconFFT_FPC_DIV_mA4E103421E0A0F1DE3A40887BA08353259E31708(__this, L_23, L_24, L_25, L_26, NULL);
		V_6 = L_27;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_28 = ___asrc0;
		int32_t L_29 = ___a1;
		int32_t L_30 = V_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_31 = V_6;
		NullCheck(L_31);
		int32_t L_32 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, L_30))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_33);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_34 = ___asrc0;
		int32_t L_35 = ___a1;
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_38 = V_6;
		NullCheck(L_38);
		int32_t L_39 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_35, L_36)), L_37))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_40);
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0074:
	{
		int32_t L_42 = V_1;
		int32_t L_43 = V_0;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_invnorm2_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_invnorm2_fft_mDF55588BAD67975250860E1437DCC4E7ECCE7043 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___dsrc0, int32_t ___d1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc2, int32_t ___a3, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc4, int32_t ___b5, uint32_t ___logn6, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_4;
	memset((&V_4), 0, sizeof(V_4));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		uint32_t L_0 = ___logn6;
		V_0 = ((int32_t)(((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))))>>1));
		V_1 = 0;
		goto IL_00b0;
	}

IL_0011:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___asrc2;
		int32_t L_2 = ___a3;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_6 = ___asrc2;
		int32_t L_7 = ___a3;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_12 = ___bsrc4;
		int32_t L_13 = ___b5;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_17 = ___bsrc4;
		int32_t L_18 = ___b5;
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		NullCheck(L_17);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_18, L_19)), L_20));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_22 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_23 = ___dsrc0;
		int32_t L_24 = ___d1;
		int32_t L_25 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_26 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_27 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_28 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_29 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_30 = V_2;
		NullCheck(L_29);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_31;
		L_31 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_29, L_30, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_32 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_33 = V_3;
		NullCheck(L_32);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_34;
		L_34 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_32, L_33, NULL);
		NullCheck(L_28);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_35;
		L_35 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_28, L_31, L_34, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_36 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_37 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_38 = V_4;
		NullCheck(L_37);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_39;
		L_39 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_37, L_38, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_40 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_41 = V_5;
		NullCheck(L_40);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_42;
		L_42 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_40, L_41, NULL);
		NullCheck(L_36);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_43;
		L_43 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_36, L_39, L_42, NULL);
		NullCheck(L_27);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_44;
		L_44 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_27, L_35, L_43, NULL);
		NullCheck(L_26);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_45;
		L_45 = FprEngine_fpr_inv_m3AF34CA7BDF942C63923FB4FA7EEDF8EC9B1A3AB(L_26, L_44, NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_45);
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00b0:
	{
		int32_t L_47 = V_1;
		int32_t L_48 = V_0;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_add_muladj_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_add_muladj_fft_m0B5E0560683C156FDC097CC42E7FDCEA4E3E87EF (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___dsrc0, int32_t ___d1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___Fsrc2, int32_t ___F3, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___Gsrc4, int32_t ___G5, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___fsrc6, int32_t ___f7, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___gsrc8, int32_t ___g9, uint32_t ___logn10, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_4;
	memset((&V_4), 0, sizeof(V_4));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_5;
	memset((&V_5), 0, sizeof(V_5));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_6;
	memset((&V_6), 0, sizeof(V_6));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_7;
	memset((&V_7), 0, sizeof(V_7));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_8;
	memset((&V_8), 0, sizeof(V_8));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_9;
	memset((&V_9), 0, sizeof(V_9));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_11;
	memset((&V_11), 0, sizeof(V_11));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_12;
	memset((&V_12), 0, sizeof(V_12));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		uint32_t L_0 = ___logn10;
		V_0 = ((int32_t)(((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))))>>1));
		V_1 = 0;
		goto IL_0105;
	}

IL_0011:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___Fsrc2;
		int32_t L_2 = ___F3;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_6 = ___Fsrc2;
		int32_t L_7 = ___F3;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_12 = ___Gsrc4;
		int32_t L_13 = ___G5;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_17 = ___Gsrc4;
		int32_t L_18 = ___G5;
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		NullCheck(L_17);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_18, L_19)), L_20));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_22 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_23 = ___fsrc6;
		int32_t L_24 = ___f7;
		int32_t L_25 = V_1;
		NullCheck(L_23);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = L_27;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_28 = ___fsrc6;
		int32_t L_29 = ___f7;
		int32_t L_30 = V_1;
		int32_t L_31 = V_0;
		NullCheck(L_28);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), L_31));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_33 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_7 = L_33;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_34 = ___gsrc8;
		int32_t L_35 = ___g9;
		int32_t L_36 = V_1;
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_35, L_36));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_8 = L_38;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_39 = ___gsrc8;
		int32_t L_40 = ___g9;
		int32_t L_41 = V_1;
		int32_t L_42 = V_0;
		NullCheck(L_39);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_40, L_41)), L_42));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_44 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_9 = L_44;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_45 = V_2;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_46 = V_3;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_47 = V_6;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_48 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_49 = V_7;
		NullCheck(L_48);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_50;
		L_50 = FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D(L_48, L_49, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_51;
		L_51 = FalconFFT_FPC_MUL_mF3FFC41890CDFC01BDCE77A91F67FE9B5337D590(__this, L_45, L_46, L_47, L_50, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_52 = L_51;
		NullCheck(L_52);
		int32_t L_53 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_10 = L_54;
		NullCheck(L_52);
		int32_t L_55 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_56 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_11 = L_56;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_57 = V_4;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_58 = V_5;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_59 = V_8;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_60 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_61 = V_9;
		NullCheck(L_60);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_62;
		L_62 = FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D(L_60, L_61, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_63;
		L_63 = FalconFFT_FPC_MUL_mF3FFC41890CDFC01BDCE77A91F67FE9B5337D590(__this, L_57, L_58, L_59, L_62, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_64 = L_63;
		NullCheck(L_64);
		int32_t L_65 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_12 = L_66;
		NullCheck(L_64);
		int32_t L_67 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_13 = L_68;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_69 = ___dsrc0;
		int32_t L_70 = ___d1;
		int32_t L_71 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_72 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_73 = V_10;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_74 = V_12;
		NullCheck(L_72);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_75;
		L_75 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_72, L_73, L_74, NULL);
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_70, L_71))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_75);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_76 = ___dsrc0;
		int32_t L_77 = ___d1;
		int32_t L_78 = V_1;
		int32_t L_79 = V_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_80 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_81 = V_11;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_82 = V_13;
		NullCheck(L_80);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_83;
		L_83 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_80, L_81, L_82, NULL);
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_77, L_78)), L_79))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_83);
		int32_t L_84 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_0105:
	{
		int32_t L_85 = V_1;
		int32_t L_86 = V_0;
		if ((((int32_t)L_85) < ((int32_t)L_86)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_mul_autoadj_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_mul_autoadj_fft_mA719D26DC7D3B099509230DB13D2546EF7583693 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc2, int32_t ___b3, uint32_t ___logn4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___logn4;
		V_0 = ((int32_t)(((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))))>>1));
		V_1 = 0;
		goto IL_0064;
	}

IL_000e:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___asrc0;
		int32_t L_2 = ___a1;
		int32_t L_3 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_4 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_5 = ___asrc0;
		int32_t L_6 = ___a1;
		int32_t L_7 = V_1;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_10 = ___bsrc2;
		int32_t L_11 = ___b3;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_4);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_15;
		L_15 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_4, L_9, L_14, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_2, L_3))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_15);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_16 = ___asrc0;
		int32_t L_17 = ___a1;
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_20 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_21 = ___asrc0;
		int32_t L_22 = ___a1;
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		NullCheck(L_21);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_22, L_23)), L_24));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_26 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_27 = ___bsrc2;
		int32_t L_28 = ___b3;
		int32_t L_29 = V_1;
		NullCheck(L_27);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_28, L_29));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_20);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_32;
		L_32 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_20, L_26, L_31, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_17, L_18)), L_19))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_32);
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0064:
	{
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_div_autoadj_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_div_autoadj_fft_m278A66E8C63244B1A75A3E98631A9C76391471D9 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___asrc0, int32_t ___a1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___bsrc2, int32_t ___b3, uint32_t ___logn4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		uint32_t L_0 = ___logn4;
		V_0 = ((int32_t)(((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))))>>1));
		V_1 = 0;
		goto IL_0068;
	}

IL_000e:
	{
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_1 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_2 = ___bsrc2;
		int32_t L_3 = ___b3;
		int32_t L_4 = V_1;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_7;
		L_7 = FprEngine_fpr_inv_m3AF34CA7BDF942C63923FB4FA7EEDF8EC9B1A3AB(L_1, L_6, NULL);
		V_2 = L_7;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_8 = ___asrc0;
		int32_t L_9 = ___a1;
		int32_t L_10 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_11 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_12 = ___asrc0;
		int32_t L_13 = ___a1;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_17 = V_2;
		NullCheck(L_11);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_18;
		L_18 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_11, L_16, L_17, NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_9, L_10))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_18);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_19 = ___asrc0;
		int32_t L_20 = ___a1;
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_23 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_24 = ___asrc0;
		int32_t L_25 = ___a1;
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		NullCheck(L_24);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_25, L_26)), L_27));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_29 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_30 = V_2;
		NullCheck(L_23);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_31;
		L_31 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_23, L_29, L_30, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_20, L_21)), L_22))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_31);
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0068:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = V_0;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_LDL_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_LDL_fft_m2C9B05E32C558F40E97855530858911C9EBCD7F0 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___g00src0, int32_t ___g001, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___g01src2, int32_t ___g013, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___g11src4, int32_t ___g115, uint32_t ___logn6, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_4;
	memset((&V_4), 0, sizeof(V_4));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_5;
	memset((&V_5), 0, sizeof(V_5));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_6;
	memset((&V_6), 0, sizeof(V_6));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_7;
	memset((&V_7), 0, sizeof(V_7));
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_8 = NULL;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_9;
	memset((&V_9), 0, sizeof(V_9));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		uint32_t L_0 = ___logn6;
		V_0 = ((int32_t)(((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))))>>1));
		V_1 = 0;
		goto IL_010f;
	}

IL_0011:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___g00src0;
		int32_t L_2 = ___g001;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_6 = ___g00src0;
		int32_t L_7 = ___g001;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_12 = ___g01src2;
		int32_t L_13 = ___g013;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_17 = ___g01src2;
		int32_t L_18 = ___g013;
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		NullCheck(L_17);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_18, L_19)), L_20));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_22 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_23 = ___g11src4;
		int32_t L_24 = ___g115;
		int32_t L_25 = V_1;
		NullCheck(L_23);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = L_27;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_28 = ___g11src4;
		int32_t L_29 = ___g115;
		int32_t L_30 = V_1;
		int32_t L_31 = V_0;
		NullCheck(L_28);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), L_31));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_33 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_7 = L_33;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_34 = V_4;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_35 = V_5;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_36 = V_2;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_37 = V_3;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_38;
		L_38 = FalconFFT_FPC_DIV_mA4E103421E0A0F1DE3A40887BA08353259E31708(__this, L_34, L_35, L_36, L_37, NULL);
		V_8 = L_38;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_39 = V_8;
		NullCheck(L_39);
		int32_t L_40 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_9 = L_41;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_42 = V_8;
		NullCheck(L_42);
		int32_t L_43 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_10 = L_44;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_45 = V_9;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_46 = V_10;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_47 = V_4;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_48 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_49 = V_5;
		NullCheck(L_48);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_50;
		L_50 = FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D(L_48, L_49, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_51;
		L_51 = FalconFFT_FPC_MUL_mF3FFC41890CDFC01BDCE77A91F67FE9B5337D590(__this, L_45, L_46, L_47, L_50, NULL);
		V_8 = L_51;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_52 = V_8;
		NullCheck(L_52);
		int32_t L_53 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_4 = L_54;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_55 = V_8;
		NullCheck(L_55);
		int32_t L_56 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_5 = L_57;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_58 = V_6;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_59 = V_7;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_60 = V_4;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_61 = V_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_62;
		L_62 = FalconFFT_FPC_SUB_m1C617491749509F1209F7258DB46E2A63FCC0E5F(__this, L_58, L_59, L_60, L_61, NULL);
		V_8 = L_62;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_63 = ___g11src4;
		int32_t L_64 = ___g115;
		int32_t L_65 = V_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_66 = V_8;
		NullCheck(L_66);
		int32_t L_67 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_64, L_65))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_68);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_69 = ___g11src4;
		int32_t L_70 = ___g115;
		int32_t L_71 = V_1;
		int32_t L_72 = V_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_73 = V_8;
		NullCheck(L_73);
		int32_t L_74 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_70, L_71)), L_72))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_75);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_76 = ___g01src2;
		int32_t L_77 = ___g013;
		int32_t L_78 = V_1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_79 = V_9;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, L_78))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_79);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_80 = ___g01src2;
		int32_t L_81 = ___g013;
		int32_t L_82 = V_1;
		int32_t L_83 = V_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_84 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_85 = V_10;
		NullCheck(L_84);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_86;
		L_86 = FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D(L_84, L_85, NULL);
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_81, L_82)), L_83))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_86);
		int32_t L_87 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_010f:
	{
		int32_t L_88 = V_1;
		int32_t L_89 = V_0;
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_LDLmv_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_LDLmv_fft_mED56D07EFD3950C8E458DA5E4B9607086DE44410 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___d11src0, int32_t ___d111, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___l10src2, int32_t ___l103, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___g00src4, int32_t ___g005, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___g01src6, int32_t ___g017, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___g11src8, int32_t ___g119, uint32_t ___logn10, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_4;
	memset((&V_4), 0, sizeof(V_4));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_5;
	memset((&V_5), 0, sizeof(V_5));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_6;
	memset((&V_6), 0, sizeof(V_6));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_7;
	memset((&V_7), 0, sizeof(V_7));
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_8 = NULL;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_9;
	memset((&V_9), 0, sizeof(V_9));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		uint32_t L_0 = ___logn10;
		V_0 = ((int32_t)(((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))))>>1));
		V_1 = 0;
		goto IL_0111;
	}

IL_0011:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___g00src4;
		int32_t L_2 = ___g005;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_6 = ___g00src4;
		int32_t L_7 = ___g005;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_12 = ___g01src6;
		int32_t L_13 = ___g017;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_17 = ___g01src6;
		int32_t L_18 = ___g017;
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		NullCheck(L_17);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_18, L_19)), L_20));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_22 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_23 = ___g11src8;
		int32_t L_24 = ___g119;
		int32_t L_25 = V_1;
		NullCheck(L_23);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = L_27;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_28 = ___g11src8;
		int32_t L_29 = ___g119;
		int32_t L_30 = V_1;
		int32_t L_31 = V_0;
		NullCheck(L_28);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), L_31));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_33 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_7 = L_33;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_34 = V_4;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_35 = V_5;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_36 = V_2;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_37 = V_3;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_38;
		L_38 = FalconFFT_FPC_DIV_mA4E103421E0A0F1DE3A40887BA08353259E31708(__this, L_34, L_35, L_36, L_37, NULL);
		V_8 = L_38;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_39 = V_8;
		NullCheck(L_39);
		int32_t L_40 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_9 = L_41;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_42 = V_8;
		NullCheck(L_42);
		int32_t L_43 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_10 = L_44;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_45 = V_9;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_46 = V_10;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_47 = V_4;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_48 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_49 = V_5;
		NullCheck(L_48);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_50;
		L_50 = FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D(L_48, L_49, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_51;
		L_51 = FalconFFT_FPC_MUL_mF3FFC41890CDFC01BDCE77A91F67FE9B5337D590(__this, L_45, L_46, L_47, L_50, NULL);
		V_8 = L_51;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_52 = V_8;
		NullCheck(L_52);
		int32_t L_53 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_4 = L_54;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_55 = V_8;
		NullCheck(L_55);
		int32_t L_56 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_5 = L_57;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_58 = V_6;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_59 = V_7;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_60 = V_4;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_61 = V_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_62;
		L_62 = FalconFFT_FPC_SUB_m1C617491749509F1209F7258DB46E2A63FCC0E5F(__this, L_58, L_59, L_60, L_61, NULL);
		V_8 = L_62;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_63 = ___d11src0;
		int32_t L_64 = ___d111;
		int32_t L_65 = V_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_66 = V_8;
		NullCheck(L_66);
		int32_t L_67 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_64, L_65))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_68);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_69 = ___d11src0;
		int32_t L_70 = ___d111;
		int32_t L_71 = V_1;
		int32_t L_72 = V_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_73 = V_8;
		NullCheck(L_73);
		int32_t L_74 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_70, L_71)), L_72))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_75);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_76 = ___l10src2;
		int32_t L_77 = ___l103;
		int32_t L_78 = V_1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_79 = V_9;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, L_78))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_79);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_80 = ___l10src2;
		int32_t L_81 = ___l103;
		int32_t L_82 = V_1;
		int32_t L_83 = V_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_84 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_85 = V_10;
		NullCheck(L_84);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_86;
		L_86 = FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D(L_84, L_85, NULL);
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_81, L_82)), L_83))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_86);
		int32_t L_87 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_0111:
	{
		int32_t L_88 = V_1;
		int32_t L_89 = V_0;
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_split_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_split_fft_m0B2636F96B8E5EBE7317AD7DEC83EAA9E39AABD2 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___f0src0, int32_t ___f01, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___f1src2, int32_t ___f13, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___fsrc4, int32_t ___f5, uint32_t ___logn6, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_4;
	memset((&V_4), 0, sizeof(V_4));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_5;
	memset((&V_5), 0, sizeof(V_5));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_6;
	memset((&V_6), 0, sizeof(V_6));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_7;
	memset((&V_7), 0, sizeof(V_7));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		uint32_t L_0 = ___logn6;
		V_0 = ((int32_t)(((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))))>>1));
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1>>1));
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_2 = ___f0src0;
		int32_t L_3 = ___f01;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_4 = ___fsrc4;
		int32_t L_5 = ___f5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_7);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_8 = ___f1src2;
		int32_t L_9 = ___f13;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_10 = ___fsrc4;
		int32_t L_11 = ___f5;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_14);
		V_2 = 0;
		goto IL_016b;
	}

IL_0038:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_15 = ___fsrc4;
		int32_t L_16 = ___f5;
		int32_t L_17 = V_2;
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)(L_17<<1))));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_20 = ___fsrc4;
		int32_t L_21 = ___f5;
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_20);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_21, ((int32_t)(L_22<<1)))), L_23));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_4 = L_25;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_26 = ___fsrc4;
		int32_t L_27 = ___f5;
		int32_t L_28 = V_2;
		NullCheck(L_26);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_27, ((int32_t)(L_28<<1)))), 1));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_5 = L_30;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_31 = ___fsrc4;
		int32_t L_32 = ___f5;
		int32_t L_33 = V_2;
		int32_t L_34 = V_0;
		NullCheck(L_31);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_32, ((int32_t)(L_33<<1)))), 1)), L_34));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_36 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_6 = L_36;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_37 = V_3;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_38 = V_4;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_39 = V_5;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_40 = V_6;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_41;
		L_41 = FalconFFT_FPC_ADD_mB82B3CD699DA185FAE3031E44D2BCC03432FEF87(__this, L_37, L_38, L_39, L_40, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_42 = L_41;
		NullCheck(L_42);
		int32_t L_43 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_7 = L_44;
		NullCheck(L_42);
		int32_t L_45 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_8 = L_46;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_47 = ___f0src0;
		int32_t L_48 = ___f01;
		int32_t L_49 = V_2;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_50 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_51 = V_7;
		NullCheck(L_50);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_52;
		L_52 = FprEngine_fpr_half_mF67809B82C11A1D4C118888BEF1C8E8219473612(L_50, L_51, NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_48, L_49))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_52);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_53 = ___f0src0;
		int32_t L_54 = ___f01;
		int32_t L_55 = V_2;
		int32_t L_56 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_57 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_58 = V_8;
		NullCheck(L_57);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_59;
		L_59 = FprEngine_fpr_half_mF67809B82C11A1D4C118888BEF1C8E8219473612(L_57, L_58, NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_54, L_55)), L_56))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_59);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_60 = V_3;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_61 = V_4;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_62 = V_5;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_63 = V_6;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_64;
		L_64 = FalconFFT_FPC_SUB_m1C617491749509F1209F7258DB46E2A63FCC0E5F(__this, L_60, L_61, L_62, L_63, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_65 = L_64;
		NullCheck(L_65);
		int32_t L_66 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_7 = L_67;
		NullCheck(L_65);
		int32_t L_68 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_8 = L_69;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_70 = V_7;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_71 = V_8;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_72 = __this->___fpre_0;
		NullCheck(L_72);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_73 = L_72->___fpr_gm_tab_0;
		int32_t L_74 = V_2;
		int32_t L_75 = V_0;
		NullCheck(L_73);
		int32_t L_76 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_74, L_75))<<1));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_77 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_78 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_79 = __this->___fpre_0;
		NullCheck(L_79);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_80 = L_79->___fpr_gm_tab_0;
		int32_t L_81 = V_2;
		int32_t L_82 = V_0;
		NullCheck(L_80);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_add(L_81, L_82))<<1)), 1));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_78);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_85;
		L_85 = FprEngine_fpr_neg_m8354AA238B2155E6A0F3EF62F2A78B8BD24A5C0D(L_78, L_84, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_86;
		L_86 = FalconFFT_FPC_MUL_mF3FFC41890CDFC01BDCE77A91F67FE9B5337D590(__this, L_70, L_71, L_77, L_85, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_87 = L_86;
		NullCheck(L_87);
		int32_t L_88 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_7 = L_89;
		NullCheck(L_87);
		int32_t L_90 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_91 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_8 = L_91;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_92 = ___f1src2;
		int32_t L_93 = ___f13;
		int32_t L_94 = V_2;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_95 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_96 = V_7;
		NullCheck(L_95);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_97;
		L_97 = FprEngine_fpr_half_mF67809B82C11A1D4C118888BEF1C8E8219473612(L_95, L_96, NULL);
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, L_94))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_97);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_98 = ___f1src2;
		int32_t L_99 = ___f13;
		int32_t L_100 = V_2;
		int32_t L_101 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_102 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_103 = V_8;
		NullCheck(L_102);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_104;
		L_104 = FprEngine_fpr_half_mF67809B82C11A1D4C118888BEF1C8E8219473612(L_102, L_103, NULL);
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_99, L_100)), L_101))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_104);
		int32_t L_105 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_016b:
	{
		int32_t L_106 = V_2;
		int32_t L_107 = V_1;
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_0038;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFFT::poly_merge_fft(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFFT_poly_merge_fft_m03631F2BBF8B96E6B9EDEAC5D0FFECB80DB9E572 (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___fsrc0, int32_t ___f1, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___f0src2, int32_t ___f03, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___f1src4, int32_t ___f15, uint32_t ___logn6, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_4;
	memset((&V_4), 0, sizeof(V_4));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_5;
	memset((&V_5), 0, sizeof(V_5));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_6;
	memset((&V_6), 0, sizeof(V_6));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_7;
	memset((&V_7), 0, sizeof(V_7));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		uint32_t L_0 = ___logn6;
		V_0 = ((int32_t)(((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))))>>1));
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1>>1));
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_2 = ___fsrc0;
		int32_t L_3 = ___f1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_4 = ___f0src2;
		int32_t L_5 = ___f03;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_7);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_8 = ___fsrc0;
		int32_t L_9 = ___f1;
		int32_t L_10 = V_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_11 = ___f1src4;
		int32_t L_12 = ___f15;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_9, L_10))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_14);
		V_2 = 0;
		goto IL_0126;
	}

IL_0036:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_15 = ___f0src2;
		int32_t L_16 = ___f03;
		int32_t L_17 = V_2;
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_20 = ___f0src2;
		int32_t L_21 = ___f03;
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		NullCheck(L_20);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_21, L_22)), L_23));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_4 = L_25;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_26 = ___f1src4;
		int32_t L_27 = ___f15;
		int32_t L_28 = V_2;
		NullCheck(L_26);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_31 = ___f1src4;
		int32_t L_32 = ___f15;
		int32_t L_33 = V_2;
		int32_t L_34 = V_1;
		NullCheck(L_31);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_32, L_33)), L_34));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_36 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_37 = __this->___fpre_0;
		NullCheck(L_37);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_38 = L_37->___fpr_gm_tab_0;
		int32_t L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_38);
		int32_t L_41 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_39, L_40))<<1));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_43 = __this->___fpre_0;
		NullCheck(L_43);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_44 = L_43->___fpr_gm_tab_0;
		int32_t L_45 = V_2;
		int32_t L_46 = V_0;
		NullCheck(L_44);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_add(L_45, L_46))<<1)), 1));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_48 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_49;
		L_49 = FalconFFT_FPC_MUL_mF3FFC41890CDFC01BDCE77A91F67FE9B5337D590(__this, L_30, L_36, L_42, L_48, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_50 = L_49;
		NullCheck(L_50);
		int32_t L_51 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_5 = L_52;
		NullCheck(L_50);
		int32_t L_53 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_54 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_6 = L_54;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_55 = V_3;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_56 = V_4;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_57 = V_5;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_58 = V_6;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_59;
		L_59 = FalconFFT_FPC_ADD_mB82B3CD699DA185FAE3031E44D2BCC03432FEF87(__this, L_55, L_56, L_57, L_58, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_60 = L_59;
		NullCheck(L_60);
		int32_t L_61 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_7 = L_62;
		NullCheck(L_60);
		int32_t L_63 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_64 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = L_64;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_65 = ___fsrc0;
		int32_t L_66 = ___f1;
		int32_t L_67 = V_2;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_68 = V_7;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_66, ((int32_t)(L_67<<1))))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_68);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_69 = ___fsrc0;
		int32_t L_70 = ___f1;
		int32_t L_71 = V_2;
		int32_t L_72 = V_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_73 = V_8;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_70, ((int32_t)(L_71<<1)))), L_72))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_73);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_74 = V_3;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_75 = V_4;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_76 = V_5;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_77 = V_6;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_78;
		L_78 = FalconFFT_FPC_SUB_m1C617491749509F1209F7258DB46E2A63FCC0E5F(__this, L_74, L_75, L_76, L_77, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_79 = L_78;
		NullCheck(L_79);
		int32_t L_80 = 0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_7 = L_81;
		NullCheck(L_79);
		int32_t L_82 = 1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_8 = L_83;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_84 = ___fsrc0;
		int32_t L_85 = ___f1;
		int32_t L_86 = V_2;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_87 = V_7;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_85, ((int32_t)(L_86<<1)))), 1))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_87);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_88 = ___fsrc0;
		int32_t L_89 = ___f1;
		int32_t L_90 = V_2;
		int32_t L_91 = V_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_92 = V_8;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_89, ((int32_t)(L_90<<1)))), 1)), L_91))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_92);
		int32_t L_93 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_93, 1));
	}

IL_0126:
	{
		int32_t L_94 = V_2;
		int32_t L_95 = V_1;
		if ((((int32_t)L_94) < ((int32_t)L_95)))
		{
			goto IL_0036;
		}
	}
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
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconFPR__ctor_m04B570CA07BB8A0A0F3884B9086C9040E28DAF22 (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE* __this, double ___v0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___v0;
		__this->___v_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void FalconFPR__ctor_m04B570CA07BB8A0A0F3884B9086C9040E28DAF22_AdjustorThunk (RuntimeObject* __this, double ___v0, const RuntimeMethod* method)
{
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE*>(__this + _offset);
	FalconFPR__ctor_m04B570CA07BB8A0A0F3884B9086C9040E28DAF22_inline(_thisAdjusted, ___v0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen__ctor_mAD36AC62CA4DAAB79C562D55873D35F89ED2624B (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconSmallPrimes_t68BE663EDE0D6BA4978651AD039C3996981CFDD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconVrfy_t4EC770FA3A4E50BFAEECBF9DE90619A954893F20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____29E73BE4AE667DAA40ECB03060CB774323057723391BBD27872966CB3CA33D2F_60_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____34D542F5ED8A11EC9DE5E3882B3F28866A9377F5A748F5D649B6404BCF8CCDAC_82_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____3D0EBB5DC33F10BDCF03701C753BECBEAA73D3F1D739FDA70A09F5D78947149A_96_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____46C4D06226E74471A7B52BA70A1533E5FB906912EA7D01D88D2142B3EB30B918_113_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6532F51A82E7FD04EE2E8DCB8A6CA9D49B2AFC893C7B06813C9E7C4000FE85AF_165_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____8546F1BCB5C4931501D810E34637ECD4C72DD549D16C439CE1B3C769A181A9A9_228_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____8546F1BCB5C4931501D810E34637ECD4C72DD549D16C439CE1B3C769A181A9A9_228_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		__this->___REV10_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REV10_5), (void*)L_1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)27));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____34D542F5ED8A11EC9DE5E3882B3F28866A9377F5A748F5D649B6404BCF8CCDAC_82_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		__this->___gauss_1024_12289_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gauss_1024_12289_6), (void*)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____3D0EBB5DC33F10BDCF03701C753BECBEAA73D3F1D739FDA70A09F5D78947149A_96_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		__this->___MAX_BL_SMALL_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAX_BL_SMALL_7), (void*)L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____29E73BE4AE667DAA40ECB03060CB774323057723391BBD27872966CB3CA33D2F_60_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		__this->___MAX_BL_LARGE_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAX_BL_LARGE_8), (void*)L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____46C4D06226E74471A7B52BA70A1533E5FB906912EA7D01D88D2142B3EB30B918_113_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		__this->___BITLENGTH_avg_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BITLENGTH_avg_9), (void*)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6532F51A82E7FD04EE2E8DCB8A6CA9D49B2AFC893C7B06813C9E7C4000FE85AF_165_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_16, L_17, NULL);
		__this->___BITLENGTH_std_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BITLENGTH_std_10), (void*)L_16);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_18 = (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796*)il2cpp_codegen_object_new(FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		FprEngine__ctor_mE6E0E995655AE8844C7233074F31C9E8D94F4BB6(L_18, NULL);
		__this->___fpre_0 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fpre_0), (void*)L_18);
		FalconSmallPrimes_t68BE663EDE0D6BA4978651AD039C3996981CFDD2* L_19 = (FalconSmallPrimes_t68BE663EDE0D6BA4978651AD039C3996981CFDD2*)il2cpp_codegen_object_new(FalconSmallPrimes_t68BE663EDE0D6BA4978651AD039C3996981CFDD2_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		FalconSmallPrimes__ctor_m9271B253BFEB6D3D73DD559828397EFCF988AF4B(L_19, NULL);
		NullCheck(L_19);
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_20 = L_19->___PRIMES_0;
		__this->___PRIMES_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PRIMES_2), (void*)L_20);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_21 = __this->___fpre_0;
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_22 = (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF*)il2cpp_codegen_object_new(FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		FalconFFT__ctor_m8ED2C1B9E18FE2120AB4D9B69232AAA39A4A57CA(L_22, L_21, NULL);
		__this->___ffte_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ffte_1), (void*)L_22);
		FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* L_23 = (FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF*)il2cpp_codegen_object_new(FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		FalconCodec__ctor_mF041EBA80B369B5E1B548E9C38252516F75B6C73(L_23, NULL);
		__this->___codec_3 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___codec_3), (void*)L_23);
		FalconVrfy_t4EC770FA3A4E50BFAEECBF9DE90619A954893F20* L_24 = (FalconVrfy_t4EC770FA3A4E50BFAEECBF9DE90619A954893F20*)il2cpp_codegen_object_new(FalconVrfy_t4EC770FA3A4E50BFAEECBF9DE90619A954893F20_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		FalconVrfy__ctor_mD13F0C5A7B9F79FF75929D262AC5E15EE6015936(L_24, NULL);
		__this->___vrfy_4 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vrfy_4), (void*)L_24);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::.ctor(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconCodec,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconVrfy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen__ctor_m4D43F76A7471F7C08446488C8BAD2C78DE50F71B (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* ___codec0, FalconVrfy_t4EC770FA3A4E50BFAEECBF9DE90619A954893F20* ___vrfy1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconSmallPrimes_t68BE663EDE0D6BA4978651AD039C3996981CFDD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____29E73BE4AE667DAA40ECB03060CB774323057723391BBD27872966CB3CA33D2F_60_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____34D542F5ED8A11EC9DE5E3882B3F28866A9377F5A748F5D649B6404BCF8CCDAC_82_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____3D0EBB5DC33F10BDCF03701C753BECBEAA73D3F1D739FDA70A09F5D78947149A_96_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____46C4D06226E74471A7B52BA70A1533E5FB906912EA7D01D88D2142B3EB30B918_113_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6532F51A82E7FD04EE2E8DCB8A6CA9D49B2AFC893C7B06813C9E7C4000FE85AF_165_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____8546F1BCB5C4931501D810E34637ECD4C72DD549D16C439CE1B3C769A181A9A9_228_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____8546F1BCB5C4931501D810E34637ECD4C72DD549D16C439CE1B3C769A181A9A9_228_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		__this->___REV10_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REV10_5), (void*)L_1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)27));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____34D542F5ED8A11EC9DE5E3882B3F28866A9377F5A748F5D649B6404BCF8CCDAC_82_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		__this->___gauss_1024_12289_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gauss_1024_12289_6), (void*)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____3D0EBB5DC33F10BDCF03701C753BECBEAA73D3F1D739FDA70A09F5D78947149A_96_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		__this->___MAX_BL_SMALL_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAX_BL_SMALL_7), (void*)L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____29E73BE4AE667DAA40ECB03060CB774323057723391BBD27872966CB3CA33D2F_60_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		__this->___MAX_BL_LARGE_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAX_BL_LARGE_8), (void*)L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____46C4D06226E74471A7B52BA70A1533E5FB906912EA7D01D88D2142B3EB30B918_113_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		__this->___BITLENGTH_avg_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BITLENGTH_avg_9), (void*)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t71B56FD9E998D4F52FFF04CC1A26784A143731EE____6532F51A82E7FD04EE2E8DCB8A6CA9D49B2AFC893C7B06813C9E7C4000FE85AF_165_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_16, L_17, NULL);
		__this->___BITLENGTH_std_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BITLENGTH_std_10), (void*)L_16);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_18 = (FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796*)il2cpp_codegen_object_new(FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		FprEngine__ctor_mE6E0E995655AE8844C7233074F31C9E8D94F4BB6(L_18, NULL);
		__this->___fpre_0 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fpre_0), (void*)L_18);
		FalconSmallPrimes_t68BE663EDE0D6BA4978651AD039C3996981CFDD2* L_19 = (FalconSmallPrimes_t68BE663EDE0D6BA4978651AD039C3996981CFDD2*)il2cpp_codegen_object_new(FalconSmallPrimes_t68BE663EDE0D6BA4978651AD039C3996981CFDD2_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		FalconSmallPrimes__ctor_m9271B253BFEB6D3D73DD559828397EFCF988AF4B(L_19, NULL);
		NullCheck(L_19);
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_20 = L_19->___PRIMES_0;
		__this->___PRIMES_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PRIMES_2), (void*)L_20);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_21 = (FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF*)il2cpp_codegen_object_new(FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		FalconFFT__ctor_mDFB34FFF9500E004BEFDCA23A9126FAC9DE1192F(L_21, NULL);
		__this->___ffte_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ffte_1), (void*)L_21);
		FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* L_22 = ___codec0;
		__this->___codec_3 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___codec_3), (void*)L_22);
		FalconVrfy_t4EC770FA3A4E50BFAEECBF9DE90619A954893F20* L_23 = ___vrfy1;
		__this->___vrfy_4 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vrfy_4), (void*)L_23);
		return;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_set(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, int32_t ___x0, uint32_t ___p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___x0;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint32_t L_2 = ___p1;
		uint32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, ((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)L_2)&((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_3>>((int32_t)31))))))))))));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_norm(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_modp_norm_m67648EFF57E2368DD307FA15DB2CDB8F9076D847 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___x0, uint32_t ___p1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___p1;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___p1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)((int32_t)L_1&((int32_t)il2cpp_codegen_subtract(((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, 1))>>1))))>>((int32_t)31))), 1))))));
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_ninv31(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___p0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(2, (int32_t)L_0));
		uint32_t L_1 = V_0;
		uint32_t L_2 = ___p0;
		uint32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)il2cpp_codegen_subtract(2, ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3))))));
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___p0;
		uint32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)il2cpp_codegen_subtract(2, ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6))))));
		uint32_t L_7 = V_0;
		uint32_t L_8 = ___p0;
		uint32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)il2cpp_codegen_subtract(2, ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_9))))));
		uint32_t L_10 = V_0;
		uint32_t L_11 = ___p0;
		uint32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)il2cpp_codegen_subtract(2, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)L_12))))));
		uint32_t L_13 = V_0;
		return ((int32_t)(uint32_t)((int64_t)(((int64_t)((int32_t)2147483647LL))&((-((int64_t)(uint64_t)L_13))))));
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_R(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_R_m0085B0566737E57E6BD5BD3C4A879A95B01BB436 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___p0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___p0;
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)-2147483648LL), (int32_t)L_0));
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_add(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_add_m0C9050405D198B39828FE8729BC3C3B1CFCF41B2 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___a0, uint32_t ___b1, uint32_t ___p2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___a0;
		uint32_t L_1 = ___b1;
		uint32_t L_2 = ___p2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2));
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___p2;
		uint32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, ((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)L_4)&((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_5>>((int32_t)31))))))))))));
		uint32_t L_6 = V_0;
		return L_6;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_sub(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_sub_m209143B45E60A57D543566124663AA52011EBFEE (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___a0, uint32_t ___b1, uint32_t ___p2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___a0;
		uint32_t L_1 = ___b1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		uint32_t L_2 = V_0;
		uint32_t L_3 = ___p2;
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, ((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)L_3)&((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_4>>((int32_t)31))))))))))));
		uint32_t L_5 = V_0;
		return L_5;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_montymul(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___a0, uint32_t ___b1, uint32_t ___p2, uint32_t ___p0i3, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___a0;
		uint32_t L_1 = ___b1;
		int64_t L_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_0), ((int64_t)(uint64_t)L_1)));
		uint32_t L_3 = ___p0i3;
		uint32_t L_4 = ___p2;
		V_0 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)(uint64_t)L_3)))&((int64_t)((int32_t)2147483647LL)))), ((int64_t)(uint64_t)L_4)));
		uint64_t L_5 = V_0;
		uint32_t L_6 = ___p2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_add(L_2, (int64_t)L_5))>>((int32_t)31)))), (int32_t)L_6));
		uint32_t L_7 = V_1;
		uint32_t L_8 = ___p2;
		uint32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, ((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)L_8)&((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_9>>((int32_t)31))))))))))));
		uint32_t L_10 = V_1;
		return L_10;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_R2(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_R2_mFDF10C899F4DAC34C48E9CA91B075A78FE793634 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___p0, uint32_t ___p0i1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___p0;
		uint32_t L_1;
		L_1 = FalconKeygen_modp_R_m0085B0566737E57E6BD5BD3C4A879A95B01BB436(__this, L_0, NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___p0;
		uint32_t L_5;
		L_5 = FalconKeygen_modp_add_m0C9050405D198B39828FE8729BC3C3B1CFCF41B2(__this, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		uint32_t L_6 = V_0;
		uint32_t L_7 = V_0;
		uint32_t L_8 = ___p0;
		uint32_t L_9 = ___p0i1;
		uint32_t L_10;
		L_10 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		uint32_t L_11 = V_0;
		uint32_t L_12 = V_0;
		uint32_t L_13 = ___p0;
		uint32_t L_14 = ___p0i1;
		uint32_t L_15;
		L_15 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_11, L_12, L_13, L_14, NULL);
		V_0 = L_15;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_0;
		uint32_t L_18 = ___p0;
		uint32_t L_19 = ___p0i1;
		uint32_t L_20;
		L_20 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_16, L_17, L_18, L_19, NULL);
		V_0 = L_20;
		uint32_t L_21 = V_0;
		uint32_t L_22 = V_0;
		uint32_t L_23 = ___p0;
		uint32_t L_24 = ___p0i1;
		uint32_t L_25;
		L_25 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_21, L_22, L_23, L_24, NULL);
		V_0 = L_25;
		uint32_t L_26 = V_0;
		uint32_t L_27 = V_0;
		uint32_t L_28 = ___p0;
		uint32_t L_29 = ___p0i1;
		uint32_t L_30;
		L_30 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_26, L_27, L_28, L_29, NULL);
		V_0 = L_30;
		uint32_t L_31 = V_0;
		uint32_t L_32 = ___p0;
		uint32_t L_33 = V_0;
		V_0 = ((int32_t)(uint32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_31), ((int64_t)(((int64_t)(uint64_t)L_32)&((-((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_33&1))))))))))>>1)));
		uint32_t L_34 = V_0;
		return L_34;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_Rx(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_Rx_mE6091B563F2ACAC7BB7ABE09D31961273EB89A79 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___x0, uint32_t ___p1, uint32_t ___p0i2, uint32_t ___R23, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		uint32_t L_0 = ___x0;
		___x0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1));
		uint32_t L_1 = ___R23;
		V_1 = L_1;
		uint32_t L_2 = ___p1;
		uint32_t L_3;
		L_3 = FalconKeygen_modp_R_m0085B0566737E57E6BD5BD3C4A879A95B01BB436(__this, L_2, NULL);
		V_2 = L_3;
		V_0 = 0;
		goto IL_0038;
	}

IL_0014:
	{
		uint32_t L_4 = ___x0;
		int32_t L_5 = V_0;
		if (!((int32_t)((int32_t)L_4&((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))))))
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_6 = V_2;
		uint32_t L_7 = V_1;
		uint32_t L_8 = ___p1;
		uint32_t L_9 = ___p0i2;
		uint32_t L_10;
		L_10 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_6, L_7, L_8, L_9, NULL);
		V_2 = L_10;
	}

IL_0029:
	{
		uint32_t L_11 = V_1;
		uint32_t L_12 = V_1;
		uint32_t L_13 = ___p1;
		uint32_t L_14 = ___p0i2;
		uint32_t L_15;
		L_15 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_11, L_12, L_13, L_14, NULL);
		V_1 = L_15;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_0;
		uint32_t L_18 = ___x0;
		if ((!(((uint32_t)((int32_t)(1<<((int32_t)(L_17&((int32_t)31)))))) > ((uint32_t)L_18))))
		{
			goto IL_0014;
		}
	}
	{
		uint32_t L_19 = V_2;
		return L_19;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_div(System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_modp_div_mB0AF51EC80EACC389C8B7587AEF01695C44E4D82 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___a0, uint32_t ___b1, uint32_t ___p2, uint32_t ___p0i3, uint32_t ___R4, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint32_t L_0 = ___p2;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 2));
		uint32_t L_1 = ___R4;
		V_0 = L_1;
		V_2 = ((int32_t)30);
		goto IL_003b;
	}

IL_000c:
	{
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___p2;
		uint32_t L_5 = ___p0i3;
		uint32_t L_6;
		L_6 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_2, L_3, L_4, L_5, NULL);
		V_0 = L_6;
		uint32_t L_7 = V_0;
		uint32_t L_8 = ___b1;
		uint32_t L_9 = ___p2;
		uint32_t L_10 = ___p0i3;
		uint32_t L_11;
		L_11 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_7, L_8, L_9, L_10, NULL);
		V_3 = L_11;
		uint32_t L_12 = V_0;
		uint32_t L_13 = V_0;
		uint32_t L_14 = V_3;
		uint32_t L_15 = V_1;
		int32_t L_16 = V_2;
		V_0 = ((int32_t)((int32_t)L_12^((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_13^(int32_t)L_14))))&((-((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)((uint32_t)L_15>>((int32_t)(L_16&((int32_t)31)))))&1)))))))))));
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_003b:
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		uint32_t L_19 = V_0;
		uint32_t L_20 = ___p2;
		uint32_t L_21 = ___p0i3;
		uint32_t L_22;
		L_22 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_19, 1, L_20, L_21, NULL);
		V_0 = L_22;
		uint32_t L_23 = ___a0;
		uint32_t L_24 = V_0;
		uint32_t L_25 = ___p2;
		uint32_t L_26 = ___p0i3;
		uint32_t L_27;
		L_27 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_23, L_24, L_25, L_26, NULL);
		return L_27;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_mkgm2(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_modp_mkgm2_m059C61ADC3900310EDA79EBC8573C3D66CBB86A5 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___gmsrc0, int32_t ___gm1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___igmsrc2, int32_t ___igm3, uint32_t ___logn4, uint32_t ___g5, uint32_t ___p6, uint32_t ___p0i7, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		uint32_t L_0 = ___logn4;
		V_1 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		uint32_t L_1 = ___p6;
		uint32_t L_2 = ___p0i7;
		uint32_t L_3;
		L_3 = FalconKeygen_modp_R2_mFDF10C899F4DAC34C48E9CA91B075A78FE793634(__this, L_1, L_2, NULL);
		V_6 = L_3;
		uint32_t L_4 = ___g5;
		uint32_t L_5 = V_6;
		uint32_t L_6 = ___p6;
		uint32_t L_7 = ___p0i7;
		uint32_t L_8;
		L_8 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_4, L_5, L_6, L_7, NULL);
		___g5 = L_8;
		uint32_t L_9 = ___logn4;
		V_2 = L_9;
		goto IL_003d;
	}

IL_0029:
	{
		uint32_t L_10 = ___g5;
		uint32_t L_11 = ___g5;
		uint32_t L_12 = ___p6;
		uint32_t L_13 = ___p0i7;
		uint32_t L_14;
		L_14 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_10, L_11, L_12, L_13, NULL);
		___g5 = L_14;
		uint32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, 1));
	}

IL_003d:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) >= ((uint32_t)((int32_t)10)))))
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_17 = V_6;
		uint32_t L_18 = ___g5;
		uint32_t L_19 = ___p6;
		uint32_t L_20 = ___p0i7;
		uint32_t L_21 = ___p6;
		uint32_t L_22;
		L_22 = FalconKeygen_modp_R_m0085B0566737E57E6BD5BD3C4A879A95B01BB436(__this, L_21, NULL);
		uint32_t L_23;
		L_23 = FalconKeygen_modp_div_mB0AF51EC80EACC389C8B7587AEF01695C44E4D82(__this, L_17, L_18, L_19, L_20, L_22, NULL);
		V_3 = L_23;
		uint32_t L_24 = ___logn4;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)10), (int32_t)L_24));
		uint32_t L_25 = ___p6;
		uint32_t L_26;
		L_26 = FalconKeygen_modp_R_m0085B0566737E57E6BD5BD3C4A879A95B01BB436(__this, L_25, NULL);
		uint32_t L_27 = L_26;
		V_5 = L_27;
		V_4 = L_27;
		V_0 = 0;
		goto IL_00b3;
	}

IL_0070:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_28 = __this->___REV10_5;
		int32_t L_29 = V_0;
		uint32_t L_30 = V_2;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)(L_29<<((int32_t)((int32_t)L_30&((int32_t)31)))));
		uint16_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_7 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___gmsrc0;
		int32_t L_34 = ___gm1;
		int32_t L_35 = V_7;
		uint32_t L_36 = V_4;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_34, L_35))), (uint32_t)L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___igmsrc2;
		int32_t L_38 = ___igm3;
		int32_t L_39 = V_7;
		uint32_t L_40 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_38, L_39))), (uint32_t)L_40);
		uint32_t L_41 = V_4;
		uint32_t L_42 = ___g5;
		uint32_t L_43 = ___p6;
		uint32_t L_44 = ___p0i7;
		uint32_t L_45;
		L_45 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_41, L_42, L_43, L_44, NULL);
		V_4 = L_45;
		uint32_t L_46 = V_5;
		uint32_t L_47 = V_3;
		uint32_t L_48 = ___p6;
		uint32_t L_49 = ___p0i7;
		uint32_t L_50;
		L_50 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_46, L_47, L_48, L_49, NULL);
		V_5 = L_50;
		int32_t L_51 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00b3:
	{
		int32_t L_52 = V_0;
		int32_t L_53 = V_1;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_NTT2_ext(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_modp_NTT2_ext_m05236D570394BFFBAF718038203581885B8ED31A (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, int32_t ___stride2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___gmsrc3, int32_t ___gm4, uint32_t ___logn5, uint32_t ___p6, uint32_t ___p0i7, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	{
		uint32_t L_0 = ___logn5;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		uint32_t L_1 = ___logn5;
		V_2 = ((int32_t)(1<<((int32_t)((int32_t)L_1&((int32_t)31)))));
		int32_t L_2 = V_2;
		V_0 = L_2;
		V_1 = 1;
		goto IL_00ac;
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		V_3 = ((int32_t)(L_3>>1));
		V_4 = 0;
		V_5 = 0;
		goto IL_009e;
	}

IL_0022:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___gmsrc3;
		int32_t L_5 = ___gm4;
		int32_t L_6 = V_1;
		int32_t L_7 = V_4;
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_5, L_6)), L_7));
		uint32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_6 = L_9;
		int32_t L_10 = ___a1;
		int32_t L_11 = V_5;
		int32_t L_12 = ___stride2;
		V_8 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply(L_11, L_12))));
		int32_t L_13 = V_8;
		int32_t L_14 = V_3;
		int32_t L_15 = ___stride2;
		V_9 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)il2cpp_codegen_multiply(L_14, L_15))));
		V_7 = 0;
		goto IL_008d;
	}

IL_0043:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___asrc0;
		int32_t L_17 = V_8;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_10 = L_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___asrc0;
		int32_t L_21 = V_9;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		uint32_t L_24 = V_6;
		uint32_t L_25 = ___p6;
		uint32_t L_26 = ___p0i7;
		uint32_t L_27;
		L_27 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_23, L_24, L_25, L_26, NULL);
		V_11 = L_27;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___asrc0;
		int32_t L_29 = V_8;
		uint32_t L_30 = V_10;
		uint32_t L_31 = V_11;
		uint32_t L_32 = ___p6;
		uint32_t L_33;
		L_33 = FalconKeygen_modp_add_m0C9050405D198B39828FE8729BC3C3B1CFCF41B2(__this, L_30, L_31, L_32, NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___asrc0;
		int32_t L_35 = V_9;
		uint32_t L_36 = V_10;
		uint32_t L_37 = V_11;
		uint32_t L_38 = ___p6;
		uint32_t L_39;
		L_39 = FalconKeygen_modp_sub_m209143B45E60A57D543566124663AA52011EBFEE(__this, L_36, L_37, L_38, NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint32_t)L_39);
		int32_t L_40 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		int32_t L_41 = V_8;
		int32_t L_42 = ___stride2;
		V_8 = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		int32_t L_43 = V_9;
		int32_t L_44 = ___stride2;
		V_9 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
	}

IL_008d:
	{
		int32_t L_45 = V_7;
		int32_t L_46 = V_3;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_47 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = V_5;
		int32_t L_49 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_add(L_48, L_49));
	}

IL_009e:
	{
		int32_t L_50 = V_4;
		int32_t L_51 = V_1;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_52 = V_3;
		V_0 = L_52;
		int32_t L_53 = V_1;
		V_1 = ((int32_t)(L_53<<1));
	}

IL_00ac:
	{
		int32_t L_54 = V_1;
		int32_t L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_iNTT2_ext(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, int32_t ___stride2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___igmsrc3, int32_t ___igm4, uint32_t ___logn5, uint32_t ___p6, uint32_t ___p0i7, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	{
		uint32_t L_0 = ___logn5;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		uint32_t L_1 = ___logn5;
		V_2 = ((int32_t)(1<<((int32_t)((int32_t)L_1&((int32_t)31)))));
		V_0 = 1;
		int32_t L_2 = V_2;
		V_1 = L_2;
		goto IL_00b6;
	}

IL_0016:
	{
		int32_t L_3 = V_1;
		V_6 = ((int32_t)(L_3>>1));
		int32_t L_4 = V_0;
		V_7 = ((int32_t)(L_4<<1));
		V_8 = 0;
		V_9 = 0;
		goto IL_00a6;
	}

IL_0028:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___igmsrc3;
		int32_t L_6 = ___igm4;
		int32_t L_7 = V_6;
		int32_t L_8 = V_8;
		NullCheck(L_5);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_6, L_7)), L_8));
		uint32_t L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_10 = L_10;
		int32_t L_11 = ___a1;
		int32_t L_12 = V_9;
		int32_t L_13 = ___stride2;
		V_12 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_multiply(L_12, L_13))));
		int32_t L_14 = V_12;
		int32_t L_15 = V_0;
		int32_t L_16 = ___stride2;
		V_13 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)il2cpp_codegen_multiply(L_15, L_16))));
		V_11 = 0;
		goto IL_0094;
	}

IL_004a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___asrc0;
		int32_t L_18 = V_12;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_14 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___asrc0;
		int32_t L_22 = V_13;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_15 = L_24;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___asrc0;
		int32_t L_26 = V_12;
		uint32_t L_27 = V_14;
		uint32_t L_28 = V_15;
		uint32_t L_29 = ___p6;
		uint32_t L_30;
		L_30 = FalconKeygen_modp_add_m0C9050405D198B39828FE8729BC3C3B1CFCF41B2(__this, L_27, L_28, L_29, NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (uint32_t)L_30);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___asrc0;
		int32_t L_32 = V_13;
		uint32_t L_33 = V_14;
		uint32_t L_34 = V_15;
		uint32_t L_35 = ___p6;
		uint32_t L_36;
		L_36 = FalconKeygen_modp_sub_m209143B45E60A57D543566124663AA52011EBFEE(__this, L_33, L_34, L_35, NULL);
		uint32_t L_37 = V_10;
		uint32_t L_38 = ___p6;
		uint32_t L_39 = ___p0i7;
		uint32_t L_40;
		L_40 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_36, L_37, L_38, L_39, NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint32_t)L_40);
		int32_t L_41 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_12;
		int32_t L_43 = ___stride2;
		V_12 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		int32_t L_44 = V_13;
		int32_t L_45 = ___stride2;
		V_13 = ((int32_t)il2cpp_codegen_add(L_44, L_45));
	}

IL_0094:
	{
		int32_t L_46 = V_11;
		int32_t L_47 = V_0;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_48 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_9;
		int32_t L_50 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_49, L_50));
	}

IL_00a6:
	{
		int32_t L_51 = V_8;
		int32_t L_52 = V_6;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_53 = V_7;
		V_0 = L_53;
		int32_t L_54 = V_1;
		V_1 = ((int32_t)(L_54>>1));
	}

IL_00b6:
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) > ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		uint32_t L_56 = ___logn5;
		V_4 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)31), (int32_t)L_56))&((int32_t)31)))));
		V_3 = 0;
		int32_t L_57 = ___a1;
		V_5 = L_57;
		goto IL_00ee;
	}

IL_00d0:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___asrc0;
		int32_t L_59 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___asrc0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		uint32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		uint32_t L_64 = V_4;
		uint32_t L_65 = ___p6;
		uint32_t L_66 = ___p0i7;
		uint32_t L_67;
		L_67 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_63, L_64, L_65, L_66, NULL);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (uint32_t)L_67);
		int32_t L_68 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_68, 1));
		int32_t L_69 = V_5;
		int32_t L_70 = ___stride2;
		V_5 = ((int32_t)il2cpp_codegen_add(L_69, L_70));
	}

IL_00ee:
	{
		int32_t L_71 = V_3;
		int32_t L_72 = V_2;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_00d0;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_NTT2(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___gmsrc2, int32_t ___gm3, uint32_t ___logn4, uint32_t ___p5, uint32_t ___p0i6, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___asrc0;
		int32_t L_1 = ___a1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___gmsrc2;
		int32_t L_3 = ___gm3;
		uint32_t L_4 = ___logn4;
		uint32_t L_5 = ___p5;
		uint32_t L_6 = ___p0i6;
		FalconKeygen_modp_NTT2_ext_m05236D570394BFFBAF718038203581885B8ED31A(__this, L_0, L_1, 1, L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_iNTT2(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_modp_iNTT2_mDFACB12D5576DA2A212FE9ABBABE5884B7A071FB (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___igmsrc2, int32_t ___igm3, uint32_t ___logn4, uint32_t ___p5, uint32_t ___p0i6, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___asrc0;
		int32_t L_1 = ___a1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___igmsrc2;
		int32_t L_3 = ___igm3;
		uint32_t L_4 = ___logn4;
		uint32_t L_5 = ___p5;
		uint32_t L_6 = ___p0i6;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_0, L_1, 1, L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::modp_poly_rec_res(System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_modp_poly_rec_res_m6C2BECEED8772C62A18C107545E1263A893FF7DD (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___fsrc0, int32_t ___f1, uint32_t ___logn2, uint32_t ___p3, uint32_t ___p0i4, uint32_t ___R25, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint32_t L_0 = ___logn2;
		V_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1))&((int32_t)31)))));
		V_1 = 0;
		goto IL_0040;
	}

IL_000d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___fsrc0;
		int32_t L_2 = ___f1;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3<<1))));
		uint32_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___fsrc0;
		int32_t L_7 = ___f1;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(L_8<<1)))), 1));
		uint32_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___fsrc0;
		int32_t L_12 = ___f1;
		int32_t L_13 = V_1;
		uint32_t L_14 = V_2;
		uint32_t L_15 = V_3;
		uint32_t L_16 = ___p3;
		uint32_t L_17 = ___p0i4;
		uint32_t L_18;
		L_18 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_14, L_15, L_16, L_17, NULL);
		uint32_t L_19 = ___R25;
		uint32_t L_20 = ___p3;
		uint32_t L_21 = ___p0i4;
		uint32_t L_22;
		L_22 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_18, L_19, L_20, L_21, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_13))), (uint32_t)L_22);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0040:
	{
		int32_t L_24 = V_1;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_sub(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_zint_sub_mAD454B35A3228E8F547562F40C5A833F0F3AE4C4 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___bsrc2, int32_t ___b3, int32_t ___len4, uint32_t ___ctl5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		V_1 = 0;
		uint32_t L_0 = ___ctl5;
		V_2 = ((int32_t)(uint32_t)((-((int64_t)(uint64_t)L_0))));
		V_0 = 0;
		goto IL_003d;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___asrc0;
		int32_t L_2 = ___a1;
		int32_t L_3 = V_0;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint32_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		uint32_t L_6 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___bsrc2;
		int32_t L_8 = ___b3;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		uint32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		uint32_t L_12 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_11)), (int32_t)L_12));
		uint32_t L_13 = V_4;
		V_1 = ((int32_t)((uint32_t)L_13>>((int32_t)31)));
		uint32_t L_14 = V_3;
		uint32_t L_15 = V_4;
		uint32_t L_16 = V_3;
		uint32_t L_17 = V_2;
		V_3 = ((int32_t)((int32_t)L_14^((int32_t)(((int32_t)(((int32_t)((int32_t)L_15&((int32_t)2147483647LL)))^(int32_t)L_16))&(int32_t)L_17))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___asrc0;
		int32_t L_19 = ___a1;
		int32_t L_20 = V_0;
		uint32_t L_21 = V_3;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, L_20))), (uint32_t)L_21);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_003d:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___len4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_000c;
		}
	}
	{
		uint32_t L_25 = V_1;
		return L_25;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_mul_small(System.UInt32[],System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_zint_mul_small_mB77F1B1585761BE4710BA9687E6933137B0F48E6 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___msrc0, int32_t ___m1, int32_t ___mlen2, uint32_t ___x3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		V_1 = 0;
		V_0 = 0;
		goto IL_002b;
	}

IL_0006:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___msrc0;
		int32_t L_1 = ___m1;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = ___x3;
		uint32_t L_6 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_5))), ((int64_t)(uint64_t)L_6)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___msrc0;
		int32_t L_8 = ___m1;
		int32_t L_9 = V_0;
		uint64_t L_10 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, L_9))), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_10)&((int32_t)2147483647LL))));
		uint64_t L_11 = V_2;
		V_1 = ((int32_t)(uint32_t)((int64_t)((uint64_t)L_11>>((int32_t)31))));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002b:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = ___mlen2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0006;
		}
	}
	{
		uint32_t L_15 = V_1;
		return L_15;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_mod_small_uint(System.UInt32[],System.Int32,System.Int32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_zint_mod_small_uint_mF2A4B42959575DA89BC329C6439D688A4211384F (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___dsrc0, int32_t ___d1, int32_t ___dlen2, uint32_t ___p3, uint32_t ___p0i4, uint32_t ___R25, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___dlen2;
		V_1 = L_0;
		goto IL_0036;
	}

IL_0006:
	{
		uint32_t L_1 = V_0;
		uint32_t L_2 = ___R25;
		uint32_t L_3 = ___p3;
		uint32_t L_4 = ___p0i4;
		uint32_t L_5;
		L_5 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___dsrc0;
		int32_t L_7 = ___d1;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		uint32_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		uint32_t L_11 = ___p3;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11));
		uint32_t L_12 = V_2;
		uint32_t L_13 = ___p3;
		uint32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, ((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)L_13)&((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_14>>((int32_t)31))))))))))));
		uint32_t L_15 = V_0;
		uint32_t L_16 = V_2;
		uint32_t L_17 = ___p3;
		uint32_t L_18;
		L_18 = FalconKeygen_modp_add_m0C9050405D198B39828FE8729BC3C3B1CFCF41B2(__this, L_15, L_16, L_17, NULL);
		V_0 = L_18;
	}

IL_0036:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		uint32_t L_21 = V_0;
		return L_21;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_mod_small_signed(System.UInt32[],System.Int32,System.Int32,System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_zint_mod_small_signed_m8C67FB119B15C5E02BC12B3D0B9AEFB26C9829C3 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___dsrc0, int32_t ___d1, int32_t ___dlen2, uint32_t ___p3, uint32_t ___p0i4, uint32_t ___R25, uint32_t ___Rx6, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___dlen2;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___dsrc0;
		int32_t L_2 = ___d1;
		int32_t L_3 = ___dlen2;
		uint32_t L_4 = ___p3;
		uint32_t L_5 = ___p0i4;
		uint32_t L_6 = ___R25;
		uint32_t L_7;
		L_7 = FalconKeygen_zint_mod_small_uint_mF2A4B42959575DA89BC329C6439D688A4211384F(__this, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		uint32_t L_8 = V_0;
		uint32_t L_9 = ___Rx6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___dsrc0;
		int32_t L_11 = ___d1;
		int32_t L_12 = ___dlen2;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_11, L_12)), 1));
		uint32_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		uint32_t L_15 = ___p3;
		uint32_t L_16;
		L_16 = FalconKeygen_modp_sub_m209143B45E60A57D543566124663AA52011EBFEE(__this, L_8, ((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)L_9)&((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_14>>((int32_t)30)))))))))), L_15, NULL);
		V_0 = L_16;
		uint32_t L_17 = V_0;
		return L_17;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_add_mul_small(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_add_mul_small_m4534816232A7144C3BDAF176AC1DBFCAE4D1AD03 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xsrc0, int32_t ___x1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ysrc2, int32_t ___y3, int32_t ___len4, uint32_t ___s5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		V_1 = 0;
		V_0 = 0;
		goto IL_0035;
	}

IL_0006:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___xsrc0;
		int32_t L_1 = ___x1;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___ysrc2;
		int32_t L_6 = ___y3;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint32_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		uint32_t L_10 = ___s5;
		uint32_t L_11 = V_2;
		uint32_t L_12 = V_1;
		V_3 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_9), ((int64_t)(uint64_t)L_10))), ((int64_t)(uint64_t)L_11))), ((int64_t)(uint64_t)L_12)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___xsrc0;
		int32_t L_14 = ___x1;
		int32_t L_15 = V_0;
		uint64_t L_16 = V_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_14, L_15))), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_16)&((int32_t)2147483647LL))));
		uint64_t L_17 = V_3;
		V_1 = ((int32_t)(uint32_t)((int64_t)((uint64_t)L_17>>((int32_t)31))));
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0035:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = ___len4;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0006;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___xsrc0;
		int32_t L_22 = ___x1;
		int32_t L_23 = ___len4;
		uint32_t L_24 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (uint32_t)L_24);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_norm_zero(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_norm_zero_m004B1883D9AFC2D9D455F075ADD4E21545AB17C0 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xsrc0, int32_t ___x1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___psrc2, int32_t ___p3, int32_t ___len4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		int32_t L_0 = ___len4;
		V_0 = L_0;
		goto IL_0047;
	}

IL_0009:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___xsrc0;
		int32_t L_2 = ___x1;
		int32_t L_3 = V_0;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint32_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___psrc2;
		int32_t L_7 = ___p3;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		uint32_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		uint32_t L_11 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___psrc2;
		int32_t L_13 = ___p3;
		int32_t L_14 = V_0;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		uint32_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = ((int32_t)((int32_t)L_16&1));
		uint32_t L_17 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((int32_t)((uint32_t)L_10>>1))|((int32_t)((int32_t)L_11<<((int32_t)30))))), (int32_t)L_17));
		uint32_t L_18 = V_4;
		uint32_t L_19 = V_4;
		V_4 = ((int32_t)(((int32_t)((uint32_t)((int32_t)(uint32_t)((-((int64_t)(uint64_t)L_18))))>>((int32_t)31)))|((int32_t)(uint32_t)((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_19>>((int32_t)31))))))))));
		uint32_t L_20 = V_1;
		uint32_t L_21 = V_4;
		uint32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_20|((int32_t)((int32_t)L_21&((int32_t)il2cpp_codegen_subtract(((int32_t)((int32_t)L_22&1)), 1))))));
	}

IL_0047:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___xsrc0;
		int32_t L_26 = ___x1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___psrc2;
		int32_t L_28 = ___p3;
		int32_t L_29 = ___len4;
		uint32_t L_30 = V_1;
		uint32_t L_31;
		L_31 = FalconKeygen_zint_sub_mAD454B35A3228E8F547562F40C5A833F0F3AE4C4(__this, L_25, L_26, L_27, L_28, L_29, ((int32_t)((uint32_t)L_30>>((int32_t)31))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_rebuild_CRT(System.UInt32[],System.Int32,System.Int32,System.Int32,System.Int32,Org.BouncyCastle.Pqc.Crypto.Falcon.FalconSmallPrime[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_rebuild_CRT_mFDDBAA64799A444D72449A4F4866B19D204C9DB5 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xxsrc0, int32_t ___xx1, int32_t ___xlen2, int32_t ___xstride3, int32_t ___num4, FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* ___primes5, int32_t ___normalize_signed6, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc7, int32_t ___tmp8, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___tmpsrc7;
		int32_t L_1 = ___tmp8;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_2 = ___primes5;
		NullCheck(L_2);
		int32_t L_3 = 0;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		uint32_t L_5 = L_4->___p_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		V_0 = 1;
		goto IL_00a7;
	}

IL_0015:
	{
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_6 = ___primes5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		uint32_t L_10 = L_9->___p_0;
		V_2 = L_10;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_11 = ___primes5;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		uint32_t L_15 = L_14->___s_2;
		V_4 = L_15;
		uint32_t L_16 = V_2;
		uint32_t L_17;
		L_17 = FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE(__this, L_16, NULL);
		V_3 = L_17;
		uint32_t L_18 = V_2;
		uint32_t L_19 = V_3;
		uint32_t L_20;
		L_20 = FalconKeygen_modp_R2_mFDF10C899F4DAC34C48E9CA91B075A78FE793634(__this, L_18, L_19, NULL);
		V_5 = L_20;
		V_6 = 0;
		int32_t L_21 = ___xx1;
		V_1 = L_21;
		goto IL_008a;
	}

IL_0043:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___xxsrc0;
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		NullCheck(L_22);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		uint32_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_7 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___xxsrc0;
		int32_t L_28 = V_1;
		int32_t L_29 = V_0;
		uint32_t L_30 = V_2;
		uint32_t L_31 = V_3;
		uint32_t L_32 = V_5;
		uint32_t L_33;
		L_33 = FalconKeygen_zint_mod_small_uint_mF2A4B42959575DA89BC329C6439D688A4211384F(__this, L_27, L_28, L_29, L_30, L_31, L_32, NULL);
		V_8 = L_33;
		uint32_t L_34 = V_4;
		uint32_t L_35 = V_7;
		uint32_t L_36 = V_8;
		uint32_t L_37 = V_2;
		uint32_t L_38;
		L_38 = FalconKeygen_modp_sub_m209143B45E60A57D543566124663AA52011EBFEE(__this, L_35, L_36, L_37, NULL);
		uint32_t L_39 = V_2;
		uint32_t L_40 = V_3;
		uint32_t L_41;
		L_41 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_34, L_38, L_39, L_40, NULL);
		V_9 = L_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___xxsrc0;
		int32_t L_43 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___tmpsrc7;
		int32_t L_45 = ___tmp8;
		int32_t L_46 = V_0;
		uint32_t L_47 = V_9;
		FalconKeygen_zint_add_mul_small_m4534816232A7144C3BDAF176AC1DBFCAE4D1AD03(__this, L_42, L_43, L_44, L_45, L_46, L_47, NULL);
		int32_t L_48 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_1;
		int32_t L_50 = ___xstride3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, L_50));
	}

IL_008a:
	{
		int32_t L_51 = V_6;
		int32_t L_52 = ___num4;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0043;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___tmpsrc7;
		int32_t L_54 = ___tmp8;
		int32_t L_55 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___tmpsrc7;
		int32_t L_57 = ___tmp8;
		int32_t L_58 = V_0;
		uint32_t L_59 = V_2;
		uint32_t L_60;
		L_60 = FalconKeygen_zint_mul_small_mB77F1B1585761BE4710BA9687E6933137B0F48E6(__this, L_56, L_57, L_58, L_59, NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_54, L_55))), (uint32_t)L_60);
		int32_t L_61 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_00a7:
	{
		int32_t L_62 = V_0;
		int32_t L_63 = ___xlen2;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_64 = ___normalize_signed6;
		if (!L_64)
		{
			goto IL_00d3;
		}
	}
	{
		V_0 = 0;
		int32_t L_65 = ___xx1;
		V_1 = L_65;
		goto IL_00ce;
	}

IL_00b8:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___xxsrc0;
		int32_t L_67 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___tmpsrc7;
		int32_t L_69 = ___tmp8;
		int32_t L_70 = ___xlen2;
		FalconKeygen_zint_norm_zero_m004B1883D9AFC2D9D455F075ADD4E21545AB17C0(__this, L_66, L_67, L_68, L_69, L_70, NULL);
		int32_t L_71 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		int32_t L_72 = V_1;
		int32_t L_73 = ___xstride3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_72, L_73));
	}

IL_00ce:
	{
		int32_t L_74 = V_0;
		int32_t L_75 = ___num4;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_00b8;
		}
	}

IL_00d3:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_negate(System.UInt32[],System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_negate_m202887C1232DF7BF7DA769A41032C915FA7D9F66 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, int32_t ___len2, uint32_t ___ctl3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint32_t L_0 = ___ctl3;
		V_1 = L_0;
		uint32_t L_1 = ___ctl3;
		V_2 = ((int32_t)((uint32_t)((int32_t)(uint32_t)((-((int64_t)(uint64_t)L_1))))>>1));
		V_0 = 0;
		goto IL_0030;
	}

IL_000f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___asrc0;
		int32_t L_3 = ___a1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		uint32_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		uint32_t L_7 = V_3;
		uint32_t L_8 = V_2;
		uint32_t L_9 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_7^(int32_t)L_8)), (int32_t)L_9));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___asrc0;
		int32_t L_11 = ___a1;
		int32_t L_12 = V_0;
		uint32_t L_13 = V_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, L_12))), (uint32_t)((int32_t)((int32_t)L_13&((int32_t)2147483647LL))));
		uint32_t L_14 = V_3;
		V_1 = ((int32_t)((uint32_t)L_14>>((int32_t)31)));
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0030:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = ___len2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_co_reduce(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.Int64,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_zint_co_reduce_m5964FFE0832870992D1580F260F28F19BDFA0C52 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___bsrc2, int32_t ___b3, int32_t ___len4, int64_t ___xa5, int64_t ___xb6, int64_t ___ya7, int64_t ___yb8, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	{
		V_1 = ((int64_t)0);
		V_2 = ((int64_t)0);
		V_0 = 0;
		goto IL_006b;
	}

IL_000a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___asrc0;
		int32_t L_1 = ___a1;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___bsrc2;
		int32_t L_6 = ___b3;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint32_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = L_9;
		uint32_t L_10 = L_4;
		int64_t L_11 = ___xa5;
		uint32_t L_12 = V_5;
		int64_t L_13 = ___xb6;
		int64_t L_14 = V_1;
		V_6 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_10), L_11)), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_12), L_13)))), L_14));
		int64_t L_15 = ___ya7;
		uint32_t L_16 = V_5;
		int64_t L_17 = ___yb8;
		int64_t L_18 = V_2;
		V_7 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_10), L_15)), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_16), L_17)))), L_18));
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___asrc0;
		int32_t L_21 = ___a1;
		int32_t L_22 = V_0;
		uint64_t L_23 = V_6;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_21, L_22)), 1))), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_23)&((int32_t)2147483647LL))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___bsrc2;
		int32_t L_25 = ___b3;
		int32_t L_26 = V_0;
		uint64_t L_27 = V_7;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_25, L_26)), 1))), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_27)&((int32_t)2147483647LL))));
	}

IL_005b:
	{
		uint64_t L_28 = V_6;
		V_1 = ((int64_t)((int64_t)L_28>>((int32_t)31)));
		uint64_t L_29 = V_7;
		V_2 = ((int64_t)((int64_t)L_29>>((int32_t)31)));
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_006b:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___len4;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_000a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___asrc0;
		int32_t L_34 = ___a1;
		int32_t L_35 = ___len4;
		int64_t L_36 = V_1;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_34, L_35)), 1))), (uint32_t)((int32_t)(uint32_t)L_36));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___bsrc2;
		int32_t L_38 = ___b3;
		int32_t L_39 = ___len4;
		int64_t L_40 = V_2;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_38, L_39)), 1))), (uint32_t)((int32_t)(uint32_t)L_40));
		int64_t L_41 = V_1;
		V_3 = ((int32_t)(uint32_t)((int64_t)((uint64_t)L_41>>((int32_t)63))));
		int64_t L_42 = V_2;
		V_4 = ((int32_t)(uint32_t)((int64_t)((uint64_t)L_42>>((int32_t)63))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___asrc0;
		int32_t L_44 = ___a1;
		int32_t L_45 = ___len4;
		uint32_t L_46 = V_3;
		FalconKeygen_zint_negate_m202887C1232DF7BF7DA769A41032C915FA7D9F66(__this, L_43, L_44, L_45, L_46, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___bsrc2;
		int32_t L_48 = ___b3;
		int32_t L_49 = ___len4;
		uint32_t L_50 = V_4;
		FalconKeygen_zint_negate_m202887C1232DF7BF7DA769A41032C915FA7D9F66(__this, L_47, L_48, L_49, L_50, NULL);
		uint32_t L_51 = V_3;
		uint32_t L_52 = V_4;
		return ((int32_t)((int32_t)L_51|((int32_t)((int32_t)L_52<<1))));
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_finish_mod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_finish_mod_m1D8A316D66CB2A9E92FC037D2793042A7392AB2D (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, int32_t ___len2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___msrc3, int32_t ___m4, uint32_t ___neg5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		V_1 = 0;
		V_0 = 0;
		goto IL_001d;
	}

IL_0006:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___asrc0;
		int32_t L_1 = ___a1;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___msrc3;
		int32_t L_6 = ___m4;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint32_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		uint32_t L_10 = V_1;
		V_1 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_9)), (int32_t)L_10))>>((int32_t)31)));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_001d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___len2;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0006;
		}
	}
	{
		uint32_t L_14 = ___neg5;
		V_2 = ((int32_t)((uint32_t)((int32_t)(uint32_t)((-((int64_t)(uint64_t)L_14))))>>1));
		uint32_t L_15 = ___neg5;
		uint32_t L_16 = V_1;
		V_3 = ((int32_t)(uint32_t)((-((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_15|((int32_t)il2cpp_codegen_subtract(1, (int32_t)L_16)))))))));
		uint32_t L_17 = ___neg5;
		V_1 = L_17;
		V_0 = 0;
		goto IL_006e;
	}

IL_003a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___asrc0;
		int32_t L_19 = ___a1;
		int32_t L_20 = V_0;
		NullCheck(L_18);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		uint32_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_4 = L_22;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___msrc3;
		int32_t L_24 = ___m4;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		uint32_t L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		uint32_t L_28 = V_2;
		uint32_t L_29 = V_3;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_27^(int32_t)L_28))&(int32_t)L_29));
		uint32_t L_30 = V_4;
		uint32_t L_31 = V_5;
		uint32_t L_32 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31)), (int32_t)L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___asrc0;
		int32_t L_34 = ___a1;
		int32_t L_35 = V_0;
		uint32_t L_36 = V_4;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_34, L_35))), (uint32_t)((int32_t)((int32_t)L_36&((int32_t)2147483647LL))));
		uint32_t L_37 = V_4;
		V_1 = ((int32_t)((uint32_t)L_37>>((int32_t)31)));
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_006e:
	{
		int32_t L_39 = V_0;
		int32_t L_40 = ___len2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_003a;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_co_reduce_mod(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32,System.Int64,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_co_reduce_mod_m9802F2AA3F636DC4B9D29281C1EDF219A9205830 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___asrc0, int32_t ___a1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___bsrc2, int32_t ___b3, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___msrc4, int32_t ___m5, int32_t ___len6, uint32_t ___m0i7, int64_t ___xa8, int64_t ___xb9, int64_t ___ya10, int64_t ___yb11, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	{
		V_1 = ((int64_t)0);
		V_2 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___asrc0;
		int32_t L_1 = ___a1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int64_t L_4 = ___xa8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___bsrc2;
		int32_t L_6 = ___b3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int64_t L_9 = ___xb9;
		uint32_t L_10 = ___m0i7;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)(uint32_t)L_4))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)(uint32_t)L_9))))), (int32_t)L_10))&((int32_t)2147483647LL)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___asrc0;
		int32_t L_12 = ___a1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int64_t L_15 = ___ya10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___bsrc2;
		int32_t L_17 = ___b3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int64_t L_20 = ___yb11;
		uint32_t L_21 = ___m0i7;
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)(uint32_t)L_15))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)(uint32_t)L_20))))), (int32_t)L_21))&((int32_t)2147483647LL)));
		V_0 = 0;
		goto IL_00b9;
	}

IL_003f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___asrc0;
		int32_t L_23 = ___a1;
		int32_t L_24 = V_0;
		NullCheck(L_22);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		uint32_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___bsrc2;
		int32_t L_28 = ___b3;
		int32_t L_29 = V_0;
		NullCheck(L_27);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_28, L_29));
		uint32_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_5 = L_31;
		uint32_t L_32 = L_26;
		int64_t L_33 = ___xa8;
		uint32_t L_34 = V_5;
		int64_t L_35 = ___xb9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___msrc4;
		int32_t L_37 = ___m5;
		int32_t L_38 = V_0;
		NullCheck(L_36);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
		uint32_t L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		uint32_t L_41 = V_3;
		int64_t L_42 = V_1;
		V_6 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_32), L_33)), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_34), L_35)))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_40), ((int64_t)(uint64_t)L_41))))), L_42));
		int64_t L_43 = ___ya10;
		uint32_t L_44 = V_5;
		int64_t L_45 = ___yb11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___msrc4;
		int32_t L_47 = ___m5;
		int32_t L_48 = V_0;
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_47, L_48));
		uint32_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		uint32_t L_51 = V_4;
		int64_t L_52 = V_2;
		V_7 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_32), L_43)), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_44), L_45)))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_50), ((int64_t)(uint64_t)L_51))))), L_52));
		int32_t L_53 = V_0;
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___asrc0;
		int32_t L_55 = ___a1;
		int32_t L_56 = V_0;
		uint64_t L_57 = V_6;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_55, L_56)), 1))), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_57)&((int32_t)2147483647LL))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___bsrc2;
		int32_t L_59 = ___b3;
		int32_t L_60 = V_0;
		uint64_t L_61 = V_7;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_59, L_60)), 1))), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_61)&((int32_t)2147483647LL))));
	}

IL_00a9:
	{
		uint64_t L_62 = V_6;
		V_1 = ((int64_t)((int64_t)L_62>>((int32_t)31)));
		uint64_t L_63 = V_7;
		V_2 = ((int64_t)((int64_t)L_63>>((int32_t)31)));
		int32_t L_64 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_00b9:
	{
		int32_t L_65 = V_0;
		int32_t L_66 = ___len6;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_003f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___asrc0;
		int32_t L_68 = ___a1;
		int32_t L_69 = ___len6;
		int64_t L_70 = V_1;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_68, L_69)), 1))), (uint32_t)((int32_t)(uint32_t)L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___bsrc2;
		int32_t L_72 = ___b3;
		int32_t L_73 = ___len6;
		int64_t L_74 = V_2;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_72, L_73)), 1))), (uint32_t)((int32_t)(uint32_t)L_74));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___asrc0;
		int32_t L_76 = ___a1;
		int32_t L_77 = ___len6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = ___msrc4;
		int32_t L_79 = ___m5;
		int64_t L_80 = V_1;
		FalconKeygen_zint_finish_mod_m1D8A316D66CB2A9E92FC037D2793042A7392AB2D(__this, L_75, L_76, L_77, L_78, L_79, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_80>>((int32_t)63)))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___bsrc2;
		int32_t L_82 = ___b3;
		int32_t L_83 = ___len6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___msrc4;
		int32_t L_85 = ___m5;
		int64_t L_86 = V_2;
		FalconKeygen_zint_finish_mod_m1D8A316D66CB2A9E92FC037D2793042A7392AB2D(__this, L_81, L_82, L_83, L_84, L_85, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_86>>((int32_t)63)))), NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_bezout(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_zint_bezout_m14FD9F7D82925C64BDFFF1E50FC3918CDE77AB46 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___usrc0, int32_t ___u1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___vsrc2, int32_t ___v3, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xsrc4, int32_t ___x5, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ysrc6, int32_t ___y7, int32_t ___len8, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc9, int32_t ___tmp10, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	int64_t V_22 = 0;
	int64_t V_23 = 0;
	int64_t V_24 = 0;
	int64_t V_25 = 0;
	int32_t V_26 = 0;
	uint32_t V_27 = 0;
	uint32_t V_28 = 0;
	uint32_t V_29 = 0;
	uint32_t V_30 = 0;
	uint32_t V_31 = 0;
	uint32_t V_32 = 0;
	uint32_t V_33 = 0;
	uint32_t V_34 = 0;
	uint32_t V_35 = 0;
	uint64_t V_36 = 0;
	{
		int32_t L_0 = ___len8;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		int32_t L_1 = ___u1;
		V_0 = L_1;
		int32_t L_2 = ___v3;
		V_2 = L_2;
		int32_t L_3 = ___tmp10;
		V_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = ___len8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int32_t L_6 = V_3;
		int32_t L_7 = ___len8;
		V_4 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		int32_t L_8 = V_4;
		int32_t L_9 = ___len8;
		V_5 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___xsrc4;
		int32_t L_11 = ___x5;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		uint32_t L_14;
		L_14 = FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE(__this, L_13, NULL);
		V_6 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___ysrc6;
		int32_t L_16 = ___y7;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		uint32_t L_19;
		L_19 = FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE(__this, L_18, NULL);
		V_7 = L_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___xsrc4;
		int32_t L_21 = ___x5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___tmpsrc9;
		int32_t L_23 = V_4;
		int32_t L_24 = ___len8;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, L_21, (RuntimeArray*)L_22, L_23, L_24, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___ysrc6;
		int32_t L_26 = ___y7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___tmpsrc9;
		int32_t L_28 = V_5;
		int32_t L_29 = ___len8;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_25, L_26, (RuntimeArray*)L_27, L_28, L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___usrc0;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint32_t)1);
		V_11 = 1;
		goto IL_0075;
	}

IL_0061:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___usrc0;
		int32_t L_33 = V_0;
		int32_t L_34 = V_11;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, L_34))), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___vsrc2;
		int32_t L_36 = V_2;
		int32_t L_37 = V_11;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, L_37))), (uint32_t)0);
		int32_t L_38 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0075:
	{
		int32_t L_39 = V_11;
		int32_t L_40 = ___len8;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0061;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___vsrc2;
		int32_t L_42 = V_2;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___ysrc6;
		int32_t L_44 = ___y7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___tmpsrc9;
		int32_t L_46 = V_1;
		int32_t L_47 = ___len8;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_43, L_44, (RuntimeArray*)L_45, L_46, L_47, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___xsrc4;
		int32_t L_49 = ___x5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___tmpsrc9;
		int32_t L_51 = V_3;
		int32_t L_52 = ___len8;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_48, L_49, (RuntimeArray*)L_50, L_51, L_52, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___tmpsrc9;
		int32_t L_54 = V_3;
		NullCheck(L_53);
		uint32_t* L_55 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)));
		int32_t L_56 = *((uint32_t*)L_55);
		*((int32_t*)L_55) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_56, 1));
		int32_t L_57 = ___len8;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)62), L_57)), ((int32_t)30)));
		goto IL_0370;
	}

IL_00b7:
	{
		V_12 = (-1);
		V_13 = (-1);
		V_14 = 0;
		V_15 = 0;
		V_16 = 0;
		V_17 = 0;
		int32_t L_58 = ___len8;
		V_10 = L_58;
		goto IL_0130;
	}

IL_00cf:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___tmpsrc9;
		int32_t L_60 = V_4;
		int32_t L_61 = V_10;
		NullCheck(L_59);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add(L_60, L_61));
		uint32_t L_63 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_28 = L_63;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___tmpsrc9;
		int32_t L_65 = V_5;
		int32_t L_66 = V_10;
		NullCheck(L_64);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_65, L_66));
		uint32_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_29 = L_68;
		uint32_t L_69 = V_14;
		uint32_t L_70 = V_14;
		uint32_t L_71 = V_28;
		uint32_t L_72 = V_12;
		V_14 = ((int32_t)((int32_t)L_69^((int32_t)(((int32_t)((int32_t)L_70^(int32_t)L_71))&(int32_t)L_72))));
		uint32_t L_73 = V_15;
		uint32_t L_74 = V_15;
		uint32_t L_75 = V_28;
		uint32_t L_76 = V_13;
		V_15 = ((int32_t)((int32_t)L_73^((int32_t)(((int32_t)((int32_t)L_74^(int32_t)L_75))&(int32_t)L_76))));
		uint32_t L_77 = V_16;
		uint32_t L_78 = V_16;
		uint32_t L_79 = V_29;
		uint32_t L_80 = V_12;
		V_16 = ((int32_t)((int32_t)L_77^((int32_t)(((int32_t)((int32_t)L_78^(int32_t)L_79))&(int32_t)L_80))));
		uint32_t L_81 = V_17;
		uint32_t L_82 = V_17;
		uint32_t L_83 = V_29;
		uint32_t L_84 = V_13;
		V_17 = ((int32_t)((int32_t)L_81^((int32_t)(((int32_t)((int32_t)L_82^(int32_t)L_83))&(int32_t)L_84))));
		uint32_t L_85 = V_12;
		V_13 = L_85;
		uint32_t L_86 = V_12;
		uint32_t L_87 = V_28;
		uint32_t L_88 = V_29;
		V_12 = ((int32_t)((int32_t)L_86&((int32_t)il2cpp_codegen_subtract(((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_87|(int32_t)L_88)), ((int32_t)2147483647LL)))>>((int32_t)31))), 1))));
	}

IL_0130:
	{
		int32_t L_89 = V_10;
		int32_t L_90 = L_89;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_90, 1));
		if ((((int32_t)L_90) > ((int32_t)0)))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_91 = V_15;
		uint32_t L_92 = V_14;
		uint32_t L_93 = V_13;
		V_15 = ((int32_t)((int32_t)L_91|((int32_t)((int32_t)L_92&(int32_t)L_93))));
		uint32_t L_94 = V_14;
		uint32_t L_95 = V_13;
		V_14 = ((int32_t)((int32_t)L_94&(int32_t)((~L_95))));
		uint32_t L_96 = V_17;
		uint32_t L_97 = V_16;
		uint32_t L_98 = V_13;
		V_17 = ((int32_t)((int32_t)L_96|((int32_t)((int32_t)L_97&(int32_t)L_98))));
		uint32_t L_99 = V_16;
		uint32_t L_100 = V_13;
		V_16 = ((int32_t)((int32_t)L_99&(int32_t)((~L_100))));
		uint32_t L_101 = V_14;
		uint32_t L_102 = V_15;
		V_18 = ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_101)<<((int32_t)31))), ((int64_t)(uint64_t)L_102)));
		uint32_t L_103 = V_16;
		uint32_t L_104 = V_17;
		V_19 = ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_103)<<((int32_t)31))), ((int64_t)(uint64_t)L_104)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_105 = ___tmpsrc9;
		int32_t L_106 = V_4;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		uint32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_20 = L_108;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_109 = ___tmpsrc9;
		int32_t L_110 = V_5;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		uint32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_21 = L_112;
		V_22 = ((int64_t)1);
		V_23 = ((int64_t)0);
		V_24 = ((int64_t)0);
		V_25 = ((int64_t)1);
		V_26 = 0;
		goto IL_02cc;
	}

IL_019c:
	{
		uint64_t L_113 = V_19;
		uint64_t L_114 = V_18;
		V_36 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_113, (int64_t)L_114));
		uint64_t L_115 = V_36;
		uint64_t L_116 = V_18;
		uint64_t L_117 = V_19;
		uint64_t L_118 = V_18;
		uint64_t L_119 = V_36;
		V_30 = ((int32_t)(uint32_t)((int64_t)((uint64_t)((int64_t)((int64_t)L_115^((int64_t)(((int64_t)((int64_t)L_116^(int64_t)L_117))&((int64_t)((int64_t)L_118^(int64_t)L_119))))))>>((int32_t)63))));
		uint32_t L_120 = V_20;
		int32_t L_121 = V_26;
		V_31 = ((int32_t)(((int32_t)((uint32_t)L_120>>((int32_t)(L_121&((int32_t)31)))))&1));
		uint32_t L_122 = V_21;
		int32_t L_123 = V_26;
		V_32 = ((int32_t)(((int32_t)((uint32_t)L_122>>((int32_t)(L_123&((int32_t)31)))))&1));
		uint32_t L_124 = V_31;
		uint32_t L_125 = V_32;
		uint32_t L_126 = V_30;
		V_33 = ((int32_t)(((int32_t)((int32_t)L_124&(int32_t)L_125))&(int32_t)L_126));
		uint32_t L_127 = V_31;
		uint32_t L_128 = V_32;
		uint32_t L_129 = V_30;
		V_34 = ((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_127&(int32_t)L_128))))&((int64_t)((int32_t)((~L_129)))))));
		uint32_t L_130 = V_33;
		uint32_t L_131 = V_31;
		V_35 = ((int32_t)((int32_t)L_130|((int32_t)((int32_t)L_131^1))));
		uint32_t L_132 = V_20;
		uint32_t L_133 = V_21;
		uint32_t L_134 = V_33;
		V_20 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_132, ((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)L_133)&((-((int64_t)(uint64_t)L_134))))))));
		uint64_t L_135 = V_18;
		uint64_t L_136 = V_19;
		uint32_t L_137 = V_33;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_135, ((int64_t)((int64_t)L_136&((-((int64_t)(uint64_t)L_137)))))));
		int64_t L_138 = V_22;
		int64_t L_139 = V_24;
		uint32_t L_140 = V_33;
		V_22 = ((int64_t)il2cpp_codegen_subtract(L_138, ((int64_t)(L_139&((-((int64_t)(uint64_t)L_140)))))));
		int64_t L_141 = V_23;
		int64_t L_142 = V_25;
		uint32_t L_143 = V_33;
		V_23 = ((int64_t)il2cpp_codegen_subtract(L_141, ((int64_t)(L_142&((-((int64_t)(uint64_t)L_143)))))));
		uint32_t L_144 = V_21;
		uint32_t L_145 = V_20;
		uint32_t L_146 = V_34;
		V_21 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_144, ((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)L_145)&((-((int64_t)(uint64_t)L_146))))))));
		uint64_t L_147 = V_19;
		uint64_t L_148 = V_18;
		uint32_t L_149 = V_34;
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_147, ((int64_t)((int64_t)L_148&((-((int64_t)(uint64_t)L_149)))))));
		int64_t L_150 = V_24;
		int64_t L_151 = V_22;
		uint32_t L_152 = V_34;
		V_24 = ((int64_t)il2cpp_codegen_subtract(L_150, ((int64_t)(L_151&((-((int64_t)(uint64_t)L_152)))))));
		int64_t L_153 = V_25;
		int64_t L_154 = V_23;
		uint32_t L_155 = V_34;
		V_25 = ((int64_t)il2cpp_codegen_subtract(L_153, ((int64_t)(L_154&((-((int64_t)(uint64_t)L_155)))))));
		uint32_t L_156 = V_20;
		uint32_t L_157 = V_20;
		uint32_t L_158 = V_35;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_156, ((int32_t)((int32_t)L_157&((int32_t)il2cpp_codegen_subtract((int32_t)L_158, 1))))));
		int64_t L_159 = V_22;
		int64_t L_160 = V_22;
		uint32_t L_161 = V_35;
		V_22 = ((int64_t)il2cpp_codegen_add(L_159, ((int64_t)(L_160&((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_161), ((int64_t)1)))))));
		int64_t L_162 = V_23;
		int64_t L_163 = V_23;
		uint32_t L_164 = V_35;
		V_23 = ((int64_t)il2cpp_codegen_add(L_162, ((int64_t)(L_163&((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_164), ((int64_t)1)))))));
		uint64_t L_165 = V_18;
		uint64_t L_166 = V_18;
		uint64_t L_167 = V_18;
		uint32_t L_168 = V_35;
		V_18 = ((int64_t)((int64_t)L_165^((int64_t)(((int64_t)((int64_t)L_166^((int64_t)((uint64_t)L_167>>1))))&((-((int64_t)(uint64_t)L_168)))))));
		uint32_t L_169 = V_21;
		uint32_t L_170 = V_21;
		uint32_t L_171 = V_35;
		V_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_169, ((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)L_170)&((-((int64_t)(uint64_t)L_171))))))));
		int64_t L_172 = V_24;
		int64_t L_173 = V_24;
		uint32_t L_174 = V_35;
		V_24 = ((int64_t)il2cpp_codegen_add(L_172, ((int64_t)(L_173&((-((int64_t)(uint64_t)L_174)))))));
		int64_t L_175 = V_25;
		int64_t L_176 = V_25;
		uint32_t L_177 = V_35;
		V_25 = ((int64_t)il2cpp_codegen_add(L_175, ((int64_t)(L_176&((-((int64_t)(uint64_t)L_177)))))));
		uint64_t L_178 = V_19;
		uint64_t L_179 = V_19;
		uint64_t L_180 = V_19;
		uint32_t L_181 = V_35;
		V_19 = ((int64_t)((int64_t)L_178^((int64_t)(((int64_t)((int64_t)L_179^((int64_t)((uint64_t)L_180>>1))))&((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_181), ((int64_t)1)))))));
		int32_t L_182 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_182, 1));
	}

IL_02cc:
	{
		int32_t L_183 = V_26;
		if ((((int32_t)L_183) < ((int32_t)((int32_t)31))))
		{
			goto IL_019c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_184 = ___tmpsrc9;
		int32_t L_185 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_186 = ___tmpsrc9;
		int32_t L_187 = V_5;
		int32_t L_188 = ___len8;
		int64_t L_189 = V_22;
		int64_t L_190 = V_23;
		int64_t L_191 = V_24;
		int64_t L_192 = V_25;
		uint32_t L_193;
		L_193 = FalconKeygen_zint_co_reduce_m5964FFE0832870992D1580F260F28F19BDFA0C52(__this, L_184, L_185, L_186, L_187, L_188, L_189, L_190, L_191, L_192, NULL);
		V_27 = L_193;
		int64_t L_194 = V_22;
		int64_t L_195 = V_22;
		int64_t L_196 = V_22;
		uint32_t L_197 = V_27;
		V_22 = ((int64_t)il2cpp_codegen_subtract(L_194, ((int64_t)(((int64_t)il2cpp_codegen_add(L_195, L_196))&((-((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_197&1))))))))));
		int64_t L_198 = V_23;
		int64_t L_199 = V_23;
		int64_t L_200 = V_23;
		uint32_t L_201 = V_27;
		V_23 = ((int64_t)il2cpp_codegen_subtract(L_198, ((int64_t)(((int64_t)il2cpp_codegen_add(L_199, L_200))&((-((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_201&1))))))))));
		int64_t L_202 = V_24;
		int64_t L_203 = V_24;
		int64_t L_204 = V_24;
		uint32_t L_205 = V_27;
		V_24 = ((int64_t)il2cpp_codegen_subtract(L_202, ((int64_t)(((int64_t)il2cpp_codegen_add(L_203, L_204))&((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_205>>1))))))))));
		int64_t L_206 = V_25;
		int64_t L_207 = V_25;
		int64_t L_208 = V_25;
		uint32_t L_209 = V_27;
		V_25 = ((int64_t)il2cpp_codegen_subtract(L_206, ((int64_t)(((int64_t)il2cpp_codegen_add(L_207, L_208))&((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_209>>1))))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_210 = ___usrc0;
		int32_t L_211 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_212 = ___tmpsrc9;
		int32_t L_213 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_214 = ___ysrc6;
		int32_t L_215 = ___y7;
		int32_t L_216 = ___len8;
		uint32_t L_217 = V_7;
		int64_t L_218 = V_22;
		int64_t L_219 = V_23;
		int64_t L_220 = V_24;
		int64_t L_221 = V_25;
		FalconKeygen_zint_co_reduce_mod_m9802F2AA3F636DC4B9D29281C1EDF219A9205830(__this, L_210, L_211, L_212, L_213, L_214, L_215, L_216, L_217, L_218, L_219, L_220, L_221, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_222 = ___vsrc2;
		int32_t L_223 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_224 = ___tmpsrc9;
		int32_t L_225 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_226 = ___xsrc4;
		int32_t L_227 = ___x5;
		int32_t L_228 = ___len8;
		uint32_t L_229 = V_6;
		int64_t L_230 = V_22;
		int64_t L_231 = V_23;
		int64_t L_232 = V_24;
		int64_t L_233 = V_25;
		FalconKeygen_zint_co_reduce_mod_m9802F2AA3F636DC4B9D29281C1EDF219A9205830(__this, L_222, L_223, L_224, L_225, L_226, L_227, L_228, L_229, L_230, L_231, L_232, L_233, NULL);
		uint32_t L_234 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_234, ((int32_t)30)));
	}

IL_0370:
	{
		uint32_t L_235 = V_8;
		if ((!(((uint32_t)L_235) < ((uint32_t)((int32_t)30)))))
		{
			goto IL_00b7;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_236 = ___tmpsrc9;
		int32_t L_237 = V_4;
		NullCheck(L_236);
		int32_t L_238 = L_237;
		uint32_t L_239 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		V_9 = ((int32_t)((int32_t)L_239^1));
		V_10 = 1;
		goto IL_039a;
	}

IL_0387:
	{
		uint32_t L_240 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_241 = ___tmpsrc9;
		int32_t L_242 = V_4;
		int32_t L_243 = V_10;
		NullCheck(L_241);
		int32_t L_244 = ((int32_t)il2cpp_codegen_add(L_242, L_243));
		uint32_t L_245 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		V_9 = ((int32_t)((int32_t)L_240|(int32_t)L_245));
		int32_t L_246 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_246, 1));
	}

IL_039a:
	{
		int32_t L_247 = V_10;
		int32_t L_248 = ___len8;
		if ((((int32_t)L_247) < ((int32_t)L_248)))
		{
			goto IL_0387;
		}
	}
	{
		uint32_t L_249 = V_9;
		uint32_t L_250 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_251 = ___xsrc4;
		int32_t L_252 = ___x5;
		NullCheck(L_251);
		int32_t L_253 = L_252;
		uint32_t L_254 = (L_251)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_255 = ___ysrc6;
		int32_t L_256 = ___y7;
		NullCheck(L_255);
		int32_t L_257 = L_256;
		uint32_t L_258 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		return ((int32_t)((int64_t)(((int64_t)(((int64_t)il2cpp_codegen_subtract(((int64_t)1), ((int64_t)(((int64_t)(((int64_t)(uint64_t)L_249)|((-((int64_t)(uint64_t)L_250)))))>>((int32_t)31)))))&((int64_t)(uint64_t)L_254)))&((int64_t)(uint64_t)L_258))));
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_add_scaled_mul_small(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.Int32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_add_scaled_mul_small_m5023A209696BCE13F5D513C10957E768F0A4C53A (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xsrc0, int32_t ___x1, int32_t ___xlen2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ysrc3, int32_t ___y4, int32_t ___ylen5, int32_t ___k6, uint32_t ___sch7, uint32_t ___scl8, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint64_t V_6 = 0;
	uint32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___ylen5;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___ysrc3;
		int32_t L_2 = ___y4;
		int32_t L_3 = ___ylen5;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1));
		uint32_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int32_t)((uint32_t)((int32_t)(uint32_t)((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_5>>((int32_t)30))))))))>>1));
		V_2 = 0;
		V_3 = 0;
		uint32_t L_6 = ___sch7;
		V_0 = L_6;
		goto IL_007f;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		uint32_t L_8 = ___sch7;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_7, (int32_t)L_8));
		int32_t L_9 = V_4;
		int32_t L_10 = ___ylen5;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0030;
		}
	}
	{
		uint32_t L_11 = V_1;
		G_B6_0 = L_11;
		goto IL_0038;
	}

IL_0030:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___ysrc3;
		int32_t L_13 = ___y4;
		int32_t L_14 = V_4;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		uint32_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		G_B6_0 = L_16;
	}

IL_0038:
	{
		uint32_t L_17 = G_B6_0;
		uint32_t L_18 = ___scl8;
		uint32_t L_19 = V_2;
		V_5 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_17<<((int32_t)((int32_t)L_18&((int32_t)31)))))&((int32_t)2147483647LL)))|(int32_t)L_19));
		uint32_t L_20 = ___scl8;
		V_2 = ((int32_t)((uint32_t)L_17>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)31), (int32_t)L_20))&((int32_t)31)))));
		uint32_t L_21 = V_5;
		int32_t L_22 = ___k6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___xsrc0;
		int32_t L_24 = ___x1;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		uint32_t L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = V_3;
		V_6 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_21), ((int64_t)L_22))), ((int64_t)(uint64_t)L_27))), ((int64_t)L_28)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___xsrc0;
		int32_t L_30 = ___x1;
		int32_t L_31 = V_0;
		uint64_t L_32 = V_6;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_30, L_31))), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_32)&((int32_t)2147483647LL))));
		uint64_t L_33 = V_6;
		V_3 = ((int32_t)(uint32_t)((int64_t)((uint64_t)L_33>>((int32_t)31))));
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_007f:
	{
		int32_t L_35 = V_0;
		int32_t L_36 = ___xlen2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0021;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_sub_scaled(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_zint_sub_scaled_m4382A0E728414E4E2F3D5FAA63CFFFF8F759EB60 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xsrc0, int32_t ___x1, int32_t ___xlen2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ysrc3, int32_t ___y4, int32_t ___ylen5, uint32_t ___sch6, uint32_t ___scl7, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___ylen5;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___ysrc3;
		int32_t L_2 = ___y4;
		int32_t L_3 = ___ylen5;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1));
		uint32_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int32_t)(uint32_t)((int64_t)(((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_5>>((int32_t)30)))))))>>1)));
		V_2 = 0;
		V_3 = 0;
		uint32_t L_6 = ___sch6;
		V_0 = L_6;
		goto IL_0076;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		uint32_t L_8 = ___sch6;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_7, (int32_t)L_8));
		int32_t L_9 = V_4;
		int32_t L_10 = ___ylen5;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0030;
		}
	}
	{
		uint32_t L_11 = V_1;
		G_B6_0 = L_11;
		goto IL_0038;
	}

IL_0030:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___ysrc3;
		int32_t L_13 = ___y4;
		int32_t L_14 = V_4;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		uint32_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		G_B6_0 = L_16;
	}

IL_0038:
	{
		uint32_t L_17 = G_B6_0;
		uint32_t L_18 = ___scl7;
		uint32_t L_19 = V_2;
		V_6 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_17<<((int32_t)((int32_t)L_18&((int32_t)31)))))&((int32_t)2147483647LL)))|(int32_t)L_19));
		uint32_t L_20 = ___scl7;
		V_2 = ((int32_t)((uint32_t)L_17>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)31), (int32_t)L_20))&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___xsrc0;
		int32_t L_22 = ___x1;
		int32_t L_23 = V_0;
		NullCheck(L_21);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		uint32_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		uint32_t L_26 = V_6;
		uint32_t L_27 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_26)), (int32_t)L_27));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___xsrc0;
		int32_t L_29 = ___x1;
		int32_t L_30 = V_0;
		uint32_t L_31 = V_5;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, L_30))), (uint32_t)((int32_t)((int32_t)L_31&((int32_t)2147483647LL))));
		uint32_t L_32 = V_5;
		V_3 = ((int32_t)((uint32_t)L_32>>((int32_t)31)));
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0076:
	{
		int32_t L_34 = V_0;
		int32_t L_35 = ___xlen2;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0021;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::zint_one_to_plain(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_zint_one_to_plain_m01BEF4E63BA72C4DA4D6CEDEC5DB266C30A26DA2 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xsrc0, int32_t ___x1, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___xsrc0;
		int32_t L_1 = ___x1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		uint32_t L_4 = L_3;
		return ((int32_t)((int32_t)L_4|((int32_t)(((int32_t)((int32_t)L_4&((int32_t)1073741824)))<<1))));
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_big_to_fp(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_poly_big_to_fp_m184E71EAEB8A8964C0E509E9A160DD2482D76168 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___dsrc0, int32_t ___d1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___fsrc2, int32_t ___f3, int32_t ___flen4, int32_t ___fstride5, uint32_t ___logn6, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_6;
	memset((&V_6), 0, sizeof(V_6));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint32_t V_8 = 0;
	{
		uint32_t L_0 = ___logn6;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		int32_t L_1 = ___flen4;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		V_1 = 0;
		goto IL_0028;
	}

IL_0010:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_2 = ___dsrc0;
		int32_t L_3 = ___d1;
		int32_t L_4 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_5 = __this->___fpre_0;
		NullCheck(L_5);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_6 = L_5->___fpr_zero_5;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_3, L_4))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_002d:
	{
		V_1 = 0;
		goto IL_00f9;
	}

IL_0034:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___fsrc2;
		int32_t L_11 = ___f3;
		int32_t L_12 = ___flen4;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_11, L_12)), 1));
		uint32_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)(uint32_t)((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_14>>((int32_t)30))))))));
		uint32_t L_15 = V_3;
		V_5 = ((int32_t)((uint32_t)L_15>>1));
		uint32_t L_16 = V_3;
		V_4 = ((int32_t)((int32_t)L_16&1));
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_17 = __this->___fpre_0;
		NullCheck(L_17);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_18 = L_17->___fpr_zero_5;
		V_6 = L_18;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_19 = __this->___fpre_0;
		NullCheck(L_19);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_20 = L_19->___fpr_one_6;
		V_7 = L_20;
		V_2 = 0;
		goto IL_00de;
	}

IL_006c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___fsrc2;
		int32_t L_22 = ___f3;
		int32_t L_23 = V_2;
		NullCheck(L_21);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		uint32_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		uint32_t L_26 = V_5;
		uint32_t L_27 = V_4;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_25^(int32_t)L_26)), (int32_t)L_27));
		uint32_t L_28 = V_8;
		V_4 = ((int32_t)((uint32_t)L_28>>((int32_t)31)));
		uint32_t L_29 = V_8;
		V_8 = ((int32_t)((int32_t)L_29&((int32_t)2147483647LL)));
		uint32_t L_30 = V_8;
		uint32_t L_31 = V_8;
		uint32_t L_32 = V_3;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, ((int32_t)(((int32_t)((int32_t)L_31<<1))&(int32_t)L_32))));
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_33 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_34 = V_6;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_35 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_36 = __this->___fpre_0;
		uint32_t L_37 = V_8;
		NullCheck(L_36);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_38;
		L_38 = FprEngine_fpr_of_mE2CCAB33E9E22FC76315E34C34FB1C5A854F621D(L_36, ((int64_t)((int32_t)L_37)), NULL);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_39 = V_7;
		NullCheck(L_35);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_40;
		L_40 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_35, L_38, L_39, NULL);
		NullCheck(L_33);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_41;
		L_41 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_33, L_34, L_40, NULL);
		V_6 = L_41;
		int32_t L_42 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_43 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_44 = V_7;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_45 = __this->___fpre_0;
		NullCheck(L_45);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_46 = L_45->___fpr_ptwo31_11;
		NullCheck(L_43);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_47;
		L_47 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_43, L_44, L_46, NULL);
		V_7 = L_47;
	}

IL_00de:
	{
		int32_t L_48 = V_2;
		int32_t L_49 = ___flen4;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_006c;
		}
	}
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_50 = ___dsrc0;
		int32_t L_51 = ___d1;
		int32_t L_52 = V_1;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_53 = V_6;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_51, L_52))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_53);
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		int32_t L_55 = ___f3;
		int32_t L_56 = ___fstride5;
		___f3 = ((int32_t)il2cpp_codegen_add(L_55, L_56));
	}

IL_00f9:
	{
		int32_t L_57 = V_1;
		int32_t L_58 = V_0;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0034;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_big_to_small(System.SByte[],System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_poly_big_to_small_m1C62C8FE3D146DF26B66282E5B5E57E60AC8E0CB (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___dsrc0, int32_t ___d1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ssrc2, int32_t ___s3, int32_t ___lim4, uint32_t ___logn5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint32_t L_0 = ___logn5;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		V_1 = 0;
		goto IL_0030;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___ssrc2;
		int32_t L_2 = ___s3;
		int32_t L_3 = V_1;
		int32_t L_4;
		L_4 = FalconKeygen_zint_one_to_plain_m01BEF4E63BA72C4DA4D6CEDEC5DB266C30A26DA2(__this, L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3)), NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		int32_t L_6 = ___lim4;
		if ((((int32_t)L_5) < ((int32_t)((-L_6)))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_7 = V_2;
		int32_t L_8 = ___lim4;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0025;
		}
	}

IL_0023:
	{
		return 0;
	}

IL_0025:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = ___dsrc0;
		int32_t L_10 = ___d1;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, L_11))), (int8_t)((int8_t)L_12));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0030:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000c;
		}
	}
	{
		return 1;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_sub_scaled(System.UInt32[],System.Int32,System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_poly_sub_scaled_m7BB451DC8925199192E980A58A62E3A3E0059118 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Fsrc0, int32_t ___F1, int32_t ___Flen2, int32_t ___Fstride3, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___fsrc4, int32_t ___f5, int32_t ___flen6, int32_t ___fstride7, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ksrc8, int32_t ___k9, uint32_t ___sch10, uint32_t ___scl11, uint32_t ___logn12, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		uint32_t L_0 = ___logn12;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		V_1 = 0;
		goto IL_0064;
	}

IL_000c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___ksrc8;
		int32_t L_2 = ___k9;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		int32_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = ((-L_5));
		int32_t L_6 = ___F1;
		int32_t L_7 = V_1;
		int32_t L_8 = ___Fstride3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)il2cpp_codegen_multiply(L_7, L_8))));
		int32_t L_9 = ___f5;
		V_5 = L_9;
		V_3 = 0;
		goto IL_005c;
	}

IL_0025:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___Fsrc0;
		int32_t L_11 = V_4;
		int32_t L_12 = ___Flen2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___fsrc4;
		int32_t L_14 = V_5;
		int32_t L_15 = ___flen6;
		int32_t L_16 = V_2;
		uint32_t L_17 = ___sch10;
		uint32_t L_18 = ___scl11;
		FalconKeygen_zint_add_scaled_mul_small_m5023A209696BCE13F5D513C10957E768F0A4C53A(__this, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, NULL);
		int32_t L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_19, L_20))) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1))))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_22 = ___F1;
		V_4 = L_22;
		int32_t L_23 = V_2;
		V_2 = ((-L_23));
		goto IL_0051;
	}

IL_004a:
	{
		int32_t L_24 = V_4;
		int32_t L_25 = ___Fstride3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
	}

IL_0051:
	{
		int32_t L_26 = V_5;
		int32_t L_27 = ___fstride7;
		V_5 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_005c:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0064:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = V_0;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_sub_scaled_ntt(System.UInt32[],System.Int32,System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32,System.UInt32,System.UInt32,System.UInt32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_poly_sub_scaled_ntt_m046CCC267E23369C890D2E5743E991806A1DA9D0 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Fsrc0, int32_t ___F1, int32_t ___Flen2, int32_t ___Fstride3, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___fsrc4, int32_t ___f5, int32_t ___flen6, int32_t ___fstride7, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ksrc8, int32_t ___k9, uint32_t ___sch10, uint32_t ___scl11, uint32_t ___logn12, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc13, int32_t ___tmp14, const RuntimeMethod* method) 
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
	FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* V_9 = NULL;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		uint32_t L_0 = ___logn12;
		V_6 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		int32_t L_1 = ___flen6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = ___tmp14;
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = V_6;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = V_6;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		int32_t L_7 = V_2;
		int32_t L_8 = V_6;
		int32_t L_9 = V_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)il2cpp_codegen_multiply(L_8, L_9))));
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_10 = __this->___PRIMES_2;
		V_9 = L_10;
		V_7 = 0;
		goto IL_0177;
	}

IL_0034:
	{
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_11 = V_9;
		int32_t L_12 = V_7;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		uint32_t L_15 = L_14->___p_0;
		V_10 = L_15;
		uint32_t L_16 = V_10;
		uint32_t L_17;
		L_17 = FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE(__this, L_16, NULL);
		V_11 = L_17;
		uint32_t L_18 = V_10;
		uint32_t L_19 = V_11;
		uint32_t L_20;
		L_20 = FalconKeygen_modp_R2_mFDF10C899F4DAC34C48E9CA91B075A78FE793634(__this, L_18, L_19, NULL);
		V_12 = L_20;
		int32_t L_21 = ___flen6;
		uint32_t L_22 = V_10;
		uint32_t L_23 = V_11;
		uint32_t L_24 = V_12;
		uint32_t L_25;
		L_25 = FalconKeygen_modp_Rx_mE6091B563F2ACAC7BB7ABE09D31961273EB89A79(__this, L_21, L_22, L_23, L_24, NULL);
		V_13 = L_25;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___tmpsrc13;
		int32_t L_27 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___tmpsrc13;
		int32_t L_29 = V_1;
		uint32_t L_30 = ___logn12;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_31 = V_9;
		int32_t L_32 = V_7;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		uint32_t L_35 = L_34->___g_1;
		uint32_t L_36 = V_10;
		uint32_t L_37 = V_11;
		FalconKeygen_modp_mkgm2_m059C61ADC3900310EDA79EBC8573C3D66CBB86A5(__this, L_26, L_27, L_28, L_29, L_30, L_35, L_36, L_37, NULL);
		V_14 = 0;
		goto IL_00a4;
	}

IL_0087:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___tmpsrc13;
		int32_t L_39 = V_3;
		int32_t L_40 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ___ksrc8;
		int32_t L_42 = ___k9;
		int32_t L_43 = V_14;
		NullCheck(L_41);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		int32_t L_45 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		uint32_t L_46 = V_10;
		uint32_t L_47;
		L_47 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_45, L_46, NULL);
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_39, L_40))), (uint32_t)L_47);
		int32_t L_48 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00a4:
	{
		int32_t L_49 = V_14;
		int32_t L_50 = V_6;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0087;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___tmpsrc13;
		int32_t L_52 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___tmpsrc13;
		int32_t L_54 = V_0;
		uint32_t L_55 = ___logn12;
		uint32_t L_56 = V_10;
		uint32_t L_57 = V_11;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_51, L_52, L_53, L_54, L_55, L_56, L_57, NULL);
		V_14 = 0;
		int32_t L_58 = ___f5;
		V_5 = L_58;
		int32_t L_59 = V_2;
		int32_t L_60 = V_7;
		V_4 = ((int32_t)il2cpp_codegen_add(L_59, L_60));
		goto IL_00f8;
	}

IL_00cb:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___tmpsrc13;
		int32_t L_62 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___tmpsrc13;
		int32_t L_64 = V_5;
		int32_t L_65 = ___flen6;
		uint32_t L_66 = V_10;
		uint32_t L_67 = V_11;
		uint32_t L_68 = V_12;
		uint32_t L_69 = V_13;
		uint32_t L_70;
		L_70 = FalconKeygen_zint_mod_small_signed_m8C67FB119B15C5E02BC12B3D0B9AEFB26C9829C3(__this, L_63, L_64, L_65, L_66, L_67, L_68, L_69, NULL);
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint32_t)L_70);
		int32_t L_71 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		int32_t L_72 = V_5;
		int32_t L_73 = ___fstride7;
		V_5 = ((int32_t)il2cpp_codegen_add(L_72, L_73));
		int32_t L_74 = V_4;
		int32_t L_75 = V_8;
		V_4 = ((int32_t)il2cpp_codegen_add(L_74, L_75));
	}

IL_00f8:
	{
		int32_t L_76 = V_14;
		int32_t L_77 = V_6;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_00cb;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = ___tmpsrc13;
		int32_t L_79 = V_2;
		int32_t L_80 = V_7;
		int32_t L_81 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = ___tmpsrc13;
		int32_t L_83 = V_0;
		uint32_t L_84 = ___logn12;
		uint32_t L_85 = V_10;
		uint32_t L_86 = V_11;
		FalconKeygen_modp_NTT2_ext_m05236D570394BFFBAF718038203581885B8ED31A(__this, L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)), L_81, L_82, L_83, L_84, L_85, L_86, NULL);
		V_14 = 0;
		int32_t L_87 = V_2;
		int32_t L_88 = V_7;
		V_4 = ((int32_t)il2cpp_codegen_add(L_87, L_88));
		goto IL_0154;
	}

IL_0120:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = ___tmpsrc13;
		int32_t L_90 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = ___tmpsrc13;
		int32_t L_92 = V_3;
		int32_t L_93 = V_14;
		NullCheck(L_91);
		int32_t L_94 = ((int32_t)il2cpp_codegen_add(L_92, L_93));
		uint32_t L_95 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___tmpsrc13;
		int32_t L_97 = V_4;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		uint32_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		uint32_t L_100 = V_10;
		uint32_t L_101 = V_11;
		uint32_t L_102;
		L_102 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_95, L_99, L_100, L_101, NULL);
		uint32_t L_103 = V_12;
		uint32_t L_104 = V_10;
		uint32_t L_105 = V_11;
		uint32_t L_106;
		L_106 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_102, L_103, L_104, L_105, NULL);
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (uint32_t)L_106);
		int32_t L_107 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_107, 1));
		int32_t L_108 = V_4;
		int32_t L_109 = V_8;
		V_4 = ((int32_t)il2cpp_codegen_add(L_108, L_109));
	}

IL_0154:
	{
		int32_t L_110 = V_14;
		int32_t L_111 = V_6;
		if ((((int32_t)L_110) < ((int32_t)L_111)))
		{
			goto IL_0120;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ___tmpsrc13;
		int32_t L_113 = V_2;
		int32_t L_114 = V_7;
		int32_t L_115 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = ___tmpsrc13;
		int32_t L_117 = V_1;
		uint32_t L_118 = ___logn12;
		uint32_t L_119 = V_10;
		uint32_t L_120 = V_11;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_112, ((int32_t)il2cpp_codegen_add(L_113, L_114)), L_115, L_116, L_117, L_118, L_119, L_120, NULL);
		int32_t L_121 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_0177:
	{
		int32_t L_122 = V_7;
		int32_t L_123 = V_8;
		if ((((int32_t)L_122) < ((int32_t)L_123)))
		{
			goto IL_0034;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = ___tmpsrc13;
		int32_t L_125 = V_2;
		int32_t L_126 = V_8;
		int32_t L_127 = V_8;
		int32_t L_128 = V_6;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_129 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = ___tmpsrc13;
		int32_t L_131 = V_3;
		FalconKeygen_zint_rebuild_CRT_mFDDBAA64799A444D72449A4F4866B19D204C9DB5(__this, L_124, L_125, L_126, L_127, L_128, L_129, 1, L_130, L_131, NULL);
		V_7 = 0;
		int32_t L_132 = ___F1;
		V_4 = L_132;
		int32_t L_133 = V_2;
		V_5 = L_133;
		goto IL_01c9;
	}

IL_01a0:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = ___tmpsrc13;
		int32_t L_135 = V_4;
		int32_t L_136 = ___Flen2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = ___tmpsrc13;
		int32_t L_138 = V_5;
		int32_t L_139 = V_8;
		uint32_t L_140 = ___sch10;
		uint32_t L_141 = ___scl11;
		FalconKeygen_zint_sub_scaled_m4382A0E728414E4E2F3D5FAA63CFFFF8F759EB60(__this, L_134, L_135, L_136, L_137, L_138, L_139, L_140, L_141, NULL);
		int32_t L_142 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_142, 1));
		int32_t L_143 = V_4;
		int32_t L_144 = ___Fstride3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_143, L_144));
		int32_t L_145 = V_5;
		int32_t L_146 = V_8;
		V_5 = ((int32_t)il2cpp_codegen_add(L_145, L_146));
	}

IL_01c9:
	{
		int32_t L_147 = V_7;
		int32_t L_148 = V_6;
		if ((((int32_t)L_147) < ((int32_t)L_148)))
		{
			goto IL_01a0;
		}
	}
	{
		return;
	}
}
// System.UInt64 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::get_rng_u64(Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FalconKeygen_get_rng_u64_m6AD9A885C4A2F6C4DA05AD4B725753B40F74A85E (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* ___rng0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* L_1 = ___rng0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_1);
		SHAKE256_i_shake256_extract_m7989D33EFD07984A599C6ECC1E439B4844D9318E(L_1, L_2, 0, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 4;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = 5;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 6;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 7;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_5)|((int64_t)(((int64_t)(uint64_t)L_8)<<8))))|((int64_t)(((int64_t)(uint64_t)L_11)<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)L_14)<<((int32_t)24)))))|((int64_t)(((int64_t)(uint64_t)L_17)<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)L_20)<<((int32_t)40)))))|((int64_t)(((int64_t)(uint64_t)L_23)<<((int32_t)48)))))|((int64_t)(((int64_t)(uint64_t)L_26)<<((int32_t)56)))));
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::mkgauss(Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_mkgauss_mDFDB345F9D2D637DDEF974BFB0FFFF5B2694BEFE (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* ___rng0, uint32_t ___logn1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	{
		uint32_t L_0 = ___logn1;
		V_1 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)10), (int32_t)L_0))&((int32_t)31)))));
		V_2 = 0;
		V_0 = 0;
		goto IL_00b3;
	}

IL_0013:
	{
		SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* L_1 = ___rng0;
		uint64_t L_2;
		L_2 = FalconKeygen_get_rng_u64_m6AD9A885C4A2F6C4DA05AD4B725753B40F74A85E(__this, L_1, NULL);
		V_3 = L_2;
		uint64_t L_3 = V_3;
		V_7 = ((int32_t)(uint32_t)((int64_t)((uint64_t)L_3>>((int32_t)63))));
		uint64_t L_4 = V_3;
		V_3 = ((int64_t)((int64_t)L_4&((int64_t)(std::numeric_limits<int64_t>::max)())));
		uint64_t L_5 = V_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->___gauss_1024_12289_6;
		NullCheck(L_6);
		int32_t L_7 = 0;
		int64_t L_8 = (int64_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = ((int32_t)(uint32_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_5, L_8))>>((int32_t)63))));
		V_5 = 0;
		SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* L_9 = ___rng0;
		uint64_t L_10;
		L_10 = FalconKeygen_get_rng_u64_m6AD9A885C4A2F6C4DA05AD4B725753B40F74A85E(__this, L_9, NULL);
		V_3 = L_10;
		uint64_t L_11 = V_3;
		V_3 = ((int64_t)((int64_t)L_11&((int64_t)(std::numeric_limits<int64_t>::max)())));
		V_6 = 1;
		goto IL_008d;
	}

IL_005a:
	{
		uint64_t L_12 = V_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = __this->___gauss_1024_12289_6;
		uint32_t L_14 = V_6;
		NullCheck(L_13);
		uint32_t L_15 = L_14;
		int64_t L_16 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_8 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_12, L_16))>>((int32_t)63))))^1));
		uint32_t L_17 = V_5;
		uint32_t L_18 = V_6;
		uint32_t L_19 = V_8;
		uint32_t L_20 = V_4;
		V_5 = ((int32_t)((int32_t)L_17|((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)L_18)&((-((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_19&((int32_t)((int32_t)L_20^1)))))))))))));
		uint32_t L_21 = V_4;
		uint32_t L_22 = V_8;
		V_4 = ((int32_t)((int32_t)L_21|(int32_t)L_22));
		uint32_t L_23 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, 1));
	}

IL_008d:
	{
		uint32_t L_24 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_25 = __this->___gauss_1024_12289_6;
		NullCheck(L_25);
		if ((((int64_t)((int64_t)(uint64_t)L_24)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_005a;
		}
	}
	{
		uint32_t L_26 = V_5;
		uint32_t L_27 = V_7;
		uint32_t L_28 = V_7;
		V_5 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_26)^((-((int64_t)(uint64_t)L_27))))), ((int64_t)(uint64_t)L_28))));
		int32_t L_29 = V_2;
		uint32_t L_30 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, (int32_t)L_30));
		uint32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, 1));
	}

IL_00b3:
	{
		uint32_t L_32 = V_0;
		uint32_t L_33 = V_1;
		if ((!(((uint32_t)L_32) >= ((uint32_t)L_33))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_34 = V_2;
		return L_34;
	}
}
// System.UInt32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_small_sqnorm(System.SByte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FalconKeygen_poly_small_sqnorm_m982EF4ADD62F41BC69AE18FE7F794F51AD1675DE (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc0, int32_t ___f1, uint32_t ___logn2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		uint32_t L_0 = ___logn2;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		V_2 = 0;
		V_3 = 0;
		V_1 = 0;
		goto IL_0026;
	}

IL_000f:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = ___fsrc0;
		int32_t L_2 = ___f1;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		int8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_4 = L_5;
		uint32_t L_6 = V_2;
		int32_t L_7 = V_4;
		int32_t L_8 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)il2cpp_codegen_multiply(L_7, L_8))));
		uint32_t L_9 = V_3;
		uint32_t L_10 = V_2;
		V_3 = ((int32_t)((int32_t)L_9|(int32_t)L_10));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0026:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000f;
		}
	}
	{
		uint32_t L_14 = V_2;
		uint32_t L_15 = V_3;
		return ((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)L_14)|((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_15>>((int32_t)31))))))))));
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_small_to_fp(Org.BouncyCastle.Pqc.Crypto.Falcon.FalconFPR[],System.Int32,System.SByte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_poly_small_to_fp_m5D6F42E508FBC9648A097F69E5DD04233A888580 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* ___xsrc0, int32_t ___x1, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc2, int32_t ___f3, uint32_t ___logn4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___logn4;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		V_1 = 0;
		goto IL_002b;
	}

IL_000c:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_1 = ___xsrc0;
		int32_t L_2 = ___x1;
		int32_t L_3 = V_1;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_4 = __this->___fpre_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = ___fsrc2;
		int32_t L_6 = ___f3;
		int32_t L_7 = V_1;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		int8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_10;
		L_10 = FprEngine_fpr_of_mE2CCAB33E9E22FC76315E34C34FB1C5A854F621D(L_4, ((int64_t)L_9), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_2, L_3))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002b:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::make_fg_step(System.UInt32[],System.Int32,System.UInt32,System.UInt32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_make_fg_step_m4D174A823656BB89D30796F1A94EAAB781A56DFF (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___datasrc0, int32_t ___data1, uint32_t ___logn2, uint32_t ___depth3, int32_t ___in_ntt4, int32_t ___out_ntt5, const RuntimeMethod* method) 
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
	FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* V_12 = NULL;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	uint32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	uint32_t V_28 = 0;
	uint32_t V_29 = 0;
	uint32_t V_30 = 0;
	uint32_t V_31 = 0;
	{
		uint32_t L_0 = ___logn2;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1>>1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___MAX_BL_SMALL_7;
		uint32_t L_3 = ___depth3;
		NullCheck(L_2);
		uint32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___MAX_BL_SMALL_7;
		uint32_t L_7 = ___depth3;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, 1));
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_10 = __this->___PRIMES_2;
		V_12 = L_10;
		int32_t L_11 = ___data1;
		V_5 = L_11;
		int32_t L_12 = V_5;
		int32_t L_13 = V_1;
		int32_t L_14 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)il2cpp_codegen_multiply(L_13, L_14))));
		int32_t L_15 = V_6;
		int32_t L_16 = V_1;
		int32_t L_17 = V_4;
		V_7 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, L_17))));
		int32_t L_18 = V_7;
		int32_t L_19 = V_0;
		int32_t L_20 = V_3;
		V_8 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_multiply(L_19, L_20))));
		int32_t L_21 = V_8;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		V_9 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23))));
		int32_t L_24 = V_9;
		int32_t L_25 = V_0;
		V_10 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		int32_t L_26 = V_10;
		int32_t L_27 = V_0;
		V_11 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___datasrc0;
		int32_t L_29 = ___data1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___datasrc0;
		int32_t L_31 = V_7;
		int32_t L_32 = V_0;
		int32_t L_33 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_28, L_29, (RuntimeArray*)L_30, L_31, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_32)), L_33)), NULL);
		V_2 = 0;
		goto IL_0230;
	}

IL_0071:
	{
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_34 = V_12;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		uint32_t L_38 = L_37->___p_0;
		V_13 = L_38;
		uint32_t L_39 = V_13;
		uint32_t L_40;
		L_40 = FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE(__this, L_39, NULL);
		V_14 = L_40;
		uint32_t L_41 = V_13;
		uint32_t L_42 = V_14;
		uint32_t L_43;
		L_43 = FalconKeygen_modp_R2_mFDF10C899F4DAC34C48E9CA91B075A78FE793634(__this, L_41, L_42, NULL);
		V_15 = L_43;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___datasrc0;
		int32_t L_45 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___datasrc0;
		int32_t L_47 = V_10;
		uint32_t L_48 = ___logn2;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_49 = V_12;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		uint32_t L_53 = L_52->___g_1;
		uint32_t L_54 = V_13;
		uint32_t L_55 = V_14;
		FalconKeygen_modp_mkgm2_m059C61ADC3900310EDA79EBC8573C3D66CBB86A5(__this, L_44, L_45, L_46, L_47, L_48, L_53, L_54, L_55, NULL);
		V_16 = 0;
		int32_t L_56 = V_7;
		int32_t L_57 = V_2;
		V_17 = ((int32_t)il2cpp_codegen_add(L_56, L_57));
		goto IL_00ce;
	}

IL_00b7:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___datasrc0;
		int32_t L_59 = V_11;
		int32_t L_60 = V_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___datasrc0;
		int32_t L_62 = V_17;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_59, L_60))), (uint32_t)L_64);
		int32_t L_65 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_66 = V_17;
		int32_t L_67 = V_3;
		V_17 = ((int32_t)il2cpp_codegen_add(L_66, L_67));
	}

IL_00ce:
	{
		int32_t L_68 = V_16;
		int32_t L_69 = V_0;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_70 = ___in_ntt4;
		if (L_70)
		{
			goto IL_00e8;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___datasrc0;
		int32_t L_72 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___datasrc0;
		int32_t L_74 = V_9;
		uint32_t L_75 = ___logn2;
		uint32_t L_76 = V_13;
		uint32_t L_77 = V_14;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_71, L_72, L_73, L_74, L_75, L_76, L_77, NULL);
	}

IL_00e8:
	{
		V_16 = 0;
		int32_t L_78 = V_5;
		int32_t L_79 = V_2;
		V_17 = ((int32_t)il2cpp_codegen_add(L_78, L_79));
		goto IL_0136;
	}

IL_00f3:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___datasrc0;
		int32_t L_81 = V_11;
		int32_t L_82 = V_16;
		NullCheck(L_80);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(L_81, ((int32_t)(L_82<<1))));
		uint32_t L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_18 = L_84;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___datasrc0;
		int32_t L_86 = V_11;
		int32_t L_87 = V_16;
		NullCheck(L_85);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_86, ((int32_t)(L_87<<1)))), 1));
		uint32_t L_89 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_19 = L_89;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___datasrc0;
		int32_t L_91 = V_17;
		uint32_t L_92 = V_18;
		uint32_t L_93 = V_19;
		uint32_t L_94 = V_13;
		uint32_t L_95 = V_14;
		uint32_t L_96;
		L_96 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_92, L_93, L_94, L_95, NULL);
		uint32_t L_97 = V_15;
		uint32_t L_98 = V_13;
		uint32_t L_99 = V_14;
		uint32_t L_100;
		L_100 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_96, L_97, L_98, L_99, NULL);
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (uint32_t)L_100);
		int32_t L_101 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_101, 1));
		int32_t L_102 = V_17;
		int32_t L_103 = V_4;
		V_17 = ((int32_t)il2cpp_codegen_add(L_102, L_103));
	}

IL_0136:
	{
		int32_t L_104 = V_16;
		int32_t L_105 = V_1;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_106 = ___in_ntt4;
		if (!L_106)
		{
			goto IL_0153;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107 = ___datasrc0;
		int32_t L_108 = V_7;
		int32_t L_109 = V_2;
		int32_t L_110 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_111 = ___datasrc0;
		int32_t L_112 = V_10;
		uint32_t L_113 = ___logn2;
		uint32_t L_114 = V_13;
		uint32_t L_115 = V_14;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_107, ((int32_t)il2cpp_codegen_add(L_108, L_109)), L_110, L_111, L_112, L_113, L_114, L_115, NULL);
	}

IL_0153:
	{
		V_16 = 0;
		int32_t L_116 = V_8;
		int32_t L_117 = V_2;
		V_17 = ((int32_t)il2cpp_codegen_add(L_116, L_117));
		goto IL_0175;
	}

IL_015e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_118 = ___datasrc0;
		int32_t L_119 = V_11;
		int32_t L_120 = V_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = ___datasrc0;
		int32_t L_122 = V_17;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		uint32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_119, L_120))), (uint32_t)L_124);
		int32_t L_125 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_125, 1));
		int32_t L_126 = V_17;
		int32_t L_127 = V_3;
		V_17 = ((int32_t)il2cpp_codegen_add(L_126, L_127));
	}

IL_0175:
	{
		int32_t L_128 = V_16;
		int32_t L_129 = V_0;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_015e;
		}
	}
	{
		int32_t L_130 = ___in_ntt4;
		if (L_130)
		{
			goto IL_018f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_131 = ___datasrc0;
		int32_t L_132 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = ___datasrc0;
		int32_t L_134 = V_9;
		uint32_t L_135 = ___logn2;
		uint32_t L_136 = V_13;
		uint32_t L_137 = V_14;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_131, L_132, L_133, L_134, L_135, L_136, L_137, NULL);
	}

IL_018f:
	{
		V_16 = 0;
		int32_t L_138 = V_6;
		int32_t L_139 = V_2;
		V_17 = ((int32_t)il2cpp_codegen_add(L_138, L_139));
		goto IL_01dd;
	}

IL_019a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_140 = ___datasrc0;
		int32_t L_141 = V_11;
		int32_t L_142 = V_16;
		NullCheck(L_140);
		int32_t L_143 = ((int32_t)il2cpp_codegen_add(L_141, ((int32_t)(L_142<<1))));
		uint32_t L_144 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		V_20 = L_144;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_145 = ___datasrc0;
		int32_t L_146 = V_11;
		int32_t L_147 = V_16;
		NullCheck(L_145);
		int32_t L_148 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_146, ((int32_t)(L_147<<1)))), 1));
		uint32_t L_149 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		V_21 = L_149;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = ___datasrc0;
		int32_t L_151 = V_17;
		uint32_t L_152 = V_20;
		uint32_t L_153 = V_21;
		uint32_t L_154 = V_13;
		uint32_t L_155 = V_14;
		uint32_t L_156;
		L_156 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_152, L_153, L_154, L_155, NULL);
		uint32_t L_157 = V_15;
		uint32_t L_158 = V_13;
		uint32_t L_159 = V_14;
		uint32_t L_160;
		L_160 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_156, L_157, L_158, L_159, NULL);
		NullCheck(L_150);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(L_151), (uint32_t)L_160);
		int32_t L_161 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_161, 1));
		int32_t L_162 = V_17;
		int32_t L_163 = V_4;
		V_17 = ((int32_t)il2cpp_codegen_add(L_162, L_163));
	}

IL_01dd:
	{
		int32_t L_164 = V_16;
		int32_t L_165 = V_1;
		if ((((int32_t)L_164) < ((int32_t)L_165)))
		{
			goto IL_019a;
		}
	}
	{
		int32_t L_166 = ___in_ntt4;
		if (!L_166)
		{
			goto IL_01fa;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_167 = ___datasrc0;
		int32_t L_168 = V_8;
		int32_t L_169 = V_2;
		int32_t L_170 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_171 = ___datasrc0;
		int32_t L_172 = V_10;
		uint32_t L_173 = ___logn2;
		uint32_t L_174 = V_13;
		uint32_t L_175 = V_14;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_167, ((int32_t)il2cpp_codegen_add(L_168, L_169)), L_170, L_171, L_172, L_173, L_174, L_175, NULL);
	}

IL_01fa:
	{
		int32_t L_176 = ___out_ntt5;
		if (L_176)
		{
			goto IL_022c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_177 = ___datasrc0;
		int32_t L_178 = V_5;
		int32_t L_179 = V_2;
		int32_t L_180 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_181 = ___datasrc0;
		int32_t L_182 = V_10;
		uint32_t L_183 = ___logn2;
		uint32_t L_184 = V_13;
		uint32_t L_185 = V_14;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_177, ((int32_t)il2cpp_codegen_add(L_178, L_179)), L_180, L_181, L_182, ((int32_t)il2cpp_codegen_subtract((int32_t)L_183, 1)), L_184, L_185, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_186 = ___datasrc0;
		int32_t L_187 = V_6;
		int32_t L_188 = V_2;
		int32_t L_189 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_190 = ___datasrc0;
		int32_t L_191 = V_10;
		uint32_t L_192 = ___logn2;
		uint32_t L_193 = V_13;
		uint32_t L_194 = V_14;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_186, ((int32_t)il2cpp_codegen_add(L_187, L_188)), L_189, L_190, L_191, ((int32_t)il2cpp_codegen_subtract((int32_t)L_192, 1)), L_193, L_194, NULL);
	}

IL_022c:
	{
		int32_t L_195 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_195, 1));
	}

IL_0230:
	{
		int32_t L_196 = V_2;
		int32_t L_197 = V_3;
		if ((((int32_t)L_196) < ((int32_t)L_197)))
		{
			goto IL_0071;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_198 = ___datasrc0;
		int32_t L_199 = V_7;
		int32_t L_200 = V_3;
		int32_t L_201 = V_3;
		int32_t L_202 = V_0;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_203 = V_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_204 = ___datasrc0;
		int32_t L_205 = V_9;
		FalconKeygen_zint_rebuild_CRT_mFDDBAA64799A444D72449A4F4866B19D204C9DB5(__this, L_198, L_199, L_200, L_201, L_202, L_203, 1, L_204, L_205, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_206 = ___datasrc0;
		int32_t L_207 = V_8;
		int32_t L_208 = V_3;
		int32_t L_209 = V_3;
		int32_t L_210 = V_0;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_211 = V_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_212 = ___datasrc0;
		int32_t L_213 = V_9;
		FalconKeygen_zint_rebuild_CRT_mFDDBAA64799A444D72449A4F4866B19D204C9DB5(__this, L_206, L_207, L_208, L_209, L_210, L_211, 1, L_212, L_213, NULL);
		int32_t L_214 = V_3;
		V_2 = L_214;
		goto IL_0410;
	}

IL_0262:
	{
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_215 = V_12;
		int32_t L_216 = V_2;
		NullCheck(L_215);
		int32_t L_217 = L_216;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_218 = (L_215)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		NullCheck(L_218);
		uint32_t L_219 = L_218->___p_0;
		V_22 = L_219;
		uint32_t L_220 = V_22;
		uint32_t L_221;
		L_221 = FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE(__this, L_220, NULL);
		V_23 = L_221;
		uint32_t L_222 = V_22;
		uint32_t L_223 = V_23;
		uint32_t L_224;
		L_224 = FalconKeygen_modp_R2_mFDF10C899F4DAC34C48E9CA91B075A78FE793634(__this, L_222, L_223, NULL);
		V_24 = L_224;
		int32_t L_225 = V_3;
		uint32_t L_226 = V_22;
		uint32_t L_227 = V_23;
		uint32_t L_228 = V_24;
		uint32_t L_229;
		L_229 = FalconKeygen_modp_Rx_mE6091B563F2ACAC7BB7ABE09D31961273EB89A79(__this, L_225, L_226, L_227, L_228, NULL);
		V_25 = L_229;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_230 = ___datasrc0;
		int32_t L_231 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_232 = ___datasrc0;
		int32_t L_233 = V_10;
		uint32_t L_234 = ___logn2;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_235 = V_12;
		int32_t L_236 = V_2;
		NullCheck(L_235);
		int32_t L_237 = L_236;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_238 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		NullCheck(L_238);
		uint32_t L_239 = L_238->___g_1;
		uint32_t L_240 = V_22;
		uint32_t L_241 = V_23;
		FalconKeygen_modp_mkgm2_m059C61ADC3900310EDA79EBC8573C3D66CBB86A5(__this, L_230, L_231, L_232, L_233, L_234, L_239, L_240, L_241, NULL);
		V_26 = 0;
		int32_t L_242 = V_7;
		V_27 = L_242;
		goto IL_02da;
	}

IL_02b5:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_243 = ___datasrc0;
		int32_t L_244 = V_11;
		int32_t L_245 = V_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_246 = ___datasrc0;
		int32_t L_247 = V_27;
		int32_t L_248 = V_3;
		uint32_t L_249 = V_22;
		uint32_t L_250 = V_23;
		uint32_t L_251 = V_24;
		uint32_t L_252 = V_25;
		uint32_t L_253;
		L_253 = FalconKeygen_zint_mod_small_signed_m8C67FB119B15C5E02BC12B3D0B9AEFB26C9829C3(__this, L_246, L_247, L_248, L_249, L_250, L_251, L_252, NULL);
		NullCheck(L_243);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_244, L_245))), (uint32_t)L_253);
		int32_t L_254 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_254, 1));
		int32_t L_255 = V_27;
		int32_t L_256 = V_3;
		V_27 = ((int32_t)il2cpp_codegen_add(L_255, L_256));
	}

IL_02da:
	{
		int32_t L_257 = V_26;
		int32_t L_258 = V_0;
		if ((((int32_t)L_257) < ((int32_t)L_258)))
		{
			goto IL_02b5;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_259 = ___datasrc0;
		int32_t L_260 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_261 = ___datasrc0;
		int32_t L_262 = V_9;
		uint32_t L_263 = ___logn2;
		uint32_t L_264 = V_22;
		uint32_t L_265 = V_23;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_259, L_260, L_261, L_262, L_263, L_264, L_265, NULL);
		V_26 = 0;
		int32_t L_266 = V_5;
		int32_t L_267 = V_2;
		V_27 = ((int32_t)il2cpp_codegen_add(L_266, L_267));
		goto IL_033e;
	}

IL_02fb:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_268 = ___datasrc0;
		int32_t L_269 = V_11;
		int32_t L_270 = V_26;
		NullCheck(L_268);
		int32_t L_271 = ((int32_t)il2cpp_codegen_add(L_269, ((int32_t)(L_270<<1))));
		uint32_t L_272 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		V_28 = L_272;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_273 = ___datasrc0;
		int32_t L_274 = V_11;
		int32_t L_275 = V_26;
		NullCheck(L_273);
		int32_t L_276 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_274, ((int32_t)(L_275<<1)))), 1));
		uint32_t L_277 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		V_29 = L_277;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_278 = ___datasrc0;
		int32_t L_279 = V_27;
		uint32_t L_280 = V_28;
		uint32_t L_281 = V_29;
		uint32_t L_282 = V_22;
		uint32_t L_283 = V_23;
		uint32_t L_284;
		L_284 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_280, L_281, L_282, L_283, NULL);
		uint32_t L_285 = V_24;
		uint32_t L_286 = V_22;
		uint32_t L_287 = V_23;
		uint32_t L_288;
		L_288 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_284, L_285, L_286, L_287, NULL);
		NullCheck(L_278);
		(L_278)->SetAt(static_cast<il2cpp_array_size_t>(L_279), (uint32_t)L_288);
		int32_t L_289 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_289, 1));
		int32_t L_290 = V_27;
		int32_t L_291 = V_4;
		V_27 = ((int32_t)il2cpp_codegen_add(L_290, L_291));
	}

IL_033e:
	{
		int32_t L_292 = V_26;
		int32_t L_293 = V_1;
		if ((((int32_t)L_292) < ((int32_t)L_293)))
		{
			goto IL_02fb;
		}
	}
	{
		V_26 = 0;
		int32_t L_294 = V_8;
		V_27 = L_294;
		goto IL_0371;
	}

IL_034c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_295 = ___datasrc0;
		int32_t L_296 = V_11;
		int32_t L_297 = V_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_298 = ___datasrc0;
		int32_t L_299 = V_27;
		int32_t L_300 = V_3;
		uint32_t L_301 = V_22;
		uint32_t L_302 = V_23;
		uint32_t L_303 = V_24;
		uint32_t L_304 = V_25;
		uint32_t L_305;
		L_305 = FalconKeygen_zint_mod_small_signed_m8C67FB119B15C5E02BC12B3D0B9AEFB26C9829C3(__this, L_298, L_299, L_300, L_301, L_302, L_303, L_304, NULL);
		NullCheck(L_295);
		(L_295)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_296, L_297))), (uint32_t)L_305);
		int32_t L_306 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_306, 1));
		int32_t L_307 = V_27;
		int32_t L_308 = V_3;
		V_27 = ((int32_t)il2cpp_codegen_add(L_307, L_308));
	}

IL_0371:
	{
		int32_t L_309 = V_26;
		int32_t L_310 = V_0;
		if ((((int32_t)L_309) < ((int32_t)L_310)))
		{
			goto IL_034c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_311 = ___datasrc0;
		int32_t L_312 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_313 = ___datasrc0;
		int32_t L_314 = V_9;
		uint32_t L_315 = ___logn2;
		uint32_t L_316 = V_22;
		uint32_t L_317 = V_23;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_311, L_312, L_313, L_314, L_315, L_316, L_317, NULL);
		V_26 = 0;
		int32_t L_318 = V_6;
		int32_t L_319 = V_2;
		V_27 = ((int32_t)il2cpp_codegen_add(L_318, L_319));
		goto IL_03d5;
	}

IL_0392:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_320 = ___datasrc0;
		int32_t L_321 = V_11;
		int32_t L_322 = V_26;
		NullCheck(L_320);
		int32_t L_323 = ((int32_t)il2cpp_codegen_add(L_321, ((int32_t)(L_322<<1))));
		uint32_t L_324 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_323));
		V_30 = L_324;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_325 = ___datasrc0;
		int32_t L_326 = V_11;
		int32_t L_327 = V_26;
		NullCheck(L_325);
		int32_t L_328 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_326, ((int32_t)(L_327<<1)))), 1));
		uint32_t L_329 = (L_325)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		V_31 = L_329;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_330 = ___datasrc0;
		int32_t L_331 = V_27;
		uint32_t L_332 = V_30;
		uint32_t L_333 = V_31;
		uint32_t L_334 = V_22;
		uint32_t L_335 = V_23;
		uint32_t L_336;
		L_336 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_332, L_333, L_334, L_335, NULL);
		uint32_t L_337 = V_24;
		uint32_t L_338 = V_22;
		uint32_t L_339 = V_23;
		uint32_t L_340;
		L_340 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_336, L_337, L_338, L_339, NULL);
		NullCheck(L_330);
		(L_330)->SetAt(static_cast<il2cpp_array_size_t>(L_331), (uint32_t)L_340);
		int32_t L_341 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_341, 1));
		int32_t L_342 = V_27;
		int32_t L_343 = V_4;
		V_27 = ((int32_t)il2cpp_codegen_add(L_342, L_343));
	}

IL_03d5:
	{
		int32_t L_344 = V_26;
		int32_t L_345 = V_1;
		if ((((int32_t)L_344) < ((int32_t)L_345)))
		{
			goto IL_0392;
		}
	}
	{
		int32_t L_346 = ___out_ntt5;
		if (L_346)
		{
			goto IL_040c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_347 = ___datasrc0;
		int32_t L_348 = V_5;
		int32_t L_349 = V_2;
		int32_t L_350 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_351 = ___datasrc0;
		int32_t L_352 = V_10;
		uint32_t L_353 = ___logn2;
		uint32_t L_354 = V_22;
		uint32_t L_355 = V_23;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_347, ((int32_t)il2cpp_codegen_add(L_348, L_349)), L_350, L_351, L_352, ((int32_t)il2cpp_codegen_subtract((int32_t)L_353, 1)), L_354, L_355, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_356 = ___datasrc0;
		int32_t L_357 = V_6;
		int32_t L_358 = V_2;
		int32_t L_359 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_360 = ___datasrc0;
		int32_t L_361 = V_10;
		uint32_t L_362 = ___logn2;
		uint32_t L_363 = V_22;
		uint32_t L_364 = V_23;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_356, ((int32_t)il2cpp_codegen_add(L_357, L_358)), L_359, L_360, L_361, ((int32_t)il2cpp_codegen_subtract((int32_t)L_362, 1)), L_363, L_364, NULL);
	}

IL_040c:
	{
		int32_t L_365 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_365, 1));
	}

IL_0410:
	{
		int32_t L_366 = V_2;
		int32_t L_367 = V_4;
		if ((((int32_t)L_366) < ((int32_t)L_367)))
		{
			goto IL_0262;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::make_fg(System.UInt32[],System.Int32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.UInt32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_make_fg_m6A40DC06365345E53FA5E362A70BAB1B7B7345F7 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___datasrc0, int32_t ___data1, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc2, int32_t ___f3, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc4, int32_t ___g5, uint32_t ___logn6, uint32_t ___depth7, int32_t ___out_ntt8, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t G_B10_0 = 0;
	uint32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B10_3 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* G_B10_4 = NULL;
	FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* G_B10_5 = NULL;
	int32_t G_B8_0 = 0;
	uint32_t G_B8_1 = 0;
	int32_t G_B8_2 = 0;
	int32_t G_B8_3 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* G_B8_4 = NULL;
	FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* G_B8_5 = NULL;
	int32_t G_B9_0 = 0;
	uint32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	int32_t G_B9_3 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* G_B9_4 = NULL;
	FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* G_B9_5 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	uint32_t G_B11_2 = 0;
	int32_t G_B11_3 = 0;
	int32_t G_B11_4 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* G_B11_5 = NULL;
	FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* G_B11_6 = NULL;
	{
		uint32_t L_0 = ___logn6;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		int32_t L_1 = ___data1;
		V_2 = L_1;
		int32_t L_2 = V_2;
		int32_t L_3 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_4 = __this->___PRIMES_2;
		V_6 = L_4;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_5 = V_6;
		NullCheck(L_5);
		int32_t L_6 = 0;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		uint32_t L_8 = L_7->___p_0;
		V_4 = L_8;
		V_1 = 0;
		goto IL_0050;
	}

IL_0025:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___datasrc0;
		int32_t L_10 = V_2;
		int32_t L_11 = V_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_12 = ___fsrc2;
		int32_t L_13 = ___f3;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		int8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		uint32_t L_17 = V_4;
		uint32_t L_18;
		L_18 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_16, L_17, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, L_11))), (uint32_t)L_18);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___datasrc0;
		int32_t L_20 = V_3;
		int32_t L_21 = V_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_22 = ___gsrc4;
		int32_t L_23 = ___g5;
		int32_t L_24 = V_1;
		NullCheck(L_22);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		int8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		uint32_t L_27 = V_4;
		uint32_t L_28;
		L_28 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_26, L_27, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_20, L_21))), (uint32_t)L_28);
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0050:
	{
		int32_t L_30 = V_1;
		int32_t L_31 = V_0;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0025;
		}
	}
	{
		uint32_t L_32 = ___depth7;
		if (L_32)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_33 = ___out_ntt8;
		if (!L_33)
		{
			goto IL_00ba;
		}
	}
	{
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_34 = V_6;
		NullCheck(L_34);
		int32_t L_35 = 0;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		uint32_t L_37 = L_36->___p_0;
		V_9 = L_37;
		uint32_t L_38 = V_9;
		uint32_t L_39;
		L_39 = FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE(__this, L_38, NULL);
		V_10 = L_39;
		int32_t L_40 = V_3;
		int32_t L_41 = V_0;
		V_7 = ((int32_t)il2cpp_codegen_add(L_40, L_41));
		int32_t L_42 = V_7;
		int32_t L_43 = V_0;
		V_8 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___datasrc0;
		int32_t L_45 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___datasrc0;
		int32_t L_47 = V_8;
		uint32_t L_48 = ___logn6;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_49 = V_6;
		NullCheck(L_49);
		int32_t L_50 = 0;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		uint32_t L_52 = L_51->___g_1;
		uint32_t L_53 = V_9;
		uint32_t L_54 = V_10;
		FalconKeygen_modp_mkgm2_m059C61ADC3900310EDA79EBC8573C3D66CBB86A5(__this, L_44, L_45, L_46, L_47, L_48, L_52, L_53, L_54, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ___datasrc0;
		int32_t L_56 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___datasrc0;
		int32_t L_58 = V_7;
		uint32_t L_59 = ___logn6;
		uint32_t L_60 = V_9;
		uint32_t L_61 = V_10;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_55, L_56, L_57, L_58, L_59, L_60, L_61, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___datasrc0;
		int32_t L_63 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___datasrc0;
		int32_t L_65 = V_7;
		uint32_t L_66 = ___logn6;
		uint32_t L_67 = V_9;
		uint32_t L_68 = V_10;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_62, L_63, L_64, L_65, L_66, L_67, L_68, NULL);
		return;
	}

IL_00ba:
	{
		V_5 = 0;
		goto IL_00e9;
	}

IL_00bf:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___datasrc0;
		int32_t L_70 = ___data1;
		uint32_t L_71 = ___logn6;
		uint32_t L_72 = V_5;
		uint32_t L_73 = V_5;
		uint32_t L_74 = V_5;
		uint32_t L_75 = V_5;
		uint32_t L_76 = ___depth7;
		G_B8_0 = ((!(((uint32_t)L_74) <= ((uint32_t)0)))? 1 : 0);
		G_B8_1 = L_73;
		G_B8_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)L_72));
		G_B8_3 = L_70;
		G_B8_4 = L_69;
		G_B8_5 = __this;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_75, 1))) >= ((uint32_t)L_76))))
		{
			G_B10_0 = ((!(((uint32_t)L_74) <= ((uint32_t)0)))? 1 : 0);
			G_B10_1 = L_73;
			G_B10_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)L_72));
			G_B10_3 = L_70;
			G_B10_4 = L_69;
			G_B10_5 = __this;
			goto IL_00dd;
		}
	}
	{
		int32_t L_77 = ___out_ntt8;
		G_B9_0 = G_B8_0;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
		G_B9_4 = G_B8_4;
		G_B9_5 = G_B8_5;
		if (L_77)
		{
			G_B10_0 = G_B8_0;
			G_B10_1 = G_B8_1;
			G_B10_2 = G_B8_2;
			G_B10_3 = G_B8_3;
			G_B10_4 = G_B8_4;
			G_B10_5 = G_B8_5;
			goto IL_00dd;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		G_B11_4 = G_B9_3;
		G_B11_5 = G_B9_4;
		G_B11_6 = G_B9_5;
		goto IL_00de;
	}

IL_00dd:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
		G_B11_5 = G_B10_4;
		G_B11_6 = G_B10_5;
	}

IL_00de:
	{
		NullCheck(G_B11_6);
		FalconKeygen_make_fg_step_m4D174A823656BB89D30796F1A94EAAB781A56DFF(G_B11_6, G_B11_5, G_B11_4, G_B11_3, G_B11_2, G_B11_1, G_B11_0, NULL);
		uint32_t L_78 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, 1));
	}

IL_00e9:
	{
		uint32_t L_79 = V_5;
		uint32_t L_80 = ___depth7;
		if ((!(((uint32_t)L_79) >= ((uint32_t)L_80))))
		{
			goto IL_00bf;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::solve_NTRU_deepest(System.UInt32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_solve_NTRU_deepest_mD1FBCE9F88B00A820D4CAB1DD7DD528D505D320E (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___logn_top0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc1, int32_t ___f2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc3, int32_t ___g4, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc5, int32_t ___tmp6, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* V_7 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___MAX_BL_SMALL_7;
		uint32_t L_1 = ___logn_top0;
		NullCheck(L_0);
		uint32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_4 = __this->___PRIMES_2;
		V_7 = L_4;
		int32_t L_5 = ___tmp6;
		V_1 = L_5;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		int32_t L_10 = V_3;
		int32_t L_11 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		int32_t L_12 = V_4;
		int32_t L_13 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___tmpsrc5;
		int32_t L_15 = V_3;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_16 = ___fsrc1;
		int32_t L_17 = ___f2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_18 = ___gsrc3;
		int32_t L_19 = ___g4;
		uint32_t L_20 = ___logn_top0;
		uint32_t L_21 = ___logn_top0;
		FalconKeygen_make_fg_m6A40DC06365345E53FA5E362A70BAB1B7B7345F7(__this, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___tmpsrc5;
		int32_t L_23 = V_3;
		int32_t L_24 = V_0;
		int32_t L_25 = V_0;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_26 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___tmpsrc5;
		int32_t L_28 = V_5;
		FalconKeygen_zint_rebuild_CRT_mFDDBAA64799A444D72449A4F4866B19D204C9DB5(__this, L_22, L_23, L_24, L_25, 2, L_26, 0, L_27, L_28, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___tmpsrc5;
		int32_t L_30 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___tmpsrc5;
		int32_t L_32 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___tmpsrc5;
		int32_t L_34 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___tmpsrc5;
		int32_t L_36 = V_4;
		int32_t L_37 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___tmpsrc5;
		int32_t L_39 = V_5;
		int32_t L_40;
		L_40 = FalconKeygen_zint_bezout_m14FD9F7D82925C64BDFFF1E50FC3918CDE77AB46(__this, L_29, L_30, L_31, L_32, L_33, L_34, L_35, L_36, L_37, L_38, L_39, NULL);
		if (L_40)
		{
			goto IL_0068;
		}
	}
	{
		return 0;
	}

IL_0068:
	{
		V_6 = ((int32_t)12289);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___tmpsrc5;
		int32_t L_42 = V_1;
		int32_t L_43 = V_0;
		uint32_t L_44 = V_6;
		uint32_t L_45;
		L_45 = FalconKeygen_zint_mul_small_mB77F1B1585761BE4710BA9687E6933137B0F48E6(__this, L_41, L_42, L_43, L_44, NULL);
		if (L_45)
		{
			goto IL_008b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___tmpsrc5;
		int32_t L_47 = V_2;
		int32_t L_48 = V_0;
		uint32_t L_49 = V_6;
		uint32_t L_50;
		L_50 = FalconKeygen_zint_mul_small_mB77F1B1585761BE4710BA9687E6933137B0F48E6(__this, L_46, L_47, L_48, L_49, NULL);
		if (!L_50)
		{
			goto IL_008d;
		}
	}

IL_008b:
	{
		return 0;
	}

IL_008d:
	{
		return 1;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::solve_NTRU_intermediate(System.UInt32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.UInt32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_solve_NTRU_intermediate_m1ED1640A12DB051A398D898F3E5116CC2877B81C (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___logn_top0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc1, int32_t ___f2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc3, int32_t ___g4, uint32_t ___depth5, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc6, int32_t ___tmp7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
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
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_16 = NULL;
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_17 = NULL;
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_18 = NULL;
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_19 = NULL;
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_20 = NULL;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_28 = NULL;
	FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* V_29 = NULL;
	uint32_t V_30 = 0;
	uint32_t V_31 = 0;
	uint32_t V_32 = 0;
	uint32_t V_33 = 0;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	uint32_t V_39 = 0;
	uint32_t V_40 = 0;
	uint32_t V_41 = 0;
	int32_t V_42 = 0;
	int32_t V_43 = 0;
	int32_t V_44 = 0;
	int32_t V_45 = 0;
	int32_t V_46 = 0;
	int32_t V_47 = 0;
	int32_t V_48 = 0;
	uint32_t V_49 = 0;
	uint32_t V_50 = 0;
	uint32_t V_51 = 0;
	uint32_t V_52 = 0;
	uint32_t V_53 = 0;
	uint32_t V_54 = 0;
	uint32_t V_55 = 0;
	int32_t V_56 = 0;
	int32_t V_57 = 0;
	int32_t V_58 = 0;
	uint32_t V_59 = 0;
	uint32_t V_60 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_61;
	memset((&V_61), 0, sizeof(V_61));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_62;
	memset((&V_62), 0, sizeof(V_62));
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_63;
	memset((&V_63), 0, sizeof(V_63));
	int32_t V_64 = 0;
	uint32_t V_65 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B33_0 = 0;
	{
		uint32_t L_0 = ___logn_top0;
		uint32_t L_1 = ___depth5;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		uint32_t L_2 = V_0;
		V_1 = ((int32_t)(1<<((int32_t)((int32_t)L_2&((int32_t)31)))));
		int32_t L_3 = V_1;
		V_2 = ((int32_t)(L_3>>1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___MAX_BL_SMALL_7;
		uint32_t L_5 = ___depth5;
		NullCheck(L_4);
		uint32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___MAX_BL_SMALL_7;
		uint32_t L_9 = ___depth5;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, 1));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___MAX_BL_LARGE_8;
		uint32_t L_13 = ___depth5;
		NullCheck(L_12);
		uint32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = L_15;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_16 = __this->___PRIMES_2;
		V_29 = L_16;
		int32_t L_17 = ___tmp7;
		V_9 = L_17;
		int32_t L_18 = V_9;
		int32_t L_19 = V_4;
		int32_t L_20 = V_2;
		V_10 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_multiply(L_19, L_20))));
		int32_t L_21 = V_10;
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		V_13 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___tmpsrc6;
		int32_t L_25 = V_13;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_26 = ___fsrc1;
		int32_t L_27 = ___f2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_28 = ___gsrc3;
		int32_t L_29 = ___g4;
		uint32_t L_30 = ___logn_top0;
		uint32_t L_31 = ___depth5;
		FalconKeygen_make_fg_m6A40DC06365345E53FA5E362A70BAB1B7B7345F7(__this, L_24, L_25, L_26, L_27, L_28, L_29, L_30, L_31, 1, NULL);
		int32_t L_32 = ___tmp7;
		V_11 = L_32;
		int32_t L_33 = V_11;
		int32_t L_34 = V_1;
		int32_t L_35 = V_5;
		V_12 = ((int32_t)il2cpp_codegen_add(L_33, ((int32_t)il2cpp_codegen_multiply(L_34, L_35))));
		int32_t L_36 = V_12;
		int32_t L_37 = V_1;
		int32_t L_38 = V_5;
		V_15 = ((int32_t)il2cpp_codegen_add(L_36, ((int32_t)il2cpp_codegen_multiply(L_37, L_38))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___tmpsrc6;
		int32_t L_40 = V_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___tmpsrc6;
		int32_t L_42 = V_15;
		int32_t L_43 = V_1;
		int32_t L_44 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, L_40, (RuntimeArray*)L_41, L_42, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_43)), L_44)), NULL);
		int32_t L_45 = V_15;
		V_13 = L_45;
		int32_t L_46 = V_13;
		int32_t L_47 = V_3;
		int32_t L_48 = V_1;
		V_14 = ((int32_t)il2cpp_codegen_add(L_46, ((int32_t)il2cpp_codegen_multiply(L_47, L_48))));
		int32_t L_49 = V_14;
		int32_t L_50 = V_3;
		int32_t L_51 = V_1;
		V_15 = ((int32_t)il2cpp_codegen_add(L_49, ((int32_t)il2cpp_codegen_multiply(L_50, L_51))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = ___tmpsrc6;
		int32_t L_53 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___tmpsrc6;
		int32_t L_55 = V_15;
		int32_t L_56 = V_2;
		int32_t L_57 = V_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_52, L_53, (RuntimeArray*)L_54, L_55, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_56)), L_57)), NULL);
		int32_t L_58 = V_15;
		V_9 = L_58;
		int32_t L_59 = V_9;
		int32_t L_60 = V_2;
		int32_t L_61 = V_4;
		V_10 = ((int32_t)il2cpp_codegen_add(L_59, ((int32_t)il2cpp_codegen_multiply(L_60, L_61))));
		V_8 = 0;
		goto IL_0174;
	}

IL_00c8:
	{
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_62 = V_29;
		int32_t L_63 = V_8;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		uint32_t L_66 = L_65->___p_0;
		V_30 = L_66;
		uint32_t L_67 = V_30;
		uint32_t L_68;
		L_68 = FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE(__this, L_67, NULL);
		V_31 = L_68;
		uint32_t L_69 = V_30;
		uint32_t L_70 = V_31;
		uint32_t L_71;
		L_71 = FalconKeygen_modp_R2_mFDF10C899F4DAC34C48E9CA91B075A78FE793634(__this, L_69, L_70, NULL);
		V_32 = L_71;
		int32_t L_72 = V_4;
		uint32_t L_73 = V_30;
		uint32_t L_74 = V_31;
		uint32_t L_75 = V_32;
		uint32_t L_76;
		L_76 = FalconKeygen_modp_Rx_mE6091B563F2ACAC7BB7ABE09D31961273EB89A79(__this, L_72, L_73, L_74, L_75, NULL);
		V_33 = L_76;
		V_34 = 0;
		int32_t L_77 = V_9;
		V_35 = L_77;
		int32_t L_78 = V_10;
		V_36 = L_78;
		int32_t L_79 = V_11;
		int32_t L_80 = V_8;
		V_37 = ((int32_t)il2cpp_codegen_add(L_79, L_80));
		int32_t L_81 = V_12;
		int32_t L_82 = V_8;
		V_38 = ((int32_t)il2cpp_codegen_add(L_81, L_82));
		goto IL_0169;
	}

IL_0115:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___tmpsrc6;
		int32_t L_84 = V_37;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___tmpsrc6;
		int32_t L_86 = V_35;
		int32_t L_87 = V_4;
		uint32_t L_88 = V_30;
		uint32_t L_89 = V_31;
		uint32_t L_90 = V_32;
		uint32_t L_91 = V_33;
		uint32_t L_92;
		L_92 = FalconKeygen_zint_mod_small_signed_m8C67FB119B15C5E02BC12B3D0B9AEFB26C9829C3(__this, L_85, L_86, L_87, L_88, L_89, L_90, L_91, NULL);
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (uint32_t)L_92);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = ___tmpsrc6;
		int32_t L_94 = V_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___tmpsrc6;
		int32_t L_96 = V_36;
		int32_t L_97 = V_4;
		uint32_t L_98 = V_30;
		uint32_t L_99 = V_31;
		uint32_t L_100 = V_32;
		uint32_t L_101 = V_33;
		uint32_t L_102;
		L_102 = FalconKeygen_zint_mod_small_signed_m8C67FB119B15C5E02BC12B3D0B9AEFB26C9829C3(__this, L_95, L_96, L_97, L_98, L_99, L_100, L_101, NULL);
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(L_94), (uint32_t)L_102);
		int32_t L_103 = V_34;
		V_34 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		int32_t L_104 = V_35;
		int32_t L_105 = V_4;
		V_35 = ((int32_t)il2cpp_codegen_add(L_104, L_105));
		int32_t L_106 = V_36;
		int32_t L_107 = V_4;
		V_36 = ((int32_t)il2cpp_codegen_add(L_106, L_107));
		int32_t L_108 = V_37;
		int32_t L_109 = V_5;
		V_37 = ((int32_t)il2cpp_codegen_add(L_108, L_109));
		int32_t L_110 = V_38;
		int32_t L_111 = V_5;
		V_38 = ((int32_t)il2cpp_codegen_add(L_110, L_111));
	}

IL_0169:
	{
		int32_t L_112 = V_34;
		int32_t L_113 = V_2;
		if ((((int32_t)L_112) < ((int32_t)L_113)))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_114 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_0174:
	{
		int32_t L_115 = V_8;
		int32_t L_116 = V_5;
		if ((((int32_t)L_115) < ((int32_t)L_116)))
		{
			goto IL_00c8;
		}
	}
	{
		V_8 = 0;
		goto IL_04ac;
	}

IL_0185:
	{
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_117 = V_29;
		int32_t L_118 = V_8;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		NullCheck(L_120);
		uint32_t L_121 = L_120->___p_0;
		V_39 = L_121;
		uint32_t L_122 = V_39;
		uint32_t L_123;
		L_123 = FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE(__this, L_122, NULL);
		V_40 = L_123;
		uint32_t L_124 = V_39;
		uint32_t L_125 = V_40;
		uint32_t L_126;
		L_126 = FalconKeygen_modp_R2_mFDF10C899F4DAC34C48E9CA91B075A78FE793634(__this, L_124, L_125, NULL);
		V_41 = L_126;
		int32_t L_127 = V_8;
		int32_t L_128 = V_3;
		if ((!(((uint32_t)L_127) == ((uint32_t)L_128))))
		{
			goto IL_01d4;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = ___tmpsrc6;
		int32_t L_130 = V_13;
		int32_t L_131 = V_3;
		int32_t L_132 = V_3;
		int32_t L_133 = V_1;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_134 = V_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_135 = ___tmpsrc6;
		int32_t L_136 = V_15;
		FalconKeygen_zint_rebuild_CRT_mFDDBAA64799A444D72449A4F4866B19D204C9DB5(__this, L_129, L_130, L_131, L_132, L_133, L_134, 1, L_135, L_136, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = ___tmpsrc6;
		int32_t L_138 = V_14;
		int32_t L_139 = V_3;
		int32_t L_140 = V_3;
		int32_t L_141 = V_1;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_142 = V_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = ___tmpsrc6;
		int32_t L_144 = V_15;
		FalconKeygen_zint_rebuild_CRT_mFDDBAA64799A444D72449A4F4866B19D204C9DB5(__this, L_137, L_138, L_139, L_140, L_141, L_142, 1, L_143, L_144, NULL);
	}

IL_01d4:
	{
		int32_t L_145 = V_15;
		V_42 = L_145;
		int32_t L_146 = V_42;
		int32_t L_147 = V_1;
		V_43 = ((int32_t)il2cpp_codegen_add(L_146, L_147));
		int32_t L_148 = V_43;
		int32_t L_149 = V_1;
		V_44 = ((int32_t)il2cpp_codegen_add(L_148, L_149));
		int32_t L_150 = V_44;
		int32_t L_151 = V_1;
		V_45 = ((int32_t)il2cpp_codegen_add(L_150, L_151));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_152 = ___tmpsrc6;
		int32_t L_153 = V_42;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_154 = ___tmpsrc6;
		int32_t L_155 = V_43;
		uint32_t L_156 = V_0;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_157 = V_29;
		int32_t L_158 = V_8;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_160);
		uint32_t L_161 = L_160->___g_1;
		uint32_t L_162 = V_39;
		uint32_t L_163 = V_40;
		FalconKeygen_modp_mkgm2_m059C61ADC3900310EDA79EBC8573C3D66CBB86A5(__this, L_152, L_153, L_154, L_155, L_156, L_161, L_162, L_163, NULL);
		int32_t L_164 = V_8;
		int32_t L_165 = V_3;
		if ((((int32_t)L_164) >= ((int32_t)L_165)))
		{
			goto IL_0283;
		}
	}
	{
		V_48 = 0;
		int32_t L_166 = V_13;
		int32_t L_167 = V_8;
		V_26 = ((int32_t)il2cpp_codegen_add(L_166, L_167));
		int32_t L_168 = V_14;
		int32_t L_169 = V_8;
		V_27 = ((int32_t)il2cpp_codegen_add(L_168, L_169));
		goto IL_024b;
	}

IL_021f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_170 = ___tmpsrc6;
		int32_t L_171 = V_44;
		int32_t L_172 = V_48;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_173 = ___tmpsrc6;
		int32_t L_174 = V_26;
		NullCheck(L_173);
		int32_t L_175 = L_174;
		uint32_t L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_170);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_171, L_172))), (uint32_t)L_176);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_177 = ___tmpsrc6;
		int32_t L_178 = V_45;
		int32_t L_179 = V_48;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_180 = ___tmpsrc6;
		int32_t L_181 = V_27;
		NullCheck(L_180);
		int32_t L_182 = L_181;
		uint32_t L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_178, L_179))), (uint32_t)L_183);
		int32_t L_184 = V_48;
		V_48 = ((int32_t)il2cpp_codegen_add(L_184, 1));
		int32_t L_185 = V_26;
		int32_t L_186 = V_3;
		V_26 = ((int32_t)il2cpp_codegen_add(L_185, L_186));
		int32_t L_187 = V_27;
		int32_t L_188 = V_3;
		V_27 = ((int32_t)il2cpp_codegen_add(L_187, L_188));
	}

IL_024b:
	{
		int32_t L_189 = V_48;
		int32_t L_190 = V_1;
		if ((((int32_t)L_189) < ((int32_t)L_190)))
		{
			goto IL_021f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_191 = ___tmpsrc6;
		int32_t L_192 = V_13;
		int32_t L_193 = V_8;
		int32_t L_194 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_195 = ___tmpsrc6;
		int32_t L_196 = V_43;
		uint32_t L_197 = V_0;
		uint32_t L_198 = V_39;
		uint32_t L_199 = V_40;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_191, ((int32_t)il2cpp_codegen_add(L_192, L_193)), L_194, L_195, L_196, L_197, L_198, L_199, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_200 = ___tmpsrc6;
		int32_t L_201 = V_14;
		int32_t L_202 = V_8;
		int32_t L_203 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_204 = ___tmpsrc6;
		int32_t L_205 = V_43;
		uint32_t L_206 = V_0;
		uint32_t L_207 = V_39;
		uint32_t L_208 = V_40;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_200, ((int32_t)il2cpp_codegen_add(L_201, L_202)), L_203, L_204, L_205, L_206, L_207, L_208, NULL);
		goto IL_0312;
	}

IL_0283:
	{
		int32_t L_209 = V_3;
		uint32_t L_210 = V_39;
		uint32_t L_211 = V_40;
		uint32_t L_212 = V_41;
		uint32_t L_213;
		L_213 = FalconKeygen_modp_Rx_mE6091B563F2ACAC7BB7ABE09D31961273EB89A79(__this, L_209, L_210, L_211, L_212, NULL);
		V_49 = L_213;
		V_48 = 0;
		int32_t L_214 = V_13;
		V_26 = L_214;
		int32_t L_215 = V_14;
		V_27 = L_215;
		goto IL_02e7;
	}

IL_029f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_216 = ___tmpsrc6;
		int32_t L_217 = V_44;
		int32_t L_218 = V_48;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_219 = ___tmpsrc6;
		int32_t L_220 = V_26;
		int32_t L_221 = V_3;
		uint32_t L_222 = V_39;
		uint32_t L_223 = V_40;
		uint32_t L_224 = V_41;
		uint32_t L_225 = V_49;
		uint32_t L_226;
		L_226 = FalconKeygen_zint_mod_small_signed_m8C67FB119B15C5E02BC12B3D0B9AEFB26C9829C3(__this, L_219, L_220, L_221, L_222, L_223, L_224, L_225, NULL);
		NullCheck(L_216);
		(L_216)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_217, L_218))), (uint32_t)L_226);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_227 = ___tmpsrc6;
		int32_t L_228 = V_45;
		int32_t L_229 = V_48;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_230 = ___tmpsrc6;
		int32_t L_231 = V_27;
		int32_t L_232 = V_3;
		uint32_t L_233 = V_39;
		uint32_t L_234 = V_40;
		uint32_t L_235 = V_41;
		uint32_t L_236 = V_49;
		uint32_t L_237;
		L_237 = FalconKeygen_zint_mod_small_signed_m8C67FB119B15C5E02BC12B3D0B9AEFB26C9829C3(__this, L_230, L_231, L_232, L_233, L_234, L_235, L_236, NULL);
		NullCheck(L_227);
		(L_227)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_228, L_229))), (uint32_t)L_237);
		int32_t L_238 = V_48;
		V_48 = ((int32_t)il2cpp_codegen_add(L_238, 1));
		int32_t L_239 = V_26;
		int32_t L_240 = V_3;
		V_26 = ((int32_t)il2cpp_codegen_add(L_239, L_240));
		int32_t L_241 = V_27;
		int32_t L_242 = V_3;
		V_27 = ((int32_t)il2cpp_codegen_add(L_241, L_242));
	}

IL_02e7:
	{
		int32_t L_243 = V_48;
		int32_t L_244 = V_1;
		if ((((int32_t)L_243) < ((int32_t)L_244)))
		{
			goto IL_029f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_245 = ___tmpsrc6;
		int32_t L_246 = V_44;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_247 = ___tmpsrc6;
		int32_t L_248 = V_42;
		uint32_t L_249 = V_0;
		uint32_t L_250 = V_39;
		uint32_t L_251 = V_40;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_245, L_246, L_247, L_248, L_249, L_250, L_251, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_252 = ___tmpsrc6;
		int32_t L_253 = V_45;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_254 = ___tmpsrc6;
		int32_t L_255 = V_42;
		uint32_t L_256 = V_0;
		uint32_t L_257 = V_39;
		uint32_t L_258 = V_40;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_252, L_253, L_254, L_255, L_256, L_257, L_258, NULL);
	}

IL_0312:
	{
		int32_t L_259 = V_45;
		int32_t L_260 = V_1;
		V_46 = ((int32_t)il2cpp_codegen_add(L_259, L_260));
		int32_t L_261 = V_46;
		int32_t L_262 = V_2;
		V_47 = ((int32_t)il2cpp_codegen_add(L_261, L_262));
		V_48 = 0;
		int32_t L_263 = V_11;
		int32_t L_264 = V_8;
		V_26 = ((int32_t)il2cpp_codegen_add(L_263, L_264));
		int32_t L_265 = V_12;
		int32_t L_266 = V_8;
		V_27 = ((int32_t)il2cpp_codegen_add(L_265, L_266));
		goto IL_035f;
	}

IL_0331:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_267 = ___tmpsrc6;
		int32_t L_268 = V_46;
		int32_t L_269 = V_48;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_270 = ___tmpsrc6;
		int32_t L_271 = V_26;
		NullCheck(L_270);
		int32_t L_272 = L_271;
		uint32_t L_273 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		NullCheck(L_267);
		(L_267)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_268, L_269))), (uint32_t)L_273);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_274 = ___tmpsrc6;
		int32_t L_275 = V_47;
		int32_t L_276 = V_48;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_277 = ___tmpsrc6;
		int32_t L_278 = V_27;
		NullCheck(L_277);
		int32_t L_279 = L_278;
		uint32_t L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		NullCheck(L_274);
		(L_274)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_275, L_276))), (uint32_t)L_280);
		int32_t L_281 = V_48;
		V_48 = ((int32_t)il2cpp_codegen_add(L_281, 1));
		int32_t L_282 = V_26;
		int32_t L_283 = V_5;
		V_26 = ((int32_t)il2cpp_codegen_add(L_282, L_283));
		int32_t L_284 = V_27;
		int32_t L_285 = V_5;
		V_27 = ((int32_t)il2cpp_codegen_add(L_284, L_285));
	}

IL_035f:
	{
		int32_t L_286 = V_48;
		int32_t L_287 = V_2;
		if ((((int32_t)L_286) < ((int32_t)L_287)))
		{
			goto IL_0331;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_288 = ___tmpsrc6;
		int32_t L_289 = V_46;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_290 = ___tmpsrc6;
		int32_t L_291 = V_42;
		uint32_t L_292 = V_0;
		uint32_t L_293 = V_39;
		uint32_t L_294 = V_40;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_288, L_289, L_290, L_291, ((int32_t)il2cpp_codegen_subtract((int32_t)L_292, 1)), L_293, L_294, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_295 = ___tmpsrc6;
		int32_t L_296 = V_47;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_297 = ___tmpsrc6;
		int32_t L_298 = V_42;
		uint32_t L_299 = V_0;
		uint32_t L_300 = V_39;
		uint32_t L_301 = V_40;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_295, L_296, L_297, L_298, ((int32_t)il2cpp_codegen_subtract((int32_t)L_299, 1)), L_300, L_301, NULL);
		V_48 = 0;
		int32_t L_302 = V_11;
		int32_t L_303 = V_8;
		V_26 = ((int32_t)il2cpp_codegen_add(L_302, L_303));
		int32_t L_304 = V_12;
		int32_t L_305 = V_8;
		V_27 = ((int32_t)il2cpp_codegen_add(L_304, L_305));
		goto IL_046e;
	}

IL_03a4:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_306 = ___tmpsrc6;
		int32_t L_307 = V_44;
		int32_t L_308 = V_48;
		NullCheck(L_306);
		int32_t L_309 = ((int32_t)il2cpp_codegen_add(L_307, ((int32_t)(L_308<<1))));
		uint32_t L_310 = (L_306)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		V_50 = L_310;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_311 = ___tmpsrc6;
		int32_t L_312 = V_44;
		int32_t L_313 = V_48;
		NullCheck(L_311);
		int32_t L_314 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_312, ((int32_t)(L_313<<1)))), 1));
		uint32_t L_315 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		V_51 = L_315;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_316 = ___tmpsrc6;
		int32_t L_317 = V_45;
		int32_t L_318 = V_48;
		NullCheck(L_316);
		int32_t L_319 = ((int32_t)il2cpp_codegen_add(L_317, ((int32_t)(L_318<<1))));
		uint32_t L_320 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_319));
		V_52 = L_320;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_321 = ___tmpsrc6;
		int32_t L_322 = V_45;
		int32_t L_323 = V_48;
		NullCheck(L_321);
		int32_t L_324 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_322, ((int32_t)(L_323<<1)))), 1));
		uint32_t L_325 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		V_53 = L_325;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_326 = ___tmpsrc6;
		int32_t L_327 = V_46;
		int32_t L_328 = V_48;
		NullCheck(L_326);
		int32_t L_329 = ((int32_t)il2cpp_codegen_add(L_327, L_328));
		uint32_t L_330 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		uint32_t L_331 = V_41;
		uint32_t L_332 = V_39;
		uint32_t L_333 = V_40;
		uint32_t L_334;
		L_334 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_330, L_331, L_332, L_333, NULL);
		V_54 = L_334;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_335 = ___tmpsrc6;
		int32_t L_336 = V_47;
		int32_t L_337 = V_48;
		NullCheck(L_335);
		int32_t L_338 = ((int32_t)il2cpp_codegen_add(L_336, L_337));
		uint32_t L_339 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_338));
		uint32_t L_340 = V_41;
		uint32_t L_341 = V_39;
		uint32_t L_342 = V_40;
		uint32_t L_343;
		L_343 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_339, L_340, L_341, L_342, NULL);
		V_55 = L_343;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_344 = ___tmpsrc6;
		int32_t L_345 = V_26;
		uint32_t L_346 = V_53;
		uint32_t L_347 = V_54;
		uint32_t L_348 = V_39;
		uint32_t L_349 = V_40;
		uint32_t L_350;
		L_350 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_346, L_347, L_348, L_349, NULL);
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(L_345), (uint32_t)L_350);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_351 = ___tmpsrc6;
		int32_t L_352 = V_26;
		int32_t L_353 = V_5;
		uint32_t L_354 = V_52;
		uint32_t L_355 = V_54;
		uint32_t L_356 = V_39;
		uint32_t L_357 = V_40;
		uint32_t L_358;
		L_358 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_354, L_355, L_356, L_357, NULL);
		NullCheck(L_351);
		(L_351)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_352, L_353))), (uint32_t)L_358);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_359 = ___tmpsrc6;
		int32_t L_360 = V_27;
		uint32_t L_361 = V_51;
		uint32_t L_362 = V_55;
		uint32_t L_363 = V_39;
		uint32_t L_364 = V_40;
		uint32_t L_365;
		L_365 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_361, L_362, L_363, L_364, NULL);
		NullCheck(L_359);
		(L_359)->SetAt(static_cast<il2cpp_array_size_t>(L_360), (uint32_t)L_365);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_366 = ___tmpsrc6;
		int32_t L_367 = V_27;
		int32_t L_368 = V_5;
		uint32_t L_369 = V_50;
		uint32_t L_370 = V_55;
		uint32_t L_371 = V_39;
		uint32_t L_372 = V_40;
		uint32_t L_373;
		L_373 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_369, L_370, L_371, L_372, NULL);
		NullCheck(L_366);
		(L_366)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_367, L_368))), (uint32_t)L_373);
		int32_t L_374 = V_48;
		V_48 = ((int32_t)il2cpp_codegen_add(L_374, 1));
		int32_t L_375 = V_26;
		int32_t L_376 = V_5;
		V_26 = ((int32_t)il2cpp_codegen_add(L_375, ((int32_t)(L_376<<1))));
		int32_t L_377 = V_27;
		int32_t L_378 = V_5;
		V_27 = ((int32_t)il2cpp_codegen_add(L_377, ((int32_t)(L_378<<1))));
	}

IL_046e:
	{
		int32_t L_379 = V_48;
		int32_t L_380 = V_2;
		if ((((int32_t)L_379) < ((int32_t)L_380)))
		{
			goto IL_03a4;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_381 = ___tmpsrc6;
		int32_t L_382 = V_11;
		int32_t L_383 = V_8;
		int32_t L_384 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_385 = ___tmpsrc6;
		int32_t L_386 = V_43;
		uint32_t L_387 = V_0;
		uint32_t L_388 = V_39;
		uint32_t L_389 = V_40;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_381, ((int32_t)il2cpp_codegen_add(L_382, L_383)), L_384, L_385, L_386, L_387, L_388, L_389, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_390 = ___tmpsrc6;
		int32_t L_391 = V_12;
		int32_t L_392 = V_8;
		int32_t L_393 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_394 = ___tmpsrc6;
		int32_t L_395 = V_43;
		uint32_t L_396 = V_0;
		uint32_t L_397 = V_39;
		uint32_t L_398 = V_40;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_390, ((int32_t)il2cpp_codegen_add(L_391, L_392)), L_393, L_394, L_395, L_396, L_397, L_398, NULL);
		int32_t L_399 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_399, 1));
	}

IL_04ac:
	{
		int32_t L_400 = V_8;
		int32_t L_401 = V_5;
		if ((((int32_t)L_400) < ((int32_t)L_401)))
		{
			goto IL_0185;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_402 = ___tmpsrc6;
		int32_t L_403 = V_11;
		int32_t L_404 = V_5;
		int32_t L_405 = V_5;
		int32_t L_406 = V_1;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_407 = V_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_408 = ___tmpsrc6;
		int32_t L_409 = V_15;
		FalconKeygen_zint_rebuild_CRT_mFDDBAA64799A444D72449A4F4866B19D204C9DB5(__this, L_402, L_403, L_404, L_405, L_406, L_407, 1, L_408, L_409, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_410 = ___tmpsrc6;
		int32_t L_411 = V_12;
		int32_t L_412 = V_5;
		int32_t L_413 = V_5;
		int32_t L_414 = V_1;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_415 = V_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_416 = ___tmpsrc6;
		int32_t L_417 = V_15;
		FalconKeygen_zint_rebuild_CRT_mFDDBAA64799A444D72449A4F4866B19D204C9DB5(__this, L_410, L_411, L_412, L_413, L_414, L_415, 1, L_416, L_417, NULL);
		int32_t L_418 = V_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_419 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)L_418);
		V_16 = L_419;
		int32_t L_420 = V_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_421 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)L_420);
		V_17 = L_421;
		int32_t L_422 = V_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_423 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)L_422);
		V_18 = L_423;
		int32_t L_424 = V_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_425 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)L_424);
		V_19 = L_425;
		int32_t L_426 = V_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_427 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_426>>1)));
		V_20 = L_427;
		int32_t L_428 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_429 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_428);
		V_28 = L_429;
		int32_t L_430 = V_3;
		if ((((int32_t)L_430) > ((int32_t)((int32_t)10))))
		{
			goto IL_051b;
		}
	}
	{
		int32_t L_431 = V_3;
		G_B29_0 = L_431;
		goto IL_051d;
	}

IL_051b:
	{
		G_B29_0 = ((int32_t)10);
	}

IL_051d:
	{
		V_6 = G_B29_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_432 = V_18;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_433 = ___tmpsrc6;
		int32_t L_434 = V_13;
		int32_t L_435 = V_3;
		int32_t L_436 = V_6;
		int32_t L_437 = V_6;
		int32_t L_438 = V_3;
		uint32_t L_439 = V_0;
		FalconKeygen_poly_big_to_fp_m184E71EAEB8A8964C0E509E9A160DD2482D76168(__this, L_432, 0, L_433, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_434, L_435)), L_436)), L_437, L_438, L_439, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_440 = V_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_441 = ___tmpsrc6;
		int32_t L_442 = V_14;
		int32_t L_443 = V_3;
		int32_t L_444 = V_6;
		int32_t L_445 = V_6;
		int32_t L_446 = V_3;
		uint32_t L_447 = V_0;
		FalconKeygen_poly_big_to_fp_m184E71EAEB8A8964C0E509E9A160DD2482D76168(__this, L_440, 0, L_441, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_442, L_443)), L_444)), L_445, L_446, L_447, NULL);
		int32_t L_448 = V_3;
		int32_t L_449 = V_6;
		V_21 = ((int32_t)il2cpp_codegen_multiply(((int32_t)31), ((int32_t)il2cpp_codegen_subtract(L_448, L_449))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_450 = __this->___BITLENGTH_avg_9;
		uint32_t L_451 = ___depth5;
		NullCheck(L_450);
		uint32_t L_452 = L_451;
		int32_t L_453 = (L_450)->GetAt(static_cast<il2cpp_array_size_t>(L_452));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_454 = __this->___BITLENGTH_std_10;
		uint32_t L_455 = ___depth5;
		NullCheck(L_454);
		uint32_t L_456 = L_455;
		int32_t L_457 = (L_454)->GetAt(static_cast<il2cpp_array_size_t>(L_456));
		V_22 = ((int32_t)il2cpp_codegen_subtract(L_453, ((int32_t)il2cpp_codegen_multiply(6, L_457))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_458 = __this->___BITLENGTH_avg_9;
		uint32_t L_459 = ___depth5;
		NullCheck(L_458);
		uint32_t L_460 = L_459;
		int32_t L_461 = (L_458)->GetAt(static_cast<il2cpp_array_size_t>(L_460));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_462 = __this->___BITLENGTH_std_10;
		uint32_t L_463 = ___depth5;
		NullCheck(L_462);
		uint32_t L_464 = L_463;
		int32_t L_465 = (L_462)->GetAt(static_cast<il2cpp_array_size_t>(L_464));
		V_23 = ((int32_t)il2cpp_codegen_add(L_461, ((int32_t)il2cpp_codegen_multiply(6, L_465))));
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_466 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_467 = V_18;
		uint32_t L_468 = V_0;
		NullCheck(L_466);
		FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09(L_466, L_467, 0, L_468, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_469 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_470 = V_19;
		uint32_t L_471 = V_0;
		NullCheck(L_469);
		FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09(L_469, L_470, 0, L_471, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_472 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_473 = V_20;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_474 = V_18;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_475 = V_19;
		uint32_t L_476 = V_0;
		NullCheck(L_472);
		FalconFFT_poly_invnorm2_fft_mDF55588BAD67975250860E1437DCC4E7ECCE7043(L_472, L_473, 0, L_474, 0, L_475, 0, L_476, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_477 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_478 = V_18;
		uint32_t L_479 = V_0;
		NullCheck(L_477);
		FalconFFT_poly_adj_fft_mA5CE00AB69D7431DFC350AB819CC71B90645B163(L_477, L_478, 0, L_479, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_480 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_481 = V_19;
		uint32_t L_482 = V_0;
		NullCheck(L_480);
		FalconFFT_poly_adj_fft_mA5CE00AB69D7431DFC350AB819CC71B90645B163(L_480, L_481, 0, L_482, NULL);
		int32_t L_483 = V_5;
		V_7 = L_483;
		int32_t L_484 = V_5;
		V_24 = ((int32_t)il2cpp_codegen_multiply(((int32_t)31), L_484));
		int32_t L_485 = V_24;
		int32_t L_486 = V_22;
		V_25 = ((int32_t)il2cpp_codegen_subtract(L_485, L_486));
	}

IL_05e5:
	{
		int32_t L_487 = V_7;
		if ((((int32_t)L_487) > ((int32_t)((int32_t)10))))
		{
			goto IL_05ef;
		}
	}
	{
		int32_t L_488 = V_7;
		G_B33_0 = L_488;
		goto IL_05f1;
	}

IL_05ef:
	{
		G_B33_0 = ((int32_t)10);
	}

IL_05f1:
	{
		V_6 = G_B33_0;
		int32_t L_489 = V_7;
		int32_t L_490 = V_6;
		V_56 = ((int32_t)il2cpp_codegen_multiply(((int32_t)31), ((int32_t)il2cpp_codegen_subtract(L_489, L_490))));
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_491 = V_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_492 = ___tmpsrc6;
		int32_t L_493 = V_11;
		int32_t L_494 = V_7;
		int32_t L_495 = V_6;
		int32_t L_496 = V_6;
		int32_t L_497 = V_5;
		uint32_t L_498 = V_0;
		FalconKeygen_poly_big_to_fp_m184E71EAEB8A8964C0E509E9A160DD2482D76168(__this, L_491, 0, L_492, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_493, L_494)), L_495)), L_496, L_497, L_498, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_499 = V_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_500 = ___tmpsrc6;
		int32_t L_501 = V_12;
		int32_t L_502 = V_7;
		int32_t L_503 = V_6;
		int32_t L_504 = V_6;
		int32_t L_505 = V_5;
		uint32_t L_506 = V_0;
		FalconKeygen_poly_big_to_fp_m184E71EAEB8A8964C0E509E9A160DD2482D76168(__this, L_499, 0, L_500, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_501, L_502)), L_503)), L_504, L_505, L_506, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_507 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_508 = V_16;
		uint32_t L_509 = V_0;
		NullCheck(L_507);
		FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09(L_507, L_508, 0, L_509, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_510 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_511 = V_17;
		uint32_t L_512 = V_0;
		NullCheck(L_510);
		FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09(L_510, L_511, 0, L_512, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_513 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_514 = V_16;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_515 = V_18;
		uint32_t L_516 = V_0;
		NullCheck(L_513);
		FalconFFT_poly_mul_fft_mE10CFC18FB478674D4DE3F6EFF9080617F4B921C(L_513, L_514, 0, L_515, 0, L_516, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_517 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_518 = V_17;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_519 = V_19;
		uint32_t L_520 = V_0;
		NullCheck(L_517);
		FalconFFT_poly_mul_fft_mE10CFC18FB478674D4DE3F6EFF9080617F4B921C(L_517, L_518, 0, L_519, 0, L_520, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_521 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_522 = V_17;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_523 = V_16;
		uint32_t L_524 = V_0;
		NullCheck(L_521);
		FalconFFT_poly_add_m62B50EBCD7036165E701DC6538F340560C0D5943(L_521, L_522, 0, L_523, 0, L_524, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_525 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_526 = V_17;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_527 = V_20;
		uint32_t L_528 = V_0;
		NullCheck(L_525);
		FalconFFT_poly_mul_autoadj_fft_mA719D26DC7D3B099509230DB13D2546EF7583693(L_525, L_526, 0, L_527, 0, L_528, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_529 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_530 = V_17;
		uint32_t L_531 = V_0;
		NullCheck(L_529);
		FalconFFT_iFFT_mC2AEDA0BE2CBCF043C45A2E9F9734843602E8BBB(L_529, L_530, 0, L_531, NULL);
		int32_t L_532 = V_25;
		int32_t L_533 = V_56;
		int32_t L_534 = V_21;
		V_57 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_532, L_533)), L_534));
		int32_t L_535 = V_57;
		if ((((int32_t)L_535) >= ((int32_t)0)))
		{
			goto IL_06c5;
		}
	}
	{
		int32_t L_536 = V_57;
		V_57 = ((-L_536));
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_537 = __this->___fpre_0;
		NullCheck(L_537);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_538 = L_537->___fpr_two_7;
		V_62 = L_538;
		goto IL_06d2;
	}

IL_06c5:
	{
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_539 = __this->___fpre_0;
		NullCheck(L_539);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_540 = L_539->___fpr_onehalf_8;
		V_62 = L_540;
	}

IL_06d2:
	{
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_541 = __this->___fpre_0;
		NullCheck(L_541);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_542 = L_541->___fpr_one_6;
		V_61 = L_542;
		goto IL_070d;
	}

IL_06e1:
	{
		int32_t L_543 = V_57;
		if (!((int32_t)(L_543&1)))
		{
			goto IL_06f8;
		}
	}
	{
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_544 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_545 = V_61;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_546 = V_62;
		NullCheck(L_544);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_547;
		L_547 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_544, L_545, L_546, NULL);
		V_61 = L_547;
	}

IL_06f8:
	{
		int32_t L_548 = V_57;
		V_57 = ((int32_t)(L_548>>1));
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_549 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_550 = V_62;
		NullCheck(L_549);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_551;
		L_551 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_549, L_550, NULL);
		V_62 = L_551;
	}

IL_070d:
	{
		int32_t L_552 = V_57;
		if (L_552)
		{
			goto IL_06e1;
		}
	}
	{
		V_8 = 0;
		goto IL_077d;
	}

IL_0716:
	{
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_553 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_554 = V_17;
		int32_t L_555 = V_8;
		NullCheck(L_554);
		int32_t L_556 = L_555;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_557 = (L_554)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_558 = V_61;
		NullCheck(L_553);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_559;
		L_559 = FprEngine_fpr_mul_m6AE7CCA9D94F4FC7B1BCEFD5567505F216DD184D(L_553, L_557, L_558, NULL);
		V_63 = L_559;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_560 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_561 = __this->___fpre_0;
		NullCheck(L_561);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_562 = L_561->___fpr_mtwo31m1_13;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_563 = V_63;
		NullCheck(L_560);
		bool L_564;
		L_564 = FprEngine_fpr_lt_mBD3CB70126D34865E4E33DF05BC74503638323E7(L_560, L_562, L_563, NULL);
		if (!L_564)
		{
			goto IL_0762;
		}
	}
	{
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_565 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_566 = V_63;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_567 = __this->___fpre_0;
		NullCheck(L_567);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_568 = L_567->___fpr_ptwo31m1_12;
		NullCheck(L_565);
		bool L_569;
		L_569 = FprEngine_fpr_lt_mBD3CB70126D34865E4E33DF05BC74503638323E7(L_565, L_566, L_568, NULL);
		if (L_569)
		{
			goto IL_0764;
		}
	}

IL_0762:
	{
		return 0;
	}

IL_0764:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_570 = V_28;
		int32_t L_571 = V_8;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_572 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_573 = V_63;
		NullCheck(L_572);
		int64_t L_574;
		L_574 = FprEngine_fpr_rint_m89FD9868C85461C89E4656BD48AB86FDBBE3FBB6(L_572, L_573, NULL);
		NullCheck(L_570);
		(L_570)->SetAt(static_cast<il2cpp_array_size_t>(L_571), (int32_t)((int32_t)L_574));
		int32_t L_575 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_575, 1));
	}

IL_077d:
	{
		int32_t L_576 = V_8;
		int32_t L_577 = V_1;
		if ((((int32_t)L_576) < ((int32_t)L_577)))
		{
			goto IL_0716;
		}
	}
	{
		int32_t L_578 = V_25;
		V_60 = ((int32_t)(L_578/((int32_t)31)));
		int32_t L_579 = V_25;
		V_59 = ((int32_t)(L_579%((int32_t)31)));
		uint32_t L_580 = ___depth5;
		if ((!(((uint32_t)L_580) <= ((uint32_t)4))))
		{
			goto IL_07d7;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_581 = ___tmpsrc6;
		int32_t L_582 = V_11;
		int32_t L_583 = V_7;
		int32_t L_584 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_585 = ___tmpsrc6;
		int32_t L_586 = V_13;
		int32_t L_587 = V_3;
		int32_t L_588 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_589 = V_28;
		uint32_t L_590 = V_60;
		uint32_t L_591 = V_59;
		uint32_t L_592 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_593 = ___tmpsrc6;
		int32_t L_594 = V_15;
		FalconKeygen_poly_sub_scaled_ntt_m046CCC267E23369C890D2E5743E991806A1DA9D0(__this, L_581, L_582, L_583, L_584, L_585, L_586, L_587, L_588, L_589, 0, L_590, L_591, L_592, L_593, L_594, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_595 = ___tmpsrc6;
		int32_t L_596 = V_12;
		int32_t L_597 = V_7;
		int32_t L_598 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_599 = ___tmpsrc6;
		int32_t L_600 = V_14;
		int32_t L_601 = V_3;
		int32_t L_602 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_603 = V_28;
		uint32_t L_604 = V_60;
		uint32_t L_605 = V_59;
		uint32_t L_606 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_607 = ___tmpsrc6;
		int32_t L_608 = V_15;
		FalconKeygen_poly_sub_scaled_ntt_m046CCC267E23369C890D2E5743E991806A1DA9D0(__this, L_595, L_596, L_597, L_598, L_599, L_600, L_601, L_602, L_603, 0, L_604, L_605, L_606, L_607, L_608, NULL);
		goto IL_080f;
	}

IL_07d7:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_609 = ___tmpsrc6;
		int32_t L_610 = V_11;
		int32_t L_611 = V_7;
		int32_t L_612 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_613 = ___tmpsrc6;
		int32_t L_614 = V_13;
		int32_t L_615 = V_3;
		int32_t L_616 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_617 = V_28;
		uint32_t L_618 = V_60;
		uint32_t L_619 = V_59;
		uint32_t L_620 = V_0;
		FalconKeygen_poly_sub_scaled_m7BB451DC8925199192E980A58A62E3A3E0059118(__this, L_609, L_610, L_611, L_612, L_613, L_614, L_615, L_616, L_617, 0, L_618, L_619, L_620, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_621 = ___tmpsrc6;
		int32_t L_622 = V_12;
		int32_t L_623 = V_7;
		int32_t L_624 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_625 = ___tmpsrc6;
		int32_t L_626 = V_14;
		int32_t L_627 = V_3;
		int32_t L_628 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = V_28;
		uint32_t L_630 = V_60;
		uint32_t L_631 = V_59;
		uint32_t L_632 = V_0;
		FalconKeygen_poly_sub_scaled_m7BB451DC8925199192E980A58A62E3A3E0059118(__this, L_621, L_622, L_623, L_624, L_625, L_626, L_627, L_628, L_629, 0, L_630, L_631, L_632, NULL);
	}

IL_080f:
	{
		int32_t L_633 = V_25;
		int32_t L_634 = V_23;
		V_58 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_633, L_634)), ((int32_t)10)));
		int32_t L_635 = V_58;
		int32_t L_636 = V_24;
		if ((((int32_t)L_635) >= ((int32_t)L_636)))
		{
			goto IL_0835;
		}
	}
	{
		int32_t L_637 = V_58;
		V_24 = L_637;
		int32_t L_638 = V_7;
		int32_t L_639 = V_24;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_638, ((int32_t)31)))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_639, ((int32_t)31))))))
		{
			goto IL_0835;
		}
	}
	{
		int32_t L_640 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_640, 1));
	}

IL_0835:
	{
		int32_t L_641 = V_25;
		if ((((int32_t)L_641) <= ((int32_t)0)))
		{
			goto IL_0851;
		}
	}
	{
		int32_t L_642 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_subtract(L_642, ((int32_t)25)));
		int32_t L_643 = V_25;
		if ((((int32_t)L_643) >= ((int32_t)0)))
		{
			goto IL_05e5;
		}
	}
	{
		V_25 = 0;
		goto IL_05e5;
	}

IL_0851:
	{
		int32_t L_644 = V_7;
		int32_t L_645 = V_3;
		if ((((int32_t)L_644) >= ((int32_t)L_645)))
		{
			goto IL_08d2;
		}
	}
	{
		V_8 = 0;
		goto IL_08cd;
	}

IL_085b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_646 = ___tmpsrc6;
		int32_t L_647 = V_11;
		int32_t L_648 = V_7;
		NullCheck(L_646);
		int32_t L_649 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_647, L_648)), 1));
		uint32_t L_650 = (L_646)->GetAt(static_cast<il2cpp_array_size_t>(L_649));
		V_65 = ((int32_t)((uint32_t)((int32_t)(uint32_t)((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_650>>((int32_t)30))))))))>>1));
		int32_t L_651 = V_7;
		V_64 = L_651;
		goto IL_0885;
	}

IL_0875:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_652 = ___tmpsrc6;
		int32_t L_653 = V_11;
		int32_t L_654 = V_64;
		uint32_t L_655 = V_65;
		NullCheck(L_652);
		(L_652)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_653, L_654))), (uint32_t)L_655);
		int32_t L_656 = V_64;
		V_64 = ((int32_t)il2cpp_codegen_add(L_656, 1));
	}

IL_0885:
	{
		int32_t L_657 = V_64;
		int32_t L_658 = V_3;
		if ((((int32_t)L_657) < ((int32_t)L_658)))
		{
			goto IL_0875;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_659 = ___tmpsrc6;
		int32_t L_660 = V_12;
		int32_t L_661 = V_7;
		NullCheck(L_659);
		int32_t L_662 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_660, L_661)), 1));
		uint32_t L_663 = (L_659)->GetAt(static_cast<il2cpp_array_size_t>(L_662));
		V_65 = ((int32_t)((uint32_t)((int32_t)(uint32_t)((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_663>>((int32_t)30))))))))>>1));
		int32_t L_664 = V_7;
		V_64 = L_664;
		goto IL_08b4;
	}

IL_08a4:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_665 = ___tmpsrc6;
		int32_t L_666 = V_12;
		int32_t L_667 = V_64;
		uint32_t L_668 = V_65;
		NullCheck(L_665);
		(L_665)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_666, L_667))), (uint32_t)L_668);
		int32_t L_669 = V_64;
		V_64 = ((int32_t)il2cpp_codegen_add(L_669, 1));
	}

IL_08b4:
	{
		int32_t L_670 = V_64;
		int32_t L_671 = V_3;
		if ((((int32_t)L_670) < ((int32_t)L_671)))
		{
			goto IL_08a4;
		}
	}
	{
		int32_t L_672 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_672, 1));
		int32_t L_673 = V_11;
		int32_t L_674 = V_5;
		V_11 = ((int32_t)il2cpp_codegen_add(L_673, L_674));
		int32_t L_675 = V_12;
		int32_t L_676 = V_5;
		V_12 = ((int32_t)il2cpp_codegen_add(L_675, L_676));
	}

IL_08cd:
	{
		int32_t L_677 = V_8;
		int32_t L_678 = V_1;
		if ((((int32_t)L_677) < ((int32_t)L_678)))
		{
			goto IL_085b;
		}
	}

IL_08d2:
	{
		V_8 = 0;
		int32_t L_679 = ___tmp7;
		V_26 = L_679;
		int32_t L_680 = ___tmp7;
		V_27 = L_680;
		goto IL_0900;
	}

IL_08df:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_681 = ___tmpsrc6;
		int32_t L_682 = V_27;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_683 = ___tmpsrc6;
		int32_t L_684 = V_26;
		int32_t L_685 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_681, L_682, (RuntimeArray*)L_683, L_684, L_685, NULL);
		int32_t L_686 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_686, 1));
		int32_t L_687 = V_26;
		int32_t L_688 = V_3;
		V_26 = ((int32_t)il2cpp_codegen_add(L_687, L_688));
		int32_t L_689 = V_27;
		int32_t L_690 = V_5;
		V_27 = ((int32_t)il2cpp_codegen_add(L_689, L_690));
	}

IL_0900:
	{
		int32_t L_691 = V_8;
		int32_t L_692 = V_1;
		if ((((int32_t)L_691) < ((int32_t)((int32_t)(L_692<<1)))))
		{
			goto IL_08df;
		}
	}
	{
		return 1;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::solve_NTRU_binary_depth1(System.UInt32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_solve_NTRU_binary_depth1_m39D04331C3134F6F81D8901DC907F4B327BF8DCD (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___logn_top0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc1, int32_t ___f2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc3, int32_t ___g4, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc5, int32_t ___tmp6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
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
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_16 = NULL;
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_17 = NULL;
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_18 = NULL;
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_19 = NULL;
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_20 = NULL;
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_21 = NULL;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	uint32_t V_24 = 0;
	uint32_t V_25 = 0;
	uint32_t V_26 = 0;
	uint32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	uint32_t V_33 = 0;
	uint32_t V_34 = 0;
	uint32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	int32_t V_41 = 0;
	uint32_t V_42 = 0;
	int32_t V_43 = 0;
	uint32_t V_44 = 0;
	uint32_t V_45 = 0;
	uint32_t V_46 = 0;
	uint32_t V_47 = 0;
	uint32_t V_48 = 0;
	uint32_t V_49 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_50;
	memset((&V_50), 0, sizeof(V_50));
	{
		V_0 = 1;
		uint32_t L_0 = ___logn_top0;
		V_2 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		uint32_t L_1 = ___logn_top0;
		uint32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		uint32_t L_3 = V_1;
		V_3 = ((int32_t)(1<<((int32_t)((int32_t)L_3&((int32_t)31)))));
		int32_t L_4 = V_3;
		V_4 = ((int32_t)(L_4>>1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___MAX_BL_SMALL_7;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = L_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___MAX_BL_SMALL_7;
		uint32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, 1));
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_6 = L_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___MAX_BL_LARGE_8;
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		uint32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_7 = L_16;
		int32_t L_17 = ___tmp6;
		V_9 = L_17;
		int32_t L_18 = V_9;
		int32_t L_19 = V_6;
		int32_t L_20 = V_4;
		V_10 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_multiply(L_19, L_20))));
		int32_t L_21 = V_10;
		int32_t L_22 = V_6;
		int32_t L_23 = V_4;
		V_11 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23))));
		int32_t L_24 = V_11;
		int32_t L_25 = V_7;
		int32_t L_26 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_add(L_24, ((int32_t)il2cpp_codegen_multiply(L_25, L_26))));
		V_8 = 0;
		goto IL_0113;
	}

IL_0062:
	{
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_27 = __this->___PRIMES_2;
		int32_t L_28 = V_8;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		uint32_t L_31 = L_30->___p_0;
		V_24 = L_31;
		uint32_t L_32 = V_24;
		uint32_t L_33;
		L_33 = FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE(__this, L_32, NULL);
		V_25 = L_33;
		uint32_t L_34 = V_24;
		uint32_t L_35 = V_25;
		uint32_t L_36;
		L_36 = FalconKeygen_modp_R2_mFDF10C899F4DAC34C48E9CA91B075A78FE793634(__this, L_34, L_35, NULL);
		V_26 = L_36;
		int32_t L_37 = V_6;
		uint32_t L_38 = V_24;
		uint32_t L_39 = V_25;
		uint32_t L_40 = V_26;
		uint32_t L_41;
		L_41 = FalconKeygen_modp_Rx_mE6091B563F2ACAC7BB7ABE09D31961273EB89A79(__this, L_37, L_38, L_39, L_40, NULL);
		V_27 = L_41;
		V_28 = 0;
		int32_t L_42 = V_9;
		V_29 = L_42;
		int32_t L_43 = V_10;
		V_30 = L_43;
		int32_t L_44 = V_11;
		int32_t L_45 = V_8;
		V_31 = ((int32_t)il2cpp_codegen_add(L_44, L_45));
		int32_t L_46 = V_12;
		int32_t L_47 = V_8;
		V_32 = ((int32_t)il2cpp_codegen_add(L_46, L_47));
		goto IL_0107;
	}

IL_00b3:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___tmpsrc5;
		int32_t L_49 = V_31;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___tmpsrc5;
		int32_t L_51 = V_29;
		int32_t L_52 = V_6;
		uint32_t L_53 = V_24;
		uint32_t L_54 = V_25;
		uint32_t L_55 = V_26;
		uint32_t L_56 = V_27;
		uint32_t L_57;
		L_57 = FalconKeygen_zint_mod_small_signed_m8C67FB119B15C5E02BC12B3D0B9AEFB26C9829C3(__this, L_50, L_51, L_52, L_53, L_54, L_55, L_56, NULL);
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint32_t)L_57);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___tmpsrc5;
		int32_t L_59 = V_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___tmpsrc5;
		int32_t L_61 = V_30;
		int32_t L_62 = V_6;
		uint32_t L_63 = V_24;
		uint32_t L_64 = V_25;
		uint32_t L_65 = V_26;
		uint32_t L_66 = V_27;
		uint32_t L_67;
		L_67 = FalconKeygen_zint_mod_small_signed_m8C67FB119B15C5E02BC12B3D0B9AEFB26C9829C3(__this, L_60, L_61, L_62, L_63, L_64, L_65, L_66, NULL);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (uint32_t)L_67);
		int32_t L_68 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_68, 1));
		int32_t L_69 = V_29;
		int32_t L_70 = V_6;
		V_29 = ((int32_t)il2cpp_codegen_add(L_69, L_70));
		int32_t L_71 = V_30;
		int32_t L_72 = V_6;
		V_30 = ((int32_t)il2cpp_codegen_add(L_71, L_72));
		int32_t L_73 = V_31;
		int32_t L_74 = V_7;
		V_31 = ((int32_t)il2cpp_codegen_add(L_73, L_74));
		int32_t L_75 = V_32;
		int32_t L_76 = V_7;
		V_32 = ((int32_t)il2cpp_codegen_add(L_75, L_76));
	}

IL_0107:
	{
		int32_t L_77 = V_28;
		int32_t L_78 = V_4;
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_79 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_0113:
	{
		int32_t L_80 = V_8;
		int32_t L_81 = V_7;
		if ((((int32_t)L_80) < ((int32_t)L_81)))
		{
			goto IL_0062;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = ___tmpsrc5;
		int32_t L_83 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___tmpsrc5;
		int32_t L_85 = ___tmp6;
		int32_t L_86 = V_7;
		int32_t L_87 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_82, L_83, (RuntimeArray*)L_84, L_85, ((int32_t)il2cpp_codegen_multiply(L_86, L_87)), NULL);
		int32_t L_88 = ___tmp6;
		V_11 = L_88;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = ___tmpsrc5;
		int32_t L_90 = V_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = ___tmpsrc5;
		int32_t L_92 = V_11;
		int32_t L_93 = V_7;
		int32_t L_94 = V_3;
		int32_t L_95 = V_7;
		int32_t L_96 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_89, L_90, (RuntimeArray*)L_91, ((int32_t)il2cpp_codegen_add(L_92, ((int32_t)il2cpp_codegen_multiply(L_93, L_94)))), ((int32_t)il2cpp_codegen_multiply(L_95, L_96)), NULL);
		int32_t L_97 = V_11;
		int32_t L_98 = V_7;
		int32_t L_99 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, L_99))));
		int32_t L_100 = V_12;
		int32_t L_101 = V_7;
		int32_t L_102 = V_3;
		V_13 = ((int32_t)il2cpp_codegen_add(L_100, ((int32_t)il2cpp_codegen_multiply(L_101, L_102))));
		int32_t L_103 = V_13;
		int32_t L_104 = V_5;
		int32_t L_105 = V_3;
		V_14 = ((int32_t)il2cpp_codegen_add(L_103, ((int32_t)il2cpp_codegen_multiply(L_104, L_105))));
		int32_t L_106 = V_14;
		int32_t L_107 = V_5;
		int32_t L_108 = V_3;
		V_15 = ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, L_108))));
		V_8 = 0;
		goto IL_04bd;
	}

IL_0173:
	{
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_109 = __this->___PRIMES_2;
		int32_t L_110 = V_8;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		NullCheck(L_112);
		uint32_t L_113 = L_112->___p_0;
		V_33 = L_113;
		uint32_t L_114 = V_33;
		uint32_t L_115;
		L_115 = FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE(__this, L_114, NULL);
		V_34 = L_115;
		uint32_t L_116 = V_33;
		uint32_t L_117 = V_34;
		uint32_t L_118;
		L_118 = FalconKeygen_modp_R2_mFDF10C899F4DAC34C48E9CA91B075A78FE793634(__this, L_116, L_117, NULL);
		V_35 = L_118;
		int32_t L_119 = V_15;
		V_36 = L_119;
		int32_t L_120 = V_36;
		int32_t L_121 = V_2;
		V_37 = ((int32_t)il2cpp_codegen_add(L_120, L_121));
		int32_t L_122 = V_37;
		int32_t L_123 = V_3;
		V_38 = ((int32_t)il2cpp_codegen_add(L_122, L_123));
		int32_t L_124 = V_38;
		int32_t L_125 = V_2;
		V_39 = ((int32_t)il2cpp_codegen_add(L_124, L_125));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = ___tmpsrc5;
		int32_t L_127 = V_36;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_128 = ___tmpsrc5;
		int32_t L_129 = V_37;
		uint32_t L_130 = ___logn_top0;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_131 = __this->___PRIMES_2;
		int32_t L_132 = V_8;
		NullCheck(L_131);
		int32_t L_133 = L_132;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_134 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		NullCheck(L_134);
		uint32_t L_135 = L_134->___g_1;
		uint32_t L_136 = V_33;
		uint32_t L_137 = V_34;
		FalconKeygen_modp_mkgm2_m059C61ADC3900310EDA79EBC8573C3D66CBB86A5(__this, L_126, L_127, L_128, L_129, L_130, L_135, L_136, L_137, NULL);
		V_43 = 0;
		goto IL_0209;
	}

IL_01d5:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_138 = ___tmpsrc5;
		int32_t L_139 = V_38;
		int32_t L_140 = V_43;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_141 = ___fsrc1;
		int32_t L_142 = ___f2;
		int32_t L_143 = V_43;
		NullCheck(L_141);
		int32_t L_144 = ((int32_t)il2cpp_codegen_add(L_142, L_143));
		int8_t L_145 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		uint32_t L_146 = V_33;
		uint32_t L_147;
		L_147 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_145, L_146, NULL);
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_139, L_140))), (uint32_t)L_147);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = ___tmpsrc5;
		int32_t L_149 = V_39;
		int32_t L_150 = V_43;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_151 = ___gsrc3;
		int32_t L_152 = ___g4;
		int32_t L_153 = V_43;
		NullCheck(L_151);
		int32_t L_154 = ((int32_t)il2cpp_codegen_add(L_152, L_153));
		int8_t L_155 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		uint32_t L_156 = V_33;
		uint32_t L_157;
		L_157 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_155, L_156, NULL);
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_149, L_150))), (uint32_t)L_157);
		int32_t L_158 = V_43;
		V_43 = ((int32_t)il2cpp_codegen_add(L_158, 1));
	}

IL_0209:
	{
		int32_t L_159 = V_43;
		int32_t L_160 = V_2;
		if ((((int32_t)L_159) < ((int32_t)L_160)))
		{
			goto IL_01d5;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_161 = ___tmpsrc5;
		int32_t L_162 = V_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_163 = ___tmpsrc5;
		int32_t L_164 = V_36;
		uint32_t L_165 = ___logn_top0;
		uint32_t L_166 = V_33;
		uint32_t L_167 = V_34;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_161, L_162, L_163, L_164, L_165, L_166, L_167, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_168 = ___tmpsrc5;
		int32_t L_169 = V_39;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_170 = ___tmpsrc5;
		int32_t L_171 = V_36;
		uint32_t L_172 = ___logn_top0;
		uint32_t L_173 = V_33;
		uint32_t L_174 = V_34;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_168, L_169, L_170, L_171, L_172, L_173, L_174, NULL);
		uint32_t L_175 = ___logn_top0;
		V_42 = L_175;
		goto IL_0263;
	}

IL_0239:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_176 = ___tmpsrc5;
		int32_t L_177 = V_38;
		uint32_t L_178 = V_42;
		uint32_t L_179 = V_33;
		uint32_t L_180 = V_34;
		uint32_t L_181 = V_35;
		FalconKeygen_modp_poly_rec_res_m6C2BECEED8772C62A18C107545E1263A893FF7DD(__this, L_176, L_177, L_178, L_179, L_180, L_181, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_182 = ___tmpsrc5;
		int32_t L_183 = V_39;
		uint32_t L_184 = V_42;
		uint32_t L_185 = V_33;
		uint32_t L_186 = V_34;
		uint32_t L_187 = V_35;
		FalconKeygen_modp_poly_rec_res_m6C2BECEED8772C62A18C107545E1263A893FF7DD(__this, L_182, L_183, L_184, L_185, L_186, L_187, NULL);
		uint32_t L_188 = V_42;
		V_42 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_188, 1));
	}

IL_0263:
	{
		uint32_t L_189 = V_42;
		uint32_t L_190 = V_1;
		if ((!(((uint32_t)L_189) <= ((uint32_t)L_190))))
		{
			goto IL_0239;
		}
	}
	{
		uint32_t L_191 = V_0;
		if ((!(((uint32_t)L_191) > ((uint32_t)0))))
		{
			goto IL_02ae;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_192 = ___tmpsrc5;
		int32_t L_193 = V_37;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_194 = ___tmpsrc5;
		int32_t L_195 = V_36;
		int32_t L_196 = V_3;
		int32_t L_197 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_192, L_193, (RuntimeArray*)L_194, ((int32_t)il2cpp_codegen_add(L_195, L_196)), L_197, NULL);
		int32_t L_198 = V_36;
		int32_t L_199 = V_3;
		V_37 = ((int32_t)il2cpp_codegen_add(L_198, L_199));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_200 = ___tmpsrc5;
		int32_t L_201 = V_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_202 = ___tmpsrc5;
		int32_t L_203 = V_37;
		int32_t L_204 = V_3;
		int32_t L_205 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_200, L_201, (RuntimeArray*)L_202, ((int32_t)il2cpp_codegen_add(L_203, L_204)), L_205, NULL);
		int32_t L_206 = V_37;
		int32_t L_207 = V_3;
		V_38 = ((int32_t)il2cpp_codegen_add(L_206, L_207));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_208 = ___tmpsrc5;
		int32_t L_209 = V_39;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_210 = ___tmpsrc5;
		int32_t L_211 = V_38;
		int32_t L_212 = V_3;
		int32_t L_213 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_208, L_209, (RuntimeArray*)L_210, ((int32_t)il2cpp_codegen_add(L_211, L_212)), L_213, NULL);
		int32_t L_214 = V_38;
		int32_t L_215 = V_3;
		V_39 = ((int32_t)il2cpp_codegen_add(L_214, L_215));
	}

IL_02ae:
	{
		int32_t L_216 = V_39;
		int32_t L_217 = V_3;
		V_40 = ((int32_t)il2cpp_codegen_add(L_216, L_217));
		int32_t L_218 = V_40;
		int32_t L_219 = V_4;
		V_41 = ((int32_t)il2cpp_codegen_add(L_218, L_219));
		V_43 = 0;
		int32_t L_220 = V_11;
		int32_t L_221 = V_8;
		V_22 = ((int32_t)il2cpp_codegen_add(L_220, L_221));
		int32_t L_222 = V_12;
		int32_t L_223 = V_8;
		V_23 = ((int32_t)il2cpp_codegen_add(L_222, L_223));
		goto IL_02fc;
	}

IL_02ce:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_224 = ___tmpsrc5;
		int32_t L_225 = V_40;
		int32_t L_226 = V_43;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_227 = ___tmpsrc5;
		int32_t L_228 = V_22;
		NullCheck(L_227);
		int32_t L_229 = L_228;
		uint32_t L_230 = (L_227)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		NullCheck(L_224);
		(L_224)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_225, L_226))), (uint32_t)L_230);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_231 = ___tmpsrc5;
		int32_t L_232 = V_41;
		int32_t L_233 = V_43;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_234 = ___tmpsrc5;
		int32_t L_235 = V_23;
		NullCheck(L_234);
		int32_t L_236 = L_235;
		uint32_t L_237 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_236));
		NullCheck(L_231);
		(L_231)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_232, L_233))), (uint32_t)L_237);
		int32_t L_238 = V_43;
		V_43 = ((int32_t)il2cpp_codegen_add(L_238, 1));
		int32_t L_239 = V_22;
		int32_t L_240 = V_7;
		V_22 = ((int32_t)il2cpp_codegen_add(L_239, L_240));
		int32_t L_241 = V_23;
		int32_t L_242 = V_7;
		V_23 = ((int32_t)il2cpp_codegen_add(L_241, L_242));
	}

IL_02fc:
	{
		int32_t L_243 = V_43;
		int32_t L_244 = V_4;
		if ((((int32_t)L_243) < ((int32_t)L_244)))
		{
			goto IL_02ce;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_245 = ___tmpsrc5;
		int32_t L_246 = V_40;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_247 = ___tmpsrc5;
		int32_t L_248 = V_36;
		uint32_t L_249 = V_1;
		uint32_t L_250 = V_33;
		uint32_t L_251 = V_34;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_245, L_246, L_247, L_248, ((int32_t)il2cpp_codegen_subtract((int32_t)L_249, 1)), L_250, L_251, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_252 = ___tmpsrc5;
		int32_t L_253 = V_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_254 = ___tmpsrc5;
		int32_t L_255 = V_36;
		uint32_t L_256 = V_1;
		uint32_t L_257 = V_33;
		uint32_t L_258 = V_34;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_252, L_253, L_254, L_255, ((int32_t)il2cpp_codegen_subtract((int32_t)L_256, 1)), L_257, L_258, NULL);
		V_43 = 0;
		int32_t L_259 = V_11;
		int32_t L_260 = V_8;
		V_22 = ((int32_t)il2cpp_codegen_add(L_259, L_260));
		int32_t L_261 = V_12;
		int32_t L_262 = V_8;
		V_23 = ((int32_t)il2cpp_codegen_add(L_261, L_262));
		goto IL_040c;
	}

IL_0342:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_263 = ___tmpsrc5;
		int32_t L_264 = V_38;
		int32_t L_265 = V_43;
		NullCheck(L_263);
		int32_t L_266 = ((int32_t)il2cpp_codegen_add(L_264, ((int32_t)(L_265<<1))));
		uint32_t L_267 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_266));
		V_44 = L_267;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_268 = ___tmpsrc5;
		int32_t L_269 = V_38;
		int32_t L_270 = V_43;
		NullCheck(L_268);
		int32_t L_271 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_269, ((int32_t)(L_270<<1)))), 1));
		uint32_t L_272 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		V_45 = L_272;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_273 = ___tmpsrc5;
		int32_t L_274 = V_39;
		int32_t L_275 = V_43;
		NullCheck(L_273);
		int32_t L_276 = ((int32_t)il2cpp_codegen_add(L_274, ((int32_t)(L_275<<1))));
		uint32_t L_277 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		V_46 = L_277;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_278 = ___tmpsrc5;
		int32_t L_279 = V_39;
		int32_t L_280 = V_43;
		NullCheck(L_278);
		int32_t L_281 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_279, ((int32_t)(L_280<<1)))), 1));
		uint32_t L_282 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		V_47 = L_282;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_283 = ___tmpsrc5;
		int32_t L_284 = V_40;
		int32_t L_285 = V_43;
		NullCheck(L_283);
		int32_t L_286 = ((int32_t)il2cpp_codegen_add(L_284, L_285));
		uint32_t L_287 = (L_283)->GetAt(static_cast<il2cpp_array_size_t>(L_286));
		uint32_t L_288 = V_35;
		uint32_t L_289 = V_33;
		uint32_t L_290 = V_34;
		uint32_t L_291;
		L_291 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_287, L_288, L_289, L_290, NULL);
		V_48 = L_291;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_292 = ___tmpsrc5;
		int32_t L_293 = V_41;
		int32_t L_294 = V_43;
		NullCheck(L_292);
		int32_t L_295 = ((int32_t)il2cpp_codegen_add(L_293, L_294));
		uint32_t L_296 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		uint32_t L_297 = V_35;
		uint32_t L_298 = V_33;
		uint32_t L_299 = V_34;
		uint32_t L_300;
		L_300 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_296, L_297, L_298, L_299, NULL);
		V_49 = L_300;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_301 = ___tmpsrc5;
		int32_t L_302 = V_22;
		uint32_t L_303 = V_47;
		uint32_t L_304 = V_48;
		uint32_t L_305 = V_33;
		uint32_t L_306 = V_34;
		uint32_t L_307;
		L_307 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_303, L_304, L_305, L_306, NULL);
		NullCheck(L_301);
		(L_301)->SetAt(static_cast<il2cpp_array_size_t>(L_302), (uint32_t)L_307);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_308 = ___tmpsrc5;
		int32_t L_309 = V_22;
		int32_t L_310 = V_7;
		uint32_t L_311 = V_46;
		uint32_t L_312 = V_48;
		uint32_t L_313 = V_33;
		uint32_t L_314 = V_34;
		uint32_t L_315;
		L_315 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_311, L_312, L_313, L_314, NULL);
		NullCheck(L_308);
		(L_308)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_309, L_310))), (uint32_t)L_315);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_316 = ___tmpsrc5;
		int32_t L_317 = V_23;
		uint32_t L_318 = V_45;
		uint32_t L_319 = V_49;
		uint32_t L_320 = V_33;
		uint32_t L_321 = V_34;
		uint32_t L_322;
		L_322 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_318, L_319, L_320, L_321, NULL);
		NullCheck(L_316);
		(L_316)->SetAt(static_cast<il2cpp_array_size_t>(L_317), (uint32_t)L_322);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_323 = ___tmpsrc5;
		int32_t L_324 = V_23;
		int32_t L_325 = V_7;
		uint32_t L_326 = V_44;
		uint32_t L_327 = V_49;
		uint32_t L_328 = V_33;
		uint32_t L_329 = V_34;
		uint32_t L_330;
		L_330 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_326, L_327, L_328, L_329, NULL);
		NullCheck(L_323);
		(L_323)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_324, L_325))), (uint32_t)L_330);
		int32_t L_331 = V_43;
		V_43 = ((int32_t)il2cpp_codegen_add(L_331, 1));
		int32_t L_332 = V_22;
		int32_t L_333 = V_7;
		V_22 = ((int32_t)il2cpp_codegen_add(L_332, ((int32_t)(L_333<<1))));
		int32_t L_334 = V_23;
		int32_t L_335 = V_7;
		V_23 = ((int32_t)il2cpp_codegen_add(L_334, ((int32_t)(L_335<<1))));
	}

IL_040c:
	{
		int32_t L_336 = V_43;
		int32_t L_337 = V_4;
		if ((((int32_t)L_336) < ((int32_t)L_337)))
		{
			goto IL_0342;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_338 = ___tmpsrc5;
		int32_t L_339 = V_11;
		int32_t L_340 = V_8;
		int32_t L_341 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_342 = ___tmpsrc5;
		int32_t L_343 = V_37;
		uint32_t L_344 = V_1;
		uint32_t L_345 = V_33;
		uint32_t L_346 = V_34;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_338, ((int32_t)il2cpp_codegen_add(L_339, L_340)), L_341, L_342, L_343, L_344, L_345, L_346, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_347 = ___tmpsrc5;
		int32_t L_348 = V_12;
		int32_t L_349 = V_8;
		int32_t L_350 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_351 = ___tmpsrc5;
		int32_t L_352 = V_37;
		uint32_t L_353 = V_1;
		uint32_t L_354 = V_33;
		uint32_t L_355 = V_34;
		FalconKeygen_modp_iNTT2_ext_mE673AB01FB58DA9BFF92DDEB2F5DCC07FDAF8704(__this, L_347, ((int32_t)il2cpp_codegen_add(L_348, L_349)), L_350, L_351, L_352, L_353, L_354, L_355, NULL);
		int32_t L_356 = V_8;
		int32_t L_357 = V_5;
		if ((((int32_t)L_356) >= ((int32_t)L_357)))
		{
			goto IL_04b7;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_358 = ___tmpsrc5;
		int32_t L_359 = V_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_360 = ___tmpsrc5;
		int32_t L_361 = V_37;
		uint32_t L_362 = V_1;
		uint32_t L_363 = V_33;
		uint32_t L_364 = V_34;
		FalconKeygen_modp_iNTT2_mDFACB12D5576DA2A212FE9ABBABE5884B7A071FB(__this, L_358, L_359, L_360, L_361, L_362, L_363, L_364, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_365 = ___tmpsrc5;
		int32_t L_366 = V_39;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_367 = ___tmpsrc5;
		int32_t L_368 = V_37;
		uint32_t L_369 = V_1;
		uint32_t L_370 = V_33;
		uint32_t L_371 = V_34;
		FalconKeygen_modp_iNTT2_mDFACB12D5576DA2A212FE9ABBABE5884B7A071FB(__this, L_365, L_366, L_367, L_368, L_369, L_370, L_371, NULL);
		V_43 = 0;
		int32_t L_372 = V_13;
		int32_t L_373 = V_8;
		V_22 = ((int32_t)il2cpp_codegen_add(L_372, L_373));
		int32_t L_374 = V_14;
		int32_t L_375 = V_8;
		V_23 = ((int32_t)il2cpp_codegen_add(L_374, L_375));
		goto IL_04b2;
	}

IL_0484:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_376 = ___tmpsrc5;
		int32_t L_377 = V_22;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_378 = ___tmpsrc5;
		int32_t L_379 = V_38;
		int32_t L_380 = V_43;
		NullCheck(L_378);
		int32_t L_381 = ((int32_t)il2cpp_codegen_add(L_379, L_380));
		uint32_t L_382 = (L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		NullCheck(L_376);
		(L_376)->SetAt(static_cast<il2cpp_array_size_t>(L_377), (uint32_t)L_382);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_383 = ___tmpsrc5;
		int32_t L_384 = V_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_385 = ___tmpsrc5;
		int32_t L_386 = V_39;
		int32_t L_387 = V_43;
		NullCheck(L_385);
		int32_t L_388 = ((int32_t)il2cpp_codegen_add(L_386, L_387));
		uint32_t L_389 = (L_385)->GetAt(static_cast<il2cpp_array_size_t>(L_388));
		NullCheck(L_383);
		(L_383)->SetAt(static_cast<il2cpp_array_size_t>(L_384), (uint32_t)L_389);
		int32_t L_390 = V_43;
		V_43 = ((int32_t)il2cpp_codegen_add(L_390, 1));
		int32_t L_391 = V_22;
		int32_t L_392 = V_5;
		V_22 = ((int32_t)il2cpp_codegen_add(L_391, L_392));
		int32_t L_393 = V_23;
		int32_t L_394 = V_5;
		V_23 = ((int32_t)il2cpp_codegen_add(L_393, L_394));
	}

IL_04b2:
	{
		int32_t L_395 = V_43;
		int32_t L_396 = V_3;
		if ((((int32_t)L_395) < ((int32_t)L_396)))
		{
			goto IL_0484;
		}
	}

IL_04b7:
	{
		int32_t L_397 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_397, 1));
	}

IL_04bd:
	{
		int32_t L_398 = V_8;
		int32_t L_399 = V_7;
		if ((((int32_t)L_398) < ((int32_t)L_399)))
		{
			goto IL_0173;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_400 = ___tmpsrc5;
		int32_t L_401 = V_11;
		int32_t L_402 = V_7;
		int32_t L_403 = V_7;
		int32_t L_404 = V_3;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_405 = __this->___PRIMES_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_406 = ___tmpsrc5;
		int32_t L_407 = V_15;
		FalconKeygen_zint_rebuild_CRT_mFDDBAA64799A444D72449A4F4866B19D204C9DB5(__this, L_400, L_401, L_402, L_403, ((int32_t)(L_404<<1)), L_405, 1, L_406, L_407, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_408 = ___tmpsrc5;
		int32_t L_409 = V_13;
		int32_t L_410 = V_5;
		int32_t L_411 = V_5;
		int32_t L_412 = V_3;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_413 = __this->___PRIMES_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_414 = ___tmpsrc5;
		int32_t L_415 = V_15;
		FalconKeygen_zint_rebuild_CRT_mFDDBAA64799A444D72449A4F4866B19D204C9DB5(__this, L_408, L_409, L_410, L_411, ((int32_t)(L_412<<1)), L_413, 1, L_414, L_415, NULL);
		int32_t L_416 = V_3;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_417 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)L_416);
		V_16 = L_417;
		int32_t L_418 = V_3;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_419 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)L_418);
		V_17 = L_419;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_420 = V_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_421 = ___tmpsrc5;
		int32_t L_422 = V_11;
		int32_t L_423 = V_7;
		int32_t L_424 = V_7;
		uint32_t L_425 = V_1;
		FalconKeygen_poly_big_to_fp_m184E71EAEB8A8964C0E509E9A160DD2482D76168(__this, L_420, 0, L_421, L_422, L_423, L_424, L_425, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_426 = V_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_427 = ___tmpsrc5;
		int32_t L_428 = V_12;
		int32_t L_429 = V_7;
		int32_t L_430 = V_7;
		uint32_t L_431 = V_1;
		FalconKeygen_poly_big_to_fp_m184E71EAEB8A8964C0E509E9A160DD2482D76168(__this, L_426, 0, L_427, L_428, L_429, L_430, L_431, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_432 = ___tmpsrc5;
		int32_t L_433 = V_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_434 = ___tmpsrc5;
		int32_t L_435 = ___tmp6;
		int32_t L_436 = V_5;
		int32_t L_437 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_432, L_433, (RuntimeArray*)L_434, L_435, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_436)), L_437)), NULL);
		int32_t L_438 = ___tmp6;
		V_13 = L_438;
		int32_t L_439 = V_13;
		int32_t L_440 = V_5;
		int32_t L_441 = V_3;
		V_14 = ((int32_t)il2cpp_codegen_add(L_439, ((int32_t)il2cpp_codegen_multiply(L_440, L_441))));
		int32_t L_442 = V_3;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_443 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)L_442);
		V_18 = L_443;
		int32_t L_444 = V_3;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_445 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)L_444);
		V_19 = L_445;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_446 = V_18;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_447 = ___tmpsrc5;
		int32_t L_448 = V_13;
		int32_t L_449 = V_5;
		int32_t L_450 = V_5;
		uint32_t L_451 = V_1;
		FalconKeygen_poly_big_to_fp_m184E71EAEB8A8964C0E509E9A160DD2482D76168(__this, L_446, 0, L_447, L_448, L_449, L_450, L_451, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_452 = V_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_453 = ___tmpsrc5;
		int32_t L_454 = V_14;
		int32_t L_455 = V_5;
		int32_t L_456 = V_5;
		uint32_t L_457 = V_1;
		FalconKeygen_poly_big_to_fp_m184E71EAEB8A8964C0E509E9A160DD2482D76168(__this, L_452, 0, L_453, L_454, L_455, L_456, L_457, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_458 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_459 = V_16;
		uint32_t L_460 = V_1;
		NullCheck(L_458);
		FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09(L_458, L_459, 0, L_460, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_461 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_462 = V_17;
		uint32_t L_463 = V_1;
		NullCheck(L_461);
		FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09(L_461, L_462, 0, L_463, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_464 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_465 = V_18;
		uint32_t L_466 = V_1;
		NullCheck(L_464);
		FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09(L_464, L_465, 0, L_466, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_467 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_468 = V_19;
		uint32_t L_469 = V_1;
		NullCheck(L_467);
		FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09(L_467, L_468, 0, L_469, NULL);
		int32_t L_470 = V_3;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_471 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)L_470);
		V_20 = L_471;
		int32_t L_472 = V_3;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_473 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)L_472);
		V_21 = L_473;
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_474 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_475 = V_20;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_476 = V_16;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_477 = V_17;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_478 = V_18;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_479 = V_19;
		uint32_t L_480 = V_1;
		NullCheck(L_474);
		FalconFFT_poly_add_muladj_fft_m0B5E0560683C156FDC097CC42E7FDCEA4E3E87EF(L_474, L_475, 0, L_476, 0, L_477, 0, L_478, 0, L_479, 0, L_480, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_481 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_482 = V_21;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_483 = V_18;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_484 = V_19;
		uint32_t L_485 = V_1;
		NullCheck(L_481);
		FalconFFT_poly_invnorm2_fft_mDF55588BAD67975250860E1437DCC4E7ECCE7043(L_481, L_482, 0, L_483, 0, L_484, 0, L_485, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_486 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_487 = V_20;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_488 = V_21;
		uint32_t L_489 = V_1;
		NullCheck(L_486);
		FalconFFT_poly_mul_autoadj_fft_mA719D26DC7D3B099509230DB13D2546EF7583693(L_486, L_487, 0, L_488, 0, L_489, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_490 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_491 = V_20;
		uint32_t L_492 = V_1;
		NullCheck(L_490);
		FalconFFT_iFFT_mC2AEDA0BE2CBCF043C45A2E9F9734843602E8BBB(L_490, L_491, 0, L_492, NULL);
		V_8 = 0;
		goto IL_0690;
	}

IL_0628:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_493 = V_20;
		int32_t L_494 = V_8;
		NullCheck(L_493);
		int32_t L_495 = L_494;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_496 = (L_493)->GetAt(static_cast<il2cpp_array_size_t>(L_495));
		V_50 = L_496;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_497 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_498 = V_50;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_499 = __this->___fpre_0;
		NullCheck(L_499);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_500 = L_499->___fpr_ptwo63m1_14;
		NullCheck(L_497);
		bool L_501;
		L_501 = FprEngine_fpr_lt_mBD3CB70126D34865E4E33DF05BC74503638323E7(L_497, L_498, L_500, NULL);
		if (!L_501)
		{
			goto IL_0667;
		}
	}
	{
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_502 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_503 = __this->___fpre_0;
		NullCheck(L_503);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_504 = L_503->___fpr_mtwo63m1_15;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_505 = V_50;
		NullCheck(L_502);
		bool L_506;
		L_506 = FprEngine_fpr_lt_mBD3CB70126D34865E4E33DF05BC74503638323E7(L_502, L_504, L_505, NULL);
		if (L_506)
		{
			goto IL_0669;
		}
	}

IL_0667:
	{
		return 0;
	}

IL_0669:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_507 = V_20;
		int32_t L_508 = V_8;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_509 = __this->___fpre_0;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_510 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_511 = V_50;
		NullCheck(L_510);
		int64_t L_512;
		L_512 = FprEngine_fpr_rint_m89FD9868C85461C89E4656BD48AB86FDBBE3FBB6(L_510, L_511, NULL);
		NullCheck(L_509);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_513;
		L_513 = FprEngine_fpr_of_mE2CCAB33E9E22FC76315E34C34FB1C5A854F621D(L_509, L_512, NULL);
		NullCheck(L_507);
		(L_507)->SetAt(static_cast<il2cpp_array_size_t>(L_508), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_513);
		int32_t L_514 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_514, 1));
	}

IL_0690:
	{
		int32_t L_515 = V_8;
		int32_t L_516 = V_3;
		if ((((int32_t)L_515) < ((int32_t)L_516)))
		{
			goto IL_0628;
		}
	}
	{
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_517 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_518 = V_20;
		uint32_t L_519 = V_1;
		NullCheck(L_517);
		FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09(L_517, L_518, 0, L_519, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_520 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_521 = V_18;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_522 = V_20;
		uint32_t L_523 = V_1;
		NullCheck(L_520);
		FalconFFT_poly_mul_fft_mE10CFC18FB478674D4DE3F6EFF9080617F4B921C(L_520, L_521, 0, L_522, 0, L_523, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_524 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_525 = V_19;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_526 = V_20;
		uint32_t L_527 = V_1;
		NullCheck(L_524);
		FalconFFT_poly_mul_fft_mE10CFC18FB478674D4DE3F6EFF9080617F4B921C(L_524, L_525, 0, L_526, 0, L_527, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_528 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_529 = V_16;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_530 = V_18;
		uint32_t L_531 = V_1;
		NullCheck(L_528);
		FalconFFT_poly_sub_m0822D820FBBE7F74B282B342075BF58887457C23(L_528, L_529, 0, L_530, 0, L_531, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_532 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_533 = V_17;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_534 = V_19;
		uint32_t L_535 = V_1;
		NullCheck(L_532);
		FalconFFT_poly_sub_m0822D820FBBE7F74B282B342075BF58887457C23(L_532, L_533, 0, L_534, 0, L_535, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_536 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_537 = V_16;
		uint32_t L_538 = V_1;
		NullCheck(L_536);
		FalconFFT_iFFT_mC2AEDA0BE2CBCF043C45A2E9F9734843602E8BBB(L_536, L_537, 0, L_538, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_539 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_540 = V_17;
		uint32_t L_541 = V_1;
		NullCheck(L_539);
		FalconFFT_iFFT_mC2AEDA0BE2CBCF043C45A2E9F9734843602E8BBB(L_539, L_540, 0, L_541, NULL);
		int32_t L_542 = ___tmp6;
		V_11 = L_542;
		int32_t L_543 = V_11;
		int32_t L_544 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_add(L_543, L_544));
		V_8 = 0;
		goto IL_0759;
	}

IL_0719:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_545 = ___tmpsrc5;
		int32_t L_546 = V_11;
		int32_t L_547 = V_8;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_548 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_549 = V_16;
		int32_t L_550 = V_8;
		NullCheck(L_549);
		int32_t L_551 = L_550;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_552 = (L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_551));
		NullCheck(L_548);
		int64_t L_553;
		L_553 = FprEngine_fpr_rint_m89FD9868C85461C89E4656BD48AB86FDBBE3FBB6(L_548, L_552, NULL);
		NullCheck(L_545);
		(L_545)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_546, L_547))), (uint32_t)((int32_t)(uint32_t)L_553));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_554 = ___tmpsrc5;
		int32_t L_555 = V_12;
		int32_t L_556 = V_8;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_557 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_558 = V_17;
		int32_t L_559 = V_8;
		NullCheck(L_558);
		int32_t L_560 = L_559;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_561 = (L_558)->GetAt(static_cast<il2cpp_array_size_t>(L_560));
		NullCheck(L_557);
		int64_t L_562;
		L_562 = FprEngine_fpr_rint_m89FD9868C85461C89E4656BD48AB86FDBBE3FBB6(L_557, L_561, NULL);
		NullCheck(L_554);
		(L_554)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_555, L_556))), (uint32_t)((int32_t)(uint32_t)L_562));
		int32_t L_563 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_563, 1));
	}

IL_0759:
	{
		int32_t L_564 = V_8;
		int32_t L_565 = V_3;
		if ((((int32_t)L_564) < ((int32_t)L_565)))
		{
			goto IL_0719;
		}
	}
	{
		return 1;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::solve_NTRU_binary_depth0(System.UInt32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_solve_NTRU_binary_depth0_mA0E94B647C9439D26CDBFFB6544A1AC48FB70725 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___logn0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc1, int32_t ___f2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc3, int32_t ___g4, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc5, int32_t ___tmp6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
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
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_19 = NULL;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	uint32_t V_25 = 0;
	uint32_t V_26 = 0;
	uint32_t V_27 = 0;
	uint32_t V_28 = 0;
	uint32_t V_29 = 0;
	{
		uint32_t L_0 = ___logn0;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1>>1));
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_2 = __this->___PRIMES_2;
		NullCheck(L_2);
		int32_t L_3 = 0;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		uint32_t L_5 = L_4->___p_0;
		V_3 = L_5;
		uint32_t L_6 = V_3;
		uint32_t L_7;
		L_7 = FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE(__this, L_6, NULL);
		V_4 = L_7;
		uint32_t L_8 = V_3;
		uint32_t L_9 = V_4;
		uint32_t L_10;
		L_10 = FalconKeygen_modp_R2_mFDF10C899F4DAC34C48E9CA91B075A78FE793634(__this, L_8, L_9, NULL);
		V_5 = L_10;
		int32_t L_11 = ___tmp6;
		V_6 = L_11;
		int32_t L_12 = V_6;
		int32_t L_13 = V_1;
		V_7 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		int32_t L_14 = V_7;
		int32_t L_15 = V_1;
		V_15 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		int32_t L_16 = V_15;
		int32_t L_17 = V_0;
		V_16 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		int32_t L_18 = V_16;
		int32_t L_19 = V_0;
		V_13 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		int32_t L_20 = V_13;
		int32_t L_21 = V_0;
		V_14 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___tmpsrc5;
		int32_t L_23 = V_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___tmpsrc5;
		int32_t L_25 = V_14;
		uint32_t L_26 = ___logn0;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_27 = __this->___PRIMES_2;
		NullCheck(L_27);
		int32_t L_28 = 0;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		uint32_t L_30 = L_29->___g_1;
		uint32_t L_31 = V_3;
		uint32_t L_32 = V_4;
		FalconKeygen_modp_mkgm2_m059C61ADC3900310EDA79EBC8573C3D66CBB86A5(__this, L_22, L_23, L_24, L_25, L_26, L_30, L_31, L_32, NULL);
		V_2 = 0;
		goto IL_00aa;
	}

IL_0072:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___tmpsrc5;
		int32_t L_34 = V_6;
		int32_t L_35 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___tmpsrc5;
		int32_t L_37 = V_6;
		int32_t L_38 = V_2;
		int32_t L_39;
		L_39 = FalconKeygen_zint_one_to_plain_m01BEF4E63BA72C4DA4D6CEDEC5DB266C30A26DA2(__this, L_36, ((int32_t)il2cpp_codegen_add(L_37, L_38)), NULL);
		uint32_t L_40 = V_3;
		uint32_t L_41;
		L_41 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_39, L_40, NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_34, L_35))), (uint32_t)L_41);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___tmpsrc5;
		int32_t L_43 = V_7;
		int32_t L_44 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___tmpsrc5;
		int32_t L_46 = V_7;
		int32_t L_47 = V_2;
		int32_t L_48;
		L_48 = FalconKeygen_zint_one_to_plain_m01BEF4E63BA72C4DA4D6CEDEC5DB266C30A26DA2(__this, L_45, ((int32_t)il2cpp_codegen_add(L_46, L_47)), NULL);
		uint32_t L_49 = V_3;
		uint32_t L_50;
		L_50 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_48, L_49, NULL);
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_43, L_44))), (uint32_t)L_50);
		int32_t L_51 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00aa:
	{
		int32_t L_52 = V_2;
		int32_t L_53 = V_1;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_0072;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___tmpsrc5;
		int32_t L_55 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___tmpsrc5;
		int32_t L_57 = V_13;
		uint32_t L_58 = ___logn0;
		uint32_t L_59 = V_3;
		uint32_t L_60 = V_4;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_54, L_55, L_56, L_57, ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, 1)), L_59, L_60, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___tmpsrc5;
		int32_t L_62 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___tmpsrc5;
		int32_t L_64 = V_13;
		uint32_t L_65 = ___logn0;
		uint32_t L_66 = V_3;
		uint32_t L_67 = V_4;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_61, L_62, L_63, L_64, ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, 1)), L_66, L_67, NULL);
		V_2 = 0;
		goto IL_0106;
	}

IL_00da:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___tmpsrc5;
		int32_t L_69 = V_15;
		int32_t L_70 = V_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_71 = ___fsrc1;
		int32_t L_72 = ___f2;
		int32_t L_73 = V_2;
		NullCheck(L_71);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add(L_72, L_73));
		int8_t L_75 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		uint32_t L_76 = V_3;
		uint32_t L_77;
		L_77 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_75, L_76, NULL);
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_69, L_70))), (uint32_t)L_77);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = ___tmpsrc5;
		int32_t L_79 = V_16;
		int32_t L_80 = V_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_81 = ___gsrc3;
		int32_t L_82 = ___g4;
		int32_t L_83 = V_2;
		NullCheck(L_81);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add(L_82, L_83));
		int8_t L_85 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		uint32_t L_86 = V_3;
		uint32_t L_87;
		L_87 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_85, L_86, NULL);
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_79, L_80))), (uint32_t)L_87);
		int32_t L_88 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_0106:
	{
		int32_t L_89 = V_2;
		int32_t L_90 = V_0;
		if ((((int32_t)L_89) < ((int32_t)L_90)))
		{
			goto IL_00da;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = ___tmpsrc5;
		int32_t L_92 = V_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = ___tmpsrc5;
		int32_t L_94 = V_13;
		uint32_t L_95 = ___logn0;
		uint32_t L_96 = V_3;
		uint32_t L_97 = V_4;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_91, L_92, L_93, L_94, L_95, L_96, L_97, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_98 = ___tmpsrc5;
		int32_t L_99 = V_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = ___tmpsrc5;
		int32_t L_101 = V_13;
		uint32_t L_102 = ___logn0;
		uint32_t L_103 = V_3;
		uint32_t L_104 = V_4;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_98, L_99, L_100, L_101, L_102, L_103, L_104, NULL);
		V_2 = 0;
		goto IL_01e1;
	}

IL_0135:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_105 = ___tmpsrc5;
		int32_t L_106 = V_15;
		int32_t L_107 = V_2;
		NullCheck(L_105);
		int32_t L_108 = ((int32_t)il2cpp_codegen_add(L_106, L_107));
		uint32_t L_109 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_20 = L_109;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = ___tmpsrc5;
		int32_t L_111 = V_15;
		int32_t L_112 = V_2;
		NullCheck(L_110);
		int32_t L_113 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_111, L_112)), 1));
		uint32_t L_114 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		V_21 = L_114;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = ___tmpsrc5;
		int32_t L_116 = V_16;
		int32_t L_117 = V_2;
		NullCheck(L_115);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_116, L_117));
		uint32_t L_119 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_22 = L_119;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = ___tmpsrc5;
		int32_t L_121 = V_16;
		int32_t L_122 = V_2;
		NullCheck(L_120);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_121, L_122)), 1));
		uint32_t L_124 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		V_23 = L_124;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = ___tmpsrc5;
		int32_t L_126 = V_6;
		int32_t L_127 = V_2;
		NullCheck(L_125);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add(L_126, ((int32_t)(L_127>>1))));
		uint32_t L_129 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		uint32_t L_130 = V_5;
		uint32_t L_131 = V_3;
		uint32_t L_132 = V_4;
		uint32_t L_133;
		L_133 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_129, L_130, L_131, L_132, NULL);
		V_24 = L_133;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = ___tmpsrc5;
		int32_t L_135 = V_7;
		int32_t L_136 = V_2;
		NullCheck(L_134);
		int32_t L_137 = ((int32_t)il2cpp_codegen_add(L_135, ((int32_t)(L_136>>1))));
		uint32_t L_138 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		uint32_t L_139 = V_5;
		uint32_t L_140 = V_3;
		uint32_t L_141 = V_4;
		uint32_t L_142;
		L_142 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_138, L_139, L_140, L_141, NULL);
		V_25 = L_142;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = ___tmpsrc5;
		int32_t L_144 = V_15;
		int32_t L_145 = V_2;
		uint32_t L_146 = V_23;
		uint32_t L_147 = V_24;
		uint32_t L_148 = V_3;
		uint32_t L_149 = V_4;
		uint32_t L_150;
		L_150 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_146, L_147, L_148, L_149, NULL);
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_144, L_145))), (uint32_t)L_150);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_151 = ___tmpsrc5;
		int32_t L_152 = V_15;
		int32_t L_153 = V_2;
		uint32_t L_154 = V_22;
		uint32_t L_155 = V_24;
		uint32_t L_156 = V_3;
		uint32_t L_157 = V_4;
		uint32_t L_158;
		L_158 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_154, L_155, L_156, L_157, NULL);
		NullCheck(L_151);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_152, L_153)), 1))), (uint32_t)L_158);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_159 = ___tmpsrc5;
		int32_t L_160 = V_16;
		int32_t L_161 = V_2;
		uint32_t L_162 = V_21;
		uint32_t L_163 = V_25;
		uint32_t L_164 = V_3;
		uint32_t L_165 = V_4;
		uint32_t L_166;
		L_166 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_162, L_163, L_164, L_165, NULL);
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_160, L_161))), (uint32_t)L_166);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_167 = ___tmpsrc5;
		int32_t L_168 = V_16;
		int32_t L_169 = V_2;
		uint32_t L_170 = V_20;
		uint32_t L_171 = V_25;
		uint32_t L_172 = V_3;
		uint32_t L_173 = V_4;
		uint32_t L_174;
		L_174 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_170, L_171, L_172, L_173, NULL);
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_168, L_169)), 1))), (uint32_t)L_174);
		int32_t L_175 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_175, 2));
	}

IL_01e1:
	{
		int32_t L_176 = V_2;
		int32_t L_177 = V_0;
		if ((((int32_t)L_176) < ((int32_t)L_177)))
		{
			goto IL_0135;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_178 = ___tmpsrc5;
		int32_t L_179 = V_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_180 = ___tmpsrc5;
		int32_t L_181 = V_14;
		uint32_t L_182 = ___logn0;
		uint32_t L_183 = V_3;
		uint32_t L_184 = V_4;
		FalconKeygen_modp_iNTT2_mDFACB12D5576DA2A212FE9ABBABE5884B7A071FB(__this, L_178, L_179, L_180, L_181, L_182, L_183, L_184, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = ___tmpsrc5;
		int32_t L_186 = V_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_187 = ___tmpsrc5;
		int32_t L_188 = V_14;
		uint32_t L_189 = ___logn0;
		uint32_t L_190 = V_3;
		uint32_t L_191 = V_4;
		FalconKeygen_modp_iNTT2_mDFACB12D5576DA2A212FE9ABBABE5884B7A071FB(__this, L_185, L_186, L_187, L_188, L_189, L_190, L_191, NULL);
		int32_t L_192 = V_6;
		int32_t L_193 = V_0;
		V_7 = ((int32_t)il2cpp_codegen_add(L_192, L_193));
		int32_t L_194 = V_7;
		int32_t L_195 = V_0;
		V_8 = ((int32_t)il2cpp_codegen_add(L_194, L_195));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_196 = ___tmpsrc5;
		int32_t L_197 = V_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_198 = ___tmpsrc5;
		int32_t L_199 = V_6;
		int32_t L_200 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_196, L_197, (RuntimeArray*)L_198, L_199, ((int32_t)il2cpp_codegen_multiply(2, L_200)), NULL);
		int32_t L_201 = V_8;
		int32_t L_202 = V_0;
		V_9 = ((int32_t)il2cpp_codegen_add(L_201, L_202));
		int32_t L_203 = V_9;
		int32_t L_204 = V_0;
		V_10 = ((int32_t)il2cpp_codegen_add(L_203, L_204));
		int32_t L_205 = V_10;
		int32_t L_206 = V_0;
		V_11 = ((int32_t)il2cpp_codegen_add(L_205, L_206));
		int32_t L_207 = V_11;
		int32_t L_208 = V_0;
		V_12 = ((int32_t)il2cpp_codegen_add(L_207, L_208));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_209 = ___tmpsrc5;
		int32_t L_210 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_211 = ___tmpsrc5;
		int32_t L_212 = V_9;
		uint32_t L_213 = ___logn0;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_214 = __this->___PRIMES_2;
		NullCheck(L_214);
		int32_t L_215 = 0;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_216 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		NullCheck(L_216);
		uint32_t L_217 = L_216->___g_1;
		uint32_t L_218 = V_3;
		uint32_t L_219 = V_4;
		FalconKeygen_modp_mkgm2_m059C61ADC3900310EDA79EBC8573C3D66CBB86A5(__this, L_209, L_210, L_211, L_212, L_213, L_217, L_218, L_219, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_220 = ___tmpsrc5;
		int32_t L_221 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_222 = ___tmpsrc5;
		int32_t L_223 = V_8;
		uint32_t L_224 = ___logn0;
		uint32_t L_225 = V_3;
		uint32_t L_226 = V_4;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_220, L_221, L_222, L_223, L_224, L_225, L_226, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_227 = ___tmpsrc5;
		int32_t L_228 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_229 = ___tmpsrc5;
		int32_t L_230 = V_8;
		uint32_t L_231 = ___logn0;
		uint32_t L_232 = V_3;
		uint32_t L_233 = V_4;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_227, L_228, L_229, L_230, L_231, L_232, L_233, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_234 = ___tmpsrc5;
		int32_t L_235 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_236 = ___tmpsrc5;
		int32_t L_237 = V_12;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_238 = ___fsrc1;
		int32_t L_239 = ___f2;
		NullCheck(L_238);
		int32_t L_240 = L_239;
		int8_t L_241 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_240));
		uint32_t L_242 = V_3;
		uint32_t L_243;
		L_243 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_241, L_242, NULL);
		uint32_t L_244 = L_243;
		V_26 = L_244;
		NullCheck(L_236);
		(L_236)->SetAt(static_cast<il2cpp_array_size_t>(L_237), (uint32_t)L_244);
		uint32_t L_245 = V_26;
		NullCheck(L_234);
		(L_234)->SetAt(static_cast<il2cpp_array_size_t>(L_235), (uint32_t)L_245);
		V_2 = 1;
		goto IL_02cd;
	}

IL_02a0:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_246 = ___tmpsrc5;
		int32_t L_247 = V_11;
		int32_t L_248 = V_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_249 = ___fsrc1;
		int32_t L_250 = ___f2;
		int32_t L_251 = V_2;
		NullCheck(L_249);
		int32_t L_252 = ((int32_t)il2cpp_codegen_add(L_250, L_251));
		int8_t L_253 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		uint32_t L_254 = V_3;
		uint32_t L_255;
		L_255 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_253, L_254, NULL);
		NullCheck(L_246);
		(L_246)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_247, L_248))), (uint32_t)L_255);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_256 = ___tmpsrc5;
		int32_t L_257 = V_12;
		int32_t L_258 = V_0;
		int32_t L_259 = V_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_260 = ___fsrc1;
		int32_t L_261 = ___f2;
		int32_t L_262 = V_2;
		NullCheck(L_260);
		int32_t L_263 = ((int32_t)il2cpp_codegen_add(L_261, L_262));
		int8_t L_264 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		uint32_t L_265 = V_3;
		uint32_t L_266;
		L_266 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, ((-L_264)), L_265, NULL);
		NullCheck(L_256);
		(L_256)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_257, L_258)), L_259))), (uint32_t)L_266);
		int32_t L_267 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_267, 1));
	}

IL_02cd:
	{
		int32_t L_268 = V_2;
		int32_t L_269 = V_0;
		if ((((int32_t)L_268) < ((int32_t)L_269)))
		{
			goto IL_02a0;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_270 = ___tmpsrc5;
		int32_t L_271 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_272 = ___tmpsrc5;
		int32_t L_273 = V_8;
		uint32_t L_274 = ___logn0;
		uint32_t L_275 = V_3;
		uint32_t L_276 = V_4;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_270, L_271, L_272, L_273, L_274, L_275, L_276, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_277 = ___tmpsrc5;
		int32_t L_278 = V_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_279 = ___tmpsrc5;
		int32_t L_280 = V_8;
		uint32_t L_281 = ___logn0;
		uint32_t L_282 = V_3;
		uint32_t L_283 = V_4;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_277, L_278, L_279, L_280, L_281, L_282, L_283, NULL);
		V_2 = 0;
		goto IL_0343;
	}

IL_02f9:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_284 = ___tmpsrc5;
		int32_t L_285 = V_12;
		int32_t L_286 = V_2;
		NullCheck(L_284);
		int32_t L_287 = ((int32_t)il2cpp_codegen_add(L_285, L_286));
		uint32_t L_288 = (L_284)->GetAt(static_cast<il2cpp_array_size_t>(L_287));
		uint32_t L_289 = V_5;
		uint32_t L_290 = V_3;
		uint32_t L_291 = V_4;
		uint32_t L_292;
		L_292 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_288, L_289, L_290, L_291, NULL);
		V_27 = L_292;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_293 = ___tmpsrc5;
		int32_t L_294 = V_9;
		int32_t L_295 = V_2;
		uint32_t L_296 = V_27;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_297 = ___tmpsrc5;
		int32_t L_298 = V_6;
		int32_t L_299 = V_2;
		NullCheck(L_297);
		int32_t L_300 = ((int32_t)il2cpp_codegen_add(L_298, L_299));
		uint32_t L_301 = (L_297)->GetAt(static_cast<il2cpp_array_size_t>(L_300));
		uint32_t L_302 = V_3;
		uint32_t L_303 = V_4;
		uint32_t L_304;
		L_304 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_296, L_301, L_302, L_303, NULL);
		NullCheck(L_293);
		(L_293)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_294, L_295))), (uint32_t)L_304);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_305 = ___tmpsrc5;
		int32_t L_306 = V_10;
		int32_t L_307 = V_2;
		uint32_t L_308 = V_27;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_309 = ___tmpsrc5;
		int32_t L_310 = V_11;
		int32_t L_311 = V_2;
		NullCheck(L_309);
		int32_t L_312 = ((int32_t)il2cpp_codegen_add(L_310, L_311));
		uint32_t L_313 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		uint32_t L_314 = V_3;
		uint32_t L_315 = V_4;
		uint32_t L_316;
		L_316 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_308, L_313, L_314, L_315, NULL);
		NullCheck(L_305);
		(L_305)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_306, L_307))), (uint32_t)L_316);
		int32_t L_317 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_317, 1));
	}

IL_0343:
	{
		int32_t L_318 = V_2;
		int32_t L_319 = V_0;
		if ((((int32_t)L_318) < ((int32_t)L_319)))
		{
			goto IL_02f9;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_320 = ___tmpsrc5;
		int32_t L_321 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_322 = ___tmpsrc5;
		int32_t L_323 = V_12;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_324 = ___gsrc3;
		int32_t L_325 = ___g4;
		NullCheck(L_324);
		int32_t L_326 = L_325;
		int8_t L_327 = (L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_326));
		uint32_t L_328 = V_3;
		uint32_t L_329;
		L_329 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_327, L_328, NULL);
		uint32_t L_330 = L_329;
		V_26 = L_330;
		NullCheck(L_322);
		(L_322)->SetAt(static_cast<il2cpp_array_size_t>(L_323), (uint32_t)L_330);
		uint32_t L_331 = V_26;
		NullCheck(L_320);
		(L_320)->SetAt(static_cast<il2cpp_array_size_t>(L_321), (uint32_t)L_331);
		V_2 = 1;
		goto IL_0397;
	}

IL_0366:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_332 = ___tmpsrc5;
		int32_t L_333 = V_11;
		int32_t L_334 = V_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_335 = ___gsrc3;
		int32_t L_336 = ___g4;
		int32_t L_337 = V_2;
		NullCheck(L_335);
		int32_t L_338 = ((int32_t)il2cpp_codegen_add(L_336, L_337));
		int8_t L_339 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_338));
		uint32_t L_340 = V_3;
		uint32_t L_341;
		L_341 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_339, L_340, NULL);
		NullCheck(L_332);
		(L_332)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_333, L_334))), (uint32_t)L_341);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_342 = ___tmpsrc5;
		int32_t L_343 = V_12;
		int32_t L_344 = V_0;
		int32_t L_345 = V_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_346 = ___gsrc3;
		int32_t L_347 = ___g4;
		int32_t L_348 = V_2;
		NullCheck(L_346);
		int32_t L_349 = ((int32_t)il2cpp_codegen_add(L_347, L_348));
		int8_t L_350 = (L_346)->GetAt(static_cast<il2cpp_array_size_t>(L_349));
		uint32_t L_351 = V_3;
		uint32_t L_352;
		L_352 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, ((-L_350)), L_351, NULL);
		NullCheck(L_342);
		(L_342)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_343, L_344)), L_345))), (uint32_t)L_352);
		int32_t L_353 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_353, 1));
	}

IL_0397:
	{
		int32_t L_354 = V_2;
		int32_t L_355 = V_0;
		if ((((int32_t)L_354) < ((int32_t)L_355)))
		{
			goto IL_0366;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_356 = ___tmpsrc5;
		int32_t L_357 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_358 = ___tmpsrc5;
		int32_t L_359 = V_8;
		uint32_t L_360 = ___logn0;
		uint32_t L_361 = V_3;
		uint32_t L_362 = V_4;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_356, L_357, L_358, L_359, L_360, L_361, L_362, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_363 = ___tmpsrc5;
		int32_t L_364 = V_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_365 = ___tmpsrc5;
		int32_t L_366 = V_8;
		uint32_t L_367 = ___logn0;
		uint32_t L_368 = V_3;
		uint32_t L_369 = V_4;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_363, L_364, L_365, L_366, L_367, L_368, L_369, NULL);
		V_2 = 0;
		goto IL_0429;
	}

IL_03c3:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_370 = ___tmpsrc5;
		int32_t L_371 = V_12;
		int32_t L_372 = V_2;
		NullCheck(L_370);
		int32_t L_373 = ((int32_t)il2cpp_codegen_add(L_371, L_372));
		uint32_t L_374 = (L_370)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		uint32_t L_375 = V_5;
		uint32_t L_376 = V_3;
		uint32_t L_377 = V_4;
		uint32_t L_378;
		L_378 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_374, L_375, L_376, L_377, NULL);
		V_28 = L_378;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_379 = ___tmpsrc5;
		int32_t L_380 = V_9;
		int32_t L_381 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_382 = ___tmpsrc5;
		int32_t L_383 = V_9;
		int32_t L_384 = V_2;
		NullCheck(L_382);
		int32_t L_385 = ((int32_t)il2cpp_codegen_add(L_383, L_384));
		uint32_t L_386 = (L_382)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		uint32_t L_387 = V_28;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_388 = ___tmpsrc5;
		int32_t L_389 = V_7;
		int32_t L_390 = V_2;
		NullCheck(L_388);
		int32_t L_391 = ((int32_t)il2cpp_codegen_add(L_389, L_390));
		uint32_t L_392 = (L_388)->GetAt(static_cast<il2cpp_array_size_t>(L_391));
		uint32_t L_393 = V_3;
		uint32_t L_394 = V_4;
		uint32_t L_395;
		L_395 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_387, L_392, L_393, L_394, NULL);
		uint32_t L_396 = V_3;
		uint32_t L_397;
		L_397 = FalconKeygen_modp_add_m0C9050405D198B39828FE8729BC3C3B1CFCF41B2(__this, L_386, L_395, L_396, NULL);
		NullCheck(L_379);
		(L_379)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_380, L_381))), (uint32_t)L_397);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_398 = ___tmpsrc5;
		int32_t L_399 = V_10;
		int32_t L_400 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_401 = ___tmpsrc5;
		int32_t L_402 = V_10;
		int32_t L_403 = V_2;
		NullCheck(L_401);
		int32_t L_404 = ((int32_t)il2cpp_codegen_add(L_402, L_403));
		uint32_t L_405 = (L_401)->GetAt(static_cast<il2cpp_array_size_t>(L_404));
		uint32_t L_406 = V_28;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_407 = ___tmpsrc5;
		int32_t L_408 = V_11;
		int32_t L_409 = V_2;
		NullCheck(L_407);
		int32_t L_410 = ((int32_t)il2cpp_codegen_add(L_408, L_409));
		uint32_t L_411 = (L_407)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		uint32_t L_412 = V_3;
		uint32_t L_413 = V_4;
		uint32_t L_414;
		L_414 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_406, L_411, L_412, L_413, NULL);
		uint32_t L_415 = V_3;
		uint32_t L_416;
		L_416 = FalconKeygen_modp_add_m0C9050405D198B39828FE8729BC3C3B1CFCF41B2(__this, L_405, L_414, L_415, NULL);
		NullCheck(L_398);
		(L_398)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_399, L_400))), (uint32_t)L_416);
		int32_t L_417 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_417, 1));
	}

IL_0429:
	{
		int32_t L_418 = V_2;
		int32_t L_419 = V_0;
		if ((((int32_t)L_418) < ((int32_t)L_419)))
		{
			goto IL_03c3;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_420 = ___tmpsrc5;
		int32_t L_421 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_422 = ___tmpsrc5;
		int32_t L_423 = V_11;
		uint32_t L_424 = ___logn0;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_425 = __this->___PRIMES_2;
		NullCheck(L_425);
		int32_t L_426 = 0;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_427 = (L_425)->GetAt(static_cast<il2cpp_array_size_t>(L_426));
		NullCheck(L_427);
		uint32_t L_428 = L_427->___g_1;
		uint32_t L_429 = V_3;
		uint32_t L_430 = V_4;
		FalconKeygen_modp_mkgm2_m059C61ADC3900310EDA79EBC8573C3D66CBB86A5(__this, L_420, L_421, L_422, L_423, L_424, L_428, L_429, L_430, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_431 = ___tmpsrc5;
		int32_t L_432 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_433 = ___tmpsrc5;
		int32_t L_434 = V_11;
		uint32_t L_435 = ___logn0;
		uint32_t L_436 = V_3;
		uint32_t L_437 = V_4;
		FalconKeygen_modp_iNTT2_mDFACB12D5576DA2A212FE9ABBABE5884B7A071FB(__this, L_431, L_432, L_433, L_434, L_435, L_436, L_437, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_438 = ___tmpsrc5;
		int32_t L_439 = V_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_440 = ___tmpsrc5;
		int32_t L_441 = V_11;
		uint32_t L_442 = ___logn0;
		uint32_t L_443 = V_3;
		uint32_t L_444 = V_4;
		FalconKeygen_modp_iNTT2_mDFACB12D5576DA2A212FE9ABBABE5884B7A071FB(__this, L_438, L_439, L_440, L_441, L_442, L_443, L_444, NULL);
		V_2 = 0;
		goto IL_04a2;
	}

IL_0474:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_445 = ___tmpsrc5;
		int32_t L_446 = V_8;
		int32_t L_447 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_448 = ___tmpsrc5;
		int32_t L_449 = V_9;
		int32_t L_450 = V_2;
		NullCheck(L_448);
		int32_t L_451 = ((int32_t)il2cpp_codegen_add(L_449, L_450));
		uint32_t L_452 = (L_448)->GetAt(static_cast<il2cpp_array_size_t>(L_451));
		uint32_t L_453 = V_3;
		int32_t L_454;
		L_454 = FalconKeygen_modp_norm_m67648EFF57E2368DD307FA15DB2CDB8F9076D847(__this, L_452, L_453, NULL);
		NullCheck(L_445);
		(L_445)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_446, L_447))), (uint32_t)L_454);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_455 = ___tmpsrc5;
		int32_t L_456 = V_9;
		int32_t L_457 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_458 = ___tmpsrc5;
		int32_t L_459 = V_10;
		int32_t L_460 = V_2;
		NullCheck(L_458);
		int32_t L_461 = ((int32_t)il2cpp_codegen_add(L_459, L_460));
		uint32_t L_462 = (L_458)->GetAt(static_cast<il2cpp_array_size_t>(L_461));
		uint32_t L_463 = V_3;
		int32_t L_464;
		L_464 = FalconKeygen_modp_norm_m67648EFF57E2368DD307FA15DB2CDB8F9076D847(__this, L_462, L_463, NULL);
		NullCheck(L_455);
		(L_455)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_456, L_457))), (uint32_t)L_464);
		int32_t L_465 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_465, 1));
	}

IL_04a2:
	{
		int32_t L_466 = V_2;
		int32_t L_467 = V_0;
		if ((((int32_t)L_466) < ((int32_t)L_467)))
		{
			goto IL_0474;
		}
	}
	{
		int32_t L_468 = V_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_469 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, L_468)));
		V_19 = L_469;
		int32_t L_470 = V_0;
		V_18 = L_470;
		V_2 = 0;
		goto IL_04d9;
	}

IL_04b7:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_471 = V_19;
		int32_t L_472 = V_18;
		int32_t L_473 = V_2;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_474 = __this->___fpre_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_475 = ___tmpsrc5;
		int32_t L_476 = V_9;
		int32_t L_477 = V_2;
		NullCheck(L_475);
		int32_t L_478 = ((int32_t)il2cpp_codegen_add(L_476, L_477));
		uint32_t L_479 = (L_475)->GetAt(static_cast<il2cpp_array_size_t>(L_478));
		NullCheck(L_474);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_480;
		L_480 = FprEngine_fpr_of_mE2CCAB33E9E22FC76315E34C34FB1C5A854F621D(L_474, ((int64_t)((int32_t)L_479)), NULL);
		NullCheck(L_471);
		(L_471)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_472, L_473))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_480);
		int32_t L_481 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_481, 1));
	}

IL_04d9:
	{
		int32_t L_482 = V_2;
		int32_t L_483 = V_0;
		if ((((int32_t)L_482) < ((int32_t)L_483)))
		{
			goto IL_04b7;
		}
	}
	{
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_484 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_485 = V_19;
		int32_t L_486 = V_18;
		uint32_t L_487 = ___logn0;
		NullCheck(L_484);
		FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09(L_484, L_485, L_486, L_487, NULL);
		V_17 = 0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_488 = V_19;
		int32_t L_489 = V_18;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_490 = V_19;
		int32_t L_491 = V_17;
		int32_t L_492 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_488, L_489, (RuntimeArray*)L_490, L_491, L_492, NULL);
		int32_t L_493 = V_17;
		int32_t L_494 = V_1;
		V_18 = ((int32_t)il2cpp_codegen_add(L_493, L_494));
		V_2 = 0;
		goto IL_052a;
	}

IL_0508:
	{
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_495 = V_19;
		int32_t L_496 = V_18;
		int32_t L_497 = V_2;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_498 = __this->___fpre_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_499 = ___tmpsrc5;
		int32_t L_500 = V_8;
		int32_t L_501 = V_2;
		NullCheck(L_499);
		int32_t L_502 = ((int32_t)il2cpp_codegen_add(L_500, L_501));
		uint32_t L_503 = (L_499)->GetAt(static_cast<il2cpp_array_size_t>(L_502));
		NullCheck(L_498);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_504;
		L_504 = FprEngine_fpr_of_mE2CCAB33E9E22FC76315E34C34FB1C5A854F621D(L_498, ((int64_t)((int32_t)L_503)), NULL);
		NullCheck(L_495);
		(L_495)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_496, L_497))), (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE)L_504);
		int32_t L_505 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_505, 1));
	}

IL_052a:
	{
		int32_t L_506 = V_2;
		int32_t L_507 = V_0;
		if ((((int32_t)L_506) < ((int32_t)L_507)))
		{
			goto IL_0508;
		}
	}
	{
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_508 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_509 = V_19;
		int32_t L_510 = V_18;
		uint32_t L_511 = ___logn0;
		NullCheck(L_508);
		FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09(L_508, L_509, L_510, L_511, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_512 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_513 = V_19;
		int32_t L_514 = V_18;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_515 = V_19;
		int32_t L_516 = V_17;
		uint32_t L_517 = ___logn0;
		NullCheck(L_512);
		FalconFFT_poly_div_autoadj_fft_m278A66E8C63244B1A75A3E98631A9C76391471D9(L_512, L_513, L_514, L_515, L_516, L_517, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_518 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_519 = V_19;
		int32_t L_520 = V_18;
		uint32_t L_521 = ___logn0;
		NullCheck(L_518);
		FalconFFT_iFFT_mC2AEDA0BE2CBCF043C45A2E9F9734843602E8BBB(L_518, L_519, L_520, L_521, NULL);
		V_2 = 0;
		goto IL_058f;
	}

IL_0566:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_522 = ___tmpsrc5;
		int32_t L_523 = V_8;
		int32_t L_524 = V_2;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_525 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_526 = V_19;
		int32_t L_527 = V_18;
		int32_t L_528 = V_2;
		NullCheck(L_526);
		int32_t L_529 = ((int32_t)il2cpp_codegen_add(L_527, L_528));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_530 = (L_526)->GetAt(static_cast<il2cpp_array_size_t>(L_529));
		NullCheck(L_525);
		int64_t L_531;
		L_531 = FprEngine_fpr_rint_m89FD9868C85461C89E4656BD48AB86FDBBE3FBB6(L_525, L_530, NULL);
		uint32_t L_532 = V_3;
		uint32_t L_533;
		L_533 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, ((int32_t)L_531), L_532, NULL);
		NullCheck(L_522);
		(L_522)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_523, L_524))), (uint32_t)L_533);
		int32_t L_534 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_534, 1));
	}

IL_058f:
	{
		int32_t L_535 = V_2;
		int32_t L_536 = V_0;
		if ((((int32_t)L_535) < ((int32_t)L_536)))
		{
			goto IL_0566;
		}
	}
	{
		int32_t L_537 = V_8;
		int32_t L_538 = V_0;
		V_9 = ((int32_t)il2cpp_codegen_add(L_537, L_538));
		int32_t L_539 = V_9;
		int32_t L_540 = V_0;
		V_10 = ((int32_t)il2cpp_codegen_add(L_539, L_540));
		int32_t L_541 = V_10;
		int32_t L_542 = V_0;
		V_11 = ((int32_t)il2cpp_codegen_add(L_541, L_542));
		int32_t L_543 = V_11;
		int32_t L_544 = V_0;
		V_12 = ((int32_t)il2cpp_codegen_add(L_543, L_544));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_545 = ___tmpsrc5;
		int32_t L_546 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_547 = ___tmpsrc5;
		int32_t L_548 = V_10;
		uint32_t L_549 = ___logn0;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_550 = __this->___PRIMES_2;
		NullCheck(L_550);
		int32_t L_551 = 0;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_552 = (L_550)->GetAt(static_cast<il2cpp_array_size_t>(L_551));
		NullCheck(L_552);
		uint32_t L_553 = L_552->___g_1;
		uint32_t L_554 = V_3;
		uint32_t L_555 = V_4;
		FalconKeygen_modp_mkgm2_m059C61ADC3900310EDA79EBC8573C3D66CBB86A5(__this, L_545, L_546, L_547, L_548, L_549, L_553, L_554, L_555, NULL);
		V_2 = 0;
		goto IL_05fa;
	}

IL_05ce:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_556 = ___tmpsrc5;
		int32_t L_557 = V_11;
		int32_t L_558 = V_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_559 = ___fsrc1;
		int32_t L_560 = ___f2;
		int32_t L_561 = V_2;
		NullCheck(L_559);
		int32_t L_562 = ((int32_t)il2cpp_codegen_add(L_560, L_561));
		int8_t L_563 = (L_559)->GetAt(static_cast<il2cpp_array_size_t>(L_562));
		uint32_t L_564 = V_3;
		uint32_t L_565;
		L_565 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_563, L_564, NULL);
		NullCheck(L_556);
		(L_556)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_557, L_558))), (uint32_t)L_565);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_566 = ___tmpsrc5;
		int32_t L_567 = V_12;
		int32_t L_568 = V_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_569 = ___gsrc3;
		int32_t L_570 = ___g4;
		int32_t L_571 = V_2;
		NullCheck(L_569);
		int32_t L_572 = ((int32_t)il2cpp_codegen_add(L_570, L_571));
		int8_t L_573 = (L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_572));
		uint32_t L_574 = V_3;
		uint32_t L_575;
		L_575 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_573, L_574, NULL);
		NullCheck(L_566);
		(L_566)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_567, L_568))), (uint32_t)L_575);
		int32_t L_576 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_576, 1));
	}

IL_05fa:
	{
		int32_t L_577 = V_2;
		int32_t L_578 = V_0;
		if ((((int32_t)L_577) < ((int32_t)L_578)))
		{
			goto IL_05ce;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_579 = ___tmpsrc5;
		int32_t L_580 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_581 = ___tmpsrc5;
		int32_t L_582 = V_9;
		uint32_t L_583 = ___logn0;
		uint32_t L_584 = V_3;
		uint32_t L_585 = V_4;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_579, L_580, L_581, L_582, L_583, L_584, L_585, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_586 = ___tmpsrc5;
		int32_t L_587 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_588 = ___tmpsrc5;
		int32_t L_589 = V_9;
		uint32_t L_590 = ___logn0;
		uint32_t L_591 = V_3;
		uint32_t L_592 = V_4;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_586, L_587, L_588, L_589, L_590, L_591, L_592, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_593 = ___tmpsrc5;
		int32_t L_594 = V_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_595 = ___tmpsrc5;
		int32_t L_596 = V_9;
		uint32_t L_597 = ___logn0;
		uint32_t L_598 = V_3;
		uint32_t L_599 = V_4;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_593, L_594, L_595, L_596, L_597, L_598, L_599, NULL);
		V_2 = 0;
		goto IL_069e;
	}

IL_0638:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_600 = ___tmpsrc5;
		int32_t L_601 = V_8;
		int32_t L_602 = V_2;
		NullCheck(L_600);
		int32_t L_603 = ((int32_t)il2cpp_codegen_add(L_601, L_602));
		uint32_t L_604 = (L_600)->GetAt(static_cast<il2cpp_array_size_t>(L_603));
		uint32_t L_605 = V_5;
		uint32_t L_606 = V_3;
		uint32_t L_607 = V_4;
		uint32_t L_608;
		L_608 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_604, L_605, L_606, L_607, NULL);
		V_29 = L_608;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_609 = ___tmpsrc5;
		int32_t L_610 = V_6;
		int32_t L_611 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_612 = ___tmpsrc5;
		int32_t L_613 = V_6;
		int32_t L_614 = V_2;
		NullCheck(L_612);
		int32_t L_615 = ((int32_t)il2cpp_codegen_add(L_613, L_614));
		uint32_t L_616 = (L_612)->GetAt(static_cast<il2cpp_array_size_t>(L_615));
		uint32_t L_617 = V_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_618 = ___tmpsrc5;
		int32_t L_619 = V_11;
		int32_t L_620 = V_2;
		NullCheck(L_618);
		int32_t L_621 = ((int32_t)il2cpp_codegen_add(L_619, L_620));
		uint32_t L_622 = (L_618)->GetAt(static_cast<il2cpp_array_size_t>(L_621));
		uint32_t L_623 = V_3;
		uint32_t L_624 = V_4;
		uint32_t L_625;
		L_625 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_617, L_622, L_623, L_624, NULL);
		uint32_t L_626 = V_3;
		uint32_t L_627;
		L_627 = FalconKeygen_modp_sub_m209143B45E60A57D543566124663AA52011EBFEE(__this, L_616, L_625, L_626, NULL);
		NullCheck(L_609);
		(L_609)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_610, L_611))), (uint32_t)L_627);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_628 = ___tmpsrc5;
		int32_t L_629 = V_7;
		int32_t L_630 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_631 = ___tmpsrc5;
		int32_t L_632 = V_7;
		int32_t L_633 = V_2;
		NullCheck(L_631);
		int32_t L_634 = ((int32_t)il2cpp_codegen_add(L_632, L_633));
		uint32_t L_635 = (L_631)->GetAt(static_cast<il2cpp_array_size_t>(L_634));
		uint32_t L_636 = V_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_637 = ___tmpsrc5;
		int32_t L_638 = V_12;
		int32_t L_639 = V_2;
		NullCheck(L_637);
		int32_t L_640 = ((int32_t)il2cpp_codegen_add(L_638, L_639));
		uint32_t L_641 = (L_637)->GetAt(static_cast<il2cpp_array_size_t>(L_640));
		uint32_t L_642 = V_3;
		uint32_t L_643 = V_4;
		uint32_t L_644;
		L_644 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_636, L_641, L_642, L_643, NULL);
		uint32_t L_645 = V_3;
		uint32_t L_646;
		L_646 = FalconKeygen_modp_sub_m209143B45E60A57D543566124663AA52011EBFEE(__this, L_635, L_644, L_645, NULL);
		NullCheck(L_628);
		(L_628)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_629, L_630))), (uint32_t)L_646);
		int32_t L_647 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_647, 1));
	}

IL_069e:
	{
		int32_t L_648 = V_2;
		int32_t L_649 = V_0;
		if ((((int32_t)L_648) < ((int32_t)L_649)))
		{
			goto IL_0638;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_650 = ___tmpsrc5;
		int32_t L_651 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_652 = ___tmpsrc5;
		int32_t L_653 = V_10;
		uint32_t L_654 = ___logn0;
		uint32_t L_655 = V_3;
		uint32_t L_656 = V_4;
		FalconKeygen_modp_iNTT2_mDFACB12D5576DA2A212FE9ABBABE5884B7A071FB(__this, L_650, L_651, L_652, L_653, L_654, L_655, L_656, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_657 = ___tmpsrc5;
		int32_t L_658 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_659 = ___tmpsrc5;
		int32_t L_660 = V_10;
		uint32_t L_661 = ___logn0;
		uint32_t L_662 = V_3;
		uint32_t L_663 = V_4;
		FalconKeygen_modp_iNTT2_mDFACB12D5576DA2A212FE9ABBABE5884B7A071FB(__this, L_657, L_658, L_659, L_660, L_661, L_662, L_663, NULL);
		V_2 = 0;
		goto IL_06f8;
	}

IL_06ca:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_664 = ___tmpsrc5;
		int32_t L_665 = V_6;
		int32_t L_666 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_667 = ___tmpsrc5;
		int32_t L_668 = V_6;
		int32_t L_669 = V_2;
		NullCheck(L_667);
		int32_t L_670 = ((int32_t)il2cpp_codegen_add(L_668, L_669));
		uint32_t L_671 = (L_667)->GetAt(static_cast<il2cpp_array_size_t>(L_670));
		uint32_t L_672 = V_3;
		int32_t L_673;
		L_673 = FalconKeygen_modp_norm_m67648EFF57E2368DD307FA15DB2CDB8F9076D847(__this, L_671, L_672, NULL);
		NullCheck(L_664);
		(L_664)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_665, L_666))), (uint32_t)L_673);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_674 = ___tmpsrc5;
		int32_t L_675 = V_7;
		int32_t L_676 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_677 = ___tmpsrc5;
		int32_t L_678 = V_7;
		int32_t L_679 = V_2;
		NullCheck(L_677);
		int32_t L_680 = ((int32_t)il2cpp_codegen_add(L_678, L_679));
		uint32_t L_681 = (L_677)->GetAt(static_cast<il2cpp_array_size_t>(L_680));
		uint32_t L_682 = V_3;
		int32_t L_683;
		L_683 = FalconKeygen_modp_norm_m67648EFF57E2368DD307FA15DB2CDB8F9076D847(__this, L_681, L_682, NULL);
		NullCheck(L_674);
		(L_674)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_675, L_676))), (uint32_t)L_683);
		int32_t L_684 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_684, 1));
	}

IL_06f8:
	{
		int32_t L_685 = V_2;
		int32_t L_686 = V_0;
		if ((((int32_t)L_685) < ((int32_t)L_686)))
		{
			goto IL_06ca;
		}
	}
	{
		return 1;
	}
}
// System.Int32 Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::solve_NTRU(System.UInt32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FalconKeygen_solve_NTRU_mF63B74B8BEDEAAB34A1AF5BE86977174CE8C8544 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, uint32_t ___logn0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___Fsrc1, int32_t ___F2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___Gsrc3, int32_t ___G4, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc5, int32_t ___f6, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc7, int32_t ___g8, int32_t ___lim9, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___tmpsrc10, int32_t ___tmp11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* V_10 = NULL;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	{
		uint32_t L_0 = ___logn0;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		uint32_t L_1 = ___logn0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = ___fsrc5;
		int32_t L_3 = ___f6;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = ___gsrc7;
		int32_t L_5 = ___g8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___tmpsrc10;
		int32_t L_7 = ___tmp11;
		int32_t L_8;
		L_8 = FalconKeygen_solve_NTRU_deepest_mD1FBCE9F88B00A820D4CAB1DD7DD528D505D320E(__this, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_001e;
		}
	}
	{
		return 0;
	}

IL_001e:
	{
		uint32_t L_9 = ___logn0;
		if ((!(((uint32_t)L_9) <= ((uint32_t)2))))
		{
			goto IL_004c;
		}
	}
	{
		uint32_t L_10 = ___logn0;
		V_11 = L_10;
		goto IL_0040;
	}

IL_0027:
	{
		uint32_t L_11 = ___logn0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_12 = ___fsrc5;
		int32_t L_13 = ___f6;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_14 = ___gsrc7;
		int32_t L_15 = ___g8;
		uint32_t L_16 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___tmpsrc10;
		int32_t L_18 = ___tmp11;
		int32_t L_19;
		L_19 = FalconKeygen_solve_NTRU_intermediate_m1ED1640A12DB051A398D898F3E5116CC2877B81C(__this, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, NULL);
		if (L_19)
		{
			goto IL_0040;
		}
	}
	{
		return 0;
	}

IL_0040:
	{
		uint32_t L_20 = V_11;
		uint32_t L_21 = L_20;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, 1));
		if ((!(((uint32_t)L_21) <= ((uint32_t)0))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_00a2;
	}

IL_004c:
	{
		uint32_t L_22 = ___logn0;
		V_12 = L_22;
		goto IL_006a;
	}

IL_0051:
	{
		uint32_t L_23 = ___logn0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_24 = ___fsrc5;
		int32_t L_25 = ___f6;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_26 = ___gsrc7;
		int32_t L_27 = ___g8;
		uint32_t L_28 = V_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___tmpsrc10;
		int32_t L_30 = ___tmp11;
		int32_t L_31;
		L_31 = FalconKeygen_solve_NTRU_intermediate_m1ED1640A12DB051A398D898F3E5116CC2877B81C(__this, L_23, L_24, L_25, L_26, L_27, L_28, L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_006a;
		}
	}
	{
		return 0;
	}

IL_006a:
	{
		uint32_t L_32 = V_12;
		uint32_t L_33 = L_32;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, 1));
		if ((!(((uint32_t)L_33) <= ((uint32_t)2))))
		{
			goto IL_0051;
		}
	}
	{
		uint32_t L_34 = ___logn0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_35 = ___fsrc5;
		int32_t L_36 = ___f6;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_37 = ___gsrc7;
		int32_t L_38 = ___g8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___tmpsrc10;
		int32_t L_40 = ___tmp11;
		int32_t L_41;
		L_41 = FalconKeygen_solve_NTRU_binary_depth1_m39D04331C3134F6F81D8901DC907F4B327BF8DCD(__this, L_34, L_35, L_36, L_37, L_38, L_39, L_40, NULL);
		if (L_41)
		{
			goto IL_008b;
		}
	}
	{
		return 0;
	}

IL_008b:
	{
		uint32_t L_42 = ___logn0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_43 = ___fsrc5;
		int32_t L_44 = ___f6;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_45 = ___gsrc7;
		int32_t L_46 = ___g8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___tmpsrc10;
		int32_t L_48 = ___tmp11;
		int32_t L_49;
		L_49 = FalconKeygen_solve_NTRU_binary_depth0_mA0E94B647C9439D26CDBFFB6544A1AC48FB70725(__this, L_42, L_43, L_44, L_45, L_46, L_47, L_48, NULL);
		if (L_49)
		{
			goto IL_00a2;
		}
	}
	{
		return 0;
	}

IL_00a2:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_50 = ___Gsrc3;
		if (L_50)
		{
			goto IL_00b1;
		}
	}
	{
		___G4 = 0;
		int32_t L_51 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_52 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)L_51);
		___Gsrc3 = L_52;
	}

IL_00b1:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_53 = ___Fsrc1;
		int32_t L_54 = ___F2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ___tmpsrc10;
		int32_t L_56 = ___tmp11;
		int32_t L_57 = ___lim9;
		uint32_t L_58 = ___logn0;
		int32_t L_59;
		L_59 = FalconKeygen_poly_big_to_small_m1C62C8FE3D146DF26B66282E5B5E57E60AC8E0CB(__this, L_53, L_54, L_55, L_56, L_57, L_58, NULL);
		if (!L_59)
		{
			goto IL_00d7;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_60 = ___Gsrc3;
		int32_t L_61 = ___G4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___tmpsrc10;
		int32_t L_63 = ___tmp11;
		int32_t L_64 = V_0;
		int32_t L_65 = ___lim9;
		uint32_t L_66 = ___logn0;
		int32_t L_67;
		L_67 = FalconKeygen_poly_big_to_small_m1C62C8FE3D146DF26B66282E5B5E57E60AC8E0CB(__this, L_60, L_61, L_62, ((int32_t)il2cpp_codegen_add(L_63, L_64)), L_65, L_66, NULL);
		if (L_67)
		{
			goto IL_00d9;
		}
	}

IL_00d7:
	{
		return 0;
	}

IL_00d9:
	{
		int32_t L_68 = ___tmp11;
		V_5 = L_68;
		int32_t L_69 = V_5;
		int32_t L_70 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_69, L_70));
		int32_t L_71 = V_2;
		int32_t L_72 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, L_72));
		int32_t L_73 = V_3;
		int32_t L_74 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add(L_73, L_74));
		int32_t L_75 = V_4;
		int32_t L_76 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_add(L_75, L_76));
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_77 = __this->___PRIMES_2;
		V_10 = L_77;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_78 = V_10;
		NullCheck(L_78);
		int32_t L_79 = 0;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		uint32_t L_81 = L_80->___p_0;
		V_7 = L_81;
		uint32_t L_82 = V_7;
		uint32_t L_83;
		L_83 = FalconKeygen_modp_ninv31_mCEC1754556145321680594C35FE0B7A053556CEE(__this, L_82, NULL);
		V_8 = L_83;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___tmpsrc10;
		int32_t L_85 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = ___tmpsrc10;
		int32_t L_87 = ___tmp11;
		uint32_t L_88 = ___logn0;
		FalconSmallPrimeU5BU5D_t30067852F7872C2BC61E730A236980C1F15242A6* L_89 = V_10;
		NullCheck(L_89);
		int32_t L_90 = 0;
		FalconSmallPrime_t41F4A76276C72EDF313791700800ED2EF3B37A12* L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_91);
		uint32_t L_92 = L_91->___g_1;
		uint32_t L_93 = V_7;
		uint32_t L_94 = V_8;
		FalconKeygen_modp_mkgm2_m059C61ADC3900310EDA79EBC8573C3D66CBB86A5(__this, L_84, L_85, L_86, L_87, L_88, L_92, L_93, L_94, NULL);
		V_1 = 0;
		goto IL_0148;
	}

IL_012e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___tmpsrc10;
		int32_t L_96 = V_5;
		int32_t L_97 = V_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_98 = ___Gsrc3;
		int32_t L_99 = ___G4;
		int32_t L_100 = V_1;
		NullCheck(L_98);
		int32_t L_101 = ((int32_t)il2cpp_codegen_add(L_99, L_100));
		int8_t L_102 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		uint32_t L_103 = V_7;
		uint32_t L_104;
		L_104 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_102, L_103, NULL);
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_96, L_97))), (uint32_t)L_104);
		int32_t L_105 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_0148:
	{
		int32_t L_106 = V_1;
		int32_t L_107 = V_0;
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_012e;
		}
	}
	{
		V_1 = 0;
		goto IL_0192;
	}

IL_0150:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___tmpsrc10;
		int32_t L_109 = V_2;
		int32_t L_110 = V_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_111 = ___fsrc5;
		int32_t L_112 = ___f6;
		int32_t L_113 = V_1;
		NullCheck(L_111);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(L_112, L_113));
		int8_t L_115 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		uint32_t L_116 = V_7;
		uint32_t L_117;
		L_117 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_115, L_116, NULL);
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, L_110))), (uint32_t)L_117);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_118 = ___tmpsrc10;
		int32_t L_119 = V_3;
		int32_t L_120 = V_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_121 = ___gsrc7;
		int32_t L_122 = ___g8;
		int32_t L_123 = V_1;
		NullCheck(L_121);
		int32_t L_124 = ((int32_t)il2cpp_codegen_add(L_122, L_123));
		int8_t L_125 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		uint32_t L_126 = V_7;
		uint32_t L_127;
		L_127 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_125, L_126, NULL);
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_119, L_120))), (uint32_t)L_127);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_128 = ___tmpsrc10;
		int32_t L_129 = V_4;
		int32_t L_130 = V_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_131 = ___Fsrc1;
		int32_t L_132 = ___F2;
		int32_t L_133 = V_1;
		NullCheck(L_131);
		int32_t L_134 = ((int32_t)il2cpp_codegen_add(L_132, L_133));
		int8_t L_135 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		uint32_t L_136 = V_7;
		uint32_t L_137;
		L_137 = FalconKeygen_modp_set_mEEB0D60E3CB291C7FBF24804FE5F1851101ECBF3(__this, L_135, L_136, NULL);
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_129, L_130))), (uint32_t)L_137);
		int32_t L_138 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_0192:
	{
		int32_t L_139 = V_1;
		int32_t L_140 = V_0;
		if ((((int32_t)L_139) < ((int32_t)L_140)))
		{
			goto IL_0150;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___tmpsrc10;
		int32_t L_142 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = ___tmpsrc10;
		int32_t L_144 = V_6;
		uint32_t L_145 = ___logn0;
		uint32_t L_146 = V_7;
		uint32_t L_147 = V_8;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_141, L_142, L_143, L_144, L_145, L_146, L_147, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = ___tmpsrc10;
		int32_t L_149 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = ___tmpsrc10;
		int32_t L_151 = V_6;
		uint32_t L_152 = ___logn0;
		uint32_t L_153 = V_7;
		uint32_t L_154 = V_8;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_148, L_149, L_150, L_151, L_152, L_153, L_154, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_155 = ___tmpsrc10;
		int32_t L_156 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_157 = ___tmpsrc10;
		int32_t L_158 = V_6;
		uint32_t L_159 = ___logn0;
		uint32_t L_160 = V_7;
		uint32_t L_161 = V_8;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_155, L_156, L_157, L_158, L_159, L_160, L_161, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_162 = ___tmpsrc10;
		int32_t L_163 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_164 = ___tmpsrc10;
		int32_t L_165 = V_6;
		uint32_t L_166 = ___logn0;
		uint32_t L_167 = V_7;
		uint32_t L_168 = V_8;
		FalconKeygen_modp_NTT2_mEE4EF6739E18FB74F0C8589D88713D67547F0F92(__this, L_162, L_163, L_164, L_165, L_166, L_167, L_168, NULL);
		uint32_t L_169 = V_7;
		uint32_t L_170 = V_8;
		uint32_t L_171;
		L_171 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, ((int32_t)12289), 1, L_169, L_170, NULL);
		V_9 = L_171;
		V_1 = 0;
		goto IL_0236;
	}

IL_01f6:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_172 = ___tmpsrc10;
		int32_t L_173 = V_2;
		int32_t L_174 = V_1;
		NullCheck(L_172);
		int32_t L_175 = ((int32_t)il2cpp_codegen_add(L_173, L_174));
		uint32_t L_176 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_177 = ___tmpsrc10;
		int32_t L_178 = V_5;
		int32_t L_179 = V_1;
		NullCheck(L_177);
		int32_t L_180 = ((int32_t)il2cpp_codegen_add(L_178, L_179));
		uint32_t L_181 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		uint32_t L_182 = V_7;
		uint32_t L_183 = V_8;
		uint32_t L_184;
		L_184 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_176, L_181, L_182, L_183, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = ___tmpsrc10;
		int32_t L_186 = V_3;
		int32_t L_187 = V_1;
		NullCheck(L_185);
		int32_t L_188 = ((int32_t)il2cpp_codegen_add(L_186, L_187));
		uint32_t L_189 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_190 = ___tmpsrc10;
		int32_t L_191 = V_4;
		int32_t L_192 = V_1;
		NullCheck(L_190);
		int32_t L_193 = ((int32_t)il2cpp_codegen_add(L_191, L_192));
		uint32_t L_194 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		uint32_t L_195 = V_7;
		uint32_t L_196 = V_8;
		uint32_t L_197;
		L_197 = FalconKeygen_modp_montymul_m97D77934D5152BB9B40CF43E9EBAC6F3B3E9FD74(__this, L_189, L_194, L_195, L_196, NULL);
		uint32_t L_198 = V_7;
		uint32_t L_199;
		L_199 = FalconKeygen_modp_sub_m209143B45E60A57D543566124663AA52011EBFEE(__this, L_184, L_197, L_198, NULL);
		uint32_t L_200 = V_9;
		if ((((int32_t)L_199) == ((int32_t)L_200)))
		{
			goto IL_0232;
		}
	}
	{
		return 0;
	}

IL_0232:
	{
		int32_t L_201 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_201, 1));
	}

IL_0236:
	{
		int32_t L_202 = V_1;
		int32_t L_203 = V_0;
		if ((((int32_t)L_202) < ((int32_t)L_203)))
		{
			goto IL_01f6;
		}
	}
	{
		return 1;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::poly_small_mkgauss(Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256,System.SByte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_poly_small_mkgauss_m58FE7C300355632DB7D479591103F734997A1CF4 (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* ___rng0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc1, int32_t ___f2, uint32_t ___logn3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		uint32_t L_0 = ___logn3;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		V_2 = 0;
		V_1 = 0;
		goto IL_0042;
	}

IL_000e:
	{
		SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* L_1 = ___rng0;
		uint32_t L_2 = ___logn3;
		int32_t L_3;
		L_3 = FalconKeygen_mkgauss_mDFDB345F9D2D637DDEF974BFB0FFFF5B2694BEFE(__this, L_1, L_2, NULL);
		V_3 = L_3;
		int32_t L_4 = V_3;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)-127))))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_5 = V_3;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)127))))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1))))))
		{
			goto IL_0031;
		}
	}
	{
		uint32_t L_8 = V_2;
		int32_t L_9 = V_3;
		if (((int32_t)((int32_t)L_8^((int32_t)(L_9&1)))))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_000e;
	}

IL_0031:
	{
		uint32_t L_10 = V_2;
		int32_t L_11 = V_3;
		V_2 = ((int32_t)((int32_t)L_10^((int32_t)(L_11&1))));
	}

IL_0037:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_12 = ___fsrc1;
		int32_t L_13 = ___f2;
		int32_t L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, L_14))), (int8_t)((int8_t)L_15));
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0042:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Pqc.Crypto.Falcon.FalconKeygen::keygen(Org.BouncyCastle.Pqc.Crypto.Falcon.SHAKE256,System.SByte[],System.Int32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.SByte[],System.Int32,System.UInt16[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FalconKeygen_keygen_m5722BE8265D84E5872C7824DD7B03300133AA93A (FalconKeygen_t41C3D7FD3ED0E08B62C52DD1259C0AA9135C2F35* __this, SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* ___rng0, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___fsrc1, int32_t ___f2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___gsrc3, int32_t ___g4, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___Fsrc5, int32_t ___F6, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___Gsrc7, int32_t ___G8, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___hsrc9, int32_t ___h10, uint32_t ___logn11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE V_8;
	memset((&V_8), 0, sizeof(V_8));
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* V_12 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_13 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_14 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_15 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* G_B22_0 = NULL;
	{
		uint32_t L_0 = ___logn11;
		V_0 = ((int32_t)(1<<((int32_t)((int32_t)L_0&((int32_t)31)))));
		SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* L_1 = ___rng0;
		V_4 = L_1;
	}

IL_000b:
	{
		SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* L_2 = V_4;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = ___fsrc1;
		int32_t L_4 = ___f2;
		uint32_t L_5 = ___logn11;
		FalconKeygen_poly_small_mkgauss_m58FE7C300355632DB7D479591103F734997A1CF4(__this, L_2, L_3, L_4, L_5, NULL);
		SHAKE256_tED688BEBA72708C5F2CE08450482B6ACF8575F10* L_6 = V_4;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_7 = ___gsrc3;
		int32_t L_8 = ___g4;
		uint32_t L_9 = ___logn11;
		FalconKeygen_poly_small_mkgauss_m58FE7C300355632DB7D479591103F734997A1CF4(__this, L_6, L_7, L_8, L_9, NULL);
		FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* L_10 = __this->___codec_3;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10->___max_fg_bits_0;
		uint32_t L_12 = ___logn11;
		NullCheck(L_11);
		uint32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_11 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, 1))&((int32_t)31)))));
		V_1 = 0;
		goto IL_0073;
	}

IL_0040:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_15 = ___fsrc1;
		int32_t L_16 = ___f2;
		int32_t L_17 = V_1;
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		int8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = V_11;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_006a;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_21 = ___fsrc1;
		int32_t L_22 = ___f2;
		int32_t L_23 = V_1;
		NullCheck(L_21);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		int8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_11;
		if ((((int32_t)L_25) <= ((int32_t)((-L_26)))))
		{
			goto IL_006a;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_27 = ___gsrc3;
		int32_t L_28 = ___g4;
		int32_t L_29 = V_1;
		NullCheck(L_27);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_28, L_29));
		int8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		int32_t L_32 = V_11;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_006a;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_33 = ___gsrc3;
		int32_t L_34 = ___g4;
		int32_t L_35 = V_1;
		NullCheck(L_33);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		int8_t L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = V_11;
		if ((((int32_t)L_37) > ((int32_t)((-L_38)))))
		{
			goto IL_006f;
		}
	}

IL_006a:
	{
		V_11 = (-1);
		goto IL_0077;
	}

IL_006f:
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0073:
	{
		int32_t L_40 = V_1;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0040;
		}
	}

IL_0077:
	{
		int32_t L_42 = V_11;
		if ((((int32_t)L_42) < ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_43 = ___fsrc1;
		int32_t L_44 = ___f2;
		uint32_t L_45 = ___logn11;
		uint32_t L_46;
		L_46 = FalconKeygen_poly_small_sqnorm_m982EF4ADD62F41BC69AE18FE7F794F51AD1675DE(__this, L_43, L_44, L_45, NULL);
		V_9 = L_46;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_47 = ___gsrc3;
		int32_t L_48 = ___g4;
		uint32_t L_49 = ___logn11;
		uint32_t L_50;
		L_50 = FalconKeygen_poly_small_sqnorm_m982EF4ADD62F41BC69AE18FE7F794F51AD1675DE(__this, L_47, L_48, L_49, NULL);
		V_10 = L_50;
		uint32_t L_51 = V_9;
		uint32_t L_52 = V_10;
		uint32_t L_53 = V_9;
		uint32_t L_54 = V_10;
		if ((!(((uint32_t)((int32_t)(uint32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)L_52))))|((-((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_53|(int32_t)L_54))>>((int32_t)31))))))))))) < ((uint32_t)((int32_t)16823)))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_55 = V_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_56 = (FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971*)SZArrayNew(FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(3, L_55)));
		V_12 = L_56;
		V_5 = 0;
		int32_t L_57 = V_5;
		int32_t L_58 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_add(L_57, L_58));
		int32_t L_59 = V_6;
		int32_t L_60 = V_0;
		V_7 = ((int32_t)il2cpp_codegen_add(L_59, L_60));
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_61 = V_12;
		int32_t L_62 = V_5;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_63 = ___fsrc1;
		int32_t L_64 = ___f2;
		uint32_t L_65 = ___logn11;
		FalconKeygen_poly_small_to_fp_m5D6F42E508FBC9648A097F69E5DD04233A888580(__this, L_61, L_62, L_63, L_64, L_65, NULL);
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_66 = V_12;
		int32_t L_67 = V_6;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_68 = ___gsrc3;
		int32_t L_69 = ___g4;
		uint32_t L_70 = ___logn11;
		FalconKeygen_poly_small_to_fp_m5D6F42E508FBC9648A097F69E5DD04233A888580(__this, L_66, L_67, L_68, L_69, L_70, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_71 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_72 = V_12;
		int32_t L_73 = V_5;
		uint32_t L_74 = ___logn11;
		NullCheck(L_71);
		FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09(L_71, L_72, L_73, L_74, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_75 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_76 = V_12;
		int32_t L_77 = V_6;
		uint32_t L_78 = ___logn11;
		NullCheck(L_75);
		FalconFFT_FFT_mA7EFB886B8585E5C8F8A487DC1384A634CF91E09(L_75, L_76, L_77, L_78, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_79 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_80 = V_12;
		int32_t L_81 = V_7;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_82 = V_12;
		int32_t L_83 = V_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_84 = V_12;
		int32_t L_85 = V_6;
		uint32_t L_86 = ___logn11;
		NullCheck(L_79);
		FalconFFT_poly_invnorm2_fft_mDF55588BAD67975250860E1437DCC4E7ECCE7043(L_79, L_80, L_81, L_82, L_83, L_84, L_85, L_86, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_87 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_88 = V_12;
		int32_t L_89 = V_5;
		uint32_t L_90 = ___logn11;
		NullCheck(L_87);
		FalconFFT_poly_adj_fft_mA5CE00AB69D7431DFC350AB819CC71B90645B163(L_87, L_88, L_89, L_90, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_91 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_92 = V_12;
		int32_t L_93 = V_6;
		uint32_t L_94 = ___logn11;
		NullCheck(L_91);
		FalconFFT_poly_adj_fft_mA5CE00AB69D7431DFC350AB819CC71B90645B163(L_91, L_92, L_93, L_94, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_95 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_96 = V_12;
		int32_t L_97 = V_5;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_98 = __this->___fpre_0;
		NullCheck(L_98);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_99 = L_98->___fpr_q_17;
		uint32_t L_100 = ___logn11;
		NullCheck(L_95);
		FalconFFT_poly_mulconst_mF6BB1CE00CB5D7077F5489ED8E7F9B46B2ACB881(L_95, L_96, L_97, L_99, L_100, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_101 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_102 = V_12;
		int32_t L_103 = V_6;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_104 = __this->___fpre_0;
		NullCheck(L_104);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_105 = L_104->___fpr_q_17;
		uint32_t L_106 = ___logn11;
		NullCheck(L_101);
		FalconFFT_poly_mulconst_mF6BB1CE00CB5D7077F5489ED8E7F9B46B2ACB881(L_101, L_102, L_103, L_105, L_106, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_107 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_108 = V_12;
		int32_t L_109 = V_5;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_110 = V_12;
		int32_t L_111 = V_7;
		uint32_t L_112 = ___logn11;
		NullCheck(L_107);
		FalconFFT_poly_mul_autoadj_fft_mA719D26DC7D3B099509230DB13D2546EF7583693(L_107, L_108, L_109, L_110, L_111, L_112, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_113 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_114 = V_12;
		int32_t L_115 = V_6;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_116 = V_12;
		int32_t L_117 = V_7;
		uint32_t L_118 = ___logn11;
		NullCheck(L_113);
		FalconFFT_poly_mul_autoadj_fft_mA719D26DC7D3B099509230DB13D2546EF7583693(L_113, L_114, L_115, L_116, L_117, L_118, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_119 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_120 = V_12;
		int32_t L_121 = V_5;
		uint32_t L_122 = ___logn11;
		NullCheck(L_119);
		FalconFFT_iFFT_mC2AEDA0BE2CBCF043C45A2E9F9734843602E8BBB(L_119, L_120, L_121, L_122, NULL);
		FalconFFT_t3B182969B977D846BEC753660D96C86B3008AFAF* L_123 = __this->___ffte_1;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_124 = V_12;
		int32_t L_125 = V_6;
		uint32_t L_126 = ___logn11;
		NullCheck(L_123);
		FalconFFT_iFFT_mC2AEDA0BE2CBCF043C45A2E9F9734843602E8BBB(L_123, L_124, L_125, L_126, NULL);
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_127 = __this->___fpre_0;
		NullCheck(L_127);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_128 = L_127->___fpr_zero_5;
		V_8 = L_128;
		V_1 = 0;
		goto IL_0229;
	}

IL_01db:
	{
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_129 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_130 = V_8;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_131 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_132 = V_12;
		int32_t L_133 = V_5;
		int32_t L_134 = V_1;
		NullCheck(L_132);
		int32_t L_135 = ((int32_t)il2cpp_codegen_add(L_133, L_134));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_136 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_131);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_137;
		L_137 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_131, L_136, NULL);
		NullCheck(L_129);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_138;
		L_138 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_129, L_130, L_137, NULL);
		V_8 = L_138;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_139 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_140 = V_8;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_141 = __this->___fpre_0;
		FalconFPRU5BU5D_t9B2F3F9F58F4B0964F2D857AED7923C780475971* L_142 = V_12;
		int32_t L_143 = V_6;
		int32_t L_144 = V_1;
		NullCheck(L_142);
		int32_t L_145 = ((int32_t)il2cpp_codegen_add(L_143, L_144));
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_146 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		NullCheck(L_141);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_147;
		L_147 = FprEngine_fpr_sqr_mA5A58046782CD39DBF09C22E2DC3F54A190DA21D(L_141, L_146, NULL);
		NullCheck(L_139);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_148;
		L_148 = FprEngine_fpr_add_mF07B0BA2B5D3AED5C3FCFC5CF5032D21D650C504(L_139, L_140, L_147, NULL);
		V_8 = L_148;
		int32_t L_149 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_149, 1));
	}

IL_0229:
	{
		int32_t L_150 = V_1;
		int32_t L_151 = V_0;
		if ((((int32_t)L_150) < ((int32_t)L_151)))
		{
			goto IL_01db;
		}
	}
	{
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_152 = __this->___fpre_0;
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_153 = V_8;
		FprEngine_t9390F16AF0B5D2CA6D04FD8ACAE061C63138A796* L_154 = __this->___fpre_0;
		NullCheck(L_154);
		FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE L_155 = L_154->___fpr_bnorm_max_4;
		NullCheck(L_152);
		bool L_156;
		L_156 = FprEngine_fpr_lt_mBD3CB70126D34865E4E33DF05BC74503638323E7(L_152, L_153, L_155, NULL);
		if (!L_156)
		{
			goto IL_000b;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_157 = ___hsrc9;
		if (L_157)
		{
			goto IL_0264;
		}
	}
	{
		int32_t L_158 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_159 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, L_158)));
		V_13 = L_159;
		V_2 = 0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_160 = V_13;
		V_14 = L_160;
		int32_t L_161 = V_2;
		int32_t L_162 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_161, L_162));
		goto IL_0275;
	}

IL_0264:
	{
		int32_t L_163 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_164 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_163);
		V_13 = L_164;
		int32_t L_165 = ___h10;
		V_2 = L_165;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_166 = ___hsrc9;
		V_14 = L_166;
		V_3 = 0;
	}

IL_0275:
	{
		FalconVrfy_t4EC770FA3A4E50BFAEECBF9DE90619A954893F20* L_167 = __this->___vrfy_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_168 = V_14;
		int32_t L_169 = V_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_170 = ___fsrc1;
		int32_t L_171 = ___f2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_172 = ___gsrc3;
		int32_t L_173 = ___g4;
		uint32_t L_174 = ___logn11;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_175 = V_13;
		int32_t L_176 = V_3;
		NullCheck(L_167);
		int32_t L_177;
		L_177 = FalconVrfy_compute_public_mCCE4D3E1D61DD4798F5C329E1660E12E16BD5D95(L_167, L_168, L_169, L_170, L_171, L_172, L_173, L_174, L_175, L_176, NULL);
		if (!L_177)
		{
			goto IL_000b;
		}
	}
	{
		uint32_t L_178 = ___logn11;
		if ((!(((uint32_t)L_178) <= ((uint32_t)2))))
		{
			goto IL_02a5;
		}
	}
	{
		int32_t L_179 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_180 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)28), L_179)), 3)));
		G_B22_0 = L_180;
		goto IL_02ae;
	}

IL_02a5:
	{
		int32_t L_181 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_182 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)28), L_181)));
		G_B22_0 = L_182;
	}

IL_02ae:
	{
		V_15 = G_B22_0;
		FalconCodec_t60433222A5CB248D052756173B2EAB6A0C3970CF* L_183 = __this->___codec_3;
		NullCheck(L_183);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_184 = L_183->___max_FG_bits_1;
		uint32_t L_185 = ___logn11;
		NullCheck(L_184);
		uint32_t L_186 = L_185;
		uint8_t L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		V_11 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_187, 1))&((int32_t)31))))), 1));
		uint32_t L_188 = ___logn11;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_189 = ___Fsrc5;
		int32_t L_190 = ___F6;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_191 = ___Gsrc7;
		int32_t L_192 = ___G8;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_193 = ___fsrc1;
		int32_t L_194 = ___f2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_195 = ___gsrc3;
		int32_t L_196 = ___g4;
		int32_t L_197 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_198 = V_15;
		int32_t L_199;
		L_199 = FalconKeygen_solve_NTRU_mF63B74B8BEDEAAB34A1AF5BE86977174CE8C8544(__this, L_188, L_189, L_190, L_191, L_192, L_193, L_194, L_195, L_196, L_197, L_198, 0, NULL);
		if (!L_199)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* FrodoKeyParameters_get_Parameters_mFFDAC4609368734FFED0371ADDFA2FDA3BC3028D_inline (FrodoKeyParameters_t257386616B345F14314B9AAA480102ABC792572C* __this, const RuntimeMethod* method) 
{
	{
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_0 = __this->___m_parameters_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* FrodoParameters_get_Engine_m867F36BC59F0B14A5E4BC6F01940071FFC3819B3_inline (FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* __this, const RuntimeMethod* method) 
{
	{
		FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* L_0 = __this->___engine_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FrodoEngine_get_SessionKeySize_mBF0BE50AFF293123ACC1C4277D5BD2D25784B18E_inline (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___len_ss_bytes_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FrodoEngine_get_CipherTextSize_m4D3D3654A1DE0B125B60CC27FAD8B215CA5A3301_inline (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___len_ct_bytes_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* FrodoKeyGenerationParameters_get_Parameters_m8B7D1AF5B86D7EC55F175EE838DDFB2A0FC76436_inline (FrodoKeyGenerationParameters_t6C3B3E0BAF240849FB4533656F739B6363EB6EF6* __this, const RuntimeMethod* method) 
{
	{
		FrodoParameters_tC8BB597117B1B08795C2AC1859AD12B5EB451133* L_0 = __this->___m_parameters_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* KeyGenerationParameters_get_Random_m1A6E9BB56C308C3A41AD11C2CFBBB475E25050D5_inline (KeyGenerationParameters_t0C9F19AF6E594DCE7C04692AA71CD73157392B29* __this, const RuntimeMethod* method) 
{
	{
		SecureRandom_t4ABA34116CDD576198D7090B39F5AE877FBB92A8* L_0 = __this->___random_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FrodoEngine_get_PrivateKeySize_m7BA719C63D22147425D88AC1FA8541E427375986_inline (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___len_sk_bytes_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FrodoEngine_get_PublicKeySize_m3FFB358D6C94BAEA0E814446583A04197F2C517D_inline (FrodoEngine_tA9C5EDA3F71698F13621B6803A1FECD298B4AC84* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___len_pk_bytes_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FalconFPR__ctor_m04B570CA07BB8A0A0F3884B9086C9040E28DAF22_inline (FalconFPR_t4C75E826B137E479106551BE01A9E9BFD19BE0AE* __this, double ___v0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___v0;
		__this->___v_0 = L_0;
		return;
	}
}
