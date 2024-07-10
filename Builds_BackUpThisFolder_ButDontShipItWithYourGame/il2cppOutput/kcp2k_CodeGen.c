#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean kcp2k.Common::ResolveHostname(System.String,System.Net.IPAddress[]&)
extern void Common_ResolveHostname_m44E2FECDFAC298446E182296AE48E6B15D30B631 (void);
// 0x00000002 System.Void kcp2k.Common::ConfigureSocketBuffers(System.Net.Sockets.Socket,System.Int32,System.Int32)
extern void Common_ConfigureSocketBuffers_m9C71EB8955ED543926E0AC1E8C2E00EB85858B39 (void);
// 0x00000003 System.Int32 kcp2k.Common::ConnectionHash(System.Net.EndPoint)
extern void Common_ConnectionHash_mF138FD4EDB21C285F81A3D120A9668A3BEC0CFED (void);
// 0x00000004 System.UInt32 kcp2k.Common::GenerateCookie()
extern void Common_GenerateCookie_mC4504C742A76BC0621515511BE85DB93CCCFAC3F (void);
// 0x00000005 System.Void kcp2k.Common::.cctor()
extern void Common__cctor_mE54E08A20EED4834159A02C302E6EBC7B167BA51 (void);
// 0x00000006 System.String kcp2k.Extensions::ToHexString(System.ArraySegment`1<System.Byte>)
extern void Extensions_ToHexString_mF48ACCDDFA38E7FB2220630B82FFADE2BCB2026D (void);
// 0x00000007 System.Boolean kcp2k.Extensions::SendToNonBlocking(System.Net.Sockets.Socket,System.ArraySegment`1<System.Byte>,System.Net.EndPoint)
extern void Extensions_SendToNonBlocking_m1DDAF4E9B56FECEC980D95CE3006CCFD6D899680 (void);
// 0x00000008 System.Boolean kcp2k.Extensions::SendNonBlocking(System.Net.Sockets.Socket,System.ArraySegment`1<System.Byte>)
extern void Extensions_SendNonBlocking_mC5E2AE9EB43A5A9C9AEFA0C822FB31C01AD725A1 (void);
// 0x00000009 System.Boolean kcp2k.Extensions::ReceiveFromNonBlocking(System.Net.Sockets.Socket,System.Byte[],System.ArraySegment`1<System.Byte>&,System.Net.EndPoint&)
extern void Extensions_ReceiveFromNonBlocking_m2D4EB7D9A7B5AACEF7E7A8D1131DDCC474CF4ED3 (void);
// 0x0000000A System.Boolean kcp2k.Extensions::ReceiveNonBlocking(System.Net.Sockets.Socket,System.Byte[],System.ArraySegment`1<System.Byte>&)
extern void Extensions_ReceiveNonBlocking_m325BECBA7DD6D5F2EFACD967BD57DD8AC5468DDA (void);
// 0x0000000B System.Net.EndPoint kcp2k.KcpClient::get_LocalEndPoint()
extern void KcpClient_get_LocalEndPoint_m67736A79A3D17B3DF1DC334F079B10072F1F6852 (void);
// 0x0000000C System.Void kcp2k.KcpClient::.ctor(System.Action,System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>,System.Action,System.Action`2<kcp2k.ErrorCode,System.String>,kcp2k.KcpConfig)
extern void KcpClient__ctor_m12B1209D53134CEC0B8F0A65A08C4666CF8CF6AC (void);
// 0x0000000D System.Void kcp2k.KcpClient::OnAuthenticated()
extern void KcpClient_OnAuthenticated_m93615971181412A221D619DF4A28409E576021A4 (void);
// 0x0000000E System.Void kcp2k.KcpClient::OnData(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
extern void KcpClient_OnData_m22B8AE967F37824C820B894DBFB9F6D2DF0EFA81 (void);
// 0x0000000F System.Void kcp2k.KcpClient::OnError(kcp2k.ErrorCode,System.String)
extern void KcpClient_OnError_m0BED84032B938B07BAA8DAF047B589B480999762 (void);
// 0x00000010 System.Void kcp2k.KcpClient::OnDisconnected()
extern void KcpClient_OnDisconnected_m407448EA5DABECCD3F2945262CCE9C18E36DCB03 (void);
// 0x00000011 System.Void kcp2k.KcpClient::Connect(System.String,System.UInt16)
extern void KcpClient_Connect_m86E8C582E4DC68C9DF2675F2D0DA1BCFE89EEDCE (void);
// 0x00000012 System.Boolean kcp2k.KcpClient::RawReceive(System.ArraySegment`1<System.Byte>&)
extern void KcpClient_RawReceive_mC8EC3E957100316C807011B4D68BD760AB433355 (void);
// 0x00000013 System.Void kcp2k.KcpClient::RawSend(System.ArraySegment`1<System.Byte>)
extern void KcpClient_RawSend_m69F4AF66F36917828DAE25467B39C73ED85A2A5C (void);
// 0x00000014 System.Void kcp2k.KcpClient::Send(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
extern void KcpClient_Send_m53625D46141304166BC26093AB18F0B13D29DD59 (void);
// 0x00000015 System.Void kcp2k.KcpClient::RawInput(System.ArraySegment`1<System.Byte>)
extern void KcpClient_RawInput_mFD51C8702C07CE41583D09441CE0A3976299DB48 (void);
// 0x00000016 System.Void kcp2k.KcpClient::TickIncoming()
extern void KcpClient_TickIncoming_m9DD9D3D53BCC9EE20713EF10980185EFEE0E5F00 (void);
// 0x00000017 System.Void kcp2k.KcpClient::TickOutgoing()
extern void KcpClient_TickOutgoing_mA528E9BEAF933EC18D66ACF5D6272AF0DEA12B72 (void);
// 0x00000018 System.Void kcp2k.KcpClient::Tick()
extern void KcpClient_Tick_m85F4438947E568140F23F511D576A6C5D81B9164 (void);
// 0x00000019 System.Void kcp2k.KcpConfig::.ctor(System.Boolean,System.Int32,System.Int32,System.Int32,System.Boolean,System.UInt32,System.Int32,System.Boolean,System.UInt32,System.UInt32,System.Int32,System.UInt32)
extern void KcpConfig__ctor_m0D6193035B26520F493B8D693666D85ED7664C1D (void);
// 0x0000001A System.Boolean kcp2k.KcpHeader::ParseReliable(System.Byte,kcp2k.KcpHeaderReliable&)
extern void KcpHeader_ParseReliable_mDFB8A9ED2B30B035654CE4DE73A10B59CF343992 (void);
// 0x0000001B System.Boolean kcp2k.KcpHeader::ParseUnreliable(System.Byte,kcp2k.KcpHeaderUnreliable&)
extern void KcpHeader_ParseUnreliable_m010D1EC2089DDF4C92FD3EDA1AAED5A40514F8F3 (void);
// 0x0000001C System.Int32 kcp2k.KcpPeer::get_SendQueueCount()
extern void KcpPeer_get_SendQueueCount_m7C518B0956A45185C3583812CF72883345EA1EE2 (void);
// 0x0000001D System.Int32 kcp2k.KcpPeer::get_ReceiveQueueCount()
extern void KcpPeer_get_ReceiveQueueCount_m995862277820955D557F6BAABCF1D788AC1E11DD (void);
// 0x0000001E System.Int32 kcp2k.KcpPeer::get_SendBufferCount()
extern void KcpPeer_get_SendBufferCount_mA0D7FDF8FB687FE8C4FC7B40D9DFA134B35E60CB (void);
// 0x0000001F System.Int32 kcp2k.KcpPeer::get_ReceiveBufferCount()
extern void KcpPeer_get_ReceiveBufferCount_m33B1FC53206C9E2472D15644275927F5E366424B (void);
// 0x00000020 System.Int32 kcp2k.KcpPeer::ReliableMaxMessageSize_Unconstrained(System.Int32,System.UInt32)
extern void KcpPeer_ReliableMaxMessageSize_Unconstrained_m1C6BC10D74C87F0A28EAE76B4C21D7F9C6FAF7C7 (void);
// 0x00000021 System.Int32 kcp2k.KcpPeer::ReliableMaxMessageSize(System.Int32,System.UInt32)
extern void KcpPeer_ReliableMaxMessageSize_mB9185203169A1791C1A9F02C2EE6F6671AC02A29 (void);
// 0x00000022 System.Int32 kcp2k.KcpPeer::UnreliableMaxMessageSize(System.Int32)
extern void KcpPeer_UnreliableMaxMessageSize_m3427818B036100BD8208201FC3462B8A8798F4A1 (void);
// 0x00000023 System.UInt32 kcp2k.KcpPeer::get_MaxSendRate()
extern void KcpPeer_get_MaxSendRate_mAEFDC4AB7FE17F07CAC4456580EEC1A7840DE82C (void);
// 0x00000024 System.UInt32 kcp2k.KcpPeer::get_MaxReceiveRate()
extern void KcpPeer_get_MaxReceiveRate_m2D53899CB8C77D6349DCC7467C541F5BC31D6CD1 (void);
// 0x00000025 System.Void kcp2k.KcpPeer::.ctor(kcp2k.KcpConfig,System.UInt32)
extern void KcpPeer__ctor_m08A6EEE2A57829093CFA5E67569D6F8AC54EA4D7 (void);
// 0x00000026 System.Void kcp2k.KcpPeer::Reset(kcp2k.KcpConfig)
extern void KcpPeer_Reset_m0B0784286420FC97CD76CF798E33573C089ABB12 (void);
// 0x00000027 System.Void kcp2k.KcpPeer::OnAuthenticated()
// 0x00000028 System.Void kcp2k.KcpPeer::OnData(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
// 0x00000029 System.Void kcp2k.KcpPeer::OnDisconnected()
// 0x0000002A System.Void kcp2k.KcpPeer::OnError(kcp2k.ErrorCode,System.String)
// 0x0000002B System.Void kcp2k.KcpPeer::RawSend(System.ArraySegment`1<System.Byte>)
// 0x0000002C System.Void kcp2k.KcpPeer::HandleTimeout(System.UInt32)
extern void KcpPeer_HandleTimeout_mA3B2D9498929CE743F3F6C0E5A24D65D265DE060 (void);
// 0x0000002D System.Void kcp2k.KcpPeer::HandleDeadLink()
extern void KcpPeer_HandleDeadLink_mF46B315C82FD4084902960E5726294164252962C (void);
// 0x0000002E System.Void kcp2k.KcpPeer::HandlePing(System.UInt32)
extern void KcpPeer_HandlePing_mCCB813224D46D23DF3C9E225394B7CA70AFD0DE4 (void);
// 0x0000002F System.Void kcp2k.KcpPeer::HandleChoked()
extern void KcpPeer_HandleChoked_m956AD5402FCB76296A32FC88AC6F097913426122 (void);
// 0x00000030 System.Boolean kcp2k.KcpPeer::ReceiveNextReliable(kcp2k.KcpHeaderReliable&,System.ArraySegment`1<System.Byte>&)
extern void KcpPeer_ReceiveNextReliable_mACAFA62957DD33773EF8080193A82878DF4A51ED (void);
// 0x00000031 System.Void kcp2k.KcpPeer::TickIncoming_Connected(System.UInt32)
extern void KcpPeer_TickIncoming_Connected_m8DBAC9DF85AA625E352B96B6906E3388E51208DF (void);
// 0x00000032 System.Void kcp2k.KcpPeer::TickIncoming_Authenticated(System.UInt32)
extern void KcpPeer_TickIncoming_Authenticated_m0478122E824E4F42783A8EC342231F393861D0B4 (void);
// 0x00000033 System.Void kcp2k.KcpPeer::TickIncoming()
extern void KcpPeer_TickIncoming_mEC0175AB3B0066908A3CEC9DC5E48F9EEA2C59EA (void);
// 0x00000034 System.Void kcp2k.KcpPeer::TickOutgoing()
extern void KcpPeer_TickOutgoing_m3C407A8170C529762876F4B61C1F76C8DA2C60C8 (void);
// 0x00000035 System.Void kcp2k.KcpPeer::OnRawInputReliable(System.ArraySegment`1<System.Byte>)
extern void KcpPeer_OnRawInputReliable_m85778676C72A8E578C91090D33585EC3DD0CDBA8 (void);
// 0x00000036 System.Void kcp2k.KcpPeer::OnRawInputUnreliable(System.ArraySegment`1<System.Byte>)
extern void KcpPeer_OnRawInputUnreliable_m6AECF62CEAD948B0159751FB9A2698FB6C571097 (void);
// 0x00000037 System.Void kcp2k.KcpPeer::RawSendReliable(System.Byte[],System.Int32)
extern void KcpPeer_RawSendReliable_mFC5B01D36203CE99948557D89AD2BE18602D01EA (void);
// 0x00000038 System.Void kcp2k.KcpPeer::SendReliable(kcp2k.KcpHeaderReliable,System.ArraySegment`1<System.Byte>)
extern void KcpPeer_SendReliable_m6730C39CAF38378F552E40970A54F54D75E416FD (void);
// 0x00000039 System.Void kcp2k.KcpPeer::SendUnreliable(kcp2k.KcpHeaderUnreliable,System.ArraySegment`1<System.Byte>)
extern void KcpPeer_SendUnreliable_mF6B11FFCDA011DD2FB4AD0230843FC3649E01A70 (void);
// 0x0000003A System.Void kcp2k.KcpPeer::SendHello()
extern void KcpPeer_SendHello_mE68562A32B087E4E4797CC3BFDAB812863535343 (void);
// 0x0000003B System.Void kcp2k.KcpPeer::SendData(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
extern void KcpPeer_SendData_mFCBE9E82AD7861A50BE59D189C84EEB8797D942D (void);
// 0x0000003C System.Void kcp2k.KcpPeer::SendPing()
extern void KcpPeer_SendPing_mED559C64074119ED93BC64B50042DBD9BED4342F (void);
// 0x0000003D System.Void kcp2k.KcpPeer::SendDisconnect()
extern void KcpPeer_SendDisconnect_m9603929B6566AE25E6CF31342F2F3C274BB6DB18 (void);
// 0x0000003E System.Void kcp2k.KcpPeer::Disconnect()
extern void KcpPeer_Disconnect_m97106C25606F731FF3342A7639EB04A9E8B8985D (void);
// 0x0000003F System.Net.EndPoint kcp2k.KcpServer::get_LocalEndPoint()
extern void KcpServer_get_LocalEndPoint_mA39437268A660CE36802F5FEA0749CD33BB07744 (void);
// 0x00000040 System.Void kcp2k.KcpServer::.ctor(System.Action`1<System.Int32>,System.Action`3<System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>,System.Action`1<System.Int32>,System.Action`3<System.Int32,kcp2k.ErrorCode,System.String>,kcp2k.KcpConfig)
extern void KcpServer__ctor_mD263EA072AD5B3AC5D617DA90BAAAC70AF633E28 (void);
// 0x00000041 System.Boolean kcp2k.KcpServer::IsActive()
extern void KcpServer_IsActive_mDC4C0A04877DE6D4139C49599850C8691B55114A (void);
// 0x00000042 System.Net.Sockets.Socket kcp2k.KcpServer::CreateServerSocket(System.Boolean,System.UInt16)
extern void KcpServer_CreateServerSocket_m7033248DE0413DE3F2F9BB386BE16BA484753B6C (void);
// 0x00000043 System.Void kcp2k.KcpServer::Start(System.UInt16)
extern void KcpServer_Start_m33877D875D891AB7FE5396827192692905235887 (void);
// 0x00000044 System.Void kcp2k.KcpServer::Send(System.Int32,System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
extern void KcpServer_Send_m08686F847CAE31C842035EE8028684E4FA2CD5F6 (void);
// 0x00000045 System.Void kcp2k.KcpServer::Disconnect(System.Int32)
extern void KcpServer_Disconnect_mB885B1BF26149DF64FC0719A462AA9F96B2B3CF5 (void);
// 0x00000046 System.Net.IPEndPoint kcp2k.KcpServer::GetClientEndPoint(System.Int32)
extern void KcpServer_GetClientEndPoint_m088997828E97B771B361923BA1544B4B22A29421 (void);
// 0x00000047 System.Boolean kcp2k.KcpServer::RawReceiveFrom(System.ArraySegment`1<System.Byte>&,System.Int32&)
extern void KcpServer_RawReceiveFrom_m67A3AED1EB1200964EB6DD81690902B6C20F513B (void);
// 0x00000048 System.Void kcp2k.KcpServer::RawSend(System.Int32,System.ArraySegment`1<System.Byte>)
extern void KcpServer_RawSend_m8F1A39F3E63CFFF364A05E3CF58CD2B2D0BE83C7 (void);
// 0x00000049 kcp2k.KcpServerConnection kcp2k.KcpServer::CreateConnection(System.Int32)
extern void KcpServer_CreateConnection_m14EA532D30FC40C7A1DA33A832CB5334DC651FBD (void);
// 0x0000004A System.Void kcp2k.KcpServer::ProcessMessage(System.ArraySegment`1<System.Byte>,System.Int32)
extern void KcpServer_ProcessMessage_m2A66024472288AA3BEEA21CC61D036EE6E48B3ED (void);
// 0x0000004B System.Void kcp2k.KcpServer::TickIncoming()
extern void KcpServer_TickIncoming_m371A4AD9CFBD767ECF98AF85E8F75FF64AB4AC6D (void);
// 0x0000004C System.Void kcp2k.KcpServer::TickOutgoing()
extern void KcpServer_TickOutgoing_m8EB349EB842F67A76266279E553862739ED226B0 (void);
// 0x0000004D System.Void kcp2k.KcpServer::Tick()
extern void KcpServer_Tick_mAA3A25C5E0320CFCFDBD712CCD38F1D536C81D2E (void);
// 0x0000004E System.Void kcp2k.KcpServer::Stop()
extern void KcpServer_Stop_mCC412E46EB36C12712CC7BEF1EBCFA856F3F21B7 (void);
// 0x0000004F System.Void kcp2k.KcpServer/<>c__DisplayClass20_0::.ctor()
extern void U3CU3Ec__DisplayClass20_0__ctor_mCEC0471513DD375BA0B765813DF68D2E63D4167E (void);
// 0x00000050 System.Void kcp2k.KcpServer/<>c__DisplayClass20_0::<CreateConnection>b__0(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
extern void U3CU3Ec__DisplayClass20_0_U3CCreateConnectionU3Eb__0_mDD79B76C0F20134B8295EF4690D6F9DA6B0CDCE5 (void);
// 0x00000051 System.Void kcp2k.KcpServer/<>c__DisplayClass20_0::<CreateConnection>b__1(kcp2k.ErrorCode,System.String)
extern void U3CU3Ec__DisplayClass20_0_U3CCreateConnectionU3Eb__1_m414470841CEA01D1452D4EAD46E6BCE989DEF314 (void);
// 0x00000052 System.Void kcp2k.KcpServer/<>c__DisplayClass20_0::<CreateConnection>b__2(System.ArraySegment`1<System.Byte>)
extern void U3CU3Ec__DisplayClass20_0_U3CCreateConnectionU3Eb__2_mFBF0094F5337A15A71BBC52C730AF23910404FD9 (void);
// 0x00000053 System.Void kcp2k.KcpServer/<>c__DisplayClass20_0::<CreateConnection>g__OnConnectedCallback|3(kcp2k.KcpServerConnection)
extern void U3CU3Ec__DisplayClass20_0_U3CCreateConnectionU3Eg__OnConnectedCallbackU7C3_mAFB9BE9712E4A237EB723522571EAFA04721EDB3 (void);
// 0x00000054 System.Void kcp2k.KcpServer/<>c__DisplayClass20_0::<CreateConnection>g__OnDisconnectedCallback|4()
extern void U3CU3Ec__DisplayClass20_0_U3CCreateConnectionU3Eg__OnDisconnectedCallbackU7C4_mE53E2E68FEA5B952B5A1B93146EA935AC15FE844 (void);
// 0x00000055 System.Void kcp2k.KcpServerConnection::.ctor(System.Action`1<kcp2k.KcpServerConnection>,System.Action`2<System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel>,System.Action,System.Action`2<kcp2k.ErrorCode,System.String>,System.Action`1<System.ArraySegment`1<System.Byte>>,kcp2k.KcpConfig,System.UInt32,System.Net.EndPoint)
extern void KcpServerConnection__ctor_m7A2C9E9EEAD3BDD03EB4088AED93FC0F539C3DA8 (void);
// 0x00000056 System.Void kcp2k.KcpServerConnection::OnAuthenticated()
extern void KcpServerConnection_OnAuthenticated_mD5F019A9EA4DA8AFB9CC90D7D10C989100798027 (void);
// 0x00000057 System.Void kcp2k.KcpServerConnection::OnData(System.ArraySegment`1<System.Byte>,kcp2k.KcpChannel)
extern void KcpServerConnection_OnData_mA9064A313D16FE08A6CADBCA27D01CE6A2C9B278 (void);
// 0x00000058 System.Void kcp2k.KcpServerConnection::OnDisconnected()
extern void KcpServerConnection_OnDisconnected_m2F65B9AF50D0E9C02226F6F03B4961389927DC01 (void);
// 0x00000059 System.Void kcp2k.KcpServerConnection::OnError(kcp2k.ErrorCode,System.String)
extern void KcpServerConnection_OnError_m7734480BA547DA970E0DDF678AC839E237BA5911 (void);
// 0x0000005A System.Void kcp2k.KcpServerConnection::RawSend(System.ArraySegment`1<System.Byte>)
extern void KcpServerConnection_RawSend_m0F2A91BE4D19BD7D5B656844623D3FB0BDACF681 (void);
// 0x0000005B System.Void kcp2k.KcpServerConnection::RawInput(System.ArraySegment`1<System.Byte>)
extern void KcpServerConnection_RawInput_mFDFE0D5C2AA27484453C2F10672312BA59BB56C3 (void);
// 0x0000005C System.Void kcp2k.Log::.cctor()
extern void Log__cctor_mFEBF48BDC7CFE3DDC9AAFEE5EFEC9A7AB55B474A (void);
// 0x0000005D System.Void kcp2k.Kcp::.ctor(System.UInt32,System.Action`2<System.Byte[],System.Int32>)
extern void Kcp__ctor_m568A43192CCADCE94A6CCF9B81A51B2367055429 (void);
// 0x0000005E kcp2k.Segment kcp2k.Kcp::SegmentNew()
extern void Kcp_SegmentNew_mF3FD2BBE138BD14E1B2555A005FD7F86A517A1B9 (void);
// 0x0000005F System.Void kcp2k.Kcp::SegmentDelete(kcp2k.Segment)
extern void Kcp_SegmentDelete_mCB1F2FA2C1B2FACCC10B36BEDDA29C02084A0103 (void);
// 0x00000060 System.Int32 kcp2k.Kcp::get_WaitSnd()
extern void Kcp_get_WaitSnd_mBC4535F41C12D81E54DB0E20E91F4C594A83A604 (void);
// 0x00000061 System.UInt32 kcp2k.Kcp::WndUnused()
extern void Kcp_WndUnused_m87FA8FF8C865DFA8B83E8CA7D62F2B7E9DD09436 (void);
// 0x00000062 System.Int32 kcp2k.Kcp::Receive(System.Byte[],System.Int32)
extern void Kcp_Receive_m8D3EF84FE57E371AB9DE0E37DAB8392F932193A8 (void);
// 0x00000063 System.Int32 kcp2k.Kcp::PeekSize()
extern void Kcp_PeekSize_mE1734DFFE9A602877F5EAD4867FA5B1E06DD6C2F (void);
// 0x00000064 System.Int32 kcp2k.Kcp::Send(System.Byte[],System.Int32,System.Int32)
extern void Kcp_Send_m30C8ED068AF72FB24559F7215605272FC0F17F91 (void);
// 0x00000065 System.Void kcp2k.Kcp::UpdateAck(System.Int32)
extern void Kcp_UpdateAck_mA215B471A9D53708E2646D9EEAF586830BB06983 (void);
// 0x00000066 System.Void kcp2k.Kcp::ShrinkBuf()
extern void Kcp_ShrinkBuf_m766ACA36A0C3211ED794773862E83F08A782B4C5 (void);
// 0x00000067 System.Void kcp2k.Kcp::ParseAck(System.UInt32)
extern void Kcp_ParseAck_mE5B5B028D764234F34E4D3EA374D1C88EF3DEDF6 (void);
// 0x00000068 System.Void kcp2k.Kcp::ParseUna(System.UInt32)
extern void Kcp_ParseUna_m6DDB2F67144EC162E12574443352D0B312FF8CF9 (void);
// 0x00000069 System.Void kcp2k.Kcp::ParseFastack(System.UInt32,System.UInt32)
extern void Kcp_ParseFastack_m21F4DA79993C9BEEB4BB90EE8F74DDB68610E825 (void);
// 0x0000006A System.Void kcp2k.Kcp::AckPush(System.UInt32,System.UInt32)
extern void Kcp_AckPush_mEB507458930C73F7D2E6117977B95171D417007D (void);
// 0x0000006B System.Void kcp2k.Kcp::ParseData(kcp2k.Segment)
extern void Kcp_ParseData_mC0D7030C787F94C2A843632B6D12BD7E1F5EC4B1 (void);
// 0x0000006C System.Void kcp2k.Kcp::InsertSegmentInReceiveBuffer(kcp2k.Segment)
extern void Kcp_InsertSegmentInReceiveBuffer_mCD2D5BA7722F4DE85E46BAED5E3F37986BB23552 (void);
// 0x0000006D System.Void kcp2k.Kcp::MoveReceiveBufferReadySegmentsToQueue()
extern void Kcp_MoveReceiveBufferReadySegmentsToQueue_m179C51C325A853BFD81D6C5F02B9CBBA0734E8D9 (void);
// 0x0000006E System.Int32 kcp2k.Kcp::Input(System.Byte[],System.Int32,System.Int32)
extern void Kcp_Input_mEFAF813E37D2636DA3E462D6360496838975E01F (void);
// 0x0000006F System.Void kcp2k.Kcp::MakeSpace(System.Int32&,System.Int32)
extern void Kcp_MakeSpace_m8058AFC31B741C9D44645237254443F1C20F3CFF (void);
// 0x00000070 System.Void kcp2k.Kcp::FlushBuffer(System.Int32)
extern void Kcp_FlushBuffer_m070CE6C806271F32BF958EC20A14F8A3FB4D25E3 (void);
// 0x00000071 System.Void kcp2k.Kcp::Flush()
extern void Kcp_Flush_m0B35BF7CBCC1A50634949D284914BC2D85D2E113 (void);
// 0x00000072 System.Void kcp2k.Kcp::Update(System.UInt32)
extern void Kcp_Update_m9AF343243B14313E850202B63D1D70EBE7DB1DEE (void);
// 0x00000073 System.UInt32 kcp2k.Kcp::Check(System.UInt32)
extern void Kcp_Check_mDAB241CE3C353BE694ED3C2211576E84A3299430 (void);
// 0x00000074 System.Void kcp2k.Kcp::SetMtu(System.UInt32)
extern void Kcp_SetMtu_m1F96341769595B7183D9F26A85B5C782954DC31D (void);
// 0x00000075 System.Void kcp2k.Kcp::SetInterval(System.UInt32)
extern void Kcp_SetInterval_m80E581B5B03EA92B1DAD902DCFE155E36B8D0C03 (void);
// 0x00000076 System.Void kcp2k.Kcp::SetNoDelay(System.UInt32,System.UInt32,System.Int32,System.Boolean)
extern void Kcp_SetNoDelay_mDA0E2B3AFFBF6E1CB9D73C8DD3D0EA1B1F142F21 (void);
// 0x00000077 System.Void kcp2k.Kcp::SetWindowSize(System.UInt32,System.UInt32)
extern void Kcp_SetWindowSize_mE2AA3053D0094649B894202B8DA99042A394A25C (void);
// 0x00000078 System.Void kcp2k.Kcp/<>c::.cctor()
extern void U3CU3Ec__cctor_m7D93CDE5B7739A77104194A2DAEBCF6AA06378C4 (void);
// 0x00000079 System.Void kcp2k.Kcp/<>c::.ctor()
extern void U3CU3Ec__ctor_m45E38E76DF6E9A1313EDD1AD0AD694C9A572FDE3 (void);
// 0x0000007A kcp2k.Segment kcp2k.Kcp/<>c::<.ctor>b__61_0()
extern void U3CU3Ec_U3C_ctorU3Eb__61_0_m09E85B0D19639CB91A836B03BB9459A1CF321D89 (void);
// 0x0000007B System.Void kcp2k.Kcp/<>c::<.ctor>b__61_1(kcp2k.Segment)
extern void U3CU3Ec_U3C_ctorU3Eb__61_1_mF4CEE52C2BF5CBF8DD69D8F21835ABDF58C8000B (void);
// 0x0000007C System.Void kcp2k.Pool`1::.ctor(System.Func`1<T>,System.Action`1<T>,System.Int32)
// 0x0000007D T kcp2k.Pool`1::Take()
// 0x0000007E System.Void kcp2k.Pool`1::Return(T)
// 0x0000007F System.Void kcp2k.Pool`1::Clear()
// 0x00000080 System.Int32 kcp2k.Pool`1::get_Count()
// 0x00000081 System.Int32 kcp2k.Segment::Encode(System.Byte[],System.Int32)
extern void Segment_Encode_m40DF0D133D6693E89AB47626D4B5E3D9DCF0E832 (void);
// 0x00000082 System.Void kcp2k.Segment::Reset()
extern void Segment_Reset_m13490B486B956BCD4988BA33995ACF18A08644D1 (void);
// 0x00000083 System.Void kcp2k.Segment::.ctor()
extern void Segment__ctor_m7F04D67C62AC543C4583BB4DFA04C75F22478C0C (void);
// 0x00000084 System.Int32 kcp2k.Utils::Clamp(System.Int32,System.Int32,System.Int32)
extern void Utils_Clamp_m5A1BF3943ADC3E704426018169C2533A68B674C7 (void);
// 0x00000085 System.Int32 kcp2k.Utils::Encode8u(System.Byte[],System.Int32,System.Byte)
extern void Utils_Encode8u_m4F2FE2700547FB32330F2119CC9E691D7A1A0D36 (void);
// 0x00000086 System.Int32 kcp2k.Utils::Decode8u(System.Byte[],System.Int32,System.Byte&)
extern void Utils_Decode8u_m8E0F434FDA3F31B1C876D75EE3FD982AAD832EAA (void);
// 0x00000087 System.Int32 kcp2k.Utils::Encode16U(System.Byte[],System.Int32,System.UInt16)
extern void Utils_Encode16U_m95BB6B64CEF9D5F9227688B3A2486ADF82886BE7 (void);
// 0x00000088 System.Int32 kcp2k.Utils::Decode16U(System.Byte[],System.Int32,System.UInt16&)
extern void Utils_Decode16U_m02F7396550F7F841F585BDE14968962A463E232C (void);
// 0x00000089 System.Int32 kcp2k.Utils::Encode32U(System.Byte[],System.Int32,System.UInt32)
extern void Utils_Encode32U_m0A2B873A88473D6992E4E3E69776137839DDB356 (void);
// 0x0000008A System.Int32 kcp2k.Utils::Decode32U(System.Byte[],System.Int32,System.UInt32&)
extern void Utils_Decode32U_m2199D0CB72CD6D3A40729D78BF3B39CA1625BA00 (void);
// 0x0000008B System.Int32 kcp2k.Utils::TimeDiff(System.UInt32,System.UInt32)
extern void Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3 (void);
static Il2CppMethodPointer s_methodPointers[139] = 
{
	Common_ResolveHostname_m44E2FECDFAC298446E182296AE48E6B15D30B631,
	Common_ConfigureSocketBuffers_m9C71EB8955ED543926E0AC1E8C2E00EB85858B39,
	Common_ConnectionHash_mF138FD4EDB21C285F81A3D120A9668A3BEC0CFED,
	Common_GenerateCookie_mC4504C742A76BC0621515511BE85DB93CCCFAC3F,
	Common__cctor_mE54E08A20EED4834159A02C302E6EBC7B167BA51,
	Extensions_ToHexString_mF48ACCDDFA38E7FB2220630B82FFADE2BCB2026D,
	Extensions_SendToNonBlocking_m1DDAF4E9B56FECEC980D95CE3006CCFD6D899680,
	Extensions_SendNonBlocking_mC5E2AE9EB43A5A9C9AEFA0C822FB31C01AD725A1,
	Extensions_ReceiveFromNonBlocking_m2D4EB7D9A7B5AACEF7E7A8D1131DDCC474CF4ED3,
	Extensions_ReceiveNonBlocking_m325BECBA7DD6D5F2EFACD967BD57DD8AC5468DDA,
	KcpClient_get_LocalEndPoint_m67736A79A3D17B3DF1DC334F079B10072F1F6852,
	KcpClient__ctor_m12B1209D53134CEC0B8F0A65A08C4666CF8CF6AC,
	KcpClient_OnAuthenticated_m93615971181412A221D619DF4A28409E576021A4,
	KcpClient_OnData_m22B8AE967F37824C820B894DBFB9F6D2DF0EFA81,
	KcpClient_OnError_m0BED84032B938B07BAA8DAF047B589B480999762,
	KcpClient_OnDisconnected_m407448EA5DABECCD3F2945262CCE9C18E36DCB03,
	KcpClient_Connect_m86E8C582E4DC68C9DF2675F2D0DA1BCFE89EEDCE,
	KcpClient_RawReceive_mC8EC3E957100316C807011B4D68BD760AB433355,
	KcpClient_RawSend_m69F4AF66F36917828DAE25467B39C73ED85A2A5C,
	KcpClient_Send_m53625D46141304166BC26093AB18F0B13D29DD59,
	KcpClient_RawInput_mFD51C8702C07CE41583D09441CE0A3976299DB48,
	KcpClient_TickIncoming_m9DD9D3D53BCC9EE20713EF10980185EFEE0E5F00,
	KcpClient_TickOutgoing_mA528E9BEAF933EC18D66ACF5D6272AF0DEA12B72,
	KcpClient_Tick_m85F4438947E568140F23F511D576A6C5D81B9164,
	KcpConfig__ctor_m0D6193035B26520F493B8D693666D85ED7664C1D,
	KcpHeader_ParseReliable_mDFB8A9ED2B30B035654CE4DE73A10B59CF343992,
	KcpHeader_ParseUnreliable_m010D1EC2089DDF4C92FD3EDA1AAED5A40514F8F3,
	KcpPeer_get_SendQueueCount_m7C518B0956A45185C3583812CF72883345EA1EE2,
	KcpPeer_get_ReceiveQueueCount_m995862277820955D557F6BAABCF1D788AC1E11DD,
	KcpPeer_get_SendBufferCount_mA0D7FDF8FB687FE8C4FC7B40D9DFA134B35E60CB,
	KcpPeer_get_ReceiveBufferCount_m33B1FC53206C9E2472D15644275927F5E366424B,
	KcpPeer_ReliableMaxMessageSize_Unconstrained_m1C6BC10D74C87F0A28EAE76B4C21D7F9C6FAF7C7,
	KcpPeer_ReliableMaxMessageSize_mB9185203169A1791C1A9F02C2EE6F6671AC02A29,
	KcpPeer_UnreliableMaxMessageSize_m3427818B036100BD8208201FC3462B8A8798F4A1,
	KcpPeer_get_MaxSendRate_mAEFDC4AB7FE17F07CAC4456580EEC1A7840DE82C,
	KcpPeer_get_MaxReceiveRate_m2D53899CB8C77D6349DCC7467C541F5BC31D6CD1,
	KcpPeer__ctor_m08A6EEE2A57829093CFA5E67569D6F8AC54EA4D7,
	KcpPeer_Reset_m0B0784286420FC97CD76CF798E33573C089ABB12,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	KcpPeer_HandleTimeout_mA3B2D9498929CE743F3F6C0E5A24D65D265DE060,
	KcpPeer_HandleDeadLink_mF46B315C82FD4084902960E5726294164252962C,
	KcpPeer_HandlePing_mCCB813224D46D23DF3C9E225394B7CA70AFD0DE4,
	KcpPeer_HandleChoked_m956AD5402FCB76296A32FC88AC6F097913426122,
	KcpPeer_ReceiveNextReliable_mACAFA62957DD33773EF8080193A82878DF4A51ED,
	KcpPeer_TickIncoming_Connected_m8DBAC9DF85AA625E352B96B6906E3388E51208DF,
	KcpPeer_TickIncoming_Authenticated_m0478122E824E4F42783A8EC342231F393861D0B4,
	KcpPeer_TickIncoming_mEC0175AB3B0066908A3CEC9DC5E48F9EEA2C59EA,
	KcpPeer_TickOutgoing_m3C407A8170C529762876F4B61C1F76C8DA2C60C8,
	KcpPeer_OnRawInputReliable_m85778676C72A8E578C91090D33585EC3DD0CDBA8,
	KcpPeer_OnRawInputUnreliable_m6AECF62CEAD948B0159751FB9A2698FB6C571097,
	KcpPeer_RawSendReliable_mFC5B01D36203CE99948557D89AD2BE18602D01EA,
	KcpPeer_SendReliable_m6730C39CAF38378F552E40970A54F54D75E416FD,
	KcpPeer_SendUnreliable_mF6B11FFCDA011DD2FB4AD0230843FC3649E01A70,
	KcpPeer_SendHello_mE68562A32B087E4E4797CC3BFDAB812863535343,
	KcpPeer_SendData_mFCBE9E82AD7861A50BE59D189C84EEB8797D942D,
	KcpPeer_SendPing_mED559C64074119ED93BC64B50042DBD9BED4342F,
	KcpPeer_SendDisconnect_m9603929B6566AE25E6CF31342F2F3C274BB6DB18,
	KcpPeer_Disconnect_m97106C25606F731FF3342A7639EB04A9E8B8985D,
	KcpServer_get_LocalEndPoint_mA39437268A660CE36802F5FEA0749CD33BB07744,
	KcpServer__ctor_mD263EA072AD5B3AC5D617DA90BAAAC70AF633E28,
	KcpServer_IsActive_mDC4C0A04877DE6D4139C49599850C8691B55114A,
	KcpServer_CreateServerSocket_m7033248DE0413DE3F2F9BB386BE16BA484753B6C,
	KcpServer_Start_m33877D875D891AB7FE5396827192692905235887,
	KcpServer_Send_m08686F847CAE31C842035EE8028684E4FA2CD5F6,
	KcpServer_Disconnect_mB885B1BF26149DF64FC0719A462AA9F96B2B3CF5,
	KcpServer_GetClientEndPoint_m088997828E97B771B361923BA1544B4B22A29421,
	KcpServer_RawReceiveFrom_m67A3AED1EB1200964EB6DD81690902B6C20F513B,
	KcpServer_RawSend_m8F1A39F3E63CFFF364A05E3CF58CD2B2D0BE83C7,
	KcpServer_CreateConnection_m14EA532D30FC40C7A1DA33A832CB5334DC651FBD,
	KcpServer_ProcessMessage_m2A66024472288AA3BEEA21CC61D036EE6E48B3ED,
	KcpServer_TickIncoming_m371A4AD9CFBD767ECF98AF85E8F75FF64AB4AC6D,
	KcpServer_TickOutgoing_m8EB349EB842F67A76266279E553862739ED226B0,
	KcpServer_Tick_mAA3A25C5E0320CFCFDBD712CCD38F1D536C81D2E,
	KcpServer_Stop_mCC412E46EB36C12712CC7BEF1EBCFA856F3F21B7,
	U3CU3Ec__DisplayClass20_0__ctor_mCEC0471513DD375BA0B765813DF68D2E63D4167E,
	U3CU3Ec__DisplayClass20_0_U3CCreateConnectionU3Eb__0_mDD79B76C0F20134B8295EF4690D6F9DA6B0CDCE5,
	U3CU3Ec__DisplayClass20_0_U3CCreateConnectionU3Eb__1_m414470841CEA01D1452D4EAD46E6BCE989DEF314,
	U3CU3Ec__DisplayClass20_0_U3CCreateConnectionU3Eb__2_mFBF0094F5337A15A71BBC52C730AF23910404FD9,
	U3CU3Ec__DisplayClass20_0_U3CCreateConnectionU3Eg__OnConnectedCallbackU7C3_mAFB9BE9712E4A237EB723522571EAFA04721EDB3,
	U3CU3Ec__DisplayClass20_0_U3CCreateConnectionU3Eg__OnDisconnectedCallbackU7C4_mE53E2E68FEA5B952B5A1B93146EA935AC15FE844,
	KcpServerConnection__ctor_m7A2C9E9EEAD3BDD03EB4088AED93FC0F539C3DA8,
	KcpServerConnection_OnAuthenticated_mD5F019A9EA4DA8AFB9CC90D7D10C989100798027,
	KcpServerConnection_OnData_mA9064A313D16FE08A6CADBCA27D01CE6A2C9B278,
	KcpServerConnection_OnDisconnected_m2F65B9AF50D0E9C02226F6F03B4961389927DC01,
	KcpServerConnection_OnError_m7734480BA547DA970E0DDF678AC839E237BA5911,
	KcpServerConnection_RawSend_m0F2A91BE4D19BD7D5B656844623D3FB0BDACF681,
	KcpServerConnection_RawInput_mFDFE0D5C2AA27484453C2F10672312BA59BB56C3,
	Log__cctor_mFEBF48BDC7CFE3DDC9AAFEE5EFEC9A7AB55B474A,
	Kcp__ctor_m568A43192CCADCE94A6CCF9B81A51B2367055429,
	Kcp_SegmentNew_mF3FD2BBE138BD14E1B2555A005FD7F86A517A1B9,
	Kcp_SegmentDelete_mCB1F2FA2C1B2FACCC10B36BEDDA29C02084A0103,
	Kcp_get_WaitSnd_mBC4535F41C12D81E54DB0E20E91F4C594A83A604,
	Kcp_WndUnused_m87FA8FF8C865DFA8B83E8CA7D62F2B7E9DD09436,
	Kcp_Receive_m8D3EF84FE57E371AB9DE0E37DAB8392F932193A8,
	Kcp_PeekSize_mE1734DFFE9A602877F5EAD4867FA5B1E06DD6C2F,
	Kcp_Send_m30C8ED068AF72FB24559F7215605272FC0F17F91,
	Kcp_UpdateAck_mA215B471A9D53708E2646D9EEAF586830BB06983,
	Kcp_ShrinkBuf_m766ACA36A0C3211ED794773862E83F08A782B4C5,
	Kcp_ParseAck_mE5B5B028D764234F34E4D3EA374D1C88EF3DEDF6,
	Kcp_ParseUna_m6DDB2F67144EC162E12574443352D0B312FF8CF9,
	Kcp_ParseFastack_m21F4DA79993C9BEEB4BB90EE8F74DDB68610E825,
	Kcp_AckPush_mEB507458930C73F7D2E6117977B95171D417007D,
	Kcp_ParseData_mC0D7030C787F94C2A843632B6D12BD7E1F5EC4B1,
	Kcp_InsertSegmentInReceiveBuffer_mCD2D5BA7722F4DE85E46BAED5E3F37986BB23552,
	Kcp_MoveReceiveBufferReadySegmentsToQueue_m179C51C325A853BFD81D6C5F02B9CBBA0734E8D9,
	Kcp_Input_mEFAF813E37D2636DA3E462D6360496838975E01F,
	Kcp_MakeSpace_m8058AFC31B741C9D44645237254443F1C20F3CFF,
	Kcp_FlushBuffer_m070CE6C806271F32BF958EC20A14F8A3FB4D25E3,
	Kcp_Flush_m0B35BF7CBCC1A50634949D284914BC2D85D2E113,
	Kcp_Update_m9AF343243B14313E850202B63D1D70EBE7DB1DEE,
	Kcp_Check_mDAB241CE3C353BE694ED3C2211576E84A3299430,
	Kcp_SetMtu_m1F96341769595B7183D9F26A85B5C782954DC31D,
	Kcp_SetInterval_m80E581B5B03EA92B1DAD902DCFE155E36B8D0C03,
	Kcp_SetNoDelay_mDA0E2B3AFFBF6E1CB9D73C8DD3D0EA1B1F142F21,
	Kcp_SetWindowSize_mE2AA3053D0094649B894202B8DA99042A394A25C,
	U3CU3Ec__cctor_m7D93CDE5B7739A77104194A2DAEBCF6AA06378C4,
	U3CU3Ec__ctor_m45E38E76DF6E9A1313EDD1AD0AD694C9A572FDE3,
	U3CU3Ec_U3C_ctorU3Eb__61_0_m09E85B0D19639CB91A836B03BB9459A1CF321D89,
	U3CU3Ec_U3C_ctorU3Eb__61_1_mF4CEE52C2BF5CBF8DD69D8F21835ABDF58C8000B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Segment_Encode_m40DF0D133D6693E89AB47626D4B5E3D9DCF0E832,
	Segment_Reset_m13490B486B956BCD4988BA33995ACF18A08644D1,
	Segment__ctor_m7F04D67C62AC543C4583BB4DFA04C75F22478C0C,
	Utils_Clamp_m5A1BF3943ADC3E704426018169C2533A68B674C7,
	Utils_Encode8u_m4F2FE2700547FB32330F2119CC9E691D7A1A0D36,
	Utils_Decode8u_m8E0F434FDA3F31B1C876D75EE3FD982AAD832EAA,
	Utils_Encode16U_m95BB6B64CEF9D5F9227688B3A2486ADF82886BE7,
	Utils_Decode16U_m02F7396550F7F841F585BDE14968962A463E232C,
	Utils_Encode32U_m0A2B873A88473D6992E4E3E69776137839DDB356,
	Utils_Decode32U_m2199D0CB72CD6D3A40729D78BF3B39CA1625BA00,
	Utils_TimeDiff_m54932F9079BAE82C42153D3E035D161032486CE3,
};
static const int32_t s_InvokerIndices[139] = 
{
	11702,
	11304,
	13555,
	14966,
	14973,
	13633,
	10684,
	11700,
	9969,
	10704,
	8494,
	884,
	8665,
	3276,
	3331,
	8665,
	4052,
	4967,
	6527,
	3276,
	6527,
	8665,
	8665,
	8665,
	38,
	11648,
	11648,
	8448,
	8448,
	8448,
	8448,
	11893,
	11893,
	13551,
	8648,
	8648,
	4053,
	6990,
	0,
	0,
	0,
	0,
	0,
	7140,
	8665,
	7140,
	8665,
	2528,
	7140,
	7140,
	8665,
	8665,
	6527,
	6527,
	4010,
	3325,
	3325,
	8665,
	3276,
	8665,
	8665,
	8665,
	8494,
	884,
	8376,
	11996,
	7139,
	2083,
	6945,
	6240,
	2528,
	3374,
	6240,
	3278,
	8665,
	8665,
	8665,
	8665,
	8665,
	3276,
	3331,
	6527,
	6990,
	8665,
	214,
	8665,
	3276,
	8665,
	3331,
	6527,
	6527,
	14973,
	4128,
	8494,
	6990,
	8448,
	8648,
	2923,
	8448,
	1878,
	6945,
	8665,
	7140,
	7140,
	4130,
	4130,
	6990,
	6990,
	8665,
	1878,
	3312,
	6945,
	8665,
	7140,
	6486,
	7140,
	7140,
	1661,
	4130,
	14973,
	8665,
	8494,
	6990,
	0,
	0,
	0,
	0,
	0,
	2923,
	8665,
	8665,
	10792,
	10811,
	10810,
	10816,
	10810,
	10817,
	10810,
	11925,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x02000014, { 0, 10 } },
};
extern const uint32_t g_rgctx_Stack_1_t514C31E19097D5570C81C5F04ABAB392571A4674;
extern const uint32_t g_rgctx_Stack_1__ctor_mCE690AB2C61D0E456235385B242AED0AC4D20665;
extern const uint32_t g_rgctx_Func_1_tD043265A309DB6956AEAA5A3D387A4986D4C2416;
extern const uint32_t g_rgctx_Func_1_Invoke_m2FF321E533A871F6679B982F1CFA606D6D15CF24;
extern const uint32_t g_rgctx_Stack_1_Push_m4BCBDFEED52A5A39C72ACA712B0D91C8429FE8BE;
extern const uint32_t g_rgctx_Stack_1_get_Count_m11DB767F662F0EDF3EB694A3F5D94F1E8B435800;
extern const uint32_t g_rgctx_Stack_1_Pop_mB36356F41EE1F697216C707A853AFBA4C85FCC79;
extern const uint32_t g_rgctx_Action_1_t755C9E0F0A32AD4551459B4A18B28F21B30F016D;
extern const uint32_t g_rgctx_Action_1_Invoke_mCD2FC01C0B59250FD0D1108E1E5394C672DC991B;
extern const uint32_t g_rgctx_Stack_1_Clear_m1A7FBC1E7606B9A61C4E3CB3E6EAA6F958656756;
static const Il2CppRGCTXDefinition s_rgctxValues[10] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Stack_1_t514C31E19097D5570C81C5F04ABAB392571A4674 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1__ctor_mCE690AB2C61D0E456235385B242AED0AC4D20665 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_tD043265A309DB6956AEAA5A3D387A4986D4C2416 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1_Invoke_m2FF321E533A871F6679B982F1CFA606D6D15CF24 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1_Push_m4BCBDFEED52A5A39C72ACA712B0D91C8429FE8BE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1_get_Count_m11DB767F662F0EDF3EB694A3F5D94F1E8B435800 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1_Pop_mB36356F41EE1F697216C707A853AFBA4C85FCC79 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t755C9E0F0A32AD4551459B4A18B28F21B30F016D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1_Invoke_mCD2FC01C0B59250FD0D1108E1E5394C672DC991B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1_Clear_m1A7FBC1E7606B9A61C4E3CB3E6EAA6F958656756 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_kcp2k_CodeGenModule;
const Il2CppCodeGenModule g_kcp2k_CodeGenModule = 
{
	"kcp2k.dll",
	139,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	10,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
