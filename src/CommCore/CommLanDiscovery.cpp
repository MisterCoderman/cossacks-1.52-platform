// LAN Discovery for CommCore
// Broadcast-based server discovery on local network
// Uses separate UDP socket on DISCOVERY_PORT (34001)
//
#include "CommCore.h"
#include <stdio.h>
#include <string.h>
#ifndef _WIN32
#include <errno.h>
#endif

#ifdef _MSC_VER
typedef int ssize_t;
#endif

// ---------------------------------------------------------------------------------------------
// Initialize the discovery socket (shared by both client and server)

BOOL CCommCore::InitDiscoverySocket()
{
	if (m_DiscoverySocket != INVALID_SOCKET)
		return TRUE; // Already open

	m_DiscoverySocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	if (m_DiscoverySocket == INVALID_SOCKET)
	{
		fprintf(stderr, "[CC] LAN Discovery: socket() failed\n");
		return FALSE;
	}

	// Enable broadcast
	int broadcastEnable = 1;
	if (setsockopt(m_DiscoverySocket, SOL_SOCKET, SO_BROADCAST,
				   (const char*)&broadcastEnable, sizeof(broadcastEnable)) < 0)
	{
		fprintf(stderr, "[CC] LAN Discovery: SO_BROADCAST failed\n");
		closesocket(m_DiscoverySocket);
		m_DiscoverySocket = INVALID_SOCKET;
		return FALSE;
	}

	// Allow address reuse (multiple instances on same machine for testing)
	int reuseAddr = 1;
	setsockopt(m_DiscoverySocket, SOL_SOCKET, SO_REUSEADDR,
			   (const char*)&reuseAddr, sizeof(reuseAddr));
#ifdef SO_REUSEPORT
	setsockopt(m_DiscoverySocket, SOL_SOCKET, SO_REUSEPORT,
			   (const char*)&reuseAddr, sizeof(reuseAddr));
#endif

	// Set non-blocking
#ifdef _WIN32
	u_long lArgP = 0x01;
	if (ioctlsocket(m_DiscoverySocket, FIONBIO, &lArgP) == SOCKET_ERROR)
	{
		closesocket(m_DiscoverySocket);
		m_DiscoverySocket = INVALID_SOCKET;
		return FALSE;
	}
#else
	if (platform_set_nonblocking(m_DiscoverySocket, 1) != 0)
	{
		closesocket(m_DiscoverySocket);
		m_DiscoverySocket = INVALID_SOCKET;
		return FALSE;
	}
#endif

	// Bind to DISCOVERY_PORT
	sockaddr_in localAddr;
	memset(&localAddr, 0, sizeof(localAddr));
	localAddr.sin_family = AF_INET;
	localAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	localAddr.sin_port = htons(DISCOVERY_PORT);

	if (bind(m_DiscoverySocket, (sockaddr*)&localAddr, sizeof(sockaddr_in)) == SOCKET_ERROR)
	{
#ifdef _WIN32
		fprintf(stderr, "[CC] LAN Discovery: bind(port=%d) failed WSA=%d\n", DISCOVERY_PORT, WSAGetLastError());
#else
		fprintf(stderr, "[CC] LAN Discovery: bind(port=%d) failed errno=%d\n", DISCOVERY_PORT, errno);
#endif
		closesocket(m_DiscoverySocket);
		m_DiscoverySocket = INVALID_SOCKET;
		return FALSE;
	}

	fprintf(stderr, "[CC] LAN Discovery: socket bound to port %d\n", DISCOVERY_PORT);
	return TRUE;
}

BOOL CCommCore::CloseDiscoverySocket()
{
	if (m_DiscoverySocket != INVALID_SOCKET)
	{
		closesocket(m_DiscoverySocket);
		m_DiscoverySocket = INVALID_SOCKET;
	}
	m_bLanDiscoveryActive = FALSE;
	m_bLanAdvertiseActive = FALSE;
	return TRUE;
}

// ---------------------------------------------------------------------------------------------
// CLIENT: Start LAN server discovery

BOOL CCommCore::StartLanDiscovery()
{
	m_uLanServerCount = 0;
	memset(m_LanServers, 0, sizeof(m_LanServers));

	if (!InitDiscoverySocket())
		return FALSE;

	m_bLanDiscoveryActive = TRUE;

	// Send broadcast query
	return SendLanQuery();
}

BOOL CCommCore::StopLanDiscovery()
{
	m_bLanDiscoveryActive = FALSE;
	// Don't close socket if also advertising
	if (!m_bLanAdvertiseActive)
		CloseDiscoverySocket();
	return TRUE;
}

