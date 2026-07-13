// MPlayerStub.cpp — CommCore-based multiplayer (replaces DirectPlay MPlayer.cpp)
// Used on: macOS, Linux, and Windows/MinGW builds
// MSVC builds use MPlayer.cpp with DirectPlay
#ifndef _MSC_VER

#include "ddini.h"
#include "ResFile.h"
#include "FastDraw.h"
#include "mgraph.h"
#include "mouse.h"
#include "menu.h"
#include "MapDiscr.h"
#include "dpchat.h"
#include "dplobby.h"
#include "dialogs.h"
#include "LoadSave.h"
#include "Mplayer.h"
#include "PlayerInfo.h"

#include "Sort.h"
#include "Graphs.h"
#include "GP_Draw.h"
#include "Fonts.h"
#include "Drawform.h"
#include "Conststr.h"

#include "CommCore.h"

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

// GUIDs need explicit extern linkage in C++ (const = internal linkage by default)
extern const GUID IID_IDirectPlay3A = { 0x133efe41, 0x32dc, 0x11d0, { 0x9c, 0xfb, 0x0, 0xa0, 0xc9, 0xa, 0x43, 0xcb } };
extern const GUID DPSPGUID_TCPIP = { 0x36E95EE0, 0x8577, 0x11cf, { 0x96, 0xc, 0x0, 0x80, 0xc7, 0x53, 0x4e, 0x82 } };
extern const GUID IID_IDirectPlayLobby2A = { 0x1bb4af80, 0xa303, 0x11d0, { 0x9c, 0x4f, 0x0, 0xa0, 0xc9, 0x5, 0x42, 0x5e } };
extern const GUID DPAID_ServiceProvider = { 0x7d916c0, 0xe0af, 0x11cf, { 0x9c, 0x4e, 0x0, 0xa0, 0xc9, 0x5, 0x42, 0x5e } };
extern const GUID DPAID_INet = { 0xc4a54da0, 0xe0af, 0x11cf, { 0x9c, 0x4e, 0x0, 0xa0, 0xc9, 0x5, 0x42, 0x5e } };
extern const GUID DPCHAT_GUID = { 0x5bfdb060, 0x6a4, 0x11d0, { 0x9c, 0x4f, 0x0, 0xa0, 0xc7, 0x5, 0x47, 0x5f } };

// ========== Global variables (originally in MPlayer.cpp) ==========

CCommCore IPCORE;
bool GameInProgress = false;
LPDIRECTPLAY3A lpDirectPlay3A = nullptr;
DPID MyDPID = 0;
DPID ServerDPID = 0;
word NPlayers = 0;
word PlayerMenuMode = 0;
word PrevRpos = 0;
DWORD RealTime = 0;
DWORD EBPos1 = 0;
int SeqErrorsCount = 0;
int CurStatus = 0;
int ExitNI = 0;
int GMTYPE = 0;
bool LockFog = false;
int PREVGLOBALTIME = 0;
int CurrentMaxPing[8] = { -1,-1,-1,-1,-1,-1,-1,-1 };
int CurrentStartTime[8] = {};
int NextStartTime[8] = {};
word COMPSTART[8] = {};
byte SYNBAD[8] = {};
char CHATSTRING[256] = {};
DWORD CHATDPID = 0;
int COUN = 0;
char SaveFileName[128] = {};
EXBUFFER EBufs[MaxPL] = {};
EXBUFFER EBufs1[MaxPL] = {};
PLAYERSBACKUP PBACK;
RETRANS RETSYS;
PingSumm PSUMM;

// Variables originally in MPlayer.cpp, needed by other translation units
DPID PlayersID[32] = {};
byte* PData[32] = {};
DWORD ExBuf1[2193] = {};
int PLNAT[8] = {};
int LastRandDif = 0;
byte PrevEB[4096] = {};
int PrevEBSize = 0;
byte PrevPrevEB[4096] = {};
int PrevPrevEBSize = 0;
byte PrevPrevPrevEB[4096] = {};
int PrevPrevPrevEBSize = 0;

// ========== New global variables for CommCore networking ==========

bool IPCORE_INIT = false;
bool NETWORK_INIT = false;
extern bool DoNewInet;
extern char IPADDR[128];
extern byte MyRace;
extern DWORD MAPREPL[8];
extern int AutoTime;
extern int MaxPingTime;
extern int PitchTicks;
extern BOOL bActive;
extern const int kSystemMessageDisplayTime;

bool NeedMoreReceive = false;
bool LockPing = false;
int PREVTIME = 0;
int prevtime = 0;
int PREVPINGT = 0;

// Forward declarations needed by network functions
extern PlayerInfo PINFO[8];
extern byte NatRefTBL[8];
extern byte MPL_NatRefTBL[8];
extern int NeedCurrentTime;
extern int GLOBALTIME;
extern int PGLOBALTIME;
extern int tmtmt;
extern char CurrentMap[64];
extern int EBPos;
extern word rpos;
extern byte ExBuf[8192];
extern int RealLx;
extern int SUBTIME;
extern int NPROCM;
extern int TPROCM;
extern byte PlayGameMode;
extern bool MiniActive;
extern int LastKey;
extern bool KeyPressed;
extern int CurrentStepTime;
extern int AddTime;
extern int NeedAddTime;
extern char* PAUSETEXT;
extern City CITY[8];
extern int SumAccount[8];
unsigned long GetRealTime();
int GetAbsoluteRealTime();
void FlipPages();
bool ProcessMessages();
void ProcessScreen();
void GSYSDRAW();
void CmdDoItSlow(word DT);
void CmdSetMaxPingTime(int);
void CmdSetStartTime(int* MASK);
void CmdEndGame(byte NI, byte state, byte cause);
void ShowCentralText(char* ID, int time);
void DontMakeRaiting();
bool IsGameActive();
void StopRaiting();
void CloseMPL();
void IAmLeft();
void AnalyseMessages();

PlayerInfo* PINFLOC = nullptr;
DPID PLIDS[10] = {};
int PLFRQ[10] = {};
const DWORD PlExitID = 0xEA3521BC;
const DWORD ExDataID = 0xF376425E;
byte BUFFERX[40000] = {};
char PlayersList[512] = {};
char szSessionName[200] = {};
DPLAYINFO DPInfo = {};
static LPDPLAYINFO lpDPInfo = &DPInfo;

int NFROMID[8] = {};
int NTOTFROM[8] = {};
int NFROMID1[8] = {};
int NFROMID2[8] = {};
int NFAIL[8] = {};
int NBACK[8] = {};
int NSEN1 = 0, NSEN2 = 0;
int NSENB1 = 0, NSENB2 = 0;
int NSENF1 = 0, NSENF2 = 0;
int GameLength[8] = {};
int NextGameLength[8] = {};
int PlState[MaxPL] = {};
int NPings = 0;
DWORD LastAccess[MaxPL] = {};

int PREVGRAPHST = 0;
int PREVGRAPHSSZ = 0;
int NSENDP = 0;
DWORD MAXSENDP = 0;
int PREVGRAPHRT = 0;
int PREVGRAPHRSZ = 0;
int PREVGRAPHRSZA = 0;
int PREVGRAPHRSZS = 0;
int COUNTER2 = 0;

int StartTime[8] = {};
int LastStartTime[8] = {};
int LastGameLength[8] = {};
int NMessM = 0;
int NSysM = 0;

// Text strings for sync waiting screen
static char* READYTX = nullptr;
static char* LOADTX = nullptr;
static char* NOANSTX = nullptr;
static char* LOOKSTX = nullptr;
static char* NOPLAYTX = nullptr;
static char* DISCNTX = nullptr;
static char* ALTTAB = nullptr;

byte* MyData = nullptr;
DWORD MyDSize = 0;
DWORD CurrentPitchTicks = 0;

// ========== PLAYERSBACKUP ==========
PLAYERSBACKUP::PLAYERSBACKUP() { NBDATA = 0; }
PLAYERSBACKUP::~PLAYERSBACKUP() {
    for (int i = 0; i < NBDATA; i++) free(BSTR[i].Data);
    NBDATA = 0;
}
void PLAYERSBACKUP::Clear() {
    for (int i = 0; i < NBDATA; i++) free(BSTR[i].Data);
    NBDATA = 0;
}
void PLAYERSBACKUP::AddInf(byte*, int, DWORD, int) {}
void PLAYERSBACKUP::SendInfoAboutTo(DWORD, DWORD, DWORD) {}

// ========== RETRANS ==========
RETRANS::RETRANS() { TOT = nullptr; NRET = 0; MaxRET = 0; }
RETRANS::~RETRANS() { Clear(); }
void RETRANS::Clear() {
    if (MaxRET) free(TOT);
    TOT = nullptr;
    NRET = 0;
    MaxRET = 0;
}
void RETRANS::AddOneRet(DWORD, DWORD, DWORD) {}
void RETRANS::AddSection(DWORD, DWORD, DWORD) {}
void RETRANS::CheckRetr(DWORD, DWORD) {}

