// Network initialization part
//
#include "CommCore.h"
#include <stdio.h>
#include <errno.h>
#ifdef _WIN32
    #include <iphlpapi.h>
    #pragma comment(lib, "Iphlpapi.lib")
#else
    #include "platform.h"
#endif

// ---------------------------------------------------------------------------------------------

BOOL CCommCore::InitNetwork()
{
	_log_message("InitNetwork()");
	fprintf(stderr, "[CC] InitNetwork() called\n");

#ifdef _WIN32
	WSADATA WSAData;

	if(WSAStartup(MAKEWORD(2,2),&WSAData)!=0)
		return FALSE;
#endif

	if(!InitSocket())
		return FALSE;

	if(!InitHost())
		return FALSE;

	return TRUE;
}

// ---------------------------------------------------------------------------------------------

BOOL CCommCore::InitHost()
{
	_log_message("InitHost()");

	m_uAddrCount = 0;

#ifdef _WIN32
	ULONG bufLen = 15000;
	PIP_ADAPTER_ADDRESSES pAddresses = NULL;
	ULONG ret;

	do {
		pAddresses = (PIP_ADAPTER_ADDRESSES)malloc(bufLen);
		if (!pAddresses)
			return FALSE;

		ret = GetAdaptersAddresses(AF_INET,
			GAA_FLAG_SKIP_ANYCAST | GAA_FLAG_SKIP_MULTICAST |
			GAA_FLAG_SKIP_DNS_SERVER | GAA_FLAG_SKIP_FRIENDLY_NAME,
			NULL, pAddresses, &bufLen);

		if (ret == ERROR_BUFFER_OVERFLOW) {
			free(pAddresses);
			pAddresses = NULL;
		}
	} while (ret == ERROR_BUFFER_OVERFLOW);

	if (ret != NO_ERROR) {
		if (pAddresses) free(pAddresses);
		return FALSE;
	}

	for (PIP_ADAPTER_ADDRESSES pCurr = pAddresses;
		pCurr && m_uAddrCount < 8;
		pCurr = pCurr->Next)
	{
		if (pCurr->IfType == IF_TYPE_SOFTWARE_LOOPBACK) continue;
		if (pCurr->OperStatus != IfOperStatusUp) continue;

		for (PIP_ADAPTER_UNICAST_ADDRESS pUnicast = pCurr->FirstUnicastAddress;
			pUnicast && m_uAddrCount < 8;
			pUnicast = pUnicast->Next)
		{
			sockaddr_in* sa = (sockaddr_in*)pUnicast->Address.lpSockaddr;
			m_dwAddrList[m_uAddrCount++] = sa->sin_addr.s_addr;
		}
	}

	free(pAddresses);
#else
	m_uAddrCount = (u_short)platform_get_local_addresses(m_dwAddrList, 8);
#endif

#ifdef __EMSCRIPTEN__
	// A browser sandbox has no real NIC to enumerate - getifaddrs() here calls socket(PF_NETLINK,...)
	// internally, which Emscripten's SOCKFS rejects with EAFNOSUPPORT (it only implements AF_INET),
	// so m_uAddrCount is architecturally always 0. That is NOT a network failure: this build's actual
	// transport is the WebSocket relay (web/cos_net.js -> server/cos_master.js), which assigns each
	// peer a virtual address server-side and never reads m_dwAddrList/m_uAddrCount to establish a
	// connection. The only consumers of these fields (CommLanDiscovery.cpp's subnet-broadcast loop,
	// CommInit.cpp's self-advertised peer address) already degrade gracefully to a no-op/0.0.0.0 when
	// the count is 0 - so treating an empty list as failure here only serves to make InitNetwork()
	// falsely fail on every call under Emscripten, which is exactly what was happening.
	return TRUE;
#else
	return (m_uAddrCount > 0);
#endif
}

// ---------------------------------------------------------------------------------------------

BOOL CCommCore::CloseNetwork()
{
	_log_message("CloseNetwork()");

	if(!CloseSocket())
		return FALSE;

#ifdef _WIN32
	if(WSACleanup()==SOCKET_ERROR)
		return FALSE;
#endif

	return TRUE;
}

// ---------------------------------------------------------------------------------------------

BOOL CCommCore::InitSocket()
{
	_log_message("InitSocket()");

	m_DataSocket=socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
	if(m_DataSocket==INVALID_SOCKET)
		return FALSE;

#ifdef _WIN32
	u_long	lArgP=0x01;
	if(ioctlsocket(m_DataSocket,FIONBIO,&lArgP)==SOCKET_ERROR)
		return FALSE;

	u_long	lMaxSize;
	int		iSizeOfMaxSize=sizeof(u_long);
	if(getsockopt(m_DataSocket,SOL_SOCKET,SO_MAX_MSG_SIZE,(char *)&lMaxSize,&iSizeOfMaxSize)==SOCKET_ERROR)
		return FALSE;

	m_uMaxMsgSize=(u_short)lMaxSize;
#else
	if(platform_set_nonblocking(m_DataSocket, 1) != 0)
		return FALSE;

	m_uMaxMsgSize = 65507; // Max UDP payload size
#endif

	sockaddr_in locaddr;

	locaddr.sin_family=AF_INET;
	locaddr.sin_addr.s_addr=htonl(INADDR_ANY);
	locaddr.sin_port=htons(DATA_PORT);

	if(bind(m_DataSocket,(sockaddr *)&locaddr,sizeof(sockaddr_in))==SOCKET_ERROR) {
		fprintf(stderr, "[CC] bind(port=%d) FAILED errno=%d\n", DATA_PORT, errno);
		return FALSE;
	}

	fprintf(stderr, "[CC] InitSocket OK: socket=%d bound to port %d\n", (int)m_DataSocket, DATA_PORT);
	return TRUE;
}

// ---------------------------------------------------------------------------------------------

BOOL CCommCore::CloseSocket()
{
	_log_message("CloseSocket()");
	fprintf(stderr, "[CC] CloseSocket() socket=%d\n", (int)m_DataSocket);

	if(closesocket(m_DataSocket)==SOCKET_ERROR)
		return FALSE;

	return TRUE;
}

// ---------------------------------------------------------------------------------------------
