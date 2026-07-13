#include <math.h>
#ifdef _WIN32
    #include <windows.h>
#else
    #include "platform.h"
#endif
#include <stdlib.h>
#include <stdio.h>
#ifdef __EMSCRIPTEN__
#include <sys/stat.h>
extern "C" void cos_persist_soon(void);   // cos_data.js: debounce-flush /local to IndexedDB
#endif
#include "ResFile.h"
#include <assert.h>
#include "gFile.h"

class GFSYSTEM
{
public:
	GFILE* FILES[256];
	GFSYSTEM();
	~GFSYSTEM();
	GFILE* GetFile();
	void FreeFile(GFILE* F);
};

GFSYSTEM::GFSYSTEM()
{
	memset(FILES, 0, sizeof(FILES));
}

GFSYSTEM::~GFSYSTEM()
{
	for (int i = 0; i < 256; i++)
	{
		if (FILES[i])
		{
			FILES[i]->Close();
		}
	}
	memset(FILES, 0, sizeof(FILES));
}

GFILE* GFSYSTEM::GetFile()
{
	for (int i = 0; i < 256; i++)
	{
		if (!FILES[i])
		{
			FILES[i] = new GFILE;
			return FILES[i];
		}
	}
	return nullptr;
}

void GFSYSTEM::FreeFile(GFILE* F)
{
	for (int i = 0; i < 256; i++)
	{
		if (F == FILES[i])
		{
			free(FILES[i]);
			FILES[i] = nullptr;
		}
	}
}

GFILE::GFILE()
{
	F = nullptr;
	RealText = 0;
	rf = nullptr;
}

GFILE::~GFILE()
{
	if (F != nullptr)
		RClose(F);
	if (rf)
		fclose(rf);
}

bool GFILE::Open(char* Name)
{
	F = RReset(Name);
	if (F == INVALID_HANDLE_VALUE)
	{
		return false;
	}
	Size = RFileSize(F);
	BufPos = 0;
	GlobalPos = 0;
	NBytesRead = Size - GlobalPos;
	if (NBytesRead > 16384)
	{//16 KB read buffer size?
		NBytesRead = 16384;
	}
	RBlockRead(F, &Buf, NBytesRead);
	return 1;
}

void GFILE::Close()
{
	if (F != INVALID_HANDLE_VALUE)
		RClose(F);
	F = nullptr;
}

int GFILE::ReadByte() {
	if (F != INVALID_HANDLE_VALUE)
	{
		if (BufPos < NBytesRead)
		{
			BufPos++;
			return Buf[BufPos - 1];
		}
		else
		{
			GlobalPos += NBytesRead;
			NBytesRead = Size - GlobalPos;
			if (NBytesRead > 16384)
				NBytesRead = 16384;
			if (NBytesRead)
			{
				RBlockRead(F, &Buf, NBytesRead);
				BufPos = 1;
				return Buf[0];
			}
			else
			{
				RClose(F);
				F = INVALID_HANDLE_VALUE;
				return -1;
			}
		}
	}
	else
	{
		return -1;
	}
}

int GFILE::CheckByte()
{
	if (F != INVALID_HANDLE_VALUE)
	{
		if (BufPos < NBytesRead)
		{
			return Buf[BufPos];
		}
		else
		{
			GlobalPos += NBytesRead;
			NBytesRead = Size - GlobalPos;

			if (NBytesRead > 16384)
			{
				NBytesRead = 16384;
			}

			if (NBytesRead)
			{
				RBlockRead(F, &Buf, NBytesRead);
				BufPos = 0;
				return Buf[0];
			}
			else
			{
				RClose(F);
				F = INVALID_HANDLE_VALUE;
				return -1;
			}
		}
	}
	else
	{
		return -1;
	}
}