// ========== PingSumm ==========
PingSumm::PingSumm() { NPL = 0; PSET = nullptr; }
PingSumm::~PingSumm() { ClearPingInfo(); }
void PingSumm::ClearPingInfo() {
    for (int i = 0; i < NPL; i++) free(PSET[i].Pings);
    if (PSET) free(PSET);
    PSET = nullptr;
    NPL = 0;
}
void PingSumm::AddPing(DWORD DPID, DWORD From, DWORD To, DWORD Back) {
	if (Back - From > 2500) return;
	int curr = -1;
	for (int i = 0; i < NPL && curr == -1; i++) {
		if (PSET[i].DPID == DPID) curr = i;
	}
	if (curr == -1) {
		curr = NPL;
		NPL++;
		PSET = (PingsSet*)realloc(PSET, NPL * sizeof(PingsSet));
		PSET[curr].DPID = DPID;
		PSET[curr].NPings = 0;
		PSET[curr].MaxPings = 0;
		PSET[curr].Pings = nullptr;
	}
	if (PSET[curr].NPings > 100000) return;
	if (PSET[curr].NPings >= PSET[curr].MaxPings) {
		PSET[curr].MaxPings += 50;
		PSET[curr].Pings = (OnePing*)realloc(PSET[curr].Pings, PSET[curr].MaxPings * sizeof(OnePing));
	}
	int np = PSET[curr].NPings;
	PSET[curr].Pings[np].BackTime = int(Back);
	PSET[curr].Pings[np].FromTime = int(From);
	PSET[curr].Pings[np].ToTime = int(To);
	PSET[curr].NPings++;
}
void PingSumm::AddPlayer(DWORD DPID) {
	for (int i = 0; i < NPL; i++) {
		if (PSET[i].DPID == DPID) return;
	}
	int curr = NPL;
	NPL++;
	PSET = (PingsSet*)realloc(PSET, NPL * sizeof(PingsSet));
	PSET[curr].DPID = DPID;
	PSET[curr].NPings = 0;
	PSET[curr].MaxPings = 0;
	PSET[curr].Pings = nullptr;
}
int PingSumm::GetTimeDifference(DWORD DPID) {
	for (int i = 0; i < NPL; i++) {
		if (PSET[i].DPID == DPID) {
			OnePing* OP = PSET[i].Pings;
			int np = PSET[i].NPings;
			if (np < 2) return 0;
			int s = 0;
			int nn = 1;
			int m0 = np - 30;
			if (m0 < 1) m0 = 1;
			int dt0 = OP[m0].ToTime - (OP[m0].FromTime >> 1) - (OP[m0].BackTime >> 1);
			for (int j = m0; j < np; j++) {
				int avt = (OP[j].FromTime >> 1) + (OP[j].BackTime >> 1);
				s += OP[j].ToTime - avt - dt0;
				nn++;
			}
			s /= nn;
			return dt0 + s;
		}
	}
	return 0;
}
int PingSumm::CheckPlayer(DWORD DPID) {
	for (int i = 0; i < NPL; i++) {
		if (PSET[i].DPID == DPID) return PSET[i].NPings;
	}
	return 0;
}

// ========== Forward declarations ==========

void ShowCentralMessage(char* Message, int GPIDX);
void WaitWithError(char* ID, int GPID);
char* GetTextByID(char*);
void CreateTimedHintEx(char* s, int time, byte opt);
bool ProcessMessages();
int GetMapSUMM(char* Name);
int GetAbsoluteRealTime();
void StartPing(DWORD dpid, int ID);
void ComeInGame(bool SINGLE);

// ========== Helper functions ==========

int GetPIndex(DPID PD)
{
	int i = 0;
	while (i < NPlayers && PD != PlayersID[i]) i++;
	return (i < NPlayers) ? i : -1;
}

void NORMNICK1(char* Nick)
{
	int L = strlen(Nick);
	if (L > 3)
	{
		if (Nick[L - 1] == '}' && Nick[L - 3] == '{')
		{
			Nick[L - 3] = 0;
		}
	}
}

void ClearPLIDS()
{
	memset(PLIDS, 0, sizeof(PLIDS));
	memset(PLFRQ, 0, sizeof(PLFRQ));
}

void SortPLIDS()
{
	bool plprs[10] = {};
	int plidx[10] = {};
	for (int i = 0; i < NPlayers; i++)
	{
		DPID pid = PINFO[i].PlayerID;
		bool pinfn = true;
		for (int j = 0; j < 10 && pinfn; j++)
		{
			if (PLIDS[j] == pid)
			{
				PLFRQ[j]++;
				pinfn = false;
				plprs[j] = true;
				plidx[i] = j;
			}
		}
		if (pinfn)
		{
			for (int j = 0; j < 10 && pinfn; j++)
			{
				if (!PLIDS[j])
				{
					PLFRQ[j] = 1;
					pinfn = false;
					plprs[j] = true;
					plidx[i] = j;
					PLIDS[j] = pid;
				}
			}
		}
	}
	for (int i = 0; i < 8; i++)
	{
		if (!plprs[i])
		{
			PLFRQ[i] = 0;
			PLIDS[i] = 0;
		}
	}
	SortClass SC;
	SC.CheckSize(NPlayers);
	SC.NUids = NPlayers;
	for (int i = 0; i < NPlayers; i++)
	{
		SC.Uids[i] = i;
		SC.Parms[i] = -PLFRQ[plidx[i]];
	}
	SC.Sort();
	PlayerInfo TPI[8];
	memcpy(TPI, PINFO, sizeof(TPI));
	memset(PINFO, 0, sizeof(PlayerInfo) * 8);
	for (int i = 0; i < NPlayers; i++)
	{
		PINFO[i] = TPI[SC.Uids[i]];
		PlayersID[i] = PINFO[i].PlayerID;
	}
}

// ========== LoosedPack (ping loss tracking) ==========

#define PingTimeout 2000
struct OneLPing
{
	DWORD UniqID;
	int StartTime;
};

class OneLostID
{
public:
	DWORD DPID;
	int NSent;
	int NReceived;
	OneLPing* PING;
	int NPings;
	int LastAccessTime;
	int LastReceiveTime;
};

class LoosedPack
{
public:
	LoosedPack() { memset(OLID, 0, sizeof(OLID)); }
	~LoosedPack() {}
	OneLostID OLID[16];
	int GetLoosePercent(DWORD ID);
	int GetLastAnswerTime(DWORD ID);
	void Clear();
	void DeleteBadPlayers();
	void Add(DWORD DPID, int ID);
	void Remove(int ID);
	void Process();
};

int LoosedPack::GetLoosePercent(DWORD ID)
{
	for (int i = 0; i < 16; i++)
	{
		if (OLID[i].DPID == ID && OLID[i].NSent > 0)
		{
			return ((OLID[i].NSent - OLID[i].NReceived) * 100) / OLID[i].NSent;
		}
	}
	return -1;
}

int LoosedPack::GetLastAnswerTime(DWORD ID)
{
	for (int i = 0; i < 16; i++)
	{
		if (OLID[i].DPID == ID) return OLID[i].LastReceiveTime;
	}
	return 0;
}

void LoosedPack::Clear()
{
	for (int i = 0; i < 16; i++)
	{
		if (OLID[i].PING) free(OLID[i].PING);
	}
	memset(OLID, 0, sizeof(OLID));
}

void LoosedPack::DeleteBadPlayers()
{
	for (int i = 0; i < 16; i++)
	{
		if (OLID[i].DPID)
		{
			bool found = false;
			for (int j = 0; j < NPlayers; j++)
			{
				if (PINFO[j].PlayerID == (DPID)OLID[i].DPID) { found = true; break; }
			}
			if (!found)
			{
				if (OLID[i].PING) free(OLID[i].PING);
				memset(&OLID[i], 0, sizeof(OneLostID));
			}
		}
	}
}

void LoosedPack::Add(DWORD dpid, int ID)
{
	for (int i = 0; i < 16; i++)
	{
		if (OLID[i].DPID == dpid || !OLID[i].DPID)
		{
			OLID[i].DPID = dpid;
			OLID[i].NSent++;
			OLID[i].LastAccessTime = GetTickCount();
			return;
		}
	}
}

void LoosedPack::Remove(int ID)
{
	// Mark received
	for (int i = 0; i < 16; i++)
	{
		if (OLID[i].DPID)
		{
			OLID[i].NReceived++;
			OLID[i].LastReceiveTime = GetTickCount();
		}
	}
}

void LoosedPack::Process() {}

static LoosedPack LPACK;

// ========== NetCash (retry queue) ==========

struct NetCell
{
	byte* Data;
	int size;
	DWORD SendTime;
	DPID idTo;
};

class NetCash
{
public:
	int NCells;
	int MaxCells;
	NetCell* CELLS;
	NetCash();
	~NetCash();
	void Add(byte* Data, int size, DPID idTo);
	void AddWithDelay(byte* Data, int size, DPID idTo, int TimeDelay);
	void Process();
};

NetCash::NetCash() { NCells = 0; MaxCells = 0; CELLS = nullptr; }
NetCash::~NetCash()
{
	for (int i = 0; i < NCells; i++) if (CELLS[i].Data) free(CELLS[i].Data);
	if (CELLS) free(CELLS);
}

void NetCash::Add(byte* Data, int size, DPID idTo)
{
	AddWithDelay(Data, size, idTo, 0);
}