// Send broadcast LAN query to 255.255.255.255:DISCOVERY_PORT
BOOL CCommCore::SendLanQuery()
{
	if (m_DiscoverySocket == INVALID_SOCKET)
		return FALSE;

	CC_PK_LAN_QUERY query;
	query.m_lProto = PROTO_ID;
	query.m_uType = CC_PT_LAN_QUERY;
	query.m_cProtoVersion = CC_PROTO_VERSION;

	sockaddr_in broadcastAddr;
	memset(&broadcastAddr, 0, sizeof(broadcastAddr));
	broadcastAddr.sin_family = AF_INET;
	broadcastAddr.sin_addr.s_addr = htonl(INADDR_BROADCAST);
	broadcastAddr.sin_port = htons(DISCOVERY_PORT);

	int result = sendto(m_DiscoverySocket, (const char*)&query, sizeof(query),
						0, (sockaddr*)&broadcastAddr, sizeof(sockaddr_in));

	if (result == SOCKET_ERROR)
	{
#ifdef _WIN32
		fprintf(stderr, "[CC] LAN SendLanQuery: sendto broadcast failed WSA=%d\n", WSAGetLastError());
#else
		fprintf(stderr, "[CC] LAN SendLanQuery: sendto broadcast failed errno=%d\n", errno);
#endif
		return FALSE;
	}

	// Also send to subnet broadcast addresses for each local interface
	for (int i = 0; i < m_uAddrCount; i++)
	{
		// Compute subnet broadcast: IP | ~netmask (assume /24 for simplicity)
		uint32_t ip = ntohl(m_dwAddrList[i]);
		uint32_t subnetBroadcast = (ip & 0xFFFFFF00) | 0xFF;

		broadcastAddr.sin_addr.s_addr = htonl(subnetBroadcast);
		sendto(m_DiscoverySocket, (const char*)&query, sizeof(query),
			   0, (sockaddr*)&broadcastAddr, sizeof(sockaddr_in));
	}

	fprintf(stderr, "[CC] LAN SendLanQuery: broadcast sent to %d subnets\n", m_uAddrCount);
	return TRUE;
}

// CLIENT: Poll for LAN discovery responses
BOOL CCommCore::PollLanDiscovery()
{
	if (m_DiscoverySocket == INVALID_SOCKET || !m_bLanDiscoveryActive)
		return FALSE;

	char recvBuf[512];
	sockaddr_in senderAddr;
#ifdef _WIN32
	int senderLen = sizeof(sockaddr_in);
#else
	socklen_t senderLen = sizeof(sockaddr_in);
#endif

	// Drain all pending packets
	for (int attempts = 0; attempts < 32; attempts++)
	{
		memset(&senderAddr, 0, sizeof(senderAddr));
		senderLen = sizeof(sockaddr_in);

		ssize_t recvResult = recvfrom(m_DiscoverySocket, recvBuf, sizeof(recvBuf),
									  0, (sockaddr*)&senderAddr, &senderLen);
		if (recvResult <= 0)
			break;

		// Check minimum size for a response packet
		if ((size_t)recvResult < sizeof(CC_PK_LAN_RESPONSE))
		{
			// Could be a query packet (if we're also advertising) — check for that
			if ((size_t)recvResult >= sizeof(CC_PK_LAN_QUERY))
			{
				LPCC_PK_LAN_QUERY pQuery = (LPCC_PK_LAN_QUERY)recvBuf;
				if (pQuery->m_lProto == PROTO_ID && pQuery->m_uType == CC_PT_LAN_QUERY)
				{
					// If we're also a server, respond
					if (m_bLanAdvertiseActive && m_bServer && m_ssState == ssOpen)
					{
						SendLanResponse(&senderAddr);
					}
				}
			}
			continue;
		}

		LPCC_PK_LAN_RESPONSE pResp = (LPCC_PK_LAN_RESPONSE)recvBuf;

		// Validate protocol
		if (pResp->m_lProto != PROTO_ID)
			continue;

		if (pResp->m_uType == CC_PT_LAN_QUERY)
		{
			// Another client querying, or our own broadcast echo — if we're server, respond
			if (m_bLanAdvertiseActive && m_bServer && m_ssState == ssOpen)
			{
				SendLanResponse(&senderAddr);
			}
			continue;
		}

		if (pResp->m_uType != CC_PT_LAN_RESPONSE)
			continue;

		fprintf(stderr, "[CC] LAN Discovery: response from %s:%u session='%s' host='%s' %d/%d\n",
				inet_ntoa(senderAddr.sin_addr), ntohs(senderAddr.sin_port),
				pResp->m_szSessionName, pResp->m_szHostName,
				pResp->m_uPlayerCount, pResp->m_uMaxPlayers);

		// Check if this server is already in our list (update if so)
		BOOL found = FALSE;
		for (int i = 0; i < m_uLanServerCount; i++)
		{
			if (m_LanServers[i].m_Addr.s_addr == senderAddr.sin_addr.s_addr &&
				m_LanServers[i].m_uGamePort == pResp->m_uGamePort)
			{
				// Update existing entry
				strncpy(m_LanServers[i].m_szSessionName, pResp->m_szSessionName, MAX_HOST_NAME - 1);
				strncpy(m_LanServers[i].m_szHostName, pResp->m_szHostName, MAX_HOST_NAME - 1);
				m_LanServers[i].m_uPlayerCount = pResp->m_uPlayerCount;
				m_LanServers[i].m_uMaxPlayers = pResp->m_uMaxPlayers;
				m_LanServers[i].m_dwOptions = pResp->m_dwOptions;
				m_LanServers[i].m_dwDiscoverTime = GetTickCount();
				found = TRUE;
				break;
			}
		}

		if (!found && m_uLanServerCount < MAX_LAN_SERVERS)
		{
			LAN_SERVER_ENTRY* entry = &m_LanServers[m_uLanServerCount];
			entry->m_Addr = senderAddr.sin_addr;
			entry->m_uGamePort = pResp->m_uGamePort;
			strncpy(entry->m_szSessionName, pResp->m_szSessionName, MAX_HOST_NAME - 1);
			entry->m_szSessionName[MAX_HOST_NAME - 1] = '\0';
			strncpy(entry->m_szHostName, pResp->m_szHostName, MAX_HOST_NAME - 1);
			entry->m_szHostName[MAX_HOST_NAME - 1] = '\0';
			entry->m_uPlayerCount = pResp->m_uPlayerCount;
			entry->m_uMaxPlayers = pResp->m_uMaxPlayers;
			entry->m_dwOptions = pResp->m_dwOptions;
			entry->m_dwDiscoverTime = GetTickCount();
			m_uLanServerCount++;
		}
	}

	return TRUE;
}

