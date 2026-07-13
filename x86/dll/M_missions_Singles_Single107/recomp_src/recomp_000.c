#include "recomp.h"

/* OnInit @ 0x11091005 (5 bytes, 1 insns) */
void f_11091005(void) {
  FTRACE(0x11091005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11091005 jmp 0x11091090 */
  f_11091090(); return;
}

/* thunk_FUN_10001030 @ 0x1109100a (5 bytes, 1 insns) */
void f_1109100a(void) {
  FTRACE(0x1109100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109100a jmp 0x11091030 */
  f_11091030(); return;
}

/* ProcessScenary @ 0x1109100f (5 bytes, 1 insns) */
void f_1109100f(void) {
  FTRACE(0x1109100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1109100f jmp 0x11091860 */
  f_11091860(); return;
}

/* FUN_10001030 @ 0x11091030 (67 bytes, 26 insns) */
void f_11091030(void) {
  FTRACE(0x11091030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11091030 push ebp */
  push32((uint32_t)(EBP));
  /* 11091031 mov ebp, esp */
  EBP = (ESP);
  /* 11091033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11091036 push ebx */
  push32((uint32_t)(EBX));
  /* 11091037 push esi */
  push32((uint32_t)(ESI));
  /* 11091038 push edi */
  push32((uint32_t)(EDI));
  /* 11091039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1109103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11091041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11091046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11091048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091052 je 0x11091056 */
  if (C.zf) goto L_11091056;
  /* 11091054 jmp 0x1109105b */
  goto L_1109105b;
L_11091056:;
  /* 11091056 call 0x11091005 */
  push32(0x1109105bu); f_11091005();
L_1109105b:;
  /* 1109105b mov eax, 1 */
  EAX = (0x1u);
  /* 11091060 pop edi */
  EDI = (pop32());
  /* 11091061 pop esi */
  ESI = (pop32());
  /* 11091062 pop ebx */
  EBX = (pop32());
  /* 11091063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091068 call 0x110930a0 */
  push32(0x1109106du); f_110930a0();
  /* 1109106d mov esp, ebp */
  ESP = (EBP);
  /* 1109106f pop ebp */
  EBP = (pop32());
  /* 11091070 ret 0xc */
  ESPCHK(0x11091030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x11091090 (1591 bytes, 411 insns) */
void f_11091090(void) {
  FTRACE(0x11091090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11091090 push ebp */
  push32((uint32_t)(EBP));
  /* 11091091 mov ebp, esp */
  EBP = (ESP);
  /* 11091093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11091096 push ebx */
  push32((uint32_t)(EBX));
  /* 11091097 push esi */
  push32((uint32_t)(ESI));
  /* 11091098 push edi */
  push32((uint32_t)(EDI));
  /* 11091099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1109109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 110910a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 110910a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110910a8 mov esi, esp */
  ESI = (ESP);
  /* 110910aa push 0x110bb3a0 */
  push32((uint32_t)(0x110bb3a0u));
  /* 110910af push 0x110c0560 */
  push32((uint32_t)(0x110c0560u));
  /* 110910b4 call dword ptr [0x110c33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33fc))), 0x110910bau);
  /* 110910ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110910bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110910bf call 0x110930a0 */
  push32(0x110910c4u); f_110930a0();
  /* 110910c4 mov esi, esp */
  ESI = (ESP);
  /* 110910c6 push 0x110bb39c */
  push32((uint32_t)(0x110bb39cu));
  /* 110910cb push 0x110c0568 */
  push32((uint32_t)(0x110c0568u));
  /* 110910d0 call dword ptr [0x110c33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33fc))), 0x110910d6u);
  /* 110910d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110910d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110910db call 0x110930a0 */
  push32(0x110910e0u); f_110930a0();
  /* 110910e0 mov esi, esp */
  ESI = (ESP);
  /* 110910e2 push 0x110bb398 */
  push32((uint32_t)(0x110bb398u));
  /* 110910e7 push 0x110c0570 */
  push32((uint32_t)(0x110c0570u));
  /* 110910ec call dword ptr [0x110c33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33fc))), 0x110910f2u);
  /* 110910f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110910f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110910f7 call 0x110930a0 */
  push32(0x110910fcu); f_110930a0();
  /* 110910fc mov esi, esp */
  ESI = (ESP);
  /* 110910fe push 0x110bb394 */
  push32((uint32_t)(0x110bb394u));
  /* 11091103 push 0x110c0578 */
  push32((uint32_t)(0x110c0578u));
  /* 11091108 call dword ptr [0x110c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c340c))), 0x1109110eu);
  /* 1109110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091113 call 0x110930a0 */
  push32(0x11091118u); f_110930a0();
  /* 11091118 mov esi, esp */
  ESI = (ESP);
  /* 1109111a push 0x110bb390 */
  push32((uint32_t)(0x110bb390u));
  /* 1109111f push 0x110c0580 */
  push32((uint32_t)(0x110c0580u));
  /* 11091124 call dword ptr [0x110c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c340c))), 0x1109112au);
  /* 1109112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109112f call 0x110930a0 */
  push32(0x11091134u); f_110930a0();
  /* 11091134 mov esi, esp */
  ESI = (ESP);
  /* 11091136 push 0x110bb378 */
  push32((uint32_t)(0x110bb378u));
  /* 1109113b push 0x110c0428 */
  push32((uint32_t)(0x110c0428u));
  /* 11091140 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091146u);
  /* 11091146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109114b call 0x110930a0 */
  push32(0x11091150u); f_110930a0();
  /* 11091150 mov esi, esp */
  ESI = (ESP);
  /* 11091152 push 0x110bb364 */
  push32((uint32_t)(0x110bb364u));
  /* 11091157 push 0x110c0438 */
  push32((uint32_t)(0x110c0438u));
  /* 1109115c call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091162u);
  /* 11091162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091167 call 0x110930a0 */
  push32(0x1109116cu); f_110930a0();
  /* 1109116c mov esi, esp */
  ESI = (ESP);
  /* 1109116e push 0x110bb354 */
  push32((uint32_t)(0x110bb354u));
  /* 11091173 push 0x110c0450 */
  push32((uint32_t)(0x110c0450u));
  /* 11091178 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109117eu);
  /* 1109117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091183 call 0x110930a0 */
  push32(0x11091188u); f_110930a0();
  /* 11091188 mov esi, esp */
  ESI = (ESP);
  /* 1109118a push 0x110bb344 */
  push32((uint32_t)(0x110bb344u));
  /* 1109118f push 0x110c0468 */
  push32((uint32_t)(0x110c0468u));
  /* 11091194 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109119au);
  /* 1109119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109119f call 0x110930a0 */
  push32(0x110911a4u); f_110930a0();
  /* 110911a4 mov esi, esp */
  ESI = (ESP);
  /* 110911a6 push 0x110bb334 */
  push32((uint32_t)(0x110bb334u));
  /* 110911ab push 0x110c0480 */
  push32((uint32_t)(0x110c0480u));
  /* 110911b0 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110911b6u);
  /* 110911b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110911b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110911bb call 0x110930a0 */
  push32(0x110911c0u); f_110930a0();
  /* 110911c0 mov esi, esp */
  ESI = (ESP);
  /* 110911c2 push 0x110bb324 */
  push32((uint32_t)(0x110bb324u));
  /* 110911c7 push 0x110c0498 */
  push32((uint32_t)(0x110c0498u));
  /* 110911cc call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110911d2u);
  /* 110911d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110911d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110911d7 call 0x110930a0 */
  push32(0x110911dcu); f_110930a0();
  /* 110911dc mov esi, esp */
  ESI = (ESP);
  /* 110911de push 0x110bb308 */
  push32((uint32_t)(0x110bb308u));
  /* 110911e3 push 0x110c04b0 */
  push32((uint32_t)(0x110c04b0u));
  /* 110911e8 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110911eeu);
  /* 110911ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110911f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110911f3 call 0x110930a0 */
  push32(0x110911f8u); f_110930a0();
  /* 110911f8 mov esi, esp */
  ESI = (ESP);
  /* 110911fa push 0x110bb2f8 */
  push32((uint32_t)(0x110bb2f8u));
  /* 110911ff push 0x110c04c8 */
  push32((uint32_t)(0x110c04c8u));
  /* 11091204 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109120au);
  /* 1109120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109120f call 0x110930a0 */
  push32(0x11091214u); f_110930a0();
  /* 11091214 mov esi, esp */
  ESI = (ESP);
  /* 11091216 push 0x110bb2e4 */
  push32((uint32_t)(0x110bb2e4u));
  /* 1109121b push 0x110c04e0 */
  push32((uint32_t)(0x110c04e0u));
  /* 11091220 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091226u);
  /* 11091226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109122b call 0x110930a0 */
  push32(0x11091230u); f_110930a0();
  /* 11091230 mov esi, esp */
  ESI = (ESP);
  /* 11091232 push 0x110bb2d0 */
  push32((uint32_t)(0x110bb2d0u));
  /* 11091237 push 0x110c03e0 */
  push32((uint32_t)(0x110c03e0u));
  /* 1109123c call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091242u);
  /* 11091242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091247 call 0x110930a0 */
  push32(0x1109124cu); f_110930a0();
  /* 1109124c mov esi, esp */
  ESI = (ESP);
  /* 1109124e push 0x110bb2bc */
  push32((uint32_t)(0x110bb2bcu));
  /* 11091253 push 0x110c03e8 */
  push32((uint32_t)(0x110c03e8u));
  /* 11091258 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109125eu);
  /* 1109125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091263 call 0x110930a0 */
  push32(0x11091268u); f_110930a0();
  /* 11091268 mov esi, esp */
  ESI = (ESP);
  /* 1109126a push 0x110bb2ac */
  push32((uint32_t)(0x110bb2acu));
  /* 1109126f push 0x110c03f0 */
  push32((uint32_t)(0x110c03f0u));
  /* 11091274 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109127au);
  /* 1109127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109127f call 0x110930a0 */
  push32(0x11091284u); f_110930a0();
  /* 11091284 mov esi, esp */
  ESI = (ESP);
  /* 11091286 push 0x110bb294 */
  push32((uint32_t)(0x110bb294u));
  /* 1109128b push 0x110c03f8 */
  push32((uint32_t)(0x110c03f8u));
  /* 11091290 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091296u);
  /* 11091296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109129b call 0x110930a0 */
  push32(0x110912a0u); f_110930a0();
  /* 110912a0 mov esi, esp */
  ESI = (ESP);
  /* 110912a2 push 0x110bb288 */
  push32((uint32_t)(0x110bb288u));
  /* 110912a7 push 0x110c0400 */
  push32((uint32_t)(0x110c0400u));
  /* 110912ac call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110912b2u);
  /* 110912b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110912b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110912b7 call 0x110930a0 */
  push32(0x110912bcu); f_110930a0();
  /* 110912bc mov esi, esp */
  ESI = (ESP);
  /* 110912be push 0x110bb27c */
  push32((uint32_t)(0x110bb27cu));
  /* 110912c3 push 0x110c0410 */
  push32((uint32_t)(0x110c0410u));
  /* 110912c8 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110912ceu);
  /* 110912ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110912d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110912d3 call 0x110930a0 */
  push32(0x110912d8u); f_110930a0();
  /* 110912d8 mov esi, esp */
  ESI = (ESP);
  /* 110912da push 0x110bb26c */
  push32((uint32_t)(0x110bb26cu));
  /* 110912df push 0x110c0420 */
  push32((uint32_t)(0x110c0420u));
  /* 110912e4 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110912eau);
  /* 110912ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110912ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110912ef call 0x110930a0 */
  push32(0x110912f4u); f_110930a0();
  /* 110912f4 mov esi, esp */
  ESI = (ESP);
  /* 110912f6 push 0x110bb254 */
  push32((uint32_t)(0x110bb254u));
  /* 110912fb push 0x110c0408 */
  push32((uint32_t)(0x110c0408u));
  /* 11091300 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091306u);
  /* 11091306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109130b call 0x110930a0 */
  push32(0x11091310u); f_110930a0();
  /* 11091310 mov esi, esp */
  ESI = (ESP);
  /* 11091312 push 0x110bb240 */
  push32((uint32_t)(0x110bb240u));
  /* 11091317 push 0x110c0418 */
  push32((uint32_t)(0x110c0418u));
  /* 1109131c call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091322u);
  /* 11091322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091327 call 0x110930a0 */
  push32(0x1109132cu); f_110930a0();
  /* 1109132c mov esi, esp */
  ESI = (ESP);
  /* 1109132e push 0x110bb22c */
  push32((uint32_t)(0x110bb22cu));
  /* 11091333 push 0x110c0430 */
  push32((uint32_t)(0x110c0430u));
  /* 11091338 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109133eu);
  /* 1109133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091343 call 0x110930a0 */
  push32(0x11091348u); f_110930a0();
  /* 11091348 mov esi, esp */
  ESI = (ESP);
  /* 1109134a push 0x110bb21c */
  push32((uint32_t)(0x110bb21cu));
  /* 1109134f push 0x110c0448 */
  push32((uint32_t)(0x110c0448u));
  /* 11091354 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109135au);
  /* 1109135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109135f call 0x110930a0 */
  push32(0x11091364u); f_110930a0();
  /* 11091364 mov esi, esp */
  ESI = (ESP);
  /* 11091366 push 0x110bb20c */
  push32((uint32_t)(0x110bb20cu));
  /* 1109136b push 0x110c0460 */
  push32((uint32_t)(0x110c0460u));
  /* 11091370 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091376u);
  /* 11091376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109137b call 0x110930a0 */
  push32(0x11091380u); f_110930a0();
  /* 11091380 mov esi, esp */
  ESI = (ESP);
  /* 11091382 push 0x110bb1fc */
  push32((uint32_t)(0x110bb1fcu));
  /* 11091387 push 0x110c0478 */
  push32((uint32_t)(0x110c0478u));
  /* 1109138c call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091392u);
  /* 11091392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091397 call 0x110930a0 */
  push32(0x1109139cu); f_110930a0();
  /* 1109139c mov esi, esp */
  ESI = (ESP);
  /* 1109139e push 0x110bb1ec */
  push32((uint32_t)(0x110bb1ecu));
  /* 110913a3 push 0x110c0490 */
  push32((uint32_t)(0x110c0490u));
  /* 110913a8 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110913aeu);
  /* 110913ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110913b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110913b3 call 0x110930a0 */
  push32(0x110913b8u); f_110930a0();
  /* 110913b8 mov esi, esp */
  ESI = (ESP);
  /* 110913ba push 0x110bb1dc */
  push32((uint32_t)(0x110bb1dcu));
  /* 110913bf push 0x110c04a8 */
  push32((uint32_t)(0x110c04a8u));
  /* 110913c4 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110913cau);
  /* 110913ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110913cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110913cf call 0x110930a0 */
  push32(0x110913d4u); f_110930a0();
  /* 110913d4 mov esi, esp */
  ESI = (ESP);
  /* 110913d6 push 0x110bb1c8 */
  push32((uint32_t)(0x110bb1c8u));
  /* 110913db push 0x110c04c0 */
  push32((uint32_t)(0x110c04c0u));
  /* 110913e0 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110913e6u);
  /* 110913e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110913e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110913eb call 0x110930a0 */
  push32(0x110913f0u); f_110930a0();
  /* 110913f0 mov esi, esp */
  ESI = (ESP);
  /* 110913f2 push 0x110bb1b0 */
  push32((uint32_t)(0x110bb1b0u));
  /* 110913f7 push 0x110c0440 */
  push32((uint32_t)(0x110c0440u));
  /* 110913fc call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091402u);
  /* 11091402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091407 call 0x110930a0 */
  push32(0x1109140cu); f_110930a0();
  /* 1109140c mov esi, esp */
  ESI = (ESP);
  /* 1109140e push 0x110bb198 */
  push32((uint32_t)(0x110bb198u));
  /* 11091413 push 0x110c0458 */
  push32((uint32_t)(0x110c0458u));
  /* 11091418 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109141eu);
  /* 1109141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091423 call 0x110930a0 */
  push32(0x11091428u); f_110930a0();
  /* 11091428 mov esi, esp */
  ESI = (ESP);
  /* 1109142a push 0x110bb188 */
  push32((uint32_t)(0x110bb188u));
  /* 1109142f push 0x110c0470 */
  push32((uint32_t)(0x110c0470u));
  /* 11091434 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109143au);
  /* 1109143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109143f call 0x110930a0 */
  push32(0x11091444u); f_110930a0();
  /* 11091444 mov esi, esp */
  ESI = (ESP);
  /* 11091446 push 0x110bb170 */
  push32((uint32_t)(0x110bb170u));
  /* 1109144b push 0x110c0488 */
  push32((uint32_t)(0x110c0488u));
  /* 11091450 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091456u);
  /* 11091456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109145b call 0x110930a0 */
  push32(0x11091460u); f_110930a0();
  /* 11091460 mov esi, esp */
  ESI = (ESP);
  /* 11091462 push 0x110bb164 */
  push32((uint32_t)(0x110bb164u));
  /* 11091467 push 0x110c04a0 */
  push32((uint32_t)(0x110c04a0u));
  /* 1109146c call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091472u);
  /* 11091472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091477 call 0x110930a0 */
  push32(0x1109147cu); f_110930a0();
  /* 1109147c mov esi, esp */
  ESI = (ESP);
  /* 1109147e push 0x110bb158 */
  push32((uint32_t)(0x110bb158u));
  /* 11091483 push 0x110c04b8 */
  push32((uint32_t)(0x110c04b8u));
  /* 11091488 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109148eu);
  /* 1109148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091493 call 0x110930a0 */
  push32(0x11091498u); f_110930a0();
  /* 11091498 mov esi, esp */
  ESI = (ESP);
  /* 1109149a push 0x110bb148 */
  push32((uint32_t)(0x110bb148u));
  /* 1109149f push 0x110c04d8 */
  push32((uint32_t)(0x110c04d8u));
  /* 110914a4 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110914aau);
  /* 110914aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110914ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110914af call 0x110930a0 */
  push32(0x110914b4u); f_110930a0();
  /* 110914b4 mov esi, esp */
  ESI = (ESP);
  /* 110914b6 push 0x110bb130 */
  push32((uint32_t)(0x110bb130u));
  /* 110914bb push 0x110c04d0 */
  push32((uint32_t)(0x110c04d0u));
  /* 110914c0 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110914c6u);
  /* 110914c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110914c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110914cb call 0x110930a0 */
  push32(0x110914d0u); f_110930a0();
  /* 110914d0 mov esi, esp */
  ESI = (ESP);
  /* 110914d2 push 0x110bb11c */
  push32((uint32_t)(0x110bb11cu));
  /* 110914d7 push 0x110c04e8 */
  push32((uint32_t)(0x110c04e8u));
  /* 110914dc call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110914e2u);
  /* 110914e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110914e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110914e7 call 0x110930a0 */
  push32(0x110914ecu); f_110930a0();
  /* 110914ec mov esi, esp */
  ESI = (ESP);
  /* 110914ee push 0x110bb10c */
  push32((uint32_t)(0x110bb10cu));
  /* 110914f3 push 0x110c04f0 */
  push32((uint32_t)(0x110c04f0u));
  /* 110914f8 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110914feu);
  /* 110914fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091503 call 0x110930a0 */
  push32(0x11091508u); f_110930a0();
  /* 11091508 mov esi, esp */
  ESI = (ESP);
  /* 1109150a push 0x110bb0fc */
  push32((uint32_t)(0x110bb0fcu));
  /* 1109150f push 0x110c0500 */
  push32((uint32_t)(0x110c0500u));
  /* 11091514 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109151au);
  /* 1109151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109151f call 0x110930a0 */
  push32(0x11091524u); f_110930a0();
  /* 11091524 mov esi, esp */
  ESI = (ESP);
  /* 11091526 push 0x110bb0ec */
  push32((uint32_t)(0x110bb0ecu));
  /* 1109152b push 0x110c0510 */
  push32((uint32_t)(0x110c0510u));
  /* 11091530 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091536u);
  /* 11091536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109153b call 0x110930a0 */
  push32(0x11091540u); f_110930a0();
  /* 11091540 mov esi, esp */
  ESI = (ESP);
  /* 11091542 push 0x110bb0dc */
  push32((uint32_t)(0x110bb0dcu));
  /* 11091547 push 0x110c0520 */
  push32((uint32_t)(0x110c0520u));
  /* 1109154c call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091552u);
  /* 11091552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091557 call 0x110930a0 */
  push32(0x1109155cu); f_110930a0();
  /* 1109155c mov esi, esp */
  ESI = (ESP);
  /* 1109155e push 0x110bb0c0 */
  push32((uint32_t)(0x110bb0c0u));
  /* 11091563 push 0x110c0530 */
  push32((uint32_t)(0x110c0530u));
  /* 11091568 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109156eu);
  /* 1109156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091573 call 0x110930a0 */
  push32(0x11091578u); f_110930a0();
  /* 11091578 mov esi, esp */
  ESI = (ESP);
  /* 1109157a push 0x110bb0a8 */
  push32((uint32_t)(0x110bb0a8u));
  /* 1109157f push 0x110c0540 */
  push32((uint32_t)(0x110c0540u));
  /* 11091584 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109158au);
  /* 1109158a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109158f call 0x110930a0 */
  push32(0x11091594u); f_110930a0();
  /* 11091594 mov esi, esp */
  ESI = (ESP);
  /* 11091596 push 0x110bb094 */
  push32((uint32_t)(0x110bb094u));
  /* 1109159b push 0x110c0550 */
  push32((uint32_t)(0x110c0550u));
  /* 110915a0 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110915a6u);
  /* 110915a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110915a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110915ab call 0x110930a0 */
  push32(0x110915b0u); f_110930a0();
  /* 110915b0 mov esi, esp */
  ESI = (ESP);
  /* 110915b2 push 0x110bb080 */
  push32((uint32_t)(0x110bb080u));
  /* 110915b7 push 0x110c04f8 */
  push32((uint32_t)(0x110c04f8u));
  /* 110915bc call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110915c2u);
  /* 110915c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110915c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110915c7 call 0x110930a0 */
  push32(0x110915ccu); f_110930a0();
  /* 110915cc mov esi, esp */
  ESI = (ESP);
  /* 110915ce push 0x110bb06c */
  push32((uint32_t)(0x110bb06cu));
  /* 110915d3 push 0x110c0508 */
  push32((uint32_t)(0x110c0508u));
  /* 110915d8 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110915deu);
  /* 110915de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110915e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110915e3 call 0x110930a0 */
  push32(0x110915e8u); f_110930a0();
  /* 110915e8 mov esi, esp */
  ESI = (ESP);
  /* 110915ea push 0x110bb05c */
  push32((uint32_t)(0x110bb05cu));
  /* 110915ef push 0x110c0518 */
  push32((uint32_t)(0x110c0518u));
  /* 110915f4 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x110915fau);
  /* 110915fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110915fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110915ff call 0x110930a0 */
  push32(0x11091604u); f_110930a0();
  /* 11091604 mov esi, esp */
  ESI = (ESP);
  /* 11091606 push 0x110bb044 */
  push32((uint32_t)(0x110bb044u));
  /* 1109160b push 0x110c0528 */
  push32((uint32_t)(0x110c0528u));
  /* 11091610 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091616u);
  /* 11091616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109161b call 0x110930a0 */
  push32(0x11091620u); f_110930a0();
  /* 11091620 mov esi, esp */
  ESI = (ESP);
  /* 11091622 push 0x110bb038 */
  push32((uint32_t)(0x110bb038u));
  /* 11091627 push 0x110c0538 */
  push32((uint32_t)(0x110c0538u));
  /* 1109162c call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x11091632u);
  /* 11091632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091637 call 0x110930a0 */
  push32(0x1109163cu); f_110930a0();
  /* 1109163c mov esi, esp */
  ESI = (ESP);
  /* 1109163e push 0x110bb02c */
  push32((uint32_t)(0x110bb02cu));
  /* 11091643 push 0x110c0548 */
  push32((uint32_t)(0x110c0548u));
  /* 11091648 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109164eu);
  /* 1109164e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091653 call 0x110930a0 */
  push32(0x11091658u); f_110930a0();
  /* 11091658 mov esi, esp */
  ESI = (ESP);
  /* 1109165a push 0x110bb01c */
  push32((uint32_t)(0x110bb01cu));
  /* 1109165f push 0x110c0558 */
  push32((uint32_t)(0x110c0558u));
  /* 11091664 call dword ptr [0x110c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3410))), 0x1109166au);
  /* 1109166a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109166d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109166f call 0x110930a0 */
  push32(0x11091674u); f_110930a0();
  /* 11091674 mov esi, esp */
  ESI = (ESP);
  /* 11091676 push 1 */
  push32((uint32_t)(0x1u));
  /* 11091678 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109167a call dword ptr [0x110c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3408))), 0x11091680u);
  /* 11091680 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091683 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091685 call 0x110930a0 */
  push32(0x1109168au); f_110930a0();
  /* 1109168a mov esi, esp */
  ESI = (ESP);
  /* 1109168c push 2 */
  push32((uint32_t)(0x2u));
  /* 1109168e push 1 */
  push32((uint32_t)(0x1u));
  /* 11091690 call dword ptr [0x110c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3408))), 0x11091696u);
  /* 11091696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091699 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109169b call 0x110930a0 */
  push32(0x110916a0u); f_110930a0();
  /* 110916a0 mov esi, esp */
  ESI = (ESP);
  /* 110916a2 push 4 */
  push32((uint32_t)(0x4u));
  /* 110916a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 110916a6 call dword ptr [0x110c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3408))), 0x110916acu);
  /* 110916ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110916af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110916b1 call 0x110930a0 */
  push32(0x110916b6u); f_110930a0();
  /* 110916b6 pop edi */
  EDI = (pop32());
  /* 110916b7 pop esi */
  ESI = (pop32());
  /* 110916b8 pop ebx */
  EBX = (pop32());
  /* 110916b9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110916bc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110916be call 0x110930a0 */
  push32(0x110916c3u); f_110930a0();
  /* 110916c3 mov esp, ebp */
  ESP = (EBP);
  /* 110916c5 pop ebp */
  EBP = (pop32());
  /* 110916c6 ret  */
  ESPCHK(0x11091090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001860 @ 0x11091860 (4875 bytes, 1449 insns) */
void f_11091860(void) {
  FTRACE(0x11091860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11091860 push ebp */
  push32((uint32_t)(EBP));
  /* 11091861 mov ebp, esp */
  EBP = (ESP);
  /* 11091863 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11091866 push ebx */
  push32((uint32_t)(EBX));
  /* 11091867 push esi */
  push32((uint32_t)(ESI));
  /* 11091868 push edi */
  push32((uint32_t)(EDI));
  /* 11091869 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1109186c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11091871 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11091876 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11091878 mov esi, esp */
  ESI = (ESP);
  /* 1109187a push 1 */
  push32((uint32_t)(0x1u));
  /* 1109187c call dword ptr [0x110c33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33c8))), 0x11091882u);
  /* 11091882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091885 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091887 call 0x110930a0 */
  push32(0x1109188cu); f_110930a0();
  /* 1109188c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11091891 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11091893 je 0x11091cd9 */
  if (C.zf) goto L_11091cd9;
  /* 11091899 mov esi, esp */
  ESI = (ESP);
  /* 1109189b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109189d push 1 */
  push32((uint32_t)(0x1u));
  /* 1109189f call dword ptr [0x110c33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d0))), 0x110918a5u);
  /* 110918a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110918a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110918aa call 0x110930a0 */
  push32(0x110918afu); f_110930a0();
  /* 110918af mov esi, esp */
  ESI = (ESP);
  /* 110918b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110918b3 call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x110918b9u);
  /* 110918b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110918bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110918be call 0x110930a0 */
  push32(0x110918c3u); f_110930a0();
  /* 110918c3 mov ecx, 3 */
  ECX = (0x3u);
  /* 110918c8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110918ca imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110918d0 add ecx, 0xfa0 */
  { uint32_t _a=(ECX),_b=(0xfa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110918d6 mov esi, esp */
  ESI = (ESP);
  /* 110918d8 push ecx */
  push32((uint32_t)(ECX));
  /* 110918d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 110918db push 0 */
  push32((uint32_t)(0x0u));
  /* 110918dd call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x110918e3u);
  /* 110918e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110918e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110918e8 call 0x110930a0 */
  push32(0x110918edu); f_110930a0();
  /* 110918ed mov esi, esp */
  ESI = (ESP);
  /* 110918ef push 0 */
  push32((uint32_t)(0x0u));
  /* 110918f1 call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x110918f7u);
  /* 110918f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110918fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110918fc call 0x110930a0 */
  push32(0x11091901u); f_110930a0();
  /* 11091901 mov edx, 3 */
  EDX = (0x3u);
  /* 11091906 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11091908 imul edx, edx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x1f4u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109190e add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091914 mov esi, esp */
  ESI = (ESP);
  /* 11091916 push edx */
  push32((uint32_t)(EDX));
  /* 11091917 push 1 */
  push32((uint32_t)(0x1u));
  /* 11091919 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109191b call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091921u);
  /* 11091921 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091924 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091926 call 0x110930a0 */
  push32(0x1109192bu); f_110930a0();
  /* 1109192b mov esi, esp */
  ESI = (ESP);
  /* 1109192d push 0 */
  push32((uint32_t)(0x0u));
  /* 1109192f call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091935u);
  /* 11091935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091938 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109193a call 0x110930a0 */
  push32(0x1109193fu); f_110930a0();
  /* 1109193f mov ecx, 3 */
  ECX = (0x3u);
  /* 11091944 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11091946 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109194c add ecx, 0xfa0 */
  { uint32_t _a=(ECX),_b=(0xfa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091952 mov esi, esp */
  ESI = (ESP);
  /* 11091954 push ecx */
  push32((uint32_t)(ECX));
  /* 11091955 push 4 */
  push32((uint32_t)(0x4u));
  /* 11091957 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091959 call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x1109195fu);
  /* 1109195f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091962 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091964 call 0x110930a0 */
  push32(0x11091969u); f_110930a0();
  /* 11091969 mov esi, esp */
  ESI = (ESP);
  /* 1109196b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109196d call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091973u);
  /* 11091973 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091976 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091978 call 0x110930a0 */
  push32(0x1109197du); f_110930a0();
  /* 1109197d mov edx, 3 */
  EDX = (0x3u);
  /* 11091982 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11091984 imul edx, edx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x1f4u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109198a add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091990 mov esi, esp */
  ESI = (ESP);
  /* 11091992 push edx */
  push32((uint32_t)(EDX));
  /* 11091993 push 2 */
  push32((uint32_t)(0x2u));
  /* 11091995 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091997 call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x1109199du);
  /* 1109199d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110919a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110919a2 call 0x110930a0 */
  push32(0x110919a7u); f_110930a0();
  /* 110919a7 mov esi, esp */
  ESI = (ESP);
  /* 110919a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110919ab call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x110919b1u);
  /* 110919b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110919b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110919b6 call 0x110930a0 */
  push32(0x110919bbu); f_110930a0();
  /* 110919bb mov ecx, 3 */
  ECX = (0x3u);
  /* 110919c0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110919c2 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110919c8 add ecx, 0xfa0 */
  { uint32_t _a=(ECX),_b=(0xfa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110919ce mov esi, esp */
  ESI = (ESP);
  /* 110919d0 push ecx */
  push32((uint32_t)(ECX));
  /* 110919d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110919d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110919d5 call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x110919dbu);
  /* 110919db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110919de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110919e0 call 0x110930a0 */
  push32(0x110919e5u); f_110930a0();
  /* 110919e5 mov esi, esp */
  ESI = (ESP);
  /* 110919e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110919e9 call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x110919efu);
  /* 110919ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110919f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110919f4 call 0x110930a0 */
  push32(0x110919f9u); f_110930a0();
  /* 110919f9 mov edx, 3 */
  EDX = (0x3u);
  /* 110919fe sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11091a00 imul edx, edx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x1f4u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11091a06 add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091a0c mov esi, esp */
  ESI = (ESP);
  /* 11091a0e push edx */
  push32((uint32_t)(EDX));
  /* 11091a0f push 5 */
  push32((uint32_t)(0x5u));
  /* 11091a11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091a13 call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091a19u);
  /* 11091a19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091a1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091a1e call 0x110930a0 */
  push32(0x11091a23u); f_110930a0();
  /* 11091a23 mov esi, esp */
  ESI = (ESP);
  /* 11091a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091a27 call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091a2du);
  /* 11091a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091a30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091a32 call 0x110930a0 */
  push32(0x11091a37u); f_110930a0();
  /* 11091a37 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11091a3d add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091a42 mov esi, esp */
  ESI = (ESP);
  /* 11091a44 push eax */
  push32((uint32_t)(EAX));
  /* 11091a45 push 3 */
  push32((uint32_t)(0x3u));
  /* 11091a47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11091a49 call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091a4fu);
  /* 11091a4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091a52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091a54 call 0x110930a0 */
  push32(0x11091a59u); f_110930a0();
  /* 11091a59 mov esi, esp */
  ESI = (ESP);
  /* 11091a5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11091a5d call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091a63u);
  /* 11091a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091a66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091a68 call 0x110930a0 */
  push32(0x11091a6du); f_110930a0();
  /* 11091a6d imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11091a73 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091a78 mov esi, esp */
  ESI = (ESP);
  /* 11091a7a push eax */
  push32((uint32_t)(EAX));
  /* 11091a7b push 1 */
  push32((uint32_t)(0x1u));
  /* 11091a7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11091a7f call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091a85u);
  /* 11091a85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091a88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091a8a call 0x110930a0 */
  push32(0x11091a8fu); f_110930a0();
  /* 11091a8f mov esi, esp */
  ESI = (ESP);
  /* 11091a91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091a93 call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091a99u);
  /* 11091a99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091a9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091a9e call 0x110930a0 */
  push32(0x11091aa3u); f_110930a0();
  /* 11091aa3 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11091aa9 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091aae mov esi, esp */
  ESI = (ESP);
  /* 11091ab0 push eax */
  push32((uint32_t)(EAX));
  /* 11091ab1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11091ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11091ab5 call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091abbu);
  /* 11091abb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091abe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091ac0 call 0x110930a0 */
  push32(0x11091ac5u); f_110930a0();
  /* 11091ac5 mov esi, esp */
  ESI = (ESP);
  /* 11091ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091ac9 call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091acfu);
  /* 11091acf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091ad2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091ad4 call 0x110930a0 */
  push32(0x11091ad9u); f_110930a0();
  /* 11091ad9 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11091adf add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091ae4 mov esi, esp */
  ESI = (ESP);
  /* 11091ae6 push eax */
  push32((uint32_t)(EAX));
  /* 11091ae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11091ae9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11091aeb call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091af1u);
  /* 11091af1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091af4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091af6 call 0x110930a0 */
  push32(0x11091afbu); f_110930a0();
  /* 11091afb mov esi, esp */
  ESI = (ESP);
  /* 11091afd push 0 */
  push32((uint32_t)(0x0u));
  /* 11091aff call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091b05u);
  /* 11091b05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091b08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091b0a call 0x110930a0 */
  push32(0x11091b0fu); f_110930a0();
  /* 11091b0f imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11091b15 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091b1a mov esi, esp */
  ESI = (ESP);
  /* 11091b1c push eax */
  push32((uint32_t)(EAX));
  /* 11091b1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11091b1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11091b21 call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091b27u);
  /* 11091b27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091b2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091b2c call 0x110930a0 */
  push32(0x11091b31u); f_110930a0();
  /* 11091b31 mov esi, esp */
  ESI = (ESP);
  /* 11091b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091b35 call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091b3bu);
  /* 11091b3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091b3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091b40 call 0x110930a0 */
  push32(0x11091b45u); f_110930a0();
  /* 11091b45 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11091b4b add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091b50 mov esi, esp */
  ESI = (ESP);
  /* 11091b52 push eax */
  push32((uint32_t)(EAX));
  /* 11091b53 push 5 */
  push32((uint32_t)(0x5u));
  /* 11091b55 push 1 */
  push32((uint32_t)(0x1u));
  /* 11091b57 call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091b5du);
  /* 11091b5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091b60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091b62 call 0x110930a0 */
  push32(0x11091b67u); f_110930a0();
  /* 11091b67 mov esi, esp */
  ESI = (ESP);
  /* 11091b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091b6b call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091b71u);
  /* 11091b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091b74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091b76 call 0x110930a0 */
  push32(0x11091b7bu); f_110930a0();
  /* 11091b7b imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11091b81 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091b86 mov esi, esp */
  ESI = (ESP);
  /* 11091b88 push eax */
  push32((uint32_t)(EAX));
  /* 11091b89 push 3 */
  push32((uint32_t)(0x3u));
  /* 11091b8b push 2 */
  push32((uint32_t)(0x2u));
  /* 11091b8d call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091b93u);
  /* 11091b93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091b96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091b98 call 0x110930a0 */
  push32(0x11091b9du); f_110930a0();
  /* 11091b9d mov esi, esp */
  ESI = (ESP);
  /* 11091b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11091ba1 call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091ba7u);
  /* 11091ba7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091baa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091bac call 0x110930a0 */
  push32(0x11091bb1u); f_110930a0();
  /* 11091bb1 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11091bb7 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091bbc mov esi, esp */
  ESI = (ESP);
  /* 11091bbe push eax */
  push32((uint32_t)(EAX));
  /* 11091bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11091bc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11091bc3 call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091bc9u);
  /* 11091bc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091bcc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091bce call 0x110930a0 */
  push32(0x11091bd3u); f_110930a0();
  /* 11091bd3 mov esi, esp */
  ESI = (ESP);
  /* 11091bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091bd7 call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091bddu);
  /* 11091bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091be0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091be2 call 0x110930a0 */
  push32(0x11091be7u); f_110930a0();
  /* 11091be7 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11091bed add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091bf2 mov esi, esp */
  ESI = (ESP);
  /* 11091bf4 push eax */
  push32((uint32_t)(EAX));
  /* 11091bf5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11091bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11091bf9 call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091bffu);
  /* 11091bff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091c02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091c04 call 0x110930a0 */
  push32(0x11091c09u); f_110930a0();
  /* 11091c09 mov esi, esp */
  ESI = (ESP);
  /* 11091c0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11091c0d call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091c13u);
  /* 11091c13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091c16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091c18 call 0x110930a0 */
  push32(0x11091c1du); f_110930a0();
  /* 11091c1d imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11091c23 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091c28 mov esi, esp */
  ESI = (ESP);
  /* 11091c2a push eax */
  push32((uint32_t)(EAX));
  /* 11091c2b push 2 */
  push32((uint32_t)(0x2u));
  /* 11091c2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11091c2f call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091c35u);
  /* 11091c35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091c38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091c3a call 0x110930a0 */
  push32(0x11091c3fu); f_110930a0();
  /* 11091c3f mov esi, esp */
  ESI = (ESP);
  /* 11091c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091c43 call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091c49u);
  /* 11091c49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091c4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091c4e call 0x110930a0 */
  push32(0x11091c53u); f_110930a0();
  /* 11091c53 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11091c59 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091c5e mov esi, esp */
  ESI = (ESP);
  /* 11091c60 push eax */
  push32((uint32_t)(EAX));
  /* 11091c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091c63 push 2 */
  push32((uint32_t)(0x2u));
  /* 11091c65 call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091c6bu);
  /* 11091c6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091c6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091c70 call 0x110930a0 */
  push32(0x11091c75u); f_110930a0();
  /* 11091c75 mov esi, esp */
  ESI = (ESP);
  /* 11091c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091c79 call dword ptr [0x110c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d4))), 0x11091c7fu);
  /* 11091c7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091c82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091c84 call 0x110930a0 */
  push32(0x11091c89u); f_110930a0();
  /* 11091c89 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11091c8f add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11091c94 mov esi, esp */
  ESI = (ESP);
  /* 11091c96 push eax */
  push32((uint32_t)(EAX));
  /* 11091c97 push 5 */
  push32((uint32_t)(0x5u));
  /* 11091c99 push 2 */
  push32((uint32_t)(0x2u));
  /* 11091c9b call dword ptr [0x110c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33cc))), 0x11091ca1u);
  /* 11091ca1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091ca4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091ca6 call 0x110930a0 */
  push32(0x11091cabu); f_110930a0();
  /* 11091cab mov esi, esp */
  ESI = (ESP);
  /* 11091cad push 0x110bb424 */
  push32((uint32_t)(0x110bb424u));
  /* 11091cb2 call dword ptr [0x110c33dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33dc))), 0x11091cb8u);
  /* 11091cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091cbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091cbd call 0x110930a0 */
  push32(0x11091cc2u); f_110930a0();
  /* 11091cc2 mov esi, esp */
  ESI = (ESP);
  /* 11091cc4 push 0x110bb41c */
  push32((uint32_t)(0x110bb41cu));
  /* 11091cc9 call dword ptr [0x110c33dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33dc))), 0x11091ccfu);
  /* 11091ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091cd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091cd4 call 0x110930a0 */
  push32(0x11091cd9u); f_110930a0();
L_11091cd9:;
  /* 11091cd9 mov esi, esp */
  ESI = (ESP);
  /* 11091cdb push 2 */
  push32((uint32_t)(0x2u));
  /* 11091cdd call dword ptr [0x110c33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33c8))), 0x11091ce3u);
  /* 11091ce3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091ce6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091ce8 call 0x110930a0 */
  push32(0x11091cedu); f_110930a0();
  /* 11091ced and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11091cf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11091cf4 je 0x11092a51 */
  if (C.zf) goto L_11092a51;
  /* 11091cfa mov esi, esp */
  ESI = (ESP);
  /* 11091cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 11091cfe push 2 */
  push32((uint32_t)(0x2u));
  /* 11091d00 call dword ptr [0x110c33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d0))), 0x11091d06u);
  /* 11091d06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091d09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091d0b call 0x110930a0 */
  push32(0x11091d10u); f_110930a0();
  /* 11091d10 mov esi, esp */
  ESI = (ESP);
  /* 11091d12 push 0x110bb404 */
  push32((uint32_t)(0x110bb404u));
  /* 11091d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091d19 push 0x110bb3fc */
  push32((uint32_t)(0x110bb3fcu));
  /* 11091d1e push 9 */
  push32((uint32_t)(0x9u));
  /* 11091d20 call dword ptr [0x110c33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e0))), 0x11091d26u);
  /* 11091d26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091d29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091d2b call 0x110930a0 */
  push32(0x11091d30u); f_110930a0();
  /* 11091d30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11091d33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091d37 je 0x11091d52 */
  if (C.zf) goto L_11091d52;
  /* 11091d39 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091d3d je 0x110921da */
  if (C.zf) goto L_110921da;
  /* 11091d43 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091d47 je 0x11092662 */
  if (C.zf) goto L_11092662;
  /* 11091d4d jmp 0x11092a51 */
  goto L_11092a51;
L_11091d52:;
  /* 11091d52 mov esi, esp */
  ESI = (ESP);
  /* 11091d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091d56 push 0x110c0560 */
  push32((uint32_t)(0x110c0560u));
  /* 11091d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11091d5d call dword ptr [0x110c33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d8))), 0x11091d63u);
  /* 11091d63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091d66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091d68 call 0x110930a0 */
  push32(0x11091d6du); f_110930a0();
  /* 11091d6d mov esi, esp */
  ESI = (ESP);
  /* 11091d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11091d71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091d73 call dword ptr [0x110c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e8))), 0x11091d79u);
  /* 11091d79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091d7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091d7e call 0x110930a0 */
  push32(0x11091d83u); f_110930a0();
  /* 11091d83 mov esi, esp */
  ESI = (ESP);
  /* 11091d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091d87 push 0x110c0570 */
  push32((uint32_t)(0x110c0570u));
  /* 11091d8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11091d8e call dword ptr [0x110c33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d8))), 0x11091d94u);
  /* 11091d94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091d97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091d99 call 0x110930a0 */
  push32(0x11091d9eu); f_110930a0();
  /* 11091d9e mov esi, esp */
  ESI = (ESP);
  /* 11091da0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091da2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11091da4 call dword ptr [0x110c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e8))), 0x11091daau);
  /* 11091daa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091dad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091daf call 0x110930a0 */
  push32(0x11091db4u); f_110930a0();
  /* 11091db4 mov esi, esp */
  ESI = (ESP);
  /* 11091db6 push 0x110c0580 */
  push32((uint32_t)(0x110c0580u));
  /* 11091dbb call dword ptr [0x110c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33ec))), 0x11091dc1u);
  /* 11091dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091dc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091dc6 call 0x110930a0 */
  push32(0x11091dcbu); f_110930a0();
  /* 11091dcb mov esi, esp */
  ESI = (ESP);
  /* 11091dcd push 0 */
  push32((uint32_t)(0x0u));
  /* 11091dcf push 0x110c0570 */
  push32((uint32_t)(0x110c0570u));
  /* 11091dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091dd6 call dword ptr [0x110c33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d8))), 0x11091ddcu);
  /* 11091ddc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091ddf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091de1 call 0x110930a0 */
  push32(0x11091de6u); f_110930a0();
  /* 11091de6 mov esi, esp */
  ESI = (ESP);
  /* 11091de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091dea push 0x110c04d8 */
  push32((uint32_t)(0x110c04d8u));
  /* 11091def push 0 */
  push32((uint32_t)(0x0u));
  /* 11091df1 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091df7u);
  /* 11091df7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091dfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091dfc call 0x110930a0 */
  push32(0x11091e01u); f_110930a0();
  /* 11091e01 mov esi, esp */
  ESI = (ESP);
  /* 11091e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091e05 push 0x110c0428 */
  push32((uint32_t)(0x110c0428u));
  /* 11091e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11091e0c call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091e12u);
  /* 11091e12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091e15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091e17 call 0x110930a0 */
  push32(0x11091e1cu); f_110930a0();
  /* 11091e1c mov esi, esp */
  ESI = (ESP);
  /* 11091e1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11091e20 push 0x110c0438 */
  push32((uint32_t)(0x110c0438u));
  /* 11091e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091e27 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091e2du);
  /* 11091e2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091e30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091e32 call 0x110930a0 */
  push32(0x11091e37u); f_110930a0();
  /* 11091e37 mov esi, esp */
  ESI = (ESP);
  /* 11091e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091e3b push 0x110c0450 */
  push32((uint32_t)(0x110c0450u));
  /* 11091e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091e42 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091e48u);
  /* 11091e48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091e4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091e4d call 0x110930a0 */
  push32(0x11091e52u); f_110930a0();
  /* 11091e52 mov esi, esp */
  ESI = (ESP);
  /* 11091e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091e56 push 0x110c0468 */
  push32((uint32_t)(0x110c0468u));
  /* 11091e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11091e5d call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091e63u);
  /* 11091e63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091e66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091e68 call 0x110930a0 */
  push32(0x11091e6du); f_110930a0();
  /* 11091e6d mov esi, esp */
  ESI = (ESP);
  /* 11091e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11091e71 push 0x110c0480 */
  push32((uint32_t)(0x110c0480u));
  /* 11091e76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091e78 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091e7eu);
  /* 11091e7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091e81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091e83 call 0x110930a0 */
  push32(0x11091e88u); f_110930a0();
  /* 11091e88 mov esi, esp */
  ESI = (ESP);
  /* 11091e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11091e8c push 0x110c0498 */
  push32((uint32_t)(0x110c0498u));
  /* 11091e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091e93 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091e99u);
  /* 11091e99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091e9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091e9e call 0x110930a0 */
  push32(0x11091ea3u); f_110930a0();
  /* 11091ea3 mov esi, esp */
  ESI = (ESP);
  /* 11091ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091ea7 push 0x110c04b0 */
  push32((uint32_t)(0x110c04b0u));
  /* 11091eac push 0 */
  push32((uint32_t)(0x0u));
  /* 11091eae call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091eb4u);
  /* 11091eb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091eb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091eb9 call 0x110930a0 */
  push32(0x11091ebeu); f_110930a0();
  /* 11091ebe mov esi, esp */
  ESI = (ESP);
  /* 11091ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091ec2 push 0x110c04c8 */
  push32((uint32_t)(0x110c04c8u));
  /* 11091ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091ec9 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091ecfu);
  /* 11091ecf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091ed2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091ed4 call 0x110930a0 */
  push32(0x11091ed9u); f_110930a0();
  /* 11091ed9 mov esi, esp */
  ESI = (ESP);
  /* 11091edb push 0 */
  push32((uint32_t)(0x0u));
  /* 11091edd push 0x110c04e0 */
  push32((uint32_t)(0x110c04e0u));
  /* 11091ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091ee4 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091eeau);
  /* 11091eea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091eed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091eef call 0x110930a0 */
  push32(0x11091ef4u); f_110930a0();
  /* 11091ef4 mov esi, esp */
  ESI = (ESP);
  /* 11091ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091ef8 push 0x110c03e0 */
  push32((uint32_t)(0x110c03e0u));
  /* 11091efd push 0 */
  push32((uint32_t)(0x0u));
  /* 11091eff call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091f05u);
  /* 11091f05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091f08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091f0a call 0x110930a0 */
  push32(0x11091f0fu); f_110930a0();
  /* 11091f0f mov esi, esp */
  ESI = (ESP);
  /* 11091f11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091f13 push 0x110c03e8 */
  push32((uint32_t)(0x110c03e8u));
  /* 11091f18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091f1a call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091f20u);
  /* 11091f20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091f23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091f25 call 0x110930a0 */
  push32(0x11091f2au); f_110930a0();
  /* 11091f2a mov esi, esp */
  ESI = (ESP);
  /* 11091f2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11091f2e push 0x110c03f0 */
  push32((uint32_t)(0x110c03f0u));
  /* 11091f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091f35 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091f3bu);
  /* 11091f3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091f3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091f40 call 0x110930a0 */
  push32(0x11091f45u); f_110930a0();
  /* 11091f45 mov esi, esp */
  ESI = (ESP);
  /* 11091f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091f49 push 0x110c03f8 */
  push32((uint32_t)(0x110c03f8u));
  /* 11091f4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11091f50 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091f56u);
  /* 11091f56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091f59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091f5b call 0x110930a0 */
  push32(0x11091f60u); f_110930a0();
  /* 11091f60 mov esi, esp */
  ESI = (ESP);
  /* 11091f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091f64 push 0x110c0400 */
  push32((uint32_t)(0x110c0400u));
  /* 11091f69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091f6b call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091f71u);
  /* 11091f71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091f74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091f76 call 0x110930a0 */
  push32(0x11091f7bu); f_110930a0();
  /* 11091f7b mov esi, esp */
  ESI = (ESP);
  /* 11091f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11091f7f push 0x110c0410 */
  push32((uint32_t)(0x110c0410u));
  /* 11091f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091f86 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091f8cu);
  /* 11091f8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091f8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091f91 call 0x110930a0 */
  push32(0x11091f96u); f_110930a0();
  /* 11091f96 mov esi, esp */
  ESI = (ESP);
  /* 11091f98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091f9a push 0x110c0420 */
  push32((uint32_t)(0x110c0420u));
  /* 11091f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11091fa1 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091fa7u);
  /* 11091fa7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091faa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091fac call 0x110930a0 */
  push32(0x11091fb1u); f_110930a0();
  /* 11091fb1 mov esi, esp */
  ESI = (ESP);
  /* 11091fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091fb5 push 0x110c04d0 */
  push32((uint32_t)(0x110c04d0u));
  /* 11091fba push 0 */
  push32((uint32_t)(0x0u));
  /* 11091fbc call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091fc2u);
  /* 11091fc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091fc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091fc7 call 0x110930a0 */
  push32(0x11091fccu); f_110930a0();
  /* 11091fcc mov esi, esp */
  ESI = (ESP);
  /* 11091fce push 0 */
  push32((uint32_t)(0x0u));
  /* 11091fd0 push 0x110c04e8 */
  push32((uint32_t)(0x110c04e8u));
  /* 11091fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091fd7 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091fddu);
  /* 11091fdd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091fe0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091fe2 call 0x110930a0 */
  push32(0x11091fe7u); f_110930a0();
  /* 11091fe7 mov esi, esp */
  ESI = (ESP);
  /* 11091fe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091feb push 0x110c04f0 */
  push32((uint32_t)(0x110c04f0u));
  /* 11091ff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11091ff2 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11091ff8u);
  /* 11091ff8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11091ffb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11091ffd call 0x110930a0 */
  push32(0x11092002u); f_110930a0();
  /* 11092002 mov esi, esp */
  ESI = (ESP);
  /* 11092004 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092006 push 0x110c0500 */
  push32((uint32_t)(0x110c0500u));
  /* 1109200b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109200d call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092013u);
  /* 11092013 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092016 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092018 call 0x110930a0 */
  push32(0x1109201du); f_110930a0();
  /* 1109201d mov esi, esp */
  ESI = (ESP);
  /* 1109201f push 0 */
  push32((uint32_t)(0x0u));
  /* 11092021 push 0x110c0510 */
  push32((uint32_t)(0x110c0510u));
  /* 11092026 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092028 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109202eu);
  /* 1109202e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092031 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092033 call 0x110930a0 */
  push32(0x11092038u); f_110930a0();
  /* 11092038 mov esi, esp */
  ESI = (ESP);
  /* 1109203a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109203c push 0x110c0520 */
  push32((uint32_t)(0x110c0520u));
  /* 11092041 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092043 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092049u);
  /* 11092049 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109204c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109204e call 0x110930a0 */
  push32(0x11092053u); f_110930a0();
  /* 11092053 mov esi, esp */
  ESI = (ESP);
  /* 11092055 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092057 push 0x110c0530 */
  push32((uint32_t)(0x110c0530u));
  /* 1109205c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109205e call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092064u);
  /* 11092064 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092067 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092069 call 0x110930a0 */
  push32(0x1109206eu); f_110930a0();
  /* 1109206e mov esi, esp */
  ESI = (ESP);
  /* 11092070 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092072 push 0x110c0540 */
  push32((uint32_t)(0x110c0540u));
  /* 11092077 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092079 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109207fu);
  /* 1109207f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092082 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092084 call 0x110930a0 */
  push32(0x11092089u); f_110930a0();
  /* 11092089 mov esi, esp */
  ESI = (ESP);
  /* 1109208b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109208d push 0x110c0550 */
  push32((uint32_t)(0x110c0550u));
  /* 11092092 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092094 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109209au);
  /* 1109209a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109209d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109209f call 0x110930a0 */
  push32(0x110920a4u); f_110930a0();
  /* 110920a4 mov esi, esp */
  ESI = (ESP);
  /* 110920a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 110920a8 push 0x110c04f8 */
  push32((uint32_t)(0x110c04f8u));
  /* 110920ad push 0 */
  push32((uint32_t)(0x0u));
  /* 110920af call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110920b5u);
  /* 110920b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110920b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110920ba call 0x110930a0 */
  push32(0x110920bfu); f_110930a0();
  /* 110920bf mov esi, esp */
  ESI = (ESP);
  /* 110920c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110920c3 push 0x110c0508 */
  push32((uint32_t)(0x110c0508u));
  /* 110920c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110920ca call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110920d0u);
  /* 110920d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110920d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110920d5 call 0x110930a0 */
  push32(0x110920dau); f_110930a0();
  /* 110920da mov esi, esp */
  ESI = (ESP);
  /* 110920dc push 0 */
  push32((uint32_t)(0x0u));
  /* 110920de push 0x110c0518 */
  push32((uint32_t)(0x110c0518u));
  /* 110920e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110920e5 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110920ebu);
  /* 110920eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110920ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110920f0 call 0x110930a0 */
  push32(0x110920f5u); f_110930a0();
  /* 110920f5 mov esi, esp */
  ESI = (ESP);
  /* 110920f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110920f9 push 0x110c0528 */
  push32((uint32_t)(0x110c0528u));
  /* 110920fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11092100 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092106u);
  /* 11092106 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092109 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109210b call 0x110930a0 */
  push32(0x11092110u); f_110930a0();
  /* 11092110 mov esi, esp */
  ESI = (ESP);
  /* 11092112 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092114 push 0x110c0538 */
  push32((uint32_t)(0x110c0538u));
  /* 11092119 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109211b call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092121u);
  /* 11092121 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092124 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092126 call 0x110930a0 */
  push32(0x1109212bu); f_110930a0();
  /* 1109212b mov esi, esp */
  ESI = (ESP);
  /* 1109212d push 0 */
  push32((uint32_t)(0x0u));
  /* 1109212f push 0x110c0548 */
  push32((uint32_t)(0x110c0548u));
  /* 11092134 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092136 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109213cu);
  /* 1109213c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109213f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092141 call 0x110930a0 */
  push32(0x11092146u); f_110930a0();
  /* 11092146 mov esi, esp */
  ESI = (ESP);
  /* 11092148 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109214a push 0x110c0558 */
  push32((uint32_t)(0x110c0558u));
  /* 1109214f push 0 */
  push32((uint32_t)(0x0u));
  /* 11092151 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092157u);
  /* 11092157 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109215a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109215c call 0x110930a0 */
  push32(0x11092161u); f_110930a0();
  /* 11092161 mov esi, esp */
  ESI = (ESP);
  /* 11092163 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11092165 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092167 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092169 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109216b push 0x110bb3f0 */
  push32((uint32_t)(0x110bb3f0u));
  /* 11092170 push 2 */
  push32((uint32_t)(0x2u));
  /* 11092172 call dword ptr [0x110c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f4))), 0x11092178u);
  /* 11092178 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109217b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109217d call 0x110930a0 */
  push32(0x11092182u); f_110930a0();
  /* 11092182 mov esi, esp */
  ESI = (ESP);
  /* 11092184 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11092186 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092188 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109218a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109218c push 0x110bb3e4 */
  push32((uint32_t)(0x110bb3e4u));
  /* 11092191 push 1 */
  push32((uint32_t)(0x1u));
  /* 11092193 call dword ptr [0x110c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f4))), 0x11092199u);
  /* 11092199 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109219c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109219e call 0x110930a0 */
  push32(0x110921a3u); f_110930a0();
  /* 110921a3 mov esi, esp */
  ESI = (ESP);
  /* 110921a5 push 0x110bb3d8 */
  push32((uint32_t)(0x110bb3d8u));
  /* 110921aa push 2 */
  push32((uint32_t)(0x2u));
  /* 110921ac call dword ptr [0x110c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f8))), 0x110921b2u);
  /* 110921b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110921b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110921b7 call 0x110930a0 */
  push32(0x110921bcu); f_110930a0();
  /* 110921bc mov esi, esp */
  ESI = (ESP);
  /* 110921be push 0x110bb3d0 */
  push32((uint32_t)(0x110bb3d0u));
  /* 110921c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 110921c5 call dword ptr [0x110c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f8))), 0x110921cbu);
  /* 110921cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110921ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110921d0 call 0x110930a0 */
  push32(0x110921d5u); f_110930a0();
  /* 110921d5 jmp 0x11092a51 */
  goto L_11092a51;
L_110921da:;
  /* 110921da mov esi, esp */
  ESI = (ESP);
  /* 110921dc push 0 */
  push32((uint32_t)(0x0u));
  /* 110921de push 0x110c0560 */
  push32((uint32_t)(0x110c0560u));
  /* 110921e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110921e5 call dword ptr [0x110c33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d8))), 0x110921ebu);
  /* 110921eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110921ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110921f0 call 0x110930a0 */
  push32(0x110921f5u); f_110930a0();
  /* 110921f5 mov esi, esp */
  ESI = (ESP);
  /* 110921f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 110921f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110921fb call dword ptr [0x110c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e8))), 0x11092201u);
  /* 11092201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092204 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092206 call 0x110930a0 */
  push32(0x1109220bu); f_110930a0();
  /* 1109220b mov esi, esp */
  ESI = (ESP);
  /* 1109220d push 0 */
  push32((uint32_t)(0x0u));
  /* 1109220f push 0x110c0568 */
  push32((uint32_t)(0x110c0568u));
  /* 11092214 push 2 */
  push32((uint32_t)(0x2u));
  /* 11092216 call dword ptr [0x110c33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d8))), 0x1109221cu);
  /* 1109221c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109221f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092221 call 0x110930a0 */
  push32(0x11092226u); f_110930a0();
  /* 11092226 mov esi, esp */
  ESI = (ESP);
  /* 11092228 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109222a push 2 */
  push32((uint32_t)(0x2u));
  /* 1109222c call dword ptr [0x110c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e8))), 0x11092232u);
  /* 11092232 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092235 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092237 call 0x110930a0 */
  push32(0x1109223cu); f_110930a0();
  /* 1109223c mov esi, esp */
  ESI = (ESP);
  /* 1109223e push 0x110c0578 */
  push32((uint32_t)(0x110c0578u));
  /* 11092243 call dword ptr [0x110c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33ec))), 0x11092249u);
  /* 11092249 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109224c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109224e call 0x110930a0 */
  push32(0x11092253u); f_110930a0();
  /* 11092253 mov esi, esp */
  ESI = (ESP);
  /* 11092255 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092257 push 0x110c0568 */
  push32((uint32_t)(0x110c0568u));
  /* 1109225c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109225e call dword ptr [0x110c33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d8))), 0x11092264u);
  /* 11092264 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092267 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092269 call 0x110930a0 */
  push32(0x1109226eu); f_110930a0();
  /* 1109226e mov esi, esp */
  ESI = (ESP);
  /* 11092270 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092272 push 0x110c0558 */
  push32((uint32_t)(0x110c0558u));
  /* 11092277 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092279 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109227fu);
  /* 1109227f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092282 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092284 call 0x110930a0 */
  push32(0x11092289u); f_110930a0();
  /* 11092289 mov esi, esp */
  ESI = (ESP);
  /* 1109228b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109228d push 0x110c0428 */
  push32((uint32_t)(0x110c0428u));
  /* 11092292 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092294 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109229au);
  /* 1109229a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109229d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109229f call 0x110930a0 */
  push32(0x110922a4u); f_110930a0();
  /* 110922a4 mov esi, esp */
  ESI = (ESP);
  /* 110922a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110922a8 push 0x110c0438 */
  push32((uint32_t)(0x110c0438u));
  /* 110922ad push 0 */
  push32((uint32_t)(0x0u));
  /* 110922af call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110922b5u);
  /* 110922b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110922b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110922ba call 0x110930a0 */
  push32(0x110922bfu); f_110930a0();
  /* 110922bf mov esi, esp */
  ESI = (ESP);
  /* 110922c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110922c3 push 0x110c0450 */
  push32((uint32_t)(0x110c0450u));
  /* 110922c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110922ca call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110922d0u);
  /* 110922d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110922d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110922d5 call 0x110930a0 */
  push32(0x110922dau); f_110930a0();
  /* 110922da mov esi, esp */
  ESI = (ESP);
  /* 110922dc push 0 */
  push32((uint32_t)(0x0u));
  /* 110922de push 0x110c0468 */
  push32((uint32_t)(0x110c0468u));
  /* 110922e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110922e5 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110922ebu);
  /* 110922eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110922ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110922f0 call 0x110930a0 */
  push32(0x110922f5u); f_110930a0();
  /* 110922f5 mov esi, esp */
  ESI = (ESP);
  /* 110922f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110922f9 push 0x110c0480 */
  push32((uint32_t)(0x110c0480u));
  /* 110922fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11092300 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092306u);
  /* 11092306 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109230b call 0x110930a0 */
  push32(0x11092310u); f_110930a0();
  /* 11092310 mov esi, esp */
  ESI = (ESP);
  /* 11092312 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092314 push 0x110c0498 */
  push32((uint32_t)(0x110c0498u));
  /* 11092319 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109231b call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092321u);
  /* 11092321 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092324 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092326 call 0x110930a0 */
  push32(0x1109232bu); f_110930a0();
  /* 1109232b mov esi, esp */
  ESI = (ESP);
  /* 1109232d push 0 */
  push32((uint32_t)(0x0u));
  /* 1109232f push 0x110c04b0 */
  push32((uint32_t)(0x110c04b0u));
  /* 11092334 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092336 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109233cu);
  /* 1109233c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109233f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092341 call 0x110930a0 */
  push32(0x11092346u); f_110930a0();
  /* 11092346 mov esi, esp */
  ESI = (ESP);
  /* 11092348 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109234a push 0x110c04c8 */
  push32((uint32_t)(0x110c04c8u));
  /* 1109234f push 0 */
  push32((uint32_t)(0x0u));
  /* 11092351 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092357u);
  /* 11092357 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109235a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109235c call 0x110930a0 */
  push32(0x11092361u); f_110930a0();
  /* 11092361 mov esi, esp */
  ESI = (ESP);
  /* 11092363 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092365 push 0x110c04e0 */
  push32((uint32_t)(0x110c04e0u));
  /* 1109236a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109236c call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092372u);
  /* 11092372 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092375 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092377 call 0x110930a0 */
  push32(0x1109237cu); f_110930a0();
  /* 1109237c mov esi, esp */
  ESI = (ESP);
  /* 1109237e push 0 */
  push32((uint32_t)(0x0u));
  /* 11092380 push 0x110c03e0 */
  push32((uint32_t)(0x110c03e0u));
  /* 11092385 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092387 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109238du);
  /* 1109238d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092390 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092392 call 0x110930a0 */
  push32(0x11092397u); f_110930a0();
  /* 11092397 mov esi, esp */
  ESI = (ESP);
  /* 11092399 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109239b push 0x110c03e8 */
  push32((uint32_t)(0x110c03e8u));
  /* 110923a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110923a2 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110923a8u);
  /* 110923a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110923ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110923ad call 0x110930a0 */
  push32(0x110923b2u); f_110930a0();
  /* 110923b2 mov esi, esp */
  ESI = (ESP);
  /* 110923b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110923b6 push 0x110c03f0 */
  push32((uint32_t)(0x110c03f0u));
  /* 110923bb push 0 */
  push32((uint32_t)(0x0u));
  /* 110923bd call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110923c3u);
  /* 110923c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110923c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110923c8 call 0x110930a0 */
  push32(0x110923cdu); f_110930a0();
  /* 110923cd mov esi, esp */
  ESI = (ESP);
  /* 110923cf push 0 */
  push32((uint32_t)(0x0u));
  /* 110923d1 push 0x110c03f8 */
  push32((uint32_t)(0x110c03f8u));
  /* 110923d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110923d8 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110923deu);
  /* 110923de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110923e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110923e3 call 0x110930a0 */
  push32(0x110923e8u); f_110930a0();
  /* 110923e8 mov esi, esp */
  ESI = (ESP);
  /* 110923ea push 0 */
  push32((uint32_t)(0x0u));
  /* 110923ec push 0x110c0400 */
  push32((uint32_t)(0x110c0400u));
  /* 110923f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110923f3 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110923f9u);
  /* 110923f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110923fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110923fe call 0x110930a0 */
  push32(0x11092403u); f_110930a0();
  /* 11092403 mov esi, esp */
  ESI = (ESP);
  /* 11092405 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092407 push 0x110c0410 */
  push32((uint32_t)(0x110c0410u));
  /* 1109240c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109240e call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092414u);
  /* 11092414 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092417 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092419 call 0x110930a0 */
  push32(0x1109241eu); f_110930a0();
  /* 1109241e mov esi, esp */
  ESI = (ESP);
  /* 11092420 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092422 push 0x110c0420 */
  push32((uint32_t)(0x110c0420u));
  /* 11092427 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092429 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109242fu);
  /* 1109242f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092432 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092434 call 0x110930a0 */
  push32(0x11092439u); f_110930a0();
  /* 11092439 mov esi, esp */
  ESI = (ESP);
  /* 1109243b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109243d push 0x110c0408 */
  push32((uint32_t)(0x110c0408u));
  /* 11092442 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092444 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109244au);
  /* 1109244a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109244d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109244f call 0x110930a0 */
  push32(0x11092454u); f_110930a0();
  /* 11092454 mov esi, esp */
  ESI = (ESP);
  /* 11092456 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092458 push 0x110c0418 */
  push32((uint32_t)(0x110c0418u));
  /* 1109245d push 0 */
  push32((uint32_t)(0x0u));
  /* 1109245f call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092465u);
  /* 11092465 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092468 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109246a call 0x110930a0 */
  push32(0x1109246fu); f_110930a0();
  /* 1109246f mov esi, esp */
  ESI = (ESP);
  /* 11092471 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092473 push 0x110c0430 */
  push32((uint32_t)(0x110c0430u));
  /* 11092478 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109247a call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092480u);
  /* 11092480 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092483 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092485 call 0x110930a0 */
  push32(0x1109248au); f_110930a0();
  /* 1109248a mov esi, esp */
  ESI = (ESP);
  /* 1109248c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109248e push 0x110c0448 */
  push32((uint32_t)(0x110c0448u));
  /* 11092493 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092495 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109249bu);
  /* 1109249b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109249e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110924a0 call 0x110930a0 */
  push32(0x110924a5u); f_110930a0();
  /* 110924a5 mov esi, esp */
  ESI = (ESP);
  /* 110924a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110924a9 push 0x110c0460 */
  push32((uint32_t)(0x110c0460u));
  /* 110924ae push 0 */
  push32((uint32_t)(0x0u));
  /* 110924b0 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110924b6u);
  /* 110924b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110924b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110924bb call 0x110930a0 */
  push32(0x110924c0u); f_110930a0();
  /* 110924c0 mov esi, esp */
  ESI = (ESP);
  /* 110924c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110924c4 push 0x110c0478 */
  push32((uint32_t)(0x110c0478u));
  /* 110924c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110924cb call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110924d1u);
  /* 110924d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110924d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110924d6 call 0x110930a0 */
  push32(0x110924dbu); f_110930a0();
  /* 110924db mov esi, esp */
  ESI = (ESP);
  /* 110924dd push 0 */
  push32((uint32_t)(0x0u));
  /* 110924df push 0x110c0490 */
  push32((uint32_t)(0x110c0490u));
  /* 110924e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110924e6 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110924ecu);
  /* 110924ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110924ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110924f1 call 0x110930a0 */
  push32(0x110924f6u); f_110930a0();
  /* 110924f6 mov esi, esp */
  ESI = (ESP);
  /* 110924f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110924fa push 0x110c04a8 */
  push32((uint32_t)(0x110c04a8u));
  /* 110924ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11092501 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092507u);
  /* 11092507 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109250a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109250c call 0x110930a0 */
  push32(0x11092511u); f_110930a0();
  /* 11092511 mov esi, esp */
  ESI = (ESP);
  /* 11092513 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092515 push 0x110c04c0 */
  push32((uint32_t)(0x110c04c0u));
  /* 1109251a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109251c call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092522u);
  /* 11092522 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092525 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092527 call 0x110930a0 */
  push32(0x1109252cu); f_110930a0();
  /* 1109252c mov esi, esp */
  ESI = (ESP);
  /* 1109252e push 1 */
  push32((uint32_t)(0x1u));
  /* 11092530 push 0x110c0440 */
  push32((uint32_t)(0x110c0440u));
  /* 11092535 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092537 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109253du);
  /* 1109253d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092540 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092542 call 0x110930a0 */
  push32(0x11092547u); f_110930a0();
  /* 11092547 mov esi, esp */
  ESI = (ESP);
  /* 11092549 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109254b push 0x110c0458 */
  push32((uint32_t)(0x110c0458u));
  /* 11092550 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092552 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092558u);
  /* 11092558 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109255b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109255d call 0x110930a0 */
  push32(0x11092562u); f_110930a0();
  /* 11092562 mov esi, esp */
  ESI = (ESP);
  /* 11092564 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092566 push 0x110c0470 */
  push32((uint32_t)(0x110c0470u));
  /* 1109256b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109256d call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092573u);
  /* 11092573 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092576 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092578 call 0x110930a0 */
  push32(0x1109257du); f_110930a0();
  /* 1109257d mov esi, esp */
  ESI = (ESP);
  /* 1109257f push 0 */
  push32((uint32_t)(0x0u));
  /* 11092581 push 0x110c0488 */
  push32((uint32_t)(0x110c0488u));
  /* 11092586 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092588 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109258eu);
  /* 1109258e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092591 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092593 call 0x110930a0 */
  push32(0x11092598u); f_110930a0();
  /* 11092598 mov esi, esp */
  ESI = (ESP);
  /* 1109259a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109259c push 0x110c04a0 */
  push32((uint32_t)(0x110c04a0u));
  /* 110925a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110925a3 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110925a9u);
  /* 110925a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110925ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110925ae call 0x110930a0 */
  push32(0x110925b3u); f_110930a0();
  /* 110925b3 mov esi, esp */
  ESI = (ESP);
  /* 110925b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110925b7 push 0x110c04b8 */
  push32((uint32_t)(0x110c04b8u));
  /* 110925bc push 0 */
  push32((uint32_t)(0x0u));
  /* 110925be call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110925c4u);
  /* 110925c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110925c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110925c9 call 0x110930a0 */
  push32(0x110925ceu); f_110930a0();
  /* 110925ce mov esi, esp */
  ESI = (ESP);
  /* 110925d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110925d2 push 0x110c04d8 */
  push32((uint32_t)(0x110c04d8u));
  /* 110925d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110925d9 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110925dfu);
  /* 110925df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110925e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110925e4 call 0x110930a0 */
  push32(0x110925e9u); f_110930a0();
  /* 110925e9 mov esi, esp */
  ESI = (ESP);
  /* 110925eb push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110925ed push 0 */
  push32((uint32_t)(0x0u));
  /* 110925ef push 0 */
  push32((uint32_t)(0x0u));
  /* 110925f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110925f3 push 0x110bb3c4 */
  push32((uint32_t)(0x110bb3c4u));
  /* 110925f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 110925fa call dword ptr [0x110c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f4))), 0x11092600u);
  /* 11092600 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092603 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092605 call 0x110930a0 */
  push32(0x1109260au); f_110930a0();
  /* 1109260a mov esi, esp */
  ESI = (ESP);
  /* 1109260c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1109260e push 0 */
  push32((uint32_t)(0x0u));
  /* 11092610 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092612 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092614 push 0x110bb3e4 */
  push32((uint32_t)(0x110bb3e4u));
  /* 11092619 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109261b call dword ptr [0x110c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f4))), 0x11092621u);
  /* 11092621 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092624 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092626 call 0x110930a0 */
  push32(0x1109262bu); f_110930a0();
  /* 1109262b mov esi, esp */
  ESI = (ESP);
  /* 1109262d push 0x110bb3bc */
  push32((uint32_t)(0x110bb3bcu));
  /* 11092632 push 1 */
  push32((uint32_t)(0x1u));
  /* 11092634 call dword ptr [0x110c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f8))), 0x1109263au);
  /* 1109263a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109263d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109263f call 0x110930a0 */
  push32(0x11092644u); f_110930a0();
  /* 11092644 mov esi, esp */
  ESI = (ESP);
  /* 11092646 push 0x110bb3d0 */
  push32((uint32_t)(0x110bb3d0u));
  /* 1109264b push 2 */
  push32((uint32_t)(0x2u));
  /* 1109264d call dword ptr [0x110c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f8))), 0x11092653u);
  /* 11092653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092656 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092658 call 0x110930a0 */
  push32(0x1109265du); f_110930a0();
  /* 1109265d jmp 0x11092a51 */
  goto L_11092a51;
L_11092662:;
  /* 11092662 mov esi, esp */
  ESI = (ESP);
  /* 11092664 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092666 push 0x110c0420 */
  push32((uint32_t)(0x110c0420u));
  /* 1109266b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109266d call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092673u);
  /* 11092673 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092676 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092678 call 0x110930a0 */
  push32(0x1109267du); f_110930a0();
  /* 1109267d mov esi, esp */
  ESI = (ESP);
  /* 1109267f push 0 */
  push32((uint32_t)(0x0u));
  /* 11092681 push 0x110c0408 */
  push32((uint32_t)(0x110c0408u));
  /* 11092686 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092688 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109268eu);
  /* 1109268e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092691 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092693 call 0x110930a0 */
  push32(0x11092698u); f_110930a0();
  /* 11092698 mov esi, esp */
  ESI = (ESP);
  /* 1109269a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109269c push 0x110c0418 */
  push32((uint32_t)(0x110c0418u));
  /* 110926a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110926a3 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110926a9u);
  /* 110926a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110926ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110926ae call 0x110930a0 */
  push32(0x110926b3u); f_110930a0();
  /* 110926b3 mov esi, esp */
  ESI = (ESP);
  /* 110926b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110926b7 push 0x110c0430 */
  push32((uint32_t)(0x110c0430u));
  /* 110926bc push 0 */
  push32((uint32_t)(0x0u));
  /* 110926be call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110926c4u);
  /* 110926c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110926c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110926c9 call 0x110930a0 */
  push32(0x110926ceu); f_110930a0();
  /* 110926ce mov esi, esp */
  ESI = (ESP);
  /* 110926d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110926d2 push 0x110c0448 */
  push32((uint32_t)(0x110c0448u));
  /* 110926d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110926d9 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110926dfu);
  /* 110926df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110926e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110926e4 call 0x110930a0 */
  push32(0x110926e9u); f_110930a0();
  /* 110926e9 mov esi, esp */
  ESI = (ESP);
  /* 110926eb push 0 */
  push32((uint32_t)(0x0u));
  /* 110926ed push 0x110c0460 */
  push32((uint32_t)(0x110c0460u));
  /* 110926f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110926f4 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110926fau);
  /* 110926fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110926fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110926ff call 0x110930a0 */
  push32(0x11092704u); f_110930a0();
  /* 11092704 mov esi, esp */
  ESI = (ESP);
  /* 11092706 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092708 push 0x110c0478 */
  push32((uint32_t)(0x110c0478u));
  /* 1109270d push 0 */
  push32((uint32_t)(0x0u));
  /* 1109270f call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092715u);
  /* 11092715 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092718 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109271a call 0x110930a0 */
  push32(0x1109271fu); f_110930a0();
  /* 1109271f mov esi, esp */
  ESI = (ESP);
  /* 11092721 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092723 push 0x110c0490 */
  push32((uint32_t)(0x110c0490u));
  /* 11092728 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109272a call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092730u);
  /* 11092730 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092733 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092735 call 0x110930a0 */
  push32(0x1109273au); f_110930a0();
  /* 1109273a mov esi, esp */
  ESI = (ESP);
  /* 1109273c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109273e push 0x110c04a8 */
  push32((uint32_t)(0x110c04a8u));
  /* 11092743 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092745 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109274bu);
  /* 1109274b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109274e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092750 call 0x110930a0 */
  push32(0x11092755u); f_110930a0();
  /* 11092755 mov esi, esp */
  ESI = (ESP);
  /* 11092757 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092759 push 0x110c04c0 */
  push32((uint32_t)(0x110c04c0u));
  /* 1109275e push 0 */
  push32((uint32_t)(0x0u));
  /* 11092760 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092766u);
  /* 11092766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092769 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109276b call 0x110930a0 */
  push32(0x11092770u); f_110930a0();
  /* 11092770 mov esi, esp */
  ESI = (ESP);
  /* 11092772 push 1 */
  push32((uint32_t)(0x1u));
  /* 11092774 push 0x110c0440 */
  push32((uint32_t)(0x110c0440u));
  /* 11092779 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109277b call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092781u);
  /* 11092781 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092784 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092786 call 0x110930a0 */
  push32(0x1109278bu); f_110930a0();
  /* 1109278b mov esi, esp */
  ESI = (ESP);
  /* 1109278d push 0 */
  push32((uint32_t)(0x0u));
  /* 1109278f push 0x110c0458 */
  push32((uint32_t)(0x110c0458u));
  /* 11092794 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092796 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109279cu);
  /* 1109279c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109279f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110927a1 call 0x110930a0 */
  push32(0x110927a6u); f_110930a0();
  /* 110927a6 mov esi, esp */
  ESI = (ESP);
  /* 110927a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110927aa push 0x110c0470 */
  push32((uint32_t)(0x110c0470u));
  /* 110927af push 0 */
  push32((uint32_t)(0x0u));
  /* 110927b1 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110927b7u);
  /* 110927b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110927ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110927bc call 0x110930a0 */
  push32(0x110927c1u); f_110930a0();
  /* 110927c1 mov esi, esp */
  ESI = (ESP);
  /* 110927c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110927c5 push 0x110c0488 */
  push32((uint32_t)(0x110c0488u));
  /* 110927ca push 0 */
  push32((uint32_t)(0x0u));
  /* 110927cc call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110927d2u);
  /* 110927d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110927d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110927d7 call 0x110930a0 */
  push32(0x110927dcu); f_110930a0();
  /* 110927dc mov esi, esp */
  ESI = (ESP);
  /* 110927de push 0 */
  push32((uint32_t)(0x0u));
  /* 110927e0 push 0x110c04a0 */
  push32((uint32_t)(0x110c04a0u));
  /* 110927e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110927e7 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110927edu);
  /* 110927ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110927f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110927f2 call 0x110930a0 */
  push32(0x110927f7u); f_110930a0();
  /* 110927f7 mov esi, esp */
  ESI = (ESP);
  /* 110927f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110927fb push 0x110c04b8 */
  push32((uint32_t)(0x110c04b8u));
  /* 11092800 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092802 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092808u);
  /* 11092808 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109280b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109280d call 0x110930a0 */
  push32(0x11092812u); f_110930a0();
  /* 11092812 mov esi, esp */
  ESI = (ESP);
  /* 11092814 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092816 push 0x110c04d8 */
  push32((uint32_t)(0x110c04d8u));
  /* 1109281b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109281d call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092823u);
  /* 11092823 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092826 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092828 call 0x110930a0 */
  push32(0x1109282du); f_110930a0();
  /* 1109282d mov esi, esp */
  ESI = (ESP);
  /* 1109282f push 0 */
  push32((uint32_t)(0x0u));
  /* 11092831 push 0x110c04d0 */
  push32((uint32_t)(0x110c04d0u));
  /* 11092836 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092838 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109283eu);
  /* 1109283e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092841 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092843 call 0x110930a0 */
  push32(0x11092848u); f_110930a0();
  /* 11092848 mov esi, esp */
  ESI = (ESP);
  /* 1109284a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109284c push 0x110c04e8 */
  push32((uint32_t)(0x110c04e8u));
  /* 11092851 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092853 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092859u);
  /* 11092859 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109285c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109285e call 0x110930a0 */
  push32(0x11092863u); f_110930a0();
  /* 11092863 mov esi, esp */
  ESI = (ESP);
  /* 11092865 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092867 push 0x110c04f0 */
  push32((uint32_t)(0x110c04f0u));
  /* 1109286c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109286e call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092874u);
  /* 11092874 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092877 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092879 call 0x110930a0 */
  push32(0x1109287eu); f_110930a0();
  /* 1109287e mov esi, esp */
  ESI = (ESP);
  /* 11092880 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092882 push 0x110c0500 */
  push32((uint32_t)(0x110c0500u));
  /* 11092887 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092889 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109288fu);
  /* 1109288f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092892 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092894 call 0x110930a0 */
  push32(0x11092899u); f_110930a0();
  /* 11092899 mov esi, esp */
  ESI = (ESP);
  /* 1109289b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109289d push 0x110c0510 */
  push32((uint32_t)(0x110c0510u));
  /* 110928a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110928a4 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110928aau);
  /* 110928aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110928ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110928af call 0x110930a0 */
  push32(0x110928b4u); f_110930a0();
  /* 110928b4 mov esi, esp */
  ESI = (ESP);
  /* 110928b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110928b8 push 0x110c0520 */
  push32((uint32_t)(0x110c0520u));
  /* 110928bd push 0 */
  push32((uint32_t)(0x0u));
  /* 110928bf call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110928c5u);
  /* 110928c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110928c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110928ca call 0x110930a0 */
  push32(0x110928cfu); f_110930a0();
  /* 110928cf mov esi, esp */
  ESI = (ESP);
  /* 110928d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110928d3 push 0x110c0530 */
  push32((uint32_t)(0x110c0530u));
  /* 110928d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110928da call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110928e0u);
  /* 110928e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110928e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110928e5 call 0x110930a0 */
  push32(0x110928eau); f_110930a0();
  /* 110928ea mov esi, esp */
  ESI = (ESP);
  /* 110928ec push 0 */
  push32((uint32_t)(0x0u));
  /* 110928ee push 0x110c0540 */
  push32((uint32_t)(0x110c0540u));
  /* 110928f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110928f5 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110928fbu);
  /* 110928fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110928fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092900 call 0x110930a0 */
  push32(0x11092905u); f_110930a0();
  /* 11092905 mov esi, esp */
  ESI = (ESP);
  /* 11092907 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092909 push 0x110c0550 */
  push32((uint32_t)(0x110c0550u));
  /* 1109290e push 0 */
  push32((uint32_t)(0x0u));
  /* 11092910 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092916u);
  /* 11092916 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092919 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109291b call 0x110930a0 */
  push32(0x11092920u); f_110930a0();
  /* 11092920 mov esi, esp */
  ESI = (ESP);
  /* 11092922 push 1 */
  push32((uint32_t)(0x1u));
  /* 11092924 push 0x110c04f8 */
  push32((uint32_t)(0x110c04f8u));
  /* 11092929 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109292b call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092931u);
  /* 11092931 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092934 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092936 call 0x110930a0 */
  push32(0x1109293bu); f_110930a0();
  /* 1109293b mov esi, esp */
  ESI = (ESP);
  /* 1109293d push 0 */
  push32((uint32_t)(0x0u));
  /* 1109293f push 0x110c0508 */
  push32((uint32_t)(0x110c0508u));
  /* 11092944 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092946 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109294cu);
  /* 1109294c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109294f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092951 call 0x110930a0 */
  push32(0x11092956u); f_110930a0();
  /* 11092956 mov esi, esp */
  ESI = (ESP);
  /* 11092958 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109295a push 0x110c0518 */
  push32((uint32_t)(0x110c0518u));
  /* 1109295f push 0 */
  push32((uint32_t)(0x0u));
  /* 11092961 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092967u);
  /* 11092967 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109296a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109296c call 0x110930a0 */
  push32(0x11092971u); f_110930a0();
  /* 11092971 mov esi, esp */
  ESI = (ESP);
  /* 11092973 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092975 push 0x110c0528 */
  push32((uint32_t)(0x110c0528u));
  /* 1109297a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109297c call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x11092982u);
  /* 11092982 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092985 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092987 call 0x110930a0 */
  push32(0x1109298cu); f_110930a0();
  /* 1109298c mov esi, esp */
  ESI = (ESP);
  /* 1109298e push 0 */
  push32((uint32_t)(0x0u));
  /* 11092990 push 0x110c0538 */
  push32((uint32_t)(0x110c0538u));
  /* 11092995 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092997 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x1109299du);
  /* 1109299d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110929a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110929a2 call 0x110930a0 */
  push32(0x110929a7u); f_110930a0();
  /* 110929a7 mov esi, esp */
  ESI = (ESP);
  /* 110929a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110929ab push 0x110c0548 */
  push32((uint32_t)(0x110c0548u));
  /* 110929b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110929b2 call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110929b8u);
  /* 110929b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110929bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110929bd call 0x110930a0 */
  push32(0x110929c2u); f_110930a0();
  /* 110929c2 mov esi, esp */
  ESI = (ESP);
  /* 110929c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110929c6 push 0x110c0558 */
  push32((uint32_t)(0x110c0558u));
  /* 110929cb push 0 */
  push32((uint32_t)(0x0u));
  /* 110929cd call dword ptr [0x110c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33e4))), 0x110929d3u);
  /* 110929d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110929d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110929d8 call 0x110930a0 */
  push32(0x110929ddu); f_110930a0();
  /* 110929dd mov esi, esp */
  ESI = (ESP);
  /* 110929df push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110929e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110929e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110929e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110929e7 push 0x110bb3c4 */
  push32((uint32_t)(0x110bb3c4u));
  /* 110929ec push 1 */
  push32((uint32_t)(0x1u));
  /* 110929ee call dword ptr [0x110c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f4))), 0x110929f4u);
  /* 110929f4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110929f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110929f9 call 0x110930a0 */
  push32(0x110929feu); f_110930a0();
  /* 110929fe mov esi, esp */
  ESI = (ESP);
  /* 11092a00 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11092a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092a06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092a08 push 0x110bb3f0 */
  push32((uint32_t)(0x110bb3f0u));
  /* 11092a0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11092a0f call dword ptr [0x110c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f4))), 0x11092a15u);
  /* 11092a15 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092a18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092a1a call 0x110930a0 */
  push32(0x11092a1fu); f_110930a0();
  /* 11092a1f mov esi, esp */
  ESI = (ESP);
  /* 11092a21 push 0x110bb3bc */
  push32((uint32_t)(0x110bb3bcu));
  /* 11092a26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11092a28 call dword ptr [0x110c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f8))), 0x11092a2eu);
  /* 11092a2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092a31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092a33 call 0x110930a0 */
  push32(0x11092a38u); f_110930a0();
  /* 11092a38 mov esi, esp */
  ESI = (ESP);
  /* 11092a3a push 0x110bb3d8 */
  push32((uint32_t)(0x110bb3d8u));
  /* 11092a3f push 2 */
  push32((uint32_t)(0x2u));
  /* 11092a41 call dword ptr [0x110c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f8))), 0x11092a47u);
  /* 11092a47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092a4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092a4c call 0x110930a0 */
  push32(0x11092a51u); f_110930a0();
L_11092a51:;
  /* 11092a51 mov esi, esp */
  ESI = (ESP);
  /* 11092a53 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11092a55 call dword ptr [0x110c33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33c8))), 0x11092a5bu);
  /* 11092a5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092a5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092a60 call 0x110930a0 */
  push32(0x11092a65u); f_110930a0();
  /* 11092a65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11092a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11092a6c je 0x11092ac7 */
  if (C.zf) goto L_11092ac7;
  /* 11092a6e mov esi, esp */
  ESI = (ESP);
  /* 11092a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092a72 call dword ptr [0x110c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f0))), 0x11092a78u);
  /* 11092a78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092a7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092a7d call 0x110930a0 */
  push32(0x11092a82u); f_110930a0();
  /* 11092a82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11092a87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11092a89 je 0x11092ac7 */
  if (C.zf) goto L_11092ac7;
  /* 11092a8b mov esi, esp */
  ESI = (ESP);
  /* 11092a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11092a8f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11092a91 call dword ptr [0x110c33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d0))), 0x11092a97u);
  /* 11092a97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092a9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092a9c call 0x110930a0 */
  push32(0x11092aa1u); f_110930a0();
  /* 11092aa1 mov esi, esp */
  ESI = (ESP);
  /* 11092aa3 push 0x110bb3b0 */
  push32((uint32_t)(0x110bb3b0u));
  /* 11092aa8 call dword ptr [0x110c33dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33dc))), 0x11092aaeu);
  /* 11092aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092ab3 call 0x110930a0 */
  push32(0x11092ab8u); f_110930a0();
  /* 11092ab8 mov esi, esp */
  ESI = (ESP);
  /* 11092aba call dword ptr [0x110c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3400))), 0x11092ac0u);
  /* 11092ac0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092ac2 call 0x110930a0 */
  push32(0x11092ac7u); f_110930a0();
L_11092ac7:;
  /* 11092ac7 mov esi, esp */
  ESI = (ESP);
  /* 11092ac9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11092acb call dword ptr [0x110c33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33c8))), 0x11092ad1u);
  /* 11092ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092ad4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092ad6 call 0x110930a0 */
  push32(0x11092adbu); f_110930a0();
  /* 11092adb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11092ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11092ae2 je 0x11092b5a */
  if (C.zf) goto L_11092b5a;
  /* 11092ae4 mov esi, esp */
  ESI = (ESP);
  /* 11092ae6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11092ae8 call dword ptr [0x110c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f0))), 0x11092aeeu);
  /* 11092aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092af1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092af3 call 0x110930a0 */
  push32(0x11092af8u); f_110930a0();
  /* 11092af8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11092afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11092aff je 0x11092b5a */
  if (C.zf) goto L_11092b5a;
  /* 11092b01 mov esi, esp */
  ESI = (ESP);
  /* 11092b03 push 2 */
  push32((uint32_t)(0x2u));
  /* 11092b05 call dword ptr [0x110c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33f0))), 0x11092b0bu);
  /* 11092b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092b0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092b10 call 0x110930a0 */
  push32(0x11092b15u); f_110930a0();
  /* 11092b15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11092b1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11092b1c je 0x11092b5a */
  if (C.zf) goto L_11092b5a;
  /* 11092b1e mov esi, esp */
  ESI = (ESP);
  /* 11092b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11092b22 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11092b24 call dword ptr [0x110c33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33d0))), 0x11092b2au);
  /* 11092b2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092b2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092b2f call 0x110930a0 */
  push32(0x11092b34u); f_110930a0();
  /* 11092b34 mov esi, esp */
  ESI = (ESP);
  /* 11092b36 push 0x110bb3a4 */
  push32((uint32_t)(0x110bb3a4u));
  /* 11092b3b call dword ptr [0x110c33dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c33dc))), 0x11092b41u);
  /* 11092b41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092b44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092b46 call 0x110930a0 */
  push32(0x11092b4bu); f_110930a0();
  /* 11092b4b mov esi, esp */
  ESI = (ESP);
  /* 11092b4d call dword ptr [0x110c3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3404))), 0x11092b53u);
  /* 11092b53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092b55 call 0x110930a0 */
  push32(0x11092b5au); f_110930a0();
L_11092b5a:;
  /* 11092b5a pop edi */
  EDI = (pop32());
  /* 11092b5b pop esi */
  ESI = (pop32());
  /* 11092b5c pop ebx */
  EBX = (pop32());
  /* 11092b5d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11092b60 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11092b62 call 0x110930a0 */
  push32(0x11092b67u); f_110930a0();
  /* 11092b67 mov esp, ebp */
  ESP = (EBP);
  /* 11092b69 pop ebp */
  EBP = (pop32());
  /* 11092b6a ret  */
  ESPCHK(0x11091860u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x110930a0 (56 bytes, 28 insns) */
void f_110930a0(void) {
  FTRACE(0x110930a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110930a0 jne 0x110930a3 */
  if (!C.zf) goto L_110930a3;
  /* 110930a2 ret  */
  ESPCHK(0x110930a0u, _esp0);
  ESP += 4; return;
L_110930a3:;
  /* 110930a3 push ebp */
  push32((uint32_t)(EBP));
  /* 110930a4 mov ebp, esp */
  EBP = (ESP);
  /* 110930a6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110930a9 push eax */
  push32((uint32_t)(EAX));
  /* 110930aa push edx */
  push32((uint32_t)(EDX));
  /* 110930ab push ebx */
  push32((uint32_t)(EBX));
  /* 110930ac push esi */
  push32((uint32_t)(ESI));
  /* 110930ad push edi */
  push32((uint32_t)(EDI));
  /* 110930ae push 0x110bb440 */
  push32((uint32_t)(0x110bb440u));
  /* 110930b3 push 0x110bb43c */
  push32((uint32_t)(0x110bb43cu));
  /* 110930b8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 110930ba push 0x110bb42c */
  push32((uint32_t)(0x110bb42cu));
  /* 110930bf push 1 */
  push32((uint32_t)(0x1u));
  /* 110930c1 call 0x11093470 */
  push32(0x110930c6u); f_11093470();
  /* 110930c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110930c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110930cc jne 0x110930cf */
  if (!C.zf) goto L_110930cf;
  /* 110930ce int3  */
  x86_unimpl("int3 @ 0x110930ce");
L_110930cf:;
  /* 110930cf pop edi */
  EDI = (pop32());
  /* 110930d0 pop esi */
  ESI = (pop32());
  /* 110930d1 pop ebx */
  EBX = (pop32());
  /* 110930d2 pop edx */
  EDX = (pop32());
  /* 110930d3 pop eax */
  EAX = (pop32());
  /* 110930d4 mov esp, ebp */
  ESP = (EBP);
  /* 110930d6 pop ebp */
  EBP = (pop32());
  /* 110930d7 ret  */
  ESPCHK(0x110930a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030e0 @ 0x110930e0 (313 bytes, 78 insns) */
void f_110930e0(void) {
  FTRACE(0x110930e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110930e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110930e1 mov ebp, esp */
  EBP = (ESP);
  /* 110930e3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110930e7 jne 0x110931a7 */
  if (!C.zf) goto L_110931a7;
  /* 110930ed call dword ptr [0x110c3294] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3294))), 0x110930f3u);
  /* 110930f3 mov dword ptr [0x110c0600], eax */
  w32((uint32_t)(0x110c0600), (EAX));
  /* 110930f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 110930fa call 0x11096ba0 */
  push32(0x110930ffu); f_11096ba0();
  /* 110930ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093102 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11093104 jne 0x1109310d */
  if (!C.zf) goto L_1109310d;
  /* 11093106 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11093108 jmp 0x11093215 */
  goto L_11093215;
L_1109310d:;
  /* 1109310d mov eax, dword ptr [0x110c0600] */
  EAX = (r32((uint32_t)(0x110c0600)));
  /* 11093112 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11093115 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109311a mov dword ptr [0x110c060c], eax */
  w32((uint32_t)(0x110c060c), (EAX));
  /* 1109311f mov ecx, dword ptr [0x110c0600] */
  ECX = (r32((uint32_t)(0x110c0600)));
  /* 11093125 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1109312b mov dword ptr [0x110c0608], ecx */
  w32((uint32_t)(0x110c0608), (ECX));
  /* 11093131 mov edx, dword ptr [0x110c0608] */
  EDX = (r32((uint32_t)(0x110c0608)));
  /* 11093137 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1109313a add edx, dword ptr [0x110c060c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x110c060c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11093140 mov dword ptr [0x110c0604], edx */
  w32((uint32_t)(0x110c0604), (EDX));
  /* 11093146 mov eax, dword ptr [0x110c0600] */
  EAX = (r32((uint32_t)(0x110c0600)));
  /* 1109314b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1109314e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11093153 mov dword ptr [0x110c0600], eax */
  w32((uint32_t)(0x110c0600), (EAX));
  /* 11093158 call 0x11093d10 */
  push32(0x1109315du); f_11093d10();
  /* 1109315d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109315f jne 0x1109316d */
  if (!C.zf) goto L_1109316d;
  /* 11093161 call 0x11096bf0 */
  push32(0x11093166u); f_11096bf0();
  /* 11093166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11093168 jmp 0x11093215 */
  goto L_11093215;
L_1109316d:;
  /* 1109316d call dword ptr [0x110c3290] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3290))), 0x11093173u);
  /* 11093173 mov dword ptr [0x110c214c], eax */
  w32((uint32_t)(0x110c214c), (EAX));
  /* 11093178 call 0x11096980 */
  push32(0x1109317du); f_11096980();
  /* 1109317d mov dword ptr [0x110c05e8], eax */
  w32((uint32_t)(0x110c05e8), (EAX));
  /* 11093182 call 0x11093fc0 */
  push32(0x11093187u); f_11093fc0();
  /* 11093187 call 0x11096470 */
  push32(0x1109318cu); f_11096470();
  /* 1109318c call 0x11096320 */
  push32(0x11093191u); f_11096320();
  /* 11093191 call 0x11093b10 */
  push32(0x11093196u); f_11093b10();
  /* 11093196 mov ecx, dword ptr [0x110c05e4] */
  ECX = (r32((uint32_t)(0x110c05e4)));
  /* 1109319c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109319f mov dword ptr [0x110c05e4], ecx */
  w32((uint32_t)(0x110c05e4), (ECX));
  /* 110931a5 jmp 0x11093210 */
  goto L_11093210;
L_110931a7:;
  /* 110931a7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110931ab jne 0x11093200 */
  if (!C.zf) goto L_11093200;
  /* 110931ad cmp dword ptr [0x110c05e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c05e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110931b4 jle 0x110931fa */
  if ((C.zf||C.sf!=C.of)) goto L_110931fa;
  /* 110931b6 mov edx, dword ptr [0x110c05e4] */
  EDX = (r32((uint32_t)(0x110c05e4)));
  /* 110931bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110931bf mov dword ptr [0x110c05e4], edx */
  w32((uint32_t)(0x110c05e4), (EDX));
  /* 110931c5 cmp dword ptr [0x110c0638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110931cc jne 0x110931d3 */
  if (!C.zf) goto L_110931d3;
  /* 110931ce call 0x11093b90 */
  push32(0x110931d3u); f_11093b90();
L_110931d3:;
  /* 110931d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110931d5 call 0x110958c0 */
  push32(0x110931dau); f_110958c0();
  /* 110931da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110931dd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 110931e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110931e2 je 0x110931e9 */
  if (C.zf) goto L_110931e9;
  /* 110931e4 call 0x110961d0 */
  push32(0x110931e9u); f_110961d0();
L_110931e9:;
  /* 110931e9 call 0x110942f0 */
  push32(0x110931eeu); f_110942f0();
  /* 110931ee call 0x11093da0 */
  push32(0x110931f3u); f_11093da0();
  /* 110931f3 call 0x11096bf0 */
  push32(0x110931f8u); f_11096bf0();
  /* 110931f8 jmp 0x110931fe */
  goto L_110931fe;
L_110931fa:;
  /* 110931fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110931fc jmp 0x11093215 */
  goto L_11093215;
L_110931fe:;
  /* 110931fe jmp 0x11093210 */
  goto L_11093210;
L_11093200:;
  /* 11093200 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093204 jne 0x11093210 */
  if (!C.zf) goto L_11093210;
  /* 11093206 push 0 */
  push32((uint32_t)(0x0u));
  /* 11093208 call 0x11093e90 */
  push32(0x1109320du); f_11093e90();
  /* 1109320d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093210:;
  /* 11093210 mov eax, 1 */
  EAX = (0x1u);
L_11093215:;
  /* 11093215 pop ebp */
  EBP = (pop32());
  /* 11093216 ret 0xc */
  ESPCHK(0x110930e0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11093220 (243 bytes, 86 insns) */
void f_11093220(void) {
  FTRACE(0x11093220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093220 push ebp */
  push32((uint32_t)(EBP));
  /* 11093221 mov ebp, esp */
  EBP = (ESP);
  /* 11093223 push ecx */
  push32((uint32_t)(ECX));
  /* 11093224 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1109322b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109322f jne 0x11093241 */
  if (!C.zf) goto L_11093241;
  /* 11093231 cmp dword ptr [0x110c05e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c05e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093238 jne 0x11093241 */
  if (!C.zf) goto L_11093241;
  /* 1109323a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109323c jmp 0x1109330d */
  goto L_1109330d;
L_11093241:;
  /* 11093241 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093245 je 0x1109324d */
  if (C.zf) goto L_1109324d;
  /* 11093247 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109324b jne 0x1109328f */
  if (!C.zf) goto L_1109328f;
L_1109324d:;
  /* 1109324d cmp dword ptr [0x110c215c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c215c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093254 je 0x1109326b */
  if (C.zf) goto L_1109326b;
  /* 11093256 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11093259 push eax */
  push32((uint32_t)(EAX));
  /* 1109325a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109325d push ecx */
  push32((uint32_t)(ECX));
  /* 1109325e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093261 push edx */
  push32((uint32_t)(EDX));
  /* 11093262 call dword ptr [0x110c215c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c215c))), 0x11093268u);
  /* 11093268 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1109326b:;
  /* 1109326b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109326f je 0x11093285 */
  if (C.zf) goto L_11093285;
  /* 11093271 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11093274 push eax */
  push32((uint32_t)(EAX));
  /* 11093275 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11093278 push ecx */
  push32((uint32_t)(ECX));
  /* 11093279 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109327c push edx */
  push32((uint32_t)(EDX));
  /* 1109327d call 0x110930e0 */
  push32(0x11093282u); f_110930e0();
  /* 11093282 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11093285:;
  /* 11093285 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093289 jne 0x1109328f */
  if (!C.zf) goto L_1109328f;
  /* 1109328b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109328d jmp 0x1109330d */
  goto L_1109330d;
L_1109328f:;
  /* 1109328f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11093292 push eax */
  push32((uint32_t)(EAX));
  /* 11093293 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11093296 push ecx */
  push32((uint32_t)(ECX));
  /* 11093297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109329a push edx */
  push32((uint32_t)(EDX));
  /* 1109329b call 0x1109100a */
  push32(0x110932a0u); f_1109100a();
  /* 110932a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110932a3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110932a7 jne 0x110932be */
  if (!C.zf) goto L_110932be;
  /* 110932a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110932ad jne 0x110932be */
  if (!C.zf) goto L_110932be;
  /* 110932af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110932b2 push eax */
  push32((uint32_t)(EAX));
  /* 110932b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110932b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110932b8 push ecx */
  push32((uint32_t)(ECX));
  /* 110932b9 call 0x110930e0 */
  push32(0x110932beu); f_110930e0();
L_110932be:;
  /* 110932be cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110932c2 je 0x110932ca */
  if (C.zf) goto L_110932ca;
  /* 110932c4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110932c8 jne 0x1109330a */
  if (!C.zf) goto L_1109330a;
L_110932ca:;
  /* 110932ca mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110932cd push edx */
  push32((uint32_t)(EDX));
  /* 110932ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110932d1 push eax */
  push32((uint32_t)(EAX));
  /* 110932d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110932d5 push ecx */
  push32((uint32_t)(ECX));
  /* 110932d6 call 0x110930e0 */
  push32(0x110932dbu); f_110930e0();
  /* 110932db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110932dd jne 0x110932e6 */
  if (!C.zf) goto L_110932e6;
  /* 110932df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_110932e6:;
  /* 110932e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110932ea je 0x1109330a */
  if (C.zf) goto L_1109330a;
  /* 110932ec cmp dword ptr [0x110c215c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c215c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110932f3 je 0x1109330a */
  if (C.zf) goto L_1109330a;
  /* 110932f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110932f8 push edx */
  push32((uint32_t)(EDX));
  /* 110932f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110932fc push eax */
  push32((uint32_t)(EAX));
  /* 110932fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093300 push ecx */
  push32((uint32_t)(ECX));
  /* 11093301 call dword ptr [0x110c215c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c215c))), 0x11093307u);
  /* 11093307 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1109330a:;
  /* 1109330a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1109330d:;
  /* 1109330d mov esp, ebp */
  ESP = (EBP);
  /* 1109330f pop ebp */
  EBP = (pop32());
  /* 11093310 ret 0xc */
  ESPCHK(0x11093220u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11093320 (58 bytes, 18 insns) */
void f_11093320(void) {
  FTRACE(0x11093320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093320 push ebp */
  push32((uint32_t)(EBP));
  /* 11093321 mov ebp, esp */
  EBP = (ESP);
  /* 11093323 cmp dword ptr [0x110c05f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c05f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109332a je 0x1109333e */
  if (C.zf) goto L_1109333e;
  /* 1109332c cmp dword ptr [0x110c05f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c05f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093333 jne 0x11093343 */
  if (!C.zf) goto L_11093343;
  /* 11093335 cmp dword ptr [0x110c05f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c05f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109333c jne 0x11093343 */
  if (!C.zf) goto L_11093343;
L_1109333e:;
  /* 1109333e call 0x11096c90 */
  push32(0x11093343u); f_11096c90();
L_11093343:;
  /* 11093343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093346 push eax */
  push32((uint32_t)(EAX));
  /* 11093347 call 0x11096ce0 */
  push32(0x1109334cu); f_11096ce0();
  /* 1109334c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109334f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11093354 call dword ptr [0x110bea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x110bea30))), 0x1109335au);
  /* 1109335a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109335d pop ebp */
  EBP = (pop32());
  /* 1109335e ret  */
  ESPCHK(0x11093320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x11093360 (11 bytes, 5 insns) */
void f_11093360(void) {
  FTRACE(0x11093360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093360 push ebp */
  push32((uint32_t)(EBP));
  /* 11093361 mov ebp, esp */
  EBP = (ESP);
  /* 11093363 call dword ptr [0x110c3298] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3298))), 0x11093369u);
  /* 11093369 pop ebp */
  EBP = (pop32());
  /* 1109336a ret  */
  ESPCHK(0x11093360u, _esp0);
  ESP += 4; return;
}

/* FUN_10003370 @ 0x11093370 (87 bytes, 30 insns) */
void f_11093370(void) {
  FTRACE(0x11093370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093370 push ebp */
  push32((uint32_t)(EBP));
  /* 11093371 mov ebp, esp */
  EBP = (ESP);
  /* 11093373 push ecx */
  push32((uint32_t)(ECX));
  /* 11093374 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093378 jl 0x11093380 */
  if ((C.sf!=C.of)) goto L_11093380;
  /* 1109337a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109337e jl 0x11093385 */
  if ((C.sf!=C.of)) goto L_11093385;
L_11093380:;
  /* 11093380 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11093383 jmp 0x110933c3 */
  goto L_110933c3;
L_11093385:;
  /* 11093385 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093389 jne 0x11093397 */
  if (!C.zf) goto L_11093397;
  /* 1109338b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109338e mov eax, dword ptr [eax*4 + 0x110bea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x110bea38)));
  /* 11093395 jmp 0x110933c3 */
  goto L_110933c3;
L_11093397:;
  /* 11093397 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109339a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1109339d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109339f je 0x110933a6 */
  if (C.zf) goto L_110933a6;
  /* 110933a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110933a4 jmp 0x110933c3 */
  goto L_110933c3;
L_110933a6:;
  /* 110933a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110933a9 mov eax, dword ptr [edx*4 + 0x110bea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110bea38)));
  /* 110933b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110933b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110933b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110933b9 mov dword ptr [ecx*4 + 0x110bea38], edx */
  w32((uint32_t)(ECX*4 + 0x110bea38), (EDX));
  /* 110933c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_110933c3:;
  /* 110933c3 mov esp, ebp */
  ESP = (EBP);
  /* 110933c5 pop ebp */
  EBP = (pop32());
  /* 110933c6 ret  */
  ESPCHK(0x11093370u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x110933d0 (126 bytes, 38 insns) */
void f_110933d0(void) {
  FTRACE(0x110933d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110933d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110933d1 mov ebp, esp */
  EBP = (ESP);
  /* 110933d3 push ecx */
  push32((uint32_t)(ECX));
  /* 110933d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110933d8 jl 0x110933e0 */
  if ((C.sf!=C.of)) goto L_110933e0;
  /* 110933da cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110933de jl 0x110933e7 */
  if ((C.sf!=C.of)) goto L_110933e7;
L_110933e0:;
  /* 110933e0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 110933e5 jmp 0x1109344a */
  goto L_1109344a;
L_110933e7:;
  /* 110933e7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110933eb jne 0x110933f9 */
  if (!C.zf) goto L_110933f9;
  /* 110933ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110933f0 mov eax, dword ptr [eax*4 + 0x110bea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x110bea44)));
  /* 110933f7 jmp 0x1109344a */
  goto L_1109344a;
L_110933f9:;
  /* 110933f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110933fc mov edx, dword ptr [ecx*4 + 0x110bea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110bea44)));
  /* 11093403 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11093406 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109340a jne 0x11093420 */
  if (!C.zf) goto L_11093420;
  /* 1109340c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1109340e call dword ptr [0x110c329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c329c))), 0x11093414u);
  /* 11093414 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093417 mov dword ptr [ecx*4 + 0x110bea44], eax */
  w32((uint32_t)(ECX*4 + 0x110bea44), (EAX));
  /* 1109341e jmp 0x11093447 */
  goto L_11093447;
L_11093420:;
  /* 11093420 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093424 jne 0x1109343a */
  if (!C.zf) goto L_1109343a;
  /* 11093426 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11093428 call dword ptr [0x110c329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c329c))), 0x1109342eu);
  /* 1109342e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093431 mov dword ptr [edx*4 + 0x110bea44], eax */
  w32((uint32_t)(EDX*4 + 0x110bea44), (EAX));
  /* 11093438 jmp 0x11093447 */
  goto L_11093447;
L_1109343a:;
  /* 1109343a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109343d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11093440 mov dword ptr [eax*4 + 0x110bea44], ecx */
  w32((uint32_t)(EAX*4 + 0x110bea44), (ECX));
L_11093447:;
  /* 11093447 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1109344a:;
  /* 1109344a mov esp, ebp */
  ESP = (EBP);
  /* 1109344c pop ebp */
  EBP = (pop32());
  /* 1109344d ret  */
  ESPCHK(0x110933d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003450 @ 0x11093450 (28 bytes, 11 insns) */
void f_11093450(void) {
  FTRACE(0x11093450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093450 push ebp */
  push32((uint32_t)(EBP));
  /* 11093451 mov ebp, esp */
  EBP = (ESP);
  /* 11093453 push ecx */
  push32((uint32_t)(ECX));
  /* 11093454 mov eax, dword ptr [0x110c2140] */
  EAX = (r32((uint32_t)(0x110c2140)));
  /* 11093459 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109345c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109345f mov dword ptr [0x110c2140], ecx */
  w32((uint32_t)(0x110c2140), (ECX));
  /* 11093465 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093468 mov esp, ebp */
  ESP = (EBP);
  /* 1109346a pop ebp */
  EBP = (pop32());
  /* 1109346b ret  */
  ESPCHK(0x11093450u, _esp0);
  ESP += 4; return;
}

/* FUN_10003470 @ 0x11093470 (912 bytes, 248 insns) */
void f_11093470(void) {
  FTRACE(0x11093470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093470 push ebp */
  push32((uint32_t)(EBP));
  /* 11093471 mov ebp, esp */
  EBP = (ESP);
  /* 11093473 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11093478 call 0x11097550 */
  push32(0x1109347du); f_11097550();
  /* 1109347d push edi */
  push32((uint32_t)(EDI));
  /* 1109347e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11093485 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1109348a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109348c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11093492 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11093494 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11093496 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11093497 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1109349e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 110934a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110934a5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 110934ab rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110934ad stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 110934af stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 110934b0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 110934b7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 110934bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110934be lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 110934c4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110934c6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 110934c8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 110934c9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 110934cc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 110934d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110934d6 jl 0x110934de */
  if ((C.sf!=C.of)) goto L_110934de;
  /* 110934d8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110934dc jl 0x110934e6 */
  if ((C.sf!=C.of)) goto L_110934e6;
L_110934de:;
  /* 110934de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110934e1 jmp 0x110937fb */
  goto L_110937fb;
L_110934e6:;
  /* 110934e6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110934ea jne 0x11093590 */
  if (!C.zf) goto L_11093590;
  /* 110934f0 push 0x110bea34 */
  push32((uint32_t)(0x110bea34u));
  /* 110934f5 call dword ptr [0x110c32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32b4))), 0x110934fbu);
  /* 110934fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110934fd jle 0x11093590 */
  if ((C.zf||C.sf!=C.of)) goto L_11093590;
  /* 11093503 cmp dword ptr [0x110c05f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c05f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109350a jne 0x1109354e */
  if (!C.zf) goto L_1109354e;
  /* 1109350c push 0x110bb5e8 */
  push32((uint32_t)(0x110bb5e8u));
  /* 11093511 call dword ptr [0x110c32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32b0))), 0x11093517u);
  /* 11093517 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1109351d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093524 je 0x11093546 */
  if (C.zf) goto L_11093546;
  /* 11093526 push 0x110bb5dc */
  push32((uint32_t)(0x110bb5dcu));
  /* 1109352b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11093531 push ecx */
  push32((uint32_t)(ECX));
  /* 11093532 call dword ptr [0x110c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32ac))), 0x11093538u);
  /* 11093538 mov dword ptr [0x110c05f8], eax */
  w32((uint32_t)(0x110c05f8), (EAX));
  /* 1109353d cmp dword ptr [0x110c05f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c05f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093544 jne 0x1109354e */
  if (!C.zf) goto L_1109354e;
L_11093546:;
  /* 11093546 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11093549 jmp 0x110937fb */
  goto L_110937fb;
L_1109354e:;
  /* 1109354e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11093551 push edx */
  push32((uint32_t)(EDX));
  /* 11093552 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11093555 push eax */
  push32((uint32_t)(EAX));
  /* 11093556 push 0x110bb5a8 */
  push32((uint32_t)(0x110bb5a8u));
  /* 1109355b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11093561 push ecx */
  push32((uint32_t)(ECX));
  /* 11093562 call dword ptr [0x110c05f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c05f8))), 0x11093568u);
  /* 11093568 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109356b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11093571 push edx */
  push32((uint32_t)(EDX));
  /* 11093572 call dword ptr [0x110c32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a8))), 0x11093578u);
  /* 11093578 push 0x110bea34 */
  push32((uint32_t)(0x110bea34u));
  /* 1109357d call dword ptr [0x110c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a4))), 0x11093583u);
  /* 11093583 call 0x11093360 */
  push32(0x11093588u); f_11093360();
  /* 11093588 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109358b jmp 0x110937fb */
  goto L_110937fb;
L_11093590:;
  /* 11093590 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093594 je 0x110935cd */
  if (C.zf) goto L_110935cd;
  /* 11093596 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1109359c push eax */
  push32((uint32_t)(EAX));
  /* 1109359d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110935a0 push ecx */
  push32((uint32_t)(ECX));
  /* 110935a1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 110935a6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 110935ac push edx */
  push32((uint32_t)(EDX));
  /* 110935ad call 0x11097450 */
  push32(0x110935b2u); f_11097450();
  /* 110935b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110935b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110935b7 jge 0x110935cd */
  if ((C.sf==C.of)) goto L_110935cd;
  /* 110935b9 push 0x110bb57c */
  push32((uint32_t)(0x110bb57cu));
  /* 110935be lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 110935c4 push eax */
  push32((uint32_t)(EAX));
  /* 110935c5 call 0x11097360 */
  push32(0x110935cau); f_11097360();
  /* 110935ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110935cd:;
  /* 110935cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110935d1 jne 0x11093605 */
  if (!C.zf) goto L_11093605;
  /* 110935d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110935d7 je 0x110935e5 */
  if (C.zf) goto L_110935e5;
  /* 110935d9 mov dword ptr [ebp - 0x3028], 0x110bb568 */
  w32((uint32_t)(EBP + -0x3028), (0x110bb568u));
  /* 110935e3 jmp 0x110935ef */
  goto L_110935ef;
L_110935e5:;
  /* 110935e5 mov dword ptr [ebp - 0x3028], 0x110bb554 */
  w32((uint32_t)(EBP + -0x3028), (0x110bb554u));
L_110935ef:;
  /* 110935ef mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 110935f5 push ecx */
  push32((uint32_t)(ECX));
  /* 110935f6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 110935fc push edx */
  push32((uint32_t)(EDX));
  /* 110935fd call 0x11097360 */
  push32(0x11093602u); f_11097360();
  /* 11093602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093605:;
  /* 11093605 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1109360b push eax */
  push32((uint32_t)(EAX));
  /* 1109360c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11093612 push ecx */
  push32((uint32_t)(ECX));
  /* 11093613 call 0x11097370 */
  push32(0x11093618u); f_11097370();
  /* 11093618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109361b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109361f jne 0x1109365a */
  if (!C.zf) goto L_1109365a;
  /* 11093621 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093624 mov eax, dword ptr [edx*4 + 0x110bea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110bea38)));
  /* 1109362b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1109362e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11093630 je 0x11093646 */
  if (C.zf) goto L_11093646;
  /* 11093632 push 0x110bb550 */
  push32((uint32_t)(0x110bb550u));
  /* 11093637 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1109363d push ecx */
  push32((uint32_t)(ECX));
  /* 1109363e call 0x11097370 */
  push32(0x11093643u); f_11097370();
  /* 11093643 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093646:;
  /* 11093646 push 0x110bb54c */
  push32((uint32_t)(0x110bb54cu));
  /* 1109364b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11093651 push edx */
  push32((uint32_t)(EDX));
  /* 11093652 call 0x11097370 */
  push32(0x11093657u); f_11097370();
  /* 11093657 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109365a:;
  /* 1109365a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109365e je 0x110936a2 */
  if (C.zf) goto L_110936a2;
  /* 11093660 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11093666 push eax */
  push32((uint32_t)(EAX));
  /* 11093667 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109366a push ecx */
  push32((uint32_t)(ECX));
  /* 1109366b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109366e push edx */
  push32((uint32_t)(EDX));
  /* 1109366f push 0x110bb540 */
  push32((uint32_t)(0x110bb540u));
  /* 11093674 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11093679 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1109367f push eax */
  push32((uint32_t)(EAX));
  /* 11093680 call 0x11097260 */
  push32(0x11093685u); f_11097260();
  /* 11093685 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109368a jge 0x110936a0 */
  if ((C.sf==C.of)) goto L_110936a0;
  /* 1109368c push 0x110bb57c */
  push32((uint32_t)(0x110bb57cu));
  /* 11093691 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11093697 push ecx */
  push32((uint32_t)(ECX));
  /* 11093698 call 0x11097360 */
  push32(0x1109369du); f_11097360();
  /* 1109369d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110936a0:;
  /* 110936a0 jmp 0x110936b8 */
  goto L_110936b8;
L_110936a2:;
  /* 110936a2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 110936a8 push edx */
  push32((uint32_t)(EDX));
  /* 110936a9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 110936af push eax */
  push32((uint32_t)(EAX));
  /* 110936b0 call 0x11097360 */
  push32(0x110936b5u); f_11097360();
  /* 110936b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110936b8:;
  /* 110936b8 cmp dword ptr [0x110c2140], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c2140))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110936bf je 0x110936fc */
  if (C.zf) goto L_110936fc;
  /* 110936c1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 110936c7 push ecx */
  push32((uint32_t)(ECX));
  /* 110936c8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 110936ce push edx */
  push32((uint32_t)(EDX));
  /* 110936cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110936d2 push eax */
  push32((uint32_t)(EAX));
  /* 110936d3 call dword ptr [0x110c2140] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c2140))), 0x110936d9u);
  /* 110936d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110936dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110936de je 0x110936fc */
  if (C.zf) goto L_110936fc;
  /* 110936e0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110936e4 jne 0x110936f1 */
  if (!C.zf) goto L_110936f1;
  /* 110936e6 push 0x110bea34 */
  push32((uint32_t)(0x110bea34u));
  /* 110936eb call dword ptr [0x110c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a4))), 0x110936f1u);
L_110936f1:;
  /* 110936f1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 110936f7 jmp 0x110937fb */
  goto L_110937fb;
L_110936fc:;
  /* 110936fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110936ff mov edx, dword ptr [ecx*4 + 0x110bea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110bea38)));
  /* 11093706 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11093709 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109370b je 0x1109374b */
  if (C.zf) goto L_1109374b;
  /* 1109370d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093710 cmp dword ptr [eax*4 + 0x110bea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x110bea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093718 je 0x1109374b */
  if (C.zf) goto L_1109374b;
  /* 1109371a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109371c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11093722 push ecx */
  push32((uint32_t)(ECX));
  /* 11093723 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11093729 push edx */
  push32((uint32_t)(EDX));
  /* 1109372a call 0x110971e0 */
  push32(0x1109372fu); f_110971e0();
  /* 1109372f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093732 push eax */
  push32((uint32_t)(EAX));
  /* 11093733 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11093739 push eax */
  push32((uint32_t)(EAX));
  /* 1109373a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109373d mov edx, dword ptr [ecx*4 + 0x110bea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110bea44)));
  /* 11093744 push edx */
  push32((uint32_t)(EDX));
  /* 11093745 call dword ptr [0x110c32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a0))), 0x1109374bu);
L_1109374b:;
  /* 1109374b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109374e mov ecx, dword ptr [eax*4 + 0x110bea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x110bea38)));
  /* 11093755 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11093758 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109375a je 0x11093769 */
  if (C.zf) goto L_11093769;
  /* 1109375c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11093762 push edx */
  push32((uint32_t)(EDX));
  /* 11093763 call dword ptr [0x110c32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a8))), 0x11093769u);
L_11093769:;
  /* 11093769 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109376c mov ecx, dword ptr [eax*4 + 0x110bea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x110bea38)));
  /* 11093773 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11093776 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11093778 je 0x110937e8 */
  if (C.zf) goto L_110937e8;
  /* 1109377a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109377e je 0x1109379d */
  if (C.zf) goto L_1109379d;
  /* 11093780 push 0xa */
  push32((uint32_t)(0xau));
  /* 11093782 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11093788 push edx */
  push32((uint32_t)(EDX));
  /* 11093789 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109378c push eax */
  push32((uint32_t)(EAX));
  /* 1109378d call 0x11096ef0 */
  push32(0x11093792u); f_11096ef0();
  /* 11093792 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093795 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1109379b jmp 0x110937a7 */
  goto L_110937a7;
L_1109379d:;
  /* 1109379d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_110937a7:;
  /* 110937a7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 110937ad push ecx */
  push32((uint32_t)(ECX));
  /* 110937ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110937b1 push edx */
  push32((uint32_t)(EDX));
  /* 110937b2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 110937b8 push eax */
  push32((uint32_t)(EAX));
  /* 110937b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110937bc push ecx */
  push32((uint32_t)(ECX));
  /* 110937bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110937c0 push edx */
  push32((uint32_t)(EDX));
  /* 110937c1 call 0x11093800 */
  push32(0x110937c6u); f_11093800();
  /* 110937c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110937c9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 110937cf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110937d3 jne 0x110937e0 */
  if (!C.zf) goto L_110937e0;
  /* 110937d5 push 0x110bea34 */
  push32((uint32_t)(0x110bea34u));
  /* 110937da call dword ptr [0x110c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a4))), 0x110937e0u);
L_110937e0:;
  /* 110937e0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 110937e6 jmp 0x110937fb */
  goto L_110937fb;
L_110937e8:;
  /* 110937e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110937ec jne 0x110937f9 */
  if (!C.zf) goto L_110937f9;
  /* 110937ee push 0x110bea34 */
  push32((uint32_t)(0x110bea34u));
  /* 110937f3 call dword ptr [0x110c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a4))), 0x110937f9u);
L_110937f9:;
  /* 110937f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110937fb:;
  /* 110937fb pop edi */
  EDI = (pop32());
  /* 110937fc mov esp, ebp */
  ESP = (EBP);
  /* 110937fe pop ebp */
  EBP = (pop32());
  /* 110937ff ret  */
  ESPCHK(0x11093470u, _esp0);
  ESP += 4; return;
}

/* FUN_10003800 @ 0x11093800 (780 bytes, 197 insns) */
void f_11093800(void) {
  FTRACE(0x11093800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093800 push ebp */
  push32((uint32_t)(EBP));
  /* 11093801 mov ebp, esp */
  EBP = (ESP);
  /* 11093803 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11093808 call 0x11097550 */
  push32(0x1109380du); f_11097550();
L_1109380d:;
  /* 1109380d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093811 jne 0x11093838 */
  if (!C.zf) goto L_11093838;
  /* 11093813 push 0x110bb738 */
  push32((uint32_t)(0x110bb738u));
  /* 11093818 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109381a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1109381f push 0x110bb72c */
  push32((uint32_t)(0x110bb72cu));
  /* 11093824 push 2 */
  push32((uint32_t)(0x2u));
  /* 11093826 call 0x11093470 */
  push32(0x1109382bu); f_11093470();
  /* 1109382b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109382e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093831 jne 0x11093838 */
  if (!C.zf) goto L_11093838;
  /* 11093833 call 0x11093360 */
  push32(0x11093838u); f_11093360();
L_11093838:;
  /* 11093838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109383a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109383c jne 0x1109380d */
  if (!C.zf) goto L_1109380d;
  /* 1109383e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11093843 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11093849 push ecx */
  push32((uint32_t)(ECX));
  /* 1109384a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109384c call dword ptr [0x110c32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32b8))), 0x11093852u);
  /* 11093852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11093854 jne 0x1109386a */
  if (!C.zf) goto L_1109386a;
  /* 11093856 push 0x110bb714 */
  push32((uint32_t)(0x110bb714u));
  /* 1109385b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11093861 push edx */
  push32((uint32_t)(EDX));
  /* 11093862 call 0x11097360 */
  push32(0x11093867u); f_11097360();
  /* 11093867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109386a:;
  /* 1109386a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11093870 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11093873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093876 push ecx */
  push32((uint32_t)(ECX));
  /* 11093877 call 0x110971e0 */
  push32(0x1109387cu); f_110971e0();
  /* 1109387c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109387f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093882 jbe 0x110938ad */
  if ((C.cf||C.zf)) goto L_110938ad;
  /* 11093884 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093887 push edx */
  push32((uint32_t)(EDX));
  /* 11093888 call 0x110971e0 */
  push32(0x1109388du); f_110971e0();
  /* 1109388d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093890 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093893 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11093897 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109389a push 3 */
  push32((uint32_t)(0x3u));
  /* 1109389c push 0x110bb710 */
  push32((uint32_t)(0x110bb710u));
  /* 110938a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110938a4 push eax */
  push32((uint32_t)(EAX));
  /* 110938a5 call 0x11097bd0 */
  push32(0x110938aau); f_11097bd0();
  /* 110938aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110938ad:;
  /* 110938ad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110938b0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 110938b6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110938bd je 0x11093908 */
  if (C.zf) goto L_11093908;
  /* 110938bf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 110938c5 push edx */
  push32((uint32_t)(EDX));
  /* 110938c6 call 0x110971e0 */
  push32(0x110938cbu); f_110971e0();
  /* 110938cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110938ce cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110938d1 jbe 0x11093908 */
  if ((C.cf||C.zf)) goto L_11093908;
  /* 110938d3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 110938d9 push eax */
  push32((uint32_t)(EAX));
  /* 110938da call 0x110971e0 */
  push32(0x110938dfu); f_110971e0();
  /* 110938df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110938e2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 110938e8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 110938ec mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 110938f2 push 3 */
  push32((uint32_t)(0x3u));
  /* 110938f4 push 0x110bb710 */
  push32((uint32_t)(0x110bb710u));
  /* 110938f9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 110938ff push eax */
  push32((uint32_t)(EAX));
  /* 11093900 call 0x11097bd0 */
  push32(0x11093905u); f_11097bd0();
  /* 11093905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093908:;
  /* 11093908 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109390c jne 0x1109391a */
  if (!C.zf) goto L_1109391a;
  /* 1109390e mov dword ptr [ebp - 0x1114], 0x110bb69c */
  w32((uint32_t)(EBP + -0x1114), (0x110bb69cu));
  /* 11093918 jmp 0x11093924 */
  goto L_11093924;
L_1109391a:;
  /* 1109391a mov dword ptr [ebp - 0x1114], 0x110bb43c */
  w32((uint32_t)(EBP + -0x1114), (0x110bb43cu));
L_11093924:;
  /* 11093924 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11093927 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1109392a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109392c je 0x11093939 */
  if (C.zf) goto L_11093939;
  /* 1109392e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11093931 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11093937 jmp 0x11093943 */
  goto L_11093943;
L_11093939:;
  /* 11093939 mov dword ptr [ebp - 0x1118], 0x110bb43c */
  w32((uint32_t)(EBP + -0x1118), (0x110bb43cu));
L_11093943:;
  /* 11093943 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11093946 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11093949 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109394b je 0x1109395f */
  if (C.zf) goto L_1109395f;
  /* 1109394d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093951 jne 0x1109395f */
  if (!C.zf) goto L_1109395f;
  /* 11093953 mov dword ptr [ebp - 0x111c], 0x110bb68c */
  w32((uint32_t)(EBP + -0x111c), (0x110bb68cu));
  /* 1109395d jmp 0x11093969 */
  goto L_11093969;
L_1109395f:;
  /* 1109395f mov dword ptr [ebp - 0x111c], 0x110bb43c */
  w32((uint32_t)(EBP + -0x111c), (0x110bb43cu));
L_11093969:;
  /* 11093969 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1109396c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109396f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11093971 je 0x1109397f */
  if (C.zf) goto L_1109397f;
  /* 11093973 mov dword ptr [ebp - 0x1120], 0x110bb688 */
  w32((uint32_t)(EBP + -0x1120), (0x110bb688u));
  /* 1109397d jmp 0x11093989 */
  goto L_11093989;
L_1109397f:;
  /* 1109397f mov dword ptr [ebp - 0x1120], 0x110bb43c */
  w32((uint32_t)(EBP + -0x1120), (0x110bb43cu));
L_11093989:;
  /* 11093989 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109398d je 0x1109399a */
  if (C.zf) goto L_1109399a;
  /* 1109398f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11093992 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11093998 jmp 0x110939a4 */
  goto L_110939a4;
L_1109399a:;
  /* 1109399a mov dword ptr [ebp - 0x1124], 0x110bb43c */
  w32((uint32_t)(EBP + -0x1124), (0x110bb43cu));
L_110939a4:;
  /* 110939a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110939a8 je 0x110939b6 */
  if (C.zf) goto L_110939b6;
  /* 110939aa mov dword ptr [ebp - 0x1128], 0x110bb680 */
  w32((uint32_t)(EBP + -0x1128), (0x110bb680u));
  /* 110939b4 jmp 0x110939c0 */
  goto L_110939c0;
L_110939b6:;
  /* 110939b6 mov dword ptr [ebp - 0x1128], 0x110bb43c */
  w32((uint32_t)(EBP + -0x1128), (0x110bb43cu));
L_110939c0:;
  /* 110939c0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110939c4 je 0x110939d1 */
  if (C.zf) goto L_110939d1;
  /* 110939c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110939c9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 110939cf jmp 0x110939db */
  goto L_110939db;
L_110939d1:;
  /* 110939d1 mov dword ptr [ebp - 0x112c], 0x110bb43c */
  w32((uint32_t)(EBP + -0x112c), (0x110bb43cu));
L_110939db:;
  /* 110939db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110939df je 0x110939ed */
  if (C.zf) goto L_110939ed;
  /* 110939e1 mov dword ptr [ebp - 0x1130], 0x110bb678 */
  w32((uint32_t)(EBP + -0x1130), (0x110bb678u));
  /* 110939eb jmp 0x110939f7 */
  goto L_110939f7;
L_110939ed:;
  /* 110939ed mov dword ptr [ebp - 0x1130], 0x110bb43c */
  w32((uint32_t)(EBP + -0x1130), (0x110bb43cu));
L_110939f7:;
  /* 110939f7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110939fe je 0x11093a0e */
  if (C.zf) goto L_11093a0e;
  /* 11093a00 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11093a06 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11093a0c jmp 0x11093a18 */
  goto L_11093a18;
L_11093a0e:;
  /* 11093a0e mov dword ptr [ebp - 0x1134], 0x110bb43c */
  w32((uint32_t)(EBP + -0x1134), (0x110bb43cu));
L_11093a18:;
  /* 11093a18 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093a1f je 0x11093a2d */
  if (C.zf) goto L_11093a2d;
  /* 11093a21 mov dword ptr [ebp - 0x1138], 0x110bb66c */
  w32((uint32_t)(EBP + -0x1138), (0x110bb66cu));
  /* 11093a2b jmp 0x11093a37 */
  goto L_11093a37;
L_11093a2d:;
  /* 11093a2d mov dword ptr [ebp - 0x1138], 0x110bb43c */
  w32((uint32_t)(EBP + -0x1138), (0x110bb43cu));
L_11093a37:;
  /* 11093a37 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11093a3d push edx */
  push32((uint32_t)(EDX));
  /* 11093a3e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11093a44 push eax */
  push32((uint32_t)(EAX));
  /* 11093a45 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11093a4b push ecx */
  push32((uint32_t)(ECX));
  /* 11093a4c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11093a52 push edx */
  push32((uint32_t)(EDX));
  /* 11093a53 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11093a59 push eax */
  push32((uint32_t)(EAX));
  /* 11093a5a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11093a60 push ecx */
  push32((uint32_t)(ECX));
  /* 11093a61 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11093a67 push edx */
  push32((uint32_t)(EDX));
  /* 11093a68 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11093a6e push eax */
  push32((uint32_t)(EAX));
  /* 11093a6f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11093a75 push ecx */
  push32((uint32_t)(ECX));
  /* 11093a76 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11093a7c push edx */
  push32((uint32_t)(EDX));
  /* 11093a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093a80 push eax */
  push32((uint32_t)(EAX));
  /* 11093a81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093a84 mov edx, dword ptr [ecx*4 + 0x110bea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110bea50)));
  /* 11093a8b push edx */
  push32((uint32_t)(EDX));
  /* 11093a8c push 0x110bb618 */
  push32((uint32_t)(0x110bb618u));
  /* 11093a91 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11093a96 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11093a9c push eax */
  push32((uint32_t)(EAX));
  /* 11093a9d call 0x11097260 */
  push32(0x11093aa2u); f_11097260();
  /* 11093aa2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093aa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11093aa7 jge 0x11093abd */
  if ((C.sf==C.of)) goto L_11093abd;
  /* 11093aa9 push 0x110bb57c */
  push32((uint32_t)(0x110bb57cu));
  /* 11093aae lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11093ab4 push ecx */
  push32((uint32_t)(ECX));
  /* 11093ab5 call 0x11097360 */
  push32(0x11093abau); f_11097360();
  /* 11093aba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093abd:;
  /* 11093abd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11093ac2 push 0x110bb5f4 */
  push32((uint32_t)(0x110bb5f4u));
  /* 11093ac7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11093acd push edx */
  push32((uint32_t)(EDX));
  /* 11093ace call 0x11097b10 */
  push32(0x11093ad3u); f_11097b10();
  /* 11093ad3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093ad6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11093adc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093ae3 jne 0x11093af6 */
  if (!C.zf) goto L_11093af6;
  /* 11093ae5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11093ae7 call 0x11097850 */
  push32(0x11093aecu); f_11097850();
  /* 11093aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093aef push 3 */
  push32((uint32_t)(0x3u));
  /* 11093af1 call 0x11093b70 */
  push32(0x11093af6u); f_11093b70();
L_11093af6:;
  /* 11093af6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093afd jne 0x11093b06 */
  if (!C.zf) goto L_11093b06;
  /* 11093aff mov eax, 1 */
  EAX = (0x1u);
  /* 11093b04 jmp 0x11093b08 */
  goto L_11093b08;
L_11093b06:;
  /* 11093b06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11093b08:;
  /* 11093b08 mov esp, ebp */
  ESP = (EBP);
  /* 11093b0a pop ebp */
  EBP = (pop32());
  /* 11093b0b ret  */
  ESPCHK(0x11093800u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b10 @ 0x11093b10 (56 bytes, 15 insns) */
void f_11093b10(void) {
  FTRACE(0x11093b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11093b11 mov ebp, esp */
  EBP = (ESP);
  /* 11093b13 cmp dword ptr [0x110c213c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c213c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093b1a je 0x11093b22 */
  if (C.zf) goto L_11093b22;
  /* 11093b1c call dword ptr [0x110c213c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c213c))), 0x11093b22u);
L_11093b22:;
  /* 11093b22 push 0x110be418 */
  push32((uint32_t)(0x110be418u));
  /* 11093b27 push 0x110be208 */
  push32((uint32_t)(0x110be208u));
  /* 11093b2c call 0x11093ce0 */
  push32(0x11093b31u); f_11093ce0();
  /* 11093b31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093b34 push 0x110be104 */
  push32((uint32_t)(0x110be104u));
  /* 11093b39 push 0x110be000 */
  push32((uint32_t)(0x110be000u));
  /* 11093b3e call 0x11093ce0 */
  push32(0x11093b43u); f_11093ce0();
  /* 11093b43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093b46 pop ebp */
  EBP = (pop32());
  /* 11093b47 ret  */
  ESPCHK(0x11093b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b50 @ 0x11093b50 (21 bytes, 10 insns) */
void f_11093b50(void) {
  FTRACE(0x11093b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11093b51 mov ebp, esp */
  EBP = (ESP);
  /* 11093b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11093b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11093b57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093b5a push eax */
  push32((uint32_t)(EAX));
  /* 11093b5b call 0x11093bd0 */
  push32(0x11093b60u); f_11093bd0();
  /* 11093b60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093b63 pop ebp */
  EBP = (pop32());
  /* 11093b64 ret  */
  ESPCHK(0x11093b50u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11093b70 (21 bytes, 10 insns) */
void f_11093b70(void) {
  FTRACE(0x11093b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11093b71 mov ebp, esp */
  EBP = (ESP);
  /* 11093b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11093b75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11093b77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093b7a push eax */
  push32((uint32_t)(EAX));
  /* 11093b7b call 0x11093bd0 */
  push32(0x11093b80u); f_11093bd0();
  /* 11093b80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093b83 pop ebp */
  EBP = (pop32());
  /* 11093b84 ret  */
  ESPCHK(0x11093b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b90 @ 0x11093b90 (19 bytes, 9 insns) */
void f_11093b90(void) {
  FTRACE(0x11093b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11093b91 mov ebp, esp */
  EBP = (ESP);
  /* 11093b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11093b95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11093b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11093b99 call 0x11093bd0 */
  push32(0x11093b9eu); f_11093bd0();
  /* 11093b9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093ba1 pop ebp */
  EBP = (pop32());
  /* 11093ba2 ret  */
  ESPCHK(0x11093b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bb0 @ 0x11093bb0 (19 bytes, 9 insns) */
void f_11093bb0(void) {
  FTRACE(0x11093bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11093bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11093bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11093bb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11093bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11093bb9 call 0x11093bd0 */
  push32(0x11093bbeu); f_11093bd0();
  /* 11093bbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093bc1 pop ebp */
  EBP = (pop32());
  /* 11093bc2 ret  */
  ESPCHK(0x11093bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bd0 @ 0x11093bd0 (227 bytes, 61 insns) */
void f_11093bd0(void) {
  FTRACE(0x11093bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11093bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11093bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11093bd4 call 0x11093cc0 */
  push32(0x11093bd9u); f_11093cc0();
  /* 11093bd9 cmp dword ptr [0x110c063c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c063c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093be0 jne 0x11093bf3 */
  if (!C.zf) goto L_11093bf3;
  /* 11093be2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093be5 push eax */
  push32((uint32_t)(EAX));
  /* 11093be6 call dword ptr [0x110c32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32c4))), 0x11093becu);
  /* 11093bec push eax */
  push32((uint32_t)(EAX));
  /* 11093bed call dword ptr [0x110c32c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32c0))), 0x11093bf3u);
L_11093bf3:;
  /* 11093bf3 mov dword ptr [0x110c0638], 1 */
  w32((uint32_t)(0x110c0638), (0x1u));
  /* 11093bfd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11093c00 mov byte ptr [0x110c0634], cl */
  w8((uint32_t)(0x110c0634), (CL));
  /* 11093c06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093c0a jne 0x11093c53 */
  if (!C.zf) goto L_11093c53;
  /* 11093c0c cmp dword ptr [0x110c2138], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c2138))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093c13 je 0x11093c41 */
  if (C.zf) goto L_11093c41;
  /* 11093c15 mov edx, dword ptr [0x110c2134] */
  EDX = (r32((uint32_t)(0x110c2134)));
  /* 11093c1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11093c1e:;
  /* 11093c1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093c21 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11093c24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11093c27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093c2a cmp ecx, dword ptr [0x110c2138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110c2138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093c30 jb 0x11093c41 */
  if (C.cf) goto L_11093c41;
  /* 11093c32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093c35 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093c38 je 0x11093c3f */
  if (C.zf) goto L_11093c3f;
  /* 11093c3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093c3d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11093c3fu);
L_11093c3f:;
  /* 11093c3f jmp 0x11093c1e */
  goto L_11093c1e;
L_11093c41:;
  /* 11093c41 push 0x110be724 */
  push32((uint32_t)(0x110be724u));
  /* 11093c46 push 0x110be51c */
  push32((uint32_t)(0x110be51cu));
  /* 11093c4b call 0x11093ce0 */
  push32(0x11093c50u); f_11093ce0();
  /* 11093c50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093c53:;
  /* 11093c53 push 0x110be92c */
  push32((uint32_t)(0x110be92cu));
  /* 11093c58 push 0x110be828 */
  push32((uint32_t)(0x110be828u));
  /* 11093c5d call 0x11093ce0 */
  push32(0x11093c62u); f_11093ce0();
  /* 11093c62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093c65 cmp dword ptr [0x110c0640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093c6c jne 0x11093c8e */
  if (!C.zf) goto L_11093c8e;
  /* 11093c6e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11093c70 call 0x110958c0 */
  push32(0x11093c75u); f_110958c0();
  /* 11093c75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093c78 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11093c7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11093c7d je 0x11093c8e */
  if (C.zf) goto L_11093c8e;
  /* 11093c7f mov dword ptr [0x110c0640], 1 */
  w32((uint32_t)(0x110c0640), (0x1u));
  /* 11093c89 call 0x110961d0 */
  push32(0x11093c8eu); f_110961d0();
L_11093c8e:;
  /* 11093c8e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093c92 je 0x11093c9b */
  if (C.zf) goto L_11093c9b;
  /* 11093c94 call 0x11093cd0 */
  push32(0x11093c99u); f_11093cd0();
  /* 11093c99 jmp 0x11093caf */
  goto L_11093caf;
L_11093c9b:;
  /* 11093c9b mov dword ptr [0x110c063c], 1 */
  w32((uint32_t)(0x110c063c), (0x1u));
  /* 11093ca5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093ca8 push ecx */
  push32((uint32_t)(ECX));
  /* 11093ca9 call dword ptr [0x110c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32bc))), 0x11093cafu);
L_11093caf:;
  /* 11093caf mov esp, ebp */
  ESP = (EBP);
  /* 11093cb1 pop ebp */
  EBP = (pop32());
  /* 11093cb2 ret  */
  ESPCHK(0x11093bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cc0 @ 0x11093cc0 (15 bytes, 7 insns) */
void f_11093cc0(void) {
  FTRACE(0x11093cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11093cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11093cc3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11093cc5 call 0x11097db0 */
  push32(0x11093ccau); f_11097db0();
  /* 11093cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093ccd pop ebp */
  EBP = (pop32());
  /* 11093cce ret  */
  ESPCHK(0x11093cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd0 @ 0x11093cd0 (15 bytes, 7 insns) */
void f_11093cd0(void) {
  FTRACE(0x11093cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11093cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11093cd3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11093cd5 call 0x11097e50 */
  push32(0x11093cdau); f_11097e50();
  /* 11093cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093cdd pop ebp */
  EBP = (pop32());
  /* 11093cde ret  */
  ESPCHK(0x11093cd0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11093ce0 (37 bytes, 16 insns) */
void f_11093ce0(void) {
  FTRACE(0x11093ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11093ce1 mov ebp, esp */
  EBP = (ESP);
L_11093ce3:;
  /* 11093ce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093ce6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093ce9 jae 0x11093d03 */
  if (!C.cf) goto L_11093d03;
  /* 11093ceb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093cee cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093cf1 je 0x11093cf8 */
  if (C.zf) goto L_11093cf8;
  /* 11093cf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093cf6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11093cf8u);
L_11093cf8:;
  /* 11093cf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093cfb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11093cfe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11093d01 jmp 0x11093ce3 */
  goto L_11093ce3;
L_11093d03:;
  /* 11093d03 pop ebp */
  EBP = (pop32());
  /* 11093d04 ret  */
  ESPCHK(0x11093ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d10 @ 0x11093d10 (130 bytes, 42 insns) */
void f_11093d10(void) {
  FTRACE(0x11093d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11093d11 mov ebp, esp */
  EBP = (ESP);
  /* 11093d13 push ecx */
  push32((uint32_t)(ECX));
  /* 11093d14 call 0x11097cd0 */
  push32(0x11093d19u); f_11097cd0();
  /* 11093d19 call dword ptr [0x110c32d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32d0))), 0x11093d1fu);
  /* 11093d1f mov dword ptr [0x110bea5c], eax */
  w32((uint32_t)(0x110bea5c), (EAX));
  /* 11093d24 cmp dword ptr [0x110bea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x110bea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093d2b jne 0x11093d31 */
  if (!C.zf) goto L_11093d31;
  /* 11093d2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11093d2f jmp 0x11093d8e */
  goto L_11093d8e;
L_11093d31:;
  /* 11093d31 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11093d33 push 0x110bb750 */
  push32((uint32_t)(0x110bb750u));
  /* 11093d38 push 2 */
  push32((uint32_t)(0x2u));
  /* 11093d3a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11093d3c push 1 */
  push32((uint32_t)(0x1u));
  /* 11093d3e call 0x110947c0 */
  push32(0x11093d43u); f_110947c0();
  /* 11093d43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093d46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11093d49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093d4d je 0x11093d64 */
  if (C.zf) goto L_11093d64;
  /* 11093d4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093d52 push eax */
  push32((uint32_t)(EAX));
  /* 11093d53 mov ecx, dword ptr [0x110bea5c] */
  ECX = (r32((uint32_t)(0x110bea5c)));
  /* 11093d59 push ecx */
  push32((uint32_t)(ECX));
  /* 11093d5a call dword ptr [0x110c32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32cc))), 0x11093d60u);
  /* 11093d60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11093d62 jne 0x11093d68 */
  if (!C.zf) goto L_11093d68;
L_11093d64:;
  /* 11093d64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11093d66 jmp 0x11093d8e */
  goto L_11093d8e;
L_11093d68:;
  /* 11093d68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093d6b push edx */
  push32((uint32_t)(EDX));
  /* 11093d6c call 0x11093dd0 */
  push32(0x11093d71u); f_11093dd0();
  /* 11093d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093d74 call dword ptr [0x110c32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32c8))), 0x11093d7au);
  /* 11093d7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093d7d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11093d7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093d82 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11093d89 mov eax, 1 */
  EAX = (0x1u);
L_11093d8e:;
  /* 11093d8e mov esp, ebp */
  ESP = (EBP);
  /* 11093d90 pop ebp */
  EBP = (pop32());
  /* 11093d91 ret  */
  ESPCHK(0x11093d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003da0 @ 0x11093da0 (41 bytes, 11 insns) */
void f_11093da0(void) {
  FTRACE(0x11093da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11093da1 mov ebp, esp */
  EBP = (ESP);
  /* 11093da3 call 0x11097d10 */
  push32(0x11093da8u); f_11097d10();
  /* 11093da8 cmp dword ptr [0x110bea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x110bea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093daf je 0x11093dc7 */
  if (C.zf) goto L_11093dc7;
  /* 11093db1 mov eax, dword ptr [0x110bea5c] */
  EAX = (r32((uint32_t)(0x110bea5c)));
  /* 11093db6 push eax */
  push32((uint32_t)(EAX));
  /* 11093db7 call dword ptr [0x110c32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32d4))), 0x11093dbdu);
  /* 11093dbd mov dword ptr [0x110bea5c], 0xffffffff */
  w32((uint32_t)(0x110bea5c), (0xffffffffu));
L_11093dc7:;
  /* 11093dc7 pop ebp */
  EBP = (pop32());
  /* 11093dc8 ret  */
  ESPCHK(0x11093da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dd0 @ 0x11093dd0 (25 bytes, 8 insns) */
void f_11093dd0(void) {
  FTRACE(0x11093dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11093dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11093dd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093dd6 mov dword ptr [eax + 0x50], 0x110bec00 */
  w32((uint32_t)(EAX + 0x50), (0x110bec00u));
  /* 11093ddd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093de0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11093de7 pop ebp */
  EBP = (pop32());
  /* 11093de8 ret  */
  ESPCHK(0x11093dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003df0 @ 0x11093df0 (152 bytes, 48 insns) */
void f_11093df0(void) {
  FTRACE(0x11093df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11093df1 mov ebp, esp */
  EBP = (ESP);
  /* 11093df3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11093df6 call dword ptr [0x110c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32e0))), 0x11093dfcu);
  /* 11093dfc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11093dff mov eax, dword ptr [0x110bea5c] */
  EAX = (r32((uint32_t)(0x110bea5c)));
  /* 11093e04 push eax */
  push32((uint32_t)(EAX));
  /* 11093e05 call dword ptr [0x110c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32dc))), 0x11093e0bu);
  /* 11093e0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11093e0e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093e12 jne 0x11093e77 */
  if (!C.zf) goto L_11093e77;
  /* 11093e14 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11093e19 push 0x110bb750 */
  push32((uint32_t)(0x110bb750u));
  /* 11093e1e push 2 */
  push32((uint32_t)(0x2u));
  /* 11093e20 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11093e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 11093e24 call 0x110947c0 */
  push32(0x11093e29u); f_110947c0();
  /* 11093e29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093e2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11093e2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093e33 je 0x11093e6d */
  if (C.zf) goto L_11093e6d;
  /* 11093e35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093e38 push ecx */
  push32((uint32_t)(ECX));
  /* 11093e39 mov edx, dword ptr [0x110bea5c] */
  EDX = (r32((uint32_t)(0x110bea5c)));
  /* 11093e3f push edx */
  push32((uint32_t)(EDX));
  /* 11093e40 call dword ptr [0x110c32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32cc))), 0x11093e46u);
  /* 11093e46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11093e48 je 0x11093e6d */
  if (C.zf) goto L_11093e6d;
  /* 11093e4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093e4d push eax */
  push32((uint32_t)(EAX));
  /* 11093e4e call 0x11093dd0 */
  push32(0x11093e53u); f_11093dd0();
  /* 11093e53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093e56 call dword ptr [0x110c32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32c8))), 0x11093e5cu);
  /* 11093e5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093e5f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11093e61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093e64 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11093e6b jmp 0x11093e77 */
  goto L_11093e77;
L_11093e6d:;
  /* 11093e6d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11093e6f call 0x11093320 */
  push32(0x11093e74u); f_11093320();
  /* 11093e74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093e77:;
  /* 11093e77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11093e7a push eax */
  push32((uint32_t)(EAX));
  /* 11093e7b call dword ptr [0x110c32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32d8))), 0x11093e81u);
  /* 11093e81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11093e84 mov esp, ebp */
  ESP = (EBP);
  /* 11093e86 pop ebp */
  EBP = (pop32());
  /* 11093e87 ret  */
  ESPCHK(0x11093df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e90 @ 0x11093e90 (263 bytes, 86 insns) */
void f_11093e90(void) {
  FTRACE(0x11093e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11093e91 mov ebp, esp */
  EBP = (ESP);
  /* 11093e93 cmp dword ptr [0x110bea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x110bea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093e9a je 0x11093f95 */
  if (C.zf) goto L_11093f95;
  /* 11093ea0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093ea4 jne 0x11093eb5 */
  if (!C.zf) goto L_11093eb5;
  /* 11093ea6 mov eax, dword ptr [0x110bea5c] */
  EAX = (r32((uint32_t)(0x110bea5c)));
  /* 11093eab push eax */
  push32((uint32_t)(EAX));
  /* 11093eac call dword ptr [0x110c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32dc))), 0x11093eb2u);
  /* 11093eb2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11093eb5:;
  /* 11093eb5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093eb9 je 0x11093f86 */
  if (C.zf) goto L_11093f86;
  /* 11093ebf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093ec2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093ec6 je 0x11093ed9 */
  if (C.zf) goto L_11093ed9;
  /* 11093ec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11093eca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093ecd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11093ed0 push eax */
  push32((uint32_t)(EAX));
  /* 11093ed1 call 0x11094e40 */
  push32(0x11093ed6u); f_11094e40();
  /* 11093ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093ed9:;
  /* 11093ed9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093edc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093ee0 je 0x11093ef3 */
  if (C.zf) goto L_11093ef3;
  /* 11093ee2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11093ee4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093ee7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11093eea push eax */
  push32((uint32_t)(EAX));
  /* 11093eeb call 0x11094e40 */
  push32(0x11093ef0u); f_11094e40();
  /* 11093ef0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093ef3:;
  /* 11093ef3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093ef6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093efa je 0x11093f0d */
  if (C.zf) goto L_11093f0d;
  /* 11093efc push 2 */
  push32((uint32_t)(0x2u));
  /* 11093efe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093f01 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11093f04 push eax */
  push32((uint32_t)(EAX));
  /* 11093f05 call 0x11094e40 */
  push32(0x11093f0au); f_11094e40();
  /* 11093f0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093f0d:;
  /* 11093f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093f10 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093f14 je 0x11093f27 */
  if (C.zf) goto L_11093f27;
  /* 11093f16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11093f18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093f1b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11093f1e push eax */
  push32((uint32_t)(EAX));
  /* 11093f1f call 0x11094e40 */
  push32(0x11093f24u); f_11094e40();
  /* 11093f24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093f27:;
  /* 11093f27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093f2a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093f2e je 0x11093f41 */
  if (C.zf) goto L_11093f41;
  /* 11093f30 push 2 */
  push32((uint32_t)(0x2u));
  /* 11093f32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093f35 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11093f38 push eax */
  push32((uint32_t)(EAX));
  /* 11093f39 call 0x11094e40 */
  push32(0x11093f3eu); f_11094e40();
  /* 11093f3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093f41:;
  /* 11093f41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093f44 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093f48 je 0x11093f5b */
  if (C.zf) goto L_11093f5b;
  /* 11093f4a push 2 */
  push32((uint32_t)(0x2u));
  /* 11093f4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093f4f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11093f52 push eax */
  push32((uint32_t)(EAX));
  /* 11093f53 call 0x11094e40 */
  push32(0x11093f58u); f_11094e40();
  /* 11093f58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093f5b:;
  /* 11093f5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093f5e cmp dword ptr [ecx + 0x50], 0x110bec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x110bec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093f65 je 0x11093f78 */
  if (C.zf) goto L_11093f78;
  /* 11093f67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11093f69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093f6c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11093f6f push eax */
  push32((uint32_t)(EAX));
  /* 11093f70 call 0x11094e40 */
  push32(0x11093f75u); f_11094e40();
  /* 11093f75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093f78:;
  /* 11093f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 11093f7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11093f7d push ecx */
  push32((uint32_t)(ECX));
  /* 11093f7e call 0x11094e40 */
  push32(0x11093f83u); f_11094e40();
  /* 11093f83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093f86:;
  /* 11093f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11093f88 mov edx, dword ptr [0x110bea5c] */
  EDX = (r32((uint32_t)(0x110bea5c)));
  /* 11093f8e push edx */
  push32((uint32_t)(EDX));
  /* 11093f8f call dword ptr [0x110c32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32cc))), 0x11093f95u);
L_11093f95:;
  /* 11093f95 pop ebp */
  EBP = (pop32());
  /* 11093f96 ret  */
  ESPCHK(0x11093e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fa0 @ 0x11093fa0 (11 bytes, 5 insns) */
void f_11093fa0(void) {
  FTRACE(0x11093fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11093fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11093fa3 call dword ptr [0x110c32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32c8))), 0x11093fa9u);
  /* 11093fa9 pop ebp */
  EBP = (pop32());
  /* 11093faa ret  */
  ESPCHK(0x11093fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fb0 @ 0x11093fb0 (11 bytes, 5 insns) */
void f_11093fb0(void) {
  FTRACE(0x11093fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11093fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11093fb3 call dword ptr [0x110c32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32e4))), 0x11093fb9u);
  /* 11093fb9 pop ebp */
  EBP = (pop32());
  /* 11093fba ret  */
  ESPCHK(0x11093fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fc0 @ 0x11093fc0 (804 bytes, 236 insns) */
void f_11093fc0(void) {
  FTRACE(0x11093fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11093fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11093fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11093fc3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11093fc6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11093fcb push 0x110bb75c */
  push32((uint32_t)(0x110bb75cu));
  /* 11093fd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11093fd2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11093fd7 call 0x110943b0 */
  push32(0x11093fdcu); f_110943b0();
  /* 11093fdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11093fdf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11093fe2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11093fe6 jne 0x11093ff2 */
  if (!C.zf) goto L_11093ff2;
  /* 11093fe8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11093fea call 0x11093320 */
  push32(0x11093fefu); f_11093320();
  /* 11093fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11093ff2:;
  /* 11093ff2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11093ff5 mov dword ptr [0x110c1fe0], eax */
  w32((uint32_t)(0x110c1fe0), (EAX));
  /* 11093ffa mov dword ptr [0x110c211c], 0x20 */
  w32((uint32_t)(0x110c211c), (0x20u));
  /* 11094004 jmp 0x1109400f */
  goto L_1109400f;
L_11094006:;
  /* 11094006 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11094009 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109400c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1109400f:;
  /* 1109400f mov edx, dword ptr [0x110c1fe0] */
  EDX = (r32((uint32_t)(0x110c1fe0)));
  /* 11094015 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109401b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109401e jae 0x11094043 */
  if (!C.cf) goto L_11094043;
  /* 11094020 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11094023 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11094027 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1109402a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11094030 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11094033 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11094037 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1109403a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11094041 jmp 0x11094006 */
  goto L_11094006;
L_11094043:;
  /* 11094043 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11094046 push ecx */
  push32((uint32_t)(ECX));
  /* 11094047 call dword ptr [0x110c32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32f0))), 0x1109404du);
  /* 1109404d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11094050 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11094056 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11094058 je 0x110941e5 */
  if (C.zf) goto L_110941e5;
  /* 1109405e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094062 je 0x110941e5 */
  if (C.zf) goto L_110941e5;
  /* 11094068 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109406b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109406d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11094070 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11094073 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094076 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11094079 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109407c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109407f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11094082 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094089 jge 0x11094093 */
  if ((C.sf==C.of)) goto L_11094093;
  /* 1109408b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1109408e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11094091 jmp 0x1109409a */
  goto L_1109409a;
L_11094093:;
  /* 11094093 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1109409a:;
  /* 1109409a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1109409d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 110940a0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 110940a7 jmp 0x110940b2 */
  goto L_110940b2;
L_110940a9:;
  /* 110940a9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 110940ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110940af mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_110940b2:;
  /* 110940b2 mov ecx, dword ptr [0x110c211c] */
  ECX = (r32((uint32_t)(0x110c211c)));
  /* 110940b8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110940bb jge 0x11094152 */
  if ((C.sf==C.of)) goto L_11094152;
  /* 110940c1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 110940c6 push 0x110bb75c */
  push32((uint32_t)(0x110bb75cu));
  /* 110940cb push 2 */
  push32((uint32_t)(0x2u));
  /* 110940cd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 110940d2 call 0x110943b0 */
  push32(0x110940d7u); f_110943b0();
  /* 110940d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110940da mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 110940dd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110940e1 jne 0x110940ee */
  if (!C.zf) goto L_110940ee;
  /* 110940e3 mov edx, dword ptr [0x110c211c] */
  EDX = (r32((uint32_t)(0x110c211c)));
  /* 110940e9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 110940ec jmp 0x11094152 */
  goto L_11094152;
L_110940ee:;
  /* 110940ee mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 110940f1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 110940f4 mov dword ptr [eax*4 + 0x110c1fe0], ecx */
  w32((uint32_t)(EAX*4 + 0x110c1fe0), (ECX));
  /* 110940fb mov edx, dword ptr [0x110c211c] */
  EDX = (r32((uint32_t)(0x110c211c)));
  /* 11094101 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094104 mov dword ptr [0x110c211c], edx */
  w32((uint32_t)(0x110c211c), (EDX));
  /* 1109410a jmp 0x11094115 */
  goto L_11094115;
L_1109410c:;
  /* 1109410c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1109410f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094112 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11094115:;
  /* 11094115 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11094118 mov edx, dword ptr [ecx*4 + 0x110c1fe0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110c1fe0)));
  /* 1109411f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094125 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094128 jae 0x1109414d */
  if (!C.cf) goto L_1109414d;
  /* 1109412a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1109412d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11094131 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11094134 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1109413a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1109413d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11094141 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11094144 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1109414b jmp 0x1109410c */
  goto L_1109410c;
L_1109414d:;
  /* 1109414d jmp 0x110940a9 */
  goto L_110940a9;
L_11094152:;
  /* 11094152 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11094159 jmp 0x11094176 */
  goto L_11094176;
L_1109415b:;
  /* 1109415b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1109415e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094161 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11094164 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094167 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109416a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109416d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11094170 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094173 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11094176:;
  /* 11094176 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11094179 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109417c jge 0x110941e5 */
  if ((C.sf==C.of)) goto L_110941e5;
  /* 1109417e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11094181 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094184 je 0x110941e0 */
  if (C.zf) goto L_110941e0;
  /* 11094186 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094189 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109418c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1109418f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11094191 je 0x110941e0 */
  if (C.zf) goto L_110941e0;
  /* 11094193 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094196 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11094199 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1109419c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109419e jne 0x110941b0 */
  if (!C.zf) goto L_110941b0;
  /* 110941a0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 110941a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110941a5 push edx */
  push32((uint32_t)(EDX));
  /* 110941a6 call dword ptr [0x110c32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32ec))), 0x110941acu);
  /* 110941ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110941ae je 0x110941e0 */
  if (C.zf) goto L_110941e0;
L_110941b0:;
  /* 110941b0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 110941b3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 110941b6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 110941b9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 110941bc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110941bf mov edx, dword ptr [eax*4 + 0x110c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110c1fe0)));
  /* 110941c6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110941c8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 110941cb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 110941ce mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 110941d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110941d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110941d5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 110941d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110941db mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110941dd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_110941e0:;
  /* 110941e0 jmp 0x1109415b */
  goto L_1109415b;
L_110941e5:;
  /* 110941e5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 110941ec jmp 0x110941f7 */
  goto L_110941f7;
L_110941ee:;
  /* 110941ee mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 110941f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110941f4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_110941f7:;
  /* 110941f7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110941fb jge 0x110942d4 */
  if ((C.sf==C.of)) goto L_110942d4;
  /* 11094201 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11094204 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11094207 mov edx, dword ptr [0x110c1fe0] */
  EDX = (r32((uint32_t)(0x110c1fe0)));
  /* 1109420d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109420f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11094212 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11094215 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094218 jne 0x110942c0 */
  if (!C.zf) goto L_110942c0;
  /* 1109421e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11094221 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11094225 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094229 jne 0x11094234 */
  if (!C.zf) goto L_11094234;
  /* 1109422b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11094232 jmp 0x11094244 */
  goto L_11094244;
L_11094234:;
  /* 11094234 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11094237 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109423a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1109423c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109423e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094241 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11094244:;
  /* 11094244 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11094247 push eax */
  push32((uint32_t)(EAX));
  /* 11094248 call dword ptr [0x110c329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c329c))), 0x1109424eu);
  /* 1109424e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11094251 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094255 je 0x110942af */
  if (C.zf) goto L_110942af;
  /* 11094257 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1109425a push ecx */
  push32((uint32_t)(ECX));
  /* 1109425b call dword ptr [0x110c32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32ec))), 0x11094261u);
  /* 11094261 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11094264 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094268 je 0x110942af */
  if (C.zf) goto L_110942af;
  /* 1109426a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1109426d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11094270 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11094272 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11094275 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1109427b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109427e jne 0x11094290 */
  if (!C.zf) goto L_11094290;
  /* 11094280 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11094283 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11094286 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11094288 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1109428b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1109428e jmp 0x110942ad */
  goto L_110942ad;
L_11094290:;
  /* 11094290 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11094293 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11094299 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109429c jne 0x110942ad */
  if (!C.zf) goto L_110942ad;
  /* 1109429e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 110942a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 110942a4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 110942a7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 110942aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_110942ad:;
  /* 110942ad jmp 0x110942be */
  goto L_110942be;
L_110942af:;
  /* 110942af mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 110942b2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 110942b5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 110942b8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 110942bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_110942be:;
  /* 110942be jmp 0x110942cf */
  goto L_110942cf;
L_110942c0:;
  /* 110942c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 110942c3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 110942c6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 110942c9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 110942cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_110942cf:;
  /* 110942cf jmp 0x110941ee */
  goto L_110941ee;
L_110942d4:;
  /* 110942d4 mov eax, dword ptr [0x110c211c] */
  EAX = (r32((uint32_t)(0x110c211c)));
  /* 110942d9 push eax */
  push32((uint32_t)(EAX));
  /* 110942da call dword ptr [0x110c32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32e8))), 0x110942e0u);
  /* 110942e0 mov esp, ebp */
  ESP = (EBP);
  /* 110942e2 pop ebp */
  EBP = (pop32());
  /* 110942e3 ret  */
  ESPCHK(0x11093fc0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x110942f0 (155 bytes, 45 insns) */
void f_110942f0(void) {
  FTRACE(0x110942f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110942f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110942f1 mov ebp, esp */
  EBP = (ESP);
  /* 110942f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110942f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 110942fd jmp 0x11094308 */
  goto L_11094308;
L_110942ff:;
  /* 110942ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11094302 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094305 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11094308:;
  /* 11094308 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109430c jge 0x11094387 */
  if ((C.sf==C.of)) goto L_11094387;
  /* 1109430e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11094311 cmp dword ptr [ecx*4 + 0x110c1fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x110c1fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094319 je 0x11094382 */
  if (C.zf) goto L_11094382;
  /* 1109431b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109431e mov eax, dword ptr [edx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110c1fe0)));
  /* 11094325 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11094328 jmp 0x11094333 */
  goto L_11094333;
L_1109432a:;
  /* 1109432a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109432d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094330 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11094333:;
  /* 11094333 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11094336 mov eax, dword ptr [edx*4 + 0x110c1fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110c1fe0)));
  /* 1109433d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094342 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094345 jae 0x1109435f */
  if (!C.cf) goto L_1109435f;
  /* 11094347 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109434a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109434e je 0x1109435d */
  if (C.zf) goto L_1109435d;
  /* 11094350 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094353 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094356 push edx */
  push32((uint32_t)(EDX));
  /* 11094357 call dword ptr [0x110c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32f4))), 0x1109435du);
L_1109435d:;
  /* 1109435d jmp 0x1109432a */
  goto L_1109432a;
L_1109435f:;
  /* 1109435f push 2 */
  push32((uint32_t)(0x2u));
  /* 11094361 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11094364 mov ecx, dword ptr [eax*4 + 0x110c1fe0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x110c1fe0)));
  /* 1109436b push ecx */
  push32((uint32_t)(ECX));
  /* 1109436c call 0x11094e40 */
  push32(0x11094371u); f_11094e40();
  /* 11094371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094374 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11094377 mov dword ptr [edx*4 + 0x110c1fe0], 0 */
  w32((uint32_t)(EDX*4 + 0x110c1fe0), (0x0u));
L_11094382:;
  /* 11094382 jmp 0x110942ff */
  goto L_110942ff;
L_11094387:;
  /* 11094387 mov esp, ebp */
  ESP = (EBP);
  /* 11094389 pop ebp */
  EBP = (pop32());
  /* 1109438a ret  */
  ESPCHK(0x110942f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004390 @ 0x11094390 (29 bytes, 13 insns) */
void f_11094390(void) {
  FTRACE(0x11094390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11094390 push ebp */
  push32((uint32_t)(EBP));
  /* 11094391 mov ebp, esp */
  EBP = (ESP);
  /* 11094393 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094395 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094397 push 1 */
  push32((uint32_t)(0x1u));
  /* 11094399 mov eax, dword ptr [0x110c07e8] */
  EAX = (r32((uint32_t)(0x110c07e8)));
  /* 1109439e push eax */
  push32((uint32_t)(EAX));
  /* 1109439f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110943a2 push ecx */
  push32((uint32_t)(ECX));
  /* 110943a3 call 0x11094400 */
  push32(0x110943a8u); f_11094400();
  /* 110943a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110943ab pop ebp */
  EBP = (pop32());
  /* 110943ac ret  */
  ESPCHK(0x11094390u, _esp0);
  ESP += 4; return;
}

/* FUN_100043b0 @ 0x110943b0 (35 bytes, 16 insns) */
void f_110943b0(void) {
  FTRACE(0x110943b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110943b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110943b1 mov ebp, esp */
  EBP = (ESP);
  /* 110943b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110943b6 push eax */
  push32((uint32_t)(EAX));
  /* 110943b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110943ba push ecx */
  push32((uint32_t)(ECX));
  /* 110943bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110943be push edx */
  push32((uint32_t)(EDX));
  /* 110943bf mov eax, dword ptr [0x110c07e8] */
  EAX = (r32((uint32_t)(0x110c07e8)));
  /* 110943c4 push eax */
  push32((uint32_t)(EAX));
  /* 110943c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110943c8 push ecx */
  push32((uint32_t)(ECX));
  /* 110943c9 call 0x11094400 */
  push32(0x110943ceu); f_11094400();
  /* 110943ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110943d1 pop ebp */
  EBP = (pop32());
  /* 110943d2 ret  */
  ESPCHK(0x110943b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043e0 @ 0x110943e0 (27 bytes, 13 insns) */
void f_110943e0(void) {
  FTRACE(0x110943e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110943e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110943e1 mov ebp, esp */
  EBP = (ESP);
  /* 110943e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110943e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110943e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 110943e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110943ec push eax */
  push32((uint32_t)(EAX));
  /* 110943ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110943f0 push ecx */
  push32((uint32_t)(ECX));
  /* 110943f1 call 0x11094400 */
  push32(0x110943f6u); f_11094400();
  /* 110943f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110943f9 pop ebp */
  EBP = (pop32());
  /* 110943fa ret  */
  ESPCHK(0x110943e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004400 @ 0x11094400 (94 bytes, 38 insns) */
void f_11094400(void) {
  FTRACE(0x11094400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11094400 push ebp */
  push32((uint32_t)(EBP));
  /* 11094401 mov ebp, esp */
  EBP = (ESP);
  /* 11094403 push ecx */
  push32((uint32_t)(ECX));
L_11094404:;
  /* 11094404 push 9 */
  push32((uint32_t)(0x9u));
  /* 11094406 call 0x11097db0 */
  push32(0x1109440bu); f_11097db0();
  /* 1109440b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109440e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11094411 push eax */
  push32((uint32_t)(EAX));
  /* 11094412 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11094415 push ecx */
  push32((uint32_t)(ECX));
  /* 11094416 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11094419 push edx */
  push32((uint32_t)(EDX));
  /* 1109441a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109441d push eax */
  push32((uint32_t)(EAX));
  /* 1109441e call 0x11094480 */
  push32(0x11094423u); f_11094480();
  /* 11094423 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094426 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11094429 push 9 */
  push32((uint32_t)(0x9u));
  /* 1109442b call 0x11097e50 */
  push32(0x11094430u); f_11097e50();
  /* 11094430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094433 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094437 jne 0x1109443f */
  if (!C.zf) goto L_1109443f;
  /* 11094439 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109443d jne 0x11094444 */
  if (!C.zf) goto L_11094444;
L_1109443f:;
  /* 1109443f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094442 jmp 0x1109445a */
  goto L_1109445a;
L_11094444:;
  /* 11094444 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094447 push ecx */
  push32((uint32_t)(ECX));
  /* 11094448 call 0x110980f0 */
  push32(0x1109444du); f_110980f0();
  /* 1109444d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094450 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11094452 jne 0x11094458 */
  if (!C.zf) goto L_11094458;
  /* 11094454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11094456 jmp 0x1109445a */
  goto L_1109445a;
L_11094458:;
  /* 11094458 jmp 0x11094404 */
  goto L_11094404;
L_1109445a:;
  /* 1109445a mov esp, ebp */
  ESP = (EBP);
  /* 1109445c pop ebp */
  EBP = (pop32());
  /* 1109445d ret  */
  ESPCHK(0x11094400u, _esp0);
  ESP += 4; return;
}

/* FUN_10004460 @ 0x11094460 (23 bytes, 11 insns) */
void f_11094460(void) {
  FTRACE(0x11094460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11094460 push ebp */
  push32((uint32_t)(EBP));
  /* 11094461 mov ebp, esp */
  EBP = (ESP);
  /* 11094463 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094465 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094467 push 1 */
  push32((uint32_t)(0x1u));
  /* 11094469 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109446c push eax */
  push32((uint32_t)(EAX));
  /* 1109446d call 0x11094480 */
  push32(0x11094472u); f_11094480();
  /* 11094472 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094475 pop ebp */
  EBP = (pop32());
  /* 11094476 ret  */
  ESPCHK(0x11094460u, _esp0);
  ESP += 4; return;
}

/* FUN_10004480 @ 0x11094480 (787 bytes, 254 insns) */
void f_11094480(void) {
  FTRACE(0x11094480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11094480 push ebp */
  push32((uint32_t)(EBP));
  /* 11094481 mov ebp, esp */
  EBP = (ESP);
  /* 11094483 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11094486 push ebx */
  push32((uint32_t)(EBX));
  /* 11094487 push esi */
  push32((uint32_t)(ESI));
  /* 11094488 push edi */
  push32((uint32_t)(EDI));
  /* 11094489 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11094490 mov eax, dword ptr [0x110bea84] */
  EAX = (r32((uint32_t)(0x110bea84)));
  /* 11094495 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11094498 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109449a je 0x110944cc */
  if (C.zf) goto L_110944cc;
L_1109449c:;
  /* 1109449c call 0x11095550 */
  push32(0x110944a1u); f_11095550();
  /* 110944a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110944a3 jne 0x110944c6 */
  if (!C.zf) goto L_110944c6;
  /* 110944a5 push 0x110bb850 */
  push32((uint32_t)(0x110bb850u));
  /* 110944aa push 0 */
  push32((uint32_t)(0x0u));
  /* 110944ac push 0x141 */
  push32((uint32_t)(0x141u));
  /* 110944b1 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 110944b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 110944b8 call 0x11093470 */
  push32(0x110944bdu); f_11093470();
  /* 110944bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110944c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110944c3 jne 0x110944c6 */
  if (!C.zf) goto L_110944c6;
  /* 110944c5 int3  */
  x86_unimpl("int3 @ 0x110944c5");
L_110944c6:;
  /* 110944c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110944c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110944ca jne 0x1109449c */
  if (!C.zf) goto L_1109449c;
L_110944cc:;
  /* 110944cc mov edx, dword ptr [0x110bea88] */
  EDX = (r32((uint32_t)(0x110bea88)));
  /* 110944d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110944d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110944d8 cmp eax, dword ptr [0x110bea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110bea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110944de jne 0x110944e1 */
  if (!C.zf) goto L_110944e1;
  /* 110944e0 int3  */
  x86_unimpl("int3 @ 0x110944e0");
L_110944e1:;
  /* 110944e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110944e4 push ecx */
  push32((uint32_t)(ECX));
  /* 110944e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110944e8 push edx */
  push32((uint32_t)(EDX));
  /* 110944e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110944ec push eax */
  push32((uint32_t)(EAX));
  /* 110944ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110944f0 push ecx */
  push32((uint32_t)(ECX));
  /* 110944f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110944f4 push edx */
  push32((uint32_t)(EDX));
  /* 110944f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110944f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 110944f9 call dword ptr [0x110bec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x110bec90))), 0x110944ffu);
  /* 110944ff add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11094504 jne 0x11094564 */
  if (!C.zf) goto L_11094564;
  /* 11094506 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109450a je 0x11094537 */
  if (C.zf) goto L_11094537;
L_1109450c:;
  /* 1109450c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109450f push eax */
  push32((uint32_t)(EAX));
  /* 11094510 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11094513 push ecx */
  push32((uint32_t)(ECX));
  /* 11094514 push 0x110bb80c */
  push32((uint32_t)(0x110bb80cu));
  /* 11094519 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109451b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109451d push 0 */
  push32((uint32_t)(0x0u));
  /* 1109451f push 0 */
  push32((uint32_t)(0x0u));
  /* 11094521 call 0x11093470 */
  push32(0x11094526u); f_11093470();
  /* 11094526 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094529 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109452c jne 0x1109452f */
  if (!C.zf) goto L_1109452f;
  /* 1109452e int3  */
  x86_unimpl("int3 @ 0x1109452e");
L_1109452f:;
  /* 1109452f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11094531 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11094533 jne 0x1109450c */
  if (!C.zf) goto L_1109450c;
  /* 11094535 jmp 0x1109455d */
  goto L_1109455d;
L_11094537:;
  /* 11094537 push 0x110bb7e8 */
  push32((uint32_t)(0x110bb7e8u));
  /* 1109453c push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 11094541 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094543 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094545 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094547 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094549 call 0x11093470 */
  push32(0x1109454eu); f_11093470();
  /* 1109454e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094551 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094554 jne 0x11094557 */
  if (!C.zf) goto L_11094557;
  /* 11094556 int3  */
  x86_unimpl("int3 @ 0x11094556");
L_11094557:;
  /* 11094557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11094559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109455b jne 0x11094537 */
  if (!C.zf) goto L_11094537;
L_1109455d:;
  /* 1109455d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109455f jmp 0x1109478c */
  goto L_1109478c;
L_11094564:;
  /* 11094564 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11094567 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1109456d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094570 je 0x11094586 */
  if (C.zf) goto L_11094586;
  /* 11094572 mov edx, dword ptr [0x110bea84] */
  EDX = (r32((uint32_t)(0x110bea84)));
  /* 11094578 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1109457b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109457d jne 0x11094586 */
  if (!C.zf) goto L_11094586;
  /* 1109457f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11094586:;
  /* 11094586 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109458a ja 0x11094597 */
  if ((!C.cf&&!C.zf)) goto L_11094597;
  /* 1109458c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109458f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094592 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094595 jbe 0x110945c3 */
  if ((C.cf||C.zf)) goto L_110945c3;
L_11094597:;
  /* 11094597 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109459a push ecx */
  push32((uint32_t)(ECX));
  /* 1109459b push 0x110bb7c0 */
  push32((uint32_t)(0x110bb7c0u));
  /* 110945a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110945a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110945a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110945a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 110945a8 call 0x11093470 */
  push32(0x110945adu); f_11093470();
  /* 110945ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110945b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110945b3 jne 0x110945b6 */
  if (!C.zf) goto L_110945b6;
  /* 110945b5 int3  */
  x86_unimpl("int3 @ 0x110945b5");
L_110945b6:;
  /* 110945b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110945b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110945ba jne 0x11094597 */
  if (!C.zf) goto L_11094597;
  /* 110945bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110945be jmp 0x1109478c */
  goto L_1109478c;
L_110945c3:;
  /* 110945c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110945c6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110945cb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110945ce je 0x11094610 */
  if (C.zf) goto L_11094610;
  /* 110945d0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110945d4 je 0x11094610 */
  if (C.zf) goto L_11094610;
  /* 110945d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110945d9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110945df cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110945e2 je 0x11094610 */
  if (C.zf) goto L_11094610;
  /* 110945e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110945e8 je 0x11094610 */
  if (C.zf) goto L_11094610;
L_110945ea:;
  /* 110945ea push 0x110bb78c */
  push32((uint32_t)(0x110bb78cu));
  /* 110945ef push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 110945f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110945f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110945f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110945fa push 1 */
  push32((uint32_t)(0x1u));
  /* 110945fc call 0x11093470 */
  push32(0x11094601u); f_11093470();
  /* 11094601 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094604 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094607 jne 0x1109460a */
  if (!C.zf) goto L_1109460a;
  /* 11094609 int3  */
  x86_unimpl("int3 @ 0x11094609");
L_1109460a:;
  /* 1109460a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109460c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109460e jne 0x110945ea */
  if (!C.zf) goto L_110945ea;
L_11094610:;
  /* 11094610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094613 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094616 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11094619 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109461c push ecx */
  push32((uint32_t)(ECX));
  /* 1109461d call 0x11098200 */
  push32(0x11094622u); f_11098200();
  /* 11094622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094625 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11094628 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109462c jne 0x11094635 */
  if (!C.zf) goto L_11094635;
  /* 1109462e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11094630 jmp 0x1109478c */
  goto L_1109478c;
L_11094635:;
  /* 11094635 mov edx, dword ptr [0x110bea88] */
  EDX = (r32((uint32_t)(0x110bea88)));
  /* 1109463b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109463e mov dword ptr [0x110bea88], edx */
  w32((uint32_t)(0x110bea88), (EDX));
  /* 11094644 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094648 je 0x11094693 */
  if (C.zf) goto L_11094693;
  /* 1109464a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109464d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11094653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094656 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1109465d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094660 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11094667 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109466a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11094671 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094677 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1109467a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109467d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11094684 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094687 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1109468e jmp 0x11094733 */
  goto L_11094733;
L_11094693:;
  /* 11094693 mov edx, dword ptr [0x110c0648] */
  EDX = (r32((uint32_t)(0x110c0648)));
  /* 11094699 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109469c mov dword ptr [0x110c0648], edx */
  w32((uint32_t)(0x110c0648), (EDX));
  /* 110946a2 mov eax, dword ptr [0x110c0650] */
  EAX = (r32((uint32_t)(0x110c0650)));
  /* 110946a7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110946aa mov dword ptr [0x110c0650], eax */
  w32((uint32_t)(0x110c0650), (EAX));
  /* 110946af mov ecx, dword ptr [0x110c0650] */
  ECX = (r32((uint32_t)(0x110c0650)));
  /* 110946b5 cmp ecx, dword ptr [0x110c0654] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110c0654))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110946bb jbe 0x110946c9 */
  if ((C.cf||C.zf)) goto L_110946c9;
  /* 110946bd mov edx, dword ptr [0x110c0650] */
  EDX = (r32((uint32_t)(0x110c0650)));
  /* 110946c3 mov dword ptr [0x110c0654], edx */
  w32((uint32_t)(0x110c0654), (EDX));
L_110946c9:;
  /* 110946c9 cmp dword ptr [0x110c064c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c064c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110946d0 je 0x110946df */
  if (C.zf) goto L_110946df;
  /* 110946d2 mov eax, dword ptr [0x110c064c] */
  EAX = (r32((uint32_t)(0x110c064c)));
  /* 110946d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110946da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 110946dd jmp 0x110946e8 */
  goto L_110946e8;
L_110946df:;
  /* 110946df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110946e2 mov dword ptr [0x110c0644], edx */
  w32((uint32_t)(0x110c0644), (EDX));
L_110946e8:;
  /* 110946e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110946eb mov ecx, dword ptr [0x110c064c] */
  ECX = (r32((uint32_t)(0x110c064c)));
  /* 110946f1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 110946f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110946f6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 110946fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094700 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11094703 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11094706 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094709 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109470c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1109470f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094712 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094715 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11094718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109471b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109471e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11094721 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094724 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11094727 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1109472a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109472d mov dword ptr [0x110c064c], ecx */
  w32((uint32_t)(0x110c064c), (ECX));
L_11094733:;
  /* 11094733 push 4 */
  push32((uint32_t)(0x4u));
  /* 11094735 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11094737 mov dl, byte ptr [0x110bea90] */
  DL = (r8((uint32_t)(0x110bea90)));
  /* 1109473d push edx */
  push32((uint32_t)(EDX));
  /* 1109473e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094741 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094744 push eax */
  push32((uint32_t)(EAX));
  /* 11094745 call 0x11098120 */
  push32(0x1109474au); f_11098120();
  /* 1109474a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109474d push 4 */
  push32((uint32_t)(0x4u));
  /* 1109474f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11094751 mov cl, byte ptr [0x110bea90] */
  CL = (r8((uint32_t)(0x110bea90)));
  /* 11094757 push ecx */
  push32((uint32_t)(ECX));
  /* 11094758 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109475b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109475e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11094762 push ecx */
  push32((uint32_t)(ECX));
  /* 11094763 call 0x11098120 */
  push32(0x11094768u); f_11098120();
  /* 11094768 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109476b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109476e push edx */
  push32((uint32_t)(EDX));
  /* 1109476f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11094771 mov al, byte ptr [0x110bea92] */
  AL = (r8((uint32_t)(0x110bea92)));
  /* 11094776 push eax */
  push32((uint32_t)(EAX));
  /* 11094777 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109477a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109477d push ecx */
  push32((uint32_t)(ECX));
  /* 1109477e call 0x11098120 */
  push32(0x11094783u); f_11098120();
  /* 11094783 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094786 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094789 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1109478c:;
  /* 1109478c pop edi */
  EDI = (pop32());
  /* 1109478d pop esi */
  ESI = (pop32());
  /* 1109478e pop ebx */
  EBX = (pop32());
  /* 1109478f mov esp, ebp */
  ESP = (EBP);
  /* 11094791 pop ebp */
  EBP = (pop32());
  /* 11094792 ret  */
  ESPCHK(0x11094480u, _esp0);
  ESP += 4; return;
}

/* FUN_100047a0 @ 0x110947a0 (27 bytes, 13 insns) */
void f_110947a0(void) {
  FTRACE(0x110947a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110947a0 push ebp */
  push32((uint32_t)(EBP));
  /* 110947a1 mov ebp, esp */
  EBP = (ESP);
  /* 110947a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110947a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110947a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 110947a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110947ac push eax */
  push32((uint32_t)(EAX));
  /* 110947ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110947b0 push ecx */
  push32((uint32_t)(ECX));
  /* 110947b1 call 0x110947c0 */
  push32(0x110947b6u); f_110947c0();
  /* 110947b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110947b9 pop ebp */
  EBP = (pop32());
  /* 110947ba ret  */
  ESPCHK(0x110947a0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x110947c0 (96 bytes, 37 insns) */
void f_110947c0(void) {
  FTRACE(0x110947c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110947c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110947c1 mov ebp, esp */
  EBP = (ESP);
  /* 110947c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110947c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110947c9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110947cd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 110947d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110947d3 push ecx */
  push32((uint32_t)(ECX));
  /* 110947d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110947d7 push edx */
  push32((uint32_t)(EDX));
  /* 110947d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110947db push eax */
  push32((uint32_t)(EAX));
  /* 110947dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110947df push ecx */
  push32((uint32_t)(ECX));
  /* 110947e0 call 0x110943b0 */
  push32(0x110947e5u); f_110943b0();
  /* 110947e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110947e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110947eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110947ef je 0x11094819 */
  if (C.zf) goto L_11094819;
  /* 110947f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110947f4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 110947f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110947fa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110947fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11094800:;
  /* 11094800 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094803 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094806 jae 0x11094819 */
  if (!C.cf) goto L_11094819;
  /* 11094808 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109480b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1109480e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094811 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094814 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11094817 jmp 0x11094800 */
  goto L_11094800;
L_11094819:;
  /* 11094819 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109481c mov esp, ebp */
  ESP = (EBP);
  /* 1109481e pop ebp */
  EBP = (pop32());
  /* 1109481f ret  */
  ESPCHK(0x110947c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004820 @ 0x11094820 (27 bytes, 13 insns) */
void f_11094820(void) {
  FTRACE(0x11094820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11094820 push ebp */
  push32((uint32_t)(EBP));
  /* 11094821 mov ebp, esp */
  EBP = (ESP);
  /* 11094823 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094825 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094827 push 1 */
  push32((uint32_t)(0x1u));
  /* 11094829 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109482c push eax */
  push32((uint32_t)(EAX));
  /* 1109482d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094830 push ecx */
  push32((uint32_t)(ECX));
  /* 11094831 call 0x11094840 */
  push32(0x11094836u); f_11094840();
  /* 11094836 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094839 pop ebp */
  EBP = (pop32());
  /* 1109483a ret  */
  ESPCHK(0x11094820u, _esp0);
  ESP += 4; return;
}

/* FUN_10004840 @ 0x11094840 (64 bytes, 27 insns) */
void f_11094840(void) {
  FTRACE(0x11094840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11094840 push ebp */
  push32((uint32_t)(EBP));
  /* 11094841 mov ebp, esp */
  EBP = (ESP);
  /* 11094843 push ecx */
  push32((uint32_t)(ECX));
  /* 11094844 push 9 */
  push32((uint32_t)(0x9u));
  /* 11094846 call 0x11097db0 */
  push32(0x1109484bu); f_11097db0();
  /* 1109484b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109484e push 1 */
  push32((uint32_t)(0x1u));
  /* 11094850 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11094853 push eax */
  push32((uint32_t)(EAX));
  /* 11094854 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11094857 push ecx */
  push32((uint32_t)(ECX));
  /* 11094858 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109485b push edx */
  push32((uint32_t)(EDX));
  /* 1109485c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109485f push eax */
  push32((uint32_t)(EAX));
  /* 11094860 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094863 push ecx */
  push32((uint32_t)(ECX));
  /* 11094864 call 0x11094880 */
  push32(0x11094869u); f_11094880();
  /* 11094869 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109486c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109486f push 9 */
  push32((uint32_t)(0x9u));
  /* 11094871 call 0x11097e50 */
  push32(0x11094876u); f_11097e50();
  /* 11094876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094879 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109487c mov esp, ebp */
  ESP = (EBP);
  /* 1109487e pop ebp */
  EBP = (pop32());
  /* 1109487f ret  */
  ESPCHK(0x11094840u, _esp0);
  ESP += 4; return;
}

/* FUN_10004880 @ 0x11094880 (1297 bytes, 431 insns) */
void f_11094880(void) {
  FTRACE(0x11094880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11094880 push ebp */
  push32((uint32_t)(EBP));
  /* 11094881 mov ebp, esp */
  EBP = (ESP);
  /* 11094883 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11094886 push ebx */
  push32((uint32_t)(EBX));
  /* 11094887 push esi */
  push32((uint32_t)(ESI));
  /* 11094888 push edi */
  push32((uint32_t)(EDI));
  /* 11094889 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11094890 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094894 jne 0x110948b3 */
  if (!C.zf) goto L_110948b3;
  /* 11094896 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11094899 push eax */
  push32((uint32_t)(EAX));
  /* 1109489a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109489d push ecx */
  push32((uint32_t)(ECX));
  /* 1109489e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110948a1 push edx */
  push32((uint32_t)(EDX));
  /* 110948a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110948a5 push eax */
  push32((uint32_t)(EAX));
  /* 110948a6 call 0x110943b0 */
  push32(0x110948abu); f_110943b0();
  /* 110948ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110948ae jmp 0x11094d8a */
  goto L_11094d8a;
L_110948b3:;
  /* 110948b3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110948b7 je 0x110948d6 */
  if (C.zf) goto L_110948d6;
  /* 110948b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110948bd jne 0x110948d6 */
  if (!C.zf) goto L_110948d6;
  /* 110948bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110948c2 push ecx */
  push32((uint32_t)(ECX));
  /* 110948c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110948c6 push edx */
  push32((uint32_t)(EDX));
  /* 110948c7 call 0x11094e40 */
  push32(0x110948ccu); f_11094e40();
  /* 110948cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110948cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110948d1 jmp 0x11094d8a */
  goto L_11094d8a;
L_110948d6:;
  /* 110948d6 mov eax, dword ptr [0x110bea84] */
  EAX = (r32((uint32_t)(0x110bea84)));
  /* 110948db and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 110948de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110948e0 je 0x11094912 */
  if (C.zf) goto L_11094912;
L_110948e2:;
  /* 110948e2 call 0x11095550 */
  push32(0x110948e7u); f_11095550();
  /* 110948e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110948e9 jne 0x1109490c */
  if (!C.zf) goto L_1109490c;
  /* 110948eb push 0x110bb850 */
  push32((uint32_t)(0x110bb850u));
  /* 110948f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110948f2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 110948f7 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 110948fc push 2 */
  push32((uint32_t)(0x2u));
  /* 110948fe call 0x11093470 */
  push32(0x11094903u); f_11093470();
  /* 11094903 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094906 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094909 jne 0x1109490c */
  if (!C.zf) goto L_1109490c;
  /* 1109490b int3  */
  x86_unimpl("int3 @ 0x1109490b");
L_1109490c:;
  /* 1109490c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109490e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11094910 jne 0x110948e2 */
  if (!C.zf) goto L_110948e2;
L_11094912:;
  /* 11094912 mov edx, dword ptr [0x110bea88] */
  EDX = (r32((uint32_t)(0x110bea88)));
  /* 11094918 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1109491b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109491e cmp eax, dword ptr [0x110bea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110bea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094924 jne 0x11094927 */
  if (!C.zf) goto L_11094927;
  /* 11094926 int3  */
  x86_unimpl("int3 @ 0x11094926");
L_11094927:;
  /* 11094927 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1109492a push ecx */
  push32((uint32_t)(ECX));
  /* 1109492b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109492e push edx */
  push32((uint32_t)(EDX));
  /* 1109492f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11094932 push eax */
  push32((uint32_t)(EAX));
  /* 11094933 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11094936 push ecx */
  push32((uint32_t)(ECX));
  /* 11094937 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109493a push edx */
  push32((uint32_t)(EDX));
  /* 1109493b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109493e push eax */
  push32((uint32_t)(EAX));
  /* 1109493f push 2 */
  push32((uint32_t)(0x2u));
  /* 11094941 call dword ptr [0x110bec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x110bec90))), 0x11094947u);
  /* 11094947 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109494a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109494c jne 0x110949ac */
  if (!C.zf) goto L_110949ac;
  /* 1109494e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094952 je 0x1109497f */
  if (C.zf) goto L_1109497f;
L_11094954:;
  /* 11094954 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11094957 push ecx */
  push32((uint32_t)(ECX));
  /* 11094958 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109495b push edx */
  push32((uint32_t)(EDX));
  /* 1109495c push 0x110bb9cc */
  push32((uint32_t)(0x110bb9ccu));
  /* 11094961 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094963 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094965 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094967 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094969 call 0x11093470 */
  push32(0x1109496eu); f_11093470();
  /* 1109496e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094971 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094974 jne 0x11094977 */
  if (!C.zf) goto L_11094977;
  /* 11094976 int3  */
  x86_unimpl("int3 @ 0x11094976");
L_11094977:;
  /* 11094977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11094979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109497b jne 0x11094954 */
  if (!C.zf) goto L_11094954;
  /* 1109497d jmp 0x110949a5 */
  goto L_110949a5;
L_1109497f:;
  /* 1109497f push 0x110bb9a8 */
  push32((uint32_t)(0x110bb9a8u));
  /* 11094984 push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 11094989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109498b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109498d push 0 */
  push32((uint32_t)(0x0u));
  /* 1109498f push 0 */
  push32((uint32_t)(0x0u));
  /* 11094991 call 0x11093470 */
  push32(0x11094996u); f_11093470();
  /* 11094996 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094999 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109499c jne 0x1109499f */
  if (!C.zf) goto L_1109499f;
  /* 1109499e int3  */
  x86_unimpl("int3 @ 0x1109499e");
L_1109499f:;
  /* 1109499f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110949a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110949a3 jne 0x1109497f */
  if (!C.zf) goto L_1109497f;
L_110949a5:;
  /* 110949a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110949a7 jmp 0x11094d8a */
  goto L_11094d8a;
L_110949ac:;
  /* 110949ac cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110949b0 jbe 0x110949de */
  if ((C.cf||C.zf)) goto L_110949de;
L_110949b2:;
  /* 110949b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110949b5 push edx */
  push32((uint32_t)(EDX));
  /* 110949b6 push 0x110bb978 */
  push32((uint32_t)(0x110bb978u));
  /* 110949bb push 0 */
  push32((uint32_t)(0x0u));
  /* 110949bd push 0 */
  push32((uint32_t)(0x0u));
  /* 110949bf push 0 */
  push32((uint32_t)(0x0u));
  /* 110949c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 110949c3 call 0x11093470 */
  push32(0x110949c8u); f_11093470();
  /* 110949c8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110949cb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110949ce jne 0x110949d1 */
  if (!C.zf) goto L_110949d1;
  /* 110949d0 int3  */
  x86_unimpl("int3 @ 0x110949d0");
L_110949d1:;
  /* 110949d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110949d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110949d5 jne 0x110949b2 */
  if (!C.zf) goto L_110949b2;
  /* 110949d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110949d9 jmp 0x11094d8a */
  goto L_11094d8a;
L_110949de:;
  /* 110949de cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110949e2 je 0x11094a26 */
  if (C.zf) goto L_11094a26;
  /* 110949e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110949e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110949ed cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110949f0 je 0x11094a26 */
  if (C.zf) goto L_11094a26;
  /* 110949f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110949f5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 110949fb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110949fe je 0x11094a26 */
  if (C.zf) goto L_11094a26;
L_11094a00:;
  /* 11094a00 push 0x110bb78c */
  push32((uint32_t)(0x110bb78cu));
  /* 11094a05 push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 11094a0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11094a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11094a0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11094a10 push 1 */
  push32((uint32_t)(0x1u));
  /* 11094a12 call 0x11093470 */
  push32(0x11094a17u); f_11093470();
  /* 11094a17 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094a1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094a1d jne 0x11094a20 */
  if (!C.zf) goto L_11094a20;
  /* 11094a1f int3  */
  x86_unimpl("int3 @ 0x11094a1f");
L_11094a20:;
  /* 11094a20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11094a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11094a24 jne 0x11094a00 */
  if (!C.zf) goto L_11094a00;
L_11094a26:;
  /* 11094a26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094a29 push ecx */
  push32((uint32_t)(ECX));
  /* 11094a2a call 0x110959b0 */
  push32(0x11094a2fu); f_110959b0();
  /* 11094a2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094a32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11094a34 jne 0x11094a57 */
  if (!C.zf) goto L_11094a57;
  /* 11094a36 push 0x110bb954 */
  push32((uint32_t)(0x110bb954u));
  /* 11094a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11094a3d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11094a42 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 11094a47 push 2 */
  push32((uint32_t)(0x2u));
  /* 11094a49 call 0x11093470 */
  push32(0x11094a4eu); f_11093470();
  /* 11094a4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094a51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094a54 jne 0x11094a57 */
  if (!C.zf) goto L_11094a57;
  /* 11094a56 int3  */
  x86_unimpl("int3 @ 0x11094a56");
L_11094a57:;
  /* 11094a57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11094a59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11094a5b jne 0x11094a26 */
  if (!C.zf) goto L_11094a26;
  /* 11094a5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094a60 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11094a63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11094a66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11094a69 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094a6d jne 0x11094a76 */
  if (!C.zf) goto L_11094a76;
  /* 11094a6f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11094a76:;
  /* 11094a76 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094a7a je 0x11094aba */
  if (C.zf) goto L_11094aba;
L_11094a7c:;
  /* 11094a7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11094a7f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094a86 jne 0x11094a91 */
  if (!C.zf) goto L_11094a91;
  /* 11094a88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11094a8b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094a8f je 0x11094ab2 */
  if (C.zf) goto L_11094ab2;
L_11094a91:;
  /* 11094a91 push 0x110bb90c */
  push32((uint32_t)(0x110bb90cu));
  /* 11094a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094a98 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11094a9d push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 11094aa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11094aa4 call 0x11093470 */
  push32(0x11094aa9u); f_11093470();
  /* 11094aa9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094aac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094aaf jne 0x11094ab2 */
  if (!C.zf) goto L_11094ab2;
  /* 11094ab1 int3  */
  x86_unimpl("int3 @ 0x11094ab1");
L_11094ab2:;
  /* 11094ab2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11094ab4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11094ab6 jne 0x11094a7c */
  if (!C.zf) goto L_11094a7c;
  /* 11094ab8 jmp 0x11094b1e */
  goto L_11094b1e;
L_11094aba:;
  /* 11094aba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11094abd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11094ac0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11094ac5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094ac8 jne 0x11094adf */
  if (!C.zf) goto L_11094adf;
  /* 11094aca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11094acd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11094ad3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094ad6 jne 0x11094adf */
  if (!C.zf) goto L_11094adf;
  /* 11094ad8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11094adf:;
  /* 11094adf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11094ae2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11094ae5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11094aea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11094aed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11094af3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094af5 je 0x11094b18 */
  if (C.zf) goto L_11094b18;
  /* 11094af7 push 0x110bb8d0 */
  push32((uint32_t)(0x110bb8d0u));
  /* 11094afc push 0 */
  push32((uint32_t)(0x0u));
  /* 11094afe push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11094b03 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 11094b08 push 2 */
  push32((uint32_t)(0x2u));
  /* 11094b0a call 0x11093470 */
  push32(0x11094b0fu); f_11093470();
  /* 11094b0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094b12 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094b15 jne 0x11094b18 */
  if (!C.zf) goto L_11094b18;
  /* 11094b17 int3  */
  x86_unimpl("int3 @ 0x11094b17");
L_11094b18:;
  /* 11094b18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11094b1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11094b1c jne 0x11094adf */
  if (!C.zf) goto L_11094adf;
L_11094b1e:;
  /* 11094b1e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094b22 je 0x11094b49 */
  if (C.zf) goto L_11094b49;
  /* 11094b24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11094b27 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094b2a push eax */
  push32((uint32_t)(EAX));
  /* 11094b2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11094b2e push ecx */
  push32((uint32_t)(ECX));
  /* 11094b2f call 0x11098330 */
  push32(0x11094b34u); f_11098330();
  /* 11094b34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094b37 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11094b3a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094b3e jne 0x11094b47 */
  if (!C.zf) goto L_11094b47;
  /* 11094b40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11094b42 jmp 0x11094d8a */
  goto L_11094d8a;
L_11094b47:;
  /* 11094b47 jmp 0x11094b6c */
  goto L_11094b6c;
L_11094b49:;
  /* 11094b49 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11094b4c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094b4f push edx */
  push32((uint32_t)(EDX));
  /* 11094b50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11094b53 push eax */
  push32((uint32_t)(EAX));
  /* 11094b54 call 0x11098280 */
  push32(0x11094b59u); f_11098280();
  /* 11094b59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094b5c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11094b5f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094b63 jne 0x11094b6c */
  if (!C.zf) goto L_11094b6c;
  /* 11094b65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11094b67 jmp 0x11094d8a */
  goto L_11094d8a;
L_11094b6c:;
  /* 11094b6c mov ecx, dword ptr [0x110bea88] */
  ECX = (r32((uint32_t)(0x110bea88)));
  /* 11094b72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094b75 mov dword ptr [0x110bea88], ecx */
  w32((uint32_t)(0x110bea88), (ECX));
  /* 11094b7b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094b7f jne 0x11094bd7 */
  if (!C.zf) goto L_11094bd7;
  /* 11094b81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094b84 mov eax, dword ptr [0x110c0648] */
  EAX = (r32((uint32_t)(0x110c0648)));
  /* 11094b89 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11094b8c mov dword ptr [0x110c0648], eax */
  w32((uint32_t)(0x110c0648), (EAX));
  /* 11094b91 mov ecx, dword ptr [0x110c0648] */
  ECX = (r32((uint32_t)(0x110c0648)));
  /* 11094b97 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094b9a mov dword ptr [0x110c0648], ecx */
  w32((uint32_t)(0x110c0648), (ECX));
  /* 11094ba0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094ba3 mov eax, dword ptr [0x110c0650] */
  EAX = (r32((uint32_t)(0x110c0650)));
  /* 11094ba8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11094bab mov dword ptr [0x110c0650], eax */
  w32((uint32_t)(0x110c0650), (EAX));
  /* 11094bb0 mov ecx, dword ptr [0x110c0650] */
  ECX = (r32((uint32_t)(0x110c0650)));
  /* 11094bb6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094bb9 mov dword ptr [0x110c0650], ecx */
  w32((uint32_t)(0x110c0650), (ECX));
  /* 11094bbf mov edx, dword ptr [0x110c0650] */
  EDX = (r32((uint32_t)(0x110c0650)));
  /* 11094bc5 cmp edx, dword ptr [0x110c0654] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x110c0654))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094bcb jbe 0x11094bd7 */
  if ((C.cf||C.zf)) goto L_11094bd7;
  /* 11094bcd mov eax, dword ptr [0x110c0650] */
  EAX = (r32((uint32_t)(0x110c0650)));
  /* 11094bd2 mov dword ptr [0x110c0654], eax */
  w32((uint32_t)(0x110c0654), (EAX));
L_11094bd7:;
  /* 11094bd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094bda add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094bdd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11094be0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094be3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11094be6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094be9 jbe 0x11094c0f */
  if ((C.cf||C.zf)) goto L_11094c0f;
  /* 11094beb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094bee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11094bf1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11094bf4 push edx */
  push32((uint32_t)(EDX));
  /* 11094bf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11094bf7 mov al, byte ptr [0x110bea92] */
  AL = (r8((uint32_t)(0x110bea92)));
  /* 11094bfc push eax */
  push32((uint32_t)(EAX));
  /* 11094bfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094c00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094c03 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094c06 push edx */
  push32((uint32_t)(EDX));
  /* 11094c07 call 0x11098120 */
  push32(0x11094c0cu); f_11098120();
  /* 11094c0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11094c0f:;
  /* 11094c0f push 4 */
  push32((uint32_t)(0x4u));
  /* 11094c11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11094c13 mov al, byte ptr [0x110bea90] */
  AL = (r8((uint32_t)(0x110bea90)));
  /* 11094c18 push eax */
  push32((uint32_t)(EAX));
  /* 11094c19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094c1c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094c1f push ecx */
  push32((uint32_t)(ECX));
  /* 11094c20 call 0x11098120 */
  push32(0x11094c25u); f_11098120();
  /* 11094c25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094c28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094c2c jne 0x11094c49 */
  if (!C.zf) goto L_11094c49;
  /* 11094c2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094c31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11094c34 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11094c37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094c3a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11094c3d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11094c40 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094c43 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11094c46 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11094c49:;
  /* 11094c49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094c4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11094c4f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11094c52:;
  /* 11094c52 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094c56 jne 0x11094c87 */
  if (!C.zf) goto L_11094c87;
  /* 11094c58 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094c5c jne 0x11094c66 */
  if (!C.zf) goto L_11094c66;
  /* 11094c5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094c61 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094c64 je 0x11094c87 */
  if (C.zf) goto L_11094c87;
L_11094c66:;
  /* 11094c66 push 0x110bb89c */
  push32((uint32_t)(0x110bb89cu));
  /* 11094c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11094c6d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11094c72 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 11094c77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11094c79 call 0x11093470 */
  push32(0x11094c7eu); f_11093470();
  /* 11094c7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094c81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094c84 jne 0x11094c87 */
  if (!C.zf) goto L_11094c87;
  /* 11094c86 int3  */
  x86_unimpl("int3 @ 0x11094c86");
L_11094c87:;
  /* 11094c87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11094c89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11094c8b jne 0x11094c52 */
  if (!C.zf) goto L_11094c52;
  /* 11094c8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094c90 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094c93 je 0x11094c9b */
  if (C.zf) goto L_11094c9b;
  /* 11094c95 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094c99 je 0x11094ca3 */
  if (C.zf) goto L_11094ca3;
L_11094c9b:;
  /* 11094c9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094c9e jmp 0x11094d8a */
  goto L_11094d8a;
L_11094ca3:;
  /* 11094ca3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094ca6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094ca9 je 0x11094cbb */
  if (C.zf) goto L_11094cbb;
  /* 11094cab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094cae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11094cb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094cb3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11094cb6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11094cb9 jmp 0x11094cf7 */
  goto L_11094cf7;
L_11094cbb:;
  /* 11094cbb mov eax, dword ptr [0x110c0644] */
  EAX = (r32((uint32_t)(0x110c0644)));
  /* 11094cc0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094cc3 je 0x11094ce6 */
  if (C.zf) goto L_11094ce6;
  /* 11094cc5 push 0x110bb880 */
  push32((uint32_t)(0x110bb880u));
  /* 11094cca push 0 */
  push32((uint32_t)(0x0u));
  /* 11094ccc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11094cd1 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 11094cd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11094cd8 call 0x11093470 */
  push32(0x11094cddu); f_11093470();
  /* 11094cdd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094ce0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094ce3 jne 0x11094ce6 */
  if (!C.zf) goto L_11094ce6;
  /* 11094ce5 int3  */
  x86_unimpl("int3 @ 0x11094ce5");
L_11094ce6:;
  /* 11094ce6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11094ce8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11094cea jne 0x11094cbb */
  if (!C.zf) goto L_11094cbb;
  /* 11094cec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094cef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11094cf2 mov dword ptr [0x110c0644], eax */
  w32((uint32_t)(0x110c0644), (EAX));
L_11094cf7:;
  /* 11094cf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094cfa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094cfe je 0x11094d0f */
  if (C.zf) goto L_11094d0f;
  /* 11094d00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094d03 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11094d06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094d09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11094d0b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11094d0d jmp 0x11094d4a */
  goto L_11094d4a;
L_11094d0f:;
  /* 11094d0f mov eax, dword ptr [0x110c064c] */
  EAX = (r32((uint32_t)(0x110c064c)));
  /* 11094d14 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094d17 je 0x11094d3a */
  if (C.zf) goto L_11094d3a;
  /* 11094d19 push 0x110bb864 */
  push32((uint32_t)(0x110bb864u));
  /* 11094d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11094d20 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11094d25 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 11094d2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11094d2c call 0x11093470 */
  push32(0x11094d31u); f_11093470();
  /* 11094d31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094d34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094d37 jne 0x11094d3a */
  if (!C.zf) goto L_11094d3a;
  /* 11094d39 int3  */
  x86_unimpl("int3 @ 0x11094d39");
L_11094d3a:;
  /* 11094d3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11094d3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11094d3e jne 0x11094d0f */
  if (!C.zf) goto L_11094d0f;
  /* 11094d40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094d43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11094d45 mov dword ptr [0x110c064c], eax */
  w32((uint32_t)(0x110c064c), (EAX));
L_11094d4a:;
  /* 11094d4a cmp dword ptr [0x110c064c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c064c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094d51 je 0x11094d61 */
  if (C.zf) goto L_11094d61;
  /* 11094d53 mov ecx, dword ptr [0x110c064c] */
  ECX = (r32((uint32_t)(0x110c064c)));
  /* 11094d59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094d5c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11094d5f jmp 0x11094d69 */
  goto L_11094d69;
L_11094d61:;
  /* 11094d61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094d64 mov dword ptr [0x110c0644], eax */
  w32((uint32_t)(0x110c0644), (EAX));
L_11094d69:;
  /* 11094d69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094d6c mov edx, dword ptr [0x110c064c] */
  EDX = (r32((uint32_t)(0x110c064c)));
  /* 11094d72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11094d74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094d77 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11094d7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11094d81 mov dword ptr [0x110c064c], ecx */
  w32((uint32_t)(0x110c064c), (ECX));
  /* 11094d87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11094d8a:;
  /* 11094d8a pop edi */
  EDI = (pop32());
  /* 11094d8b pop esi */
  ESI = (pop32());
  /* 11094d8c pop ebx */
  EBX = (pop32());
  /* 11094d8d mov esp, ebp */
  ESP = (EBP);
  /* 11094d8f pop ebp */
  EBP = (pop32());
  /* 11094d90 ret  */
  ESPCHK(0x11094880u, _esp0);
  ESP += 4; return;
}

/* FUN_10004da0 @ 0x11094da0 (27 bytes, 13 insns) */
void f_11094da0(void) {
  FTRACE(0x11094da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11094da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11094da1 mov ebp, esp */
  EBP = (ESP);
  /* 11094da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094da7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11094da9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11094dac push eax */
  push32((uint32_t)(EAX));
  /* 11094dad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094db0 push ecx */
  push32((uint32_t)(ECX));
  /* 11094db1 call 0x11094dc0 */
  push32(0x11094db6u); f_11094dc0();
  /* 11094db6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094db9 pop ebp */
  EBP = (pop32());
  /* 11094dba ret  */
  ESPCHK(0x11094da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dc0 @ 0x11094dc0 (64 bytes, 27 insns) */
void f_11094dc0(void) {
  FTRACE(0x11094dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11094dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11094dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11094dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11094dc4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11094dc6 call 0x11097db0 */
  push32(0x11094dcbu); f_11097db0();
  /* 11094dcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094dce push 0 */
  push32((uint32_t)(0x0u));
  /* 11094dd0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11094dd3 push eax */
  push32((uint32_t)(EAX));
  /* 11094dd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11094dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11094dd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11094ddb push edx */
  push32((uint32_t)(EDX));
  /* 11094ddc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11094ddf push eax */
  push32((uint32_t)(EAX));
  /* 11094de0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094de3 push ecx */
  push32((uint32_t)(ECX));
  /* 11094de4 call 0x11094880 */
  push32(0x11094de9u); f_11094880();
  /* 11094de9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094dec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11094def push 9 */
  push32((uint32_t)(0x9u));
  /* 11094df1 call 0x11097e50 */
  push32(0x11094df6u); f_11097e50();
  /* 11094df6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094df9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094dfc mov esp, ebp */
  ESP = (EBP);
  /* 11094dfe pop ebp */
  EBP = (pop32());
  /* 11094dff ret  */
  ESPCHK(0x11094dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e00 @ 0x11094e00 (19 bytes, 9 insns) */
void f_11094e00(void) {
  FTRACE(0x11094e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11094e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11094e01 mov ebp, esp */
  EBP = (ESP);
  /* 11094e03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11094e05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094e08 push eax */
  push32((uint32_t)(EAX));
  /* 11094e09 call 0x11094e40 */
  push32(0x11094e0eu); f_11094e40();
  /* 11094e0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094e11 pop ebp */
  EBP = (pop32());
  /* 11094e12 ret  */
  ESPCHK(0x11094e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e20 @ 0x11094e20 (19 bytes, 9 insns) */
void f_11094e20(void) {
  FTRACE(0x11094e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11094e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11094e21 mov ebp, esp */
  EBP = (ESP);
  /* 11094e23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11094e25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094e28 push eax */
  push32((uint32_t)(EAX));
  /* 11094e29 call 0x11094e70 */
  push32(0x11094e2eu); f_11094e70();
  /* 11094e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094e31 pop ebp */
  EBP = (pop32());
  /* 11094e32 ret  */
  ESPCHK(0x11094e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e40 @ 0x11094e40 (41 bytes, 16 insns) */
void f_11094e40(void) {
  FTRACE(0x11094e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11094e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11094e41 mov ebp, esp */
  EBP = (ESP);
  /* 11094e43 push 9 */
  push32((uint32_t)(0x9u));
  /* 11094e45 call 0x11097db0 */
  push32(0x11094e4au); f_11097db0();
  /* 11094e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094e4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11094e50 push eax */
  push32((uint32_t)(EAX));
  /* 11094e51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094e54 push ecx */
  push32((uint32_t)(ECX));
  /* 11094e55 call 0x11094e70 */
  push32(0x11094e5au); f_11094e70();
  /* 11094e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094e5d push 9 */
  push32((uint32_t)(0x9u));
  /* 11094e5f call 0x11097e50 */
  push32(0x11094e64u); f_11097e50();
  /* 11094e64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094e67 pop ebp */
  EBP = (pop32());
  /* 11094e68 ret  */
  ESPCHK(0x11094e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e70 @ 0x11094e70 (1004 bytes, 342 insns) */
void f_11094e70(void) {
  FTRACE(0x11094e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11094e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11094e71 mov ebp, esp */
  EBP = (ESP);
  /* 11094e73 push ecx */
  push32((uint32_t)(ECX));
  /* 11094e74 push ebx */
  push32((uint32_t)(EBX));
  /* 11094e75 push esi */
  push32((uint32_t)(ESI));
  /* 11094e76 push edi */
  push32((uint32_t)(EDI));
  /* 11094e77 mov eax, dword ptr [0x110bea84] */
  EAX = (r32((uint32_t)(0x110bea84)));
  /* 11094e7c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11094e7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11094e81 je 0x11094eb3 */
  if (C.zf) goto L_11094eb3;
L_11094e83:;
  /* 11094e83 call 0x11095550 */
  push32(0x11094e88u); f_11095550();
  /* 11094e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11094e8a jne 0x11094ead */
  if (!C.zf) goto L_11094ead;
  /* 11094e8c push 0x110bb850 */
  push32((uint32_t)(0x110bb850u));
  /* 11094e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094e93 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11094e98 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 11094e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11094e9f call 0x11093470 */
  push32(0x11094ea4u); f_11093470();
  /* 11094ea4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094ea7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094eaa jne 0x11094ead */
  if (!C.zf) goto L_11094ead;
  /* 11094eac int3  */
  x86_unimpl("int3 @ 0x11094eac");
L_11094ead:;
  /* 11094ead xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11094eaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11094eb1 jne 0x11094e83 */
  if (!C.zf) goto L_11094e83;
L_11094eb3:;
  /* 11094eb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094eb7 jne 0x11094ebe */
  if (!C.zf) goto L_11094ebe;
  /* 11094eb9 jmp 0x11095255 */
  goto L_11095255;
L_11094ebe:;
  /* 11094ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 11094ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094ec4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11094ec7 push edx */
  push32((uint32_t)(EDX));
  /* 11094ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094eca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094ecd push eax */
  push32((uint32_t)(EAX));
  /* 11094ece push 3 */
  push32((uint32_t)(0x3u));
  /* 11094ed0 call dword ptr [0x110bec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x110bec90))), 0x11094ed6u);
  /* 11094ed6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11094edb jne 0x11094f08 */
  if (!C.zf) goto L_11094f08;
L_11094edd:;
  /* 11094edd push 0x110bbb14 */
  push32((uint32_t)(0x110bbb14u));
  /* 11094ee2 push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 11094ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094ee9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 11094eed push 0 */
  push32((uint32_t)(0x0u));
  /* 11094eef call 0x11093470 */
  push32(0x11094ef4u); f_11093470();
  /* 11094ef4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094ef7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094efa jne 0x11094efd */
  if (!C.zf) goto L_11094efd;
  /* 11094efc int3  */
  x86_unimpl("int3 @ 0x11094efc");
L_11094efd:;
  /* 11094efd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11094eff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11094f01 jne 0x11094edd */
  if (!C.zf) goto L_11094edd;
  /* 11094f03 jmp 0x11095255 */
  goto L_11095255;
L_11094f08:;
  /* 11094f08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094f0b push edx */
  push32((uint32_t)(EDX));
  /* 11094f0c call 0x110959b0 */
  push32(0x11094f11u); f_110959b0();
  /* 11094f11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094f14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11094f16 jne 0x11094f39 */
  if (!C.zf) goto L_11094f39;
  /* 11094f18 push 0x110bb954 */
  push32((uint32_t)(0x110bb954u));
  /* 11094f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11094f1f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11094f24 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 11094f29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11094f2b call 0x11093470 */
  push32(0x11094f30u); f_11093470();
  /* 11094f30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094f33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094f36 jne 0x11094f39 */
  if (!C.zf) goto L_11094f39;
  /* 11094f38 int3  */
  x86_unimpl("int3 @ 0x11094f38");
L_11094f39:;
  /* 11094f39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11094f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11094f3d jne 0x11094f08 */
  if (!C.zf) goto L_11094f08;
  /* 11094f3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11094f42 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11094f45 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11094f48:;
  /* 11094f48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094f4b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11094f4e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11094f53 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094f56 je 0x11094f9b */
  if (C.zf) goto L_11094f9b;
  /* 11094f58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094f5b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094f5f je 0x11094f9b */
  if (C.zf) goto L_11094f9b;
  /* 11094f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094f64 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11094f67 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11094f6c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094f6f je 0x11094f9b */
  if (C.zf) goto L_11094f9b;
  /* 11094f71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094f74 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094f78 je 0x11094f9b */
  if (C.zf) goto L_11094f9b;
  /* 11094f7a push 0x110bbaec */
  push32((uint32_t)(0x110bbaecu));
  /* 11094f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11094f81 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11094f86 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 11094f8b push 2 */
  push32((uint32_t)(0x2u));
  /* 11094f8d call 0x11093470 */
  push32(0x11094f92u); f_11093470();
  /* 11094f92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094f95 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11094f98 jne 0x11094f9b */
  if (!C.zf) goto L_11094f9b;
  /* 11094f9a int3  */
  x86_unimpl("int3 @ 0x11094f9a");
L_11094f9b:;
  /* 11094f9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11094f9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11094f9f jne 0x11094f48 */
  if (!C.zf) goto L_11094f48;
  /* 11094fa1 mov eax, dword ptr [0x110bea84] */
  EAX = (r32((uint32_t)(0x110bea84)));
  /* 11094fa6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11094fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11094fab jne 0x11095076 */
  if (!C.zf) goto L_11095076;
  /* 11094fb1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11094fb3 mov cl, byte ptr [0x110bea90] */
  CL = (r8((uint32_t)(0x110bea90)));
  /* 11094fb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11094fba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094fbd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094fc0 push edx */
  push32((uint32_t)(EDX));
  /* 11094fc1 call 0x110954c0 */
  push32(0x11094fc6u); f_110954c0();
  /* 11094fc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11094fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11094fcb jne 0x11095010 */
  if (!C.zf) goto L_11095010;
L_11094fcd:;
  /* 11094fcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094fd0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11094fd3 push eax */
  push32((uint32_t)(EAX));
  /* 11094fd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094fd7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11094fda push edx */
  push32((uint32_t)(EDX));
  /* 11094fdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11094fde mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11094fe1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11094fe7 mov edx, dword ptr [ecx*4 + 0x110bea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110bea94)));
  /* 11094fee push edx */
  push32((uint32_t)(EDX));
  /* 11094fef push 0x110bbac0 */
  push32((uint32_t)(0x110bbac0u));
  /* 11094ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11094ffa push 1 */
  push32((uint32_t)(0x1u));
  /* 11094ffc call 0x11093470 */
  push32(0x11095001u); f_11093470();
  /* 11095001 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095004 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095007 jne 0x1109500a */
  if (!C.zf) goto L_1109500a;
  /* 11095009 int3  */
  x86_unimpl("int3 @ 0x11095009");
L_1109500a:;
  /* 1109500a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109500c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109500e jne 0x11094fcd */
  if (!C.zf) goto L_11094fcd;
L_11095010:;
  /* 11095010 push 4 */
  push32((uint32_t)(0x4u));
  /* 11095012 mov cl, byte ptr [0x110bea90] */
  CL = (r8((uint32_t)(0x110bea90)));
  /* 11095018 push ecx */
  push32((uint32_t)(ECX));
  /* 11095019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109501c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1109501f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095022 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11095026 push edx */
  push32((uint32_t)(EDX));
  /* 11095027 call 0x110954c0 */
  push32(0x1109502cu); f_110954c0();
  /* 1109502c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109502f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095031 jne 0x11095076 */
  if (!C.zf) goto L_11095076;
L_11095033:;
  /* 11095033 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095036 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11095039 push eax */
  push32((uint32_t)(EAX));
  /* 1109503a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109503d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11095040 push edx */
  push32((uint32_t)(EDX));
  /* 11095041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095044 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11095047 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1109504d mov edx, dword ptr [ecx*4 + 0x110bea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110bea94)));
  /* 11095054 push edx */
  push32((uint32_t)(EDX));
  /* 11095055 push 0x110bba94 */
  push32((uint32_t)(0x110bba94u));
  /* 1109505a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109505c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109505e push 0 */
  push32((uint32_t)(0x0u));
  /* 11095060 push 1 */
  push32((uint32_t)(0x1u));
  /* 11095062 call 0x11093470 */
  push32(0x11095067u); f_11093470();
  /* 11095067 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109506a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109506d jne 0x11095070 */
  if (!C.zf) goto L_11095070;
  /* 1109506f int3  */
  x86_unimpl("int3 @ 0x1109506f");
L_11095070:;
  /* 11095070 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11095072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095074 jne 0x11095033 */
  if (!C.zf) goto L_11095033;
L_11095076:;
  /* 11095076 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095079 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109507d jne 0x110950eb */
  if (!C.zf) goto L_110950eb;
L_1109507f:;
  /* 1109507f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095082 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095089 jne 0x11095094 */
  if (!C.zf) goto L_11095094;
  /* 1109508b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109508e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095092 je 0x110950b5 */
  if (C.zf) goto L_110950b5;
L_11095094:;
  /* 11095094 push 0x110bba54 */
  push32((uint32_t)(0x110bba54u));
  /* 11095099 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109509b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 110950a0 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 110950a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110950a7 call 0x11093470 */
  push32(0x110950acu); f_11093470();
  /* 110950ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110950af cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110950b2 jne 0x110950b5 */
  if (!C.zf) goto L_110950b5;
  /* 110950b4 int3  */
  x86_unimpl("int3 @ 0x110950b4");
L_110950b5:;
  /* 110950b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110950b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110950b9 jne 0x1109507f */
  if (!C.zf) goto L_1109507f;
  /* 110950bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110950be mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 110950c1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110950c4 push eax */
  push32((uint32_t)(EAX));
  /* 110950c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110950c7 mov cl, byte ptr [0x110bea91] */
  CL = (r8((uint32_t)(0x110bea91)));
  /* 110950cd push ecx */
  push32((uint32_t)(ECX));
  /* 110950ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110950d1 push edx */
  push32((uint32_t)(EDX));
  /* 110950d2 call 0x11098120 */
  push32(0x110950d7u); f_11098120();
  /* 110950d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110950da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110950dd push eax */
  push32((uint32_t)(EAX));
  /* 110950de call 0x11098520 */
  push32(0x110950e3u); f_11098520();
  /* 110950e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110950e6 jmp 0x11095255 */
  goto L_11095255;
L_110950eb:;
  /* 110950eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110950ee cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110950f2 jne 0x11095101 */
  if (!C.zf) goto L_11095101;
  /* 110950f4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110950f8 jne 0x11095101 */
  if (!C.zf) goto L_11095101;
  /* 110950fa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11095101:;
  /* 11095101 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095104 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11095107 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109510a je 0x1109512d */
  if (C.zf) goto L_1109512d;
  /* 1109510c push 0x110bba34 */
  push32((uint32_t)(0x110bba34u));
  /* 11095111 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095113 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11095118 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 1109511d push 2 */
  push32((uint32_t)(0x2u));
  /* 1109511f call 0x11093470 */
  push32(0x11095124u); f_11093470();
  /* 11095124 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095127 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109512a jne 0x1109512d */
  if (!C.zf) goto L_1109512d;
  /* 1109512c int3  */
  x86_unimpl("int3 @ 0x1109512c");
L_1109512d:;
  /* 1109512d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109512f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11095131 jne 0x11095101 */
  if (!C.zf) goto L_11095101;
  /* 11095133 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095136 mov eax, dword ptr [0x110c0650] */
  EAX = (r32((uint32_t)(0x110c0650)));
  /* 1109513b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109513e mov dword ptr [0x110c0650], eax */
  w32((uint32_t)(0x110c0650), (EAX));
  /* 11095143 mov ecx, dword ptr [0x110bea84] */
  ECX = (r32((uint32_t)(0x110bea84)));
  /* 11095149 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1109514c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109514e jne 0x1109522c */
  if (!C.zf) goto L_1109522c;
  /* 11095154 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095157 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109515a je 0x1109516c */
  if (C.zf) goto L_1109516c;
  /* 1109515c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109515f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11095161 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095164 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11095167 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1109516a jmp 0x110951aa */
  goto L_110951aa;
L_1109516c:;
  /* 1109516c mov ecx, dword ptr [0x110c0644] */
  ECX = (r32((uint32_t)(0x110c0644)));
  /* 11095172 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095175 je 0x11095198 */
  if (C.zf) goto L_11095198;
  /* 11095177 push 0x110bba1c */
  push32((uint32_t)(0x110bba1cu));
  /* 1109517c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109517e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11095183 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 11095188 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109518a call 0x11093470 */
  push32(0x1109518fu); f_11093470();
  /* 1109518f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095192 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095195 jne 0x11095198 */
  if (!C.zf) goto L_11095198;
  /* 11095197 int3  */
  x86_unimpl("int3 @ 0x11095197");
L_11095198:;
  /* 11095198 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109519a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109519c jne 0x1109516c */
  if (!C.zf) goto L_1109516c;
  /* 1109519e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110951a1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 110951a4 mov dword ptr [0x110c0644], ecx */
  w32((uint32_t)(0x110c0644), (ECX));
L_110951aa:;
  /* 110951aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110951ad cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110951b1 je 0x110951c2 */
  if (C.zf) goto L_110951c2;
  /* 110951b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110951b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 110951b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110951bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110951be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110951c0 jmp 0x110951ff */
  goto L_110951ff;
L_110951c2:;
  /* 110951c2 mov ecx, dword ptr [0x110c064c] */
  ECX = (r32((uint32_t)(0x110c064c)));
  /* 110951c8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110951cb je 0x110951ee */
  if (C.zf) goto L_110951ee;
  /* 110951cd push 0x110bba04 */
  push32((uint32_t)(0x110bba04u));
  /* 110951d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110951d4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 110951d9 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 110951de push 2 */
  push32((uint32_t)(0x2u));
  /* 110951e0 call 0x11093470 */
  push32(0x110951e5u); f_11093470();
  /* 110951e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110951e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110951eb jne 0x110951ee */
  if (!C.zf) goto L_110951ee;
  /* 110951ed int3  */
  x86_unimpl("int3 @ 0x110951ed");
L_110951ee:;
  /* 110951ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110951f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110951f2 jne 0x110951c2 */
  if (!C.zf) goto L_110951c2;
  /* 110951f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110951f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110951f9 mov dword ptr [0x110c064c], ecx */
  w32((uint32_t)(0x110c064c), (ECX));
L_110951ff:;
  /* 110951ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095202 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11095205 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11095208 push eax */
  push32((uint32_t)(EAX));
  /* 11095209 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109520b mov cl, byte ptr [0x110bea91] */
  CL = (r8((uint32_t)(0x110bea91)));
  /* 11095211 push ecx */
  push32((uint32_t)(ECX));
  /* 11095212 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095215 push edx */
  push32((uint32_t)(EDX));
  /* 11095216 call 0x11098120 */
  push32(0x1109521bu); f_11098120();
  /* 1109521b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109521e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095221 push eax */
  push32((uint32_t)(EAX));
  /* 11095222 call 0x11098520 */
  push32(0x11095227u); f_11098520();
  /* 11095227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109522a jmp 0x11095255 */
  goto L_11095255;
L_1109522c:;
  /* 1109522c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109522f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11095236 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095239 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1109523c push eax */
  push32((uint32_t)(EAX));
  /* 1109523d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109523f mov cl, byte ptr [0x110bea91] */
  CL = (r8((uint32_t)(0x110bea91)));
  /* 11095245 push ecx */
  push32((uint32_t)(ECX));
  /* 11095246 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095249 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109524c push edx */
  push32((uint32_t)(EDX));
  /* 1109524d call 0x11098120 */
  push32(0x11095252u); f_11098120();
  /* 11095252 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11095255:;
  /* 11095255 pop edi */
  EDI = (pop32());
  /* 11095256 pop esi */
  ESI = (pop32());
  /* 11095257 pop ebx */
  EBX = (pop32());
  /* 11095258 mov esp, ebp */
  ESP = (EBP);
  /* 1109525a pop ebp */
  EBP = (pop32());
  /* 1109525b ret  */
  ESPCHK(0x11094e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005260 @ 0x11095260 (19 bytes, 9 insns) */
void f_11095260(void) {
  FTRACE(0x11095260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11095260 push ebp */
  push32((uint32_t)(EBP));
  /* 11095261 mov ebp, esp */
  EBP = (ESP);
  /* 11095263 push 1 */
  push32((uint32_t)(0x1u));
  /* 11095265 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095268 push eax */
  push32((uint32_t)(EAX));
  /* 11095269 call 0x11095280 */
  push32(0x1109526eu); f_11095280();
  /* 1109526e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095271 pop ebp */
  EBP = (pop32());
  /* 11095272 ret  */
  ESPCHK(0x11095260u, _esp0);
  ESP += 4; return;
}

/* FUN_10005280 @ 0x11095280 (342 bytes, 119 insns) */
void f_11095280(void) {
  FTRACE(0x11095280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11095280 push ebp */
  push32((uint32_t)(EBP));
  /* 11095281 mov ebp, esp */
  EBP = (ESP);
  /* 11095283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11095286 push ebx */
  push32((uint32_t)(EBX));
  /* 11095287 push esi */
  push32((uint32_t)(ESI));
  /* 11095288 push edi */
  push32((uint32_t)(EDI));
  /* 11095289 mov eax, dword ptr [0x110bea84] */
  EAX = (r32((uint32_t)(0x110bea84)));
  /* 1109528e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11095291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095293 je 0x110952c5 */
  if (C.zf) goto L_110952c5;
L_11095295:;
  /* 11095295 call 0x11095550 */
  push32(0x1109529au); f_11095550();
  /* 1109529a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109529c jne 0x110952bf */
  if (!C.zf) goto L_110952bf;
  /* 1109529e push 0x110bb850 */
  push32((uint32_t)(0x110bb850u));
  /* 110952a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110952a5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 110952aa push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 110952af push 2 */
  push32((uint32_t)(0x2u));
  /* 110952b1 call 0x11093470 */
  push32(0x110952b6u); f_11093470();
  /* 110952b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110952b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110952bc jne 0x110952bf */
  if (!C.zf) goto L_110952bf;
  /* 110952be int3  */
  x86_unimpl("int3 @ 0x110952be");
L_110952bf:;
  /* 110952bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110952c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110952c3 jne 0x11095295 */
  if (!C.zf) goto L_11095295;
L_110952c5:;
  /* 110952c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 110952c7 call 0x11097db0 */
  push32(0x110952ccu); f_11097db0();
  /* 110952cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110952cf:;
  /* 110952cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110952d2 push edx */
  push32((uint32_t)(EDX));
  /* 110952d3 call 0x110959b0 */
  push32(0x110952d8u); f_110959b0();
  /* 110952d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110952db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110952dd jne 0x11095300 */
  if (!C.zf) goto L_11095300;
  /* 110952df push 0x110bb954 */
  push32((uint32_t)(0x110bb954u));
  /* 110952e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110952e6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 110952eb push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 110952f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 110952f2 call 0x11093470 */
  push32(0x110952f7u); f_11093470();
  /* 110952f7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110952fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110952fd jne 0x11095300 */
  if (!C.zf) goto L_11095300;
  /* 110952ff int3  */
  x86_unimpl("int3 @ 0x110952ff");
L_11095300:;
  /* 11095300 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11095302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095304 jne 0x110952cf */
  if (!C.zf) goto L_110952cf;
  /* 11095306 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095309 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109530c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1109530f:;
  /* 1109530f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095312 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11095315 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109531a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109531d je 0x11095362 */
  if (C.zf) goto L_11095362;
  /* 1109531f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095322 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095326 je 0x11095362 */
  if (C.zf) goto L_11095362;
  /* 11095328 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109532b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1109532e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11095333 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095336 je 0x11095362 */
  if (C.zf) goto L_11095362;
  /* 11095338 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109533b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109533f je 0x11095362 */
  if (C.zf) goto L_11095362;
  /* 11095341 push 0x110bbaec */
  push32((uint32_t)(0x110bbaecu));
  /* 11095346 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095348 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1109534d push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 11095352 push 2 */
  push32((uint32_t)(0x2u));
  /* 11095354 call 0x11093470 */
  push32(0x11095359u); f_11093470();
  /* 11095359 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109535c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109535f jne 0x11095362 */
  if (!C.zf) goto L_11095362;
  /* 11095361 int3  */
  x86_unimpl("int3 @ 0x11095361");
L_11095362:;
  /* 11095362 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11095364 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11095366 jne 0x1109530f */
  if (!C.zf) goto L_1109530f;
  /* 11095368 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109536b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109536f jne 0x1109537e */
  if (!C.zf) goto L_1109537e;
  /* 11095371 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095375 jne 0x1109537e */
  if (!C.zf) goto L_1109537e;
  /* 11095377 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1109537e:;
  /* 1109537e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095381 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095385 je 0x110953b9 */
  if (C.zf) goto L_110953b9;
L_11095387:;
  /* 11095387 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109538a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1109538d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095390 je 0x110953b3 */
  if (C.zf) goto L_110953b3;
  /* 11095392 push 0x110bba34 */
  push32((uint32_t)(0x110bba34u));
  /* 11095397 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095399 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1109539e push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 110953a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 110953a5 call 0x11093470 */
  push32(0x110953aau); f_11093470();
  /* 110953aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110953ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110953b0 jne 0x110953b3 */
  if (!C.zf) goto L_110953b3;
  /* 110953b2 int3  */
  x86_unimpl("int3 @ 0x110953b2");
L_110953b3:;
  /* 110953b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110953b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110953b7 jne 0x11095387 */
  if (!C.zf) goto L_11095387;
L_110953b9:;
  /* 110953b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110953bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 110953bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110953c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 110953c4 call 0x11097e50 */
  push32(0x110953c9u); f_11097e50();
  /* 110953c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110953cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110953cf pop edi */
  EDI = (pop32());
  /* 110953d0 pop esi */
  ESI = (pop32());
  /* 110953d1 pop ebx */
  EBX = (pop32());
  /* 110953d2 mov esp, ebp */
  ESP = (EBP);
  /* 110953d4 pop ebp */
  EBP = (pop32());
  /* 110953d5 ret  */
  ESPCHK(0x11095280u, _esp0);
  ESP += 4; return;
}

/* FUN_100053e0 @ 0x110953e0 (28 bytes, 11 insns) */
void f_110953e0(void) {
  FTRACE(0x110953e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110953e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110953e1 mov ebp, esp */
  EBP = (ESP);
  /* 110953e3 push ecx */
  push32((uint32_t)(ECX));
  /* 110953e4 mov eax, dword ptr [0x110bea8c] */
  EAX = (r32((uint32_t)(0x110bea8c)));
  /* 110953e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110953ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110953ef mov dword ptr [0x110bea8c], ecx */
  w32((uint32_t)(0x110bea8c), (ECX));
  /* 110953f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110953f8 mov esp, ebp */
  ESP = (EBP);
  /* 110953fa pop ebp */
  EBP = (pop32());
  /* 110953fb ret  */
  ESPCHK(0x110953e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005400 @ 0x11095400 (157 bytes, 59 insns) */
void f_11095400(void) {
  FTRACE(0x11095400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11095400 push ebp */
  push32((uint32_t)(EBP));
  /* 11095401 mov ebp, esp */
  EBP = (ESP);
  /* 11095403 push ecx */
  push32((uint32_t)(ECX));
  /* 11095404 push ebx */
  push32((uint32_t)(EBX));
  /* 11095405 push esi */
  push32((uint32_t)(ESI));
  /* 11095406 push edi */
  push32((uint32_t)(EDI));
  /* 11095407 push 9 */
  push32((uint32_t)(0x9u));
  /* 11095409 call 0x11097db0 */
  push32(0x1109540eu); f_11097db0();
  /* 1109540e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095411 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095414 push eax */
  push32((uint32_t)(EAX));
  /* 11095415 call 0x110959b0 */
  push32(0x1109541au); f_110959b0();
  /* 1109541a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109541d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109541f je 0x1109548c */
  if (C.zf) goto L_1109548c;
  /* 11095421 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095424 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11095427 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1109542a:;
  /* 1109542a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109542d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11095430 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11095435 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095438 je 0x1109547d */
  if (C.zf) goto L_1109547d;
  /* 1109543a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109543d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095441 je 0x1109547d */
  if (C.zf) goto L_1109547d;
  /* 11095443 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095446 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11095449 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109544e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095451 je 0x1109547d */
  if (C.zf) goto L_1109547d;
  /* 11095453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095456 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109545a je 0x1109547d */
  if (C.zf) goto L_1109547d;
  /* 1109545c push 0x110bbaec */
  push32((uint32_t)(0x110bbaecu));
  /* 11095461 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095463 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11095468 push 0x110bb844 */
  push32((uint32_t)(0x110bb844u));
  /* 1109546d push 2 */
  push32((uint32_t)(0x2u));
  /* 1109546f call 0x11093470 */
  push32(0x11095474u); f_11093470();
  /* 11095474 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095477 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109547a jne 0x1109547d */
  if (!C.zf) goto L_1109547d;
  /* 1109547c int3  */
  x86_unimpl("int3 @ 0x1109547c");
L_1109547d:;
  /* 1109547d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109547f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11095481 jne 0x1109542a */
  if (!C.zf) goto L_1109542a;
  /* 11095483 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095486 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11095489 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1109548c:;
  /* 1109548c push 9 */
  push32((uint32_t)(0x9u));
  /* 1109548e call 0x11097e50 */
  push32(0x11095493u); f_11097e50();
  /* 11095493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095496 pop edi */
  EDI = (pop32());
  /* 11095497 pop esi */
  ESI = (pop32());
  /* 11095498 pop ebx */
  EBX = (pop32());
  /* 11095499 mov esp, ebp */
  ESP = (EBP);
  /* 1109549b pop ebp */
  EBP = (pop32());
  /* 1109549c ret  */
  ESPCHK(0x11095400u, _esp0);
  ESP += 4; return;
}

/* FUN_100054a0 @ 0x110954a0 (28 bytes, 11 insns) */
void f_110954a0(void) {
  FTRACE(0x110954a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110954a0 push ebp */
  push32((uint32_t)(EBP));
  /* 110954a1 mov ebp, esp */
  EBP = (ESP);
  /* 110954a3 push ecx */
  push32((uint32_t)(ECX));
  /* 110954a4 mov eax, dword ptr [0x110bec90] */
  EAX = (r32((uint32_t)(0x110bec90)));
  /* 110954a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110954ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110954af mov dword ptr [0x110bec90], ecx */
  w32((uint32_t)(0x110bec90), (ECX));
  /* 110954b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110954b8 mov esp, ebp */
  ESP = (EBP);
  /* 110954ba pop ebp */
  EBP = (pop32());
  /* 110954bb ret  */
  ESPCHK(0x110954a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054c0 @ 0x110954c0 (136 bytes, 55 insns) */
void f_110954c0(void) {
  FTRACE(0x110954c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110954c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110954c1 mov ebp, esp */
  EBP = (ESP);
  /* 110954c3 push ecx */
  push32((uint32_t)(ECX));
  /* 110954c4 push ebx */
  push32((uint32_t)(EBX));
  /* 110954c5 push esi */
  push32((uint32_t)(ESI));
  /* 110954c6 push edi */
  push32((uint32_t)(EDI));
  /* 110954c7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_110954ce:;
  /* 110954ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110954d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110954d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110954d7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 110954da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110954dc je 0x1109553e */
  if (C.zf) goto L_1109553e;
  /* 110954de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110954e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110954e3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110954e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110954e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 110954ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110954f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110954f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 110954f7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110954f9 je 0x1109553c */
  if (C.zf) goto L_1109553c;
L_110954fb:;
  /* 110954fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110954fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11095503 push eax */
  push32((uint32_t)(EAX));
  /* 11095504 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095507 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11095509 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1109550c push edx */
  push32((uint32_t)(EDX));
  /* 1109550d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095510 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11095513 push eax */
  push32((uint32_t)(EAX));
  /* 11095514 push 0x110bbb30 */
  push32((uint32_t)(0x110bbb30u));
  /* 11095519 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109551b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109551d push 0 */
  push32((uint32_t)(0x0u));
  /* 1109551f push 0 */
  push32((uint32_t)(0x0u));
  /* 11095521 call 0x11093470 */
  push32(0x11095526u); f_11093470();
  /* 11095526 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095529 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109552c jne 0x1109552f */
  if (!C.zf) goto L_1109552f;
  /* 1109552e int3  */
  x86_unimpl("int3 @ 0x1109552e");
L_1109552f:;
  /* 1109552f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11095531 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11095533 jne 0x110954fb */
  if (!C.zf) goto L_110954fb;
  /* 11095535 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1109553c:;
  /* 1109553c jmp 0x110954ce */
  goto L_110954ce;
L_1109553e:;
  /* 1109553e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095541 pop edi */
  EDI = (pop32());
  /* 11095542 pop esi */
  ESI = (pop32());
  /* 11095543 pop ebx */
  EBX = (pop32());
  /* 11095544 mov esp, ebp */
  ESP = (EBP);
  /* 11095546 pop ebp */
  EBP = (pop32());
  /* 11095547 ret  */
  ESPCHK(0x110954c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005550 @ 0x11095550 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11095550(void) {
  FTRACE(0x11095550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11095550 push ebp */
  push32((uint32_t)(EBP));
  /* 11095551 mov ebp, esp */
  EBP = (ESP);
  /* 11095553 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11095556 push ebx */
  push32((uint32_t)(EBX));
  /* 11095557 push esi */
  push32((uint32_t)(ESI));
  /* 11095558 push edi */
  push32((uint32_t)(EDI));
  /* 11095559 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11095560 mov eax, dword ptr [0x110bea84] */
  EAX = (r32((uint32_t)(0x110bea84)));
  /* 11095565 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11095568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109556a jne 0x11095576 */
  if (!C.zf) goto L_11095576;
  /* 1109556c mov eax, 1 */
  EAX = (0x1u);
  /* 11095571 jmp 0x110958a8 */
  goto L_110958a8;
L_11095576:;
  /* 11095576 push 9 */
  push32((uint32_t)(0x9u));
  /* 11095578 call 0x11097db0 */
  push32(0x1109557du); f_11097db0();
  /* 1109557d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095580 call 0x11098590 */
  push32(0x11095585u); f_11098590();
  /* 11095585 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11095588 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109558c je 0x11095699 */
  if (C.zf) goto L_11095699;
  /* 11095592 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095596 je 0x11095699 */
  if (C.zf) goto L_11095699;
  /* 1109559c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109559f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 110955a2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 110955a5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110955a8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 110955ab cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110955af ja 0x11095662 */
  if ((!C.cf&&!C.zf)) goto L_11095662;
  /* 110955b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 110955b8 jmp dword ptr [eax*4 + 0x110958af] */
  switch (EAX) {
    case 0: goto L_1109563a;
    case 1: goto L_11095612;
    case 2: goto L_110955ea;
    case 3: goto L_110955bf;
    default: x86_unimpl("switch@0x110955b8 out of table"); return;
  }
L_110955bf:;
  /* 110955bf push 0x110bbc84 */
  push32((uint32_t)(0x110bbc84u));
  /* 110955c4 push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 110955c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110955cb push 0 */
  push32((uint32_t)(0x0u));
  /* 110955cd push 0 */
  push32((uint32_t)(0x0u));
  /* 110955cf push 0 */
  push32((uint32_t)(0x0u));
  /* 110955d1 call 0x11093470 */
  push32(0x110955d6u); f_11093470();
  /* 110955d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110955d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110955dc jne 0x110955df */
  if (!C.zf) goto L_110955df;
  /* 110955de int3  */
  x86_unimpl("int3 @ 0x110955de");
L_110955df:;
  /* 110955df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110955e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110955e3 jne 0x110955bf */
  if (!C.zf) goto L_110955bf;
  /* 110955e5 jmp 0x11095688 */
  goto L_11095688;
L_110955ea:;
  /* 110955ea push 0x110bbc60 */
  push32((uint32_t)(0x110bbc60u));
  /* 110955ef push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 110955f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110955f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110955f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110955fa push 0 */
  push32((uint32_t)(0x0u));
  /* 110955fc call 0x11093470 */
  push32(0x11095601u); f_11093470();
  /* 11095601 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095604 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095607 jne 0x1109560a */
  if (!C.zf) goto L_1109560a;
  /* 11095609 int3  */
  x86_unimpl("int3 @ 0x11095609");
L_1109560a:;
  /* 1109560a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109560c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109560e jne 0x110955ea */
  if (!C.zf) goto L_110955ea;
  /* 11095610 jmp 0x11095688 */
  goto L_11095688;
L_11095612:;
  /* 11095612 push 0x110bbc3c */
  push32((uint32_t)(0x110bbc3cu));
  /* 11095617 push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 1109561c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109561e push 0 */
  push32((uint32_t)(0x0u));
  /* 11095620 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095622 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095624 call 0x11093470 */
  push32(0x11095629u); f_11093470();
  /* 11095629 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109562c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109562f jne 0x11095632 */
  if (!C.zf) goto L_11095632;
  /* 11095631 int3  */
  x86_unimpl("int3 @ 0x11095631");
L_11095632:;
  /* 11095632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11095634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095636 jne 0x11095612 */
  if (!C.zf) goto L_11095612;
  /* 11095638 jmp 0x11095688 */
  goto L_11095688;
L_1109563a:;
  /* 1109563a push 0x110bbc18 */
  push32((uint32_t)(0x110bbc18u));
  /* 1109563f push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 11095644 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095646 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095648 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109564a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109564c call 0x11093470 */
  push32(0x11095651u); f_11093470();
  /* 11095651 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095654 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095657 jne 0x1109565a */
  if (!C.zf) goto L_1109565a;
  /* 11095659 int3  */
  x86_unimpl("int3 @ 0x11095659");
L_1109565a:;
  /* 1109565a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109565c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109565e jne 0x1109563a */
  if (!C.zf) goto L_1109563a;
  /* 11095660 jmp 0x11095688 */
  goto L_11095688;
L_11095662:;
  /* 11095662 push 0x110bbbec */
  push32((uint32_t)(0x110bbbecu));
  /* 11095667 push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 1109566c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109566e push 0 */
  push32((uint32_t)(0x0u));
  /* 11095670 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095672 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095674 call 0x11093470 */
  push32(0x11095679u); f_11093470();
  /* 11095679 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109567c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109567f jne 0x11095682 */
  if (!C.zf) goto L_11095682;
  /* 11095681 int3  */
  x86_unimpl("int3 @ 0x11095681");
L_11095682:;
  /* 11095682 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11095684 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11095686 jne 0x11095662 */
  if (!C.zf) goto L_11095662;
L_11095688:;
  /* 11095688 push 9 */
  push32((uint32_t)(0x9u));
  /* 1109568a call 0x11097e50 */
  push32(0x1109568fu); f_11097e50();
  /* 1109568f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095692 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11095694 jmp 0x110958a8 */
  goto L_110958a8;
L_11095699:;
  /* 11095699 mov eax, dword ptr [0x110c064c] */
  EAX = (r32((uint32_t)(0x110c064c)));
  /* 1109569e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110956a1 jmp 0x110956ab */
  goto L_110956ab;
L_110956a3:;
  /* 110956a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110956a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110956a8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_110956ab:;
  /* 110956ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110956af je 0x1109589b */
  if (C.zf) goto L_1109589b;
  /* 110956b5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 110956bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110956bf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 110956c2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110956c8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110956cb je 0x110956f0 */
  if (C.zf) goto L_110956f0;
  /* 110956cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110956d0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110956d4 je 0x110956f0 */
  if (C.zf) goto L_110956f0;
  /* 110956d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110956d9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 110956dc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110956e2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110956e5 je 0x110956f0 */
  if (C.zf) goto L_110956f0;
  /* 110956e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110956ea cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110956ee jne 0x11095708 */
  if (!C.zf) goto L_11095708;
L_110956f0:;
  /* 110956f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110956f3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 110956f6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110956fc mov edx, dword ptr [ecx*4 + 0x110bea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110bea94)));
  /* 11095703 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11095706 jmp 0x1109570f */
  goto L_1109570f;
L_11095708:;
  /* 11095708 mov dword ptr [ebp - 0x14], 0x110bbbe4 */
  w32((uint32_t)(EBP + -0x14), (0x110bbbe4u));
L_1109570f:;
  /* 1109570f push 4 */
  push32((uint32_t)(0x4u));
  /* 11095711 mov al, byte ptr [0x110bea90] */
  AL = (r8((uint32_t)(0x110bea90)));
  /* 11095716 push eax */
  push32((uint32_t)(EAX));
  /* 11095717 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109571a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109571d push ecx */
  push32((uint32_t)(ECX));
  /* 1109571e call 0x110954c0 */
  push32(0x11095723u); f_110954c0();
  /* 11095723 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095728 jne 0x11095764 */
  if (!C.zf) goto L_11095764;
L_1109572a:;
  /* 1109572a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109572d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11095730 push edx */
  push32((uint32_t)(EDX));
  /* 11095731 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095734 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11095737 push ecx */
  push32((uint32_t)(ECX));
  /* 11095738 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109573b push edx */
  push32((uint32_t)(EDX));
  /* 1109573c push 0x110bbac0 */
  push32((uint32_t)(0x110bbac0u));
  /* 11095741 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095743 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095747 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095749 call 0x11093470 */
  push32(0x1109574eu); f_11093470();
  /* 1109574e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095751 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095754 jne 0x11095757 */
  if (!C.zf) goto L_11095757;
  /* 11095756 int3  */
  x86_unimpl("int3 @ 0x11095756");
L_11095757:;
  /* 11095757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11095759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109575b jne 0x1109572a */
  if (!C.zf) goto L_1109572a;
  /* 1109575d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11095764:;
  /* 11095764 push 4 */
  push32((uint32_t)(0x4u));
  /* 11095766 mov cl, byte ptr [0x110bea90] */
  CL = (r8((uint32_t)(0x110bea90)));
  /* 1109576c push ecx */
  push32((uint32_t)(ECX));
  /* 1109576d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095770 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11095773 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095776 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1109577a push edx */
  push32((uint32_t)(EDX));
  /* 1109577b call 0x110954c0 */
  push32(0x11095780u); f_110954c0();
  /* 11095780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095783 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095785 jne 0x110957c1 */
  if (!C.zf) goto L_110957c1;
L_11095787:;
  /* 11095787 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109578a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109578d push eax */
  push32((uint32_t)(EAX));
  /* 1109578e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095791 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11095794 push edx */
  push32((uint32_t)(EDX));
  /* 11095795 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11095798 push eax */
  push32((uint32_t)(EAX));
  /* 11095799 push 0x110bba94 */
  push32((uint32_t)(0x110bba94u));
  /* 1109579e push 0 */
  push32((uint32_t)(0x0u));
  /* 110957a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110957a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110957a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110957a6 call 0x11093470 */
  push32(0x110957abu); f_11093470();
  /* 110957ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110957ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110957b1 jne 0x110957b4 */
  if (!C.zf) goto L_110957b4;
  /* 110957b3 int3  */
  x86_unimpl("int3 @ 0x110957b3");
L_110957b4:;
  /* 110957b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110957b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110957b8 jne 0x11095787 */
  if (!C.zf) goto L_11095787;
  /* 110957ba mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_110957c1:;
  /* 110957c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110957c4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110957c8 jne 0x1109581a */
  if (!C.zf) goto L_1109581a;
  /* 110957ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110957cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 110957d0 push ecx */
  push32((uint32_t)(ECX));
  /* 110957d1 mov dl, byte ptr [0x110bea91] */
  DL = (r8((uint32_t)(0x110bea91)));
  /* 110957d7 push edx */
  push32((uint32_t)(EDX));
  /* 110957d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110957db add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110957de push eax */
  push32((uint32_t)(EAX));
  /* 110957df call 0x110954c0 */
  push32(0x110957e4u); f_110954c0();
  /* 110957e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110957e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110957e9 jne 0x1109581a */
  if (!C.zf) goto L_1109581a;
L_110957eb:;
  /* 110957eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110957ee add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110957f1 push ecx */
  push32((uint32_t)(ECX));
  /* 110957f2 push 0x110bbbb8 */
  push32((uint32_t)(0x110bbbb8u));
  /* 110957f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110957f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110957fb push 0 */
  push32((uint32_t)(0x0u));
  /* 110957fd push 0 */
  push32((uint32_t)(0x0u));
  /* 110957ff call 0x11093470 */
  push32(0x11095804u); f_11093470();
  /* 11095804 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095807 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109580a jne 0x1109580d */
  if (!C.zf) goto L_1109580d;
  /* 1109580c int3  */
  x86_unimpl("int3 @ 0x1109580c");
L_1109580d:;
  /* 1109580d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109580f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11095811 jne 0x110957eb */
  if (!C.zf) goto L_110957eb;
  /* 11095813 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1109581a:;
  /* 1109581a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109581e jne 0x11095896 */
  if (!C.zf) goto L_11095896;
  /* 11095820 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095823 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095827 je 0x1109585c */
  if (C.zf) goto L_1109585c;
L_11095829:;
  /* 11095829 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109582c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1109582f push edx */
  push32((uint32_t)(EDX));
  /* 11095830 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095833 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11095836 push ecx */
  push32((uint32_t)(ECX));
  /* 11095837 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109583a push edx */
  push32((uint32_t)(EDX));
  /* 1109583b push 0x110bbb98 */
  push32((uint32_t)(0x110bbb98u));
  /* 11095840 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095842 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095844 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095846 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095848 call 0x11093470 */
  push32(0x1109584du); f_11093470();
  /* 1109584d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095850 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095853 jne 0x11095856 */
  if (!C.zf) goto L_11095856;
  /* 11095855 int3  */
  x86_unimpl("int3 @ 0x11095855");
L_11095856:;
  /* 11095856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11095858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109585a jne 0x11095829 */
  if (!C.zf) goto L_11095829;
L_1109585c:;
  /* 1109585c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109585f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11095862 push edx */
  push32((uint32_t)(EDX));
  /* 11095863 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095866 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11095869 push eax */
  push32((uint32_t)(EAX));
  /* 1109586a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109586d push ecx */
  push32((uint32_t)(ECX));
  /* 1109586e push 0x110bbb6c */
  push32((uint32_t)(0x110bbb6cu));
  /* 11095873 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095875 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095877 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095879 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109587b call 0x11093470 */
  push32(0x11095880u); f_11093470();
  /* 11095880 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095883 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095886 jne 0x11095889 */
  if (!C.zf) goto L_11095889;
  /* 11095888 int3  */
  x86_unimpl("int3 @ 0x11095888");
L_11095889:;
  /* 11095889 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109588b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109588d jne 0x1109585c */
  if (!C.zf) goto L_1109585c;
  /* 1109588f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11095896:;
  /* 11095896 jmp 0x110956a3 */
  goto L_110956a3;
L_1109589b:;
  /* 1109589b push 9 */
  push32((uint32_t)(0x9u));
  /* 1109589d call 0x11097e50 */
  push32(0x110958a2u); f_11097e50();
  /* 110958a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110958a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_110958a8:;
  /* 110958a8 pop edi */
  EDI = (pop32());
  /* 110958a9 pop esi */
  ESI = (pop32());
  /* 110958aa pop ebx */
  EBX = (pop32());
  /* 110958ab mov esp, ebp */
  ESP = (EBP);
  /* 110958ad pop ebp */
  EBP = (pop32());
  /* 110958ae ret  */
  ESPCHK(0x11095550u, _esp0);
  ESP += 4; return;
}

/* FUN_100058c0 @ 0x110958c0 (34 bytes, 13 insns) */
void f_110958c0(void) {
  FTRACE(0x110958c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110958c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110958c1 mov ebp, esp */
  EBP = (ESP);
  /* 110958c3 push ecx */
  push32((uint32_t)(ECX));
  /* 110958c4 mov eax, dword ptr [0x110bea84] */
  EAX = (r32((uint32_t)(0x110bea84)));
  /* 110958c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110958cc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110958d0 je 0x110958db */
  if (C.zf) goto L_110958db;
  /* 110958d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110958d5 mov dword ptr [0x110bea84], ecx */
  w32((uint32_t)(0x110bea84), (ECX));
L_110958db:;
  /* 110958db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110958de mov esp, ebp */
  ESP = (EBP);
  /* 110958e0 pop ebp */
  EBP = (pop32());
  /* 110958e1 ret  */
  ESPCHK(0x110958c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058f0 @ 0x110958f0 (103 bytes, 38 insns) */
void f_110958f0(void) {
  FTRACE(0x110958f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110958f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110958f1 mov ebp, esp */
  EBP = (ESP);
  /* 110958f3 push ecx */
  push32((uint32_t)(ECX));
  /* 110958f4 mov eax, dword ptr [0x110bea84] */
  EAX = (r32((uint32_t)(0x110bea84)));
  /* 110958f9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 110958fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110958fe jne 0x11095902 */
  if (!C.zf) goto L_11095902;
  /* 11095900 jmp 0x11095953 */
  goto L_11095953;
L_11095902:;
  /* 11095902 push 9 */
  push32((uint32_t)(0x9u));
  /* 11095904 call 0x11097db0 */
  push32(0x11095909u); f_11097db0();
  /* 11095909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109590c mov ecx, dword ptr [0x110c064c] */
  ECX = (r32((uint32_t)(0x110c064c)));
  /* 11095912 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11095915 jmp 0x1109591f */
  goto L_1109591f;
L_11095917:;
  /* 11095917 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109591a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1109591c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1109591f:;
  /* 1109591f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095923 je 0x11095949 */
  if (C.zf) goto L_11095949;
  /* 11095925 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095928 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1109592b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11095931 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095934 jne 0x11095947 */
  if (!C.zf) goto L_11095947;
  /* 11095936 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11095939 push eax */
  push32((uint32_t)(EAX));
  /* 1109593a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109593d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11095940 push ecx */
  push32((uint32_t)(ECX));
  /* 11095941 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11095944u);
  /* 11095944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11095947:;
  /* 11095947 jmp 0x11095917 */
  goto L_11095917;
L_11095949:;
  /* 11095949 push 9 */
  push32((uint32_t)(0x9u));
  /* 1109594b call 0x11097e50 */
  push32(0x11095950u); f_11097e50();
  /* 11095950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11095953:;
  /* 11095953 mov esp, ebp */
  ESP = (EBP);
  /* 11095955 pop ebp */
  EBP = (pop32());
  /* 11095956 ret  */
  ESPCHK(0x110958f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11095960 (75 bytes, 28 insns) */
void f_11095960(void) {
  FTRACE(0x11095960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11095960 push ebp */
  push32((uint32_t)(EBP));
  /* 11095961 mov ebp, esp */
  EBP = (ESP);
  /* 11095963 push ecx */
  push32((uint32_t)(ECX));
  /* 11095964 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095968 je 0x1109599d */
  if (C.zf) goto L_1109599d;
  /* 1109596a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109596d push eax */
  push32((uint32_t)(EAX));
  /* 1109596e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095971 push ecx */
  push32((uint32_t)(ECX));
  /* 11095972 call dword ptr [0x110c3248] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3248))), 0x11095978u);
  /* 11095978 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109597a jne 0x1109599d */
  if (!C.zf) goto L_1109599d;
  /* 1109597c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095980 je 0x11095994 */
  if (C.zf) goto L_11095994;
  /* 11095982 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11095985 push edx */
  push32((uint32_t)(EDX));
  /* 11095986 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095989 push eax */
  push32((uint32_t)(EAX));
  /* 1109598a call dword ptr [0x110c3244] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3244))), 0x11095990u);
  /* 11095990 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095992 jne 0x1109599d */
  if (!C.zf) goto L_1109599d;
L_11095994:;
  /* 11095994 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1109599b jmp 0x110959a4 */
  goto L_110959a4;
L_1109599d:;
  /* 1109599d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_110959a4:;
  /* 110959a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110959a7 mov esp, ebp */
  ESP = (EBP);
  /* 110959a9 pop ebp */
  EBP = (pop32());
  /* 110959aa ret  */
  ESPCHK(0x11095960u, _esp0);
  ESP += 4; return;
}

/* FUN_100059b0 @ 0x110959b0 (134 bytes, 50 insns) */
void f_110959b0(void) {
  FTRACE(0x110959b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110959b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110959b1 mov ebp, esp */
  EBP = (ESP);
  /* 110959b3 push ecx */
  push32((uint32_t)(ECX));
  /* 110959b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110959b8 jne 0x110959be */
  if (!C.zf) goto L_110959be;
  /* 110959ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110959bc jmp 0x11095a32 */
  goto L_11095a32;
L_110959be:;
  /* 110959be push 1 */
  push32((uint32_t)(0x1u));
  /* 110959c0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 110959c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110959c5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110959c8 push eax */
  push32((uint32_t)(EAX));
  /* 110959c9 call 0x11095960 */
  push32(0x110959ceu); f_11095960();
  /* 110959ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110959d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110959d3 jne 0x110959d9 */
  if (!C.zf) goto L_110959d9;
  /* 110959d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110959d7 jmp 0x11095a32 */
  goto L_11095a32;
L_110959d9:;
  /* 110959d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110959dc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110959df push ecx */
  push32((uint32_t)(ECX));
  /* 110959e0 call 0x110986b0 */
  push32(0x110959e5u); f_110986b0();
  /* 110959e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110959e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110959eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110959ef je 0x11095a06 */
  if (C.zf) goto L_11095a06;
  /* 110959f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110959f4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110959f7 push edx */
  push32((uint32_t)(EDX));
  /* 110959f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110959fb push eax */
  push32((uint32_t)(EAX));
  /* 110959fc call 0x11098710 */
  push32(0x11095a01u); f_11098710();
  /* 11095a01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095a04 jmp 0x11095a32 */
  goto L_11095a32;
L_11095a06:;
  /* 11095a06 mov ecx, dword ptr [0x110c0600] */
  ECX = (r32((uint32_t)(0x110c0600)));
  /* 11095a0c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11095a12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11095a14 je 0x11095a1d */
  if (C.zf) goto L_11095a1d;
  /* 11095a16 mov eax, 1 */
  EAX = (0x1u);
  /* 11095a1b jmp 0x11095a32 */
  goto L_11095a32;
L_11095a1d:;
  /* 11095a1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095a20 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11095a23 push edx */
  push32((uint32_t)(EDX));
  /* 11095a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095a26 mov eax, dword ptr [0x110c1fac] */
  EAX = (r32((uint32_t)(0x110c1fac)));
  /* 11095a2b push eax */
  push32((uint32_t)(EAX));
  /* 11095a2c call dword ptr [0x110c3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3300))), 0x11095a32u);
L_11095a32:;
  /* 11095a32 mov esp, ebp */
  ESP = (EBP);
  /* 11095a34 pop ebp */
  EBP = (pop32());
  /* 11095a35 ret  */
  ESPCHK(0x110959b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a40 @ 0x11095a40 (227 bytes, 80 insns) */
void f_11095a40(void) {
  FTRACE(0x11095a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11095a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11095a41 mov ebp, esp */
  EBP = (ESP);
  /* 11095a43 push ecx */
  push32((uint32_t)(ECX));
  /* 11095a44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095a47 push eax */
  push32((uint32_t)(EAX));
  /* 11095a48 call 0x110959b0 */
  push32(0x11095a4du); f_110959b0();
  /* 11095a4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095a50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095a52 jne 0x11095a5b */
  if (!C.zf) goto L_11095a5b;
  /* 11095a54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11095a56 jmp 0x11095b1f */
  goto L_11095b1f;
L_11095a5b:;
  /* 11095a5b push 9 */
  push32((uint32_t)(0x9u));
  /* 11095a5d call 0x11097db0 */
  push32(0x11095a62u); f_11097db0();
  /* 11095a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095a65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095a68 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11095a6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11095a6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095a71 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11095a74 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11095a79 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095a7c je 0x11095aa0 */
  if (C.zf) goto L_11095aa0;
  /* 11095a7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095a81 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095a85 je 0x11095aa0 */
  if (C.zf) goto L_11095aa0;
  /* 11095a87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095a8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11095a8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11095a92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095a95 je 0x11095aa0 */
  if (C.zf) goto L_11095aa0;
  /* 11095a97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095a9a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095a9e jne 0x11095b13 */
  if (!C.zf) goto L_11095b13;
L_11095aa0:;
  /* 11095aa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11095aa2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11095aa5 push edx */
  push32((uint32_t)(EDX));
  /* 11095aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095aa9 push eax */
  push32((uint32_t)(EAX));
  /* 11095aaa call 0x11095960 */
  push32(0x11095aafu); f_11095960();
  /* 11095aaf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095ab2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095ab4 je 0x11095b13 */
  if (C.zf) goto L_11095b13;
  /* 11095ab6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095ab9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11095abc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095abf jne 0x11095b13 */
  if (!C.zf) goto L_11095b13;
  /* 11095ac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095ac4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11095ac7 cmp ecx, dword ptr [0x110bea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110bea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095acd jg 0x11095b13 */
  if ((!C.zf&&C.sf==C.of)) goto L_11095b13;
  /* 11095acf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095ad3 je 0x11095ae0 */
  if (C.zf) goto L_11095ae0;
  /* 11095ad5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11095ad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095adb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11095ade mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11095ae0:;
  /* 11095ae0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095ae4 je 0x11095af1 */
  if (C.zf) goto L_11095af1;
  /* 11095ae6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11095ae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095aec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11095aef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11095af1:;
  /* 11095af1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095af5 je 0x11095b02 */
  if (C.zf) goto L_11095b02;
  /* 11095af7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11095afa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095afd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11095b00 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11095b02:;
  /* 11095b02 push 9 */
  push32((uint32_t)(0x9u));
  /* 11095b04 call 0x11097e50 */
  push32(0x11095b09u); f_11097e50();
  /* 11095b09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095b0c mov eax, 1 */
  EAX = (0x1u);
  /* 11095b11 jmp 0x11095b1f */
  goto L_11095b1f;
L_11095b13:;
  /* 11095b13 push 9 */
  push32((uint32_t)(0x9u));
  /* 11095b15 call 0x11097e50 */
  push32(0x11095b1au); f_11097e50();
  /* 11095b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095b1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11095b1f:;
  /* 11095b1f mov esp, ebp */
  ESP = (EBP);
  /* 11095b21 pop ebp */
  EBP = (pop32());
  /* 11095b22 ret  */
  ESPCHK(0x11095a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b30 @ 0x11095b30 (28 bytes, 11 insns) */
void f_11095b30(void) {
  FTRACE(0x11095b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11095b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11095b31 mov ebp, esp */
  EBP = (ESP);
  /* 11095b33 push ecx */
  push32((uint32_t)(ECX));
  /* 11095b34 mov eax, dword ptr [0x110c1fb8] */
  EAX = (r32((uint32_t)(0x110c1fb8)));
  /* 11095b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11095b3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095b3f mov dword ptr [0x110c1fb8], ecx */
  w32((uint32_t)(0x110c1fb8), (ECX));
  /* 11095b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095b48 mov esp, ebp */
  ESP = (EBP);
  /* 11095b4a pop ebp */
  EBP = (pop32());
  /* 11095b4b ret  */
  ESPCHK(0x11095b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b50 @ 0x11095b50 (362 bytes, 116 insns) */
void f_11095b50(void) {
  FTRACE(0x11095b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11095b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11095b51 mov ebp, esp */
  EBP = (ESP);
  /* 11095b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11095b56 push ebx */
  push32((uint32_t)(EBX));
  /* 11095b57 push esi */
  push32((uint32_t)(ESI));
  /* 11095b58 push edi */
  push32((uint32_t)(EDI));
  /* 11095b59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095b5d jne 0x11095b8a */
  if (!C.zf) goto L_11095b8a;
L_11095b5f:;
  /* 11095b5f push 0x110bbccc */
  push32((uint32_t)(0x110bbcccu));
  /* 11095b64 push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 11095b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11095b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11095b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11095b71 call 0x11093470 */
  push32(0x11095b76u); f_11093470();
  /* 11095b76 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095b79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095b7c jne 0x11095b7f */
  if (!C.zf) goto L_11095b7f;
  /* 11095b7e int3  */
  x86_unimpl("int3 @ 0x11095b7e");
L_11095b7f:;
  /* 11095b7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11095b81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095b83 jne 0x11095b5f */
  if (!C.zf) goto L_11095b5f;
  /* 11095b85 jmp 0x11095cb3 */
  goto L_11095cb3;
L_11095b8a:;
  /* 11095b8a push 9 */
  push32((uint32_t)(0x9u));
  /* 11095b8c call 0x11097db0 */
  push32(0x11095b91u); f_11097db0();
  /* 11095b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095b94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095b97 mov edx, dword ptr [0x110c064c] */
  EDX = (r32((uint32_t)(0x110c064c)));
  /* 11095b9d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11095b9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11095ba6 jmp 0x11095bb1 */
  goto L_11095bb1;
L_11095ba8:;
  /* 11095ba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095bab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11095bae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11095bb1:;
  /* 11095bb1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095bb5 jge 0x11095bd5 */
  if ((C.sf==C.of)) goto L_11095bd5;
  /* 11095bb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095bba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095bbd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11095bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095bc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095bcb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11095bd3 jmp 0x11095ba8 */
  goto L_11095ba8;
L_11095bd5:;
  /* 11095bd5 mov edx, dword ptr [0x110c064c] */
  EDX = (r32((uint32_t)(0x110c064c)));
  /* 11095bdb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11095bde jmp 0x11095be8 */
  goto L_11095be8;
L_11095be0:;
  /* 11095be0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095be3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11095be5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11095be8:;
  /* 11095be8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095bec je 0x11095c91 */
  if (C.zf) goto L_11095c91;
  /* 11095bf2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095bf5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11095bf8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11095bfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095bff jl 0x11095c67 */
  if ((C.sf!=C.of)) goto L_11095c67;
  /* 11095c01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095c04 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11095c07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11095c0d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095c10 jge 0x11095c67 */
  if ((C.sf==C.of)) goto L_11095c67;
  /* 11095c12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095c15 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11095c18 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11095c1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095c21 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11095c25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11095c28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095c2b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11095c2e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11095c34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095c37 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11095c3b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095c3e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11095c41 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11095c46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095c49 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11095c4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095c50 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11095c53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095c56 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11095c59 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11095c5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095c61 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11095c65 jmp 0x11095c8c */
  goto L_11095c8c;
L_11095c67:;
  /* 11095c67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095c6a push edx */
  push32((uint32_t)(EDX));
  /* 11095c6b push 0x110bbca8 */
  push32((uint32_t)(0x110bbca8u));
  /* 11095c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095c78 call 0x11093470 */
  push32(0x11095c7du); f_11093470();
  /* 11095c7d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095c80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095c83 jne 0x11095c86 */
  if (!C.zf) goto L_11095c86;
  /* 11095c85 int3  */
  x86_unimpl("int3 @ 0x11095c85");
L_11095c86:;
  /* 11095c86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11095c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095c8a jne 0x11095c67 */
  if (!C.zf) goto L_11095c67;
L_11095c8c:;
  /* 11095c8c jmp 0x11095be0 */
  goto L_11095be0;
L_11095c91:;
  /* 11095c91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095c94 mov edx, dword ptr [0x110c0654] */
  EDX = (r32((uint32_t)(0x110c0654)));
  /* 11095c9a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11095c9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095ca0 mov ecx, dword ptr [0x110c0648] */
  ECX = (r32((uint32_t)(0x110c0648)));
  /* 11095ca6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11095ca9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11095cab call 0x11097e50 */
  push32(0x11095cb0u); f_11097e50();
  /* 11095cb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11095cb3:;
  /* 11095cb3 pop edi */
  EDI = (pop32());
  /* 11095cb4 pop esi */
  ESI = (pop32());
  /* 11095cb5 pop ebx */
  EBX = (pop32());
  /* 11095cb6 mov esp, ebp */
  ESP = (EBP);
  /* 11095cb8 pop ebp */
  EBP = (pop32());
  /* 11095cb9 ret  */
  ESPCHK(0x11095b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cc0 @ 0x11095cc0 (291 bytes, 95 insns) */
void f_11095cc0(void) {
  FTRACE(0x11095cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11095cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11095cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11095cc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11095cc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11095cc7 push esi */
  push32((uint32_t)(ESI));
  /* 11095cc8 push edi */
  push32((uint32_t)(EDI));
  /* 11095cc9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11095cd0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095cd4 je 0x11095ce2 */
  if (C.zf) goto L_11095ce2;
  /* 11095cd6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095cda je 0x11095ce2 */
  if (C.zf) goto L_11095ce2;
  /* 11095cdc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095ce0 jne 0x11095d10 */
  if (!C.zf) goto L_11095d10;
L_11095ce2:;
  /* 11095ce2 push 0x110bbcf4 */
  push32((uint32_t)(0x110bbcf4u));
  /* 11095ce7 push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 11095cec push 0 */
  push32((uint32_t)(0x0u));
  /* 11095cee push 0 */
  push32((uint32_t)(0x0u));
  /* 11095cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095cf4 call 0x11093470 */
  push32(0x11095cf9u); f_11093470();
  /* 11095cf9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095cfc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095cff jne 0x11095d02 */
  if (!C.zf) goto L_11095d02;
  /* 11095d01 int3  */
  x86_unimpl("int3 @ 0x11095d01");
L_11095d02:;
  /* 11095d02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11095d04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095d06 jne 0x11095ce2 */
  if (!C.zf) goto L_11095ce2;
  /* 11095d08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11095d0b jmp 0x11095ddc */
  goto L_11095ddc;
L_11095d10:;
  /* 11095d10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11095d17 jmp 0x11095d22 */
  goto L_11095d22;
L_11095d19:;
  /* 11095d19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095d1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11095d1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11095d22:;
  /* 11095d22 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095d26 jge 0x11095dac */
  if ((C.sf==C.of)) goto L_11095dac;
  /* 11095d2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095d2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11095d32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095d35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11095d38 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11095d3c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11095d40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095d43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095d46 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11095d4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095d4d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11095d50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095d53 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11095d56 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11095d5a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11095d5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095d61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095d64 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11095d68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095d6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095d6e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095d73 jne 0x11095d82 */
  if (!C.zf) goto L_11095d82;
  /* 11095d75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095d78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095d7b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095d80 je 0x11095da7 */
  if (C.zf) goto L_11095da7;
L_11095d82:;
  /* 11095d82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095d86 je 0x11095da7 */
  if (C.zf) goto L_11095da7;
  /* 11095d88 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095d8c jne 0x11095da0 */
  if (!C.zf) goto L_11095da0;
  /* 11095d8e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095d92 jne 0x11095da7 */
  if (!C.zf) goto L_11095da7;
  /* 11095d94 mov eax, dword ptr [0x110bea84] */
  EAX = (r32((uint32_t)(0x110bea84)));
  /* 11095d99 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11095d9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095d9e je 0x11095da7 */
  if (C.zf) goto L_11095da7;
L_11095da0:;
  /* 11095da0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11095da7:;
  /* 11095da7 jmp 0x11095d19 */
  goto L_11095d19;
L_11095dac:;
  /* 11095dac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11095daf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11095db2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11095db5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11095db8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095dbb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11095dbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11095dc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11095dc4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11095dc7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11095dca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095dcd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11095dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095dd3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11095dd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11095ddc:;
  /* 11095ddc pop edi */
  EDI = (pop32());
  /* 11095ddd pop esi */
  ESI = (pop32());
  /* 11095dde pop ebx */
  EBX = (pop32());
  /* 11095ddf mov esp, ebp */
  ESP = (EBP);
  /* 11095de1 pop ebp */
  EBP = (pop32());
  /* 11095de2 ret  */
  ESPCHK(0x11095cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x11095df0 (697 bytes, 253 insns) */
void f_11095df0(void) {
  FTRACE(0x11095df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11095df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11095df1 mov ebp, esp */
  EBP = (ESP);
  /* 11095df3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11095df6 push ebx */
  push32((uint32_t)(EBX));
  /* 11095df7 push esi */
  push32((uint32_t)(ESI));
  /* 11095df8 push edi */
  push32((uint32_t)(EDI));
  /* 11095df9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11095e00 push 9 */
  push32((uint32_t)(0x9u));
  /* 11095e02 call 0x11097db0 */
  push32(0x11095e07u); f_11097db0();
  /* 11095e07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11095e0a:;
  /* 11095e0a push 0x110bbdec */
  push32((uint32_t)(0x110bbdecu));
  /* 11095e0f push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 11095e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11095e1c call 0x11093470 */
  push32(0x11095e21u); f_11093470();
  /* 11095e21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095e24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095e27 jne 0x11095e2a */
  if (!C.zf) goto L_11095e2a;
  /* 11095e29 int3  */
  x86_unimpl("int3 @ 0x11095e29");
L_11095e2a:;
  /* 11095e2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11095e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095e2e jne 0x11095e0a */
  if (!C.zf) goto L_11095e0a;
  /* 11095e30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095e34 je 0x11095e3e */
  if (C.zf) goto L_11095e3e;
  /* 11095e36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11095e39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11095e3b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11095e3e:;
  /* 11095e3e mov eax, dword ptr [0x110c064c] */
  EAX = (r32((uint32_t)(0x110c064c)));
  /* 11095e43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11095e46 jmp 0x11095e50 */
  goto L_11095e50;
L_11095e48:;
  /* 11095e48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095e4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11095e4d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11095e50:;
  /* 11095e50 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095e54 je 0x11096072 */
  if (C.zf) goto L_11096072;
  /* 11095e5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095e5d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095e60 je 0x11096072 */
  if (C.zf) goto L_11096072;
  /* 11095e66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095e69 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11095e6c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11095e72 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095e75 je 0x11095ea4 */
  if (C.zf) goto L_11095ea4;
  /* 11095e77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095e7a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11095e7d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11095e83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11095e85 je 0x11095ea4 */
  if (C.zf) goto L_11095ea4;
  /* 11095e87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095e8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11095e8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11095e92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095e95 jne 0x11095ea9 */
  if (!C.zf) goto L_11095ea9;
  /* 11095e97 mov ecx, dword ptr [0x110bea84] */
  ECX = (r32((uint32_t)(0x110bea84)));
  /* 11095e9d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11095ea0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11095ea2 jne 0x11095ea9 */
  if (!C.zf) goto L_11095ea9;
L_11095ea4:;
  /* 11095ea4 jmp 0x1109606d */
  goto L_1109606d;
L_11095ea9:;
  /* 11095ea9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095eac cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095eb0 je 0x11095f22 */
  if (C.zf) goto L_11095f22;
  /* 11095eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11095eb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095eb9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11095ebc push ecx */
  push32((uint32_t)(ECX));
  /* 11095ebd call 0x11095960 */
  push32(0x11095ec2u); f_11095960();
  /* 11095ec2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095ec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095ec7 jne 0x11095ef3 */
  if (!C.zf) goto L_11095ef3;
L_11095ec9:;
  /* 11095ec9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095ecc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11095ecf push eax */
  push32((uint32_t)(EAX));
  /* 11095ed0 push 0x110bbdd8 */
  push32((uint32_t)(0x110bbdd8u));
  /* 11095ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095edb push 0 */
  push32((uint32_t)(0x0u));
  /* 11095edd call 0x11093470 */
  push32(0x11095ee2u); f_11093470();
  /* 11095ee2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095ee5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095ee8 jne 0x11095eeb */
  if (!C.zf) goto L_11095eeb;
  /* 11095eea int3  */
  x86_unimpl("int3 @ 0x11095eea");
L_11095eeb:;
  /* 11095eeb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11095eed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11095eef jne 0x11095ec9 */
  if (!C.zf) goto L_11095ec9;
  /* 11095ef1 jmp 0x11095f22 */
  goto L_11095f22;
L_11095ef3:;
  /* 11095ef3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095ef6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11095ef9 push eax */
  push32((uint32_t)(EAX));
  /* 11095efa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095efd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11095f00 push edx */
  push32((uint32_t)(EDX));
  /* 11095f01 push 0x110bbdcc */
  push32((uint32_t)(0x110bbdccu));
  /* 11095f06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095f08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11095f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11095f0e call 0x11093470 */
  push32(0x11095f13u); f_11093470();
  /* 11095f13 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095f16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095f19 jne 0x11095f1c */
  if (!C.zf) goto L_11095f1c;
  /* 11095f1b int3  */
  x86_unimpl("int3 @ 0x11095f1b");
L_11095f1c:;
  /* 11095f1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11095f1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095f20 jne 0x11095ef3 */
  if (!C.zf) goto L_11095ef3;
L_11095f22:;
  /* 11095f22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095f25 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11095f28 push edx */
  push32((uint32_t)(EDX));
  /* 11095f29 push 0x110bbdc4 */
  push32((uint32_t)(0x110bbdc4u));
  /* 11095f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11095f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095f36 call 0x11093470 */
  push32(0x11095f3bu); f_11093470();
  /* 11095f3b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095f3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095f41 jne 0x11095f44 */
  if (!C.zf) goto L_11095f44;
  /* 11095f43 int3  */
  x86_unimpl("int3 @ 0x11095f43");
L_11095f44:;
  /* 11095f44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11095f46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11095f48 jne 0x11095f22 */
  if (!C.zf) goto L_11095f22;
  /* 11095f4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095f4d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11095f50 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11095f56 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095f59 jne 0x11095fcc */
  if (!C.zf) goto L_11095fcc;
L_11095f5b:;
  /* 11095f5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095f5e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11095f61 push ecx */
  push32((uint32_t)(ECX));
  /* 11095f62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095f65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11095f68 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11095f6b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11095f70 push eax */
  push32((uint32_t)(EAX));
  /* 11095f71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095f74 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11095f77 push ecx */
  push32((uint32_t)(ECX));
  /* 11095f78 push 0x110bbd90 */
  push32((uint32_t)(0x110bbd90u));
  /* 11095f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11095f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11095f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095f85 call 0x11093470 */
  push32(0x11095f8au); f_11093470();
  /* 11095f8a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095f8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095f90 jne 0x11095f93 */
  if (!C.zf) goto L_11095f93;
  /* 11095f92 int3  */
  x86_unimpl("int3 @ 0x11095f92");
L_11095f93:;
  /* 11095f93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11095f95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11095f97 jne 0x11095f5b */
  if (!C.zf) goto L_11095f5b;
  /* 11095f99 cmp dword ptr [0x110c1fb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c1fb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095fa0 je 0x11095fbb */
  if (C.zf) goto L_11095fbb;
  /* 11095fa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095fa5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11095fa8 push ecx */
  push32((uint32_t)(ECX));
  /* 11095fa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095fac add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11095faf push edx */
  push32((uint32_t)(EDX));
  /* 11095fb0 call dword ptr [0x110c1fb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c1fb8))), 0x11095fb6u);
  /* 11095fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095fb9 jmp 0x11095fc7 */
  goto L_11095fc7;
L_11095fbb:;
  /* 11095fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095fbe push eax */
  push32((uint32_t)(EAX));
  /* 11095fbf call 0x110960b0 */
  push32(0x11095fc4u); f_110960b0();
  /* 11095fc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11095fc7:;
  /* 11095fc7 jmp 0x1109606d */
  goto L_1109606d;
L_11095fcc:;
  /* 11095fcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095fcf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095fd3 jne 0x11096012 */
  if (!C.zf) goto L_11096012;
L_11095fd5:;
  /* 11095fd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095fd8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11095fdb push eax */
  push32((uint32_t)(EAX));
  /* 11095fdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11095fdf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11095fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 11095fe3 push 0x110bbd68 */
  push32((uint32_t)(0x110bbd68u));
  /* 11095fe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11095fea push 0 */
  push32((uint32_t)(0x0u));
  /* 11095fec push 0 */
  push32((uint32_t)(0x0u));
  /* 11095fee push 0 */
  push32((uint32_t)(0x0u));
  /* 11095ff0 call 0x11093470 */
  push32(0x11095ff5u); f_11093470();
  /* 11095ff5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11095ff8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11095ffb jne 0x11095ffe */
  if (!C.zf) goto L_11095ffe;
  /* 11095ffd int3  */
  x86_unimpl("int3 @ 0x11095ffd");
L_11095ffe:;
  /* 11095ffe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11096000 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11096002 jne 0x11095fd5 */
  if (!C.zf) goto L_11095fd5;
  /* 11096004 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096007 push eax */
  push32((uint32_t)(EAX));
  /* 11096008 call 0x110960b0 */
  push32(0x1109600du); f_110960b0();
  /* 1109600d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096010 jmp 0x1109606d */
  goto L_1109606d;
L_11096012:;
  /* 11096012 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096015 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11096018 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1109601e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096021 jne 0x1109606d */
  if (!C.zf) goto L_1109606d;
L_11096023:;
  /* 11096023 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096026 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11096029 push ecx */
  push32((uint32_t)(ECX));
  /* 1109602a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109602d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11096030 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11096033 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11096038 push eax */
  push32((uint32_t)(EAX));
  /* 11096039 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109603c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109603f push ecx */
  push32((uint32_t)(ECX));
  /* 11096040 push 0x110bbd34 */
  push32((uint32_t)(0x110bbd34u));
  /* 11096045 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096047 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096049 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109604b push 0 */
  push32((uint32_t)(0x0u));
  /* 1109604d call 0x11093470 */
  push32(0x11096052u); f_11093470();
  /* 11096052 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096055 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096058 jne 0x1109605b */
  if (!C.zf) goto L_1109605b;
  /* 1109605a int3  */
  x86_unimpl("int3 @ 0x1109605a");
L_1109605b:;
  /* 1109605b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109605d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109605f jne 0x11096023 */
  if (!C.zf) goto L_11096023;
  /* 11096061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096064 push eax */
  push32((uint32_t)(EAX));
  /* 11096065 call 0x110960b0 */
  push32(0x1109606au); f_110960b0();
  /* 1109606a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109606d:;
  /* 1109606d jmp 0x11095e48 */
  goto L_11095e48;
L_11096072:;
  /* 11096072 push 9 */
  push32((uint32_t)(0x9u));
  /* 11096074 call 0x11097e50 */
  push32(0x11096079u); f_11097e50();
  /* 11096079 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109607c:;
  /* 1109607c push 0x110bbd1c */
  push32((uint32_t)(0x110bbd1cu));
  /* 11096081 push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 11096086 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096088 push 0 */
  push32((uint32_t)(0x0u));
  /* 1109608a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109608c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109608e call 0x11093470 */
  push32(0x11096093u); f_11093470();
  /* 11096093 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096096 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096099 jne 0x1109609c */
  if (!C.zf) goto L_1109609c;
  /* 1109609b int3  */
  x86_unimpl("int3 @ 0x1109609b");
L_1109609c:;
  /* 1109609c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1109609e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110960a0 jne 0x1109607c */
  if (!C.zf) goto L_1109607c;
  /* 110960a2 pop edi */
  EDI = (pop32());
  /* 110960a3 pop esi */
  ESI = (pop32());
  /* 110960a4 pop ebx */
  EBX = (pop32());
  /* 110960a5 mov esp, ebp */
  ESP = (EBP);
  /* 110960a7 pop ebp */
  EBP = (pop32());
  /* 110960a8 ret  */
  ESPCHK(0x11095df0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060b0 @ 0x110960b0 (276 bytes, 89 insns) */
void f_110960b0(void) {
  FTRACE(0x110960b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110960b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110960b1 mov ebp, esp */
  EBP = (ESP);
  /* 110960b3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110960b6 push ebx */
  push32((uint32_t)(EBX));
  /* 110960b7 push esi */
  push32((uint32_t)(ESI));
  /* 110960b8 push edi */
  push32((uint32_t)(EDI));
  /* 110960b9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 110960c0 jmp 0x110960cb */
  goto L_110960cb;
L_110960c2:;
  /* 110960c2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 110960c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110960c8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_110960cb:;
  /* 110960cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110960ce cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110960d2 jge 0x110960df */
  if ((C.sf==C.of)) goto L_110960df;
  /* 110960d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110960d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 110960da mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 110960dd jmp 0x110960e6 */
  goto L_110960e6;
L_110960df:;
  /* 110960df mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_110960e6:;
  /* 110960e6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 110960e9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110960ec jge 0x1109618c */
  if ((C.sf==C.of)) goto L_1109618c;
  /* 110960f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110960f5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110960f8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 110960fb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 110960fe cmp dword ptr [0x110beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096105 jle 0x11096123 */
  if ((C.zf||C.sf!=C.of)) goto L_11096123;
  /* 11096107 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1109610c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1109610f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11096115 push ecx */
  push32((uint32_t)(ECX));
  /* 11096116 call 0x1109a3c0 */
  push32(0x1109611bu); f_1109a3c0();
  /* 1109611b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109611e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11096121 jmp 0x11096140 */
  goto L_11096140;
L_11096123:;
  /* 11096123 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11096126 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1109612c mov eax, dword ptr [0x110bec98] */
  EAX = (r32((uint32_t)(0x110bec98)));
  /* 11096131 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11096133 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11096137 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1109613d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11096140:;
  /* 11096140 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096144 je 0x11096154 */
  if (C.zf) goto L_11096154;
  /* 11096146 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11096149 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1109614f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11096152 jmp 0x1109615b */
  goto L_1109615b;
L_11096154:;
  /* 11096154 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1109615b:;
  /* 1109615b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1109615e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11096161 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11096165 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11096168 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1109616e push edx */
  push32((uint32_t)(EDX));
  /* 1109616f push 0x110bbe10 */
  push32((uint32_t)(0x110bbe10u));
  /* 11096174 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11096177 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109617a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1109617e push ecx */
  push32((uint32_t)(ECX));
  /* 1109617f call 0x1109a2c0 */
  push32(0x11096184u); f_1109a2c0();
  /* 11096184 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096187 jmp 0x110960c2 */
  goto L_110960c2;
L_1109618c:;
  /* 1109618c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1109618f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11096194:;
  /* 11096194 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11096197 push eax */
  push32((uint32_t)(EAX));
  /* 11096198 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1109619b push ecx */
  push32((uint32_t)(ECX));
  /* 1109619c push 0x110bbe00 */
  push32((uint32_t)(0x110bbe00u));
  /* 110961a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110961a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110961a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110961a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110961a9 call 0x11093470 */
  push32(0x110961aeu); f_11093470();
  /* 110961ae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110961b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110961b4 jne 0x110961b7 */
  if (!C.zf) goto L_110961b7;
  /* 110961b6 int3  */
  x86_unimpl("int3 @ 0x110961b6");
L_110961b7:;
  /* 110961b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110961b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110961bb jne 0x11096194 */
  if (!C.zf) goto L_11096194;
  /* 110961bd pop edi */
  EDI = (pop32());
  /* 110961be pop esi */
  ESI = (pop32());
  /* 110961bf pop ebx */
  EBX = (pop32());
  /* 110961c0 mov esp, ebp */
  ESP = (EBP);
  /* 110961c2 pop ebp */
  EBP = (pop32());
  /* 110961c3 ret  */
  ESPCHK(0x110960b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061d0 @ 0x110961d0 (116 bytes, 46 insns) */
void f_110961d0(void) {
  FTRACE(0x110961d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110961d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110961d1 mov ebp, esp */
  EBP = (ESP);
  /* 110961d3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110961d6 push ebx */
  push32((uint32_t)(EBX));
  /* 110961d7 push esi */
  push32((uint32_t)(ESI));
  /* 110961d8 push edi */
  push32((uint32_t)(EDI));
  /* 110961d9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 110961dc push eax */
  push32((uint32_t)(EAX));
  /* 110961dd call 0x11095b50 */
  push32(0x110961e2u); f_11095b50();
  /* 110961e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110961e5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110961e9 jne 0x11096204 */
  if (!C.zf) goto L_11096204;
  /* 110961eb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110961ef jne 0x11096204 */
  if (!C.zf) goto L_11096204;
  /* 110961f1 mov ecx, dword ptr [0x110bea84] */
  ECX = (r32((uint32_t)(0x110bea84)));
  /* 110961f7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 110961fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110961fc je 0x1109623b */
  if (C.zf) goto L_1109623b;
  /* 110961fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096202 je 0x1109623b */
  if (C.zf) goto L_1109623b;
L_11096204:;
  /* 11096204 push 0x110bbe18 */
  push32((uint32_t)(0x110bbe18u));
  /* 11096209 push 0x110bb7e4 */
  push32((uint32_t)(0x110bb7e4u));
  /* 1109620e push 0 */
  push32((uint32_t)(0x0u));
  /* 11096210 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096212 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096214 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096216 call 0x11093470 */
  push32(0x1109621bu); f_11093470();
  /* 1109621b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109621e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096221 jne 0x11096224 */
  if (!C.zf) goto L_11096224;
  /* 11096223 int3  */
  x86_unimpl("int3 @ 0x11096223");
L_11096224:;
  /* 11096224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11096226 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11096228 jne 0x11096204 */
  if (!C.zf) goto L_11096204;
  /* 1109622a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109622c call 0x11095df0 */
  push32(0x11096231u); f_11095df0();
  /* 11096231 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096234 mov eax, 1 */
  EAX = (0x1u);
  /* 11096239 jmp 0x1109623d */
  goto L_1109623d;
L_1109623b:;
  /* 1109623b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1109623d:;
  /* 1109623d pop edi */
  EDI = (pop32());
  /* 1109623e pop esi */
  ESI = (pop32());
  /* 1109623f pop ebx */
  EBX = (pop32());
  /* 11096240 mov esp, ebp */
  ESP = (EBP);
  /* 11096242 pop ebp */
  EBP = (pop32());
  /* 11096243 ret  */
  ESPCHK(0x110961d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006250 @ 0x11096250 (197 bytes, 79 insns) */
void f_11096250(void) {
  FTRACE(0x11096250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11096250 push ebp */
  push32((uint32_t)(EBP));
  /* 11096251 mov ebp, esp */
  EBP = (ESP);
  /* 11096253 push ecx */
  push32((uint32_t)(ECX));
  /* 11096254 push ebx */
  push32((uint32_t)(EBX));
  /* 11096255 push esi */
  push32((uint32_t)(ESI));
  /* 11096256 push edi */
  push32((uint32_t)(EDI));
  /* 11096257 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109625b jne 0x11096262 */
  if (!C.zf) goto L_11096262;
  /* 1109625d jmp 0x1109630e */
  goto L_1109630e;
L_11096262:;
  /* 11096262 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11096269 jmp 0x11096274 */
  goto L_11096274;
L_1109626b:;
  /* 1109626b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109626e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096271 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11096274:;
  /* 11096274 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096278 jge 0x110962be */
  if ((C.sf==C.of)) goto L_110962be;
L_1109627a:;
  /* 1109627a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109627d mov edx, dword ptr [ecx*4 + 0x110bea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110bea94)));
  /* 11096284 push edx */
  push32((uint32_t)(EDX));
  /* 11096285 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096288 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109628b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1109628f push edx */
  push32((uint32_t)(EDX));
  /* 11096290 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096293 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11096296 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1109629a push edx */
  push32((uint32_t)(EDX));
  /* 1109629b push 0x110bbe74 */
  push32((uint32_t)(0x110bbe74u));
  /* 110962a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110962a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110962a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110962a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110962a8 call 0x11093470 */
  push32(0x110962adu); f_11093470();
  /* 110962ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110962b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110962b3 jne 0x110962b6 */
  if (!C.zf) goto L_110962b6;
  /* 110962b5 int3  */
  x86_unimpl("int3 @ 0x110962b5");
L_110962b6:;
  /* 110962b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110962b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110962ba jne 0x1109627a */
  if (!C.zf) goto L_1109627a;
  /* 110962bc jmp 0x1109626b */
  goto L_1109626b;
L_110962be:;
  /* 110962be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110962c1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 110962c4 push edx */
  push32((uint32_t)(EDX));
  /* 110962c5 push 0x110bbe50 */
  push32((uint32_t)(0x110bbe50u));
  /* 110962ca push 0 */
  push32((uint32_t)(0x0u));
  /* 110962cc push 0 */
  push32((uint32_t)(0x0u));
  /* 110962ce push 0 */
  push32((uint32_t)(0x0u));
  /* 110962d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110962d2 call 0x11093470 */
  push32(0x110962d7u); f_11093470();
  /* 110962d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110962da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110962dd jne 0x110962e0 */
  if (!C.zf) goto L_110962e0;
  /* 110962df int3  */
  x86_unimpl("int3 @ 0x110962df");
L_110962e0:;
  /* 110962e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110962e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110962e4 jne 0x110962be */
  if (!C.zf) goto L_110962be;
L_110962e6:;
  /* 110962e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110962e9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 110962ec push edx */
  push32((uint32_t)(EDX));
  /* 110962ed push 0x110bbe30 */
  push32((uint32_t)(0x110bbe30u));
  /* 110962f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110962f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110962f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110962f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110962fa call 0x11093470 */
  push32(0x110962ffu); f_11093470();
  /* 110962ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096302 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096305 jne 0x11096308 */
  if (!C.zf) goto L_11096308;
  /* 11096307 int3  */
  x86_unimpl("int3 @ 0x11096307");
L_11096308:;
  /* 11096308 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109630a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109630c jne 0x110962e6 */
  if (!C.zf) goto L_110962e6;
L_1109630e:;
  /* 1109630e pop edi */
  EDI = (pop32());
  /* 1109630f pop esi */
  ESI = (pop32());
  /* 11096310 pop ebx */
  EBX = (pop32());
  /* 11096311 mov esp, ebp */
  ESP = (EBP);
  /* 11096313 pop ebp */
  EBP = (pop32());
  /* 11096314 ret  */
  ESPCHK(0x11096250u, _esp0);
  ESP += 4; return;
}

/* FUN_10006320 @ 0x11096320 (329 bytes, 102 insns) */
void f_11096320(void) {
  FTRACE(0x11096320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11096320 push ebp */
  push32((uint32_t)(EBP));
  /* 11096321 mov ebp, esp */
  EBP = (ESP);
  /* 11096323 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11096326 cmp dword ptr [0x110c2130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c2130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109632d jne 0x11096334 */
  if (!C.zf) goto L_11096334;
  /* 1109632f call 0x1109ac60 */
  push32(0x11096334u); f_1109ac60();
L_11096334:;
  /* 11096334 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1109633b mov eax, dword ptr [0x110c05e8] */
  EAX = (r32((uint32_t)(0x110c05e8)));
  /* 11096340 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11096343:;
  /* 11096343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096346 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11096349 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109634b je 0x11096379 */
  if (C.zf) goto L_11096379;
  /* 1109634d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096350 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11096353 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096356 je 0x11096361 */
  if (C.zf) goto L_11096361;
  /* 11096358 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109635b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109635e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11096361:;
  /* 11096361 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096364 push eax */
  push32((uint32_t)(EAX));
  /* 11096365 call 0x110971e0 */
  push32(0x1109636au); f_110971e0();
  /* 1109636a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109636d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096370 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11096374 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11096377 jmp 0x11096343 */
  goto L_11096343;
L_11096379:;
  /* 11096379 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1109637b push 0x110bbe94 */
  push32((uint32_t)(0x110bbe94u));
  /* 11096380 push 2 */
  push32((uint32_t)(0x2u));
  /* 11096382 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096385 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1109638c push ecx */
  push32((uint32_t)(ECX));
  /* 1109638d call 0x110943b0 */
  push32(0x11096392u); f_110943b0();
  /* 11096392 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096395 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11096398 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109639b mov dword ptr [0x110c061c], edx */
  w32((uint32_t)(0x110c061c), (EDX));
  /* 110963a1 cmp dword ptr [0x110c061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110963a8 jne 0x110963b4 */
  if (!C.zf) goto L_110963b4;
  /* 110963aa push 9 */
  push32((uint32_t)(0x9u));
  /* 110963ac call 0x11093320 */
  push32(0x110963b1u); f_11093320();
  /* 110963b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110963b4:;
  /* 110963b4 mov eax, dword ptr [0x110c05e8] */
  EAX = (r32((uint32_t)(0x110c05e8)));
  /* 110963b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110963bc jmp 0x110963c7 */
  goto L_110963c7;
L_110963be:;
  /* 110963be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110963c1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110963c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_110963c7:;
  /* 110963c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110963ca movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110963cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110963cf je 0x11096437 */
  if (C.zf) goto L_11096437;
  /* 110963d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110963d4 push ecx */
  push32((uint32_t)(ECX));
  /* 110963d5 call 0x110971e0 */
  push32(0x110963dau); f_110971e0();
  /* 110963da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110963dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110963e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 110963e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110963e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110963e9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110963ec je 0x11096435 */
  if (C.zf) goto L_11096435;
  /* 110963ee push 0x79 */
  push32((uint32_t)(0x79u));
  /* 110963f0 push 0x110bbe94 */
  push32((uint32_t)(0x110bbe94u));
  /* 110963f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110963f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110963fa push ecx */
  push32((uint32_t)(ECX));
  /* 110963fb call 0x110943b0 */
  push32(0x11096400u); f_110943b0();
  /* 11096400 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096403 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096406 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11096408 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109640b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109640e jne 0x1109641a */
  if (!C.zf) goto L_1109641a;
  /* 11096410 push 9 */
  push32((uint32_t)(0x9u));
  /* 11096412 call 0x11093320 */
  push32(0x11096417u); f_11093320();
  /* 11096417 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109641a:;
  /* 1109641a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109641d push ecx */
  push32((uint32_t)(ECX));
  /* 1109641e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096421 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11096423 push eax */
  push32((uint32_t)(EAX));
  /* 11096424 call 0x11097360 */
  push32(0x11096429u); f_11097360();
  /* 11096429 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109642c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109642f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096432 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11096435:;
  /* 11096435 jmp 0x110963be */
  goto L_110963be;
L_11096437:;
  /* 11096437 push 2 */
  push32((uint32_t)(0x2u));
  /* 11096439 mov edx, dword ptr [0x110c05e8] */
  EDX = (r32((uint32_t)(0x110c05e8)));
  /* 1109643f push edx */
  push32((uint32_t)(EDX));
  /* 11096440 call 0x11094e40 */
  push32(0x11096445u); f_11094e40();
  /* 11096445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096448 mov dword ptr [0x110c05e8], 0 */
  w32((uint32_t)(0x110c05e8), (0x0u));
  /* 11096452 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096455 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1109645b mov dword ptr [0x110c2120], 1 */
  w32((uint32_t)(0x110c2120), (0x1u));
  /* 11096465 mov esp, ebp */
  ESP = (EBP);
  /* 11096467 pop ebp */
  EBP = (pop32());
  /* 11096468 ret  */
  ESPCHK(0x11096320u, _esp0);
  ESP += 4; return;
}

/* FUN_10006470 @ 0x11096470 (216 bytes, 69 insns) */
void f_11096470(void) {
  FTRACE(0x11096470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11096470 push ebp */
  push32((uint32_t)(EBP));
  /* 11096471 mov ebp, esp */
  EBP = (ESP);
  /* 11096473 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11096476 cmp dword ptr [0x110c2130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c2130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109647d jne 0x11096484 */
  if (!C.zf) goto L_11096484;
  /* 1109647f call 0x1109ac60 */
  push32(0x11096484u); f_1109ac60();
L_11096484:;
  /* 11096484 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11096489 push 0x110c0658 */
  push32((uint32_t)(0x110c0658u));
  /* 1109648e push 0 */
  push32((uint32_t)(0x0u));
  /* 11096490 call dword ptr [0x110c32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32b8))), 0x11096496u);
  /* 11096496 mov dword ptr [0x110c062c], 0x110c0658 */
  w32((uint32_t)(0x110c062c), (0x110c0658u));
  /* 110964a0 mov eax, dword ptr [0x110c214c] */
  EAX = (r32((uint32_t)(0x110c214c)));
  /* 110964a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110964a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110964aa jne 0x110964b7 */
  if (!C.zf) goto L_110964b7;
  /* 110964ac mov edx, dword ptr [0x110c062c] */
  EDX = (r32((uint32_t)(0x110c062c)));
  /* 110964b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110964b5 jmp 0x110964bf */
  goto L_110964bf;
L_110964b7:;
  /* 110964b7 mov eax, dword ptr [0x110c214c] */
  EAX = (r32((uint32_t)(0x110c214c)));
  /* 110964bc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_110964bf:;
  /* 110964bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110964c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 110964c5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 110964c8 push edx */
  push32((uint32_t)(EDX));
  /* 110964c9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 110964cc push eax */
  push32((uint32_t)(EAX));
  /* 110964cd push 0 */
  push32((uint32_t)(0x0u));
  /* 110964cf push 0 */
  push32((uint32_t)(0x0u));
  /* 110964d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110964d4 push ecx */
  push32((uint32_t)(ECX));
  /* 110964d5 call 0x11096550 */
  push32(0x110964dau); f_11096550();
  /* 110964da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110964dd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 110964e2 push 0x110bbea0 */
  push32((uint32_t)(0x110bbea0u));
  /* 110964e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 110964e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110964ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110964ef lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 110964f2 push ecx */
  push32((uint32_t)(ECX));
  /* 110964f3 call 0x110943b0 */
  push32(0x110964f8u); f_110943b0();
  /* 110964f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110964fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110964fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096502 jne 0x1109650e */
  if (!C.zf) goto L_1109650e;
  /* 11096504 push 8 */
  push32((uint32_t)(0x8u));
  /* 11096506 call 0x11093320 */
  push32(0x1109650bu); f_11093320();
  /* 1109650b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109650e:;
  /* 1109650e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11096511 push edx */
  push32((uint32_t)(EDX));
  /* 11096512 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11096515 push eax */
  push32((uint32_t)(EAX));
  /* 11096516 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096519 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109651c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1109651f push eax */
  push32((uint32_t)(EAX));
  /* 11096520 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096523 push ecx */
  push32((uint32_t)(ECX));
  /* 11096524 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11096527 push edx */
  push32((uint32_t)(EDX));
  /* 11096528 call 0x11096550 */
  push32(0x1109652du); f_11096550();
  /* 1109652d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096530 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096533 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11096536 mov dword ptr [0x110c0610], eax */
  w32((uint32_t)(0x110c0610), (EAX));
  /* 1109653b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109653e mov dword ptr [0x110c0614], ecx */
  w32((uint32_t)(0x110c0614), (ECX));
  /* 11096544 mov esp, ebp */
  ESP = (EBP);
  /* 11096546 pop ebp */
  EBP = (pop32());
  /* 11096547 ret  */
  ESPCHK(0x11096470u, _esp0);
  ESP += 4; return;
}

/* FUN_10006550 @ 0x11096550 (1060 bytes, 360 insns) */
void f_11096550(void) {
  FTRACE(0x11096550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11096550 push ebp */
  push32((uint32_t)(EBP));
  /* 11096551 mov ebp, esp */
  EBP = (ESP);
  /* 11096553 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11096556 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11096559 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1109655f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11096562 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11096568 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109656b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109656e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096572 je 0x11096585 */
  if (C.zf) goto L_11096585;
  /* 11096574 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11096577 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109657a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1109657c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109657f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096582 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11096585:;
  /* 11096585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096588 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109658b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109658e jne 0x1109665d */
  if (!C.zf) goto L_1109665d;
L_11096594:;
  /* 11096594 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096597 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109659a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109659d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110965a0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110965a3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110965a6 je 0x11096622 */
  if (C.zf) goto L_11096622;
  /* 110965a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110965ab movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110965ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110965b0 je 0x11096622 */
  if (C.zf) goto L_11096622;
  /* 110965b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110965b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110965b7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110965b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110965bb mov al, byte ptr [edx + 0x110c1e81] */
  AL = (r8((uint32_t)(EDX + 0x110c1e81)));
  /* 110965c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 110965c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110965c6 je 0x110965f7 */
  if (C.zf) goto L_110965f7;
  /* 110965c8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110965cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110965cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110965d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110965d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110965d5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110965d9 je 0x110965f7 */
  if (C.zf) goto L_110965f7;
  /* 110965db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110965de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110965e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110965e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 110965e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110965e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110965eb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 110965ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110965f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110965f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_110965f7:;
  /* 110965f7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110965fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110965fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110965ff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11096602 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11096604 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096608 je 0x1109661d */
  if (C.zf) goto L_1109661d;
  /* 1109660a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109660d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096610 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11096612 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11096614 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11096617 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109661a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1109661d:;
  /* 1109661d jmp 0x11096594 */
  goto L_11096594;
L_11096622:;
  /* 11096622 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11096625 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11096627 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109662a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1109662d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1109662f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096633 je 0x11096644 */
  if (C.zf) goto L_11096644;
  /* 11096635 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11096638 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1109663b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109663e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096641 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11096644:;
  /* 11096644 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096647 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109664a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109664d jne 0x11096658 */
  if (!C.zf) goto L_11096658;
  /* 1109664f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096652 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096655 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11096658:;
  /* 11096658 jmp 0x1109672c */
  goto L_1109672c;
L_1109665d:;
  /* 1109665d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11096660 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11096662 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096665 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11096668 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1109666a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109666e je 0x11096683 */
  if (C.zf) goto L_11096683;
  /* 11096670 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11096673 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096676 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11096678 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1109667a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109667d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096680 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11096683:;
  /* 11096683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096686 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11096688 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1109668b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109668e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096691 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11096694 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096697 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1109669d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109669f mov dl, byte ptr [ecx + 0x110c1e81] */
  DL = (r8((uint32_t)(ECX + 0x110c1e81)));
  /* 110966a5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 110966a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110966aa je 0x110966db */
  if (C.zf) goto L_110966db;
  /* 110966ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110966af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110966b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110966b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110966b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110966b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110966bd je 0x110966d2 */
  if (C.zf) goto L_110966d2;
  /* 110966bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110966c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110966c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110966c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 110966c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110966cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110966cf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_110966d2:;
  /* 110966d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110966d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110966d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_110966db:;
  /* 110966db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110966de and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 110966e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110966e7 je 0x11096707 */
  if (C.zf) goto L_11096707;
  /* 110966e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110966ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110966f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110966f3 je 0x11096707 */
  if (C.zf) goto L_11096707;
  /* 110966f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110966f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 110966fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096701 jne 0x1109665d */
  if (!C.zf) goto L_1109665d;
L_11096707:;
  /* 11096707 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109670a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11096710 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11096712 jne 0x1109671f */
  if (!C.zf) goto L_1109671f;
  /* 11096714 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096717 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109671a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109671d jmp 0x1109672c */
  goto L_1109672c;
L_1109671f:;
  /* 1109671f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096723 je 0x1109672c */
  if (C.zf) goto L_1109672c;
  /* 11096725 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11096728 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1109672c:;
  /* 1109672c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11096733:;
  /* 11096733 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096736 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11096739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109673b je 0x1109675e */
  if (C.zf) goto L_1109675e;
L_1109673d:;
  /* 1109673d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096740 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11096743 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096746 je 0x11096753 */
  if (C.zf) goto L_11096753;
  /* 11096748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109674b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109674e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096751 jne 0x1109675e */
  if (!C.zf) goto L_1109675e;
L_11096753:;
  /* 11096753 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096756 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096759 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109675c jmp 0x1109673d */
  goto L_1109673d;
L_1109675e:;
  /* 1109675e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096761 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11096764 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11096766 jne 0x1109676d */
  if (!C.zf) goto L_1109676d;
  /* 11096768 jmp 0x1109694b */
  goto L_1109694b;
L_1109676d:;
  /* 1109676d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096771 je 0x11096784 */
  if (C.zf) goto L_11096784;
  /* 11096773 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11096776 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11096779 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1109677b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109677e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096781 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11096784:;
  /* 11096784 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11096787 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11096789 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109678c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109678f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11096791:;
  /* 11096791 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11096798 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1109679f:;
  /* 1109679f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110967a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110967a5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110967a8 jne 0x110967be */
  if (!C.zf) goto L_110967be;
  /* 110967aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110967ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110967b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110967b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110967b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110967b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 110967bc jmp 0x1109679f */
  goto L_1109679f;
L_110967be:;
  /* 110967be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110967c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110967c4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110967c7 jne 0x1109681a */
  if (!C.zf) goto L_1109681a;
  /* 110967c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110967cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110967ce mov ecx, 2 */
  ECX = (0x2u);
  /* 110967d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110967d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110967d7 jne 0x11096812 */
  if (!C.zf) goto L_11096812;
  /* 110967d9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110967dd je 0x110967ff */
  if (C.zf) goto L_110967ff;
  /* 110967df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110967e2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 110967e6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110967e9 jne 0x110967f6 */
  if (!C.zf) goto L_110967f6;
  /* 110967eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110967ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110967f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110967f4 jmp 0x110967fd */
  goto L_110967fd;
L_110967f6:;
  /* 110967f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_110967fd:;
  /* 110967fd jmp 0x11096806 */
  goto L_11096806;
L_110967ff:;
  /* 110967ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11096806:;
  /* 11096806 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11096808 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109680c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1109680f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11096812:;
  /* 11096812 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11096815 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11096817 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1109681a:;
  /* 1109681a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109681d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11096820 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11096823 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11096826 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11096828 je 0x1109684e */
  if (C.zf) goto L_1109684e;
  /* 1109682a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109682e je 0x1109683f */
  if (C.zf) goto L_1109683f;
  /* 11096830 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11096833 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11096836 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11096839 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109683c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1109683f:;
  /* 1109683f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11096842 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11096844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096847 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1109684a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1109684c jmp 0x1109681a */
  goto L_1109681a;
L_1109684e:;
  /* 1109684e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096851 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11096854 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11096856 je 0x11096874 */
  if (C.zf) goto L_11096874;
  /* 11096858 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109685c jne 0x11096879 */
  if (!C.zf) goto L_11096879;
  /* 1109685e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096861 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11096864 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096867 je 0x11096874 */
  if (C.zf) goto L_11096874;
  /* 11096869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109686c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1109686f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096872 jne 0x11096879 */
  if (!C.zf) goto L_11096879;
L_11096874:;
  /* 11096874 jmp 0x11096924 */
  goto L_11096924;
L_11096879:;
  /* 11096879 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109687d je 0x11096916 */
  if (C.zf) goto L_11096916;
  /* 11096883 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096887 je 0x110968dd */
  if (C.zf) goto L_110968dd;
  /* 11096889 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109688c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109688e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11096890 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11096892 mov cl, byte ptr [eax + 0x110c1e81] */
  CL = (r8((uint32_t)(EAX + 0x110c1e81)));
  /* 11096898 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1109689b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1109689d je 0x110968c8 */
  if (C.zf) goto L_110968c8;
  /* 1109689f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110968a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110968a5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110968a7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 110968a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110968ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110968af mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 110968b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110968b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110968b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110968bb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110968be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110968c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110968c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110968c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_110968c8:;
  /* 110968c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110968cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110968ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110968d0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 110968d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110968d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110968d8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 110968db jmp 0x11096909 */
  goto L_11096909;
L_110968dd:;
  /* 110968dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110968e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110968e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110968e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110968e6 mov cl, byte ptr [eax + 0x110c1e81] */
  CL = (r8((uint32_t)(EAX + 0x110c1e81)));
  /* 110968ec and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 110968ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110968f1 je 0x11096909 */
  if (C.zf) goto L_11096909;
  /* 110968f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110968f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110968f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110968fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110968ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11096901 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096904 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11096907 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11096909:;
  /* 11096909 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1109690c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109690e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096911 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11096914 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11096916:;
  /* 11096916 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096919 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109691c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109691f jmp 0x11096791 */
  goto L_11096791;
L_11096924:;
  /* 11096924 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096928 je 0x11096939 */
  if (C.zf) goto L_11096939;
  /* 1109692a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1109692d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11096930 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11096933 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096936 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11096939:;
  /* 11096939 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1109693c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109693e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096941 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11096944 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11096946 jmp 0x11096733 */
  goto L_11096733;
L_1109694b:;
  /* 1109694b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109694f je 0x11096963 */
  if (C.zf) goto L_11096963;
  /* 11096951 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11096954 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1109695a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109695d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096960 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11096963:;
  /* 11096963 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11096966 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11096968 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109696b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109696e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11096970 mov esp, ebp */
  ESP = (EBP);
  /* 11096972 pop ebp */
  EBP = (pop32());
  /* 11096973 ret  */
  ESPCHK(0x11096550u, _esp0);
  ESP += 4; return;
}

/* FUN_10006980 @ 0x11096980 (537 bytes, 173 insns) */
void f_11096980(void) {
  FTRACE(0x11096980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11096980 push ebp */
  push32((uint32_t)(EBP));
  /* 11096981 mov ebp, esp */
  EBP = (ESP);
  /* 11096983 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11096986 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1109698d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11096994 cmp dword ptr [0x110c075c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c075c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109699b jne 0x110969da */
  if (!C.zf) goto L_110969da;
  /* 1109699d call dword ptr [0x110c3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3314))), 0x110969a3u);
  /* 110969a3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110969a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110969aa je 0x110969b8 */
  if (C.zf) goto L_110969b8;
  /* 110969ac mov dword ptr [0x110c075c], 1 */
  w32((uint32_t)(0x110c075c), (0x1u));
  /* 110969b6 jmp 0x110969da */
  goto L_110969da;
L_110969b8:;
  /* 110969b8 call dword ptr [0x110c3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3310))), 0x110969beu);
  /* 110969be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 110969c1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110969c5 je 0x110969d3 */
  if (C.zf) goto L_110969d3;
  /* 110969c7 mov dword ptr [0x110c075c], 2 */
  w32((uint32_t)(0x110c075c), (0x2u));
  /* 110969d1 jmp 0x110969da */
  goto L_110969da;
L_110969d3:;
  /* 110969d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110969d5 jmp 0x11096b95 */
  goto L_11096b95;
L_110969da:;
  /* 110969da cmp dword ptr [0x110c075c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c075c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110969e1 jne 0x11096ade */
  if (!C.zf) goto L_11096ade;
  /* 110969e7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110969eb jne 0x11096a03 */
  if (!C.zf) goto L_11096a03;
  /* 110969ed call dword ptr [0x110c3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3314))), 0x110969f3u);
  /* 110969f3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110969f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110969fa jne 0x11096a03 */
  if (!C.zf) goto L_11096a03;
  /* 110969fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110969fe jmp 0x11096b95 */
  goto L_11096b95;
L_11096a03:;
  /* 11096a03 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11096a06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11096a09:;
  /* 11096a09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096a0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11096a0e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11096a11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11096a13 je 0x11096a35 */
  if (C.zf) goto L_11096a35;
  /* 11096a15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096a18 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096a1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11096a1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096a21 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11096a23 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11096a26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11096a28 jne 0x11096a33 */
  if (!C.zf) goto L_11096a33;
  /* 11096a2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096a2d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096a30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11096a33:;
  /* 11096a33 jmp 0x11096a09 */
  goto L_11096a09;
L_11096a35:;
  /* 11096a35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096a38 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11096a3b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11096a3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096a40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11096a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096a4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096a4e push edx */
  push32((uint32_t)(EDX));
  /* 11096a4f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11096a52 push eax */
  push32((uint32_t)(EAX));
  /* 11096a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096a57 call dword ptr [0x110c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c330c))), 0x11096a5du);
  /* 11096a5d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11096a60 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096a64 je 0x11096a84 */
  if (C.zf) goto L_11096a84;
  /* 11096a66 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11096a68 push 0x110bbeac */
  push32((uint32_t)(0x110bbeacu));
  /* 11096a6d push 2 */
  push32((uint32_t)(0x2u));
  /* 11096a6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11096a72 push ecx */
  push32((uint32_t)(ECX));
  /* 11096a73 call 0x110943b0 */
  push32(0x11096a78u); f_110943b0();
  /* 11096a78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096a7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11096a7e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096a82 jne 0x11096a95 */
  if (!C.zf) goto L_11096a95;
L_11096a84:;
  /* 11096a84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11096a87 push edx */
  push32((uint32_t)(EDX));
  /* 11096a88 call dword ptr [0x110c3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3308))), 0x11096a8eu);
  /* 11096a8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11096a90 jmp 0x11096b95 */
  goto L_11096b95;
L_11096a95:;
  /* 11096a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096a97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096a99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11096a9c push eax */
  push32((uint32_t)(EAX));
  /* 11096a9d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11096aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 11096aa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096aa4 push edx */
  push32((uint32_t)(EDX));
  /* 11096aa5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11096aa8 push eax */
  push32((uint32_t)(EAX));
  /* 11096aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096aab push 0 */
  push32((uint32_t)(0x0u));
  /* 11096aad call dword ptr [0x110c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c330c))), 0x11096ab3u);
  /* 11096ab3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11096ab5 jne 0x11096acc */
  if (!C.zf) goto L_11096acc;
  /* 11096ab7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11096ab9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11096abc push ecx */
  push32((uint32_t)(ECX));
  /* 11096abd call 0x11094e40 */
  push32(0x11096ac2u); f_11094e40();
  /* 11096ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096ac5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11096acc:;
  /* 11096acc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11096acf push edx */
  push32((uint32_t)(EDX));
  /* 11096ad0 call dword ptr [0x110c3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3308))), 0x11096ad6u);
  /* 11096ad6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11096ad9 jmp 0x11096b95 */
  goto L_11096b95;
L_11096ade:;
  /* 11096ade cmp dword ptr [0x110c075c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x110c075c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096ae5 jne 0x11096b93 */
  if (!C.zf) goto L_11096b93;
  /* 11096aeb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096aef jne 0x11096b07 */
  if (!C.zf) goto L_11096b07;
  /* 11096af1 call dword ptr [0x110c3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3310))), 0x11096af7u);
  /* 11096af7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11096afa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096afe jne 0x11096b07 */
  if (!C.zf) goto L_11096b07;
  /* 11096b00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11096b02 jmp 0x11096b95 */
  goto L_11096b95;
L_11096b07:;
  /* 11096b07 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11096b0a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11096b0d:;
  /* 11096b0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096b10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11096b13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11096b15 je 0x11096b35 */
  if (C.zf) goto L_11096b35;
  /* 11096b17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096b1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096b1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11096b20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096b23 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11096b26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11096b28 jne 0x11096b33 */
  if (!C.zf) goto L_11096b33;
  /* 11096b2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096b2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096b30 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11096b33:;
  /* 11096b33 jmp 0x11096b0d */
  goto L_11096b0d;
L_11096b35:;
  /* 11096b35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096b38 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11096b3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096b3e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11096b41 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11096b46 push 0x110bbeac */
  push32((uint32_t)(0x110bbeacu));
  /* 11096b4b push 2 */
  push32((uint32_t)(0x2u));
  /* 11096b4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11096b50 push edx */
  push32((uint32_t)(EDX));
  /* 11096b51 call 0x110943b0 */
  push32(0x11096b56u); f_110943b0();
  /* 11096b56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096b59 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11096b5c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096b60 jne 0x11096b70 */
  if (!C.zf) goto L_11096b70;
  /* 11096b62 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11096b65 push eax */
  push32((uint32_t)(EAX));
  /* 11096b66 call dword ptr [0x110c3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3304))), 0x11096b6cu);
  /* 11096b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11096b6e jmp 0x11096b95 */
  goto L_11096b95;
L_11096b70:;
  /* 11096b70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11096b73 push ecx */
  push32((uint32_t)(ECX));
  /* 11096b74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11096b77 push edx */
  push32((uint32_t)(EDX));
  /* 11096b78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096b7b push eax */
  push32((uint32_t)(EAX));
  /* 11096b7c call 0x1109ac90 */
  push32(0x11096b81u); f_1109ac90();
  /* 11096b81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096b84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11096b87 push ecx */
  push32((uint32_t)(ECX));
  /* 11096b88 call dword ptr [0x110c3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3304))), 0x11096b8eu);
  /* 11096b8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096b91 jmp 0x11096b95 */
  goto L_11096b95;
L_11096b93:;
  /* 11096b93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11096b95:;
  /* 11096b95 mov esp, ebp */
  ESP = (EBP);
  /* 11096b97 pop ebp */
  EBP = (pop32());
  /* 11096b98 ret  */
  ESPCHK(0x11096980u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x11096ba0 (77 bytes, 25 insns) */
void f_11096ba0(void) {
  FTRACE(0x11096ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11096ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11096ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11096ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096ba5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11096baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11096bac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096bb0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11096bb3 push eax */
  push32((uint32_t)(EAX));
  /* 11096bb4 call dword ptr [0x110c331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c331c))), 0x11096bbau);
  /* 11096bba mov dword ptr [0x110c1fac], eax */
  w32((uint32_t)(0x110c1fac), (EAX));
  /* 11096bbf cmp dword ptr [0x110c1fac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c1fac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096bc6 jne 0x11096bcc */
  if (!C.zf) goto L_11096bcc;
  /* 11096bc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11096bca jmp 0x11096beb */
  goto L_11096beb;
L_11096bcc:;
  /* 11096bcc call 0x11098650 */
  push32(0x11096bd1u); f_11098650();
  /* 11096bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11096bd3 jne 0x11096be6 */
  if (!C.zf) goto L_11096be6;
  /* 11096bd5 mov ecx, dword ptr [0x110c1fac] */
  ECX = (r32((uint32_t)(0x110c1fac)));
  /* 11096bdb push ecx */
  push32((uint32_t)(ECX));
  /* 11096bdc call dword ptr [0x110c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3318))), 0x11096be2u);
  /* 11096be2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11096be4 jmp 0x11096beb */
  goto L_11096beb;
L_11096be6:;
  /* 11096be6 mov eax, 1 */
  EAX = (0x1u);
L_11096beb:;
  /* 11096beb pop ebp */
  EBP = (pop32());
  /* 11096bec ret  */
  ESPCHK(0x11096ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x11096bf0 (156 bytes, 48 insns) */
void f_11096bf0(void) {
  FTRACE(0x11096bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11096bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11096bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11096bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11096bf6 mov eax, dword ptr [0x110c1fa8] */
  EAX = (r32((uint32_t)(0x110c1fa8)));
  /* 11096bfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11096bfe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11096c05 jmp 0x11096c10 */
  goto L_11096c10;
L_11096c07:;
  /* 11096c07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096c0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096c0d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11096c10:;
  /* 11096c10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096c13 cmp edx, dword ptr [0x110c1fa4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x110c1fa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096c19 jge 0x11096c66 */
  if ((C.sf==C.of)) goto L_11096c66;
  /* 11096c1b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11096c20 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11096c25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096c28 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11096c2b push ecx */
  push32((uint32_t)(ECX));
  /* 11096c2c call dword ptr [0x110c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3324))), 0x11096c32u);
  /* 11096c32 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11096c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096c39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096c3c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11096c3f push eax */
  push32((uint32_t)(EAX));
  /* 11096c40 call dword ptr [0x110c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3324))), 0x11096c46u);
  /* 11096c46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096c49 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11096c4c push edx */
  push32((uint32_t)(EDX));
  /* 11096c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11096c4f mov eax, dword ptr [0x110c1fac] */
  EAX = (r32((uint32_t)(0x110c1fac)));
  /* 11096c54 push eax */
  push32((uint32_t)(EAX));
  /* 11096c55 call dword ptr [0x110c3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3320))), 0x11096c5bu);
  /* 11096c5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096c5e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096c61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11096c64 jmp 0x11096c07 */
  goto L_11096c07;
L_11096c66:;
  /* 11096c66 mov edx, dword ptr [0x110c1fa8] */
  EDX = (r32((uint32_t)(0x110c1fa8)));
  /* 11096c6c push edx */
  push32((uint32_t)(EDX));
  /* 11096c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11096c6f mov eax, dword ptr [0x110c1fac] */
  EAX = (r32((uint32_t)(0x110c1fac)));
  /* 11096c74 push eax */
  push32((uint32_t)(EAX));
  /* 11096c75 call dword ptr [0x110c3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3320))), 0x11096c7bu);
  /* 11096c7b mov ecx, dword ptr [0x110c1fac] */
  ECX = (r32((uint32_t)(0x110c1fac)));
  /* 11096c81 push ecx */
  push32((uint32_t)(ECX));
  /* 11096c82 call dword ptr [0x110c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3318))), 0x11096c88u);
  /* 11096c88 mov esp, ebp */
  ESP = (EBP);
  /* 11096c8a pop ebp */
  EBP = (pop32());
  /* 11096c8b ret  */
  ESPCHK(0x11096bf0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11096c90 (73 bytes, 19 insns) */
void f_11096c90(void) {
  FTRACE(0x11096c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11096c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11096c91 mov ebp, esp */
  EBP = (ESP);
  /* 11096c93 cmp dword ptr [0x110c05f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c05f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096c9a je 0x11096cae */
  if (C.zf) goto L_11096cae;
  /* 11096c9c cmp dword ptr [0x110c05f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c05f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096ca3 jne 0x11096cd7 */
  if (!C.zf) goto L_11096cd7;
  /* 11096ca5 cmp dword ptr [0x110c05f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c05f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096cac jne 0x11096cd7 */
  if (!C.zf) goto L_11096cd7;
L_11096cae:;
  /* 11096cae push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11096cb3 call 0x11096ce0 */
  push32(0x11096cb8u); f_11096ce0();
  /* 11096cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096cbb cmp dword ptr [0x110c0760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096cc2 je 0x11096cca */
  if (C.zf) goto L_11096cca;
  /* 11096cc4 call dword ptr [0x110c0760] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c0760))), 0x11096ccau);
L_11096cca:;
  /* 11096cca push 0xff */
  push32((uint32_t)(0xffu));
  /* 11096ccf call 0x11096ce0 */
  push32(0x11096cd4u); f_11096ce0();
  /* 11096cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11096cd7:;
  /* 11096cd7 pop ebp */
  EBP = (pop32());
  /* 11096cd8 ret  */
  ESPCHK(0x11096c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x11096ce0 (447 bytes, 131 insns) */
void f_11096ce0(void) {
  FTRACE(0x11096ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11096ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11096ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11096ce3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11096ce9 push ebx */
  push32((uint32_t)(EBX));
  /* 11096cea push esi */
  push32((uint32_t)(ESI));
  /* 11096ceb push edi */
  push32((uint32_t)(EDI));
  /* 11096cec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11096cf3 jmp 0x11096cfe */
  goto L_11096cfe;
L_11096cf5:;
  /* 11096cf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096cf8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096cfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11096cfe:;
  /* 11096cfe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096d02 jae 0x11096d17 */
  if (!C.cf) goto L_11096d17;
  /* 11096d04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096d07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11096d0a cmp edx, dword ptr [ecx*8 + 0x110beab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x110beab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096d11 jne 0x11096d15 */
  if (!C.zf) goto L_11096d15;
  /* 11096d13 jmp 0x11096d17 */
  goto L_11096d17;
L_11096d15:;
  /* 11096d15 jmp 0x11096cf5 */
  goto L_11096cf5;
L_11096d17:;
  /* 11096d17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096d1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11096d1d cmp ecx, dword ptr [eax*8 + 0x110beab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x110beab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096d24 jne 0x11096e98 */
  if (!C.zf) goto L_11096e98;
  /* 11096d2a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096d31 je 0x11096d54 */
  if (C.zf) goto L_11096d54;
  /* 11096d33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096d36 mov eax, dword ptr [edx*8 + 0x110beab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x110beab4)));
  /* 11096d3d push eax */
  push32((uint32_t)(EAX));
  /* 11096d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11096d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096d44 push 1 */
  push32((uint32_t)(0x1u));
  /* 11096d46 call 0x11093470 */
  push32(0x11096d4bu); f_11093470();
  /* 11096d4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096d4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096d51 jne 0x11096d54 */
  if (!C.zf) goto L_11096d54;
  /* 11096d53 int3  */
  x86_unimpl("int3 @ 0x11096d53");
L_11096d54:;
  /* 11096d54 cmp dword ptr [0x110c05f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c05f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096d5b je 0x11096d6f */
  if (C.zf) goto L_11096d6f;
  /* 11096d5d cmp dword ptr [0x110c05f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c05f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096d64 jne 0x11096da8 */
  if (!C.zf) goto L_11096da8;
  /* 11096d66 cmp dword ptr [0x110c05f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110c05f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096d6d jne 0x11096da8 */
  if (!C.zf) goto L_11096da8;
L_11096d6f:;
  /* 11096d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11096d71 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11096d74 push ecx */
  push32((uint32_t)(ECX));
  /* 11096d75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096d78 mov eax, dword ptr [edx*8 + 0x110beab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x110beab4)));
  /* 11096d7f push eax */
  push32((uint32_t)(EAX));
  /* 11096d80 call 0x110971e0 */
  push32(0x11096d85u); f_110971e0();
  /* 11096d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096d88 push eax */
  push32((uint32_t)(EAX));
  /* 11096d89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096d8c mov edx, dword ptr [ecx*8 + 0x110beab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x110beab4)));
  /* 11096d93 push edx */
  push32((uint32_t)(EDX));
  /* 11096d94 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11096d96 call dword ptr [0x110c329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c329c))), 0x11096d9cu);
  /* 11096d9c push eax */
  push32((uint32_t)(EAX));
  /* 11096d9d call dword ptr [0x110c32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32a0))), 0x11096da3u);
  /* 11096da3 jmp 0x11096e98 */
  goto L_11096e98;
L_11096da8:;
  /* 11096da8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096daf je 0x11096e98 */
  if (C.zf) goto L_11096e98;
  /* 11096db5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11096dba lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11096dc0 push eax */
  push32((uint32_t)(EAX));
  /* 11096dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096dc3 call dword ptr [0x110c32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32b8))), 0x11096dc9u);
  /* 11096dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11096dcb jne 0x11096de1 */
  if (!C.zf) goto L_11096de1;
  /* 11096dcd push 0x110bb714 */
  push32((uint32_t)(0x110bb714u));
  /* 11096dd2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11096dd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11096dd9 call 0x11097360 */
  push32(0x11096ddeu); f_11097360();
  /* 11096dde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11096de1:;
  /* 11096de1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11096de7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11096dea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096ded push eax */
  push32((uint32_t)(EAX));
  /* 11096dee call 0x110971e0 */
  push32(0x11096df3u); f_110971e0();
  /* 11096df3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096df6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096df9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096dfc jbe 0x11096e2a */
  if ((C.cf||C.zf)) goto L_11096e2a;
  /* 11096dfe lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11096e04 push ecx */
  push32((uint32_t)(ECX));
  /* 11096e05 call 0x110971e0 */
  push32(0x11096e0au); f_110971e0();
  /* 11096e0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096e0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096e10 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11096e14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11096e17 push 3 */
  push32((uint32_t)(0x3u));
  /* 11096e19 push 0x110bb710 */
  push32((uint32_t)(0x110bb710u));
  /* 11096e1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096e21 push ecx */
  push32((uint32_t)(ECX));
  /* 11096e22 call 0x11097bd0 */
  push32(0x11096e27u); f_11097bd0();
  /* 11096e27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11096e2a:;
  /* 11096e2a push 0x110bc168 */
  push32((uint32_t)(0x110bc168u));
  /* 11096e2f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11096e35 push edx */
  push32((uint32_t)(EDX));
  /* 11096e36 call 0x11097360 */
  push32(0x11096e3bu); f_11097360();
  /* 11096e3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096e3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096e41 push eax */
  push32((uint32_t)(EAX));
  /* 11096e42 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11096e48 push ecx */
  push32((uint32_t)(ECX));
  /* 11096e49 call 0x11097370 */
  push32(0x11096e4eu); f_11097370();
  /* 11096e4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096e51 push 0x110bb688 */
  push32((uint32_t)(0x110bb688u));
  /* 11096e56 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11096e5c push edx */
  push32((uint32_t)(EDX));
  /* 11096e5d call 0x11097370 */
  push32(0x11096e62u); f_11097370();
  /* 11096e62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096e65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096e68 mov ecx, dword ptr [eax*8 + 0x110beab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x110beab4)));
  /* 11096e6f push ecx */
  push32((uint32_t)(ECX));
  /* 11096e70 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11096e76 push edx */
  push32((uint32_t)(EDX));
  /* 11096e77 call 0x11097370 */
  push32(0x11096e7cu); f_11097370();
  /* 11096e7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096e7f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11096e84 push 0x110bc140 */
  push32((uint32_t)(0x110bc140u));
  /* 11096e89 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11096e8f push eax */
  push32((uint32_t)(EAX));
  /* 11096e90 call 0x11097b10 */
  push32(0x11096e95u); f_11097b10();
  /* 11096e95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11096e98:;
  /* 11096e98 pop edi */
  EDI = (pop32());
  /* 11096e99 pop esi */
  ESI = (pop32());
  /* 11096e9a pop ebx */
  EBX = (pop32());
  /* 11096e9b mov esp, ebp */
  ESP = (EBP);
  /* 11096e9d pop ebp */
  EBP = (pop32());
  /* 11096e9e ret  */
  ESPCHK(0x11096ce0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11096ea0 (80 bytes, 27 insns) */
void f_11096ea0(void) {
  FTRACE(0x11096ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11096ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11096ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11096ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 11096ea4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11096eab jmp 0x11096eb6 */
  goto L_11096eb6;
L_11096ead:;
  /* 11096ead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096eb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096eb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11096eb6:;
  /* 11096eb6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096eba jae 0x11096ecf */
  if (!C.cf) goto L_11096ecf;
  /* 11096ebc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096ebf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11096ec2 cmp edx, dword ptr [ecx*8 + 0x110beab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x110beab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096ec9 jne 0x11096ecd */
  if (!C.zf) goto L_11096ecd;
  /* 11096ecb jmp 0x11096ecf */
  goto L_11096ecf;
L_11096ecd:;
  /* 11096ecd jmp 0x11096ead */
  goto L_11096ead;
L_11096ecf:;
  /* 11096ecf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096ed2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11096ed5 cmp ecx, dword ptr [eax*8 + 0x110beab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x110beab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096edc jne 0x11096eea */
  if (!C.zf) goto L_11096eea;
  /* 11096ede mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096ee1 mov eax, dword ptr [edx*8 + 0x110beab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x110beab4)));
  /* 11096ee8 jmp 0x11096eec */
  goto L_11096eec;
L_11096eea:;
  /* 11096eea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11096eec:;
  /* 11096eec mov esp, ebp */
  ESP = (EBP);
  /* 11096eee pop ebp */
  EBP = (pop32());
  /* 11096eef ret  */
  ESPCHK(0x11096ea0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11096ef0 (66 bytes, 28 insns) */
void f_11096ef0(void) {
  FTRACE(0x11096ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11096ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11096ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11096ef3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096ef7 jne 0x11096f17 */
  if (!C.zf) goto L_11096f17;
  /* 11096ef9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096efd jge 0x11096f17 */
  if ((C.sf==C.of)) goto L_11096f17;
  /* 11096eff push 1 */
  push32((uint32_t)(0x1u));
  /* 11096f01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11096f04 push eax */
  push32((uint32_t)(EAX));
  /* 11096f05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11096f08 push ecx */
  push32((uint32_t)(ECX));
  /* 11096f09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11096f0c push edx */
  push32((uint32_t)(EDX));
  /* 11096f0d call 0x11096f40 */
  push32(0x11096f12u); f_11096f40();
  /* 11096f12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11096f15 jmp 0x11096f2d */
  goto L_11096f2d;
L_11096f17:;
  /* 11096f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11096f19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11096f1c push eax */
  push32((uint32_t)(EAX));
  /* 11096f1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11096f20 push ecx */
  push32((uint32_t)(ECX));
  /* 11096f21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11096f24 push edx */
  push32((uint32_t)(EDX));
  /* 11096f25 call 0x11096f40 */
  push32(0x11096f2au); f_11096f40();
  /* 11096f2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11096f2d:;
  /* 11096f2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11096f30 pop ebp */
  EBP = (pop32());
  /* 11096f31 ret  */
  ESPCHK(0x11096ef0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11096f40 (194 bytes, 71 insns) */
void f_11096f40(void) {
  FTRACE(0x11096f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11096f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11096f41 mov ebp, esp */
  EBP = (ESP);
  /* 11096f43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11096f46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11096f49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11096f4c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096f50 je 0x11096f69 */
  if (C.zf) goto L_11096f69;
  /* 11096f52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096f55 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11096f58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096f5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096f5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11096f61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11096f64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11096f66 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11096f69:;
  /* 11096f69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096f6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11096f6f:;
  /* 11096f6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11096f72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11096f74 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11096f77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11096f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11096f7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11096f7f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11096f82 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11096f85 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096f89 jbe 0x11096fa1 */
  if ((C.cf||C.zf)) goto L_11096fa1;
  /* 11096f8b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096f8e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096f91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096f94 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11096f96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096f99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096f9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11096f9f jmp 0x11096fb5 */
  goto L_11096fb5;
L_11096fa1:;
  /* 11096fa1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11096fa4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096fa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096faa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11096fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096faf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096fb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11096fb5:;
  /* 11096fb5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096fb9 ja 0x11096f6f */
  if ((!C.cf&&!C.zf)) goto L_11096f6f;
  /* 11096fbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096fbe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11096fc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096fc4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11096fc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11096fca:;
  /* 11096fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096fcd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11096fcf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11096fd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096fd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096fd8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11096fda mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11096fdc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096fdf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11096fe2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11096fe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11096fe7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11096fea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11096fed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096ff0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11096ff3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11096ff6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11096ff9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11096ffc jb 0x11096fca */
  if (C.cf) goto L_11096fca;
  /* 11096ffe mov esp, ebp */
  ESP = (EBP);
  /* 11097000 pop ebp */
  EBP = (pop32());
  /* 11097001 ret  */
  ESPCHK(0x11096f40u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11097010 (63 bytes, 24 insns) */
void f_11097010(void) {
  FTRACE(0x11097010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097010 push ebp */
  push32((uint32_t)(EBP));
  /* 11097011 mov ebp, esp */
  EBP = (ESP);
  /* 11097013 push ecx */
  push32((uint32_t)(ECX));
  /* 11097014 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097018 jne 0x11097029 */
  if (!C.zf) goto L_11097029;
  /* 1109701a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109701e jge 0x11097029 */
  if ((C.sf==C.of)) goto L_11097029;
  /* 11097020 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11097027 jmp 0x11097030 */
  goto L_11097030;
L_11097029:;
  /* 11097029 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11097030:;
  /* 11097030 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097033 push eax */
  push32((uint32_t)(EAX));
  /* 11097034 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11097037 push ecx */
  push32((uint32_t)(ECX));
  /* 11097038 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109703b push edx */
  push32((uint32_t)(EDX));
  /* 1109703c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109703f push eax */
  push32((uint32_t)(EAX));
  /* 11097040 call 0x11096f40 */
  push32(0x11097045u); f_11096f40();
  /* 11097045 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11097048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109704b mov esp, ebp */
  ESP = (EBP);
  /* 1109704d pop ebp */
  EBP = (pop32());
  /* 1109704e ret  */
  ESPCHK(0x11097010u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11097050 (30 bytes, 14 insns) */
void f_11097050(void) {
  FTRACE(0x11097050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097050 push ebp */
  push32((uint32_t)(EBP));
  /* 11097051 mov ebp, esp */
  EBP = (ESP);
  /* 11097053 push 0 */
  push32((uint32_t)(0x0u));
  /* 11097055 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11097058 push eax */
  push32((uint32_t)(EAX));
  /* 11097059 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109705c push ecx */
  push32((uint32_t)(ECX));
  /* 1109705d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097060 push edx */
  push32((uint32_t)(EDX));
  /* 11097061 call 0x11096f40 */
  push32(0x11097066u); f_11096f40();
  /* 11097066 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11097069 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109706c pop ebp */
  EBP = (pop32());
  /* 1109706d ret  */
  ESPCHK(0x11097050u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11097070 (72 bytes, 28 insns) */
void f_11097070(void) {
  FTRACE(0x11097070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097070 push ebp */
  push32((uint32_t)(EBP));
  /* 11097071 mov ebp, esp */
  EBP = (ESP);
  /* 11097073 push ecx */
  push32((uint32_t)(ECX));
  /* 11097074 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097078 jne 0x11097091 */
  if (!C.zf) goto L_11097091;
  /* 1109707a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109707e jg 0x11097091 */
  if ((!C.zf&&C.sf==C.of)) goto L_11097091;
  /* 11097080 jl 0x11097088 */
  if ((C.sf!=C.of)) goto L_11097088;
  /* 11097082 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097086 jae 0x11097091 */
  if (!C.cf) goto L_11097091;
L_11097088:;
  /* 11097088 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1109708f jmp 0x11097098 */
  goto L_11097098;
L_11097091:;
  /* 11097091 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11097098:;
  /* 11097098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109709b push eax */
  push32((uint32_t)(EAX));
  /* 1109709c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1109709f push ecx */
  push32((uint32_t)(ECX));
  /* 110970a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110970a3 push edx */
  push32((uint32_t)(EDX));
  /* 110970a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110970a7 push eax */
  push32((uint32_t)(EAX));
  /* 110970a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110970ab push ecx */
  push32((uint32_t)(ECX));
  /* 110970ac call 0x110970c0 */
  push32(0x110970b1u); f_110970c0();
  /* 110970b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110970b4 mov esp, ebp */
  ESP = (EBP);
  /* 110970b6 pop ebp */
  EBP = (pop32());
  /* 110970b7 ret  */
  ESPCHK(0x11097070u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x110970c0 (242 bytes, 91 insns) */
void f_110970c0(void) {
  FTRACE(0x110970c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110970c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110970c1 mov ebp, esp */
  EBP = (ESP);
  /* 110970c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110970c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110970c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110970cc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110970d0 je 0x110970f4 */
  if (C.zf) goto L_110970f4;
  /* 110970d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110970d5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 110970d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110970db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110970de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110970e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110970e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110970e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110970e9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110970ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110970ee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110970f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_110970f4:;
  /* 110970f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110970f7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_110970fa:;
  /* 110970fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110970fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110970ff push ecx */
  push32((uint32_t)(ECX));
  /* 11097100 push eax */
  push32((uint32_t)(EAX));
  /* 11097101 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11097104 push edx */
  push32((uint32_t)(EDX));
  /* 11097105 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097108 push eax */
  push32((uint32_t)(EAX));
  /* 11097109 call 0x1109b040 */
  push32(0x1109710eu); f_1109b040();
  /* 1109710e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11097111 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11097114 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11097116 push edx */
  push32((uint32_t)(EDX));
  /* 11097117 push ecx */
  push32((uint32_t)(ECX));
  /* 11097118 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109711b push eax */
  push32((uint32_t)(EAX));
  /* 1109711c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109711f push ecx */
  push32((uint32_t)(ECX));
  /* 11097120 call 0x1109afd0 */
  push32(0x11097125u); f_1109afd0();
  /* 11097125 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11097128 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1109712b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109712f jbe 0x11097147 */
  if ((C.cf||C.zf)) goto L_11097147;
  /* 11097131 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11097134 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109713a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1109713c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109713f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097142 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11097145 jmp 0x1109715b */
  goto L_1109715b;
L_11097147:;
  /* 11097147 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109714a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109714d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097150 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11097152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097155 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097158 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1109715b:;
  /* 1109715b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109715f ja 0x110970fa */
  if ((!C.cf&&!C.zf)) goto L_110970fa;
  /* 11097161 jb 0x11097169 */
  if (C.cf) goto L_11097169;
  /* 11097163 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097167 ja 0x110970fa */
  if ((!C.cf&&!C.zf)) goto L_110970fa;
L_11097169:;
  /* 11097169 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109716c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1109716f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097172 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097175 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11097178:;
  /* 11097178 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109717b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1109717d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11097180 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097183 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097186 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11097188 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1109718a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109718d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11097190 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11097192 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097195 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097198 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1109719b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109719e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110971a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110971a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110971a7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110971aa jb 0x11097178 */
  if (C.cf) goto L_11097178;
  /* 110971ac mov esp, ebp */
  ESP = (EBP);
  /* 110971ae pop ebp */
  EBP = (pop32());
  /* 110971af ret 0x14 */
  ESPCHK(0x110970c0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x110971c0 (31 bytes, 15 insns) */
void f_110971c0(void) {
  FTRACE(0x110971c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110971c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110971c1 mov ebp, esp */
  EBP = (ESP);
  /* 110971c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110971c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110971c8 push eax */
  push32((uint32_t)(EAX));
  /* 110971c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110971cc push ecx */
  push32((uint32_t)(ECX));
  /* 110971cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110971d0 push edx */
  push32((uint32_t)(EDX));
  /* 110971d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110971d4 push eax */
  push32((uint32_t)(EAX));
  /* 110971d5 call 0x110970c0 */
  push32(0x110971dau); f_110970c0();
  /* 110971da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110971dd pop ebp */
  EBP = (pop32());
  /* 110971de ret  */
  ESPCHK(0x110971c0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x110971e0 (123 bytes, 44 insns) */
void f_110971e0(void) {
  FTRACE(0x110971e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110971e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110971e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110971ea je 0x11097200 */
  if (C.zf) goto L_11097200;
L_110971ec:;
  /* 110971ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 110971ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110971ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110971f1 je 0x11097233 */
  if (C.zf) goto L_11097233;
  /* 110971f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110971f9 jne 0x110971ec */
  if (!C.zf) goto L_110971ec;
  /* 110971fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11097200:;
  /* 11097200 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11097202 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11097207 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097209 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1109720c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1109720e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097211 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11097216 je 0x11097200 */
  if (C.zf) goto L_11097200;
  /* 11097218 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1109721b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1109721d je 0x11097251 */
  if (C.zf) goto L_11097251;
  /* 1109721f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11097221 je 0x11097247 */
  if (C.zf) goto L_11097247;
  /* 11097223 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11097228 je 0x1109723d */
  if (C.zf) goto L_1109723d;
  /* 1109722a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1109722f je 0x11097233 */
  if (C.zf) goto L_11097233;
  /* 11097231 jmp 0x11097200 */
  goto L_11097200;
L_11097233:;
  /* 11097233 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11097236 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1109723a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109723c ret  */
  ESPCHK(0x110971e0u, _esp0);
  ESP += 4; return;
L_1109723d:;
  /* 1109723d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11097240 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11097244 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097246 ret  */
  ESPCHK(0x110971e0u, _esp0);
  ESP += 4; return;
L_11097247:;
  /* 11097247 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1109724a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1109724e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097250 ret  */
  ESPCHK(0x110971e0u, _esp0);
  ESP += 4; return;
L_11097251:;
  /* 11097251 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11097254 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11097258 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109725a ret  */
  ESPCHK(0x110971e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007260 @ 0x11097260 (249 bytes, 93 insns) */
void f_11097260(void) {
  FTRACE(0x11097260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097260 push ebp */
  push32((uint32_t)(EBP));
  /* 11097261 mov ebp, esp */
  EBP = (ESP);
  /* 11097263 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097266 push ebx */
  push32((uint32_t)(EBX));
  /* 11097267 push esi */
  push32((uint32_t)(ESI));
  /* 11097268 push edi */
  push32((uint32_t)(EDI));
  /* 11097269 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1109726c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1109726f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11097272 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11097275:;
  /* 11097275 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097279 jne 0x11097299 */
  if (!C.zf) goto L_11097299;
  /* 1109727b push 0x110bc1a0 */
  push32((uint32_t)(0x110bc1a0u));
  /* 11097280 push 0 */
  push32((uint32_t)(0x0u));
  /* 11097282 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11097284 push 0x110bc194 */
  push32((uint32_t)(0x110bc194u));
  /* 11097289 push 2 */
  push32((uint32_t)(0x2u));
  /* 1109728b call 0x11093470 */
  push32(0x11097290u); f_11093470();
  /* 11097290 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11097293 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097296 jne 0x11097299 */
  if (!C.zf) goto L_11097299;
  /* 11097298 int3  */
  x86_unimpl("int3 @ 0x11097298");
L_11097299:;
  /* 11097299 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109729b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109729d jne 0x11097275 */
  if (!C.zf) goto L_11097275;
L_1109729f:;
  /* 1109729f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110972a3 jne 0x110972c3 */
  if (!C.zf) goto L_110972c3;
  /* 110972a5 push 0x110bc184 */
  push32((uint32_t)(0x110bc184u));
  /* 110972aa push 0 */
  push32((uint32_t)(0x0u));
  /* 110972ac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 110972ae push 0x110bc194 */
  push32((uint32_t)(0x110bc194u));
  /* 110972b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 110972b5 call 0x11093470 */
  push32(0x110972bau); f_11093470();
  /* 110972ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110972bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110972c0 jne 0x110972c3 */
  if (!C.zf) goto L_110972c3;
  /* 110972c2 int3  */
  x86_unimpl("int3 @ 0x110972c2");
L_110972c3:;
  /* 110972c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110972c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110972c7 jne 0x1109729f */
  if (!C.zf) goto L_1109729f;
  /* 110972c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110972cc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 110972d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 110972d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110972d9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 110972dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110972df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110972e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 110972e4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110972e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110972ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 110972ed mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110972f0 push edx */
  push32((uint32_t)(EDX));
  /* 110972f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110972f4 push eax */
  push32((uint32_t)(EAX));
  /* 110972f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110972f8 push ecx */
  push32((uint32_t)(ECX));
  /* 110972f9 call 0x1109b340 */
  push32(0x110972feu); f_1109b340();
  /* 110972fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11097301 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11097304 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11097307 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1109730a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109730d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11097310 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11097313 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11097316 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109731a jl 0x1109733e */
  if ((C.sf!=C.of)) goto L_1109733e;
  /* 1109731c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109731f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11097321 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11097324 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11097326 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1109732c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1109732f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11097332 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11097334 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097337 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109733a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1109733c jmp 0x1109734f */
  goto L_1109734f;
L_1109733e:;
  /* 1109733e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11097341 push eax */
  push32((uint32_t)(EAX));
  /* 11097342 push 0 */
  push32((uint32_t)(0x0u));
  /* 11097344 call 0x1109b0c0 */
  push32(0x11097349u); f_1109b0c0();
  /* 11097349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109734c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1109734f:;
  /* 1109734f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11097352 pop edi */
  EDI = (pop32());
  /* 11097353 pop esi */
  ESI = (pop32());
  /* 11097354 pop ebx */
  EBX = (pop32());
  /* 11097355 mov esp, ebp */
  ESP = (EBP);
  /* 11097357 pop ebp */
  EBP = (pop32());
  /* 11097358 ret  */
  ESPCHK(0x11097260u, _esp0);
  ESP += 4; return;
}

/* FUN_10007360 @ 0x11097360 (7 bytes, 3 insns) */
void f_11097360(void) {
  FTRACE(0x11097360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097360 push edi */
  push32((uint32_t)(EDI));
  /* 11097361 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11097365 jmp 0x110973d1 */
  jmp_ind(0x110973d1u); return;
}

/* FUN_10007370 @ 0x11097370 (224 bytes, 84 insns) */
void f_11097370(void) {
  FTRACE(0x11097370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097370 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11097374 push edi */
  push32((uint32_t)(EDI));
  /* 11097375 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1109737b je 0x1109738c */
  if (C.zf) goto L_1109738c;
L_1109737d:;
  /* 1109737d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1109737f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11097380 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11097382 je 0x110973bf */
  if (C.zf) goto L_110973bf;
  /* 11097384 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1109738a jne 0x1109737d */
  if (!C.zf) goto L_1109737d;
L_1109738c:;
  /* 1109738c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1109738e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11097393 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097395 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11097398 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1109739a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109739d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 110973a2 je 0x1109738c */
  if (C.zf) goto L_1109738c;
  /* 110973a4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 110973a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110973a9 je 0x110973ce */
  if (C.zf) goto L_110973ce;
  /* 110973ab test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 110973ad je 0x110973c9 */
  if (C.zf) goto L_110973c9;
  /* 110973af test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 110973b4 je 0x110973c4 */
  if (C.zf) goto L_110973c4;
  /* 110973b6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 110973bb je 0x110973bf */
  if (C.zf) goto L_110973bf;
  /* 110973bd jmp 0x1109738c */
  goto L_1109738c;
L_110973bf:;
  /* 110973bf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 110973c2 jmp 0x110973d1 */
  goto L_110973d1;
L_110973c4:;
  /* 110973c4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 110973c7 jmp 0x110973d1 */
  goto L_110973d1;
L_110973c9:;
  /* 110973c9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 110973cc jmp 0x110973d1 */
  goto L_110973d1;
L_110973ce:;
  /* 110973ce lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_110973d1:;
  /* 110973d1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 110973d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110973db je 0x110973f6 */
  if (C.zf) goto L_110973f6;
L_110973dd:;
  /* 110973dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110973df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110973e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110973e2 je 0x11097448 */
  if (C.zf) goto L_11097448;
  /* 110973e4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 110973e6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110973e7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110973ed jne 0x110973dd */
  if (!C.zf) goto L_110973dd;
  /* 110973ef jmp 0x110973f6 */
  goto L_110973f6;
L_110973f1:;
  /* 110973f1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110973f3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_110973f6:;
  /* 110973f6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 110973fb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 110973fd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110973ff xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11097402 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11097404 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11097406 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097409 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1109740e je 0x110973f1 */
  if (C.zf) goto L_110973f1;
  /* 11097410 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11097412 je 0x11097448 */
  if (C.zf) goto L_11097448;
  /* 11097414 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11097416 je 0x1109743f */
  if (C.zf) goto L_1109743f;
  /* 11097418 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1109741e je 0x11097432 */
  if (C.zf) goto L_11097432;
  /* 11097420 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11097426 je 0x1109742a */
  if (C.zf) goto L_1109742a;
  /* 11097428 jmp 0x110973f1 */
  goto L_110973f1;
L_1109742a:;
  /* 1109742a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1109742c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11097430 pop edi */
  EDI = (pop32());
  /* 11097431 ret  */
  ESPCHK(0x11097370u, _esp0);
  ESP += 4; return;
L_11097432:;
  /* 11097432 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11097435 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11097439 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1109743d pop edi */
  EDI = (pop32());
  /* 1109743e ret  */
  ESPCHK(0x11097370u, _esp0);
  ESP += 4; return;
L_1109743f:;
  /* 1109743f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11097442 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11097446 pop edi */
  EDI = (pop32());
  /* 11097447 ret  */
  ESPCHK(0x11097370u, _esp0);
  ESP += 4; return;
L_11097448:;
  /* 11097448 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1109744a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1109744e pop edi */
  EDI = (pop32());
  /* 1109744f ret  */
  ESPCHK(0x11097370u, _esp0);
  ESP += 4; return;
}

/* FUN_10007450 @ 0x11097450 (243 bytes, 91 insns) */
void f_11097450(void) {
  FTRACE(0x11097450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097450 push ebp */
  push32((uint32_t)(EBP));
  /* 11097451 mov ebp, esp */
  EBP = (ESP);
  /* 11097453 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097456 push ebx */
  push32((uint32_t)(EBX));
  /* 11097457 push esi */
  push32((uint32_t)(ESI));
  /* 11097458 push edi */
  push32((uint32_t)(EDI));
  /* 11097459 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1109745c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1109745f:;
  /* 1109745f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097463 jne 0x11097483 */
  if (!C.zf) goto L_11097483;
  /* 11097465 push 0x110bc1a0 */
  push32((uint32_t)(0x110bc1a0u));
  /* 1109746a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109746c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1109746e push 0x110bc1b0 */
  push32((uint32_t)(0x110bc1b0u));
  /* 11097473 push 2 */
  push32((uint32_t)(0x2u));
  /* 11097475 call 0x11093470 */
  push32(0x1109747au); f_11093470();
  /* 1109747a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109747d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097480 jne 0x11097483 */
  if (!C.zf) goto L_11097483;
  /* 11097482 int3  */
  x86_unimpl("int3 @ 0x11097482");
L_11097483:;
  /* 11097483 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11097485 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11097487 jne 0x1109745f */
  if (!C.zf) goto L_1109745f;
L_11097489:;
  /* 11097489 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109748d jne 0x110974ad */
  if (!C.zf) goto L_110974ad;
  /* 1109748f push 0x110bc184 */
  push32((uint32_t)(0x110bc184u));
  /* 11097494 push 0 */
  push32((uint32_t)(0x0u));
  /* 11097496 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11097498 push 0x110bc1b0 */
  push32((uint32_t)(0x110bc1b0u));
  /* 1109749d push 2 */
  push32((uint32_t)(0x2u));
  /* 1109749f call 0x11093470 */
  push32(0x110974a4u); f_11093470();
  /* 110974a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110974a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110974aa jne 0x110974ad */
  if (!C.zf) goto L_110974ad;
  /* 110974ac int3  */
  x86_unimpl("int3 @ 0x110974ac");
L_110974ad:;
  /* 110974ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110974af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110974b1 jne 0x11097489 */
  if (!C.zf) goto L_11097489;
  /* 110974b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110974b6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 110974bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110974c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110974c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 110974c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110974c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110974cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 110974ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 110974d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110974d4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 110974d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110974da push ecx */
  push32((uint32_t)(ECX));
  /* 110974db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110974de push edx */
  push32((uint32_t)(EDX));
  /* 110974df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110974e2 push eax */
  push32((uint32_t)(EAX));
  /* 110974e3 call 0x1109b340 */
  push32(0x110974e8u); f_1109b340();
  /* 110974e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110974eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 110974ee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110974f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 110974f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110974f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110974fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 110974fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11097500 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097504 jl 0x11097528 */
  if ((C.sf!=C.of)) goto L_11097528;
  /* 11097506 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11097509 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1109750b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1109750e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11097510 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11097516 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11097519 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109751c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1109751e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097521 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11097524 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11097526 jmp 0x11097539 */
  goto L_11097539;
L_11097528:;
  /* 11097528 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1109752b push edx */
  push32((uint32_t)(EDX));
  /* 1109752c push 0 */
  push32((uint32_t)(0x0u));
  /* 1109752e call 0x1109b0c0 */
  push32(0x11097533u); f_1109b0c0();
  /* 11097533 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11097536 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11097539:;
  /* 11097539 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1109753c pop edi */
  EDI = (pop32());
  /* 1109753d pop esi */
  ESI = (pop32());
  /* 1109753e pop ebx */
  EBX = (pop32());
  /* 1109753f mov esp, ebp */
  ESP = (EBP);
  /* 11097541 pop ebp */
  EBP = (pop32());
  /* 11097542 ret  */
  ESPCHK(0x11097450u, _esp0);
  ESP += 4; return;
}

/* FUN_10007550 @ 0x11097550 (47 bytes, 17 insns) */
void f_11097550(void) {
  FTRACE(0x11097550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097550 push ecx */
  push32((uint32_t)(ECX));
  /* 11097551 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097556 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1109755a jb 0x11097570 */
  if (C.cf) goto L_11097570;
L_1109755c:;
  /* 1109755c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097562 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097567 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11097569 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109756e jae 0x1109755c */
  if (!C.cf) goto L_1109755c;
L_11097570:;
  /* 11097570 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097572 mov eax, esp */
  EAX = (ESP);
  /* 11097574 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11097576 mov esp, ecx */
  ESP = (ECX);
  /* 11097578 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1109757a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1109757d push eax */
  push32((uint32_t)(EAX));
  /* 1109757e ret  */
  ESPCHK(0x11097550u, _esp0);
  ESP += 4; return;
}

/* FUN_10007580 @ 0x11097580 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11097580(void) {
  FTRACE(0x11097580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097580 push ebp */
  push32((uint32_t)(EBP));
  /* 11097581 mov ebp, esp */
  EBP = (ESP);
  /* 11097583 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097586 push esi */
  push32((uint32_t)(ESI));
  /* 11097587 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109758b je 0x11097593 */
  if (C.zf) goto L_11097593;
  /* 1109758d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097591 jne 0x11097598 */
  if (!C.zf) goto L_11097598;
L_11097593:;
  /* 11097593 jmp 0x11097768 */
  goto L_11097768;
L_11097598:;
  /* 11097598 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109759c je 0x110975b4 */
  if (C.zf) goto L_110975b4;
  /* 1109759e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110975a2 je 0x110975b4 */
  if (C.zf) goto L_110975b4;
  /* 110975a4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110975a8 je 0x110975b4 */
  if (C.zf) goto L_110975b4;
  /* 110975aa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110975ae jne 0x11097691 */
  if (!C.zf) goto L_11097691;
L_110975b4:;
  /* 110975b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 110975b6 call 0x11097db0 */
  push32(0x110975bbu); f_11097db0();
  /* 110975bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110975be cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110975c2 je 0x110975ca */
  if (C.zf) goto L_110975ca;
  /* 110975c4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110975c8 jne 0x1109760f */
  if (!C.zf) goto L_1109760f;
L_110975ca:;
  /* 110975ca cmp dword ptr [0x110c0774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110975d1 jne 0x1109760f */
  if (!C.zf) goto L_1109760f;
  /* 110975d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 110975d5 push 0x110977b0 */
  push32((uint32_t)(0x110977b0u));
  /* 110975da call dword ptr [0x110c3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3328))), 0x110975e0u);
  /* 110975e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110975e3 jne 0x110975f1 */
  if (!C.zf) goto L_110975f1;
  /* 110975e5 mov dword ptr [0x110c0774], 1 */
  w32((uint32_t)(0x110c0774), (0x1u));
  /* 110975ef jmp 0x1109760f */
  goto L_1109760f;
L_110975f1:;
  /* 110975f1 call dword ptr [0x110c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32e0))), 0x110975f7u);
  /* 110975f7 mov esi, eax */
  ESI = (EAX);
  /* 110975f9 call 0x1109c290 */
  push32(0x110975feu); f_1109c290();
  /* 110975fe mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11097600 push 1 */
  push32((uint32_t)(0x1u));
  /* 11097602 call 0x11097e50 */
  push32(0x11097607u); f_11097e50();
  /* 11097607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109760a jmp 0x11097768 */
  goto L_11097768;
L_1109760f:;
  /* 1109760f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097612 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11097615 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097618 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1109761b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1109761e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097622 ja 0x11097682 */
  if ((!C.cf&&!C.zf)) goto L_11097682;
  /* 11097624 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097627 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11097629 mov dl, byte ptr [eax + 0x1109778f] */
  DL = (r8((uint32_t)(EAX + 0x1109778f)));
  /* 1109762f jmp dword ptr [edx*4 + 0x1109777b] */
  switch (EDX) {
    case 0: goto L_11097636;
    case 1: goto L_11097670;
    case 2: goto L_1109764a;
    case 3: goto L_1109765d;
    case 4: goto L_11097682;
    default: x86_unimpl("switch@0x1109762f out of table"); return;
  }
L_11097636:;
  /* 11097636 mov ecx, dword ptr [0x110c0764] */
  ECX = (r32((uint32_t)(0x110c0764)));
  /* 1109763c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1109763f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11097642 mov dword ptr [0x110c0764], edx */
  w32((uint32_t)(0x110c0764), (EDX));
  /* 11097648 jmp 0x11097682 */
  goto L_11097682;
L_1109764a:;
  /* 1109764a mov eax, dword ptr [0x110c0768] */
  EAX = (r32((uint32_t)(0x110c0768)));
  /* 1109764f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11097652 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11097655 mov dword ptr [0x110c0768], ecx */
  w32((uint32_t)(0x110c0768), (ECX));
  /* 1109765b jmp 0x11097682 */
  goto L_11097682;
L_1109765d:;
  /* 1109765d mov edx, dword ptr [0x110c076c] */
  EDX = (r32((uint32_t)(0x110c076c)));
  /* 11097663 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11097666 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11097669 mov dword ptr [0x110c076c], eax */
  w32((uint32_t)(0x110c076c), (EAX));
  /* 1109766e jmp 0x11097682 */
  goto L_11097682;
L_11097670:;
  /* 11097670 mov ecx, dword ptr [0x110c0770] */
  ECX = (r32((uint32_t)(0x110c0770)));
  /* 11097676 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11097679 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109767c mov dword ptr [0x110c0770], edx */
  w32((uint32_t)(0x110c0770), (EDX));
L_11097682:;
  /* 11097682 push 1 */
  push32((uint32_t)(0x1u));
  /* 11097684 call 0x11097e50 */
  push32(0x11097689u); f_11097e50();
  /* 11097689 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109768c jmp 0x11097763 */
  goto L_11097763;
L_11097691:;
  /* 11097691 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097695 je 0x110976a8 */
  if (C.zf) goto L_110976a8;
  /* 11097697 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109769b je 0x110976a8 */
  if (C.zf) goto L_110976a8;
  /* 1109769d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110976a1 je 0x110976a8 */
  if (C.zf) goto L_110976a8;
  /* 110976a3 jmp 0x11097768 */
  goto L_11097768;
L_110976a8:;
  /* 110976a8 call 0x11093df0 */
  push32(0x110976adu); f_11093df0();
  /* 110976ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110976b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110976b3 cmp dword ptr [eax + 0x50], 0x110bec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x110bec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110976ba jne 0x11097705 */
  if (!C.zf) goto L_11097705;
  /* 110976bc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 110976c1 push 0x110bc1bc */
  push32((uint32_t)(0x110bc1bcu));
  /* 110976c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 110976c8 mov ecx, dword ptr [0x110bec80] */
  ECX = (r32((uint32_t)(0x110bec80)));
  /* 110976ce push ecx */
  push32((uint32_t)(ECX));
  /* 110976cf call 0x110943b0 */
  push32(0x110976d4u); f_110943b0();
  /* 110976d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110976d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110976da mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 110976dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110976e0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110976e4 je 0x11097703 */
  if (C.zf) goto L_11097703;
  /* 110976e6 mov ecx, dword ptr [0x110bec80] */
  ECX = (r32((uint32_t)(0x110bec80)));
  /* 110976ec push ecx */
  push32((uint32_t)(ECX));
  /* 110976ed push 0x110bec00 */
  push32((uint32_t)(0x110bec00u));
  /* 110976f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110976f5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 110976f8 push eax */
  push32((uint32_t)(EAX));
  /* 110976f9 call 0x1109ac90 */
  push32(0x110976feu); f_1109ac90();
  /* 110976fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11097701 jmp 0x11097705 */
  goto L_11097705;
L_11097703:;
  /* 11097703 jmp 0x11097768 */
  goto L_11097768;
L_11097705:;
  /* 11097705 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097708 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1109770b push edx */
  push32((uint32_t)(EDX));
  /* 1109770c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109770f push eax */
  push32((uint32_t)(EAX));
  /* 11097710 call 0x11097a90 */
  push32(0x11097715u); f_11097a90();
  /* 11097715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11097718 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1109771b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109771f jne 0x11097723 */
  if (!C.zf) goto L_11097723;
  /* 11097721 jmp 0x11097768 */
  goto L_11097768;
L_11097723:;
  /* 11097723 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097726 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11097729 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1109772c:;
  /* 1109772c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109772f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11097732 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097735 jne 0x11097763 */
  if (!C.zf) goto L_11097763;
  /* 11097737 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109773a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109773d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11097740 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097743 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097746 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11097749 mov edx, dword ptr [0x110bec84] */
  EDX = (r32((uint32_t)(0x110bec84)));
  /* 1109774f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11097752 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097755 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11097758 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109775a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109775d jb 0x11097761 */
  if (C.cf) goto L_11097761;
  /* 1109775f jmp 0x11097763 */
  goto L_11097763;
L_11097761:;
  /* 11097761 jmp 0x1109772c */
  goto L_1109772c;
L_11097763:;
  /* 11097763 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11097766 jmp 0x11097776 */
  goto L_11097776;
L_11097768:;
  /* 11097768 call 0x1109c280 */
  push32(0x1109776du); f_1109c280();
  /* 1109776d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11097773 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11097776:;
  /* 11097776 pop esi */
  ESI = (pop32());
  /* 11097777 mov esp, ebp */
  ESP = (EBP);
  /* 11097779 pop ebp */
  EBP = (pop32());
  /* 1109777a ret  */
  ESPCHK(0x11097580u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x110977b0 (146 bytes, 45 insns) */
void f_110977b0(void) {
  FTRACE(0x110977b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110977b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110977b1 mov ebp, esp */
  EBP = (ESP);
  /* 110977b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110977b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 110977b8 call 0x11097db0 */
  push32(0x110977bdu); f_11097db0();
  /* 110977bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110977c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110977c4 jne 0x110977de */
  if (!C.zf) goto L_110977de;
  /* 110977c6 mov dword ptr [ebp - 8], 0x110c0764 */
  w32((uint32_t)(EBP + -0x8), (0x110c0764u));
  /* 110977cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110977d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110977d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110977d5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 110977dc jmp 0x110977f4 */
  goto L_110977f4;
L_110977de:;
  /* 110977de mov dword ptr [ebp - 8], 0x110c0768 */
  w32((uint32_t)(EBP + -0x8), (0x110c0768u));
  /* 110977e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110977e8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110977ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110977ed mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_110977f4:;
  /* 110977f4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110977f8 jne 0x11097808 */
  if (!C.zf) goto L_11097808;
  /* 110977fa push 1 */
  push32((uint32_t)(0x1u));
  /* 110977fc call 0x11097e50 */
  push32(0x11097801u); f_11097e50();
  /* 11097801 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11097804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11097806 jmp 0x1109783c */
  goto L_1109783c;
L_11097808:;
  /* 11097808 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109780c je 0x1109782d */
  if (C.zf) goto L_1109782d;
  /* 1109780e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097811 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11097817 push 1 */
  push32((uint32_t)(0x1u));
  /* 11097819 call 0x11097e50 */
  push32(0x1109781eu); f_11097e50();
  /* 1109781e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11097821 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097824 push edx */
  push32((uint32_t)(EDX));
  /* 11097825 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11097828u);
  /* 11097828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109782b jmp 0x11097837 */
  goto L_11097837;
L_1109782d:;
  /* 1109782d push 1 */
  push32((uint32_t)(0x1u));
  /* 1109782f call 0x11097e50 */
  push32(0x11097834u); f_11097e50();
  /* 11097834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11097837:;
  /* 11097837 mov eax, 1 */
  EAX = (0x1u);
L_1109783c:;
  /* 1109783c mov esp, ebp */
  ESP = (EBP);
  /* 1109783e pop ebp */
  EBP = (pop32());
  /* 1109783f ret 4 */
  ESPCHK(0x110977b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007850 @ 0x11097850 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11097850(void) {
  FTRACE(0x11097850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097850 push ebp */
  push32((uint32_t)(EBP));
  /* 11097851 mov ebp, esp */
  EBP = (ESP);
  /* 11097853 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097856 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1109785d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097860 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11097863 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11097866 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097869 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1109786c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097870 ja 0x1109791e */
  if ((!C.cf&&!C.zf)) goto L_1109791e;
  /* 11097876 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11097879 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1109787b mov dl, byte ptr [eax + 0x11097a72] */
  DL = (r8((uint32_t)(EAX + 0x11097a72)));
  /* 11097881 jmp dword ptr [edx*4 + 0x11097a5a] */
  switch (EDX) {
    case 0: goto L_11097888;
    case 1: goto L_110978f3;
    case 2: goto L_110978d9;
    case 3: goto L_110978a5;
    case 4: goto L_110978bf;
    case 5: goto L_1109791e;
    default: x86_unimpl("switch@0x11097881 out of table"); return;
  }
L_11097888:;
  /* 11097888 mov dword ptr [ebp - 0x18], 0x110c0764 */
  w32((uint32_t)(EBP + -0x18), (0x110c0764u));
  /* 1109788f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11097892 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11097894 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11097897 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1109789a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109789d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110978a0 jmp 0x11097926 */
  goto L_11097926;
L_110978a5:;
  /* 110978a5 mov dword ptr [ebp - 0x18], 0x110c0768 */
  w32((uint32_t)(EBP + -0x18), (0x110c0768u));
  /* 110978ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110978af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110978b1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 110978b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110978b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110978ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110978bd jmp 0x11097926 */
  goto L_11097926;
L_110978bf:;
  /* 110978bf mov dword ptr [ebp - 0x18], 0x110c076c */
  w32((uint32_t)(EBP + -0x18), (0x110c076cu));
  /* 110978c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110978c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110978cb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 110978ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110978d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110978d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110978d7 jmp 0x11097926 */
  goto L_11097926;
L_110978d9:;
  /* 110978d9 mov dword ptr [ebp - 0x18], 0x110c0770 */
  w32((uint32_t)(EBP + -0x18), (0x110c0770u));
  /* 110978e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110978e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110978e5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 110978e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110978eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110978ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110978f1 jmp 0x11097926 */
  goto L_11097926;
L_110978f3:;
  /* 110978f3 call 0x11093df0 */
  push32(0x110978f8u); f_11093df0();
  /* 110978f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110978fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110978fe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11097901 push edx */
  push32((uint32_t)(EDX));
  /* 11097902 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097905 push eax */
  push32((uint32_t)(EAX));
  /* 11097906 call 0x11097a90 */
  push32(0x1109790bu); f_11097a90();
  /* 1109790b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109790e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097911 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11097914 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11097917 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11097919 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1109791c jmp 0x11097926 */
  goto L_11097926;
L_1109791e:;
  /* 1109791e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11097921 jmp 0x11097a56 */
  goto L_11097a56;
L_11097926:;
  /* 11097926 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109792a je 0x11097936 */
  if (C.zf) goto L_11097936;
  /* 1109792c push 1 */
  push32((uint32_t)(0x1u));
  /* 1109792e call 0x11097db0 */
  push32(0x11097933u); f_11097db0();
  /* 11097933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11097936:;
  /* 11097936 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109793a jne 0x11097953 */
  if (!C.zf) goto L_11097953;
  /* 1109793c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097940 je 0x1109794c */
  if (C.zf) goto L_1109794c;
  /* 11097942 push 1 */
  push32((uint32_t)(0x1u));
  /* 11097944 call 0x11097e50 */
  push32(0x11097949u); f_11097e50();
  /* 11097949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109794c:;
  /* 1109794c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109794e jmp 0x11097a56 */
  goto L_11097a56;
L_11097953:;
  /* 11097953 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097957 jne 0x11097970 */
  if (!C.zf) goto L_11097970;
  /* 11097959 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109795d je 0x11097969 */
  if (C.zf) goto L_11097969;
  /* 1109795f push 1 */
  push32((uint32_t)(0x1u));
  /* 11097961 call 0x11097e50 */
  push32(0x11097966u); f_11097e50();
  /* 11097966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11097969:;
  /* 11097969 push 3 */
  push32((uint32_t)(0x3u));
  /* 1109796b call 0x11093b70 */
  push32(0x11097970u); f_11093b70();
L_11097970:;
  /* 11097970 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097974 je 0x11097982 */
  if (C.zf) goto L_11097982;
  /* 11097976 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109797a je 0x11097982 */
  if (C.zf) goto L_11097982;
  /* 1109797c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097980 jne 0x110979ae */
  if (!C.zf) goto L_110979ae;
L_11097982:;
  /* 11097982 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097985 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11097988 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1109798b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109798e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11097995 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097999 jne 0x110979ae */
  if (!C.zf) goto L_110979ae;
  /* 1109799b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109799e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 110979a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110979a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110979a7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_110979ae:;
  /* 110979ae cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110979b2 jne 0x110979f0 */
  if (!C.zf) goto L_110979f0;
  /* 110979b4 mov eax, dword ptr [0x110bec78] */
  EAX = (r32((uint32_t)(0x110bec78)));
  /* 110979b9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 110979bc jmp 0x110979c7 */
  goto L_110979c7;
L_110979be:;
  /* 110979be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110979c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110979c4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_110979c7:;
  /* 110979c7 mov edx, dword ptr [0x110bec78] */
  EDX = (r32((uint32_t)(0x110bec78)));
  /* 110979cd add edx, dword ptr [0x110bec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x110bec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110979d3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110979d6 jge 0x110979ee */
  if ((C.sf==C.of)) goto L_110979ee;
  /* 110979d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110979db imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110979de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110979e1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 110979e4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 110979ec jmp 0x110979be */
  goto L_110979be;
L_110979ee:;
  /* 110979ee jmp 0x110979f9 */
  goto L_110979f9;
L_110979f0:;
  /* 110979f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 110979f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_110979f9:;
  /* 110979f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110979fd je 0x11097a09 */
  if (C.zf) goto L_11097a09;
  /* 110979ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11097a01 call 0x11097e50 */
  push32(0x11097a06u); f_11097e50();
  /* 11097a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11097a09:;
  /* 11097a09 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097a0d jne 0x11097a20 */
  if (!C.zf) goto L_11097a20;
  /* 11097a0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097a12 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11097a15 push edx */
  push32((uint32_t)(EDX));
  /* 11097a16 push 8 */
  push32((uint32_t)(0x8u));
  /* 11097a18 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11097a1bu);
  /* 11097a1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11097a1e jmp 0x11097a2a */
  goto L_11097a2a;
L_11097a20:;
  /* 11097a20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097a23 push eax */
  push32((uint32_t)(EAX));
  /* 11097a24 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11097a27u);
  /* 11097a27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11097a2a:;
  /* 11097a2a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097a2e je 0x11097a3c */
  if (C.zf) goto L_11097a3c;
  /* 11097a30 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097a34 je 0x11097a3c */
  if (C.zf) goto L_11097a3c;
  /* 11097a36 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097a3a jne 0x11097a54 */
  if (!C.zf) goto L_11097a54;
L_11097a3c:;
  /* 11097a3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097a3f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11097a42 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11097a45 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097a49 jne 0x11097a54 */
  if (!C.zf) goto L_11097a54;
  /* 11097a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097a4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097a51 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11097a54:;
  /* 11097a54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11097a56:;
  /* 11097a56 mov esp, ebp */
  ESP = (EBP);
  /* 11097a58 pop ebp */
  EBP = (pop32());
  /* 11097a59 ret  */
  ESPCHK(0x11097850u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a90 @ 0x11097a90 (91 bytes, 35 insns) */
void f_11097a90(void) {
  FTRACE(0x11097a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11097a91 mov ebp, esp */
  EBP = (ESP);
  /* 11097a93 push ecx */
  push32((uint32_t)(ECX));
  /* 11097a94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11097a97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11097a9a:;
  /* 11097a9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097a9d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11097aa0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097aa3 je 0x11097ac3 */
  if (C.zf) goto L_11097ac3;
  /* 11097aa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097aa8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097aab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11097aae mov ecx, dword ptr [0x110bec84] */
  ECX = (r32((uint32_t)(0x110bec84)));
  /* 11097ab4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11097ab7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11097aba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097abc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097abf jae 0x11097ac3 */
  if (!C.cf) goto L_11097ac3;
  /* 11097ac1 jmp 0x11097a9a */
  goto L_11097a9a;
L_11097ac3:;
  /* 11097ac3 mov eax, dword ptr [0x110bec84] */
  EAX = (r32((uint32_t)(0x110bec84)));
  /* 11097ac8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11097acb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11097ace add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097ad0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097ad3 jae 0x11097ae5 */
  if (!C.cf) goto L_11097ae5;
  /* 11097ad5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097ad8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11097adb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097ade jne 0x11097ae5 */
  if (!C.zf) goto L_11097ae5;
  /* 11097ae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097ae3 jmp 0x11097ae7 */
  goto L_11097ae7;
L_11097ae5:;
  /* 11097ae5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11097ae7:;
  /* 11097ae7 mov esp, ebp */
  ESP = (EBP);
  /* 11097ae9 pop ebp */
  EBP = (pop32());
  /* 11097aea ret  */
  ESPCHK(0x11097a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af0 @ 0x11097af0 (13 bytes, 6 insns) */
void f_11097af0(void) {
  FTRACE(0x11097af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11097af1 mov ebp, esp */
  EBP = (ESP);
  /* 11097af3 call 0x11093df0 */
  push32(0x11097af8u); f_11093df0();
  /* 11097af8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097afb pop ebp */
  EBP = (pop32());
  /* 11097afc ret  */
  ESPCHK(0x11097af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b00 @ 0x11097b00 (13 bytes, 6 insns) */
void f_11097b00(void) {
  FTRACE(0x11097b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11097b01 mov ebp, esp */
  EBP = (ESP);
  /* 11097b03 call 0x11093df0 */
  push32(0x11097b08u); f_11093df0();
  /* 11097b08 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097b0b pop ebp */
  EBP = (pop32());
  /* 11097b0c ret  */
  ESPCHK(0x11097b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b10 @ 0x11097b10 (187 bytes, 54 insns) */
void f_11097b10(void) {
  FTRACE(0x11097b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11097b11 mov ebp, esp */
  EBP = (ESP);
  /* 11097b13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097b16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11097b1d cmp dword ptr [0x110c0778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097b24 jne 0x11097b83 */
  if (!C.zf) goto L_11097b83;
  /* 11097b26 push 0x110bb5e8 */
  push32((uint32_t)(0x110bb5e8u));
  /* 11097b2b call dword ptr [0x110c32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32b0))), 0x11097b31u);
  /* 11097b31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11097b34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097b38 je 0x11097b57 */
  if (C.zf) goto L_11097b57;
  /* 11097b3a push 0x110bc1ec */
  push32((uint32_t)(0x110bc1ecu));
  /* 11097b3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097b42 push eax */
  push32((uint32_t)(EAX));
  /* 11097b43 call dword ptr [0x110c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32ac))), 0x11097b49u);
  /* 11097b49 mov dword ptr [0x110c0778], eax */
  w32((uint32_t)(0x110c0778), (EAX));
  /* 11097b4e cmp dword ptr [0x110c0778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097b55 jne 0x11097b5b */
  if (!C.zf) goto L_11097b5b;
L_11097b57:;
  /* 11097b57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11097b59 jmp 0x11097bc7 */
  goto L_11097bc7;
L_11097b5b:;
  /* 11097b5b push 0x110bc1dc */
  push32((uint32_t)(0x110bc1dcu));
  /* 11097b60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097b63 push ecx */
  push32((uint32_t)(ECX));
  /* 11097b64 call dword ptr [0x110c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32ac))), 0x11097b6au);
  /* 11097b6a mov dword ptr [0x110c077c], eax */
  w32((uint32_t)(0x110c077c), (EAX));
  /* 11097b6f push 0x110bc1c8 */
  push32((uint32_t)(0x110bc1c8u));
  /* 11097b74 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097b77 push edx */
  push32((uint32_t)(EDX));
  /* 11097b78 call dword ptr [0x110c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32ac))), 0x11097b7eu);
  /* 11097b7e mov dword ptr [0x110c0780], eax */
  w32((uint32_t)(0x110c0780), (EAX));
L_11097b83:;
  /* 11097b83 cmp dword ptr [0x110c077c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c077c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097b8a je 0x11097b95 */
  if (C.zf) goto L_11097b95;
  /* 11097b8c call dword ptr [0x110c077c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c077c))), 0x11097b92u);
  /* 11097b92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11097b95:;
  /* 11097b95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097b99 je 0x11097bb1 */
  if (C.zf) goto L_11097bb1;
  /* 11097b9b cmp dword ptr [0x110c0780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c0780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097ba2 je 0x11097bb1 */
  if (C.zf) goto L_11097bb1;
  /* 11097ba4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097ba7 push eax */
  push32((uint32_t)(EAX));
  /* 11097ba8 call dword ptr [0x110c0780] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c0780))), 0x11097baeu);
  /* 11097bae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11097bb1:;
  /* 11097bb1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11097bb4 push ecx */
  push32((uint32_t)(ECX));
  /* 11097bb5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11097bb8 push edx */
  push32((uint32_t)(EDX));
  /* 11097bb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097bbc push eax */
  push32((uint32_t)(EAX));
  /* 11097bbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097bc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11097bc1 call dword ptr [0x110c0778] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c0778))), 0x11097bc7u);
L_11097bc7:;
  /* 11097bc7 mov esp, ebp */
  ESP = (EBP);
  /* 11097bc9 pop ebp */
  EBP = (pop32());
  /* 11097bca ret  */
  ESPCHK(0x11097b10u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11097bd0 (254 bytes, 109 insns) */
void f_11097bd0(void) {
  FTRACE(0x11097bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097bd0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11097bd4 push edi */
  push32((uint32_t)(EDI));
  /* 11097bd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11097bd7 je 0x11097c53 */
  if (C.zf) goto L_11097c53;
  /* 11097bd9 push esi */
  push32((uint32_t)(ESI));
  /* 11097bda push ebx */
  push32((uint32_t)(EBX));
  /* 11097bdb mov ebx, ecx */
  EBX = (ECX);
  /* 11097bdd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11097be1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11097be7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11097beb jne 0x11097bf4 */
  if (!C.zf) goto L_11097bf4;
  /* 11097bed shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11097bf0 jne 0x11097c61 */
  if (!C.zf) goto L_11097c61;
  /* 11097bf2 jmp 0x11097c15 */
  goto L_11097c15;
L_11097bf4:;
  /* 11097bf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11097bf6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11097bf7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11097bf9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11097bfa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11097bfb je 0x11097c22 */
  if (C.zf) goto L_11097c22;
  /* 11097bfd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11097bff je 0x11097c2a */
  if (C.zf) goto L_11097c2a;
  /* 11097c01 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11097c07 jne 0x11097bf4 */
  if (!C.zf) goto L_11097bf4;
  /* 11097c09 mov ebx, ecx */
  EBX = (ECX);
  /* 11097c0b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11097c0e jne 0x11097c61 */
  if (!C.zf) goto L_11097c61;
L_11097c10:;
  /* 11097c10 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11097c13 je 0x11097c22 */
  if (C.zf) goto L_11097c22;
L_11097c15:;
  /* 11097c15 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11097c17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11097c18 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11097c1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11097c1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11097c1d je 0x11097c4e */
  if (C.zf) goto L_11097c4e;
  /* 11097c1f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11097c20 jne 0x11097c15 */
  if (!C.zf) goto L_11097c15;
L_11097c22:;
  /* 11097c22 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11097c26 pop ebx */
  EBX = (pop32());
  /* 11097c27 pop esi */
  ESI = (pop32());
  /* 11097c28 pop edi */
  EDI = (pop32());
  /* 11097c29 ret  */
  ESPCHK(0x11097bd0u, _esp0);
  ESP += 4; return;
L_11097c2a:;
  /* 11097c2a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11097c30 je 0x11097c44 */
  if (C.zf) goto L_11097c44;
L_11097c32:;
  /* 11097c32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11097c34 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11097c35 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11097c36 je 0x11097cc6 */
  if (C.zf) goto L_11097cc6;
  /* 11097c3c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11097c42 jne 0x11097c32 */
  if (!C.zf) goto L_11097c32;
L_11097c44:;
  /* 11097c44 mov ebx, ecx */
  EBX = (ECX);
  /* 11097c46 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11097c49 jne 0x11097cb7 */
  if (!C.zf) goto L_11097cb7;
L_11097c4b:;
  /* 11097c4b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11097c4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11097c4e:;
  /* 11097c4e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11097c4f jne 0x11097c4b */
  if (!C.zf) goto L_11097c4b;
  /* 11097c51 pop ebx */
  EBX = (pop32());
  /* 11097c52 pop esi */
  ESI = (pop32());
L_11097c53:;
  /* 11097c53 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11097c57 pop edi */
  EDI = (pop32());
  /* 11097c58 ret  */
  ESPCHK(0x11097bd0u, _esp0);
  ESP += 4; return;
L_11097c59:;
  /* 11097c59 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11097c5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11097c5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11097c5f je 0x11097c10 */
  if (C.zf) goto L_11097c10;
L_11097c61:;
  /* 11097c61 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11097c66 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11097c68 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097c6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11097c6d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11097c6f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11097c71 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11097c74 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11097c79 je 0x11097c59 */
  if (C.zf) goto L_11097c59;
  /* 11097c7b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11097c7d je 0x11097cab */
  if (C.zf) goto L_11097cab;
  /* 11097c7f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11097c81 je 0x11097ca1 */
  if (C.zf) goto L_11097ca1;
  /* 11097c83 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11097c89 je 0x11097c97 */
  if (C.zf) goto L_11097c97;
  /* 11097c8b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11097c91 jne 0x11097c59 */
  if (!C.zf) goto L_11097c59;
  /* 11097c93 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11097c95 jmp 0x11097caf */
  goto L_11097caf;
L_11097c97:;
  /* 11097c97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11097c9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11097c9f jmp 0x11097caf */
  goto L_11097caf;
L_11097ca1:;
  /* 11097ca1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11097ca7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11097ca9 jmp 0x11097caf */
  goto L_11097caf;
L_11097cab:;
  /* 11097cab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11097cad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11097caf:;
  /* 11097caf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11097cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11097cb4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11097cb5 je 0x11097cc1 */
  if (C.zf) goto L_11097cc1;
L_11097cb7:;
  /* 11097cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11097cb9:;
  /* 11097cb9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11097cbb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11097cbe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11097cbf jne 0x11097cb9 */
  if (!C.zf) goto L_11097cb9;
L_11097cc1:;
  /* 11097cc1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11097cc4 jne 0x11097c4b */
  if (!C.zf) goto L_11097c4b;
L_11097cc6:;
  /* 11097cc6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11097cca pop ebx */
  EBX = (pop32());
  /* 11097ccb pop esi */
  ESI = (pop32());
  /* 11097ccc pop edi */
  EDI = (pop32());
  /* 11097ccd ret  */
  ESPCHK(0x11097bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cd0 @ 0x11097cd0 (55 bytes, 16 insns) */
void f_11097cd0(void) {
  FTRACE(0x11097cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11097cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11097cd3 mov eax, dword ptr [0x110beb84] */
  EAX = (r32((uint32_t)(0x110beb84)));
  /* 11097cd8 push eax */
  push32((uint32_t)(EAX));
  /* 11097cd9 call dword ptr [0x110c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c332c))), 0x11097cdfu);
  /* 11097cdf mov ecx, dword ptr [0x110beb74] */
  ECX = (r32((uint32_t)(0x110beb74)));
  /* 11097ce5 push ecx */
  push32((uint32_t)(ECX));
  /* 11097ce6 call dword ptr [0x110c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c332c))), 0x11097cecu);
  /* 11097cec mov edx, dword ptr [0x110beb64] */
  EDX = (r32((uint32_t)(0x110beb64)));
  /* 11097cf2 push edx */
  push32((uint32_t)(EDX));
  /* 11097cf3 call dword ptr [0x110c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c332c))), 0x11097cf9u);
  /* 11097cf9 mov eax, dword ptr [0x110beb44] */
  EAX = (r32((uint32_t)(0x110beb44)));
  /* 11097cfe push eax */
  push32((uint32_t)(EAX));
  /* 11097cff call dword ptr [0x110c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c332c))), 0x11097d05u);
  /* 11097d05 pop ebp */
  EBP = (pop32());
  /* 11097d06 ret  */
  ESPCHK(0x11097cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d10 @ 0x11097d10 (159 bytes, 47 insns) */
void f_11097d10(void) {
  FTRACE(0x11097d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11097d11 mov ebp, esp */
  EBP = (ESP);
  /* 11097d13 push ecx */
  push32((uint32_t)(ECX));
  /* 11097d14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11097d1b jmp 0x11097d26 */
  goto L_11097d26;
L_11097d1d:;
  /* 11097d1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097d20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11097d26:;
  /* 11097d26 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097d2a jge 0x11097d79 */
  if ((C.sf==C.of)) goto L_11097d79;
  /* 11097d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097d2f cmp dword ptr [ecx*4 + 0x110beb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x110beb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097d37 je 0x11097d77 */
  if (C.zf) goto L_11097d77;
  /* 11097d39 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097d3d je 0x11097d77 */
  if (C.zf) goto L_11097d77;
  /* 11097d3f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097d43 je 0x11097d77 */
  if (C.zf) goto L_11097d77;
  /* 11097d45 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097d49 je 0x11097d77 */
  if (C.zf) goto L_11097d77;
  /* 11097d4b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097d4f je 0x11097d77 */
  if (C.zf) goto L_11097d77;
  /* 11097d51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097d54 mov eax, dword ptr [edx*4 + 0x110beb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110beb40)));
  /* 11097d5b push eax */
  push32((uint32_t)(EAX));
  /* 11097d5c call dword ptr [0x110c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32f4))), 0x11097d62u);
  /* 11097d62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11097d64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097d67 mov edx, dword ptr [ecx*4 + 0x110beb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110beb40)));
  /* 11097d6e push edx */
  push32((uint32_t)(EDX));
  /* 11097d6f call 0x11094e40 */
  push32(0x11097d74u); f_11094e40();
  /* 11097d74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11097d77:;
  /* 11097d77 jmp 0x11097d1d */
  goto L_11097d1d;
L_11097d79:;
  /* 11097d79 mov eax, dword ptr [0x110beb64] */
  EAX = (r32((uint32_t)(0x110beb64)));
  /* 11097d7e push eax */
  push32((uint32_t)(EAX));
  /* 11097d7f call dword ptr [0x110c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32f4))), 0x11097d85u);
  /* 11097d85 mov ecx, dword ptr [0x110beb74] */
  ECX = (r32((uint32_t)(0x110beb74)));
  /* 11097d8b push ecx */
  push32((uint32_t)(ECX));
  /* 11097d8c call dword ptr [0x110c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32f4))), 0x11097d92u);
  /* 11097d92 mov edx, dword ptr [0x110beb84] */
  EDX = (r32((uint32_t)(0x110beb84)));
  /* 11097d98 push edx */
  push32((uint32_t)(EDX));
  /* 11097d99 call dword ptr [0x110c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32f4))), 0x11097d9fu);
  /* 11097d9f mov eax, dword ptr [0x110beb44] */
  EAX = (r32((uint32_t)(0x110beb44)));
  /* 11097da4 push eax */
  push32((uint32_t)(EAX));
  /* 11097da5 call dword ptr [0x110c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32f4))), 0x11097dabu);
  /* 11097dab mov esp, ebp */
  ESP = (EBP);
  /* 11097dad pop ebp */
  EBP = (pop32());
  /* 11097dae ret  */
  ESPCHK(0x11097d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007db0 @ 0x11097db0 (151 bytes, 46 insns) */
void f_11097db0(void) {
  FTRACE(0x11097db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11097db1 mov ebp, esp */
  EBP = (ESP);
  /* 11097db3 push ecx */
  push32((uint32_t)(ECX));
  /* 11097db4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097db7 cmp dword ptr [eax*4 + 0x110beb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x110beb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097dbf jne 0x11097e32 */
  if (!C.zf) goto L_11097e32;
  /* 11097dc1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11097dc6 push 0x110bc1f8 */
  push32((uint32_t)(0x110bc1f8u));
  /* 11097dcb push 2 */
  push32((uint32_t)(0x2u));
  /* 11097dcd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11097dcf call 0x110943b0 */
  push32(0x11097dd4u); f_110943b0();
  /* 11097dd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11097dd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11097dda cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097dde jne 0x11097dea */
  if (!C.zf) goto L_11097dea;
  /* 11097de0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11097de2 call 0x11093320 */
  push32(0x11097de7u); f_11093320();
  /* 11097de7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11097dea:;
  /* 11097dea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11097dec call 0x11097db0 */
  push32(0x11097df1u); f_11097db0();
  /* 11097df1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11097df4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097df7 cmp dword ptr [ecx*4 + 0x110beb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x110beb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097dff jne 0x11097e1a */
  if (!C.zf) goto L_11097e1a;
  /* 11097e01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097e04 push edx */
  push32((uint32_t)(EDX));
  /* 11097e05 call dword ptr [0x110c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c332c))), 0x11097e0bu);
  /* 11097e0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097e0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097e11 mov dword ptr [eax*4 + 0x110beb40], ecx */
  w32((uint32_t)(EAX*4 + 0x110beb40), (ECX));
  /* 11097e18 jmp 0x11097e28 */
  goto L_11097e28;
L_11097e1a:;
  /* 11097e1a push 2 */
  push32((uint32_t)(0x2u));
  /* 11097e1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11097e1f push edx */
  push32((uint32_t)(EDX));
  /* 11097e20 call 0x11094e40 */
  push32(0x11097e25u); f_11094e40();
  /* 11097e25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11097e28:;
  /* 11097e28 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11097e2a call 0x11097e50 */
  push32(0x11097e2fu); f_11097e50();
  /* 11097e2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11097e32:;
  /* 11097e32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097e35 mov ecx, dword ptr [eax*4 + 0x110beb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x110beb40)));
  /* 11097e3c push ecx */
  push32((uint32_t)(ECX));
  /* 11097e3d call dword ptr [0x110c32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32f8))), 0x11097e43u);
  /* 11097e43 mov esp, ebp */
  ESP = (EBP);
  /* 11097e45 pop ebp */
  EBP = (pop32());
  /* 11097e46 ret  */
  ESPCHK(0x11097db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e50 @ 0x11097e50 (22 bytes, 8 insns) */
void f_11097e50(void) {
  FTRACE(0x11097e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11097e51 mov ebp, esp */
  EBP = (ESP);
  /* 11097e53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097e56 mov ecx, dword ptr [eax*4 + 0x110beb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x110beb40)));
  /* 11097e5d push ecx */
  push32((uint32_t)(ECX));
  /* 11097e5e call dword ptr [0x110c32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32fc))), 0x11097e64u);
  /* 11097e64 pop ebp */
  EBP = (pop32());
  /* 11097e65 ret  */
  ESPCHK(0x11097e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e70 @ 0x11097e70 (26 bytes, 10 insns) */
void f_11097e70(void) {
  FTRACE(0x11097e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11097e71 mov ebp, esp */
  EBP = (ESP);
  /* 11097e73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097e76 push eax */
  push32((uint32_t)(EAX));
  /* 11097e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11097e79 call dword ptr [0x110c3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3338))), 0x11097e7fu);
  /* 11097e7f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11097e84 call dword ptr [0x110c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32bc))), 0x11097e8au);
  /* 11097e8a pop ebp */
  EBP = (pop32());
  /* 11097e8b ret  */
  ESPCHK(0x11097e70u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11097e90 (446 bytes, 130 insns) */
void f_11097e90(void) {
  FTRACE(0x11097e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11097e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11097e91 mov ebp, esp */
  EBP = (ESP);
  /* 11097e93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11097e96 call 0x11093df0 */
  push32(0x11097e9bu); f_11093df0();
  /* 11097e9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11097e9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097ea1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11097ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 11097ea5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11097ea8 push edx */
  push32((uint32_t)(EDX));
  /* 11097ea9 call 0x11098050 */
  push32(0x11097eaeu); f_11098050();
  /* 11097eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11097eb1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11097eb4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097eb8 je 0x11097ec3 */
  if (C.zf) goto L_11097ec3;
  /* 11097eba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097ebd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097ec1 jne 0x11097ed2 */
  if (!C.zf) goto L_11097ed2;
L_11097ec3:;
  /* 11097ec3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11097ec6 push ecx */
  push32((uint32_t)(ECX));
  /* 11097ec7 call dword ptr [0x110c333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c333c))), 0x11097ecdu);
  /* 11097ecd jmp 0x1109804a */
  goto L_1109804a;
L_11097ed2:;
  /* 11097ed2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097ed5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097ed9 jne 0x11097eef */
  if (!C.zf) goto L_11097eef;
  /* 11097edb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097ede mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11097ee5 mov eax, 1 */
  EAX = (0x1u);
  /* 11097eea jmp 0x1109804a */
  goto L_1109804a;
L_11097eef:;
  /* 11097eef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097ef2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097ef6 jne 0x11097f00 */
  if (!C.zf) goto L_11097f00;
  /* 11097ef8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11097efb jmp 0x1109804a */
  goto L_1109804a;
L_11097f00:;
  /* 11097f00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097f03 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11097f06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11097f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097f0c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11097f0f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11097f12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097f15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11097f18 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11097f1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097f1e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097f22 jne 0x11098027 */
  if (!C.zf) goto L_11098027;
  /* 11097f28 mov eax, dword ptr [0x110bec78] */
  EAX = (r32((uint32_t)(0x110bec78)));
  /* 11097f2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11097f30 jmp 0x11097f3b */
  goto L_11097f3b;
L_11097f32:;
  /* 11097f32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11097f35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097f38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11097f3b:;
  /* 11097f3b mov edx, dword ptr [0x110bec78] */
  EDX = (r32((uint32_t)(0x110bec78)));
  /* 11097f41 add edx, dword ptr [0x110bec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x110bec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11097f47 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097f4a jge 0x11097f62 */
  if ((C.sf==C.of)) goto L_11097f62;
  /* 11097f4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11097f4f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11097f52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097f55 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11097f58 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11097f60 jmp 0x11097f32 */
  goto L_11097f32;
L_11097f62:;
  /* 11097f62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097f65 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11097f68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11097f6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097f6e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097f74 jne 0x11097f85 */
  if (!C.zf) goto L_11097f85;
  /* 11097f76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097f79 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11097f80 jmp 0x1109800d */
  goto L_1109800d;
L_11097f85:;
  /* 11097f85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097f88 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097f8e jne 0x11097f9c */
  if (!C.zf) goto L_11097f9c;
  /* 11097f90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097f93 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11097f9a jmp 0x1109800d */
  goto L_1109800d;
L_11097f9c:;
  /* 11097f9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097f9f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097fa5 jne 0x11097fb3 */
  if (!C.zf) goto L_11097fb3;
  /* 11097fa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097faa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11097fb1 jmp 0x1109800d */
  goto L_1109800d;
L_11097fb3:;
  /* 11097fb3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097fb6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097fbc jne 0x11097fca */
  if (!C.zf) goto L_11097fca;
  /* 11097fbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097fc1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11097fc8 jmp 0x1109800d */
  goto L_1109800d;
L_11097fca:;
  /* 11097fca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097fcd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097fd3 jne 0x11097fe1 */
  if (!C.zf) goto L_11097fe1;
  /* 11097fd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097fd8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11097fdf jmp 0x1109800d */
  goto L_1109800d;
L_11097fe1:;
  /* 11097fe1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097fe4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11097fea jne 0x11097ff8 */
  if (!C.zf) goto L_11097ff8;
  /* 11097fec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11097fef mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11097ff6 jmp 0x1109800d */
  goto L_1109800d;
L_11097ff8:;
  /* 11097ff8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11097ffb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098001 jne 0x1109800d */
  if (!C.zf) goto L_1109800d;
  /* 11098003 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11098006 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1109800d:;
  /* 1109800d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11098010 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11098013 push edx */
  push32((uint32_t)(EDX));
  /* 11098014 push 8 */
  push32((uint32_t)(0x8u));
  /* 11098016 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11098019u);
  /* 11098019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109801c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1109801f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11098022 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11098025 jmp 0x1109803e */
  goto L_1109803e;
L_11098027:;
  /* 11098027 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1109802a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11098031 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11098034 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11098037 push ecx */
  push32((uint32_t)(ECX));
  /* 11098038 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1109803bu);
  /* 1109803b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1109803e:;
  /* 1109803e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11098041 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11098044 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11098047 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1109804a:;
  /* 1109804a mov esp, ebp */
  ESP = (EBP);
  /* 1109804c pop ebp */
  EBP = (pop32());
  /* 1109804d ret  */
  ESPCHK(0x11097e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008050 @ 0x11098050 (89 bytes, 35 insns) */
void f_11098050(void) {
  FTRACE(0x11098050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098050 push ebp */
  push32((uint32_t)(EBP));
  /* 11098051 mov ebp, esp */
  EBP = (ESP);
  /* 11098053 push ecx */
  push32((uint32_t)(ECX));
  /* 11098054 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11098057 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1109805a:;
  /* 1109805a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109805d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1109805f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098062 je 0x11098082 */
  if (C.zf) goto L_11098082;
  /* 11098064 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098067 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109806a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1109806d mov ecx, dword ptr [0x110bec84] */
  ECX = (r32((uint32_t)(0x110bec84)));
  /* 11098073 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11098076 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11098079 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109807b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109807e jae 0x11098082 */
  if (!C.cf) goto L_11098082;
  /* 11098080 jmp 0x1109805a */
  goto L_1109805a;
L_11098082:;
  /* 11098082 mov eax, dword ptr [0x110bec84] */
  EAX = (r32((uint32_t)(0x110bec84)));
  /* 11098087 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1109808a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109808d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109808f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098092 jae 0x1109809e */
  if (!C.cf) goto L_1109809e;
  /* 11098094 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098097 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11098099 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109809c je 0x110980a2 */
  if (C.zf) goto L_110980a2;
L_1109809e:;
  /* 1109809e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110980a0 jmp 0x110980a5 */
  goto L_110980a5;
L_110980a2:;
  /* 110980a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_110980a5:;
  /* 110980a5 mov esp, ebp */
  ESP = (EBP);
  /* 110980a7 pop ebp */
  EBP = (pop32());
  /* 110980a8 ret  */
  ESPCHK(0x11098050u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x110980b0 (48 bytes, 17 insns) */
void f_110980b0(void) {
  FTRACE(0x110980b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110980b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110980b1 mov ebp, esp */
  EBP = (ESP);
  /* 110980b3 push ecx */
  push32((uint32_t)(ECX));
  /* 110980b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 110980b6 call 0x11097db0 */
  push32(0x110980bbu); f_11097db0();
  /* 110980bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110980be mov eax, dword ptr [0x110c07ec] */
  EAX = (r32((uint32_t)(0x110c07ec)));
  /* 110980c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110980c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110980c9 mov dword ptr [0x110c07ec], ecx */
  w32((uint32_t)(0x110c07ec), (ECX));
  /* 110980cf push 9 */
  push32((uint32_t)(0x9u));
  /* 110980d1 call 0x11097e50 */
  push32(0x110980d6u); f_11097e50();
  /* 110980d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110980d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110980dc mov esp, ebp */
  ESP = (EBP);
  /* 110980de pop ebp */
  EBP = (pop32());
  /* 110980df ret  */
  ESPCHK(0x110980b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080e0 @ 0x110980e0 (10 bytes, 5 insns) */
void f_110980e0(void) {
  FTRACE(0x110980e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110980e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110980e1 mov ebp, esp */
  EBP = (ESP);
  /* 110980e3 mov eax, dword ptr [0x110c07ec] */
  EAX = (r32((uint32_t)(0x110c07ec)));
  /* 110980e8 pop ebp */
  EBP = (pop32());
  /* 110980e9 ret  */
  ESPCHK(0x110980e0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x110980f0 (45 bytes, 19 insns) */
void f_110980f0(void) {
  FTRACE(0x110980f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110980f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110980f1 mov ebp, esp */
  EBP = (ESP);
  /* 110980f3 push ecx */
  push32((uint32_t)(ECX));
  /* 110980f4 mov eax, dword ptr [0x110c07ec] */
  EAX = (r32((uint32_t)(0x110c07ec)));
  /* 110980f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110980fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098100 je 0x11098110 */
  if (C.zf) goto L_11098110;
  /* 11098102 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098105 push ecx */
  push32((uint32_t)(ECX));
  /* 11098106 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11098109u);
  /* 11098109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109810c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109810e jne 0x11098114 */
  if (!C.zf) goto L_11098114;
L_11098110:;
  /* 11098110 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11098112 jmp 0x11098119 */
  goto L_11098119;
L_11098114:;
  /* 11098114 mov eax, 1 */
  EAX = (0x1u);
L_11098119:;
  /* 11098119 mov esp, ebp */
  ESP = (EBP);
  /* 1109811b pop ebp */
  EBP = (pop32());
  /* 1109811c ret  */
  ESPCHK(0x110980f0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11098120 (88 bytes, 40 insns) */
void f_11098120(void) {
  FTRACE(0x11098120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098120 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11098124 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11098128 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1109812a je 0x11098173 */
  if (C.zf) goto L_11098173;
  /* 1109812c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109812e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11098132 push edi */
  push32((uint32_t)(EDI));
  /* 11098133 mov edi, ecx */
  EDI = (ECX);
  /* 11098135 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098138 jb 0x11098167 */
  if (C.cf) goto L_11098167;
  /* 1109813a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1109813c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1109813f je 0x11098149 */
  if (C.zf) goto L_11098149;
  /* 11098141 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11098143:;
  /* 11098143 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11098145 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11098146 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11098147 jne 0x11098143 */
  if (!C.zf) goto L_11098143;
L_11098149:;
  /* 11098149 mov ecx, eax */
  ECX = (EAX);
  /* 1109814b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1109814e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098150 mov ecx, eax */
  ECX = (EAX);
  /* 11098152 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11098155 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098157 mov ecx, edx */
  ECX = (EDX);
  /* 11098159 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1109815c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1109815f je 0x11098167 */
  if (C.zf) goto L_11098167;
  /* 11098161 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11098163 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11098165 je 0x1109816d */
  if (C.zf) goto L_1109816d;
L_11098167:;
  /* 11098167 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11098169 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1109816a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1109816b jne 0x11098167 */
  if (!C.zf) goto L_11098167;
L_1109816d:;
  /* 1109816d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11098171 pop edi */
  EDI = (pop32());
  /* 11098172 ret  */
  ESPCHK(0x11098120u, _esp0);
  ESP += 4; return;
L_11098173:;
  /* 11098173 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11098177 ret  */
  ESPCHK(0x11098120u, _esp0);
  ESP += 4; return;
}

/* FUN_10008180 @ 0x11098180 (23 bytes, 10 insns) */
void f_11098180(void) {
  FTRACE(0x11098180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098180 push ebp */
  push32((uint32_t)(EBP));
  /* 11098181 mov ebp, esp */
  EBP = (ESP);
  /* 11098183 mov eax, dword ptr [0x110c07e8] */
  EAX = (r32((uint32_t)(0x110c07e8)));
  /* 11098188 push eax */
  push32((uint32_t)(EAX));
  /* 11098189 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109818c push ecx */
  push32((uint32_t)(ECX));
  /* 1109818d call 0x110981a0 */
  push32(0x11098192u); f_110981a0();
  /* 11098192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098195 pop ebp */
  EBP = (pop32());
  /* 11098196 ret  */
  ESPCHK(0x11098180u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x110981a0 (87 bytes, 34 insns) */
void f_110981a0(void) {
  FTRACE(0x110981a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110981a0 push ebp */
  push32((uint32_t)(EBP));
  /* 110981a1 mov ebp, esp */
  EBP = (ESP);
  /* 110981a3 push ecx */
  push32((uint32_t)(ECX));
  /* 110981a4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110981a8 jbe 0x110981ae */
  if ((C.cf||C.zf)) goto L_110981ae;
  /* 110981aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110981ac jmp 0x110981f3 */
  goto L_110981f3;
L_110981ae:;
  /* 110981ae cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110981b2 ja 0x110981c5 */
  if ((!C.cf&&!C.zf)) goto L_110981c5;
  /* 110981b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110981b7 push eax */
  push32((uint32_t)(EAX));
  /* 110981b8 call 0x11098200 */
  push32(0x110981bdu); f_11098200();
  /* 110981bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110981c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110981c3 jmp 0x110981cc */
  goto L_110981cc;
L_110981c5:;
  /* 110981c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_110981cc:;
  /* 110981cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110981d0 jne 0x110981d8 */
  if (!C.zf) goto L_110981d8;
  /* 110981d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110981d6 jne 0x110981dd */
  if (!C.zf) goto L_110981dd;
L_110981d8:;
  /* 110981d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110981db jmp 0x110981f3 */
  goto L_110981f3;
L_110981dd:;
  /* 110981dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110981e0 push ecx */
  push32((uint32_t)(ECX));
  /* 110981e1 call 0x110980f0 */
  push32(0x110981e6u); f_110980f0();
  /* 110981e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110981e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110981eb jne 0x110981f1 */
  if (!C.zf) goto L_110981f1;
  /* 110981ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110981ef jmp 0x110981f3 */
  goto L_110981f3;
L_110981f1:;
  /* 110981f1 jmp 0x110981ae */
  goto L_110981ae;
L_110981f3:;
  /* 110981f3 mov esp, ebp */
  ESP = (EBP);
  /* 110981f5 pop ebp */
  EBP = (pop32());
  /* 110981f6 ret  */
  ESPCHK(0x110981a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008200 @ 0x11098200 (109 bytes, 37 insns) */
void f_11098200(void) {
  FTRACE(0x11098200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098200 push ebp */
  push32((uint32_t)(EBP));
  /* 11098201 mov ebp, esp */
  EBP = (ESP);
  /* 11098203 push ecx */
  push32((uint32_t)(ECX));
  /* 11098204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098207 cmp eax, dword ptr [0x110bec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110bec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109820d ja 0x1109823d */
  if ((!C.cf&&!C.zf)) goto L_1109823d;
  /* 1109820f push 9 */
  push32((uint32_t)(0x9u));
  /* 11098211 call 0x11097db0 */
  push32(0x11098216u); f_11097db0();
  /* 11098216 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098219 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109821c push ecx */
  push32((uint32_t)(ECX));
  /* 1109821d call 0x11098d40 */
  push32(0x11098222u); f_11098d40();
  /* 11098222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098225 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11098228 push 9 */
  push32((uint32_t)(0x9u));
  /* 1109822a call 0x11097e50 */
  push32(0x1109822fu); f_11097e50();
  /* 1109822f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098232 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098236 je 0x1109823d */
  if (C.zf) goto L_1109823d;
  /* 11098238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1109823b jmp 0x11098269 */
  goto L_11098269;
L_1109823d:;
  /* 1109823d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098241 jne 0x1109824a */
  if (!C.zf) goto L_1109824a;
  /* 11098243 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1109824a:;
  /* 1109824a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109824d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098250 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11098253 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11098256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098259 push eax */
  push32((uint32_t)(EAX));
  /* 1109825a push 0 */
  push32((uint32_t)(0x0u));
  /* 1109825c mov ecx, dword ptr [0x110c1fac] */
  ECX = (r32((uint32_t)(0x110c1fac)));
  /* 11098262 push ecx */
  push32((uint32_t)(ECX));
  /* 11098263 call dword ptr [0x110c3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3340))), 0x11098269u);
L_11098269:;
  /* 11098269 mov esp, ebp */
  ESP = (EBP);
  /* 1109826b pop ebp */
  EBP = (pop32());
  /* 1109826c ret  */
  ESPCHK(0x11098200u, _esp0);
  ESP += 4; return;
}

/* FUN_10008270 @ 0x11098270 (10 bytes, 5 insns) */
void f_11098270(void) {
  FTRACE(0x11098270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098270 push ebp */
  push32((uint32_t)(EBP));
  /* 11098271 mov ebp, esp */
  EBP = (ESP);
  /* 11098273 mov eax, 1 */
  EAX = (0x1u);
  /* 11098278 pop ebp */
  EBP = (pop32());
  /* 11098279 ret  */
  ESPCHK(0x11098270u, _esp0);
  ESP += 4; return;
}

/* FUN_10008280 @ 0x11098280 (173 bytes, 59 insns) */
void f_11098280(void) {
  FTRACE(0x11098280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098280 push ebp */
  push32((uint32_t)(EBP));
  /* 11098281 mov ebp, esp */
  EBP = (ESP);
  /* 11098283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098286 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109828a jbe 0x11098293 */
  if ((C.cf||C.zf)) goto L_11098293;
  /* 1109828c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109828e jmp 0x11098329 */
  goto L_11098329;
L_11098293:;
  /* 11098293 push 9 */
  push32((uint32_t)(0x9u));
  /* 11098295 call 0x11097db0 */
  push32(0x1109829au); f_11097db0();
  /* 1109829a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109829d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110982a0 push eax */
  push32((uint32_t)(EAX));
  /* 110982a1 call 0x110986b0 */
  push32(0x110982a6u); f_110986b0();
  /* 110982a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110982a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110982ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110982b0 je 0x110982f1 */
  if (C.zf) goto L_110982f1;
  /* 110982b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110982b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110982bc cmp ecx, dword ptr [0x110bec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110bec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110982c2 ja 0x110982e2 */
  if ((!C.cf&&!C.zf)) goto L_110982e2;
  /* 110982c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110982c7 push edx */
  push32((uint32_t)(EDX));
  /* 110982c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110982cb push eax */
  push32((uint32_t)(EAX));
  /* 110982cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110982cf push ecx */
  push32((uint32_t)(ECX));
  /* 110982d0 call 0x11099580 */
  push32(0x110982d5u); f_11099580();
  /* 110982d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110982d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110982da je 0x110982e2 */
  if (C.zf) goto L_110982e2;
  /* 110982dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110982df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_110982e2:;
  /* 110982e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 110982e4 call 0x11097e50 */
  push32(0x110982e9u); f_11097e50();
  /* 110982e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110982ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110982ef jmp 0x11098329 */
  goto L_11098329;
L_110982f1:;
  /* 110982f1 push 9 */
  push32((uint32_t)(0x9u));
  /* 110982f3 call 0x11097e50 */
  push32(0x110982f8u); f_11097e50();
  /* 110982f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110982fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110982ff jne 0x11098308 */
  if (!C.zf) goto L_11098308;
  /* 11098301 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11098308:;
  /* 11098308 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109830b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1109830e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11098310 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11098313 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11098316 push ecx */
  push32((uint32_t)(ECX));
  /* 11098317 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109831a push edx */
  push32((uint32_t)(EDX));
  /* 1109831b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1109831d mov eax, dword ptr [0x110c1fac] */
  EAX = (r32((uint32_t)(0x110c1fac)));
  /* 11098322 push eax */
  push32((uint32_t)(EAX));
  /* 11098323 call dword ptr [0x110c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3344))), 0x11098329u);
L_11098329:;
  /* 11098329 mov esp, ebp */
  ESP = (EBP);
  /* 1109832b pop ebp */
  EBP = (pop32());
  /* 1109832c ret  */
  ESPCHK(0x11098280u, _esp0);
  ESP += 4; return;
}

/* FUN_10008330 @ 0x11098330 (490 bytes, 165 insns) */
void f_11098330(void) {
  FTRACE(0x11098330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098330 push ebp */
  push32((uint32_t)(EBP));
  /* 11098331 mov ebp, esp */
  EBP = (ESP);
  /* 11098333 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098336 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109833a jne 0x1109834d */
  if (!C.zf) goto L_1109834d;
  /* 1109833c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109833f push eax */
  push32((uint32_t)(EAX));
  /* 11098340 call 0x11098180 */
  push32(0x11098345u); f_11098180();
  /* 11098345 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098348 jmp 0x11098516 */
  goto L_11098516;
L_1109834d:;
  /* 1109834d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098351 jne 0x11098366 */
  if (!C.zf) goto L_11098366;
  /* 11098353 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098356 push ecx */
  push32((uint32_t)(ECX));
  /* 11098357 call 0x11098520 */
  push32(0x1109835cu); f_11098520();
  /* 1109835c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109835f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11098361 jmp 0x11098516 */
  goto L_11098516;
L_11098366:;
  /* 11098366 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1109836d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098371 ja 0x110984e9 */
  if ((!C.cf&&!C.zf)) goto L_110984e9;
  /* 11098377 push 9 */
  push32((uint32_t)(0x9u));
  /* 11098379 call 0x11097db0 */
  push32(0x1109837eu); f_11097db0();
  /* 1109837e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098381 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098384 push edx */
  push32((uint32_t)(EDX));
  /* 11098385 call 0x110986b0 */
  push32(0x1109838au); f_110986b0();
  /* 1109838a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109838d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11098390 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098394 je 0x110984ac */
  if (C.zf) goto L_110984ac;
  /* 1109839a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1109839d cmp eax, dword ptr [0x110bec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110bec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110983a3 ja 0x11098420 */
  if ((!C.cf&&!C.zf)) goto L_11098420;
  /* 110983a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110983a8 push ecx */
  push32((uint32_t)(ECX));
  /* 110983a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110983ac push edx */
  push32((uint32_t)(EDX));
  /* 110983ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110983b0 push eax */
  push32((uint32_t)(EAX));
  /* 110983b1 call 0x11099580 */
  push32(0x110983b6u); f_11099580();
  /* 110983b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110983b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110983bb je 0x110983c5 */
  if (C.zf) goto L_110983c5;
  /* 110983bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110983c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110983c3 jmp 0x11098420 */
  goto L_11098420;
L_110983c5:;
  /* 110983c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110983c8 push edx */
  push32((uint32_t)(EDX));
  /* 110983c9 call 0x11098d40 */
  push32(0x110983ceu); f_11098d40();
  /* 110983ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110983d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110983d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110983d8 je 0x11098420 */
  if (C.zf) goto L_11098420;
  /* 110983da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110983dd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 110983e0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110983e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110983e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110983e9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110983ec jae 0x110983f6 */
  if (!C.cf) goto L_110983f6;
  /* 110983ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110983f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 110983f4 jmp 0x110983fc */
  goto L_110983fc;
L_110983f6:;
  /* 110983f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110983f9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_110983fc:;
  /* 110983fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110983ff push edx */
  push32((uint32_t)(EDX));
  /* 11098400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098403 push eax */
  push32((uint32_t)(EAX));
  /* 11098404 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11098407 push ecx */
  push32((uint32_t)(ECX));
  /* 11098408 call 0x1109ac90 */
  push32(0x1109840du); f_1109ac90();
  /* 1109840d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098410 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098413 push edx */
  push32((uint32_t)(EDX));
  /* 11098414 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11098417 push eax */
  push32((uint32_t)(EAX));
  /* 11098418 call 0x11098770 */
  push32(0x1109841du); f_11098770();
  /* 1109841d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11098420:;
  /* 11098420 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098424 jne 0x110984a0 */
  if (!C.zf) goto L_110984a0;
  /* 11098426 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109842a jne 0x11098433 */
  if (!C.zf) goto L_11098433;
  /* 1109842c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11098433:;
  /* 11098433 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11098436 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11098439 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1109843c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1109843f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11098442 push edx */
  push32((uint32_t)(EDX));
  /* 11098443 push 0 */
  push32((uint32_t)(0x0u));
  /* 11098445 mov eax, dword ptr [0x110c1fac] */
  EAX = (r32((uint32_t)(0x110c1fac)));
  /* 1109844a push eax */
  push32((uint32_t)(EAX));
  /* 1109844b call dword ptr [0x110c3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3340))), 0x11098451u);
  /* 11098451 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11098454 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098458 je 0x110984a0 */
  if (C.zf) goto L_110984a0;
  /* 1109845a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109845d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11098460 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11098463 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11098466 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098469 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1109846c jae 0x11098476 */
  if (!C.cf) goto L_11098476;
  /* 1109846e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098471 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11098474 jmp 0x1109847c */
  goto L_1109847c;
L_11098476:;
  /* 11098476 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11098479 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1109847c:;
  /* 1109847c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1109847f push eax */
  push32((uint32_t)(EAX));
  /* 11098480 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098483 push ecx */
  push32((uint32_t)(ECX));
  /* 11098484 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11098487 push edx */
  push32((uint32_t)(EDX));
  /* 11098488 call 0x1109ac90 */
  push32(0x1109848du); f_1109ac90();
  /* 1109848d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098493 push eax */
  push32((uint32_t)(EAX));
  /* 11098494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11098497 push ecx */
  push32((uint32_t)(ECX));
  /* 11098498 call 0x11098770 */
  push32(0x1109849du); f_11098770();
  /* 1109849d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110984a0:;
  /* 110984a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 110984a2 call 0x11097e50 */
  push32(0x110984a7u); f_11097e50();
  /* 110984a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110984aa jmp 0x110984e9 */
  goto L_110984e9;
L_110984ac:;
  /* 110984ac push 9 */
  push32((uint32_t)(0x9u));
  /* 110984ae call 0x11097e50 */
  push32(0x110984b3u); f_11097e50();
  /* 110984b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110984b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110984ba jne 0x110984c3 */
  if (!C.zf) goto L_110984c3;
  /* 110984bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_110984c3:;
  /* 110984c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110984c6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110984c9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 110984cc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 110984cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110984d2 push eax */
  push32((uint32_t)(EAX));
  /* 110984d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110984d6 push ecx */
  push32((uint32_t)(ECX));
  /* 110984d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110984d9 mov edx, dword ptr [0x110c1fac] */
  EDX = (r32((uint32_t)(0x110c1fac)));
  /* 110984df push edx */
  push32((uint32_t)(EDX));
  /* 110984e0 call dword ptr [0x110c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3344))), 0x110984e6u);
  /* 110984e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110984e9:;
  /* 110984e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110984ed jne 0x110984f8 */
  if (!C.zf) goto L_110984f8;
  /* 110984ef cmp dword ptr [0x110c07e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110c07e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110984f6 jne 0x110984fd */
  if (!C.zf) goto L_110984fd;
L_110984f8:;
  /* 110984f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110984fb jmp 0x11098516 */
  goto L_11098516;
L_110984fd:;
  /* 110984fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11098500 push eax */
  push32((uint32_t)(EAX));
  /* 11098501 call 0x110980f0 */
  push32(0x11098506u); f_110980f0();
  /* 11098506 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1109850b jne 0x11098511 */
  if (!C.zf) goto L_11098511;
  /* 1109850d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1109850f jmp 0x11098516 */
  goto L_11098516;
L_11098511:;
  /* 11098511 jmp 0x11098366 */
  goto L_11098366;
L_11098516:;
  /* 11098516 mov esp, ebp */
  ESP = (EBP);
  /* 11098518 pop ebp */
  EBP = (pop32());
  /* 11098519 ret  */
  ESPCHK(0x11098330u, _esp0);
  ESP += 4; return;
}

/* FUN_10008520 @ 0x11098520 (104 bytes, 38 insns) */
void f_11098520(void) {
  FTRACE(0x11098520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098520 push ebp */
  push32((uint32_t)(EBP));
  /* 11098521 mov ebp, esp */
  EBP = (ESP);
  /* 11098523 push ecx */
  push32((uint32_t)(ECX));
  /* 11098524 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098528 jne 0x1109852c */
  if (!C.zf) goto L_1109852c;
  /* 1109852a jmp 0x11098584 */
  goto L_11098584;
L_1109852c:;
  /* 1109852c push 9 */
  push32((uint32_t)(0x9u));
  /* 1109852e call 0x11097db0 */
  push32(0x11098533u); f_11097db0();
  /* 11098533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098539 push eax */
  push32((uint32_t)(EAX));
  /* 1109853a call 0x110986b0 */
  push32(0x1109853fu); f_110986b0();
  /* 1109853f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098542 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11098545 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11098549 je 0x11098567 */
  if (C.zf) goto L_11098567;
  /* 1109854b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1109854e push ecx */
  push32((uint32_t)(ECX));
  /* 1109854f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098552 push edx */
  push32((uint32_t)(EDX));
  /* 11098553 call 0x11098770 */
  push32(0x11098558u); f_11098770();
  /* 11098558 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1109855b push 9 */
  push32((uint32_t)(0x9u));
  /* 1109855d call 0x11097e50 */
  push32(0x11098562u); f_11097e50();
  /* 11098562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098565 jmp 0x11098584 */
  goto L_11098584;
L_11098567:;
  /* 11098567 push 9 */
  push32((uint32_t)(0x9u));
  /* 11098569 call 0x11097e50 */
  push32(0x1109856eu); f_11097e50();
  /* 1109856e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11098571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11098574 push eax */
  push32((uint32_t)(EAX));
  /* 11098575 push 0 */
  push32((uint32_t)(0x0u));
  /* 11098577 mov ecx, dword ptr [0x110c1fac] */
  ECX = (r32((uint32_t)(0x110c1fac)));
  /* 1109857d push ecx */
  push32((uint32_t)(ECX));
  /* 1109857e call dword ptr [0x110c3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3320))), 0x11098584u);
L_11098584:;
  /* 11098584 mov esp, ebp */
  ESP = (EBP);
  /* 11098586 pop ebp */
  EBP = (pop32());
  /* 11098587 ret  */
  ESPCHK(0x11098520u, _esp0);
  ESP += 4; return;
}

/* FUN_10008590 @ 0x11098590 (116 bytes, 34 insns) */
void f_11098590(void) {
  FTRACE(0x11098590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098590 push ebp */
  push32((uint32_t)(EBP));
  /* 11098591 mov ebp, esp */
  EBP = (ESP);
  /* 11098593 push ecx */
  push32((uint32_t)(ECX));
  /* 11098594 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1109859b push 9 */
  push32((uint32_t)(0x9u));
  /* 1109859d call 0x11097db0 */
  push32(0x110985a2u); f_11097db0();
  /* 110985a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110985a5 call 0x11099ca0 */
  push32(0x110985aau); f_11099ca0();
  /* 110985aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110985ac jge 0x110985b5 */
  if ((C.sf==C.of)) goto L_110985b5;
  /* 110985ae mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_110985b5:;
  /* 110985b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 110985b7 call 0x11097e50 */
  push32(0x110985bcu); f_11097e50();
  /* 110985bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110985bf push 0 */
  push32((uint32_t)(0x0u));
  /* 110985c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110985c3 mov eax, dword ptr [0x110c1fac] */
  EAX = (r32((uint32_t)(0x110c1fac)));
  /* 110985c8 push eax */
  push32((uint32_t)(EAX));
  /* 110985c9 call dword ptr [0x110c3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c3300))), 0x110985cfu);
  /* 110985cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110985d1 jne 0x110985fd */
  if (!C.zf) goto L_110985fd;
  /* 110985d3 call dword ptr [0x110c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110c32e0))), 0x110985d9u);
  /* 110985d9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110985dc jne 0x110985f6 */
  if (!C.zf) goto L_110985f6;
  /* 110985de call 0x1109c290 */
  push32(0x110985e3u); f_1109c290();
  /* 110985e3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 110985e9 call 0x1109c280 */
  push32(0x110985eeu); f_1109c280();
  /* 110985ee mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 110985f4 jmp 0x110985fd */
  goto L_110985fd;
L_110985f6:;
  /* 110985f6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_110985fd:;
  /* 110985fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11098600 mov esp, ebp */
  ESP = (EBP);
  /* 11098602 pop ebp */
  EBP = (pop32());
  /* 11098603 ret  */
  ESPCHK(0x11098590u, _esp0);
  ESP += 4; return;
}

/* FUN_10008610 @ 0x11098610 (10 bytes, 5 insns) */
void f_11098610(void) {
  FTRACE(0x11098610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11098610 push ebp */
  push32((uint32_t)(EBP));
  /* 11098611 mov ebp, esp */
  EBP = (ESP);
  /* 11098613 call 0x11098590 */
  push32(0x11098618u); f_11098590();
  /* 11098618 pop ebp */
  EBP = (pop32());
  /* 11098619 ret  */
  ESPCHK(0x11098610u, _esp0);
  ESP += 4; return;
}