void NetCash::AddWithDelay(byte* Data, int size, DPID idTo, int TimeDelay)
{
	if (NCells >= MaxCells)
	{
		MaxCells += 16;
		CELLS = (NetCell*)realloc(CELLS, MaxCells * sizeof(NetCell));
	}
	CELLS[NCells].Data = (byte*)malloc(size);
	memcpy(CELLS[NCells].Data, Data, size);
	CELLS[NCells].size = size;
	CELLS[NCells].idTo = idTo;
	CELLS[NCells].SendTime = GetTickCount() + TimeDelay;
	NCells++;
}

bool SendToAllPlayersEx(DWORD Size, LPVOID lpData, bool G);
bool SendToPlayerEx(DWORD Size, LPVOID lpData, DWORD DPID);

void NetCash::Process()
{
	DWORD ct = GetTickCount();
	int i = 0;
	while (i < NCells)
	{
		if (ct >= CELLS[i].SendTime)
		{
			bool ok;
			if (CELLS[i].idTo == DPID_ALLPLAYERS || CELLS[i].idTo == 0)
				ok = SendToAllPlayersEx(CELLS[i].size, CELLS[i].Data, false);
			else
				ok = SendToPlayerEx(CELLS[i].size, CELLS[i].Data, CELLS[i].idTo);

			if (ok)
			{
				free(CELLS[i].Data);
				NCells--;
				if (i < NCells) CELLS[i] = CELLS[NCells];
			}
			else i++;
		}
		else i++;
	}
}

static NetCash NCASH;

// ========== Network function implementations ==========

void IPCORESetAndSendUserData(byte* pData, unsigned short size)
{
	IPCORE.SetUserData(pData, size);
	IPCORE.SendUserData();
}

bool CreateMultiplaterInterface()
{
	if (IPCORE_INIT) CloseMPL();
	if (!NETWORK_INIT)
	{
		bool res = (IPCORE.InitNetwork() != 0);
		if (!res)
		{
			LocalGP BOR2("Interface\\Bor2");
			WaitWithError("SOCKERROR", BOR2.GPID);
		}
		else
		{
			NETWORK_INIT = true;
		}
		fprintf(stderr, "[NET] CreateMultiplaterInterface: NETWORK_INIT=%d\n", (int)NETWORK_INIT);
		return res;
	}
	return true;
}

void InitMultiDialogs() {}
void SetupMultiplayer(HINSTANCE) {}

void ShutdownMultiplayer(bool Final)
{
	IAmLeft();
	if (IPCORE_INIT)
	{
		if (IPCORE.IsServer()) IPCORE.DoneServer();
		else IPCORE.DoneClient();
		IPCORE_INIT = false;
	}
	if (NETWORK_INIT && Final)
	{
		IPCORE.CloseNetwork();
		NETWORK_INIT = false;
	}
	fprintf(stderr, "[NET] ShutdownMultiplayer Final=%d\n", Final);
}

// ========== Send functions ==========

bool SendToAllPlayersEx(DWORD Size, LPVOID lpData, bool G)
{
	if (NPlayers < 2) return false;
	HRESULT hr = IPCORE.SendToAll((byte*)lpData, Size, G);
	if (hr) hr = DP_OK; else hr = 1;
	if (hr == DP_OK) return true;
	return false;
}

bool SendToAllPlayersExNew(DWORD Size, LPVOID lpData, bool G)
{
	if (NPlayers < 2) return false;
	HRESULT hr = IPCORE.SendToAll((byte*)lpData, Size, G);
	if (hr) return true;
	return false;
}

bool SendToAllPlayers(DWORD Size, void* lpData)
{
	if (NPlayers < 2) return false;
	if (!SendToAllPlayersExNew(Size, lpData, false))
	{
		NCASH.Add((byte*)lpData, Size, DPID_ALLPLAYERS);
	}
	return true;
}

bool SendToAllPlayers(DWORD Size, void* lpData, bool G)
{
	if (NPlayers < 2) return false;
	SendToAllPlayersEx(Size, lpData, G);
	return true;
}

bool SendToAllPlayersWithDelay(DWORD Size, LPVOID lpData, int dt)
{
	if (NPlayers < 2) return false;
	NCASH.AddWithDelay((byte*)lpData, Size, 0, dt);
	return true;
}

bool SendToPlayerEx(DWORD Size, LPVOID lpData, DWORD dpid)
{
	if (NPlayers < 2) return false;
	HRESULT hr = IPCORE.SendToPeer(dpid, (byte*)lpData, Size, 0);
	if (hr) return true;
	return false;
}

bool SendToPlayer(DWORD Size, LPVOID lpData, DWORD dpid)
{
	if (NPlayers < 2) return false;
	SendToPlayerEx(Size, lpData, dpid);
	return true;
}

bool SendToServer(DWORD Size, LPVOID lpData)
{
	if (NPlayers < 2) return false;
	HRESULT hr = IPCORE.SendToPeer(ServerDPID, (byte*)lpData, Size, 1);
	if (hr) return true;
	return false;
}

void SendChat(char* str, bool Ally)
{
	DWORD ps[300];
	if (Ally) ps[0] = 'ALLY';
	else ps[0] = 'CHAT';
	ps[1] = strlen(str) + 1;
	memcpy(ps + 2, str, ps[1]);
	SendToAllPlayers(ps[1] + 8, ps, false);
}

// ========== Session/Player enumeration ==========

BOOL __stdcall IPCORE_EnumProc(const PEER_ID PeerID, LPCSTR lpcszPeerName)
{
	if (NPlayers >= 7) return false;
	PlayersID[NPlayers] = PeerID;
	PINFLOC[NPlayers].PlayerID = PeerID;
	strncpy(PINFLOC[NPlayers].name, lpcszPeerName, sizeof(PINFLOC[NPlayers].name) - 1);
	word pisize = sizeof(PlayerInfo) - 36;
	memset(&PINFLOC[NPlayers].NationID, 0, pisize);
	IPCORE.GetUserData(PeerID, &PINFLOC[NPlayers].NationID, &pisize);
	if (PINFLOC[NPlayers].Host) ServerDPID = PeerID;
	NPlayers++;
	return true;
}

int GetLastAnswerT(DWORD ID) { return LPACK.GetLastAnswerTime(ID); }

bool PIEnumeratePlayers(PlayerInfo* PIN, bool DoMsg)
{
	if (GameInProgress) return true;
	if (GetTickCount() - prevtime < 250) return true;
	if (DoMsg)
	{
		if (MyDPID == ServerDPID)
		{
			for (int i = 0; i < NPlayers; i++)
			{
				if (PINFO[i].PlayerID != MyDPID)
				{
					int T = GetLastAnswerT(PINFO[i].PlayerID);
					if (T && GetTickCount() - T > 20000)
						IPCORE.DeletePeer(PINFO[i].PlayerID);
				}
			}
		}
		else
		{
			int T = GetLastAnswerT(ServerDPID);
			if (T && GetTickCount() - T > 20000)
			{
				LocalGP BARS("Interface\\bor2");
				ShowCentralMessage(GetTextByID("NOSRCONN"), BARS.GPID);
				FlipPages();
				int tt = GetTickCount();
				do { ProcessMessages(); } while (GetTickCount() - tt < 3000);
				return false;
			}
		}
	}
	prevtime = GetTickCount();
	NPlayers = 0;
	PlayersList[0] = 0;
	PINFLOC = PIN;
	IPCORE.lpEnumProc = &IPCORE_EnumProc;
	IPCORE.EnumPeers();
	SortPLIDS();
	LPACK.DeleteBadPlayers();
	return true;
}

void LBEnumerateSessions(ListBox*, int) {}

// ========== LAN Server Discovery ==========

void LBEnumerateLanSessions(ListBox* LB)
{
	LB->ClearItems();

	if (!NETWORK_INIT)
	{
		IPCORE.InitNetwork();
		NETWORK_INIT = true;
	}

	// Start LAN discovery and send broadcast query
	IPCORE.StartLanDiscovery();

	// Wait briefly for responses (poll for ~600ms)
	DWORD startTime = GetTickCount();
	while (GetTickCount() - startTime < 600)
	{
		IPCORE.PollLanDiscovery();
		ProcessMessages();
#ifdef __EMSCRIPTEN__
		// Same reason as CCommCore::InitClient's wait loop: LAN-discovery replies arrive over the
		// WebSocket relay, whose onmessage can only fire once this thread yields back to the
		// browser. Without this, the 600ms budget elapses with zero replies ever delivered, so the
		// server list is always empty regardless of whether anyone is actually hosting.
		emscripten_sleep( 0 );
#endif
	}

	// Populate the listbox with discovered servers
	u_short count = IPCORE.GetLanServerCount();
	for (u_short i = 0; i < count; i++)
	{
		LAN_SERVER_ENTRY* srv = IPCORE.GetLanServer(i);
		if (!srv) continue;

		char displayName[128];
		snprintf(displayName, sizeof(displayName), "%s (%s)",
				 srv->m_szSessionName, inet_ntoa(srv->m_Addr));

		// Param1 encodes: low byte = current players, next byte = max players, high word = options
		int param = (srv->m_uPlayerCount & 0xFF) | ((srv->m_uMaxPlayers & 0xFF) << 8);
		LB->AddItem(displayName, param);
	}

	fprintf(stderr, "[NET] LBEnumerateLanSessions: found %d servers\n", count);
}

