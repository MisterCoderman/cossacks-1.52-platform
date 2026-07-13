#include "ddini.h"
#include "ResFile.h"
#include "FastDraw.h"
#include "mgraph.h"
#include "mouse.h"
#include "menu.h"
#include "MapDiscr.h"
#include "multipl.h"
#include "fog.h"
#include "walls.h"
#include "Nature.h"
#include <time.h>
#include "Nucl.h"

#include "Megapolis.h"
#include "Dialogs.h"
#include "fonts.h"
#include "dpchat.h"
#include "dplobby.h"
#include "GSound.h"
#include "3DGraph.h"
#include "3DMapEd.h"
#include "MapSprites.h"
#include <assert.h>
#include <math.h>
#include "NewMon.h"
#include "IconTool.h"
#include "GP_Draw.h"
#include "3DRandMap.h"
#include <crtdbg.h>
#include "ActiveScenary.h"
#include "DrawForm.h"
#include "Conststr.h"
#include <Process.h>
#include "MPlayer.h"
#include "Recorder.h"
#include "GSINC.H"
#include "TopoGraf.h"

#include "CEngine/goaceng.h"
#include "StrategyResearch.h"
#include "Safety.h"
#include "EinfoClass.h"
#include "mode.h"

#include "IR.H"
#include "bmptool.h"

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

void StartExplorer();
void FinExplorer();
void RunExplorer( int Index, char* ref, int x, int y, int x1, int y1 );
void ProcessExplorer( int Index );
extern int ItemChoose;

typedef char* fnGetAccessKey( int );
typedef void fnSetAccessKey( int, char* );
extern fnGetAccessKey* GetAccessKey;
extern fnSetAccessKey* SetAccessKey;

bool MCHOOSE( SimpleDialog* SD )
{
	ItemChoose = SD->UserParam;
	return true;
}

char ACCESS[16] = "";
void SlowLoadPalette( LPCSTR lpFileName );
void ExplorerOpenRef( int Index, char* ref );
void ExplorerSetVar( int Index, char* Name, char* value );
void ShowCentralMessage( char* Message, int GPIDX );
void DarkScreen();

bool ProcessMessages();

extern int menu_x_off;
extern int menu_y_off;
extern char PlName[64];

bool ProcessNewInternetLogin()
{
	DialogsSystem DSS( menu_x_off, menu_y_off );

	SQPicture Back( "Interface\\Background_Wizard.bmp" );

	LocalGP WBT( "Interface\\LogWizard" );
	LocalGP BTNS( "Interface\\Login" );

	DSS.addPicture( nullptr, 0, 0, &Back, &Back, &Back );

	char REQ[1024];
	char REQ1[1024];
	char DATA[512] = "";

	ResFile F = RReset( "Internet\\Cash\\login.cmd" );
	if (F != INVALID_HANDLE_VALUE)
	{
		int sz = RFileSize( F );
		if (sz > 511)
		{
			sz = 511;
		}
		RBlockRead( F, REQ1, sz );
		REQ1[sz] = 0;
		RClose( F );
	}
	else
	{
#ifdef __EMSCRIPTEN__
		strcpy( REQ1, "GW|LW_new|login&%s" );
#else
		return false;
#endif
	}

#ifdef __EMSCRIPTEN__
	if (strncmp( REQ1, "GW|", 3 ))
	{
		strcpy( REQ1, "GW|LW_new|login&%s" );
	}
#endif

	F = RReset( "Internet\\Cash\\LGDTA.LOG" );

	if (F != INVALID_HANDLE_VALUE)
	{
		int sz = RFileSize( F );
		if (sz > 511)
		{
			sz = 511;
		}
		RBlockRead( F, DATA, sz );
		DATA[sz] = 0;
		RClose( F );
	}

#ifdef __EMSCRIPTEN__
	strncpy( DATA, PlName[0] ? PlName : "Player", sizeof DATA - 1 );
	DATA[sizeof DATA - 1] = 0;
#endif

	sprintf( REQ, REQ1, DATA );

	printf( "[GSC] login: RunExplorer '%s'\n", REQ );
	RunExplorer( 2, REQ, menu_x_off, menu_y_off, 1024, 768 );

	ItemChoose = -1;
	if (SetAccessKey)
	{
		for (int i = 0; i < 8; i++)
		{
			SetAccessKey( i, "" );
		}
	}

	char* AKEY = "";
	ACCESS[0] = 0;
	bool pal = 0;
	int t0 = GetTickCount();

	do
	{
		ProcessMessages();

		DSS.ProcessDialogs();

		ProcessExplorer( 2 );

		DSS.RefreshView();

#ifdef __EMSCRIPTEN__
		// FlipPages/emscripten_sleep is this build's per-frame browser-event-loop yield: without it
		// the GSC transport's WebSocket onmessage (the server's enter.dcml / LW_key reply) can never
		// be delivered and this login loop spins forever, freezing the tab.
		emscripten_sleep( 0 );
#endif

		if (GetAccessKey)
		{
			AKEY = GetAccessKey( 2 );
		}

		if (!pal)
		{
			SlowLoadPalette( "2\\agew_1.pal" );
			pal = 1;
		}
	} while (ItemChoose == -1 && AKEY[0] == 0);

	printf( "[GSC] login loop exit AKEY='%s' ItemChoose=%d\n", AKEY, ItemChoose );

	if (!strcmp( AKEY, "#CANCEL" ))
	{
		AKEY[0] = 0;
	}

	if (SetAccessKey)
	{
		for (int i = 0; i < 8; i++)
		{
			SetAccessKey( i, AKEY );
		}
	}

	strcpy( ACCESS, AKEY );
	ItemChoose = -1;

	DSS.ProcessDialogs();

	ProcessExplorer( 2 );

	DSS.RefreshView();

	printf( "[GSC] ProcessNewInternetLogin -> %d\n", AKEY[0] != 0 );
	return AKEY[0] != 0;
}
