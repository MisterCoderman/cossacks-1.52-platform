#include "ddini.h"
#include "ResFile.h"
#include "FastDraw.h"
#include "mgraph.h"
#include "mouse.h"
#include "menu.h"
#include "MapDiscr.h"
#include "fog.h"
#include "Megapolis.h"

#include <assert.h>
#include "walls.h"
#include "mode.h"
#include "GSound.h"
#include "MapSprites.h"
#include "NewMon.h"

int prevrtime = 0;
FILE* FX = nullptr;
extern bool RecordMode;
extern byte PlayGameMode;
char CURLOG[32];

void WriteRec( char* s )
{
	if ( !( PlayGameMode || RecordMode ) )
	{
		return;
	}

	if ( GetTickCount() - prevrtime > 10000 )
	{
		if ( FX )
		{
			fclose( FX );
			if ( PlayGameMode )
			{
				FX = fopen( "lox1.log", "a" );
				strcpy( CURLOG, "lox1.log" );
			}
			else
			{
				FX = fopen( "lox0.log", "a" );
				strcpy( CURLOG, "lox0.log" );
			}
		}
		prevrtime = GetTickCount();
	}
	if ( !FX )
	{
		if ( PlayGameMode )
		{
			FX = fopen( "lox1.log", "a" );
			strcpy( CURLOG, "lox1.log" );
		}
		else
		{
			FX = fopen( "lox0.log", "a" );
			strcpy( CURLOG, "lox0.log" );
		}
	}
	fprintf( FX, s );
}

extern int tmtmt;
extern DWORD RealTime;

void Syncro::Copy( Syncro* Syn )
{
	memcpy( Syn->RSL, RSL, NSlots * sizeof(RandSlot) );
	Syn->NSlots = NSlots;
	NSlots = 0;
}

Syncro SYN;
Syncro SYN1;
extern short randoma[8192];
extern char LASTFILE[128];
extern int LastLine;
char* LastFile;

// === RANDO TRACE DIAGNOSTIC (DISABLED — sync verified) ===
#define RANDO_TRACE_ENABLED 0
static FILE* randoTraceFile = nullptr;
static int randoTraceCallNum = 0;
#define RANDO_TRACE_START 130
#define RANDO_TRACE_END   155

int RandNew( char* File, int Line )
{
	LastFile = File;
	LastLine = Line;
	int r = randoma[rpos];
	word oldRpos = rpos;
	rpos = ( rpos + 1 ) & 8191;

#if RANDO_TRACE_ENABLED
	// Trace on specific ticks
	if (tmtmt >= RANDO_TRACE_START && tmtmt <= RANDO_TRACE_END)
	{
		if (!randoTraceFile)
		{
			randoTraceFile = fopen("rando_trace.log", "w");
			if (randoTraceFile) fprintf(randoTraceFile, "call#\ttmtmt\trpos_before\tvalue\tfile\tline\n");
		}
		if (randoTraceFile)
		{
			const char* fname = File;
			const char* p = File;
			while (*p) { if (*p == '/' || *p == '\\') fname = p + 1; p++; }
			fprintf(randoTraceFile, "%d\t%d\t%u\t%d\t%s\t%d\n",
				randoTraceCallNum, tmtmt, oldRpos, r, fname, Line);
		}
		randoTraceCallNum++;
	}
	else if (randoTraceFile && tmtmt > RANDO_TRACE_END)
	{
		fclose(randoTraceFile);
		randoTraceFile = nullptr;
		fprintf(stderr, "[TRACE] rando_trace.log closed after %d calls\n", randoTraceCallNum);
	}
#endif

	if ( SYN.NSlots < maxUline )
	{
		RandSlot* RS = SYN.RSL + SYN.NSlots;
		RS->FileName = File;
		RS->Line = Line;
		RS->Param = 0;
		RS->rpos = rpos;
		RS->Type = -1;
		SYN.NSlots++;
	}

	return r;
}