extern int menu_x_off;
extern int menu_y_off;
extern int ItemChoose;
extern int NameChoose;
extern char PlName[32];
extern bool MMItemChoose(SimpleDialog* SD);
void SlowLoadPalette(LPCSTR lpFileName);
void SlowUnLoadPalette(LPCSTR lpFileName);
void ShowString(int x, int y, LPCSTR s, RLCFont* f);
void LoadFog(int);
extern RLCFont WhiteFont;
extern RLCFont YellowFont;
bool WaitingJoinGame(int);
bool FindSessionAndJoin(char* Name, char* Nick, bool Style, unsigned short port);

bool MPL_JoinLanGame(int ID)
{
	LocalGP BTNS("Interface\\Game_Select");
	LocalGP FONT1("romw");
	LocalGP FONT2("romw1");
	RLCFont FontA(FONT2.GPID);
	RLCFont FontP(FONT1.GPID);
	LoadFog(2);
	SQPicture Back("Interface\\Game_Select_Background.bmp");
	DialogsSystem MENU(menu_x_off, menu_y_off);
	MENU.addPicture(nullptr, 0, 0, &Back, &Back, &Back);
	GP_Button* Join = MENU.addGP_Button(nullptr, 93, 594, BTNS.GPID, 0, 1);
	Join->OnUserClick = &MMItemChoose;
	Join->UserParam = mcmJoin;
	GP_Button* Refresh = MENU.addGP_Button(nullptr, 238, 594, BTNS.GPID, 2, 3);
	Refresh->OnUserClick = &MMItemChoose;
	Refresh->UserParam = mcmRefresh;
	GP_Button* Cancel = MENU.addGP_Button(nullptr, 384, 594, BTNS.GPID, 4, 5);
	Cancel->OnUserClick = &MMItemChoose;
	Cancel->UserParam = mcmCancel;
	ListBox* LB = MENU.addGP_ListBox(nullptr, 92, 172, 15, BTNS.GPID, 6, 26, &WhiteFont, &YellowFont, nullptr);

	LBEnumerateLanSessions(LB);
	LB->CurItem = -1;
	LB->M_Over = 9;
	if (LB->NItems) LB->CurItem = 0;

	int pp = 1;
	do
	{
		ItemChoose = -1;
		do
		{
			ProcessMessages();
			// Continue polling for new servers in background
			IPCORE.PollLanDiscovery();

			Join->Enabled = (LB->CurItem != -1);

			MENU.MarkToDraw();
			MENU.ProcessDialogs();

			// Show player count for each server
			for (int i = 0; i < LB->NItems; i++)
			{
				char nps[16];
				int ppr = (LB->GetItem(i)->Param1) & 65535;
				sprintf(nps, "%d/%d", ppr & 255, ppr >> 8);
				if (LB->CurItem == i)
					ShowString(LB->x + 364, LB->y + 6 + i * 26, nps, &WhiteFont);
				else
					ShowString(LB->x + 364, LB->y + 6 + i * 26, nps, &YellowFont);
			}

			MENU.RefreshView();

			if (ItemChoose == mcmRefresh)
			{
				LBEnumerateLanSessions(LB);
				ItemChoose = -1;
				if (!LB->NItems) LB->CurItem = -1;
				else LB->CurItem = 0;
			}

			if (pp)
			{
				SlowLoadPalette("2\\agew_1.pal");
				pp = 0;
			}
		} while (ItemChoose == -1);

		if (ItemChoose == mcmJoin && LB->CurItem != -1)
		{
			// Get selected server info
			u_short idx = (u_short)LB->CurItem;
			LAN_SERVER_ENTRY* srv = IPCORE.GetLanServer(idx);
			if (srv)
			{
				// Stop discovery before connecting
				IPCORE.StopLanDiscovery();

				// Set IPADDR to the selected server's IP
				strncpy(IPADDR, inet_ntoa(srv->m_Addr), sizeof(IPADDR) - 1);
				IPADDR[sizeof(IPADDR) - 1] = '\0';
				u_short gamePort = srv->m_uGamePort;

				PlayerMenuMode = 1;
				if (FindSessionAndJoin(IPADDR, PlName, true, gamePort))
				{
					SlowUnLoadPalette("2\\agew_1.pal");
					WaitingJoinGame(0);
					return true;
				}
				else
				{
					// Connection failed — show error, go back to list
					LocalGP BOR2("Interface\\Bor2");
					WaitWithError("ICUNJ", BOR2.GPID);
					// Re-start discovery
					IPCORE.StartLanDiscovery();
				}
			}
		}
	} while (ItemChoose != mcmCancel);

	IPCORE.StopLanDiscovery();
	SlowUnLoadPalette("2\\agew_1.pal");
	return false;
}

// ========== LAN Server Advertise (for host) ==========

void StartLanServerAdvertise()
{
	if (!NETWORK_INIT) return;
	IPCORE.StartLanAdvertise();
}

void StopLanServerAdvertise()
{
	IPCORE.StopLanAdvertise();
}

void PollLanServerAdvertise()
{
	IPCORE.PollLanAdvertise();
}

bool FindSessionAndJoin(char* Name, char* Nick, bool Style, unsigned short port)
{
	NORMNICK1(Nick);
	if (!NETWORK_INIT)
	{
		IPCORE.InitNetwork();
		NETWORK_INIT = true;
	}
	if (IPCORE.InitClient(IPADDR, Nick, port))
	{
		MyDPID = IPCORE.GetPeerID();
		GMTYPE = IPCORE.GetOptions();
		IPCORE_INIT = true;
		fprintf(stderr, "[NET] FindSessionAndJoin OK MyDPID=%d\n", MyDPID);
		return true;
	}
	fprintf(stderr, "[NET] FindSessionAndJoin FAILED\n");
	return false;
}

// DoNewInet is forced true for every protocol in this build (see Interface.cpp processMultiplayer),
// so the DirectPlay `else` branch the original had here is unreachable and dropped, exactly like
// CreateNamedSession below already does.
bool CreateSession(char* SessName, char* Name, DWORD User2, bool /*Style*/, int MaxPlayers)
{
	if (!NETWORK_INIT)
	{
		IPCORE.InitNetwork();
		NETWORK_INIT = true;
	}
	IPCORE.SetOptions(User2);
	char SESS[256];
	strncpy(SESS, SessName, 255); SESS[255] = 0;
	if (strlen(SESS) > 28) SESS[28] = 0;
	bool res = (IPCORE.InitServer(SESS, Name) != 0);
	if (res)
	{
		if (User2) IPCORE.SetMaxPeers(2);
		else IPCORE.SetMaxPeers(MaxPlayers);
		MyDPID = IPCORE.GetPeerID();
		IPCORE_INIT = true;
	}
	fprintf(stderr, "[NET] CreateSession '%s' MaxPlayers=%d result=%d MyDPID=%d\n", SESS, MaxPlayers, res, MyDPID);
	return res;
}

bool CreateNamedSession(char* Name, DWORD User2, int Max)
{
	if (!NETWORK_INIT)
	{
		IPCORE.InitNetwork();
		NETWORK_INIT = true;
	}
	IPCORE.SetOptions(User2);
	IPCORE.SetMaxPeers(Max);
	bool r = (IPCORE.InitServer(Name, Name) != 0);
	if (r)
	{
		IPCORE_INIT = true;
		MyDPID = IPCORE.GetPeerID();
	}
	fprintf(stderr, "[NET] CreateNamedSession '%s' Max=%d result=%d MyDPID=%d\n", Name, Max, r, MyDPID);
	return r;
}

bool JoinNameToSession(int, char*) { return false; }
void DPL_CreatePlayer(IDirectPlay3*, GUID*, DPNAME*, bool) {}

void StopConnectionToSession(IDirectPlay3*)
{
	IPCORE.CloseSession();
}

void CloseMPL()
{
	if (IPCORE_INIT)
	{
		if (IPCORE.IsServer()) IPCORE.DoneServer();
		else IPCORE.DoneClient();
		IPCORE_INIT = false;
	}
	fprintf(stderr, "[NET] CloseMPL\n");
}

void IAmLeft()
{
	if (IPCORE.IsServer() || IPCORE.IsClient())
	{
		DWORD Left = PlExitID;
		SendToAllPlayers(4, (void*)&Left, true);
	}
}

static int PS_TIME1 = 0;
static int PS_TIME2 = 0;
static bool PS1_change = false;
static bool PS2_change = false;

void SETPLAYERDATA(DWORD ID, void* Data, int size, bool change) {
	if (change)
		PS1_change = true;

	int TT = GetTickCount();
	if (!PS_TIME1)
		PS_TIME1 = TT;

	IPCORE.SetUserData((byte*)Data, size);
	if (PS1_change) {
		if (TT - PS_TIME1 > 10000) {
			IPCORE.SendUserData();
			PS_TIME1 = TT;
		}
	} else {
		if (TT - PS_TIME1 > 2000) {
			IPCORE.SendUserData();
			PS_TIME1 = TT;
		}
	}
	PS1_change = false;
}

void SETPLAYERNAME(DPNAME* lpdpName, bool change) {
	if (change)
		PS2_change = true;

	int TT = GetTickCount();
	if (!PS_TIME2)
		PS_TIME2 = TT;

	IPCORE.SetUserName(lpdpName->lpszShortNameA);
	if (PS2_change) {
		if (TT - PS_TIME2 > 10000) {
			IPCORE.SendUserName();
			PS_TIME2 = TT;
		}
	} else {
		if (TT - PS_TIME2 > 3000) {
			IPCORE.SendUserName();
			PS_TIME2 = TT;
		}
	}
	PS2_change = false;
}

