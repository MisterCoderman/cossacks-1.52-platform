// RAW Frame encapsulation part
//
#include "CommCore.h"
#include <stdio.h>
#include <errno.h>

// ---------------------------------------------------------------------------------------------

BOOL CCommCore::ReSendFrame(u_short uFrameNum)
{

	sockaddr_in			sinPeer;

	memset(&sinPeer, 0x00, sizeof(sockaddr_in));

	sinPeer.sin_family = AF_INET;
	sinPeer.sin_addr.s_addr = m_FrameList[uFrameNum].m_PeerAddr.s_addr;
	sinPeer.sin_port = m_FrameList[uFrameNum].m_PeerPort;

	m_dwNxBytes += m_FrameList[uFrameNum].m_uSize;

#ifdef CC_DEBUG
	CHAR		szMsg[255];
	sprintf(szMsg, "call ReSendFrame()");
	DebugMessage(szMsg);

	sprintf(szMsg, "     To:	%s:%u",
		inet_ntoa(sinPeer.sin_addr),
		ntohs(sinPeer.sin_port));
	DebugMessage(szMsg);

	sprintf(szMsg, "     Type:	%u", m_FrameList[uFrameNum].m_lpFrame->m_uType);
	DebugMessage(szMsg);

	sprintf(szMsg, "     PeerId:	%u", m_FrameList[uFrameNum].m_lpFrame->m_PeerId);
	DebugMessage(szMsg);

	sprintf(szMsg, "     Size:	%u", m_FrameList[uFrameNum].m_uSize);
	DebugMessage(szMsg);
#endif //CC_DEBUG

	if (sendto(m_DataSocket,
		(char *)m_FrameList[uFrameNum].m_lpFrame,
		m_FrameList[uFrameNum].m_uSize,
		0x00,
		(sockaddr *)&sinPeer,
		sizeof(sockaddr_in)) == SOCKET_ERROR) {
		fprintf(stderr, "[CC] ReSend FAIL type=0x%02x to=%s:%u errno=%d\n",
			m_FrameList[uFrameNum].m_lpFrame->m_uType,
			inet_ntoa(sinPeer.sin_addr), ntohs(sinPeer.sin_port), errno);
		return FALSE;
	}

	fprintf(stderr, "[CC] ReSend OK type=0x%02x to=%s:%u size=%u retry=%u\n",
		m_FrameList[uFrameNum].m_lpFrame->m_uType,
		inet_ntoa(sinPeer.sin_addr), ntohs(sinPeer.sin_port),
		m_FrameList[uFrameNum].m_uSize,
		m_FrameList[uFrameNum].m_uRetrCount);

	return TRUE;
}

// ---------------------------------------------------------------------------------------------

BOOL CCommCore::SendRawPacket(PEER_ADDR			PeerAddr,
	PEER_PORT			PeerPort,
	u_short				uType,
	LPBYTE				lpbBuffer,
	u_short				uSize,
	BOOL				bSecureMessage,
	BOOL				bWaitForCompletion)
{
	sockaddr_in			sinPeer;
	LPCC_PK_RAW_FRAME	lpRawFrame;
	u_short				uRawFrameSize;

	uRawFrameSize = RAW_FRAME_HEADER_SIZE + uSize;
	lpRawFrame = (LPCC_PK_RAW_FRAME)malloc(uRawFrameSize);
	assert(lpRawFrame);

	lpRawFrame->m_lProto = PROTO_ID;
	lpRawFrame->m_uType = uType;
	lpRawFrame->m_lStamp = bSecureMessage ? ++m_lStamp : 0x00;
	lpRawFrame->m_PeerId = m_piNumber;

	if (m_lStamp == MAX_PACKET_STAMP)
		m_lStamp = 0;

	memcpy(lpRawFrame->m_bData, lpbBuffer, uSize);

	memset(&sinPeer, 0x00, sizeof(sockaddr_in));

	sinPeer.sin_family = AF_INET;
	sinPeer.sin_addr.s_addr = PeerAddr.s_addr;
	sinPeer.sin_port = PeerPort;

	m_dwTxBytes += uRawFrameSize;

#ifdef CC_DEBUG
	CHAR		szMsg[255];
	sprintf(szMsg, "call SendRawPacket()");
	DebugMessage(szMsg);

	sprintf(szMsg, "     To:	%s:%u",
		inet_ntoa(sinPeer.sin_addr),
		ntohs(sinPeer.sin_port));
	DebugMessage(szMsg);

	sprintf(szMsg, "     Type:	%u", lpRawFrame->m_uType);
	DebugMessage(szMsg);

	sprintf(szMsg, "     PeerId:	%u", lpRawFrame->m_PeerId);
	DebugMessage(szMsg);

	sprintf(szMsg, "     Size:	%u", uRawFrameSize);
	DebugMessage(szMsg);
#endif //CC_DEBUG

	int sendResult = sendto(m_DataSocket,
		(char *)lpRawFrame,
		uRawFrameSize,
		0x00,
		(sockaddr *)&sinPeer,
		sizeof(sockaddr_in));
	if (sendResult == SOCKET_ERROR)
	{
		fprintf(stderr, "[CC] sendto FAILED type=0x%02x to=%s:%u size=%u errno=%d\n",
			uType, inet_ntoa(sinPeer.sin_addr), ntohs(sinPeer.sin_port), uRawFrameSize, errno);
		free(lpRawFrame);
		return FALSE;
	}
	if (uType == CC_PT_TRY_CONNECT || uType == CC_PT_CONNECT_OK || uType == CC_PT_CONNECT_REJECT)
		fprintf(stderr, "[CC] sendto OK type=0x%02x to=%s:%u size=%u sent=%d\n",
			uType, inet_ntoa(sinPeer.sin_addr), ntohs(sinPeer.sin_port), uRawFrameSize, sendResult);

	if (!bSecureMessage) {
		free(lpRawFrame);
		return TRUE;
	};

	BOOL bRes = QueueAddPacket(PeerAddr,
		PeerPort,
		lpRawFrame,
		uRawFrameSize);

	if (!bRes)
		return FALSE;

	if (!bWaitForCompletion)
		return TRUE;

	DWORD dwSendTime = m_FrameList[m_uFrameCount - 1].m_dwSendTime;

	m_bBlockingCall = TRUE;

	while (QueuePacketExists(m_lStamp)) {
		ReceiveData(NULL);
		QueueProcess();
		if (lpIdleProc)
			lpIdleProc();
	};

	m_bBlockingCall = FALSE;

	return ((GetTickCount() - dwSendTime) < (RETRY_COUNT*RETRY_TIME));
}
