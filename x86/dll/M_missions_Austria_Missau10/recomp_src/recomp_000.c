#include "recomp.h"

/* FUN_10001000 @ 0x10391000 (18 bytes, 7 insns) */
void f_10391000(void) {
  FTRACE(0x10391000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10391004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10391005 jne 0x1039100c */
  if (!C.zf) goto L_1039100c;
  /* 10391007 call 0x10391012 */
  push32(0x1039100cu); f_10391012();
L_1039100c:;
  /* 1039100c push 1 */
  push32((uint32_t)(0x1u));
  /* 1039100e pop eax */
  EAX = (pop32());
  /* 1039100f ret 0xc */
  ESPCHK(0x10391000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x10391012 (522 bytes, 132 insns) */
void f_10391012(void) {
  FTRACE(0x10391012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391012 push esi */
  push32((uint32_t)(ESI));
  /* 10391013 mov esi, dword ptr [0x10395108] */
  ESI = (r32((uint32_t)(0x10395108)));
  /* 10391019 push 0x103960d0 */
  push32((uint32_t)(0x103960d0u));
  /* 1039101e push 0x10396430 */
  push32((uint32_t)(0x10396430u));
  /* 10391023 call esi */
  call_ind((uint32_t)(ESI), 0x10391025u);
  /* 10391025 push 0x103960cc */
  push32((uint32_t)(0x103960ccu));
  /* 1039102a push 0x10396438 */
  push32((uint32_t)(0x10396438u));
  /* 1039102f call esi */
  call_ind((uint32_t)(ESI), 0x10391031u);
  /* 10391031 push 0x103960c8 */
  push32((uint32_t)(0x103960c8u));
  /* 10391036 push 0x10396440 */
  push32((uint32_t)(0x10396440u));
  /* 1039103b call esi */
  call_ind((uint32_t)(ESI), 0x1039103du);
  /* 1039103d push 0x103960c4 */
  push32((uint32_t)(0x103960c4u));
  /* 10391042 push 0x10396448 */
  push32((uint32_t)(0x10396448u));
  /* 10391047 call esi */
  call_ind((uint32_t)(ESI), 0x10391049u);
  /* 10391049 push 0x103960c0 */
  push32((uint32_t)(0x103960c0u));
  /* 1039104e push 0x10396450 */
  push32((uint32_t)(0x10396450u));
  /* 10391053 call esi */
  call_ind((uint32_t)(ESI), 0x10391055u);
  /* 10391055 push 0x103960bc */
  push32((uint32_t)(0x103960bcu));
  /* 1039105a push 0x10396458 */
  push32((uint32_t)(0x10396458u));
  /* 1039105f call esi */
  call_ind((uint32_t)(ESI), 0x10391061u);
  /* 10391061 push 0x103960b8 */
  push32((uint32_t)(0x103960b8u));
  /* 10391066 push 0x10396460 */
  push32((uint32_t)(0x10396460u));
  /* 1039106b call esi */
  call_ind((uint32_t)(ESI), 0x1039106du);
  /* 1039106d push 0x103960b4 */
  push32((uint32_t)(0x103960b4u));
  /* 10391072 push 0x10396468 */
  push32((uint32_t)(0x10396468u));
  /* 10391077 call esi */
  call_ind((uint32_t)(ESI), 0x10391079u);
  /* 10391079 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1039107c push 0x103960b0 */
  push32((uint32_t)(0x103960b0u));
  /* 10391081 push 0x10396470 */
  push32((uint32_t)(0x10396470u));
  /* 10391086 call esi */
  call_ind((uint32_t)(ESI), 0x10391088u);
  /* 10391088 push 0x103960ac */
  push32((uint32_t)(0x103960acu));
  /* 1039108d push 0x10396480 */
  push32((uint32_t)(0x10396480u));
  /* 10391092 call esi */
  call_ind((uint32_t)(ESI), 0x10391094u);
  /* 10391094 push 0x103960a8 */
  push32((uint32_t)(0x103960a8u));
  /* 10391099 push 0x10396488 */
  push32((uint32_t)(0x10396488u));
  /* 1039109e call esi */
  call_ind((uint32_t)(ESI), 0x103910a0u);
  /* 103910a0 push 0x103960a4 */
  push32((uint32_t)(0x103960a4u));
  /* 103910a5 push 0x10396490 */
  push32((uint32_t)(0x10396490u));
  /* 103910aa call esi */
  call_ind((uint32_t)(ESI), 0x103910acu);
  /* 103910ac push 0x103960a0 */
  push32((uint32_t)(0x103960a0u));
  /* 103910b1 push 0x10396498 */
  push32((uint32_t)(0x10396498u));
  /* 103910b6 call esi */
  call_ind((uint32_t)(ESI), 0x103910b8u);
  /* 103910b8 push 0x1039609c */
  push32((uint32_t)(0x1039609cu));
  /* 103910bd push 0x103964a8 */
  push32((uint32_t)(0x103964a8u));
  /* 103910c2 call esi */
  call_ind((uint32_t)(ESI), 0x103910c4u);
  /* 103910c4 push 0x10396098 */
  push32((uint32_t)(0x10396098u));
  /* 103910c9 push 0x103964b0 */
  push32((uint32_t)(0x103964b0u));
  /* 103910ce call esi */
  call_ind((uint32_t)(ESI), 0x103910d0u);
  /* 103910d0 push 0x10396094 */
  push32((uint32_t)(0x10396094u));
  /* 103910d5 push 0x103964b8 */
  push32((uint32_t)(0x103964b8u));
  /* 103910da call esi */
  call_ind((uint32_t)(ESI), 0x103910dcu);
  /* 103910dc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103910df push 0x10396090 */
  push32((uint32_t)(0x10396090u));
  /* 103910e4 push 0x103964c0 */
  push32((uint32_t)(0x103964c0u));
  /* 103910e9 call esi */
  call_ind((uint32_t)(ESI), 0x103910ebu);
  /* 103910eb push 0x1039608c */
  push32((uint32_t)(0x1039608cu));
  /* 103910f0 push 0x103964c8 */
  push32((uint32_t)(0x103964c8u));
  /* 103910f5 call esi */
  call_ind((uint32_t)(ESI), 0x103910f7u);
  /* 103910f7 push 0x10396088 */
  push32((uint32_t)(0x10396088u));
  /* 103910fc push 0x103964d0 */
  push32((uint32_t)(0x103964d0u));
  /* 10391101 call esi */
  call_ind((uint32_t)(ESI), 0x10391103u);
  /* 10391103 push 0x10396084 */
  push32((uint32_t)(0x10396084u));
  /* 10391108 push 0x103964a0 */
  push32((uint32_t)(0x103964a0u));
  /* 1039110d call esi */
  call_ind((uint32_t)(ESI), 0x1039110fu);
  /* 1039110f push 0x10396478 */
  push32((uint32_t)(0x10396478u));
  /* 10391114 call dword ptr [0x10395118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395118))), 0x1039111au);
  /* 1039111a mov esi, dword ptr [0x1039511c] */
  ESI = (r32((uint32_t)(0x1039511c)));
  /* 10391120 push 0x10396080 */
  push32((uint32_t)(0x10396080u));
  /* 10391125 push 0x103964d8 */
  push32((uint32_t)(0x103964d8u));
  /* 1039112a call esi */
  call_ind((uint32_t)(ESI), 0x1039112cu);
  /* 1039112c push 0x1039607c */
  push32((uint32_t)(0x1039607cu));
  /* 10391131 push 0x103964e0 */
  push32((uint32_t)(0x103964e0u));
  /* 10391136 call esi */
  call_ind((uint32_t)(ESI), 0x10391138u);
  /* 10391138 push 0x10396078 */
  push32((uint32_t)(0x10396078u));
  /* 1039113d push 0x103964e8 */
  push32((uint32_t)(0x103964e8u));
  /* 10391142 call esi */
  call_ind((uint32_t)(ESI), 0x10391144u);
  /* 10391144 push 0x10396074 */
  push32((uint32_t)(0x10396074u));
  /* 10391149 push 0x103964f0 */
  push32((uint32_t)(0x103964f0u));
  /* 1039114e call esi */
  call_ind((uint32_t)(ESI), 0x10391150u);
  /* 10391150 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10391153 push 0x10396070 */
  push32((uint32_t)(0x10396070u));
  /* 10391158 push 0x103964f8 */
  push32((uint32_t)(0x103964f8u));
  /* 1039115d call esi */
  call_ind((uint32_t)(ESI), 0x1039115fu);
  /* 1039115f push 0x1039606c */
  push32((uint32_t)(0x1039606cu));
  /* 10391164 push 0x10396548 */
  push32((uint32_t)(0x10396548u));
  /* 10391169 call esi */
  call_ind((uint32_t)(ESI), 0x1039116bu);
  /* 1039116b push 0x10396068 */
  push32((uint32_t)(0x10396068u));
  /* 10391170 push 0x10396500 */
  push32((uint32_t)(0x10396500u));
  /* 10391175 call esi */
  call_ind((uint32_t)(ESI), 0x10391177u);
  /* 10391177 push 0x10396064 */
  push32((uint32_t)(0x10396064u));
  /* 1039117c push 0x10396550 */
  push32((uint32_t)(0x10396550u));
  /* 10391181 call esi */
  call_ind((uint32_t)(ESI), 0x10391183u);
  /* 10391183 push 0x10396060 */
  push32((uint32_t)(0x10396060u));
  /* 10391188 push 0x10396508 */
  push32((uint32_t)(0x10396508u));
  /* 1039118d call esi */
  call_ind((uint32_t)(ESI), 0x1039118fu);
  /* 1039118f push 0x1039605c */
  push32((uint32_t)(0x1039605cu));
  /* 10391194 push 0x10396558 */
  push32((uint32_t)(0x10396558u));
  /* 10391199 call esi */
  call_ind((uint32_t)(ESI), 0x1039119bu);
  /* 1039119b push 0x10396058 */
  push32((uint32_t)(0x10396058u));
  /* 103911a0 push 0x10396510 */
  push32((uint32_t)(0x10396510u));
  /* 103911a5 call esi */
  call_ind((uint32_t)(ESI), 0x103911a7u);
  /* 103911a7 push 0x10396054 */
  push32((uint32_t)(0x10396054u));
  /* 103911ac push 0x10396560 */
  push32((uint32_t)(0x10396560u));
  /* 103911b1 call esi */
  call_ind((uint32_t)(ESI), 0x103911b3u);
  /* 103911b3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103911b6 push 0x10396050 */
  push32((uint32_t)(0x10396050u));
  /* 103911bb push 0x10396518 */
  push32((uint32_t)(0x10396518u));
  /* 103911c0 call esi */
  call_ind((uint32_t)(ESI), 0x103911c2u);
  /* 103911c2 push 0x1039604c */
  push32((uint32_t)(0x1039604cu));
  /* 103911c7 push 0x10396568 */
  push32((uint32_t)(0x10396568u));
  /* 103911cc call esi */
  call_ind((uint32_t)(ESI), 0x103911ceu);
  /* 103911ce push 0x10396048 */
  push32((uint32_t)(0x10396048u));
  /* 103911d3 push 0x10396520 */
  push32((uint32_t)(0x10396520u));
  /* 103911d8 call esi */
  call_ind((uint32_t)(ESI), 0x103911dau);
  /* 103911da push 0x10396044 */
  push32((uint32_t)(0x10396044u));
  /* 103911df push 0x10396528 */
  push32((uint32_t)(0x10396528u));
  /* 103911e4 call esi */
  call_ind((uint32_t)(ESI), 0x103911e6u);
  /* 103911e6 push 0x10396040 */
  push32((uint32_t)(0x10396040u));
  /* 103911eb push 0x10396530 */
  push32((uint32_t)(0x10396530u));
  /* 103911f0 call esi */
  call_ind((uint32_t)(ESI), 0x103911f2u);
  /* 103911f2 push 0x1039603c */
  push32((uint32_t)(0x1039603cu));
  /* 103911f7 push 0x10396538 */
  push32((uint32_t)(0x10396538u));
  /* 103911fc call esi */
  call_ind((uint32_t)(ESI), 0x103911feu);
  /* 103911fe push 0x10396038 */
  push32((uint32_t)(0x10396038u));
  /* 10391203 push 0x10396540 */
  push32((uint32_t)(0x10396540u));
  /* 10391208 call esi */
  call_ind((uint32_t)(ESI), 0x1039120au);
  /* 1039120a push 0x10396030 */
  push32((uint32_t)(0x10396030u));
  /* 1039120f push 1 */
  push32((uint32_t)(0x1u));
  /* 10391211 call dword ptr [0x10395114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395114))), 0x10391217u);
  /* 10391217 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1039121a pop esi */
  ESI = (pop32());
  /* 1039121b ret  */
  ESPCHK(0x10391012u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x1039121c (1921 bytes, 685 insns) */
void f_1039121c(void) {
  FTRACE(0x1039121cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1039121c push ecx */
  push32((uint32_t)(ECX));
  /* 1039121d push ebx */
  push32((uint32_t)(EBX));
  /* 1039121e push ebp */
  push32((uint32_t)(EBP));
  /* 1039121f push esi */
  push32((uint32_t)(ESI));
  /* 10391220 push edi */
  push32((uint32_t)(EDI));
  /* 10391221 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10391223 call dword ptr [0x103950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b0))), 0x10391229u);
  /* 10391229 mov ebx, dword ptr [0x103950b8] */
  EBX = (r32((uint32_t)(0x103950b8)));
  /* 1039122f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10391231 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10391233 pop ecx */
  ECX = (pop32());
  /* 10391234 je 0x103912df */
  if (C.zf) goto L_103912df;
  /* 1039123a push edi */
  push32((uint32_t)(EDI));
  /* 1039123b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1039123d call dword ptr [0x103950bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950bc))), 0x10391243u);
  /* 10391243 push 0x103960fc */
  push32((uint32_t)(0x103960fcu));
  /* 10391248 call dword ptr [0x103950b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b4))), 0x1039124eu);
  /* 1039124e mov esi, dword ptr [0x103950c4] */
  ESI = (r32((uint32_t)(0x103950c4)));
  /* 10391254 mov ebp, 0x7a120 */
  EBP = (0x7a120u);
  /* 10391259 push ebp */
  push32((uint32_t)(EBP));
  /* 1039125a push 3 */
  push32((uint32_t)(0x3u));
  /* 1039125c push edi */
  push32((uint32_t)(EDI));
  /* 1039125d call esi */
  call_ind((uint32_t)(ESI), 0x1039125fu);
  /* 1039125f push ebp */
  push32((uint32_t)(EBP));
  /* 10391260 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391262 push edi */
  push32((uint32_t)(EDI));
  /* 10391263 call esi */
  call_ind((uint32_t)(ESI), 0x10391265u);
  /* 10391265 push edi */
  push32((uint32_t)(EDI));
  /* 10391266 push edi */
  push32((uint32_t)(EDI));
  /* 10391267 push edi */
  push32((uint32_t)(EDI));
  /* 10391268 call esi */
  call_ind((uint32_t)(ESI), 0x1039126au);
  /* 1039126a push edi */
  push32((uint32_t)(EDI));
  /* 1039126b push 2 */
  push32((uint32_t)(0x2u));
  /* 1039126d push edi */
  push32((uint32_t)(EDI));
  /* 1039126e call esi */
  call_ind((uint32_t)(ESI), 0x10391270u);
  /* 10391270 push ebp */
  push32((uint32_t)(EBP));
  /* 10391271 push 5 */
  push32((uint32_t)(0x5u));
  /* 10391273 push edi */
  push32((uint32_t)(EDI));
  /* 10391274 call esi */
  call_ind((uint32_t)(ESI), 0x10391276u);
  /* 10391276 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10391279 push ebp */
  push32((uint32_t)(EBP));
  /* 1039127a push 4 */
  push32((uint32_t)(0x4u));
  /* 1039127c push edi */
  push32((uint32_t)(EDI));
  /* 1039127d call esi */
  call_ind((uint32_t)(ESI), 0x1039127fu);
  /* 1039127f mov ebp, 0x55d4a80 */
  EBP = (0x55d4a80u);
  /* 10391284 push ebp */
  push32((uint32_t)(EBP));
  /* 10391285 push 3 */
  push32((uint32_t)(0x3u));
  /* 10391287 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391289 call esi */
  call_ind((uint32_t)(ESI), 0x1039128bu);
  /* 1039128b push ebp */
  push32((uint32_t)(EBP));
  /* 1039128c push 1 */
  push32((uint32_t)(0x1u));
  /* 1039128e push 1 */
  push32((uint32_t)(0x1u));
  /* 10391290 call esi */
  call_ind((uint32_t)(ESI), 0x10391292u);
  /* 10391292 push edi */
  push32((uint32_t)(EDI));
  /* 10391293 push edi */
  push32((uint32_t)(EDI));
  /* 10391294 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391296 call esi */
  call_ind((uint32_t)(ESI), 0x10391298u);
  /* 10391298 push edi */
  push32((uint32_t)(EDI));
  /* 10391299 push 2 */
  push32((uint32_t)(0x2u));
  /* 1039129b push 1 */
  push32((uint32_t)(0x1u));
  /* 1039129d call esi */
  call_ind((uint32_t)(ESI), 0x1039129fu);
  /* 1039129f push ebp */
  push32((uint32_t)(EBP));
  /* 103912a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 103912a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103912a4 call esi */
  call_ind((uint32_t)(ESI), 0x103912a6u);
  /* 103912a6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103912a9 push ebp */
  push32((uint32_t)(EBP));
  /* 103912aa push 4 */
  push32((uint32_t)(0x4u));
  /* 103912ac push 1 */
  push32((uint32_t)(0x1u));
  /* 103912ae call esi */
  call_ind((uint32_t)(ESI), 0x103912b0u);
  /* 103912b0 push edi */
  push32((uint32_t)(EDI));
  /* 103912b1 call dword ptr [0x103950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950c8))), 0x103912b7u);
  /* 103912b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103912ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103912bc jne 0x103912df */
  if (!C.zf) goto L_103912df;
  /* 103912be push edi */
  push32((uint32_t)(EDI));
  /* 103912bf push 0x103964d0 */
  push32((uint32_t)(0x103964d0u));
  /* 103912c4 call ebx */
  call_ind((uint32_t)(EBX), 0x103912c6u);
  /* 103912c6 mov esi, dword ptr [0x103950c0] */
  ESI = (r32((uint32_t)(0x103950c0)));
  /* 103912cc push 1 */
  push32((uint32_t)(0x1u));
  /* 103912ce call esi */
  call_ind((uint32_t)(ESI), 0x103912d0u);
  /* 103912d0 push edi */
  push32((uint32_t)(EDI));
  /* 103912d1 push 0x103964a0 */
  push32((uint32_t)(0x103964a0u));
  /* 103912d6 call ebx */
  call_ind((uint32_t)(EBX), 0x103912d8u);
  /* 103912d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103912da call esi */
  call_ind((uint32_t)(ESI), 0x103912dcu);
  /* 103912dc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103912df:;
  /* 103912df push edi */
  push32((uint32_t)(EDI));
  /* 103912e0 push 0x10396448 */
  push32((uint32_t)(0x10396448u));
  /* 103912e5 call dword ptr [0x103950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950d0))), 0x103912ebu);
  /* 103912eb mov ebp, dword ptr [0x103950d4] */
  EBP = (r32((uint32_t)(0x103950d4)));
  /* 103912f1 pop ecx */
  ECX = (pop32());
  /* 103912f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103912f4 pop ecx */
  ECX = (pop32());
  /* 103912f5 jle 0x10391323 */
  if ((C.zf||C.sf!=C.of)) goto L_10391323;
  /* 103912f7 mov esi, 0x10396478 */
  ESI = (0x10396478u);
  /* 103912fc push edi */
  push32((uint32_t)(EDI));
  /* 103912fd push esi */
  push32((uint32_t)(ESI));
  /* 103912fe push edi */
  push32((uint32_t)(EDI));
  /* 103912ff call dword ptr [0x103950cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950cc))), 0x10391305u);
  /* 10391305 push edi */
  push32((uint32_t)(EDI));
  /* 10391306 call ebp */
  call_ind((uint32_t)(EBP), 0x10391308u);
  /* 10391308 push edi */
  push32((uint32_t)(EDI));
  /* 10391309 push 0x10396448 */
  push32((uint32_t)(0x10396448u));
  /* 1039130e push edi */
  push32((uint32_t)(EDI));
  /* 1039130f call dword ptr [0x103950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950dc))), 0x10391315u);
  /* 10391315 push edi */
  push32((uint32_t)(EDI));
  /* 10391316 call dword ptr [0x103950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950c0))), 0x1039131cu);
  /* 1039131c push edi */
  push32((uint32_t)(EDI));
  /* 1039131d push esi */
  push32((uint32_t)(ESI));
  /* 1039131e call ebx */
  call_ind((uint32_t)(EBX), 0x10391320u);
  /* 10391320 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10391323:;
  /* 10391323 mov esi, 0x10396438 */
  ESI = (0x10396438u);
  /* 10391328 push 1 */
  push32((uint32_t)(0x1u));
  /* 1039132a push esi */
  push32((uint32_t)(ESI));
  /* 1039132b call dword ptr [0x103950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950d0))), 0x10391331u);
  /* 10391331 pop ecx */
  ECX = (pop32());
  /* 10391332 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391334 pop ecx */
  ECX = (pop32());
  /* 10391335 jle 0x10391350 */
  if ((C.zf||C.sf!=C.of)) goto L_10391350;
  /* 10391337 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391339 call ebp */
  call_ind((uint32_t)(EBP), 0x1039133bu);
  /* 1039133b push edi */
  push32((uint32_t)(EDI));
  /* 1039133c push esi */
  push32((uint32_t)(ESI));
  /* 1039133d push 1 */
  push32((uint32_t)(0x1u));
  /* 1039133f call dword ptr [0x103950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950dc))), 0x10391345u);
  /* 10391345 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391347 call dword ptr [0x103950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950c0))), 0x1039134du);
  /* 1039134d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10391350:;
  /* 10391350 mov ebp, dword ptr [0x103950e0] */
  EBP = (r32((uint32_t)(0x103950e0)));
  /* 10391356 push 0x10396450 */
  push32((uint32_t)(0x10396450u));
  /* 1039135b call ebp */
  call_ind((uint32_t)(EBP), 0x1039135du);
  /* 1039135d mov esi, dword ptr [0x103950d8] */
  ESI = (r32((uint32_t)(0x103950d8)));
  /* 10391363 pop ecx */
  ECX = (pop32());
  /* 10391364 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391366 jle 0x103913b9 */
  if ((C.zf||C.sf!=C.of)) goto L_103913b9;
  /* 10391368 push 0x10396450 */
  push32((uint32_t)(0x10396450u));
  /* 1039136d call ebp */
  call_ind((uint32_t)(EBP), 0x1039136fu);
  /* 1039136f mov dword ptr [esp], 0x10396450 */
  w32((uint32_t)(ESP), (0x10396450u));
  /* 10391376 push 0x103964f8 */
  push32((uint32_t)(0x103964f8u));
  /* 1039137b mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 1039137f call dword ptr [0x103950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e8))), 0x10391385u);
  /* 10391385 cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391389 pop ecx */
  ECX = (pop32());
  /* 1039138a pop ecx */
  ECX = (pop32());
  /* 1039138b push edi */
  push32((uint32_t)(EDI));
  /* 1039138c jne 0x103913a3 */
  if (!C.zf) goto L_103913a3;
  /* 1039138e push 0x10396548 */
  push32((uint32_t)(0x10396548u));
  /* 10391393 push 0x10396450 */
  push32((uint32_t)(0x10396450u));
  /* 10391398 call dword ptr [0x103950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950ec))), 0x1039139eu);
  /* 1039139e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103913a1 jmp 0x103913b9 */
  goto L_103913b9;
L_103913a3:;
  /* 103913a3 push 0x10396450 */
  push32((uint32_t)(0x10396450u));
  /* 103913a8 call ebx */
  call_ind((uint32_t)(EBX), 0x103913aau);
  /* 103913aa push edi */
  push32((uint32_t)(EDI));
  /* 103913ab push 0x46 */
  push32((uint32_t)(0x46u));
  /* 103913ad push 0x103964f8 */
  push32((uint32_t)(0x103964f8u));
  /* 103913b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103913b4 call esi */
  call_ind((uint32_t)(ESI), 0x103913b6u);
  /* 103913b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103913b9:;
  /* 103913b9 push 0x10396458 */
  push32((uint32_t)(0x10396458u));
  /* 103913be call ebp */
  call_ind((uint32_t)(EBP), 0x103913c0u);
  /* 103913c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103913c2 pop ecx */
  ECX = (pop32());
  /* 103913c3 jle 0x10391416 */
  if ((C.zf||C.sf!=C.of)) goto L_10391416;
  /* 103913c5 push 0x10396458 */
  push32((uint32_t)(0x10396458u));
  /* 103913ca call ebp */
  call_ind((uint32_t)(EBP), 0x103913ccu);
  /* 103913cc mov dword ptr [esp], 0x10396458 */
  w32((uint32_t)(ESP), (0x10396458u));
  /* 103913d3 push 0x10396500 */
  push32((uint32_t)(0x10396500u));
  /* 103913d8 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 103913dc call dword ptr [0x103950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e8))), 0x103913e2u);
  /* 103913e2 cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103913e6 pop ecx */
  ECX = (pop32());
  /* 103913e7 pop ecx */
  ECX = (pop32());
  /* 103913e8 push edi */
  push32((uint32_t)(EDI));
  /* 103913e9 jne 0x10391400 */
  if (!C.zf) goto L_10391400;
  /* 103913eb push 0x10396550 */
  push32((uint32_t)(0x10396550u));
  /* 103913f0 push 0x10396458 */
  push32((uint32_t)(0x10396458u));
  /* 103913f5 call dword ptr [0x103950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950ec))), 0x103913fbu);
  /* 103913fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103913fe jmp 0x10391416 */
  goto L_10391416;
L_10391400:;
  /* 10391400 push 0x10396458 */
  push32((uint32_t)(0x10396458u));
  /* 10391405 call ebx */
  call_ind((uint32_t)(EBX), 0x10391407u);
  /* 10391407 push edi */
  push32((uint32_t)(EDI));
  /* 10391408 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1039140a push 0x10396500 */
  push32((uint32_t)(0x10396500u));
  /* 1039140f push 1 */
  push32((uint32_t)(0x1u));
  /* 10391411 call esi */
  call_ind((uint32_t)(ESI), 0x10391413u);
  /* 10391413 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10391416:;
  /* 10391416 push 0x10396460 */
  push32((uint32_t)(0x10396460u));
  /* 1039141b call ebp */
  call_ind((uint32_t)(EBP), 0x1039141du);
  /* 1039141d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1039141f pop ecx */
  ECX = (pop32());
  /* 10391420 jle 0x10391473 */
  if ((C.zf||C.sf!=C.of)) goto L_10391473;
  /* 10391422 push 0x10396460 */
  push32((uint32_t)(0x10396460u));
  /* 10391427 call ebp */
  call_ind((uint32_t)(EBP), 0x10391429u);
  /* 10391429 mov dword ptr [esp], 0x10396460 */
  w32((uint32_t)(ESP), (0x10396460u));
  /* 10391430 push 0x10396508 */
  push32((uint32_t)(0x10396508u));
  /* 10391435 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 10391439 call dword ptr [0x103950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e8))), 0x1039143fu);
  /* 1039143f cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391443 pop ecx */
  ECX = (pop32());
  /* 10391444 pop ecx */
  ECX = (pop32());
  /* 10391445 push edi */
  push32((uint32_t)(EDI));
  /* 10391446 jne 0x1039145d */
  if (!C.zf) goto L_1039145d;
  /* 10391448 push 0x10396558 */
  push32((uint32_t)(0x10396558u));
  /* 1039144d push 0x10396460 */
  push32((uint32_t)(0x10396460u));
  /* 10391452 call dword ptr [0x103950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950ec))), 0x10391458u);
  /* 10391458 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1039145b jmp 0x10391473 */
  goto L_10391473;
L_1039145d:;
  /* 1039145d push 0x10396460 */
  push32((uint32_t)(0x10396460u));
  /* 10391462 call ebx */
  call_ind((uint32_t)(EBX), 0x10391464u);
  /* 10391464 push edi */
  push32((uint32_t)(EDI));
  /* 10391465 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10391467 push 0x10396508 */
  push32((uint32_t)(0x10396508u));
  /* 1039146c push 1 */
  push32((uint32_t)(0x1u));
  /* 1039146e call esi */
  call_ind((uint32_t)(ESI), 0x10391470u);
  /* 10391470 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10391473:;
  /* 10391473 push 0x10396468 */
  push32((uint32_t)(0x10396468u));
  /* 10391478 call ebp */
  call_ind((uint32_t)(EBP), 0x1039147au);
  /* 1039147a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1039147c pop ecx */
  ECX = (pop32());
  /* 1039147d jle 0x103914d0 */
  if ((C.zf||C.sf!=C.of)) goto L_103914d0;
  /* 1039147f push 0x10396468 */
  push32((uint32_t)(0x10396468u));
  /* 10391484 call ebp */
  call_ind((uint32_t)(EBP), 0x10391486u);
  /* 10391486 mov dword ptr [esp], 0x10396468 */
  w32((uint32_t)(ESP), (0x10396468u));
  /* 1039148d push 0x10396510 */
  push32((uint32_t)(0x10396510u));
  /* 10391492 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 10391496 call dword ptr [0x103950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e8))), 0x1039149cu);
  /* 1039149c cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103914a0 pop ecx */
  ECX = (pop32());
  /* 103914a1 pop ecx */
  ECX = (pop32());
  /* 103914a2 push edi */
  push32((uint32_t)(EDI));
  /* 103914a3 jne 0x103914ba */
  if (!C.zf) goto L_103914ba;
  /* 103914a5 push 0x10396560 */
  push32((uint32_t)(0x10396560u));
  /* 103914aa push 0x10396468 */
  push32((uint32_t)(0x10396468u));
  /* 103914af call dword ptr [0x103950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950ec))), 0x103914b5u);
  /* 103914b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103914b8 jmp 0x103914d0 */
  goto L_103914d0;
L_103914ba:;
  /* 103914ba push 0x10396468 */
  push32((uint32_t)(0x10396468u));
  /* 103914bf call ebx */
  call_ind((uint32_t)(EBX), 0x103914c1u);
  /* 103914c1 push edi */
  push32((uint32_t)(EDI));
  /* 103914c2 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 103914c4 push 0x10396510 */
  push32((uint32_t)(0x10396510u));
  /* 103914c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 103914cb call esi */
  call_ind((uint32_t)(ESI), 0x103914cdu);
  /* 103914cd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103914d0:;
  /* 103914d0 push 0x10396470 */
  push32((uint32_t)(0x10396470u));
  /* 103914d5 call ebp */
  call_ind((uint32_t)(EBP), 0x103914d7u);
  /* 103914d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103914d9 pop ecx */
  ECX = (pop32());
  /* 103914da jle 0x1039152d */
  if ((C.zf||C.sf!=C.of)) goto L_1039152d;
  /* 103914dc push 0x10396470 */
  push32((uint32_t)(0x10396470u));
  /* 103914e1 call ebp */
  call_ind((uint32_t)(EBP), 0x103914e3u);
  /* 103914e3 mov dword ptr [esp], 0x10396470 */
  w32((uint32_t)(ESP), (0x10396470u));
  /* 103914ea push 0x10396518 */
  push32((uint32_t)(0x10396518u));
  /* 103914ef mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 103914f3 call dword ptr [0x103950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e8))), 0x103914f9u);
  /* 103914f9 cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103914fd pop ecx */
  ECX = (pop32());
  /* 103914fe pop ecx */
  ECX = (pop32());
  /* 103914ff push edi */
  push32((uint32_t)(EDI));
  /* 10391500 jne 0x10391517 */
  if (!C.zf) goto L_10391517;
  /* 10391502 push 0x10396568 */
  push32((uint32_t)(0x10396568u));
  /* 10391507 push 0x10396470 */
  push32((uint32_t)(0x10396470u));
  /* 1039150c call dword ptr [0x103950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950ec))), 0x10391512u);
  /* 10391512 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10391515 jmp 0x1039152d */
  goto L_1039152d;
L_10391517:;
  /* 10391517 push 0x10396470 */
  push32((uint32_t)(0x10396470u));
  /* 1039151c call ebx */
  call_ind((uint32_t)(EBX), 0x1039151eu);
  /* 1039151e push edi */
  push32((uint32_t)(EDI));
  /* 1039151f push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10391521 push 0x10396518 */
  push32((uint32_t)(0x10396518u));
  /* 10391526 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391528 call esi */
  call_ind((uint32_t)(ESI), 0x1039152au);
  /* 1039152a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1039152d:;
  /* 1039152d push 0x10396480 */
  push32((uint32_t)(0x10396480u));
  /* 10391532 call ebp */
  call_ind((uint32_t)(EBP), 0x10391534u);
  /* 10391534 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391536 pop ecx */
  ECX = (pop32());
  /* 10391537 jle 0x10391575 */
  if ((C.zf||C.sf!=C.of)) goto L_10391575;
  /* 10391539 push 0x10396480 */
  push32((uint32_t)(0x10396480u));
  /* 1039153e call ebp */
  call_ind((uint32_t)(EBP), 0x10391540u);
  /* 10391540 mov dword ptr [esp], 0x10396480 */
  w32((uint32_t)(ESP), (0x10396480u));
  /* 10391547 push 0x10396520 */
  push32((uint32_t)(0x10396520u));
  /* 1039154c mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 10391550 call dword ptr [0x103950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e8))), 0x10391556u);
  /* 10391556 cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039155a pop ecx */
  ECX = (pop32());
  /* 1039155b pop ecx */
  ECX = (pop32());
  /* 1039155c jge 0x10391575 */
  if ((C.sf==C.of)) goto L_10391575;
  /* 1039155e push edi */
  push32((uint32_t)(EDI));
  /* 1039155f push 0x10396480 */
  push32((uint32_t)(0x10396480u));
  /* 10391564 call ebx */
  call_ind((uint32_t)(EBX), 0x10391566u);
  /* 10391566 push edi */
  push32((uint32_t)(EDI));
  /* 10391567 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10391569 push 0x10396520 */
  push32((uint32_t)(0x10396520u));
  /* 1039156e push 1 */
  push32((uint32_t)(0x1u));
  /* 10391570 call esi */
  call_ind((uint32_t)(ESI), 0x10391572u);
  /* 10391572 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10391575:;
  /* 10391575 push 0x10396488 */
  push32((uint32_t)(0x10396488u));
  /* 1039157a call ebp */
  call_ind((uint32_t)(EBP), 0x1039157cu);
  /* 1039157c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1039157e pop ecx */
  ECX = (pop32());
  /* 1039157f jle 0x103915bd */
  if ((C.zf||C.sf!=C.of)) goto L_103915bd;
  /* 10391581 push 0x10396488 */
  push32((uint32_t)(0x10396488u));
  /* 10391586 call ebp */
  call_ind((uint32_t)(EBP), 0x10391588u);
  /* 10391588 mov dword ptr [esp], 0x10396488 */
  w32((uint32_t)(ESP), (0x10396488u));
  /* 1039158f push 0x10396528 */
  push32((uint32_t)(0x10396528u));
  /* 10391594 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 10391598 call dword ptr [0x103950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e8))), 0x1039159eu);
  /* 1039159e cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103915a2 pop ecx */
  ECX = (pop32());
  /* 103915a3 pop ecx */
  ECX = (pop32());
  /* 103915a4 jge 0x103915bd */
  if ((C.sf==C.of)) goto L_103915bd;
  /* 103915a6 push edi */
  push32((uint32_t)(EDI));
  /* 103915a7 push 0x10396488 */
  push32((uint32_t)(0x10396488u));
  /* 103915ac call ebx */
  call_ind((uint32_t)(EBX), 0x103915aeu);
  /* 103915ae push edi */
  push32((uint32_t)(EDI));
  /* 103915af push 0x46 */
  push32((uint32_t)(0x46u));
  /* 103915b1 push 0x10396528 */
  push32((uint32_t)(0x10396528u));
  /* 103915b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103915b8 call esi */
  call_ind((uint32_t)(ESI), 0x103915bau);
  /* 103915ba add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103915bd:;
  /* 103915bd push 0x10396490 */
  push32((uint32_t)(0x10396490u));
  /* 103915c2 call ebp */
  call_ind((uint32_t)(EBP), 0x103915c4u);
  /* 103915c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103915c6 pop ecx */
  ECX = (pop32());
  /* 103915c7 jle 0x10391605 */
  if ((C.zf||C.sf!=C.of)) goto L_10391605;
  /* 103915c9 push 0x10396490 */
  push32((uint32_t)(0x10396490u));
  /* 103915ce call ebp */
  call_ind((uint32_t)(EBP), 0x103915d0u);
  /* 103915d0 mov dword ptr [esp], 0x10396490 */
  w32((uint32_t)(ESP), (0x10396490u));
  /* 103915d7 push 0x10396530 */
  push32((uint32_t)(0x10396530u));
  /* 103915dc mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 103915e0 call dword ptr [0x103950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e8))), 0x103915e6u);
  /* 103915e6 cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103915ea pop ecx */
  ECX = (pop32());
  /* 103915eb pop ecx */
  ECX = (pop32());
  /* 103915ec jge 0x10391605 */
  if ((C.sf==C.of)) goto L_10391605;
  /* 103915ee push edi */
  push32((uint32_t)(EDI));
  /* 103915ef push 0x10396490 */
  push32((uint32_t)(0x10396490u));
  /* 103915f4 call ebx */
  call_ind((uint32_t)(EBX), 0x103915f6u);
  /* 103915f6 push edi */
  push32((uint32_t)(EDI));
  /* 103915f7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 103915f9 push 0x10396530 */
  push32((uint32_t)(0x10396530u));
  /* 103915fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10391600 call esi */
  call_ind((uint32_t)(ESI), 0x10391602u);
  /* 10391602 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10391605:;
  /* 10391605 push 0x10396498 */
  push32((uint32_t)(0x10396498u));
  /* 1039160a call ebp */
  call_ind((uint32_t)(EBP), 0x1039160cu);
  /* 1039160c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1039160e pop ecx */
  ECX = (pop32());
  /* 1039160f jle 0x1039164d */
  if ((C.zf||C.sf!=C.of)) goto L_1039164d;
  /* 10391611 push 0x10396498 */
  push32((uint32_t)(0x10396498u));
  /* 10391616 call ebp */
  call_ind((uint32_t)(EBP), 0x10391618u);
  /* 10391618 mov dword ptr [esp], 0x10396498 */
  w32((uint32_t)(ESP), (0x10396498u));
  /* 1039161f push 0x10396538 */
  push32((uint32_t)(0x10396538u));
  /* 10391624 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 10391628 call dword ptr [0x103950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e8))), 0x1039162eu);
  /* 1039162e cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391632 pop ecx */
  ECX = (pop32());
  /* 10391633 pop ecx */
  ECX = (pop32());
  /* 10391634 jge 0x1039164d */
  if ((C.sf==C.of)) goto L_1039164d;
  /* 10391636 push edi */
  push32((uint32_t)(EDI));
  /* 10391637 push 0x10396498 */
  push32((uint32_t)(0x10396498u));
  /* 1039163c call ebx */
  call_ind((uint32_t)(EBX), 0x1039163eu);
  /* 1039163e push edi */
  push32((uint32_t)(EDI));
  /* 1039163f push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10391641 push 0x10396538 */
  push32((uint32_t)(0x10396538u));
  /* 10391646 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391648 call esi */
  call_ind((uint32_t)(ESI), 0x1039164au);
  /* 1039164a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1039164d:;
  /* 1039164d push 1 */
  push32((uint32_t)(0x1u));
  /* 1039164f call dword ptr [0x103950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b0))), 0x10391655u);
  /* 10391655 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10391657 pop ecx */
  ECX = (pop32());
  /* 10391658 je 0x10391699 */
  if (C.zf) goto L_10391699;
  /* 1039165a push 1 */
  push32((uint32_t)(0x1u));
  /* 1039165c push 0x103964b8 */
  push32((uint32_t)(0x103964b8u));
  /* 10391661 call dword ptr [0x103950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950d0))), 0x10391667u);
  /* 10391667 pop ecx */
  ECX = (pop32());
  /* 10391668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1039166a pop ecx */
  ECX = (pop32());
  /* 1039166b jne 0x10391699 */
  if (!C.zf) goto L_10391699;
  /* 1039166d mov esi, dword ptr [0x103950bc] */
  ESI = (r32((uint32_t)(0x103950bc)));
  /* 10391673 push edi */
  push32((uint32_t)(EDI));
  /* 10391674 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391676 call esi */
  call_ind((uint32_t)(ESI), 0x10391678u);
  /* 10391678 push 0x103960f4 */
  push32((uint32_t)(0x103960f4u));
  /* 1039167d call dword ptr [0x103950b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b4))), 0x10391683u);
  /* 10391683 push edi */
  push32((uint32_t)(EDI));
  /* 10391684 push 0x103964c8 */
  push32((uint32_t)(0x103964c8u));
  /* 10391689 call ebx */
  call_ind((uint32_t)(EBX), 0x1039168bu);
  /* 1039168b push edi */
  push32((uint32_t)(EDI));
  /* 1039168c push 1 */
  push32((uint32_t)(0x1u));
  /* 1039168e call dword ptr [0x103950e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e4))), 0x10391694u);
  /* 10391694 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10391697 jmp 0x1039169f */
  goto L_1039169f;
L_10391699:;
  /* 10391699 mov esi, dword ptr [0x103950bc] */
  ESI = (r32((uint32_t)(0x103950bc)));
L_1039169f:;
  /* 1039169f push 1 */
  push32((uint32_t)(0x1u));
  /* 103916a1 call dword ptr [0x103950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b0))), 0x103916a7u);
  /* 103916a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103916a9 pop ecx */
  ECX = (pop32());
  /* 103916aa je 0x103916d2 */
  if (C.zf) goto L_103916d2;
  /* 103916ac push edi */
  push32((uint32_t)(EDI));
  /* 103916ad push 0x10396540 */
  push32((uint32_t)(0x10396540u));
  /* 103916b2 call dword ptr [0x103950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950f4))), 0x103916b8u);
  /* 103916b8 pop ecx */
  ECX = (pop32());
  /* 103916b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103916bb pop ecx */
  ECX = (pop32());
  /* 103916bc jle 0x103916d2 */
  if ((C.zf||C.sf!=C.of)) goto L_103916d2;
  /* 103916be push edi */
  push32((uint32_t)(EDI));
  /* 103916bf push 0x10396540 */
  push32((uint32_t)(0x10396540u));
  /* 103916c4 push 0x103964c8 */
  push32((uint32_t)(0x103964c8u));
  /* 103916c9 call dword ptr [0x103950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950f8))), 0x103916cfu);
  /* 103916cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103916d2:;
  /* 103916d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103916d4 call dword ptr [0x103950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b0))), 0x103916dau);
  /* 103916da test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103916dc pop ecx */
  ECX = (pop32());
  /* 103916dd je 0x103916fe */
  if (C.zf) goto L_103916fe;
  /* 103916df push 0x103964c0 */
  push32((uint32_t)(0x103964c0u));
  /* 103916e4 call ebp */
  call_ind((uint32_t)(EBP), 0x103916e6u);
  /* 103916e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103916e8 pop ecx */
  ECX = (pop32());
  /* 103916e9 jne 0x103916fe */
  if (!C.zf) goto L_103916fe;
  /* 103916eb push edi */
  push32((uint32_t)(EDI));
  /* 103916ec push 2 */
  push32((uint32_t)(0x2u));
  /* 103916ee call esi */
  call_ind((uint32_t)(ESI), 0x103916f0u);
  /* 103916f0 push 0x103960ec */
  push32((uint32_t)(0x103960ecu));
  /* 103916f5 call dword ptr [0x103950b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b4))), 0x103916fbu);
  /* 103916fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103916fe:;
  /* 103916fe push 3 */
  push32((uint32_t)(0x3u));
  /* 10391700 call dword ptr [0x103950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b0))), 0x10391706u);
  /* 10391706 mov ebp, dword ptr [0x103950f0] */
  EBP = (r32((uint32_t)(0x103950f0)));
  /* 1039170c pop ecx */
  ECX = (pop32());
  /* 1039170d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1039170f je 0x1039173f */
  if (C.zf) goto L_1039173f;
  /* 10391711 push edi */
  push32((uint32_t)(EDI));
  /* 10391712 push 0x103964d8 */
  push32((uint32_t)(0x103964d8u));
  /* 10391717 call dword ptr [0x103950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950f4))), 0x1039171du);
  /* 1039171d pop ecx */
  ECX = (pop32());
  /* 1039171e cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391721 pop ecx */
  ECX = (pop32());
  /* 10391722 jle 0x1039173f */
  if ((C.zf||C.sf!=C.of)) goto L_1039173f;
  /* 10391724 push edi */
  push32((uint32_t)(EDI));
  /* 10391725 push 3 */
  push32((uint32_t)(0x3u));
  /* 10391727 call esi */
  call_ind((uint32_t)(ESI), 0x10391729u);
  /* 10391729 push edi */
  push32((uint32_t)(EDI));
  /* 1039172a push 0x103964a8 */
  push32((uint32_t)(0x103964a8u));
  /* 1039172f call ebx */
  call_ind((uint32_t)(EBX), 0x10391731u);
  /* 10391731 push edi */
  push32((uint32_t)(EDI));
  /* 10391732 push edi */
  push32((uint32_t)(EDI));
  /* 10391733 push 0x103964d8 */
  push32((uint32_t)(0x103964d8u));
  /* 10391738 push 1 */
  push32((uint32_t)(0x1u));
  /* 1039173a call ebp */
  call_ind((uint32_t)(EBP), 0x1039173cu);
  /* 1039173c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1039173f:;
  /* 1039173f push 3 */
  push32((uint32_t)(0x3u));
  /* 10391741 call dword ptr [0x103950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b0))), 0x10391747u);
  /* 10391747 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10391749 pop ecx */
  ECX = (pop32());
  /* 1039174a je 0x1039177a */
  if (C.zf) goto L_1039177a;
  /* 1039174c push edi */
  push32((uint32_t)(EDI));
  /* 1039174d push 0x103964e0 */
  push32((uint32_t)(0x103964e0u));
  /* 10391752 call dword ptr [0x103950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950f4))), 0x10391758u);
  /* 10391758 pop ecx */
  ECX = (pop32());
  /* 10391759 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039175c pop ecx */
  ECX = (pop32());
  /* 1039175d jle 0x1039177a */
  if ((C.zf||C.sf!=C.of)) goto L_1039177a;
  /* 1039175f push edi */
  push32((uint32_t)(EDI));
  /* 10391760 push 3 */
  push32((uint32_t)(0x3u));
  /* 10391762 call esi */
  call_ind((uint32_t)(ESI), 0x10391764u);
  /* 10391764 push edi */
  push32((uint32_t)(EDI));
  /* 10391765 push 0x103964a8 */
  push32((uint32_t)(0x103964a8u));
  /* 1039176a call ebx */
  call_ind((uint32_t)(EBX), 0x1039176cu);
  /* 1039176c push edi */
  push32((uint32_t)(EDI));
  /* 1039176d push edi */
  push32((uint32_t)(EDI));
  /* 1039176e push 0x103964e0 */
  push32((uint32_t)(0x103964e0u));
  /* 10391773 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391775 call ebp */
  call_ind((uint32_t)(EBP), 0x10391777u);
  /* 10391777 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1039177a:;
  /* 1039177a push 3 */
  push32((uint32_t)(0x3u));
  /* 1039177c call dword ptr [0x103950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b0))), 0x10391782u);
  /* 10391782 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10391784 pop ecx */
  ECX = (pop32());
  /* 10391785 je 0x103917b5 */
  if (C.zf) goto L_103917b5;
  /* 10391787 push edi */
  push32((uint32_t)(EDI));
  /* 10391788 push 0x103964e8 */
  push32((uint32_t)(0x103964e8u));
  /* 1039178d call dword ptr [0x103950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950f4))), 0x10391793u);
  /* 10391793 pop ecx */
  ECX = (pop32());
  /* 10391794 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391797 pop ecx */
  ECX = (pop32());
  /* 10391798 jle 0x103917b5 */
  if ((C.zf||C.sf!=C.of)) goto L_103917b5;
  /* 1039179a push edi */
  push32((uint32_t)(EDI));
  /* 1039179b push 3 */
  push32((uint32_t)(0x3u));
  /* 1039179d call esi */
  call_ind((uint32_t)(ESI), 0x1039179fu);
  /* 1039179f push edi */
  push32((uint32_t)(EDI));
  /* 103917a0 push 0x103964a8 */
  push32((uint32_t)(0x103964a8u));
  /* 103917a5 call ebx */
  call_ind((uint32_t)(EBX), 0x103917a7u);
  /* 103917a7 push edi */
  push32((uint32_t)(EDI));
  /* 103917a8 push edi */
  push32((uint32_t)(EDI));
  /* 103917a9 push 0x103964e8 */
  push32((uint32_t)(0x103964e8u));
  /* 103917ae push 1 */
  push32((uint32_t)(0x1u));
  /* 103917b0 call ebp */
  call_ind((uint32_t)(EBP), 0x103917b2u);
  /* 103917b2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103917b5:;
  /* 103917b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 103917b7 call dword ptr [0x103950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b0))), 0x103917bdu);
  /* 103917bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103917bf pop ecx */
  ECX = (pop32());
  /* 103917c0 je 0x103917f3 */
  if (C.zf) goto L_103917f3;
  /* 103917c2 push 0x10396438 */
  push32((uint32_t)(0x10396438u));
  /* 103917c7 push 0x103964d8 */
  push32((uint32_t)(0x103964d8u));
  /* 103917cc call dword ptr [0x103950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e8))), 0x103917d2u);
  /* 103917d2 pop ecx */
  ECX = (pop32());
  /* 103917d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103917d5 pop ecx */
  ECX = (pop32());
  /* 103917d6 jle 0x103917f3 */
  if ((C.zf||C.sf!=C.of)) goto L_103917f3;
  /* 103917d8 push edi */
  push32((uint32_t)(EDI));
  /* 103917d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 103917db call esi */
  call_ind((uint32_t)(ESI), 0x103917ddu);
  /* 103917dd push edi */
  push32((uint32_t)(EDI));
  /* 103917de push 0x103964b0 */
  push32((uint32_t)(0x103964b0u));
  /* 103917e3 call ebx */
  call_ind((uint32_t)(EBX), 0x103917e5u);
  /* 103917e5 push edi */
  push32((uint32_t)(EDI));
  /* 103917e6 push edi */
  push32((uint32_t)(EDI));
  /* 103917e7 push 0x103964d8 */
  push32((uint32_t)(0x103964d8u));
  /* 103917ec push 1 */
  push32((uint32_t)(0x1u));
  /* 103917ee call ebp */
  call_ind((uint32_t)(EBP), 0x103917f0u);
  /* 103917f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103917f3:;
  /* 103917f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 103917f5 call dword ptr [0x103950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b0))), 0x103917fbu);
  /* 103917fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103917fd pop ecx */
  ECX = (pop32());
  /* 103917fe je 0x10391831 */
  if (C.zf) goto L_10391831;
  /* 10391800 push 0x10396438 */
  push32((uint32_t)(0x10396438u));
  /* 10391805 push 0x103964e0 */
  push32((uint32_t)(0x103964e0u));
  /* 1039180a call dword ptr [0x103950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e8))), 0x10391810u);
  /* 10391810 pop ecx */
  ECX = (pop32());
  /* 10391811 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391813 pop ecx */
  ECX = (pop32());
  /* 10391814 jle 0x10391831 */
  if ((C.zf||C.sf!=C.of)) goto L_10391831;
  /* 10391816 push edi */
  push32((uint32_t)(EDI));
  /* 10391817 push 4 */
  push32((uint32_t)(0x4u));
  /* 10391819 call esi */
  call_ind((uint32_t)(ESI), 0x1039181bu);
  /* 1039181b push edi */
  push32((uint32_t)(EDI));
  /* 1039181c push 0x103964b0 */
  push32((uint32_t)(0x103964b0u));
  /* 10391821 call ebx */
  call_ind((uint32_t)(EBX), 0x10391823u);
  /* 10391823 push edi */
  push32((uint32_t)(EDI));
  /* 10391824 push edi */
  push32((uint32_t)(EDI));
  /* 10391825 push 0x103964e0 */
  push32((uint32_t)(0x103964e0u));
  /* 1039182a push 1 */
  push32((uint32_t)(0x1u));
  /* 1039182c call ebp */
  call_ind((uint32_t)(EBP), 0x1039182eu);
  /* 1039182e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10391831:;
  /* 10391831 push 4 */
  push32((uint32_t)(0x4u));
  /* 10391833 call dword ptr [0x103950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b0))), 0x10391839u);
  /* 10391839 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1039183b pop ecx */
  ECX = (pop32());
  /* 1039183c je 0x1039186f */
  if (C.zf) goto L_1039186f;
  /* 1039183e push 0x10396438 */
  push32((uint32_t)(0x10396438u));
  /* 10391843 push 0x103964e8 */
  push32((uint32_t)(0x103964e8u));
  /* 10391848 call dword ptr [0x103950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e8))), 0x1039184eu);
  /* 1039184e pop ecx */
  ECX = (pop32());
  /* 1039184f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391851 pop ecx */
  ECX = (pop32());
  /* 10391852 jle 0x1039186f */
  if ((C.zf||C.sf!=C.of)) goto L_1039186f;
  /* 10391854 push edi */
  push32((uint32_t)(EDI));
  /* 10391855 push 4 */
  push32((uint32_t)(0x4u));
  /* 10391857 call esi */
  call_ind((uint32_t)(ESI), 0x10391859u);
  /* 10391859 push edi */
  push32((uint32_t)(EDI));
  /* 1039185a push 0x103964b0 */
  push32((uint32_t)(0x103964b0u));
  /* 1039185f call ebx */
  call_ind((uint32_t)(EBX), 0x10391861u);
  /* 10391861 push edi */
  push32((uint32_t)(EDI));
  /* 10391862 push edi */
  push32((uint32_t)(EDI));
  /* 10391863 push 0x103964e8 */
  push32((uint32_t)(0x103964e8u));
  /* 10391868 push 1 */
  push32((uint32_t)(0x1u));
  /* 1039186a call ebp */
  call_ind((uint32_t)(EBP), 0x1039186cu);
  /* 1039186c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1039186f:;
  /* 1039186f mov ebp, dword ptr [0x103950b0] */
  EBP = (r32((uint32_t)(0x103950b0)));
  /* 10391875 push 5 */
  push32((uint32_t)(0x5u));
  /* 10391877 call ebp */
  call_ind((uint32_t)(EBP), 0x10391879u);
  /* 10391879 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1039187b pop ecx */
  ECX = (pop32());
  /* 1039187c je 0x103918a9 */
  if (C.zf) goto L_103918a9;
  /* 1039187e push edi */
  push32((uint32_t)(EDI));
  /* 1039187f push 0x10396430 */
  push32((uint32_t)(0x10396430u));
  /* 10391884 call dword ptr [0x103950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950d0))), 0x1039188au);
  /* 1039188a pop ecx */
  ECX = (pop32());
  /* 1039188b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1039188d pop ecx */
  ECX = (pop32());
  /* 1039188e jne 0x103918a9 */
  if (!C.zf) goto L_103918a9;
  /* 10391890 push edi */
  push32((uint32_t)(EDI));
  /* 10391891 push 5 */
  push32((uint32_t)(0x5u));
  /* 10391893 call esi */
  call_ind((uint32_t)(ESI), 0x10391895u);
  /* 10391895 push 0x103960e4 */
  push32((uint32_t)(0x103960e4u));
  /* 1039189a call dword ptr [0x103950b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b4))), 0x103918a0u);
  /* 103918a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103918a3 call dword ptr [0x10395100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395100))), 0x103918a9u);
L_103918a9:;
  /* 103918a9 push 6 */
  push32((uint32_t)(0x6u));
  /* 103918ab call ebp */
  call_ind((uint32_t)(EBP), 0x103918adu);
  /* 103918ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103918af pop ecx */
  ECX = (pop32());
  /* 103918b0 je 0x10391930 */
  if (C.zf) goto L_10391930;
  /* 103918b2 push edi */
  push32((uint32_t)(EDI));
  /* 103918b3 call dword ptr [0x103950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950c8))), 0x103918b9u);
  /* 103918b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 103918bb pop ecx */
  ECX = (pop32());
  /* 103918bc sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103918be mov dword ptr [esp], 0x10396440 */
  w32((uint32_t)(ESP), (0x10396440u));
  /* 103918c5 lea ebp, [ecx + ecx*4] */
  EBP = ((uint32_t)(ECX + ECX*4));
  /* 103918c8 call dword ptr [0x103950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e0))), 0x103918ceu);
  /* 103918ce cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103918d0 pop ecx */
  ECX = (pop32());
  /* 103918d1 jl 0x10391904 */
  if ((C.sf!=C.of)) goto L_10391904;
  /* 103918d3 push edi */
  push32((uint32_t)(EDI));
  /* 103918d4 call dword ptr [0x103950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950c8))), 0x103918dau);
  /* 103918da push 5 */
  push32((uint32_t)(0x5u));
  /* 103918dc pop ecx */
  ECX = (pop32());
  /* 103918dd sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103918df mov dword ptr [esp], 0x10396440 */
  w32((uint32_t)(ESP), (0x10396440u));
  /* 103918e6 lea ebp, [ecx + ecx*4] */
  EBP = ((uint32_t)(ECX + ECX*4));
  /* 103918e9 shl ebp, 2 */
  EBP = (sh_shl((uint32_t)(EBP), (0x2u)&0x1f, 32));
  /* 103918ec call dword ptr [0x103950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e0))), 0x103918f2u);
  /* 103918f2 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103918f4 pop ecx */
  ECX = (pop32());
  /* 103918f5 jge 0x10391930 */
  if ((C.sf==C.of)) goto L_10391930;
  /* 103918f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103918f9 call dword ptr [0x103950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b0))), 0x103918ffu);
  /* 103918ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10391901 pop ecx */
  ECX = (pop32());
  /* 10391902 jne 0x10391930 */
  if (!C.zf) goto L_10391930;
L_10391904:;
  /* 10391904 push edi */
  push32((uint32_t)(EDI));
  /* 10391905 push 6 */
  push32((uint32_t)(0x6u));
  /* 10391907 call esi */
  call_ind((uint32_t)(ESI), 0x10391909u);
  /* 10391909 push edi */
  push32((uint32_t)(EDI));
  /* 1039190a push 0x10396440 */
  push32((uint32_t)(0x10396440u));
  /* 1039190f call ebx */
  call_ind((uint32_t)(EBX), 0x10391911u);
  /* 10391911 push edi */
  push32((uint32_t)(EDI));
  /* 10391912 push edi */
  push32((uint32_t)(EDI));
  /* 10391913 push 0x103964f0 */
  push32((uint32_t)(0x103964f0u));
  /* 10391918 push 1 */
  push32((uint32_t)(0x1u));
  /* 1039191a call dword ptr [0x103950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950d8))), 0x10391920u);
  /* 10391920 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10391925 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391927 call dword ptr [0x10395104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395104))), 0x1039192du);
  /* 1039192d add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10391930:;
  /* 10391930 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391932 call dword ptr [0x103950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950fc))), 0x10391938u);
  /* 10391938 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1039193a pop ecx */
  ECX = (pop32());
  /* 1039193b je 0x1039194f */
  if (C.zf) goto L_1039194f;
  /* 1039193d push 0x103960dc */
  push32((uint32_t)(0x103960dcu));
  /* 10391942 call dword ptr [0x103950b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b4))), 0x10391948u);
  /* 10391948 pop ecx */
  ECX = (pop32());
  /* 10391949 call dword ptr [0x1039510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1039510c))), 0x1039194fu);
L_1039194f:;
  /* 1039194f mov ebx, dword ptr [0x103950b0] */
  EBX = (r32((uint32_t)(0x103950b0)));
  /* 10391955 push 7 */
  push32((uint32_t)(0x7u));
  /* 10391957 call ebx */
  call_ind((uint32_t)(EBX), 0x10391959u);
  /* 10391959 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1039195b pop ecx */
  ECX = (pop32());
  /* 1039195c je 0x10391997 */
  if (C.zf) goto L_10391997;
  /* 1039195e call dword ptr [0x10395110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395110))), 0x10391964u);
  /* 10391964 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391969 jle 0x10391997 */
  if ((C.zf||C.sf!=C.of)) goto L_10391997;
  /* 1039196b push 1 */
  push32((uint32_t)(0x1u));
  /* 1039196d call ebx */
  call_ind((uint32_t)(EBX), 0x1039196fu);
  /* 1039196f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10391971 pop ecx */
  ECX = (pop32());
  /* 10391972 je 0x10391997 */
  if (C.zf) goto L_10391997;
  /* 10391974 push 0x103964c8 */
  push32((uint32_t)(0x103964c8u));
  /* 10391979 call dword ptr [0x103950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950e0))), 0x1039197fu);
  /* 1039197f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391981 pop ecx */
  ECX = (pop32());
  /* 10391982 jle 0x10391997 */
  if ((C.zf||C.sf!=C.of)) goto L_10391997;
  /* 10391984 push edi */
  push32((uint32_t)(EDI));
  /* 10391985 push 7 */
  push32((uint32_t)(0x7u));
  /* 10391987 call esi */
  call_ind((uint32_t)(ESI), 0x10391989u);
  /* 10391989 push 0x103960d4 */
  push32((uint32_t)(0x103960d4u));
  /* 1039198e call dword ptr [0x103950b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950b4))), 0x10391994u);
  /* 10391994 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10391997:;
  /* 10391997 pop edi */
  EDI = (pop32());
  /* 10391998 pop esi */
  ESI = (pop32());
  /* 10391999 pop ebp */
  EBP = (pop32());
  /* 1039199a pop ebx */
  EBX = (pop32());
  /* 1039199b pop ecx */
  ECX = (pop32());
  /* 1039199c ret  */
  ESPCHK(0x1039121cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000199d @ 0x1039199d (217 bytes, 57 insns) */
void f_1039199d(void) {
  FTRACE(0x1039199du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1039199d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103919a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103919a4 jne 0x10391a32 */
  if (!C.zf) goto L_10391a32;
  /* 103919aa call dword ptr [0x10395064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395064))), 0x103919b0u);
  /* 103919b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103919b2 mov dword ptr [0x1039658c], eax */
  w32((uint32_t)(0x1039658c), (EAX));
  /* 103919b7 call 0x103923d1 */
  push32(0x103919bcu); f_103923d1();
  /* 103919bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103919be pop ecx */
  ECX = (pop32());
  /* 103919bf je 0x103919fd */
  if (C.zf) goto L_103919fd;
  /* 103919c1 mov eax, dword ptr [0x1039658c] */
  EAX = (r32((uint32_t)(0x1039658c)));
  /* 103919c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103919c8 mov cl, byte ptr [0x1039658d] */
  CL = (r8((uint32_t)(0x1039658d)));
  /* 103919ce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103919d3 shr dword ptr [0x1039658c], 0x10 */
  w32((uint32_t)(0x1039658c), (sh_shr((uint32_t)(r32((uint32_t)(0x1039658c))), (0x10u)&0x1f, 32)));
  /* 103919da mov dword ptr [0x10396594], eax */
  w32((uint32_t)(0x10396594), (EAX));
  /* 103919df mov dword ptr [0x10396598], ecx */
  w32((uint32_t)(0x10396598), (ECX));
  /* 103919e5 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 103919e8 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103919ea mov dword ptr [0x10396590], eax */
  w32((uint32_t)(0x10396590), (EAX));
  /* 103919ef call 0x10391c64 */
  push32(0x103919f4u); f_10391c64();
  /* 103919f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103919f6 jne 0x10391a01 */
  if (!C.zf) goto L_10391a01;
  /* 103919f8 call 0x1039240d */
  push32(0x103919fdu); f_1039240d();
L_103919fd:;
  /* 103919fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103919ff jmp 0x10391a73 */
  goto L_10391a73;
L_10391a01:;
  /* 10391a01 call dword ptr [0x10395060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395060))), 0x10391a07u);
  /* 10391a07 mov dword ptr [0x10396af8], eax */
  w32((uint32_t)(0x10396af8), (EAX));
  /* 10391a0c call 0x1039229f */
  push32(0x10391a11u); f_1039229f();
  /* 10391a11 mov dword ptr [0x10396578], eax */
  w32((uint32_t)(0x10396578), (EAX));
  /* 10391a16 call 0x10391d89 */
  push32(0x10391a1bu); f_10391d89();
  /* 10391a1b call 0x10392052 */
  push32(0x10391a20u); f_10392052();
  /* 10391a20 call 0x10391f99 */
  push32(0x10391a25u); f_10391f99();
  /* 10391a25 call 0x10391b46 */
  push32(0x10391a2au); f_10391b46();
  /* 10391a2a inc dword ptr [0x10396574] */
  { uint32_t _r=(r32((uint32_t)(0x10396574)))+1; w32((uint32_t)(0x10396574), (_r)); fl_inc(_r,32); }
  /* 10391a30 jmp 0x10391a70 */
  goto L_10391a70;
L_10391a32:;
  /* 10391a32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10391a34 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391a36 jne 0x10391a64 */
  if (!C.zf) goto L_10391a64;
  /* 10391a38 cmp dword ptr [0x10396574], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10396574))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391a3e jle 0x103919fd */
  if ((C.zf||C.sf!=C.of)) goto L_103919fd;
  /* 10391a40 dec dword ptr [0x10396574] */
  { uint32_t _r=(r32((uint32_t)(0x10396574)))-1; w32((uint32_t)(0x10396574), (_r)); fl_dec(_r,32); }
  /* 10391a46 cmp dword ptr [0x103965c4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x103965c4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391a4c jne 0x10391a53 */
  if (!C.zf) goto L_10391a53;
  /* 10391a4e call 0x10391b84 */
  push32(0x10391a53u); f_10391b84();
L_10391a53:;
  /* 10391a53 call 0x10391f45 */
  push32(0x10391a58u); f_10391f45();
  /* 10391a58 call 0x10391cb8 */
  push32(0x10391a5du); f_10391cb8();
  /* 10391a5d call 0x1039240d */
  push32(0x10391a62u); f_1039240d();
  /* 10391a62 jmp 0x10391a70 */
  goto L_10391a70;
L_10391a64:;
  /* 10391a64 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391a67 jne 0x10391a70 */
  if (!C.zf) goto L_10391a70;
  /* 10391a69 push ecx */
  push32((uint32_t)(ECX));
  /* 10391a6a call 0x10391ce9 */
  push32(0x10391a6fu); f_10391ce9();
  /* 10391a6f pop ecx */
  ECX = (pop32());
L_10391a70:;
  /* 10391a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391a72 pop eax */
  EAX = (pop32());
L_10391a73:;
  /* 10391a73 ret 0xc */
  ESPCHK(0x1039199du, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10391a76 (157 bytes, 73 insns) */
void f_10391a76(void) {
  FTRACE(0x10391a76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391a76 push ebp */
  push32((uint32_t)(EBP));
  /* 10391a77 mov ebp, esp */
  EBP = (ESP);
  /* 10391a79 push ebx */
  push32((uint32_t)(EBX));
  /* 10391a7a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10391a7d push esi */
  push32((uint32_t)(ESI));
  /* 10391a7e mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10391a81 push edi */
  push32((uint32_t)(EDI));
  /* 10391a82 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10391a85 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10391a87 jne 0x10391a92 */
  if (!C.zf) goto L_10391a92;
  /* 10391a89 cmp dword ptr [0x10396574], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10396574))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391a90 jmp 0x10391ab8 */
  goto L_10391ab8;
L_10391a92:;
  /* 10391a92 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391a95 je 0x10391a9c */
  if (C.zf) goto L_10391a9c;
  /* 10391a97 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391a9a jne 0x10391abe */
  if (!C.zf) goto L_10391abe;
L_10391a9c:;
  /* 10391a9c mov eax, dword ptr [0x10396afc] */
  EAX = (r32((uint32_t)(0x10396afc)));
  /* 10391aa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391aa3 je 0x10391aae */
  if (C.zf) goto L_10391aae;
  /* 10391aa5 push edi */
  push32((uint32_t)(EDI));
  /* 10391aa6 push esi */
  push32((uint32_t)(ESI));
  /* 10391aa7 push ebx */
  push32((uint32_t)(EBX));
  /* 10391aa8 call eax */
  call_ind((uint32_t)(EAX), 0x10391aaau);
  /* 10391aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391aac je 0x10391aba */
  if (C.zf) goto L_10391aba;
L_10391aae:;
  /* 10391aae push edi */
  push32((uint32_t)(EDI));
  /* 10391aaf push esi */
  push32((uint32_t)(ESI));
  /* 10391ab0 push ebx */
  push32((uint32_t)(EBX));
  /* 10391ab1 call 0x1039199d */
  push32(0x10391ab6u); f_1039199d();
  /* 10391ab6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10391ab8:;
  /* 10391ab8 jne 0x10391abe */
  if (!C.zf) goto L_10391abe;
L_10391aba:;
  /* 10391aba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10391abc jmp 0x10391b0c */
  goto L_10391b0c;
L_10391abe:;
  /* 10391abe push edi */
  push32((uint32_t)(EDI));
  /* 10391abf push esi */
  push32((uint32_t)(ESI));
  /* 10391ac0 push ebx */
  push32((uint32_t)(EBX));
  /* 10391ac1 call 0x10391000 */
  push32(0x10391ac6u); f_10391000();
  /* 10391ac6 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391ac9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10391acc jne 0x10391ada */
  if (!C.zf) goto L_10391ada;
  /* 10391ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391ad0 jne 0x10391b09 */
  if (!C.zf) goto L_10391b09;
  /* 10391ad2 push edi */
  push32((uint32_t)(EDI));
  /* 10391ad3 push eax */
  push32((uint32_t)(EAX));
  /* 10391ad4 push ebx */
  push32((uint32_t)(EBX));
  /* 10391ad5 call 0x1039199d */
  push32(0x10391adau); f_1039199d();
L_10391ada:;
  /* 10391ada test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10391adc je 0x10391ae3 */
  if (C.zf) goto L_10391ae3;
  /* 10391ade cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391ae1 jne 0x10391b09 */
  if (!C.zf) goto L_10391b09;
L_10391ae3:;
  /* 10391ae3 push edi */
  push32((uint32_t)(EDI));
  /* 10391ae4 push esi */
  push32((uint32_t)(ESI));
  /* 10391ae5 push ebx */
  push32((uint32_t)(EBX));
  /* 10391ae6 call 0x1039199d */
  push32(0x10391aebu); f_1039199d();
  /* 10391aeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391aed jne 0x10391af2 */
  if (!C.zf) goto L_10391af2;
  /* 10391aef and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10391af2:;
  /* 10391af2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391af6 je 0x10391b09 */
  if (C.zf) goto L_10391b09;
  /* 10391af8 mov eax, dword ptr [0x10396afc] */
  EAX = (r32((uint32_t)(0x10396afc)));
  /* 10391afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391aff je 0x10391b09 */
  if (C.zf) goto L_10391b09;
  /* 10391b01 push edi */
  push32((uint32_t)(EDI));
  /* 10391b02 push esi */
  push32((uint32_t)(ESI));
  /* 10391b03 push ebx */
  push32((uint32_t)(EBX));
  /* 10391b04 call eax */
  call_ind((uint32_t)(EAX), 0x10391b06u);
  /* 10391b06 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10391b09:;
  /* 10391b09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10391b0c:;
  /* 10391b0c pop edi */
  EDI = (pop32());
  /* 10391b0d pop esi */
  ESI = (pop32());
  /* 10391b0e pop ebx */
  EBX = (pop32());
  /* 10391b0f pop ebp */
  EBP = (pop32());
  /* 10391b10 ret 0xc */
  ESPCHK(0x10391a76u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10391b13 (48 bytes, 15 insns) */
void f_10391b13(void) {
  FTRACE(0x10391b13u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391b13 mov eax, dword ptr [0x10396580] */
  EAX = (r32((uint32_t)(0x10396580)));
  /* 10391b18 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391b1b je 0x10391b2a */
  if (C.zf) goto L_10391b2a;
  /* 10391b1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391b1f jne 0x10391b2f */
  if (!C.zf) goto L_10391b2f;
  /* 10391b21 cmp dword ptr [0x10396584], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10396584))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391b28 jne 0x10391b2f */
  if (!C.zf) goto L_10391b2f;
L_10391b2a:;
  /* 10391b2a call 0x10392482 */
  push32(0x10391b2fu); f_10392482();
L_10391b2f:;
  /* 10391b2f push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10391b33 call 0x103924bb */
  push32(0x10391b38u); f_103924bb();
  /* 10391b38 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10391b3d call dword ptr [0x10396104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10396104))), 0x10391b43u);
  /* 10391b43 pop ecx */
  ECX = (pop32());
  /* 10391b44 pop ecx */
  ECX = (pop32());
  /* 10391b45 ret  */
  ESPCHK(0x10391b13u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b46 @ 0x10391b46 (45 bytes, 12 insns) */
void f_10391b46(void) {
  FTRACE(0x10391b46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391b46 mov eax, dword ptr [0x10396af4] */
  EAX = (r32((uint32_t)(0x10396af4)));
  /* 10391b4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391b4d je 0x10391b51 */
  if (C.zf) goto L_10391b51;
  /* 10391b4f call eax */
  call_ind((uint32_t)(EAX), 0x10391b51u);
L_10391b51:;
  /* 10391b51 push 0x10396010 */
  push32((uint32_t)(0x10396010u));
  /* 10391b56 push 0x10396008 */
  push32((uint32_t)(0x10396008u));
  /* 10391b5b call 0x10391c4a */
  push32(0x10391b60u); f_10391c4a();
  /* 10391b60 push 0x10396004 */
  push32((uint32_t)(0x10396004u));
  /* 10391b65 push 0x10396000 */
  push32((uint32_t)(0x10396000u));
  /* 10391b6a call 0x10391c4a */
  push32(0x10391b6fu); f_10391c4a();
  /* 10391b6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10391b72 ret  */
  ESPCHK(0x10391b46u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10391b73 (17 bytes, 6 insns) */
void f_10391b73(void) {
  FTRACE(0x10391b73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10391b75 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391b77 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10391b7b call 0x10391b93 */
  push32(0x10391b80u); f_10391b93();
  /* 10391b80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10391b83 ret  */
  ESPCHK(0x10391b73u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b84 @ 0x10391b84 (15 bytes, 6 insns) */
void f_10391b84(void) {
  FTRACE(0x10391b84u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391b84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10391b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10391b8a call 0x10391b93 */
  push32(0x10391b8fu); f_10391b93();
  /* 10391b8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10391b92 ret  */
  ESPCHK(0x10391b84u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b93 @ 0x10391b93 (163 bytes, 53 insns) */
void f_10391b93(void) {
  FTRACE(0x10391b93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391b93 push edi */
  push32((uint32_t)(EDI));
  /* 10391b94 call 0x10391c38 */
  push32(0x10391b99u); f_10391c38();
  /* 10391b99 push 1 */
  push32((uint32_t)(0x1u));
  /* 10391b9b pop edi */
  EDI = (pop32());
  /* 10391b9c cmp dword ptr [0x103965c8], edi */
  { uint32_t _a=(r32((uint32_t)(0x103965c8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391ba2 jne 0x10391bb5 */
  if (!C.zf) goto L_10391bb5;
  /* 10391ba4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10391ba8 call dword ptr [0x10395070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395070))), 0x10391baeu);
  /* 10391bae push eax */
  push32((uint32_t)(EAX));
  /* 10391baf call dword ptr [0x1039506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1039506c))), 0x10391bb5u);
L_10391bb5:;
  /* 10391bb5 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391bba push ebx */
  push32((uint32_t)(EBX));
  /* 10391bbb mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10391bbf mov dword ptr [0x103965c4], edi */
  w32((uint32_t)(0x103965c4), (EDI));
  /* 10391bc5 mov byte ptr [0x103965c0], bl */
  w8((uint32_t)(0x103965c0), (BL));
  /* 10391bcb jne 0x10391c09 */
  if (!C.zf) goto L_10391c09;
  /* 10391bcd mov eax, dword ptr [0x10396af0] */
  EAX = (r32((uint32_t)(0x10396af0)));
  /* 10391bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391bd4 je 0x10391bf8 */
  if (C.zf) goto L_10391bf8;
  /* 10391bd6 mov ecx, dword ptr [0x10396aec] */
  ECX = (r32((uint32_t)(0x10396aec)));
  /* 10391bdc push esi */
  push32((uint32_t)(ESI));
  /* 10391bdd lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10391be0 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391be2 jb 0x10391bf7 */
  if (C.cf) goto L_10391bf7;
L_10391be4:;
  /* 10391be4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10391be6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391be8 je 0x10391bec */
  if (C.zf) goto L_10391bec;
  /* 10391bea call eax */
  call_ind((uint32_t)(EAX), 0x10391becu);
L_10391bec:;
  /* 10391bec sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10391bef cmp esi, dword ptr [0x10396af0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10396af0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391bf5 jae 0x10391be4 */
  if (!C.cf) goto L_10391be4;
L_10391bf7:;
  /* 10391bf7 pop esi */
  ESI = (pop32());
L_10391bf8:;
  /* 10391bf8 push 0x10396018 */
  push32((uint32_t)(0x10396018u));
  /* 10391bfd push 0x10396014 */
  push32((uint32_t)(0x10396014u));
  /* 10391c02 call 0x10391c4a */
  push32(0x10391c07u); f_10391c4a();
  /* 10391c07 pop ecx */
  ECX = (pop32());
  /* 10391c08 pop ecx */
  ECX = (pop32());
L_10391c09:;
  /* 10391c09 push 0x10396020 */
  push32((uint32_t)(0x10396020u));
  /* 10391c0e push 0x1039601c */
  push32((uint32_t)(0x1039601cu));
  /* 10391c13 call 0x10391c4a */
  push32(0x10391c18u); f_10391c4a();
  /* 10391c18 pop ecx */
  ECX = (pop32());
  /* 10391c19 pop ecx */
  ECX = (pop32());
  /* 10391c1a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10391c1c pop ebx */
  EBX = (pop32());
  /* 10391c1d je 0x10391c26 */
  if (C.zf) goto L_10391c26;
  /* 10391c1f call 0x10391c41 */
  push32(0x10391c24u); f_10391c41();
  /* 10391c24 pop edi */
  EDI = (pop32());
  /* 10391c25 ret  */
  ESPCHK(0x10391b93u, _esp0);
  ESP += 4; return;
L_10391c26:;
  /* 10391c26 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10391c2a mov dword ptr [0x103965c8], edi */
  w32((uint32_t)(0x103965c8), (EDI));
  /* 10391c30 call dword ptr [0x10395068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395068))), 0x10391c36u);
  /* 10391c36 pop edi */
  EDI = (pop32());
  /* 10391c37 ret  */
  ESPCHK(0x10391b93u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c38 @ 0x10391c38 (9 bytes, 4 insns) */
void f_10391c38(void) {
  FTRACE(0x10391c38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391c38 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10391c3a call 0x103926a3 */
  push32(0x10391c3fu); f_103926a3();
  /* 10391c3f pop ecx */
  ECX = (pop32());
  /* 10391c40 ret  */
  ESPCHK(0x10391c38u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c41 @ 0x10391c41 (9 bytes, 4 insns) */
void f_10391c41(void) {
  FTRACE(0x10391c41u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391c41 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10391c43 call 0x10392704 */
  push32(0x10391c48u); f_10392704();
  /* 10391c48 pop ecx */
  ECX = (pop32());
  /* 10391c49 ret  */
  ESPCHK(0x10391c41u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c4a @ 0x10391c4a (26 bytes, 12 insns) */
void f_10391c4a(void) {
  FTRACE(0x10391c4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391c4a push esi */
  push32((uint32_t)(ESI));
  /* 10391c4b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10391c4f:;
  /* 10391c4f cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391c53 jae 0x10391c62 */
  if (!C.cf) goto L_10391c62;
  /* 10391c55 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10391c57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391c59 je 0x10391c5d */
  if (C.zf) goto L_10391c5d;
  /* 10391c5b call eax */
  call_ind((uint32_t)(EAX), 0x10391c5du);
L_10391c5d:;
  /* 10391c5d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10391c60 jmp 0x10391c4f */
  goto L_10391c4f;
L_10391c62:;
  /* 10391c62 pop esi */
  ESI = (pop32());
  /* 10391c63 ret  */
  ESPCHK(0x10391c4au, _esp0);
  ESP += 4; return;
}

/* FUN_10001c64 @ 0x10391c64 (84 bytes, 32 insns) */
void f_10391c64(void) {
  FTRACE(0x10391c64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391c64 push esi */
  push32((uint32_t)(ESI));
  /* 10391c65 call 0x1039260e */
  push32(0x10391c6au); f_1039260e();
  /* 10391c6a call dword ptr [0x1039507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1039507c))), 0x10391c70u);
  /* 10391c70 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391c73 mov dword ptr [0x10396108], eax */
  w32((uint32_t)(0x10396108), (EAX));
  /* 10391c78 je 0x10391cb4 */
  if (C.zf) goto L_10391cb4;
  /* 10391c7a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10391c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10391c7e call 0x10392719 */
  push32(0x10391c83u); f_10392719();
  /* 10391c83 mov esi, eax */
  ESI = (EAX);
  /* 10391c85 pop ecx */
  ECX = (pop32());
  /* 10391c86 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10391c88 pop ecx */
  ECX = (pop32());
  /* 10391c89 je 0x10391cb4 */
  if (C.zf) goto L_10391cb4;
  /* 10391c8b push esi */
  push32((uint32_t)(ESI));
  /* 10391c8c push dword ptr [0x10396108] */
  push32((uint32_t)(r32((uint32_t)(0x10396108))));
  /* 10391c92 call dword ptr [0x10395078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395078))), 0x10391c98u);
  /* 10391c98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391c9a je 0x10391cb4 */
  if (C.zf) goto L_10391cb4;
  /* 10391c9c push esi */
  push32((uint32_t)(ESI));
  /* 10391c9d call 0x10391cd6 */
  push32(0x10391ca2u); f_10391cd6();
  /* 10391ca2 pop ecx */
  ECX = (pop32());
  /* 10391ca3 call dword ptr [0x10395074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395074))), 0x10391ca9u);
  /* 10391ca9 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10391cad push 1 */
  push32((uint32_t)(0x1u));
  /* 10391caf mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10391cb1 pop eax */
  EAX = (pop32());
  /* 10391cb2 pop esi */
  ESI = (pop32());
  /* 10391cb3 ret  */
  ESPCHK(0x10391c64u, _esp0);
  ESP += 4; return;
L_10391cb4:;
  /* 10391cb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10391cb6 pop esi */
  ESI = (pop32());
  /* 10391cb7 ret  */
  ESPCHK(0x10391c64u, _esp0);
  ESP += 4; return;
}

/* FUN_10001cb8 @ 0x10391cb8 (30 bytes, 8 insns) */
void f_10391cb8(void) {
  FTRACE(0x10391cb8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391cb8 call 0x10392637 */
  push32(0x10391cbdu); f_10392637();
  /* 10391cbd mov eax, dword ptr [0x10396108] */
  EAX = (r32((uint32_t)(0x10396108)));
  /* 10391cc2 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391cc5 je 0x10391cd5 */
  if (C.zf) goto L_10391cd5;
  /* 10391cc7 push eax */
  push32((uint32_t)(EAX));
  /* 10391cc8 call dword ptr [0x10395080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395080))), 0x10391cceu);
  /* 10391cce or dword ptr [0x10396108], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10396108)))|(0xffffffffu); w32((uint32_t)(0x10396108), (_r)); fl_logic(_r,32); }
L_10391cd5:;
  /* 10391cd5 ret  */
  ESPCHK(0x10391cb8u, _esp0);
  ESP += 4; return;
}

/* FUN_10001cd6 @ 0x10391cd6 (19 bytes, 4 insns) */
void f_10391cd6(void) {
  FTRACE(0x10391cd6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391cd6 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10391cda mov dword ptr [eax + 0x50], 0x10396288 */
  w32((uint32_t)(EAX + 0x50), (0x10396288u));
  /* 10391ce1 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10391ce8 ret  */
  ESPCHK(0x10391cd6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ce9 @ 0x10391ce9 (160 bytes, 62 insns) */
void f_10391ce9(void) {
  FTRACE(0x10391ce9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391ce9 mov eax, dword ptr [0x10396108] */
  EAX = (r32((uint32_t)(0x10396108)));
  /* 10391cee cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391cf1 je 0x10391d88 */
  if (C.zf) goto L_10391d88;
  /* 10391cf7 push esi */
  push32((uint32_t)(ESI));
  /* 10391cf8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10391cfc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10391cfe jne 0x10391d0d */
  if (!C.zf) goto L_10391d0d;
  /* 10391d00 push eax */
  push32((uint32_t)(EAX));
  /* 10391d01 call dword ptr [0x10395000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395000))), 0x10391d07u);
  /* 10391d07 mov esi, eax */
  ESI = (EAX);
  /* 10391d09 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10391d0b je 0x10391d79 */
  if (C.zf) goto L_10391d79;
L_10391d0d:;
  /* 10391d0d mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10391d10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391d12 je 0x10391d1b */
  if (C.zf) goto L_10391d1b;
  /* 10391d14 push eax */
  push32((uint32_t)(EAX));
  /* 10391d15 call 0x103927a6 */
  push32(0x10391d1au); f_103927a6();
  /* 10391d1a pop ecx */
  ECX = (pop32());
L_10391d1b:;
  /* 10391d1b mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10391d1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391d20 je 0x10391d29 */
  if (C.zf) goto L_10391d29;
  /* 10391d22 push eax */
  push32((uint32_t)(EAX));
  /* 10391d23 call 0x103927a6 */
  push32(0x10391d28u); f_103927a6();
  /* 10391d28 pop ecx */
  ECX = (pop32());
L_10391d29:;
  /* 10391d29 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10391d2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391d2e je 0x10391d37 */
  if (C.zf) goto L_10391d37;
  /* 10391d30 push eax */
  push32((uint32_t)(EAX));
  /* 10391d31 call 0x103927a6 */
  push32(0x10391d36u); f_103927a6();
  /* 10391d36 pop ecx */
  ECX = (pop32());
L_10391d37:;
  /* 10391d37 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10391d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391d3c je 0x10391d45 */
  if (C.zf) goto L_10391d45;
  /* 10391d3e push eax */
  push32((uint32_t)(EAX));
  /* 10391d3f call 0x103927a6 */
  push32(0x10391d44u); f_103927a6();
  /* 10391d44 pop ecx */
  ECX = (pop32());
L_10391d45:;
  /* 10391d45 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10391d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391d4a je 0x10391d53 */
  if (C.zf) goto L_10391d53;
  /* 10391d4c push eax */
  push32((uint32_t)(EAX));
  /* 10391d4d call 0x103927a6 */
  push32(0x10391d52u); f_103927a6();
  /* 10391d52 pop ecx */
  ECX = (pop32());
L_10391d53:;
  /* 10391d53 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10391d56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391d58 je 0x10391d61 */
  if (C.zf) goto L_10391d61;
  /* 10391d5a push eax */
  push32((uint32_t)(EAX));
  /* 10391d5b call 0x103927a6 */
  push32(0x10391d60u); f_103927a6();
  /* 10391d60 pop ecx */
  ECX = (pop32());
L_10391d61:;
  /* 10391d61 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10391d64 cmp eax, 0x10396288 */
  { uint32_t _a=(EAX),_b=(0x10396288u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391d69 je 0x10391d72 */
  if (C.zf) goto L_10391d72;
  /* 10391d6b push eax */
  push32((uint32_t)(EAX));
  /* 10391d6c call 0x103927a6 */
  push32(0x10391d71u); f_103927a6();
  /* 10391d71 pop ecx */
  ECX = (pop32());
L_10391d72:;
  /* 10391d72 push esi */
  push32((uint32_t)(ESI));
  /* 10391d73 call 0x103927a6 */
  push32(0x10391d78u); f_103927a6();
  /* 10391d78 pop ecx */
  ECX = (pop32());
L_10391d79:;
  /* 10391d79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10391d7b push dword ptr [0x10396108] */
  push32((uint32_t)(r32((uint32_t)(0x10396108))));
  /* 10391d81 call dword ptr [0x10395078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395078))), 0x10391d87u);
  /* 10391d87 pop esi */
  ESI = (pop32());
L_10391d88:;
  /* 10391d88 ret  */
  ESPCHK(0x10391ce9u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d89 @ 0x10391d89 (444 bytes, 150 insns) */
void f_10391d89(void) {
  FTRACE(0x10391d89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391d89 push ebp */
  push32((uint32_t)(EBP));
  /* 10391d8a mov ebp, esp */
  EBP = (ESP);
  /* 10391d8c sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10391d8f push ebx */
  push32((uint32_t)(EBX));
  /* 10391d90 push esi */
  push32((uint32_t)(ESI));
  /* 10391d91 push edi */
  push32((uint32_t)(EDI));
  /* 10391d92 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10391d97 call 0x103927ee */
  push32(0x10391d9cu); f_103927ee();
  /* 10391d9c mov esi, eax */
  ESI = (EAX);
  /* 10391d9e pop ecx */
  ECX = (pop32());
  /* 10391d9f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10391da1 jne 0x10391dab */
  if (!C.zf) goto L_10391dab;
  /* 10391da3 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10391da5 call 0x10391b13 */
  push32(0x10391daau); f_10391b13();
  /* 10391daa pop ecx */
  ECX = (pop32());
L_10391dab:;
  /* 10391dab mov dword ptr [0x103969e0], esi */
  w32((uint32_t)(0x103969e0), (ESI));
  /* 10391db1 mov dword ptr [0x10396ae0], 0x20 */
  w32((uint32_t)(0x10396ae0), (0x20u));
  /* 10391dbb lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10391dc1:;
  /* 10391dc1 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391dc3 jae 0x10391de3 */
  if (!C.cf) goto L_10391de3;
  /* 10391dc5 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10391dc9 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10391dcc and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10391dd0 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10391dd4 mov eax, dword ptr [0x103969e0] */
  EAX = (r32((uint32_t)(0x103969e0)));
  /* 10391dd9 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10391ddc add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10391de1 jmp 0x10391dc1 */
  goto L_10391dc1;
L_10391de3:;
  /* 10391de3 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10391de6 push eax */
  push32((uint32_t)(EAX));
  /* 10391de7 call dword ptr [0x10395084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395084))), 0x10391dedu);
  /* 10391ded cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10391df2 je 0x10391ec9 */
  if (C.zf) goto L_10391ec9;
  /* 10391df8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10391dfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391dfd je 0x10391ec9 */
  if (C.zf) goto L_10391ec9;
  /* 10391e03 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10391e05 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10391e08 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10391e0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10391e0e mov eax, 0x800 */
  EAX = (0x800u);
  /* 10391e13 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391e15 jl 0x10391e19 */
  if ((C.sf!=C.of)) goto L_10391e19;
  /* 10391e17 mov edi, eax */
  EDI = (EAX);
L_10391e19:;
  /* 10391e19 cmp dword ptr [0x10396ae0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10396ae0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391e1f jge 0x10391e77 */
  if ((C.sf==C.of)) goto L_10391e77;
  /* 10391e21 mov esi, 0x103969e4 */
  ESI = (0x103969e4u);
L_10391e26:;
  /* 10391e26 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10391e2b call 0x103927ee */
  push32(0x10391e30u); f_103927ee();
  /* 10391e30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391e32 pop ecx */
  ECX = (pop32());
  /* 10391e33 je 0x10391e71 */
  if (C.zf) goto L_10391e71;
  /* 10391e35 add dword ptr [0x10396ae0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10396ae0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10396ae0), (_r)); fl_add(_a,_b,_r,32); }
  /* 10391e3c mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10391e3e lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10391e44:;
  /* 10391e44 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391e46 jae 0x10391e64 */
  if (!C.cf) goto L_10391e64;
  /* 10391e48 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10391e4c or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10391e4f and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10391e53 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10391e57 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10391e59 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10391e5c add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10391e62 jmp 0x10391e44 */
  goto L_10391e44;
L_10391e64:;
  /* 10391e64 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10391e67 cmp dword ptr [0x10396ae0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10396ae0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391e6d jl 0x10391e26 */
  if ((C.sf!=C.of)) goto L_10391e26;
  /* 10391e6f jmp 0x10391e77 */
  goto L_10391e77;
L_10391e71:;
  /* 10391e71 mov edi, dword ptr [0x10396ae0] */
  EDI = (r32((uint32_t)(0x10396ae0)));
L_10391e77:;
  /* 10391e77 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10391e79 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10391e7b jle 0x10391ec9 */
  if ((C.zf||C.sf!=C.of)) goto L_10391ec9;
L_10391e7d:;
  /* 10391e7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10391e80 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10391e82 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391e85 je 0x10391ebf */
  if (C.zf) goto L_10391ebf;
  /* 10391e87 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 10391e89 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10391e8b je 0x10391ebf */
  if (C.zf) goto L_10391ebf;
  /* 10391e8d test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10391e8f jne 0x10391e9c */
  if (!C.zf) goto L_10391e9c;
  /* 10391e91 push ecx */
  push32((uint32_t)(ECX));
  /* 10391e92 call dword ptr [0x10395094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395094))), 0x10391e98u);
  /* 10391e98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391e9a je 0x10391ebf */
  if (C.zf) goto L_10391ebf;
L_10391e9c:;
  /* 10391e9c mov ecx, esi */
  ECX = (ESI);
  /* 10391e9e mov eax, esi */
  EAX = (ESI);
  /* 10391ea0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10391ea3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10391ea6 mov ecx, dword ptr [ecx*4 + 0x103969e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x103969e0)));
  /* 10391ead lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10391eb0 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10391eb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10391eb6 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10391eb8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10391eba mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10391ebc mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10391ebf:;
  /* 10391ebf add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10391ec3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10391ec4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10391ec5 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391ec7 jl 0x10391e7d */
  if ((C.sf!=C.of)) goto L_10391e7d;
L_10391ec9:;
  /* 10391ec9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10391ecb:;
  /* 10391ecb mov ecx, dword ptr [0x103969e0] */
  ECX = (r32((uint32_t)(0x103969e0)));
  /* 10391ed1 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10391ed4 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391ed8 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10391edb jne 0x10391f2a */
  if (!C.zf) goto L_10391f2a;
  /* 10391edd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10391edf mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10391ee3 jne 0x10391eea */
  if (!C.zf) goto L_10391eea;
  /* 10391ee5 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10391ee7 pop eax */
  EAX = (pop32());
  /* 10391ee8 jmp 0x10391ef4 */
  goto L_10391ef4;
L_10391eea:;
  /* 10391eea mov eax, ebx */
  EAX = (EBX);
  /* 10391eec dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10391eed neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10391eef sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10391ef1 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10391ef4:;
  /* 10391ef4 push eax */
  push32((uint32_t)(EAX));
  /* 10391ef5 call dword ptr [0x10395090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395090))), 0x10391efbu);
  /* 10391efb mov edi, eax */
  EDI = (EAX);
  /* 10391efd cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391f00 je 0x10391f19 */
  if (C.zf) goto L_10391f19;
  /* 10391f02 push edi */
  push32((uint32_t)(EDI));
  /* 10391f03 call dword ptr [0x10395094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395094))), 0x10391f09u);
  /* 10391f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391f0b je 0x10391f19 */
  if (C.zf) goto L_10391f19;
  /* 10391f0d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10391f12 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10391f14 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391f17 jne 0x10391f1f */
  if (!C.zf) goto L_10391f1f;
L_10391f19:;
  /* 10391f19 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10391f1d jmp 0x10391f2e */
  goto L_10391f2e;
L_10391f1f:;
  /* 10391f1f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391f22 jne 0x10391f2e */
  if (!C.zf) goto L_10391f2e;
  /* 10391f24 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10391f28 jmp 0x10391f2e */
  goto L_10391f2e;
L_10391f2a:;
  /* 10391f2a or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10391f2e:;
  /* 10391f2e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10391f2f cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391f32 jl 0x10391ecb */
  if ((C.sf!=C.of)) goto L_10391ecb;
  /* 10391f34 push dword ptr [0x10396ae0] */
  push32((uint32_t)(r32((uint32_t)(0x10396ae0))));
  /* 10391f3a call dword ptr [0x1039508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1039508c))), 0x10391f40u);
  /* 10391f40 pop edi */
  EDI = (pop32());
  /* 10391f41 pop esi */
  ESI = (pop32());
  /* 10391f42 pop ebx */
  EBX = (pop32());
  /* 10391f43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10391f44 ret  */
  ESPCHK(0x10391d89u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f45 @ 0x10391f45 (84 bytes, 33 insns) */
void f_10391f45(void) {
  FTRACE(0x10391f45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391f45 push ebx */
  push32((uint32_t)(EBX));
  /* 10391f46 push esi */
  push32((uint32_t)(ESI));
  /* 10391f47 push edi */
  push32((uint32_t)(EDI));
  /* 10391f48 mov esi, 0x103969e0 */
  ESI = (0x103969e0u);
L_10391f4d:;
  /* 10391f4d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10391f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10391f51 je 0x10391f8a */
  if (C.zf) goto L_10391f8a;
  /* 10391f53 mov edi, eax */
  EDI = (EAX);
  /* 10391f55 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10391f5a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391f5c jae 0x10391f7f */
  if (!C.cf) goto L_10391f7f;
  /* 10391f5e lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10391f61:;
  /* 10391f61 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391f65 je 0x10391f6e */
  if (C.zf) goto L_10391f6e;
  /* 10391f67 push ebx */
  push32((uint32_t)(EBX));
  /* 10391f68 call dword ptr [0x10395088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395088))), 0x10391f6eu);
L_10391f6e:;
  /* 10391f6e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10391f70 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10391f73 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10391f78 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10391f7b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391f7d jb 0x10391f61 */
  if (C.cf) goto L_10391f61;
L_10391f7f:;
  /* 10391f7f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10391f81 call 0x103927a6 */
  push32(0x10391f86u); f_103927a6();
  /* 10391f86 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10391f89 pop ecx */
  ECX = (pop32());
L_10391f8a:;
  /* 10391f8a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10391f8d cmp esi, 0x10396ae0 */
  { uint32_t _a=(ESI),_b=(0x10396ae0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391f93 jl 0x10391f4d */
  if ((C.sf!=C.of)) goto L_10391f4d;
  /* 10391f95 pop edi */
  EDI = (pop32());
  /* 10391f96 pop esi */
  ESI = (pop32());
  /* 10391f97 pop ebx */
  EBX = (pop32());
  /* 10391f98 ret  */
  ESPCHK(0x10391f45u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f99 @ 0x10391f99 (185 bytes, 71 insns) */
void f_10391f99(void) {
  FTRACE(0x10391f99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10391f99 push ebx */
  push32((uint32_t)(EBX));
  /* 10391f9a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10391f9c cmp dword ptr [0x10396ae8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10396ae8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391fa2 push esi */
  push32((uint32_t)(ESI));
  /* 10391fa3 push edi */
  push32((uint32_t)(EDI));
  /* 10391fa4 jne 0x10391fab */
  if (!C.zf) goto L_10391fab;
  /* 10391fa6 call 0x10392dc3 */
  push32(0x10391fabu); f_10392dc3();
L_10391fab:;
  /* 10391fab mov esi, dword ptr [0x10396578] */
  ESI = (r32((uint32_t)(0x10396578)));
  /* 10391fb1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10391fb3:;
  /* 10391fb3 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10391fb5 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10391fb7 je 0x10391fcb */
  if (C.zf) goto L_10391fcb;
  /* 10391fb9 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10391fbb je 0x10391fbe */
  if (C.zf) goto L_10391fbe;
  /* 10391fbd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10391fbe:;
  /* 10391fbe push esi */
  push32((uint32_t)(ESI));
  /* 10391fbf call 0x10392970 */
  push32(0x10391fc4u); f_10392970();
  /* 10391fc4 pop ecx */
  ECX = (pop32());
  /* 10391fc5 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10391fc9 jmp 0x10391fb3 */
  goto L_10391fb3;
L_10391fcb:;
  /* 10391fcb lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10391fd2 push eax */
  push32((uint32_t)(EAX));
  /* 10391fd3 call 0x103927ee */
  push32(0x10391fd8u); f_103927ee();
  /* 10391fd8 mov esi, eax */
  ESI = (EAX);
  /* 10391fda pop ecx */
  ECX = (pop32());
  /* 10391fdb cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10391fdd mov dword ptr [0x103965a8], esi */
  w32((uint32_t)(0x103965a8), (ESI));
  /* 10391fe3 jne 0x10391fed */
  if (!C.zf) goto L_10391fed;
  /* 10391fe5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10391fe7 call 0x10391b13 */
  push32(0x10391fecu); f_10391b13();
  /* 10391fec pop ecx */
  ECX = (pop32());
L_10391fed:;
  /* 10391fed mov edi, dword ptr [0x10396578] */
  EDI = (r32((uint32_t)(0x10396578)));
  /* 10391ff3 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10391ff5 je 0x10392030 */
  if (C.zf) goto L_10392030;
  /* 10391ff7 push ebp */
  push32((uint32_t)(EBP));
L_10391ff8:;
  /* 10391ff8 push edi */
  push32((uint32_t)(EDI));
  /* 10391ff9 call 0x10392970 */
  push32(0x10391ffeu); f_10392970();
  /* 10391ffe mov ebp, eax */
  EBP = (EAX);
  /* 10392000 pop ecx */
  ECX = (pop32());
  /* 10392001 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10392002 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10392005 je 0x10392029 */
  if (C.zf) goto L_10392029;
  /* 10392007 push ebp */
  push32((uint32_t)(EBP));
  /* 10392008 call 0x103927ee */
  push32(0x1039200du); f_103927ee();
  /* 1039200d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039200f pop ecx */
  ECX = (pop32());
  /* 10392010 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10392012 jne 0x1039201c */
  if (!C.zf) goto L_1039201c;
  /* 10392014 push 9 */
  push32((uint32_t)(0x9u));
  /* 10392016 call 0x10391b13 */
  push32(0x1039201bu); f_10391b13();
  /* 1039201b pop ecx */
  ECX = (pop32());
L_1039201c:;
  /* 1039201c push edi */
  push32((uint32_t)(EDI));
  /* 1039201d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1039201f call 0x10392880 */
  push32(0x10392024u); f_10392880();
  /* 10392024 pop ecx */
  ECX = (pop32());
  /* 10392025 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10392028 pop ecx */
  ECX = (pop32());
L_10392029:;
  /* 10392029 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1039202b cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1039202d jne 0x10391ff8 */
  if (!C.zf) goto L_10391ff8;
  /* 1039202f pop ebp */
  EBP = (pop32());
L_10392030:;
  /* 10392030 push dword ptr [0x10396578] */
  push32((uint32_t)(r32((uint32_t)(0x10396578))));
  /* 10392036 call 0x103927a6 */
  push32(0x1039203bu); f_103927a6();
  /* 1039203b pop ecx */
  ECX = (pop32());
  /* 1039203c mov dword ptr [0x10396578], ebx */
  w32((uint32_t)(0x10396578), (EBX));
  /* 10392042 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10392044 pop edi */
  EDI = (pop32());
  /* 10392045 pop esi */
  ESI = (pop32());
  /* 10392046 mov dword ptr [0x10396ae4], 1 */
  w32((uint32_t)(0x10396ae4), (0x1u));
  /* 10392050 pop ebx */
  EBX = (pop32());
  /* 10392051 ret  */
  ESPCHK(0x10391f99u, _esp0);
  ESP += 4; return;
}

/* FUN_10002052 @ 0x10392052 (153 bytes, 62 insns) */
void f_10392052(void) {
  FTRACE(0x10392052u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392052 push ebp */
  push32((uint32_t)(EBP));
  /* 10392053 mov ebp, esp */
  EBP = (ESP);
  /* 10392055 push ecx */
  push32((uint32_t)(ECX));
  /* 10392056 push ecx */
  push32((uint32_t)(ECX));
  /* 10392057 push ebx */
  push32((uint32_t)(EBX));
  /* 10392058 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1039205a cmp dword ptr [0x10396ae8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10396ae8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392060 push esi */
  push32((uint32_t)(ESI));
  /* 10392061 push edi */
  push32((uint32_t)(EDI));
  /* 10392062 jne 0x10392069 */
  if (!C.zf) goto L_10392069;
  /* 10392064 call 0x10392dc3 */
  push32(0x10392069u); f_10392dc3();
L_10392069:;
  /* 10392069 mov esi, 0x103965cc */
  ESI = (0x103965ccu);
  /* 1039206e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10392073 push esi */
  push32((uint32_t)(ESI));
  /* 10392074 push ebx */
  push32((uint32_t)(EBX));
  /* 10392075 call dword ptr [0x1039509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1039509c))), 0x1039207bu);
  /* 1039207b mov eax, dword ptr [0x10396af8] */
  EAX = (r32((uint32_t)(0x10396af8)));
  /* 10392080 mov dword ptr [0x103965b8], esi */
  w32((uint32_t)(0x103965b8), (ESI));
  /* 10392086 mov edi, esi */
  EDI = (ESI);
  /* 10392088 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1039208a je 0x1039208e */
  if (C.zf) goto L_1039208e;
  /* 1039208c mov edi, eax */
  EDI = (EAX);
L_1039208e:;
  /* 1039208e lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10392091 push eax */
  push32((uint32_t)(EAX));
  /* 10392092 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10392095 push eax */
  push32((uint32_t)(EAX));
  /* 10392096 push ebx */
  push32((uint32_t)(EBX));
  /* 10392097 push ebx */
  push32((uint32_t)(EBX));
  /* 10392098 push edi */
  push32((uint32_t)(EDI));
  /* 10392099 call 0x103920eb */
  push32(0x1039209eu); f_103920eb();
  /* 1039209e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103920a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103920a4 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 103920a7 push eax */
  push32((uint32_t)(EAX));
  /* 103920a8 call 0x103927ee */
  push32(0x103920adu); f_103927ee();
  /* 103920ad mov esi, eax */
  ESI = (EAX);
  /* 103920af add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103920b2 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103920b4 jne 0x103920be */
  if (!C.zf) goto L_103920be;
  /* 103920b6 push 8 */
  push32((uint32_t)(0x8u));
  /* 103920b8 call 0x10391b13 */
  push32(0x103920bdu); f_10391b13();
  /* 103920bd pop ecx */
  ECX = (pop32());
L_103920be:;
  /* 103920be lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 103920c1 push eax */
  push32((uint32_t)(EAX));
  /* 103920c2 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 103920c5 push eax */
  push32((uint32_t)(EAX));
  /* 103920c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103920c9 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 103920cc push eax */
  push32((uint32_t)(EAX));
  /* 103920cd push esi */
  push32((uint32_t)(ESI));
  /* 103920ce push edi */
  push32((uint32_t)(EDI));
  /* 103920cf call 0x103920eb */
  push32(0x103920d4u); f_103920eb();
  /* 103920d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103920d7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103920da dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 103920db mov dword ptr [0x103965a0], esi */
  w32((uint32_t)(0x103965a0), (ESI));
  /* 103920e1 pop edi */
  EDI = (pop32());
  /* 103920e2 pop esi */
  ESI = (pop32());
  /* 103920e3 mov dword ptr [0x1039659c], eax */
  w32((uint32_t)(0x1039659c), (EAX));
  /* 103920e8 pop ebx */
  EBX = (pop32());
  /* 103920e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103920ea ret  */
  ESPCHK(0x10392052u, _esp0);
  ESP += 4; return;
}

/* FUN_100020eb @ 0x103920eb (436 bytes, 187 insns) */
void f_103920eb(void) {
  FTRACE(0x103920ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103920eb push ebp */
  push32((uint32_t)(EBP));
  /* 103920ec mov ebp, esp */
  EBP = (ESP);
  /* 103920ee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103920f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103920f4 push ebx */
  push32((uint32_t)(EBX));
  /* 103920f5 push esi */
  push32((uint32_t)(ESI));
  /* 103920f6 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 103920f9 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 103920fc push edi */
  push32((uint32_t)(EDI));
  /* 103920fd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10392100 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10392106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10392109 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1039210b je 0x10392115 */
  if (C.zf) goto L_10392115;
  /* 1039210d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 1039210f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10392112 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10392115:;
  /* 10392115 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10392118 jne 0x1039215e */
  if (!C.zf) goto L_1039215e;
L_1039211a:;
  /* 1039211a mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 1039211d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1039211e cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10392121 je 0x1039214c */
  if (C.zf) goto L_1039214c;
  /* 10392123 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10392125 je 0x1039214c */
  if (C.zf) goto L_1039214c;
  /* 10392127 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1039212a test byte ptr [edx + 0x103968c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x103968c1)))&(0x4u); fl_logic(_r,8); }
  /* 10392131 je 0x1039213f */
  if (C.zf) goto L_1039213f;
  /* 10392133 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10392135 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10392137 je 0x1039213f */
  if (C.zf) goto L_1039213f;
  /* 10392139 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1039213b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1039213d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1039213e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1039213f:;
  /* 1039213f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10392141 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10392143 je 0x1039211a */
  if (C.zf) goto L_1039211a;
  /* 10392145 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10392147 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10392149 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1039214a jmp 0x1039211a */
  goto L_1039211a;
L_1039214c:;
  /* 1039214c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1039214e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10392150 je 0x10392156 */
  if (C.zf) goto L_10392156;
  /* 10392152 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10392155 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10392156:;
  /* 10392156 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10392159 jne 0x103921a1 */
  if (!C.zf) goto L_103921a1;
  /* 1039215b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1039215c jmp 0x103921a1 */
  goto L_103921a1;
L_1039215e:;
  /* 1039215e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10392160 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10392162 je 0x10392169 */
  if (C.zf) goto L_10392169;
  /* 10392164 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10392166 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10392168 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10392169:;
  /* 10392169 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1039216b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1039216c movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 1039216f test byte ptr [ebx + 0x103968c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x103968c1)))&(0x4u); fl_logic(_r,8); }
  /* 10392176 je 0x10392184 */
  if (C.zf) goto L_10392184;
  /* 10392178 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1039217a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1039217c je 0x10392183 */
  if (C.zf) goto L_10392183;
  /* 1039217e mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10392180 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10392182 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10392183:;
  /* 10392183 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10392184:;
  /* 10392184 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10392187 je 0x10392192 */
  if (C.zf) goto L_10392192;
  /* 10392189 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1039218b je 0x10392196 */
  if (C.zf) goto L_10392196;
  /* 1039218d cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10392190 jne 0x1039215e */
  if (!C.zf) goto L_1039215e;
L_10392192:;
  /* 10392192 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10392194 jne 0x10392199 */
  if (!C.zf) goto L_10392199;
L_10392196:;
  /* 10392196 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10392197 jmp 0x103921a1 */
  goto L_103921a1;
L_10392199:;
  /* 10392199 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1039219b je 0x103921a1 */
  if (C.zf) goto L_103921a1;
  /* 1039219d and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_103921a1:;
  /* 103921a1 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_103921a5:;
  /* 103921a5 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103921a8 je 0x1039228e */
  if (C.zf) goto L_1039228e;
L_103921ae:;
  /* 103921ae mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 103921b0 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103921b3 je 0x103921ba */
  if (C.zf) goto L_103921ba;
  /* 103921b5 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103921b8 jne 0x103921bd */
  if (!C.zf) goto L_103921bd;
L_103921ba:;
  /* 103921ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103921bb jmp 0x103921ae */
  goto L_103921ae;
L_103921bd:;
  /* 103921bd cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103921c0 je 0x1039228e */
  if (C.zf) goto L_1039228e;
  /* 103921c6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 103921c8 je 0x103921d2 */
  if (C.zf) goto L_103921d2;
  /* 103921ca mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 103921cc add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103921cf mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_103921d2:;
  /* 103921d2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103921d5 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_103921d7:;
  /* 103921d7 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 103921de xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_103921e0:;
  /* 103921e0 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103921e3 jne 0x103921e9 */
  if (!C.zf) goto L_103921e9;
  /* 103921e5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103921e6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 103921e7 jmp 0x103921e0 */
  goto L_103921e0;
L_103921e9:;
  /* 103921e9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103921ec jne 0x1039221a */
  if (!C.zf) goto L_1039221a;
  /* 103921ee test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 103921f1 jne 0x10392218 */
  if (!C.zf) goto L_10392218;
  /* 103921f3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 103921f5 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103921f8 je 0x10392207 */
  if (C.zf) goto L_10392207;
  /* 103921fa cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103921fe lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10392201 jne 0x10392207 */
  if (!C.zf) goto L_10392207;
  /* 10392203 mov eax, edx */
  EAX = (EDX);
  /* 10392205 jmp 0x1039220a */
  goto L_1039220a;
L_10392207:;
  /* 10392207 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_1039220a:;
  /* 1039220a mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1039220d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1039220f cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392212 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10392215 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10392218:;
  /* 10392218 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_1039221a:;
  /* 1039221a mov edx, ebx */
  EDX = (EBX);
  /* 1039221c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1039221d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1039221f je 0x1039222f */
  if (C.zf) goto L_1039222f;
  /* 10392221 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10392222:;
  /* 10392222 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10392224 je 0x1039222a */
  if (C.zf) goto L_1039222a;
  /* 10392226 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 10392229 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1039222a:;
  /* 1039222a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1039222c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1039222d jne 0x10392222 */
  if (!C.zf) goto L_10392222;
L_1039222f:;
  /* 1039222f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10392231 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10392233 je 0x1039227f */
  if (C.zf) goto L_1039227f;
  /* 10392235 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392239 jne 0x10392245 */
  if (!C.zf) goto L_10392245;
  /* 1039223b cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1039223e je 0x1039227f */
  if (C.zf) goto L_1039227f;
  /* 10392240 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10392243 je 0x1039227f */
  if (C.zf) goto L_1039227f;
L_10392245:;
  /* 10392245 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392249 je 0x10392279 */
  if (C.zf) goto L_10392279;
  /* 1039224b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1039224d je 0x10392268 */
  if (C.zf) goto L_10392268;
  /* 1039224f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10392252 test byte ptr [ebx + 0x103968c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x103968c1)))&(0x4u); fl_logic(_r,8); }
  /* 10392259 je 0x10392261 */
  if (C.zf) goto L_10392261;
  /* 1039225b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1039225d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1039225e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1039225f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10392261:;
  /* 10392261 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10392263 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10392265 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10392266 jmp 0x10392277 */
  goto L_10392277;
L_10392268:;
  /* 10392268 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1039226b test byte ptr [edx + 0x103968c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x103968c1)))&(0x4u); fl_logic(_r,8); }
  /* 10392272 je 0x10392277 */
  if (C.zf) goto L_10392277;
  /* 10392274 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10392275 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10392277:;
  /* 10392277 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10392279:;
  /* 10392279 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1039227a jmp 0x103921d7 */
  goto L_103921d7;
L_1039227f:;
  /* 1039227f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10392281 je 0x10392287 */
  if (C.zf) goto L_10392287;
  /* 10392283 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10392286 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10392287:;
  /* 10392287 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10392289 jmp 0x103921a5 */
  goto L_103921a5;
L_1039228e:;
  /* 1039228e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10392290 je 0x10392295 */
  if (C.zf) goto L_10392295;
  /* 10392292 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10392295:;
  /* 10392295 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10392298 pop edi */
  EDI = (pop32());
  /* 10392299 pop esi */
  ESI = (pop32());
  /* 1039229a pop ebx */
  EBX = (pop32());
  /* 1039229b inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 1039229d pop ebp */
  EBP = (pop32());
  /* 1039229e ret  */
  ESPCHK(0x103920ebu, _esp0);
  ESP += 4; return;
}

/* FUN_1000229f @ 0x1039229f (306 bytes, 132 insns) */
void f_1039229f(void) {
  FTRACE(0x1039229fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1039229f push ecx */
  push32((uint32_t)(ECX));
  /* 103922a0 push ecx */
  push32((uint32_t)(ECX));
  /* 103922a1 mov eax, dword ptr [0x103966d0] */
  EAX = (r32((uint32_t)(0x103966d0)));
  /* 103922a6 push ebx */
  push32((uint32_t)(EBX));
  /* 103922a7 push ebp */
  push32((uint32_t)(EBP));
  /* 103922a8 mov ebp, dword ptr [0x10395058] */
  EBP = (r32((uint32_t)(0x10395058)));
  /* 103922ae push esi */
  push32((uint32_t)(ESI));
  /* 103922af push edi */
  push32((uint32_t)(EDI));
  /* 103922b0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103922b2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 103922b4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 103922b6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103922b8 jne 0x103922ed */
  if (!C.zf) goto L_103922ed;
  /* 103922ba call ebp */
  call_ind((uint32_t)(EBP), 0x103922bcu);
  /* 103922bc mov esi, eax */
  ESI = (EAX);
  /* 103922be cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103922c0 je 0x103922ce */
  if (C.zf) goto L_103922ce;
  /* 103922c2 mov dword ptr [0x103966d0], 1 */
  w32((uint32_t)(0x103966d0), (0x1u));
  /* 103922cc jmp 0x103922f6 */
  goto L_103922f6;
L_103922ce:;
  /* 103922ce call dword ptr [0x103950a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950a8))), 0x103922d4u);
  /* 103922d4 mov edi, eax */
  EDI = (EAX);
  /* 103922d6 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103922d8 je 0x103923c8 */
  if (C.zf) goto L_103923c8;
  /* 103922de mov dword ptr [0x103966d0], 2 */
  w32((uint32_t)(0x103966d0), (0x2u));
  /* 103922e8 jmp 0x1039237c */
  goto L_1039237c;
L_103922ed:;
  /* 103922ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103922f0 jne 0x10392377 */
  if (!C.zf) goto L_10392377;
L_103922f6:;
  /* 103922f6 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103922f8 jne 0x10392306 */
  if (!C.zf) goto L_10392306;
  /* 103922fa call ebp */
  call_ind((uint32_t)(EBP), 0x103922fcu);
  /* 103922fc mov esi, eax */
  ESI = (EAX);
  /* 103922fe cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392300 je 0x103923c8 */
  if (C.zf) goto L_103923c8;
L_10392306:;
  /* 10392306 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10392309 mov eax, esi */
  EAX = (ESI);
  /* 1039230b je 0x1039231b */
  if (C.zf) goto L_1039231b;
L_1039230d:;
  /* 1039230d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1039230e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1039230f cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10392312 jne 0x1039230d */
  if (!C.zf) goto L_1039230d;
  /* 10392314 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10392315 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10392316 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10392319 jne 0x1039230d */
  if (!C.zf) goto L_1039230d;
L_1039231b:;
  /* 1039231b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1039231d mov edi, dword ptr [0x10395098] */
  EDI = (r32((uint32_t)(0x10395098)));
  /* 10392323 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10392325 push ebx */
  push32((uint32_t)(EBX));
  /* 10392326 push ebx */
  push32((uint32_t)(EBX));
  /* 10392327 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10392328 push ebx */
  push32((uint32_t)(EBX));
  /* 10392329 push ebx */
  push32((uint32_t)(EBX));
  /* 1039232a push eax */
  push32((uint32_t)(EAX));
  /* 1039232b push esi */
  push32((uint32_t)(ESI));
  /* 1039232c push ebx */
  push32((uint32_t)(EBX));
  /* 1039232d push ebx */
  push32((uint32_t)(EBX));
  /* 1039232e mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10392332 call edi */
  call_ind((uint32_t)(EDI), 0x10392334u);
  /* 10392334 mov ebp, eax */
  EBP = (EAX);
  /* 10392336 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392338 je 0x1039236c */
  if (C.zf) goto L_1039236c;
  /* 1039233a push ebp */
  push32((uint32_t)(EBP));
  /* 1039233b call 0x103927ee */
  push32(0x10392340u); f_103927ee();
  /* 10392340 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392342 pop ecx */
  ECX = (pop32());
  /* 10392343 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10392347 je 0x1039236c */
  if (C.zf) goto L_1039236c;
  /* 10392349 push ebx */
  push32((uint32_t)(EBX));
  /* 1039234a push ebx */
  push32((uint32_t)(EBX));
  /* 1039234b push ebp */
  push32((uint32_t)(EBP));
  /* 1039234c push eax */
  push32((uint32_t)(EAX));
  /* 1039234d push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10392351 push esi */
  push32((uint32_t)(ESI));
  /* 10392352 push ebx */
  push32((uint32_t)(EBX));
  /* 10392353 push ebx */
  push32((uint32_t)(EBX));
  /* 10392354 call edi */
  call_ind((uint32_t)(EDI), 0x10392356u);
  /* 10392356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10392358 jne 0x10392368 */
  if (!C.zf) goto L_10392368;
  /* 1039235a push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1039235e call 0x103927a6 */
  push32(0x10392363u); f_103927a6();
  /* 10392363 pop ecx */
  ECX = (pop32());
  /* 10392364 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10392368:;
  /* 10392368 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_1039236c:;
  /* 1039236c push esi */
  push32((uint32_t)(ESI));
  /* 1039236d call dword ptr [0x103950a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950a4))), 0x10392373u);
  /* 10392373 mov eax, ebx */
  EAX = (EBX);
  /* 10392375 jmp 0x103923ca */
  goto L_103923ca;
L_10392377:;
  /* 10392377 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039237a jne 0x103923c8 */
  if (!C.zf) goto L_103923c8;
L_1039237c:;
  /* 1039237c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039237e jne 0x1039238c */
  if (!C.zf) goto L_1039238c;
  /* 10392380 call dword ptr [0x103950a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950a8))), 0x10392386u);
  /* 10392386 mov edi, eax */
  EDI = (EAX);
  /* 10392388 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039238a je 0x103923c8 */
  if (C.zf) goto L_103923c8;
L_1039238c:;
  /* 1039238c cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1039238e mov eax, edi */
  EAX = (EDI);
  /* 10392390 je 0x1039239c */
  if (C.zf) goto L_1039239c;
L_10392392:;
  /* 10392392 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10392393 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10392395 jne 0x10392392 */
  if (!C.zf) goto L_10392392;
  /* 10392397 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10392398 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1039239a jne 0x10392392 */
  if (!C.zf) goto L_10392392;
L_1039239c:;
  /* 1039239c sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1039239e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1039239f mov ebp, eax */
  EBP = (EAX);
  /* 103923a1 push ebp */
  push32((uint32_t)(EBP));
  /* 103923a2 call 0x103927ee */
  push32(0x103923a7u); f_103927ee();
  /* 103923a7 mov esi, eax */
  ESI = (EAX);
  /* 103923a9 pop ecx */
  ECX = (pop32());
  /* 103923aa cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103923ac jne 0x103923b2 */
  if (!C.zf) goto L_103923b2;
  /* 103923ae xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 103923b0 jmp 0x103923bd */
  goto L_103923bd;
L_103923b2:;
  /* 103923b2 push ebp */
  push32((uint32_t)(EBP));
  /* 103923b3 push edi */
  push32((uint32_t)(EDI));
  /* 103923b4 push esi */
  push32((uint32_t)(ESI));
  /* 103923b5 call 0x10392de0 */
  push32(0x103923bau); f_10392de0();
  /* 103923ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103923bd:;
  /* 103923bd push edi */
  push32((uint32_t)(EDI));
  /* 103923be call dword ptr [0x103950a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103950a0))), 0x103923c4u);
  /* 103923c4 mov eax, esi */
  EAX = (ESI);
  /* 103923c6 jmp 0x103923ca */
  goto L_103923ca;
L_103923c8:;
  /* 103923c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103923ca:;
  /* 103923ca pop edi */
  EDI = (pop32());
  /* 103923cb pop esi */
  ESI = (pop32());
  /* 103923cc pop ebp */
  EBP = (pop32());
  /* 103923cd pop ebx */
  EBX = (pop32());
  /* 103923ce pop ecx */
  ECX = (pop32());
  /* 103923cf pop ecx */
  ECX = (pop32());
  /* 103923d0 ret  */
  ESPCHK(0x1039229fu, _esp0);
  ESP += 4; return;
}

/* FUN_100023d1 @ 0x103923d1 (60 bytes, 20 insns) */
void f_103923d1(void) {
  FTRACE(0x103923d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103923d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103923d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103923d5 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103923d9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103923de sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 103923e1 push eax */
  push32((uint32_t)(EAX));
  /* 103923e2 call dword ptr [0x1039505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1039505c))), 0x103923e8u);
  /* 103923e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103923ea mov dword ptr [0x103969c8], eax */
  w32((uint32_t)(0x103969c8), (EAX));
  /* 103923ef je 0x10392406 */
  if (C.zf) goto L_10392406;
  /* 103923f1 call 0x10393115 */
  push32(0x103923f6u); f_10393115();
  /* 103923f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103923f8 jne 0x10392409 */
  if (!C.zf) goto L_10392409;
  /* 103923fa push dword ptr [0x103969c8] */
  push32((uint32_t)(r32((uint32_t)(0x103969c8))));
  /* 10392400 call dword ptr [0x10395054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395054))), 0x10392406u);
L_10392406:;
  /* 10392406 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10392408 ret  */
  ESPCHK(0x103923d1u, _esp0);
  ESP += 4; return;
L_10392409:;
  /* 10392409 push 1 */
  push32((uint32_t)(0x1u));
  /* 1039240b pop eax */
  EAX = (pop32());
  /* 1039240c ret  */
  ESPCHK(0x103923d1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000240d @ 0x1039240d (117 bytes, 38 insns) */
void f_1039240d(void) {
  FTRACE(0x1039240du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1039240d push ebx */
  push32((uint32_t)(EBX));
  /* 1039240e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10392410 cmp dword ptr [0x10396788], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10396788))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392416 push ebp */
  push32((uint32_t)(EBP));
  /* 10392417 mov ebp, dword ptr [0x10395048] */
  EBP = (r32((uint32_t)(0x10395048)));
  /* 1039241d jle 0x10392463 */
  if ((C.zf||C.sf!=C.of)) goto L_10392463;
  /* 1039241f mov eax, dword ptr [0x1039678c] */
  EAX = (r32((uint32_t)(0x1039678c)));
  /* 10392424 push esi */
  push32((uint32_t)(ESI));
  /* 10392425 push edi */
  push32((uint32_t)(EDI));
  /* 10392426 mov edi, dword ptr [0x1039504c] */
  EDI = (r32((uint32_t)(0x1039504c)));
  /* 1039242c lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_1039242f:;
  /* 1039242f push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10392434 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10392439 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1039243b call edi */
  call_ind((uint32_t)(EDI), 0x1039243du);
  /* 1039243d push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10392442 push 0 */
  push32((uint32_t)(0x0u));
  /* 10392444 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10392446 call edi */
  call_ind((uint32_t)(EDI), 0x10392448u);
  /* 10392448 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 1039244b push 0 */
  push32((uint32_t)(0x0u));
  /* 1039244d push dword ptr [0x103969c8] */
  push32((uint32_t)(r32((uint32_t)(0x103969c8))));
  /* 10392453 call ebp */
  call_ind((uint32_t)(EBP), 0x10392455u);
  /* 10392455 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10392458 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10392459 cmp ebx, dword ptr [0x10396788] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10396788))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039245f jl 0x1039242f */
  if ((C.sf!=C.of)) goto L_1039242f;
  /* 10392461 pop edi */
  EDI = (pop32());
  /* 10392462 pop esi */
  ESI = (pop32());
L_10392463:;
  /* 10392463 push dword ptr [0x1039678c] */
  push32((uint32_t)(r32((uint32_t)(0x1039678c))));
  /* 10392469 push 0 */
  push32((uint32_t)(0x0u));
  /* 1039246b push dword ptr [0x103969c8] */
  push32((uint32_t)(r32((uint32_t)(0x103969c8))));
  /* 10392471 call ebp */
  call_ind((uint32_t)(EBP), 0x10392473u);
  /* 10392473 push dword ptr [0x103969c8] */
  push32((uint32_t)(r32((uint32_t)(0x103969c8))));
  /* 10392479 call dword ptr [0x10395054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395054))), 0x1039247fu);
  /* 1039247f pop ebp */
  EBP = (pop32());
  /* 10392480 pop ebx */
  EBX = (pop32());
  /* 10392481 ret  */
  ESPCHK(0x1039240du, _esp0);
  ESP += 4; return;
}

/* FUN_10002482 @ 0x10392482 (57 bytes, 18 insns) */
void f_10392482(void) {
  FTRACE(0x10392482u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392482 mov eax, dword ptr [0x10396580] */
  EAX = (r32((uint32_t)(0x10396580)));
  /* 10392487 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039248a je 0x10392499 */
  if (C.zf) goto L_10392499;
  /* 1039248c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1039248e jne 0x103924ba */
  if (!C.zf) goto L_103924ba;
  /* 10392490 cmp dword ptr [0x10396584], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10396584))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392497 jne 0x103924ba */
  if (!C.zf) goto L_103924ba;
L_10392499:;
  /* 10392499 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 1039249e call 0x103924bb */
  push32(0x103924a3u); f_103924bb();
  /* 103924a3 mov eax, dword ptr [0x103966d4] */
  EAX = (r32((uint32_t)(0x103966d4)));
  /* 103924a8 pop ecx */
  ECX = (pop32());
  /* 103924a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103924ab je 0x103924af */
  if (C.zf) goto L_103924af;
  /* 103924ad call eax */
  call_ind((uint32_t)(EAX), 0x103924afu);
L_103924af:;
  /* 103924af push 0xff */
  push32((uint32_t)(0xffu));
  /* 103924b4 call 0x103924bb */
  push32(0x103924b9u); f_103924bb();
  /* 103924b9 pop ecx */
  ECX = (pop32());
L_103924ba:;
  /* 103924ba ret  */
  ESPCHK(0x10392482u, _esp0);
  ESP += 4; return;
}

/* FUN_100024bb @ 0x103924bb (339 bytes, 100 insns) */
void f_103924bb(void) {
  FTRACE(0x103924bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103924bb push ebp */
  push32((uint32_t)(EBP));
  /* 103924bc mov ebp, esp */
  EBP = (ESP);
  /* 103924be sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103924c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103924c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103924c9 mov eax, 0x10396138 */
  EAX = (0x10396138u);
L_103924ce:;
  /* 103924ce cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103924d0 je 0x103924dd */
  if (C.zf) goto L_103924dd;
  /* 103924d2 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103924d5 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103924d6 cmp eax, 0x103961c8 */
  { uint32_t _a=(EAX),_b=(0x103961c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103924db jl 0x103924ce */
  if ((C.sf!=C.of)) goto L_103924ce;
L_103924dd:;
  /* 103924dd push esi */
  push32((uint32_t)(ESI));
  /* 103924de mov esi, ecx */
  ESI = (ECX);
  /* 103924e0 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 103924e3 cmp edx, dword ptr [esi + 0x10396138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10396138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103924e9 jne 0x1039260b */
  if (!C.zf) goto L_1039260b;
  /* 103924ef mov eax, dword ptr [0x10396580] */
  EAX = (r32((uint32_t)(0x10396580)));
  /* 103924f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103924f7 je 0x103925e5 */
  if (C.zf) goto L_103925e5;
  /* 103924fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103924ff jne 0x1039250e */
  if (!C.zf) goto L_1039250e;
  /* 10392501 cmp dword ptr [0x10396584], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10396584))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392508 je 0x103925e5 */
  if (C.zf) goto L_103925e5;
L_1039250e:;
  /* 1039250e cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392514 je 0x1039260b */
  if (C.zf) goto L_1039260b;
  /* 1039251a lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10392520 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10392525 push eax */
  push32((uint32_t)(EAX));
  /* 10392526 push 0 */
  push32((uint32_t)(0x0u));
  /* 10392528 call dword ptr [0x1039509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1039509c))), 0x1039252eu);
  /* 1039252e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10392530 jne 0x10392545 */
  if (!C.zf) goto L_10392545;
  /* 10392532 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10392538 push 0x10395400 */
  push32((uint32_t)(0x10395400u));
  /* 1039253d push eax */
  push32((uint32_t)(EAX));
  /* 1039253e call 0x10392880 */
  push32(0x10392543u); f_10392880();
  /* 10392543 pop ecx */
  ECX = (pop32());
  /* 10392544 pop ecx */
  ECX = (pop32());
L_10392545:;
  /* 10392545 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1039254b push edi */
  push32((uint32_t)(EDI));
  /* 1039254c push eax */
  push32((uint32_t)(EAX));
  /* 1039254d lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10392553 call 0x10392970 */
  push32(0x10392558u); f_10392970();
  /* 10392558 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10392559 pop ecx */
  ECX = (pop32());
  /* 1039255a cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039255d jbe 0x10392588 */
  if ((C.cf||C.zf)) goto L_10392588;
  /* 1039255f lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10392565 push eax */
  push32((uint32_t)(EAX));
  /* 10392566 call 0x10392970 */
  push32(0x1039256bu); f_10392970();
  /* 1039256b mov edi, eax */
  EDI = (EAX);
  /* 1039256d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10392573 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10392576 push 3 */
  push32((uint32_t)(0x3u));
  /* 10392578 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1039257a push 0x103953fc */
  push32((uint32_t)(0x103953fcu));
  /* 1039257f push edi */
  push32((uint32_t)(EDI));
  /* 10392580 call 0x103939f0 */
  push32(0x10392585u); f_103939f0();
  /* 10392585 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10392588:;
  /* 10392588 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1039258e push 0x103953e0 */
  push32((uint32_t)(0x103953e0u));
  /* 10392593 push eax */
  push32((uint32_t)(EAX));
  /* 10392594 call 0x10392880 */
  push32(0x10392599u); f_10392880();
  /* 10392599 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1039259f push edi */
  push32((uint32_t)(EDI));
  /* 103925a0 push eax */
  push32((uint32_t)(EAX));
  /* 103925a1 call 0x10392890 */
  push32(0x103925a6u); f_10392890();
  /* 103925a6 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 103925ac push 0x103953dc */
  push32((uint32_t)(0x103953dcu));
  /* 103925b1 push eax */
  push32((uint32_t)(EAX));
  /* 103925b2 call 0x10392890 */
  push32(0x103925b7u); f_10392890();
  /* 103925b7 push dword ptr [esi + 0x1039613c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1039613c))));
  /* 103925bd lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 103925c3 push eax */
  push32((uint32_t)(EAX));
  /* 103925c4 call 0x10392890 */
  push32(0x103925c9u); f_10392890();
  /* 103925c9 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 103925ce lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 103925d4 push 0x103953b4 */
  push32((uint32_t)(0x103953b4u));
  /* 103925d9 push eax */
  push32((uint32_t)(EAX));
  /* 103925da call 0x1039395e */
  push32(0x103925dfu); f_1039395e();
  /* 103925df add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103925e2 pop edi */
  EDI = (pop32());
  /* 103925e3 jmp 0x1039260b */
  goto L_1039260b;
L_103925e5:;
  /* 103925e5 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 103925e8 lea esi, [esi + 0x1039613c] */
  ESI = ((uint32_t)(ESI + 0x1039613c));
  /* 103925ee push 0 */
  push32((uint32_t)(0x0u));
  /* 103925f0 push eax */
  push32((uint32_t)(EAX));
  /* 103925f1 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 103925f3 call 0x10392970 */
  push32(0x103925f8u); f_10392970();
  /* 103925f8 pop ecx */
  ECX = (pop32());
  /* 103925f9 push eax */
  push32((uint32_t)(EAX));
  /* 103925fa push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 103925fc push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 103925fe call dword ptr [0x10395090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395090))), 0x10392604u);
  /* 10392604 push eax */
  push32((uint32_t)(EAX));
  /* 10392605 call dword ptr [0x10395050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395050))), 0x1039260bu);
L_1039260b:;
  /* 1039260b pop esi */
  ESI = (pop32());
  /* 1039260c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1039260d ret  */
  ESPCHK(0x103924bbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000260e @ 0x1039260e (41 bytes, 12 insns) */
void f_1039260e(void) {
  FTRACE(0x1039260eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1039260e push esi */
  push32((uint32_t)(ESI));
  /* 1039260f mov esi, dword ptr [0x10395040] */
  ESI = (r32((uint32_t)(0x10395040)));
  /* 10392615 push dword ptr [0x1039620c] */
  push32((uint32_t)(r32((uint32_t)(0x1039620c))));
  /* 1039261b call esi */
  call_ind((uint32_t)(ESI), 0x1039261du);
  /* 1039261d push dword ptr [0x103961fc] */
  push32((uint32_t)(r32((uint32_t)(0x103961fc))));
  /* 10392623 call esi */
  call_ind((uint32_t)(ESI), 0x10392625u);
  /* 10392625 push dword ptr [0x103961ec] */
  push32((uint32_t)(r32((uint32_t)(0x103961ec))));
  /* 1039262b call esi */
  call_ind((uint32_t)(ESI), 0x1039262du);
  /* 1039262d push dword ptr [0x103961cc] */
  push32((uint32_t)(r32((uint32_t)(0x103961cc))));
  /* 10392633 call esi */
  call_ind((uint32_t)(ESI), 0x10392635u);
  /* 10392635 pop esi */
  ESI = (pop32());
  /* 10392636 ret  */
  ESPCHK(0x1039260eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002637 @ 0x10392637 (108 bytes, 34 insns) */
void f_10392637(void) {
  FTRACE(0x10392637u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392637 push esi */
  push32((uint32_t)(ESI));
  /* 10392638 push edi */
  push32((uint32_t)(EDI));
  /* 10392639 mov edi, dword ptr [0x10395088] */
  EDI = (r32((uint32_t)(0x10395088)));
  /* 1039263f mov esi, 0x103961c8 */
  ESI = (0x103961c8u);
L_10392644:;
  /* 10392644 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10392646 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10392648 je 0x10392675 */
  if (C.zf) goto L_10392675;
  /* 1039264a cmp esi, 0x1039620c */
  { uint32_t _a=(ESI),_b=(0x1039620cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392650 je 0x10392675 */
  if (C.zf) goto L_10392675;
  /* 10392652 cmp esi, 0x103961fc */
  { uint32_t _a=(ESI),_b=(0x103961fcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392658 je 0x10392675 */
  if (C.zf) goto L_10392675;
  /* 1039265a cmp esi, 0x103961ec */
  { uint32_t _a=(ESI),_b=(0x103961ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392660 je 0x10392675 */
  if (C.zf) goto L_10392675;
  /* 10392662 cmp esi, 0x103961cc */
  { uint32_t _a=(ESI),_b=(0x103961ccu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392668 je 0x10392675 */
  if (C.zf) goto L_10392675;
  /* 1039266a push eax */
  push32((uint32_t)(EAX));
  /* 1039266b call edi */
  call_ind((uint32_t)(EDI), 0x1039266du);
  /* 1039266d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1039266f call 0x103927a6 */
  push32(0x10392674u); f_103927a6();
  /* 10392674 pop ecx */
  ECX = (pop32());
L_10392675:;
  /* 10392675 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10392678 cmp esi, 0x10396288 */
  { uint32_t _a=(ESI),_b=(0x10396288u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039267e jl 0x10392644 */
  if ((C.sf!=C.of)) goto L_10392644;
  /* 10392680 push dword ptr [0x103961ec] */
  push32((uint32_t)(r32((uint32_t)(0x103961ec))));
  /* 10392686 call edi */
  call_ind((uint32_t)(EDI), 0x10392688u);
  /* 10392688 push dword ptr [0x103961fc] */
  push32((uint32_t)(r32((uint32_t)(0x103961fc))));
  /* 1039268e call edi */
  call_ind((uint32_t)(EDI), 0x10392690u);
  /* 10392690 push dword ptr [0x1039620c] */
  push32((uint32_t)(r32((uint32_t)(0x1039620c))));
  /* 10392696 call edi */
  call_ind((uint32_t)(EDI), 0x10392698u);
  /* 10392698 push dword ptr [0x103961cc] */
  push32((uint32_t)(r32((uint32_t)(0x103961cc))));
  /* 1039269e call edi */
  call_ind((uint32_t)(EDI), 0x103926a0u);
  /* 103926a0 pop edi */
  EDI = (pop32());
  /* 103926a1 pop esi */
  ESI = (pop32());
  /* 103926a2 ret  */
  ESPCHK(0x10392637u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a3 @ 0x103926a3 (97 bytes, 37 insns) */
void f_103926a3(void) {
  FTRACE(0x103926a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103926a3 push ebp */
  push32((uint32_t)(EBP));
  /* 103926a4 mov ebp, esp */
  EBP = (ESP);
  /* 103926a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103926a9 push esi */
  push32((uint32_t)(ESI));
  /* 103926aa cmp dword ptr [eax*4 + 0x103961c8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x103961c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103926b2 lea esi, [eax*4 + 0x103961c8] */
  ESI = ((uint32_t)(EAX*4 + 0x103961c8));
  /* 103926b9 jne 0x103926f9 */
  if (!C.zf) goto L_103926f9;
  /* 103926bb push edi */
  push32((uint32_t)(EDI));
  /* 103926bc push 0x18 */
  push32((uint32_t)(0x18u));
  /* 103926be call 0x103927ee */
  push32(0x103926c3u); f_103927ee();
  /* 103926c3 mov edi, eax */
  EDI = (EAX);
  /* 103926c5 pop ecx */
  ECX = (pop32());
  /* 103926c6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 103926c8 jne 0x103926d2 */
  if (!C.zf) goto L_103926d2;
  /* 103926ca push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103926cc call 0x10391b13 */
  push32(0x103926d1u); f_10391b13();
  /* 103926d1 pop ecx */
  ECX = (pop32());
L_103926d2:;
  /* 103926d2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103926d4 call 0x103926a3 */
  push32(0x103926d9u); f_103926a3();
  /* 103926d9 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103926dc pop ecx */
  ECX = (pop32());
  /* 103926dd push edi */
  push32((uint32_t)(EDI));
  /* 103926de jne 0x103926ea */
  if (!C.zf) goto L_103926ea;
  /* 103926e0 call dword ptr [0x10395040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395040))), 0x103926e6u);
  /* 103926e6 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 103926e8 jmp 0x103926f0 */
  goto L_103926f0;
L_103926ea:;
  /* 103926ea call 0x103927a6 */
  push32(0x103926efu); f_103927a6();
  /* 103926ef pop ecx */
  ECX = (pop32());
L_103926f0:;
  /* 103926f0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103926f2 call 0x10392704 */
  push32(0x103926f7u); f_10392704();
  /* 103926f7 pop ecx */
  ECX = (pop32());
  /* 103926f8 pop edi */
  EDI = (pop32());
L_103926f9:;
  /* 103926f9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 103926fb call dword ptr [0x1039503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1039503c))), 0x10392701u);
  /* 10392701 pop esi */
  ESI = (pop32());
  /* 10392702 pop ebp */
  EBP = (pop32());
  /* 10392703 ret  */
  ESPCHK(0x103926a3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002704 @ 0x10392704 (21 bytes, 7 insns) */
void f_10392704(void) {
  FTRACE(0x10392704u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392704 push ebp */
  push32((uint32_t)(EBP));
  /* 10392705 mov ebp, esp */
  EBP = (ESP);
  /* 10392707 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1039270a push dword ptr [eax*4 + 0x103961c8] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x103961c8))));
  /* 10392711 call dword ptr [0x10395044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395044))), 0x10392717u);
  /* 10392717 pop ebp */
  EBP = (pop32());
  /* 10392718 ret  */
  ESPCHK(0x10392704u, _esp0);
  ESP += 4; return;
}

/* FUN_10002719 @ 0x10392719 (141 bytes, 56 insns) */
void f_10392719(void) {
  FTRACE(0x10392719u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392719 push ebx */
  push32((uint32_t)(EBX));
  /* 1039271a push esi */
  push32((uint32_t)(ESI));
  /* 1039271b mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1039271f push edi */
  push32((uint32_t)(EDI));
  /* 10392720 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10392725 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392728 mov ebx, esi */
  EBX = (ESI);
  /* 1039272a ja 0x10392739 */
  if ((!C.cf&&!C.zf)) goto L_10392739;
  /* 1039272c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1039272e jne 0x10392733 */
  if (!C.zf) goto L_10392733;
  /* 10392730 push 1 */
  push32((uint32_t)(0x1u));
  /* 10392732 pop esi */
  ESI = (pop32());
L_10392733:;
  /* 10392733 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10392736 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10392739:;
  /* 10392739 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1039273b cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039273e ja 0x1039277a */
  if ((!C.cf&&!C.zf)) goto L_1039277a;
  /* 10392740 cmp ebx, dword ptr [0x10396410] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10396410))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392746 ja 0x10392765 */
  if ((!C.cf&&!C.zf)) goto L_10392765;
  /* 10392748 push 9 */
  push32((uint32_t)(0x9u));
  /* 1039274a call 0x103926a3 */
  push32(0x1039274fu); f_103926a3();
  /* 1039274f push ebx */
  push32((uint32_t)(EBX));
  /* 10392750 call 0x103934a9 */
  push32(0x10392755u); f_103934a9();
  /* 10392755 push 9 */
  push32((uint32_t)(0x9u));
  /* 10392757 mov edi, eax */
  EDI = (EAX);
  /* 10392759 call 0x10392704 */
  push32(0x1039275eu); f_10392704();
  /* 1039275e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10392761 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10392763 jne 0x10392790 */
  if (!C.zf) goto L_10392790;
L_10392765:;
  /* 10392765 push esi */
  push32((uint32_t)(ESI));
  /* 10392766 push 8 */
  push32((uint32_t)(0x8u));
  /* 10392768 push dword ptr [0x103969c8] */
  push32((uint32_t)(r32((uint32_t)(0x103969c8))));
  /* 1039276e call dword ptr [0x10395038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395038))), 0x10392774u);
  /* 10392774 mov edi, eax */
  EDI = (EAX);
  /* 10392776 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10392778 jne 0x1039279c */
  if (!C.zf) goto L_1039279c;
L_1039277a:;
  /* 1039277a cmp dword ptr [0x1039674c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1039674c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392781 je 0x1039279c */
  if (C.zf) goto L_1039279c;
  /* 10392783 push esi */
  push32((uint32_t)(ESI));
  /* 10392784 call 0x10393b48 */
  push32(0x10392789u); f_10393b48();
  /* 10392789 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1039278b pop ecx */
  ECX = (pop32());
  /* 1039278c je 0x103927a2 */
  if (C.zf) goto L_103927a2;
  /* 1039278e jmp 0x10392739 */
  goto L_10392739;
L_10392790:;
  /* 10392790 push ebx */
  push32((uint32_t)(EBX));
  /* 10392791 push 0 */
  push32((uint32_t)(0x0u));
  /* 10392793 push edi */
  push32((uint32_t)(EDI));
  /* 10392794 call 0x10393af0 */
  push32(0x10392799u); f_10393af0();
  /* 10392799 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1039279c:;
  /* 1039279c mov eax, edi */
  EAX = (EDI);
L_1039279e:;
  /* 1039279e pop edi */
  EDI = (pop32());
  /* 1039279f pop esi */
  ESI = (pop32());
  /* 103927a0 pop ebx */
  EBX = (pop32());
  /* 103927a1 ret  */
  ESPCHK(0x10392719u, _esp0);
  ESP += 4; return;
L_103927a2:;
  /* 103927a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103927a4 jmp 0x1039279e */
  goto L_1039279e;
}

/* FUN_100027a6 @ 0x103927a6 (72 bytes, 29 insns) */
void f_103927a6(void) {
  FTRACE(0x103927a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103927a6 push esi */
  push32((uint32_t)(ESI));
  /* 103927a7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 103927ab test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103927ad je 0x103927ec */
  if (C.zf) goto L_103927ec;
  /* 103927af push 9 */
  push32((uint32_t)(0x9u));
  /* 103927b1 call 0x103926a3 */
  push32(0x103927b6u); f_103926a3();
  /* 103927b6 push esi */
  push32((uint32_t)(ESI));
  /* 103927b7 call 0x10393153 */
  push32(0x103927bcu); f_10393153();
  /* 103927bc pop ecx */
  ECX = (pop32());
  /* 103927bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103927bf pop ecx */
  ECX = (pop32());
  /* 103927c0 je 0x103927d5 */
  if (C.zf) goto L_103927d5;
  /* 103927c2 push esi */
  push32((uint32_t)(ESI));
  /* 103927c3 push eax */
  push32((uint32_t)(EAX));
  /* 103927c4 call 0x1039317e */
  push32(0x103927c9u); f_1039317e();
  /* 103927c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 103927cb call 0x10392704 */
  push32(0x103927d0u); f_10392704();
  /* 103927d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103927d3 pop esi */
  ESI = (pop32());
  /* 103927d4 ret  */
  ESPCHK(0x103927a6u, _esp0);
  ESP += 4; return;
L_103927d5:;
  /* 103927d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 103927d7 call 0x10392704 */
  push32(0x103927dcu); f_10392704();
  /* 103927dc pop ecx */
  ECX = (pop32());
  /* 103927dd push esi */
  push32((uint32_t)(ESI));
  /* 103927de push 0 */
  push32((uint32_t)(0x0u));
  /* 103927e0 push dword ptr [0x103969c8] */
  push32((uint32_t)(r32((uint32_t)(0x103969c8))));
  /* 103927e6 call dword ptr [0x10395048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395048))), 0x103927ecu);
L_103927ec:;
  /* 103927ec pop esi */
  ESI = (pop32());
  /* 103927ed ret  */
  ESPCHK(0x103927a6u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x103927ee (18 bytes, 6 insns) */
void f_103927ee(void) {
  FTRACE(0x103927eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103927ee push dword ptr [0x1039674c] */
  push32((uint32_t)(r32((uint32_t)(0x1039674c))));
  /* 103927f4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 103927f8 call 0x10392800 */
  push32(0x103927fdu); f_10392800();
  /* 103927fd pop ecx */
  ECX = (pop32());
  /* 103927fe pop ecx */
  ECX = (pop32());
  /* 103927ff ret  */
  ESPCHK(0x103927eeu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10392800 (44 bytes, 16 insns) */
void f_10392800(void) {
  FTRACE(0x10392800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392800 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392805 ja 0x10392829 */
  if ((!C.cf&&!C.zf)) goto L_10392829;
L_10392807:;
  /* 10392807 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1039280b call 0x1039282c */
  push32(0x10392810u); f_1039282c();
  /* 10392810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10392812 pop ecx */
  ECX = (pop32());
  /* 10392813 jne 0x1039282b */
  if (!C.zf) goto L_1039282b;
  /* 10392815 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392819 je 0x1039282b */
  if (C.zf) goto L_1039282b;
  /* 1039281b push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1039281f call 0x10393b48 */
  push32(0x10392824u); f_10393b48();
  /* 10392824 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10392826 pop ecx */
  ECX = (pop32());
  /* 10392827 jne 0x10392807 */
  if (!C.zf) goto L_10392807;
L_10392829:;
  /* 10392829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1039282b:;
  /* 1039282b ret  */
  ESPCHK(0x10392800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000282c @ 0x1039282c (78 bytes, 30 insns) */
void f_1039282c(void) {
  FTRACE(0x1039282cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1039282c push esi */
  push32((uint32_t)(ESI));
  /* 1039282d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10392831 cmp esi, dword ptr [0x10396410] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10396410))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392837 push edi */
  push32((uint32_t)(EDI));
  /* 10392838 ja 0x1039285b */
  if ((!C.cf&&!C.zf)) goto L_1039285b;
  /* 1039283a push 9 */
  push32((uint32_t)(0x9u));
  /* 1039283c call 0x103926a3 */
  push32(0x10392841u); f_103926a3();
  /* 10392841 push esi */
  push32((uint32_t)(ESI));
  /* 10392842 call 0x103934a9 */
  push32(0x10392847u); f_103934a9();
  /* 10392847 push 9 */
  push32((uint32_t)(0x9u));
  /* 10392849 mov edi, eax */
  EDI = (EAX);
  /* 1039284b call 0x10392704 */
  push32(0x10392850u); f_10392704();
  /* 10392850 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10392853 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10392855 je 0x1039285b */
  if (C.zf) goto L_1039285b;
  /* 10392857 mov eax, edi */
  EAX = (EDI);
  /* 10392859 jmp 0x10392877 */
  goto L_10392877;
L_1039285b:;
  /* 1039285b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1039285d jne 0x10392862 */
  if (!C.zf) goto L_10392862;
  /* 1039285f push 1 */
  push32((uint32_t)(0x1u));
  /* 10392861 pop esi */
  ESI = (pop32());
L_10392862:;
  /* 10392862 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10392865 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10392868 push esi */
  push32((uint32_t)(ESI));
  /* 10392869 push 0 */
  push32((uint32_t)(0x0u));
  /* 1039286b push dword ptr [0x103969c8] */
  push32((uint32_t)(r32((uint32_t)(0x103969c8))));
  /* 10392871 call dword ptr [0x10395038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395038))), 0x10392877u);
L_10392877:;
  /* 10392877 pop edi */
  EDI = (pop32());
  /* 10392878 pop esi */
  ESI = (pop32());
  /* 10392879 ret  */
  ESPCHK(0x1039282cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002880 @ 0x10392880 (7 bytes, 3 insns) */
void f_10392880(void) {
  FTRACE(0x10392880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392880 push edi */
  push32((uint32_t)(EDI));
  /* 10392881 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10392885 jmp 0x103928f1 */
  jmp_ind(0x103928f1u); return;
}

/* FUN_10002890 @ 0x10392890 (224 bytes, 84 insns) */
void f_10392890(void) {
  FTRACE(0x10392890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392890 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10392894 push edi */
  push32((uint32_t)(EDI));
  /* 10392895 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1039289b je 0x103928ac */
  if (C.zf) goto L_103928ac;
L_1039289d:;
  /* 1039289d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1039289f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103928a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103928a2 je 0x103928df */
  if (C.zf) goto L_103928df;
  /* 103928a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103928aa jne 0x1039289d */
  if (!C.zf) goto L_1039289d;
L_103928ac:;
  /* 103928ac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103928ae mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103928b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103928b5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103928b8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103928ba add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103928bd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103928c2 je 0x103928ac */
  if (C.zf) goto L_103928ac;
  /* 103928c4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 103928c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103928c9 je 0x103928ee */
  if (C.zf) goto L_103928ee;
  /* 103928cb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 103928cd je 0x103928e9 */
  if (C.zf) goto L_103928e9;
  /* 103928cf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 103928d4 je 0x103928e4 */
  if (C.zf) goto L_103928e4;
  /* 103928d6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 103928db je 0x103928df */
  if (C.zf) goto L_103928df;
  /* 103928dd jmp 0x103928ac */
  goto L_103928ac;
L_103928df:;
  /* 103928df lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 103928e2 jmp 0x103928f1 */
  goto L_103928f1;
L_103928e4:;
  /* 103928e4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 103928e7 jmp 0x103928f1 */
  goto L_103928f1;
L_103928e9:;
  /* 103928e9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 103928ec jmp 0x103928f1 */
  goto L_103928f1;
L_103928ee:;
  /* 103928ee lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_103928f1:;
  /* 103928f1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 103928f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103928fb je 0x10392916 */
  if (C.zf) goto L_10392916;
L_103928fd:;
  /* 103928fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103928ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10392900 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10392902 je 0x10392968 */
  if (C.zf) goto L_10392968;
  /* 10392904 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10392906 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10392907 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1039290d jne 0x103928fd */
  if (!C.zf) goto L_103928fd;
  /* 1039290f jmp 0x10392916 */
  goto L_10392916;
L_10392911:;
  /* 10392911 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10392913 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10392916:;
  /* 10392916 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1039291b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1039291d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1039291f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10392922 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10392924 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10392926 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10392929 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1039292e je 0x10392911 */
  if (C.zf) goto L_10392911;
  /* 10392930 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10392932 je 0x10392968 */
  if (C.zf) goto L_10392968;
  /* 10392934 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10392936 je 0x1039295f */
  if (C.zf) goto L_1039295f;
  /* 10392938 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1039293e je 0x10392952 */
  if (C.zf) goto L_10392952;
  /* 10392940 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10392946 je 0x1039294a */
  if (C.zf) goto L_1039294a;
  /* 10392948 jmp 0x10392911 */
  goto L_10392911;
L_1039294a:;
  /* 1039294a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1039294c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10392950 pop edi */
  EDI = (pop32());
  /* 10392951 ret  */
  ESPCHK(0x10392890u, _esp0);
  ESP += 4; return;
L_10392952:;
  /* 10392952 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10392955 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10392959 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1039295d pop edi */
  EDI = (pop32());
  /* 1039295e ret  */
  ESPCHK(0x10392890u, _esp0);
  ESP += 4; return;
L_1039295f:;
  /* 1039295f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10392962 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10392966 pop edi */
  EDI = (pop32());
  /* 10392967 ret  */
  ESPCHK(0x10392890u, _esp0);
  ESP += 4; return;
L_10392968:;
  /* 10392968 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1039296a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1039296e pop edi */
  EDI = (pop32());
  /* 1039296f ret  */
  ESPCHK(0x10392890u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10392970 (123 bytes, 44 insns) */
void f_10392970(void) {
  FTRACE(0x10392970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392970 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10392974 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1039297a je 0x10392990 */
  if (C.zf) goto L_10392990;
L_1039297c:;
  /* 1039297c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1039297e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1039297f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10392981 je 0x103929c3 */
  if (C.zf) goto L_103929c3;
  /* 10392983 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10392989 jne 0x1039297c */
  if (!C.zf) goto L_1039297c;
  /* 1039298b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10392990:;
  /* 10392990 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10392992 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10392997 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10392999 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1039299c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1039299e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103929a1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103929a6 je 0x10392990 */
  if (C.zf) goto L_10392990;
  /* 103929a8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 103929ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103929ad je 0x103929e1 */
  if (C.zf) goto L_103929e1;
  /* 103929af test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 103929b1 je 0x103929d7 */
  if (C.zf) goto L_103929d7;
  /* 103929b3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 103929b8 je 0x103929cd */
  if (C.zf) goto L_103929cd;
  /* 103929ba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 103929bf je 0x103929c3 */
  if (C.zf) goto L_103929c3;
  /* 103929c1 jmp 0x10392990 */
  goto L_10392990;
L_103929c3:;
  /* 103929c3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 103929c6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103929ca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103929cc ret  */
  ESPCHK(0x10392970u, _esp0);
  ESP += 4; return;
L_103929cd:;
  /* 103929cd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 103929d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103929d4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103929d6 ret  */
  ESPCHK(0x10392970u, _esp0);
  ESP += 4; return;
L_103929d7:;
  /* 103929d7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 103929da mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103929de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103929e0 ret  */
  ESPCHK(0x10392970u, _esp0);
  ESP += 4; return;
L_103929e1:;
  /* 103929e1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 103929e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103929e8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103929ea ret  */
  ESPCHK(0x10392970u, _esp0);
  ESP += 4; return;
}

/* FUN_100029eb @ 0x103929eb (429 bytes, 143 insns) */
void f_103929eb(void) {
  FTRACE(0x103929ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103929eb push ebp */
  push32((uint32_t)(EBP));
  /* 103929ec mov ebp, esp */
  EBP = (ESP);
  /* 103929ee sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103929f1 push ebx */
  push32((uint32_t)(EBX));
  /* 103929f2 push esi */
  push32((uint32_t)(ESI));
  /* 103929f3 push edi */
  push32((uint32_t)(EDI));
  /* 103929f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103929f6 call 0x103926a3 */
  push32(0x103929fbu); f_103926a3();
  /* 103929fb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 103929fe call 0x10392b98 */
  push32(0x10392a03u); f_10392b98();
  /* 10392a03 mov ebx, eax */
  EBX = (EAX);
  /* 10392a05 pop ecx */
  ECX = (pop32());
  /* 10392a06 cmp ebx, dword ptr [0x10396790] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10396790))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392a0c pop ecx */
  ECX = (pop32());
  /* 10392a0d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10392a10 jne 0x10392a19 */
  if (!C.zf) goto L_10392a19;
L_10392a12:;
  /* 10392a12 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10392a14 jmp 0x10392b89 */
  goto L_10392b89;
L_10392a19:;
  /* 10392a19 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10392a1b je 0x10392b77 */
  if (C.zf) goto L_10392b77;
  /* 10392a21 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10392a23 mov eax, 0x10396318 */
  EAX = (0x10396318u);
L_10392a28:;
  /* 10392a28 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392a2a je 0x10392aa0 */
  if (C.zf) goto L_10392aa0;
  /* 10392a2c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10392a2f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10392a30 cmp eax, 0x10396408 */
  { uint32_t _a=(EAX),_b=(0x10396408u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392a35 jl 0x10392a28 */
  if ((C.sf!=C.of)) goto L_10392a28;
  /* 10392a37 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10392a3a push eax */
  push32((uint32_t)(EAX));
  /* 10392a3b push ebx */
  push32((uint32_t)(EBX));
  /* 10392a3c call dword ptr [0x10395030] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395030))), 0x10392a42u);
  /* 10392a42 push 1 */
  push32((uint32_t)(0x1u));
  /* 10392a44 pop esi */
  ESI = (pop32());
  /* 10392a45 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392a47 jne 0x10392b6e */
  if (!C.zf) goto L_10392b6e;
  /* 10392a4d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10392a4f and dword ptr [0x103969c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x103969c4)))&(0x0u); w32((uint32_t)(0x103969c4), (_r)); fl_logic(_r,32); }
  /* 10392a56 pop ecx */
  ECX = (pop32());
  /* 10392a57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10392a59 mov edi, 0x103968c0 */
  EDI = (0x103968c0u);
  /* 10392a5e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392a61 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10392a63 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10392a64 mov dword ptr [0x10396790], ebx */
  w32((uint32_t)(0x10396790), (EBX));
  /* 10392a6a jbe 0x10392b5b */
  if ((C.cf||C.zf)) goto L_10392b5b;
  /* 10392a70 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10392a74 je 0x10392b36 */
  if (C.zf) goto L_10392b36;
  /* 10392a7a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10392a7d:;
  /* 10392a7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10392a7f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10392a81 je 0x10392b36 */
  if (C.zf) goto L_10392b36;
  /* 10392a87 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10392a8b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10392a8e:;
  /* 10392a8e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392a90 ja 0x10392b2a */
  if ((!C.cf&&!C.zf)) goto L_10392b2a;
  /* 10392a96 or byte ptr [eax + 0x103968c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103968c1)))|(0x4u); w8((uint32_t)(EAX + 0x103968c1), (_r)); fl_logic(_r,8); }
  /* 10392a9d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10392a9e jmp 0x10392a8e */
  goto L_10392a8e;
L_10392aa0:;
  /* 10392aa0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10392aa4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10392aa6 pop ecx */
  ECX = (pop32());
  /* 10392aa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10392aa9 mov edi, 0x103968c0 */
  EDI = (0x103968c0u);
  /* 10392aae lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10392ab1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10392ab3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10392ab6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10392ab7 lea ebx, [esi + 0x10396328] */
  EBX = ((uint32_t)(ESI + 0x10396328));
L_10392abd:;
  /* 10392abd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10392ac0 mov ecx, ebx */
  ECX = (EBX);
  /* 10392ac2 je 0x10392af0 */
  if (C.zf) goto L_10392af0;
L_10392ac4:;
  /* 10392ac4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10392ac7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10392ac9 je 0x10392af0 */
  if (C.zf) goto L_10392af0;
  /* 10392acb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10392ace movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10392ad1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392ad3 ja 0x10392ae9 */
  if ((!C.cf&&!C.zf)) goto L_10392ae9;
  /* 10392ad5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10392ad8 mov dl, byte ptr [edx + 0x10396310] */
  DL = (r8((uint32_t)(EDX + 0x10396310)));
L_10392ade:;
  /* 10392ade or byte ptr [eax + 0x103968c1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103968c1)))|(DL); w8((uint32_t)(EAX + 0x103968c1), (_r)); fl_logic(_r,8); }
  /* 10392ae4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10392ae5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392ae7 jbe 0x10392ade */
  if ((C.cf||C.zf)) goto L_10392ade;
L_10392ae9:;
  /* 10392ae9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10392aea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10392aeb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10392aee jne 0x10392ac4 */
  if (!C.zf) goto L_10392ac4;
L_10392af0:;
  /* 10392af0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10392af3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10392af6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392afa jb 0x10392abd */
  if (C.cf) goto L_10392abd;
  /* 10392afc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10392aff mov dword ptr [0x103967ac], 1 */
  w32((uint32_t)(0x103967ac), (0x1u));
  /* 10392b09 push eax */
  push32((uint32_t)(EAX));
  /* 10392b0a mov dword ptr [0x10396790], eax */
  w32((uint32_t)(0x10396790), (EAX));
  /* 10392b0f call 0x10392be2 */
  push32(0x10392b14u); f_10392be2();
  /* 10392b14 lea esi, [esi + 0x1039631c] */
  ESI = ((uint32_t)(ESI + 0x1039631c));
  /* 10392b1a mov edi, 0x103967a0 */
  EDI = (0x103967a0u);
  /* 10392b1f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10392b20 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10392b21 pop ecx */
  ECX = (pop32());
  /* 10392b22 mov dword ptr [0x103969c4], eax */
  w32((uint32_t)(0x103969c4), (EAX));
  /* 10392b27 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10392b28 jmp 0x10392b7c */
  goto L_10392b7c;
L_10392b2a:;
  /* 10392b2a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10392b2b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10392b2c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10392b30 jne 0x10392a7d */
  if (!C.zf) goto L_10392a7d;
L_10392b36:;
  /* 10392b36 mov eax, esi */
  EAX = (ESI);
L_10392b38:;
  /* 10392b38 or byte ptr [eax + 0x103968c1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103968c1)))|(0x8u); w8((uint32_t)(EAX + 0x103968c1), (_r)); fl_logic(_r,8); }
  /* 10392b3f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10392b40 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392b45 jb 0x10392b38 */
  if (C.cf) goto L_10392b38;
  /* 10392b47 push ebx */
  push32((uint32_t)(EBX));
  /* 10392b48 call 0x10392be2 */
  push32(0x10392b4du); f_10392be2();
  /* 10392b4d pop ecx */
  ECX = (pop32());
  /* 10392b4e mov dword ptr [0x103969c4], eax */
  w32((uint32_t)(0x103969c4), (EAX));
  /* 10392b53 mov dword ptr [0x103967ac], esi */
  w32((uint32_t)(0x103967ac), (ESI));
  /* 10392b59 jmp 0x10392b62 */
  goto L_10392b62;
L_10392b5b:;
  /* 10392b5b and dword ptr [0x103967ac], 0 */
  { uint32_t _r=(r32((uint32_t)(0x103967ac)))&(0x0u); w32((uint32_t)(0x103967ac), (_r)); fl_logic(_r,32); }
L_10392b62:;
  /* 10392b62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10392b64 mov edi, 0x103967a0 */
  EDI = (0x103967a0u);
  /* 10392b69 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10392b6a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10392b6b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10392b6c jmp 0x10392b7c */
  goto L_10392b7c;
L_10392b6e:;
  /* 10392b6e cmp dword ptr [0x10396738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10396738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392b75 je 0x10392b86 */
  if (C.zf) goto L_10392b86;
L_10392b77:;
  /* 10392b77 call 0x10392c15 */
  push32(0x10392b7cu); f_10392c15();
L_10392b7c:;
  /* 10392b7c call 0x10392c3e */
  push32(0x10392b81u); f_10392c3e();
  /* 10392b81 jmp 0x10392a12 */
  goto L_10392a12;
L_10392b86:;
  /* 10392b86 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10392b89:;
  /* 10392b89 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10392b8b call 0x10392704 */
  push32(0x10392b90u); f_10392704();
  /* 10392b90 pop ecx */
  ECX = (pop32());
  /* 10392b91 mov eax, esi */
  EAX = (ESI);
  /* 10392b93 pop edi */
  EDI = (pop32());
  /* 10392b94 pop esi */
  ESI = (pop32());
  /* 10392b95 pop ebx */
  EBX = (pop32());
  /* 10392b96 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10392b97 ret  */
  ESPCHK(0x103929ebu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b98 @ 0x10392b98 (74 bytes, 15 insns) */
void f_10392b98(void) {
  FTRACE(0x10392b98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392b98 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10392b9c and dword ptr [0x10396738], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10396738)))&(0x0u); w32((uint32_t)(0x10396738), (_r)); fl_logic(_r,32); }
  /* 10392ba3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392ba6 jne 0x10392bb8 */
  if (!C.zf) goto L_10392bb8;
  /* 10392ba8 mov dword ptr [0x10396738], 1 */
  w32((uint32_t)(0x10396738), (0x1u));
  /* 10392bb2 jmp dword ptr [0x10395034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10395034)))); return;
L_10392bb8:;
  /* 10392bb8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392bbb jne 0x10392bcd */
  if (!C.zf) goto L_10392bcd;
  /* 10392bbd mov dword ptr [0x10396738], 1 */
  w32((uint32_t)(0x10396738), (0x1u));
  /* 10392bc7 jmp dword ptr [0x1039502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1039502c)))); return;
L_10392bcd:;
  /* 10392bcd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392bd0 jne 0x10392be1 */
  if (!C.zf) goto L_10392be1;
  /* 10392bd2 mov eax, dword ptr [0x10396768] */
  EAX = (r32((uint32_t)(0x10396768)));
  /* 10392bd7 mov dword ptr [0x10396738], 1 */
  w32((uint32_t)(0x10396738), (0x1u));
L_10392be1:;
  /* 10392be1 ret  */
  ESPCHK(0x10392b98u, _esp0);
  ESP += 4; return;
}

/* FUN_10002be2 @ 0x10392be2 (51 bytes, 19 insns) */
void f_10392be2(void) {
  FTRACE(0x10392be2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392be2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10392be6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10392beb je 0x10392c0f */
  if (C.zf) goto L_10392c0f;
  /* 10392bed sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10392bf0 je 0x10392c09 */
  if (C.zf) goto L_10392c09;
  /* 10392bf2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10392bf5 je 0x10392c03 */
  if (C.zf) goto L_10392c03;
  /* 10392bf7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10392bf8 je 0x10392bfd */
  if (C.zf) goto L_10392bfd;
  /* 10392bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10392bfc ret  */
  ESPCHK(0x10392be2u, _esp0);
  ESP += 4; return;
L_10392bfd:;
  /* 10392bfd mov eax, 0x404 */
  EAX = (0x404u);
  /* 10392c02 ret  */
  ESPCHK(0x10392be2u, _esp0);
  ESP += 4; return;
L_10392c03:;
  /* 10392c03 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10392c08 ret  */
  ESPCHK(0x10392be2u, _esp0);
  ESP += 4; return;
L_10392c09:;
  /* 10392c09 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10392c0e ret  */
  ESPCHK(0x10392be2u, _esp0);
  ESP += 4; return;
L_10392c0f:;
  /* 10392c0f mov eax, 0x411 */
  EAX = (0x411u);
  /* 10392c14 ret  */
  ESPCHK(0x10392be2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c15 @ 0x10392c15 (41 bytes, 17 insns) */
void f_10392c15(void) {
  FTRACE(0x10392c15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392c15 push edi */
  push32((uint32_t)(EDI));
  /* 10392c16 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10392c18 pop ecx */
  ECX = (pop32());
  /* 10392c19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10392c1b mov edi, 0x103968c0 */
  EDI = (0x103968c0u);
  /* 10392c20 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10392c22 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10392c23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10392c25 mov edi, 0x103967a0 */
  EDI = (0x103967a0u);
  /* 10392c2a mov dword ptr [0x10396790], eax */
  w32((uint32_t)(0x10396790), (EAX));
  /* 10392c2f mov dword ptr [0x103967ac], eax */
  w32((uint32_t)(0x103967ac), (EAX));
  /* 10392c34 mov dword ptr [0x103969c4], eax */
  w32((uint32_t)(0x103969c4), (EAX));
  /* 10392c39 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10392c3a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10392c3b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10392c3c pop edi */
  EDI = (pop32());
  /* 10392c3d ret  */
  ESPCHK(0x10392c15u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c3e @ 0x10392c3e (389 bytes, 124 insns) */
void f_10392c3e(void) {
  FTRACE(0x10392c3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392c3e push ebp */
  push32((uint32_t)(EBP));
  /* 10392c3f mov ebp, esp */
  EBP = (ESP);
  /* 10392c41 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10392c47 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10392c4a push esi */
  push32((uint32_t)(ESI));
  /* 10392c4b push eax */
  push32((uint32_t)(EAX));
  /* 10392c4c push dword ptr [0x10396790] */
  push32((uint32_t)(r32((uint32_t)(0x10396790))));
  /* 10392c52 call dword ptr [0x10395030] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395030))), 0x10392c58u);
  /* 10392c58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392c5b jne 0x10392d77 */
  if (!C.zf) goto L_10392d77;
  /* 10392c61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10392c63 mov esi, 0x100 */
  ESI = (0x100u);
L_10392c68:;
  /* 10392c68 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 10392c6f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10392c70 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392c72 jb 0x10392c68 */
  if (C.cf) goto L_10392c68;
  /* 10392c74 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10392c77 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 10392c7e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10392c80 je 0x10392cb9 */
  if (C.zf) goto L_10392cb9;
  /* 10392c82 push ebx */
  push32((uint32_t)(EBX));
  /* 10392c83 push edi */
  push32((uint32_t)(EDI));
  /* 10392c84 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10392c87:;
  /* 10392c87 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 10392c8a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10392c8d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392c8f ja 0x10392cae */
  if ((!C.cf&&!C.zf)) goto L_10392cae;
  /* 10392c91 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10392c93 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 10392c9a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10392c9b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10392ca0 mov ebx, ecx */
  EBX = (ECX);
  /* 10392ca2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10392ca5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10392ca7 mov ecx, ebx */
  ECX = (EBX);
  /* 10392ca9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10392cac rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_10392cae:;
  /* 10392cae inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10392caf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10392cb0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10392cb3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10392cb5 jne 0x10392c87 */
  if (!C.zf) goto L_10392c87;
  /* 10392cb7 pop edi */
  EDI = (pop32());
  /* 10392cb8 pop ebx */
  EBX = (pop32());
L_10392cb9:;
  /* 10392cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10392cbb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10392cc1 push dword ptr [0x103969c4] */
  push32((uint32_t)(r32((uint32_t)(0x103969c4))));
  /* 10392cc7 push dword ptr [0x10396790] */
  push32((uint32_t)(r32((uint32_t)(0x10396790))));
  /* 10392ccd push eax */
  push32((uint32_t)(EAX));
  /* 10392cce lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10392cd4 push esi */
  push32((uint32_t)(ESI));
  /* 10392cd5 push eax */
  push32((uint32_t)(EAX));
  /* 10392cd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10392cd8 call 0x10393db2 */
  push32(0x10392cddu); f_10393db2();
  /* 10392cdd push 0 */
  push32((uint32_t)(0x0u));
  /* 10392cdf lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10392ce5 push dword ptr [0x10396790] */
  push32((uint32_t)(r32((uint32_t)(0x10396790))));
  /* 10392ceb push esi */
  push32((uint32_t)(ESI));
  /* 10392cec push eax */
  push32((uint32_t)(EAX));
  /* 10392ced lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10392cf3 push esi */
  push32((uint32_t)(ESI));
  /* 10392cf4 push eax */
  push32((uint32_t)(EAX));
  /* 10392cf5 push esi */
  push32((uint32_t)(ESI));
  /* 10392cf6 push dword ptr [0x103969c4] */
  push32((uint32_t)(r32((uint32_t)(0x103969c4))));
  /* 10392cfc call 0x10393b63 */
  push32(0x10392d01u); f_10393b63();
  /* 10392d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10392d03 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10392d09 push dword ptr [0x10396790] */
  push32((uint32_t)(r32((uint32_t)(0x10396790))));
  /* 10392d0f push esi */
  push32((uint32_t)(ESI));
  /* 10392d10 push eax */
  push32((uint32_t)(EAX));
  /* 10392d11 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10392d17 push esi */
  push32((uint32_t)(ESI));
  /* 10392d18 push eax */
  push32((uint32_t)(EAX));
  /* 10392d19 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10392d1e push dword ptr [0x103969c4] */
  push32((uint32_t)(r32((uint32_t)(0x103969c4))));
  /* 10392d24 call 0x10393b63 */
  push32(0x10392d29u); f_10393b63();
  /* 10392d29 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10392d2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10392d2e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10392d34:;
  /* 10392d34 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10392d37 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10392d3a je 0x10392d52 */
  if (C.zf) goto L_10392d52;
  /* 10392d3c or byte ptr [eax + 0x103968c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103968c1)))|(0x10u); w8((uint32_t)(EAX + 0x103968c1), (_r)); fl_logic(_r,8); }
  /* 10392d43 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_10392d4a:;
  /* 10392d4a mov byte ptr [eax + 0x103967c0], dl */
  w8((uint32_t)(EAX + 0x103967c0), (DL));
  /* 10392d50 jmp 0x10392d6e */
  goto L_10392d6e;
L_10392d52:;
  /* 10392d52 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10392d55 je 0x10392d67 */
  if (C.zf) goto L_10392d67;
  /* 10392d57 or byte ptr [eax + 0x103968c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103968c1)))|(0x20u); w8((uint32_t)(EAX + 0x103968c1), (_r)); fl_logic(_r,8); }
  /* 10392d5e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10392d65 jmp 0x10392d4a */
  goto L_10392d4a;
L_10392d67:;
  /* 10392d67 and byte ptr [eax + 0x103967c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103967c0)))&(0x0u); w8((uint32_t)(EAX + 0x103967c0), (_r)); fl_logic(_r,8); }
L_10392d6e:;
  /* 10392d6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10392d6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10392d70 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10392d71 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392d73 jb 0x10392d34 */
  if (C.cf) goto L_10392d34;
  /* 10392d75 jmp 0x10392dc0 */
  goto L_10392dc0;
L_10392d77:;
  /* 10392d77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10392d79 mov esi, 0x100 */
  ESI = (0x100u);
L_10392d7e:;
  /* 10392d7e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392d81 jb 0x10392d9c */
  if (C.cf) goto L_10392d9c;
  /* 10392d83 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392d86 ja 0x10392d9c */
  if ((!C.cf&&!C.zf)) goto L_10392d9c;
  /* 10392d88 or byte ptr [eax + 0x103968c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103968c1)))|(0x10u); w8((uint32_t)(EAX + 0x103968c1), (_r)); fl_logic(_r,8); }
  /* 10392d8f mov cl, al */
  CL = (AL);
  /* 10392d91 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10392d94:;
  /* 10392d94 mov byte ptr [eax + 0x103967c0], cl */
  w8((uint32_t)(EAX + 0x103967c0), (CL));
  /* 10392d9a jmp 0x10392dbb */
  goto L_10392dbb;
L_10392d9c:;
  /* 10392d9c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392d9f jb 0x10392db4 */
  if (C.cf) goto L_10392db4;
  /* 10392da1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392da4 ja 0x10392db4 */
  if ((!C.cf&&!C.zf)) goto L_10392db4;
  /* 10392da6 or byte ptr [eax + 0x103968c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103968c1)))|(0x20u); w8((uint32_t)(EAX + 0x103968c1), (_r)); fl_logic(_r,8); }
  /* 10392dad mov cl, al */
  CL = (AL);
  /* 10392daf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10392db2 jmp 0x10392d94 */
  goto L_10392d94;
L_10392db4:;
  /* 10392db4 and byte ptr [eax + 0x103967c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103967c0)))&(0x0u); w8((uint32_t)(EAX + 0x103967c0), (_r)); fl_logic(_r,8); }
L_10392dbb:;
  /* 10392dbb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10392dbc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392dbe jb 0x10392d7e */
  if (C.cf) goto L_10392d7e;
L_10392dc0:;
  /* 10392dc0 pop esi */
  ESI = (pop32());
  /* 10392dc1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10392dc2 ret  */
  ESPCHK(0x10392c3eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002dc3 @ 0x10392dc3 (28 bytes, 7 insns) */
void f_10392dc3(void) {
  FTRACE(0x10392dc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392dc3 cmp dword ptr [0x10396ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10396ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392dca jne 0x10392dde */
  if (!C.zf) goto L_10392dde;
  /* 10392dcc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10392dce call 0x103929eb */
  push32(0x10392dd3u); f_103929eb();
  /* 10392dd3 pop ecx */
  ECX = (pop32());
  /* 10392dd4 mov dword ptr [0x10396ae8], 1 */
  w32((uint32_t)(0x10396ae8), (0x1u));
L_10392dde:;
  /* 10392dde ret  */
  ESPCHK(0x10392dc3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002de0 @ 0x10392de0 (664 bytes, 262 insns) [15 switch table(s)] */
void f_10392de0(void) {
  FTRACE(0x10392de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10392de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10392de1 mov ebp, esp */
  EBP = (ESP);
  /* 10392de3 push edi */
  push32((uint32_t)(EDI));
  /* 10392de4 push esi */
  push32((uint32_t)(ESI));
  /* 10392de5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10392de8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10392deb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10392dee mov eax, ecx */
  EAX = (ECX);
  /* 10392df0 mov edx, ecx */
  EDX = (ECX);
  /* 10392df2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10392df4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392df6 jbe 0x10392e00 */
  if ((C.cf||C.zf)) goto L_10392e00;
  /* 10392df8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392dfa jb 0x10392f78 */
  if (C.cf) goto L_10392f78;
L_10392e00:;
  /* 10392e00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10392e06 jne 0x10392e1c */
  if (!C.zf) goto L_10392e1c;
  /* 10392e08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10392e0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10392e0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392e11 jb 0x10392e3c */
  if (C.cf) goto L_10392e3c;
  /* 10392e13 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10392e15 jmp dword ptr [edx*4 + 0x10392f28] */
  switch (EDX) {
    case 0: goto L_10392f38;
    case 1: goto L_10392f40;
    case 2: goto L_10392f4c;
    case 3: goto L_10392f60;
    default: x86_unimpl("switch@0x10392e15 out of table"); return;
  }
L_10392e1c:;
  /* 10392e1c mov eax, edi */
  EAX = (EDI);
  /* 10392e1e mov edx, 3 */
  EDX = (0x3u);
  /* 10392e23 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10392e26 jb 0x10392e34 */
  if (C.cf) goto L_10392e34;
  /* 10392e28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10392e2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10392e2d jmp dword ptr [eax*4 + 0x10392e40] */
  switch (EAX) {
    case 1: goto L_10392e50;
    case 2: goto L_10392e7c;
    case 3: goto L_10392ea0;
    default: x86_unimpl("switch@0x10392e2d out of table"); return;
  }
L_10392e34:;
  /* 10392e34 jmp dword ptr [ecx*4 + 0x10392f38] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10392f38)))); return;
  /* 10392e3b nop  */
  /* nop */
L_10392e3c:;
  /* 10392e3c jmp dword ptr [ecx*4 + 0x10392ebc] */
  switch (ECX) {
    case 0: goto L_10392f1f;
    case 1: goto L_10392f0c;
    case 2: goto L_10392f04;
    case 3: goto L_10392efc;
    case 4: goto L_10392ef4;
    case 5: goto L_10392eec;
    case 6: goto L_10392ee4;
    case 7: goto L_10392edc;
    default: x86_unimpl("switch@0x10392e3c out of table"); return;
  }
  /* 10392e43 nop  */
  /* nop */
L_10392e50:;
  /* 10392e50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10392e52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10392e54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10392e56 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10392e59 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10392e5c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10392e5f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10392e62 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10392e65 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10392e68 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10392e6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392e6e jb 0x10392e3c */
  if (C.cf) goto L_10392e3c;
  /* 10392e70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10392e72 jmp dword ptr [edx*4 + 0x10392f28] */
  switch (EDX) {
    case 0: goto L_10392f38;
    case 1: goto L_10392f40;
    case 2: goto L_10392f4c;
    case 3: goto L_10392f60;
    default: x86_unimpl("switch@0x10392e72 out of table"); return;
  }
  /* 10392e79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10392e7c:;
  /* 10392e7c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10392e7e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10392e80 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10392e82 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10392e85 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10392e88 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10392e8b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10392e8e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10392e91 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392e94 jb 0x10392e3c */
  if (C.cf) goto L_10392e3c;
  /* 10392e96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10392e98 jmp dword ptr [edx*4 + 0x10392f28] */
  switch (EDX) {
    case 0: goto L_10392f38;
    case 1: goto L_10392f40;
    case 2: goto L_10392f4c;
    case 3: goto L_10392f60;
    default: x86_unimpl("switch@0x10392e98 out of table"); return;
  }
  /* 10392e9f nop  */
  /* nop */
L_10392ea0:;
  /* 10392ea0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10392ea2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10392ea4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10392ea6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10392ea7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10392eaa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10392eab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392eae jb 0x10392e3c */
  if (C.cf) goto L_10392e3c;
  /* 10392eb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10392eb2 jmp dword ptr [edx*4 + 0x10392f28] */
  switch (EDX) {
    case 0: goto L_10392f38;
    case 1: goto L_10392f40;
    case 2: goto L_10392f4c;
    case 3: goto L_10392f60;
    default: x86_unimpl("switch@0x10392eb2 out of table"); return;
  }
  /* 10392eb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10392edc:;
  /* 10392edc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10392ee0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10392ee4:;
  /* 10392ee4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10392ee8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10392eec:;
  /* 10392eec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10392ef0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10392ef4:;
  /* 10392ef4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10392ef8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10392efc:;
  /* 10392efc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10392f00 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10392f04:;
  /* 10392f04 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10392f08 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10392f0c:;
  /* 10392f0c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10392f10 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10392f14 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10392f1b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10392f1d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10392f1f:;
  /* 10392f1f jmp dword ptr [edx*4 + 0x10392f28] */
  switch (EDX) {
    case 0: goto L_10392f38;
    case 1: goto L_10392f40;
    case 2: goto L_10392f4c;
    case 3: goto L_10392f60;
    default: x86_unimpl("switch@0x10392f1f out of table"); return;
  }
  /* 10392f26 mov edi, edi */
  EDI = (EDI);
L_10392f38:;
  /* 10392f38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10392f3b pop esi */
  ESI = (pop32());
  /* 10392f3c pop edi */
  EDI = (pop32());
  /* 10392f3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10392f3e ret  */
  ESPCHK(0x10392de0u, _esp0);
  ESP += 4; return;
  /* 10392f3f nop  */
  /* nop */
L_10392f40:;
  /* 10392f40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10392f42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10392f44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10392f47 pop esi */
  ESI = (pop32());
  /* 10392f48 pop edi */
  EDI = (pop32());
  /* 10392f49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10392f4a ret  */
  ESPCHK(0x10392de0u, _esp0);
  ESP += 4; return;
  /* 10392f4b nop  */
  /* nop */
L_10392f4c:;
  /* 10392f4c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10392f4e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10392f50 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10392f53 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10392f56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10392f59 pop esi */
  ESI = (pop32());
  /* 10392f5a pop edi */
  EDI = (pop32());
  /* 10392f5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10392f5c ret  */
  ESPCHK(0x10392de0u, _esp0);
  ESP += 4; return;
  /* 10392f5d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10392f60:;
  /* 10392f60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10392f62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10392f64 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10392f67 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10392f6a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10392f6d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10392f70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10392f73 pop esi */
  ESI = (pop32());
  /* 10392f74 pop edi */
  EDI = (pop32());
  /* 10392f75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10392f76 ret  */
  ESPCHK(0x10392de0u, _esp0);
  ESP += 4; return;
  /* 10392f77 nop  */
  /* nop */
L_10392f78:;
  /* 10392f78 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10392f7c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10392f80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10392f86 jne 0x10392fac */
  if (!C.zf) goto L_10392fac;
  /* 10392f88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10392f8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10392f8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392f91 jb 0x10392fa0 */
  if (C.cf) goto L_10392fa0;
  /* 10392f93 std  */
  C.df=1;
  /* 10392f94 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10392f96 cld  */
  C.df=0;
  /* 10392f97 jmp dword ptr [edx*4 + 0x103930c0] */
  switch (EDX) {
    case 0: goto L_103930d0;
    case 1: goto L_103930d8;
    case 2: goto L_103930e8;
    case 3: goto L_103930fc;
    default: x86_unimpl("switch@0x10392f97 out of table"); return;
  }
  /* 10392f9e mov edi, edi */
  EDI = (EDI);
L_10392fa0:;
  /* 10392fa0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10392fa2 jmp dword ptr [ecx*4 + 0x10393070] */
  switch (ECX) {
    case 0: goto L_103930b7;
    default: x86_unimpl("switch@0x10392fa2 out of table"); return;
  }
  /* 10392fa9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10392fac:;
  /* 10392fac mov eax, edi */
  EAX = (EDI);
  /* 10392fae mov edx, 3 */
  EDX = (0x3u);
  /* 10392fb3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392fb6 jb 0x10392fc4 */
  if (C.cf) goto L_10392fc4;
  /* 10392fb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10392fbb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10392fbd jmp dword ptr [eax*4 + 0x10392fc8] */
  switch (EAX) {
    case 1: goto L_10392fd8;
    case 2: goto L_10392ff8;
    case 3: goto L_10393020;
    default: x86_unimpl("switch@0x10392fbd out of table"); return;
  }
L_10392fc4:;
  /* 10392fc4 jmp dword ptr [ecx*4 + 0x103930c0] */
  switch (ECX) {
    case 0: goto L_103930d0;
    case 1: goto L_103930d8;
    case 2: goto L_103930e8;
    case 3: goto L_103930fc;
    default: x86_unimpl("switch@0x10392fc4 out of table"); return;
  }
  /* 10392fcb nop  */
  /* nop */
L_10392fd8:;
  /* 10392fd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10392fdb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10392fdd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10392fe0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10392fe1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10392fe4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10392fe5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10392fe8 jb 0x10392fa0 */
  if (C.cf) goto L_10392fa0;
  /* 10392fea std  */
  C.df=1;
  /* 10392feb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10392fed cld  */
  C.df=0;
  /* 10392fee jmp dword ptr [edx*4 + 0x103930c0] */
  switch (EDX) {
    case 0: goto L_103930d0;
    case 1: goto L_103930d8;
    case 2: goto L_103930e8;
    case 3: goto L_103930fc;
    default: x86_unimpl("switch@0x10392fee out of table"); return;
  }
  /* 10392ff5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10392ff8:;
  /* 10392ff8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10392ffb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10392ffd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10393000 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10393003 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10393006 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10393009 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1039300c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1039300f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393012 jb 0x10392fa0 */
  if (C.cf) goto L_10392fa0;
  /* 10393014 std  */
  C.df=1;
  /* 10393015 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10393017 cld  */
  C.df=0;
  /* 10393018 jmp dword ptr [edx*4 + 0x103930c0] */
  switch (EDX) {
    case 0: goto L_103930d0;
    case 1: goto L_103930d8;
    case 2: goto L_103930e8;
    case 3: goto L_103930fc;
    default: x86_unimpl("switch@0x10393018 out of table"); return;
  }
  /* 1039301f nop  */
  /* nop */
L_10393020:;
  /* 10393020 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10393023 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10393025 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10393028 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1039302b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1039302e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10393031 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10393034 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10393037 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1039303a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1039303d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393040 jb 0x10392fa0 */
  if (C.cf) goto L_10392fa0;
  /* 10393046 std  */
  C.df=1;
  /* 10393047 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10393049 cld  */
  C.df=0;
  /* 1039304a jmp dword ptr [edx*4 + 0x103930c0] */
  switch (EDX) {
    case 0: goto L_103930d0;
    case 1: goto L_103930d8;
    case 2: goto L_103930e8;
    case 3: goto L_103930fc;
    default: x86_unimpl("switch@0x1039304a out of table"); return;
  }
  /* 10393051 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10393054 je 0x10393086 */
  if (C.zf) goto L_10393086;
  /* 10393056 cmp dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393058 jl 0x1039308a */
  if ((C.sf!=C.of)) goto L_1039308a;
  /* 1039305a cmp dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039305c test byte ptr [eax], dh */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(C.d.b.h); fl_logic(_r,8); }
  /* 1039305e cmp dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393061 xor byte ptr [ecx], bh */
  { uint32_t _r=(r8((uint32_t)(ECX)))^(C.b.b.h); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 10393063 adc byte ptr [eax + esi + 0x309c1039], dl */
  { uint32_t _a=(r8((uint32_t)(EAX + ESI*1 + 0x309c1039))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + ESI*1 + 0x309c1039), (_r)); fl_add(_a,_b,_r,8); }
  /* 1039306a cmp dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039306c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1039306d xor byte ptr [ecx], bh */
  { uint32_t _r=(r8((uint32_t)(ECX)))^(C.b.b.h); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 10393074 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10393078 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1039307c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10393080 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10393084 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10393088 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1039308c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10393090 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10393094 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10393098 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1039309c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 103930a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 103930a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 103930a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 103930ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103930b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103930b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103930b7:;
  /* 103930b7 jmp dword ptr [edx*4 + 0x103930c0] */
  switch (EDX) {
    case 0: goto L_103930d0;
    case 1: goto L_103930d8;
    case 2: goto L_103930e8;
    case 3: goto L_103930fc;
    default: x86_unimpl("switch@0x103930b7 out of table"); return;
  }
  /* 103930be mov edi, edi */
  EDI = (EDI);
L_103930d0:;
  /* 103930d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103930d3 pop esi */
  ESI = (pop32());
  /* 103930d4 pop edi */
  EDI = (pop32());
  /* 103930d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103930d6 ret  */
  ESPCHK(0x10392de0u, _esp0);
  ESP += 4; return;
  /* 103930d7 nop  */
  /* nop */
L_103930d8:;
  /* 103930d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103930db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103930de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103930e1 pop esi */
  ESI = (pop32());
  /* 103930e2 pop edi */
  EDI = (pop32());
  /* 103930e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103930e4 ret  */
  ESPCHK(0x10392de0u, _esp0);
  ESP += 4; return;
  /* 103930e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103930e8:;
  /* 103930e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103930eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103930ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103930f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103930f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103930f7 pop esi */
  ESI = (pop32());
  /* 103930f8 pop edi */
  EDI = (pop32());
  /* 103930f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103930fa ret  */
  ESPCHK(0x10392de0u, _esp0);
  ESP += 4; return;
  /* 103930fb nop  */
  /* nop */
L_103930fc:;
  /* 103930fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103930ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10393102 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10393105 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10393108 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1039310b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1039310e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10393111 pop esi */
  ESI = (pop32());
  /* 10393112 pop edi */
  EDI = (pop32());
  /* 10393113 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10393114 ret  */
  ESPCHK(0x10392de0u, _esp0);
  ESP += 4; return;
L_10393086: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x10393086 (unresolved jump table)"); return;
L_1039308a: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1039308a (unresolved jump table)"); return;
}

/* FUN_10003115 @ 0x10393115 (62 bytes, 15 insns) */
void f_10393115(void) {
  FTRACE(0x10393115u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10393115 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1039311a push 0 */
  push32((uint32_t)(0x0u));
  /* 1039311c push dword ptr [0x103969c8] */
  push32((uint32_t)(r32((uint32_t)(0x103969c8))));
  /* 10393122 call dword ptr [0x10395038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395038))), 0x10393128u);
  /* 10393128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1039312a mov dword ptr [0x1039678c], eax */
  w32((uint32_t)(0x1039678c), (EAX));
  /* 1039312f jne 0x10393132 */
  if (!C.zf) goto L_10393132;
  /* 10393131 ret  */
  ESPCHK(0x10393115u, _esp0);
  ESP += 4; return;
L_10393132:;
  /* 10393132 and dword ptr [0x10396784], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10396784)))&(0x0u); w32((uint32_t)(0x10396784), (_r)); fl_logic(_r,32); }
  /* 10393139 and dword ptr [0x10396788], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10396788)))&(0x0u); w32((uint32_t)(0x10396788), (_r)); fl_logic(_r,32); }
  /* 10393140 push 1 */
  push32((uint32_t)(0x1u));
  /* 10393142 mov dword ptr [0x10396780], eax */
  w32((uint32_t)(0x10396780), (EAX));
  /* 10393147 mov dword ptr [0x10396778], 0x10 */
  w32((uint32_t)(0x10396778), (0x10u));
  /* 10393151 pop eax */
  EAX = (pop32());
  /* 10393152 ret  */
  ESPCHK(0x10393115u, _esp0);
  ESP += 4; return;
}

/* FUN_10003153 @ 0x10393153 (43 bytes, 14 insns) */
void f_10393153(void) {
  FTRACE(0x10393153u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10393153 mov eax, dword ptr [0x10396788] */
  EAX = (r32((uint32_t)(0x10396788)));
  /* 10393158 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1039315b mov eax, dword ptr [0x1039678c] */
  EAX = (r32((uint32_t)(0x1039678c)));
  /* 10393160 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10393163:;
  /* 10393163 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393165 jae 0x1039317b */
  if (!C.cf) goto L_1039317b;
  /* 10393167 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1039316b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1039316e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393174 jb 0x1039317d */
  if (C.cf) goto L_1039317d;
  /* 10393176 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393179 jmp 0x10393163 */
  goto L_10393163;
L_1039317b:;
  /* 1039317b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1039317d:;
  /* 1039317d ret  */
  ESPCHK(0x10393153u, _esp0);
  ESP += 4; return;
}

/* FUN_1000317e @ 0x1039317e (811 bytes, 264 insns) */
void f_1039317e(void) {
  FTRACE(0x1039317eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1039317e push ebp */
  push32((uint32_t)(EBP));
  /* 1039317f mov ebp, esp */
  EBP = (ESP);
  /* 10393181 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10393184 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10393187 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1039318a push ebx */
  push32((uint32_t)(EBX));
  /* 1039318b push esi */
  push32((uint32_t)(ESI));
  /* 1039318c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1039318f mov esi, edx */
  ESI = (EDX);
  /* 10393191 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10393194 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10393197 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1039319a push edi */
  push32((uint32_t)(EDI));
  /* 1039319b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 1039319e mov ecx, esi */
  ECX = (ESI);
  /* 103931a0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 103931a3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103931a9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 103931aa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 103931ad lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 103931b4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 103931b7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103931ba mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 103931bd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 103931c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103931c3 jne 0x10393244 */
  if (!C.zf) goto L_10393244;
  /* 103931c5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103931c8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 103931ca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103931cb pop edi */
  EDI = (pop32());
  /* 103931cc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103931cf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103931d1 jbe 0x103931d6 */
  if ((C.cf||C.zf)) goto L_103931d6;
  /* 103931d3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_103931d6:;
  /* 103931d6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 103931da cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103931de jne 0x10393228 */
  if (!C.zf) goto L_10393228;
  /* 103931e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103931e3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103931e6 jae 0x10393204 */
  if (!C.cf) goto L_10393204;
  /* 103931e8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 103931ed shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 103931ef lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 103931f3 not edi */
  EDI = (~(EDI));
  /* 103931f5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 103931f9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 103931fb jne 0x10393228 */
  if (!C.zf) goto L_10393228;
  /* 103931fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10393200 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10393202 jmp 0x10393228 */
  goto L_10393228;
L_10393204:;
  /* 10393204 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393207 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1039320c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1039320e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10393211 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10393215 not edi */
  EDI = (~(EDI));
  /* 10393217 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1039321e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10393220 jne 0x10393228 */
  if (!C.zf) goto L_10393228;
  /* 10393222 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10393225 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10393228:;
  /* 10393228 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1039322c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10393230 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10393233 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10393237 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1039323b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1039323e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10393241 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10393244:;
  /* 10393244 mov edi, ebx */
  EDI = (EBX);
  /* 10393246 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10393249 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1039324a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039324d jbe 0x10393252 */
  if ((C.cf||C.zf)) goto L_10393252;
  /* 1039324f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10393251 pop edi */
  EDI = (pop32());
L_10393252:;
  /* 10393252 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10393255 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10393258 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1039325b jne 0x10393301 */
  if (!C.zf) goto L_10393301;
  /* 10393261 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10393264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10393267 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1039326a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1039326c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1039326f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10393270 pop edx */
  EDX = (pop32());
  /* 10393271 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393273 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10393276 jbe 0x1039327d */
  if ((C.cf||C.zf)) goto L_1039327d;
  /* 10393278 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1039327b mov ecx, edx */
  ECX = (EDX);
L_1039327d:;
  /* 1039327d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393280 mov edi, ebx */
  EDI = (EBX);
  /* 10393282 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10393285 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10393288 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10393289 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039328b jbe 0x1039328f */
  if ((C.cf||C.zf)) goto L_1039328f;
  /* 1039328d mov edi, edx */
  EDI = (EDX);
L_1039328f:;
  /* 1039328f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393291 je 0x103932fe */
  if (C.zf) goto L_103932fe;
  /* 10393293 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10393296 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10393299 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039329c jne 0x103932e6 */
  if (!C.zf) goto L_103932e6;
  /* 1039329e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103932a1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103932a4 jae 0x103932c2 */
  if (!C.cf) goto L_103932c2;
  /* 103932a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103932ab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103932ad lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 103932b1 not edx */
  EDX = (~(EDX));
  /* 103932b3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 103932b7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 103932b9 jne 0x103932e6 */
  if (!C.zf) goto L_103932e6;
  /* 103932bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103932be and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 103932c0 jmp 0x103932e6 */
  goto L_103932e6;
L_103932c2:;
  /* 103932c2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103932c5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103932ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103932cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103932cf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 103932d3 not edx */
  EDX = (~(EDX));
  /* 103932d5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 103932dc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 103932de jne 0x103932e6 */
  if (!C.zf) goto L_103932e6;
  /* 103932e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103932e3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_103932e6:;
  /* 103932e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103932e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103932ec mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 103932ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 103932f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103932f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103932f8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 103932fb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_103932fe:;
  /* 103932fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10393301:;
  /* 10393301 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393305 jne 0x10393310 */
  if (!C.zf) goto L_10393310;
  /* 10393307 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039330a je 0x10393399 */
  if (C.zf) goto L_10393399;
L_10393310:;
  /* 10393310 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10393313 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10393316 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10393319 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1039331c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1039331f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10393322 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10393325 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10393328 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1039332b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1039332e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10393331 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393334 jne 0x10393399 */
  if (!C.zf) goto L_10393399;
  /* 10393336 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 1039333a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039333d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10393340 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10393342 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10393346 jae 0x1039336d */
  if (!C.cf) goto L_1039336d;
  /* 10393348 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1039334c jne 0x1039335c */
  if (!C.zf) goto L_1039335c;
  /* 1039334e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10393353 mov ecx, edi */
  ECX = (EDI);
  /* 10393355 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10393357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1039335a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1039335c:;
  /* 1039335c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10393361 mov ecx, edi */
  ECX = (EDI);
  /* 10393363 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10393365 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10393369 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1039336b jmp 0x10393396 */
  goto L_10393396;
L_1039336d:;
  /* 1039336d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10393371 jne 0x10393383 */
  if (!C.zf) goto L_10393383;
  /* 10393373 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10393376 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1039337b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1039337d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10393380 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10393383:;
  /* 10393383 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10393386 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1039338b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1039338d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10393394 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10393396:;
  /* 10393396 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10393399:;
  /* 10393399 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1039339c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 1039339e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 103933a2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 103933a4 jne 0x103934a4 */
  if (!C.zf) goto L_103934a4;
  /* 103933aa mov eax, dword ptr [0x10396784] */
  EAX = (r32((uint32_t)(0x10396784)));
  /* 103933af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103933b1 je 0x10393496 */
  if (C.zf) goto L_10393496;
  /* 103933b7 mov ecx, dword ptr [0x1039677c] */
  ECX = (r32((uint32_t)(0x1039677c)));
  /* 103933bd mov edi, dword ptr [0x1039504c] */
  EDI = (r32((uint32_t)(0x1039504c)));
  /* 103933c3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 103933c6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103933c9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 103933ce push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 103933d3 push ebx */
  push32((uint32_t)(EBX));
  /* 103933d4 push ecx */
  push32((uint32_t)(ECX));
  /* 103933d5 call edi */
  call_ind((uint32_t)(EDI), 0x103933d7u);
  /* 103933d7 mov ecx, dword ptr [0x1039677c] */
  ECX = (r32((uint32_t)(0x1039677c)));
  /* 103933dd mov eax, dword ptr [0x10396784] */
  EAX = (r32((uint32_t)(0x10396784)));
  /* 103933e2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103933e7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103933e9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 103933ec mov eax, dword ptr [0x10396784] */
  EAX = (r32((uint32_t)(0x10396784)));
  /* 103933f1 mov ecx, dword ptr [0x1039677c] */
  ECX = (r32((uint32_t)(0x1039677c)));
  /* 103933f7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 103933fa and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10393402 mov eax, dword ptr [0x10396784] */
  EAX = (r32((uint32_t)(0x10396784)));
  /* 10393407 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1039340a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1039340d mov eax, dword ptr [0x10396784] */
  EAX = (r32((uint32_t)(0x10396784)));
  /* 10393412 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10393415 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10393419 jne 0x10393424 */
  if (!C.zf) goto L_10393424;
  /* 1039341b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1039341f mov eax, dword ptr [0x10396784] */
  EAX = (r32((uint32_t)(0x10396784)));
L_10393424:;
  /* 10393424 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393428 jne 0x10393496 */
  if (!C.zf) goto L_10393496;
  /* 1039342a push ebx */
  push32((uint32_t)(EBX));
  /* 1039342b push 0 */
  push32((uint32_t)(0x0u));
  /* 1039342d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10393430 call edi */
  call_ind((uint32_t)(EDI), 0x10393432u);
  /* 10393432 mov eax, dword ptr [0x10396784] */
  EAX = (r32((uint32_t)(0x10396784)));
  /* 10393437 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1039343a push 0 */
  push32((uint32_t)(0x0u));
  /* 1039343c push dword ptr [0x103969c8] */
  push32((uint32_t)(r32((uint32_t)(0x103969c8))));
  /* 10393442 call dword ptr [0x10395048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395048))), 0x10393448u);
  /* 10393448 mov eax, dword ptr [0x10396788] */
  EAX = (r32((uint32_t)(0x10396788)));
  /* 1039344d mov edx, dword ptr [0x1039678c] */
  EDX = (r32((uint32_t)(0x1039678c)));
  /* 10393453 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10393456 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10393459 mov ecx, eax */
  ECX = (EAX);
  /* 1039345b mov eax, dword ptr [0x10396784] */
  EAX = (r32((uint32_t)(0x10396784)));
  /* 10393460 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10393462 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10393466 push ecx */
  push32((uint32_t)(ECX));
  /* 10393467 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1039346a push ecx */
  push32((uint32_t)(ECX));
  /* 1039346b push eax */
  push32((uint32_t)(EAX));
  /* 1039346c call 0x10393f00 */
  push32(0x10393471u); f_10393f00();
  /* 10393471 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10393474 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10393477 dec dword ptr [0x10396788] */
  { uint32_t _r=(r32((uint32_t)(0x10396788)))-1; w32((uint32_t)(0x10396788), (_r)); fl_dec(_r,32); }
  /* 1039347d cmp eax, dword ptr [0x10396784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10396784))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393483 jbe 0x10393488 */
  if ((C.cf||C.zf)) goto L_10393488;
  /* 10393485 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10393488:;
  /* 10393488 mov ecx, dword ptr [0x1039678c] */
  ECX = (r32((uint32_t)(0x1039678c)));
  /* 1039348e mov dword ptr [0x10396780], ecx */
  w32((uint32_t)(0x10396780), (ECX));
  /* 10393494 jmp 0x10393499 */
  goto L_10393499;
L_10393496:;
  /* 10393496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10393499:;
  /* 10393499 mov dword ptr [0x10396784], eax */
  w32((uint32_t)(0x10396784), (EAX));
  /* 1039349e mov dword ptr [0x1039677c], esi */
  w32((uint32_t)(0x1039677c), (ESI));
L_103934a4:;
  /* 103934a4 pop edi */
  EDI = (pop32());
  /* 103934a5 pop esi */
  ESI = (pop32());
  /* 103934a6 pop ebx */
  EBX = (pop32());
  /* 103934a7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103934a8 ret  */
  ESPCHK(0x1039317eu, _esp0);
  ESP += 4; return;
}

/* FUN_100034a9 @ 0x103934a9 (777 bytes, 275 insns) */
void f_103934a9(void) {
  FTRACE(0x103934a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103934a9 push ebp */
  push32((uint32_t)(EBP));
  /* 103934aa mov ebp, esp */
  EBP = (ESP);
  /* 103934ac sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103934af mov eax, dword ptr [0x10396788] */
  EAX = (r32((uint32_t)(0x10396788)));
  /* 103934b4 mov edx, dword ptr [0x1039678c] */
  EDX = (r32((uint32_t)(0x1039678c)));
  /* 103934ba push ebx */
  push32((uint32_t)(EBX));
  /* 103934bb push esi */
  push32((uint32_t)(ESI));
  /* 103934bc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103934bf push edi */
  push32((uint32_t)(EDI));
  /* 103934c0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 103934c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103934c6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 103934c9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 103934cc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 103934cf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103934d2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103934d5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103934d6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103934d9 jge 0x103934e9 */
  if ((C.sf==C.of)) goto L_103934e9;
  /* 103934db or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 103934de shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 103934e0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 103934e4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 103934e7 jmp 0x103934f9 */
  goto L_103934f9;
L_103934e9:;
  /* 103934e9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103934ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103934ef xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 103934f1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 103934f3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 103934f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103934f9:;
  /* 103934f9 mov eax, dword ptr [0x10396780] */
  EAX = (r32((uint32_t)(0x10396780)));
  /* 103934fe mov ebx, eax */
  EBX = (EAX);
  /* 10393500 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393502 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10393505 jae 0x10393520 */
  if (!C.cf) goto L_10393520;
L_10393507:;
  /* 10393507 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1039350a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1039350c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1039350f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10393511 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10393513 jne 0x10393520 */
  if (!C.zf) goto L_10393520;
  /* 10393515 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393518 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039351b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1039351e jb 0x10393507 */
  if (C.cf) goto L_10393507;
L_10393520:;
  /* 10393520 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393523 jne 0x1039359e */
  if (!C.zf) goto L_1039359e;
  /* 10393525 mov ebx, edx */
  EBX = (EDX);
L_10393527:;
  /* 10393527 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393529 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1039352c jae 0x10393543 */
  if (!C.cf) goto L_10393543;
  /* 1039352e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10393531 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10393533 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10393536 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10393538 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1039353a jne 0x10393541 */
  if (!C.zf) goto L_10393541;
  /* 1039353c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1039353f jmp 0x10393527 */
  goto L_10393527;
L_10393541:;
  /* 10393541 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10393543:;
  /* 10393543 jne 0x1039359e */
  if (!C.zf) goto L_1039359e;
L_10393545:;
  /* 10393545 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393548 jae 0x1039355b */
  if (!C.cf) goto L_1039355b;
  /* 1039354a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039354e jne 0x10393558 */
  if (!C.zf) goto L_10393558;
  /* 10393550 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393553 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10393556 jmp 0x10393545 */
  goto L_10393545;
L_10393558:;
  /* 10393558 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1039355b:;
  /* 1039355b jne 0x10393583 */
  if (!C.zf) goto L_10393583;
  /* 1039355d mov ebx, edx */
  EBX = (EDX);
L_1039355f:;
  /* 1039355f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393561 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10393564 jae 0x10393573 */
  if (!C.cf) goto L_10393573;
  /* 10393566 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039356a jne 0x10393571 */
  if (!C.zf) goto L_10393571;
  /* 1039356c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1039356f jmp 0x1039355f */
  goto L_1039355f;
L_10393571:;
  /* 10393571 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10393573:;
  /* 10393573 jne 0x10393583 */
  if (!C.zf) goto L_10393583;
  /* 10393575 call 0x103937b2 */
  push32(0x1039357au); f_103937b2();
  /* 1039357a mov ebx, eax */
  EBX = (EAX);
  /* 1039357c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1039357e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10393581 je 0x10393597 */
  if (C.zf) goto L_10393597;
L_10393583:;
  /* 10393583 push ebx */
  push32((uint32_t)(EBX));
  /* 10393584 call 0x10393863 */
  push32(0x10393589u); f_10393863();
  /* 10393589 pop ecx */
  ECX = (pop32());
  /* 1039358a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1039358d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1039358f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10393592 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393595 jne 0x1039359e */
  if (!C.zf) goto L_1039359e;
L_10393597:;
  /* 10393597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10393599 jmp 0x103937ad */
  goto L_103937ad;
L_1039359e:;
  /* 1039359e mov dword ptr [0x10396780], ebx */
  w32((uint32_t)(0x10396780), (EBX));
  /* 103935a4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 103935a7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 103935a9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103935ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103935af je 0x103935c5 */
  if (C.zf) goto L_103935c5;
  /* 103935b1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 103935b8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 103935bc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 103935bf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 103935c1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 103935c3 jne 0x103935fc */
  if (!C.zf) goto L_103935fc;
L_103935c5:;
  /* 103935c5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 103935cb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 103935ce and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 103935d1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 103935d4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 103935d8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 103935db or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 103935dd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 103935e0 jne 0x103935f9 */
  if (!C.zf) goto L_103935f9;
L_103935e2:;
  /* 103935e2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 103935e8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 103935eb and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 103935ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103935f1 mov edi, esi */
  EDI = (ESI);
  /* 103935f3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 103935f5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 103935f7 je 0x103935e2 */
  if (C.zf) goto L_103935e2;
L_103935f9:;
  /* 103935f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_103935fc:;
  /* 103935fc mov ecx, edx */
  ECX = (EDX);
  /* 103935fe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10393600 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10393606 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1039360d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10393610 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10393614 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10393616 jne 0x10393625 */
  if (!C.zf) goto L_10393625;
  /* 10393618 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1039361f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10393621 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10393624 pop edi */
  EDI = (pop32());
L_10393625:;
  /* 10393625 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10393627 jl 0x1039362e */
  if ((C.sf!=C.of)) goto L_1039362e;
  /* 10393629 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1039362b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1039362c jmp 0x10393625 */
  goto L_10393625;
L_1039362e:;
  /* 1039362e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10393631 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10393635 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10393637 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1039363a mov esi, ecx */
  ESI = (ECX);
  /* 1039363c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1039363f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10393642 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10393643 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393646 jle 0x1039364b */
  if ((C.zf||C.sf!=C.of)) goto L_1039364b;
  /* 10393648 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1039364a pop esi */
  ESI = (pop32());
L_1039364b:;
  /* 1039364b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039364d je 0x10393760 */
  if (C.zf) goto L_10393760;
  /* 10393653 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10393656 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393659 jne 0x103936bc */
  if (!C.zf) goto L_103936bc;
  /* 1039365b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039365e jge 0x1039368b */
  if ((C.sf==C.of)) goto L_1039368b;
  /* 10393660 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10393665 mov ecx, edi */
  ECX = (EDI);
  /* 10393667 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10393669 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1039366c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10393670 not ebx */
  EBX = (~(EBX));
  /* 10393672 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10393675 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10393679 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1039367d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1039367f jne 0x103936b9 */
  if (!C.zf) goto L_103936b9;
  /* 10393681 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10393684 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10393687 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10393689 jmp 0x103936bc */
  goto L_103936bc;
L_1039368b:;
  /* 1039368b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1039368e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10393693 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10393695 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10393698 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1039369c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 103936a3 not ebx */
  EBX = (~(EBX));
  /* 103936a5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 103936a7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 103936a9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 103936ac jne 0x103936b9 */
  if (!C.zf) goto L_103936b9;
  /* 103936ae mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 103936b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103936b4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 103936b7 jmp 0x103936bc */
  goto L_103936bc;
L_103936b9:;
  /* 103936b9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_103936bc:;
  /* 103936bc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 103936bf mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 103936c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103936c6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 103936c9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 103936cc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 103936cf mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 103936d2 je 0x1039376c */
  if (C.zf) goto L_1039376c;
  /* 103936d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103936db mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 103936df lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 103936e2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 103936e5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103936e8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 103936eb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 103936ee mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 103936f1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 103936f4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103936f7 jne 0x1039375d */
  if (!C.zf) goto L_1039375d;
  /* 103936f9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 103936fd cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393700 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10393703 jge 0x1039372e */
  if ((C.sf==C.of)) goto L_1039372e;
  /* 10393705 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10393707 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1039370b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1039370f jne 0x1039371c */
  if (!C.zf) goto L_1039371c;
  /* 10393711 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10393716 mov ecx, esi */
  ECX = (ESI);
  /* 10393718 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1039371a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1039371c:;
  /* 1039371c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10393721 mov ecx, esi */
  ECX = (ESI);
  /* 10393723 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10393725 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10393728 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1039372c jmp 0x1039375d */
  goto L_1039375d;
L_1039372e:;
  /* 1039372e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10393730 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10393734 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10393738 jne 0x10393747 */
  if (!C.zf) goto L_10393747;
  /* 1039373a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1039373d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10393742 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10393744 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10393747:;
  /* 10393747 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1039374a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10393751 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10393754 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10393759 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1039375b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1039375d:;
  /* 1039375d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10393760:;
  /* 10393760 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10393762 je 0x1039376f */
  if (C.zf) goto L_1039376f;
  /* 10393764 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10393766 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1039376a jmp 0x1039376f */
  goto L_1039376f;
L_1039376c:;
  /* 1039376c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1039376f:;
  /* 1039376f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10393772 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393774 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10393777 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10393779 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1039377d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10393780 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10393782 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10393784 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10393787 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10393789 jne 0x103937a5 */
  if (!C.zf) goto L_103937a5;
  /* 1039378b cmp ebx, dword ptr [0x10396784] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10396784))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393791 jne 0x103937a5 */
  if (!C.zf) goto L_103937a5;
  /* 10393793 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10393796 cmp ecx, dword ptr [0x1039677c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1039677c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039379c jne 0x103937a5 */
  if (!C.zf) goto L_103937a5;
  /* 1039379e and dword ptr [0x10396784], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10396784)))&(0x0u); w32((uint32_t)(0x10396784), (_r)); fl_logic(_r,32); }
L_103937a5:;
  /* 103937a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103937a8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103937aa lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_103937ad:;
  /* 103937ad pop edi */
  EDI = (pop32());
  /* 103937ae pop esi */
  ESI = (pop32());
  /* 103937af pop ebx */
  EBX = (pop32());
  /* 103937b0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103937b1 ret  */
  ESPCHK(0x103934a9u, _esp0);
  ESP += 4; return;
}

/* FUN_100037b2 @ 0x103937b2 (177 bytes, 53 insns) */
void f_103937b2(void) {
  FTRACE(0x103937b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103937b2 mov eax, dword ptr [0x10396788] */
  EAX = (r32((uint32_t)(0x10396788)));
  /* 103937b7 mov ecx, dword ptr [0x10396778] */
  ECX = (r32((uint32_t)(0x10396778)));
  /* 103937bd push esi */
  push32((uint32_t)(ESI));
  /* 103937be push edi */
  push32((uint32_t)(EDI));
  /* 103937bf xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 103937c1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103937c3 jne 0x103937f5 */
  if (!C.zf) goto L_103937f5;
  /* 103937c5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 103937c9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103937cc push eax */
  push32((uint32_t)(EAX));
  /* 103937cd push dword ptr [0x1039678c] */
  push32((uint32_t)(r32((uint32_t)(0x1039678c))));
  /* 103937d3 push edi */
  push32((uint32_t)(EDI));
  /* 103937d4 push dword ptr [0x103969c8] */
  push32((uint32_t)(r32((uint32_t)(0x103969c8))));
  /* 103937da call dword ptr [0x10395024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395024))), 0x103937e0u);
  /* 103937e0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103937e2 je 0x10393845 */
  if (C.zf) goto L_10393845;
  /* 103937e4 add dword ptr [0x10396778], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10396778))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10396778), (_r)); fl_add(_a,_b,_r,32); }
  /* 103937eb mov dword ptr [0x1039678c], eax */
  w32((uint32_t)(0x1039678c), (EAX));
  /* 103937f0 mov eax, dword ptr [0x10396788] */
  EAX = (r32((uint32_t)(0x10396788)));
L_103937f5:;
  /* 103937f5 mov ecx, dword ptr [0x1039678c] */
  ECX = (r32((uint32_t)(0x1039678c)));
  /* 103937fb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10393800 push 8 */
  push32((uint32_t)(0x8u));
  /* 10393802 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10393805 push dword ptr [0x103969c8] */
  push32((uint32_t)(r32((uint32_t)(0x103969c8))));
  /* 1039380b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1039380e call dword ptr [0x10395038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395038))), 0x10393814u);
  /* 10393814 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393816 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10393819 je 0x10393845 */
  if (C.zf) goto L_10393845;
  /* 1039381b push 4 */
  push32((uint32_t)(0x4u));
  /* 1039381d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10393822 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10393827 push edi */
  push32((uint32_t)(EDI));
  /* 10393828 call dword ptr [0x10395028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395028))), 0x1039382eu);
  /* 1039382e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393830 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10393833 jne 0x10393849 */
  if (!C.zf) goto L_10393849;
  /* 10393835 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10393838 push edi */
  push32((uint32_t)(EDI));
  /* 10393839 push dword ptr [0x103969c8] */
  push32((uint32_t)(r32((uint32_t)(0x103969c8))));
  /* 1039383f call dword ptr [0x10395048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395048))), 0x10393845u);
L_10393845:;
  /* 10393845 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10393847 jmp 0x10393860 */
  goto L_10393860;
L_10393849:;
  /* 10393849 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1039384d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1039384f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10393852 inc dword ptr [0x10396788] */
  { uint32_t _r=(r32((uint32_t)(0x10396788)))+1; w32((uint32_t)(0x10396788), (_r)); fl_inc(_r,32); }
  /* 10393858 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1039385b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1039385e mov eax, esi */
  EAX = (ESI);
L_10393860:;
  /* 10393860 pop edi */
  EDI = (pop32());
  /* 10393861 pop esi */
  ESI = (pop32());
  /* 10393862 ret  */
  ESPCHK(0x103937b2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003863 @ 0x10393863 (251 bytes, 85 insns) */
void f_10393863(void) {
  FTRACE(0x10393863u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10393863 push ebp */
  push32((uint32_t)(EBP));
  /* 10393864 mov ebp, esp */
  EBP = (ESP);
  /* 10393866 push ecx */
  push32((uint32_t)(ECX));
  /* 10393867 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1039386a push ebx */
  push32((uint32_t)(EBX));
  /* 1039386b push esi */
  push32((uint32_t)(ESI));
  /* 1039386c push edi */
  push32((uint32_t)(EDI));
  /* 1039386d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10393870 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10393873 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10393875:;
  /* 10393875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10393877 jl 0x1039387e */
  if ((C.sf!=C.of)) goto L_1039387e;
  /* 10393879 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1039387b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1039387c jmp 0x10393875 */
  goto L_10393875;
L_1039387e:;
  /* 1039387e mov eax, ebx */
  EAX = (EBX);
  /* 10393880 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10393882 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10393888 pop edx */
  EDX = (pop32());
  /* 10393889 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10393890 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10393893:;
  /* 10393893 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10393896 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10393899 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1039389c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1039389d jne 0x10393893 */
  if (!C.zf) goto L_10393893;
  /* 1039389f mov edi, ebx */
  EDI = (EBX);
  /* 103938a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 103938a3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 103938a6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103938a9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103938ae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103938b3 push edi */
  push32((uint32_t)(EDI));
  /* 103938b4 call dword ptr [0x10395028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395028))), 0x103938bau);
  /* 103938ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103938bc jne 0x103938c6 */
  if (!C.zf) goto L_103938c6;
  /* 103938be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103938c1 jmp 0x10393959 */
  goto L_10393959;
L_103938c6:;
  /* 103938c6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 103938cc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103938ce ja 0x1039390c */
  if ((!C.cf&&!C.zf)) goto L_1039390c;
  /* 103938d0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_103938d3:;
  /* 103938d3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 103938d7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 103938de lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 103938e4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 103938eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103938ed lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 103938f3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103938f6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10393900 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393905 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10393908 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039390a jbe 0x103938d3 */
  if ((C.cf||C.zf)) goto L_103938d3;
L_1039390c:;
  /* 1039390c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1039390f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10393912 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393917 push 1 */
  push32((uint32_t)(0x1u));
  /* 10393919 pop edi */
  EDI = (pop32());
  /* 1039391a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1039391d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10393920 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10393923 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10393926 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10393929 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1039392e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10393935 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10393938 mov cl, al */
  CL = (AL);
  /* 1039393a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1039393c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1039393e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10393941 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10393944 jne 0x10393949 */
  if (!C.zf) goto L_10393949;
  /* 10393946 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10393949:;
  /* 10393949 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1039394e mov ecx, ebx */
  ECX = (EBX);
  /* 10393950 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10393952 not edx */
  EDX = (~(EDX));
  /* 10393954 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10393957 mov eax, ebx */
  EAX = (EBX);
L_10393959:;
  /* 10393959 pop edi */
  EDI = (pop32());
  /* 1039395a pop esi */
  ESI = (pop32());
  /* 1039395b pop ebx */
  EBX = (pop32());
  /* 1039395c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1039395d ret  */
  ESPCHK(0x10393863u, _esp0);
  ESP += 4; return;
}

/* FUN_1000395e @ 0x1039395e (137 bytes, 50 insns) */
void f_1039395e(void) {
  FTRACE(0x1039395eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1039395e push ebx */
  push32((uint32_t)(EBX));
  /* 1039395f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10393961 cmp dword ptr [0x1039673c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1039673c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393967 push esi */
  push32((uint32_t)(ESI));
  /* 10393968 push edi */
  push32((uint32_t)(EDI));
  /* 10393969 jne 0x103939ad */
  if (!C.zf) goto L_103939ad;
  /* 1039396b push 0x10395448 */
  push32((uint32_t)(0x10395448u));
  /* 10393970 call dword ptr [0x10395018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395018))), 0x10393976u);
  /* 10393976 mov edi, eax */
  EDI = (EAX);
  /* 10393978 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039397a je 0x103939e3 */
  if (C.zf) goto L_103939e3;
  /* 1039397c mov esi, dword ptr [0x1039501c] */
  ESI = (r32((uint32_t)(0x1039501c)));
  /* 10393982 push 0x1039543c */
  push32((uint32_t)(0x1039543cu));
  /* 10393987 push edi */
  push32((uint32_t)(EDI));
  /* 10393988 call esi */
  call_ind((uint32_t)(ESI), 0x1039398au);
  /* 1039398a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1039398c mov dword ptr [0x1039673c], eax */
  w32((uint32_t)(0x1039673c), (EAX));
  /* 10393991 je 0x103939e3 */
  if (C.zf) goto L_103939e3;
  /* 10393993 push 0x1039542c */
  push32((uint32_t)(0x1039542cu));
  /* 10393998 push edi */
  push32((uint32_t)(EDI));
  /* 10393999 call esi */
  call_ind((uint32_t)(ESI), 0x1039399bu);
  /* 1039399b push 0x10395418 */
  push32((uint32_t)(0x10395418u));
  /* 103939a0 push edi */
  push32((uint32_t)(EDI));
  /* 103939a1 mov dword ptr [0x10396740], eax */
  w32((uint32_t)(0x10396740), (EAX));
  /* 103939a6 call esi */
  call_ind((uint32_t)(ESI), 0x103939a8u);
  /* 103939a8 mov dword ptr [0x10396744], eax */
  w32((uint32_t)(0x10396744), (EAX));
L_103939ad:;
  /* 103939ad mov eax, dword ptr [0x10396740] */
  EAX = (r32((uint32_t)(0x10396740)));
  /* 103939b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103939b4 je 0x103939cc */
  if (C.zf) goto L_103939cc;
  /* 103939b6 call eax */
  call_ind((uint32_t)(EAX), 0x103939b8u);
  /* 103939b8 mov ebx, eax */
  EBX = (EAX);
  /* 103939ba test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 103939bc je 0x103939cc */
  if (C.zf) goto L_103939cc;
  /* 103939be mov eax, dword ptr [0x10396744] */
  EAX = (r32((uint32_t)(0x10396744)));
  /* 103939c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103939c5 je 0x103939cc */
  if (C.zf) goto L_103939cc;
  /* 103939c7 push ebx */
  push32((uint32_t)(EBX));
  /* 103939c8 call eax */
  call_ind((uint32_t)(EAX), 0x103939cau);
  /* 103939ca mov ebx, eax */
  EBX = (EAX);
L_103939cc:;
  /* 103939cc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 103939d0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 103939d4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 103939d8 push ebx */
  push32((uint32_t)(EBX));
  /* 103939d9 call dword ptr [0x1039673c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1039673c))), 0x103939dfu);
L_103939df:;
  /* 103939df pop edi */
  EDI = (pop32());
  /* 103939e0 pop esi */
  ESI = (pop32());
  /* 103939e1 pop ebx */
  EBX = (pop32());
  /* 103939e2 ret  */
  ESPCHK(0x1039395eu, _esp0);
  ESP += 4; return;
L_103939e3:;
  /* 103939e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103939e5 jmp 0x103939df */
  goto L_103939df;
}

/* _strncpy @ 0x103939f0 (254 bytes, 109 insns) */
void f_103939f0(void) {
  FTRACE(0x103939f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103939f0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 103939f4 push edi */
  push32((uint32_t)(EDI));
  /* 103939f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103939f7 je 0x10393a73 */
  if (C.zf) goto L_10393a73;
  /* 103939f9 push esi */
  push32((uint32_t)(ESI));
  /* 103939fa push ebx */
  push32((uint32_t)(EBX));
  /* 103939fb mov ebx, ecx */
  EBX = (ECX);
  /* 103939fd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10393a01 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10393a07 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10393a0b jne 0x10393a14 */
  if (!C.zf) goto L_10393a14;
  /* 10393a0d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10393a10 jne 0x10393a81 */
  if (!C.zf) goto L_10393a81;
  /* 10393a12 jmp 0x10393a35 */
  goto L_10393a35;
L_10393a14:;
  /* 10393a14 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10393a16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10393a17 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10393a19 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10393a1a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10393a1b je 0x10393a42 */
  if (C.zf) goto L_10393a42;
  /* 10393a1d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10393a1f je 0x10393a4a */
  if (C.zf) goto L_10393a4a;
  /* 10393a21 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10393a27 jne 0x10393a14 */
  if (!C.zf) goto L_10393a14;
  /* 10393a29 mov ebx, ecx */
  EBX = (ECX);
  /* 10393a2b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10393a2e jne 0x10393a81 */
  if (!C.zf) goto L_10393a81;
L_10393a30:;
  /* 10393a30 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10393a33 je 0x10393a42 */
  if (C.zf) goto L_10393a42;
L_10393a35:;
  /* 10393a35 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10393a37 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10393a38 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10393a3a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10393a3b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10393a3d je 0x10393a6e */
  if (C.zf) goto L_10393a6e;
  /* 10393a3f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10393a40 jne 0x10393a35 */
  if (!C.zf) goto L_10393a35;
L_10393a42:;
  /* 10393a42 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10393a46 pop ebx */
  EBX = (pop32());
  /* 10393a47 pop esi */
  ESI = (pop32());
  /* 10393a48 pop edi */
  EDI = (pop32());
  /* 10393a49 ret  */
  ESPCHK(0x103939f0u, _esp0);
  ESP += 4; return;
L_10393a4a:;
  /* 10393a4a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10393a50 je 0x10393a64 */
  if (C.zf) goto L_10393a64;
L_10393a52:;
  /* 10393a52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10393a54 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10393a55 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10393a56 je 0x10393ae6 */
  if (C.zf) goto L_10393ae6;
  /* 10393a5c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10393a62 jne 0x10393a52 */
  if (!C.zf) goto L_10393a52;
L_10393a64:;
  /* 10393a64 mov ebx, ecx */
  EBX = (ECX);
  /* 10393a66 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10393a69 jne 0x10393ad7 */
  if (!C.zf) goto L_10393ad7;
L_10393a6b:;
  /* 10393a6b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10393a6d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10393a6e:;
  /* 10393a6e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10393a6f jne 0x10393a6b */
  if (!C.zf) goto L_10393a6b;
  /* 10393a71 pop ebx */
  EBX = (pop32());
  /* 10393a72 pop esi */
  ESI = (pop32());
L_10393a73:;
  /* 10393a73 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10393a77 pop edi */
  EDI = (pop32());
  /* 10393a78 ret  */
  ESPCHK(0x103939f0u, _esp0);
  ESP += 4; return;
L_10393a79:;
  /* 10393a79 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10393a7b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10393a7e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10393a7f je 0x10393a30 */
  if (C.zf) goto L_10393a30;
L_10393a81:;
  /* 10393a81 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10393a86 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10393a88 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393a8a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10393a8d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10393a8f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10393a91 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10393a94 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10393a99 je 0x10393a79 */
  if (C.zf) goto L_10393a79;
  /* 10393a9b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10393a9d je 0x10393acb */
  if (C.zf) goto L_10393acb;
  /* 10393a9f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10393aa1 je 0x10393ac1 */
  if (C.zf) goto L_10393ac1;
  /* 10393aa3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10393aa9 je 0x10393ab7 */
  if (C.zf) goto L_10393ab7;
  /* 10393aab test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10393ab1 jne 0x10393a79 */
  if (!C.zf) goto L_10393a79;
  /* 10393ab3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10393ab5 jmp 0x10393acf */
  goto L_10393acf;
L_10393ab7:;
  /* 10393ab7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10393abd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10393abf jmp 0x10393acf */
  goto L_10393acf;
L_10393ac1:;
  /* 10393ac1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10393ac7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10393ac9 jmp 0x10393acf */
  goto L_10393acf;
L_10393acb:;
  /* 10393acb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10393acd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10393acf:;
  /* 10393acf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10393ad2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10393ad4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10393ad5 je 0x10393ae1 */
  if (C.zf) goto L_10393ae1;
L_10393ad7:;
  /* 10393ad7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10393ad9:;
  /* 10393ad9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10393adb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10393ade dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10393adf jne 0x10393ad9 */
  if (!C.zf) goto L_10393ad9;
L_10393ae1:;
  /* 10393ae1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10393ae4 jne 0x10393a6b */
  if (!C.zf) goto L_10393a6b;
L_10393ae6:;
  /* 10393ae6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10393aea pop ebx */
  EBX = (pop32());
  /* 10393aeb pop esi */
  ESI = (pop32());
  /* 10393aec pop edi */
  EDI = (pop32());
  /* 10393aed ret  */
  ESPCHK(0x103939f0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10393af0 (88 bytes, 40 insns) */
void f_10393af0(void) {
  FTRACE(0x10393af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10393af0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10393af4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10393af8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10393afa je 0x10393b43 */
  if (C.zf) goto L_10393b43;
  /* 10393afc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10393afe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10393b02 push edi */
  push32((uint32_t)(EDI));
  /* 10393b03 mov edi, ecx */
  EDI = (ECX);
  /* 10393b05 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393b08 jb 0x10393b37 */
  if (C.cf) goto L_10393b37;
  /* 10393b0a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10393b0c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10393b0f je 0x10393b19 */
  if (C.zf) goto L_10393b19;
  /* 10393b11 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10393b13:;
  /* 10393b13 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10393b15 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10393b16 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10393b17 jne 0x10393b13 */
  if (!C.zf) goto L_10393b13;
L_10393b19:;
  /* 10393b19 mov ecx, eax */
  ECX = (EAX);
  /* 10393b1b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10393b1e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393b20 mov ecx, eax */
  ECX = (EAX);
  /* 10393b22 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10393b25 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393b27 mov ecx, edx */
  ECX = (EDX);
  /* 10393b29 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10393b2c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10393b2f je 0x10393b37 */
  if (C.zf) goto L_10393b37;
  /* 10393b31 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10393b33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10393b35 je 0x10393b3d */
  if (C.zf) goto L_10393b3d;
L_10393b37:;
  /* 10393b37 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10393b39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10393b3a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10393b3b jne 0x10393b37 */
  if (!C.zf) goto L_10393b37;
L_10393b3d:;
  /* 10393b3d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10393b41 pop edi */
  EDI = (pop32());
  /* 10393b42 ret  */
  ESPCHK(0x10393af0u, _esp0);
  ESP += 4; return;
L_10393b43:;
  /* 10393b43 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10393b47 ret  */
  ESPCHK(0x10393af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b48 @ 0x10393b48 (27 bytes, 13 insns) */
void f_10393b48(void) {
  FTRACE(0x10393b48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10393b48 mov eax, dword ptr [0x10396748] */
  EAX = (r32((uint32_t)(0x10396748)));
  /* 10393b4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10393b4f je 0x10393b60 */
  if (C.zf) goto L_10393b60;
  /* 10393b51 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10393b55 call eax */
  call_ind((uint32_t)(EAX), 0x10393b57u);
  /* 10393b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10393b59 pop ecx */
  ECX = (pop32());
  /* 10393b5a je 0x10393b60 */
  if (C.zf) goto L_10393b60;
  /* 10393b5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10393b5e pop eax */
  EAX = (pop32());
  /* 10393b5f ret  */
  ESPCHK(0x10393b48u, _esp0);
  ESP += 4; return;
L_10393b60:;
  /* 10393b60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10393b62 ret  */
  ESPCHK(0x10393b48u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b63 @ 0x10393b63 (511 bytes, 193 insns) */
void f_10393b63(void) {
  FTRACE(0x10393b63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10393b63 push ebp */
  push32((uint32_t)(EBP));
  /* 10393b64 mov ebp, esp */
  EBP = (ESP);
  /* 10393b66 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10393b68 push 0x10395460 */
  push32((uint32_t)(0x10395460u));
  /* 10393b6d push 0x10394330 */
  push32((uint32_t)(0x10394330u));
  /* 10393b72 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10393b78 push eax */
  push32((uint32_t)(EAX));
  /* 10393b79 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10393b80 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10393b83 push ebx */
  push32((uint32_t)(EBX));
  /* 10393b84 push esi */
  push32((uint32_t)(ESI));
  /* 10393b85 push edi */
  push32((uint32_t)(EDI));
  /* 10393b86 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10393b89 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10393b8b cmp dword ptr [0x10396770], edi */
  { uint32_t _a=(r32((uint32_t)(0x10396770))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393b91 jne 0x10393bd9 */
  if (!C.zf) goto L_10393bd9;
  /* 10393b93 push edi */
  push32((uint32_t)(EDI));
  /* 10393b94 push edi */
  push32((uint32_t)(EDI));
  /* 10393b95 push 1 */
  push32((uint32_t)(0x1u));
  /* 10393b97 pop ebx */
  EBX = (pop32());
  /* 10393b98 push ebx */
  push32((uint32_t)(EBX));
  /* 10393b99 push 0x10395458 */
  push32((uint32_t)(0x10395458u));
  /* 10393b9e mov esi, 0x100 */
  ESI = (0x100u);
  /* 10393ba3 push esi */
  push32((uint32_t)(ESI));
  /* 10393ba4 push edi */
  push32((uint32_t)(EDI));
  /* 10393ba5 call dword ptr [0x1039500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1039500c))), 0x10393babu);
  /* 10393bab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10393bad je 0x10393bb7 */
  if (C.zf) goto L_10393bb7;
  /* 10393baf mov dword ptr [0x10396770], ebx */
  w32((uint32_t)(0x10396770), (EBX));
  /* 10393bb5 jmp 0x10393bd9 */
  goto L_10393bd9;
L_10393bb7:;
  /* 10393bb7 push edi */
  push32((uint32_t)(EDI));
  /* 10393bb8 push edi */
  push32((uint32_t)(EDI));
  /* 10393bb9 push ebx */
  push32((uint32_t)(EBX));
  /* 10393bba push 0x10395454 */
  push32((uint32_t)(0x10395454u));
  /* 10393bbf push esi */
  push32((uint32_t)(ESI));
  /* 10393bc0 push edi */
  push32((uint32_t)(EDI));
  /* 10393bc1 call dword ptr [0x10395010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395010))), 0x10393bc7u);
  /* 10393bc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10393bc9 je 0x10393cf1 */
  if (C.zf) goto L_10393cf1;
  /* 10393bcf mov dword ptr [0x10396770], 2 */
  w32((uint32_t)(0x10396770), (0x2u));
L_10393bd9:;
  /* 10393bd9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393bdc jle 0x10393bee */
  if ((C.zf||C.sf!=C.of)) goto L_10393bee;
  /* 10393bde push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10393be1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10393be4 call 0x10393d87 */
  push32(0x10393be9u); f_10393d87();
  /* 10393be9 pop ecx */
  ECX = (pop32());
  /* 10393bea pop ecx */
  ECX = (pop32());
  /* 10393beb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10393bee:;
  /* 10393bee mov eax, dword ptr [0x10396770] */
  EAX = (r32((uint32_t)(0x10396770)));
  /* 10393bf3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393bf6 jne 0x10393c15 */
  if (!C.zf) goto L_10393c15;
  /* 10393bf8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10393bfb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10393bfe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10393c01 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10393c04 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10393c07 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10393c0a call dword ptr [0x10395010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395010))), 0x10393c10u);
  /* 10393c10 jmp 0x10393cf3 */
  goto L_10393cf3;
L_10393c15:;
  /* 10393c15 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393c18 jne 0x10393cf1 */
  if (!C.zf) goto L_10393cf1;
  /* 10393c1e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393c21 jne 0x10393c2b */
  if (!C.zf) goto L_10393c2b;
  /* 10393c23 mov eax, dword ptr [0x10396768] */
  EAX = (r32((uint32_t)(0x10396768)));
  /* 10393c28 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_10393c2b:;
  /* 10393c2b push edi */
  push32((uint32_t)(EDI));
  /* 10393c2c push edi */
  push32((uint32_t)(EDI));
  /* 10393c2d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10393c30 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10393c33 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10393c36 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10393c38 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10393c3a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10393c3d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10393c3e push eax */
  push32((uint32_t)(EAX));
  /* 10393c3f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10393c42 call dword ptr [0x10395020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395020))), 0x10393c48u);
  /* 10393c48 mov ebx, eax */
  EBX = (EAX);
  /* 10393c4a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 10393c4d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393c4f je 0x10393cf1 */
  if (C.zf) goto L_10393cf1;
  /* 10393c55 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10393c58 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 10393c5b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393c5e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10393c60 call 0x10394410 */
  push32(0x10393c65u); f_10394410();
  /* 10393c65 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10393c68 mov eax, esp */
  EAX = (ESP);
  /* 10393c6a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10393c6d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10393c71 jmp 0x10393c86 */
  goto L_10393c86;
  /* 10393c73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10393c75 pop eax */
  EAX = (pop32());
  /* 10393c76 ret  */
  ESPCHK(0x10393b63u, _esp0);
  ESP += 4; return;
  /* 10393c77 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10393c7a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10393c7c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 10393c7f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10393c83 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10393c86:;
  /* 10393c86 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393c89 je 0x10393cf1 */
  if (C.zf) goto L_10393cf1;
  /* 10393c8b push ebx */
  push32((uint32_t)(EBX));
  /* 10393c8c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10393c8f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10393c92 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10393c95 push 1 */
  push32((uint32_t)(0x1u));
  /* 10393c97 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10393c9a call dword ptr [0x10395020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395020))), 0x10393ca0u);
  /* 10393ca0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10393ca2 je 0x10393cf1 */
  if (C.zf) goto L_10393cf1;
  /* 10393ca4 push edi */
  push32((uint32_t)(EDI));
  /* 10393ca5 push edi */
  push32((uint32_t)(EDI));
  /* 10393ca6 push ebx */
  push32((uint32_t)(EBX));
  /* 10393ca7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10393caa push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10393cad push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10393cb0 call dword ptr [0x1039500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1039500c))), 0x10393cb6u);
  /* 10393cb6 mov esi, eax */
  ESI = (EAX);
  /* 10393cb8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 10393cbb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393cbd je 0x10393cf1 */
  if (C.zf) goto L_10393cf1;
  /* 10393cbf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10393cc3 je 0x10393d05 */
  if (C.zf) goto L_10393d05;
  /* 10393cc5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393cc8 je 0x10393d80 */
  if (C.zf) goto L_10393d80;
  /* 10393cce cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393cd1 jg 0x10393cf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10393cf1;
  /* 10393cd3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10393cd6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10393cd9 push ebx */
  push32((uint32_t)(EBX));
  /* 10393cda push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10393cdd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10393ce0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10393ce3 call dword ptr [0x1039500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1039500c))), 0x10393ce9u);
  /* 10393ce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10393ceb jne 0x10393d80 */
  if (!C.zf) goto L_10393d80;
L_10393cf1:;
  /* 10393cf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10393cf3:;
  /* 10393cf3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10393cf6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10393cf9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10393d00 pop edi */
  EDI = (pop32());
  /* 10393d01 pop esi */
  ESI = (pop32());
  /* 10393d02 pop ebx */
  EBX = (pop32());
  /* 10393d03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10393d04 ret  */
  ESPCHK(0x10393b63u, _esp0);
  ESP += 4; return;
L_10393d05:;
  /* 10393d05 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10393d0c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 10393d0f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393d12 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10393d14 call 0x10394410 */
  push32(0x10393d19u); f_10394410();
  /* 10393d19 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10393d1c mov ebx, esp */
  EBX = (ESP);
  /* 10393d1e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10393d21 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10393d25 jmp 0x10393d39 */
  goto L_10393d39;
  /* 10393d27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10393d29 pop eax */
  EAX = (pop32());
  /* 10393d2a ret  */
  ESPCHK(0x10393b63u, _esp0);
  ESP += 4; return;
  /* 10393d2b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10393d2e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10393d30 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10393d32 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10393d36 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10393d39:;
  /* 10393d39 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393d3b je 0x10393cf1 */
  if (C.zf) goto L_10393cf1;
  /* 10393d3d push esi */
  push32((uint32_t)(ESI));
  /* 10393d3e push ebx */
  push32((uint32_t)(EBX));
  /* 10393d3f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10393d42 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10393d45 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10393d48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10393d4b call dword ptr [0x1039500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1039500c))), 0x10393d51u);
  /* 10393d51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10393d53 je 0x10393cf1 */
  if (C.zf) goto L_10393cf1;
  /* 10393d55 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393d58 push edi */
  push32((uint32_t)(EDI));
  /* 10393d59 push edi */
  push32((uint32_t)(EDI));
  /* 10393d5a jne 0x10393d60 */
  if (!C.zf) goto L_10393d60;
  /* 10393d5c push edi */
  push32((uint32_t)(EDI));
  /* 10393d5d push edi */
  push32((uint32_t)(EDI));
  /* 10393d5e jmp 0x10393d66 */
  goto L_10393d66;
L_10393d60:;
  /* 10393d60 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10393d63 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10393d66:;
  /* 10393d66 push esi */
  push32((uint32_t)(ESI));
  /* 10393d67 push ebx */
  push32((uint32_t)(EBX));
  /* 10393d68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10393d6d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10393d70 call dword ptr [0x10395098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395098))), 0x10393d76u);
  /* 10393d76 mov esi, eax */
  ESI = (EAX);
  /* 10393d78 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393d7a je 0x10393cf1 */
  if (C.zf) goto L_10393cf1;
L_10393d80:;
  /* 10393d80 mov eax, esi */
  EAX = (ESI);
  /* 10393d82 jmp 0x10393cf3 */
  goto L_10393cf3;
}

/* FUN_10003d87 @ 0x10393d87 (43 bytes, 20 insns) */
void f_10393d87(void) {
  FTRACE(0x10393d87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10393d87 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10393d8b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10393d8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10393d91 push esi */
  push32((uint32_t)(ESI));
  /* 10393d92 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10393d95 je 0x10393da4 */
  if (C.zf) goto L_10393da4;
L_10393d97:;
  /* 10393d97 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10393d9a je 0x10393da4 */
  if (C.zf) goto L_10393da4;
  /* 10393d9c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10393d9d mov esi, ecx */
  ESI = (ECX);
  /* 10393d9f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10393da0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10393da2 jne 0x10393d97 */
  if (!C.zf) goto L_10393d97;
L_10393da4:;
  /* 10393da4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10393da7 pop esi */
  ESI = (pop32());
  /* 10393da8 jne 0x10393daf */
  if (!C.zf) goto L_10393daf;
  /* 10393daa sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10393dae ret  */
  ESPCHK(0x10393d87u, _esp0);
  ESP += 4; return;
L_10393daf:;
  /* 10393daf mov eax, edx */
  EAX = (EDX);
  /* 10393db1 ret  */
  ESPCHK(0x10393d87u, _esp0);
  ESP += 4; return;
}

/* FUN_10003db2 @ 0x10393db2 (318 bytes, 123 insns) */
void f_10393db2(void) {
  FTRACE(0x10393db2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10393db2 push ebp */
  push32((uint32_t)(EBP));
  /* 10393db3 mov ebp, esp */
  EBP = (ESP);
  /* 10393db5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10393db7 push 0x10395478 */
  push32((uint32_t)(0x10395478u));
  /* 10393dbc push 0x10394330 */
  push32((uint32_t)(0x10394330u));
  /* 10393dc1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10393dc7 push eax */
  push32((uint32_t)(EAX));
  /* 10393dc8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10393dcf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10393dd2 push ebx */
  push32((uint32_t)(EBX));
  /* 10393dd3 push esi */
  push32((uint32_t)(ESI));
  /* 10393dd4 push edi */
  push32((uint32_t)(EDI));
  /* 10393dd5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10393dd8 mov eax, dword ptr [0x10396774] */
  EAX = (r32((uint32_t)(0x10396774)));
  /* 10393ddd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10393ddf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393de1 jne 0x10393e21 */
  if (!C.zf) goto L_10393e21;
  /* 10393de3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10393de6 push eax */
  push32((uint32_t)(EAX));
  /* 10393de7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10393de9 pop esi */
  ESI = (pop32());
  /* 10393dea push esi */
  push32((uint32_t)(ESI));
  /* 10393deb push 0x10395458 */
  push32((uint32_t)(0x10395458u));
  /* 10393df0 push esi */
  push32((uint32_t)(ESI));
  /* 10393df1 call dword ptr [0x10395008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395008))), 0x10393df7u);
  /* 10393df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10393df9 je 0x10393dff */
  if (C.zf) goto L_10393dff;
  /* 10393dfb mov eax, esi */
  EAX = (ESI);
  /* 10393dfd jmp 0x10393e1c */
  goto L_10393e1c;
L_10393dff:;
  /* 10393dff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10393e02 push eax */
  push32((uint32_t)(EAX));
  /* 10393e03 push esi */
  push32((uint32_t)(ESI));
  /* 10393e04 push 0x10395454 */
  push32((uint32_t)(0x10395454u));
  /* 10393e09 push esi */
  push32((uint32_t)(ESI));
  /* 10393e0a push ebx */
  push32((uint32_t)(EBX));
  /* 10393e0b call dword ptr [0x10395014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395014))), 0x10393e11u);
  /* 10393e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10393e13 je 0x10393ee7 */
  if (C.zf) goto L_10393ee7;
  /* 10393e19 push 2 */
  push32((uint32_t)(0x2u));
  /* 10393e1b pop eax */
  EAX = (pop32());
L_10393e1c:;
  /* 10393e1c mov dword ptr [0x10396774], eax */
  w32((uint32_t)(0x10396774), (EAX));
L_10393e21:;
  /* 10393e21 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393e24 jne 0x10393e4a */
  if (!C.zf) goto L_10393e4a;
  /* 10393e26 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10393e29 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393e2b jne 0x10393e32 */
  if (!C.zf) goto L_10393e32;
  /* 10393e2d mov eax, dword ptr [0x10396758] */
  EAX = (r32((uint32_t)(0x10396758)));
L_10393e32:;
  /* 10393e32 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10393e35 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10393e38 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10393e3b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10393e3e push eax */
  push32((uint32_t)(EAX));
  /* 10393e3f call dword ptr [0x10395014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395014))), 0x10393e45u);
  /* 10393e45 jmp 0x10393ee9 */
  goto L_10393ee9;
L_10393e4a:;
  /* 10393e4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393e4d jne 0x10393ee7 */
  if (!C.zf) goto L_10393ee7;
  /* 10393e53 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393e56 jne 0x10393e60 */
  if (!C.zf) goto L_10393e60;
  /* 10393e58 mov eax, dword ptr [0x10396768] */
  EAX = (r32((uint32_t)(0x10396768)));
  /* 10393e5d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10393e60:;
  /* 10393e60 push ebx */
  push32((uint32_t)(EBX));
  /* 10393e61 push ebx */
  push32((uint32_t)(EBX));
  /* 10393e62 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10393e65 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10393e68 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10393e6b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10393e6d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10393e6f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10393e72 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10393e73 push eax */
  push32((uint32_t)(EAX));
  /* 10393e74 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10393e77 call dword ptr [0x10395020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395020))), 0x10393e7du);
  /* 10393e7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10393e80 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393e82 je 0x10393ee7 */
  if (C.zf) goto L_10393ee7;
  /* 10393e84 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10393e87 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 10393e8a mov eax, edi */
  EAX = (EDI);
  /* 10393e8c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393e8f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10393e91 call 0x10394410 */
  push32(0x10393e96u); f_10394410();
  /* 10393e96 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10393e99 mov esi, esp */
  ESI = (ESP);
  /* 10393e9b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 10393e9e push edi */
  push32((uint32_t)(EDI));
  /* 10393e9f push ebx */
  push32((uint32_t)(EBX));
  /* 10393ea0 push esi */
  push32((uint32_t)(ESI));
  /* 10393ea1 call 0x10393af0 */
  push32(0x10393ea6u); f_10393af0();
  /* 10393ea6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10393ea9 jmp 0x10393eb6 */
  goto L_10393eb6;
  /* 10393eab push 1 */
  push32((uint32_t)(0x1u));
  /* 10393ead pop eax */
  EAX = (pop32());
  /* 10393eae ret  */
  ESPCHK(0x10393db2u, _esp0);
  ESP += 4; return;
  /* 10393eaf mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10393eb2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10393eb4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10393eb6:;
  /* 10393eb6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10393eba cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393ebc je 0x10393ee7 */
  if (C.zf) goto L_10393ee7;
  /* 10393ebe push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10393ec1 push esi */
  push32((uint32_t)(ESI));
  /* 10393ec2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10393ec5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10393ec8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10393eca push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10393ecd call dword ptr [0x10395020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395020))), 0x10393ed3u);
  /* 10393ed3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393ed5 je 0x10393ee7 */
  if (C.zf) goto L_10393ee7;
  /* 10393ed7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10393eda push eax */
  push32((uint32_t)(EAX));
  /* 10393edb push esi */
  push32((uint32_t)(ESI));
  /* 10393edc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10393edf call dword ptr [0x10395008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10395008))), 0x10393ee5u);
  /* 10393ee5 jmp 0x10393ee9 */
  goto L_10393ee9;
L_10393ee7:;
  /* 10393ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10393ee9:;
  /* 10393ee9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10393eec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10393eef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10393ef6 pop edi */
  EDI = (pop32());
  /* 10393ef7 pop esi */
  ESI = (pop32());
  /* 10393ef8 pop ebx */
  EBX = (pop32());
  /* 10393ef9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10393efa ret  */
  ESPCHK(0x10393db2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f00 @ 0x10393f00 (664 bytes, 268 insns) [15 switch table(s)] */
void f_10393f00(void) {
  FTRACE(0x10393f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10393f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10393f01 mov ebp, esp */
  EBP = (ESP);
  /* 10393f03 push edi */
  push32((uint32_t)(EDI));
  /* 10393f04 push esi */
  push32((uint32_t)(ESI));
  /* 10393f05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10393f08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10393f0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10393f0e mov eax, ecx */
  EAX = (ECX);
  /* 10393f10 mov edx, ecx */
  EDX = (ECX);
  /* 10393f12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393f14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393f16 jbe 0x10393f20 */
  if ((C.cf||C.zf)) goto L_10393f20;
  /* 10393f18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393f1a jb 0x10394098 */
  if (C.cf) goto L_10394098;
L_10393f20:;
  /* 10393f20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10393f26 jne 0x10393f3c */
  if (!C.zf) goto L_10393f3c;
  /* 10393f28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10393f2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10393f2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393f31 jb 0x10393f5c */
  if (C.cf) goto L_10393f5c;
  /* 10393f33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10393f35 jmp dword ptr [edx*4 + 0x10394048] */
  switch (EDX) {
    case 0: goto L_10394058;
    case 1: goto L_10394060;
    case 2: goto L_1039406c;
    case 3: goto L_10394080;
    default: x86_unimpl("switch@0x10393f35 out of table"); return;
  }
L_10393f3c:;
  /* 10393f3c mov eax, edi */
  EAX = (EDI);
  /* 10393f3e mov edx, 3 */
  EDX = (0x3u);
  /* 10393f43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10393f46 jb 0x10393f54 */
  if (C.cf) goto L_10393f54;
  /* 10393f48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10393f4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10393f4d jmp dword ptr [eax*4 + 0x10393f60] */
  switch (EAX) {
    case 1: goto L_10393f70;
    case 2: goto L_10393f9c;
    case 3: goto L_10393fc0;
    default: x86_unimpl("switch@0x10393f4d out of table"); return;
  }
L_10393f54:;
  /* 10393f54 jmp dword ptr [ecx*4 + 0x10394058] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10394058)))); return;
  /* 10393f5b nop  */
  /* nop */
L_10393f5c:;
  /* 10393f5c jmp dword ptr [ecx*4 + 0x10393fdc] */
  switch (ECX) {
    case 0: goto L_1039403f;
    case 1: goto L_1039402c;
    case 2: goto L_10394024;
    case 3: goto L_1039401c;
    case 4: goto L_10394014;
    case 5: goto L_1039400c;
    case 6: goto L_10394004;
    case 7: goto L_10393ffc;
    default: x86_unimpl("switch@0x10393f5c out of table"); return;
  }
  /* 10393f63 nop  */
  /* nop */
L_10393f70:;
  /* 10393f70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10393f72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10393f74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10393f76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10393f79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10393f7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10393f7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10393f82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10393f85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10393f88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10393f8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393f8e jb 0x10393f5c */
  if (C.cf) goto L_10393f5c;
  /* 10393f90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10393f92 jmp dword ptr [edx*4 + 0x10394048] */
  switch (EDX) {
    case 0: goto L_10394058;
    case 1: goto L_10394060;
    case 2: goto L_1039406c;
    case 3: goto L_10394080;
    default: x86_unimpl("switch@0x10393f92 out of table"); return;
  }
  /* 10393f99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10393f9c:;
  /* 10393f9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10393f9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10393fa0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10393fa2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10393fa5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10393fa8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10393fab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10393fae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10393fb1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393fb4 jb 0x10393f5c */
  if (C.cf) goto L_10393f5c;
  /* 10393fb6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10393fb8 jmp dword ptr [edx*4 + 0x10394048] */
  switch (EDX) {
    case 0: goto L_10394058;
    case 1: goto L_10394060;
    case 2: goto L_1039406c;
    case 3: goto L_10394080;
    default: x86_unimpl("switch@0x10393fb8 out of table"); return;
  }
  /* 10393fbf nop  */
  /* nop */
L_10393fc0:;
  /* 10393fc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10393fc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10393fc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10393fc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10393fc7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10393fca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10393fcb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10393fce jb 0x10393f5c */
  if (C.cf) goto L_10393f5c;
  /* 10393fd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10393fd2 jmp dword ptr [edx*4 + 0x10394048] */
  switch (EDX) {
    case 0: goto L_10394058;
    case 1: goto L_10394060;
    case 2: goto L_1039406c;
    case 3: goto L_10394080;
    default: x86_unimpl("switch@0x10393fd2 out of table"); return;
  }
  /* 10393fd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10393ffc:;
  /* 10393ffc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10394000 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10394004:;
  /* 10394004 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10394008 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1039400c:;
  /* 1039400c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10394010 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10394014:;
  /* 10394014 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10394018 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1039401c:;
  /* 1039401c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10394020 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10394024:;
  /* 10394024 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10394028 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1039402c:;
  /* 1039402c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10394030 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10394034 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1039403b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1039403d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1039403f:;
  /* 1039403f jmp dword ptr [edx*4 + 0x10394048] */
  switch (EDX) {
    case 0: goto L_10394058;
    case 1: goto L_10394060;
    case 2: goto L_1039406c;
    case 3: goto L_10394080;
    default: x86_unimpl("switch@0x1039403f out of table"); return;
  }
  /* 10394046 mov edi, edi */
  EDI = (EDI);
L_10394058:;
  /* 10394058 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1039405b pop esi */
  ESI = (pop32());
  /* 1039405c pop edi */
  EDI = (pop32());
  /* 1039405d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1039405e ret  */
  ESPCHK(0x10393f00u, _esp0);
  ESP += 4; return;
  /* 1039405f nop  */
  /* nop */
L_10394060:;
  /* 10394060 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10394062 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10394064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10394067 pop esi */
  ESI = (pop32());
  /* 10394068 pop edi */
  EDI = (pop32());
  /* 10394069 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1039406a ret  */
  ESPCHK(0x10393f00u, _esp0);
  ESP += 4; return;
  /* 1039406b nop  */
  /* nop */
L_1039406c:;
  /* 1039406c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1039406e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10394070 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10394073 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10394076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10394079 pop esi */
  ESI = (pop32());
  /* 1039407a pop edi */
  EDI = (pop32());
  /* 1039407b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1039407c ret  */
  ESPCHK(0x10393f00u, _esp0);
  ESP += 4; return;
  /* 1039407d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10394080:;
  /* 10394080 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10394082 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10394084 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10394087 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1039408a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1039408d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10394090 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10394093 pop esi */
  ESI = (pop32());
  /* 10394094 pop edi */
  EDI = (pop32());
  /* 10394095 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10394096 ret  */
  ESPCHK(0x10393f00u, _esp0);
  ESP += 4; return;
  /* 10394097 nop  */
  /* nop */
L_10394098:;
  /* 10394098 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1039409c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 103940a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103940a6 jne 0x103940cc */
  if (!C.zf) goto L_103940cc;
  /* 103940a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103940ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103940ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103940b1 jb 0x103940c0 */
  if (C.cf) goto L_103940c0;
  /* 103940b3 std  */
  C.df=1;
  /* 103940b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103940b6 cld  */
  C.df=0;
  /* 103940b7 jmp dword ptr [edx*4 + 0x103941e0] */
  switch (EDX) {
    case 0: goto L_103941f0;
    case 1: goto L_103941f8;
    case 2: goto L_10394208;
    case 3: goto L_1039421c;
    default: x86_unimpl("switch@0x103940b7 out of table"); return;
  }
  /* 103940be mov edi, edi */
  EDI = (EDI);
L_103940c0:;
  /* 103940c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103940c2 jmp dword ptr [ecx*4 + 0x10394190] */
  switch (ECX) {
    case 0: goto L_103941d7;
    default: x86_unimpl("switch@0x103940c2 out of table"); return;
  }
  /* 103940c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103940cc:;
  /* 103940cc mov eax, edi */
  EAX = (EDI);
  /* 103940ce mov edx, 3 */
  EDX = (0x3u);
  /* 103940d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103940d6 jb 0x103940e4 */
  if (C.cf) goto L_103940e4;
  /* 103940d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103940db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103940dd jmp dword ptr [eax*4 + 0x103940e8] */
  switch (EAX) {
    case 1: goto L_103940f8;
    case 2: goto L_10394118;
    case 3: goto L_10394140;
    default: x86_unimpl("switch@0x103940dd out of table"); return;
  }
L_103940e4:;
  /* 103940e4 jmp dword ptr [ecx*4 + 0x103941e0] */
  switch (ECX) {
    case 0: goto L_103941f0;
    case 1: goto L_103941f8;
    case 2: goto L_10394208;
    case 3: goto L_1039421c;
    default: x86_unimpl("switch@0x103940e4 out of table"); return;
  }
  /* 103940eb nop  */
  /* nop */
L_103940f8:;
  /* 103940f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103940fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103940fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10394100 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10394101 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10394104 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10394105 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10394108 jb 0x103940c0 */
  if (C.cf) goto L_103940c0;
  /* 1039410a std  */
  C.df=1;
  /* 1039410b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1039410d cld  */
  C.df=0;
  /* 1039410e jmp dword ptr [edx*4 + 0x103941e0] */
  switch (EDX) {
    case 0: goto L_103941f0;
    case 1: goto L_103941f8;
    case 2: goto L_10394208;
    case 3: goto L_1039421c;
    default: x86_unimpl("switch@0x1039410e out of table"); return;
  }
  /* 10394115 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10394118:;
  /* 10394118 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1039411b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1039411d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10394120 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10394123 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10394126 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10394129 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1039412c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1039412f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10394132 jb 0x103940c0 */
  if (C.cf) goto L_103940c0;
  /* 10394134 std  */
  C.df=1;
  /* 10394135 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10394137 cld  */
  C.df=0;
  /* 10394138 jmp dword ptr [edx*4 + 0x103941e0] */
  switch (EDX) {
    case 0: goto L_103941f0;
    case 1: goto L_103941f8;
    case 2: goto L_10394208;
    case 3: goto L_1039421c;
    default: x86_unimpl("switch@0x10394138 out of table"); return;
  }
  /* 1039413f nop  */
  /* nop */
L_10394140:;
  /* 10394140 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10394143 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10394145 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10394148 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1039414b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1039414e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10394151 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10394154 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10394157 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1039415a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1039415d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10394160 jb 0x103940c0 */
  if (C.cf) goto L_103940c0;
  /* 10394166 std  */
  C.df=1;
  /* 10394167 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10394169 cld  */
  C.df=0;
  /* 1039416a jmp dword ptr [edx*4 + 0x103941e0] */
  switch (EDX) {
    case 0: goto L_103941f0;
    case 1: goto L_103941f8;
    case 2: goto L_10394208;
    case 3: goto L_1039421c;
    default: x86_unimpl("switch@0x1039416a out of table"); return;
  }
  /* 10394171 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10394174 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10394175 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10394176 cmp dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10394178 pushfd  */
  x86_unimpl("pushfd @ 0x10394178");
  /* 10394179 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1039417a cmp dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039417c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1039417d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1039417e cmp dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10394180 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10394181 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10394182 cmp dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10394184 mov ah, 0x41 */
  AH = (0x41u);
  /* 10394186 cmp dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10394188 mov esp, 0xc4103941 */
  ESP = (0xc4103941u);
  /* 1039418d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1039418e cmp dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10394194 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10394198 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1039419c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 103941a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 103941a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 103941a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 103941ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 103941b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 103941b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 103941b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 103941bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 103941c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 103941c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 103941c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 103941cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103941d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103941d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103941d7:;
  /* 103941d7 jmp dword ptr [edx*4 + 0x103941e0] */
  switch (EDX) {
    case 0: goto L_103941f0;
    case 1: goto L_103941f8;
    case 2: goto L_10394208;
    case 3: goto L_1039421c;
    default: x86_unimpl("switch@0x103941d7 out of table"); return;
  }
  /* 103941de mov edi, edi */
  EDI = (EDI);
L_103941f0:;
  /* 103941f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103941f3 pop esi */
  ESI = (pop32());
  /* 103941f4 pop edi */
  EDI = (pop32());
  /* 103941f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103941f6 ret  */
  ESPCHK(0x10393f00u, _esp0);
  ESP += 4; return;
  /* 103941f7 nop  */
  /* nop */
L_103941f8:;
  /* 103941f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103941fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103941fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10394201 pop esi */
  ESI = (pop32());
  /* 10394202 pop edi */
  EDI = (pop32());
  /* 10394203 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10394204 ret  */
  ESPCHK(0x10393f00u, _esp0);
  ESP += 4; return;
  /* 10394205 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10394208:;
  /* 10394208 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1039420b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1039420e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10394211 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10394214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10394217 pop esi */
  ESI = (pop32());
  /* 10394218 pop edi */
  EDI = (pop32());
  /* 10394219 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1039421a ret  */
  ESPCHK(0x10393f00u, _esp0);
  ESP += 4; return;
  /* 1039421b nop  */
  /* nop */
L_1039421c:;
  /* 1039421c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1039421f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10394222 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10394225 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10394228 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1039422b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1039422e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10394231 pop esi */
  ESI = (pop32());
  /* 10394232 pop edi */
  EDI = (pop32());
  /* 10394233 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10394234 ret  */
  ESPCHK(0x10393f00u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10394238 (32 bytes, 18 insns) */
void f_10394238(void) {
  FTRACE(0x10394238u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10394238 push ebp */
  push32((uint32_t)(EBP));
  /* 10394239 mov ebp, esp */
  EBP = (ESP);
  /* 1039423b push ebx */
  push32((uint32_t)(EBX));
  /* 1039423c push esi */
  push32((uint32_t)(ESI));
  /* 1039423d push edi */
  push32((uint32_t)(EDI));
  /* 1039423e push ebp */
  push32((uint32_t)(EBP));
  /* 1039423f push 0 */
  push32((uint32_t)(0x0u));
  /* 10394241 push 0 */
  push32((uint32_t)(0x0u));
  /* 10394243 push 0x10394250 */
  push32((uint32_t)(0x10394250u));
  /* 10394248 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1039424b call 0x10394440 */
  push32(0x10394250u); f_10394440();
  /* 10394250 pop ebp */
  EBP = (pop32());
  /* 10394251 pop edi */
  EDI = (pop32());
  /* 10394252 pop esi */
  ESI = (pop32());
  /* 10394253 pop ebx */
  EBX = (pop32());
  /* 10394254 mov esp, ebp */
  ESP = (EBP);
  /* 10394256 pop ebp */
  EBP = (pop32());
  /* 10394257 ret  */
  ESPCHK(0x10394238u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1039427a (104 bytes, 33 insns) */
void f_1039427a(void) {
  FTRACE(0x1039427au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1039427a push ebx */
  push32((uint32_t)(EBX));
  /* 1039427b push esi */
  push32((uint32_t)(ESI));
  /* 1039427c push edi */
  push32((uint32_t)(EDI));
  /* 1039427d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10394281 push eax */
  push32((uint32_t)(EAX));
  /* 10394282 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10394284 push 0x10394258 */
  push32((uint32_t)(0x10394258u));
  /* 10394289 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10394290 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10394297:;
  /* 10394297 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1039429b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1039429e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 103942a1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103942a4 je 0x103942d4 */
  if (C.zf) goto L_103942d4;
  /* 103942a6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103942aa je 0x103942d4 */
  if (C.zf) goto L_103942d4;
  /* 103942ac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 103942af mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 103942b2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 103942b6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 103942b9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103942be jne 0x103942d2 */
  if (!C.zf) goto L_103942d2;
  /* 103942c0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 103942c5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 103942c9 call 0x1039430e */
  push32(0x103942ceu); f_1039430e();
  /* 103942ce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x103942d2u);
L_103942d2:;
  /* 103942d2 jmp 0x10394297 */
  goto L_10394297;
L_103942d4:;
  /* 103942d4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 103942db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103942de pop edi */
  EDI = (pop32());
  /* 103942df pop esi */
  ESI = (pop32());
  /* 103942e0 pop ebx */
  EBX = (pop32());
  /* 103942e1 ret  */
  ESPCHK(0x1039427au, _esp0);
  ESP += 4; return;
}

/* FUN_1000430e @ 0x1039430e (24 bytes, 10 insns) */
void f_1039430e(void) {
  FTRACE(0x1039430eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1039430e push ebx */
  push32((uint32_t)(EBX));
  /* 1039430f push ecx */
  push32((uint32_t)(ECX));
  /* 10394310 mov ebx, 0x10396420 */
  EBX = (0x10396420u);
  /* 10394315 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10394318 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1039431b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1039431e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10394321 pop ecx */
  ECX = (pop32());
  /* 10394322 pop ebx */
  EBX = (pop32());
  /* 10394323 ret 4 */
  ESPCHK(0x1039430eu, _esp0);
  ESP += 8; return;
}

/* FUN_100043ed @ 0x103943ed (27 bytes, 11 insns) */
void f_103943ed(void) {
  FTRACE(0x103943edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103943ed push ebp */
  push32((uint32_t)(EBP));
  /* 103943ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 103943f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 103943f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 103943f7 push eax */
  push32((uint32_t)(EAX));
  /* 103943f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 103943fb push eax */
  push32((uint32_t)(EAX));
  /* 103943fc call 0x1039427a */
  push32(0x10394401u); f_1039427a();
  /* 10394401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10394404 pop ebp */
  EBP = (pop32());
  /* 10394405 ret 4 */
  ESPCHK(0x103943edu, _esp0);
  ESP += 8; return;
}

/* FUN_10004410 @ 0x10394410 (47 bytes, 17 insns) */
void f_10394410(void) {
  FTRACE(0x10394410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10394410 push ecx */
  push32((uint32_t)(ECX));
  /* 10394411 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10394416 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1039441a jb 0x10394430 */
  if (C.cf) goto L_10394430;
L_1039441c:;
  /* 1039441c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10394422 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10394427 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10394429 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1039442e jae 0x1039441c */
  if (!C.cf) goto L_1039441c;
L_10394430:;
  /* 10394430 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10394432 mov eax, esp */
  EAX = (ESP);
  /* 10394434 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10394436 mov esp, ecx */
  ESP = (ECX);
  /* 10394438 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1039443a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1039443d push eax */
  push32((uint32_t)(EAX));
  /* 1039443e ret  */
  ESPCHK(0x10394410u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10394440 (6 bytes, 1 insns) */
void f_10394440(void) {
  FTRACE(0x10394440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10394440 jmp dword ptr [0x10395004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10395004)))); return;
}