// ========== Message handling ==========

void HandleApplicationMessage(DPID idFrom, byte* lpMsg, DWORD dwMsgSize)
{
	int player_index = GetPIndex(idFrom);
	if (player_index < 0) return;

	DWORD* lp = (DWORD*)lpMsg;
	byte* BUF = lpMsg;
	byte* BUFX = BUF;
	word* WWW = (word*)(BUFX + 1);
	byte STAGE = 0;

	// 0xBA — retransmit request: asks peers who have data to resend to those who don't
	if (BUFX[0] == 0xBA && BUFX[1] == BUFX[2])
	{
		byte msk = BUFX[1];
		for (int i = 0; i < NPlayers; i++)
		{
			if (msk & (1 << i))
			{
				PBACK.SendInfoAboutTo(PINFO[i].PlayerID, idFrom, *((DWORD*)(BUFX + 3)));
			}
		}
		return;
	}

	// 0xBB — compound retry packet: [0xBB][prevSize:16][curSize:16][sum:16][prevData...][curData...]
STAGENEXT:
	if (BUFX[0] == 0xBB && WWW[0] + WWW[1] == WWW[2])
	{
		if (!STAGE) NBACK[player_index]++;
		STAGE++;
		if (1 == STAGE)
		{
			BUF = BUFX + 7;
			dwMsgSize = WWW[0];
			if (!dwMsgSize) STAGE++;
		}
		if (2 == STAGE)
		{
			BUF = BUFX + 7 + WWW[0];
			dwMsgSize = WWW[1];
			if (!dwMsgSize) STAGE++;
		}
		lp = (DWORD*)BUF;
	}

	if (STAGE == 3) return;  // both sub-packets were empty

	if ((BUF[0] == 0xAE || BUF[0] == 0xBF) && dwMsgSize < 2048)
	{
		int mycl = 7;
		for (int j = 0; j < 8; j++)
			if (PINFO[j].PlayerID == idFrom) mycl = j;

		word s = ((word*)(BUF + 1))[0];
		word s1 = 0xAE;
		for (DWORD j = 3; j < dwMsgSize; j++) s1 += BUF[j];

		if (s1 == s)
		{
			byte rt = RealTime;
			if (rt == BUF[3])
			{
				EBufs[player_index].Size = dwMsgSize - 7;
				EBufs[player_index].RandIndex = ((word*)(BUF + 4))[0];
				if (RealTime < 10)
					fprintf(stderr, "[SYNC] RT=%d recv rpos=%u from player[%d] (current frame)\n",
						RealTime, ((word*)(BUF + 4))[0], player_index);
				memcpy(&EBufs[player_index].Data, BUF + 7, dwMsgSize - 7);
				EBufs[player_index].RealTime = RealTime;
				PBACK.AddInf(BUF, dwMsgSize, idFrom, RealTime);
				RETSYS.CheckRetr(idFrom, RealTime);
			}
			rt++;
			if (rt == BUF[3])
			{
				EBufs1[player_index].Size = dwMsgSize - 7;
				EBufs1[player_index].RandIndex = ((word*)(BUF + 4))[0];
				memcpy(&EBufs1[player_index].Data, BUF + 7, dwMsgSize - 7);
				EBufs1[player_index].RealTime = RealTime + 1;
				PBACK.AddInf(BUF, dwMsgSize, idFrom, RealTime + 1);
				RETSYS.CheckRetr(idFrom, RealTime + 1);
			}
		}
		// If processing compound 0xBB packet, proceed to next sub-packet
		if (STAGE == 1) goto STAGENEXT;
	}
	else
	{
		if (lp[0] == 'RETR')
		{
			RETSYS.AddSection(idFrom, lp[1], RealTime);
		}
		else if (lp[0] == PlExitID)
		{
			EBufs[player_index].Enabled = false;
			char buf[200];
			sprintf(buf, GetTextByID("PLEXIT"), PINFO[player_index].name);
			CreateTimedHintEx(buf, kSystemMessageDisplayTime, 32);
			for (int i = 0; i < NPlayers; i++)
			{
				if (PINFO[i].PlayerID == idFrom)
				{
					int ni = PINFO[i].ColorID;
					if (NATIONS[ni].VictState != 2 && NATIONS[MyNation].VictState == 0)
					{
						NATIONS[ni].VictState = 1;
						ExitNI = ni;
					}
				}
			}
			AutoTime = GetTickCount() - 20000;
		}
		else if (lp[0] == 'CHAT')
		{
			memcpy(CHATSTRING, (char*)(lp + 2), lp[1]);
			CHATSTRING[lp[1]] = 0;
			CHATDPID = idFrom;
		}
		else if (lp[0] == 'ALLY')
		{
			if (NATIONS[NatRefTBL[PINFO[player_index].ColorID]].NMask & NATIONS[NatRefTBL[MyNation]].NMask)
			{
				memcpy(CHATSTRING, (char*)(lp + 2), lp[1]);
				CHATSTRING[lp[1]] = 0;
				CHATDPID = idFrom;
			}
		}
		else if (lp[0] == 'PING' && lp[0] + lp[1] + lp[2] + lp[3] + lp[4] == lp[5])
		{
			lp[3] = GetAbsoluteRealTime();
			lp[4] = MyDPID;
			lp[0] = 'ANSW';
			lp[5] = lp[0] + lp[1] + lp[2] + lp[3] + lp[4];
			SendToPlayer(24, lp, lp[1]);
		}
		else if (lp[0] == 'ANSW' && lp[0] + lp[1] + lp[2] + lp[3] + lp[4] == lp[5])
		{
			PSUMM.AddPing(lp[4], lp[2], lp[3], GetAbsoluteRealTime());
		}
		else if (lp[0] == 'ALIV')
		{
			DWORD ANSW[4];
			ANSW[0] = 'ALIA';
			ANSW[1] = MyDPID;
			ANSW[2] = CurStatus;
			if (!bActive) ANSW[2] = 17;
			ANSW[3] = ANSW[0] + ANSW[1] + ANSW[2];
			SendToPlayer(16, ANSW, idFrom);
		}
		else if (lp[0] == 'ALIA' && lp[3] == lp[0] + lp[1] + lp[2])
		{
			DPID sender_id = lp[1];
			for (int i = 0; i < NPlayers; i++)
			{
				if (sender_id == PINFO[i].PlayerID)
				{
					PlState[i] = lp[2];
					LastAccess[i] = GetRealTime();
				}
			}
		}
		else if (lp[0] == 'PNTF' && lp[2] == lp[0] + lp[1])
		{
			for (int pi = 0; pi < NPlayers; pi++)
				if (PINFO[pi].PlayerID == idFrom)
					CurrentMaxPing[pi] = lp[1];
		}
		else if (lp[0] == 'FIDN')
		{
			lp[0] = 'FRPL';
			lp[1] = GetMapSUMM((char*)(lp + 2));
			SendToPlayer(8, lp, idFrom);
		}
		else if (lp[0] == 'FRPL')
		{
			for (int i = 0; i < NPlayers; i++)
				if (PINFO[i].PlayerID == idFrom)
					MAPREPL[i] = lp[1];
		}

		if (MyData) { free(MyData); MyData = nullptr; }
		MyData = (byte*)malloc(dwMsgSize);
		memcpy(MyData, lp, dwMsgSize);
		MyDSize = dwMsgSize;
	}
}

HRESULT ReceiveMessage()
{
	if (!PREVTIME) PREVTIME = GetRealTime();

	u_short peer;
	DWORD dwMsgSize = IPCORE.ReceiveData((byte*)BUFFERX, &peer);
	DPID idFrom = peer;

	if (!dwMsgSize)
	{
		NeedMoreReceive = false;
		return DP_OK;
	}

	NeedMoreReceive = true;
	HandleApplicationMessage(idFrom, BUFFERX, dwMsgSize);
	return DP_OK;
}

void ProcessReceive()
{
	AnalyseMessages();
}

void ReceiveAll()
{
	LockPing = (GetRealTime() - PREVTIME) > 50;
	PREVTIME = GetRealTime();
	do { ReceiveMessage(); } while (NeedMoreReceive);
}

// Forward declarations for functions defined below
void SendPings();
int GetMaxRealPing();
void RetryNet(bool GUAR);

static const DWORD NON_VAL = 0xFFFFFFFF;

void ClearFAILS()
{
	memset(NFROMID, 0, 4 * 8);
	memset(NTOTFROM, 0, 4 * 8);
	memset(NFROMID1, 0, 4 * 8);
	memset(NFROMID2, 0, 4 * 8);
	memset(NFAIL, 0, 4 * 8);
	memset(NBACK, 0, 4 * 8);
	NSEN1 = 0; NSEN2 = 0;
	NSENB1 = 0; NSENB2 = 0;
	NSENF1 = 0; NSENF2 = 0;
}

