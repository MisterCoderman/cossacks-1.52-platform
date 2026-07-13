#include "recomp.h"

/* OnInit @ 0x11771000 (211 bytes, 56 insns) */
void f_11771000(void) {
  FTRACE(0x11771000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771000 push esi */
  push32((uint32_t)(ESI));
  /* 11771001 mov esi, dword ptr [0x11775104] */
  ESI = (r32((uint32_t)(0x11775104)));
  /* 11771007 push 0x117760b4 */
  push32((uint32_t)(0x117760b4u));
  /* 1177100c push 0x11776470 */
  push32((uint32_t)(0x11776470u));
  /* 11771011 call esi */
  call_ind((uint32_t)(ESI), 0x11771013u);
  /* 11771013 push 0x117760ac */
  push32((uint32_t)(0x117760acu));
  /* 11771018 push 0x11776458 */
  push32((uint32_t)(0x11776458u));
  /* 1177101d call esi */
  call_ind((uint32_t)(ESI), 0x1177101fu);
  /* 1177101f push 0x117760a4 */
  push32((uint32_t)(0x117760a4u));
  /* 11771024 push 0x11776478 */
  push32((uint32_t)(0x11776478u));
  /* 11771029 call esi */
  call_ind((uint32_t)(ESI), 0x1177102bu);
  /* 1177102b push 0x11776098 */
  push32((uint32_t)(0x11776098u));
  /* 11771030 push 0x11776468 */
  push32((uint32_t)(0x11776468u));
  /* 11771035 call esi */
  call_ind((uint32_t)(ESI), 0x11771037u);
  /* 11771037 push 0x1177608c */
  push32((uint32_t)(0x1177608cu));
  /* 1177103c push 0x11776460 */
  push32((uint32_t)(0x11776460u));
  /* 11771041 call esi */
  call_ind((uint32_t)(ESI), 0x11771043u);
  /* 11771043 push 0x11776088 */
  push32((uint32_t)(0x11776088u));
  /* 11771048 push 0x11776488 */
  push32((uint32_t)(0x11776488u));
  /* 1177104d call esi */
  call_ind((uint32_t)(ESI), 0x1177104fu);
  /* 1177104f push 0x11776084 */
  push32((uint32_t)(0x11776084u));
  /* 11771054 push 0x11776490 */
  push32((uint32_t)(0x11776490u));
  /* 11771059 call esi */
  call_ind((uint32_t)(ESI), 0x1177105bu);
  /* 1177105b mov esi, dword ptr [0x11775108] */
  ESI = (r32((uint32_t)(0x11775108)));
  /* 11771061 push 0x1177607c */
  push32((uint32_t)(0x1177607cu));
  /* 11771066 push 0x11776498 */
  push32((uint32_t)(0x11776498u));
  /* 1177106b call esi */
  call_ind((uint32_t)(ESI), 0x1177106du);
  /* 1177106d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771070 push 0x11776070 */
  push32((uint32_t)(0x11776070u));
  /* 11771075 push 0x11776450 */
  push32((uint32_t)(0x11776450u));
  /* 1177107a call esi */
  call_ind((uint32_t)(ESI), 0x1177107cu);
  /* 1177107c push 0x1177606c */
  push32((uint32_t)(0x1177606cu));
  /* 11771081 push 0x117764a0 */
  push32((uint32_t)(0x117764a0u));
  /* 11771086 call esi */
  call_ind((uint32_t)(ESI), 0x11771088u);
  /* 11771088 push 0x11776068 */
  push32((uint32_t)(0x11776068u));
  /* 1177108d push 0x117764a8 */
  push32((uint32_t)(0x117764a8u));
  /* 11771092 call esi */
  call_ind((uint32_t)(ESI), 0x11771094u);
  /* 11771094 push 0x11776054 */
  push32((uint32_t)(0x11776054u));
  /* 11771099 push 0x11776480 */
  push32((uint32_t)(0x11776480u));
  /* 1177109e call dword ptr [0x1177510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1177510c))), 0x117710a4u);
  /* 117710a4 mov esi, dword ptr [0x11775110] */
  ESI = (r32((uint32_t)(0x11775110)));
  /* 117710aa push 0x11776048 */
  push32((uint32_t)(0x11776048u));
  /* 117710af push 1 */
  push32((uint32_t)(0x1u));
  /* 117710b1 call esi */
  call_ind((uint32_t)(ESI), 0x117710b3u);
  /* 117710b3 push 0x11776040 */
  push32((uint32_t)(0x11776040u));
  /* 117710b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117710ba call esi */
  call_ind((uint32_t)(ESI), 0x117710bcu);
  /* 117710bc push 0x11776038 */
  push32((uint32_t)(0x11776038u));
  /* 117710c1 push 5 */
  push32((uint32_t)(0x5u));
  /* 117710c3 call esi */
  call_ind((uint32_t)(ESI), 0x117710c5u);
  /* 117710c5 push 0x11776030 */
  push32((uint32_t)(0x11776030u));
  /* 117710ca push 6 */
  push32((uint32_t)(0x6u));
  /* 117710cc call esi */
  call_ind((uint32_t)(ESI), 0x117710ceu);
  /* 117710ce add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117710d1 pop esi */
  ESI = (pop32());
  /* 117710d2 ret  */
  ESPCHK(0x11771000u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x117710e0 (1583 bytes, 563 insns) */
void f_117710e0(void) {
  FTRACE(0x117710e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117710e0 push ebx */
  push32((uint32_t)(EBX));
  /* 117710e1 push ebp */
  push32((uint32_t)(EBP));
  /* 117710e2 push esi */
  push32((uint32_t)(ESI));
  /* 117710e3 push edi */
  push32((uint32_t)(EDI));
  /* 117710e4 mov edi, dword ptr [0x117750b0] */
  EDI = (r32((uint32_t)(0x117750b0)));
  /* 117710ea push 1 */
  push32((uint32_t)(0x1u));
  /* 117710ec call edi */
  call_ind((uint32_t)(EDI), 0x117710eeu);
  /* 117710ee mov ebx, dword ptr [0x117750b4] */
  EBX = (r32((uint32_t)(0x117750b4)));
  /* 117710f4 mov ebp, dword ptr [0x117750b8] */
  EBP = (r32((uint32_t)(0x117750b8)));
  /* 117710fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117710fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117710ff je 0x117713f4 */
  if (C.zf) goto L_117713f4;
  /* 11771105 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771107 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771109 call ebx */
  call_ind((uint32_t)(EBX), 0x1177110bu);
  /* 1177110b push 0x11776114 */
  push32((uint32_t)(0x11776114u));
  /* 11771110 call ebp */
  call_ind((uint32_t)(EBP), 0x11771112u);
  /* 11771112 push 0x1177610c */
  push32((uint32_t)(0x1177610cu));
  /* 11771117 call ebp */
  call_ind((uint32_t)(EBP), 0x11771119u);
  /* 11771119 mov esi, dword ptr [0x117750bc] */
  ESI = (r32((uint32_t)(0x117750bc)));
  /* 1177111f push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 11771124 push 3 */
  push32((uint32_t)(0x3u));
  /* 11771126 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771128 call esi */
  call_ind((uint32_t)(ESI), 0x1177112au);
  /* 1177112a push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1177112f push 1 */
  push32((uint32_t)(0x1u));
  /* 11771131 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771133 call esi */
  call_ind((uint32_t)(ESI), 0x11771135u);
  /* 11771135 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1177113a push 4 */
  push32((uint32_t)(0x4u));
  /* 1177113c push 1 */
  push32((uint32_t)(0x1u));
  /* 1177113e call esi */
  call_ind((uint32_t)(ESI), 0x11771140u);
  /* 11771140 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11771145 push 5 */
  push32((uint32_t)(0x5u));
  /* 11771147 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771149 call esi */
  call_ind((uint32_t)(ESI), 0x1177114bu);
  /* 1177114b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1177114e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11771153 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771155 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771157 call esi */
  call_ind((uint32_t)(ESI), 0x11771159u);
  /* 11771159 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1177115e push 2 */
  push32((uint32_t)(0x2u));
  /* 11771160 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771162 call esi */
  call_ind((uint32_t)(ESI), 0x11771164u);
  /* 11771164 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 11771169 push 3 */
  push32((uint32_t)(0x3u));
  /* 1177116b push 2 */
  push32((uint32_t)(0x2u));
  /* 1177116d call esi */
  call_ind((uint32_t)(ESI), 0x1177116fu);
  /* 1177116f push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11771174 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771176 push 2 */
  push32((uint32_t)(0x2u));
  /* 11771178 call esi */
  call_ind((uint32_t)(ESI), 0x1177117au);
  /* 1177117a push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1177117f push 4 */
  push32((uint32_t)(0x4u));
  /* 11771181 push 2 */
  push32((uint32_t)(0x2u));
  /* 11771183 call esi */
  call_ind((uint32_t)(ESI), 0x11771185u);
  /* 11771185 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1177118a push 5 */
  push32((uint32_t)(0x5u));
  /* 1177118c push 2 */
  push32((uint32_t)(0x2u));
  /* 1177118e call esi */
  call_ind((uint32_t)(ESI), 0x11771190u);
  /* 11771190 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771193 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11771198 push 0 */
  push32((uint32_t)(0x0u));
  /* 1177119a push 2 */
  push32((uint32_t)(0x2u));
  /* 1177119c call esi */
  call_ind((uint32_t)(ESI), 0x1177119eu);
  /* 1177119e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117711a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 117711a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117711a7 call esi */
  call_ind((uint32_t)(ESI), 0x117711a9u);
  /* 117711a9 mov edi, dword ptr [0x117750c0] */
  EDI = (r32((uint32_t)(0x117750c0)));
  /* 117711af push 0x26 */
  push32((uint32_t)(0x26u));
  /* 117711b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117711b3 call edi */
  call_ind((uint32_t)(EDI), 0x117711b5u);
  /* 117711b5 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 117711b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117711b9 call edi */
  call_ind((uint32_t)(EDI), 0x117711bbu);
  /* 117711bb push 0 */
  push32((uint32_t)(0x0u));
  /* 117711bd call dword ptr [0x117750c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750c4))), 0x117711c3u);
  /* 117711c3 mov edi, dword ptr [0x117750c8] */
  EDI = (r32((uint32_t)(0x117750c8)));
  /* 117711c9 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117711cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117711ce jne 0x11771249 */
  if (!C.zf) goto L_11771249;
  /* 117711d0 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117711d5 push 3 */
  push32((uint32_t)(0x3u));
  /* 117711d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117711d9 call esi */
  call_ind((uint32_t)(ESI), 0x117711dbu);
  /* 117711db push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117711e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117711e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117711e4 call esi */
  call_ind((uint32_t)(ESI), 0x117711e6u);
  /* 117711e6 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117711eb push 4 */
  push32((uint32_t)(0x4u));
  /* 117711ed push 0 */
  push32((uint32_t)(0x0u));
  /* 117711ef call esi */
  call_ind((uint32_t)(ESI), 0x117711f1u);
  /* 117711f1 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117711f6 push 5 */
  push32((uint32_t)(0x5u));
  /* 117711f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117711fa call esi */
  call_ind((uint32_t)(ESI), 0x117711fcu);
  /* 117711fc push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11771201 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771203 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771205 call esi */
  call_ind((uint32_t)(ESI), 0x11771207u);
  /* 11771207 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1177120c push 2 */
  push32((uint32_t)(0x2u));
  /* 1177120e push 0 */
  push32((uint32_t)(0x0u));
  /* 11771210 call esi */
  call_ind((uint32_t)(ESI), 0x11771212u);
  /* 11771212 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771215 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771217 push 3 */
  push32((uint32_t)(0x3u));
  /* 11771219 push 0x11776498 */
  push32((uint32_t)(0x11776498u));
  /* 1177121e call dword ptr [0x117750cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750cc))), 0x11771224u);
  /* 11771224 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771226 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771228 push 1 */
  push32((uint32_t)(0x1u));
  /* 1177122a push 2 */
  push32((uint32_t)(0x2u));
  /* 1177122c push 0x11776104 */
  push32((uint32_t)(0x11776104u));
  /* 11771231 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771233 call edi */
  call_ind((uint32_t)(EDI), 0x11771235u);
  /* 11771235 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771237 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771239 push 1 */
  push32((uint32_t)(0x1u));
  /* 1177123b push 2 */
  push32((uint32_t)(0x2u));
  /* 1177123d push 0x117760f8 */
  push32((uint32_t)(0x117760f8u));
  /* 11771242 push 2 */
  push32((uint32_t)(0x2u));
  /* 11771244 call edi */
  call_ind((uint32_t)(EDI), 0x11771246u);
  /* 11771246 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11771249:;
  /* 11771249 push 0 */
  push32((uint32_t)(0x0u));
  /* 1177124b call dword ptr [0x117750c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750c4))), 0x11771251u);
  /* 11771251 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771254 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771257 jne 0x117712c3 */
  if (!C.zf) goto L_117712c3;
  /* 11771259 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1177125e push 3 */
  push32((uint32_t)(0x3u));
  /* 11771260 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771262 call esi */
  call_ind((uint32_t)(ESI), 0x11771264u);
  /* 11771264 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11771269 push 1 */
  push32((uint32_t)(0x1u));
  /* 1177126b push 0 */
  push32((uint32_t)(0x0u));
  /* 1177126d call esi */
  call_ind((uint32_t)(ESI), 0x1177126fu);
  /* 1177126f push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11771274 push 4 */
  push32((uint32_t)(0x4u));
  /* 11771276 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771278 call esi */
  call_ind((uint32_t)(ESI), 0x1177127au);
  /* 1177127a push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1177127f push 5 */
  push32((uint32_t)(0x5u));
  /* 11771281 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771283 call esi */
  call_ind((uint32_t)(ESI), 0x11771285u);
  /* 11771285 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1177128a push 0 */
  push32((uint32_t)(0x0u));
  /* 1177128c push 0 */
  push32((uint32_t)(0x0u));
  /* 1177128e call esi */
  call_ind((uint32_t)(ESI), 0x11771290u);
  /* 11771290 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11771295 push 2 */
  push32((uint32_t)(0x2u));
  /* 11771297 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771299 call esi */
  call_ind((uint32_t)(ESI), 0x1177129bu);
  /* 1177129b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1177129e push 2 */
  push32((uint32_t)(0x2u));
  /* 117712a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117712a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 117712a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 117712a6 push 0x11776104 */
  push32((uint32_t)(0x11776104u));
  /* 117712ab push 1 */
  push32((uint32_t)(0x1u));
  /* 117712ad call edi */
  call_ind((uint32_t)(EDI), 0x117712afu);
  /* 117712af push 2 */
  push32((uint32_t)(0x2u));
  /* 117712b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117712b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117712b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117712b7 push 0x117760f8 */
  push32((uint32_t)(0x117760f8u));
  /* 117712bc push 2 */
  push32((uint32_t)(0x2u));
  /* 117712be call edi */
  call_ind((uint32_t)(EDI), 0x117712c0u);
  /* 117712c0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117712c3:;
  /* 117712c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117712c5 call dword ptr [0x117750c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750c4))), 0x117712cbu);
  /* 117712cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117712ce cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117712d1 jne 0x1177133d */
  if (!C.zf) goto L_1177133d;
  /* 117712d3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117712d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 117712da push 0 */
  push32((uint32_t)(0x0u));
  /* 117712dc call esi */
  call_ind((uint32_t)(ESI), 0x117712deu);
  /* 117712de push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117712e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117712e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117712e7 call esi */
  call_ind((uint32_t)(ESI), 0x117712e9u);
  /* 117712e9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117712ee push 4 */
  push32((uint32_t)(0x4u));
  /* 117712f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117712f2 call esi */
  call_ind((uint32_t)(ESI), 0x117712f4u);
  /* 117712f4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117712f9 push 5 */
  push32((uint32_t)(0x5u));
  /* 117712fb push 0 */
  push32((uint32_t)(0x0u));
  /* 117712fd call esi */
  call_ind((uint32_t)(ESI), 0x117712ffu);
  /* 117712ff push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11771304 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771306 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771308 call esi */
  call_ind((uint32_t)(ESI), 0x1177130au);
  /* 1177130a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1177130f push 2 */
  push32((uint32_t)(0x2u));
  /* 11771311 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771313 call esi */
  call_ind((uint32_t)(ESI), 0x11771315u);
  /* 11771315 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771318 push 3 */
  push32((uint32_t)(0x3u));
  /* 1177131a push 1 */
  push32((uint32_t)(0x1u));
  /* 1177131c push 1 */
  push32((uint32_t)(0x1u));
  /* 1177131e push 2 */
  push32((uint32_t)(0x2u));
  /* 11771320 push 0x11776104 */
  push32((uint32_t)(0x11776104u));
  /* 11771325 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771327 call edi */
  call_ind((uint32_t)(EDI), 0x11771329u);
  /* 11771329 push 3 */
  push32((uint32_t)(0x3u));
  /* 1177132b push 1 */
  push32((uint32_t)(0x1u));
  /* 1177132d push 1 */
  push32((uint32_t)(0x1u));
  /* 1177132f push 2 */
  push32((uint32_t)(0x2u));
  /* 11771331 push 0x117760f8 */
  push32((uint32_t)(0x117760f8u));
  /* 11771336 push 2 */
  push32((uint32_t)(0x2u));
  /* 11771338 call edi */
  call_ind((uint32_t)(EDI), 0x1177133au);
  /* 1177133a add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1177133d:;
  /* 1177133d push 0 */
  push32((uint32_t)(0x0u));
  /* 1177133f call dword ptr [0x117750c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750c4))), 0x11771345u);
  /* 11771345 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771348 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177134b jne 0x117713b6 */
  if (!C.zf) goto L_117713b6;
  /* 1177134d push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11771352 push eax */
  push32((uint32_t)(EAX));
  /* 11771353 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771355 call esi */
  call_ind((uint32_t)(ESI), 0x11771357u);
  /* 11771357 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1177135c push 1 */
  push32((uint32_t)(0x1u));
  /* 1177135e push 0 */
  push32((uint32_t)(0x0u));
  /* 11771360 call esi */
  call_ind((uint32_t)(ESI), 0x11771362u);
  /* 11771362 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11771367 push 4 */
  push32((uint32_t)(0x4u));
  /* 11771369 push 0 */
  push32((uint32_t)(0x0u));
  /* 1177136b call esi */
  call_ind((uint32_t)(ESI), 0x1177136du);
  /* 1177136d push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11771372 push 5 */
  push32((uint32_t)(0x5u));
  /* 11771374 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771376 call esi */
  call_ind((uint32_t)(ESI), 0x11771378u);
  /* 11771378 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1177137d push 0 */
  push32((uint32_t)(0x0u));
  /* 1177137f push 0 */
  push32((uint32_t)(0x0u));
  /* 11771381 call esi */
  call_ind((uint32_t)(ESI), 0x11771383u);
  /* 11771383 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11771388 push 2 */
  push32((uint32_t)(0x2u));
  /* 1177138a push 0 */
  push32((uint32_t)(0x0u));
  /* 1177138c call esi */
  call_ind((uint32_t)(ESI), 0x1177138eu);
  /* 1177138e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771391 push 3 */
  push32((uint32_t)(0x3u));
  /* 11771393 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771395 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771397 push 2 */
  push32((uint32_t)(0x2u));
  /* 11771399 push 0x11776104 */
  push32((uint32_t)(0x11776104u));
  /* 1177139e push 1 */
  push32((uint32_t)(0x1u));
  /* 117713a0 call edi */
  call_ind((uint32_t)(EDI), 0x117713a2u);
  /* 117713a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 117713a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 117713a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117713a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117713aa push 0x117760f8 */
  push32((uint32_t)(0x117760f8u));
  /* 117713af push 2 */
  push32((uint32_t)(0x2u));
  /* 117713b1 call edi */
  call_ind((uint32_t)(EDI), 0x117713b3u);
  /* 117713b3 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117713b6:;
  /* 117713b6 mov esi, dword ptr [0x117750d0] */
  ESI = (r32((uint32_t)(0x117750d0)));
  /* 117713bc push 0 */
  push32((uint32_t)(0x0u));
  /* 117713be push 0x11776468 */
  push32((uint32_t)(0x11776468u));
  /* 117713c3 call esi */
  call_ind((uint32_t)(ESI), 0x117713c5u);
  /* 117713c5 push 6 */
  push32((uint32_t)(0x6u));
  /* 117713c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117713c9 call dword ptr [0x117750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750d4))), 0x117713cfu);
  /* 117713cf push 0 */
  push32((uint32_t)(0x0u));
  /* 117713d1 push 0x11776468 */
  push32((uint32_t)(0x11776468u));
  /* 117713d6 call esi */
  call_ind((uint32_t)(ESI), 0x117713d8u);
  /* 117713d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117713da push 0 */
  push32((uint32_t)(0x0u));
  /* 117713dc push 0x11776450 */
  push32((uint32_t)(0x11776450u));
  /* 117713e1 push 6 */
  push32((uint32_t)(0x6u));
  /* 117713e3 call dword ptr [0x117750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750d8))), 0x117713e9u);
  /* 117713e9 mov edi, dword ptr [0x117750b0] */
  EDI = (r32((uint32_t)(0x117750b0)));
  /* 117713ef add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117713f2 jmp 0x117713fa */
  goto L_117713fa;
L_117713f4:;
  /* 117713f4 mov esi, dword ptr [0x117750d0] */
  ESI = (r32((uint32_t)(0x117750d0)));
L_117713fa:;
  /* 117713fa push 2 */
  push32((uint32_t)(0x2u));
  /* 117713fc call edi */
  call_ind((uint32_t)(EDI), 0x117713feu);
  /* 117713fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771401 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11771403 je 0x11771437 */
  if (C.zf) goto L_11771437;
  /* 11771405 push 0x11776468 */
  push32((uint32_t)(0x11776468u));
  /* 1177140a push 0x11776450 */
  push32((uint32_t)(0x11776450u));
  /* 1177140f call dword ptr [0x117750dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750dc))), 0x11771415u);
  /* 11771415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771418 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177141b jne 0x11771437 */
  if (!C.zf) goto L_11771437;
  /* 1177141d push 0 */
  push32((uint32_t)(0x0u));
  /* 1177141f push 2 */
  push32((uint32_t)(0x2u));
  /* 11771421 call ebx */
  call_ind((uint32_t)(EBX), 0x11771423u);
  /* 11771423 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771425 push 0x11776468 */
  push32((uint32_t)(0x11776468u));
  /* 1177142a call esi */
  call_ind((uint32_t)(ESI), 0x1177142cu);
  /* 1177142c push 6 */
  push32((uint32_t)(0x6u));
  /* 1177142e call dword ptr [0x117750e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750e0))), 0x11771434u);
  /* 11771434 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11771437:;
  /* 11771437 push 3 */
  push32((uint32_t)(0x3u));
  /* 11771439 call edi */
  call_ind((uint32_t)(EDI), 0x1177143bu);
  /* 1177143b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1177143e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11771440 je 0x11771467 */
  if (C.zf) goto L_11771467;
  /* 11771442 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771444 push 0x11776480 */
  push32((uint32_t)(0x11776480u));
  /* 11771449 call dword ptr [0x117750e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750e4))), 0x1177144fu);
  /* 1177144f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771452 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771455 jne 0x11771467 */
  if (!C.zf) goto L_11771467;
  /* 11771457 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771459 push 3 */
  push32((uint32_t)(0x3u));
  /* 1177145b call ebx */
  call_ind((uint32_t)(EBX), 0x1177145du);
  /* 1177145d push 0x117760f0 */
  push32((uint32_t)(0x117760f0u));
  /* 11771462 call ebp */
  call_ind((uint32_t)(EBP), 0x11771464u);
  /* 11771464 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11771467:;
  /* 11771467 push 4 */
  push32((uint32_t)(0x4u));
  /* 11771469 call edi */
  call_ind((uint32_t)(EDI), 0x1177146bu);
  /* 1177146b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1177146e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11771470 je 0x11771493 */
  if (C.zf) goto L_11771493;
  /* 11771472 push 0x11776458 */
  push32((uint32_t)(0x11776458u));
  /* 11771477 call dword ptr [0x117750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750e8))), 0x1177147du);
  /* 1177147d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771482 jne 0x11771493 */
  if (!C.zf) goto L_11771493;
  /* 11771484 push eax */
  push32((uint32_t)(EAX));
  /* 11771485 push 4 */
  push32((uint32_t)(0x4u));
  /* 11771487 call ebx */
  call_ind((uint32_t)(EBX), 0x11771489u);
  /* 11771489 push 0x117760e8 */
  push32((uint32_t)(0x117760e8u));
  /* 1177148e call ebp */
  call_ind((uint32_t)(EBP), 0x11771490u);
  /* 11771490 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11771493:;
  /* 11771493 push 5 */
  push32((uint32_t)(0x5u));
  /* 11771495 call edi */
  call_ind((uint32_t)(EDI), 0x11771497u);
  /* 11771497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1177149a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1177149c je 0x117714ca */
  if (C.zf) goto L_117714ca;
  /* 1177149e push 4 */
  push32((uint32_t)(0x4u));
  /* 117714a0 call edi */
  call_ind((uint32_t)(EDI), 0x117714a2u);
  /* 117714a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117714a5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117714a7 jne 0x117714ca */
  if (!C.zf) goto L_117714ca;
  /* 117714a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 117714ab call edi */
  call_ind((uint32_t)(EDI), 0x117714adu);
  /* 117714ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117714b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117714b2 jne 0x117714ca */
  if (!C.zf) goto L_117714ca;
  /* 117714b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117714b6 push 5 */
  push32((uint32_t)(0x5u));
  /* 117714b8 call ebx */
  call_ind((uint32_t)(EBX), 0x117714bau);
  /* 117714ba push 0x117760e0 */
  push32((uint32_t)(0x117760e0u));
  /* 117714bf call ebp */
  call_ind((uint32_t)(EBP), 0x117714c1u);
  /* 117714c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117714c4 call dword ptr [0x117750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750ec))), 0x117714cau);
L_117714ca:;
  /* 117714ca push 6 */
  push32((uint32_t)(0x6u));
  /* 117714cc call edi */
  call_ind((uint32_t)(EDI), 0x117714ceu);
  /* 117714ce mov esi, dword ptr [0x117750f0] */
  ESI = (r32((uint32_t)(0x117750f0)));
  /* 117714d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117714d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117714d9 je 0x117714fc */
  if (C.zf) goto L_117714fc;
  /* 117714db push 0 */
  push32((uint32_t)(0x0u));
  /* 117714dd call dword ptr [0x117750f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750f4))), 0x117714e3u);
  /* 117714e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117714e6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117714e8 je 0x117714fc */
  if (C.zf) goto L_117714fc;
  /* 117714ea push 0 */
  push32((uint32_t)(0x0u));
  /* 117714ec push 6 */
  push32((uint32_t)(0x6u));
  /* 117714ee call ebx */
  call_ind((uint32_t)(EBX), 0x117714f0u);
  /* 117714f0 push 0x117760d8 */
  push32((uint32_t)(0x117760d8u));
  /* 117714f5 call ebp */
  call_ind((uint32_t)(EBP), 0x117714f7u);
  /* 117714f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117714fa call esi */
  call_ind((uint32_t)(ESI), 0x117714fcu);
L_117714fc:;
  /* 117714fc push 7 */
  push32((uint32_t)(0x7u));
  /* 117714fe call edi */
  call_ind((uint32_t)(EDI), 0x11771500u);
  /* 11771500 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771503 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11771505 je 0x1177152a */
  if (C.zf) goto L_1177152a;
  /* 11771507 push 0x11776470 */
  push32((uint32_t)(0x11776470u));
  /* 1177150c call dword ptr [0x117750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750e8))), 0x11771512u);
  /* 11771512 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771517 jne 0x1177152a */
  if (!C.zf) goto L_1177152a;
  /* 11771519 push eax */
  push32((uint32_t)(EAX));
  /* 1177151a push 7 */
  push32((uint32_t)(0x7u));
  /* 1177151c call ebx */
  call_ind((uint32_t)(EBX), 0x1177151eu);
  /* 1177151e push 0x117760d0 */
  push32((uint32_t)(0x117760d0u));
  /* 11771523 call ebp */
  call_ind((uint32_t)(EBP), 0x11771525u);
  /* 11771525 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771528 call esi */
  call_ind((uint32_t)(ESI), 0x1177152au);
L_1177152a:;
  /* 1177152a push 8 */
  push32((uint32_t)(0x8u));
  /* 1177152c call edi */
  call_ind((uint32_t)(EDI), 0x1177152eu);
  /* 1177152e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771531 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11771533 je 0x11771558 */
  if (C.zf) goto L_11771558;
  /* 11771535 push 0x11776478 */
  push32((uint32_t)(0x11776478u));
  /* 1177153a call dword ptr [0x117750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750e8))), 0x11771540u);
  /* 11771540 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771543 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771545 jne 0x11771558 */
  if (!C.zf) goto L_11771558;
  /* 11771547 push eax */
  push32((uint32_t)(EAX));
  /* 11771548 push 8 */
  push32((uint32_t)(0x8u));
  /* 1177154a call ebx */
  call_ind((uint32_t)(EBX), 0x1177154cu);
  /* 1177154c push 0x117760c8 */
  push32((uint32_t)(0x117760c8u));
  /* 11771551 call ebp */
  call_ind((uint32_t)(EBP), 0x11771553u);
  /* 11771553 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771556 call esi */
  call_ind((uint32_t)(ESI), 0x11771558u);
L_11771558:;
  /* 11771558 push 9 */
  push32((uint32_t)(0x9u));
  /* 1177155a call edi */
  call_ind((uint32_t)(EDI), 0x1177155cu);
  /* 1177155c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1177155f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11771561 je 0x11771582 */
  if (C.zf) goto L_11771582;
  /* 11771563 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771565 call dword ptr [0x117750f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750f4))), 0x1177156bu);
  /* 1177156b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1177156e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11771570 je 0x11771582 */
  if (C.zf) goto L_11771582;
  /* 11771572 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771574 push 9 */
  push32((uint32_t)(0x9u));
  /* 11771576 call ebx */
  call_ind((uint32_t)(EBX), 0x11771578u);
  /* 11771578 push 0x117760c0 */
  push32((uint32_t)(0x117760c0u));
  /* 1177157d call ebp */
  call_ind((uint32_t)(EBP), 0x1177157fu);
  /* 1177157f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11771582:;
  /* 11771582 push 0xa */
  push32((uint32_t)(0xau));
  /* 11771584 call edi */
  call_ind((uint32_t)(EDI), 0x11771586u);
  /* 11771586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771589 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1177158b je 0x117715ac */
  if (C.zf) goto L_117715ac;
  /* 1177158d push 2 */
  push32((uint32_t)(0x2u));
  /* 1177158f call dword ptr [0x117750f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750f4))), 0x11771595u);
  /* 11771595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771598 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1177159a je 0x117715ac */
  if (C.zf) goto L_117715ac;
  /* 1177159c push 0 */
  push32((uint32_t)(0x0u));
  /* 1177159e push 0xa */
  push32((uint32_t)(0xau));
  /* 117715a0 call ebx */
  call_ind((uint32_t)(EBX), 0x117715a2u);
  /* 117715a2 push 0x117760c0 */
  push32((uint32_t)(0x117760c0u));
  /* 117715a7 call ebp */
  call_ind((uint32_t)(EBP), 0x117715a9u);
  /* 117715a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117715ac:;
  /* 117715ac push 0xb */
  push32((uint32_t)(0xbu));
  /* 117715ae call edi */
  call_ind((uint32_t)(EDI), 0x117715b0u);
  /* 117715b0 mov esi, dword ptr [0x117750f8] */
  ESI = (r32((uint32_t)(0x117750f8)));
  /* 117715b6 mov edi, dword ptr [0x117750fc] */
  EDI = (r32((uint32_t)(0x117750fc)));
  /* 117715bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117715bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117715c1 je 0x1177161d */
  if (C.zf) goto L_1177161d;
  /* 117715c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117715c5 push 0x117764a0 */
  push32((uint32_t)(0x117764a0u));
  /* 117715ca call dword ptr [0x11775100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775100))), 0x117715d0u);
  /* 117715d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117715d3 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117715d6 jle 0x1177161d */
  if ((C.zf||C.sf!=C.of)) goto L_1177161d;
  /* 117715d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117715da push 0xb */
  push32((uint32_t)(0xbu));
  /* 117715dc call ebx */
  call_ind((uint32_t)(EBX), 0x117715deu);
  /* 117715de mov ebp, dword ptr [0x117750d0] */
  EBP = (r32((uint32_t)(0x117750d0)));
  /* 117715e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117715e6 push 0x11776488 */
  push32((uint32_t)(0x11776488u));
  /* 117715eb call ebp */
  call_ind((uint32_t)(EBP), 0x117715edu);
  /* 117715ed push 5 */
  push32((uint32_t)(0x5u));
  /* 117715ef call dword ptr [0x117750e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750e0))), 0x117715f5u);
  /* 117715f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117715f7 push 0x11776460 */
  push32((uint32_t)(0x11776460u));
  /* 117715fc call ebp */
  call_ind((uint32_t)(EBP), 0x117715feu);
  /* 117715fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11771600 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11771605 push 0x117764a0 */
  push32((uint32_t)(0x117764a0u));
  /* 1177160a push 5 */
  push32((uint32_t)(0x5u));
  /* 1177160c call esi */
  call_ind((uint32_t)(ESI), 0x1177160eu);
  /* 1177160e push 1 */
  push32((uint32_t)(0x1u));
  /* 11771610 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11771612 call ebx */
  call_ind((uint32_t)(EBX), 0x11771614u);
  /* 11771614 push 5 */
  push32((uint32_t)(0x5u));
  /* 11771616 call edi */
  call_ind((uint32_t)(EDI), 0x11771618u);
  /* 11771618 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1177161b jmp 0x11771623 */
  goto L_11771623;
L_1177161d:;
  /* 1177161d mov ebp, dword ptr [0x117750d0] */
  EBP = (r32((uint32_t)(0x117750d0)));
L_11771623:;
  /* 11771623 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11771625 call dword ptr [0x117750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750b0))), 0x1177162bu);
  /* 1177162b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1177162e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11771630 je 0x11771684 */
  if (C.zf) goto L_11771684;
  /* 11771632 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771634 push 0x117764a8 */
  push32((uint32_t)(0x117764a8u));
  /* 11771639 call dword ptr [0x11775100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775100))), 0x1177163fu);
  /* 1177163f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771642 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771645 jle 0x11771684 */
  if ((C.zf||C.sf!=C.of)) goto L_11771684;
  /* 11771647 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771649 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1177164b call ebx */
  call_ind((uint32_t)(EBX), 0x1177164du);
  /* 1177164d push 0 */
  push32((uint32_t)(0x0u));
  /* 1177164f push 0x11776490 */
  push32((uint32_t)(0x11776490u));
  /* 11771654 call ebp */
  call_ind((uint32_t)(EBP), 0x11771656u);
  /* 11771656 push 5 */
  push32((uint32_t)(0x5u));
  /* 11771658 call dword ptr [0x117750e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750e0))), 0x1177165eu);
  /* 1177165e push 0 */
  push32((uint32_t)(0x0u));
  /* 11771660 push 0x11776460 */
  push32((uint32_t)(0x11776460u));
  /* 11771665 call ebp */
  call_ind((uint32_t)(EBP), 0x11771667u);
  /* 11771667 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771669 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 1177166e push 0x117764a8 */
  push32((uint32_t)(0x117764a8u));
  /* 11771673 push 5 */
  push32((uint32_t)(0x5u));
  /* 11771675 call esi */
  call_ind((uint32_t)(ESI), 0x11771677u);
  /* 11771677 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771679 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1177167b call ebx */
  call_ind((uint32_t)(EBX), 0x1177167du);
  /* 1177167d push 5 */
  push32((uint32_t)(0x5u));
  /* 1177167f call edi */
  call_ind((uint32_t)(EDI), 0x11771681u);
  /* 11771681 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11771684:;
  /* 11771684 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11771686 call dword ptr [0x117750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750b0))), 0x1177168cu);
  /* 1177168c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1177168f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11771691 je 0x1177170a */
  if (C.zf) goto L_1177170a;
  /* 11771693 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771695 push 0x117764a8 */
  push32((uint32_t)(0x117764a8u));
  /* 1177169a call dword ptr [0x11775100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775100))), 0x117716a0u);
  /* 117716a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117716a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117716a5 jne 0x1177170a */
  if (!C.zf) goto L_1177170a;
  /* 117716a7 push eax */
  push32((uint32_t)(EAX));
  /* 117716a8 push 0x117764a0 */
  push32((uint32_t)(0x117764a0u));
  /* 117716ad call dword ptr [0x11775100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775100))), 0x117716b3u);
  /* 117716b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117716b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117716b8 jne 0x1177170a */
  if (!C.zf) goto L_1177170a;
  /* 117716ba push 0xb */
  push32((uint32_t)(0xbu));
  /* 117716bc call dword ptr [0x117750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750b0))), 0x117716c2u);
  /* 117716c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117716c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117716c7 je 0x117716d8 */
  if (C.zf) goto L_117716d8;
  /* 117716c9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 117716cb call dword ptr [0x117750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750b0))), 0x117716d1u);
  /* 117716d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117716d4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117716d6 jne 0x1177170a */
  if (!C.zf) goto L_1177170a;
L_117716d8:;
  /* 117716d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117716da push 0xd */
  push32((uint32_t)(0xdu));
  /* 117716dc call ebx */
  call_ind((uint32_t)(EBX), 0x117716deu);
  /* 117716de push 0 */
  push32((uint32_t)(0x0u));
  /* 117716e0 push 0x11776460 */
  push32((uint32_t)(0x11776460u));
  /* 117716e5 call ebp */
  call_ind((uint32_t)(EBP), 0x117716e7u);
  /* 117716e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117716e9 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 117716ee push 0x11776498 */
  push32((uint32_t)(0x11776498u));
  /* 117716f3 push 5 */
  push32((uint32_t)(0x5u));
  /* 117716f5 call esi */
  call_ind((uint32_t)(ESI), 0x117716f7u);
  /* 117716f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117716f9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 117716fb call ebx */
  call_ind((uint32_t)(EBX), 0x117716fdu);
  /* 117716fd push 1 */
  push32((uint32_t)(0x1u));
  /* 117716ff push 0xb */
  push32((uint32_t)(0xbu));
  /* 11771701 call ebx */
  call_ind((uint32_t)(EBX), 0x11771703u);
  /* 11771703 push 5 */
  push32((uint32_t)(0x5u));
  /* 11771705 call edi */
  call_ind((uint32_t)(EDI), 0x11771707u);
  /* 11771707 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1177170a:;
  /* 1177170a pop edi */
  EDI = (pop32());
  /* 1177170b pop esi */
  ESI = (pop32());
  /* 1177170c pop ebp */
  EBP = (pop32());
  /* 1177170d pop ebx */
  EBX = (pop32());
  /* 1177170e ret  */
  ESPCHK(0x117710e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001710 @ 0x11771710 (20 bytes, 6 insns) */
void f_11771710(void) {
  FTRACE(0x11771710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771710 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11771714 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11771715 jne 0x1177171c */
  if (!C.zf) goto L_1177171c;
  /* 11771717 call 0x11771000 */
  push32(0x1177171cu); f_11771000();
L_1177171c:;
  /* 1177171c mov eax, 1 */
  EAX = (0x1u);
  /* 11771721 ret 0xc */
  ESPCHK(0x11771710u, _esp0);
  ESP += 16; return;
}

/* FUN_10001730 @ 0x11771730 (217 bytes, 57 insns) */
void f_11771730(void) {
  FTRACE(0x11771730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771730 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11771734 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771737 jne 0x117717c5 */
  if (!C.zf) goto L_117717c5;
  /* 1177173d call dword ptr [0x11775054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775054))), 0x11771743u);
  /* 11771743 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771745 mov dword ptr [0x117764cc], eax */
  w32((uint32_t)(0x117764cc), (EAX));
  /* 1177174a call 0x11772164 */
  push32(0x1177174fu); f_11772164();
  /* 1177174f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771751 pop ecx */
  ECX = (pop32());
  /* 11771752 je 0x11771790 */
  if (C.zf) goto L_11771790;
  /* 11771754 mov eax, dword ptr [0x117764cc] */
  EAX = (r32((uint32_t)(0x117764cc)));
  /* 11771759 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1177175b mov cl, byte ptr [0x117764cd] */
  CL = (r8((uint32_t)(0x117764cd)));
  /* 11771761 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11771766 shr dword ptr [0x117764cc], 0x10 */
  w32((uint32_t)(0x117764cc), (sh_shr((uint32_t)(r32((uint32_t)(0x117764cc))), (0x10u)&0x1f, 32)));
  /* 1177176d mov dword ptr [0x117764d4], eax */
  w32((uint32_t)(0x117764d4), (EAX));
  /* 11771772 mov dword ptr [0x117764d8], ecx */
  w32((uint32_t)(0x117764d8), (ECX));
  /* 11771778 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1177177b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1177177d mov dword ptr [0x117764d0], eax */
  w32((uint32_t)(0x117764d0), (EAX));
  /* 11771782 call 0x117719f7 */
  push32(0x11771787u); f_117719f7();
  /* 11771787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771789 jne 0x11771794 */
  if (!C.zf) goto L_11771794;
  /* 1177178b call 0x117721a0 */
  push32(0x11771790u); f_117721a0();
L_11771790:;
  /* 11771790 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11771792 jmp 0x11771806 */
  goto L_11771806;
L_11771794:;
  /* 11771794 call dword ptr [0x11775050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775050))), 0x1177179au);
  /* 1177179a mov dword ptr [0x11776a38], eax */
  w32((uint32_t)(0x11776a38), (EAX));
  /* 1177179f call 0x11772032 */
  push32(0x117717a4u); f_11772032();
  /* 117717a4 mov dword ptr [0x117764b8], eax */
  w32((uint32_t)(0x117764b8), (EAX));
  /* 117717a9 call 0x11771b1c */
  push32(0x117717aeu); f_11771b1c();
  /* 117717ae call 0x11771de5 */
  push32(0x117717b3u); f_11771de5();
  /* 117717b3 call 0x11771d2c */
  push32(0x117717b8u); f_11771d2c();
  /* 117717b8 call 0x117718d9 */
  push32(0x117717bdu); f_117718d9();
  /* 117717bd inc dword ptr [0x117764b4] */
  { uint32_t _r=(r32((uint32_t)(0x117764b4)))+1; w32((uint32_t)(0x117764b4), (_r)); fl_inc(_r,32); }
  /* 117717c3 jmp 0x11771803 */
  goto L_11771803;
L_117717c5:;
  /* 117717c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117717c7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117717c9 jne 0x117717f7 */
  if (!C.zf) goto L_117717f7;
  /* 117717cb cmp dword ptr [0x117764b4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x117764b4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117717d1 jle 0x11771790 */
  if ((C.zf||C.sf!=C.of)) goto L_11771790;
  /* 117717d3 dec dword ptr [0x117764b4] */
  { uint32_t _r=(r32((uint32_t)(0x117764b4)))-1; w32((uint32_t)(0x117764b4), (_r)); fl_dec(_r,32); }
  /* 117717d9 cmp dword ptr [0x11776504], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11776504))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117717df jne 0x117717e6 */
  if (!C.zf) goto L_117717e6;
  /* 117717e1 call 0x11771917 */
  push32(0x117717e6u); f_11771917();
L_117717e6:;
  /* 117717e6 call 0x11771cd8 */
  push32(0x117717ebu); f_11771cd8();
  /* 117717eb call 0x11771a4b */
  push32(0x117717f0u); f_11771a4b();
  /* 117717f0 call 0x117721a0 */
  push32(0x117717f5u); f_117721a0();
  /* 117717f5 jmp 0x11771803 */
  goto L_11771803;
L_117717f7:;
  /* 117717f7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117717fa jne 0x11771803 */
  if (!C.zf) goto L_11771803;
  /* 117717fc push ecx */
  push32((uint32_t)(ECX));
  /* 117717fd call 0x11771a7c */
  push32(0x11771802u); f_11771a7c();
  /* 11771802 pop ecx */
  ECX = (pop32());
L_11771803:;
  /* 11771803 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771805 pop eax */
  EAX = (pop32());
L_11771806:;
  /* 11771806 ret 0xc */
  ESPCHK(0x11771730u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11771809 (157 bytes, 73 insns) */
void f_11771809(void) {
  FTRACE(0x11771809u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771809 push ebp */
  push32((uint32_t)(EBP));
  /* 1177180a mov ebp, esp */
  EBP = (ESP);
  /* 1177180c push ebx */
  push32((uint32_t)(EBX));
  /* 1177180d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11771810 push esi */
  push32((uint32_t)(ESI));
  /* 11771811 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11771814 push edi */
  push32((uint32_t)(EDI));
  /* 11771815 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11771818 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1177181a jne 0x11771825 */
  if (!C.zf) goto L_11771825;
  /* 1177181c cmp dword ptr [0x117764b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117764b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771823 jmp 0x1177184b */
  goto L_1177184b;
L_11771825:;
  /* 11771825 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771828 je 0x1177182f */
  if (C.zf) goto L_1177182f;
  /* 1177182a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177182d jne 0x11771851 */
  if (!C.zf) goto L_11771851;
L_1177182f:;
  /* 1177182f mov eax, dword ptr [0x11776a3c] */
  EAX = (r32((uint32_t)(0x11776a3c)));
  /* 11771834 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771836 je 0x11771841 */
  if (C.zf) goto L_11771841;
  /* 11771838 push edi */
  push32((uint32_t)(EDI));
  /* 11771839 push esi */
  push32((uint32_t)(ESI));
  /* 1177183a push ebx */
  push32((uint32_t)(EBX));
  /* 1177183b call eax */
  call_ind((uint32_t)(EAX), 0x1177183du);
  /* 1177183d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1177183f je 0x1177184d */
  if (C.zf) goto L_1177184d;
L_11771841:;
  /* 11771841 push edi */
  push32((uint32_t)(EDI));
  /* 11771842 push esi */
  push32((uint32_t)(ESI));
  /* 11771843 push ebx */
  push32((uint32_t)(EBX));
  /* 11771844 call 0x11771730 */
  push32(0x11771849u); f_11771730();
  /* 11771849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_1177184b:;
  /* 1177184b jne 0x11771851 */
  if (!C.zf) goto L_11771851;
L_1177184d:;
  /* 1177184d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1177184f jmp 0x1177189f */
  goto L_1177189f;
L_11771851:;
  /* 11771851 push edi */
  push32((uint32_t)(EDI));
  /* 11771852 push esi */
  push32((uint32_t)(ESI));
  /* 11771853 push ebx */
  push32((uint32_t)(EBX));
  /* 11771854 call 0x11771710 */
  push32(0x11771859u); f_11771710();
  /* 11771859 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177185c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1177185f jne 0x1177186d */
  if (!C.zf) goto L_1177186d;
  /* 11771861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771863 jne 0x1177189c */
  if (!C.zf) goto L_1177189c;
  /* 11771865 push edi */
  push32((uint32_t)(EDI));
  /* 11771866 push eax */
  push32((uint32_t)(EAX));
  /* 11771867 push ebx */
  push32((uint32_t)(EBX));
  /* 11771868 call 0x11771730 */
  push32(0x1177186du); f_11771730();
L_1177186d:;
  /* 1177186d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1177186f je 0x11771876 */
  if (C.zf) goto L_11771876;
  /* 11771871 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771874 jne 0x1177189c */
  if (!C.zf) goto L_1177189c;
L_11771876:;
  /* 11771876 push edi */
  push32((uint32_t)(EDI));
  /* 11771877 push esi */
  push32((uint32_t)(ESI));
  /* 11771878 push ebx */
  push32((uint32_t)(EBX));
  /* 11771879 call 0x11771730 */
  push32(0x1177187eu); f_11771730();
  /* 1177187e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771880 jne 0x11771885 */
  if (!C.zf) goto L_11771885;
  /* 11771882 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11771885:;
  /* 11771885 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771889 je 0x1177189c */
  if (C.zf) goto L_1177189c;
  /* 1177188b mov eax, dword ptr [0x11776a3c] */
  EAX = (r32((uint32_t)(0x11776a3c)));
  /* 11771890 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771892 je 0x1177189c */
  if (C.zf) goto L_1177189c;
  /* 11771894 push edi */
  push32((uint32_t)(EDI));
  /* 11771895 push esi */
  push32((uint32_t)(ESI));
  /* 11771896 push ebx */
  push32((uint32_t)(EBX));
  /* 11771897 call eax */
  call_ind((uint32_t)(EAX), 0x11771899u);
  /* 11771899 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1177189c:;
  /* 1177189c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1177189f:;
  /* 1177189f pop edi */
  EDI = (pop32());
  /* 117718a0 pop esi */
  ESI = (pop32());
  /* 117718a1 pop ebx */
  EBX = (pop32());
  /* 117718a2 pop ebp */
  EBP = (pop32());
  /* 117718a3 ret 0xc */
  ESPCHK(0x11771809u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x117718a6 (48 bytes, 15 insns) */
void f_117718a6(void) {
  FTRACE(0x117718a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117718a6 mov eax, dword ptr [0x117764c0] */
  EAX = (r32((uint32_t)(0x117764c0)));
  /* 117718ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117718ae je 0x117718bd */
  if (C.zf) goto L_117718bd;
  /* 117718b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117718b2 jne 0x117718c2 */
  if (!C.zf) goto L_117718c2;
  /* 117718b4 cmp dword ptr [0x117764c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117764c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117718bb jne 0x117718c2 */
  if (!C.zf) goto L_117718c2;
L_117718bd:;
  /* 117718bd call 0x11772215 */
  push32(0x117718c2u); f_11772215();
L_117718c2:;
  /* 117718c2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 117718c6 call 0x1177224e */
  push32(0x117718cbu); f_1177224e();
  /* 117718cb push 0xff */
  push32((uint32_t)(0xffu));
  /* 117718d0 call dword ptr [0x1177611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1177611c))), 0x117718d6u);
  /* 117718d6 pop ecx */
  ECX = (pop32());
  /* 117718d7 pop ecx */
  ECX = (pop32());
  /* 117718d8 ret  */
  ESPCHK(0x117718a6u, _esp0);
  ESP += 4; return;
}

/* FUN_100018d9 @ 0x117718d9 (45 bytes, 12 insns) */
void f_117718d9(void) {
  FTRACE(0x117718d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117718d9 mov eax, dword ptr [0x11776a34] */
  EAX = (r32((uint32_t)(0x11776a34)));
  /* 117718de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117718e0 je 0x117718e4 */
  if (C.zf) goto L_117718e4;
  /* 117718e2 call eax */
  call_ind((uint32_t)(EAX), 0x117718e4u);
L_117718e4:;
  /* 117718e4 push 0x11776010 */
  push32((uint32_t)(0x11776010u));
  /* 117718e9 push 0x11776008 */
  push32((uint32_t)(0x11776008u));
  /* 117718ee call 0x117719dd */
  push32(0x117718f3u); f_117719dd();
  /* 117718f3 push 0x11776004 */
  push32((uint32_t)(0x11776004u));
  /* 117718f8 push 0x11776000 */
  push32((uint32_t)(0x11776000u));
  /* 117718fd call 0x117719dd */
  push32(0x11771902u); f_117719dd();
  /* 11771902 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771905 ret  */
  ESPCHK(0x117718d9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11771906 (17 bytes, 6 insns) */
void f_11771906(void) {
  FTRACE(0x11771906u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771906 push 0 */
  push32((uint32_t)(0x0u));
  /* 11771908 push 1 */
  push32((uint32_t)(0x1u));
  /* 1177190a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1177190e call 0x11771926 */
  push32(0x11771913u); f_11771926();
  /* 11771913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771916 ret  */
  ESPCHK(0x11771906u, _esp0);
  ESP += 4; return;
}

/* FUN_10001917 @ 0x11771917 (15 bytes, 6 insns) */
void f_11771917(void) {
  FTRACE(0x11771917u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771917 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771919 push 0 */
  push32((uint32_t)(0x0u));
  /* 1177191b push 0 */
  push32((uint32_t)(0x0u));
  /* 1177191d call 0x11771926 */
  push32(0x11771922u); f_11771926();
  /* 11771922 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771925 ret  */
  ESPCHK(0x11771917u, _esp0);
  ESP += 4; return;
}

/* FUN_10001926 @ 0x11771926 (163 bytes, 53 insns) */
void f_11771926(void) {
  FTRACE(0x11771926u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771926 push edi */
  push32((uint32_t)(EDI));
  /* 11771927 call 0x117719cb */
  push32(0x1177192cu); f_117719cb();
  /* 1177192c push 1 */
  push32((uint32_t)(0x1u));
  /* 1177192e pop edi */
  EDI = (pop32());
  /* 1177192f cmp dword ptr [0x11776508], edi */
  { uint32_t _a=(r32((uint32_t)(0x11776508))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771935 jne 0x11771948 */
  if (!C.zf) goto L_11771948;
  /* 11771937 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1177193b call dword ptr [0x11775060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775060))), 0x11771941u);
  /* 11771941 push eax */
  push32((uint32_t)(EAX));
  /* 11771942 call dword ptr [0x1177505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1177505c))), 0x11771948u);
L_11771948:;
  /* 11771948 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177194d push ebx */
  push32((uint32_t)(EBX));
  /* 1177194e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11771952 mov dword ptr [0x11776504], edi */
  w32((uint32_t)(0x11776504), (EDI));
  /* 11771958 mov byte ptr [0x11776500], bl */
  w8((uint32_t)(0x11776500), (BL));
  /* 1177195e jne 0x1177199c */
  if (!C.zf) goto L_1177199c;
  /* 11771960 mov eax, dword ptr [0x11776a30] */
  EAX = (r32((uint32_t)(0x11776a30)));
  /* 11771965 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771967 je 0x1177198b */
  if (C.zf) goto L_1177198b;
  /* 11771969 mov ecx, dword ptr [0x11776a2c] */
  ECX = (r32((uint32_t)(0x11776a2c)));
  /* 1177196f push esi */
  push32((uint32_t)(ESI));
  /* 11771970 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11771973 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771975 jb 0x1177198a */
  if (C.cf) goto L_1177198a;
L_11771977:;
  /* 11771977 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11771979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1177197b je 0x1177197f */
  if (C.zf) goto L_1177197f;
  /* 1177197d call eax */
  call_ind((uint32_t)(EAX), 0x1177197fu);
L_1177197f:;
  /* 1177197f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11771982 cmp esi, dword ptr [0x11776a30] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11776a30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771988 jae 0x11771977 */
  if (!C.cf) goto L_11771977;
L_1177198a:;
  /* 1177198a pop esi */
  ESI = (pop32());
L_1177198b:;
  /* 1177198b push 0x11776018 */
  push32((uint32_t)(0x11776018u));
  /* 11771990 push 0x11776014 */
  push32((uint32_t)(0x11776014u));
  /* 11771995 call 0x117719dd */
  push32(0x1177199au); f_117719dd();
  /* 1177199a pop ecx */
  ECX = (pop32());
  /* 1177199b pop ecx */
  ECX = (pop32());
L_1177199c:;
  /* 1177199c push 0x11776020 */
  push32((uint32_t)(0x11776020u));
  /* 117719a1 push 0x1177601c */
  push32((uint32_t)(0x1177601cu));
  /* 117719a6 call 0x117719dd */
  push32(0x117719abu); f_117719dd();
  /* 117719ab pop ecx */
  ECX = (pop32());
  /* 117719ac pop ecx */
  ECX = (pop32());
  /* 117719ad test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117719af pop ebx */
  EBX = (pop32());
  /* 117719b0 je 0x117719b9 */
  if (C.zf) goto L_117719b9;
  /* 117719b2 call 0x117719d4 */
  push32(0x117719b7u); f_117719d4();
  /* 117719b7 pop edi */
  EDI = (pop32());
  /* 117719b8 ret  */
  ESPCHK(0x11771926u, _esp0);
  ESP += 4; return;
L_117719b9:;
  /* 117719b9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 117719bd mov dword ptr [0x11776508], edi */
  w32((uint32_t)(0x11776508), (EDI));
  /* 117719c3 call dword ptr [0x11775058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775058))), 0x117719c9u);
  /* 117719c9 pop edi */
  EDI = (pop32());
  /* 117719ca ret  */
  ESPCHK(0x11771926u, _esp0);
  ESP += 4; return;
}

/* FUN_100019cb @ 0x117719cb (9 bytes, 4 insns) */
void f_117719cb(void) {
  FTRACE(0x117719cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117719cb push 0xd */
  push32((uint32_t)(0xdu));
  /* 117719cd call 0x11772436 */
  push32(0x117719d2u); f_11772436();
  /* 117719d2 pop ecx */
  ECX = (pop32());
  /* 117719d3 ret  */
  ESPCHK(0x117719cbu, _esp0);
  ESP += 4; return;
}

/* FUN_100019d4 @ 0x117719d4 (9 bytes, 4 insns) */
void f_117719d4(void) {
  FTRACE(0x117719d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117719d4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117719d6 call 0x11772497 */
  push32(0x117719dbu); f_11772497();
  /* 117719db pop ecx */
  ECX = (pop32());
  /* 117719dc ret  */
  ESPCHK(0x117719d4u, _esp0);
  ESP += 4; return;
}

/* FUN_100019dd @ 0x117719dd (26 bytes, 12 insns) */
void f_117719dd(void) {
  FTRACE(0x117719ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117719dd push esi */
  push32((uint32_t)(ESI));
  /* 117719de mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_117719e2:;
  /* 117719e2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117719e6 jae 0x117719f5 */
  if (!C.cf) goto L_117719f5;
  /* 117719e8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117719ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117719ec je 0x117719f0 */
  if (C.zf) goto L_117719f0;
  /* 117719ee call eax */
  call_ind((uint32_t)(EAX), 0x117719f0u);
L_117719f0:;
  /* 117719f0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117719f3 jmp 0x117719e2 */
  goto L_117719e2;
L_117719f5:;
  /* 117719f5 pop esi */
  ESI = (pop32());
  /* 117719f6 ret  */
  ESPCHK(0x117719ddu, _esp0);
  ESP += 4; return;
}

/* FUN_100019f7 @ 0x117719f7 (84 bytes, 32 insns) */
void f_117719f7(void) {
  FTRACE(0x117719f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117719f7 push esi */
  push32((uint32_t)(ESI));
  /* 117719f8 call 0x117723a1 */
  push32(0x117719fdu); f_117723a1();
  /* 117719fd call dword ptr [0x1177506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1177506c))), 0x11771a03u);
  /* 11771a03 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771a06 mov dword ptr [0x11776120], eax */
  w32((uint32_t)(0x11776120), (EAX));
  /* 11771a0b je 0x11771a47 */
  if (C.zf) goto L_11771a47;
  /* 11771a0d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11771a0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11771a11 call 0x117724ac */
  push32(0x11771a16u); f_117724ac();
  /* 11771a16 mov esi, eax */
  ESI = (EAX);
  /* 11771a18 pop ecx */
  ECX = (pop32());
  /* 11771a19 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11771a1b pop ecx */
  ECX = (pop32());
  /* 11771a1c je 0x11771a47 */
  if (C.zf) goto L_11771a47;
  /* 11771a1e push esi */
  push32((uint32_t)(ESI));
  /* 11771a1f push dword ptr [0x11776120] */
  push32((uint32_t)(r32((uint32_t)(0x11776120))));
  /* 11771a25 call dword ptr [0x11775068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775068))), 0x11771a2bu);
  /* 11771a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771a2d je 0x11771a47 */
  if (C.zf) goto L_11771a47;
  /* 11771a2f push esi */
  push32((uint32_t)(ESI));
  /* 11771a30 call 0x11771a69 */
  push32(0x11771a35u); f_11771a69();
  /* 11771a35 pop ecx */
  ECX = (pop32());
  /* 11771a36 call dword ptr [0x11775064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775064))), 0x11771a3cu);
  /* 11771a3c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11771a40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11771a42 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11771a44 pop eax */
  EAX = (pop32());
  /* 11771a45 pop esi */
  ESI = (pop32());
  /* 11771a46 ret  */
  ESPCHK(0x117719f7u, _esp0);
  ESP += 4; return;
L_11771a47:;
  /* 11771a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11771a49 pop esi */
  ESI = (pop32());
  /* 11771a4a ret  */
  ESPCHK(0x117719f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a4b @ 0x11771a4b (30 bytes, 8 insns) */
void f_11771a4b(void) {
  FTRACE(0x11771a4bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771a4b call 0x117723ca */
  push32(0x11771a50u); f_117723ca();
  /* 11771a50 mov eax, dword ptr [0x11776120] */
  EAX = (r32((uint32_t)(0x11776120)));
  /* 11771a55 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771a58 je 0x11771a68 */
  if (C.zf) goto L_11771a68;
  /* 11771a5a push eax */
  push32((uint32_t)(EAX));
  /* 11771a5b call dword ptr [0x11775070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775070))), 0x11771a61u);
  /* 11771a61 or dword ptr [0x11776120], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11776120)))|(0xffffffffu); w32((uint32_t)(0x11776120), (_r)); fl_logic(_r,32); }
L_11771a68:;
  /* 11771a68 ret  */
  ESPCHK(0x11771a4bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001a69 @ 0x11771a69 (19 bytes, 4 insns) */
void f_11771a69(void) {
  FTRACE(0x11771a69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771a69 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11771a6d mov dword ptr [eax + 0x50], 0x117762a0 */
  w32((uint32_t)(EAX + 0x50), (0x117762a0u));
  /* 11771a74 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11771a7b ret  */
  ESPCHK(0x11771a69u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a7c @ 0x11771a7c (160 bytes, 62 insns) */
void f_11771a7c(void) {
  FTRACE(0x11771a7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771a7c mov eax, dword ptr [0x11776120] */
  EAX = (r32((uint32_t)(0x11776120)));
  /* 11771a81 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771a84 je 0x11771b1b */
  if (C.zf) goto L_11771b1b;
  /* 11771a8a push esi */
  push32((uint32_t)(ESI));
  /* 11771a8b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11771a8f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11771a91 jne 0x11771aa0 */
  if (!C.zf) goto L_11771aa0;
  /* 11771a93 push eax */
  push32((uint32_t)(EAX));
  /* 11771a94 call dword ptr [0x11775074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775074))), 0x11771a9au);
  /* 11771a9a mov esi, eax */
  ESI = (EAX);
  /* 11771a9c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11771a9e je 0x11771b0c */
  if (C.zf) goto L_11771b0c;
L_11771aa0:;
  /* 11771aa0 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11771aa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771aa5 je 0x11771aae */
  if (C.zf) goto L_11771aae;
  /* 11771aa7 push eax */
  push32((uint32_t)(EAX));
  /* 11771aa8 call 0x11772539 */
  push32(0x11771aadu); f_11772539();
  /* 11771aad pop ecx */
  ECX = (pop32());
L_11771aae:;
  /* 11771aae mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11771ab1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771ab3 je 0x11771abc */
  if (C.zf) goto L_11771abc;
  /* 11771ab5 push eax */
  push32((uint32_t)(EAX));
  /* 11771ab6 call 0x11772539 */
  push32(0x11771abbu); f_11772539();
  /* 11771abb pop ecx */
  ECX = (pop32());
L_11771abc:;
  /* 11771abc mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11771abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771ac1 je 0x11771aca */
  if (C.zf) goto L_11771aca;
  /* 11771ac3 push eax */
  push32((uint32_t)(EAX));
  /* 11771ac4 call 0x11772539 */
  push32(0x11771ac9u); f_11772539();
  /* 11771ac9 pop ecx */
  ECX = (pop32());
L_11771aca:;
  /* 11771aca mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11771acd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771acf je 0x11771ad8 */
  if (C.zf) goto L_11771ad8;
  /* 11771ad1 push eax */
  push32((uint32_t)(EAX));
  /* 11771ad2 call 0x11772539 */
  push32(0x11771ad7u); f_11772539();
  /* 11771ad7 pop ecx */
  ECX = (pop32());
L_11771ad8:;
  /* 11771ad8 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11771adb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771add je 0x11771ae6 */
  if (C.zf) goto L_11771ae6;
  /* 11771adf push eax */
  push32((uint32_t)(EAX));
  /* 11771ae0 call 0x11772539 */
  push32(0x11771ae5u); f_11772539();
  /* 11771ae5 pop ecx */
  ECX = (pop32());
L_11771ae6:;
  /* 11771ae6 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11771ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771aeb je 0x11771af4 */
  if (C.zf) goto L_11771af4;
  /* 11771aed push eax */
  push32((uint32_t)(EAX));
  /* 11771aee call 0x11772539 */
  push32(0x11771af3u); f_11772539();
  /* 11771af3 pop ecx */
  ECX = (pop32());
L_11771af4:;
  /* 11771af4 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11771af7 cmp eax, 0x117762a0 */
  { uint32_t _a=(EAX),_b=(0x117762a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771afc je 0x11771b05 */
  if (C.zf) goto L_11771b05;
  /* 11771afe push eax */
  push32((uint32_t)(EAX));
  /* 11771aff call 0x11772539 */
  push32(0x11771b04u); f_11772539();
  /* 11771b04 pop ecx */
  ECX = (pop32());
L_11771b05:;
  /* 11771b05 push esi */
  push32((uint32_t)(ESI));
  /* 11771b06 call 0x11772539 */
  push32(0x11771b0bu); f_11772539();
  /* 11771b0b pop ecx */
  ECX = (pop32());
L_11771b0c:;
  /* 11771b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11771b0e push dword ptr [0x11776120] */
  push32((uint32_t)(r32((uint32_t)(0x11776120))));
  /* 11771b14 call dword ptr [0x11775068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775068))), 0x11771b1au);
  /* 11771b1a pop esi */
  ESI = (pop32());
L_11771b1b:;
  /* 11771b1b ret  */
  ESPCHK(0x11771a7cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001b1c @ 0x11771b1c (444 bytes, 150 insns) */
void f_11771b1c(void) {
  FTRACE(0x11771b1cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771b1c push ebp */
  push32((uint32_t)(EBP));
  /* 11771b1d mov ebp, esp */
  EBP = (ESP);
  /* 11771b1f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11771b22 push ebx */
  push32((uint32_t)(EBX));
  /* 11771b23 push esi */
  push32((uint32_t)(ESI));
  /* 11771b24 push edi */
  push32((uint32_t)(EDI));
  /* 11771b25 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11771b2a call 0x11772581 */
  push32(0x11771b2fu); f_11772581();
  /* 11771b2f mov esi, eax */
  ESI = (EAX);
  /* 11771b31 pop ecx */
  ECX = (pop32());
  /* 11771b32 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11771b34 jne 0x11771b3e */
  if (!C.zf) goto L_11771b3e;
  /* 11771b36 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11771b38 call 0x117718a6 */
  push32(0x11771b3du); f_117718a6();
  /* 11771b3d pop ecx */
  ECX = (pop32());
L_11771b3e:;
  /* 11771b3e mov dword ptr [0x11776920], esi */
  w32((uint32_t)(0x11776920), (ESI));
  /* 11771b44 mov dword ptr [0x11776a20], 0x20 */
  w32((uint32_t)(0x11776a20), (0x20u));
  /* 11771b4e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11771b54:;
  /* 11771b54 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771b56 jae 0x11771b76 */
  if (!C.cf) goto L_11771b76;
  /* 11771b58 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11771b5c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11771b5f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11771b63 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11771b67 mov eax, dword ptr [0x11776920] */
  EAX = (r32((uint32_t)(0x11776920)));
  /* 11771b6c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11771b6f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11771b74 jmp 0x11771b54 */
  goto L_11771b54;
L_11771b76:;
  /* 11771b76 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11771b79 push eax */
  push32((uint32_t)(EAX));
  /* 11771b7a call dword ptr [0x1177508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1177508c))), 0x11771b80u);
  /* 11771b80 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11771b85 je 0x11771c5c */
  if (C.zf) goto L_11771c5c;
  /* 11771b8b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11771b8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771b90 je 0x11771c5c */
  if (C.zf) goto L_11771c5c;
  /* 11771b96 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11771b98 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11771b9b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11771b9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11771ba1 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11771ba6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771ba8 jl 0x11771bac */
  if ((C.sf!=C.of)) goto L_11771bac;
  /* 11771baa mov edi, eax */
  EDI = (EAX);
L_11771bac:;
  /* 11771bac cmp dword ptr [0x11776a20], edi */
  { uint32_t _a=(r32((uint32_t)(0x11776a20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771bb2 jge 0x11771c0a */
  if ((C.sf==C.of)) goto L_11771c0a;
  /* 11771bb4 mov esi, 0x11776924 */
  ESI = (0x11776924u);
L_11771bb9:;
  /* 11771bb9 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11771bbe call 0x11772581 */
  push32(0x11771bc3u); f_11772581();
  /* 11771bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771bc5 pop ecx */
  ECX = (pop32());
  /* 11771bc6 je 0x11771c04 */
  if (C.zf) goto L_11771c04;
  /* 11771bc8 add dword ptr [0x11776a20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11776a20))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11776a20), (_r)); fl_add(_a,_b,_r,32); }
  /* 11771bcf mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11771bd1 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11771bd7:;
  /* 11771bd7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771bd9 jae 0x11771bf7 */
  if (!C.cf) goto L_11771bf7;
  /* 11771bdb and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11771bdf or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11771be2 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11771be6 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11771bea mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11771bec add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11771bef add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11771bf5 jmp 0x11771bd7 */
  goto L_11771bd7;
L_11771bf7:;
  /* 11771bf7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11771bfa cmp dword ptr [0x11776a20], edi */
  { uint32_t _a=(r32((uint32_t)(0x11776a20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771c00 jl 0x11771bb9 */
  if ((C.sf!=C.of)) goto L_11771bb9;
  /* 11771c02 jmp 0x11771c0a */
  goto L_11771c0a;
L_11771c04:;
  /* 11771c04 mov edi, dword ptr [0x11776a20] */
  EDI = (r32((uint32_t)(0x11776a20)));
L_11771c0a:;
  /* 11771c0a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11771c0c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11771c0e jle 0x11771c5c */
  if ((C.zf||C.sf!=C.of)) goto L_11771c5c;
L_11771c10:;
  /* 11771c10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11771c13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11771c15 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771c18 je 0x11771c52 */
  if (C.zf) goto L_11771c52;
  /* 11771c1a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11771c1c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11771c1e je 0x11771c52 */
  if (C.zf) goto L_11771c52;
  /* 11771c20 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11771c22 jne 0x11771c2f */
  if (!C.zf) goto L_11771c2f;
  /* 11771c24 push ecx */
  push32((uint32_t)(ECX));
  /* 11771c25 call dword ptr [0x11775088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775088))), 0x11771c2bu);
  /* 11771c2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771c2d je 0x11771c52 */
  if (C.zf) goto L_11771c52;
L_11771c2f:;
  /* 11771c2f mov ecx, esi */
  ECX = (ESI);
  /* 11771c31 mov eax, esi */
  EAX = (ESI);
  /* 11771c33 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11771c36 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11771c39 mov ecx, dword ptr [ecx*4 + 0x11776920] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11776920)));
  /* 11771c40 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11771c43 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11771c46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11771c49 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11771c4b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11771c4d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11771c4f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11771c52:;
  /* 11771c52 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11771c56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11771c57 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11771c58 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771c5a jl 0x11771c10 */
  if ((C.sf!=C.of)) goto L_11771c10;
L_11771c5c:;
  /* 11771c5c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11771c5e:;
  /* 11771c5e mov ecx, dword ptr [0x11776920] */
  ECX = (r32((uint32_t)(0x11776920)));
  /* 11771c64 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11771c67 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771c6b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11771c6e jne 0x11771cbd */
  if (!C.zf) goto L_11771cbd;
  /* 11771c70 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11771c72 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11771c76 jne 0x11771c7d */
  if (!C.zf) goto L_11771c7d;
  /* 11771c78 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11771c7a pop eax */
  EAX = (pop32());
  /* 11771c7b jmp 0x11771c87 */
  goto L_11771c87;
L_11771c7d:;
  /* 11771c7d mov eax, ebx */
  EAX = (EBX);
  /* 11771c7f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11771c80 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11771c82 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11771c84 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11771c87:;
  /* 11771c87 push eax */
  push32((uint32_t)(EAX));
  /* 11771c88 call dword ptr [0x11775084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775084))), 0x11771c8eu);
  /* 11771c8e mov edi, eax */
  EDI = (EAX);
  /* 11771c90 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771c93 je 0x11771cac */
  if (C.zf) goto L_11771cac;
  /* 11771c95 push edi */
  push32((uint32_t)(EDI));
  /* 11771c96 call dword ptr [0x11775088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775088))), 0x11771c9cu);
  /* 11771c9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771c9e je 0x11771cac */
  if (C.zf) goto L_11771cac;
  /* 11771ca0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11771ca5 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11771ca7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771caa jne 0x11771cb2 */
  if (!C.zf) goto L_11771cb2;
L_11771cac:;
  /* 11771cac or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11771cb0 jmp 0x11771cc1 */
  goto L_11771cc1;
L_11771cb2:;
  /* 11771cb2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771cb5 jne 0x11771cc1 */
  if (!C.zf) goto L_11771cc1;
  /* 11771cb7 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11771cbb jmp 0x11771cc1 */
  goto L_11771cc1;
L_11771cbd:;
  /* 11771cbd or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11771cc1:;
  /* 11771cc1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11771cc2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771cc5 jl 0x11771c5e */
  if ((C.sf!=C.of)) goto L_11771c5e;
  /* 11771cc7 push dword ptr [0x11776a20] */
  push32((uint32_t)(r32((uint32_t)(0x11776a20))));
  /* 11771ccd call dword ptr [0x11775080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775080))), 0x11771cd3u);
  /* 11771cd3 pop edi */
  EDI = (pop32());
  /* 11771cd4 pop esi */
  ESI = (pop32());
  /* 11771cd5 pop ebx */
  EBX = (pop32());
  /* 11771cd6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11771cd7 ret  */
  ESPCHK(0x11771b1cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001cd8 @ 0x11771cd8 (84 bytes, 33 insns) */
void f_11771cd8(void) {
  FTRACE(0x11771cd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771cd8 push ebx */
  push32((uint32_t)(EBX));
  /* 11771cd9 push esi */
  push32((uint32_t)(ESI));
  /* 11771cda push edi */
  push32((uint32_t)(EDI));
  /* 11771cdb mov esi, 0x11776920 */
  ESI = (0x11776920u);
L_11771ce0:;
  /* 11771ce0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11771ce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11771ce4 je 0x11771d1d */
  if (C.zf) goto L_11771d1d;
  /* 11771ce6 mov edi, eax */
  EDI = (EAX);
  /* 11771ce8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11771ced cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771cef jae 0x11771d12 */
  if (!C.cf) goto L_11771d12;
  /* 11771cf1 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11771cf4:;
  /* 11771cf4 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771cf8 je 0x11771d01 */
  if (C.zf) goto L_11771d01;
  /* 11771cfa push ebx */
  push32((uint32_t)(EBX));
  /* 11771cfb call dword ptr [0x11775090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775090))), 0x11771d01u);
L_11771d01:;
  /* 11771d01 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11771d03 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11771d06 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11771d0b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11771d0e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771d10 jb 0x11771cf4 */
  if (C.cf) goto L_11771cf4;
L_11771d12:;
  /* 11771d12 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11771d14 call 0x11772539 */
  push32(0x11771d19u); f_11772539();
  /* 11771d19 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11771d1c pop ecx */
  ECX = (pop32());
L_11771d1d:;
  /* 11771d1d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11771d20 cmp esi, 0x11776a20 */
  { uint32_t _a=(ESI),_b=(0x11776a20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771d26 jl 0x11771ce0 */
  if ((C.sf!=C.of)) goto L_11771ce0;
  /* 11771d28 pop edi */
  EDI = (pop32());
  /* 11771d29 pop esi */
  ESI = (pop32());
  /* 11771d2a pop ebx */
  EBX = (pop32());
  /* 11771d2b ret  */
  ESPCHK(0x11771cd8u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d2c @ 0x11771d2c (185 bytes, 71 insns) */
void f_11771d2c(void) {
  FTRACE(0x11771d2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771d2c push ebx */
  push32((uint32_t)(EBX));
  /* 11771d2d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11771d2f cmp dword ptr [0x11776a28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11776a28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771d35 push esi */
  push32((uint32_t)(ESI));
  /* 11771d36 push edi */
  push32((uint32_t)(EDI));
  /* 11771d37 jne 0x11771d3e */
  if (!C.zf) goto L_11771d3e;
  /* 11771d39 call 0x11772b53 */
  push32(0x11771d3eu); f_11772b53();
L_11771d3e:;
  /* 11771d3e mov esi, dword ptr [0x117764b8] */
  ESI = (r32((uint32_t)(0x117764b8)));
  /* 11771d44 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11771d46:;
  /* 11771d46 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11771d48 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771d4a je 0x11771d5e */
  if (C.zf) goto L_11771d5e;
  /* 11771d4c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771d4e je 0x11771d51 */
  if (C.zf) goto L_11771d51;
  /* 11771d50 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11771d51:;
  /* 11771d51 push esi */
  push32((uint32_t)(ESI));
  /* 11771d52 call 0x11772700 */
  push32(0x11771d57u); f_11772700();
  /* 11771d57 pop ecx */
  ECX = (pop32());
  /* 11771d58 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11771d5c jmp 0x11771d46 */
  goto L_11771d46;
L_11771d5e:;
  /* 11771d5e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11771d65 push eax */
  push32((uint32_t)(EAX));
  /* 11771d66 call 0x11772581 */
  push32(0x11771d6bu); f_11772581();
  /* 11771d6b mov esi, eax */
  ESI = (EAX);
  /* 11771d6d pop ecx */
  ECX = (pop32());
  /* 11771d6e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771d70 mov dword ptr [0x117764e8], esi */
  w32((uint32_t)(0x117764e8), (ESI));
  /* 11771d76 jne 0x11771d80 */
  if (!C.zf) goto L_11771d80;
  /* 11771d78 push 9 */
  push32((uint32_t)(0x9u));
  /* 11771d7a call 0x117718a6 */
  push32(0x11771d7fu); f_117718a6();
  /* 11771d7f pop ecx */
  ECX = (pop32());
L_11771d80:;
  /* 11771d80 mov edi, dword ptr [0x117764b8] */
  EDI = (r32((uint32_t)(0x117764b8)));
  /* 11771d86 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771d88 je 0x11771dc3 */
  if (C.zf) goto L_11771dc3;
  /* 11771d8a push ebp */
  push32((uint32_t)(EBP));
L_11771d8b:;
  /* 11771d8b push edi */
  push32((uint32_t)(EDI));
  /* 11771d8c call 0x11772700 */
  push32(0x11771d91u); f_11772700();
  /* 11771d91 mov ebp, eax */
  EBP = (EAX);
  /* 11771d93 pop ecx */
  ECX = (pop32());
  /* 11771d94 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11771d95 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771d98 je 0x11771dbc */
  if (C.zf) goto L_11771dbc;
  /* 11771d9a push ebp */
  push32((uint32_t)(EBP));
  /* 11771d9b call 0x11772581 */
  push32(0x11771da0u); f_11772581();
  /* 11771da0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771da2 pop ecx */
  ECX = (pop32());
  /* 11771da3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11771da5 jne 0x11771daf */
  if (!C.zf) goto L_11771daf;
  /* 11771da7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11771da9 call 0x117718a6 */
  push32(0x11771daeu); f_117718a6();
  /* 11771dae pop ecx */
  ECX = (pop32());
L_11771daf:;
  /* 11771daf push edi */
  push32((uint32_t)(EDI));
  /* 11771db0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11771db2 call 0x11772610 */
  push32(0x11771db7u); f_11772610();
  /* 11771db7 pop ecx */
  ECX = (pop32());
  /* 11771db8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11771dbb pop ecx */
  ECX = (pop32());
L_11771dbc:;
  /* 11771dbc add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11771dbe cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771dc0 jne 0x11771d8b */
  if (!C.zf) goto L_11771d8b;
  /* 11771dc2 pop ebp */
  EBP = (pop32());
L_11771dc3:;
  /* 11771dc3 push dword ptr [0x117764b8] */
  push32((uint32_t)(r32((uint32_t)(0x117764b8))));
  /* 11771dc9 call 0x11772539 */
  push32(0x11771dceu); f_11772539();
  /* 11771dce pop ecx */
  ECX = (pop32());
  /* 11771dcf mov dword ptr [0x117764b8], ebx */
  w32((uint32_t)(0x117764b8), (EBX));
  /* 11771dd5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11771dd7 pop edi */
  EDI = (pop32());
  /* 11771dd8 pop esi */
  ESI = (pop32());
  /* 11771dd9 mov dword ptr [0x11776a24], 1 */
  w32((uint32_t)(0x11776a24), (0x1u));
  /* 11771de3 pop ebx */
  EBX = (pop32());
  /* 11771de4 ret  */
  ESPCHK(0x11771d2cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001de5 @ 0x11771de5 (153 bytes, 62 insns) */
void f_11771de5(void) {
  FTRACE(0x11771de5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771de5 push ebp */
  push32((uint32_t)(EBP));
  /* 11771de6 mov ebp, esp */
  EBP = (ESP);
  /* 11771de8 push ecx */
  push32((uint32_t)(ECX));
  /* 11771de9 push ecx */
  push32((uint32_t)(ECX));
  /* 11771dea push ebx */
  push32((uint32_t)(EBX));
  /* 11771deb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11771ded cmp dword ptr [0x11776a28], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11776a28))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771df3 push esi */
  push32((uint32_t)(ESI));
  /* 11771df4 push edi */
  push32((uint32_t)(EDI));
  /* 11771df5 jne 0x11771dfc */
  if (!C.zf) goto L_11771dfc;
  /* 11771df7 call 0x11772b53 */
  push32(0x11771dfcu); f_11772b53();
L_11771dfc:;
  /* 11771dfc mov esi, 0x1177650c */
  ESI = (0x1177650cu);
  /* 11771e01 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11771e06 push esi */
  push32((uint32_t)(ESI));
  /* 11771e07 push ebx */
  push32((uint32_t)(EBX));
  /* 11771e08 call dword ptr [0x11775094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775094))), 0x11771e0eu);
  /* 11771e0e mov eax, dword ptr [0x11776a38] */
  EAX = (r32((uint32_t)(0x11776a38)));
  /* 11771e13 mov dword ptr [0x117764f8], esi */
  w32((uint32_t)(0x117764f8), (ESI));
  /* 11771e19 mov edi, esi */
  EDI = (ESI);
  /* 11771e1b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771e1d je 0x11771e21 */
  if (C.zf) goto L_11771e21;
  /* 11771e1f mov edi, eax */
  EDI = (EAX);
L_11771e21:;
  /* 11771e21 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11771e24 push eax */
  push32((uint32_t)(EAX));
  /* 11771e25 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11771e28 push eax */
  push32((uint32_t)(EAX));
  /* 11771e29 push ebx */
  push32((uint32_t)(EBX));
  /* 11771e2a push ebx */
  push32((uint32_t)(EBX));
  /* 11771e2b push edi */
  push32((uint32_t)(EDI));
  /* 11771e2c call 0x11771e7e */
  push32(0x11771e31u); f_11771e7e();
  /* 11771e31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11771e34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11771e37 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11771e3a push eax */
  push32((uint32_t)(EAX));
  /* 11771e3b call 0x11772581 */
  push32(0x11771e40u); f_11772581();
  /* 11771e40 mov esi, eax */
  ESI = (EAX);
  /* 11771e42 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771e45 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771e47 jne 0x11771e51 */
  if (!C.zf) goto L_11771e51;
  /* 11771e49 push 8 */
  push32((uint32_t)(0x8u));
  /* 11771e4b call 0x117718a6 */
  push32(0x11771e50u); f_117718a6();
  /* 11771e50 pop ecx */
  ECX = (pop32());
L_11771e51:;
  /* 11771e51 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11771e54 push eax */
  push32((uint32_t)(EAX));
  /* 11771e55 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11771e58 push eax */
  push32((uint32_t)(EAX));
  /* 11771e59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11771e5c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11771e5f push eax */
  push32((uint32_t)(EAX));
  /* 11771e60 push esi */
  push32((uint32_t)(ESI));
  /* 11771e61 push edi */
  push32((uint32_t)(EDI));
  /* 11771e62 call 0x11771e7e */
  push32(0x11771e67u); f_11771e7e();
  /* 11771e67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11771e6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11771e6d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11771e6e mov dword ptr [0x117764e0], esi */
  w32((uint32_t)(0x117764e0), (ESI));
  /* 11771e74 pop edi */
  EDI = (pop32());
  /* 11771e75 pop esi */
  ESI = (pop32());
  /* 11771e76 mov dword ptr [0x117764dc], eax */
  w32((uint32_t)(0x117764dc), (EAX));
  /* 11771e7b pop ebx */
  EBX = (pop32());
  /* 11771e7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11771e7d ret  */
  ESPCHK(0x11771de5u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e7e @ 0x11771e7e (436 bytes, 187 insns) */
void f_11771e7e(void) {
  FTRACE(0x11771e7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11771e7e push ebp */
  push32((uint32_t)(EBP));
  /* 11771e7f mov ebp, esp */
  EBP = (ESP);
  /* 11771e81 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11771e84 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11771e87 push ebx */
  push32((uint32_t)(EBX));
  /* 11771e88 push esi */
  push32((uint32_t)(ESI));
  /* 11771e89 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11771e8c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11771e8f push edi */
  push32((uint32_t)(EDI));
  /* 11771e90 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11771e93 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11771e99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11771e9c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11771e9e je 0x11771ea8 */
  if (C.zf) goto L_11771ea8;
  /* 11771ea0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11771ea2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11771ea5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11771ea8:;
  /* 11771ea8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771eab jne 0x11771ef1 */
  if (!C.zf) goto L_11771ef1;
L_11771ead:;
  /* 11771ead mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11771eb0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11771eb1 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771eb4 je 0x11771edf */
  if (C.zf) goto L_11771edf;
  /* 11771eb6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11771eb8 je 0x11771edf */
  if (C.zf) goto L_11771edf;
  /* 11771eba movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11771ebd test byte ptr [edx + 0x11776801], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11776801)))&(0x4u); fl_logic(_r,8); }
  /* 11771ec4 je 0x11771ed2 */
  if (C.zf) goto L_11771ed2;
  /* 11771ec6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11771ec8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11771eca je 0x11771ed2 */
  if (C.zf) goto L_11771ed2;
  /* 11771ecc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11771ece mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11771ed0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11771ed1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11771ed2:;
  /* 11771ed2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11771ed4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11771ed6 je 0x11771ead */
  if (C.zf) goto L_11771ead;
  /* 11771ed8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11771eda mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11771edc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11771edd jmp 0x11771ead */
  goto L_11771ead;
L_11771edf:;
  /* 11771edf inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11771ee1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11771ee3 je 0x11771ee9 */
  if (C.zf) goto L_11771ee9;
  /* 11771ee5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11771ee8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11771ee9:;
  /* 11771ee9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771eec jne 0x11771f34 */
  if (!C.zf) goto L_11771f34;
  /* 11771eee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11771eef jmp 0x11771f34 */
  goto L_11771f34;
L_11771ef1:;
  /* 11771ef1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11771ef3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11771ef5 je 0x11771efc */
  if (C.zf) goto L_11771efc;
  /* 11771ef7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11771ef9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11771efb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11771efc:;
  /* 11771efc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11771efe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11771eff movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11771f02 test byte ptr [ebx + 0x11776801], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11776801)))&(0x4u); fl_logic(_r,8); }
  /* 11771f09 je 0x11771f17 */
  if (C.zf) goto L_11771f17;
  /* 11771f0b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11771f0d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11771f0f je 0x11771f16 */
  if (C.zf) goto L_11771f16;
  /* 11771f11 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11771f13 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11771f15 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11771f16:;
  /* 11771f16 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11771f17:;
  /* 11771f17 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771f1a je 0x11771f25 */
  if (C.zf) goto L_11771f25;
  /* 11771f1c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11771f1e je 0x11771f29 */
  if (C.zf) goto L_11771f29;
  /* 11771f20 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771f23 jne 0x11771ef1 */
  if (!C.zf) goto L_11771ef1;
L_11771f25:;
  /* 11771f25 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11771f27 jne 0x11771f2c */
  if (!C.zf) goto L_11771f2c;
L_11771f29:;
  /* 11771f29 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11771f2a jmp 0x11771f34 */
  goto L_11771f34;
L_11771f2c:;
  /* 11771f2c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11771f2e je 0x11771f34 */
  if (C.zf) goto L_11771f34;
  /* 11771f30 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11771f34:;
  /* 11771f34 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11771f38:;
  /* 11771f38 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771f3b je 0x11772021 */
  if (C.zf) goto L_11772021;
L_11771f41:;
  /* 11771f41 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11771f43 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771f46 je 0x11771f4d */
  if (C.zf) goto L_11771f4d;
  /* 11771f48 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771f4b jne 0x11771f50 */
  if (!C.zf) goto L_11771f50;
L_11771f4d:;
  /* 11771f4d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11771f4e jmp 0x11771f41 */
  goto L_11771f41;
L_11771f50:;
  /* 11771f50 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771f53 je 0x11772021 */
  if (C.zf) goto L_11772021;
  /* 11771f59 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11771f5b je 0x11771f65 */
  if (C.zf) goto L_11771f65;
  /* 11771f5d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11771f5f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11771f62 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11771f65:;
  /* 11771f65 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11771f68 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11771f6a:;
  /* 11771f6a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11771f71 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11771f73:;
  /* 11771f73 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771f76 jne 0x11771f7c */
  if (!C.zf) goto L_11771f7c;
  /* 11771f78 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11771f79 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11771f7a jmp 0x11771f73 */
  goto L_11771f73;
L_11771f7c:;
  /* 11771f7c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771f7f jne 0x11771fad */
  if (!C.zf) goto L_11771fad;
  /* 11771f81 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11771f84 jne 0x11771fab */
  if (!C.zf) goto L_11771fab;
  /* 11771f86 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11771f88 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771f8b je 0x11771f9a */
  if (C.zf) goto L_11771f9a;
  /* 11771f8d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771f91 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11771f94 jne 0x11771f9a */
  if (!C.zf) goto L_11771f9a;
  /* 11771f96 mov eax, edx */
  EAX = (EDX);
  /* 11771f98 jmp 0x11771f9d */
  goto L_11771f9d;
L_11771f9a:;
  /* 11771f9a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11771f9d:;
  /* 11771f9d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11771fa0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11771fa2 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771fa5 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11771fa8 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11771fab:;
  /* 11771fab shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11771fad:;
  /* 11771fad mov edx, ebx */
  EDX = (EBX);
  /* 11771faf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11771fb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11771fb2 je 0x11771fc2 */
  if (C.zf) goto L_11771fc2;
  /* 11771fb4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11771fb5:;
  /* 11771fb5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11771fb7 je 0x11771fbd */
  if (C.zf) goto L_11771fbd;
  /* 11771fb9 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11771fbc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11771fbd:;
  /* 11771fbd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11771fbf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11771fc0 jne 0x11771fb5 */
  if (!C.zf) goto L_11771fb5;
L_11771fc2:;
  /* 11771fc2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11771fc4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11771fc6 je 0x11772012 */
  if (C.zf) goto L_11772012;
  /* 11771fc8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771fcc jne 0x11771fd8 */
  if (!C.zf) goto L_11771fd8;
  /* 11771fce cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771fd1 je 0x11772012 */
  if (C.zf) goto L_11772012;
  /* 11771fd3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11771fd6 je 0x11772012 */
  if (C.zf) goto L_11772012;
L_11771fd8:;
  /* 11771fd8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11771fdc je 0x1177200c */
  if (C.zf) goto L_1177200c;
  /* 11771fde test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11771fe0 je 0x11771ffb */
  if (C.zf) goto L_11771ffb;
  /* 11771fe2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11771fe5 test byte ptr [ebx + 0x11776801], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11776801)))&(0x4u); fl_logic(_r,8); }
  /* 11771fec je 0x11771ff4 */
  if (C.zf) goto L_11771ff4;
  /* 11771fee mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11771ff0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11771ff1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11771ff2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11771ff4:;
  /* 11771ff4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11771ff6 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11771ff8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11771ff9 jmp 0x1177200a */
  goto L_1177200a;
L_11771ffb:;
  /* 11771ffb movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11771ffe test byte ptr [edx + 0x11776801], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11776801)))&(0x4u); fl_logic(_r,8); }
  /* 11772005 je 0x1177200a */
  if (C.zf) goto L_1177200a;
  /* 11772007 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11772008 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1177200a:;
  /* 1177200a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1177200c:;
  /* 1177200c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1177200d jmp 0x11771f6a */
  goto L_11771f6a;
L_11772012:;
  /* 11772012 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11772014 je 0x1177201a */
  if (C.zf) goto L_1177201a;
  /* 11772016 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11772019 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1177201a:;
  /* 1177201a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1177201c jmp 0x11771f38 */
  goto L_11771f38;
L_11772021:;
  /* 11772021 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11772023 je 0x11772028 */
  if (C.zf) goto L_11772028;
  /* 11772025 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11772028:;
  /* 11772028 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1177202b pop edi */
  EDI = (pop32());
  /* 1177202c pop esi */
  ESI = (pop32());
  /* 1177202d pop ebx */
  EBX = (pop32());
  /* 1177202e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11772030 pop ebp */
  EBP = (pop32());
  /* 11772031 ret  */
  ESPCHK(0x11771e7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002032 @ 0x11772032 (306 bytes, 132 insns) */
void f_11772032(void) {
  FTRACE(0x11772032u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772032 push ecx */
  push32((uint32_t)(ECX));
  /* 11772033 push ecx */
  push32((uint32_t)(ECX));
  /* 11772034 mov eax, dword ptr [0x11776610] */
  EAX = (r32((uint32_t)(0x11776610)));
  /* 11772039 push ebx */
  push32((uint32_t)(EBX));
  /* 1177203a push ebp */
  push32((uint32_t)(EBP));
  /* 1177203b mov ebp, dword ptr [0x117750a8] */
  EBP = (r32((uint32_t)(0x117750a8)));
  /* 11772041 push esi */
  push32((uint32_t)(ESI));
  /* 11772042 push edi */
  push32((uint32_t)(EDI));
  /* 11772043 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11772045 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11772047 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11772049 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177204b jne 0x11772080 */
  if (!C.zf) goto L_11772080;
  /* 1177204d call ebp */
  call_ind((uint32_t)(EBP), 0x1177204fu);
  /* 1177204f mov esi, eax */
  ESI = (EAX);
  /* 11772051 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772053 je 0x11772061 */
  if (C.zf) goto L_11772061;
  /* 11772055 mov dword ptr [0x11776610], 1 */
  w32((uint32_t)(0x11776610), (0x1u));
  /* 1177205f jmp 0x11772089 */
  goto L_11772089;
L_11772061:;
  /* 11772061 call dword ptr [0x117750a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750a4))), 0x11772067u);
  /* 11772067 mov edi, eax */
  EDI = (EAX);
  /* 11772069 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177206b je 0x1177215b */
  if (C.zf) goto L_1177215b;
  /* 11772071 mov dword ptr [0x11776610], 2 */
  w32((uint32_t)(0x11776610), (0x2u));
  /* 1177207b jmp 0x1177210f */
  goto L_1177210f;
L_11772080:;
  /* 11772080 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772083 jne 0x1177210a */
  if (!C.zf) goto L_1177210a;
L_11772089:;
  /* 11772089 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177208b jne 0x11772099 */
  if (!C.zf) goto L_11772099;
  /* 1177208d call ebp */
  call_ind((uint32_t)(EBP), 0x1177208fu);
  /* 1177208f mov esi, eax */
  ESI = (EAX);
  /* 11772091 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772093 je 0x1177215b */
  if (C.zf) goto L_1177215b;
L_11772099:;
  /* 11772099 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1177209c mov eax, esi */
  EAX = (ESI);
  /* 1177209e je 0x117720ae */
  if (C.zf) goto L_117720ae;
L_117720a0:;
  /* 117720a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117720a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117720a2 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 117720a5 jne 0x117720a0 */
  if (!C.zf) goto L_117720a0;
  /* 117720a7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117720a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117720a9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 117720ac jne 0x117720a0 */
  if (!C.zf) goto L_117720a0;
L_117720ae:;
  /* 117720ae sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117720b0 mov edi, dword ptr [0x117750a0] */
  EDI = (r32((uint32_t)(0x117750a0)));
  /* 117720b6 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117720b8 push ebx */
  push32((uint32_t)(EBX));
  /* 117720b9 push ebx */
  push32((uint32_t)(EBX));
  /* 117720ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117720bb push ebx */
  push32((uint32_t)(EBX));
  /* 117720bc push ebx */
  push32((uint32_t)(EBX));
  /* 117720bd push eax */
  push32((uint32_t)(EAX));
  /* 117720be push esi */
  push32((uint32_t)(ESI));
  /* 117720bf push ebx */
  push32((uint32_t)(EBX));
  /* 117720c0 push ebx */
  push32((uint32_t)(EBX));
  /* 117720c1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 117720c5 call edi */
  call_ind((uint32_t)(EDI), 0x117720c7u);
  /* 117720c7 mov ebp, eax */
  EBP = (EAX);
  /* 117720c9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117720cb je 0x117720ff */
  if (C.zf) goto L_117720ff;
  /* 117720cd push ebp */
  push32((uint32_t)(EBP));
  /* 117720ce call 0x11772581 */
  push32(0x117720d3u); f_11772581();
  /* 117720d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117720d5 pop ecx */
  ECX = (pop32());
  /* 117720d6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 117720da je 0x117720ff */
  if (C.zf) goto L_117720ff;
  /* 117720dc push ebx */
  push32((uint32_t)(EBX));
  /* 117720dd push ebx */
  push32((uint32_t)(EBX));
  /* 117720de push ebp */
  push32((uint32_t)(EBP));
  /* 117720df push eax */
  push32((uint32_t)(EAX));
  /* 117720e0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 117720e4 push esi */
  push32((uint32_t)(ESI));
  /* 117720e5 push ebx */
  push32((uint32_t)(EBX));
  /* 117720e6 push ebx */
  push32((uint32_t)(EBX));
  /* 117720e7 call edi */
  call_ind((uint32_t)(EDI), 0x117720e9u);
  /* 117720e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117720eb jne 0x117720fb */
  if (!C.zf) goto L_117720fb;
  /* 117720ed push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 117720f1 call 0x11772539 */
  push32(0x117720f6u); f_11772539();
  /* 117720f6 pop ecx */
  ECX = (pop32());
  /* 117720f7 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_117720fb:;
  /* 117720fb mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_117720ff:;
  /* 117720ff push esi */
  push32((uint32_t)(ESI));
  /* 11772100 call dword ptr [0x1177509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1177509c))), 0x11772106u);
  /* 11772106 mov eax, ebx */
  EAX = (EBX);
  /* 11772108 jmp 0x1177215d */
  goto L_1177215d;
L_1177210a:;
  /* 1177210a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177210d jne 0x1177215b */
  if (!C.zf) goto L_1177215b;
L_1177210f:;
  /* 1177210f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772111 jne 0x1177211f */
  if (!C.zf) goto L_1177211f;
  /* 11772113 call dword ptr [0x117750a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750a4))), 0x11772119u);
  /* 11772119 mov edi, eax */
  EDI = (EAX);
  /* 1177211b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177211d je 0x1177215b */
  if (C.zf) goto L_1177215b;
L_1177211f:;
  /* 1177211f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11772121 mov eax, edi */
  EAX = (EDI);
  /* 11772123 je 0x1177212f */
  if (C.zf) goto L_1177212f;
L_11772125:;
  /* 11772125 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11772126 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11772128 jne 0x11772125 */
  if (!C.zf) goto L_11772125;
  /* 1177212a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1177212b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1177212d jne 0x11772125 */
  if (!C.zf) goto L_11772125;
L_1177212f:;
  /* 1177212f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772131 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11772132 mov ebp, eax */
  EBP = (EAX);
  /* 11772134 push ebp */
  push32((uint32_t)(EBP));
  /* 11772135 call 0x11772581 */
  push32(0x1177213au); f_11772581();
  /* 1177213a mov esi, eax */
  ESI = (EAX);
  /* 1177213c pop ecx */
  ECX = (pop32());
  /* 1177213d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177213f jne 0x11772145 */
  if (!C.zf) goto L_11772145;
  /* 11772141 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11772143 jmp 0x11772150 */
  goto L_11772150;
L_11772145:;
  /* 11772145 push ebp */
  push32((uint32_t)(EBP));
  /* 11772146 push edi */
  push32((uint32_t)(EDI));
  /* 11772147 push esi */
  push32((uint32_t)(ESI));
  /* 11772148 call 0x11772b70 */
  push32(0x1177214du); f_11772b70();
  /* 1177214d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11772150:;
  /* 11772150 push edi */
  push32((uint32_t)(EDI));
  /* 11772151 call dword ptr [0x11775098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775098))), 0x11772157u);
  /* 11772157 mov eax, esi */
  EAX = (ESI);
  /* 11772159 jmp 0x1177215d */
  goto L_1177215d;
L_1177215b:;
  /* 1177215b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1177215d:;
  /* 1177215d pop edi */
  EDI = (pop32());
  /* 1177215e pop esi */
  ESI = (pop32());
  /* 1177215f pop ebp */
  EBP = (pop32());
  /* 11772160 pop ebx */
  EBX = (pop32());
  /* 11772161 pop ecx */
  ECX = (pop32());
  /* 11772162 pop ecx */
  ECX = (pop32());
  /* 11772163 ret  */
  ESPCHK(0x11772032u, _esp0);
  ESP += 4; return;
}

/* FUN_10002164 @ 0x11772164 (60 bytes, 20 insns) */
void f_11772164(void) {
  FTRACE(0x11772164u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772164 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11772166 push 0 */
  push32((uint32_t)(0x0u));
  /* 11772168 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177216c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11772171 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11772174 push eax */
  push32((uint32_t)(EAX));
  /* 11772175 call dword ptr [0x1177507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1177507c))), 0x1177217bu);
  /* 1177217b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1177217d mov dword ptr [0x11776908], eax */
  w32((uint32_t)(0x11776908), (EAX));
  /* 11772182 je 0x11772199 */
  if (C.zf) goto L_11772199;
  /* 11772184 call 0x11772ea5 */
  push32(0x11772189u); f_11772ea5();
  /* 11772189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1177218b jne 0x1177219c */
  if (!C.zf) goto L_1177219c;
  /* 1177218d push dword ptr [0x11776908] */
  push32((uint32_t)(r32((uint32_t)(0x11776908))));
  /* 11772193 call dword ptr [0x11775078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775078))), 0x11772199u);
L_11772199:;
  /* 11772199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1177219b ret  */
  ESPCHK(0x11772164u, _esp0);
  ESP += 4; return;
L_1177219c:;
  /* 1177219c push 1 */
  push32((uint32_t)(0x1u));
  /* 1177219e pop eax */
  EAX = (pop32());
  /* 1177219f ret  */
  ESPCHK(0x11772164u, _esp0);
  ESP += 4; return;
}

/* FUN_100021a0 @ 0x117721a0 (117 bytes, 38 insns) */
void f_117721a0(void) {
  FTRACE(0x117721a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117721a0 push ebx */
  push32((uint32_t)(EBX));
  /* 117721a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117721a3 cmp dword ptr [0x117766c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x117766c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117721a9 push ebp */
  push32((uint32_t)(EBP));
  /* 117721aa mov ebp, dword ptr [0x11775048] */
  EBP = (r32((uint32_t)(0x11775048)));
  /* 117721b0 jle 0x117721f6 */
  if ((C.zf||C.sf!=C.of)) goto L_117721f6;
  /* 117721b2 mov eax, dword ptr [0x117766cc] */
  EAX = (r32((uint32_t)(0x117766cc)));
  /* 117721b7 push esi */
  push32((uint32_t)(ESI));
  /* 117721b8 push edi */
  push32((uint32_t)(EDI));
  /* 117721b9 mov edi, dword ptr [0x1177504c] */
  EDI = (r32((uint32_t)(0x1177504c)));
  /* 117721bf lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_117721c2:;
  /* 117721c2 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 117721c7 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 117721cc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117721ce call edi */
  call_ind((uint32_t)(EDI), 0x117721d0u);
  /* 117721d0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117721d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117721d7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 117721d9 call edi */
  call_ind((uint32_t)(EDI), 0x117721dbu);
  /* 117721db push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 117721de push 0 */
  push32((uint32_t)(0x0u));
  /* 117721e0 push dword ptr [0x11776908] */
  push32((uint32_t)(r32((uint32_t)(0x11776908))));
  /* 117721e6 call ebp */
  call_ind((uint32_t)(EBP), 0x117721e8u);
  /* 117721e8 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117721eb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 117721ec cmp ebx, dword ptr [0x117766c8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x117766c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117721f2 jl 0x117721c2 */
  if ((C.sf!=C.of)) goto L_117721c2;
  /* 117721f4 pop edi */
  EDI = (pop32());
  /* 117721f5 pop esi */
  ESI = (pop32());
L_117721f6:;
  /* 117721f6 push dword ptr [0x117766cc] */
  push32((uint32_t)(r32((uint32_t)(0x117766cc))));
  /* 117721fc push 0 */
  push32((uint32_t)(0x0u));
  /* 117721fe push dword ptr [0x11776908] */
  push32((uint32_t)(r32((uint32_t)(0x11776908))));
  /* 11772204 call ebp */
  call_ind((uint32_t)(EBP), 0x11772206u);
  /* 11772206 push dword ptr [0x11776908] */
  push32((uint32_t)(r32((uint32_t)(0x11776908))));
  /* 1177220c call dword ptr [0x11775078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775078))), 0x11772212u);
  /* 11772212 pop ebp */
  EBP = (pop32());
  /* 11772213 pop ebx */
  EBX = (pop32());
  /* 11772214 ret  */
  ESPCHK(0x117721a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002215 @ 0x11772215 (57 bytes, 18 insns) */
void f_11772215(void) {
  FTRACE(0x11772215u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772215 mov eax, dword ptr [0x117764c0] */
  EAX = (r32((uint32_t)(0x117764c0)));
  /* 1177221a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177221d je 0x1177222c */
  if (C.zf) goto L_1177222c;
  /* 1177221f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11772221 jne 0x1177224d */
  if (!C.zf) goto L_1177224d;
  /* 11772223 cmp dword ptr [0x117764c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117764c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177222a jne 0x1177224d */
  if (!C.zf) goto L_1177224d;
L_1177222c:;
  /* 1177222c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11772231 call 0x1177224e */
  push32(0x11772236u); f_1177224e();
  /* 11772236 mov eax, dword ptr [0x11776614] */
  EAX = (r32((uint32_t)(0x11776614)));
  /* 1177223b pop ecx */
  ECX = (pop32());
  /* 1177223c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1177223e je 0x11772242 */
  if (C.zf) goto L_11772242;
  /* 11772240 call eax */
  call_ind((uint32_t)(EAX), 0x11772242u);
L_11772242:;
  /* 11772242 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11772247 call 0x1177224e */
  push32(0x1177224cu); f_1177224e();
  /* 1177224c pop ecx */
  ECX = (pop32());
L_1177224d:;
  /* 1177224d ret  */
  ESPCHK(0x11772215u, _esp0);
  ESP += 4; return;
}

/* FUN_1000224e @ 0x1177224e (339 bytes, 100 insns) */
void f_1177224e(void) {
  FTRACE(0x1177224eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1177224e push ebp */
  push32((uint32_t)(EBP));
  /* 1177224f mov ebp, esp */
  EBP = (ESP);
  /* 11772251 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772257 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1177225a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1177225c mov eax, 0x11776150 */
  EAX = (0x11776150u);
L_11772261:;
  /* 11772261 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772263 je 0x11772270 */
  if (C.zf) goto L_11772270;
  /* 11772265 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11772268 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11772269 cmp eax, 0x117761e0 */
  { uint32_t _a=(EAX),_b=(0x117761e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177226e jl 0x11772261 */
  if ((C.sf!=C.of)) goto L_11772261;
L_11772270:;
  /* 11772270 push esi */
  push32((uint32_t)(ESI));
  /* 11772271 mov esi, ecx */
  ESI = (ECX);
  /* 11772273 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11772276 cmp edx, dword ptr [esi + 0x11776150] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11776150))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177227c jne 0x1177239e */
  if (!C.zf) goto L_1177239e;
  /* 11772282 mov eax, dword ptr [0x117764c0] */
  EAX = (r32((uint32_t)(0x117764c0)));
  /* 11772287 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177228a je 0x11772378 */
  if (C.zf) goto L_11772378;
  /* 11772290 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11772292 jne 0x117722a1 */
  if (!C.zf) goto L_117722a1;
  /* 11772294 cmp dword ptr [0x117764c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117764c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177229b je 0x11772378 */
  if (C.zf) goto L_11772378;
L_117722a1:;
  /* 117722a1 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117722a7 je 0x1177239e */
  if (C.zf) goto L_1177239e;
  /* 117722ad lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117722b3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 117722b8 push eax */
  push32((uint32_t)(EAX));
  /* 117722b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117722bb call dword ptr [0x11775094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775094))), 0x117722c1u);
  /* 117722c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117722c3 jne 0x117722d8 */
  if (!C.zf) goto L_117722d8;
  /* 117722c5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117722cb push 0x117753f0 */
  push32((uint32_t)(0x117753f0u));
  /* 117722d0 push eax */
  push32((uint32_t)(EAX));
  /* 117722d1 call 0x11772610 */
  push32(0x117722d6u); f_11772610();
  /* 117722d6 pop ecx */
  ECX = (pop32());
  /* 117722d7 pop ecx */
  ECX = (pop32());
L_117722d8:;
  /* 117722d8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117722de push edi */
  push32((uint32_t)(EDI));
  /* 117722df push eax */
  push32((uint32_t)(EAX));
  /* 117722e0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 117722e6 call 0x11772700 */
  push32(0x117722ebu); f_11772700();
  /* 117722eb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117722ec pop ecx */
  ECX = (pop32());
  /* 117722ed cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117722f0 jbe 0x1177231b */
  if ((C.cf||C.zf)) goto L_1177231b;
  /* 117722f2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 117722f8 push eax */
  push32((uint32_t)(EAX));
  /* 117722f9 call 0x11772700 */
  push32(0x117722feu); f_11772700();
  /* 117722fe mov edi, eax */
  EDI = (EAX);
  /* 11772300 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11772306 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772309 push 3 */
  push32((uint32_t)(0x3u));
  /* 1177230b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1177230d push 0x117753ec */
  push32((uint32_t)(0x117753ecu));
  /* 11772312 push edi */
  push32((uint32_t)(EDI));
  /* 11772313 call 0x11773780 */
  push32(0x11772318u); f_11773780();
  /* 11772318 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1177231b:;
  /* 1177231b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11772321 push 0x117753d0 */
  push32((uint32_t)(0x117753d0u));
  /* 11772326 push eax */
  push32((uint32_t)(EAX));
  /* 11772327 call 0x11772610 */
  push32(0x1177232cu); f_11772610();
  /* 1177232c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11772332 push edi */
  push32((uint32_t)(EDI));
  /* 11772333 push eax */
  push32((uint32_t)(EAX));
  /* 11772334 call 0x11772620 */
  push32(0x11772339u); f_11772620();
  /* 11772339 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1177233f push 0x117753cc */
  push32((uint32_t)(0x117753ccu));
  /* 11772344 push eax */
  push32((uint32_t)(EAX));
  /* 11772345 call 0x11772620 */
  push32(0x1177234au); f_11772620();
  /* 1177234a push dword ptr [esi + 0x11776154] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11776154))));
  /* 11772350 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11772356 push eax */
  push32((uint32_t)(EAX));
  /* 11772357 call 0x11772620 */
  push32(0x1177235cu); f_11772620();
  /* 1177235c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11772361 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11772367 push 0x117753a4 */
  push32((uint32_t)(0x117753a4u));
  /* 1177236c push eax */
  push32((uint32_t)(EAX));
  /* 1177236d call 0x117736ee */
  push32(0x11772372u); f_117736ee();
  /* 11772372 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11772375 pop edi */
  EDI = (pop32());
  /* 11772376 jmp 0x1177239e */
  goto L_1177239e;
L_11772378:;
  /* 11772378 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1177237b lea esi, [esi + 0x11776154] */
  ESI = ((uint32_t)(ESI + 0x11776154));
  /* 11772381 push 0 */
  push32((uint32_t)(0x0u));
  /* 11772383 push eax */
  push32((uint32_t)(EAX));
  /* 11772384 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11772386 call 0x11772700 */
  push32(0x1177238bu); f_11772700();
  /* 1177238b pop ecx */
  ECX = (pop32());
  /* 1177238c push eax */
  push32((uint32_t)(EAX));
  /* 1177238d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1177238f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11772391 call dword ptr [0x11775084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775084))), 0x11772397u);
  /* 11772397 push eax */
  push32((uint32_t)(EAX));
  /* 11772398 call dword ptr [0x11775044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775044))), 0x1177239eu);
L_1177239e:;
  /* 1177239e pop esi */
  ESI = (pop32());
  /* 1177239f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117723a0 ret  */
  ESPCHK(0x1177224eu, _esp0);
  ESP += 4; return;
}

/* FUN_100023a1 @ 0x117723a1 (41 bytes, 12 insns) */
void f_117723a1(void) {
  FTRACE(0x117723a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117723a1 push esi */
  push32((uint32_t)(ESI));
  /* 117723a2 mov esi, dword ptr [0x11775040] */
  ESI = (r32((uint32_t)(0x11775040)));
  /* 117723a8 push dword ptr [0x11776224] */
  push32((uint32_t)(r32((uint32_t)(0x11776224))));
  /* 117723ae call esi */
  call_ind((uint32_t)(ESI), 0x117723b0u);
  /* 117723b0 push dword ptr [0x11776214] */
  push32((uint32_t)(r32((uint32_t)(0x11776214))));
  /* 117723b6 call esi */
  call_ind((uint32_t)(ESI), 0x117723b8u);
  /* 117723b8 push dword ptr [0x11776204] */
  push32((uint32_t)(r32((uint32_t)(0x11776204))));
  /* 117723be call esi */
  call_ind((uint32_t)(ESI), 0x117723c0u);
  /* 117723c0 push dword ptr [0x117761e4] */
  push32((uint32_t)(r32((uint32_t)(0x117761e4))));
  /* 117723c6 call esi */
  call_ind((uint32_t)(ESI), 0x117723c8u);
  /* 117723c8 pop esi */
  ESI = (pop32());
  /* 117723c9 ret  */
  ESPCHK(0x117723a1u, _esp0);
  ESP += 4; return;
}

/* FUN_100023ca @ 0x117723ca (108 bytes, 34 insns) */
void f_117723ca(void) {
  FTRACE(0x117723cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117723ca push esi */
  push32((uint32_t)(ESI));
  /* 117723cb push edi */
  push32((uint32_t)(EDI));
  /* 117723cc mov edi, dword ptr [0x11775090] */
  EDI = (r32((uint32_t)(0x11775090)));
  /* 117723d2 mov esi, 0x117761e0 */
  ESI = (0x117761e0u);
L_117723d7:;
  /* 117723d7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117723d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117723db je 0x11772408 */
  if (C.zf) goto L_11772408;
  /* 117723dd cmp esi, 0x11776224 */
  { uint32_t _a=(ESI),_b=(0x11776224u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117723e3 je 0x11772408 */
  if (C.zf) goto L_11772408;
  /* 117723e5 cmp esi, 0x11776214 */
  { uint32_t _a=(ESI),_b=(0x11776214u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117723eb je 0x11772408 */
  if (C.zf) goto L_11772408;
  /* 117723ed cmp esi, 0x11776204 */
  { uint32_t _a=(ESI),_b=(0x11776204u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117723f3 je 0x11772408 */
  if (C.zf) goto L_11772408;
  /* 117723f5 cmp esi, 0x117761e4 */
  { uint32_t _a=(ESI),_b=(0x117761e4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117723fb je 0x11772408 */
  if (C.zf) goto L_11772408;
  /* 117723fd push eax */
  push32((uint32_t)(EAX));
  /* 117723fe call edi */
  call_ind((uint32_t)(EDI), 0x11772400u);
  /* 11772400 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11772402 call 0x11772539 */
  push32(0x11772407u); f_11772539();
  /* 11772407 pop ecx */
  ECX = (pop32());
L_11772408:;
  /* 11772408 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1177240b cmp esi, 0x117762a0 */
  { uint32_t _a=(ESI),_b=(0x117762a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772411 jl 0x117723d7 */
  if ((C.sf!=C.of)) goto L_117723d7;
  /* 11772413 push dword ptr [0x11776204] */
  push32((uint32_t)(r32((uint32_t)(0x11776204))));
  /* 11772419 call edi */
  call_ind((uint32_t)(EDI), 0x1177241bu);
  /* 1177241b push dword ptr [0x11776214] */
  push32((uint32_t)(r32((uint32_t)(0x11776214))));
  /* 11772421 call edi */
  call_ind((uint32_t)(EDI), 0x11772423u);
  /* 11772423 push dword ptr [0x11776224] */
  push32((uint32_t)(r32((uint32_t)(0x11776224))));
  /* 11772429 call edi */
  call_ind((uint32_t)(EDI), 0x1177242bu);
  /* 1177242b push dword ptr [0x117761e4] */
  push32((uint32_t)(r32((uint32_t)(0x117761e4))));
  /* 11772431 call edi */
  call_ind((uint32_t)(EDI), 0x11772433u);
  /* 11772433 pop edi */
  EDI = (pop32());
  /* 11772434 pop esi */
  ESI = (pop32());
  /* 11772435 ret  */
  ESPCHK(0x117723cau, _esp0);
  ESP += 4; return;
}

/* FUN_10002436 @ 0x11772436 (97 bytes, 37 insns) */
void f_11772436(void) {
  FTRACE(0x11772436u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772436 push ebp */
  push32((uint32_t)(EBP));
  /* 11772437 mov ebp, esp */
  EBP = (ESP);
  /* 11772439 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1177243c push esi */
  push32((uint32_t)(ESI));
  /* 1177243d cmp dword ptr [eax*4 + 0x117761e0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x117761e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772445 lea esi, [eax*4 + 0x117761e0] */
  ESI = ((uint32_t)(EAX*4 + 0x117761e0));
  /* 1177244c jne 0x1177248c */
  if (!C.zf) goto L_1177248c;
  /* 1177244e push edi */
  push32((uint32_t)(EDI));
  /* 1177244f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11772451 call 0x11772581 */
  push32(0x11772456u); f_11772581();
  /* 11772456 mov edi, eax */
  EDI = (EAX);
  /* 11772458 pop ecx */
  ECX = (pop32());
  /* 11772459 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1177245b jne 0x11772465 */
  if (!C.zf) goto L_11772465;
  /* 1177245d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1177245f call 0x117718a6 */
  push32(0x11772464u); f_117718a6();
  /* 11772464 pop ecx */
  ECX = (pop32());
L_11772465:;
  /* 11772465 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11772467 call 0x11772436 */
  push32(0x1177246cu); f_11772436();
  /* 1177246c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177246f pop ecx */
  ECX = (pop32());
  /* 11772470 push edi */
  push32((uint32_t)(EDI));
  /* 11772471 jne 0x1177247d */
  if (!C.zf) goto L_1177247d;
  /* 11772473 call dword ptr [0x11775040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775040))), 0x11772479u);
  /* 11772479 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1177247b jmp 0x11772483 */
  goto L_11772483;
L_1177247d:;
  /* 1177247d call 0x11772539 */
  push32(0x11772482u); f_11772539();
  /* 11772482 pop ecx */
  ECX = (pop32());
L_11772483:;
  /* 11772483 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11772485 call 0x11772497 */
  push32(0x1177248au); f_11772497();
  /* 1177248a pop ecx */
  ECX = (pop32());
  /* 1177248b pop edi */
  EDI = (pop32());
L_1177248c:;
  /* 1177248c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1177248e call dword ptr [0x1177503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1177503c))), 0x11772494u);
  /* 11772494 pop esi */
  ESI = (pop32());
  /* 11772495 pop ebp */
  EBP = (pop32());
  /* 11772496 ret  */
  ESPCHK(0x11772436u, _esp0);
  ESP += 4; return;
}

/* FUN_10002497 @ 0x11772497 (21 bytes, 7 insns) */
void f_11772497(void) {
  FTRACE(0x11772497u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772497 push ebp */
  push32((uint32_t)(EBP));
  /* 11772498 mov ebp, esp */
  EBP = (ESP);
  /* 1177249a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1177249d push dword ptr [eax*4 + 0x117761e0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x117761e0))));
  /* 117724a4 call dword ptr [0x11775038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775038))), 0x117724aau);
  /* 117724aa pop ebp */
  EBP = (pop32());
  /* 117724ab ret  */
  ESPCHK(0x11772497u, _esp0);
  ESP += 4; return;
}

/* FUN_100024ac @ 0x117724ac (141 bytes, 56 insns) */
void f_117724ac(void) {
  FTRACE(0x117724acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117724ac push ebx */
  push32((uint32_t)(EBX));
  /* 117724ad push esi */
  push32((uint32_t)(ESI));
  /* 117724ae mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 117724b2 push edi */
  push32((uint32_t)(EDI));
  /* 117724b3 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117724b8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117724bb mov ebx, esi */
  EBX = (ESI);
  /* 117724bd ja 0x117724cc */
  if ((!C.cf&&!C.zf)) goto L_117724cc;
  /* 117724bf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117724c1 jne 0x117724c6 */
  if (!C.zf) goto L_117724c6;
  /* 117724c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117724c5 pop esi */
  ESI = (pop32());
L_117724c6:;
  /* 117724c6 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117724c9 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_117724cc:;
  /* 117724cc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117724ce cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117724d1 ja 0x1177250d */
  if ((!C.cf&&!C.zf)) goto L_1177250d;
  /* 117724d3 cmp ebx, dword ptr [0x11776430] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11776430))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117724d9 ja 0x117724f8 */
  if ((!C.cf&&!C.zf)) goto L_117724f8;
  /* 117724db push 9 */
  push32((uint32_t)(0x9u));
  /* 117724dd call 0x11772436 */
  push32(0x117724e2u); f_11772436();
  /* 117724e2 push ebx */
  push32((uint32_t)(EBX));
  /* 117724e3 call 0x11773239 */
  push32(0x117724e8u); f_11773239();
  /* 117724e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 117724ea mov edi, eax */
  EDI = (EAX);
  /* 117724ec call 0x11772497 */
  push32(0x117724f1u); f_11772497();
  /* 117724f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117724f4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117724f6 jne 0x11772523 */
  if (!C.zf) goto L_11772523;
L_117724f8:;
  /* 117724f8 push esi */
  push32((uint32_t)(ESI));
  /* 117724f9 push 8 */
  push32((uint32_t)(0x8u));
  /* 117724fb push dword ptr [0x11776908] */
  push32((uint32_t)(r32((uint32_t)(0x11776908))));
  /* 11772501 call dword ptr [0x11775034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775034))), 0x11772507u);
  /* 11772507 mov edi, eax */
  EDI = (EAX);
  /* 11772509 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1177250b jne 0x1177252f */
  if (!C.zf) goto L_1177252f;
L_1177250d:;
  /* 1177250d cmp dword ptr [0x1177668c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1177668c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772514 je 0x1177252f */
  if (C.zf) goto L_1177252f;
  /* 11772516 push esi */
  push32((uint32_t)(ESI));
  /* 11772517 call 0x117738d8 */
  push32(0x1177251cu); f_117738d8();
  /* 1177251c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1177251e pop ecx */
  ECX = (pop32());
  /* 1177251f je 0x11772535 */
  if (C.zf) goto L_11772535;
  /* 11772521 jmp 0x117724cc */
  goto L_117724cc;
L_11772523:;
  /* 11772523 push ebx */
  push32((uint32_t)(EBX));
  /* 11772524 push 0 */
  push32((uint32_t)(0x0u));
  /* 11772526 push edi */
  push32((uint32_t)(EDI));
  /* 11772527 call 0x11773880 */
  push32(0x1177252cu); f_11773880();
  /* 1177252c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1177252f:;
  /* 1177252f mov eax, edi */
  EAX = (EDI);
L_11772531:;
  /* 11772531 pop edi */
  EDI = (pop32());
  /* 11772532 pop esi */
  ESI = (pop32());
  /* 11772533 pop ebx */
  EBX = (pop32());
  /* 11772534 ret  */
  ESPCHK(0x117724acu, _esp0);
  ESP += 4; return;
L_11772535:;
  /* 11772535 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11772537 jmp 0x11772531 */
  goto L_11772531;
}

/* FUN_10002539 @ 0x11772539 (72 bytes, 29 insns) */
void f_11772539(void) {
  FTRACE(0x11772539u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772539 push esi */
  push32((uint32_t)(ESI));
  /* 1177253a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1177253e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11772540 je 0x1177257f */
  if (C.zf) goto L_1177257f;
  /* 11772542 push 9 */
  push32((uint32_t)(0x9u));
  /* 11772544 call 0x11772436 */
  push32(0x11772549u); f_11772436();
  /* 11772549 push esi */
  push32((uint32_t)(ESI));
  /* 1177254a call 0x11772ee3 */
  push32(0x1177254fu); f_11772ee3();
  /* 1177254f pop ecx */
  ECX = (pop32());
  /* 11772550 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11772552 pop ecx */
  ECX = (pop32());
  /* 11772553 je 0x11772568 */
  if (C.zf) goto L_11772568;
  /* 11772555 push esi */
  push32((uint32_t)(ESI));
  /* 11772556 push eax */
  push32((uint32_t)(EAX));
  /* 11772557 call 0x11772f0e */
  push32(0x1177255cu); f_11772f0e();
  /* 1177255c push 9 */
  push32((uint32_t)(0x9u));
  /* 1177255e call 0x11772497 */
  push32(0x11772563u); f_11772497();
  /* 11772563 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11772566 pop esi */
  ESI = (pop32());
  /* 11772567 ret  */
  ESPCHK(0x11772539u, _esp0);
  ESP += 4; return;
L_11772568:;
  /* 11772568 push 9 */
  push32((uint32_t)(0x9u));
  /* 1177256a call 0x11772497 */
  push32(0x1177256fu); f_11772497();
  /* 1177256f pop ecx */
  ECX = (pop32());
  /* 11772570 push esi */
  push32((uint32_t)(ESI));
  /* 11772571 push 0 */
  push32((uint32_t)(0x0u));
  /* 11772573 push dword ptr [0x11776908] */
  push32((uint32_t)(r32((uint32_t)(0x11776908))));
  /* 11772579 call dword ptr [0x11775048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775048))), 0x1177257fu);
L_1177257f:;
  /* 1177257f pop esi */
  ESI = (pop32());
  /* 11772580 ret  */
  ESPCHK(0x11772539u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11772581 (18 bytes, 6 insns) */
void f_11772581(void) {
  FTRACE(0x11772581u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772581 push dword ptr [0x1177668c] */
  push32((uint32_t)(r32((uint32_t)(0x1177668c))));
  /* 11772587 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1177258b call 0x11772593 */
  push32(0x11772590u); f_11772593();
  /* 11772590 pop ecx */
  ECX = (pop32());
  /* 11772591 pop ecx */
  ECX = (pop32());
  /* 11772592 ret  */
  ESPCHK(0x11772581u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11772593 (44 bytes, 16 insns) */
void f_11772593(void) {
  FTRACE(0x11772593u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772593 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772598 ja 0x117725bc */
  if ((!C.cf&&!C.zf)) goto L_117725bc;
L_1177259a:;
  /* 1177259a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1177259e call 0x117725bf */
  push32(0x117725a3u); f_117725bf();
  /* 117725a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117725a5 pop ecx */
  ECX = (pop32());
  /* 117725a6 jne 0x117725be */
  if (!C.zf) goto L_117725be;
  /* 117725a8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117725ac je 0x117725be */
  if (C.zf) goto L_117725be;
  /* 117725ae push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 117725b2 call 0x117738d8 */
  push32(0x117725b7u); f_117738d8();
  /* 117725b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117725b9 pop ecx */
  ECX = (pop32());
  /* 117725ba jne 0x1177259a */
  if (!C.zf) goto L_1177259a;
L_117725bc:;
  /* 117725bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117725be:;
  /* 117725be ret  */
  ESPCHK(0x11772593u, _esp0);
  ESP += 4; return;
}

/* FUN_100025bf @ 0x117725bf (78 bytes, 30 insns) */
void f_117725bf(void) {
  FTRACE(0x117725bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117725bf push esi */
  push32((uint32_t)(ESI));
  /* 117725c0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 117725c4 cmp esi, dword ptr [0x11776430] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11776430))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117725ca push edi */
  push32((uint32_t)(EDI));
  /* 117725cb ja 0x117725ee */
  if ((!C.cf&&!C.zf)) goto L_117725ee;
  /* 117725cd push 9 */
  push32((uint32_t)(0x9u));
  /* 117725cf call 0x11772436 */
  push32(0x117725d4u); f_11772436();
  /* 117725d4 push esi */
  push32((uint32_t)(ESI));
  /* 117725d5 call 0x11773239 */
  push32(0x117725dau); f_11773239();
  /* 117725da push 9 */
  push32((uint32_t)(0x9u));
  /* 117725dc mov edi, eax */
  EDI = (EAX);
  /* 117725de call 0x11772497 */
  push32(0x117725e3u); f_11772497();
  /* 117725e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117725e6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117725e8 je 0x117725ee */
  if (C.zf) goto L_117725ee;
  /* 117725ea mov eax, edi */
  EAX = (EDI);
  /* 117725ec jmp 0x1177260a */
  goto L_1177260a;
L_117725ee:;
  /* 117725ee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117725f0 jne 0x117725f5 */
  if (!C.zf) goto L_117725f5;
  /* 117725f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 117725f4 pop esi */
  ESI = (pop32());
L_117725f5:;
  /* 117725f5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117725f8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 117725fb push esi */
  push32((uint32_t)(ESI));
  /* 117725fc push 0 */
  push32((uint32_t)(0x0u));
  /* 117725fe push dword ptr [0x11776908] */
  push32((uint32_t)(r32((uint32_t)(0x11776908))));
  /* 11772604 call dword ptr [0x11775034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775034))), 0x1177260au);
L_1177260a:;
  /* 1177260a pop edi */
  EDI = (pop32());
  /* 1177260b pop esi */
  ESI = (pop32());
  /* 1177260c ret  */
  ESPCHK(0x117725bfu, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x11772610 (7 bytes, 3 insns) */
void f_11772610(void) {
  FTRACE(0x11772610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772610 push edi */
  push32((uint32_t)(EDI));
  /* 11772611 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11772615 jmp 0x11772681 */
  jmp_ind(0x11772681u); return;
}

/* FUN_10002620 @ 0x11772620 (224 bytes, 84 insns) */
void f_11772620(void) {
  FTRACE(0x11772620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772620 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11772624 push edi */
  push32((uint32_t)(EDI));
  /* 11772625 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1177262b je 0x1177263c */
  if (C.zf) goto L_1177263c;
L_1177262d:;
  /* 1177262d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1177262f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11772630 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11772632 je 0x1177266f */
  if (C.zf) goto L_1177266f;
  /* 11772634 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1177263a jne 0x1177262d */
  if (!C.zf) goto L_1177262d;
L_1177263c:;
  /* 1177263c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1177263e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11772643 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11772645 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11772648 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1177264a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1177264d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11772652 je 0x1177263c */
  if (C.zf) goto L_1177263c;
  /* 11772654 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11772657 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11772659 je 0x1177267e */
  if (C.zf) goto L_1177267e;
  /* 1177265b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1177265d je 0x11772679 */
  if (C.zf) goto L_11772679;
  /* 1177265f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11772664 je 0x11772674 */
  if (C.zf) goto L_11772674;
  /* 11772666 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1177266b je 0x1177266f */
  if (C.zf) goto L_1177266f;
  /* 1177266d jmp 0x1177263c */
  goto L_1177263c;
L_1177266f:;
  /* 1177266f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11772672 jmp 0x11772681 */
  goto L_11772681;
L_11772674:;
  /* 11772674 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11772677 jmp 0x11772681 */
  goto L_11772681;
L_11772679:;
  /* 11772679 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1177267c jmp 0x11772681 */
  goto L_11772681;
L_1177267e:;
  /* 1177267e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11772681:;
  /* 11772681 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11772685 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1177268b je 0x117726a6 */
  if (C.zf) goto L_117726a6;
L_1177268d:;
  /* 1177268d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1177268f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11772690 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11772692 je 0x117726f8 */
  if (C.zf) goto L_117726f8;
  /* 11772694 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11772696 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11772697 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1177269d jne 0x1177268d */
  if (!C.zf) goto L_1177268d;
  /* 1177269f jmp 0x117726a6 */
  goto L_117726a6;
L_117726a1:;
  /* 117726a1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117726a3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117726a6:;
  /* 117726a6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117726ab mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117726ad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117726af xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117726b2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117726b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117726b6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117726b9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117726be je 0x117726a1 */
  if (C.zf) goto L_117726a1;
  /* 117726c0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117726c2 je 0x117726f8 */
  if (C.zf) goto L_117726f8;
  /* 117726c4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 117726c6 je 0x117726ef */
  if (C.zf) goto L_117726ef;
  /* 117726c8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 117726ce je 0x117726e2 */
  if (C.zf) goto L_117726e2;
  /* 117726d0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 117726d6 je 0x117726da */
  if (C.zf) goto L_117726da;
  /* 117726d8 jmp 0x117726a1 */
  goto L_117726a1;
L_117726da:;
  /* 117726da mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117726dc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117726e0 pop edi */
  EDI = (pop32());
  /* 117726e1 ret  */
  ESPCHK(0x11772620u, _esp0);
  ESP += 4; return;
L_117726e2:;
  /* 117726e2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 117726e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117726e9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 117726ed pop edi */
  EDI = (pop32());
  /* 117726ee ret  */
  ESPCHK(0x11772620u, _esp0);
  ESP += 4; return;
L_117726ef:;
  /* 117726ef mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 117726f2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117726f6 pop edi */
  EDI = (pop32());
  /* 117726f7 ret  */
  ESPCHK(0x11772620u, _esp0);
  ESP += 4; return;
L_117726f8:;
  /* 117726f8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 117726fa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117726fe pop edi */
  EDI = (pop32());
  /* 117726ff ret  */
  ESPCHK(0x11772620u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11772700 (123 bytes, 44 insns) */
void f_11772700(void) {
  FTRACE(0x11772700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772700 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11772704 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1177270a je 0x11772720 */
  if (C.zf) goto L_11772720;
L_1177270c:;
  /* 1177270c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1177270e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1177270f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11772711 je 0x11772753 */
  if (C.zf) goto L_11772753;
  /* 11772713 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11772719 jne 0x1177270c */
  if (!C.zf) goto L_1177270c;
  /* 1177271b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11772720:;
  /* 11772720 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11772722 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11772727 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11772729 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1177272c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1177272e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11772731 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11772736 je 0x11772720 */
  if (C.zf) goto L_11772720;
  /* 11772738 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1177273b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1177273d je 0x11772771 */
  if (C.zf) goto L_11772771;
  /* 1177273f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11772741 je 0x11772767 */
  if (C.zf) goto L_11772767;
  /* 11772743 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11772748 je 0x1177275d */
  if (C.zf) goto L_1177275d;
  /* 1177274a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1177274f je 0x11772753 */
  if (C.zf) goto L_11772753;
  /* 11772751 jmp 0x11772720 */
  goto L_11772720;
L_11772753:;
  /* 11772753 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11772756 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1177275a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1177275c ret  */
  ESPCHK(0x11772700u, _esp0);
  ESP += 4; return;
L_1177275d:;
  /* 1177275d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11772760 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11772764 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772766 ret  */
  ESPCHK(0x11772700u, _esp0);
  ESP += 4; return;
L_11772767:;
  /* 11772767 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1177276a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1177276e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772770 ret  */
  ESPCHK(0x11772700u, _esp0);
  ESP += 4; return;
L_11772771:;
  /* 11772771 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11772774 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11772778 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1177277a ret  */
  ESPCHK(0x11772700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000277b @ 0x1177277b (429 bytes, 143 insns) */
void f_1177277b(void) {
  FTRACE(0x1177277bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1177277b push ebp */
  push32((uint32_t)(EBP));
  /* 1177277c mov ebp, esp */
  EBP = (ESP);
  /* 1177277e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772781 push ebx */
  push32((uint32_t)(EBX));
  /* 11772782 push esi */
  push32((uint32_t)(ESI));
  /* 11772783 push edi */
  push32((uint32_t)(EDI));
  /* 11772784 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11772786 call 0x11772436 */
  push32(0x1177278bu); f_11772436();
  /* 1177278b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1177278e call 0x11772928 */
  push32(0x11772793u); f_11772928();
  /* 11772793 mov ebx, eax */
  EBX = (EAX);
  /* 11772795 pop ecx */
  ECX = (pop32());
  /* 11772796 cmp ebx, dword ptr [0x117766d0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x117766d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177279c pop ecx */
  ECX = (pop32());
  /* 1177279d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117727a0 jne 0x117727a9 */
  if (!C.zf) goto L_117727a9;
L_117727a2:;
  /* 117727a2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117727a4 jmp 0x11772919 */
  goto L_11772919;
L_117727a9:;
  /* 117727a9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117727ab je 0x11772907 */
  if (C.zf) goto L_11772907;
  /* 117727b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117727b3 mov eax, 0x11776338 */
  EAX = (0x11776338u);
L_117727b8:;
  /* 117727b8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117727ba je 0x11772830 */
  if (C.zf) goto L_11772830;
  /* 117727bc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117727bf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 117727c0 cmp eax, 0x11776428 */
  { uint32_t _a=(EAX),_b=(0x11776428u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117727c5 jl 0x117727b8 */
  if ((C.sf!=C.of)) goto L_117727b8;
  /* 117727c7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 117727ca push eax */
  push32((uint32_t)(EAX));
  /* 117727cb push ebx */
  push32((uint32_t)(EBX));
  /* 117727cc call dword ptr [0x11775030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775030))), 0x117727d2u);
  /* 117727d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 117727d4 pop esi */
  ESI = (pop32());
  /* 117727d5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117727d7 jne 0x117728fe */
  if (!C.zf) goto L_117728fe;
  /* 117727dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117727df and dword ptr [0x11776904], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11776904)))&(0x0u); w32((uint32_t)(0x11776904), (_r)); fl_logic(_r,32); }
  /* 117727e6 pop ecx */
  ECX = (pop32());
  /* 117727e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117727e9 mov edi, 0x11776800 */
  EDI = (0x11776800u);
  /* 117727ee cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117727f1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117727f3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117727f4 mov dword ptr [0x117766d0], ebx */
  w32((uint32_t)(0x117766d0), (EBX));
  /* 117727fa jbe 0x117728eb */
  if ((C.cf||C.zf)) goto L_117728eb;
  /* 11772800 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11772804 je 0x117728c6 */
  if (C.zf) goto L_117728c6;
  /* 1177280a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1177280d:;
  /* 1177280d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1177280f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11772811 je 0x117728c6 */
  if (C.zf) goto L_117728c6;
  /* 11772817 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1177281b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1177281e:;
  /* 1177281e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772820 ja 0x117728ba */
  if ((!C.cf&&!C.zf)) goto L_117728ba;
  /* 11772826 or byte ptr [eax + 0x11776801], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11776801)))|(0x4u); w8((uint32_t)(EAX + 0x11776801), (_r)); fl_logic(_r,8); }
  /* 1177282d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1177282e jmp 0x1177281e */
  goto L_1177281e;
L_11772830:;
  /* 11772830 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11772834 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11772836 pop ecx */
  ECX = (pop32());
  /* 11772837 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11772839 mov edi, 0x11776800 */
  EDI = (0x11776800u);
  /* 1177283e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11772841 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11772843 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11772846 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11772847 lea ebx, [esi + 0x11776348] */
  EBX = ((uint32_t)(ESI + 0x11776348));
L_1177284d:;
  /* 1177284d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11772850 mov ecx, ebx */
  ECX = (EBX);
  /* 11772852 je 0x11772880 */
  if (C.zf) goto L_11772880;
L_11772854:;
  /* 11772854 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11772857 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11772859 je 0x11772880 */
  if (C.zf) goto L_11772880;
  /* 1177285b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1177285e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11772861 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772863 ja 0x11772879 */
  if ((!C.cf&&!C.zf)) goto L_11772879;
  /* 11772865 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11772868 mov dl, byte ptr [edx + 0x11776330] */
  DL = (r8((uint32_t)(EDX + 0x11776330)));
L_1177286e:;
  /* 1177286e or byte ptr [eax + 0x11776801], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11776801)))|(DL); w8((uint32_t)(EAX + 0x11776801), (_r)); fl_logic(_r,8); }
  /* 11772874 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11772875 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772877 jbe 0x1177286e */
  if ((C.cf||C.zf)) goto L_1177286e;
L_11772879:;
  /* 11772879 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1177287a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1177287b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1177287e jne 0x11772854 */
  if (!C.zf) goto L_11772854;
L_11772880:;
  /* 11772880 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11772883 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11772886 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177288a jb 0x1177284d */
  if (C.cf) goto L_1177284d;
  /* 1177288c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1177288f mov dword ptr [0x117766ec], 1 */
  w32((uint32_t)(0x117766ec), (0x1u));
  /* 11772899 push eax */
  push32((uint32_t)(EAX));
  /* 1177289a mov dword ptr [0x117766d0], eax */
  w32((uint32_t)(0x117766d0), (EAX));
  /* 1177289f call 0x11772972 */
  push32(0x117728a4u); f_11772972();
  /* 117728a4 lea esi, [esi + 0x1177633c] */
  ESI = ((uint32_t)(ESI + 0x1177633c));
  /* 117728aa mov edi, 0x117766e0 */
  EDI = (0x117766e0u);
  /* 117728af movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 117728b0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 117728b1 pop ecx */
  ECX = (pop32());
  /* 117728b2 mov dword ptr [0x11776904], eax */
  w32((uint32_t)(0x11776904), (EAX));
  /* 117728b7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 117728b8 jmp 0x1177290c */
  goto L_1177290c;
L_117728ba:;
  /* 117728ba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117728bb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117728bc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117728c0 jne 0x1177280d */
  if (!C.zf) goto L_1177280d;
L_117728c6:;
  /* 117728c6 mov eax, esi */
  EAX = (ESI);
L_117728c8:;
  /* 117728c8 or byte ptr [eax + 0x11776801], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11776801)))|(0x8u); w8((uint32_t)(EAX + 0x11776801), (_r)); fl_logic(_r,8); }
  /* 117728cf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117728d0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117728d5 jb 0x117728c8 */
  if (C.cf) goto L_117728c8;
  /* 117728d7 push ebx */
  push32((uint32_t)(EBX));
  /* 117728d8 call 0x11772972 */
  push32(0x117728ddu); f_11772972();
  /* 117728dd pop ecx */
  ECX = (pop32());
  /* 117728de mov dword ptr [0x11776904], eax */
  w32((uint32_t)(0x11776904), (EAX));
  /* 117728e3 mov dword ptr [0x117766ec], esi */
  w32((uint32_t)(0x117766ec), (ESI));
  /* 117728e9 jmp 0x117728f2 */
  goto L_117728f2;
L_117728eb:;
  /* 117728eb and dword ptr [0x117766ec], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117766ec)))&(0x0u); w32((uint32_t)(0x117766ec), (_r)); fl_logic(_r,32); }
L_117728f2:;
  /* 117728f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117728f4 mov edi, 0x117766e0 */
  EDI = (0x117766e0u);
  /* 117728f9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117728fa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117728fb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117728fc jmp 0x1177290c */
  goto L_1177290c;
L_117728fe:;
  /* 117728fe cmp dword ptr [0x11776678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11776678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772905 je 0x11772916 */
  if (C.zf) goto L_11772916;
L_11772907:;
  /* 11772907 call 0x117729a5 */
  push32(0x1177290cu); f_117729a5();
L_1177290c:;
  /* 1177290c call 0x117729ce */
  push32(0x11772911u); f_117729ce();
  /* 11772911 jmp 0x117727a2 */
  goto L_117727a2;
L_11772916:;
  /* 11772916 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11772919:;
  /* 11772919 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1177291b call 0x11772497 */
  push32(0x11772920u); f_11772497();
  /* 11772920 pop ecx */
  ECX = (pop32());
  /* 11772921 mov eax, esi */
  EAX = (ESI);
  /* 11772923 pop edi */
  EDI = (pop32());
  /* 11772924 pop esi */
  ESI = (pop32());
  /* 11772925 pop ebx */
  EBX = (pop32());
  /* 11772926 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11772927 ret  */
  ESPCHK(0x1177277bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002928 @ 0x11772928 (74 bytes, 15 insns) */
void f_11772928(void) {
  FTRACE(0x11772928u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772928 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1177292c and dword ptr [0x11776678], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11776678)))&(0x0u); w32((uint32_t)(0x11776678), (_r)); fl_logic(_r,32); }
  /* 11772933 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772936 jne 0x11772948 */
  if (!C.zf) goto L_11772948;
  /* 11772938 mov dword ptr [0x11776678], 1 */
  w32((uint32_t)(0x11776678), (0x1u));
  /* 11772942 jmp dword ptr [0x11775028] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11775028)))); return;
L_11772948:;
  /* 11772948 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177294b jne 0x1177295d */
  if (!C.zf) goto L_1177295d;
  /* 1177294d mov dword ptr [0x11776678], 1 */
  w32((uint32_t)(0x11776678), (0x1u));
  /* 11772957 jmp dword ptr [0x1177502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1177502c)))); return;
L_1177295d:;
  /* 1177295d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772960 jne 0x11772971 */
  if (!C.zf) goto L_11772971;
  /* 11772962 mov eax, dword ptr [0x117766a8] */
  EAX = (r32((uint32_t)(0x117766a8)));
  /* 11772967 mov dword ptr [0x11776678], 1 */
  w32((uint32_t)(0x11776678), (0x1u));
L_11772971:;
  /* 11772971 ret  */
  ESPCHK(0x11772928u, _esp0);
  ESP += 4; return;
}

/* FUN_10002972 @ 0x11772972 (51 bytes, 19 insns) */
void f_11772972(void) {
  FTRACE(0x11772972u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772972 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11772976 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1177297b je 0x1177299f */
  if (C.zf) goto L_1177299f;
  /* 1177297d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772980 je 0x11772999 */
  if (C.zf) goto L_11772999;
  /* 11772982 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772985 je 0x11772993 */
  if (C.zf) goto L_11772993;
  /* 11772987 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11772988 je 0x1177298d */
  if (C.zf) goto L_1177298d;
  /* 1177298a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1177298c ret  */
  ESPCHK(0x11772972u, _esp0);
  ESP += 4; return;
L_1177298d:;
  /* 1177298d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11772992 ret  */
  ESPCHK(0x11772972u, _esp0);
  ESP += 4; return;
L_11772993:;
  /* 11772993 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11772998 ret  */
  ESPCHK(0x11772972u, _esp0);
  ESP += 4; return;
L_11772999:;
  /* 11772999 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1177299e ret  */
  ESPCHK(0x11772972u, _esp0);
  ESP += 4; return;
L_1177299f:;
  /* 1177299f mov eax, 0x411 */
  EAX = (0x411u);
  /* 117729a4 ret  */
  ESPCHK(0x11772972u, _esp0);
  ESP += 4; return;
}

/* FUN_100029a5 @ 0x117729a5 (41 bytes, 17 insns) */
void f_117729a5(void) {
  FTRACE(0x117729a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117729a5 push edi */
  push32((uint32_t)(EDI));
  /* 117729a6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117729a8 pop ecx */
  ECX = (pop32());
  /* 117729a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117729ab mov edi, 0x11776800 */
  EDI = (0x11776800u);
  /* 117729b0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117729b2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117729b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117729b5 mov edi, 0x117766e0 */
  EDI = (0x117766e0u);
  /* 117729ba mov dword ptr [0x117766d0], eax */
  w32((uint32_t)(0x117766d0), (EAX));
  /* 117729bf mov dword ptr [0x117766ec], eax */
  w32((uint32_t)(0x117766ec), (EAX));
  /* 117729c4 mov dword ptr [0x11776904], eax */
  w32((uint32_t)(0x11776904), (EAX));
  /* 117729c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117729ca stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117729cb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 117729cc pop edi */
  EDI = (pop32());
  /* 117729cd ret  */
  ESPCHK(0x117729a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100029ce @ 0x117729ce (389 bytes, 124 insns) */
void f_117729ce(void) {
  FTRACE(0x117729ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117729ce push ebp */
  push32((uint32_t)(EBP));
  /* 117729cf mov ebp, esp */
  EBP = (ESP);
  /* 117729d1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117729d7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 117729da push esi */
  push32((uint32_t)(ESI));
  /* 117729db push eax */
  push32((uint32_t)(EAX));
  /* 117729dc push dword ptr [0x117766d0] */
  push32((uint32_t)(r32((uint32_t)(0x117766d0))));
  /* 117729e2 call dword ptr [0x11775030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775030))), 0x117729e8u);
  /* 117729e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117729eb jne 0x11772b07 */
  if (!C.zf) goto L_11772b07;
  /* 117729f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117729f3 mov esi, 0x100 */
  ESI = (0x100u);
L_117729f8:;
  /* 117729f8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 117729ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11772a00 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772a02 jb 0x117729f8 */
  if (C.cf) goto L_117729f8;
  /* 11772a04 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11772a07 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11772a0e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11772a10 je 0x11772a49 */
  if (C.zf) goto L_11772a49;
  /* 11772a12 push ebx */
  push32((uint32_t)(EBX));
  /* 11772a13 push edi */
  push32((uint32_t)(EDI));
  /* 11772a14 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11772a17:;
  /* 11772a17 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11772a1a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11772a1d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772a1f ja 0x11772a3e */
  if ((!C.cf&&!C.zf)) goto L_11772a3e;
  /* 11772a21 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772a23 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11772a2a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11772a2b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11772a30 mov ebx, ecx */
  EBX = (ECX);
  /* 11772a32 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11772a35 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11772a37 mov ecx, ebx */
  ECX = (EBX);
  /* 11772a39 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11772a3c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11772a3e:;
  /* 11772a3e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11772a3f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11772a40 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11772a43 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11772a45 jne 0x11772a17 */
  if (!C.zf) goto L_11772a17;
  /* 11772a47 pop edi */
  EDI = (pop32());
  /* 11772a48 pop ebx */
  EBX = (pop32());
L_11772a49:;
  /* 11772a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11772a4b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11772a51 push dword ptr [0x11776904] */
  push32((uint32_t)(r32((uint32_t)(0x11776904))));
  /* 11772a57 push dword ptr [0x117766d0] */
  push32((uint32_t)(r32((uint32_t)(0x117766d0))));
  /* 11772a5d push eax */
  push32((uint32_t)(EAX));
  /* 11772a5e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11772a64 push esi */
  push32((uint32_t)(ESI));
  /* 11772a65 push eax */
  push32((uint32_t)(EAX));
  /* 11772a66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11772a68 call 0x11773b42 */
  push32(0x11772a6du); f_11773b42();
  /* 11772a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11772a6f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11772a75 push dword ptr [0x117766d0] */
  push32((uint32_t)(r32((uint32_t)(0x117766d0))));
  /* 11772a7b push esi */
  push32((uint32_t)(ESI));
  /* 11772a7c push eax */
  push32((uint32_t)(EAX));
  /* 11772a7d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11772a83 push esi */
  push32((uint32_t)(ESI));
  /* 11772a84 push eax */
  push32((uint32_t)(EAX));
  /* 11772a85 push esi */
  push32((uint32_t)(ESI));
  /* 11772a86 push dword ptr [0x11776904] */
  push32((uint32_t)(r32((uint32_t)(0x11776904))));
  /* 11772a8c call 0x117738f3 */
  push32(0x11772a91u); f_117738f3();
  /* 11772a91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11772a93 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11772a99 push dword ptr [0x117766d0] */
  push32((uint32_t)(r32((uint32_t)(0x117766d0))));
  /* 11772a9f push esi */
  push32((uint32_t)(ESI));
  /* 11772aa0 push eax */
  push32((uint32_t)(EAX));
  /* 11772aa1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11772aa7 push esi */
  push32((uint32_t)(ESI));
  /* 11772aa8 push eax */
  push32((uint32_t)(EAX));
  /* 11772aa9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11772aae push dword ptr [0x11776904] */
  push32((uint32_t)(r32((uint32_t)(0x11776904))));
  /* 11772ab4 call 0x117738f3 */
  push32(0x11772ab9u); f_117738f3();
  /* 11772ab9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11772abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11772abe lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11772ac4:;
  /* 11772ac4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11772ac7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11772aca je 0x11772ae2 */
  if (C.zf) goto L_11772ae2;
  /* 11772acc or byte ptr [eax + 0x11776801], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11776801)))|(0x10u); w8((uint32_t)(EAX + 0x11776801), (_r)); fl_logic(_r,8); }
  /* 11772ad3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11772ada:;
  /* 11772ada mov byte ptr [eax + 0x11776700], dl */
  w8((uint32_t)(EAX + 0x11776700), (DL));
  /* 11772ae0 jmp 0x11772afe */
  goto L_11772afe;
L_11772ae2:;
  /* 11772ae2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11772ae5 je 0x11772af7 */
  if (C.zf) goto L_11772af7;
  /* 11772ae7 or byte ptr [eax + 0x11776801], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11776801)))|(0x20u); w8((uint32_t)(EAX + 0x11776801), (_r)); fl_logic(_r,8); }
  /* 11772aee mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11772af5 jmp 0x11772ada */
  goto L_11772ada;
L_11772af7:;
  /* 11772af7 and byte ptr [eax + 0x11776700], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11776700)))&(0x0u); w8((uint32_t)(EAX + 0x11776700), (_r)); fl_logic(_r,8); }
L_11772afe:;
  /* 11772afe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11772aff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11772b00 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11772b01 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772b03 jb 0x11772ac4 */
  if (C.cf) goto L_11772ac4;
  /* 11772b05 jmp 0x11772b50 */
  goto L_11772b50;
L_11772b07:;
  /* 11772b07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11772b09 mov esi, 0x100 */
  ESI = (0x100u);
L_11772b0e:;
  /* 11772b0e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772b11 jb 0x11772b2c */
  if (C.cf) goto L_11772b2c;
  /* 11772b13 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772b16 ja 0x11772b2c */
  if ((!C.cf&&!C.zf)) goto L_11772b2c;
  /* 11772b18 or byte ptr [eax + 0x11776801], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11776801)))|(0x10u); w8((uint32_t)(EAX + 0x11776801), (_r)); fl_logic(_r,8); }
  /* 11772b1f mov cl, al */
  CL = (AL);
  /* 11772b21 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11772b24:;
  /* 11772b24 mov byte ptr [eax + 0x11776700], cl */
  w8((uint32_t)(EAX + 0x11776700), (CL));
  /* 11772b2a jmp 0x11772b4b */
  goto L_11772b4b;
L_11772b2c:;
  /* 11772b2c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772b2f jb 0x11772b44 */
  if (C.cf) goto L_11772b44;
  /* 11772b31 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772b34 ja 0x11772b44 */
  if ((!C.cf&&!C.zf)) goto L_11772b44;
  /* 11772b36 or byte ptr [eax + 0x11776801], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11776801)))|(0x20u); w8((uint32_t)(EAX + 0x11776801), (_r)); fl_logic(_r,8); }
  /* 11772b3d mov cl, al */
  CL = (AL);
  /* 11772b3f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11772b42 jmp 0x11772b24 */
  goto L_11772b24;
L_11772b44:;
  /* 11772b44 and byte ptr [eax + 0x11776700], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11776700)))&(0x0u); w8((uint32_t)(EAX + 0x11776700), (_r)); fl_logic(_r,8); }
L_11772b4b:;
  /* 11772b4b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11772b4c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772b4e jb 0x11772b0e */
  if (C.cf) goto L_11772b0e;
L_11772b50:;
  /* 11772b50 pop esi */
  ESI = (pop32());
  /* 11772b51 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11772b52 ret  */
  ESPCHK(0x117729ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b53 @ 0x11772b53 (28 bytes, 7 insns) */
void f_11772b53(void) {
  FTRACE(0x11772b53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772b53 cmp dword ptr [0x11776a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11776a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772b5a jne 0x11772b6e */
  if (!C.zf) goto L_11772b6e;
  /* 11772b5c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11772b5e call 0x1177277b */
  push32(0x11772b63u); f_1177277b();
  /* 11772b63 pop ecx */
  ECX = (pop32());
  /* 11772b64 mov dword ptr [0x11776a28], 1 */
  w32((uint32_t)(0x11776a28), (0x1u));
L_11772b6e:;
  /* 11772b6e ret  */
  ESPCHK(0x11772b53u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b70 @ 0x11772b70 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11772b70(void) {
  FTRACE(0x11772b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11772b71 mov ebp, esp */
  EBP = (ESP);
  /* 11772b73 push edi */
  push32((uint32_t)(EDI));
  /* 11772b74 push esi */
  push32((uint32_t)(ESI));
  /* 11772b75 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11772b78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11772b7b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11772b7e mov eax, ecx */
  EAX = (ECX);
  /* 11772b80 mov edx, ecx */
  EDX = (ECX);
  /* 11772b82 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11772b84 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772b86 jbe 0x11772b90 */
  if ((C.cf||C.zf)) goto L_11772b90;
  /* 11772b88 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772b8a jb 0x11772d08 */
  if (C.cf) goto L_11772d08;
L_11772b90:;
  /* 11772b90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11772b96 jne 0x11772bac */
  if (!C.zf) goto L_11772bac;
  /* 11772b98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11772b9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11772b9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772ba1 jb 0x11772bcc */
  if (C.cf) goto L_11772bcc;
  /* 11772ba3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11772ba5 jmp dword ptr [edx*4 + 0x11772cb8] */
  switch (EDX) {
    case 0: goto L_11772cc8;
    case 1: goto L_11772cd0;
    case 2: goto L_11772cdc;
    case 3: goto L_11772cf0;
    default: x86_unimpl("switch@0x11772ba5 out of table"); return;
  }
L_11772bac:;
  /* 11772bac mov eax, edi */
  EAX = (EDI);
  /* 11772bae mov edx, 3 */
  EDX = (0x3u);
  /* 11772bb3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772bb6 jb 0x11772bc4 */
  if (C.cf) goto L_11772bc4;
  /* 11772bb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11772bbb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11772bbd jmp dword ptr [eax*4 + 0x11772bd0] */
  switch (EAX) {
    case 1: goto L_11772be0;
    case 2: goto L_11772c0c;
    case 3: goto L_11772c30;
    default: x86_unimpl("switch@0x11772bbd out of table"); return;
  }
L_11772bc4:;
  /* 11772bc4 jmp dword ptr [ecx*4 + 0x11772cc8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11772cc8)))); return;
  /* 11772bcb nop  */
  /* nop */
L_11772bcc:;
  /* 11772bcc jmp dword ptr [ecx*4 + 0x11772c4c] */
  switch (ECX) {
    case 0: goto L_11772caf;
    case 1: goto L_11772c9c;
    case 2: goto L_11772c94;
    case 3: goto L_11772c8c;
    case 4: goto L_11772c84;
    case 5: goto L_11772c7c;
    case 6: goto L_11772c74;
    case 7: goto L_11772c6c;
    default: x86_unimpl("switch@0x11772bcc out of table"); return;
  }
  /* 11772bd3 nop  */
  /* nop */
L_11772be0:;
  /* 11772be0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11772be2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11772be4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11772be6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11772be9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11772bec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11772bef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11772bf2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11772bf5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11772bf8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11772bfb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772bfe jb 0x11772bcc */
  if (C.cf) goto L_11772bcc;
  /* 11772c00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11772c02 jmp dword ptr [edx*4 + 0x11772cb8] */
  switch (EDX) {
    case 0: goto L_11772cc8;
    case 1: goto L_11772cd0;
    case 2: goto L_11772cdc;
    case 3: goto L_11772cf0;
    default: x86_unimpl("switch@0x11772c02 out of table"); return;
  }
  /* 11772c09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11772c0c:;
  /* 11772c0c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11772c0e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11772c10 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11772c12 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11772c15 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11772c18 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11772c1b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11772c1e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11772c21 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772c24 jb 0x11772bcc */
  if (C.cf) goto L_11772bcc;
  /* 11772c26 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11772c28 jmp dword ptr [edx*4 + 0x11772cb8] */
  switch (EDX) {
    case 0: goto L_11772cc8;
    case 1: goto L_11772cd0;
    case 2: goto L_11772cdc;
    case 3: goto L_11772cf0;
    default: x86_unimpl("switch@0x11772c28 out of table"); return;
  }
  /* 11772c2f nop  */
  /* nop */
L_11772c30:;
  /* 11772c30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11772c32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11772c34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11772c36 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11772c37 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11772c3a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11772c3b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772c3e jb 0x11772bcc */
  if (C.cf) goto L_11772bcc;
  /* 11772c40 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11772c42 jmp dword ptr [edx*4 + 0x11772cb8] */
  switch (EDX) {
    case 0: goto L_11772cc8;
    case 1: goto L_11772cd0;
    case 2: goto L_11772cdc;
    case 3: goto L_11772cf0;
    default: x86_unimpl("switch@0x11772c42 out of table"); return;
  }
  /* 11772c49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11772c6c:;
  /* 11772c6c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11772c70 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11772c74:;
  /* 11772c74 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11772c78 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11772c7c:;
  /* 11772c7c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11772c80 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11772c84:;
  /* 11772c84 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11772c88 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11772c8c:;
  /* 11772c8c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11772c90 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11772c94:;
  /* 11772c94 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11772c98 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11772c9c:;
  /* 11772c9c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11772ca0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11772ca4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11772cab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11772cad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11772caf:;
  /* 11772caf jmp dword ptr [edx*4 + 0x11772cb8] */
  switch (EDX) {
    case 0: goto L_11772cc8;
    case 1: goto L_11772cd0;
    case 2: goto L_11772cdc;
    case 3: goto L_11772cf0;
    default: x86_unimpl("switch@0x11772caf out of table"); return;
  }
  /* 11772cb6 mov edi, edi */
  EDI = (EDI);
L_11772cc8:;
  /* 11772cc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11772ccb pop esi */
  ESI = (pop32());
  /* 11772ccc pop edi */
  EDI = (pop32());
  /* 11772ccd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11772cce ret  */
  ESPCHK(0x11772b70u, _esp0);
  ESP += 4; return;
  /* 11772ccf nop  */
  /* nop */
L_11772cd0:;
  /* 11772cd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11772cd2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11772cd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11772cd7 pop esi */
  ESI = (pop32());
  /* 11772cd8 pop edi */
  EDI = (pop32());
  /* 11772cd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11772cda ret  */
  ESPCHK(0x11772b70u, _esp0);
  ESP += 4; return;
  /* 11772cdb nop  */
  /* nop */
L_11772cdc:;
  /* 11772cdc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11772cde mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11772ce0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11772ce3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11772ce6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11772ce9 pop esi */
  ESI = (pop32());
  /* 11772cea pop edi */
  EDI = (pop32());
  /* 11772ceb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11772cec ret  */
  ESPCHK(0x11772b70u, _esp0);
  ESP += 4; return;
  /* 11772ced lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11772cf0:;
  /* 11772cf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11772cf2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11772cf4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11772cf7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11772cfa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11772cfd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11772d00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11772d03 pop esi */
  ESI = (pop32());
  /* 11772d04 pop edi */
  EDI = (pop32());
  /* 11772d05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11772d06 ret  */
  ESPCHK(0x11772b70u, _esp0);
  ESP += 4; return;
  /* 11772d07 nop  */
  /* nop */
L_11772d08:;
  /* 11772d08 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11772d0c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11772d10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11772d16 jne 0x11772d3c */
  if (!C.zf) goto L_11772d3c;
  /* 11772d18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11772d1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11772d1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772d21 jb 0x11772d30 */
  if (C.cf) goto L_11772d30;
  /* 11772d23 std  */
  C.df=1;
  /* 11772d24 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11772d26 cld  */
  C.df=0;
  /* 11772d27 jmp dword ptr [edx*4 + 0x11772e50] */
  switch (EDX) {
    case 0: goto L_11772e60;
    case 1: goto L_11772e68;
    case 2: goto L_11772e78;
    case 3: goto L_11772e8c;
    default: x86_unimpl("switch@0x11772d27 out of table"); return;
  }
  /* 11772d2e mov edi, edi */
  EDI = (EDI);
L_11772d30:;
  /* 11772d30 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11772d32 jmp dword ptr [ecx*4 + 0x11772e00] */
  switch (ECX) {
    case 0: goto L_11772e47;
    default: x86_unimpl("switch@0x11772d32 out of table"); return;
  }
  /* 11772d39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11772d3c:;
  /* 11772d3c mov eax, edi */
  EAX = (EDI);
  /* 11772d3e mov edx, 3 */
  EDX = (0x3u);
  /* 11772d43 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772d46 jb 0x11772d54 */
  if (C.cf) goto L_11772d54;
  /* 11772d48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11772d4b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772d4d jmp dword ptr [eax*4 + 0x11772d58] */
  switch (EAX) {
    case 1: goto L_11772d68;
    case 2: goto L_11772d88;
    case 3: goto L_11772db0;
    default: x86_unimpl("switch@0x11772d4d out of table"); return;
  }
L_11772d54:;
  /* 11772d54 jmp dword ptr [ecx*4 + 0x11772e50] */
  switch (ECX) {
    case 0: goto L_11772e60;
    case 1: goto L_11772e68;
    case 2: goto L_11772e78;
    case 3: goto L_11772e8c;
    default: x86_unimpl("switch@0x11772d54 out of table"); return;
  }
  /* 11772d5b nop  */
  /* nop */
L_11772d68:;
  /* 11772d68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11772d6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11772d6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11772d70 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11772d71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11772d74 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11772d75 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772d78 jb 0x11772d30 */
  if (C.cf) goto L_11772d30;
  /* 11772d7a std  */
  C.df=1;
  /* 11772d7b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11772d7d cld  */
  C.df=0;
  /* 11772d7e jmp dword ptr [edx*4 + 0x11772e50] */
  switch (EDX) {
    case 0: goto L_11772e60;
    case 1: goto L_11772e68;
    case 2: goto L_11772e78;
    case 3: goto L_11772e8c;
    default: x86_unimpl("switch@0x11772d7e out of table"); return;
  }
  /* 11772d85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11772d88:;
  /* 11772d88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11772d8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11772d8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11772d90 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11772d93 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11772d96 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11772d99 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772d9c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772d9f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772da2 jb 0x11772d30 */
  if (C.cf) goto L_11772d30;
  /* 11772da4 std  */
  C.df=1;
  /* 11772da5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11772da7 cld  */
  C.df=0;
  /* 11772da8 jmp dword ptr [edx*4 + 0x11772e50] */
  switch (EDX) {
    case 0: goto L_11772e60;
    case 1: goto L_11772e68;
    case 2: goto L_11772e78;
    case 3: goto L_11772e8c;
    default: x86_unimpl("switch@0x11772da8 out of table"); return;
  }
  /* 11772daf nop  */
  /* nop */
L_11772db0:;
  /* 11772db0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11772db3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11772db5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11772db8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11772dbb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11772dbe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11772dc1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11772dc4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11772dc7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772dca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772dcd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772dd0 jb 0x11772d30 */
  if (C.cf) goto L_11772d30;
  /* 11772dd6 std  */
  C.df=1;
  /* 11772dd7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11772dd9 cld  */
  C.df=0;
  /* 11772dda jmp dword ptr [edx*4 + 0x11772e50] */
  switch (EDX) {
    case 0: goto L_11772e60;
    case 1: goto L_11772e68;
    case 2: goto L_11772e78;
    case 3: goto L_11772e8c;
    default: x86_unimpl("switch@0x11772dda out of table"); return;
  }
  /* 11772de1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11772de4 add al, 0x2e */
  { uint32_t _a=(AL),_b=(0x2eu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11772de6 ja 0x11772df9 */
  if ((!C.cf&&!C.zf)) goto L_11772df9;
  /* 11772de8 or al, 0x2e */
  { uint32_t _r=(AL)|(0x2eu); AL = (_r); fl_logic(_r,8); }
  /* 11772dea ja 0x11772dfd */
  if ((!C.cf&&!C.zf)) goto L_11772dfd;
  /* 11772dec adc al, 0x2e */
  { uint32_t _a=(AL),_b=(0x2eu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11772dee ja 0x11772e01 */
  if ((!C.cf&&!C.zf)) goto L_11772e01;
  /* 11772df0 sbb al, 0x2e */
  { uint32_t _a=(AL),_b=(0x2eu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11772df2 ja 0x11772e05 */
  if ((!C.cf&&!C.zf)) goto L_11772e05;
  /* 11772df4 and al, 0x2e */
  { uint32_t _r=(AL)&(0x2eu); AL = (_r); fl_logic(_r,8); }
  /* 11772df6 ja 0x11772e09 */
  if ((!C.cf&&!C.zf)) goto L_11772e09;
  /* 11772df8 sub al, 0x2e */
  { uint32_t _a=(AL),_b=(0x2eu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11772dfa ja 0x11772e0d */
  if ((!C.cf&&!C.zf)) goto L_11772e0d;
  /* 11772dfc xor al, 0x2e */
  { uint32_t _r=(AL)^(0x2eu); AL = (_r); fl_logic(_r,8); }
  /* 11772dfe ja 0x11772e11 */
  if ((!C.cf&&!C.zf)) goto L_11772e11;
  /* 11772e04 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11772e08 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11772e0c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11772e10 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11772e14 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11772e18 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11772e1c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11772e20 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11772e24 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11772e28 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11772e2c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11772e30 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11772e34 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11772e38 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11772e3c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11772e43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11772e45 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11772e47:;
  /* 11772e47 jmp dword ptr [edx*4 + 0x11772e50] */
  switch (EDX) {
    case 0: goto L_11772e60;
    case 1: goto L_11772e68;
    case 2: goto L_11772e78;
    case 3: goto L_11772e8c;
    default: x86_unimpl("switch@0x11772e47 out of table"); return;
  }
  /* 11772e4e mov edi, edi */
  EDI = (EDI);
L_11772e60:;
  /* 11772e60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11772e63 pop esi */
  ESI = (pop32());
  /* 11772e64 pop edi */
  EDI = (pop32());
  /* 11772e65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11772e66 ret  */
  ESPCHK(0x11772b70u, _esp0);
  ESP += 4; return;
  /* 11772e67 nop  */
  /* nop */
L_11772e68:;
  /* 11772e68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11772e6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11772e6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11772e71 pop esi */
  ESI = (pop32());
  /* 11772e72 pop edi */
  EDI = (pop32());
  /* 11772e73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11772e74 ret  */
  ESPCHK(0x11772b70u, _esp0);
  ESP += 4; return;
  /* 11772e75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11772e78:;
  /* 11772e78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11772e7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11772e7e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11772e81 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11772e84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11772e87 pop esi */
  ESI = (pop32());
  /* 11772e88 pop edi */
  EDI = (pop32());
  /* 11772e89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11772e8a ret  */
  ESPCHK(0x11772b70u, _esp0);
  ESP += 4; return;
  /* 11772e8b nop  */
  /* nop */
L_11772e8c:;
  /* 11772e8c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11772e8f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11772e92 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11772e95 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11772e98 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11772e9b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11772e9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11772ea1 pop esi */
  ESI = (pop32());
  /* 11772ea2 pop edi */
  EDI = (pop32());
  /* 11772ea3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11772ea4 ret  */
  ESPCHK(0x11772b70u, _esp0);
  ESP += 4; return;
L_11772df9: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11772df9 (unresolved jump table)"); return;
L_11772dfd: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11772dfd (unresolved jump table)"); return;
L_11772e01: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11772e01 (unresolved jump table)"); return;
L_11772e05: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11772e05 (unresolved jump table)"); return;
L_11772e09: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11772e09 (unresolved jump table)"); return;
L_11772e0d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11772e0d (unresolved jump table)"); return;
L_11772e11: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11772e11 (unresolved jump table)"); return;
}

/* FUN_10002ea5 @ 0x11772ea5 (62 bytes, 15 insns) */
void f_11772ea5(void) {
  FTRACE(0x11772ea5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772ea5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11772eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 11772eac push dword ptr [0x11776908] */
  push32((uint32_t)(r32((uint32_t)(0x11776908))));
  /* 11772eb2 call dword ptr [0x11775034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775034))), 0x11772eb8u);
  /* 11772eb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11772eba mov dword ptr [0x117766cc], eax */
  w32((uint32_t)(0x117766cc), (EAX));
  /* 11772ebf jne 0x11772ec2 */
  if (!C.zf) goto L_11772ec2;
  /* 11772ec1 ret  */
  ESPCHK(0x11772ea5u, _esp0);
  ESP += 4; return;
L_11772ec2:;
  /* 11772ec2 and dword ptr [0x117766c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117766c4)))&(0x0u); w32((uint32_t)(0x117766c4), (_r)); fl_logic(_r,32); }
  /* 11772ec9 and dword ptr [0x117766c8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117766c8)))&(0x0u); w32((uint32_t)(0x117766c8), (_r)); fl_logic(_r,32); }
  /* 11772ed0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11772ed2 mov dword ptr [0x117766c0], eax */
  w32((uint32_t)(0x117766c0), (EAX));
  /* 11772ed7 mov dword ptr [0x117766b8], 0x10 */
  w32((uint32_t)(0x117766b8), (0x10u));
  /* 11772ee1 pop eax */
  EAX = (pop32());
  /* 11772ee2 ret  */
  ESPCHK(0x11772ea5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ee3 @ 0x11772ee3 (43 bytes, 14 insns) */
void f_11772ee3(void) {
  FTRACE(0x11772ee3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772ee3 mov eax, dword ptr [0x117766c8] */
  EAX = (r32((uint32_t)(0x117766c8)));
  /* 11772ee8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11772eeb mov eax, dword ptr [0x117766cc] */
  EAX = (r32((uint32_t)(0x117766cc)));
  /* 11772ef0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11772ef3:;
  /* 11772ef3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772ef5 jae 0x11772f0b */
  if (!C.cf) goto L_11772f0b;
  /* 11772ef7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11772efb sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772efe cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772f04 jb 0x11772f0d */
  if (C.cf) goto L_11772f0d;
  /* 11772f06 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11772f09 jmp 0x11772ef3 */
  goto L_11772ef3;
L_11772f0b:;
  /* 11772f0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11772f0d:;
  /* 11772f0d ret  */
  ESPCHK(0x11772ee3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f0e @ 0x11772f0e (811 bytes, 264 insns) */
void f_11772f0e(void) {
  FTRACE(0x11772f0eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11772f0e push ebp */
  push32((uint32_t)(EBP));
  /* 11772f0f mov ebp, esp */
  EBP = (ESP);
  /* 11772f11 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772f14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11772f17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11772f1a push ebx */
  push32((uint32_t)(EBX));
  /* 11772f1b push esi */
  push32((uint32_t)(ESI));
  /* 11772f1c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11772f1f mov esi, edx */
  ESI = (EDX);
  /* 11772f21 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772f24 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11772f27 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11772f2a push edi */
  push32((uint32_t)(EDI));
  /* 11772f2b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11772f2e mov ecx, esi */
  ECX = (ESI);
  /* 11772f30 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11772f33 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11772f39 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11772f3a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11772f3d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11772f44 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11772f47 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11772f4a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11772f4d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11772f50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11772f53 jne 0x11772fd4 */
  if (!C.zf) goto L_11772fd4;
  /* 11772f55 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11772f58 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11772f5a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11772f5b pop edi */
  EDI = (pop32());
  /* 11772f5c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11772f5f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772f61 jbe 0x11772f66 */
  if ((C.cf||C.zf)) goto L_11772f66;
  /* 11772f63 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11772f66:;
  /* 11772f66 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11772f6a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772f6e jne 0x11772fb8 */
  if (!C.zf) goto L_11772fb8;
  /* 11772f70 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11772f73 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772f76 jae 0x11772f94 */
  if (!C.cf) goto L_11772f94;
  /* 11772f78 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11772f7d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11772f7f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11772f83 not edi */
  EDI = (~(EDI));
  /* 11772f85 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11772f89 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11772f8b jne 0x11772fb8 */
  if (!C.zf) goto L_11772fb8;
  /* 11772f8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11772f90 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11772f92 jmp 0x11772fb8 */
  goto L_11772fb8;
L_11772f94:;
  /* 11772f94 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11772f97 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11772f9c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11772f9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11772fa1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11772fa5 not edi */
  EDI = (~(EDI));
  /* 11772fa7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11772fae dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11772fb0 jne 0x11772fb8 */
  if (!C.zf) goto L_11772fb8;
  /* 11772fb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11772fb5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11772fb8:;
  /* 11772fb8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11772fbc mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11772fc0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11772fc3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11772fc7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11772fcb add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11772fce mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11772fd1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11772fd4:;
  /* 11772fd4 mov edi, ebx */
  EDI = (EBX);
  /* 11772fd6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11772fd9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11772fda cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11772fdd jbe 0x11772fe2 */
  if ((C.cf||C.zf)) goto L_11772fe2;
  /* 11772fdf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11772fe1 pop edi */
  EDI = (pop32());
L_11772fe2:;
  /* 11772fe2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11772fe5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11772fe8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11772feb jne 0x11773091 */
  if (!C.zf) goto L_11773091;
  /* 11772ff1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11772ff4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11772ff7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11772ffa push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11772ffc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11772fff dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11773000 pop edx */
  EDX = (pop32());
  /* 11773001 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773003 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11773006 jbe 0x1177300d */
  if ((C.cf||C.zf)) goto L_1177300d;
  /* 11773008 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1177300b mov ecx, edx */
  ECX = (EDX);
L_1177300d:;
  /* 1177300d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11773010 mov edi, ebx */
  EDI = (EBX);
  /* 11773012 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11773015 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11773018 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11773019 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177301b jbe 0x1177301f */
  if ((C.cf||C.zf)) goto L_1177301f;
  /* 1177301d mov edi, edx */
  EDI = (EDX);
L_1177301f:;
  /* 1177301f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773021 je 0x1177308e */
  if (C.zf) goto L_1177308e;
  /* 11773023 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11773026 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11773029 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177302c jne 0x11773076 */
  if (!C.zf) goto L_11773076;
  /* 1177302e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11773031 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773034 jae 0x11773052 */
  if (!C.cf) goto L_11773052;
  /* 11773036 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1177303b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1177303d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11773041 not edx */
  EDX = (~(EDX));
  /* 11773043 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11773047 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11773049 jne 0x11773076 */
  if (!C.zf) goto L_11773076;
  /* 1177304b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1177304e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11773050 jmp 0x11773076 */
  goto L_11773076;
L_11773052:;
  /* 11773052 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11773055 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1177305a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1177305c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1177305f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11773063 not edx */
  EDX = (~(EDX));
  /* 11773065 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1177306c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1177306e jne 0x11773076 */
  if (!C.zf) goto L_11773076;
  /* 11773070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773073 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11773076:;
  /* 11773076 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11773079 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1177307c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1177307f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11773082 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11773085 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11773088 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1177308b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1177308e:;
  /* 1177308e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11773091:;
  /* 11773091 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773095 jne 0x117730a0 */
  if (!C.zf) goto L_117730a0;
  /* 11773097 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177309a je 0x11773129 */
  if (C.zf) goto L_11773129;
L_117730a0:;
  /* 117730a0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117730a3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 117730a6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 117730a9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 117730ac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117730af lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 117730b2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117730b5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 117730b8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117730bb mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 117730be mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117730c1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117730c4 jne 0x11773129 */
  if (!C.zf) goto L_11773129;
  /* 117730c6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 117730ca cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117730cd mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 117730d0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 117730d2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 117730d6 jae 0x117730fd */
  if (!C.cf) goto L_117730fd;
  /* 117730d8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117730dc jne 0x117730ec */
  if (!C.zf) goto L_117730ec;
  /* 117730de mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117730e3 mov ecx, edi */
  ECX = (EDI);
  /* 117730e5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117730e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117730ea or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_117730ec:;
  /* 117730ec mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117730f1 mov ecx, edi */
  ECX = (EDI);
  /* 117730f3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117730f5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 117730f9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 117730fb jmp 0x11773126 */
  goto L_11773126;
L_117730fd:;
  /* 117730fd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11773101 jne 0x11773113 */
  if (!C.zf) goto L_11773113;
  /* 11773103 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11773106 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1177310b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1177310d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773110 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11773113:;
  /* 11773113 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11773116 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1177311b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1177311d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11773124 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11773126:;
  /* 11773126 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11773129:;
  /* 11773129 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1177312c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 1177312e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11773132 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11773134 jne 0x11773234 */
  if (!C.zf) goto L_11773234;
  /* 1177313a mov eax, dword ptr [0x117766c4] */
  EAX = (r32((uint32_t)(0x117766c4)));
  /* 1177313f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11773141 je 0x11773226 */
  if (C.zf) goto L_11773226;
  /* 11773147 mov ecx, dword ptr [0x117766bc] */
  ECX = (r32((uint32_t)(0x117766bc)));
  /* 1177314d mov edi, dword ptr [0x1177504c] */
  EDI = (r32((uint32_t)(0x1177504c)));
  /* 11773153 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11773156 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11773159 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1177315e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11773163 push ebx */
  push32((uint32_t)(EBX));
  /* 11773164 push ecx */
  push32((uint32_t)(ECX));
  /* 11773165 call edi */
  call_ind((uint32_t)(EDI), 0x11773167u);
  /* 11773167 mov ecx, dword ptr [0x117766bc] */
  ECX = (r32((uint32_t)(0x117766bc)));
  /* 1177316d mov eax, dword ptr [0x117766c4] */
  EAX = (r32((uint32_t)(0x117766c4)));
  /* 11773172 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11773177 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11773179 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1177317c mov eax, dword ptr [0x117766c4] */
  EAX = (r32((uint32_t)(0x117766c4)));
  /* 11773181 mov ecx, dword ptr [0x117766bc] */
  ECX = (r32((uint32_t)(0x117766bc)));
  /* 11773187 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1177318a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11773192 mov eax, dword ptr [0x117766c4] */
  EAX = (r32((uint32_t)(0x117766c4)));
  /* 11773197 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1177319a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1177319d mov eax, dword ptr [0x117766c4] */
  EAX = (r32((uint32_t)(0x117766c4)));
  /* 117731a2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117731a5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117731a9 jne 0x117731b4 */
  if (!C.zf) goto L_117731b4;
  /* 117731ab and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 117731af mov eax, dword ptr [0x117766c4] */
  EAX = (r32((uint32_t)(0x117766c4)));
L_117731b4:;
  /* 117731b4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117731b8 jne 0x11773226 */
  if (!C.zf) goto L_11773226;
  /* 117731ba push ebx */
  push32((uint32_t)(EBX));
  /* 117731bb push 0 */
  push32((uint32_t)(0x0u));
  /* 117731bd push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 117731c0 call edi */
  call_ind((uint32_t)(EDI), 0x117731c2u);
  /* 117731c2 mov eax, dword ptr [0x117766c4] */
  EAX = (r32((uint32_t)(0x117766c4)));
  /* 117731c7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 117731ca push 0 */
  push32((uint32_t)(0x0u));
  /* 117731cc push dword ptr [0x11776908] */
  push32((uint32_t)(r32((uint32_t)(0x11776908))));
  /* 117731d2 call dword ptr [0x11775048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775048))), 0x117731d8u);
  /* 117731d8 mov eax, dword ptr [0x117766c8] */
  EAX = (r32((uint32_t)(0x117766c8)));
  /* 117731dd mov edx, dword ptr [0x117766cc] */
  EDX = (r32((uint32_t)(0x117766cc)));
  /* 117731e3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 117731e6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 117731e9 mov ecx, eax */
  ECX = (EAX);
  /* 117731eb mov eax, dword ptr [0x117766c4] */
  EAX = (r32((uint32_t)(0x117766c4)));
  /* 117731f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117731f2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 117731f6 push ecx */
  push32((uint32_t)(ECX));
  /* 117731f7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 117731fa push ecx */
  push32((uint32_t)(ECX));
  /* 117731fb push eax */
  push32((uint32_t)(EAX));
  /* 117731fc call 0x11773c90 */
  push32(0x11773201u); f_11773c90();
  /* 11773201 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773204 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11773207 dec dword ptr [0x117766c8] */
  { uint32_t _r=(r32((uint32_t)(0x117766c8)))-1; w32((uint32_t)(0x117766c8), (_r)); fl_dec(_r,32); }
  /* 1177320d cmp eax, dword ptr [0x117766c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117766c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773213 jbe 0x11773218 */
  if ((C.cf||C.zf)) goto L_11773218;
  /* 11773215 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11773218:;
  /* 11773218 mov ecx, dword ptr [0x117766cc] */
  ECX = (r32((uint32_t)(0x117766cc)));
  /* 1177321e mov dword ptr [0x117766c0], ecx */
  w32((uint32_t)(0x117766c0), (ECX));
  /* 11773224 jmp 0x11773229 */
  goto L_11773229;
L_11773226:;
  /* 11773226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11773229:;
  /* 11773229 mov dword ptr [0x117766c4], eax */
  w32((uint32_t)(0x117766c4), (EAX));
  /* 1177322e mov dword ptr [0x117766bc], esi */
  w32((uint32_t)(0x117766bc), (ESI));
L_11773234:;
  /* 11773234 pop edi */
  EDI = (pop32());
  /* 11773235 pop esi */
  ESI = (pop32());
  /* 11773236 pop ebx */
  EBX = (pop32());
  /* 11773237 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11773238 ret  */
  ESPCHK(0x11772f0eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003239 @ 0x11773239 (777 bytes, 275 insns) */
void f_11773239(void) {
  FTRACE(0x11773239u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11773239 push ebp */
  push32((uint32_t)(EBP));
  /* 1177323a mov ebp, esp */
  EBP = (ESP);
  /* 1177323c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1177323f mov eax, dword ptr [0x117766c8] */
  EAX = (r32((uint32_t)(0x117766c8)));
  /* 11773244 mov edx, dword ptr [0x117766cc] */
  EDX = (r32((uint32_t)(0x117766cc)));
  /* 1177324a push ebx */
  push32((uint32_t)(EBX));
  /* 1177324b push esi */
  push32((uint32_t)(ESI));
  /* 1177324c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1177324f push edi */
  push32((uint32_t)(EDI));
  /* 11773250 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11773253 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773256 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11773259 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1177325c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1177325f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11773262 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11773265 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11773266 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773269 jge 0x11773279 */
  if ((C.sf==C.of)) goto L_11773279;
  /* 1177326b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1177326e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11773270 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11773274 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11773277 jmp 0x11773289 */
  goto L_11773289;
L_11773279:;
  /* 11773279 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1177327c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1177327f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11773281 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11773283 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11773286 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11773289:;
  /* 11773289 mov eax, dword ptr [0x117766c0] */
  EAX = (r32((uint32_t)(0x117766c0)));
  /* 1177328e mov ebx, eax */
  EBX = (EAX);
  /* 11773290 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773292 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11773295 jae 0x117732b0 */
  if (!C.cf) goto L_117732b0;
L_11773297:;
  /* 11773297 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1177329a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1177329c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1177329f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 117732a1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 117732a3 jne 0x117732b0 */
  if (!C.zf) goto L_117732b0;
  /* 117732a5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117732a8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117732ab mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117732ae jb 0x11773297 */
  if (C.cf) goto L_11773297;
L_117732b0:;
  /* 117732b0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117732b3 jne 0x1177332e */
  if (!C.zf) goto L_1177332e;
  /* 117732b5 mov ebx, edx */
  EBX = (EDX);
L_117732b7:;
  /* 117732b7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117732b9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117732bc jae 0x117732d3 */
  if (!C.cf) goto L_117732d3;
  /* 117732be mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 117732c1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 117732c3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 117732c6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 117732c8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 117732ca jne 0x117732d1 */
  if (!C.zf) goto L_117732d1;
  /* 117732cc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117732cf jmp 0x117732b7 */
  goto L_117732b7;
L_117732d1:;
  /* 117732d1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_117732d3:;
  /* 117732d3 jne 0x1177332e */
  if (!C.zf) goto L_1177332e;
L_117732d5:;
  /* 117732d5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117732d8 jae 0x117732eb */
  if (!C.cf) goto L_117732eb;
  /* 117732da cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117732de jne 0x117732e8 */
  if (!C.zf) goto L_117732e8;
  /* 117732e0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117732e3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117732e6 jmp 0x117732d5 */
  goto L_117732d5;
L_117732e8:;
  /* 117732e8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_117732eb:;
  /* 117732eb jne 0x11773313 */
  if (!C.zf) goto L_11773313;
  /* 117732ed mov ebx, edx */
  EBX = (EDX);
L_117732ef:;
  /* 117732ef cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117732f1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117732f4 jae 0x11773303 */
  if (!C.cf) goto L_11773303;
  /* 117732f6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117732fa jne 0x11773301 */
  if (!C.zf) goto L_11773301;
  /* 117732fc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117732ff jmp 0x117732ef */
  goto L_117732ef;
L_11773301:;
  /* 11773301 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11773303:;
  /* 11773303 jne 0x11773313 */
  if (!C.zf) goto L_11773313;
  /* 11773305 call 0x11773542 */
  push32(0x1177330au); f_11773542();
  /* 1177330a mov ebx, eax */
  EBX = (EAX);
  /* 1177330c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1177330e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11773311 je 0x11773327 */
  if (C.zf) goto L_11773327;
L_11773313:;
  /* 11773313 push ebx */
  push32((uint32_t)(EBX));
  /* 11773314 call 0x117735f3 */
  push32(0x11773319u); f_117735f3();
  /* 11773319 pop ecx */
  ECX = (pop32());
  /* 1177331a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1177331d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1177331f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11773322 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773325 jne 0x1177332e */
  if (!C.zf) goto L_1177332e;
L_11773327:;
  /* 11773327 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11773329 jmp 0x1177353d */
  goto L_1177353d;
L_1177332e:;
  /* 1177332e mov dword ptr [0x117766c0], ebx */
  w32((uint32_t)(0x117766c0), (EBX));
  /* 11773334 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11773337 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11773339 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177333c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1177333f je 0x11773355 */
  if (C.zf) goto L_11773355;
  /* 11773341 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11773348 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1177334c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1177334f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11773351 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11773353 jne 0x1177338c */
  if (!C.zf) goto L_1177338c;
L_11773355:;
  /* 11773355 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1177335b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1177335e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11773361 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11773364 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11773368 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1177336b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1177336d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11773370 jne 0x11773389 */
  if (!C.zf) goto L_11773389;
L_11773372:;
  /* 11773372 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11773378 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1177337b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1177337e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11773381 mov edi, esi */
  EDI = (ESI);
  /* 11773383 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11773385 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11773387 je 0x11773372 */
  if (C.zf) goto L_11773372;
L_11773389:;
  /* 11773389 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1177338c:;
  /* 1177338c mov ecx, edx */
  ECX = (EDX);
  /* 1177338e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11773390 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11773396 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1177339d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117733a0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 117733a4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 117733a6 jne 0x117733b5 */
  if (!C.zf) goto L_117733b5;
  /* 117733a8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 117733af push 0x20 */
  push32((uint32_t)(0x20u));
  /* 117733b1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 117733b4 pop edi */
  EDI = (pop32());
L_117733b5:;
  /* 117733b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117733b7 jl 0x117733be */
  if ((C.sf!=C.of)) goto L_117733be;
  /* 117733b9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 117733bb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117733bc jmp 0x117733b5 */
  goto L_117733b5;
L_117733be:;
  /* 117733be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117733c1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 117733c5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 117733c7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117733ca mov esi, ecx */
  ESI = (ECX);
  /* 117733cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117733cf sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 117733d2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 117733d3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117733d6 jle 0x117733db */
  if ((C.zf||C.sf!=C.of)) goto L_117733db;
  /* 117733d8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117733da pop esi */
  ESI = (pop32());
L_117733db:;
  /* 117733db cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117733dd je 0x117734f0 */
  if (C.zf) goto L_117734f0;
  /* 117733e3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117733e6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117733e9 jne 0x1177344c */
  if (!C.zf) goto L_1177344c;
  /* 117733eb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117733ee jge 0x1177341b */
  if ((C.sf==C.of)) goto L_1177341b;
  /* 117733f0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117733f5 mov ecx, edi */
  ECX = (EDI);
  /* 117733f7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117733f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117733fc lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11773400 not ebx */
  EBX = (~(EBX));
  /* 11773402 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11773405 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11773409 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1177340d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1177340f jne 0x11773449 */
  if (!C.zf) goto L_11773449;
  /* 11773411 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773414 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11773417 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11773419 jmp 0x1177344c */
  goto L_1177344c;
L_1177341b:;
  /* 1177341b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1177341e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11773423 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11773425 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11773428 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1177342c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11773433 not ebx */
  EBX = (~(EBX));
  /* 11773435 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11773437 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11773439 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1177343c jne 0x11773449 */
  if (!C.zf) goto L_11773449;
  /* 1177343e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773441 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11773444 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11773447 jmp 0x1177344c */
  goto L_1177344c;
L_11773449:;
  /* 11773449 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1177344c:;
  /* 1177344c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1177344f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11773452 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773456 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11773459 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1177345c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1177345f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11773462 je 0x117734fc */
  if (C.zf) goto L_117734fc;
  /* 11773468 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1177346b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1177346f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11773472 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11773475 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11773478 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1177347b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1177347e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11773481 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11773484 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773487 jne 0x117734ed */
  if (!C.zf) goto L_117734ed;
  /* 11773489 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1177348d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773490 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11773493 jge 0x117734be */
  if ((C.sf==C.of)) goto L_117734be;
  /* 11773495 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11773497 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1177349b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1177349f jne 0x117734ac */
  if (!C.zf) goto L_117734ac;
  /* 117734a1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117734a6 mov ecx, esi */
  ECX = (ESI);
  /* 117734a8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117734aa or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_117734ac:;
  /* 117734ac mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117734b1 mov ecx, esi */
  ECX = (ESI);
  /* 117734b3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117734b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117734b8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 117734bc jmp 0x117734ed */
  goto L_117734ed;
L_117734be:;
  /* 117734be inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 117734c0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117734c4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 117734c8 jne 0x117734d7 */
  if (!C.zf) goto L_117734d7;
  /* 117734ca lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 117734cd mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117734d2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117734d4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_117734d7:;
  /* 117734d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117734da lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 117734e1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 117734e4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 117734e9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 117734eb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_117734ed:;
  /* 117734ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_117734f0:;
  /* 117734f0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117734f2 je 0x117734ff */
  if (C.zf) goto L_117734ff;
  /* 117734f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117734f6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 117734fa jmp 0x117734ff */
  goto L_117734ff;
L_117734fc:;
  /* 117734fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_117734ff:;
  /* 117734ff mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11773502 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11773504 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11773507 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11773509 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1177350d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11773510 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11773512 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11773514 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11773517 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11773519 jne 0x11773535 */
  if (!C.zf) goto L_11773535;
  /* 1177351b cmp ebx, dword ptr [0x117766c4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x117766c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773521 jne 0x11773535 */
  if (!C.zf) goto L_11773535;
  /* 11773523 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11773526 cmp ecx, dword ptr [0x117766bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117766bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177352c jne 0x11773535 */
  if (!C.zf) goto L_11773535;
  /* 1177352e and dword ptr [0x117766c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117766c4)))&(0x0u); w32((uint32_t)(0x117766c4), (_r)); fl_logic(_r,32); }
L_11773535:;
  /* 11773535 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11773538 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1177353a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1177353d:;
  /* 1177353d pop edi */
  EDI = (pop32());
  /* 1177353e pop esi */
  ESI = (pop32());
  /* 1177353f pop ebx */
  EBX = (pop32());
  /* 11773540 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11773541 ret  */
  ESPCHK(0x11773239u, _esp0);
  ESP += 4; return;
}

/* FUN_10003542 @ 0x11773542 (177 bytes, 53 insns) */
void f_11773542(void) {
  FTRACE(0x11773542u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11773542 mov eax, dword ptr [0x117766c8] */
  EAX = (r32((uint32_t)(0x117766c8)));
  /* 11773547 mov ecx, dword ptr [0x117766b8] */
  ECX = (r32((uint32_t)(0x117766b8)));
  /* 1177354d push esi */
  push32((uint32_t)(ESI));
  /* 1177354e push edi */
  push32((uint32_t)(EDI));
  /* 1177354f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11773551 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773553 jne 0x11773585 */
  if (!C.zf) goto L_11773585;
  /* 11773555 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11773559 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1177355c push eax */
  push32((uint32_t)(EAX));
  /* 1177355d push dword ptr [0x117766cc] */
  push32((uint32_t)(r32((uint32_t)(0x117766cc))));
  /* 11773563 push edi */
  push32((uint32_t)(EDI));
  /* 11773564 push dword ptr [0x11776908] */
  push32((uint32_t)(r32((uint32_t)(0x11776908))));
  /* 1177356a call dword ptr [0x11775020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775020))), 0x11773570u);
  /* 11773570 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773572 je 0x117735d5 */
  if (C.zf) goto L_117735d5;
  /* 11773574 add dword ptr [0x117766b8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x117766b8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x117766b8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1177357b mov dword ptr [0x117766cc], eax */
  w32((uint32_t)(0x117766cc), (EAX));
  /* 11773580 mov eax, dword ptr [0x117766c8] */
  EAX = (r32((uint32_t)(0x117766c8)));
L_11773585:;
  /* 11773585 mov ecx, dword ptr [0x117766cc] */
  ECX = (r32((uint32_t)(0x117766cc)));
  /* 1177358b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11773590 push 8 */
  push32((uint32_t)(0x8u));
  /* 11773592 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11773595 push dword ptr [0x11776908] */
  push32((uint32_t)(r32((uint32_t)(0x11776908))));
  /* 1177359b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1177359e call dword ptr [0x11775034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775034))), 0x117735a4u);
  /* 117735a4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117735a6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 117735a9 je 0x117735d5 */
  if (C.zf) goto L_117735d5;
  /* 117735ab push 4 */
  push32((uint32_t)(0x4u));
  /* 117735ad push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 117735b2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 117735b7 push edi */
  push32((uint32_t)(EDI));
  /* 117735b8 call dword ptr [0x11775024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775024))), 0x117735beu);
  /* 117735be cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117735c0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 117735c3 jne 0x117735d9 */
  if (!C.zf) goto L_117735d9;
  /* 117735c5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 117735c8 push edi */
  push32((uint32_t)(EDI));
  /* 117735c9 push dword ptr [0x11776908] */
  push32((uint32_t)(r32((uint32_t)(0x11776908))));
  /* 117735cf call dword ptr [0x11775048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775048))), 0x117735d5u);
L_117735d5:;
  /* 117735d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117735d7 jmp 0x117735f0 */
  goto L_117735f0;
L_117735d9:;
  /* 117735d9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 117735dd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 117735df mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 117735e2 inc dword ptr [0x117766c8] */
  { uint32_t _r=(r32((uint32_t)(0x117766c8)))+1; w32((uint32_t)(0x117766c8), (_r)); fl_inc(_r,32); }
  /* 117735e8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 117735eb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 117735ee mov eax, esi */
  EAX = (ESI);
L_117735f0:;
  /* 117735f0 pop edi */
  EDI = (pop32());
  /* 117735f1 pop esi */
  ESI = (pop32());
  /* 117735f2 ret  */
  ESPCHK(0x11773542u, _esp0);
  ESP += 4; return;
}

/* FUN_100035f3 @ 0x117735f3 (251 bytes, 85 insns) */
void f_117735f3(void) {
  FTRACE(0x117735f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117735f3 push ebp */
  push32((uint32_t)(EBP));
  /* 117735f4 mov ebp, esp */
  EBP = (ESP);
  /* 117735f6 push ecx */
  push32((uint32_t)(ECX));
  /* 117735f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117735fa push ebx */
  push32((uint32_t)(EBX));
  /* 117735fb push esi */
  push32((uint32_t)(ESI));
  /* 117735fc push edi */
  push32((uint32_t)(EDI));
  /* 117735fd mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11773600 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11773603 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11773605:;
  /* 11773605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11773607 jl 0x1177360e */
  if ((C.sf!=C.of)) goto L_1177360e;
  /* 11773609 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1177360b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1177360c jmp 0x11773605 */
  goto L_11773605;
L_1177360e:;
  /* 1177360e mov eax, ebx */
  EAX = (EBX);
  /* 11773610 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11773612 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11773618 pop edx */
  EDX = (pop32());
  /* 11773619 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11773620 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11773623:;
  /* 11773623 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11773626 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11773629 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1177362c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1177362d jne 0x11773623 */
  if (!C.zf) goto L_11773623;
  /* 1177362f mov edi, ebx */
  EDI = (EBX);
  /* 11773631 push 4 */
  push32((uint32_t)(0x4u));
  /* 11773633 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11773636 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11773639 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1177363e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11773643 push edi */
  push32((uint32_t)(EDI));
  /* 11773644 call dword ptr [0x11775024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775024))), 0x1177364au);
  /* 1177364a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1177364c jne 0x11773656 */
  if (!C.zf) goto L_11773656;
  /* 1177364e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11773651 jmp 0x117736e9 */
  goto L_117736e9;
L_11773656:;
  /* 11773656 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1177365c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177365e ja 0x1177369c */
  if ((!C.cf&&!C.zf)) goto L_1177369c;
  /* 11773660 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11773663:;
  /* 11773663 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11773667 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1177366e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11773674 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1177367b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1177367d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11773683 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11773686 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11773690 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11773695 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11773698 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177369a jbe 0x11773663 */
  if ((C.cf||C.zf)) goto L_11773663;
L_1177369c:;
  /* 1177369c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1177369f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 117736a2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117736a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117736a9 pop edi */
  EDI = (pop32());
  /* 117736aa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 117736ad mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 117736b0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 117736b3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 117736b6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 117736b9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 117736be mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 117736c5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 117736c8 mov cl, al */
  CL = (AL);
  /* 117736ca inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 117736cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117736ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117736d1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 117736d4 jne 0x117736d9 */
  if (!C.zf) goto L_117736d9;
  /* 117736d6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_117736d9:;
  /* 117736d9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117736de mov ecx, ebx */
  ECX = (EBX);
  /* 117736e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117736e2 not edx */
  EDX = (~(EDX));
  /* 117736e4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 117736e7 mov eax, ebx */
  EAX = (EBX);
L_117736e9:;
  /* 117736e9 pop edi */
  EDI = (pop32());
  /* 117736ea pop esi */
  ESI = (pop32());
  /* 117736eb pop ebx */
  EBX = (pop32());
  /* 117736ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117736ed ret  */
  ESPCHK(0x117735f3u, _esp0);
  ESP += 4; return;
}

/* FUN_100036ee @ 0x117736ee (137 bytes, 50 insns) */
void f_117736ee(void) {
  FTRACE(0x117736eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117736ee push ebx */
  push32((uint32_t)(EBX));
  /* 117736ef xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117736f1 cmp dword ptr [0x1177667c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1177667c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117736f7 push esi */
  push32((uint32_t)(ESI));
  /* 117736f8 push edi */
  push32((uint32_t)(EDI));
  /* 117736f9 jne 0x1177373d */
  if (!C.zf) goto L_1177373d;
  /* 117736fb push 0x11775438 */
  push32((uint32_t)(0x11775438u));
  /* 11773700 call dword ptr [0x11775018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775018))), 0x11773706u);
  /* 11773706 mov edi, eax */
  EDI = (EAX);
  /* 11773708 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177370a je 0x11773773 */
  if (C.zf) goto L_11773773;
  /* 1177370c mov esi, dword ptr [0x1177501c] */
  ESI = (r32((uint32_t)(0x1177501c)));
  /* 11773712 push 0x1177542c */
  push32((uint32_t)(0x1177542cu));
  /* 11773717 push edi */
  push32((uint32_t)(EDI));
  /* 11773718 call esi */
  call_ind((uint32_t)(ESI), 0x1177371au);
  /* 1177371a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1177371c mov dword ptr [0x1177667c], eax */
  w32((uint32_t)(0x1177667c), (EAX));
  /* 11773721 je 0x11773773 */
  if (C.zf) goto L_11773773;
  /* 11773723 push 0x1177541c */
  push32((uint32_t)(0x1177541cu));
  /* 11773728 push edi */
  push32((uint32_t)(EDI));
  /* 11773729 call esi */
  call_ind((uint32_t)(ESI), 0x1177372bu);
  /* 1177372b push 0x11775408 */
  push32((uint32_t)(0x11775408u));
  /* 11773730 push edi */
  push32((uint32_t)(EDI));
  /* 11773731 mov dword ptr [0x11776680], eax */
  w32((uint32_t)(0x11776680), (EAX));
  /* 11773736 call esi */
  call_ind((uint32_t)(ESI), 0x11773738u);
  /* 11773738 mov dword ptr [0x11776684], eax */
  w32((uint32_t)(0x11776684), (EAX));
L_1177373d:;
  /* 1177373d mov eax, dword ptr [0x11776680] */
  EAX = (r32((uint32_t)(0x11776680)));
  /* 11773742 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11773744 je 0x1177375c */
  if (C.zf) goto L_1177375c;
  /* 11773746 call eax */
  call_ind((uint32_t)(EAX), 0x11773748u);
  /* 11773748 mov ebx, eax */
  EBX = (EAX);
  /* 1177374a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1177374c je 0x1177375c */
  if (C.zf) goto L_1177375c;
  /* 1177374e mov eax, dword ptr [0x11776684] */
  EAX = (r32((uint32_t)(0x11776684)));
  /* 11773753 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11773755 je 0x1177375c */
  if (C.zf) goto L_1177375c;
  /* 11773757 push ebx */
  push32((uint32_t)(EBX));
  /* 11773758 call eax */
  call_ind((uint32_t)(EAX), 0x1177375au);
  /* 1177375a mov ebx, eax */
  EBX = (EAX);
L_1177375c:;
  /* 1177375c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11773760 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11773764 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11773768 push ebx */
  push32((uint32_t)(EBX));
  /* 11773769 call dword ptr [0x1177667c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1177667c))), 0x1177376fu);
L_1177376f:;
  /* 1177376f pop edi */
  EDI = (pop32());
  /* 11773770 pop esi */
  ESI = (pop32());
  /* 11773771 pop ebx */
  EBX = (pop32());
  /* 11773772 ret  */
  ESPCHK(0x117736eeu, _esp0);
  ESP += 4; return;
L_11773773:;
  /* 11773773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11773775 jmp 0x1177376f */
  goto L_1177376f;
}

/* _strncpy @ 0x11773780 (254 bytes, 109 insns) */
void f_11773780(void) {
  FTRACE(0x11773780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11773780 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11773784 push edi */
  push32((uint32_t)(EDI));
  /* 11773785 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11773787 je 0x11773803 */
  if (C.zf) goto L_11773803;
  /* 11773789 push esi */
  push32((uint32_t)(ESI));
  /* 1177378a push ebx */
  push32((uint32_t)(EBX));
  /* 1177378b mov ebx, ecx */
  EBX = (ECX);
  /* 1177378d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11773791 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11773797 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1177379b jne 0x117737a4 */
  if (!C.zf) goto L_117737a4;
  /* 1177379d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117737a0 jne 0x11773811 */
  if (!C.zf) goto L_11773811;
  /* 117737a2 jmp 0x117737c5 */
  goto L_117737c5;
L_117737a4:;
  /* 117737a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117737a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117737a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117737a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117737aa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117737ab je 0x117737d2 */
  if (C.zf) goto L_117737d2;
  /* 117737ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117737af je 0x117737da */
  if (C.zf) goto L_117737da;
  /* 117737b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 117737b7 jne 0x117737a4 */
  if (!C.zf) goto L_117737a4;
  /* 117737b9 mov ebx, ecx */
  EBX = (ECX);
  /* 117737bb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117737be jne 0x11773811 */
  if (!C.zf) goto L_11773811;
L_117737c0:;
  /* 117737c0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 117737c3 je 0x117737d2 */
  if (C.zf) goto L_117737d2;
L_117737c5:;
  /* 117737c5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117737c7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117737c8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117737ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117737cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117737cd je 0x117737fe */
  if (C.zf) goto L_117737fe;
  /* 117737cf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117737d0 jne 0x117737c5 */
  if (!C.zf) goto L_117737c5;
L_117737d2:;
  /* 117737d2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117737d6 pop ebx */
  EBX = (pop32());
  /* 117737d7 pop esi */
  ESI = (pop32());
  /* 117737d8 pop edi */
  EDI = (pop32());
  /* 117737d9 ret  */
  ESPCHK(0x11773780u, _esp0);
  ESP += 4; return;
L_117737da:;
  /* 117737da test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117737e0 je 0x117737f4 */
  if (C.zf) goto L_117737f4;
L_117737e2:;
  /* 117737e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117737e4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117737e5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117737e6 je 0x11773876 */
  if (C.zf) goto L_11773876;
  /* 117737ec test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117737f2 jne 0x117737e2 */
  if (!C.zf) goto L_117737e2;
L_117737f4:;
  /* 117737f4 mov ebx, ecx */
  EBX = (ECX);
  /* 117737f6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117737f9 jne 0x11773867 */
  if (!C.zf) goto L_11773867;
L_117737fb:;
  /* 117737fb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117737fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_117737fe:;
  /* 117737fe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117737ff jne 0x117737fb */
  if (!C.zf) goto L_117737fb;
  /* 11773801 pop ebx */
  EBX = (pop32());
  /* 11773802 pop esi */
  ESI = (pop32());
L_11773803:;
  /* 11773803 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11773807 pop edi */
  EDI = (pop32());
  /* 11773808 ret  */
  ESPCHK(0x11773780u, _esp0);
  ESP += 4; return;
L_11773809:;
  /* 11773809 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1177380b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1177380e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1177380f je 0x117737c0 */
  if (C.zf) goto L_117737c0;
L_11773811:;
  /* 11773811 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11773816 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11773818 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1177381a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1177381d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1177381f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11773821 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11773824 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11773829 je 0x11773809 */
  if (C.zf) goto L_11773809;
  /* 1177382b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1177382d je 0x1177385b */
  if (C.zf) goto L_1177385b;
  /* 1177382f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11773831 je 0x11773851 */
  if (C.zf) goto L_11773851;
  /* 11773833 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11773839 je 0x11773847 */
  if (C.zf) goto L_11773847;
  /* 1177383b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11773841 jne 0x11773809 */
  if (!C.zf) goto L_11773809;
  /* 11773843 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11773845 jmp 0x1177385f */
  goto L_1177385f;
L_11773847:;
  /* 11773847 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1177384d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1177384f jmp 0x1177385f */
  goto L_1177385f;
L_11773851:;
  /* 11773851 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11773857 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11773859 jmp 0x1177385f */
  goto L_1177385f;
L_1177385b:;
  /* 1177385b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1177385d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1177385f:;
  /* 1177385f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11773862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11773864 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11773865 je 0x11773871 */
  if (C.zf) goto L_11773871;
L_11773867:;
  /* 11773867 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11773869:;
  /* 11773869 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1177386b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1177386e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1177386f jne 0x11773869 */
  if (!C.zf) goto L_11773869;
L_11773871:;
  /* 11773871 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11773874 jne 0x117737fb */
  if (!C.zf) goto L_117737fb;
L_11773876:;
  /* 11773876 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1177387a pop ebx */
  EBX = (pop32());
  /* 1177387b pop esi */
  ESI = (pop32());
  /* 1177387c pop edi */
  EDI = (pop32());
  /* 1177387d ret  */
  ESPCHK(0x11773780u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11773880 (88 bytes, 40 insns) */
void f_11773880(void) {
  FTRACE(0x11773880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11773880 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11773884 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11773888 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1177388a je 0x117738d3 */
  if (C.zf) goto L_117738d3;
  /* 1177388c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1177388e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11773892 push edi */
  push32((uint32_t)(EDI));
  /* 11773893 mov edi, ecx */
  EDI = (ECX);
  /* 11773895 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773898 jb 0x117738c7 */
  if (C.cf) goto L_117738c7;
  /* 1177389a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1177389c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1177389f je 0x117738a9 */
  if (C.zf) goto L_117738a9;
  /* 117738a1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_117738a3:;
  /* 117738a3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117738a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117738a6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117738a7 jne 0x117738a3 */
  if (!C.zf) goto L_117738a3;
L_117738a9:;
  /* 117738a9 mov ecx, eax */
  ECX = (EAX);
  /* 117738ab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 117738ae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117738b0 mov ecx, eax */
  ECX = (EAX);
  /* 117738b2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 117738b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117738b7 mov ecx, edx */
  ECX = (EDX);
  /* 117738b9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117738bc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117738bf je 0x117738c7 */
  if (C.zf) goto L_117738c7;
  /* 117738c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117738c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117738c5 je 0x117738cd */
  if (C.zf) goto L_117738cd;
L_117738c7:;
  /* 117738c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117738c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117738ca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 117738cb jne 0x117738c7 */
  if (!C.zf) goto L_117738c7;
L_117738cd:;
  /* 117738cd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117738d1 pop edi */
  EDI = (pop32());
  /* 117738d2 ret  */
  ESPCHK(0x11773880u, _esp0);
  ESP += 4; return;
L_117738d3:;
  /* 117738d3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 117738d7 ret  */
  ESPCHK(0x11773880u, _esp0);
  ESP += 4; return;
}

/* FUN_100038d8 @ 0x117738d8 (27 bytes, 13 insns) */
void f_117738d8(void) {
  FTRACE(0x117738d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117738d8 mov eax, dword ptr [0x11776688] */
  EAX = (r32((uint32_t)(0x11776688)));
  /* 117738dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117738df je 0x117738f0 */
  if (C.zf) goto L_117738f0;
  /* 117738e1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 117738e5 call eax */
  call_ind((uint32_t)(EAX), 0x117738e7u);
  /* 117738e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117738e9 pop ecx */
  ECX = (pop32());
  /* 117738ea je 0x117738f0 */
  if (C.zf) goto L_117738f0;
  /* 117738ec push 1 */
  push32((uint32_t)(0x1u));
  /* 117738ee pop eax */
  EAX = (pop32());
  /* 117738ef ret  */
  ESPCHK(0x117738d8u, _esp0);
  ESP += 4; return;
L_117738f0:;
  /* 117738f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117738f2 ret  */
  ESPCHK(0x117738d8u, _esp0);
  ESP += 4; return;
}

/* FUN_100038f3 @ 0x117738f3 (511 bytes, 193 insns) */
void f_117738f3(void) {
  FTRACE(0x117738f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117738f3 push ebp */
  push32((uint32_t)(EBP));
  /* 117738f4 mov ebp, esp */
  EBP = (ESP);
  /* 117738f6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117738f8 push 0x11775450 */
  push32((uint32_t)(0x11775450u));
  /* 117738fd push 0x117740c0 */
  push32((uint32_t)(0x117740c0u));
  /* 11773902 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11773908 push eax */
  push32((uint32_t)(EAX));
  /* 11773909 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11773910 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11773913 push ebx */
  push32((uint32_t)(EBX));
  /* 11773914 push esi */
  push32((uint32_t)(ESI));
  /* 11773915 push edi */
  push32((uint32_t)(EDI));
  /* 11773916 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11773919 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1177391b cmp dword ptr [0x117766b0], edi */
  { uint32_t _a=(r32((uint32_t)(0x117766b0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773921 jne 0x11773969 */
  if (!C.zf) goto L_11773969;
  /* 11773923 push edi */
  push32((uint32_t)(EDI));
  /* 11773924 push edi */
  push32((uint32_t)(EDI));
  /* 11773925 push 1 */
  push32((uint32_t)(0x1u));
  /* 11773927 pop ebx */
  EBX = (pop32());
  /* 11773928 push ebx */
  push32((uint32_t)(EBX));
  /* 11773929 push 0x11775448 */
  push32((uint32_t)(0x11775448u));
  /* 1177392e mov esi, 0x100 */
  ESI = (0x100u);
  /* 11773933 push esi */
  push32((uint32_t)(ESI));
  /* 11773934 push edi */
  push32((uint32_t)(EDI));
  /* 11773935 call dword ptr [0x1177500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1177500c))), 0x1177393bu);
  /* 1177393b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1177393d je 0x11773947 */
  if (C.zf) goto L_11773947;
  /* 1177393f mov dword ptr [0x117766b0], ebx */
  w32((uint32_t)(0x117766b0), (EBX));
  /* 11773945 jmp 0x11773969 */
  goto L_11773969;
L_11773947:;
  /* 11773947 push edi */
  push32((uint32_t)(EDI));
  /* 11773948 push edi */
  push32((uint32_t)(EDI));
  /* 11773949 push ebx */
  push32((uint32_t)(EBX));
  /* 1177394a push 0x11775444 */
  push32((uint32_t)(0x11775444u));
  /* 1177394f push esi */
  push32((uint32_t)(ESI));
  /* 11773950 push edi */
  push32((uint32_t)(EDI));
  /* 11773951 call dword ptr [0x11775010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775010))), 0x11773957u);
  /* 11773957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11773959 je 0x11773a81 */
  if (C.zf) goto L_11773a81;
  /* 1177395f mov dword ptr [0x117766b0], 2 */
  w32((uint32_t)(0x117766b0), (0x2u));
L_11773969:;
  /* 11773969 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177396c jle 0x1177397e */
  if ((C.zf||C.sf!=C.of)) goto L_1177397e;
  /* 1177396e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11773971 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11773974 call 0x11773b17 */
  push32(0x11773979u); f_11773b17();
  /* 11773979 pop ecx */
  ECX = (pop32());
  /* 1177397a pop ecx */
  ECX = (pop32());
  /* 1177397b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1177397e:;
  /* 1177397e mov eax, dword ptr [0x117766b0] */
  EAX = (r32((uint32_t)(0x117766b0)));
  /* 11773983 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773986 jne 0x117739a5 */
  if (!C.zf) goto L_117739a5;
  /* 11773988 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1177398b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1177398e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11773991 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11773994 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11773997 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1177399a call dword ptr [0x11775010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775010))), 0x117739a0u);
  /* 117739a0 jmp 0x11773a83 */
  goto L_11773a83;
L_117739a5:;
  /* 117739a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117739a8 jne 0x11773a81 */
  if (!C.zf) goto L_11773a81;
  /* 117739ae cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117739b1 jne 0x117739bb */
  if (!C.zf) goto L_117739bb;
  /* 117739b3 mov eax, dword ptr [0x117766a8] */
  EAX = (r32((uint32_t)(0x117766a8)));
  /* 117739b8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_117739bb:;
  /* 117739bb push edi */
  push32((uint32_t)(EDI));
  /* 117739bc push edi */
  push32((uint32_t)(EDI));
  /* 117739bd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 117739c0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117739c3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 117739c6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117739c8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117739ca and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 117739cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117739ce push eax */
  push32((uint32_t)(EAX));
  /* 117739cf push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 117739d2 call dword ptr [0x11775014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775014))), 0x117739d8u);
  /* 117739d8 mov ebx, eax */
  EBX = (EAX);
  /* 117739da mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 117739dd cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117739df je 0x11773a81 */
  if (C.zf) goto L_11773a81;
  /* 117739e5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 117739e8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 117739eb add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117739ee and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117739f0 call 0x117741a0 */
  push32(0x117739f5u); f_117741a0();
  /* 117739f5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117739f8 mov eax, esp */
  EAX = (ESP);
  /* 117739fa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117739fd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11773a01 jmp 0x11773a16 */
  goto L_11773a16;
  /* 11773a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11773a05 pop eax */
  EAX = (pop32());
  /* 11773a06 ret  */
  ESPCHK(0x117738f3u, _esp0);
  ESP += 4; return;
  /* 11773a07 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11773a0a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11773a0c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11773a0f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11773a13 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11773a16:;
  /* 11773a16 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773a19 je 0x11773a81 */
  if (C.zf) goto L_11773a81;
  /* 11773a1b push ebx */
  push32((uint32_t)(EBX));
  /* 11773a1c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11773a1f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11773a22 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11773a25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11773a27 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11773a2a call dword ptr [0x11775014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775014))), 0x11773a30u);
  /* 11773a30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11773a32 je 0x11773a81 */
  if (C.zf) goto L_11773a81;
  /* 11773a34 push edi */
  push32((uint32_t)(EDI));
  /* 11773a35 push edi */
  push32((uint32_t)(EDI));
  /* 11773a36 push ebx */
  push32((uint32_t)(EBX));
  /* 11773a37 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11773a3a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11773a3d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11773a40 call dword ptr [0x1177500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1177500c))), 0x11773a46u);
  /* 11773a46 mov esi, eax */
  ESI = (EAX);
  /* 11773a48 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11773a4b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773a4d je 0x11773a81 */
  if (C.zf) goto L_11773a81;
  /* 11773a4f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11773a53 je 0x11773a95 */
  if (C.zf) goto L_11773a95;
  /* 11773a55 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773a58 je 0x11773b10 */
  if (C.zf) goto L_11773b10;
  /* 11773a5e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773a61 jg 0x11773a81 */
  if ((!C.zf&&C.sf==C.of)) goto L_11773a81;
  /* 11773a63 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11773a66 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11773a69 push ebx */
  push32((uint32_t)(EBX));
  /* 11773a6a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11773a6d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11773a70 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11773a73 call dword ptr [0x1177500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1177500c))), 0x11773a79u);
  /* 11773a79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11773a7b jne 0x11773b10 */
  if (!C.zf) goto L_11773b10;
L_11773a81:;
  /* 11773a81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11773a83:;
  /* 11773a83 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11773a86 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11773a89 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11773a90 pop edi */
  EDI = (pop32());
  /* 11773a91 pop esi */
  ESI = (pop32());
  /* 11773a92 pop ebx */
  EBX = (pop32());
  /* 11773a93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11773a94 ret  */
  ESPCHK(0x117738f3u, _esp0);
  ESP += 4; return;
L_11773a95:;
  /* 11773a95 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11773a9c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11773a9f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11773aa2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11773aa4 call 0x117741a0 */
  push32(0x11773aa9u); f_117741a0();
  /* 11773aa9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11773aac mov ebx, esp */
  EBX = (ESP);
  /* 11773aae mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11773ab1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11773ab5 jmp 0x11773ac9 */
  goto L_11773ac9;
  /* 11773ab7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11773ab9 pop eax */
  EAX = (pop32());
  /* 11773aba ret  */
  ESPCHK(0x117738f3u, _esp0);
  ESP += 4; return;
  /* 11773abb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11773abe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11773ac0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11773ac2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11773ac6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11773ac9:;
  /* 11773ac9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773acb je 0x11773a81 */
  if (C.zf) goto L_11773a81;
  /* 11773acd push esi */
  push32((uint32_t)(ESI));
  /* 11773ace push ebx */
  push32((uint32_t)(EBX));
  /* 11773acf push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11773ad2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11773ad5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11773ad8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11773adb call dword ptr [0x1177500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1177500c))), 0x11773ae1u);
  /* 11773ae1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11773ae3 je 0x11773a81 */
  if (C.zf) goto L_11773a81;
  /* 11773ae5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773ae8 push edi */
  push32((uint32_t)(EDI));
  /* 11773ae9 push edi */
  push32((uint32_t)(EDI));
  /* 11773aea jne 0x11773af0 */
  if (!C.zf) goto L_11773af0;
  /* 11773aec push edi */
  push32((uint32_t)(EDI));
  /* 11773aed push edi */
  push32((uint32_t)(EDI));
  /* 11773aee jmp 0x11773af6 */
  goto L_11773af6;
L_11773af0:;
  /* 11773af0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11773af3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11773af6:;
  /* 11773af6 push esi */
  push32((uint32_t)(ESI));
  /* 11773af7 push ebx */
  push32((uint32_t)(EBX));
  /* 11773af8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11773afd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11773b00 call dword ptr [0x117750a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117750a0))), 0x11773b06u);
  /* 11773b06 mov esi, eax */
  ESI = (EAX);
  /* 11773b08 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773b0a je 0x11773a81 */
  if (C.zf) goto L_11773a81;
L_11773b10:;
  /* 11773b10 mov eax, esi */
  EAX = (ESI);
  /* 11773b12 jmp 0x11773a83 */
  goto L_11773a83;
}

/* FUN_10003b17 @ 0x11773b17 (43 bytes, 20 insns) */
void f_11773b17(void) {
  FTRACE(0x11773b17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11773b17 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11773b1b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11773b1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11773b21 push esi */
  push32((uint32_t)(ESI));
  /* 11773b22 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11773b25 je 0x11773b34 */
  if (C.zf) goto L_11773b34;
L_11773b27:;
  /* 11773b27 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11773b2a je 0x11773b34 */
  if (C.zf) goto L_11773b34;
  /* 11773b2c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11773b2d mov esi, ecx */
  ESI = (ECX);
  /* 11773b2f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11773b30 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11773b32 jne 0x11773b27 */
  if (!C.zf) goto L_11773b27;
L_11773b34:;
  /* 11773b34 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11773b37 pop esi */
  ESI = (pop32());
  /* 11773b38 jne 0x11773b3f */
  if (!C.zf) goto L_11773b3f;
  /* 11773b3a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11773b3e ret  */
  ESPCHK(0x11773b17u, _esp0);
  ESP += 4; return;
L_11773b3f:;
  /* 11773b3f mov eax, edx */
  EAX = (EDX);
  /* 11773b41 ret  */
  ESPCHK(0x11773b17u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b42 @ 0x11773b42 (318 bytes, 123 insns) */
void f_11773b42(void) {
  FTRACE(0x11773b42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11773b42 push ebp */
  push32((uint32_t)(EBP));
  /* 11773b43 mov ebp, esp */
  EBP = (ESP);
  /* 11773b45 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11773b47 push 0x11775468 */
  push32((uint32_t)(0x11775468u));
  /* 11773b4c push 0x117740c0 */
  push32((uint32_t)(0x117740c0u));
  /* 11773b51 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11773b57 push eax */
  push32((uint32_t)(EAX));
  /* 11773b58 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11773b5f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11773b62 push ebx */
  push32((uint32_t)(EBX));
  /* 11773b63 push esi */
  push32((uint32_t)(ESI));
  /* 11773b64 push edi */
  push32((uint32_t)(EDI));
  /* 11773b65 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11773b68 mov eax, dword ptr [0x117766b4] */
  EAX = (r32((uint32_t)(0x117766b4)));
  /* 11773b6d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11773b6f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773b71 jne 0x11773bb1 */
  if (!C.zf) goto L_11773bb1;
  /* 11773b73 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11773b76 push eax */
  push32((uint32_t)(EAX));
  /* 11773b77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11773b79 pop esi */
  ESI = (pop32());
  /* 11773b7a push esi */
  push32((uint32_t)(ESI));
  /* 11773b7b push 0x11775448 */
  push32((uint32_t)(0x11775448u));
  /* 11773b80 push esi */
  push32((uint32_t)(ESI));
  /* 11773b81 call dword ptr [0x11775004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775004))), 0x11773b87u);
  /* 11773b87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11773b89 je 0x11773b8f */
  if (C.zf) goto L_11773b8f;
  /* 11773b8b mov eax, esi */
  EAX = (ESI);
  /* 11773b8d jmp 0x11773bac */
  goto L_11773bac;
L_11773b8f:;
  /* 11773b8f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11773b92 push eax */
  push32((uint32_t)(EAX));
  /* 11773b93 push esi */
  push32((uint32_t)(ESI));
  /* 11773b94 push 0x11775444 */
  push32((uint32_t)(0x11775444u));
  /* 11773b99 push esi */
  push32((uint32_t)(ESI));
  /* 11773b9a push ebx */
  push32((uint32_t)(EBX));
  /* 11773b9b call dword ptr [0x11775008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775008))), 0x11773ba1u);
  /* 11773ba1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11773ba3 je 0x11773c77 */
  if (C.zf) goto L_11773c77;
  /* 11773ba9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11773bab pop eax */
  EAX = (pop32());
L_11773bac:;
  /* 11773bac mov dword ptr [0x117766b4], eax */
  w32((uint32_t)(0x117766b4), (EAX));
L_11773bb1:;
  /* 11773bb1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773bb4 jne 0x11773bda */
  if (!C.zf) goto L_11773bda;
  /* 11773bb6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11773bb9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773bbb jne 0x11773bc2 */
  if (!C.zf) goto L_11773bc2;
  /* 11773bbd mov eax, dword ptr [0x11776698] */
  EAX = (r32((uint32_t)(0x11776698)));
L_11773bc2:;
  /* 11773bc2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11773bc5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11773bc8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11773bcb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11773bce push eax */
  push32((uint32_t)(EAX));
  /* 11773bcf call dword ptr [0x11775008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775008))), 0x11773bd5u);
  /* 11773bd5 jmp 0x11773c79 */
  goto L_11773c79;
L_11773bda:;
  /* 11773bda cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773bdd jne 0x11773c77 */
  if (!C.zf) goto L_11773c77;
  /* 11773be3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773be6 jne 0x11773bf0 */
  if (!C.zf) goto L_11773bf0;
  /* 11773be8 mov eax, dword ptr [0x117766a8] */
  EAX = (r32((uint32_t)(0x117766a8)));
  /* 11773bed mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11773bf0:;
  /* 11773bf0 push ebx */
  push32((uint32_t)(EBX));
  /* 11773bf1 push ebx */
  push32((uint32_t)(EBX));
  /* 11773bf2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11773bf5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11773bf8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11773bfb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11773bfd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11773bff and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11773c02 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11773c03 push eax */
  push32((uint32_t)(EAX));
  /* 11773c04 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11773c07 call dword ptr [0x11775014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775014))), 0x11773c0du);
  /* 11773c0d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11773c10 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773c12 je 0x11773c77 */
  if (C.zf) goto L_11773c77;
  /* 11773c14 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11773c17 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11773c1a mov eax, edi */
  EAX = (EDI);
  /* 11773c1c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11773c1f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11773c21 call 0x117741a0 */
  push32(0x11773c26u); f_117741a0();
  /* 11773c26 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11773c29 mov esi, esp */
  ESI = (ESP);
  /* 11773c2b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11773c2e push edi */
  push32((uint32_t)(EDI));
  /* 11773c2f push ebx */
  push32((uint32_t)(EBX));
  /* 11773c30 push esi */
  push32((uint32_t)(ESI));
  /* 11773c31 call 0x11773880 */
  push32(0x11773c36u); f_11773880();
  /* 11773c36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11773c39 jmp 0x11773c46 */
  goto L_11773c46;
  /* 11773c3b push 1 */
  push32((uint32_t)(0x1u));
  /* 11773c3d pop eax */
  EAX = (pop32());
  /* 11773c3e ret  */
  ESPCHK(0x11773b42u, _esp0);
  ESP += 4; return;
  /* 11773c3f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11773c42 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11773c44 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11773c46:;
  /* 11773c46 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11773c4a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773c4c je 0x11773c77 */
  if (C.zf) goto L_11773c77;
  /* 11773c4e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11773c51 push esi */
  push32((uint32_t)(ESI));
  /* 11773c52 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11773c55 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11773c58 push 1 */
  push32((uint32_t)(0x1u));
  /* 11773c5a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11773c5d call dword ptr [0x11775014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775014))), 0x11773c63u);
  /* 11773c63 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773c65 je 0x11773c77 */
  if (C.zf) goto L_11773c77;
  /* 11773c67 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11773c6a push eax */
  push32((uint32_t)(EAX));
  /* 11773c6b push esi */
  push32((uint32_t)(ESI));
  /* 11773c6c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11773c6f call dword ptr [0x11775004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11775004))), 0x11773c75u);
  /* 11773c75 jmp 0x11773c79 */
  goto L_11773c79;
L_11773c77:;
  /* 11773c77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11773c79:;
  /* 11773c79 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11773c7c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11773c7f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11773c86 pop edi */
  EDI = (pop32());
  /* 11773c87 pop esi */
  ESI = (pop32());
  /* 11773c88 pop ebx */
  EBX = (pop32());
  /* 11773c89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11773c8a ret  */
  ESPCHK(0x11773b42u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c90 @ 0x11773c90 (664 bytes, 268 insns) [15 switch table(s)] */
void f_11773c90(void) {
  FTRACE(0x11773c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11773c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11773c91 mov ebp, esp */
  EBP = (ESP);
  /* 11773c93 push edi */
  push32((uint32_t)(EDI));
  /* 11773c94 push esi */
  push32((uint32_t)(ESI));
  /* 11773c95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11773c98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11773c9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11773c9e mov eax, ecx */
  EAX = (ECX);
  /* 11773ca0 mov edx, ecx */
  EDX = (ECX);
  /* 11773ca2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11773ca4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773ca6 jbe 0x11773cb0 */
  if ((C.cf||C.zf)) goto L_11773cb0;
  /* 11773ca8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773caa jb 0x11773e28 */
  if (C.cf) goto L_11773e28;
L_11773cb0:;
  /* 11773cb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11773cb6 jne 0x11773ccc */
  if (!C.zf) goto L_11773ccc;
  /* 11773cb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11773cbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11773cbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773cc1 jb 0x11773cec */
  if (C.cf) goto L_11773cec;
  /* 11773cc3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11773cc5 jmp dword ptr [edx*4 + 0x11773dd8] */
  switch (EDX) {
    case 0: goto L_11773de8;
    case 1: goto L_11773df0;
    case 2: goto L_11773dfc;
    case 3: goto L_11773e10;
    default: x86_unimpl("switch@0x11773cc5 out of table"); return;
  }
L_11773ccc:;
  /* 11773ccc mov eax, edi */
  EAX = (EDI);
  /* 11773cce mov edx, 3 */
  EDX = (0x3u);
  /* 11773cd3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11773cd6 jb 0x11773ce4 */
  if (C.cf) goto L_11773ce4;
  /* 11773cd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11773cdb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11773cdd jmp dword ptr [eax*4 + 0x11773cf0] */
  switch (EAX) {
    case 1: goto L_11773d00;
    case 2: goto L_11773d2c;
    case 3: goto L_11773d50;
    default: x86_unimpl("switch@0x11773cdd out of table"); return;
  }
L_11773ce4:;
  /* 11773ce4 jmp dword ptr [ecx*4 + 0x11773de8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11773de8)))); return;
  /* 11773ceb nop  */
  /* nop */
L_11773cec:;
  /* 11773cec jmp dword ptr [ecx*4 + 0x11773d6c] */
  switch (ECX) {
    case 0: goto L_11773dcf;
    case 1: goto L_11773dbc;
    case 2: goto L_11773db4;
    case 3: goto L_11773dac;
    case 4: goto L_11773da4;
    case 5: goto L_11773d9c;
    case 6: goto L_11773d94;
    case 7: goto L_11773d8c;
    default: x86_unimpl("switch@0x11773cec out of table"); return;
  }
  /* 11773cf3 nop  */
  /* nop */
L_11773d00:;
  /* 11773d00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11773d02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11773d04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11773d06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11773d09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11773d0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11773d0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11773d12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11773d15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11773d18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11773d1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773d1e jb 0x11773cec */
  if (C.cf) goto L_11773cec;
  /* 11773d20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11773d22 jmp dword ptr [edx*4 + 0x11773dd8] */
  switch (EDX) {
    case 0: goto L_11773de8;
    case 1: goto L_11773df0;
    case 2: goto L_11773dfc;
    case 3: goto L_11773e10;
    default: x86_unimpl("switch@0x11773d22 out of table"); return;
  }
  /* 11773d29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11773d2c:;
  /* 11773d2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11773d2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11773d30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11773d32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11773d35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11773d38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11773d3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11773d3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11773d41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773d44 jb 0x11773cec */
  if (C.cf) goto L_11773cec;
  /* 11773d46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11773d48 jmp dword ptr [edx*4 + 0x11773dd8] */
  switch (EDX) {
    case 0: goto L_11773de8;
    case 1: goto L_11773df0;
    case 2: goto L_11773dfc;
    case 3: goto L_11773e10;
    default: x86_unimpl("switch@0x11773d48 out of table"); return;
  }
  /* 11773d4f nop  */
  /* nop */
L_11773d50:;
  /* 11773d50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11773d52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11773d54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11773d56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11773d57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11773d5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11773d5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773d5e jb 0x11773cec */
  if (C.cf) goto L_11773cec;
  /* 11773d60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11773d62 jmp dword ptr [edx*4 + 0x11773dd8] */
  switch (EDX) {
    case 0: goto L_11773de8;
    case 1: goto L_11773df0;
    case 2: goto L_11773dfc;
    case 3: goto L_11773e10;
    default: x86_unimpl("switch@0x11773d62 out of table"); return;
  }
  /* 11773d69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11773d8c:;
  /* 11773d8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11773d90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11773d94:;
  /* 11773d94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11773d98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11773d9c:;
  /* 11773d9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11773da0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11773da4:;
  /* 11773da4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11773da8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11773dac:;
  /* 11773dac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11773db0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11773db4:;
  /* 11773db4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11773db8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11773dbc:;
  /* 11773dbc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11773dc0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11773dc4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11773dcb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11773dcd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11773dcf:;
  /* 11773dcf jmp dword ptr [edx*4 + 0x11773dd8] */
  switch (EDX) {
    case 0: goto L_11773de8;
    case 1: goto L_11773df0;
    case 2: goto L_11773dfc;
    case 3: goto L_11773e10;
    default: x86_unimpl("switch@0x11773dcf out of table"); return;
  }
  /* 11773dd6 mov edi, edi */
  EDI = (EDI);
L_11773de8:;
  /* 11773de8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773deb pop esi */
  ESI = (pop32());
  /* 11773dec pop edi */
  EDI = (pop32());
  /* 11773ded leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11773dee ret  */
  ESPCHK(0x11773c90u, _esp0);
  ESP += 4; return;
  /* 11773def nop  */
  /* nop */
L_11773df0:;
  /* 11773df0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11773df2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11773df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773df7 pop esi */
  ESI = (pop32());
  /* 11773df8 pop edi */
  EDI = (pop32());
  /* 11773df9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11773dfa ret  */
  ESPCHK(0x11773c90u, _esp0);
  ESP += 4; return;
  /* 11773dfb nop  */
  /* nop */
L_11773dfc:;
  /* 11773dfc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11773dfe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11773e00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11773e03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11773e06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773e09 pop esi */
  ESI = (pop32());
  /* 11773e0a pop edi */
  EDI = (pop32());
  /* 11773e0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11773e0c ret  */
  ESPCHK(0x11773c90u, _esp0);
  ESP += 4; return;
  /* 11773e0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11773e10:;
  /* 11773e10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11773e12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11773e14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11773e17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11773e1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11773e1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11773e20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773e23 pop esi */
  ESI = (pop32());
  /* 11773e24 pop edi */
  EDI = (pop32());
  /* 11773e25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11773e26 ret  */
  ESPCHK(0x11773c90u, _esp0);
  ESP += 4; return;
  /* 11773e27 nop  */
  /* nop */
L_11773e28:;
  /* 11773e28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11773e2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11773e30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11773e36 jne 0x11773e5c */
  if (!C.zf) goto L_11773e5c;
  /* 11773e38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11773e3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11773e3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773e41 jb 0x11773e50 */
  if (C.cf) goto L_11773e50;
  /* 11773e43 std  */
  C.df=1;
  /* 11773e44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11773e46 cld  */
  C.df=0;
  /* 11773e47 jmp dword ptr [edx*4 + 0x11773f70] */
  switch (EDX) {
    case 0: goto L_11773f80;
    case 1: goto L_11773f88;
    case 2: goto L_11773f98;
    case 3: goto L_11773fac;
    default: x86_unimpl("switch@0x11773e47 out of table"); return;
  }
  /* 11773e4e mov edi, edi */
  EDI = (EDI);
L_11773e50:;
  /* 11773e50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11773e52 jmp dword ptr [ecx*4 + 0x11773f20] */
  switch (ECX) {
    case 0: goto L_11773f67;
    default: x86_unimpl("switch@0x11773e52 out of table"); return;
  }
  /* 11773e59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11773e5c:;
  /* 11773e5c mov eax, edi */
  EAX = (EDI);
  /* 11773e5e mov edx, 3 */
  EDX = (0x3u);
  /* 11773e63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773e66 jb 0x11773e74 */
  if (C.cf) goto L_11773e74;
  /* 11773e68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11773e6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11773e6d jmp dword ptr [eax*4 + 0x11773e78] */
  switch (EAX) {
    case 1: goto L_11773e88;
    case 2: goto L_11773ea8;
    case 3: goto L_11773ed0;
    default: x86_unimpl("switch@0x11773e6d out of table"); return;
  }
L_11773e74:;
  /* 11773e74 jmp dword ptr [ecx*4 + 0x11773f70] */
  switch (ECX) {
    case 0: goto L_11773f80;
    case 1: goto L_11773f88;
    case 2: goto L_11773f98;
    case 3: goto L_11773fac;
    default: x86_unimpl("switch@0x11773e74 out of table"); return;
  }
  /* 11773e7b nop  */
  /* nop */
L_11773e88:;
  /* 11773e88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11773e8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11773e8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11773e90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11773e91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11773e94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11773e95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773e98 jb 0x11773e50 */
  if (C.cf) goto L_11773e50;
  /* 11773e9a std  */
  C.df=1;
  /* 11773e9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11773e9d cld  */
  C.df=0;
  /* 11773e9e jmp dword ptr [edx*4 + 0x11773f70] */
  switch (EDX) {
    case 0: goto L_11773f80;
    case 1: goto L_11773f88;
    case 2: goto L_11773f98;
    case 3: goto L_11773fac;
    default: x86_unimpl("switch@0x11773e9e out of table"); return;
  }
  /* 11773ea5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11773ea8:;
  /* 11773ea8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11773eab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11773ead mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11773eb0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11773eb3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11773eb6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11773eb9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11773ebc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11773ebf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773ec2 jb 0x11773e50 */
  if (C.cf) goto L_11773e50;
  /* 11773ec4 std  */
  C.df=1;
  /* 11773ec5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11773ec7 cld  */
  C.df=0;
  /* 11773ec8 jmp dword ptr [edx*4 + 0x11773f70] */
  switch (EDX) {
    case 0: goto L_11773f80;
    case 1: goto L_11773f88;
    case 2: goto L_11773f98;
    case 3: goto L_11773fac;
    default: x86_unimpl("switch@0x11773ec8 out of table"); return;
  }
  /* 11773ecf nop  */
  /* nop */
L_11773ed0:;
  /* 11773ed0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11773ed3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11773ed5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11773ed8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11773edb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11773ede mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11773ee1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11773ee4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11773ee7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11773eea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11773eed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11773ef0 jb 0x11773e50 */
  if (C.cf) goto L_11773e50;
  /* 11773ef6 std  */
  C.df=1;
  /* 11773ef7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11773ef9 cld  */
  C.df=0;
  /* 11773efa jmp dword ptr [edx*4 + 0x11773f70] */
  switch (EDX) {
    case 0: goto L_11773f80;
    case 1: goto L_11773f88;
    case 2: goto L_11773f98;
    case 3: goto L_11773fac;
    default: x86_unimpl("switch@0x11773efa out of table"); return;
  }
  /* 11773f01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11773f04 and al, 0x3f */
  { uint32_t _r=(AL)&(0x3fu); AL = (_r); fl_logic(_r,8); }
  /* 11773f06 ja 0x11773f19 */
  if ((!C.cf&&!C.zf)) goto L_11773f19;
  /* 11773f08 sub al, 0x3f */
  { uint32_t _a=(AL),_b=(0x3fu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11773f0a ja 0x11773f1d */
  if ((!C.cf&&!C.zf)) goto L_11773f1d;
  /* 11773f0c xor al, 0x3f */
  { uint32_t _r=(AL)^(0x3fu); AL = (_r); fl_logic(_r,8); }
  /* 11773f0e ja 0x11773f21 */
  if ((!C.cf&&!C.zf)) goto L_11773f21;
  /* 11773f10 cmp al, 0x3f */
  { uint32_t _a=(AL),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11773f12 ja 0x11773f25 */
  if ((!C.cf&&!C.zf)) goto L_11773f25;
  /* 11773f14 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11773f15 aas  */
  { if(((AL&0x0f)>9)||C.af){ AX=(uint16_t)(AX-6); AH=(uint8_t)(AH-1); C.af=1; C.cf=1; } else { C.af=0; C.cf=0; } AL&=0x0f; }
  /* 11773f16 ja 0x11773f29 */
  if ((!C.cf&&!C.zf)) goto L_11773f29;
  /* 11773f18 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
L_11773f19:;
  /* 11773f19 aas  */
  { if(((AL&0x0f)>9)||C.af){ AX=(uint16_t)(AX-6); AH=(uint8_t)(AH-1); C.af=1; C.cf=1; } else { C.af=0; C.cf=0; } AL&=0x0f; }
  /* 11773f1a ja 0x11773f2d */
  if ((!C.cf&&!C.zf)) goto L_11773f2d;
  /* 11773f1c push esp */
  push32((uint32_t)(ESP));
L_11773f1d:;
  /* 11773f1d aas  */
  { if(((AL&0x0f)>9)||C.af){ AX=(uint16_t)(AX-6); AH=(uint8_t)(AH-1); C.af=1; C.cf=1; } else { C.af=0; C.cf=0; } AL&=0x0f; }
  /* 11773f1e ja 0x11773f31 */
  if ((!C.cf&&!C.zf)) goto L_11773f31;
  /* 11773f24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11773f28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11773f2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11773f30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11773f34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11773f38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11773f3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11773f40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11773f44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11773f48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11773f4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11773f50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11773f54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11773f58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11773f5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11773f63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11773f65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11773f67:;
  /* 11773f67 jmp dword ptr [edx*4 + 0x11773f70] */
  switch (EDX) {
    case 0: goto L_11773f80;
    case 1: goto L_11773f88;
    case 2: goto L_11773f98;
    case 3: goto L_11773fac;
    default: x86_unimpl("switch@0x11773f67 out of table"); return;
  }
  /* 11773f6e mov edi, edi */
  EDI = (EDI);
L_11773f80:;
  /* 11773f80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773f83 pop esi */
  ESI = (pop32());
  /* 11773f84 pop edi */
  EDI = (pop32());
  /* 11773f85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11773f86 ret  */
  ESPCHK(0x11773c90u, _esp0);
  ESP += 4; return;
  /* 11773f87 nop  */
  /* nop */
L_11773f88:;
  /* 11773f88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11773f8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11773f8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773f91 pop esi */
  ESI = (pop32());
  /* 11773f92 pop edi */
  EDI = (pop32());
  /* 11773f93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11773f94 ret  */
  ESPCHK(0x11773c90u, _esp0);
  ESP += 4; return;
  /* 11773f95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11773f98:;
  /* 11773f98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11773f9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11773f9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11773fa1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11773fa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773fa7 pop esi */
  ESI = (pop32());
  /* 11773fa8 pop edi */
  EDI = (pop32());
  /* 11773fa9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11773faa ret  */
  ESPCHK(0x11773c90u, _esp0);
  ESP += 4; return;
  /* 11773fab nop  */
  /* nop */
L_11773fac:;
  /* 11773fac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11773faf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11773fb2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11773fb5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11773fb8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11773fbb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11773fbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11773fc1 pop esi */
  ESI = (pop32());
  /* 11773fc2 pop edi */
  EDI = (pop32());
  /* 11773fc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11773fc4 ret  */
  ESPCHK(0x11773c90u, _esp0);
  ESP += 4; return;
L_11773f21: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11773f21 (unresolved jump table)"); return;
L_11773f25: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11773f25 (unresolved jump table)"); return;
L_11773f29: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11773f29 (unresolved jump table)"); return;
L_11773f2d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11773f2d (unresolved jump table)"); return;
L_11773f31: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11773f31 (unresolved jump table)"); return;
}

/* __global_unwind2 @ 0x11773fc8 (32 bytes, 18 insns) */
void f_11773fc8(void) {
  FTRACE(0x11773fc8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11773fc8 push ebp */
  push32((uint32_t)(EBP));
  /* 11773fc9 mov ebp, esp */
  EBP = (ESP);
  /* 11773fcb push ebx */
  push32((uint32_t)(EBX));
  /* 11773fcc push esi */
  push32((uint32_t)(ESI));
  /* 11773fcd push edi */
  push32((uint32_t)(EDI));
  /* 11773fce push ebp */
  push32((uint32_t)(EBP));
  /* 11773fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 11773fd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11773fd3 push 0x11773fe0 */
  push32((uint32_t)(0x11773fe0u));
  /* 11773fd8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11773fdb call 0x117741d0 */
  push32(0x11773fe0u); f_117741d0();
  /* 11773fe0 pop ebp */
  EBP = (pop32());
  /* 11773fe1 pop edi */
  EDI = (pop32());
  /* 11773fe2 pop esi */
  ESI = (pop32());
  /* 11773fe3 pop ebx */
  EBX = (pop32());
  /* 11773fe4 mov esp, ebp */
  ESP = (EBP);
  /* 11773fe6 pop ebp */
  EBP = (pop32());
  /* 11773fe7 ret  */
  ESPCHK(0x11773fc8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1177400a (104 bytes, 33 insns) */
void f_1177400a(void) {
  FTRACE(0x1177400au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1177400a push ebx */
  push32((uint32_t)(EBX));
  /* 1177400b push esi */
  push32((uint32_t)(ESI));
  /* 1177400c push edi */
  push32((uint32_t)(EDI));
  /* 1177400d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11774011 push eax */
  push32((uint32_t)(EAX));
  /* 11774012 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11774014 push 0x11773fe8 */
  push32((uint32_t)(0x11773fe8u));
  /* 11774019 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11774020 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11774027:;
  /* 11774027 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1177402b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1177402e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11774031 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11774034 je 0x11774064 */
  if (C.zf) goto L_11774064;
  /* 11774036 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177403a je 0x11774064 */
  if (C.zf) goto L_11774064;
  /* 1177403c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1177403f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11774042 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11774046 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11774049 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1177404e jne 0x11774062 */
  if (!C.zf) goto L_11774062;
  /* 11774050 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11774055 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11774059 call 0x1177409e */
  push32(0x1177405eu); f_1177409e();
  /* 1177405e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11774062u);
L_11774062:;
  /* 11774062 jmp 0x11774027 */
  goto L_11774027;
L_11774064:;
  /* 11774064 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1177406b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1177406e pop edi */
  EDI = (pop32());
  /* 1177406f pop esi */
  ESI = (pop32());
  /* 11774070 pop ebx */
  EBX = (pop32());
  /* 11774071 ret  */
  ESPCHK(0x1177400au, _esp0);
  ESP += 4; return;
}

/* FUN_1000409e @ 0x1177409e (24 bytes, 10 insns) */
void f_1177409e(void) {
  FTRACE(0x1177409eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1177409e push ebx */
  push32((uint32_t)(EBX));
  /* 1177409f push ecx */
  push32((uint32_t)(ECX));
  /* 117740a0 mov ebx, 0x11776440 */
  EBX = (0x11776440u);
  /* 117740a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117740a8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 117740ab mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 117740ae mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 117740b1 pop ecx */
  ECX = (pop32());
  /* 117740b2 pop ebx */
  EBX = (pop32());
  /* 117740b3 ret 4 */
  ESPCHK(0x1177409eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000417d @ 0x1177417d (27 bytes, 11 insns) */
void f_1177417d(void) {
  FTRACE(0x1177417du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1177417d push ebp */
  push32((uint32_t)(EBP));
  /* 1177417e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11774182 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11774184 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11774187 push eax */
  push32((uint32_t)(EAX));
  /* 11774188 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1177418b push eax */
  push32((uint32_t)(EAX));
  /* 1177418c call 0x1177400a */
  push32(0x11774191u); f_1177400a();
  /* 11774191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11774194 pop ebp */
  EBP = (pop32());
  /* 11774195 ret 4 */
  ESPCHK(0x1177417du, _esp0);
  ESP += 8; return;
}

/* FUN_100041a0 @ 0x117741a0 (47 bytes, 17 insns) */
void f_117741a0(void) {
  FTRACE(0x117741a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117741a0 push ecx */
  push32((uint32_t)(ECX));
  /* 117741a1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117741a6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 117741aa jb 0x117741c0 */
  if (C.cf) goto L_117741c0;
L_117741ac:;
  /* 117741ac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117741b2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117741b7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 117741b9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117741be jae 0x117741ac */
  if (!C.cf) goto L_117741ac;
L_117741c0:;
  /* 117741c0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117741c2 mov eax, esp */
  EAX = (ESP);
  /* 117741c4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 117741c6 mov esp, ecx */
  ESP = (ECX);
  /* 117741c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117741ca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 117741cd push eax */
  push32((uint32_t)(EAX));
  /* 117741ce ret  */
  ESPCHK(0x117741a0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x117741d0 (6 bytes, 1 insns) */
void f_117741d0(void) {
  FTRACE(0x117741d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117741d0 jmp dword ptr [0x11775000] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11775000)))); return;
}