int GFILE::Gscanf(char* Mask, va_list args)
{
	int spos = 0;
	char c;
	char* v_char;
	int* v_int;
	int nargret = 0;
	do
	{
		c = Mask[spos];
		if (c == '%')
		{
			spos++;
			c = Mask[spos];
			spos++;
			switch (c)
			{
			case 's':
			case 'S':
			{
				v_char = va_arg(args, char*);
				int cc = 0;
				int NL = 0;
				bool exit = 0;
				do {
					cc = CheckByte();
					if (!NL) {
						if (!(cc == 0x0D || cc == 0x0A || cc == ' ' || cc == 9 || cc == -1)) {
							v_char[NL] = cc;
							NL++;
						}
						if (cc == -1) {
							exit = 1;
						}
						ReadByte();
					}
					else {
						if (cc == 0x0D || cc == 0x0A || cc == ' ' || cc == 9 || cc == -1) {
							exit = 1;
						}
						else {
							v_char[NL] = cc;
							NL++;
							ReadByte();
						}
					}
				} while (!exit);
				v_char[NL] = 0;
				if (NL) {
					nargret++;
				}
				else {
					return nargret;
				}
			}
			break;
			case 'd':
			case 'D':
			case 'g':
			{
				int cc = 0;
				int NL = 0;
				char vcr[32];
				bool exit = 0;
				do {
					cc = CheckByte();
					if (!NL) {
						if (!(cc == 0x0D || cc == 0x0A || cc == ' ' || cc == 9)) {
							if ((cc >= '0'&&cc <= '9') || cc == '.' || cc == '-') {
								vcr[NL] = cc;
								NL++;
							}
							else exit = 1;
						};
						if (cc == -1)exit = 1;
						ReadByte();
					}
					else {
						if (NL < 20) {
							if ((cc<'0' || cc>'9') && cc != '.'&&cc != '-')exit = 1;
							else {
								vcr[NL] = cc;
								NL++;
								ReadByte();
							};
						}
						else exit = 1;
					};
				} while (!exit);
				vcr[NL] = 0;
				if (vcr[0])
				{
					if (c == 'g')
					{
						float* darg = va_arg(args, float*);
						int z = sscanf(vcr, "%g", darg);
						if (z != 1)
						{
							return nargret;
						}
						else
						{
							nargret++;
						}
					}
					else
					{
						v_int = va_arg(args, int*);
						int z = sscanf(vcr, "%d", v_int);
						if (z != 1)
						{
							return nargret;
						}
						else
						{
							nargret++;
						}
					}
				}
				else
				{
					return nargret;
				}
			}
			break;
			case 'l':
				c = Mask[spos];
				assert(c == 'c');
				{
					v_char = va_arg(args, char*);
					int cc;
					cc = ReadByte();
					if (cc != -1) {
						v_char[0] = cc;
						nargret++;
					}
					else return nargret;
				};
				break;
			default:
				assert(0);
			};
		}
		else spos++;
	} while (c != '\0');
	return nargret;
}

int GFILE::Ggetch()
{
	int cc = ReadByte();
	if (cc == 0x0D)cc = ReadByte();
	return cc;
}

GFSYSTEM GFILES;

GFILE* Gopen(char* Name, char* Mode)
{
	GFILE* F = GFILES.GetFile();
	if (F) {
		if (Mode[0] == 'w') {
#ifdef __EMSCRIPTEN__
			// Persist ALL Gopen-written files (mode.dat, rec.dat, *.opt, players.txt, ...) in the
			// IDBFS mount, using the SAME canonical form (UPPER, forward slashes) the read side
			// (GSFILES/cos_slurp) checks FIRST under /local/. A bare fopen(Name) landed in MEMFS
			// CWD and was lost on every reload - that is why options did not survive sessions.
			char canon[300]; int ci = 0;
			for (const char* q = Name; *q && ci < 280; q++) {
				char ch = *q;
				if (ch == '\\') ch = '/';
				if (ch >= 'a' && ch <= 'z') ch -= 32;
				if (ci == 0 && (ch == '/' || ch == '.')) continue;
				canon[ci++] = ch;
			}
			canon[ci] = 0;
			char lp[340];
			snprintf(lp, sizeof lp, "/local/%s", canon);
			for (char* q = lp + 7; *q; q++) {
				if (*q == '/') { *q = 0; mkdir(lp, 0777); *q = '/'; }
			}
			FILE* tf = fopen(lp, "w");
#else
			FILE* tf = fopen(Name, "w");
#endif
			if (tf) {
				F->RealText = 1;
				F->rf = tf;
				return F;
			}
			else {
				GFILES.FreeFile(F);
				return nullptr;
			}
		}
		else {
			if (F->Open(Name)) {
				return F;
			}
			else {
				GFILES.FreeFile(F);
				return nullptr;
			}
		}
	}
	else
	{
		return nullptr;
	}
}

__declspec(dllexport) int Gscanf(GFILE* F, char* mask, ...)
{
	va_list args;
	va_start(args, mask);
	int z = F->Gscanf(mask, args);
	va_end(args);
	return z;
}

__declspec(dllexport) int Ggetch(GFILE* F)
{
	return F->Ggetch();
}

__declspec(dllexport) void Gprintf(GFILE* F, const char *format, ...)
{
	va_list args;
	va_start(args, format);
	vfprintf(F->rf, format, args);
	va_end(args);
}
__declspec(dllexport) void Gclose(GFILE* F)
{
	if (F->RealText)
	{
		fclose(F->rf);
#ifdef __EMSCRIPTEN__
		// A real file was just written under /local — flush IDBFS to IndexedDB shortly
		// (debounced), so a quick tab reload can no longer lose it.
		cos_persist_soon();
#endif
	}
	else
	{
		F->Close();
	}
	GFILES.FreeFile(F);
}