void UpdateEBufs()
{
	byte* EPOS = ExBuf;
	EBPos = 0;
	word FirstRand = 0xFFFF;
	memset(SYNBAD, 0, 8);
	for (int i = 0; i < MaxPL; i++)
	{
		if (EBufs[i].Enabled && NON_VAL != EBufs[i].RealTime)
		{
			if (0xFFFF == FirstRand)
			{
				FirstRand = word(EBufs[i].RandIndex);
			}
			else
			{
				if (EBufs[i].RandIndex != FirstRand)
				{
					if (SeqErrorsCount == 0)
						fprintf(stderr, "[SYNC] DESYNC at RealTime=%d: player[%d] RandIndex=%u vs FirstRand=%u (diff=%d) tmtmt=%d\n",
							RealTime, i, EBufs[i].RandIndex, FirstRand,
							int(EBufs[i].RandIndex) - int(FirstRand), tmtmt);
					SeqErrorsCount++;
					LastRandDif = int(EBufs[i].RandIndex) - int(FirstRand);
					rpos = FirstRand;
					SYNBAD[PINFO[i].ColorID] = 1;
				}
			}
			memcpy(EPOS, &EBufs[i].Data, EBufs[i].Size);
			EPOS += EBufs[i].Size;
			EBPos += EBufs[i].Size;
		}

		EBufs[i].RealTime = EBufs1[i].RealTime;
		if (NON_VAL != EBufs1[i].RealTime)
		{
			memcpy(&EBufs[i].Data, &EBufs1[i].Data, EBufs1[i].Size);
			EBufs[i].Size = EBufs1[i].Size;
			EBufs[i].RandIndex = EBufs1[i].RandIndex;
			EBufs1[i].Size = 0;
			EBufs1[i].RealTime = NON_VAL;
		}
	}
}

bool PresentEmptyBuf()
{
	for (int i = 0; i < NPlayers; i++)
	{
		if (NON_VAL == EBufs[i].RealTime && EBufs[i].Enabled)
			return true;
	}
	return false;
}

static void ShowCString(int x, int y, char* cc, lpRLCFont f)
{
	ShowString(x - (GetRLCStrWidth(cc, f) >> 1), y, cc, f);
}

static bool CheckSender()
{
	if (NPlayers < 2) return false;
	int MINC = 9;
	DPID MINVAL = 0xFFFFFFFF;
	for (int i = 0; i < NPlayers; i++)
	{
		if (EBufs[i].Enabled && MINC > PINFO[i].ColorID)
		{
			MINC = PINFO[i].ColorID;
			MINVAL = PINFO[i].PlayerID;
		}
	}
	return MINVAL == MyDPID;
}

void HandleMultiplayer()
{
	NPROCM = 0;
	TPROCM = 0;
	if (PlayGameMode && MaxPingTime)
	{
		if (!PREVGLOBALTIME)
			PREVGLOBALTIME = GLOBALTIME;
		else if (GLOBALTIME - PREVGLOBALTIME > 30)
			PREVGLOBALTIME = GLOBALTIME;
	}

	if (!DoNewInet)
		return;

	int GRTBW = GetRealTime();

	if ((!PREVPINGT) || (GetRealTime() - PREVPINGT) > 1000)
	{
		SendPings();
		PREVPINGT = GetRealTime();
	}

	if (MaxPingTime)
	{
		if (!PREVGLOBALTIME)
			PREVGLOBALTIME = GLOBALTIME;
		else if (GLOBALTIME - PREVGLOBALTIME > 30)
		{
			int p = GetMaxRealPing();
			if (p) { if (p < 300) p = 300; CmdSetMaxPingTime(p); }
			PREVGLOBALTIME = GLOBALTIME;
		}
	}

	ADDGR(8, GetTickCount(), MaxPingTime, 0xFF);
	ADDGR(8, GetTickCount(), 0, 0);

	CurStatus = 1;
	if (NPlayers < 2)
		return;

	DWORD ii = GetPIndex(MyDPID);
	if (ii >= (DWORD)NPlayers || !EBufs[ii].Enabled)
		return;

	EBufs[ii].RealTime = RealTime;
	EBufs[ii].RandIndex = PrevRpos;
	memcpy(&EBufs[ii].Data, ((byte*)ExBuf1) + 7, EBPos1);
	EBufs[ii].Size = EBPos1;
	int mpl_time_4 = GetRealTime();
	int mpl_time_1;
	int mpl_time_2;
	int mpl_time_3 = mpl_time_4;
	int RetryAttempts = 0;
	GFILE* f = nullptr;

	if (!READYTX)
	{
		READYTX = GetTextByID((char*)"READYTX");
		LOADTX = GetTextByID((char*)"LOADTX");
		NOANSTX = GetTextByID((char*)"NOANSTX");
		LOOKSTX = GetTextByID((char*)"LOOKSTX");
		NOPLAYTX = GetTextByID((char*)"NOPALTX");
		DISCNTX = GetTextByID((char*)"DISCNTX");
		ALTTAB = GetTextByID((char*)"ALT-TAB");
	}

	for (int i = 0; i < NPlayers; i++)
	{
		PlState[i] = -1;
		LastAccess[i] = GetRealTime(); // FIX: init to current time, not 0
	}

	LockPing = (GetRealTime() - PREVTIME) > 50;
	PREVTIME = GetRealTime();

	if (LastKey == 0x72) KeyPressed = false; // VK_F3

	ClearFAILS();

	// ---- sync wait loop ----
	do {
	do {
		ReceiveMessage();
		mpl_time_1 = (GetRealTime() - mpl_time_4) >> 6;
		mpl_time_2 = (GetRealTime() - mpl_time_3) >> 6;
		ProcessMessages();

		if (20 < mpl_time_2 || (2 < mpl_time_2 && mpl_time_3 == mpl_time_4))
		{
			RetryNet(60 < mpl_time_2);
			RetryAttempts++;
			mpl_time_3 = GetRealTime();

			DWORD ANSW = 'ALIV';
			byte mask = 0;
			for (int i = 0; i < NPlayers; i++)
			{
				if (EBufs[i].Enabled && NON_VAL == EBufs[i].RealTime)
				{
					SendToPlayer(4, &ANSW, PlayersID[i]);
					mask |= 1 << i;
				}
			}
			if (mask)
			{
				byte GETIN[7];
				GETIN[0] = 0xBA;
				GETIN[1] = mask;
				GETIN[2] = mask;
				*((DWORD*)(GETIN + 3)) = RealTime;
				for (int i = 0; i < NPlayers; i++)
					if (EBufs[i].Enabled && NON_VAL != EBufs[i].RealTime)
						SendToPlayer(7, GETIN, PlayersID[i]);
			}
		}

		LockFog = true;
		if (PresentEmptyBuf()) ProcessScreen();
		LockFog = false;

		if (80 < mpl_time_1)
		{
			if (!f) f = Gopen("dump.txt", "w");
			int xc = RealLx / 2;
			int yc = 42;
			if (!MiniActive)
				DrawStdBar(xc - 150, yc, xc + 150, yc + 30 + NPlayers * 18 + 30);
			int y0 = yc + 12;
			if (!MiniActive)
				ShowCString(xc, y0 - 8, PAUSETEXT, &BigWhiteFont);
			y0 += 24;
			int Problem = -1;
			byte Erased[8] = {};

			for (int i = 0; i < NPlayers; i++)
			{
				if (6000 < GetRealTime() - LastAccess[i]) PlState[i] = -1;
				char ccc[128];
				sprintf(ccc, "%s:", PINFO[i].name);
				if (EBufs[i].Enabled)
				{
					if (EBufs[i].RealTime != NON_VAL)
						strcat(ccc, READYTX);
					else
					{
						if (-1 == PlState[i]) { strcat(ccc, NOANSTX); Problem = 4; }
						else if (0 == PlState[i]) { strcat(ccc, LOADTX); if (Problem < 3) Problem = 3; }
						else { if (1 == PlState[i]) strcat(ccc, LOOKSTX); else if (17 == PlState[i]) strcat(ccc, ALTTAB); if (Problem < 2) Problem = 2; }

						// FIX: increased timeout (was 650/40), give slow PCs more
						// time to load. 1500 ticks ≈ 96s, GLOBALTIME>100 = ~100 frames
						if (PlState[i] == -1 && mpl_time_1 > 1500 && GLOBALTIME > 100)
						{
							int NS = 0; byte ms = 0; byte PColor = PINFO[i].ColorID;
							for (int v = 0; v < 8; v++)
								if (NATIONS[v].ThereWasUnit && NATIONS[v].VictState == 0 && v != PColor && !Erased[v])
									if (!(NATIONS[v].NMask & ms)) { NS++; ms |= NATIONS[v].NMask; }
							CmdEndGame(PINFO[i].ColorID, NS < 2 ? 5 : 3, 108);
							EBufs[i].Enabled = 0;
							Erased[PINFO[i].ColorID] = 1;
							char buf[200];
							sprintf(buf, GetTextByID((char*)"PLEXIT"), PINFO[i].name);
							CreateTimedHintEx(buf, kSystemMessageDisplayTime, 32);
						}
					}
				}
				else strcat(ccc, NOPLAYTX);
				if (!MiniActive) ShowCString(xc, y0, ccc, &YellowFont);
				y0 += 18;
			}

			bool UseF3 = false;
			if (Problem == 4 && mpl_time_1 > 700) UseF3 = true;
			if (Problem == 3 && mpl_time_1 > 800) UseF3 = true;
			if (Problem == 2 && mpl_time_1 > 800) UseF3 = true;
			if (UseF3 && !MiniActive) ShowCString(xc, y0, DISCNTX, &WhiteFont);
			mpl_time_1 = 100; NMessM = 0; NSysM = 0;
			if (UseF3 && LastKey == 0x72)
			{
				mpl_time_1 = 10000000;
				for (int i = 0; i < NPlayers; i++) EBufs[i].Enabled = PINFO[i].PlayerID == MyDPID;
				CmdEndGame(PINFO[ii].ColorID, 1, 109);
				IAmLeft();
			}
		}
		GSYSDRAW();
	} while (PresentEmptyBuf() && mpl_time_1 < 1000000);
	} while (NeedMoreReceive);

	// ---- post-sync: build + send next frame ----
	int MyColor = ii;
	int MaxDiff = 0;
	for (int i = 0; i < NPlayers; i++)
		if (EBufs[i].Enabled) { int d = CurrentStartTime[i]; if (d > MaxDiff) MaxDiff = d; }
	if (MaxDiff > CurrentStepTime) { if (MaxDiff > 60000) MaxDiff = 60000; CmdDoItSlow(MaxDiff); }

	memcpy(LastStartTime, CurrentStartTime, 8 * 4);
	memcpy(CurrentStartTime, NextStartTime, 4 * 8);
	memset(NextStartTime, 0xFF, 4 * 8);
	memcpy(LastGameLength, GameLength, 8 * 4);
	memcpy(GameLength, NextGameLength, 4 * 8);
	memset(NextGameLength, 0xFF, 4 * 8);

	if (f) Gclose(f);

	EBPos1 = EBPos;
	byte* BUF = (byte*)ExBuf1;
	BUF[0] = 0xAE; BUF[1] = 0; BUF[2] = 0;
	BUF[3] = (RealTime + 1) & 255;
	((word*)(BUF + 4))[0] = rpos;
	int TT = GRTBW - SUBTIME;
	if (TT < NeedCurrentTime) { SUBTIME = NeedCurrentTime - TT; TT = NeedCurrentTime; if (SUBTIME > 80) SUBTIME = 80; }
	else SUBTIME = 0;
	int dt = (TT - NeedCurrentTime) >> 3;
	if (dt > 255) dt = 255;
	if (dt < 0) dt = 0;
	BUF[6] = dt;
	memcpy(BUF + 7, ExBuf, EBPos1);
	word s = 0;
	int szz1 = 7 + EBPos1;
	for (int i = 0; i < szz1; i++) s += BUF[i];
	((word*)(BUF + 1))[0] = s;

	PrevRpos = rpos;
	if (RealTime < 10 || SeqErrorsCount > 0)
		fprintf(stderr, "[SYNC] RT=%d send rpos=%u PrevRpos=%u tmtmt=%d EBPos=%d\n",
			RealTime, rpos, PrevRpos, tmtmt, EBPos1);
	CurrentStartTime[MyColor] = dt << 3;
	GameLength[MyColor] = 0;

	if (MaxPingTime)
	{
		SendToAllPlayers(EBPos1 + 7, ExBuf1);
		SendToAllPlayersWithDelay(EBPos1 + 7, ExBuf1, 80);
		SendToAllPlayersWithDelay(EBPos1 + 7, ExBuf1, 160);
	}
	else
	{
		SendToAllPlayers(EBPos1 + 7, ExBuf1);
		SendToAllPlayers(EBPos1 + 7, ExBuf1);
	}

	if (PrevPrevEBSize) memcpy(PrevPrevPrevEB, PrevPrevEB, PrevPrevEBSize);
	PrevPrevPrevEBSize = PrevPrevEBSize;
	memcpy(PrevPrevEB, PrevEB, PrevEBSize);
	PrevPrevEBSize = PrevEBSize;
	memcpy(PrevEB, ExBuf1, EBPos1 + 7);
	PrevEBSize = EBPos1 + 7;

	EBPos = 0;
	UpdateEBufs();
	RealTime++;
}