u_short CCommCore::GetLanServerCount()
{
	return m_uLanServerCount;
}

LAN_SERVER_ENTRY* CCommCore::GetLanServer(u_short index)
{
	if (index >= m_uLanServerCount)
		return NULL;
	return &m_LanServers[index];
}

// ---------------------------------------------------------------------------------------------
// SERVER: Start advertising on LAN

BOOL CCommCore::StartLanAdvertise()
{
	if (!InitDiscoverySocket())
		return FALSE;

	m_bLanAdvertiseActive = TRUE;
	fprintf(stderr, "[CC] LAN Advertise: started on port %d\n", DISCOVERY_PORT);
	return TRUE;
}

BOOL CCommCore::StopLanAdvertise()
{
	m_bLanAdvertiseActive = FALSE;
	// Don't close socket if also discovering
	if (!m_bLanDiscoveryActive)
		CloseDiscoverySocket();
	return TRUE;
}

// SERVER: Poll for incoming discovery queries and respond
BOOL CCommCore::PollLanAdvertise()
{
	if (m_DiscoverySocket == INVALID_SOCKET || !m_bLanAdvertiseActive)
		return FALSE;

	if (!m_bServer || m_ssState != ssOpen)
		return FALSE;

	char recvBuf[512];
	sockaddr_in senderAddr;
#ifdef _WIN32
	int senderLen = sizeof(sockaddr_in);
#else
	socklen_t senderLen = sizeof(sockaddr_in);
#endif

	// Drain all pending queries
	for (int attempts = 0; attempts < 32; attempts++)
	{
		memset(&senderAddr, 0, sizeof(senderAddr));
		senderLen = sizeof(sockaddr_in);

		ssize_t recvResult = recvfrom(m_DiscoverySocket, recvBuf, sizeof(recvBuf),
									  0, (sockaddr*)&senderAddr, &senderLen);
		if (recvResult <= 0)
			break;

		if ((size_t)recvResult < sizeof(CC_PK_LAN_QUERY))
			continue;

		LPCC_PK_LAN_QUERY pQuery = (LPCC_PK_LAN_QUERY)recvBuf;

		if (pQuery->m_lProto != PROTO_ID)
			continue;

		if (pQuery->m_uType == CC_PT_LAN_QUERY)
		{
			fprintf(stderr, "[CC] LAN Advertise: query from %s:%u\n",
					inet_ntoa(senderAddr.sin_addr), ntohs(senderAddr.sin_port));
			SendLanResponse(&senderAddr);
		}
		// Ignore responses (we might also be discovering)
	}

	return TRUE;
}

// SERVER: Send discovery response to a specific client
BOOL CCommCore::SendLanResponse(sockaddr_in* lpSender)
{
	CC_PK_LAN_RESPONSE resp;
	memset(&resp, 0, sizeof(resp));

	resp.m_lProto = PROTO_ID;
	resp.m_uType = CC_PT_LAN_RESPONSE;
	strncpy(resp.m_szSessionName, m_szSessionName, MAX_HOST_NAME - 1);
	strncpy(resp.m_szHostName, m_szUserName, MAX_HOST_NAME - 1);
	resp.m_uPlayerCount = m_uPeerCount;
	resp.m_uMaxPlayers = m_uMaxPeers;
	resp.m_uGamePort = DATA_PORT;
	resp.m_dwOptions = m_dwOptions;

	int result = sendto(m_DiscoverySocket, (const char*)&resp, sizeof(resp),
						0, (sockaddr*)lpSender, sizeof(sockaddr_in));

	if (result == SOCKET_ERROR)
	{
		fprintf(stderr, "[CC] LAN SendLanResponse: sendto failed\n");
		return FALSE;
	}

	return TRUE;
}