void AnalyseMessages()
{
	COUN = 0;
	LockPing = (GetRealTime() - PREVTIME) > 50;
	PREVTIME = GetRealTime();
	int CC = 0;
	do
	{
		CC++;
		ReceiveMessage();
		if (MyDPID != ServerDPID)
		{
			DWORD* lp = (DWORD*)MyData;
			if (lp && lp[0] == 0x037242F3 && !GameInProgress)
			{
				DWORD SUM = 0;
				for (int i = 0; i < (42 + 8 + 8 + 1); i++) SUM += lp[i];
				if (SUM == lp[42 + 8 + 8 + 1])
				{
					ServerDPID = lp[8 + 8];
					NPlayers = word(lp[9 + 8]);
					memcpy(PlayersID, &lp[10 + 8], (32 - 10) * 4);
					byte* BUFB = (byte*)(lp + 10 + 8 + 32 - 10);
					memcpy(NatRefTBL, BUFB, 8);
					BUFB = (byte*)(lp + 10 + 8 + 32 - 8);
					memcpy(COMPSTART, BUFB, 16);
					BUFB = (byte*)(lp + 10 + 8 + 32 - 4);
					strcpy(CurrentMap, (char*)&lp[2]);
					memcpy(StartTime, &lp[10 + 8 + 32], 4 * 8);
					MaxPingTime = lp[10 + 8 + 32 + 8];
					PitchTicks = MaxPingTime ? 8 : 0;

					PlayerInfo PINFO2[8];
					memcpy(PINFO2, PINFO, sizeof(PINFO));
					for (int j = 0; j < NPlayers; j++)
					{
						DPID id = PlayersID[j];
						for (int i = 0; i < NPlayers && id; i++)
						{
							if (PINFO2[i].PlayerID == id)
							{
								memcpy(PINFO + j, PINFO2 + i, sizeof(PlayerInfo));
								id = 0;
							}
						}
					}
					for (int j = 0; j < 8; j++)
					{
						PINFO[j].ColorID = BUFB[j + j];
						PINFO[j].GroupID = BUFB[j + j + 1];
					}
					for (int i = 0; i < NPlayers; i++)
					{
						if (PINFO[i].PlayerID == MyDPID)
							NeedCurrentTime = StartTime[i];
					}
					PLNAT[0] = lp[1];
					GameInProgress = true;
					PlayerMenuMode = 0;
					fprintf(stderr, "[NET] Client received START signal! Map=%s NPlayers=%d\n", CurrentMap, NPlayers);
					ComeInGame(false);
				}
			}
		}
		COUN++;
	} while (NeedMoreReceive);
	if (CC > COUNTER2) COUNTER2 = CC;
}

// ---- SetupEBufs: initialize exchange buffers ----

void SetupEBufs()
{
	SeqErrorsCount = 0;
	LastRandDif = 0;
	PrevRpos = 0;
	for (int i = 0; i < MaxPL; i++)
	{
		EBufs[i].RealTime = NON_VAL;
		EBufs1[i].RealTime = NON_VAL;
		EBufs[i].Enabled = true;
		EBufs1[i].Enabled = true;
		EBufs[i].Size = 0;
		EBufs1[i].Size = 0;
	}
}

// ---- FreePDatas: free player data allocations ----
void FreePDatas()
{
	for (int i = 0; i < NPlayers; i++)
	{
		if (PData[i])
		{
			free(PData[i]);
		}
		PData[i] = nullptr;
	}
}

// ---- StartIGame ----
void PrepareToGame();
void HideFlags();
void ShowLoading();
void CreateNationalMaskForRandomMap(char*);
void CreateMaskForSaveFile(char*);
void CreateNationalMaskForMap(char*);
void PrepareGameMedia(byte myid, bool);
void CenterScreen();
void CmdLoadNetworkGame(byte, int, char*);

void ComeInGame(bool SINGLE)
{
	ShowLoading();

	int myid = 0;
	for (int i = 0; i < NPlayers; i++)
	{
		if (MyDPID == PlayersID[i]) myid = i;
	}

	for (int i = 0; i < 8; i++) PLNAT[i] = -1;

	FlipPages();

	if (CurrentMap[0] == 'R' && CurrentMap[1] == 'N' && CurrentMap[3] == ' ')
		CreateNationalMaskForRandomMap(CurrentMap);
	else if (strstr(CurrentMap, ".sav") || strstr(CurrentMap, ".SAV"))
		CreateMaskForSaveFile(CurrentMap);
	else
		CreateNationalMaskForMap(CurrentMap);

	if (!SINGLE) { NeedMoreReceive = true; while (NeedMoreReceive) ReceiveMessage(); }

	byte NRTBL[8];
	memcpy(NRTBL, NatRefTBL, 8);
	PrepareGameMedia(myid, 1);
	memcpy(NatRefTBL, NRTBL, 8);

	if (!SINGLE) { NeedMoreReceive = true; while (NeedMoreReceive) ReceiveMessage(); }

	CenterScreen();
	FlipPages();

	EBPos = 0;
	EBPos1 = 5;
	SetupEBufs();

	RealTime = 0;
	GLOBALTIME = 0;
	PGLOBALTIME = 0;
	tmtmt = 0;

	if (!SINGLE && NPlayers > 1)
	{
		byte* SBuf = (byte*)ExBuf1;
		SBuf[0] = 0xAE; SBuf[1] = 0; SBuf[2] = 0; SBuf[3] = 0;
		SBuf[4] = 0; SBuf[5] = 0; SBuf[6] = 0; SBuf[7] = 81;
		*((int*)(SBuf + 8)) = GetRealTime() - NeedCurrentTime + 4000;
		word s = 0;
		for (int i = 0; i < 12; i++) s += SBuf[i];
		((word*)(SBuf + 1))[0] = s;
		SendToAllPlayers(12, ExBuf1, true);
	}

	memcpy(PrevEB, ExBuf1, 12);
	PrevEBSize = 12;
	PrevPrevEBSize = 0;
	PrevPrevPrevEBSize = 0;

	rpos = 0;
	PlayerMenuMode = 0;

	if (strstr(CurrentMap, ".sav") || strstr(CurrentMap, ".SAV"))
	{
		strcpy(SaveFileName, CurrentMap);
		CmdLoadNetworkGame(PINFO[myid].ColorID, 0, CurrentMap);
	}

	printf("[ComeInGame] %s game loaded. Map=%s myid=%d NPlayers=%d\n",
		SINGLE ? "Single" : "Multiplayer", CurrentMap, myid, NPlayers);
}

bool StartIGame(bool SINGLE)
{
	memcpy(NatRefTBL, MPL_NatRefTBL, 8);

	if (SINGLE)
	{
		NeedCurrentTime = GetRealTime();
	}
	else
	{
		// Multiplayer: create start times based on pings
		memset(StartTime, 0, sizeof(StartTime));
		for (int i = 0; i < NPlayers; i++)
		{
			if (PINFO[i].PlayerID != MyDPID)
				StartTime[i] = GetRealTime() + PSUMM.GetTimeDifference(PINFO[i].PlayerID);
			else
				StartTime[i] = GetRealTime();
		}
		for (int j = 0; j < NPlayers; j++)
			if (PINFO[j].PlayerID == MyDPID)
				NeedCurrentTime = StartTime[j];
	}

	PrepareToGame();
	HideFlags();

	if (!SINGLE && NPlayers < 2) return false;

	ServerDPID = MyDPID;

	// Set up COMPSTART from host's COMPINFO
	int HostID = 0;
	for (int i = 0; i < NPlayers; i++)
	{
		if (PINFO[i].Host) HostID = i;
	}
	memcpy(COMPSTART, PINFO[HostID].COMPINFO, 16);

	FreePDatas();

	// For multiplayer (host): build and send start signal to all clients
	if (!SINGLE)
	{
		DWORD BUF[48 + 8 + 8 + 1];
		memset(BUF, 0, sizeof(BUF));
		BUF[0] = 0x037242F3;
		BUF[1] = MyRace;
		strcpy((char*)&BUF[2], CurrentMap);
		BUF[8 + 8] = MyDPID;
		BUF[9 + 8] = NPlayers;
		memcpy(&BUF[10 + 8], PlayersID, (32 - 10) * 4);
		byte* BUFB = (byte*)(BUF + 10 + 8 + 32 - 10);
		memcpy(BUFB, MPL_NatRefTBL, 8);
		BUFB = (byte*)(BUF + 10 + 8 + 32 - 8);
		memcpy(BUFB, PINFO[HostID].COMPINFO, 16);
		memcpy(COMPSTART, BUFB, 16);
		BUFB = (byte*)(BUF + 10 + 8 + 32 - 4);
		for (int p = 0; p < 8; p++)
		{
			BUFB[p + p] = PINFO[p].ColorID;
			BUFB[p + p + 1] = PINFO[p].GroupID;
		}
		memcpy(&BUF[10 + 8 + 32], StartTime, 8 * 4);
		BUF[10 + 8 + 32 + 8] = MaxPingTime;
		DWORD SUM = 0;
		for (int i = 0; i < 42 + 8 + 8 + 1; i++) SUM += BUF[i];
		BUF[42 + 8 + 8 + 1] = SUM;

		if (!SendToAllPlayers((43 + 8 + 8 + 1) * 4, BUF, true))
			return false;

		// Wait 400ms for delivery
		int ttm = GetRealTime();
		do {} while (GetRealTime() - ttm < 400);
		fprintf(stderr, "[NET] Host sent START signal to %d players. Map=%s\n", NPlayers, CurrentMap);
	}

	GameInProgress = true;
	PlayerMenuMode = 0;

	ComeInGame(SINGLE);
	return true;
}

void ProcessNetCash() { NCASH.Process(); }
void ProcessNewInternet() { IPCORE.QueueProcess(); IPCORE.PollLanAdvertise(); }
void CreateDiffStr(char*) {}
void LoadSaveFile() {}
void SyncroDoctor() {}
bool CheckPingsReady() {
	for (int i = 0; i < NPlayers; i++) {
		if (PINFO[i].PlayerID != MyDPID &&
			PSUMM.CheckPlayer(PINFO[i].PlayerID) < 12)
			return false;
	}
	return true;
}
int GetReadyPercent() {
	int MINP = 100;
	for (int i = 0; i < NPlayers; i++) {
		if (PINFO[i].PlayerID != MyDPID) {
			int P = (PSUMM.CheckPlayer(PINFO[i].PlayerID) * 100) / 12;
			if (P < MINP) MINP = P;
		}
	}
	return MINP;
}
int GetMaxRealPing() {
	int nn = 0;
	int sp = 0;
	int maxsp = 0;
	for (int i = 0; i < PSUMM.NPL; i++) {
		int m = PSUMM.PSET[i].NPings;
		int m0 = 0;
		if (m > 20) m0 = m - 20;
		sp = 0;
		nn = 0;
		OnePing* OP = PSUMM.PSET[i].Pings + m0;
		for (int j = m0; j < m; j++) {
			sp += OP->BackTime - OP->FromTime;
			nn++;
			OP++;
		}
		if (nn) {
			sp /= nn;
			if (sp > maxsp) maxsp = sp;
		}
	}
	return maxsp;
}
int GetPing(DWORD pid) {
	int nn = 0;
	int sp = 0;
	int maxsp = 0;
	for (int i = 0; i < PSUMM.NPL; i++) {
		if (PSUMM.PSET[i].DPID == pid) {
			int m = PSUMM.PSET[i].NPings;
			int m0 = 0;
			if (m > 20) m0 = m - 20;
			sp = 0;
			nn = 0;
			OnePing* OP = PSUMM.PSET[i].Pings + m0;
			for (int j = m0; j < m; j++) {
				sp += OP->BackTime - OP->FromTime;
				nn++;
				OP++;
			}
			if (nn) {
				sp /= nn;
				if (sp > maxsp) maxsp = sp;
			}
		}
	}
	return maxsp;
}

void RetryNet(bool GUAR)
{
	byte COMP[4096];
	COMP[0] = 0xBB;
	*((word*)(COMP + 1)) = PrevPrevEBSize;
	*((word*)(COMP + 3)) = PrevEBSize;
	*((word*)(COMP + 5)) = PrevEBSize + PrevPrevEBSize;
	memcpy(COMP + 7, PrevPrevEB, PrevPrevEBSize);
	memcpy(COMP + 7 + PrevPrevEBSize, PrevEB, PrevEBSize);
	SendToAllPlayers(PrevPrevEBSize + PrevEBSize + 7, COMP);
}
void SendPings() {
	static int PrevPingTime = 0;
	if (NPlayers < 2) return;
	if (GetRealTime() - PrevPingTime < 1000) return;
	int stv = GetAbsoluteRealTime();
	for (int i = 0; i < NPlayers; i++) {
		if (PINFO[i].PlayerID != MyDPID) {
			DWORD lp[6];
			lp[0] = 'PING';
			lp[1] = MyDPID;
			lp[2] = stv;
			stv++;
			lp[3] = 0;
			lp[4] = 0;
			lp[5] = lp[0] + lp[1] + lp[2];
			SendToPlayer(24, lp, PINFO[i].PlayerID);
			StartPing(PINFO[i].PlayerID, lp[2]);
		}
	}
	PrevPingTime = GetRealTime();
}
void ClearLPACK() { LPACK.Clear(); }
void DeepDeletePeer(DWORD ID) { IPCORE.DeletePeer(ID); }

void StartPing(DWORD dpid, int ID)
{
	LPACK.Add(dpid, ID);
	LPACK.Process();
}

void EndPing(int ID)
{
	LPACK.Remove(ID);
}

char _tmp_lstr[12];
char* GetLString(DWORD dpid)
{
	int p = LPACK.GetLoosePercent(dpid);
	if (p == -1) strcpy(_tmp_lstr, "???");
	else sprintf(_tmp_lstr, "%d%%", p);
	return _tmp_lstr;
}

// ChatProcess / Process_GSC_ChatWindow / LeaveGSCRoom / StartGSCGame / ReportGSCGame /
// ReportAliveState / GetGameID / SendPrivateMessage / SendVictoryState / GoHomeAnyway: real
// implementations restored from the original IChat library (src/IChat/cs_chat.cpp,
// src/IChat/GSC_ChatWindow.cpp), not stubs - see cos_chat_net.h / WebChat.cpp for how their
// network dependencies are ported.

// ========== DirectPlayLobbyCreateA stub ==========

extern "C" HRESULT DirectPlayLobbyCreateA(LPGUID, LPDIRECTPLAYLOBBYA*, IUnknown*, void*, DWORD) {
    return E_NOTIMPL;
}

#endif // !_MSC_VER
