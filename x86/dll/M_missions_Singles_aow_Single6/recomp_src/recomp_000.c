#include "recomp.h"

/* OnInit @ 0x12291005 (5 bytes, 1 insns) */
void f_12291005(void) {
  FTRACE(0x12291005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12291005 jmp 0x12291090 */
  f_12291090(); return;
}

/* thunk_FUN_10001030 @ 0x1229100a (5 bytes, 1 insns) */
void f_1229100a(void) {
  FTRACE(0x1229100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229100a jmp 0x12291030 */
  f_12291030(); return;
}

/* ProcessScenary @ 0x1229100f (5 bytes, 1 insns) */
void f_1229100f(void) {
  FTRACE(0x1229100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1229100f jmp 0x12291860 */
  f_12291860(); return;
}

/* FUN_10001030 @ 0x12291030 (67 bytes, 26 insns) */
void f_12291030(void) {
  FTRACE(0x12291030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12291030 push ebp */
  push32((uint32_t)(EBP));
  /* 12291031 mov ebp, esp */
  EBP = (ESP);
  /* 12291033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12291036 push ebx */
  push32((uint32_t)(EBX));
  /* 12291037 push esi */
  push32((uint32_t)(ESI));
  /* 12291038 push edi */
  push32((uint32_t)(EDI));
  /* 12291039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1229103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12291041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12291046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12291048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291052 je 0x12291056 */
  if (C.zf) goto L_12291056;
  /* 12291054 jmp 0x1229105b */
  goto L_1229105b;
L_12291056:;
  /* 12291056 call 0x12291005 */
  push32(0x1229105bu); f_12291005();
L_1229105b:;
  /* 1229105b mov eax, 1 */
  EAX = (0x1u);
  /* 12291060 pop edi */
  EDI = (pop32());
  /* 12291061 pop esi */
  ESI = (pop32());
  /* 12291062 pop ebx */
  EBX = (pop32());
  /* 12291063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291068 call 0x122930a0 */
  push32(0x1229106du); f_122930a0();
  /* 1229106d mov esp, ebp */
  ESP = (EBP);
  /* 1229106f pop ebp */
  EBP = (pop32());
  /* 12291070 ret 0xc */
  ESPCHK(0x12291030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12291090 (1591 bytes, 411 insns) */
void f_12291090(void) {
  FTRACE(0x12291090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12291090 push ebp */
  push32((uint32_t)(EBP));
  /* 12291091 mov ebp, esp */
  EBP = (ESP);
  /* 12291093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12291096 push ebx */
  push32((uint32_t)(EBX));
  /* 12291097 push esi */
  push32((uint32_t)(ESI));
  /* 12291098 push edi */
  push32((uint32_t)(EDI));
  /* 12291099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1229109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 122910a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 122910a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 122910a8 mov esi, esp */
  ESI = (ESP);
  /* 122910aa push 0x122bb3a0 */
  push32((uint32_t)(0x122bb3a0u));
  /* 122910af push 0x122c0560 */
  push32((uint32_t)(0x122c0560u));
  /* 122910b4 call dword ptr [0x122c33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33fc))), 0x122910bau);
  /* 122910ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122910bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122910bf call 0x122930a0 */
  push32(0x122910c4u); f_122930a0();
  /* 122910c4 mov esi, esp */
  ESI = (ESP);
  /* 122910c6 push 0x122bb39c */
  push32((uint32_t)(0x122bb39cu));
  /* 122910cb push 0x122c0568 */
  push32((uint32_t)(0x122c0568u));
  /* 122910d0 call dword ptr [0x122c33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33fc))), 0x122910d6u);
  /* 122910d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122910d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122910db call 0x122930a0 */
  push32(0x122910e0u); f_122930a0();
  /* 122910e0 mov esi, esp */
  ESI = (ESP);
  /* 122910e2 push 0x122bb398 */
  push32((uint32_t)(0x122bb398u));
  /* 122910e7 push 0x122c0570 */
  push32((uint32_t)(0x122c0570u));
  /* 122910ec call dword ptr [0x122c33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33fc))), 0x122910f2u);
  /* 122910f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122910f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122910f7 call 0x122930a0 */
  push32(0x122910fcu); f_122930a0();
  /* 122910fc mov esi, esp */
  ESI = (ESP);
  /* 122910fe push 0x122bb394 */
  push32((uint32_t)(0x122bb394u));
  /* 12291103 push 0x122c0578 */
  push32((uint32_t)(0x122c0578u));
  /* 12291108 call dword ptr [0x122c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c340c))), 0x1229110eu);
  /* 1229110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291113 call 0x122930a0 */
  push32(0x12291118u); f_122930a0();
  /* 12291118 mov esi, esp */
  ESI = (ESP);
  /* 1229111a push 0x122bb390 */
  push32((uint32_t)(0x122bb390u));
  /* 1229111f push 0x122c0580 */
  push32((uint32_t)(0x122c0580u));
  /* 12291124 call dword ptr [0x122c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c340c))), 0x1229112au);
  /* 1229112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229112f call 0x122930a0 */
  push32(0x12291134u); f_122930a0();
  /* 12291134 mov esi, esp */
  ESI = (ESP);
  /* 12291136 push 0x122bb378 */
  push32((uint32_t)(0x122bb378u));
  /* 1229113b push 0x122c0428 */
  push32((uint32_t)(0x122c0428u));
  /* 12291140 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291146u);
  /* 12291146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229114b call 0x122930a0 */
  push32(0x12291150u); f_122930a0();
  /* 12291150 mov esi, esp */
  ESI = (ESP);
  /* 12291152 push 0x122bb364 */
  push32((uint32_t)(0x122bb364u));
  /* 12291157 push 0x122c0438 */
  push32((uint32_t)(0x122c0438u));
  /* 1229115c call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291162u);
  /* 12291162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291167 call 0x122930a0 */
  push32(0x1229116cu); f_122930a0();
  /* 1229116c mov esi, esp */
  ESI = (ESP);
  /* 1229116e push 0x122bb354 */
  push32((uint32_t)(0x122bb354u));
  /* 12291173 push 0x122c0450 */
  push32((uint32_t)(0x122c0450u));
  /* 12291178 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229117eu);
  /* 1229117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291183 call 0x122930a0 */
  push32(0x12291188u); f_122930a0();
  /* 12291188 mov esi, esp */
  ESI = (ESP);
  /* 1229118a push 0x122bb344 */
  push32((uint32_t)(0x122bb344u));
  /* 1229118f push 0x122c0468 */
  push32((uint32_t)(0x122c0468u));
  /* 12291194 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229119au);
  /* 1229119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229119f call 0x122930a0 */
  push32(0x122911a4u); f_122930a0();
  /* 122911a4 mov esi, esp */
  ESI = (ESP);
  /* 122911a6 push 0x122bb334 */
  push32((uint32_t)(0x122bb334u));
  /* 122911ab push 0x122c0480 */
  push32((uint32_t)(0x122c0480u));
  /* 122911b0 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122911b6u);
  /* 122911b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122911b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122911bb call 0x122930a0 */
  push32(0x122911c0u); f_122930a0();
  /* 122911c0 mov esi, esp */
  ESI = (ESP);
  /* 122911c2 push 0x122bb324 */
  push32((uint32_t)(0x122bb324u));
  /* 122911c7 push 0x122c0498 */
  push32((uint32_t)(0x122c0498u));
  /* 122911cc call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122911d2u);
  /* 122911d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122911d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122911d7 call 0x122930a0 */
  push32(0x122911dcu); f_122930a0();
  /* 122911dc mov esi, esp */
  ESI = (ESP);
  /* 122911de push 0x122bb308 */
  push32((uint32_t)(0x122bb308u));
  /* 122911e3 push 0x122c04b0 */
  push32((uint32_t)(0x122c04b0u));
  /* 122911e8 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122911eeu);
  /* 122911ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122911f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122911f3 call 0x122930a0 */
  push32(0x122911f8u); f_122930a0();
  /* 122911f8 mov esi, esp */
  ESI = (ESP);
  /* 122911fa push 0x122bb2f8 */
  push32((uint32_t)(0x122bb2f8u));
  /* 122911ff push 0x122c04c8 */
  push32((uint32_t)(0x122c04c8u));
  /* 12291204 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229120au);
  /* 1229120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229120f call 0x122930a0 */
  push32(0x12291214u); f_122930a0();
  /* 12291214 mov esi, esp */
  ESI = (ESP);
  /* 12291216 push 0x122bb2e4 */
  push32((uint32_t)(0x122bb2e4u));
  /* 1229121b push 0x122c04e0 */
  push32((uint32_t)(0x122c04e0u));
  /* 12291220 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291226u);
  /* 12291226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229122b call 0x122930a0 */
  push32(0x12291230u); f_122930a0();
  /* 12291230 mov esi, esp */
  ESI = (ESP);
  /* 12291232 push 0x122bb2d0 */
  push32((uint32_t)(0x122bb2d0u));
  /* 12291237 push 0x122c03e0 */
  push32((uint32_t)(0x122c03e0u));
  /* 1229123c call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291242u);
  /* 12291242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291247 call 0x122930a0 */
  push32(0x1229124cu); f_122930a0();
  /* 1229124c mov esi, esp */
  ESI = (ESP);
  /* 1229124e push 0x122bb2bc */
  push32((uint32_t)(0x122bb2bcu));
  /* 12291253 push 0x122c03e8 */
  push32((uint32_t)(0x122c03e8u));
  /* 12291258 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229125eu);
  /* 1229125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291263 call 0x122930a0 */
  push32(0x12291268u); f_122930a0();
  /* 12291268 mov esi, esp */
  ESI = (ESP);
  /* 1229126a push 0x122bb2ac */
  push32((uint32_t)(0x122bb2acu));
  /* 1229126f push 0x122c03f0 */
  push32((uint32_t)(0x122c03f0u));
  /* 12291274 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229127au);
  /* 1229127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229127f call 0x122930a0 */
  push32(0x12291284u); f_122930a0();
  /* 12291284 mov esi, esp */
  ESI = (ESP);
  /* 12291286 push 0x122bb294 */
  push32((uint32_t)(0x122bb294u));
  /* 1229128b push 0x122c03f8 */
  push32((uint32_t)(0x122c03f8u));
  /* 12291290 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291296u);
  /* 12291296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229129b call 0x122930a0 */
  push32(0x122912a0u); f_122930a0();
  /* 122912a0 mov esi, esp */
  ESI = (ESP);
  /* 122912a2 push 0x122bb288 */
  push32((uint32_t)(0x122bb288u));
  /* 122912a7 push 0x122c0400 */
  push32((uint32_t)(0x122c0400u));
  /* 122912ac call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122912b2u);
  /* 122912b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122912b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122912b7 call 0x122930a0 */
  push32(0x122912bcu); f_122930a0();
  /* 122912bc mov esi, esp */
  ESI = (ESP);
  /* 122912be push 0x122bb27c */
  push32((uint32_t)(0x122bb27cu));
  /* 122912c3 push 0x122c0410 */
  push32((uint32_t)(0x122c0410u));
  /* 122912c8 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122912ceu);
  /* 122912ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122912d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122912d3 call 0x122930a0 */
  push32(0x122912d8u); f_122930a0();
  /* 122912d8 mov esi, esp */
  ESI = (ESP);
  /* 122912da push 0x122bb26c */
  push32((uint32_t)(0x122bb26cu));
  /* 122912df push 0x122c0420 */
  push32((uint32_t)(0x122c0420u));
  /* 122912e4 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122912eau);
  /* 122912ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122912ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122912ef call 0x122930a0 */
  push32(0x122912f4u); f_122930a0();
  /* 122912f4 mov esi, esp */
  ESI = (ESP);
  /* 122912f6 push 0x122bb254 */
  push32((uint32_t)(0x122bb254u));
  /* 122912fb push 0x122c0408 */
  push32((uint32_t)(0x122c0408u));
  /* 12291300 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291306u);
  /* 12291306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229130b call 0x122930a0 */
  push32(0x12291310u); f_122930a0();
  /* 12291310 mov esi, esp */
  ESI = (ESP);
  /* 12291312 push 0x122bb240 */
  push32((uint32_t)(0x122bb240u));
  /* 12291317 push 0x122c0418 */
  push32((uint32_t)(0x122c0418u));
  /* 1229131c call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291322u);
  /* 12291322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291327 call 0x122930a0 */
  push32(0x1229132cu); f_122930a0();
  /* 1229132c mov esi, esp */
  ESI = (ESP);
  /* 1229132e push 0x122bb22c */
  push32((uint32_t)(0x122bb22cu));
  /* 12291333 push 0x122c0430 */
  push32((uint32_t)(0x122c0430u));
  /* 12291338 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229133eu);
  /* 1229133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291343 call 0x122930a0 */
  push32(0x12291348u); f_122930a0();
  /* 12291348 mov esi, esp */
  ESI = (ESP);
  /* 1229134a push 0x122bb21c */
  push32((uint32_t)(0x122bb21cu));
  /* 1229134f push 0x122c0448 */
  push32((uint32_t)(0x122c0448u));
  /* 12291354 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229135au);
  /* 1229135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229135f call 0x122930a0 */
  push32(0x12291364u); f_122930a0();
  /* 12291364 mov esi, esp */
  ESI = (ESP);
  /* 12291366 push 0x122bb20c */
  push32((uint32_t)(0x122bb20cu));
  /* 1229136b push 0x122c0460 */
  push32((uint32_t)(0x122c0460u));
  /* 12291370 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291376u);
  /* 12291376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229137b call 0x122930a0 */
  push32(0x12291380u); f_122930a0();
  /* 12291380 mov esi, esp */
  ESI = (ESP);
  /* 12291382 push 0x122bb1fc */
  push32((uint32_t)(0x122bb1fcu));
  /* 12291387 push 0x122c0478 */
  push32((uint32_t)(0x122c0478u));
  /* 1229138c call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291392u);
  /* 12291392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291397 call 0x122930a0 */
  push32(0x1229139cu); f_122930a0();
  /* 1229139c mov esi, esp */
  ESI = (ESP);
  /* 1229139e push 0x122bb1ec */
  push32((uint32_t)(0x122bb1ecu));
  /* 122913a3 push 0x122c0490 */
  push32((uint32_t)(0x122c0490u));
  /* 122913a8 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122913aeu);
  /* 122913ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122913b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122913b3 call 0x122930a0 */
  push32(0x122913b8u); f_122930a0();
  /* 122913b8 mov esi, esp */
  ESI = (ESP);
  /* 122913ba push 0x122bb1dc */
  push32((uint32_t)(0x122bb1dcu));
  /* 122913bf push 0x122c04a8 */
  push32((uint32_t)(0x122c04a8u));
  /* 122913c4 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122913cau);
  /* 122913ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122913cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122913cf call 0x122930a0 */
  push32(0x122913d4u); f_122930a0();
  /* 122913d4 mov esi, esp */
  ESI = (ESP);
  /* 122913d6 push 0x122bb1c8 */
  push32((uint32_t)(0x122bb1c8u));
  /* 122913db push 0x122c04c0 */
  push32((uint32_t)(0x122c04c0u));
  /* 122913e0 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122913e6u);
  /* 122913e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122913e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122913eb call 0x122930a0 */
  push32(0x122913f0u); f_122930a0();
  /* 122913f0 mov esi, esp */
  ESI = (ESP);
  /* 122913f2 push 0x122bb1b0 */
  push32((uint32_t)(0x122bb1b0u));
  /* 122913f7 push 0x122c0440 */
  push32((uint32_t)(0x122c0440u));
  /* 122913fc call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291402u);
  /* 12291402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291407 call 0x122930a0 */
  push32(0x1229140cu); f_122930a0();
  /* 1229140c mov esi, esp */
  ESI = (ESP);
  /* 1229140e push 0x122bb198 */
  push32((uint32_t)(0x122bb198u));
  /* 12291413 push 0x122c0458 */
  push32((uint32_t)(0x122c0458u));
  /* 12291418 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229141eu);
  /* 1229141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291423 call 0x122930a0 */
  push32(0x12291428u); f_122930a0();
  /* 12291428 mov esi, esp */
  ESI = (ESP);
  /* 1229142a push 0x122bb188 */
  push32((uint32_t)(0x122bb188u));
  /* 1229142f push 0x122c0470 */
  push32((uint32_t)(0x122c0470u));
  /* 12291434 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229143au);
  /* 1229143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229143f call 0x122930a0 */
  push32(0x12291444u); f_122930a0();
  /* 12291444 mov esi, esp */
  ESI = (ESP);
  /* 12291446 push 0x122bb170 */
  push32((uint32_t)(0x122bb170u));
  /* 1229144b push 0x122c0488 */
  push32((uint32_t)(0x122c0488u));
  /* 12291450 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291456u);
  /* 12291456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229145b call 0x122930a0 */
  push32(0x12291460u); f_122930a0();
  /* 12291460 mov esi, esp */
  ESI = (ESP);
  /* 12291462 push 0x122bb164 */
  push32((uint32_t)(0x122bb164u));
  /* 12291467 push 0x122c04a0 */
  push32((uint32_t)(0x122c04a0u));
  /* 1229146c call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291472u);
  /* 12291472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291477 call 0x122930a0 */
  push32(0x1229147cu); f_122930a0();
  /* 1229147c mov esi, esp */
  ESI = (ESP);
  /* 1229147e push 0x122bb158 */
  push32((uint32_t)(0x122bb158u));
  /* 12291483 push 0x122c04b8 */
  push32((uint32_t)(0x122c04b8u));
  /* 12291488 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229148eu);
  /* 1229148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291493 call 0x122930a0 */
  push32(0x12291498u); f_122930a0();
  /* 12291498 mov esi, esp */
  ESI = (ESP);
  /* 1229149a push 0x122bb148 */
  push32((uint32_t)(0x122bb148u));
  /* 1229149f push 0x122c04d8 */
  push32((uint32_t)(0x122c04d8u));
  /* 122914a4 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122914aau);
  /* 122914aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122914ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122914af call 0x122930a0 */
  push32(0x122914b4u); f_122930a0();
  /* 122914b4 mov esi, esp */
  ESI = (ESP);
  /* 122914b6 push 0x122bb130 */
  push32((uint32_t)(0x122bb130u));
  /* 122914bb push 0x122c04d0 */
  push32((uint32_t)(0x122c04d0u));
  /* 122914c0 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122914c6u);
  /* 122914c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122914c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122914cb call 0x122930a0 */
  push32(0x122914d0u); f_122930a0();
  /* 122914d0 mov esi, esp */
  ESI = (ESP);
  /* 122914d2 push 0x122bb11c */
  push32((uint32_t)(0x122bb11cu));
  /* 122914d7 push 0x122c04e8 */
  push32((uint32_t)(0x122c04e8u));
  /* 122914dc call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122914e2u);
  /* 122914e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122914e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122914e7 call 0x122930a0 */
  push32(0x122914ecu); f_122930a0();
  /* 122914ec mov esi, esp */
  ESI = (ESP);
  /* 122914ee push 0x122bb10c */
  push32((uint32_t)(0x122bb10cu));
  /* 122914f3 push 0x122c04f0 */
  push32((uint32_t)(0x122c04f0u));
  /* 122914f8 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122914feu);
  /* 122914fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291503 call 0x122930a0 */
  push32(0x12291508u); f_122930a0();
  /* 12291508 mov esi, esp */
  ESI = (ESP);
  /* 1229150a push 0x122bb0fc */
  push32((uint32_t)(0x122bb0fcu));
  /* 1229150f push 0x122c0500 */
  push32((uint32_t)(0x122c0500u));
  /* 12291514 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229151au);
  /* 1229151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229151f call 0x122930a0 */
  push32(0x12291524u); f_122930a0();
  /* 12291524 mov esi, esp */
  ESI = (ESP);
  /* 12291526 push 0x122bb0ec */
  push32((uint32_t)(0x122bb0ecu));
  /* 1229152b push 0x122c0510 */
  push32((uint32_t)(0x122c0510u));
  /* 12291530 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291536u);
  /* 12291536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229153b call 0x122930a0 */
  push32(0x12291540u); f_122930a0();
  /* 12291540 mov esi, esp */
  ESI = (ESP);
  /* 12291542 push 0x122bb0dc */
  push32((uint32_t)(0x122bb0dcu));
  /* 12291547 push 0x122c0520 */
  push32((uint32_t)(0x122c0520u));
  /* 1229154c call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291552u);
  /* 12291552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291557 call 0x122930a0 */
  push32(0x1229155cu); f_122930a0();
  /* 1229155c mov esi, esp */
  ESI = (ESP);
  /* 1229155e push 0x122bb0c0 */
  push32((uint32_t)(0x122bb0c0u));
  /* 12291563 push 0x122c0530 */
  push32((uint32_t)(0x122c0530u));
  /* 12291568 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229156eu);
  /* 1229156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291573 call 0x122930a0 */
  push32(0x12291578u); f_122930a0();
  /* 12291578 mov esi, esp */
  ESI = (ESP);
  /* 1229157a push 0x122bb0a8 */
  push32((uint32_t)(0x122bb0a8u));
  /* 1229157f push 0x122c0540 */
  push32((uint32_t)(0x122c0540u));
  /* 12291584 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229158au);
  /* 1229158a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229158f call 0x122930a0 */
  push32(0x12291594u); f_122930a0();
  /* 12291594 mov esi, esp */
  ESI = (ESP);
  /* 12291596 push 0x122bb094 */
  push32((uint32_t)(0x122bb094u));
  /* 1229159b push 0x122c0550 */
  push32((uint32_t)(0x122c0550u));
  /* 122915a0 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122915a6u);
  /* 122915a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122915a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122915ab call 0x122930a0 */
  push32(0x122915b0u); f_122930a0();
  /* 122915b0 mov esi, esp */
  ESI = (ESP);
  /* 122915b2 push 0x122bb080 */
  push32((uint32_t)(0x122bb080u));
  /* 122915b7 push 0x122c04f8 */
  push32((uint32_t)(0x122c04f8u));
  /* 122915bc call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122915c2u);
  /* 122915c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122915c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122915c7 call 0x122930a0 */
  push32(0x122915ccu); f_122930a0();
  /* 122915cc mov esi, esp */
  ESI = (ESP);
  /* 122915ce push 0x122bb06c */
  push32((uint32_t)(0x122bb06cu));
  /* 122915d3 push 0x122c0508 */
  push32((uint32_t)(0x122c0508u));
  /* 122915d8 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122915deu);
  /* 122915de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122915e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122915e3 call 0x122930a0 */
  push32(0x122915e8u); f_122930a0();
  /* 122915e8 mov esi, esp */
  ESI = (ESP);
  /* 122915ea push 0x122bb05c */
  push32((uint32_t)(0x122bb05cu));
  /* 122915ef push 0x122c0518 */
  push32((uint32_t)(0x122c0518u));
  /* 122915f4 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x122915fau);
  /* 122915fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122915fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122915ff call 0x122930a0 */
  push32(0x12291604u); f_122930a0();
  /* 12291604 mov esi, esp */
  ESI = (ESP);
  /* 12291606 push 0x122bb044 */
  push32((uint32_t)(0x122bb044u));
  /* 1229160b push 0x122c0528 */
  push32((uint32_t)(0x122c0528u));
  /* 12291610 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291616u);
  /* 12291616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229161b call 0x122930a0 */
  push32(0x12291620u); f_122930a0();
  /* 12291620 mov esi, esp */
  ESI = (ESP);
  /* 12291622 push 0x122bb038 */
  push32((uint32_t)(0x122bb038u));
  /* 12291627 push 0x122c0538 */
  push32((uint32_t)(0x122c0538u));
  /* 1229162c call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x12291632u);
  /* 12291632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291637 call 0x122930a0 */
  push32(0x1229163cu); f_122930a0();
  /* 1229163c mov esi, esp */
  ESI = (ESP);
  /* 1229163e push 0x122bb02c */
  push32((uint32_t)(0x122bb02cu));
  /* 12291643 push 0x122c0548 */
  push32((uint32_t)(0x122c0548u));
  /* 12291648 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229164eu);
  /* 1229164e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291653 call 0x122930a0 */
  push32(0x12291658u); f_122930a0();
  /* 12291658 mov esi, esp */
  ESI = (ESP);
  /* 1229165a push 0x122bb01c */
  push32((uint32_t)(0x122bb01cu));
  /* 1229165f push 0x122c0558 */
  push32((uint32_t)(0x122c0558u));
  /* 12291664 call dword ptr [0x122c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3410))), 0x1229166au);
  /* 1229166a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229166d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229166f call 0x122930a0 */
  push32(0x12291674u); f_122930a0();
  /* 12291674 mov esi, esp */
  ESI = (ESP);
  /* 12291676 push 1 */
  push32((uint32_t)(0x1u));
  /* 12291678 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229167a call dword ptr [0x122c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3408))), 0x12291680u);
  /* 12291680 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291683 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291685 call 0x122930a0 */
  push32(0x1229168au); f_122930a0();
  /* 1229168a mov esi, esp */
  ESI = (ESP);
  /* 1229168c push 2 */
  push32((uint32_t)(0x2u));
  /* 1229168e push 1 */
  push32((uint32_t)(0x1u));
  /* 12291690 call dword ptr [0x122c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3408))), 0x12291696u);
  /* 12291696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291699 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229169b call 0x122930a0 */
  push32(0x122916a0u); f_122930a0();
  /* 122916a0 mov esi, esp */
  ESI = (ESP);
  /* 122916a2 push 4 */
  push32((uint32_t)(0x4u));
  /* 122916a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 122916a6 call dword ptr [0x122c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3408))), 0x122916acu);
  /* 122916ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122916af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122916b1 call 0x122930a0 */
  push32(0x122916b6u); f_122930a0();
  /* 122916b6 pop edi */
  EDI = (pop32());
  /* 122916b7 pop esi */
  ESI = (pop32());
  /* 122916b8 pop ebx */
  EBX = (pop32());
  /* 122916b9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122916bc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122916be call 0x122930a0 */
  push32(0x122916c3u); f_122930a0();
  /* 122916c3 mov esp, ebp */
  ESP = (EBP);
  /* 122916c5 pop ebp */
  EBP = (pop32());
  /* 122916c6 ret  */
  ESPCHK(0x12291090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001860 @ 0x12291860 (4875 bytes, 1449 insns) */
void f_12291860(void) {
  FTRACE(0x12291860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12291860 push ebp */
  push32((uint32_t)(EBP));
  /* 12291861 mov ebp, esp */
  EBP = (ESP);
  /* 12291863 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12291866 push ebx */
  push32((uint32_t)(EBX));
  /* 12291867 push esi */
  push32((uint32_t)(ESI));
  /* 12291868 push edi */
  push32((uint32_t)(EDI));
  /* 12291869 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1229186c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12291871 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12291876 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12291878 mov esi, esp */
  ESI = (ESP);
  /* 1229187a push 1 */
  push32((uint32_t)(0x1u));
  /* 1229187c call dword ptr [0x122c33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33c8))), 0x12291882u);
  /* 12291882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291885 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291887 call 0x122930a0 */
  push32(0x1229188cu); f_122930a0();
  /* 1229188c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12291891 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12291893 je 0x12291cd9 */
  if (C.zf) goto L_12291cd9;
  /* 12291899 mov esi, esp */
  ESI = (ESP);
  /* 1229189b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229189d push 1 */
  push32((uint32_t)(0x1u));
  /* 1229189f call dword ptr [0x122c33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d0))), 0x122918a5u);
  /* 122918a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122918a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122918aa call 0x122930a0 */
  push32(0x122918afu); f_122930a0();
  /* 122918af mov esi, esp */
  ESI = (ESP);
  /* 122918b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122918b3 call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x122918b9u);
  /* 122918b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122918bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122918be call 0x122930a0 */
  push32(0x122918c3u); f_122930a0();
  /* 122918c3 mov ecx, 3 */
  ECX = (0x3u);
  /* 122918c8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122918ca imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122918d0 add ecx, 0xfa0 */
  { uint32_t _a=(ECX),_b=(0xfa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122918d6 mov esi, esp */
  ESI = (ESP);
  /* 122918d8 push ecx */
  push32((uint32_t)(ECX));
  /* 122918d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 122918db push 0 */
  push32((uint32_t)(0x0u));
  /* 122918dd call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x122918e3u);
  /* 122918e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122918e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122918e8 call 0x122930a0 */
  push32(0x122918edu); f_122930a0();
  /* 122918ed mov esi, esp */
  ESI = (ESP);
  /* 122918ef push 0 */
  push32((uint32_t)(0x0u));
  /* 122918f1 call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x122918f7u);
  /* 122918f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122918fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122918fc call 0x122930a0 */
  push32(0x12291901u); f_122930a0();
  /* 12291901 mov edx, 3 */
  EDX = (0x3u);
  /* 12291906 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12291908 imul edx, edx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x1f4u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229190e add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291914 mov esi, esp */
  ESI = (ESP);
  /* 12291916 push edx */
  push32((uint32_t)(EDX));
  /* 12291917 push 1 */
  push32((uint32_t)(0x1u));
  /* 12291919 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229191b call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291921u);
  /* 12291921 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291924 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291926 call 0x122930a0 */
  push32(0x1229192bu); f_122930a0();
  /* 1229192b mov esi, esp */
  ESI = (ESP);
  /* 1229192d push 0 */
  push32((uint32_t)(0x0u));
  /* 1229192f call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291935u);
  /* 12291935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291938 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229193a call 0x122930a0 */
  push32(0x1229193fu); f_122930a0();
  /* 1229193f mov ecx, 3 */
  ECX = (0x3u);
  /* 12291944 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12291946 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229194c add ecx, 0xfa0 */
  { uint32_t _a=(ECX),_b=(0xfa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291952 mov esi, esp */
  ESI = (ESP);
  /* 12291954 push ecx */
  push32((uint32_t)(ECX));
  /* 12291955 push 4 */
  push32((uint32_t)(0x4u));
  /* 12291957 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291959 call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x1229195fu);
  /* 1229195f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291962 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291964 call 0x122930a0 */
  push32(0x12291969u); f_122930a0();
  /* 12291969 mov esi, esp */
  ESI = (ESP);
  /* 1229196b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229196d call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291973u);
  /* 12291973 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291976 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291978 call 0x122930a0 */
  push32(0x1229197du); f_122930a0();
  /* 1229197d mov edx, 3 */
  EDX = (0x3u);
  /* 12291982 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12291984 imul edx, edx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x1f4u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229198a add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291990 mov esi, esp */
  ESI = (ESP);
  /* 12291992 push edx */
  push32((uint32_t)(EDX));
  /* 12291993 push 2 */
  push32((uint32_t)(0x2u));
  /* 12291995 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291997 call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x1229199du);
  /* 1229199d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122919a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122919a2 call 0x122930a0 */
  push32(0x122919a7u); f_122930a0();
  /* 122919a7 mov esi, esp */
  ESI = (ESP);
  /* 122919a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122919ab call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x122919b1u);
  /* 122919b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122919b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122919b6 call 0x122930a0 */
  push32(0x122919bbu); f_122930a0();
  /* 122919bb mov ecx, 3 */
  ECX = (0x3u);
  /* 122919c0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122919c2 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122919c8 add ecx, 0xfa0 */
  { uint32_t _a=(ECX),_b=(0xfa0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122919ce mov esi, esp */
  ESI = (ESP);
  /* 122919d0 push ecx */
  push32((uint32_t)(ECX));
  /* 122919d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122919d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122919d5 call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x122919dbu);
  /* 122919db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122919de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122919e0 call 0x122930a0 */
  push32(0x122919e5u); f_122930a0();
  /* 122919e5 mov esi, esp */
  ESI = (ESP);
  /* 122919e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122919e9 call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x122919efu);
  /* 122919ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122919f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122919f4 call 0x122930a0 */
  push32(0x122919f9u); f_122930a0();
  /* 122919f9 mov edx, 3 */
  EDX = (0x3u);
  /* 122919fe sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12291a00 imul edx, edx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x1f4u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12291a06 add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291a0c mov esi, esp */
  ESI = (ESP);
  /* 12291a0e push edx */
  push32((uint32_t)(EDX));
  /* 12291a0f push 5 */
  push32((uint32_t)(0x5u));
  /* 12291a11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291a13 call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291a19u);
  /* 12291a19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291a1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291a1e call 0x122930a0 */
  push32(0x12291a23u); f_122930a0();
  /* 12291a23 mov esi, esp */
  ESI = (ESP);
  /* 12291a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291a27 call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291a2du);
  /* 12291a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291a30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291a32 call 0x122930a0 */
  push32(0x12291a37u); f_122930a0();
  /* 12291a37 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12291a3d add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291a42 mov esi, esp */
  ESI = (ESP);
  /* 12291a44 push eax */
  push32((uint32_t)(EAX));
  /* 12291a45 push 3 */
  push32((uint32_t)(0x3u));
  /* 12291a47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12291a49 call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291a4fu);
  /* 12291a4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291a52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291a54 call 0x122930a0 */
  push32(0x12291a59u); f_122930a0();
  /* 12291a59 mov esi, esp */
  ESI = (ESP);
  /* 12291a5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12291a5d call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291a63u);
  /* 12291a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291a66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291a68 call 0x122930a0 */
  push32(0x12291a6du); f_122930a0();
  /* 12291a6d imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12291a73 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291a78 mov esi, esp */
  ESI = (ESP);
  /* 12291a7a push eax */
  push32((uint32_t)(EAX));
  /* 12291a7b push 1 */
  push32((uint32_t)(0x1u));
  /* 12291a7d push 1 */
  push32((uint32_t)(0x1u));
  /* 12291a7f call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291a85u);
  /* 12291a85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291a88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291a8a call 0x122930a0 */
  push32(0x12291a8fu); f_122930a0();
  /* 12291a8f mov esi, esp */
  ESI = (ESP);
  /* 12291a91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291a93 call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291a99u);
  /* 12291a99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291a9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291a9e call 0x122930a0 */
  push32(0x12291aa3u); f_122930a0();
  /* 12291aa3 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12291aa9 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291aae mov esi, esp */
  ESI = (ESP);
  /* 12291ab0 push eax */
  push32((uint32_t)(EAX));
  /* 12291ab1 push 4 */
  push32((uint32_t)(0x4u));
  /* 12291ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12291ab5 call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291abbu);
  /* 12291abb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291abe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291ac0 call 0x122930a0 */
  push32(0x12291ac5u); f_122930a0();
  /* 12291ac5 mov esi, esp */
  ESI = (ESP);
  /* 12291ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291ac9 call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291acfu);
  /* 12291acf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291ad2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291ad4 call 0x122930a0 */
  push32(0x12291ad9u); f_122930a0();
  /* 12291ad9 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12291adf add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291ae4 mov esi, esp */
  ESI = (ESP);
  /* 12291ae6 push eax */
  push32((uint32_t)(EAX));
  /* 12291ae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12291ae9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12291aeb call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291af1u);
  /* 12291af1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291af4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291af6 call 0x122930a0 */
  push32(0x12291afbu); f_122930a0();
  /* 12291afb mov esi, esp */
  ESI = (ESP);
  /* 12291afd push 0 */
  push32((uint32_t)(0x0u));
  /* 12291aff call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291b05u);
  /* 12291b05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291b08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291b0a call 0x122930a0 */
  push32(0x12291b0fu); f_122930a0();
  /* 12291b0f imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12291b15 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291b1a mov esi, esp */
  ESI = (ESP);
  /* 12291b1c push eax */
  push32((uint32_t)(EAX));
  /* 12291b1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12291b1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12291b21 call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291b27u);
  /* 12291b27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291b2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291b2c call 0x122930a0 */
  push32(0x12291b31u); f_122930a0();
  /* 12291b31 mov esi, esp */
  ESI = (ESP);
  /* 12291b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291b35 call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291b3bu);
  /* 12291b3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291b3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291b40 call 0x122930a0 */
  push32(0x12291b45u); f_122930a0();
  /* 12291b45 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12291b4b add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291b50 mov esi, esp */
  ESI = (ESP);
  /* 12291b52 push eax */
  push32((uint32_t)(EAX));
  /* 12291b53 push 5 */
  push32((uint32_t)(0x5u));
  /* 12291b55 push 1 */
  push32((uint32_t)(0x1u));
  /* 12291b57 call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291b5du);
  /* 12291b5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291b60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291b62 call 0x122930a0 */
  push32(0x12291b67u); f_122930a0();
  /* 12291b67 mov esi, esp */
  ESI = (ESP);
  /* 12291b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291b6b call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291b71u);
  /* 12291b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291b74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291b76 call 0x122930a0 */
  push32(0x12291b7bu); f_122930a0();
  /* 12291b7b imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12291b81 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291b86 mov esi, esp */
  ESI = (ESP);
  /* 12291b88 push eax */
  push32((uint32_t)(EAX));
  /* 12291b89 push 3 */
  push32((uint32_t)(0x3u));
  /* 12291b8b push 2 */
  push32((uint32_t)(0x2u));
  /* 12291b8d call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291b93u);
  /* 12291b93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291b96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291b98 call 0x122930a0 */
  push32(0x12291b9du); f_122930a0();
  /* 12291b9d mov esi, esp */
  ESI = (ESP);
  /* 12291b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12291ba1 call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291ba7u);
  /* 12291ba7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291baa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291bac call 0x122930a0 */
  push32(0x12291bb1u); f_122930a0();
  /* 12291bb1 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12291bb7 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291bbc mov esi, esp */
  ESI = (ESP);
  /* 12291bbe push eax */
  push32((uint32_t)(EAX));
  /* 12291bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 12291bc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12291bc3 call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291bc9u);
  /* 12291bc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291bcc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291bce call 0x122930a0 */
  push32(0x12291bd3u); f_122930a0();
  /* 12291bd3 mov esi, esp */
  ESI = (ESP);
  /* 12291bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291bd7 call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291bddu);
  /* 12291bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291be0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291be2 call 0x122930a0 */
  push32(0x12291be7u); f_122930a0();
  /* 12291be7 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12291bed add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291bf2 mov esi, esp */
  ESI = (ESP);
  /* 12291bf4 push eax */
  push32((uint32_t)(EAX));
  /* 12291bf5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12291bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12291bf9 call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291bffu);
  /* 12291bff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291c02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291c04 call 0x122930a0 */
  push32(0x12291c09u); f_122930a0();
  /* 12291c09 mov esi, esp */
  ESI = (ESP);
  /* 12291c0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12291c0d call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291c13u);
  /* 12291c13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291c16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291c18 call 0x122930a0 */
  push32(0x12291c1du); f_122930a0();
  /* 12291c1d imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12291c23 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291c28 mov esi, esp */
  ESI = (ESP);
  /* 12291c2a push eax */
  push32((uint32_t)(EAX));
  /* 12291c2b push 2 */
  push32((uint32_t)(0x2u));
  /* 12291c2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12291c2f call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291c35u);
  /* 12291c35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291c38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291c3a call 0x122930a0 */
  push32(0x12291c3fu); f_122930a0();
  /* 12291c3f mov esi, esp */
  ESI = (ESP);
  /* 12291c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291c43 call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291c49u);
  /* 12291c49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291c4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291c4e call 0x122930a0 */
  push32(0x12291c53u); f_122930a0();
  /* 12291c53 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12291c59 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291c5e mov esi, esp */
  ESI = (ESP);
  /* 12291c60 push eax */
  push32((uint32_t)(EAX));
  /* 12291c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291c63 push 2 */
  push32((uint32_t)(0x2u));
  /* 12291c65 call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291c6bu);
  /* 12291c6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291c6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291c70 call 0x122930a0 */
  push32(0x12291c75u); f_122930a0();
  /* 12291c75 mov esi, esp */
  ESI = (ESP);
  /* 12291c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291c79 call dword ptr [0x122c33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d4))), 0x12291c7fu);
  /* 12291c7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291c82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291c84 call 0x122930a0 */
  push32(0x12291c89u); f_122930a0();
  /* 12291c89 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12291c8f add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12291c94 mov esi, esp */
  ESI = (ESP);
  /* 12291c96 push eax */
  push32((uint32_t)(EAX));
  /* 12291c97 push 5 */
  push32((uint32_t)(0x5u));
  /* 12291c99 push 2 */
  push32((uint32_t)(0x2u));
  /* 12291c9b call dword ptr [0x122c33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33cc))), 0x12291ca1u);
  /* 12291ca1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291ca4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291ca6 call 0x122930a0 */
  push32(0x12291cabu); f_122930a0();
  /* 12291cab mov esi, esp */
  ESI = (ESP);
  /* 12291cad push 0x122bb424 */
  push32((uint32_t)(0x122bb424u));
  /* 12291cb2 call dword ptr [0x122c33dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33dc))), 0x12291cb8u);
  /* 12291cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291cbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291cbd call 0x122930a0 */
  push32(0x12291cc2u); f_122930a0();
  /* 12291cc2 mov esi, esp */
  ESI = (ESP);
  /* 12291cc4 push 0x122bb41c */
  push32((uint32_t)(0x122bb41cu));
  /* 12291cc9 call dword ptr [0x122c33dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33dc))), 0x12291ccfu);
  /* 12291ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291cd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291cd4 call 0x122930a0 */
  push32(0x12291cd9u); f_122930a0();
L_12291cd9:;
  /* 12291cd9 mov esi, esp */
  ESI = (ESP);
  /* 12291cdb push 2 */
  push32((uint32_t)(0x2u));
  /* 12291cdd call dword ptr [0x122c33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33c8))), 0x12291ce3u);
  /* 12291ce3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291ce6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291ce8 call 0x122930a0 */
  push32(0x12291cedu); f_122930a0();
  /* 12291ced and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12291cf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12291cf4 je 0x12292a51 */
  if (C.zf) goto L_12292a51;
  /* 12291cfa mov esi, esp */
  ESI = (ESP);
  /* 12291cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 12291cfe push 2 */
  push32((uint32_t)(0x2u));
  /* 12291d00 call dword ptr [0x122c33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d0))), 0x12291d06u);
  /* 12291d06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291d09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291d0b call 0x122930a0 */
  push32(0x12291d10u); f_122930a0();
  /* 12291d10 mov esi, esp */
  ESI = (ESP);
  /* 12291d12 push 0x122bb404 */
  push32((uint32_t)(0x122bb404u));
  /* 12291d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291d19 push 0x122bb3fc */
  push32((uint32_t)(0x122bb3fcu));
  /* 12291d1e push 9 */
  push32((uint32_t)(0x9u));
  /* 12291d20 call dword ptr [0x122c33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e0))), 0x12291d26u);
  /* 12291d26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291d29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291d2b call 0x122930a0 */
  push32(0x12291d30u); f_122930a0();
  /* 12291d30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12291d33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291d37 je 0x12291d52 */
  if (C.zf) goto L_12291d52;
  /* 12291d39 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291d3d je 0x122921da */
  if (C.zf) goto L_122921da;
  /* 12291d43 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291d47 je 0x12292662 */
  if (C.zf) goto L_12292662;
  /* 12291d4d jmp 0x12292a51 */
  goto L_12292a51;
L_12291d52:;
  /* 12291d52 mov esi, esp */
  ESI = (ESP);
  /* 12291d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291d56 push 0x122c0560 */
  push32((uint32_t)(0x122c0560u));
  /* 12291d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12291d5d call dword ptr [0x122c33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d8))), 0x12291d63u);
  /* 12291d63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291d66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291d68 call 0x122930a0 */
  push32(0x12291d6du); f_122930a0();
  /* 12291d6d mov esi, esp */
  ESI = (ESP);
  /* 12291d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 12291d71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291d73 call dword ptr [0x122c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e8))), 0x12291d79u);
  /* 12291d79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291d7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291d7e call 0x122930a0 */
  push32(0x12291d83u); f_122930a0();
  /* 12291d83 mov esi, esp */
  ESI = (ESP);
  /* 12291d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291d87 push 0x122c0570 */
  push32((uint32_t)(0x122c0570u));
  /* 12291d8c push 1 */
  push32((uint32_t)(0x1u));
  /* 12291d8e call dword ptr [0x122c33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d8))), 0x12291d94u);
  /* 12291d94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291d97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291d99 call 0x122930a0 */
  push32(0x12291d9eu); f_122930a0();
  /* 12291d9e mov esi, esp */
  ESI = (ESP);
  /* 12291da0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291da2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12291da4 call dword ptr [0x122c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e8))), 0x12291daau);
  /* 12291daa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291dad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291daf call 0x122930a0 */
  push32(0x12291db4u); f_122930a0();
  /* 12291db4 mov esi, esp */
  ESI = (ESP);
  /* 12291db6 push 0x122c0580 */
  push32((uint32_t)(0x122c0580u));
  /* 12291dbb call dword ptr [0x122c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33ec))), 0x12291dc1u);
  /* 12291dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291dc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291dc6 call 0x122930a0 */
  push32(0x12291dcbu); f_122930a0();
  /* 12291dcb mov esi, esp */
  ESI = (ESP);
  /* 12291dcd push 0 */
  push32((uint32_t)(0x0u));
  /* 12291dcf push 0x122c0570 */
  push32((uint32_t)(0x122c0570u));
  /* 12291dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291dd6 call dword ptr [0x122c33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d8))), 0x12291ddcu);
  /* 12291ddc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291ddf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291de1 call 0x122930a0 */
  push32(0x12291de6u); f_122930a0();
  /* 12291de6 mov esi, esp */
  ESI = (ESP);
  /* 12291de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291dea push 0x122c04d8 */
  push32((uint32_t)(0x122c04d8u));
  /* 12291def push 0 */
  push32((uint32_t)(0x0u));
  /* 12291df1 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291df7u);
  /* 12291df7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291dfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291dfc call 0x122930a0 */
  push32(0x12291e01u); f_122930a0();
  /* 12291e01 mov esi, esp */
  ESI = (ESP);
  /* 12291e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291e05 push 0x122c0428 */
  push32((uint32_t)(0x122c0428u));
  /* 12291e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12291e0c call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291e12u);
  /* 12291e12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291e15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291e17 call 0x122930a0 */
  push32(0x12291e1cu); f_122930a0();
  /* 12291e1c mov esi, esp */
  ESI = (ESP);
  /* 12291e1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12291e20 push 0x122c0438 */
  push32((uint32_t)(0x122c0438u));
  /* 12291e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291e27 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291e2du);
  /* 12291e2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291e30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291e32 call 0x122930a0 */
  push32(0x12291e37u); f_122930a0();
  /* 12291e37 mov esi, esp */
  ESI = (ESP);
  /* 12291e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291e3b push 0x122c0450 */
  push32((uint32_t)(0x122c0450u));
  /* 12291e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291e42 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291e48u);
  /* 12291e48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291e4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291e4d call 0x122930a0 */
  push32(0x12291e52u); f_122930a0();
  /* 12291e52 mov esi, esp */
  ESI = (ESP);
  /* 12291e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291e56 push 0x122c0468 */
  push32((uint32_t)(0x122c0468u));
  /* 12291e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12291e5d call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291e63u);
  /* 12291e63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291e66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291e68 call 0x122930a0 */
  push32(0x12291e6du); f_122930a0();
  /* 12291e6d mov esi, esp */
  ESI = (ESP);
  /* 12291e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12291e71 push 0x122c0480 */
  push32((uint32_t)(0x122c0480u));
  /* 12291e76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291e78 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291e7eu);
  /* 12291e7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291e81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291e83 call 0x122930a0 */
  push32(0x12291e88u); f_122930a0();
  /* 12291e88 mov esi, esp */
  ESI = (ESP);
  /* 12291e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12291e8c push 0x122c0498 */
  push32((uint32_t)(0x122c0498u));
  /* 12291e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291e93 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291e99u);
  /* 12291e99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291e9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291e9e call 0x122930a0 */
  push32(0x12291ea3u); f_122930a0();
  /* 12291ea3 mov esi, esp */
  ESI = (ESP);
  /* 12291ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291ea7 push 0x122c04b0 */
  push32((uint32_t)(0x122c04b0u));
  /* 12291eac push 0 */
  push32((uint32_t)(0x0u));
  /* 12291eae call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291eb4u);
  /* 12291eb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291eb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291eb9 call 0x122930a0 */
  push32(0x12291ebeu); f_122930a0();
  /* 12291ebe mov esi, esp */
  ESI = (ESP);
  /* 12291ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291ec2 push 0x122c04c8 */
  push32((uint32_t)(0x122c04c8u));
  /* 12291ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291ec9 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291ecfu);
  /* 12291ecf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291ed2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291ed4 call 0x122930a0 */
  push32(0x12291ed9u); f_122930a0();
  /* 12291ed9 mov esi, esp */
  ESI = (ESP);
  /* 12291edb push 0 */
  push32((uint32_t)(0x0u));
  /* 12291edd push 0x122c04e0 */
  push32((uint32_t)(0x122c04e0u));
  /* 12291ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291ee4 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291eeau);
  /* 12291eea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291eed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291eef call 0x122930a0 */
  push32(0x12291ef4u); f_122930a0();
  /* 12291ef4 mov esi, esp */
  ESI = (ESP);
  /* 12291ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291ef8 push 0x122c03e0 */
  push32((uint32_t)(0x122c03e0u));
  /* 12291efd push 0 */
  push32((uint32_t)(0x0u));
  /* 12291eff call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291f05u);
  /* 12291f05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291f08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291f0a call 0x122930a0 */
  push32(0x12291f0fu); f_122930a0();
  /* 12291f0f mov esi, esp */
  ESI = (ESP);
  /* 12291f11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291f13 push 0x122c03e8 */
  push32((uint32_t)(0x122c03e8u));
  /* 12291f18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291f1a call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291f20u);
  /* 12291f20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291f23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291f25 call 0x122930a0 */
  push32(0x12291f2au); f_122930a0();
  /* 12291f2a mov esi, esp */
  ESI = (ESP);
  /* 12291f2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12291f2e push 0x122c03f0 */
  push32((uint32_t)(0x122c03f0u));
  /* 12291f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291f35 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291f3bu);
  /* 12291f3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291f3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291f40 call 0x122930a0 */
  push32(0x12291f45u); f_122930a0();
  /* 12291f45 mov esi, esp */
  ESI = (ESP);
  /* 12291f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291f49 push 0x122c03f8 */
  push32((uint32_t)(0x122c03f8u));
  /* 12291f4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12291f50 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291f56u);
  /* 12291f56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291f59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291f5b call 0x122930a0 */
  push32(0x12291f60u); f_122930a0();
  /* 12291f60 mov esi, esp */
  ESI = (ESP);
  /* 12291f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291f64 push 0x122c0400 */
  push32((uint32_t)(0x122c0400u));
  /* 12291f69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291f6b call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291f71u);
  /* 12291f71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291f74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291f76 call 0x122930a0 */
  push32(0x12291f7bu); f_122930a0();
  /* 12291f7b mov esi, esp */
  ESI = (ESP);
  /* 12291f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12291f7f push 0x122c0410 */
  push32((uint32_t)(0x122c0410u));
  /* 12291f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291f86 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291f8cu);
  /* 12291f8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291f8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291f91 call 0x122930a0 */
  push32(0x12291f96u); f_122930a0();
  /* 12291f96 mov esi, esp */
  ESI = (ESP);
  /* 12291f98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291f9a push 0x122c0420 */
  push32((uint32_t)(0x122c0420u));
  /* 12291f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12291fa1 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291fa7u);
  /* 12291fa7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291faa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291fac call 0x122930a0 */
  push32(0x12291fb1u); f_122930a0();
  /* 12291fb1 mov esi, esp */
  ESI = (ESP);
  /* 12291fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291fb5 push 0x122c04d0 */
  push32((uint32_t)(0x122c04d0u));
  /* 12291fba push 0 */
  push32((uint32_t)(0x0u));
  /* 12291fbc call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291fc2u);
  /* 12291fc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291fc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291fc7 call 0x122930a0 */
  push32(0x12291fccu); f_122930a0();
  /* 12291fcc mov esi, esp */
  ESI = (ESP);
  /* 12291fce push 0 */
  push32((uint32_t)(0x0u));
  /* 12291fd0 push 0x122c04e8 */
  push32((uint32_t)(0x122c04e8u));
  /* 12291fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291fd7 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291fddu);
  /* 12291fdd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291fe0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291fe2 call 0x122930a0 */
  push32(0x12291fe7u); f_122930a0();
  /* 12291fe7 mov esi, esp */
  ESI = (ESP);
  /* 12291fe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291feb push 0x122c04f0 */
  push32((uint32_t)(0x122c04f0u));
  /* 12291ff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12291ff2 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12291ff8u);
  /* 12291ff8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12291ffb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12291ffd call 0x122930a0 */
  push32(0x12292002u); f_122930a0();
  /* 12292002 mov esi, esp */
  ESI = (ESP);
  /* 12292004 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292006 push 0x122c0500 */
  push32((uint32_t)(0x122c0500u));
  /* 1229200b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229200d call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292013u);
  /* 12292013 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292016 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292018 call 0x122930a0 */
  push32(0x1229201du); f_122930a0();
  /* 1229201d mov esi, esp */
  ESI = (ESP);
  /* 1229201f push 0 */
  push32((uint32_t)(0x0u));
  /* 12292021 push 0x122c0510 */
  push32((uint32_t)(0x122c0510u));
  /* 12292026 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292028 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229202eu);
  /* 1229202e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292031 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292033 call 0x122930a0 */
  push32(0x12292038u); f_122930a0();
  /* 12292038 mov esi, esp */
  ESI = (ESP);
  /* 1229203a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229203c push 0x122c0520 */
  push32((uint32_t)(0x122c0520u));
  /* 12292041 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292043 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292049u);
  /* 12292049 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229204c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229204e call 0x122930a0 */
  push32(0x12292053u); f_122930a0();
  /* 12292053 mov esi, esp */
  ESI = (ESP);
  /* 12292055 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292057 push 0x122c0530 */
  push32((uint32_t)(0x122c0530u));
  /* 1229205c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229205e call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292064u);
  /* 12292064 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292067 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292069 call 0x122930a0 */
  push32(0x1229206eu); f_122930a0();
  /* 1229206e mov esi, esp */
  ESI = (ESP);
  /* 12292070 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292072 push 0x122c0540 */
  push32((uint32_t)(0x122c0540u));
  /* 12292077 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292079 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229207fu);
  /* 1229207f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292082 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292084 call 0x122930a0 */
  push32(0x12292089u); f_122930a0();
  /* 12292089 mov esi, esp */
  ESI = (ESP);
  /* 1229208b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229208d push 0x122c0550 */
  push32((uint32_t)(0x122c0550u));
  /* 12292092 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292094 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229209au);
  /* 1229209a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229209d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229209f call 0x122930a0 */
  push32(0x122920a4u); f_122930a0();
  /* 122920a4 mov esi, esp */
  ESI = (ESP);
  /* 122920a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 122920a8 push 0x122c04f8 */
  push32((uint32_t)(0x122c04f8u));
  /* 122920ad push 0 */
  push32((uint32_t)(0x0u));
  /* 122920af call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122920b5u);
  /* 122920b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122920b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122920ba call 0x122930a0 */
  push32(0x122920bfu); f_122930a0();
  /* 122920bf mov esi, esp */
  ESI = (ESP);
  /* 122920c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122920c3 push 0x122c0508 */
  push32((uint32_t)(0x122c0508u));
  /* 122920c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122920ca call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122920d0u);
  /* 122920d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122920d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122920d5 call 0x122930a0 */
  push32(0x122920dau); f_122930a0();
  /* 122920da mov esi, esp */
  ESI = (ESP);
  /* 122920dc push 0 */
  push32((uint32_t)(0x0u));
  /* 122920de push 0x122c0518 */
  push32((uint32_t)(0x122c0518u));
  /* 122920e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122920e5 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122920ebu);
  /* 122920eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122920ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122920f0 call 0x122930a0 */
  push32(0x122920f5u); f_122930a0();
  /* 122920f5 mov esi, esp */
  ESI = (ESP);
  /* 122920f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122920f9 push 0x122c0528 */
  push32((uint32_t)(0x122c0528u));
  /* 122920fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12292100 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292106u);
  /* 12292106 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292109 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229210b call 0x122930a0 */
  push32(0x12292110u); f_122930a0();
  /* 12292110 mov esi, esp */
  ESI = (ESP);
  /* 12292112 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292114 push 0x122c0538 */
  push32((uint32_t)(0x122c0538u));
  /* 12292119 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229211b call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292121u);
  /* 12292121 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292124 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292126 call 0x122930a0 */
  push32(0x1229212bu); f_122930a0();
  /* 1229212b mov esi, esp */
  ESI = (ESP);
  /* 1229212d push 0 */
  push32((uint32_t)(0x0u));
  /* 1229212f push 0x122c0548 */
  push32((uint32_t)(0x122c0548u));
  /* 12292134 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292136 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229213cu);
  /* 1229213c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229213f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292141 call 0x122930a0 */
  push32(0x12292146u); f_122930a0();
  /* 12292146 mov esi, esp */
  ESI = (ESP);
  /* 12292148 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229214a push 0x122c0558 */
  push32((uint32_t)(0x122c0558u));
  /* 1229214f push 0 */
  push32((uint32_t)(0x0u));
  /* 12292151 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292157u);
  /* 12292157 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229215a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229215c call 0x122930a0 */
  push32(0x12292161u); f_122930a0();
  /* 12292161 mov esi, esp */
  ESI = (ESP);
  /* 12292163 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12292165 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292167 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292169 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229216b push 0x122bb3f0 */
  push32((uint32_t)(0x122bb3f0u));
  /* 12292170 push 2 */
  push32((uint32_t)(0x2u));
  /* 12292172 call dword ptr [0x122c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f4))), 0x12292178u);
  /* 12292178 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229217b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229217d call 0x122930a0 */
  push32(0x12292182u); f_122930a0();
  /* 12292182 mov esi, esp */
  ESI = (ESP);
  /* 12292184 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12292186 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292188 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229218a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229218c push 0x122bb3e4 */
  push32((uint32_t)(0x122bb3e4u));
  /* 12292191 push 1 */
  push32((uint32_t)(0x1u));
  /* 12292193 call dword ptr [0x122c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f4))), 0x12292199u);
  /* 12292199 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229219c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229219e call 0x122930a0 */
  push32(0x122921a3u); f_122930a0();
  /* 122921a3 mov esi, esp */
  ESI = (ESP);
  /* 122921a5 push 0x122bb3d8 */
  push32((uint32_t)(0x122bb3d8u));
  /* 122921aa push 2 */
  push32((uint32_t)(0x2u));
  /* 122921ac call dword ptr [0x122c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f8))), 0x122921b2u);
  /* 122921b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122921b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122921b7 call 0x122930a0 */
  push32(0x122921bcu); f_122930a0();
  /* 122921bc mov esi, esp */
  ESI = (ESP);
  /* 122921be push 0x122bb3d0 */
  push32((uint32_t)(0x122bb3d0u));
  /* 122921c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122921c5 call dword ptr [0x122c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f8))), 0x122921cbu);
  /* 122921cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122921ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122921d0 call 0x122930a0 */
  push32(0x122921d5u); f_122930a0();
  /* 122921d5 jmp 0x12292a51 */
  goto L_12292a51;
L_122921da:;
  /* 122921da mov esi, esp */
  ESI = (ESP);
  /* 122921dc push 0 */
  push32((uint32_t)(0x0u));
  /* 122921de push 0x122c0560 */
  push32((uint32_t)(0x122c0560u));
  /* 122921e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122921e5 call dword ptr [0x122c33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d8))), 0x122921ebu);
  /* 122921eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122921ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122921f0 call 0x122930a0 */
  push32(0x122921f5u); f_122930a0();
  /* 122921f5 mov esi, esp */
  ESI = (ESP);
  /* 122921f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122921f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122921fb call dword ptr [0x122c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e8))), 0x12292201u);
  /* 12292201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292204 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292206 call 0x122930a0 */
  push32(0x1229220bu); f_122930a0();
  /* 1229220b mov esi, esp */
  ESI = (ESP);
  /* 1229220d push 0 */
  push32((uint32_t)(0x0u));
  /* 1229220f push 0x122c0568 */
  push32((uint32_t)(0x122c0568u));
  /* 12292214 push 2 */
  push32((uint32_t)(0x2u));
  /* 12292216 call dword ptr [0x122c33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d8))), 0x1229221cu);
  /* 1229221c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229221f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292221 call 0x122930a0 */
  push32(0x12292226u); f_122930a0();
  /* 12292226 mov esi, esp */
  ESI = (ESP);
  /* 12292228 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229222a push 2 */
  push32((uint32_t)(0x2u));
  /* 1229222c call dword ptr [0x122c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e8))), 0x12292232u);
  /* 12292232 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292235 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292237 call 0x122930a0 */
  push32(0x1229223cu); f_122930a0();
  /* 1229223c mov esi, esp */
  ESI = (ESP);
  /* 1229223e push 0x122c0578 */
  push32((uint32_t)(0x122c0578u));
  /* 12292243 call dword ptr [0x122c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33ec))), 0x12292249u);
  /* 12292249 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229224c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229224e call 0x122930a0 */
  push32(0x12292253u); f_122930a0();
  /* 12292253 mov esi, esp */
  ESI = (ESP);
  /* 12292255 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292257 push 0x122c0568 */
  push32((uint32_t)(0x122c0568u));
  /* 1229225c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229225e call dword ptr [0x122c33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d8))), 0x12292264u);
  /* 12292264 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292267 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292269 call 0x122930a0 */
  push32(0x1229226eu); f_122930a0();
  /* 1229226e mov esi, esp */
  ESI = (ESP);
  /* 12292270 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292272 push 0x122c0558 */
  push32((uint32_t)(0x122c0558u));
  /* 12292277 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292279 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229227fu);
  /* 1229227f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292282 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292284 call 0x122930a0 */
  push32(0x12292289u); f_122930a0();
  /* 12292289 mov esi, esp */
  ESI = (ESP);
  /* 1229228b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229228d push 0x122c0428 */
  push32((uint32_t)(0x122c0428u));
  /* 12292292 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292294 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229229au);
  /* 1229229a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229229d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229229f call 0x122930a0 */
  push32(0x122922a4u); f_122930a0();
  /* 122922a4 mov esi, esp */
  ESI = (ESP);
  /* 122922a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122922a8 push 0x122c0438 */
  push32((uint32_t)(0x122c0438u));
  /* 122922ad push 0 */
  push32((uint32_t)(0x0u));
  /* 122922af call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122922b5u);
  /* 122922b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122922b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122922ba call 0x122930a0 */
  push32(0x122922bfu); f_122930a0();
  /* 122922bf mov esi, esp */
  ESI = (ESP);
  /* 122922c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122922c3 push 0x122c0450 */
  push32((uint32_t)(0x122c0450u));
  /* 122922c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122922ca call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122922d0u);
  /* 122922d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122922d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122922d5 call 0x122930a0 */
  push32(0x122922dau); f_122930a0();
  /* 122922da mov esi, esp */
  ESI = (ESP);
  /* 122922dc push 0 */
  push32((uint32_t)(0x0u));
  /* 122922de push 0x122c0468 */
  push32((uint32_t)(0x122c0468u));
  /* 122922e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122922e5 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122922ebu);
  /* 122922eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122922ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122922f0 call 0x122930a0 */
  push32(0x122922f5u); f_122930a0();
  /* 122922f5 mov esi, esp */
  ESI = (ESP);
  /* 122922f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122922f9 push 0x122c0480 */
  push32((uint32_t)(0x122c0480u));
  /* 122922fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12292300 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292306u);
  /* 12292306 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229230b call 0x122930a0 */
  push32(0x12292310u); f_122930a0();
  /* 12292310 mov esi, esp */
  ESI = (ESP);
  /* 12292312 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292314 push 0x122c0498 */
  push32((uint32_t)(0x122c0498u));
  /* 12292319 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229231b call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292321u);
  /* 12292321 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292324 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292326 call 0x122930a0 */
  push32(0x1229232bu); f_122930a0();
  /* 1229232b mov esi, esp */
  ESI = (ESP);
  /* 1229232d push 0 */
  push32((uint32_t)(0x0u));
  /* 1229232f push 0x122c04b0 */
  push32((uint32_t)(0x122c04b0u));
  /* 12292334 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292336 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229233cu);
  /* 1229233c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229233f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292341 call 0x122930a0 */
  push32(0x12292346u); f_122930a0();
  /* 12292346 mov esi, esp */
  ESI = (ESP);
  /* 12292348 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229234a push 0x122c04c8 */
  push32((uint32_t)(0x122c04c8u));
  /* 1229234f push 0 */
  push32((uint32_t)(0x0u));
  /* 12292351 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292357u);
  /* 12292357 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229235a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229235c call 0x122930a0 */
  push32(0x12292361u); f_122930a0();
  /* 12292361 mov esi, esp */
  ESI = (ESP);
  /* 12292363 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292365 push 0x122c04e0 */
  push32((uint32_t)(0x122c04e0u));
  /* 1229236a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229236c call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292372u);
  /* 12292372 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292375 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292377 call 0x122930a0 */
  push32(0x1229237cu); f_122930a0();
  /* 1229237c mov esi, esp */
  ESI = (ESP);
  /* 1229237e push 0 */
  push32((uint32_t)(0x0u));
  /* 12292380 push 0x122c03e0 */
  push32((uint32_t)(0x122c03e0u));
  /* 12292385 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292387 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229238du);
  /* 1229238d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292390 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292392 call 0x122930a0 */
  push32(0x12292397u); f_122930a0();
  /* 12292397 mov esi, esp */
  ESI = (ESP);
  /* 12292399 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229239b push 0x122c03e8 */
  push32((uint32_t)(0x122c03e8u));
  /* 122923a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122923a2 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122923a8u);
  /* 122923a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122923ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122923ad call 0x122930a0 */
  push32(0x122923b2u); f_122930a0();
  /* 122923b2 mov esi, esp */
  ESI = (ESP);
  /* 122923b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122923b6 push 0x122c03f0 */
  push32((uint32_t)(0x122c03f0u));
  /* 122923bb push 0 */
  push32((uint32_t)(0x0u));
  /* 122923bd call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122923c3u);
  /* 122923c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122923c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122923c8 call 0x122930a0 */
  push32(0x122923cdu); f_122930a0();
  /* 122923cd mov esi, esp */
  ESI = (ESP);
  /* 122923cf push 0 */
  push32((uint32_t)(0x0u));
  /* 122923d1 push 0x122c03f8 */
  push32((uint32_t)(0x122c03f8u));
  /* 122923d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122923d8 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122923deu);
  /* 122923de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122923e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122923e3 call 0x122930a0 */
  push32(0x122923e8u); f_122930a0();
  /* 122923e8 mov esi, esp */
  ESI = (ESP);
  /* 122923ea push 0 */
  push32((uint32_t)(0x0u));
  /* 122923ec push 0x122c0400 */
  push32((uint32_t)(0x122c0400u));
  /* 122923f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122923f3 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122923f9u);
  /* 122923f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122923fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122923fe call 0x122930a0 */
  push32(0x12292403u); f_122930a0();
  /* 12292403 mov esi, esp */
  ESI = (ESP);
  /* 12292405 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292407 push 0x122c0410 */
  push32((uint32_t)(0x122c0410u));
  /* 1229240c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229240e call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292414u);
  /* 12292414 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292417 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292419 call 0x122930a0 */
  push32(0x1229241eu); f_122930a0();
  /* 1229241e mov esi, esp */
  ESI = (ESP);
  /* 12292420 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292422 push 0x122c0420 */
  push32((uint32_t)(0x122c0420u));
  /* 12292427 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292429 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229242fu);
  /* 1229242f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292432 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292434 call 0x122930a0 */
  push32(0x12292439u); f_122930a0();
  /* 12292439 mov esi, esp */
  ESI = (ESP);
  /* 1229243b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229243d push 0x122c0408 */
  push32((uint32_t)(0x122c0408u));
  /* 12292442 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292444 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229244au);
  /* 1229244a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229244d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229244f call 0x122930a0 */
  push32(0x12292454u); f_122930a0();
  /* 12292454 mov esi, esp */
  ESI = (ESP);
  /* 12292456 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292458 push 0x122c0418 */
  push32((uint32_t)(0x122c0418u));
  /* 1229245d push 0 */
  push32((uint32_t)(0x0u));
  /* 1229245f call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292465u);
  /* 12292465 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292468 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229246a call 0x122930a0 */
  push32(0x1229246fu); f_122930a0();
  /* 1229246f mov esi, esp */
  ESI = (ESP);
  /* 12292471 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292473 push 0x122c0430 */
  push32((uint32_t)(0x122c0430u));
  /* 12292478 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229247a call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292480u);
  /* 12292480 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292483 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292485 call 0x122930a0 */
  push32(0x1229248au); f_122930a0();
  /* 1229248a mov esi, esp */
  ESI = (ESP);
  /* 1229248c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229248e push 0x122c0448 */
  push32((uint32_t)(0x122c0448u));
  /* 12292493 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292495 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229249bu);
  /* 1229249b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229249e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122924a0 call 0x122930a0 */
  push32(0x122924a5u); f_122930a0();
  /* 122924a5 mov esi, esp */
  ESI = (ESP);
  /* 122924a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122924a9 push 0x122c0460 */
  push32((uint32_t)(0x122c0460u));
  /* 122924ae push 0 */
  push32((uint32_t)(0x0u));
  /* 122924b0 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122924b6u);
  /* 122924b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122924b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122924bb call 0x122930a0 */
  push32(0x122924c0u); f_122930a0();
  /* 122924c0 mov esi, esp */
  ESI = (ESP);
  /* 122924c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122924c4 push 0x122c0478 */
  push32((uint32_t)(0x122c0478u));
  /* 122924c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122924cb call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122924d1u);
  /* 122924d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122924d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122924d6 call 0x122930a0 */
  push32(0x122924dbu); f_122930a0();
  /* 122924db mov esi, esp */
  ESI = (ESP);
  /* 122924dd push 0 */
  push32((uint32_t)(0x0u));
  /* 122924df push 0x122c0490 */
  push32((uint32_t)(0x122c0490u));
  /* 122924e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122924e6 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122924ecu);
  /* 122924ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122924ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122924f1 call 0x122930a0 */
  push32(0x122924f6u); f_122930a0();
  /* 122924f6 mov esi, esp */
  ESI = (ESP);
  /* 122924f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122924fa push 0x122c04a8 */
  push32((uint32_t)(0x122c04a8u));
  /* 122924ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12292501 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292507u);
  /* 12292507 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229250a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229250c call 0x122930a0 */
  push32(0x12292511u); f_122930a0();
  /* 12292511 mov esi, esp */
  ESI = (ESP);
  /* 12292513 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292515 push 0x122c04c0 */
  push32((uint32_t)(0x122c04c0u));
  /* 1229251a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229251c call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292522u);
  /* 12292522 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292525 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292527 call 0x122930a0 */
  push32(0x1229252cu); f_122930a0();
  /* 1229252c mov esi, esp */
  ESI = (ESP);
  /* 1229252e push 1 */
  push32((uint32_t)(0x1u));
  /* 12292530 push 0x122c0440 */
  push32((uint32_t)(0x122c0440u));
  /* 12292535 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292537 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229253du);
  /* 1229253d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292540 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292542 call 0x122930a0 */
  push32(0x12292547u); f_122930a0();
  /* 12292547 mov esi, esp */
  ESI = (ESP);
  /* 12292549 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229254b push 0x122c0458 */
  push32((uint32_t)(0x122c0458u));
  /* 12292550 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292552 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292558u);
  /* 12292558 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229255b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229255d call 0x122930a0 */
  push32(0x12292562u); f_122930a0();
  /* 12292562 mov esi, esp */
  ESI = (ESP);
  /* 12292564 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292566 push 0x122c0470 */
  push32((uint32_t)(0x122c0470u));
  /* 1229256b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229256d call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292573u);
  /* 12292573 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292576 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292578 call 0x122930a0 */
  push32(0x1229257du); f_122930a0();
  /* 1229257d mov esi, esp */
  ESI = (ESP);
  /* 1229257f push 0 */
  push32((uint32_t)(0x0u));
  /* 12292581 push 0x122c0488 */
  push32((uint32_t)(0x122c0488u));
  /* 12292586 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292588 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229258eu);
  /* 1229258e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292591 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292593 call 0x122930a0 */
  push32(0x12292598u); f_122930a0();
  /* 12292598 mov esi, esp */
  ESI = (ESP);
  /* 1229259a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229259c push 0x122c04a0 */
  push32((uint32_t)(0x122c04a0u));
  /* 122925a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122925a3 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122925a9u);
  /* 122925a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122925ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122925ae call 0x122930a0 */
  push32(0x122925b3u); f_122930a0();
  /* 122925b3 mov esi, esp */
  ESI = (ESP);
  /* 122925b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122925b7 push 0x122c04b8 */
  push32((uint32_t)(0x122c04b8u));
  /* 122925bc push 0 */
  push32((uint32_t)(0x0u));
  /* 122925be call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122925c4u);
  /* 122925c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122925c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122925c9 call 0x122930a0 */
  push32(0x122925ceu); f_122930a0();
  /* 122925ce mov esi, esp */
  ESI = (ESP);
  /* 122925d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122925d2 push 0x122c04d8 */
  push32((uint32_t)(0x122c04d8u));
  /* 122925d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122925d9 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122925dfu);
  /* 122925df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122925e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122925e4 call 0x122930a0 */
  push32(0x122925e9u); f_122930a0();
  /* 122925e9 mov esi, esp */
  ESI = (ESP);
  /* 122925eb push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122925ed push 0 */
  push32((uint32_t)(0x0u));
  /* 122925ef push 0 */
  push32((uint32_t)(0x0u));
  /* 122925f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122925f3 push 0x122bb3c4 */
  push32((uint32_t)(0x122bb3c4u));
  /* 122925f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 122925fa call dword ptr [0x122c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f4))), 0x12292600u);
  /* 12292600 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292603 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292605 call 0x122930a0 */
  push32(0x1229260au); f_122930a0();
  /* 1229260a mov esi, esp */
  ESI = (ESP);
  /* 1229260c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1229260e push 0 */
  push32((uint32_t)(0x0u));
  /* 12292610 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292612 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292614 push 0x122bb3e4 */
  push32((uint32_t)(0x122bb3e4u));
  /* 12292619 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229261b call dword ptr [0x122c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f4))), 0x12292621u);
  /* 12292621 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292624 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292626 call 0x122930a0 */
  push32(0x1229262bu); f_122930a0();
  /* 1229262b mov esi, esp */
  ESI = (ESP);
  /* 1229262d push 0x122bb3bc */
  push32((uint32_t)(0x122bb3bcu));
  /* 12292632 push 1 */
  push32((uint32_t)(0x1u));
  /* 12292634 call dword ptr [0x122c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f8))), 0x1229263au);
  /* 1229263a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229263d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229263f call 0x122930a0 */
  push32(0x12292644u); f_122930a0();
  /* 12292644 mov esi, esp */
  ESI = (ESP);
  /* 12292646 push 0x122bb3d0 */
  push32((uint32_t)(0x122bb3d0u));
  /* 1229264b push 2 */
  push32((uint32_t)(0x2u));
  /* 1229264d call dword ptr [0x122c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f8))), 0x12292653u);
  /* 12292653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292656 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292658 call 0x122930a0 */
  push32(0x1229265du); f_122930a0();
  /* 1229265d jmp 0x12292a51 */
  goto L_12292a51;
L_12292662:;
  /* 12292662 mov esi, esp */
  ESI = (ESP);
  /* 12292664 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292666 push 0x122c0420 */
  push32((uint32_t)(0x122c0420u));
  /* 1229266b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229266d call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292673u);
  /* 12292673 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292676 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292678 call 0x122930a0 */
  push32(0x1229267du); f_122930a0();
  /* 1229267d mov esi, esp */
  ESI = (ESP);
  /* 1229267f push 0 */
  push32((uint32_t)(0x0u));
  /* 12292681 push 0x122c0408 */
  push32((uint32_t)(0x122c0408u));
  /* 12292686 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292688 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229268eu);
  /* 1229268e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292691 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292693 call 0x122930a0 */
  push32(0x12292698u); f_122930a0();
  /* 12292698 mov esi, esp */
  ESI = (ESP);
  /* 1229269a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229269c push 0x122c0418 */
  push32((uint32_t)(0x122c0418u));
  /* 122926a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122926a3 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122926a9u);
  /* 122926a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122926ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122926ae call 0x122930a0 */
  push32(0x122926b3u); f_122930a0();
  /* 122926b3 mov esi, esp */
  ESI = (ESP);
  /* 122926b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122926b7 push 0x122c0430 */
  push32((uint32_t)(0x122c0430u));
  /* 122926bc push 0 */
  push32((uint32_t)(0x0u));
  /* 122926be call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122926c4u);
  /* 122926c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122926c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122926c9 call 0x122930a0 */
  push32(0x122926ceu); f_122930a0();
  /* 122926ce mov esi, esp */
  ESI = (ESP);
  /* 122926d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122926d2 push 0x122c0448 */
  push32((uint32_t)(0x122c0448u));
  /* 122926d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122926d9 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122926dfu);
  /* 122926df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122926e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122926e4 call 0x122930a0 */
  push32(0x122926e9u); f_122930a0();
  /* 122926e9 mov esi, esp */
  ESI = (ESP);
  /* 122926eb push 0 */
  push32((uint32_t)(0x0u));
  /* 122926ed push 0x122c0460 */
  push32((uint32_t)(0x122c0460u));
  /* 122926f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122926f4 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122926fau);
  /* 122926fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122926fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122926ff call 0x122930a0 */
  push32(0x12292704u); f_122930a0();
  /* 12292704 mov esi, esp */
  ESI = (ESP);
  /* 12292706 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292708 push 0x122c0478 */
  push32((uint32_t)(0x122c0478u));
  /* 1229270d push 0 */
  push32((uint32_t)(0x0u));
  /* 1229270f call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292715u);
  /* 12292715 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292718 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229271a call 0x122930a0 */
  push32(0x1229271fu); f_122930a0();
  /* 1229271f mov esi, esp */
  ESI = (ESP);
  /* 12292721 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292723 push 0x122c0490 */
  push32((uint32_t)(0x122c0490u));
  /* 12292728 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229272a call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292730u);
  /* 12292730 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292733 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292735 call 0x122930a0 */
  push32(0x1229273au); f_122930a0();
  /* 1229273a mov esi, esp */
  ESI = (ESP);
  /* 1229273c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229273e push 0x122c04a8 */
  push32((uint32_t)(0x122c04a8u));
  /* 12292743 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292745 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229274bu);
  /* 1229274b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229274e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292750 call 0x122930a0 */
  push32(0x12292755u); f_122930a0();
  /* 12292755 mov esi, esp */
  ESI = (ESP);
  /* 12292757 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292759 push 0x122c04c0 */
  push32((uint32_t)(0x122c04c0u));
  /* 1229275e push 0 */
  push32((uint32_t)(0x0u));
  /* 12292760 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292766u);
  /* 12292766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292769 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229276b call 0x122930a0 */
  push32(0x12292770u); f_122930a0();
  /* 12292770 mov esi, esp */
  ESI = (ESP);
  /* 12292772 push 1 */
  push32((uint32_t)(0x1u));
  /* 12292774 push 0x122c0440 */
  push32((uint32_t)(0x122c0440u));
  /* 12292779 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229277b call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292781u);
  /* 12292781 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292784 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292786 call 0x122930a0 */
  push32(0x1229278bu); f_122930a0();
  /* 1229278b mov esi, esp */
  ESI = (ESP);
  /* 1229278d push 0 */
  push32((uint32_t)(0x0u));
  /* 1229278f push 0x122c0458 */
  push32((uint32_t)(0x122c0458u));
  /* 12292794 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292796 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229279cu);
  /* 1229279c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229279f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122927a1 call 0x122930a0 */
  push32(0x122927a6u); f_122930a0();
  /* 122927a6 mov esi, esp */
  ESI = (ESP);
  /* 122927a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122927aa push 0x122c0470 */
  push32((uint32_t)(0x122c0470u));
  /* 122927af push 0 */
  push32((uint32_t)(0x0u));
  /* 122927b1 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122927b7u);
  /* 122927b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122927ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122927bc call 0x122930a0 */
  push32(0x122927c1u); f_122930a0();
  /* 122927c1 mov esi, esp */
  ESI = (ESP);
  /* 122927c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122927c5 push 0x122c0488 */
  push32((uint32_t)(0x122c0488u));
  /* 122927ca push 0 */
  push32((uint32_t)(0x0u));
  /* 122927cc call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122927d2u);
  /* 122927d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122927d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122927d7 call 0x122930a0 */
  push32(0x122927dcu); f_122930a0();
  /* 122927dc mov esi, esp */
  ESI = (ESP);
  /* 122927de push 0 */
  push32((uint32_t)(0x0u));
  /* 122927e0 push 0x122c04a0 */
  push32((uint32_t)(0x122c04a0u));
  /* 122927e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122927e7 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122927edu);
  /* 122927ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122927f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122927f2 call 0x122930a0 */
  push32(0x122927f7u); f_122930a0();
  /* 122927f7 mov esi, esp */
  ESI = (ESP);
  /* 122927f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122927fb push 0x122c04b8 */
  push32((uint32_t)(0x122c04b8u));
  /* 12292800 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292802 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292808u);
  /* 12292808 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229280b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229280d call 0x122930a0 */
  push32(0x12292812u); f_122930a0();
  /* 12292812 mov esi, esp */
  ESI = (ESP);
  /* 12292814 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292816 push 0x122c04d8 */
  push32((uint32_t)(0x122c04d8u));
  /* 1229281b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229281d call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292823u);
  /* 12292823 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292826 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292828 call 0x122930a0 */
  push32(0x1229282du); f_122930a0();
  /* 1229282d mov esi, esp */
  ESI = (ESP);
  /* 1229282f push 0 */
  push32((uint32_t)(0x0u));
  /* 12292831 push 0x122c04d0 */
  push32((uint32_t)(0x122c04d0u));
  /* 12292836 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292838 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229283eu);
  /* 1229283e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292841 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292843 call 0x122930a0 */
  push32(0x12292848u); f_122930a0();
  /* 12292848 mov esi, esp */
  ESI = (ESP);
  /* 1229284a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229284c push 0x122c04e8 */
  push32((uint32_t)(0x122c04e8u));
  /* 12292851 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292853 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292859u);
  /* 12292859 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229285c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229285e call 0x122930a0 */
  push32(0x12292863u); f_122930a0();
  /* 12292863 mov esi, esp */
  ESI = (ESP);
  /* 12292865 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292867 push 0x122c04f0 */
  push32((uint32_t)(0x122c04f0u));
  /* 1229286c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229286e call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292874u);
  /* 12292874 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292877 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292879 call 0x122930a0 */
  push32(0x1229287eu); f_122930a0();
  /* 1229287e mov esi, esp */
  ESI = (ESP);
  /* 12292880 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292882 push 0x122c0500 */
  push32((uint32_t)(0x122c0500u));
  /* 12292887 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292889 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229288fu);
  /* 1229288f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292892 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292894 call 0x122930a0 */
  push32(0x12292899u); f_122930a0();
  /* 12292899 mov esi, esp */
  ESI = (ESP);
  /* 1229289b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229289d push 0x122c0510 */
  push32((uint32_t)(0x122c0510u));
  /* 122928a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122928a4 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122928aau);
  /* 122928aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122928ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122928af call 0x122930a0 */
  push32(0x122928b4u); f_122930a0();
  /* 122928b4 mov esi, esp */
  ESI = (ESP);
  /* 122928b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122928b8 push 0x122c0520 */
  push32((uint32_t)(0x122c0520u));
  /* 122928bd push 0 */
  push32((uint32_t)(0x0u));
  /* 122928bf call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122928c5u);
  /* 122928c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122928c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122928ca call 0x122930a0 */
  push32(0x122928cfu); f_122930a0();
  /* 122928cf mov esi, esp */
  ESI = (ESP);
  /* 122928d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122928d3 push 0x122c0530 */
  push32((uint32_t)(0x122c0530u));
  /* 122928d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122928da call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122928e0u);
  /* 122928e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122928e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122928e5 call 0x122930a0 */
  push32(0x122928eau); f_122930a0();
  /* 122928ea mov esi, esp */
  ESI = (ESP);
  /* 122928ec push 0 */
  push32((uint32_t)(0x0u));
  /* 122928ee push 0x122c0540 */
  push32((uint32_t)(0x122c0540u));
  /* 122928f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122928f5 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122928fbu);
  /* 122928fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122928fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292900 call 0x122930a0 */
  push32(0x12292905u); f_122930a0();
  /* 12292905 mov esi, esp */
  ESI = (ESP);
  /* 12292907 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292909 push 0x122c0550 */
  push32((uint32_t)(0x122c0550u));
  /* 1229290e push 0 */
  push32((uint32_t)(0x0u));
  /* 12292910 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292916u);
  /* 12292916 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292919 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229291b call 0x122930a0 */
  push32(0x12292920u); f_122930a0();
  /* 12292920 mov esi, esp */
  ESI = (ESP);
  /* 12292922 push 1 */
  push32((uint32_t)(0x1u));
  /* 12292924 push 0x122c04f8 */
  push32((uint32_t)(0x122c04f8u));
  /* 12292929 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229292b call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292931u);
  /* 12292931 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292934 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292936 call 0x122930a0 */
  push32(0x1229293bu); f_122930a0();
  /* 1229293b mov esi, esp */
  ESI = (ESP);
  /* 1229293d push 0 */
  push32((uint32_t)(0x0u));
  /* 1229293f push 0x122c0508 */
  push32((uint32_t)(0x122c0508u));
  /* 12292944 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292946 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229294cu);
  /* 1229294c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229294f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292951 call 0x122930a0 */
  push32(0x12292956u); f_122930a0();
  /* 12292956 mov esi, esp */
  ESI = (ESP);
  /* 12292958 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229295a push 0x122c0518 */
  push32((uint32_t)(0x122c0518u));
  /* 1229295f push 0 */
  push32((uint32_t)(0x0u));
  /* 12292961 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292967u);
  /* 12292967 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229296a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229296c call 0x122930a0 */
  push32(0x12292971u); f_122930a0();
  /* 12292971 mov esi, esp */
  ESI = (ESP);
  /* 12292973 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292975 push 0x122c0528 */
  push32((uint32_t)(0x122c0528u));
  /* 1229297a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229297c call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x12292982u);
  /* 12292982 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292985 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292987 call 0x122930a0 */
  push32(0x1229298cu); f_122930a0();
  /* 1229298c mov esi, esp */
  ESI = (ESP);
  /* 1229298e push 0 */
  push32((uint32_t)(0x0u));
  /* 12292990 push 0x122c0538 */
  push32((uint32_t)(0x122c0538u));
  /* 12292995 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292997 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x1229299du);
  /* 1229299d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122929a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122929a2 call 0x122930a0 */
  push32(0x122929a7u); f_122930a0();
  /* 122929a7 mov esi, esp */
  ESI = (ESP);
  /* 122929a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122929ab push 0x122c0548 */
  push32((uint32_t)(0x122c0548u));
  /* 122929b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122929b2 call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122929b8u);
  /* 122929b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122929bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122929bd call 0x122930a0 */
  push32(0x122929c2u); f_122930a0();
  /* 122929c2 mov esi, esp */
  ESI = (ESP);
  /* 122929c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122929c6 push 0x122c0558 */
  push32((uint32_t)(0x122c0558u));
  /* 122929cb push 0 */
  push32((uint32_t)(0x0u));
  /* 122929cd call dword ptr [0x122c33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33e4))), 0x122929d3u);
  /* 122929d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122929d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122929d8 call 0x122930a0 */
  push32(0x122929ddu); f_122930a0();
  /* 122929dd mov esi, esp */
  ESI = (ESP);
  /* 122929df push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122929e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122929e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122929e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122929e7 push 0x122bb3c4 */
  push32((uint32_t)(0x122bb3c4u));
  /* 122929ec push 1 */
  push32((uint32_t)(0x1u));
  /* 122929ee call dword ptr [0x122c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f4))), 0x122929f4u);
  /* 122929f4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122929f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122929f9 call 0x122930a0 */
  push32(0x122929feu); f_122930a0();
  /* 122929fe mov esi, esp */
  ESI = (ESP);
  /* 12292a00 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12292a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292a06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292a08 push 0x122bb3f0 */
  push32((uint32_t)(0x122bb3f0u));
  /* 12292a0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12292a0f call dword ptr [0x122c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f4))), 0x12292a15u);
  /* 12292a15 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292a18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292a1a call 0x122930a0 */
  push32(0x12292a1fu); f_122930a0();
  /* 12292a1f mov esi, esp */
  ESI = (ESP);
  /* 12292a21 push 0x122bb3bc */
  push32((uint32_t)(0x122bb3bcu));
  /* 12292a26 push 1 */
  push32((uint32_t)(0x1u));
  /* 12292a28 call dword ptr [0x122c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f8))), 0x12292a2eu);
  /* 12292a2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292a31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292a33 call 0x122930a0 */
  push32(0x12292a38u); f_122930a0();
  /* 12292a38 mov esi, esp */
  ESI = (ESP);
  /* 12292a3a push 0x122bb3d8 */
  push32((uint32_t)(0x122bb3d8u));
  /* 12292a3f push 2 */
  push32((uint32_t)(0x2u));
  /* 12292a41 call dword ptr [0x122c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f8))), 0x12292a47u);
  /* 12292a47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292a4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292a4c call 0x122930a0 */
  push32(0x12292a51u); f_122930a0();
L_12292a51:;
  /* 12292a51 mov esi, esp */
  ESI = (ESP);
  /* 12292a53 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12292a55 call dword ptr [0x122c33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33c8))), 0x12292a5bu);
  /* 12292a5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292a5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292a60 call 0x122930a0 */
  push32(0x12292a65u); f_122930a0();
  /* 12292a65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12292a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12292a6c je 0x12292ac7 */
  if (C.zf) goto L_12292ac7;
  /* 12292a6e mov esi, esp */
  ESI = (ESP);
  /* 12292a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292a72 call dword ptr [0x122c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f0))), 0x12292a78u);
  /* 12292a78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292a7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292a7d call 0x122930a0 */
  push32(0x12292a82u); f_122930a0();
  /* 12292a82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12292a87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12292a89 je 0x12292ac7 */
  if (C.zf) goto L_12292ac7;
  /* 12292a8b mov esi, esp */
  ESI = (ESP);
  /* 12292a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12292a8f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12292a91 call dword ptr [0x122c33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d0))), 0x12292a97u);
  /* 12292a97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292a9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292a9c call 0x122930a0 */
  push32(0x12292aa1u); f_122930a0();
  /* 12292aa1 mov esi, esp */
  ESI = (ESP);
  /* 12292aa3 push 0x122bb3b0 */
  push32((uint32_t)(0x122bb3b0u));
  /* 12292aa8 call dword ptr [0x122c33dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33dc))), 0x12292aaeu);
  /* 12292aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292ab3 call 0x122930a0 */
  push32(0x12292ab8u); f_122930a0();
  /* 12292ab8 mov esi, esp */
  ESI = (ESP);
  /* 12292aba call dword ptr [0x122c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3400))), 0x12292ac0u);
  /* 12292ac0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292ac2 call 0x122930a0 */
  push32(0x12292ac7u); f_122930a0();
L_12292ac7:;
  /* 12292ac7 mov esi, esp */
  ESI = (ESP);
  /* 12292ac9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12292acb call dword ptr [0x122c33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33c8))), 0x12292ad1u);
  /* 12292ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292ad4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292ad6 call 0x122930a0 */
  push32(0x12292adbu); f_122930a0();
  /* 12292adb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12292ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12292ae2 je 0x12292b5a */
  if (C.zf) goto L_12292b5a;
  /* 12292ae4 mov esi, esp */
  ESI = (ESP);
  /* 12292ae6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12292ae8 call dword ptr [0x122c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f0))), 0x12292aeeu);
  /* 12292aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292af1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292af3 call 0x122930a0 */
  push32(0x12292af8u); f_122930a0();
  /* 12292af8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12292afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12292aff je 0x12292b5a */
  if (C.zf) goto L_12292b5a;
  /* 12292b01 mov esi, esp */
  ESI = (ESP);
  /* 12292b03 push 2 */
  push32((uint32_t)(0x2u));
  /* 12292b05 call dword ptr [0x122c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33f0))), 0x12292b0bu);
  /* 12292b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292b0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292b10 call 0x122930a0 */
  push32(0x12292b15u); f_122930a0();
  /* 12292b15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12292b1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12292b1c je 0x12292b5a */
  if (C.zf) goto L_12292b5a;
  /* 12292b1e mov esi, esp */
  ESI = (ESP);
  /* 12292b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12292b22 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12292b24 call dword ptr [0x122c33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33d0))), 0x12292b2au);
  /* 12292b2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292b2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292b2f call 0x122930a0 */
  push32(0x12292b34u); f_122930a0();
  /* 12292b34 mov esi, esp */
  ESI = (ESP);
  /* 12292b36 push 0x122bb3a4 */
  push32((uint32_t)(0x122bb3a4u));
  /* 12292b3b call dword ptr [0x122c33dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c33dc))), 0x12292b41u);
  /* 12292b41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292b44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292b46 call 0x122930a0 */
  push32(0x12292b4bu); f_122930a0();
  /* 12292b4b mov esi, esp */
  ESI = (ESP);
  /* 12292b4d call dword ptr [0x122c3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3404))), 0x12292b53u);
  /* 12292b53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292b55 call 0x122930a0 */
  push32(0x12292b5au); f_122930a0();
L_12292b5a:;
  /* 12292b5a pop edi */
  EDI = (pop32());
  /* 12292b5b pop esi */
  ESI = (pop32());
  /* 12292b5c pop ebx */
  EBX = (pop32());
  /* 12292b5d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12292b60 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12292b62 call 0x122930a0 */
  push32(0x12292b67u); f_122930a0();
  /* 12292b67 mov esp, ebp */
  ESP = (EBP);
  /* 12292b69 pop ebp */
  EBP = (pop32());
  /* 12292b6a ret  */
  ESPCHK(0x12291860u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x122930a0 (56 bytes, 28 insns) */
void f_122930a0(void) {
  FTRACE(0x122930a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122930a0 jne 0x122930a3 */
  if (!C.zf) goto L_122930a3;
  /* 122930a2 ret  */
  ESPCHK(0x122930a0u, _esp0);
  ESP += 4; return;
L_122930a3:;
  /* 122930a3 push ebp */
  push32((uint32_t)(EBP));
  /* 122930a4 mov ebp, esp */
  EBP = (ESP);
  /* 122930a6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122930a9 push eax */
  push32((uint32_t)(EAX));
  /* 122930aa push edx */
  push32((uint32_t)(EDX));
  /* 122930ab push ebx */
  push32((uint32_t)(EBX));
  /* 122930ac push esi */
  push32((uint32_t)(ESI));
  /* 122930ad push edi */
  push32((uint32_t)(EDI));
  /* 122930ae push 0x122bb440 */
  push32((uint32_t)(0x122bb440u));
  /* 122930b3 push 0x122bb43c */
  push32((uint32_t)(0x122bb43cu));
  /* 122930b8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 122930ba push 0x122bb42c */
  push32((uint32_t)(0x122bb42cu));
  /* 122930bf push 1 */
  push32((uint32_t)(0x1u));
  /* 122930c1 call 0x12293470 */
  push32(0x122930c6u); f_12293470();
  /* 122930c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122930c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122930cc jne 0x122930cf */
  if (!C.zf) goto L_122930cf;
  /* 122930ce int3  */
  x86_unimpl("int3 @ 0x122930ce");
L_122930cf:;
  /* 122930cf pop edi */
  EDI = (pop32());
  /* 122930d0 pop esi */
  ESI = (pop32());
  /* 122930d1 pop ebx */
  EBX = (pop32());
  /* 122930d2 pop edx */
  EDX = (pop32());
  /* 122930d3 pop eax */
  EAX = (pop32());
  /* 122930d4 mov esp, ebp */
  ESP = (EBP);
  /* 122930d6 pop ebp */
  EBP = (pop32());
  /* 122930d7 ret  */
  ESPCHK(0x122930a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030e0 @ 0x122930e0 (313 bytes, 78 insns) */
void f_122930e0(void) {
  FTRACE(0x122930e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122930e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122930e1 mov ebp, esp */
  EBP = (ESP);
  /* 122930e3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122930e7 jne 0x122931a7 */
  if (!C.zf) goto L_122931a7;
  /* 122930ed call dword ptr [0x122c3294] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3294))), 0x122930f3u);
  /* 122930f3 mov dword ptr [0x122c0600], eax */
  w32((uint32_t)(0x122c0600), (EAX));
  /* 122930f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 122930fa call 0x12296ba0 */
  push32(0x122930ffu); f_12296ba0();
  /* 122930ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293102 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12293104 jne 0x1229310d */
  if (!C.zf) goto L_1229310d;
  /* 12293106 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12293108 jmp 0x12293215 */
  goto L_12293215;
L_1229310d:;
  /* 1229310d mov eax, dword ptr [0x122c0600] */
  EAX = (r32((uint32_t)(0x122c0600)));
  /* 12293112 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12293115 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229311a mov dword ptr [0x122c060c], eax */
  w32((uint32_t)(0x122c060c), (EAX));
  /* 1229311f mov ecx, dword ptr [0x122c0600] */
  ECX = (r32((uint32_t)(0x122c0600)));
  /* 12293125 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1229312b mov dword ptr [0x122c0608], ecx */
  w32((uint32_t)(0x122c0608), (ECX));
  /* 12293131 mov edx, dword ptr [0x122c0608] */
  EDX = (r32((uint32_t)(0x122c0608)));
  /* 12293137 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1229313a add edx, dword ptr [0x122c060c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x122c060c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12293140 mov dword ptr [0x122c0604], edx */
  w32((uint32_t)(0x122c0604), (EDX));
  /* 12293146 mov eax, dword ptr [0x122c0600] */
  EAX = (r32((uint32_t)(0x122c0600)));
  /* 1229314b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1229314e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12293153 mov dword ptr [0x122c0600], eax */
  w32((uint32_t)(0x122c0600), (EAX));
  /* 12293158 call 0x12293d10 */
  push32(0x1229315du); f_12293d10();
  /* 1229315d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229315f jne 0x1229316d */
  if (!C.zf) goto L_1229316d;
  /* 12293161 call 0x12296bf0 */
  push32(0x12293166u); f_12296bf0();
  /* 12293166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12293168 jmp 0x12293215 */
  goto L_12293215;
L_1229316d:;
  /* 1229316d call dword ptr [0x122c3290] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3290))), 0x12293173u);
  /* 12293173 mov dword ptr [0x122c214c], eax */
  w32((uint32_t)(0x122c214c), (EAX));
  /* 12293178 call 0x12296980 */
  push32(0x1229317du); f_12296980();
  /* 1229317d mov dword ptr [0x122c05e8], eax */
  w32((uint32_t)(0x122c05e8), (EAX));
  /* 12293182 call 0x12293fc0 */
  push32(0x12293187u); f_12293fc0();
  /* 12293187 call 0x12296470 */
  push32(0x1229318cu); f_12296470();
  /* 1229318c call 0x12296320 */
  push32(0x12293191u); f_12296320();
  /* 12293191 call 0x12293b10 */
  push32(0x12293196u); f_12293b10();
  /* 12293196 mov ecx, dword ptr [0x122c05e4] */
  ECX = (r32((uint32_t)(0x122c05e4)));
  /* 1229319c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229319f mov dword ptr [0x122c05e4], ecx */
  w32((uint32_t)(0x122c05e4), (ECX));
  /* 122931a5 jmp 0x12293210 */
  goto L_12293210;
L_122931a7:;
  /* 122931a7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122931ab jne 0x12293200 */
  if (!C.zf) goto L_12293200;
  /* 122931ad cmp dword ptr [0x122c05e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c05e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122931b4 jle 0x122931fa */
  if ((C.zf||C.sf!=C.of)) goto L_122931fa;
  /* 122931b6 mov edx, dword ptr [0x122c05e4] */
  EDX = (r32((uint32_t)(0x122c05e4)));
  /* 122931bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122931bf mov dword ptr [0x122c05e4], edx */
  w32((uint32_t)(0x122c05e4), (EDX));
  /* 122931c5 cmp dword ptr [0x122c0638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122931cc jne 0x122931d3 */
  if (!C.zf) goto L_122931d3;
  /* 122931ce call 0x12293b90 */
  push32(0x122931d3u); f_12293b90();
L_122931d3:;
  /* 122931d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122931d5 call 0x122958c0 */
  push32(0x122931dau); f_122958c0();
  /* 122931da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122931dd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 122931e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122931e2 je 0x122931e9 */
  if (C.zf) goto L_122931e9;
  /* 122931e4 call 0x122961d0 */
  push32(0x122931e9u); f_122961d0();
L_122931e9:;
  /* 122931e9 call 0x122942f0 */
  push32(0x122931eeu); f_122942f0();
  /* 122931ee call 0x12293da0 */
  push32(0x122931f3u); f_12293da0();
  /* 122931f3 call 0x12296bf0 */
  push32(0x122931f8u); f_12296bf0();
  /* 122931f8 jmp 0x122931fe */
  goto L_122931fe;
L_122931fa:;
  /* 122931fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122931fc jmp 0x12293215 */
  goto L_12293215;
L_122931fe:;
  /* 122931fe jmp 0x12293210 */
  goto L_12293210;
L_12293200:;
  /* 12293200 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293204 jne 0x12293210 */
  if (!C.zf) goto L_12293210;
  /* 12293206 push 0 */
  push32((uint32_t)(0x0u));
  /* 12293208 call 0x12293e90 */
  push32(0x1229320du); f_12293e90();
  /* 1229320d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293210:;
  /* 12293210 mov eax, 1 */
  EAX = (0x1u);
L_12293215:;
  /* 12293215 pop ebp */
  EBP = (pop32());
  /* 12293216 ret 0xc */
  ESPCHK(0x122930e0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12293220 (243 bytes, 86 insns) */
void f_12293220(void) {
  FTRACE(0x12293220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293220 push ebp */
  push32((uint32_t)(EBP));
  /* 12293221 mov ebp, esp */
  EBP = (ESP);
  /* 12293223 push ecx */
  push32((uint32_t)(ECX));
  /* 12293224 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1229322b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229322f jne 0x12293241 */
  if (!C.zf) goto L_12293241;
  /* 12293231 cmp dword ptr [0x122c05e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c05e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293238 jne 0x12293241 */
  if (!C.zf) goto L_12293241;
  /* 1229323a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229323c jmp 0x1229330d */
  goto L_1229330d;
L_12293241:;
  /* 12293241 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293245 je 0x1229324d */
  if (C.zf) goto L_1229324d;
  /* 12293247 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229324b jne 0x1229328f */
  if (!C.zf) goto L_1229328f;
L_1229324d:;
  /* 1229324d cmp dword ptr [0x122c215c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c215c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293254 je 0x1229326b */
  if (C.zf) goto L_1229326b;
  /* 12293256 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12293259 push eax */
  push32((uint32_t)(EAX));
  /* 1229325a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229325d push ecx */
  push32((uint32_t)(ECX));
  /* 1229325e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293261 push edx */
  push32((uint32_t)(EDX));
  /* 12293262 call dword ptr [0x122c215c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c215c))), 0x12293268u);
  /* 12293268 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1229326b:;
  /* 1229326b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229326f je 0x12293285 */
  if (C.zf) goto L_12293285;
  /* 12293271 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12293274 push eax */
  push32((uint32_t)(EAX));
  /* 12293275 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12293278 push ecx */
  push32((uint32_t)(ECX));
  /* 12293279 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229327c push edx */
  push32((uint32_t)(EDX));
  /* 1229327d call 0x122930e0 */
  push32(0x12293282u); f_122930e0();
  /* 12293282 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12293285:;
  /* 12293285 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293289 jne 0x1229328f */
  if (!C.zf) goto L_1229328f;
  /* 1229328b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229328d jmp 0x1229330d */
  goto L_1229330d;
L_1229328f:;
  /* 1229328f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12293292 push eax */
  push32((uint32_t)(EAX));
  /* 12293293 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12293296 push ecx */
  push32((uint32_t)(ECX));
  /* 12293297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229329a push edx */
  push32((uint32_t)(EDX));
  /* 1229329b call 0x1229100a */
  push32(0x122932a0u); f_1229100a();
  /* 122932a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122932a3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122932a7 jne 0x122932be */
  if (!C.zf) goto L_122932be;
  /* 122932a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122932ad jne 0x122932be */
  if (!C.zf) goto L_122932be;
  /* 122932af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122932b2 push eax */
  push32((uint32_t)(EAX));
  /* 122932b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122932b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122932b8 push ecx */
  push32((uint32_t)(ECX));
  /* 122932b9 call 0x122930e0 */
  push32(0x122932beu); f_122930e0();
L_122932be:;
  /* 122932be cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122932c2 je 0x122932ca */
  if (C.zf) goto L_122932ca;
  /* 122932c4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122932c8 jne 0x1229330a */
  if (!C.zf) goto L_1229330a;
L_122932ca:;
  /* 122932ca mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122932cd push edx */
  push32((uint32_t)(EDX));
  /* 122932ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122932d1 push eax */
  push32((uint32_t)(EAX));
  /* 122932d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122932d5 push ecx */
  push32((uint32_t)(ECX));
  /* 122932d6 call 0x122930e0 */
  push32(0x122932dbu); f_122930e0();
  /* 122932db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122932dd jne 0x122932e6 */
  if (!C.zf) goto L_122932e6;
  /* 122932df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122932e6:;
  /* 122932e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122932ea je 0x1229330a */
  if (C.zf) goto L_1229330a;
  /* 122932ec cmp dword ptr [0x122c215c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c215c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122932f3 je 0x1229330a */
  if (C.zf) goto L_1229330a;
  /* 122932f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122932f8 push edx */
  push32((uint32_t)(EDX));
  /* 122932f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122932fc push eax */
  push32((uint32_t)(EAX));
  /* 122932fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293300 push ecx */
  push32((uint32_t)(ECX));
  /* 12293301 call dword ptr [0x122c215c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c215c))), 0x12293307u);
  /* 12293307 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1229330a:;
  /* 1229330a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1229330d:;
  /* 1229330d mov esp, ebp */
  ESP = (EBP);
  /* 1229330f pop ebp */
  EBP = (pop32());
  /* 12293310 ret 0xc */
  ESPCHK(0x12293220u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12293320 (58 bytes, 18 insns) */
void f_12293320(void) {
  FTRACE(0x12293320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293320 push ebp */
  push32((uint32_t)(EBP));
  /* 12293321 mov ebp, esp */
  EBP = (ESP);
  /* 12293323 cmp dword ptr [0x122c05f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c05f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229332a je 0x1229333e */
  if (C.zf) goto L_1229333e;
  /* 1229332c cmp dword ptr [0x122c05f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c05f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293333 jne 0x12293343 */
  if (!C.zf) goto L_12293343;
  /* 12293335 cmp dword ptr [0x122c05f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c05f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229333c jne 0x12293343 */
  if (!C.zf) goto L_12293343;
L_1229333e:;
  /* 1229333e call 0x12296c90 */
  push32(0x12293343u); f_12296c90();
L_12293343:;
  /* 12293343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293346 push eax */
  push32((uint32_t)(EAX));
  /* 12293347 call 0x12296ce0 */
  push32(0x1229334cu); f_12296ce0();
  /* 1229334c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229334f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12293354 call dword ptr [0x122bea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x122bea30))), 0x1229335au);
  /* 1229335a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229335d pop ebp */
  EBP = (pop32());
  /* 1229335e ret  */
  ESPCHK(0x12293320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x12293360 (11 bytes, 5 insns) */
void f_12293360(void) {
  FTRACE(0x12293360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293360 push ebp */
  push32((uint32_t)(EBP));
  /* 12293361 mov ebp, esp */
  EBP = (ESP);
  /* 12293363 call dword ptr [0x122c3298] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3298))), 0x12293369u);
  /* 12293369 pop ebp */
  EBP = (pop32());
  /* 1229336a ret  */
  ESPCHK(0x12293360u, _esp0);
  ESP += 4; return;
}

/* FUN_10003370 @ 0x12293370 (87 bytes, 30 insns) */
void f_12293370(void) {
  FTRACE(0x12293370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293370 push ebp */
  push32((uint32_t)(EBP));
  /* 12293371 mov ebp, esp */
  EBP = (ESP);
  /* 12293373 push ecx */
  push32((uint32_t)(ECX));
  /* 12293374 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293378 jl 0x12293380 */
  if ((C.sf!=C.of)) goto L_12293380;
  /* 1229337a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229337e jl 0x12293385 */
  if ((C.sf!=C.of)) goto L_12293385;
L_12293380:;
  /* 12293380 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12293383 jmp 0x122933c3 */
  goto L_122933c3;
L_12293385:;
  /* 12293385 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293389 jne 0x12293397 */
  if (!C.zf) goto L_12293397;
  /* 1229338b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229338e mov eax, dword ptr [eax*4 + 0x122bea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x122bea38)));
  /* 12293395 jmp 0x122933c3 */
  goto L_122933c3;
L_12293397:;
  /* 12293397 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229339a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1229339d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229339f je 0x122933a6 */
  if (C.zf) goto L_122933a6;
  /* 122933a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122933a4 jmp 0x122933c3 */
  goto L_122933c3;
L_122933a6:;
  /* 122933a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122933a9 mov eax, dword ptr [edx*4 + 0x122bea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122bea38)));
  /* 122933b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122933b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122933b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122933b9 mov dword ptr [ecx*4 + 0x122bea38], edx */
  w32((uint32_t)(ECX*4 + 0x122bea38), (EDX));
  /* 122933c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122933c3:;
  /* 122933c3 mov esp, ebp */
  ESP = (EBP);
  /* 122933c5 pop ebp */
  EBP = (pop32());
  /* 122933c6 ret  */
  ESPCHK(0x12293370u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x122933d0 (126 bytes, 38 insns) */
void f_122933d0(void) {
  FTRACE(0x122933d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122933d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122933d1 mov ebp, esp */
  EBP = (ESP);
  /* 122933d3 push ecx */
  push32((uint32_t)(ECX));
  /* 122933d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122933d8 jl 0x122933e0 */
  if ((C.sf!=C.of)) goto L_122933e0;
  /* 122933da cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122933de jl 0x122933e7 */
  if ((C.sf!=C.of)) goto L_122933e7;
L_122933e0:;
  /* 122933e0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 122933e5 jmp 0x1229344a */
  goto L_1229344a;
L_122933e7:;
  /* 122933e7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122933eb jne 0x122933f9 */
  if (!C.zf) goto L_122933f9;
  /* 122933ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122933f0 mov eax, dword ptr [eax*4 + 0x122bea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x122bea44)));
  /* 122933f7 jmp 0x1229344a */
  goto L_1229344a;
L_122933f9:;
  /* 122933f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122933fc mov edx, dword ptr [ecx*4 + 0x122bea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122bea44)));
  /* 12293403 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12293406 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229340a jne 0x12293420 */
  if (!C.zf) goto L_12293420;
  /* 1229340c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1229340e call dword ptr [0x122c329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c329c))), 0x12293414u);
  /* 12293414 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293417 mov dword ptr [ecx*4 + 0x122bea44], eax */
  w32((uint32_t)(ECX*4 + 0x122bea44), (EAX));
  /* 1229341e jmp 0x12293447 */
  goto L_12293447;
L_12293420:;
  /* 12293420 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293424 jne 0x1229343a */
  if (!C.zf) goto L_1229343a;
  /* 12293426 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12293428 call dword ptr [0x122c329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c329c))), 0x1229342eu);
  /* 1229342e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293431 mov dword ptr [edx*4 + 0x122bea44], eax */
  w32((uint32_t)(EDX*4 + 0x122bea44), (EAX));
  /* 12293438 jmp 0x12293447 */
  goto L_12293447;
L_1229343a:;
  /* 1229343a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229343d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12293440 mov dword ptr [eax*4 + 0x122bea44], ecx */
  w32((uint32_t)(EAX*4 + 0x122bea44), (ECX));
L_12293447:;
  /* 12293447 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1229344a:;
  /* 1229344a mov esp, ebp */
  ESP = (EBP);
  /* 1229344c pop ebp */
  EBP = (pop32());
  /* 1229344d ret  */
  ESPCHK(0x122933d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003450 @ 0x12293450 (28 bytes, 11 insns) */
void f_12293450(void) {
  FTRACE(0x12293450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293450 push ebp */
  push32((uint32_t)(EBP));
  /* 12293451 mov ebp, esp */
  EBP = (ESP);
  /* 12293453 push ecx */
  push32((uint32_t)(ECX));
  /* 12293454 mov eax, dword ptr [0x122c2140] */
  EAX = (r32((uint32_t)(0x122c2140)));
  /* 12293459 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229345c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229345f mov dword ptr [0x122c2140], ecx */
  w32((uint32_t)(0x122c2140), (ECX));
  /* 12293465 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293468 mov esp, ebp */
  ESP = (EBP);
  /* 1229346a pop ebp */
  EBP = (pop32());
  /* 1229346b ret  */
  ESPCHK(0x12293450u, _esp0);
  ESP += 4; return;
}

/* FUN_10003470 @ 0x12293470 (912 bytes, 248 insns) */
void f_12293470(void) {
  FTRACE(0x12293470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293470 push ebp */
  push32((uint32_t)(EBP));
  /* 12293471 mov ebp, esp */
  EBP = (ESP);
  /* 12293473 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12293478 call 0x12297550 */
  push32(0x1229347du); f_12297550();
  /* 1229347d push edi */
  push32((uint32_t)(EDI));
  /* 1229347e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12293485 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1229348a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229348c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12293492 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12293494 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12293496 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12293497 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1229349e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 122934a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122934a5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 122934ab rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 122934ad stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 122934af stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 122934b0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 122934b7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 122934bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122934be lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 122934c4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 122934c6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 122934c8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 122934c9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 122934cc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 122934d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122934d6 jl 0x122934de */
  if ((C.sf!=C.of)) goto L_122934de;
  /* 122934d8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122934dc jl 0x122934e6 */
  if ((C.sf!=C.of)) goto L_122934e6;
L_122934de:;
  /* 122934de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122934e1 jmp 0x122937fb */
  goto L_122937fb;
L_122934e6:;
  /* 122934e6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122934ea jne 0x12293590 */
  if (!C.zf) goto L_12293590;
  /* 122934f0 push 0x122bea34 */
  push32((uint32_t)(0x122bea34u));
  /* 122934f5 call dword ptr [0x122c32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32b4))), 0x122934fbu);
  /* 122934fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122934fd jle 0x12293590 */
  if ((C.zf||C.sf!=C.of)) goto L_12293590;
  /* 12293503 cmp dword ptr [0x122c05f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c05f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229350a jne 0x1229354e */
  if (!C.zf) goto L_1229354e;
  /* 1229350c push 0x122bb5e8 */
  push32((uint32_t)(0x122bb5e8u));
  /* 12293511 call dword ptr [0x122c32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32b0))), 0x12293517u);
  /* 12293517 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1229351d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293524 je 0x12293546 */
  if (C.zf) goto L_12293546;
  /* 12293526 push 0x122bb5dc */
  push32((uint32_t)(0x122bb5dcu));
  /* 1229352b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12293531 push ecx */
  push32((uint32_t)(ECX));
  /* 12293532 call dword ptr [0x122c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32ac))), 0x12293538u);
  /* 12293538 mov dword ptr [0x122c05f8], eax */
  w32((uint32_t)(0x122c05f8), (EAX));
  /* 1229353d cmp dword ptr [0x122c05f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c05f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293544 jne 0x1229354e */
  if (!C.zf) goto L_1229354e;
L_12293546:;
  /* 12293546 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12293549 jmp 0x122937fb */
  goto L_122937fb;
L_1229354e:;
  /* 1229354e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12293551 push edx */
  push32((uint32_t)(EDX));
  /* 12293552 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12293555 push eax */
  push32((uint32_t)(EAX));
  /* 12293556 push 0x122bb5a8 */
  push32((uint32_t)(0x122bb5a8u));
  /* 1229355b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12293561 push ecx */
  push32((uint32_t)(ECX));
  /* 12293562 call dword ptr [0x122c05f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c05f8))), 0x12293568u);
  /* 12293568 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229356b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12293571 push edx */
  push32((uint32_t)(EDX));
  /* 12293572 call dword ptr [0x122c32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a8))), 0x12293578u);
  /* 12293578 push 0x122bea34 */
  push32((uint32_t)(0x122bea34u));
  /* 1229357d call dword ptr [0x122c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a4))), 0x12293583u);
  /* 12293583 call 0x12293360 */
  push32(0x12293588u); f_12293360();
  /* 12293588 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229358b jmp 0x122937fb */
  goto L_122937fb;
L_12293590:;
  /* 12293590 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293594 je 0x122935cd */
  if (C.zf) goto L_122935cd;
  /* 12293596 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1229359c push eax */
  push32((uint32_t)(EAX));
  /* 1229359d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122935a0 push ecx */
  push32((uint32_t)(ECX));
  /* 122935a1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 122935a6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 122935ac push edx */
  push32((uint32_t)(EDX));
  /* 122935ad call 0x12297450 */
  push32(0x122935b2u); f_12297450();
  /* 122935b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122935b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122935b7 jge 0x122935cd */
  if ((C.sf==C.of)) goto L_122935cd;
  /* 122935b9 push 0x122bb57c */
  push32((uint32_t)(0x122bb57cu));
  /* 122935be lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 122935c4 push eax */
  push32((uint32_t)(EAX));
  /* 122935c5 call 0x12297360 */
  push32(0x122935cau); f_12297360();
  /* 122935ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122935cd:;
  /* 122935cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122935d1 jne 0x12293605 */
  if (!C.zf) goto L_12293605;
  /* 122935d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122935d7 je 0x122935e5 */
  if (C.zf) goto L_122935e5;
  /* 122935d9 mov dword ptr [ebp - 0x3028], 0x122bb568 */
  w32((uint32_t)(EBP + -0x3028), (0x122bb568u));
  /* 122935e3 jmp 0x122935ef */
  goto L_122935ef;
L_122935e5:;
  /* 122935e5 mov dword ptr [ebp - 0x3028], 0x122bb554 */
  w32((uint32_t)(EBP + -0x3028), (0x122bb554u));
L_122935ef:;
  /* 122935ef mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 122935f5 push ecx */
  push32((uint32_t)(ECX));
  /* 122935f6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 122935fc push edx */
  push32((uint32_t)(EDX));
  /* 122935fd call 0x12297360 */
  push32(0x12293602u); f_12297360();
  /* 12293602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293605:;
  /* 12293605 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1229360b push eax */
  push32((uint32_t)(EAX));
  /* 1229360c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12293612 push ecx */
  push32((uint32_t)(ECX));
  /* 12293613 call 0x12297370 */
  push32(0x12293618u); f_12297370();
  /* 12293618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229361b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229361f jne 0x1229365a */
  if (!C.zf) goto L_1229365a;
  /* 12293621 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293624 mov eax, dword ptr [edx*4 + 0x122bea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122bea38)));
  /* 1229362b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1229362e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12293630 je 0x12293646 */
  if (C.zf) goto L_12293646;
  /* 12293632 push 0x122bb550 */
  push32((uint32_t)(0x122bb550u));
  /* 12293637 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1229363d push ecx */
  push32((uint32_t)(ECX));
  /* 1229363e call 0x12297370 */
  push32(0x12293643u); f_12297370();
  /* 12293643 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293646:;
  /* 12293646 push 0x122bb54c */
  push32((uint32_t)(0x122bb54cu));
  /* 1229364b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12293651 push edx */
  push32((uint32_t)(EDX));
  /* 12293652 call 0x12297370 */
  push32(0x12293657u); f_12297370();
  /* 12293657 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229365a:;
  /* 1229365a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229365e je 0x122936a2 */
  if (C.zf) goto L_122936a2;
  /* 12293660 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12293666 push eax */
  push32((uint32_t)(EAX));
  /* 12293667 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229366a push ecx */
  push32((uint32_t)(ECX));
  /* 1229366b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229366e push edx */
  push32((uint32_t)(EDX));
  /* 1229366f push 0x122bb540 */
  push32((uint32_t)(0x122bb540u));
  /* 12293674 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12293679 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1229367f push eax */
  push32((uint32_t)(EAX));
  /* 12293680 call 0x12297260 */
  push32(0x12293685u); f_12297260();
  /* 12293685 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229368a jge 0x122936a0 */
  if ((C.sf==C.of)) goto L_122936a0;
  /* 1229368c push 0x122bb57c */
  push32((uint32_t)(0x122bb57cu));
  /* 12293691 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12293697 push ecx */
  push32((uint32_t)(ECX));
  /* 12293698 call 0x12297360 */
  push32(0x1229369du); f_12297360();
  /* 1229369d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122936a0:;
  /* 122936a0 jmp 0x122936b8 */
  goto L_122936b8;
L_122936a2:;
  /* 122936a2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 122936a8 push edx */
  push32((uint32_t)(EDX));
  /* 122936a9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 122936af push eax */
  push32((uint32_t)(EAX));
  /* 122936b0 call 0x12297360 */
  push32(0x122936b5u); f_12297360();
  /* 122936b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122936b8:;
  /* 122936b8 cmp dword ptr [0x122c2140], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c2140))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122936bf je 0x122936fc */
  if (C.zf) goto L_122936fc;
  /* 122936c1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 122936c7 push ecx */
  push32((uint32_t)(ECX));
  /* 122936c8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 122936ce push edx */
  push32((uint32_t)(EDX));
  /* 122936cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122936d2 push eax */
  push32((uint32_t)(EAX));
  /* 122936d3 call dword ptr [0x122c2140] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c2140))), 0x122936d9u);
  /* 122936d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122936dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122936de je 0x122936fc */
  if (C.zf) goto L_122936fc;
  /* 122936e0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122936e4 jne 0x122936f1 */
  if (!C.zf) goto L_122936f1;
  /* 122936e6 push 0x122bea34 */
  push32((uint32_t)(0x122bea34u));
  /* 122936eb call dword ptr [0x122c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a4))), 0x122936f1u);
L_122936f1:;
  /* 122936f1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 122936f7 jmp 0x122937fb */
  goto L_122937fb;
L_122936fc:;
  /* 122936fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122936ff mov edx, dword ptr [ecx*4 + 0x122bea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122bea38)));
  /* 12293706 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12293709 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229370b je 0x1229374b */
  if (C.zf) goto L_1229374b;
  /* 1229370d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293710 cmp dword ptr [eax*4 + 0x122bea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x122bea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293718 je 0x1229374b */
  if (C.zf) goto L_1229374b;
  /* 1229371a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229371c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12293722 push ecx */
  push32((uint32_t)(ECX));
  /* 12293723 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12293729 push edx */
  push32((uint32_t)(EDX));
  /* 1229372a call 0x122971e0 */
  push32(0x1229372fu); f_122971e0();
  /* 1229372f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293732 push eax */
  push32((uint32_t)(EAX));
  /* 12293733 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12293739 push eax */
  push32((uint32_t)(EAX));
  /* 1229373a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229373d mov edx, dword ptr [ecx*4 + 0x122bea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122bea44)));
  /* 12293744 push edx */
  push32((uint32_t)(EDX));
  /* 12293745 call dword ptr [0x122c32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a0))), 0x1229374bu);
L_1229374b:;
  /* 1229374b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229374e mov ecx, dword ptr [eax*4 + 0x122bea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x122bea38)));
  /* 12293755 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12293758 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229375a je 0x12293769 */
  if (C.zf) goto L_12293769;
  /* 1229375c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12293762 push edx */
  push32((uint32_t)(EDX));
  /* 12293763 call dword ptr [0x122c32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a8))), 0x12293769u);
L_12293769:;
  /* 12293769 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229376c mov ecx, dword ptr [eax*4 + 0x122bea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x122bea38)));
  /* 12293773 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12293776 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12293778 je 0x122937e8 */
  if (C.zf) goto L_122937e8;
  /* 1229377a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229377e je 0x1229379d */
  if (C.zf) goto L_1229379d;
  /* 12293780 push 0xa */
  push32((uint32_t)(0xau));
  /* 12293782 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12293788 push edx */
  push32((uint32_t)(EDX));
  /* 12293789 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229378c push eax */
  push32((uint32_t)(EAX));
  /* 1229378d call 0x12296ef0 */
  push32(0x12293792u); f_12296ef0();
  /* 12293792 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293795 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1229379b jmp 0x122937a7 */
  goto L_122937a7;
L_1229379d:;
  /* 1229379d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_122937a7:;
  /* 122937a7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 122937ad push ecx */
  push32((uint32_t)(ECX));
  /* 122937ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122937b1 push edx */
  push32((uint32_t)(EDX));
  /* 122937b2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 122937b8 push eax */
  push32((uint32_t)(EAX));
  /* 122937b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122937bc push ecx */
  push32((uint32_t)(ECX));
  /* 122937bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122937c0 push edx */
  push32((uint32_t)(EDX));
  /* 122937c1 call 0x12293800 */
  push32(0x122937c6u); f_12293800();
  /* 122937c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122937c9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 122937cf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122937d3 jne 0x122937e0 */
  if (!C.zf) goto L_122937e0;
  /* 122937d5 push 0x122bea34 */
  push32((uint32_t)(0x122bea34u));
  /* 122937da call dword ptr [0x122c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a4))), 0x122937e0u);
L_122937e0:;
  /* 122937e0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 122937e6 jmp 0x122937fb */
  goto L_122937fb;
L_122937e8:;
  /* 122937e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122937ec jne 0x122937f9 */
  if (!C.zf) goto L_122937f9;
  /* 122937ee push 0x122bea34 */
  push32((uint32_t)(0x122bea34u));
  /* 122937f3 call dword ptr [0x122c32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a4))), 0x122937f9u);
L_122937f9:;
  /* 122937f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122937fb:;
  /* 122937fb pop edi */
  EDI = (pop32());
  /* 122937fc mov esp, ebp */
  ESP = (EBP);
  /* 122937fe pop ebp */
  EBP = (pop32());
  /* 122937ff ret  */
  ESPCHK(0x12293470u, _esp0);
  ESP += 4; return;
}

/* FUN_10003800 @ 0x12293800 (780 bytes, 197 insns) */
void f_12293800(void) {
  FTRACE(0x12293800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293800 push ebp */
  push32((uint32_t)(EBP));
  /* 12293801 mov ebp, esp */
  EBP = (ESP);
  /* 12293803 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12293808 call 0x12297550 */
  push32(0x1229380du); f_12297550();
L_1229380d:;
  /* 1229380d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293811 jne 0x12293838 */
  if (!C.zf) goto L_12293838;
  /* 12293813 push 0x122bb738 */
  push32((uint32_t)(0x122bb738u));
  /* 12293818 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229381a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1229381f push 0x122bb72c */
  push32((uint32_t)(0x122bb72cu));
  /* 12293824 push 2 */
  push32((uint32_t)(0x2u));
  /* 12293826 call 0x12293470 */
  push32(0x1229382bu); f_12293470();
  /* 1229382b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229382e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293831 jne 0x12293838 */
  if (!C.zf) goto L_12293838;
  /* 12293833 call 0x12293360 */
  push32(0x12293838u); f_12293360();
L_12293838:;
  /* 12293838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229383a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229383c jne 0x1229380d */
  if (!C.zf) goto L_1229380d;
  /* 1229383e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12293843 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12293849 push ecx */
  push32((uint32_t)(ECX));
  /* 1229384a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229384c call dword ptr [0x122c32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32b8))), 0x12293852u);
  /* 12293852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12293854 jne 0x1229386a */
  if (!C.zf) goto L_1229386a;
  /* 12293856 push 0x122bb714 */
  push32((uint32_t)(0x122bb714u));
  /* 1229385b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12293861 push edx */
  push32((uint32_t)(EDX));
  /* 12293862 call 0x12297360 */
  push32(0x12293867u); f_12297360();
  /* 12293867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229386a:;
  /* 1229386a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12293870 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12293873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293876 push ecx */
  push32((uint32_t)(ECX));
  /* 12293877 call 0x122971e0 */
  push32(0x1229387cu); f_122971e0();
  /* 1229387c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229387f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293882 jbe 0x122938ad */
  if ((C.cf||C.zf)) goto L_122938ad;
  /* 12293884 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293887 push edx */
  push32((uint32_t)(EDX));
  /* 12293888 call 0x122971e0 */
  push32(0x1229388du); f_122971e0();
  /* 1229388d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293890 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293893 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12293897 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229389a push 3 */
  push32((uint32_t)(0x3u));
  /* 1229389c push 0x122bb710 */
  push32((uint32_t)(0x122bb710u));
  /* 122938a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122938a4 push eax */
  push32((uint32_t)(EAX));
  /* 122938a5 call 0x12297bd0 */
  push32(0x122938aau); f_12297bd0();
  /* 122938aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122938ad:;
  /* 122938ad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122938b0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 122938b6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122938bd je 0x12293908 */
  if (C.zf) goto L_12293908;
  /* 122938bf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 122938c5 push edx */
  push32((uint32_t)(EDX));
  /* 122938c6 call 0x122971e0 */
  push32(0x122938cbu); f_122971e0();
  /* 122938cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122938ce cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122938d1 jbe 0x12293908 */
  if ((C.cf||C.zf)) goto L_12293908;
  /* 122938d3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 122938d9 push eax */
  push32((uint32_t)(EAX));
  /* 122938da call 0x122971e0 */
  push32(0x122938dfu); f_122971e0();
  /* 122938df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122938e2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 122938e8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 122938ec mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 122938f2 push 3 */
  push32((uint32_t)(0x3u));
  /* 122938f4 push 0x122bb710 */
  push32((uint32_t)(0x122bb710u));
  /* 122938f9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 122938ff push eax */
  push32((uint32_t)(EAX));
  /* 12293900 call 0x12297bd0 */
  push32(0x12293905u); f_12297bd0();
  /* 12293905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293908:;
  /* 12293908 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229390c jne 0x1229391a */
  if (!C.zf) goto L_1229391a;
  /* 1229390e mov dword ptr [ebp - 0x1114], 0x122bb69c */
  w32((uint32_t)(EBP + -0x1114), (0x122bb69cu));
  /* 12293918 jmp 0x12293924 */
  goto L_12293924;
L_1229391a:;
  /* 1229391a mov dword ptr [ebp - 0x1114], 0x122bb43c */
  w32((uint32_t)(EBP + -0x1114), (0x122bb43cu));
L_12293924:;
  /* 12293924 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12293927 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1229392a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229392c je 0x12293939 */
  if (C.zf) goto L_12293939;
  /* 1229392e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12293931 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12293937 jmp 0x12293943 */
  goto L_12293943;
L_12293939:;
  /* 12293939 mov dword ptr [ebp - 0x1118], 0x122bb43c */
  w32((uint32_t)(EBP + -0x1118), (0x122bb43cu));
L_12293943:;
  /* 12293943 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12293946 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12293949 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229394b je 0x1229395f */
  if (C.zf) goto L_1229395f;
  /* 1229394d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293951 jne 0x1229395f */
  if (!C.zf) goto L_1229395f;
  /* 12293953 mov dword ptr [ebp - 0x111c], 0x122bb68c */
  w32((uint32_t)(EBP + -0x111c), (0x122bb68cu));
  /* 1229395d jmp 0x12293969 */
  goto L_12293969;
L_1229395f:;
  /* 1229395f mov dword ptr [ebp - 0x111c], 0x122bb43c */
  w32((uint32_t)(EBP + -0x111c), (0x122bb43cu));
L_12293969:;
  /* 12293969 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1229396c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229396f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12293971 je 0x1229397f */
  if (C.zf) goto L_1229397f;
  /* 12293973 mov dword ptr [ebp - 0x1120], 0x122bb688 */
  w32((uint32_t)(EBP + -0x1120), (0x122bb688u));
  /* 1229397d jmp 0x12293989 */
  goto L_12293989;
L_1229397f:;
  /* 1229397f mov dword ptr [ebp - 0x1120], 0x122bb43c */
  w32((uint32_t)(EBP + -0x1120), (0x122bb43cu));
L_12293989:;
  /* 12293989 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229398d je 0x1229399a */
  if (C.zf) goto L_1229399a;
  /* 1229398f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12293992 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12293998 jmp 0x122939a4 */
  goto L_122939a4;
L_1229399a:;
  /* 1229399a mov dword ptr [ebp - 0x1124], 0x122bb43c */
  w32((uint32_t)(EBP + -0x1124), (0x122bb43cu));
L_122939a4:;
  /* 122939a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122939a8 je 0x122939b6 */
  if (C.zf) goto L_122939b6;
  /* 122939aa mov dword ptr [ebp - 0x1128], 0x122bb680 */
  w32((uint32_t)(EBP + -0x1128), (0x122bb680u));
  /* 122939b4 jmp 0x122939c0 */
  goto L_122939c0;
L_122939b6:;
  /* 122939b6 mov dword ptr [ebp - 0x1128], 0x122bb43c */
  w32((uint32_t)(EBP + -0x1128), (0x122bb43cu));
L_122939c0:;
  /* 122939c0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122939c4 je 0x122939d1 */
  if (C.zf) goto L_122939d1;
  /* 122939c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122939c9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 122939cf jmp 0x122939db */
  goto L_122939db;
L_122939d1:;
  /* 122939d1 mov dword ptr [ebp - 0x112c], 0x122bb43c */
  w32((uint32_t)(EBP + -0x112c), (0x122bb43cu));
L_122939db:;
  /* 122939db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122939df je 0x122939ed */
  if (C.zf) goto L_122939ed;
  /* 122939e1 mov dword ptr [ebp - 0x1130], 0x122bb678 */
  w32((uint32_t)(EBP + -0x1130), (0x122bb678u));
  /* 122939eb jmp 0x122939f7 */
  goto L_122939f7;
L_122939ed:;
  /* 122939ed mov dword ptr [ebp - 0x1130], 0x122bb43c */
  w32((uint32_t)(EBP + -0x1130), (0x122bb43cu));
L_122939f7:;
  /* 122939f7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122939fe je 0x12293a0e */
  if (C.zf) goto L_12293a0e;
  /* 12293a00 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12293a06 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12293a0c jmp 0x12293a18 */
  goto L_12293a18;
L_12293a0e:;
  /* 12293a0e mov dword ptr [ebp - 0x1134], 0x122bb43c */
  w32((uint32_t)(EBP + -0x1134), (0x122bb43cu));
L_12293a18:;
  /* 12293a18 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293a1f je 0x12293a2d */
  if (C.zf) goto L_12293a2d;
  /* 12293a21 mov dword ptr [ebp - 0x1138], 0x122bb66c */
  w32((uint32_t)(EBP + -0x1138), (0x122bb66cu));
  /* 12293a2b jmp 0x12293a37 */
  goto L_12293a37;
L_12293a2d:;
  /* 12293a2d mov dword ptr [ebp - 0x1138], 0x122bb43c */
  w32((uint32_t)(EBP + -0x1138), (0x122bb43cu));
L_12293a37:;
  /* 12293a37 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12293a3d push edx */
  push32((uint32_t)(EDX));
  /* 12293a3e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12293a44 push eax */
  push32((uint32_t)(EAX));
  /* 12293a45 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12293a4b push ecx */
  push32((uint32_t)(ECX));
  /* 12293a4c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12293a52 push edx */
  push32((uint32_t)(EDX));
  /* 12293a53 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12293a59 push eax */
  push32((uint32_t)(EAX));
  /* 12293a5a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12293a60 push ecx */
  push32((uint32_t)(ECX));
  /* 12293a61 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12293a67 push edx */
  push32((uint32_t)(EDX));
  /* 12293a68 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12293a6e push eax */
  push32((uint32_t)(EAX));
  /* 12293a6f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12293a75 push ecx */
  push32((uint32_t)(ECX));
  /* 12293a76 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12293a7c push edx */
  push32((uint32_t)(EDX));
  /* 12293a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293a80 push eax */
  push32((uint32_t)(EAX));
  /* 12293a81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293a84 mov edx, dword ptr [ecx*4 + 0x122bea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122bea50)));
  /* 12293a8b push edx */
  push32((uint32_t)(EDX));
  /* 12293a8c push 0x122bb618 */
  push32((uint32_t)(0x122bb618u));
  /* 12293a91 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12293a96 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12293a9c push eax */
  push32((uint32_t)(EAX));
  /* 12293a9d call 0x12297260 */
  push32(0x12293aa2u); f_12297260();
  /* 12293aa2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293aa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12293aa7 jge 0x12293abd */
  if ((C.sf==C.of)) goto L_12293abd;
  /* 12293aa9 push 0x122bb57c */
  push32((uint32_t)(0x122bb57cu));
  /* 12293aae lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12293ab4 push ecx */
  push32((uint32_t)(ECX));
  /* 12293ab5 call 0x12297360 */
  push32(0x12293abau); f_12297360();
  /* 12293aba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293abd:;
  /* 12293abd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12293ac2 push 0x122bb5f4 */
  push32((uint32_t)(0x122bb5f4u));
  /* 12293ac7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12293acd push edx */
  push32((uint32_t)(EDX));
  /* 12293ace call 0x12297b10 */
  push32(0x12293ad3u); f_12297b10();
  /* 12293ad3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293ad6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12293adc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293ae3 jne 0x12293af6 */
  if (!C.zf) goto L_12293af6;
  /* 12293ae5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12293ae7 call 0x12297850 */
  push32(0x12293aecu); f_12297850();
  /* 12293aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293aef push 3 */
  push32((uint32_t)(0x3u));
  /* 12293af1 call 0x12293b70 */
  push32(0x12293af6u); f_12293b70();
L_12293af6:;
  /* 12293af6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293afd jne 0x12293b06 */
  if (!C.zf) goto L_12293b06;
  /* 12293aff mov eax, 1 */
  EAX = (0x1u);
  /* 12293b04 jmp 0x12293b08 */
  goto L_12293b08;
L_12293b06:;
  /* 12293b06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12293b08:;
  /* 12293b08 mov esp, ebp */
  ESP = (EBP);
  /* 12293b0a pop ebp */
  EBP = (pop32());
  /* 12293b0b ret  */
  ESPCHK(0x12293800u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b10 @ 0x12293b10 (56 bytes, 15 insns) */
void f_12293b10(void) {
  FTRACE(0x12293b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12293b11 mov ebp, esp */
  EBP = (ESP);
  /* 12293b13 cmp dword ptr [0x122c213c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c213c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293b1a je 0x12293b22 */
  if (C.zf) goto L_12293b22;
  /* 12293b1c call dword ptr [0x122c213c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c213c))), 0x12293b22u);
L_12293b22:;
  /* 12293b22 push 0x122be418 */
  push32((uint32_t)(0x122be418u));
  /* 12293b27 push 0x122be208 */
  push32((uint32_t)(0x122be208u));
  /* 12293b2c call 0x12293ce0 */
  push32(0x12293b31u); f_12293ce0();
  /* 12293b31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293b34 push 0x122be104 */
  push32((uint32_t)(0x122be104u));
  /* 12293b39 push 0x122be000 */
  push32((uint32_t)(0x122be000u));
  /* 12293b3e call 0x12293ce0 */
  push32(0x12293b43u); f_12293ce0();
  /* 12293b43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293b46 pop ebp */
  EBP = (pop32());
  /* 12293b47 ret  */
  ESPCHK(0x12293b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b50 @ 0x12293b50 (21 bytes, 10 insns) */
void f_12293b50(void) {
  FTRACE(0x12293b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12293b51 mov ebp, esp */
  EBP = (ESP);
  /* 12293b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12293b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12293b57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293b5a push eax */
  push32((uint32_t)(EAX));
  /* 12293b5b call 0x12293bd0 */
  push32(0x12293b60u); f_12293bd0();
  /* 12293b60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293b63 pop ebp */
  EBP = (pop32());
  /* 12293b64 ret  */
  ESPCHK(0x12293b50u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12293b70 (21 bytes, 10 insns) */
void f_12293b70(void) {
  FTRACE(0x12293b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12293b71 mov ebp, esp */
  EBP = (ESP);
  /* 12293b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12293b75 push 1 */
  push32((uint32_t)(0x1u));
  /* 12293b77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293b7a push eax */
  push32((uint32_t)(EAX));
  /* 12293b7b call 0x12293bd0 */
  push32(0x12293b80u); f_12293bd0();
  /* 12293b80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293b83 pop ebp */
  EBP = (pop32());
  /* 12293b84 ret  */
  ESPCHK(0x12293b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b90 @ 0x12293b90 (19 bytes, 9 insns) */
void f_12293b90(void) {
  FTRACE(0x12293b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12293b91 mov ebp, esp */
  EBP = (ESP);
  /* 12293b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 12293b95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12293b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12293b99 call 0x12293bd0 */
  push32(0x12293b9eu); f_12293bd0();
  /* 12293b9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293ba1 pop ebp */
  EBP = (pop32());
  /* 12293ba2 ret  */
  ESPCHK(0x12293b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bb0 @ 0x12293bb0 (19 bytes, 9 insns) */
void f_12293bb0(void) {
  FTRACE(0x12293bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12293bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12293bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12293bb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12293bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12293bb9 call 0x12293bd0 */
  push32(0x12293bbeu); f_12293bd0();
  /* 12293bbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293bc1 pop ebp */
  EBP = (pop32());
  /* 12293bc2 ret  */
  ESPCHK(0x12293bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bd0 @ 0x12293bd0 (227 bytes, 61 insns) */
void f_12293bd0(void) {
  FTRACE(0x12293bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12293bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12293bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12293bd4 call 0x12293cc0 */
  push32(0x12293bd9u); f_12293cc0();
  /* 12293bd9 cmp dword ptr [0x122c063c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c063c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293be0 jne 0x12293bf3 */
  if (!C.zf) goto L_12293bf3;
  /* 12293be2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293be5 push eax */
  push32((uint32_t)(EAX));
  /* 12293be6 call dword ptr [0x122c32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32c4))), 0x12293becu);
  /* 12293bec push eax */
  push32((uint32_t)(EAX));
  /* 12293bed call dword ptr [0x122c32c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32c0))), 0x12293bf3u);
L_12293bf3:;
  /* 12293bf3 mov dword ptr [0x122c0638], 1 */
  w32((uint32_t)(0x122c0638), (0x1u));
  /* 12293bfd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12293c00 mov byte ptr [0x122c0634], cl */
  w8((uint32_t)(0x122c0634), (CL));
  /* 12293c06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293c0a jne 0x12293c53 */
  if (!C.zf) goto L_12293c53;
  /* 12293c0c cmp dword ptr [0x122c2138], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c2138))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293c13 je 0x12293c41 */
  if (C.zf) goto L_12293c41;
  /* 12293c15 mov edx, dword ptr [0x122c2134] */
  EDX = (r32((uint32_t)(0x122c2134)));
  /* 12293c1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12293c1e:;
  /* 12293c1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293c21 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12293c24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12293c27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293c2a cmp ecx, dword ptr [0x122c2138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122c2138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293c30 jb 0x12293c41 */
  if (C.cf) goto L_12293c41;
  /* 12293c32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293c35 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293c38 je 0x12293c3f */
  if (C.zf) goto L_12293c3f;
  /* 12293c3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293c3d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12293c3fu);
L_12293c3f:;
  /* 12293c3f jmp 0x12293c1e */
  goto L_12293c1e;
L_12293c41:;
  /* 12293c41 push 0x122be724 */
  push32((uint32_t)(0x122be724u));
  /* 12293c46 push 0x122be51c */
  push32((uint32_t)(0x122be51cu));
  /* 12293c4b call 0x12293ce0 */
  push32(0x12293c50u); f_12293ce0();
  /* 12293c50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293c53:;
  /* 12293c53 push 0x122be92c */
  push32((uint32_t)(0x122be92cu));
  /* 12293c58 push 0x122be828 */
  push32((uint32_t)(0x122be828u));
  /* 12293c5d call 0x12293ce0 */
  push32(0x12293c62u); f_12293ce0();
  /* 12293c62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293c65 cmp dword ptr [0x122c0640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293c6c jne 0x12293c8e */
  if (!C.zf) goto L_12293c8e;
  /* 12293c6e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12293c70 call 0x122958c0 */
  push32(0x12293c75u); f_122958c0();
  /* 12293c75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293c78 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12293c7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12293c7d je 0x12293c8e */
  if (C.zf) goto L_12293c8e;
  /* 12293c7f mov dword ptr [0x122c0640], 1 */
  w32((uint32_t)(0x122c0640), (0x1u));
  /* 12293c89 call 0x122961d0 */
  push32(0x12293c8eu); f_122961d0();
L_12293c8e:;
  /* 12293c8e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293c92 je 0x12293c9b */
  if (C.zf) goto L_12293c9b;
  /* 12293c94 call 0x12293cd0 */
  push32(0x12293c99u); f_12293cd0();
  /* 12293c99 jmp 0x12293caf */
  goto L_12293caf;
L_12293c9b:;
  /* 12293c9b mov dword ptr [0x122c063c], 1 */
  w32((uint32_t)(0x122c063c), (0x1u));
  /* 12293ca5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293ca8 push ecx */
  push32((uint32_t)(ECX));
  /* 12293ca9 call dword ptr [0x122c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32bc))), 0x12293cafu);
L_12293caf:;
  /* 12293caf mov esp, ebp */
  ESP = (EBP);
  /* 12293cb1 pop ebp */
  EBP = (pop32());
  /* 12293cb2 ret  */
  ESPCHK(0x12293bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cc0 @ 0x12293cc0 (15 bytes, 7 insns) */
void f_12293cc0(void) {
  FTRACE(0x12293cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12293cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12293cc3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12293cc5 call 0x12297db0 */
  push32(0x12293ccau); f_12297db0();
  /* 12293cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293ccd pop ebp */
  EBP = (pop32());
  /* 12293cce ret  */
  ESPCHK(0x12293cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd0 @ 0x12293cd0 (15 bytes, 7 insns) */
void f_12293cd0(void) {
  FTRACE(0x12293cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12293cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12293cd3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12293cd5 call 0x12297e50 */
  push32(0x12293cdau); f_12297e50();
  /* 12293cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293cdd pop ebp */
  EBP = (pop32());
  /* 12293cde ret  */
  ESPCHK(0x12293cd0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12293ce0 (37 bytes, 16 insns) */
void f_12293ce0(void) {
  FTRACE(0x12293ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12293ce1 mov ebp, esp */
  EBP = (ESP);
L_12293ce3:;
  /* 12293ce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293ce6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293ce9 jae 0x12293d03 */
  if (!C.cf) goto L_12293d03;
  /* 12293ceb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293cee cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293cf1 je 0x12293cf8 */
  if (C.zf) goto L_12293cf8;
  /* 12293cf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293cf6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12293cf8u);
L_12293cf8:;
  /* 12293cf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293cfb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12293cfe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12293d01 jmp 0x12293ce3 */
  goto L_12293ce3;
L_12293d03:;
  /* 12293d03 pop ebp */
  EBP = (pop32());
  /* 12293d04 ret  */
  ESPCHK(0x12293ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d10 @ 0x12293d10 (130 bytes, 42 insns) */
void f_12293d10(void) {
  FTRACE(0x12293d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12293d11 mov ebp, esp */
  EBP = (ESP);
  /* 12293d13 push ecx */
  push32((uint32_t)(ECX));
  /* 12293d14 call 0x12297cd0 */
  push32(0x12293d19u); f_12297cd0();
  /* 12293d19 call dword ptr [0x122c32d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32d0))), 0x12293d1fu);
  /* 12293d1f mov dword ptr [0x122bea5c], eax */
  w32((uint32_t)(0x122bea5c), (EAX));
  /* 12293d24 cmp dword ptr [0x122bea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x122bea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293d2b jne 0x12293d31 */
  if (!C.zf) goto L_12293d31;
  /* 12293d2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12293d2f jmp 0x12293d8e */
  goto L_12293d8e;
L_12293d31:;
  /* 12293d31 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12293d33 push 0x122bb750 */
  push32((uint32_t)(0x122bb750u));
  /* 12293d38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12293d3a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12293d3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12293d3e call 0x122947c0 */
  push32(0x12293d43u); f_122947c0();
  /* 12293d43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293d46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12293d49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293d4d je 0x12293d64 */
  if (C.zf) goto L_12293d64;
  /* 12293d4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293d52 push eax */
  push32((uint32_t)(EAX));
  /* 12293d53 mov ecx, dword ptr [0x122bea5c] */
  ECX = (r32((uint32_t)(0x122bea5c)));
  /* 12293d59 push ecx */
  push32((uint32_t)(ECX));
  /* 12293d5a call dword ptr [0x122c32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32cc))), 0x12293d60u);
  /* 12293d60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12293d62 jne 0x12293d68 */
  if (!C.zf) goto L_12293d68;
L_12293d64:;
  /* 12293d64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12293d66 jmp 0x12293d8e */
  goto L_12293d8e;
L_12293d68:;
  /* 12293d68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293d6b push edx */
  push32((uint32_t)(EDX));
  /* 12293d6c call 0x12293dd0 */
  push32(0x12293d71u); f_12293dd0();
  /* 12293d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293d74 call dword ptr [0x122c32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32c8))), 0x12293d7au);
  /* 12293d7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293d7d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12293d7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293d82 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12293d89 mov eax, 1 */
  EAX = (0x1u);
L_12293d8e:;
  /* 12293d8e mov esp, ebp */
  ESP = (EBP);
  /* 12293d90 pop ebp */
  EBP = (pop32());
  /* 12293d91 ret  */
  ESPCHK(0x12293d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003da0 @ 0x12293da0 (41 bytes, 11 insns) */
void f_12293da0(void) {
  FTRACE(0x12293da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12293da1 mov ebp, esp */
  EBP = (ESP);
  /* 12293da3 call 0x12297d10 */
  push32(0x12293da8u); f_12297d10();
  /* 12293da8 cmp dword ptr [0x122bea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x122bea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293daf je 0x12293dc7 */
  if (C.zf) goto L_12293dc7;
  /* 12293db1 mov eax, dword ptr [0x122bea5c] */
  EAX = (r32((uint32_t)(0x122bea5c)));
  /* 12293db6 push eax */
  push32((uint32_t)(EAX));
  /* 12293db7 call dword ptr [0x122c32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32d4))), 0x12293dbdu);
  /* 12293dbd mov dword ptr [0x122bea5c], 0xffffffff */
  w32((uint32_t)(0x122bea5c), (0xffffffffu));
L_12293dc7:;
  /* 12293dc7 pop ebp */
  EBP = (pop32());
  /* 12293dc8 ret  */
  ESPCHK(0x12293da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dd0 @ 0x12293dd0 (25 bytes, 8 insns) */
void f_12293dd0(void) {
  FTRACE(0x12293dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12293dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12293dd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293dd6 mov dword ptr [eax + 0x50], 0x122bec00 */
  w32((uint32_t)(EAX + 0x50), (0x122bec00u));
  /* 12293ddd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293de0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12293de7 pop ebp */
  EBP = (pop32());
  /* 12293de8 ret  */
  ESPCHK(0x12293dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003df0 @ 0x12293df0 (152 bytes, 48 insns) */
void f_12293df0(void) {
  FTRACE(0x12293df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12293df1 mov ebp, esp */
  EBP = (ESP);
  /* 12293df3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12293df6 call dword ptr [0x122c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32e0))), 0x12293dfcu);
  /* 12293dfc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12293dff mov eax, dword ptr [0x122bea5c] */
  EAX = (r32((uint32_t)(0x122bea5c)));
  /* 12293e04 push eax */
  push32((uint32_t)(EAX));
  /* 12293e05 call dword ptr [0x122c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32dc))), 0x12293e0bu);
  /* 12293e0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12293e0e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293e12 jne 0x12293e77 */
  if (!C.zf) goto L_12293e77;
  /* 12293e14 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12293e19 push 0x122bb750 */
  push32((uint32_t)(0x122bb750u));
  /* 12293e1e push 2 */
  push32((uint32_t)(0x2u));
  /* 12293e20 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12293e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 12293e24 call 0x122947c0 */
  push32(0x12293e29u); f_122947c0();
  /* 12293e29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293e2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12293e2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293e33 je 0x12293e6d */
  if (C.zf) goto L_12293e6d;
  /* 12293e35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293e38 push ecx */
  push32((uint32_t)(ECX));
  /* 12293e39 mov edx, dword ptr [0x122bea5c] */
  EDX = (r32((uint32_t)(0x122bea5c)));
  /* 12293e3f push edx */
  push32((uint32_t)(EDX));
  /* 12293e40 call dword ptr [0x122c32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32cc))), 0x12293e46u);
  /* 12293e46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12293e48 je 0x12293e6d */
  if (C.zf) goto L_12293e6d;
  /* 12293e4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293e4d push eax */
  push32((uint32_t)(EAX));
  /* 12293e4e call 0x12293dd0 */
  push32(0x12293e53u); f_12293dd0();
  /* 12293e53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293e56 call dword ptr [0x122c32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32c8))), 0x12293e5cu);
  /* 12293e5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293e5f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12293e61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293e64 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12293e6b jmp 0x12293e77 */
  goto L_12293e77;
L_12293e6d:;
  /* 12293e6d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12293e6f call 0x12293320 */
  push32(0x12293e74u); f_12293320();
  /* 12293e74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293e77:;
  /* 12293e77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12293e7a push eax */
  push32((uint32_t)(EAX));
  /* 12293e7b call dword ptr [0x122c32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32d8))), 0x12293e81u);
  /* 12293e81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12293e84 mov esp, ebp */
  ESP = (EBP);
  /* 12293e86 pop ebp */
  EBP = (pop32());
  /* 12293e87 ret  */
  ESPCHK(0x12293df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e90 @ 0x12293e90 (263 bytes, 86 insns) */
void f_12293e90(void) {
  FTRACE(0x12293e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12293e91 mov ebp, esp */
  EBP = (ESP);
  /* 12293e93 cmp dword ptr [0x122bea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x122bea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293e9a je 0x12293f95 */
  if (C.zf) goto L_12293f95;
  /* 12293ea0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293ea4 jne 0x12293eb5 */
  if (!C.zf) goto L_12293eb5;
  /* 12293ea6 mov eax, dword ptr [0x122bea5c] */
  EAX = (r32((uint32_t)(0x122bea5c)));
  /* 12293eab push eax */
  push32((uint32_t)(EAX));
  /* 12293eac call dword ptr [0x122c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32dc))), 0x12293eb2u);
  /* 12293eb2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12293eb5:;
  /* 12293eb5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293eb9 je 0x12293f86 */
  if (C.zf) goto L_12293f86;
  /* 12293ebf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293ec2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293ec6 je 0x12293ed9 */
  if (C.zf) goto L_12293ed9;
  /* 12293ec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12293eca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293ecd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12293ed0 push eax */
  push32((uint32_t)(EAX));
  /* 12293ed1 call 0x12294e40 */
  push32(0x12293ed6u); f_12294e40();
  /* 12293ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293ed9:;
  /* 12293ed9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293edc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293ee0 je 0x12293ef3 */
  if (C.zf) goto L_12293ef3;
  /* 12293ee2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12293ee4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293ee7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12293eea push eax */
  push32((uint32_t)(EAX));
  /* 12293eeb call 0x12294e40 */
  push32(0x12293ef0u); f_12294e40();
  /* 12293ef0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293ef3:;
  /* 12293ef3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293ef6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293efa je 0x12293f0d */
  if (C.zf) goto L_12293f0d;
  /* 12293efc push 2 */
  push32((uint32_t)(0x2u));
  /* 12293efe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293f01 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12293f04 push eax */
  push32((uint32_t)(EAX));
  /* 12293f05 call 0x12294e40 */
  push32(0x12293f0au); f_12294e40();
  /* 12293f0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293f0d:;
  /* 12293f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293f10 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293f14 je 0x12293f27 */
  if (C.zf) goto L_12293f27;
  /* 12293f16 push 2 */
  push32((uint32_t)(0x2u));
  /* 12293f18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293f1b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12293f1e push eax */
  push32((uint32_t)(EAX));
  /* 12293f1f call 0x12294e40 */
  push32(0x12293f24u); f_12294e40();
  /* 12293f24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293f27:;
  /* 12293f27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293f2a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293f2e je 0x12293f41 */
  if (C.zf) goto L_12293f41;
  /* 12293f30 push 2 */
  push32((uint32_t)(0x2u));
  /* 12293f32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293f35 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12293f38 push eax */
  push32((uint32_t)(EAX));
  /* 12293f39 call 0x12294e40 */
  push32(0x12293f3eu); f_12294e40();
  /* 12293f3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293f41:;
  /* 12293f41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293f44 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293f48 je 0x12293f5b */
  if (C.zf) goto L_12293f5b;
  /* 12293f4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12293f4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293f4f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12293f52 push eax */
  push32((uint32_t)(EAX));
  /* 12293f53 call 0x12294e40 */
  push32(0x12293f58u); f_12294e40();
  /* 12293f58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293f5b:;
  /* 12293f5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293f5e cmp dword ptr [ecx + 0x50], 0x122bec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x122bec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293f65 je 0x12293f78 */
  if (C.zf) goto L_12293f78;
  /* 12293f67 push 2 */
  push32((uint32_t)(0x2u));
  /* 12293f69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293f6c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12293f6f push eax */
  push32((uint32_t)(EAX));
  /* 12293f70 call 0x12294e40 */
  push32(0x12293f75u); f_12294e40();
  /* 12293f75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293f78:;
  /* 12293f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 12293f7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12293f7d push ecx */
  push32((uint32_t)(ECX));
  /* 12293f7e call 0x12294e40 */
  push32(0x12293f83u); f_12294e40();
  /* 12293f83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293f86:;
  /* 12293f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12293f88 mov edx, dword ptr [0x122bea5c] */
  EDX = (r32((uint32_t)(0x122bea5c)));
  /* 12293f8e push edx */
  push32((uint32_t)(EDX));
  /* 12293f8f call dword ptr [0x122c32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32cc))), 0x12293f95u);
L_12293f95:;
  /* 12293f95 pop ebp */
  EBP = (pop32());
  /* 12293f96 ret  */
  ESPCHK(0x12293e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fa0 @ 0x12293fa0 (11 bytes, 5 insns) */
void f_12293fa0(void) {
  FTRACE(0x12293fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12293fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12293fa3 call dword ptr [0x122c32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32c8))), 0x12293fa9u);
  /* 12293fa9 pop ebp */
  EBP = (pop32());
  /* 12293faa ret  */
  ESPCHK(0x12293fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fb0 @ 0x12293fb0 (11 bytes, 5 insns) */
void f_12293fb0(void) {
  FTRACE(0x12293fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12293fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12293fb3 call dword ptr [0x122c32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32e4))), 0x12293fb9u);
  /* 12293fb9 pop ebp */
  EBP = (pop32());
  /* 12293fba ret  */
  ESPCHK(0x12293fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fc0 @ 0x12293fc0 (804 bytes, 236 insns) */
void f_12293fc0(void) {
  FTRACE(0x12293fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12293fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12293fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12293fc3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12293fc6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12293fcb push 0x122bb75c */
  push32((uint32_t)(0x122bb75cu));
  /* 12293fd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12293fd2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12293fd7 call 0x122943b0 */
  push32(0x12293fdcu); f_122943b0();
  /* 12293fdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12293fdf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12293fe2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12293fe6 jne 0x12293ff2 */
  if (!C.zf) goto L_12293ff2;
  /* 12293fe8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12293fea call 0x12293320 */
  push32(0x12293fefu); f_12293320();
  /* 12293fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12293ff2:;
  /* 12293ff2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12293ff5 mov dword ptr [0x122c1fe0], eax */
  w32((uint32_t)(0x122c1fe0), (EAX));
  /* 12293ffa mov dword ptr [0x122c211c], 0x20 */
  w32((uint32_t)(0x122c211c), (0x20u));
  /* 12294004 jmp 0x1229400f */
  goto L_1229400f;
L_12294006:;
  /* 12294006 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12294009 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229400c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1229400f:;
  /* 1229400f mov edx, dword ptr [0x122c1fe0] */
  EDX = (r32((uint32_t)(0x122c1fe0)));
  /* 12294015 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229401b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229401e jae 0x12294043 */
  if (!C.cf) goto L_12294043;
  /* 12294020 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12294023 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12294027 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1229402a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12294030 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12294033 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12294037 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1229403a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12294041 jmp 0x12294006 */
  goto L_12294006;
L_12294043:;
  /* 12294043 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12294046 push ecx */
  push32((uint32_t)(ECX));
  /* 12294047 call dword ptr [0x122c32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32f0))), 0x1229404du);
  /* 1229404d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12294050 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12294056 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12294058 je 0x122941e5 */
  if (C.zf) goto L_122941e5;
  /* 1229405e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294062 je 0x122941e5 */
  if (C.zf) goto L_122941e5;
  /* 12294068 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229406b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229406d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12294070 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12294073 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294076 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12294079 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229407c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229407f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12294082 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294089 jge 0x12294093 */
  if ((C.sf==C.of)) goto L_12294093;
  /* 1229408b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1229408e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12294091 jmp 0x1229409a */
  goto L_1229409a;
L_12294093:;
  /* 12294093 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1229409a:;
  /* 1229409a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1229409d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 122940a0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 122940a7 jmp 0x122940b2 */
  goto L_122940b2;
L_122940a9:;
  /* 122940a9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 122940ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122940af mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_122940b2:;
  /* 122940b2 mov ecx, dword ptr [0x122c211c] */
  ECX = (r32((uint32_t)(0x122c211c)));
  /* 122940b8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122940bb jge 0x12294152 */
  if ((C.sf==C.of)) goto L_12294152;
  /* 122940c1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 122940c6 push 0x122bb75c */
  push32((uint32_t)(0x122bb75cu));
  /* 122940cb push 2 */
  push32((uint32_t)(0x2u));
  /* 122940cd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 122940d2 call 0x122943b0 */
  push32(0x122940d7u); f_122943b0();
  /* 122940d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122940da mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 122940dd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122940e1 jne 0x122940ee */
  if (!C.zf) goto L_122940ee;
  /* 122940e3 mov edx, dword ptr [0x122c211c] */
  EDX = (r32((uint32_t)(0x122c211c)));
  /* 122940e9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 122940ec jmp 0x12294152 */
  goto L_12294152;
L_122940ee:;
  /* 122940ee mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 122940f1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 122940f4 mov dword ptr [eax*4 + 0x122c1fe0], ecx */
  w32((uint32_t)(EAX*4 + 0x122c1fe0), (ECX));
  /* 122940fb mov edx, dword ptr [0x122c211c] */
  EDX = (r32((uint32_t)(0x122c211c)));
  /* 12294101 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294104 mov dword ptr [0x122c211c], edx */
  w32((uint32_t)(0x122c211c), (EDX));
  /* 1229410a jmp 0x12294115 */
  goto L_12294115;
L_1229410c:;
  /* 1229410c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1229410f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294112 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12294115:;
  /* 12294115 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12294118 mov edx, dword ptr [ecx*4 + 0x122c1fe0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122c1fe0)));
  /* 1229411f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294125 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294128 jae 0x1229414d */
  if (!C.cf) goto L_1229414d;
  /* 1229412a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1229412d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12294131 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12294134 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1229413a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1229413d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12294141 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12294144 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1229414b jmp 0x1229410c */
  goto L_1229410c;
L_1229414d:;
  /* 1229414d jmp 0x122940a9 */
  goto L_122940a9;
L_12294152:;
  /* 12294152 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12294159 jmp 0x12294176 */
  goto L_12294176;
L_1229415b:;
  /* 1229415b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1229415e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294161 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12294164 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294167 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229416a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229416d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12294170 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294173 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12294176:;
  /* 12294176 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12294179 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229417c jge 0x122941e5 */
  if ((C.sf==C.of)) goto L_122941e5;
  /* 1229417e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12294181 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294184 je 0x122941e0 */
  if (C.zf) goto L_122941e0;
  /* 12294186 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294189 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229418c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1229418f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12294191 je 0x122941e0 */
  if (C.zf) goto L_122941e0;
  /* 12294193 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294196 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12294199 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1229419c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229419e jne 0x122941b0 */
  if (!C.zf) goto L_122941b0;
  /* 122941a0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 122941a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122941a5 push edx */
  push32((uint32_t)(EDX));
  /* 122941a6 call dword ptr [0x122c32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32ec))), 0x122941acu);
  /* 122941ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122941ae je 0x122941e0 */
  if (C.zf) goto L_122941e0;
L_122941b0:;
  /* 122941b0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 122941b3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122941b6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 122941b9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 122941bc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122941bf mov edx, dword ptr [eax*4 + 0x122c1fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122c1fe0)));
  /* 122941c6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122941c8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 122941cb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 122941ce mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 122941d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122941d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122941d5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 122941d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122941db mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122941dd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_122941e0:;
  /* 122941e0 jmp 0x1229415b */
  goto L_1229415b;
L_122941e5:;
  /* 122941e5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 122941ec jmp 0x122941f7 */
  goto L_122941f7;
L_122941ee:;
  /* 122941ee mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 122941f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122941f4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_122941f7:;
  /* 122941f7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122941fb jge 0x122942d4 */
  if ((C.sf==C.of)) goto L_122942d4;
  /* 12294201 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12294204 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12294207 mov edx, dword ptr [0x122c1fe0] */
  EDX = (r32((uint32_t)(0x122c1fe0)));
  /* 1229420d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229420f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12294212 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12294215 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294218 jne 0x122942c0 */
  if (!C.zf) goto L_122942c0;
  /* 1229421e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12294221 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12294225 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294229 jne 0x12294234 */
  if (!C.zf) goto L_12294234;
  /* 1229422b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12294232 jmp 0x12294244 */
  goto L_12294244;
L_12294234:;
  /* 12294234 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12294237 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229423a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1229423c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229423e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294241 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12294244:;
  /* 12294244 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12294247 push eax */
  push32((uint32_t)(EAX));
  /* 12294248 call dword ptr [0x122c329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c329c))), 0x1229424eu);
  /* 1229424e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12294251 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294255 je 0x122942af */
  if (C.zf) goto L_122942af;
  /* 12294257 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1229425a push ecx */
  push32((uint32_t)(ECX));
  /* 1229425b call dword ptr [0x122c32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32ec))), 0x12294261u);
  /* 12294261 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12294264 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294268 je 0x122942af */
  if (C.zf) goto L_122942af;
  /* 1229426a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1229426d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12294270 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12294272 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12294275 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1229427b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229427e jne 0x12294290 */
  if (!C.zf) goto L_12294290;
  /* 12294280 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12294283 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12294286 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12294288 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1229428b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1229428e jmp 0x122942ad */
  goto L_122942ad;
L_12294290:;
  /* 12294290 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12294293 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12294299 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229429c jne 0x122942ad */
  if (!C.zf) goto L_122942ad;
  /* 1229429e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 122942a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122942a4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 122942a7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 122942aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_122942ad:;
  /* 122942ad jmp 0x122942be */
  goto L_122942be;
L_122942af:;
  /* 122942af mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 122942b2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122942b5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 122942b8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 122942bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_122942be:;
  /* 122942be jmp 0x122942cf */
  goto L_122942cf;
L_122942c0:;
  /* 122942c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 122942c3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122942c6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 122942c9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 122942cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_122942cf:;
  /* 122942cf jmp 0x122941ee */
  goto L_122941ee;
L_122942d4:;
  /* 122942d4 mov eax, dword ptr [0x122c211c] */
  EAX = (r32((uint32_t)(0x122c211c)));
  /* 122942d9 push eax */
  push32((uint32_t)(EAX));
  /* 122942da call dword ptr [0x122c32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32e8))), 0x122942e0u);
  /* 122942e0 mov esp, ebp */
  ESP = (EBP);
  /* 122942e2 pop ebp */
  EBP = (pop32());
  /* 122942e3 ret  */
  ESPCHK(0x12293fc0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x122942f0 (155 bytes, 45 insns) */
void f_122942f0(void) {
  FTRACE(0x122942f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122942f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122942f1 mov ebp, esp */
  EBP = (ESP);
  /* 122942f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122942f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122942fd jmp 0x12294308 */
  goto L_12294308;
L_122942ff:;
  /* 122942ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12294302 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294305 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12294308:;
  /* 12294308 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229430c jge 0x12294387 */
  if ((C.sf==C.of)) goto L_12294387;
  /* 1229430e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12294311 cmp dword ptr [ecx*4 + 0x122c1fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x122c1fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294319 je 0x12294382 */
  if (C.zf) goto L_12294382;
  /* 1229431b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229431e mov eax, dword ptr [edx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122c1fe0)));
  /* 12294325 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12294328 jmp 0x12294333 */
  goto L_12294333;
L_1229432a:;
  /* 1229432a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229432d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294330 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12294333:;
  /* 12294333 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12294336 mov eax, dword ptr [edx*4 + 0x122c1fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122c1fe0)));
  /* 1229433d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294342 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294345 jae 0x1229435f */
  if (!C.cf) goto L_1229435f;
  /* 12294347 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229434a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229434e je 0x1229435d */
  if (C.zf) goto L_1229435d;
  /* 12294350 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294353 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294356 push edx */
  push32((uint32_t)(EDX));
  /* 12294357 call dword ptr [0x122c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32f4))), 0x1229435du);
L_1229435d:;
  /* 1229435d jmp 0x1229432a */
  goto L_1229432a;
L_1229435f:;
  /* 1229435f push 2 */
  push32((uint32_t)(0x2u));
  /* 12294361 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12294364 mov ecx, dword ptr [eax*4 + 0x122c1fe0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x122c1fe0)));
  /* 1229436b push ecx */
  push32((uint32_t)(ECX));
  /* 1229436c call 0x12294e40 */
  push32(0x12294371u); f_12294e40();
  /* 12294371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294374 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12294377 mov dword ptr [edx*4 + 0x122c1fe0], 0 */
  w32((uint32_t)(EDX*4 + 0x122c1fe0), (0x0u));
L_12294382:;
  /* 12294382 jmp 0x122942ff */
  goto L_122942ff;
L_12294387:;
  /* 12294387 mov esp, ebp */
  ESP = (EBP);
  /* 12294389 pop ebp */
  EBP = (pop32());
  /* 1229438a ret  */
  ESPCHK(0x122942f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004390 @ 0x12294390 (29 bytes, 13 insns) */
void f_12294390(void) {
  FTRACE(0x12294390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12294390 push ebp */
  push32((uint32_t)(EBP));
  /* 12294391 mov ebp, esp */
  EBP = (ESP);
  /* 12294393 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294395 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294397 push 1 */
  push32((uint32_t)(0x1u));
  /* 12294399 mov eax, dword ptr [0x122c07e8] */
  EAX = (r32((uint32_t)(0x122c07e8)));
  /* 1229439e push eax */
  push32((uint32_t)(EAX));
  /* 1229439f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122943a2 push ecx */
  push32((uint32_t)(ECX));
  /* 122943a3 call 0x12294400 */
  push32(0x122943a8u); f_12294400();
  /* 122943a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122943ab pop ebp */
  EBP = (pop32());
  /* 122943ac ret  */
  ESPCHK(0x12294390u, _esp0);
  ESP += 4; return;
}

/* FUN_100043b0 @ 0x122943b0 (35 bytes, 16 insns) */
void f_122943b0(void) {
  FTRACE(0x122943b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122943b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122943b1 mov ebp, esp */
  EBP = (ESP);
  /* 122943b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122943b6 push eax */
  push32((uint32_t)(EAX));
  /* 122943b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122943ba push ecx */
  push32((uint32_t)(ECX));
  /* 122943bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122943be push edx */
  push32((uint32_t)(EDX));
  /* 122943bf mov eax, dword ptr [0x122c07e8] */
  EAX = (r32((uint32_t)(0x122c07e8)));
  /* 122943c4 push eax */
  push32((uint32_t)(EAX));
  /* 122943c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122943c8 push ecx */
  push32((uint32_t)(ECX));
  /* 122943c9 call 0x12294400 */
  push32(0x122943ceu); f_12294400();
  /* 122943ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122943d1 pop ebp */
  EBP = (pop32());
  /* 122943d2 ret  */
  ESPCHK(0x122943b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043e0 @ 0x122943e0 (27 bytes, 13 insns) */
void f_122943e0(void) {
  FTRACE(0x122943e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122943e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122943e1 mov ebp, esp */
  EBP = (ESP);
  /* 122943e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122943e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122943e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 122943e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122943ec push eax */
  push32((uint32_t)(EAX));
  /* 122943ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122943f0 push ecx */
  push32((uint32_t)(ECX));
  /* 122943f1 call 0x12294400 */
  push32(0x122943f6u); f_12294400();
  /* 122943f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122943f9 pop ebp */
  EBP = (pop32());
  /* 122943fa ret  */
  ESPCHK(0x122943e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004400 @ 0x12294400 (94 bytes, 38 insns) */
void f_12294400(void) {
  FTRACE(0x12294400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12294400 push ebp */
  push32((uint32_t)(EBP));
  /* 12294401 mov ebp, esp */
  EBP = (ESP);
  /* 12294403 push ecx */
  push32((uint32_t)(ECX));
L_12294404:;
  /* 12294404 push 9 */
  push32((uint32_t)(0x9u));
  /* 12294406 call 0x12297db0 */
  push32(0x1229440bu); f_12297db0();
  /* 1229440b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229440e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12294411 push eax */
  push32((uint32_t)(EAX));
  /* 12294412 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12294415 push ecx */
  push32((uint32_t)(ECX));
  /* 12294416 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12294419 push edx */
  push32((uint32_t)(EDX));
  /* 1229441a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229441d push eax */
  push32((uint32_t)(EAX));
  /* 1229441e call 0x12294480 */
  push32(0x12294423u); f_12294480();
  /* 12294423 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294426 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12294429 push 9 */
  push32((uint32_t)(0x9u));
  /* 1229442b call 0x12297e50 */
  push32(0x12294430u); f_12297e50();
  /* 12294430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294433 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294437 jne 0x1229443f */
  if (!C.zf) goto L_1229443f;
  /* 12294439 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229443d jne 0x12294444 */
  if (!C.zf) goto L_12294444;
L_1229443f:;
  /* 1229443f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294442 jmp 0x1229445a */
  goto L_1229445a;
L_12294444:;
  /* 12294444 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294447 push ecx */
  push32((uint32_t)(ECX));
  /* 12294448 call 0x122980f0 */
  push32(0x1229444du); f_122980f0();
  /* 1229444d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294450 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12294452 jne 0x12294458 */
  if (!C.zf) goto L_12294458;
  /* 12294454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12294456 jmp 0x1229445a */
  goto L_1229445a;
L_12294458:;
  /* 12294458 jmp 0x12294404 */
  goto L_12294404;
L_1229445a:;
  /* 1229445a mov esp, ebp */
  ESP = (EBP);
  /* 1229445c pop ebp */
  EBP = (pop32());
  /* 1229445d ret  */
  ESPCHK(0x12294400u, _esp0);
  ESP += 4; return;
}

/* FUN_10004460 @ 0x12294460 (23 bytes, 11 insns) */
void f_12294460(void) {
  FTRACE(0x12294460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12294460 push ebp */
  push32((uint32_t)(EBP));
  /* 12294461 mov ebp, esp */
  EBP = (ESP);
  /* 12294463 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294465 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294467 push 1 */
  push32((uint32_t)(0x1u));
  /* 12294469 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229446c push eax */
  push32((uint32_t)(EAX));
  /* 1229446d call 0x12294480 */
  push32(0x12294472u); f_12294480();
  /* 12294472 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294475 pop ebp */
  EBP = (pop32());
  /* 12294476 ret  */
  ESPCHK(0x12294460u, _esp0);
  ESP += 4; return;
}

/* FUN_10004480 @ 0x12294480 (787 bytes, 254 insns) */
void f_12294480(void) {
  FTRACE(0x12294480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12294480 push ebp */
  push32((uint32_t)(EBP));
  /* 12294481 mov ebp, esp */
  EBP = (ESP);
  /* 12294483 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12294486 push ebx */
  push32((uint32_t)(EBX));
  /* 12294487 push esi */
  push32((uint32_t)(ESI));
  /* 12294488 push edi */
  push32((uint32_t)(EDI));
  /* 12294489 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12294490 mov eax, dword ptr [0x122bea84] */
  EAX = (r32((uint32_t)(0x122bea84)));
  /* 12294495 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12294498 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229449a je 0x122944cc */
  if (C.zf) goto L_122944cc;
L_1229449c:;
  /* 1229449c call 0x12295550 */
  push32(0x122944a1u); f_12295550();
  /* 122944a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122944a3 jne 0x122944c6 */
  if (!C.zf) goto L_122944c6;
  /* 122944a5 push 0x122bb850 */
  push32((uint32_t)(0x122bb850u));
  /* 122944aa push 0 */
  push32((uint32_t)(0x0u));
  /* 122944ac push 0x141 */
  push32((uint32_t)(0x141u));
  /* 122944b1 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 122944b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122944b8 call 0x12293470 */
  push32(0x122944bdu); f_12293470();
  /* 122944bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122944c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122944c3 jne 0x122944c6 */
  if (!C.zf) goto L_122944c6;
  /* 122944c5 int3  */
  x86_unimpl("int3 @ 0x122944c5");
L_122944c6:;
  /* 122944c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122944c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122944ca jne 0x1229449c */
  if (!C.zf) goto L_1229449c;
L_122944cc:;
  /* 122944cc mov edx, dword ptr [0x122bea88] */
  EDX = (r32((uint32_t)(0x122bea88)));
  /* 122944d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122944d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122944d8 cmp eax, dword ptr [0x122bea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122bea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122944de jne 0x122944e1 */
  if (!C.zf) goto L_122944e1;
  /* 122944e0 int3  */
  x86_unimpl("int3 @ 0x122944e0");
L_122944e1:;
  /* 122944e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122944e4 push ecx */
  push32((uint32_t)(ECX));
  /* 122944e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122944e8 push edx */
  push32((uint32_t)(EDX));
  /* 122944e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122944ec push eax */
  push32((uint32_t)(EAX));
  /* 122944ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122944f0 push ecx */
  push32((uint32_t)(ECX));
  /* 122944f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122944f4 push edx */
  push32((uint32_t)(EDX));
  /* 122944f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122944f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 122944f9 call dword ptr [0x122bec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x122bec90))), 0x122944ffu);
  /* 122944ff add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12294504 jne 0x12294564 */
  if (!C.zf) goto L_12294564;
  /* 12294506 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229450a je 0x12294537 */
  if (C.zf) goto L_12294537;
L_1229450c:;
  /* 1229450c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229450f push eax */
  push32((uint32_t)(EAX));
  /* 12294510 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12294513 push ecx */
  push32((uint32_t)(ECX));
  /* 12294514 push 0x122bb80c */
  push32((uint32_t)(0x122bb80cu));
  /* 12294519 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229451b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229451d push 0 */
  push32((uint32_t)(0x0u));
  /* 1229451f push 0 */
  push32((uint32_t)(0x0u));
  /* 12294521 call 0x12293470 */
  push32(0x12294526u); f_12293470();
  /* 12294526 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294529 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229452c jne 0x1229452f */
  if (!C.zf) goto L_1229452f;
  /* 1229452e int3  */
  x86_unimpl("int3 @ 0x1229452e");
L_1229452f:;
  /* 1229452f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12294531 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12294533 jne 0x1229450c */
  if (!C.zf) goto L_1229450c;
  /* 12294535 jmp 0x1229455d */
  goto L_1229455d;
L_12294537:;
  /* 12294537 push 0x122bb7e8 */
  push32((uint32_t)(0x122bb7e8u));
  /* 1229453c push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 12294541 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294543 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294545 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294547 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294549 call 0x12293470 */
  push32(0x1229454eu); f_12293470();
  /* 1229454e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294551 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294554 jne 0x12294557 */
  if (!C.zf) goto L_12294557;
  /* 12294556 int3  */
  x86_unimpl("int3 @ 0x12294556");
L_12294557:;
  /* 12294557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12294559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229455b jne 0x12294537 */
  if (!C.zf) goto L_12294537;
L_1229455d:;
  /* 1229455d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229455f jmp 0x1229478c */
  goto L_1229478c;
L_12294564:;
  /* 12294564 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12294567 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1229456d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294570 je 0x12294586 */
  if (C.zf) goto L_12294586;
  /* 12294572 mov edx, dword ptr [0x122bea84] */
  EDX = (r32((uint32_t)(0x122bea84)));
  /* 12294578 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1229457b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229457d jne 0x12294586 */
  if (!C.zf) goto L_12294586;
  /* 1229457f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12294586:;
  /* 12294586 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229458a ja 0x12294597 */
  if ((!C.cf&&!C.zf)) goto L_12294597;
  /* 1229458c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229458f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294592 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294595 jbe 0x122945c3 */
  if ((C.cf||C.zf)) goto L_122945c3;
L_12294597:;
  /* 12294597 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229459a push ecx */
  push32((uint32_t)(ECX));
  /* 1229459b push 0x122bb7c0 */
  push32((uint32_t)(0x122bb7c0u));
  /* 122945a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122945a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122945a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122945a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 122945a8 call 0x12293470 */
  push32(0x122945adu); f_12293470();
  /* 122945ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122945b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122945b3 jne 0x122945b6 */
  if (!C.zf) goto L_122945b6;
  /* 122945b5 int3  */
  x86_unimpl("int3 @ 0x122945b5");
L_122945b6:;
  /* 122945b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122945b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122945ba jne 0x12294597 */
  if (!C.zf) goto L_12294597;
  /* 122945bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122945be jmp 0x1229478c */
  goto L_1229478c;
L_122945c3:;
  /* 122945c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122945c6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122945cb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122945ce je 0x12294610 */
  if (C.zf) goto L_12294610;
  /* 122945d0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122945d4 je 0x12294610 */
  if (C.zf) goto L_12294610;
  /* 122945d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122945d9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 122945df cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122945e2 je 0x12294610 */
  if (C.zf) goto L_12294610;
  /* 122945e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122945e8 je 0x12294610 */
  if (C.zf) goto L_12294610;
L_122945ea:;
  /* 122945ea push 0x122bb78c */
  push32((uint32_t)(0x122bb78cu));
  /* 122945ef push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 122945f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122945f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122945f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122945fa push 1 */
  push32((uint32_t)(0x1u));
  /* 122945fc call 0x12293470 */
  push32(0x12294601u); f_12293470();
  /* 12294601 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294604 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294607 jne 0x1229460a */
  if (!C.zf) goto L_1229460a;
  /* 12294609 int3  */
  x86_unimpl("int3 @ 0x12294609");
L_1229460a:;
  /* 1229460a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229460c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229460e jne 0x122945ea */
  if (!C.zf) goto L_122945ea;
L_12294610:;
  /* 12294610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294613 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294616 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12294619 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229461c push ecx */
  push32((uint32_t)(ECX));
  /* 1229461d call 0x12298200 */
  push32(0x12294622u); f_12298200();
  /* 12294622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294625 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12294628 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229462c jne 0x12294635 */
  if (!C.zf) goto L_12294635;
  /* 1229462e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12294630 jmp 0x1229478c */
  goto L_1229478c;
L_12294635:;
  /* 12294635 mov edx, dword ptr [0x122bea88] */
  EDX = (r32((uint32_t)(0x122bea88)));
  /* 1229463b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229463e mov dword ptr [0x122bea88], edx */
  w32((uint32_t)(0x122bea88), (EDX));
  /* 12294644 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294648 je 0x12294693 */
  if (C.zf) goto L_12294693;
  /* 1229464a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229464d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12294653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294656 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1229465d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294660 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12294667 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229466a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12294671 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294677 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1229467a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229467d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12294684 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294687 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1229468e jmp 0x12294733 */
  goto L_12294733;
L_12294693:;
  /* 12294693 mov edx, dword ptr [0x122c0648] */
  EDX = (r32((uint32_t)(0x122c0648)));
  /* 12294699 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229469c mov dword ptr [0x122c0648], edx */
  w32((uint32_t)(0x122c0648), (EDX));
  /* 122946a2 mov eax, dword ptr [0x122c0650] */
  EAX = (r32((uint32_t)(0x122c0650)));
  /* 122946a7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122946aa mov dword ptr [0x122c0650], eax */
  w32((uint32_t)(0x122c0650), (EAX));
  /* 122946af mov ecx, dword ptr [0x122c0650] */
  ECX = (r32((uint32_t)(0x122c0650)));
  /* 122946b5 cmp ecx, dword ptr [0x122c0654] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122c0654))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122946bb jbe 0x122946c9 */
  if ((C.cf||C.zf)) goto L_122946c9;
  /* 122946bd mov edx, dword ptr [0x122c0650] */
  EDX = (r32((uint32_t)(0x122c0650)));
  /* 122946c3 mov dword ptr [0x122c0654], edx */
  w32((uint32_t)(0x122c0654), (EDX));
L_122946c9:;
  /* 122946c9 cmp dword ptr [0x122c064c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c064c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122946d0 je 0x122946df */
  if (C.zf) goto L_122946df;
  /* 122946d2 mov eax, dword ptr [0x122c064c] */
  EAX = (r32((uint32_t)(0x122c064c)));
  /* 122946d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122946da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 122946dd jmp 0x122946e8 */
  goto L_122946e8;
L_122946df:;
  /* 122946df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122946e2 mov dword ptr [0x122c0644], edx */
  w32((uint32_t)(0x122c0644), (EDX));
L_122946e8:;
  /* 122946e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122946eb mov ecx, dword ptr [0x122c064c] */
  ECX = (r32((uint32_t)(0x122c064c)));
  /* 122946f1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 122946f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122946f6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 122946fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294700 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12294703 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12294706 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294709 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229470c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1229470f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294712 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294715 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12294718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229471b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229471e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12294721 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294724 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12294727 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1229472a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229472d mov dword ptr [0x122c064c], ecx */
  w32((uint32_t)(0x122c064c), (ECX));
L_12294733:;
  /* 12294733 push 4 */
  push32((uint32_t)(0x4u));
  /* 12294735 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12294737 mov dl, byte ptr [0x122bea90] */
  DL = (r8((uint32_t)(0x122bea90)));
  /* 1229473d push edx */
  push32((uint32_t)(EDX));
  /* 1229473e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294741 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294744 push eax */
  push32((uint32_t)(EAX));
  /* 12294745 call 0x12298120 */
  push32(0x1229474au); f_12298120();
  /* 1229474a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229474d push 4 */
  push32((uint32_t)(0x4u));
  /* 1229474f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12294751 mov cl, byte ptr [0x122bea90] */
  CL = (r8((uint32_t)(0x122bea90)));
  /* 12294757 push ecx */
  push32((uint32_t)(ECX));
  /* 12294758 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229475b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229475e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12294762 push ecx */
  push32((uint32_t)(ECX));
  /* 12294763 call 0x12298120 */
  push32(0x12294768u); f_12298120();
  /* 12294768 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229476b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229476e push edx */
  push32((uint32_t)(EDX));
  /* 1229476f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12294771 mov al, byte ptr [0x122bea92] */
  AL = (r8((uint32_t)(0x122bea92)));
  /* 12294776 push eax */
  push32((uint32_t)(EAX));
  /* 12294777 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229477a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229477d push ecx */
  push32((uint32_t)(ECX));
  /* 1229477e call 0x12298120 */
  push32(0x12294783u); f_12298120();
  /* 12294783 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294786 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294789 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1229478c:;
  /* 1229478c pop edi */
  EDI = (pop32());
  /* 1229478d pop esi */
  ESI = (pop32());
  /* 1229478e pop ebx */
  EBX = (pop32());
  /* 1229478f mov esp, ebp */
  ESP = (EBP);
  /* 12294791 pop ebp */
  EBP = (pop32());
  /* 12294792 ret  */
  ESPCHK(0x12294480u, _esp0);
  ESP += 4; return;
}

/* FUN_100047a0 @ 0x122947a0 (27 bytes, 13 insns) */
void f_122947a0(void) {
  FTRACE(0x122947a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122947a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122947a1 mov ebp, esp */
  EBP = (ESP);
  /* 122947a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122947a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122947a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 122947a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122947ac push eax */
  push32((uint32_t)(EAX));
  /* 122947ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122947b0 push ecx */
  push32((uint32_t)(ECX));
  /* 122947b1 call 0x122947c0 */
  push32(0x122947b6u); f_122947c0();
  /* 122947b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122947b9 pop ebp */
  EBP = (pop32());
  /* 122947ba ret  */
  ESPCHK(0x122947a0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x122947c0 (96 bytes, 37 insns) */
void f_122947c0(void) {
  FTRACE(0x122947c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122947c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122947c1 mov ebp, esp */
  EBP = (ESP);
  /* 122947c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122947c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122947c9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122947cd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 122947d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122947d3 push ecx */
  push32((uint32_t)(ECX));
  /* 122947d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122947d7 push edx */
  push32((uint32_t)(EDX));
  /* 122947d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122947db push eax */
  push32((uint32_t)(EAX));
  /* 122947dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122947df push ecx */
  push32((uint32_t)(ECX));
  /* 122947e0 call 0x122943b0 */
  push32(0x122947e5u); f_122943b0();
  /* 122947e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122947e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122947eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122947ef je 0x12294819 */
  if (C.zf) goto L_12294819;
  /* 122947f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122947f4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122947f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122947fa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122947fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12294800:;
  /* 12294800 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294803 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294806 jae 0x12294819 */
  if (!C.cf) goto L_12294819;
  /* 12294808 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229480b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1229480e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294811 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294814 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12294817 jmp 0x12294800 */
  goto L_12294800;
L_12294819:;
  /* 12294819 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229481c mov esp, ebp */
  ESP = (EBP);
  /* 1229481e pop ebp */
  EBP = (pop32());
  /* 1229481f ret  */
  ESPCHK(0x122947c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004820 @ 0x12294820 (27 bytes, 13 insns) */
void f_12294820(void) {
  FTRACE(0x12294820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12294820 push ebp */
  push32((uint32_t)(EBP));
  /* 12294821 mov ebp, esp */
  EBP = (ESP);
  /* 12294823 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294825 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294827 push 1 */
  push32((uint32_t)(0x1u));
  /* 12294829 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229482c push eax */
  push32((uint32_t)(EAX));
  /* 1229482d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294830 push ecx */
  push32((uint32_t)(ECX));
  /* 12294831 call 0x12294840 */
  push32(0x12294836u); f_12294840();
  /* 12294836 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294839 pop ebp */
  EBP = (pop32());
  /* 1229483a ret  */
  ESPCHK(0x12294820u, _esp0);
  ESP += 4; return;
}

/* FUN_10004840 @ 0x12294840 (64 bytes, 27 insns) */
void f_12294840(void) {
  FTRACE(0x12294840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12294840 push ebp */
  push32((uint32_t)(EBP));
  /* 12294841 mov ebp, esp */
  EBP = (ESP);
  /* 12294843 push ecx */
  push32((uint32_t)(ECX));
  /* 12294844 push 9 */
  push32((uint32_t)(0x9u));
  /* 12294846 call 0x12297db0 */
  push32(0x1229484bu); f_12297db0();
  /* 1229484b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229484e push 1 */
  push32((uint32_t)(0x1u));
  /* 12294850 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12294853 push eax */
  push32((uint32_t)(EAX));
  /* 12294854 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12294857 push ecx */
  push32((uint32_t)(ECX));
  /* 12294858 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229485b push edx */
  push32((uint32_t)(EDX));
  /* 1229485c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229485f push eax */
  push32((uint32_t)(EAX));
  /* 12294860 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294863 push ecx */
  push32((uint32_t)(ECX));
  /* 12294864 call 0x12294880 */
  push32(0x12294869u); f_12294880();
  /* 12294869 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229486c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229486f push 9 */
  push32((uint32_t)(0x9u));
  /* 12294871 call 0x12297e50 */
  push32(0x12294876u); f_12297e50();
  /* 12294876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294879 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229487c mov esp, ebp */
  ESP = (EBP);
  /* 1229487e pop ebp */
  EBP = (pop32());
  /* 1229487f ret  */
  ESPCHK(0x12294840u, _esp0);
  ESP += 4; return;
}

/* FUN_10004880 @ 0x12294880 (1297 bytes, 431 insns) */
void f_12294880(void) {
  FTRACE(0x12294880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12294880 push ebp */
  push32((uint32_t)(EBP));
  /* 12294881 mov ebp, esp */
  EBP = (ESP);
  /* 12294883 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12294886 push ebx */
  push32((uint32_t)(EBX));
  /* 12294887 push esi */
  push32((uint32_t)(ESI));
  /* 12294888 push edi */
  push32((uint32_t)(EDI));
  /* 12294889 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12294890 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294894 jne 0x122948b3 */
  if (!C.zf) goto L_122948b3;
  /* 12294896 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12294899 push eax */
  push32((uint32_t)(EAX));
  /* 1229489a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229489d push ecx */
  push32((uint32_t)(ECX));
  /* 1229489e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122948a1 push edx */
  push32((uint32_t)(EDX));
  /* 122948a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122948a5 push eax */
  push32((uint32_t)(EAX));
  /* 122948a6 call 0x122943b0 */
  push32(0x122948abu); f_122943b0();
  /* 122948ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122948ae jmp 0x12294d8a */
  goto L_12294d8a;
L_122948b3:;
  /* 122948b3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122948b7 je 0x122948d6 */
  if (C.zf) goto L_122948d6;
  /* 122948b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122948bd jne 0x122948d6 */
  if (!C.zf) goto L_122948d6;
  /* 122948bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122948c2 push ecx */
  push32((uint32_t)(ECX));
  /* 122948c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122948c6 push edx */
  push32((uint32_t)(EDX));
  /* 122948c7 call 0x12294e40 */
  push32(0x122948ccu); f_12294e40();
  /* 122948cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122948cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122948d1 jmp 0x12294d8a */
  goto L_12294d8a;
L_122948d6:;
  /* 122948d6 mov eax, dword ptr [0x122bea84] */
  EAX = (r32((uint32_t)(0x122bea84)));
  /* 122948db and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 122948de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122948e0 je 0x12294912 */
  if (C.zf) goto L_12294912;
L_122948e2:;
  /* 122948e2 call 0x12295550 */
  push32(0x122948e7u); f_12295550();
  /* 122948e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122948e9 jne 0x1229490c */
  if (!C.zf) goto L_1229490c;
  /* 122948eb push 0x122bb850 */
  push32((uint32_t)(0x122bb850u));
  /* 122948f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122948f2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 122948f7 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 122948fc push 2 */
  push32((uint32_t)(0x2u));
  /* 122948fe call 0x12293470 */
  push32(0x12294903u); f_12293470();
  /* 12294903 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294906 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294909 jne 0x1229490c */
  if (!C.zf) goto L_1229490c;
  /* 1229490b int3  */
  x86_unimpl("int3 @ 0x1229490b");
L_1229490c:;
  /* 1229490c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229490e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12294910 jne 0x122948e2 */
  if (!C.zf) goto L_122948e2;
L_12294912:;
  /* 12294912 mov edx, dword ptr [0x122bea88] */
  EDX = (r32((uint32_t)(0x122bea88)));
  /* 12294918 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1229491b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229491e cmp eax, dword ptr [0x122bea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122bea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294924 jne 0x12294927 */
  if (!C.zf) goto L_12294927;
  /* 12294926 int3  */
  x86_unimpl("int3 @ 0x12294926");
L_12294927:;
  /* 12294927 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1229492a push ecx */
  push32((uint32_t)(ECX));
  /* 1229492b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229492e push edx */
  push32((uint32_t)(EDX));
  /* 1229492f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12294932 push eax */
  push32((uint32_t)(EAX));
  /* 12294933 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12294936 push ecx */
  push32((uint32_t)(ECX));
  /* 12294937 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229493a push edx */
  push32((uint32_t)(EDX));
  /* 1229493b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229493e push eax */
  push32((uint32_t)(EAX));
  /* 1229493f push 2 */
  push32((uint32_t)(0x2u));
  /* 12294941 call dword ptr [0x122bec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x122bec90))), 0x12294947u);
  /* 12294947 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229494a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229494c jne 0x122949ac */
  if (!C.zf) goto L_122949ac;
  /* 1229494e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294952 je 0x1229497f */
  if (C.zf) goto L_1229497f;
L_12294954:;
  /* 12294954 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12294957 push ecx */
  push32((uint32_t)(ECX));
  /* 12294958 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229495b push edx */
  push32((uint32_t)(EDX));
  /* 1229495c push 0x122bb9cc */
  push32((uint32_t)(0x122bb9ccu));
  /* 12294961 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294963 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294965 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294967 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294969 call 0x12293470 */
  push32(0x1229496eu); f_12293470();
  /* 1229496e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294971 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294974 jne 0x12294977 */
  if (!C.zf) goto L_12294977;
  /* 12294976 int3  */
  x86_unimpl("int3 @ 0x12294976");
L_12294977:;
  /* 12294977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12294979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229497b jne 0x12294954 */
  if (!C.zf) goto L_12294954;
  /* 1229497d jmp 0x122949a5 */
  goto L_122949a5;
L_1229497f:;
  /* 1229497f push 0x122bb9a8 */
  push32((uint32_t)(0x122bb9a8u));
  /* 12294984 push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 12294989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229498b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229498d push 0 */
  push32((uint32_t)(0x0u));
  /* 1229498f push 0 */
  push32((uint32_t)(0x0u));
  /* 12294991 call 0x12293470 */
  push32(0x12294996u); f_12293470();
  /* 12294996 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294999 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229499c jne 0x1229499f */
  if (!C.zf) goto L_1229499f;
  /* 1229499e int3  */
  x86_unimpl("int3 @ 0x1229499e");
L_1229499f:;
  /* 1229499f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122949a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122949a3 jne 0x1229497f */
  if (!C.zf) goto L_1229497f;
L_122949a5:;
  /* 122949a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122949a7 jmp 0x12294d8a */
  goto L_12294d8a;
L_122949ac:;
  /* 122949ac cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122949b0 jbe 0x122949de */
  if ((C.cf||C.zf)) goto L_122949de;
L_122949b2:;
  /* 122949b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122949b5 push edx */
  push32((uint32_t)(EDX));
  /* 122949b6 push 0x122bb978 */
  push32((uint32_t)(0x122bb978u));
  /* 122949bb push 0 */
  push32((uint32_t)(0x0u));
  /* 122949bd push 0 */
  push32((uint32_t)(0x0u));
  /* 122949bf push 0 */
  push32((uint32_t)(0x0u));
  /* 122949c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 122949c3 call 0x12293470 */
  push32(0x122949c8u); f_12293470();
  /* 122949c8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122949cb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122949ce jne 0x122949d1 */
  if (!C.zf) goto L_122949d1;
  /* 122949d0 int3  */
  x86_unimpl("int3 @ 0x122949d0");
L_122949d1:;
  /* 122949d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122949d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122949d5 jne 0x122949b2 */
  if (!C.zf) goto L_122949b2;
  /* 122949d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122949d9 jmp 0x12294d8a */
  goto L_12294d8a;
L_122949de:;
  /* 122949de cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122949e2 je 0x12294a26 */
  if (C.zf) goto L_12294a26;
  /* 122949e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122949e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 122949ed cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122949f0 je 0x12294a26 */
  if (C.zf) goto L_12294a26;
  /* 122949f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122949f5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122949fb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122949fe je 0x12294a26 */
  if (C.zf) goto L_12294a26;
L_12294a00:;
  /* 12294a00 push 0x122bb78c */
  push32((uint32_t)(0x122bb78cu));
  /* 12294a05 push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 12294a0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12294a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12294a0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12294a10 push 1 */
  push32((uint32_t)(0x1u));
  /* 12294a12 call 0x12293470 */
  push32(0x12294a17u); f_12293470();
  /* 12294a17 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294a1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294a1d jne 0x12294a20 */
  if (!C.zf) goto L_12294a20;
  /* 12294a1f int3  */
  x86_unimpl("int3 @ 0x12294a1f");
L_12294a20:;
  /* 12294a20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12294a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12294a24 jne 0x12294a00 */
  if (!C.zf) goto L_12294a00;
L_12294a26:;
  /* 12294a26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294a29 push ecx */
  push32((uint32_t)(ECX));
  /* 12294a2a call 0x122959b0 */
  push32(0x12294a2fu); f_122959b0();
  /* 12294a2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294a32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12294a34 jne 0x12294a57 */
  if (!C.zf) goto L_12294a57;
  /* 12294a36 push 0x122bb954 */
  push32((uint32_t)(0x122bb954u));
  /* 12294a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12294a3d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12294a42 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 12294a47 push 2 */
  push32((uint32_t)(0x2u));
  /* 12294a49 call 0x12293470 */
  push32(0x12294a4eu); f_12293470();
  /* 12294a4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294a51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294a54 jne 0x12294a57 */
  if (!C.zf) goto L_12294a57;
  /* 12294a56 int3  */
  x86_unimpl("int3 @ 0x12294a56");
L_12294a57:;
  /* 12294a57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12294a59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12294a5b jne 0x12294a26 */
  if (!C.zf) goto L_12294a26;
  /* 12294a5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294a60 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12294a63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12294a66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12294a69 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294a6d jne 0x12294a76 */
  if (!C.zf) goto L_12294a76;
  /* 12294a6f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12294a76:;
  /* 12294a76 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294a7a je 0x12294aba */
  if (C.zf) goto L_12294aba;
L_12294a7c:;
  /* 12294a7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12294a7f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294a86 jne 0x12294a91 */
  if (!C.zf) goto L_12294a91;
  /* 12294a88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12294a8b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294a8f je 0x12294ab2 */
  if (C.zf) goto L_12294ab2;
L_12294a91:;
  /* 12294a91 push 0x122bb90c */
  push32((uint32_t)(0x122bb90cu));
  /* 12294a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294a98 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12294a9d push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 12294aa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12294aa4 call 0x12293470 */
  push32(0x12294aa9u); f_12293470();
  /* 12294aa9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294aac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294aaf jne 0x12294ab2 */
  if (!C.zf) goto L_12294ab2;
  /* 12294ab1 int3  */
  x86_unimpl("int3 @ 0x12294ab1");
L_12294ab2:;
  /* 12294ab2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12294ab4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12294ab6 jne 0x12294a7c */
  if (!C.zf) goto L_12294a7c;
  /* 12294ab8 jmp 0x12294b1e */
  goto L_12294b1e;
L_12294aba:;
  /* 12294aba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12294abd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12294ac0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12294ac5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294ac8 jne 0x12294adf */
  if (!C.zf) goto L_12294adf;
  /* 12294aca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12294acd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12294ad3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294ad6 jne 0x12294adf */
  if (!C.zf) goto L_12294adf;
  /* 12294ad8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12294adf:;
  /* 12294adf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12294ae2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12294ae5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12294aea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12294aed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12294af3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294af5 je 0x12294b18 */
  if (C.zf) goto L_12294b18;
  /* 12294af7 push 0x122bb8d0 */
  push32((uint32_t)(0x122bb8d0u));
  /* 12294afc push 0 */
  push32((uint32_t)(0x0u));
  /* 12294afe push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12294b03 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 12294b08 push 2 */
  push32((uint32_t)(0x2u));
  /* 12294b0a call 0x12293470 */
  push32(0x12294b0fu); f_12293470();
  /* 12294b0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294b12 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294b15 jne 0x12294b18 */
  if (!C.zf) goto L_12294b18;
  /* 12294b17 int3  */
  x86_unimpl("int3 @ 0x12294b17");
L_12294b18:;
  /* 12294b18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12294b1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12294b1c jne 0x12294adf */
  if (!C.zf) goto L_12294adf;
L_12294b1e:;
  /* 12294b1e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294b22 je 0x12294b49 */
  if (C.zf) goto L_12294b49;
  /* 12294b24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12294b27 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294b2a push eax */
  push32((uint32_t)(EAX));
  /* 12294b2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12294b2e push ecx */
  push32((uint32_t)(ECX));
  /* 12294b2f call 0x12298330 */
  push32(0x12294b34u); f_12298330();
  /* 12294b34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294b37 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12294b3a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294b3e jne 0x12294b47 */
  if (!C.zf) goto L_12294b47;
  /* 12294b40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12294b42 jmp 0x12294d8a */
  goto L_12294d8a;
L_12294b47:;
  /* 12294b47 jmp 0x12294b6c */
  goto L_12294b6c;
L_12294b49:;
  /* 12294b49 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12294b4c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294b4f push edx */
  push32((uint32_t)(EDX));
  /* 12294b50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12294b53 push eax */
  push32((uint32_t)(EAX));
  /* 12294b54 call 0x12298280 */
  push32(0x12294b59u); f_12298280();
  /* 12294b59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294b5c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12294b5f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294b63 jne 0x12294b6c */
  if (!C.zf) goto L_12294b6c;
  /* 12294b65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12294b67 jmp 0x12294d8a */
  goto L_12294d8a;
L_12294b6c:;
  /* 12294b6c mov ecx, dword ptr [0x122bea88] */
  ECX = (r32((uint32_t)(0x122bea88)));
  /* 12294b72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294b75 mov dword ptr [0x122bea88], ecx */
  w32((uint32_t)(0x122bea88), (ECX));
  /* 12294b7b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294b7f jne 0x12294bd7 */
  if (!C.zf) goto L_12294bd7;
  /* 12294b81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294b84 mov eax, dword ptr [0x122c0648] */
  EAX = (r32((uint32_t)(0x122c0648)));
  /* 12294b89 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12294b8c mov dword ptr [0x122c0648], eax */
  w32((uint32_t)(0x122c0648), (EAX));
  /* 12294b91 mov ecx, dword ptr [0x122c0648] */
  ECX = (r32((uint32_t)(0x122c0648)));
  /* 12294b97 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294b9a mov dword ptr [0x122c0648], ecx */
  w32((uint32_t)(0x122c0648), (ECX));
  /* 12294ba0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294ba3 mov eax, dword ptr [0x122c0650] */
  EAX = (r32((uint32_t)(0x122c0650)));
  /* 12294ba8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12294bab mov dword ptr [0x122c0650], eax */
  w32((uint32_t)(0x122c0650), (EAX));
  /* 12294bb0 mov ecx, dword ptr [0x122c0650] */
  ECX = (r32((uint32_t)(0x122c0650)));
  /* 12294bb6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294bb9 mov dword ptr [0x122c0650], ecx */
  w32((uint32_t)(0x122c0650), (ECX));
  /* 12294bbf mov edx, dword ptr [0x122c0650] */
  EDX = (r32((uint32_t)(0x122c0650)));
  /* 12294bc5 cmp edx, dword ptr [0x122c0654] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x122c0654))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294bcb jbe 0x12294bd7 */
  if ((C.cf||C.zf)) goto L_12294bd7;
  /* 12294bcd mov eax, dword ptr [0x122c0650] */
  EAX = (r32((uint32_t)(0x122c0650)));
  /* 12294bd2 mov dword ptr [0x122c0654], eax */
  w32((uint32_t)(0x122c0654), (EAX));
L_12294bd7:;
  /* 12294bd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294bda add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294bdd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12294be0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294be3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12294be6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294be9 jbe 0x12294c0f */
  if ((C.cf||C.zf)) goto L_12294c0f;
  /* 12294beb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294bee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12294bf1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12294bf4 push edx */
  push32((uint32_t)(EDX));
  /* 12294bf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12294bf7 mov al, byte ptr [0x122bea92] */
  AL = (r8((uint32_t)(0x122bea92)));
  /* 12294bfc push eax */
  push32((uint32_t)(EAX));
  /* 12294bfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294c00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294c03 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294c06 push edx */
  push32((uint32_t)(EDX));
  /* 12294c07 call 0x12298120 */
  push32(0x12294c0cu); f_12298120();
  /* 12294c0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12294c0f:;
  /* 12294c0f push 4 */
  push32((uint32_t)(0x4u));
  /* 12294c11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12294c13 mov al, byte ptr [0x122bea90] */
  AL = (r8((uint32_t)(0x122bea90)));
  /* 12294c18 push eax */
  push32((uint32_t)(EAX));
  /* 12294c19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294c1c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294c1f push ecx */
  push32((uint32_t)(ECX));
  /* 12294c20 call 0x12298120 */
  push32(0x12294c25u); f_12298120();
  /* 12294c25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294c28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294c2c jne 0x12294c49 */
  if (!C.zf) goto L_12294c49;
  /* 12294c2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294c31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12294c34 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12294c37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294c3a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12294c3d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12294c40 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294c43 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12294c46 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12294c49:;
  /* 12294c49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294c4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12294c4f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12294c52:;
  /* 12294c52 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294c56 jne 0x12294c87 */
  if (!C.zf) goto L_12294c87;
  /* 12294c58 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294c5c jne 0x12294c66 */
  if (!C.zf) goto L_12294c66;
  /* 12294c5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294c61 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294c64 je 0x12294c87 */
  if (C.zf) goto L_12294c87;
L_12294c66:;
  /* 12294c66 push 0x122bb89c */
  push32((uint32_t)(0x122bb89cu));
  /* 12294c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12294c6d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12294c72 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 12294c77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12294c79 call 0x12293470 */
  push32(0x12294c7eu); f_12293470();
  /* 12294c7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294c81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294c84 jne 0x12294c87 */
  if (!C.zf) goto L_12294c87;
  /* 12294c86 int3  */
  x86_unimpl("int3 @ 0x12294c86");
L_12294c87:;
  /* 12294c87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12294c89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12294c8b jne 0x12294c52 */
  if (!C.zf) goto L_12294c52;
  /* 12294c8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294c90 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294c93 je 0x12294c9b */
  if (C.zf) goto L_12294c9b;
  /* 12294c95 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294c99 je 0x12294ca3 */
  if (C.zf) goto L_12294ca3;
L_12294c9b:;
  /* 12294c9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294c9e jmp 0x12294d8a */
  goto L_12294d8a;
L_12294ca3:;
  /* 12294ca3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294ca6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294ca9 je 0x12294cbb */
  if (C.zf) goto L_12294cbb;
  /* 12294cab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294cae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12294cb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294cb3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12294cb6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12294cb9 jmp 0x12294cf7 */
  goto L_12294cf7;
L_12294cbb:;
  /* 12294cbb mov eax, dword ptr [0x122c0644] */
  EAX = (r32((uint32_t)(0x122c0644)));
  /* 12294cc0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294cc3 je 0x12294ce6 */
  if (C.zf) goto L_12294ce6;
  /* 12294cc5 push 0x122bb880 */
  push32((uint32_t)(0x122bb880u));
  /* 12294cca push 0 */
  push32((uint32_t)(0x0u));
  /* 12294ccc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12294cd1 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 12294cd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12294cd8 call 0x12293470 */
  push32(0x12294cddu); f_12293470();
  /* 12294cdd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294ce0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294ce3 jne 0x12294ce6 */
  if (!C.zf) goto L_12294ce6;
  /* 12294ce5 int3  */
  x86_unimpl("int3 @ 0x12294ce5");
L_12294ce6:;
  /* 12294ce6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12294ce8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12294cea jne 0x12294cbb */
  if (!C.zf) goto L_12294cbb;
  /* 12294cec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294cef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12294cf2 mov dword ptr [0x122c0644], eax */
  w32((uint32_t)(0x122c0644), (EAX));
L_12294cf7:;
  /* 12294cf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294cfa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294cfe je 0x12294d0f */
  if (C.zf) goto L_12294d0f;
  /* 12294d00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294d03 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12294d06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294d09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12294d0b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12294d0d jmp 0x12294d4a */
  goto L_12294d4a;
L_12294d0f:;
  /* 12294d0f mov eax, dword ptr [0x122c064c] */
  EAX = (r32((uint32_t)(0x122c064c)));
  /* 12294d14 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294d17 je 0x12294d3a */
  if (C.zf) goto L_12294d3a;
  /* 12294d19 push 0x122bb864 */
  push32((uint32_t)(0x122bb864u));
  /* 12294d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12294d20 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12294d25 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 12294d2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12294d2c call 0x12293470 */
  push32(0x12294d31u); f_12293470();
  /* 12294d31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294d34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294d37 jne 0x12294d3a */
  if (!C.zf) goto L_12294d3a;
  /* 12294d39 int3  */
  x86_unimpl("int3 @ 0x12294d39");
L_12294d3a:;
  /* 12294d3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12294d3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12294d3e jne 0x12294d0f */
  if (!C.zf) goto L_12294d0f;
  /* 12294d40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294d43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12294d45 mov dword ptr [0x122c064c], eax */
  w32((uint32_t)(0x122c064c), (EAX));
L_12294d4a:;
  /* 12294d4a cmp dword ptr [0x122c064c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c064c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294d51 je 0x12294d61 */
  if (C.zf) goto L_12294d61;
  /* 12294d53 mov ecx, dword ptr [0x122c064c] */
  ECX = (r32((uint32_t)(0x122c064c)));
  /* 12294d59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294d5c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12294d5f jmp 0x12294d69 */
  goto L_12294d69;
L_12294d61:;
  /* 12294d61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294d64 mov dword ptr [0x122c0644], eax */
  w32((uint32_t)(0x122c0644), (EAX));
L_12294d69:;
  /* 12294d69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294d6c mov edx, dword ptr [0x122c064c] */
  EDX = (r32((uint32_t)(0x122c064c)));
  /* 12294d72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12294d74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294d77 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12294d7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12294d81 mov dword ptr [0x122c064c], ecx */
  w32((uint32_t)(0x122c064c), (ECX));
  /* 12294d87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12294d8a:;
  /* 12294d8a pop edi */
  EDI = (pop32());
  /* 12294d8b pop esi */
  ESI = (pop32());
  /* 12294d8c pop ebx */
  EBX = (pop32());
  /* 12294d8d mov esp, ebp */
  ESP = (EBP);
  /* 12294d8f pop ebp */
  EBP = (pop32());
  /* 12294d90 ret  */
  ESPCHK(0x12294880u, _esp0);
  ESP += 4; return;
}

/* FUN_10004da0 @ 0x12294da0 (27 bytes, 13 insns) */
void f_12294da0(void) {
  FTRACE(0x12294da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12294da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12294da1 mov ebp, esp */
  EBP = (ESP);
  /* 12294da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294da7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12294da9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12294dac push eax */
  push32((uint32_t)(EAX));
  /* 12294dad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294db0 push ecx */
  push32((uint32_t)(ECX));
  /* 12294db1 call 0x12294dc0 */
  push32(0x12294db6u); f_12294dc0();
  /* 12294db6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294db9 pop ebp */
  EBP = (pop32());
  /* 12294dba ret  */
  ESPCHK(0x12294da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dc0 @ 0x12294dc0 (64 bytes, 27 insns) */
void f_12294dc0(void) {
  FTRACE(0x12294dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12294dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12294dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12294dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12294dc4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12294dc6 call 0x12297db0 */
  push32(0x12294dcbu); f_12297db0();
  /* 12294dcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294dce push 0 */
  push32((uint32_t)(0x0u));
  /* 12294dd0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12294dd3 push eax */
  push32((uint32_t)(EAX));
  /* 12294dd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12294dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12294dd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12294ddb push edx */
  push32((uint32_t)(EDX));
  /* 12294ddc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12294ddf push eax */
  push32((uint32_t)(EAX));
  /* 12294de0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294de3 push ecx */
  push32((uint32_t)(ECX));
  /* 12294de4 call 0x12294880 */
  push32(0x12294de9u); f_12294880();
  /* 12294de9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294dec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12294def push 9 */
  push32((uint32_t)(0x9u));
  /* 12294df1 call 0x12297e50 */
  push32(0x12294df6u); f_12297e50();
  /* 12294df6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294df9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294dfc mov esp, ebp */
  ESP = (EBP);
  /* 12294dfe pop ebp */
  EBP = (pop32());
  /* 12294dff ret  */
  ESPCHK(0x12294dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e00 @ 0x12294e00 (19 bytes, 9 insns) */
void f_12294e00(void) {
  FTRACE(0x12294e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12294e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12294e01 mov ebp, esp */
  EBP = (ESP);
  /* 12294e03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12294e05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294e08 push eax */
  push32((uint32_t)(EAX));
  /* 12294e09 call 0x12294e40 */
  push32(0x12294e0eu); f_12294e40();
  /* 12294e0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294e11 pop ebp */
  EBP = (pop32());
  /* 12294e12 ret  */
  ESPCHK(0x12294e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e20 @ 0x12294e20 (19 bytes, 9 insns) */
void f_12294e20(void) {
  FTRACE(0x12294e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12294e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12294e21 mov ebp, esp */
  EBP = (ESP);
  /* 12294e23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12294e25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294e28 push eax */
  push32((uint32_t)(EAX));
  /* 12294e29 call 0x12294e70 */
  push32(0x12294e2eu); f_12294e70();
  /* 12294e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294e31 pop ebp */
  EBP = (pop32());
  /* 12294e32 ret  */
  ESPCHK(0x12294e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e40 @ 0x12294e40 (41 bytes, 16 insns) */
void f_12294e40(void) {
  FTRACE(0x12294e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12294e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12294e41 mov ebp, esp */
  EBP = (ESP);
  /* 12294e43 push 9 */
  push32((uint32_t)(0x9u));
  /* 12294e45 call 0x12297db0 */
  push32(0x12294e4au); f_12297db0();
  /* 12294e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294e4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12294e50 push eax */
  push32((uint32_t)(EAX));
  /* 12294e51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294e54 push ecx */
  push32((uint32_t)(ECX));
  /* 12294e55 call 0x12294e70 */
  push32(0x12294e5au); f_12294e70();
  /* 12294e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294e5d push 9 */
  push32((uint32_t)(0x9u));
  /* 12294e5f call 0x12297e50 */
  push32(0x12294e64u); f_12297e50();
  /* 12294e64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294e67 pop ebp */
  EBP = (pop32());
  /* 12294e68 ret  */
  ESPCHK(0x12294e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e70 @ 0x12294e70 (1004 bytes, 342 insns) */
void f_12294e70(void) {
  FTRACE(0x12294e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12294e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12294e71 mov ebp, esp */
  EBP = (ESP);
  /* 12294e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12294e74 push ebx */
  push32((uint32_t)(EBX));
  /* 12294e75 push esi */
  push32((uint32_t)(ESI));
  /* 12294e76 push edi */
  push32((uint32_t)(EDI));
  /* 12294e77 mov eax, dword ptr [0x122bea84] */
  EAX = (r32((uint32_t)(0x122bea84)));
  /* 12294e7c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12294e7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12294e81 je 0x12294eb3 */
  if (C.zf) goto L_12294eb3;
L_12294e83:;
  /* 12294e83 call 0x12295550 */
  push32(0x12294e88u); f_12295550();
  /* 12294e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12294e8a jne 0x12294ead */
  if (!C.zf) goto L_12294ead;
  /* 12294e8c push 0x122bb850 */
  push32((uint32_t)(0x122bb850u));
  /* 12294e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294e93 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12294e98 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 12294e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12294e9f call 0x12293470 */
  push32(0x12294ea4u); f_12293470();
  /* 12294ea4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294ea7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294eaa jne 0x12294ead */
  if (!C.zf) goto L_12294ead;
  /* 12294eac int3  */
  x86_unimpl("int3 @ 0x12294eac");
L_12294ead:;
  /* 12294ead xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12294eaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12294eb1 jne 0x12294e83 */
  if (!C.zf) goto L_12294e83;
L_12294eb3:;
  /* 12294eb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294eb7 jne 0x12294ebe */
  if (!C.zf) goto L_12294ebe;
  /* 12294eb9 jmp 0x12295255 */
  goto L_12295255;
L_12294ebe:;
  /* 12294ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 12294ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294ec4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12294ec7 push edx */
  push32((uint32_t)(EDX));
  /* 12294ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294eca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294ecd push eax */
  push32((uint32_t)(EAX));
  /* 12294ece push 3 */
  push32((uint32_t)(0x3u));
  /* 12294ed0 call dword ptr [0x122bec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x122bec90))), 0x12294ed6u);
  /* 12294ed6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12294edb jne 0x12294f08 */
  if (!C.zf) goto L_12294f08;
L_12294edd:;
  /* 12294edd push 0x122bbb14 */
  push32((uint32_t)(0x122bbb14u));
  /* 12294ee2 push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 12294ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294ee9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 12294eed push 0 */
  push32((uint32_t)(0x0u));
  /* 12294eef call 0x12293470 */
  push32(0x12294ef4u); f_12293470();
  /* 12294ef4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294ef7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294efa jne 0x12294efd */
  if (!C.zf) goto L_12294efd;
  /* 12294efc int3  */
  x86_unimpl("int3 @ 0x12294efc");
L_12294efd:;
  /* 12294efd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12294eff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12294f01 jne 0x12294edd */
  if (!C.zf) goto L_12294edd;
  /* 12294f03 jmp 0x12295255 */
  goto L_12295255;
L_12294f08:;
  /* 12294f08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294f0b push edx */
  push32((uint32_t)(EDX));
  /* 12294f0c call 0x122959b0 */
  push32(0x12294f11u); f_122959b0();
  /* 12294f11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294f14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12294f16 jne 0x12294f39 */
  if (!C.zf) goto L_12294f39;
  /* 12294f18 push 0x122bb954 */
  push32((uint32_t)(0x122bb954u));
  /* 12294f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12294f1f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12294f24 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 12294f29 push 2 */
  push32((uint32_t)(0x2u));
  /* 12294f2b call 0x12293470 */
  push32(0x12294f30u); f_12293470();
  /* 12294f30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294f33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294f36 jne 0x12294f39 */
  if (!C.zf) goto L_12294f39;
  /* 12294f38 int3  */
  x86_unimpl("int3 @ 0x12294f38");
L_12294f39:;
  /* 12294f39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12294f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12294f3d jne 0x12294f08 */
  if (!C.zf) goto L_12294f08;
  /* 12294f3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12294f42 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12294f45 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12294f48:;
  /* 12294f48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294f4b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12294f4e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12294f53 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294f56 je 0x12294f9b */
  if (C.zf) goto L_12294f9b;
  /* 12294f58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294f5b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294f5f je 0x12294f9b */
  if (C.zf) goto L_12294f9b;
  /* 12294f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294f64 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12294f67 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12294f6c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294f6f je 0x12294f9b */
  if (C.zf) goto L_12294f9b;
  /* 12294f71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294f74 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294f78 je 0x12294f9b */
  if (C.zf) goto L_12294f9b;
  /* 12294f7a push 0x122bbaec */
  push32((uint32_t)(0x122bbaecu));
  /* 12294f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12294f81 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12294f86 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 12294f8b push 2 */
  push32((uint32_t)(0x2u));
  /* 12294f8d call 0x12293470 */
  push32(0x12294f92u); f_12293470();
  /* 12294f92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294f95 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12294f98 jne 0x12294f9b */
  if (!C.zf) goto L_12294f9b;
  /* 12294f9a int3  */
  x86_unimpl("int3 @ 0x12294f9a");
L_12294f9b:;
  /* 12294f9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12294f9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12294f9f jne 0x12294f48 */
  if (!C.zf) goto L_12294f48;
  /* 12294fa1 mov eax, dword ptr [0x122bea84] */
  EAX = (r32((uint32_t)(0x122bea84)));
  /* 12294fa6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12294fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12294fab jne 0x12295076 */
  if (!C.zf) goto L_12295076;
  /* 12294fb1 push 4 */
  push32((uint32_t)(0x4u));
  /* 12294fb3 mov cl, byte ptr [0x122bea90] */
  CL = (r8((uint32_t)(0x122bea90)));
  /* 12294fb9 push ecx */
  push32((uint32_t)(ECX));
  /* 12294fba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294fbd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294fc0 push edx */
  push32((uint32_t)(EDX));
  /* 12294fc1 call 0x122954c0 */
  push32(0x12294fc6u); f_122954c0();
  /* 12294fc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12294fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12294fcb jne 0x12295010 */
  if (!C.zf) goto L_12295010;
L_12294fcd:;
  /* 12294fcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294fd0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12294fd3 push eax */
  push32((uint32_t)(EAX));
  /* 12294fd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294fd7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12294fda push edx */
  push32((uint32_t)(EDX));
  /* 12294fdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12294fde mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12294fe1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12294fe7 mov edx, dword ptr [ecx*4 + 0x122bea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122bea94)));
  /* 12294fee push edx */
  push32((uint32_t)(EDX));
  /* 12294fef push 0x122bbac0 */
  push32((uint32_t)(0x122bbac0u));
  /* 12294ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12294ffa push 1 */
  push32((uint32_t)(0x1u));
  /* 12294ffc call 0x12293470 */
  push32(0x12295001u); f_12293470();
  /* 12295001 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295004 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295007 jne 0x1229500a */
  if (!C.zf) goto L_1229500a;
  /* 12295009 int3  */
  x86_unimpl("int3 @ 0x12295009");
L_1229500a:;
  /* 1229500a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229500c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229500e jne 0x12294fcd */
  if (!C.zf) goto L_12294fcd;
L_12295010:;
  /* 12295010 push 4 */
  push32((uint32_t)(0x4u));
  /* 12295012 mov cl, byte ptr [0x122bea90] */
  CL = (r8((uint32_t)(0x122bea90)));
  /* 12295018 push ecx */
  push32((uint32_t)(ECX));
  /* 12295019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229501c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1229501f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295022 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12295026 push edx */
  push32((uint32_t)(EDX));
  /* 12295027 call 0x122954c0 */
  push32(0x1229502cu); f_122954c0();
  /* 1229502c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229502f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295031 jne 0x12295076 */
  if (!C.zf) goto L_12295076;
L_12295033:;
  /* 12295033 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295036 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12295039 push eax */
  push32((uint32_t)(EAX));
  /* 1229503a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229503d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12295040 push edx */
  push32((uint32_t)(EDX));
  /* 12295041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295044 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12295047 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1229504d mov edx, dword ptr [ecx*4 + 0x122bea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122bea94)));
  /* 12295054 push edx */
  push32((uint32_t)(EDX));
  /* 12295055 push 0x122bba94 */
  push32((uint32_t)(0x122bba94u));
  /* 1229505a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229505c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229505e push 0 */
  push32((uint32_t)(0x0u));
  /* 12295060 push 1 */
  push32((uint32_t)(0x1u));
  /* 12295062 call 0x12293470 */
  push32(0x12295067u); f_12293470();
  /* 12295067 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229506a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229506d jne 0x12295070 */
  if (!C.zf) goto L_12295070;
  /* 1229506f int3  */
  x86_unimpl("int3 @ 0x1229506f");
L_12295070:;
  /* 12295070 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12295072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295074 jne 0x12295033 */
  if (!C.zf) goto L_12295033;
L_12295076:;
  /* 12295076 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295079 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229507d jne 0x122950eb */
  if (!C.zf) goto L_122950eb;
L_1229507f:;
  /* 1229507f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295082 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295089 jne 0x12295094 */
  if (!C.zf) goto L_12295094;
  /* 1229508b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229508e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295092 je 0x122950b5 */
  if (C.zf) goto L_122950b5;
L_12295094:;
  /* 12295094 push 0x122bba54 */
  push32((uint32_t)(0x122bba54u));
  /* 12295099 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229509b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 122950a0 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 122950a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122950a7 call 0x12293470 */
  push32(0x122950acu); f_12293470();
  /* 122950ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122950af cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122950b2 jne 0x122950b5 */
  if (!C.zf) goto L_122950b5;
  /* 122950b4 int3  */
  x86_unimpl("int3 @ 0x122950b4");
L_122950b5:;
  /* 122950b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122950b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122950b9 jne 0x1229507f */
  if (!C.zf) goto L_1229507f;
  /* 122950bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122950be mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 122950c1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122950c4 push eax */
  push32((uint32_t)(EAX));
  /* 122950c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122950c7 mov cl, byte ptr [0x122bea91] */
  CL = (r8((uint32_t)(0x122bea91)));
  /* 122950cd push ecx */
  push32((uint32_t)(ECX));
  /* 122950ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122950d1 push edx */
  push32((uint32_t)(EDX));
  /* 122950d2 call 0x12298120 */
  push32(0x122950d7u); f_12298120();
  /* 122950d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122950da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122950dd push eax */
  push32((uint32_t)(EAX));
  /* 122950de call 0x12298520 */
  push32(0x122950e3u); f_12298520();
  /* 122950e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122950e6 jmp 0x12295255 */
  goto L_12295255;
L_122950eb:;
  /* 122950eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122950ee cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122950f2 jne 0x12295101 */
  if (!C.zf) goto L_12295101;
  /* 122950f4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122950f8 jne 0x12295101 */
  if (!C.zf) goto L_12295101;
  /* 122950fa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12295101:;
  /* 12295101 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295104 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12295107 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229510a je 0x1229512d */
  if (C.zf) goto L_1229512d;
  /* 1229510c push 0x122bba34 */
  push32((uint32_t)(0x122bba34u));
  /* 12295111 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295113 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12295118 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 1229511d push 2 */
  push32((uint32_t)(0x2u));
  /* 1229511f call 0x12293470 */
  push32(0x12295124u); f_12293470();
  /* 12295124 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295127 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229512a jne 0x1229512d */
  if (!C.zf) goto L_1229512d;
  /* 1229512c int3  */
  x86_unimpl("int3 @ 0x1229512c");
L_1229512d:;
  /* 1229512d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229512f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12295131 jne 0x12295101 */
  if (!C.zf) goto L_12295101;
  /* 12295133 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295136 mov eax, dword ptr [0x122c0650] */
  EAX = (r32((uint32_t)(0x122c0650)));
  /* 1229513b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229513e mov dword ptr [0x122c0650], eax */
  w32((uint32_t)(0x122c0650), (EAX));
  /* 12295143 mov ecx, dword ptr [0x122bea84] */
  ECX = (r32((uint32_t)(0x122bea84)));
  /* 12295149 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1229514c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229514e jne 0x1229522c */
  if (!C.zf) goto L_1229522c;
  /* 12295154 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295157 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229515a je 0x1229516c */
  if (C.zf) goto L_1229516c;
  /* 1229515c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229515f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12295161 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295164 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12295167 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1229516a jmp 0x122951aa */
  goto L_122951aa;
L_1229516c:;
  /* 1229516c mov ecx, dword ptr [0x122c0644] */
  ECX = (r32((uint32_t)(0x122c0644)));
  /* 12295172 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295175 je 0x12295198 */
  if (C.zf) goto L_12295198;
  /* 12295177 push 0x122bba1c */
  push32((uint32_t)(0x122bba1cu));
  /* 1229517c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229517e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12295183 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 12295188 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229518a call 0x12293470 */
  push32(0x1229518fu); f_12293470();
  /* 1229518f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295192 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295195 jne 0x12295198 */
  if (!C.zf) goto L_12295198;
  /* 12295197 int3  */
  x86_unimpl("int3 @ 0x12295197");
L_12295198:;
  /* 12295198 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229519a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229519c jne 0x1229516c */
  if (!C.zf) goto L_1229516c;
  /* 1229519e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122951a1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122951a4 mov dword ptr [0x122c0644], ecx */
  w32((uint32_t)(0x122c0644), (ECX));
L_122951aa:;
  /* 122951aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122951ad cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122951b1 je 0x122951c2 */
  if (C.zf) goto L_122951c2;
  /* 122951b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122951b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122951b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122951bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122951be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122951c0 jmp 0x122951ff */
  goto L_122951ff;
L_122951c2:;
  /* 122951c2 mov ecx, dword ptr [0x122c064c] */
  ECX = (r32((uint32_t)(0x122c064c)));
  /* 122951c8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122951cb je 0x122951ee */
  if (C.zf) goto L_122951ee;
  /* 122951cd push 0x122bba04 */
  push32((uint32_t)(0x122bba04u));
  /* 122951d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122951d4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 122951d9 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 122951de push 2 */
  push32((uint32_t)(0x2u));
  /* 122951e0 call 0x12293470 */
  push32(0x122951e5u); f_12293470();
  /* 122951e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122951e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122951eb jne 0x122951ee */
  if (!C.zf) goto L_122951ee;
  /* 122951ed int3  */
  x86_unimpl("int3 @ 0x122951ed");
L_122951ee:;
  /* 122951ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122951f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122951f2 jne 0x122951c2 */
  if (!C.zf) goto L_122951c2;
  /* 122951f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122951f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122951f9 mov dword ptr [0x122c064c], ecx */
  w32((uint32_t)(0x122c064c), (ECX));
L_122951ff:;
  /* 122951ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295202 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12295205 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12295208 push eax */
  push32((uint32_t)(EAX));
  /* 12295209 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229520b mov cl, byte ptr [0x122bea91] */
  CL = (r8((uint32_t)(0x122bea91)));
  /* 12295211 push ecx */
  push32((uint32_t)(ECX));
  /* 12295212 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295215 push edx */
  push32((uint32_t)(EDX));
  /* 12295216 call 0x12298120 */
  push32(0x1229521bu); f_12298120();
  /* 1229521b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229521e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295221 push eax */
  push32((uint32_t)(EAX));
  /* 12295222 call 0x12298520 */
  push32(0x12295227u); f_12298520();
  /* 12295227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229522a jmp 0x12295255 */
  goto L_12295255;
L_1229522c:;
  /* 1229522c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229522f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12295236 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295239 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1229523c push eax */
  push32((uint32_t)(EAX));
  /* 1229523d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229523f mov cl, byte ptr [0x122bea91] */
  CL = (r8((uint32_t)(0x122bea91)));
  /* 12295245 push ecx */
  push32((uint32_t)(ECX));
  /* 12295246 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295249 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229524c push edx */
  push32((uint32_t)(EDX));
  /* 1229524d call 0x12298120 */
  push32(0x12295252u); f_12298120();
  /* 12295252 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12295255:;
  /* 12295255 pop edi */
  EDI = (pop32());
  /* 12295256 pop esi */
  ESI = (pop32());
  /* 12295257 pop ebx */
  EBX = (pop32());
  /* 12295258 mov esp, ebp */
  ESP = (EBP);
  /* 1229525a pop ebp */
  EBP = (pop32());
  /* 1229525b ret  */
  ESPCHK(0x12294e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005260 @ 0x12295260 (19 bytes, 9 insns) */
void f_12295260(void) {
  FTRACE(0x12295260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12295260 push ebp */
  push32((uint32_t)(EBP));
  /* 12295261 mov ebp, esp */
  EBP = (ESP);
  /* 12295263 push 1 */
  push32((uint32_t)(0x1u));
  /* 12295265 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295268 push eax */
  push32((uint32_t)(EAX));
  /* 12295269 call 0x12295280 */
  push32(0x1229526eu); f_12295280();
  /* 1229526e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295271 pop ebp */
  EBP = (pop32());
  /* 12295272 ret  */
  ESPCHK(0x12295260u, _esp0);
  ESP += 4; return;
}

/* FUN_10005280 @ 0x12295280 (342 bytes, 119 insns) */
void f_12295280(void) {
  FTRACE(0x12295280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12295280 push ebp */
  push32((uint32_t)(EBP));
  /* 12295281 mov ebp, esp */
  EBP = (ESP);
  /* 12295283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12295286 push ebx */
  push32((uint32_t)(EBX));
  /* 12295287 push esi */
  push32((uint32_t)(ESI));
  /* 12295288 push edi */
  push32((uint32_t)(EDI));
  /* 12295289 mov eax, dword ptr [0x122bea84] */
  EAX = (r32((uint32_t)(0x122bea84)));
  /* 1229528e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12295291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295293 je 0x122952c5 */
  if (C.zf) goto L_122952c5;
L_12295295:;
  /* 12295295 call 0x12295550 */
  push32(0x1229529au); f_12295550();
  /* 1229529a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229529c jne 0x122952bf */
  if (!C.zf) goto L_122952bf;
  /* 1229529e push 0x122bb850 */
  push32((uint32_t)(0x122bb850u));
  /* 122952a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122952a5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 122952aa push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 122952af push 2 */
  push32((uint32_t)(0x2u));
  /* 122952b1 call 0x12293470 */
  push32(0x122952b6u); f_12293470();
  /* 122952b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122952b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122952bc jne 0x122952bf */
  if (!C.zf) goto L_122952bf;
  /* 122952be int3  */
  x86_unimpl("int3 @ 0x122952be");
L_122952bf:;
  /* 122952bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122952c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122952c3 jne 0x12295295 */
  if (!C.zf) goto L_12295295;
L_122952c5:;
  /* 122952c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 122952c7 call 0x12297db0 */
  push32(0x122952ccu); f_12297db0();
  /* 122952cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122952cf:;
  /* 122952cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122952d2 push edx */
  push32((uint32_t)(EDX));
  /* 122952d3 call 0x122959b0 */
  push32(0x122952d8u); f_122959b0();
  /* 122952d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122952db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122952dd jne 0x12295300 */
  if (!C.zf) goto L_12295300;
  /* 122952df push 0x122bb954 */
  push32((uint32_t)(0x122bb954u));
  /* 122952e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122952e6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 122952eb push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 122952f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 122952f2 call 0x12293470 */
  push32(0x122952f7u); f_12293470();
  /* 122952f7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122952fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122952fd jne 0x12295300 */
  if (!C.zf) goto L_12295300;
  /* 122952ff int3  */
  x86_unimpl("int3 @ 0x122952ff");
L_12295300:;
  /* 12295300 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12295302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295304 jne 0x122952cf */
  if (!C.zf) goto L_122952cf;
  /* 12295306 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295309 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229530c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1229530f:;
  /* 1229530f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295312 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12295315 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229531a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229531d je 0x12295362 */
  if (C.zf) goto L_12295362;
  /* 1229531f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295322 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295326 je 0x12295362 */
  if (C.zf) goto L_12295362;
  /* 12295328 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229532b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1229532e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12295333 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295336 je 0x12295362 */
  if (C.zf) goto L_12295362;
  /* 12295338 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229533b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229533f je 0x12295362 */
  if (C.zf) goto L_12295362;
  /* 12295341 push 0x122bbaec */
  push32((uint32_t)(0x122bbaecu));
  /* 12295346 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295348 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1229534d push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 12295352 push 2 */
  push32((uint32_t)(0x2u));
  /* 12295354 call 0x12293470 */
  push32(0x12295359u); f_12293470();
  /* 12295359 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229535c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229535f jne 0x12295362 */
  if (!C.zf) goto L_12295362;
  /* 12295361 int3  */
  x86_unimpl("int3 @ 0x12295361");
L_12295362:;
  /* 12295362 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12295364 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12295366 jne 0x1229530f */
  if (!C.zf) goto L_1229530f;
  /* 12295368 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229536b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229536f jne 0x1229537e */
  if (!C.zf) goto L_1229537e;
  /* 12295371 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295375 jne 0x1229537e */
  if (!C.zf) goto L_1229537e;
  /* 12295377 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1229537e:;
  /* 1229537e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295381 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295385 je 0x122953b9 */
  if (C.zf) goto L_122953b9;
L_12295387:;
  /* 12295387 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229538a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1229538d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295390 je 0x122953b3 */
  if (C.zf) goto L_122953b3;
  /* 12295392 push 0x122bba34 */
  push32((uint32_t)(0x122bba34u));
  /* 12295397 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295399 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1229539e push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 122953a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 122953a5 call 0x12293470 */
  push32(0x122953aau); f_12293470();
  /* 122953aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122953ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122953b0 jne 0x122953b3 */
  if (!C.zf) goto L_122953b3;
  /* 122953b2 int3  */
  x86_unimpl("int3 @ 0x122953b2");
L_122953b3:;
  /* 122953b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122953b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122953b7 jne 0x12295387 */
  if (!C.zf) goto L_12295387;
L_122953b9:;
  /* 122953b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122953bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 122953bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122953c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 122953c4 call 0x12297e50 */
  push32(0x122953c9u); f_12297e50();
  /* 122953c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122953cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122953cf pop edi */
  EDI = (pop32());
  /* 122953d0 pop esi */
  ESI = (pop32());
  /* 122953d1 pop ebx */
  EBX = (pop32());
  /* 122953d2 mov esp, ebp */
  ESP = (EBP);
  /* 122953d4 pop ebp */
  EBP = (pop32());
  /* 122953d5 ret  */
  ESPCHK(0x12295280u, _esp0);
  ESP += 4; return;
}

/* FUN_100053e0 @ 0x122953e0 (28 bytes, 11 insns) */
void f_122953e0(void) {
  FTRACE(0x122953e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122953e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122953e1 mov ebp, esp */
  EBP = (ESP);
  /* 122953e3 push ecx */
  push32((uint32_t)(ECX));
  /* 122953e4 mov eax, dword ptr [0x122bea8c] */
  EAX = (r32((uint32_t)(0x122bea8c)));
  /* 122953e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122953ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122953ef mov dword ptr [0x122bea8c], ecx */
  w32((uint32_t)(0x122bea8c), (ECX));
  /* 122953f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122953f8 mov esp, ebp */
  ESP = (EBP);
  /* 122953fa pop ebp */
  EBP = (pop32());
  /* 122953fb ret  */
  ESPCHK(0x122953e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005400 @ 0x12295400 (157 bytes, 59 insns) */
void f_12295400(void) {
  FTRACE(0x12295400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12295400 push ebp */
  push32((uint32_t)(EBP));
  /* 12295401 mov ebp, esp */
  EBP = (ESP);
  /* 12295403 push ecx */
  push32((uint32_t)(ECX));
  /* 12295404 push ebx */
  push32((uint32_t)(EBX));
  /* 12295405 push esi */
  push32((uint32_t)(ESI));
  /* 12295406 push edi */
  push32((uint32_t)(EDI));
  /* 12295407 push 9 */
  push32((uint32_t)(0x9u));
  /* 12295409 call 0x12297db0 */
  push32(0x1229540eu); f_12297db0();
  /* 1229540e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295411 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295414 push eax */
  push32((uint32_t)(EAX));
  /* 12295415 call 0x122959b0 */
  push32(0x1229541au); f_122959b0();
  /* 1229541a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229541d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229541f je 0x1229548c */
  if (C.zf) goto L_1229548c;
  /* 12295421 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295424 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12295427 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1229542a:;
  /* 1229542a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229542d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12295430 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12295435 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295438 je 0x1229547d */
  if (C.zf) goto L_1229547d;
  /* 1229543a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229543d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295441 je 0x1229547d */
  if (C.zf) goto L_1229547d;
  /* 12295443 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295446 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12295449 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229544e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295451 je 0x1229547d */
  if (C.zf) goto L_1229547d;
  /* 12295453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295456 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229545a je 0x1229547d */
  if (C.zf) goto L_1229547d;
  /* 1229545c push 0x122bbaec */
  push32((uint32_t)(0x122bbaecu));
  /* 12295461 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295463 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12295468 push 0x122bb844 */
  push32((uint32_t)(0x122bb844u));
  /* 1229546d push 2 */
  push32((uint32_t)(0x2u));
  /* 1229546f call 0x12293470 */
  push32(0x12295474u); f_12293470();
  /* 12295474 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295477 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229547a jne 0x1229547d */
  if (!C.zf) goto L_1229547d;
  /* 1229547c int3  */
  x86_unimpl("int3 @ 0x1229547c");
L_1229547d:;
  /* 1229547d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229547f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12295481 jne 0x1229542a */
  if (!C.zf) goto L_1229542a;
  /* 12295483 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295486 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12295489 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1229548c:;
  /* 1229548c push 9 */
  push32((uint32_t)(0x9u));
  /* 1229548e call 0x12297e50 */
  push32(0x12295493u); f_12297e50();
  /* 12295493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295496 pop edi */
  EDI = (pop32());
  /* 12295497 pop esi */
  ESI = (pop32());
  /* 12295498 pop ebx */
  EBX = (pop32());
  /* 12295499 mov esp, ebp */
  ESP = (EBP);
  /* 1229549b pop ebp */
  EBP = (pop32());
  /* 1229549c ret  */
  ESPCHK(0x12295400u, _esp0);
  ESP += 4; return;
}

/* FUN_100054a0 @ 0x122954a0 (28 bytes, 11 insns) */
void f_122954a0(void) {
  FTRACE(0x122954a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122954a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122954a1 mov ebp, esp */
  EBP = (ESP);
  /* 122954a3 push ecx */
  push32((uint32_t)(ECX));
  /* 122954a4 mov eax, dword ptr [0x122bec90] */
  EAX = (r32((uint32_t)(0x122bec90)));
  /* 122954a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122954ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122954af mov dword ptr [0x122bec90], ecx */
  w32((uint32_t)(0x122bec90), (ECX));
  /* 122954b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122954b8 mov esp, ebp */
  ESP = (EBP);
  /* 122954ba pop ebp */
  EBP = (pop32());
  /* 122954bb ret  */
  ESPCHK(0x122954a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054c0 @ 0x122954c0 (136 bytes, 55 insns) */
void f_122954c0(void) {
  FTRACE(0x122954c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122954c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122954c1 mov ebp, esp */
  EBP = (ESP);
  /* 122954c3 push ecx */
  push32((uint32_t)(ECX));
  /* 122954c4 push ebx */
  push32((uint32_t)(EBX));
  /* 122954c5 push esi */
  push32((uint32_t)(ESI));
  /* 122954c6 push edi */
  push32((uint32_t)(EDI));
  /* 122954c7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_122954ce:;
  /* 122954ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122954d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122954d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122954d7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 122954da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122954dc je 0x1229553e */
  if (C.zf) goto L_1229553e;
  /* 122954de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122954e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122954e3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122954e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122954e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 122954ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122954f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122954f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122954f7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122954f9 je 0x1229553c */
  if (C.zf) goto L_1229553c;
L_122954fb:;
  /* 122954fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122954fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12295503 push eax */
  push32((uint32_t)(EAX));
  /* 12295504 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295507 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12295509 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1229550c push edx */
  push32((uint32_t)(EDX));
  /* 1229550d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295510 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12295513 push eax */
  push32((uint32_t)(EAX));
  /* 12295514 push 0x122bbb30 */
  push32((uint32_t)(0x122bbb30u));
  /* 12295519 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229551b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229551d push 0 */
  push32((uint32_t)(0x0u));
  /* 1229551f push 0 */
  push32((uint32_t)(0x0u));
  /* 12295521 call 0x12293470 */
  push32(0x12295526u); f_12293470();
  /* 12295526 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295529 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229552c jne 0x1229552f */
  if (!C.zf) goto L_1229552f;
  /* 1229552e int3  */
  x86_unimpl("int3 @ 0x1229552e");
L_1229552f:;
  /* 1229552f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12295531 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12295533 jne 0x122954fb */
  if (!C.zf) goto L_122954fb;
  /* 12295535 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1229553c:;
  /* 1229553c jmp 0x122954ce */
  goto L_122954ce;
L_1229553e:;
  /* 1229553e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295541 pop edi */
  EDI = (pop32());
  /* 12295542 pop esi */
  ESI = (pop32());
  /* 12295543 pop ebx */
  EBX = (pop32());
  /* 12295544 mov esp, ebp */
  ESP = (EBP);
  /* 12295546 pop ebp */
  EBP = (pop32());
  /* 12295547 ret  */
  ESPCHK(0x122954c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005550 @ 0x12295550 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12295550(void) {
  FTRACE(0x12295550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12295550 push ebp */
  push32((uint32_t)(EBP));
  /* 12295551 mov ebp, esp */
  EBP = (ESP);
  /* 12295553 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12295556 push ebx */
  push32((uint32_t)(EBX));
  /* 12295557 push esi */
  push32((uint32_t)(ESI));
  /* 12295558 push edi */
  push32((uint32_t)(EDI));
  /* 12295559 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12295560 mov eax, dword ptr [0x122bea84] */
  EAX = (r32((uint32_t)(0x122bea84)));
  /* 12295565 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12295568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229556a jne 0x12295576 */
  if (!C.zf) goto L_12295576;
  /* 1229556c mov eax, 1 */
  EAX = (0x1u);
  /* 12295571 jmp 0x122958a8 */
  goto L_122958a8;
L_12295576:;
  /* 12295576 push 9 */
  push32((uint32_t)(0x9u));
  /* 12295578 call 0x12297db0 */
  push32(0x1229557du); f_12297db0();
  /* 1229557d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295580 call 0x12298590 */
  push32(0x12295585u); f_12298590();
  /* 12295585 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12295588 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229558c je 0x12295699 */
  if (C.zf) goto L_12295699;
  /* 12295592 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295596 je 0x12295699 */
  if (C.zf) goto L_12295699;
  /* 1229559c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229559f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 122955a2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122955a5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122955a8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 122955ab cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122955af ja 0x12295662 */
  if ((!C.cf&&!C.zf)) goto L_12295662;
  /* 122955b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122955b8 jmp dword ptr [eax*4 + 0x122958af] */
  switch (EAX) {
    case 0: goto L_1229563a;
    case 1: goto L_12295612;
    case 2: goto L_122955ea;
    case 3: goto L_122955bf;
    default: x86_unimpl("switch@0x122955b8 out of table"); return;
  }
L_122955bf:;
  /* 122955bf push 0x122bbc84 */
  push32((uint32_t)(0x122bbc84u));
  /* 122955c4 push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 122955c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122955cb push 0 */
  push32((uint32_t)(0x0u));
  /* 122955cd push 0 */
  push32((uint32_t)(0x0u));
  /* 122955cf push 0 */
  push32((uint32_t)(0x0u));
  /* 122955d1 call 0x12293470 */
  push32(0x122955d6u); f_12293470();
  /* 122955d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122955d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122955dc jne 0x122955df */
  if (!C.zf) goto L_122955df;
  /* 122955de int3  */
  x86_unimpl("int3 @ 0x122955de");
L_122955df:;
  /* 122955df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122955e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122955e3 jne 0x122955bf */
  if (!C.zf) goto L_122955bf;
  /* 122955e5 jmp 0x12295688 */
  goto L_12295688;
L_122955ea:;
  /* 122955ea push 0x122bbc60 */
  push32((uint32_t)(0x122bbc60u));
  /* 122955ef push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 122955f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122955f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122955f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122955fa push 0 */
  push32((uint32_t)(0x0u));
  /* 122955fc call 0x12293470 */
  push32(0x12295601u); f_12293470();
  /* 12295601 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295604 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295607 jne 0x1229560a */
  if (!C.zf) goto L_1229560a;
  /* 12295609 int3  */
  x86_unimpl("int3 @ 0x12295609");
L_1229560a:;
  /* 1229560a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229560c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229560e jne 0x122955ea */
  if (!C.zf) goto L_122955ea;
  /* 12295610 jmp 0x12295688 */
  goto L_12295688;
L_12295612:;
  /* 12295612 push 0x122bbc3c */
  push32((uint32_t)(0x122bbc3cu));
  /* 12295617 push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 1229561c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229561e push 0 */
  push32((uint32_t)(0x0u));
  /* 12295620 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295622 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295624 call 0x12293470 */
  push32(0x12295629u); f_12293470();
  /* 12295629 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229562c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229562f jne 0x12295632 */
  if (!C.zf) goto L_12295632;
  /* 12295631 int3  */
  x86_unimpl("int3 @ 0x12295631");
L_12295632:;
  /* 12295632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12295634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295636 jne 0x12295612 */
  if (!C.zf) goto L_12295612;
  /* 12295638 jmp 0x12295688 */
  goto L_12295688;
L_1229563a:;
  /* 1229563a push 0x122bbc18 */
  push32((uint32_t)(0x122bbc18u));
  /* 1229563f push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 12295644 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295646 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295648 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229564a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229564c call 0x12293470 */
  push32(0x12295651u); f_12293470();
  /* 12295651 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295654 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295657 jne 0x1229565a */
  if (!C.zf) goto L_1229565a;
  /* 12295659 int3  */
  x86_unimpl("int3 @ 0x12295659");
L_1229565a:;
  /* 1229565a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229565c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229565e jne 0x1229563a */
  if (!C.zf) goto L_1229563a;
  /* 12295660 jmp 0x12295688 */
  goto L_12295688;
L_12295662:;
  /* 12295662 push 0x122bbbec */
  push32((uint32_t)(0x122bbbecu));
  /* 12295667 push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 1229566c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229566e push 0 */
  push32((uint32_t)(0x0u));
  /* 12295670 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295672 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295674 call 0x12293470 */
  push32(0x12295679u); f_12293470();
  /* 12295679 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229567c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229567f jne 0x12295682 */
  if (!C.zf) goto L_12295682;
  /* 12295681 int3  */
  x86_unimpl("int3 @ 0x12295681");
L_12295682:;
  /* 12295682 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12295684 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12295686 jne 0x12295662 */
  if (!C.zf) goto L_12295662;
L_12295688:;
  /* 12295688 push 9 */
  push32((uint32_t)(0x9u));
  /* 1229568a call 0x12297e50 */
  push32(0x1229568fu); f_12297e50();
  /* 1229568f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295692 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12295694 jmp 0x122958a8 */
  goto L_122958a8;
L_12295699:;
  /* 12295699 mov eax, dword ptr [0x122c064c] */
  EAX = (r32((uint32_t)(0x122c064c)));
  /* 1229569e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122956a1 jmp 0x122956ab */
  goto L_122956ab;
L_122956a3:;
  /* 122956a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122956a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122956a8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_122956ab:;
  /* 122956ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122956af je 0x1229589b */
  if (C.zf) goto L_1229589b;
  /* 122956b5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 122956bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122956bf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122956c2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 122956c8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122956cb je 0x122956f0 */
  if (C.zf) goto L_122956f0;
  /* 122956cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122956d0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122956d4 je 0x122956f0 */
  if (C.zf) goto L_122956f0;
  /* 122956d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122956d9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122956dc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 122956e2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122956e5 je 0x122956f0 */
  if (C.zf) goto L_122956f0;
  /* 122956e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122956ea cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122956ee jne 0x12295708 */
  if (!C.zf) goto L_12295708;
L_122956f0:;
  /* 122956f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122956f3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122956f6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 122956fc mov edx, dword ptr [ecx*4 + 0x122bea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122bea94)));
  /* 12295703 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12295706 jmp 0x1229570f */
  goto L_1229570f;
L_12295708:;
  /* 12295708 mov dword ptr [ebp - 0x14], 0x122bbbe4 */
  w32((uint32_t)(EBP + -0x14), (0x122bbbe4u));
L_1229570f:;
  /* 1229570f push 4 */
  push32((uint32_t)(0x4u));
  /* 12295711 mov al, byte ptr [0x122bea90] */
  AL = (r8((uint32_t)(0x122bea90)));
  /* 12295716 push eax */
  push32((uint32_t)(EAX));
  /* 12295717 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229571a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229571d push ecx */
  push32((uint32_t)(ECX));
  /* 1229571e call 0x122954c0 */
  push32(0x12295723u); f_122954c0();
  /* 12295723 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295728 jne 0x12295764 */
  if (!C.zf) goto L_12295764;
L_1229572a:;
  /* 1229572a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229572d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12295730 push edx */
  push32((uint32_t)(EDX));
  /* 12295731 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295734 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12295737 push ecx */
  push32((uint32_t)(ECX));
  /* 12295738 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229573b push edx */
  push32((uint32_t)(EDX));
  /* 1229573c push 0x122bbac0 */
  push32((uint32_t)(0x122bbac0u));
  /* 12295741 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295743 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295745 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295747 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295749 call 0x12293470 */
  push32(0x1229574eu); f_12293470();
  /* 1229574e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295751 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295754 jne 0x12295757 */
  if (!C.zf) goto L_12295757;
  /* 12295756 int3  */
  x86_unimpl("int3 @ 0x12295756");
L_12295757:;
  /* 12295757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12295759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229575b jne 0x1229572a */
  if (!C.zf) goto L_1229572a;
  /* 1229575d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12295764:;
  /* 12295764 push 4 */
  push32((uint32_t)(0x4u));
  /* 12295766 mov cl, byte ptr [0x122bea90] */
  CL = (r8((uint32_t)(0x122bea90)));
  /* 1229576c push ecx */
  push32((uint32_t)(ECX));
  /* 1229576d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295770 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12295773 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295776 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1229577a push edx */
  push32((uint32_t)(EDX));
  /* 1229577b call 0x122954c0 */
  push32(0x12295780u); f_122954c0();
  /* 12295780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295783 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295785 jne 0x122957c1 */
  if (!C.zf) goto L_122957c1;
L_12295787:;
  /* 12295787 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229578a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229578d push eax */
  push32((uint32_t)(EAX));
  /* 1229578e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295791 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12295794 push edx */
  push32((uint32_t)(EDX));
  /* 12295795 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12295798 push eax */
  push32((uint32_t)(EAX));
  /* 12295799 push 0x122bba94 */
  push32((uint32_t)(0x122bba94u));
  /* 1229579e push 0 */
  push32((uint32_t)(0x0u));
  /* 122957a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122957a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122957a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122957a6 call 0x12293470 */
  push32(0x122957abu); f_12293470();
  /* 122957ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122957ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122957b1 jne 0x122957b4 */
  if (!C.zf) goto L_122957b4;
  /* 122957b3 int3  */
  x86_unimpl("int3 @ 0x122957b3");
L_122957b4:;
  /* 122957b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122957b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122957b8 jne 0x12295787 */
  if (!C.zf) goto L_12295787;
  /* 122957ba mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_122957c1:;
  /* 122957c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122957c4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122957c8 jne 0x1229581a */
  if (!C.zf) goto L_1229581a;
  /* 122957ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122957cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122957d0 push ecx */
  push32((uint32_t)(ECX));
  /* 122957d1 mov dl, byte ptr [0x122bea91] */
  DL = (r8((uint32_t)(0x122bea91)));
  /* 122957d7 push edx */
  push32((uint32_t)(EDX));
  /* 122957d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122957db add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122957de push eax */
  push32((uint32_t)(EAX));
  /* 122957df call 0x122954c0 */
  push32(0x122957e4u); f_122954c0();
  /* 122957e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122957e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122957e9 jne 0x1229581a */
  if (!C.zf) goto L_1229581a;
L_122957eb:;
  /* 122957eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122957ee add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122957f1 push ecx */
  push32((uint32_t)(ECX));
  /* 122957f2 push 0x122bbbb8 */
  push32((uint32_t)(0x122bbbb8u));
  /* 122957f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122957f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122957fb push 0 */
  push32((uint32_t)(0x0u));
  /* 122957fd push 0 */
  push32((uint32_t)(0x0u));
  /* 122957ff call 0x12293470 */
  push32(0x12295804u); f_12293470();
  /* 12295804 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295807 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229580a jne 0x1229580d */
  if (!C.zf) goto L_1229580d;
  /* 1229580c int3  */
  x86_unimpl("int3 @ 0x1229580c");
L_1229580d:;
  /* 1229580d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229580f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12295811 jne 0x122957eb */
  if (!C.zf) goto L_122957eb;
  /* 12295813 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1229581a:;
  /* 1229581a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229581e jne 0x12295896 */
  if (!C.zf) goto L_12295896;
  /* 12295820 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295823 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295827 je 0x1229585c */
  if (C.zf) goto L_1229585c;
L_12295829:;
  /* 12295829 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229582c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1229582f push edx */
  push32((uint32_t)(EDX));
  /* 12295830 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295833 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12295836 push ecx */
  push32((uint32_t)(ECX));
  /* 12295837 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229583a push edx */
  push32((uint32_t)(EDX));
  /* 1229583b push 0x122bbb98 */
  push32((uint32_t)(0x122bbb98u));
  /* 12295840 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295842 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295844 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295846 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295848 call 0x12293470 */
  push32(0x1229584du); f_12293470();
  /* 1229584d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295850 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295853 jne 0x12295856 */
  if (!C.zf) goto L_12295856;
  /* 12295855 int3  */
  x86_unimpl("int3 @ 0x12295855");
L_12295856:;
  /* 12295856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12295858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229585a jne 0x12295829 */
  if (!C.zf) goto L_12295829;
L_1229585c:;
  /* 1229585c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229585f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12295862 push edx */
  push32((uint32_t)(EDX));
  /* 12295863 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295866 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12295869 push eax */
  push32((uint32_t)(EAX));
  /* 1229586a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229586d push ecx */
  push32((uint32_t)(ECX));
  /* 1229586e push 0x122bbb6c */
  push32((uint32_t)(0x122bbb6cu));
  /* 12295873 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295875 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295877 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295879 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229587b call 0x12293470 */
  push32(0x12295880u); f_12293470();
  /* 12295880 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295883 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295886 jne 0x12295889 */
  if (!C.zf) goto L_12295889;
  /* 12295888 int3  */
  x86_unimpl("int3 @ 0x12295888");
L_12295889:;
  /* 12295889 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229588b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229588d jne 0x1229585c */
  if (!C.zf) goto L_1229585c;
  /* 1229588f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12295896:;
  /* 12295896 jmp 0x122956a3 */
  goto L_122956a3;
L_1229589b:;
  /* 1229589b push 9 */
  push32((uint32_t)(0x9u));
  /* 1229589d call 0x12297e50 */
  push32(0x122958a2u); f_12297e50();
  /* 122958a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122958a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122958a8:;
  /* 122958a8 pop edi */
  EDI = (pop32());
  /* 122958a9 pop esi */
  ESI = (pop32());
  /* 122958aa pop ebx */
  EBX = (pop32());
  /* 122958ab mov esp, ebp */
  ESP = (EBP);
  /* 122958ad pop ebp */
  EBP = (pop32());
  /* 122958ae ret  */
  ESPCHK(0x12295550u, _esp0);
  ESP += 4; return;
}

/* FUN_100058c0 @ 0x122958c0 (34 bytes, 13 insns) */
void f_122958c0(void) {
  FTRACE(0x122958c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122958c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122958c1 mov ebp, esp */
  EBP = (ESP);
  /* 122958c3 push ecx */
  push32((uint32_t)(ECX));
  /* 122958c4 mov eax, dword ptr [0x122bea84] */
  EAX = (r32((uint32_t)(0x122bea84)));
  /* 122958c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122958cc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122958d0 je 0x122958db */
  if (C.zf) goto L_122958db;
  /* 122958d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122958d5 mov dword ptr [0x122bea84], ecx */
  w32((uint32_t)(0x122bea84), (ECX));
L_122958db:;
  /* 122958db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122958de mov esp, ebp */
  ESP = (EBP);
  /* 122958e0 pop ebp */
  EBP = (pop32());
  /* 122958e1 ret  */
  ESPCHK(0x122958c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058f0 @ 0x122958f0 (103 bytes, 38 insns) */
void f_122958f0(void) {
  FTRACE(0x122958f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122958f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122958f1 mov ebp, esp */
  EBP = (ESP);
  /* 122958f3 push ecx */
  push32((uint32_t)(ECX));
  /* 122958f4 mov eax, dword ptr [0x122bea84] */
  EAX = (r32((uint32_t)(0x122bea84)));
  /* 122958f9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 122958fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122958fe jne 0x12295902 */
  if (!C.zf) goto L_12295902;
  /* 12295900 jmp 0x12295953 */
  goto L_12295953;
L_12295902:;
  /* 12295902 push 9 */
  push32((uint32_t)(0x9u));
  /* 12295904 call 0x12297db0 */
  push32(0x12295909u); f_12297db0();
  /* 12295909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229590c mov ecx, dword ptr [0x122c064c] */
  ECX = (r32((uint32_t)(0x122c064c)));
  /* 12295912 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12295915 jmp 0x1229591f */
  goto L_1229591f;
L_12295917:;
  /* 12295917 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229591a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1229591c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1229591f:;
  /* 1229591f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295923 je 0x12295949 */
  if (C.zf) goto L_12295949;
  /* 12295925 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295928 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1229592b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12295931 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295934 jne 0x12295947 */
  if (!C.zf) goto L_12295947;
  /* 12295936 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12295939 push eax */
  push32((uint32_t)(EAX));
  /* 1229593a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229593d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12295940 push ecx */
  push32((uint32_t)(ECX));
  /* 12295941 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12295944u);
  /* 12295944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12295947:;
  /* 12295947 jmp 0x12295917 */
  goto L_12295917;
L_12295949:;
  /* 12295949 push 9 */
  push32((uint32_t)(0x9u));
  /* 1229594b call 0x12297e50 */
  push32(0x12295950u); f_12297e50();
  /* 12295950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12295953:;
  /* 12295953 mov esp, ebp */
  ESP = (EBP);
  /* 12295955 pop ebp */
  EBP = (pop32());
  /* 12295956 ret  */
  ESPCHK(0x122958f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12295960 (75 bytes, 28 insns) */
void f_12295960(void) {
  FTRACE(0x12295960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12295960 push ebp */
  push32((uint32_t)(EBP));
  /* 12295961 mov ebp, esp */
  EBP = (ESP);
  /* 12295963 push ecx */
  push32((uint32_t)(ECX));
  /* 12295964 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295968 je 0x1229599d */
  if (C.zf) goto L_1229599d;
  /* 1229596a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229596d push eax */
  push32((uint32_t)(EAX));
  /* 1229596e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295971 push ecx */
  push32((uint32_t)(ECX));
  /* 12295972 call dword ptr [0x122c3248] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3248))), 0x12295978u);
  /* 12295978 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229597a jne 0x1229599d */
  if (!C.zf) goto L_1229599d;
  /* 1229597c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295980 je 0x12295994 */
  if (C.zf) goto L_12295994;
  /* 12295982 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12295985 push edx */
  push32((uint32_t)(EDX));
  /* 12295986 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295989 push eax */
  push32((uint32_t)(EAX));
  /* 1229598a call dword ptr [0x122c3244] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3244))), 0x12295990u);
  /* 12295990 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295992 jne 0x1229599d */
  if (!C.zf) goto L_1229599d;
L_12295994:;
  /* 12295994 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1229599b jmp 0x122959a4 */
  goto L_122959a4;
L_1229599d:;
  /* 1229599d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122959a4:;
  /* 122959a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122959a7 mov esp, ebp */
  ESP = (EBP);
  /* 122959a9 pop ebp */
  EBP = (pop32());
  /* 122959aa ret  */
  ESPCHK(0x12295960u, _esp0);
  ESP += 4; return;
}

/* FUN_100059b0 @ 0x122959b0 (134 bytes, 50 insns) */
void f_122959b0(void) {
  FTRACE(0x122959b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122959b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122959b1 mov ebp, esp */
  EBP = (ESP);
  /* 122959b3 push ecx */
  push32((uint32_t)(ECX));
  /* 122959b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122959b8 jne 0x122959be */
  if (!C.zf) goto L_122959be;
  /* 122959ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122959bc jmp 0x12295a32 */
  goto L_12295a32;
L_122959be:;
  /* 122959be push 1 */
  push32((uint32_t)(0x1u));
  /* 122959c0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 122959c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122959c5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122959c8 push eax */
  push32((uint32_t)(EAX));
  /* 122959c9 call 0x12295960 */
  push32(0x122959ceu); f_12295960();
  /* 122959ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122959d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122959d3 jne 0x122959d9 */
  if (!C.zf) goto L_122959d9;
  /* 122959d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122959d7 jmp 0x12295a32 */
  goto L_12295a32;
L_122959d9:;
  /* 122959d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122959dc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122959df push ecx */
  push32((uint32_t)(ECX));
  /* 122959e0 call 0x122986b0 */
  push32(0x122959e5u); f_122986b0();
  /* 122959e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122959e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122959eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122959ef je 0x12295a06 */
  if (C.zf) goto L_12295a06;
  /* 122959f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122959f4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122959f7 push edx */
  push32((uint32_t)(EDX));
  /* 122959f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122959fb push eax */
  push32((uint32_t)(EAX));
  /* 122959fc call 0x12298710 */
  push32(0x12295a01u); f_12298710();
  /* 12295a01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295a04 jmp 0x12295a32 */
  goto L_12295a32;
L_12295a06:;
  /* 12295a06 mov ecx, dword ptr [0x122c0600] */
  ECX = (r32((uint32_t)(0x122c0600)));
  /* 12295a0c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12295a12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12295a14 je 0x12295a1d */
  if (C.zf) goto L_12295a1d;
  /* 12295a16 mov eax, 1 */
  EAX = (0x1u);
  /* 12295a1b jmp 0x12295a32 */
  goto L_12295a32;
L_12295a1d:;
  /* 12295a1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295a20 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12295a23 push edx */
  push32((uint32_t)(EDX));
  /* 12295a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295a26 mov eax, dword ptr [0x122c1fac] */
  EAX = (r32((uint32_t)(0x122c1fac)));
  /* 12295a2b push eax */
  push32((uint32_t)(EAX));
  /* 12295a2c call dword ptr [0x122c3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3300))), 0x12295a32u);
L_12295a32:;
  /* 12295a32 mov esp, ebp */
  ESP = (EBP);
  /* 12295a34 pop ebp */
  EBP = (pop32());
  /* 12295a35 ret  */
  ESPCHK(0x122959b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a40 @ 0x12295a40 (227 bytes, 80 insns) */
void f_12295a40(void) {
  FTRACE(0x12295a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12295a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12295a41 mov ebp, esp */
  EBP = (ESP);
  /* 12295a43 push ecx */
  push32((uint32_t)(ECX));
  /* 12295a44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295a47 push eax */
  push32((uint32_t)(EAX));
  /* 12295a48 call 0x122959b0 */
  push32(0x12295a4du); f_122959b0();
  /* 12295a4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295a50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295a52 jne 0x12295a5b */
  if (!C.zf) goto L_12295a5b;
  /* 12295a54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12295a56 jmp 0x12295b1f */
  goto L_12295b1f;
L_12295a5b:;
  /* 12295a5b push 9 */
  push32((uint32_t)(0x9u));
  /* 12295a5d call 0x12297db0 */
  push32(0x12295a62u); f_12297db0();
  /* 12295a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295a65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295a68 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12295a6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12295a6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295a71 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12295a74 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12295a79 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295a7c je 0x12295aa0 */
  if (C.zf) goto L_12295aa0;
  /* 12295a7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295a81 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295a85 je 0x12295aa0 */
  if (C.zf) goto L_12295aa0;
  /* 12295a87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295a8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12295a8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12295a92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295a95 je 0x12295aa0 */
  if (C.zf) goto L_12295aa0;
  /* 12295a97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295a9a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295a9e jne 0x12295b13 */
  if (!C.zf) goto L_12295b13;
L_12295aa0:;
  /* 12295aa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12295aa2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12295aa5 push edx */
  push32((uint32_t)(EDX));
  /* 12295aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295aa9 push eax */
  push32((uint32_t)(EAX));
  /* 12295aaa call 0x12295960 */
  push32(0x12295aafu); f_12295960();
  /* 12295aaf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295ab2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295ab4 je 0x12295b13 */
  if (C.zf) goto L_12295b13;
  /* 12295ab6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295ab9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12295abc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295abf jne 0x12295b13 */
  if (!C.zf) goto L_12295b13;
  /* 12295ac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295ac4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12295ac7 cmp ecx, dword ptr [0x122bea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122bea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295acd jg 0x12295b13 */
  if ((!C.zf&&C.sf==C.of)) goto L_12295b13;
  /* 12295acf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295ad3 je 0x12295ae0 */
  if (C.zf) goto L_12295ae0;
  /* 12295ad5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12295ad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295adb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12295ade mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12295ae0:;
  /* 12295ae0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295ae4 je 0x12295af1 */
  if (C.zf) goto L_12295af1;
  /* 12295ae6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12295ae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295aec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12295aef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12295af1:;
  /* 12295af1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295af5 je 0x12295b02 */
  if (C.zf) goto L_12295b02;
  /* 12295af7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12295afa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295afd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12295b00 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12295b02:;
  /* 12295b02 push 9 */
  push32((uint32_t)(0x9u));
  /* 12295b04 call 0x12297e50 */
  push32(0x12295b09u); f_12297e50();
  /* 12295b09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295b0c mov eax, 1 */
  EAX = (0x1u);
  /* 12295b11 jmp 0x12295b1f */
  goto L_12295b1f;
L_12295b13:;
  /* 12295b13 push 9 */
  push32((uint32_t)(0x9u));
  /* 12295b15 call 0x12297e50 */
  push32(0x12295b1au); f_12297e50();
  /* 12295b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295b1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12295b1f:;
  /* 12295b1f mov esp, ebp */
  ESP = (EBP);
  /* 12295b21 pop ebp */
  EBP = (pop32());
  /* 12295b22 ret  */
  ESPCHK(0x12295a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b30 @ 0x12295b30 (28 bytes, 11 insns) */
void f_12295b30(void) {
  FTRACE(0x12295b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12295b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12295b31 mov ebp, esp */
  EBP = (ESP);
  /* 12295b33 push ecx */
  push32((uint32_t)(ECX));
  /* 12295b34 mov eax, dword ptr [0x122c1fb8] */
  EAX = (r32((uint32_t)(0x122c1fb8)));
  /* 12295b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12295b3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295b3f mov dword ptr [0x122c1fb8], ecx */
  w32((uint32_t)(0x122c1fb8), (ECX));
  /* 12295b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295b48 mov esp, ebp */
  ESP = (EBP);
  /* 12295b4a pop ebp */
  EBP = (pop32());
  /* 12295b4b ret  */
  ESPCHK(0x12295b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b50 @ 0x12295b50 (362 bytes, 116 insns) */
void f_12295b50(void) {
  FTRACE(0x12295b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12295b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12295b51 mov ebp, esp */
  EBP = (ESP);
  /* 12295b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12295b56 push ebx */
  push32((uint32_t)(EBX));
  /* 12295b57 push esi */
  push32((uint32_t)(ESI));
  /* 12295b58 push edi */
  push32((uint32_t)(EDI));
  /* 12295b59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295b5d jne 0x12295b8a */
  if (!C.zf) goto L_12295b8a;
L_12295b5f:;
  /* 12295b5f push 0x122bbccc */
  push32((uint32_t)(0x122bbcccu));
  /* 12295b64 push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 12295b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12295b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12295b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12295b71 call 0x12293470 */
  push32(0x12295b76u); f_12293470();
  /* 12295b76 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295b79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295b7c jne 0x12295b7f */
  if (!C.zf) goto L_12295b7f;
  /* 12295b7e int3  */
  x86_unimpl("int3 @ 0x12295b7e");
L_12295b7f:;
  /* 12295b7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12295b81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295b83 jne 0x12295b5f */
  if (!C.zf) goto L_12295b5f;
  /* 12295b85 jmp 0x12295cb3 */
  goto L_12295cb3;
L_12295b8a:;
  /* 12295b8a push 9 */
  push32((uint32_t)(0x9u));
  /* 12295b8c call 0x12297db0 */
  push32(0x12295b91u); f_12297db0();
  /* 12295b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295b94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295b97 mov edx, dword ptr [0x122c064c] */
  EDX = (r32((uint32_t)(0x122c064c)));
  /* 12295b9d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12295b9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12295ba6 jmp 0x12295bb1 */
  goto L_12295bb1;
L_12295ba8:;
  /* 12295ba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295bab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12295bae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12295bb1:;
  /* 12295bb1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295bb5 jge 0x12295bd5 */
  if ((C.sf==C.of)) goto L_12295bd5;
  /* 12295bb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295bba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295bbd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12295bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295bc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295bcb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12295bd3 jmp 0x12295ba8 */
  goto L_12295ba8;
L_12295bd5:;
  /* 12295bd5 mov edx, dword ptr [0x122c064c] */
  EDX = (r32((uint32_t)(0x122c064c)));
  /* 12295bdb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12295bde jmp 0x12295be8 */
  goto L_12295be8;
L_12295be0:;
  /* 12295be0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295be3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12295be5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12295be8:;
  /* 12295be8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295bec je 0x12295c91 */
  if (C.zf) goto L_12295c91;
  /* 12295bf2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295bf5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12295bf8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12295bfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295bff jl 0x12295c67 */
  if ((C.sf!=C.of)) goto L_12295c67;
  /* 12295c01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295c04 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12295c07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12295c0d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295c10 jge 0x12295c67 */
  if ((C.sf==C.of)) goto L_12295c67;
  /* 12295c12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295c15 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12295c18 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12295c1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295c21 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12295c25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12295c28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295c2b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12295c2e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12295c34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295c37 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12295c3b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295c3e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12295c41 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12295c46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295c49 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12295c4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295c50 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12295c53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295c56 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12295c59 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12295c5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295c61 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12295c65 jmp 0x12295c8c */
  goto L_12295c8c;
L_12295c67:;
  /* 12295c67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295c6a push edx */
  push32((uint32_t)(EDX));
  /* 12295c6b push 0x122bbca8 */
  push32((uint32_t)(0x122bbca8u));
  /* 12295c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295c78 call 0x12293470 */
  push32(0x12295c7du); f_12293470();
  /* 12295c7d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295c80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295c83 jne 0x12295c86 */
  if (!C.zf) goto L_12295c86;
  /* 12295c85 int3  */
  x86_unimpl("int3 @ 0x12295c85");
L_12295c86:;
  /* 12295c86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12295c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295c8a jne 0x12295c67 */
  if (!C.zf) goto L_12295c67;
L_12295c8c:;
  /* 12295c8c jmp 0x12295be0 */
  goto L_12295be0;
L_12295c91:;
  /* 12295c91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295c94 mov edx, dword ptr [0x122c0654] */
  EDX = (r32((uint32_t)(0x122c0654)));
  /* 12295c9a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12295c9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295ca0 mov ecx, dword ptr [0x122c0648] */
  ECX = (r32((uint32_t)(0x122c0648)));
  /* 12295ca6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12295ca9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12295cab call 0x12297e50 */
  push32(0x12295cb0u); f_12297e50();
  /* 12295cb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12295cb3:;
  /* 12295cb3 pop edi */
  EDI = (pop32());
  /* 12295cb4 pop esi */
  ESI = (pop32());
  /* 12295cb5 pop ebx */
  EBX = (pop32());
  /* 12295cb6 mov esp, ebp */
  ESP = (EBP);
  /* 12295cb8 pop ebp */
  EBP = (pop32());
  /* 12295cb9 ret  */
  ESPCHK(0x12295b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cc0 @ 0x12295cc0 (291 bytes, 95 insns) */
void f_12295cc0(void) {
  FTRACE(0x12295cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12295cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12295cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12295cc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12295cc6 push ebx */
  push32((uint32_t)(EBX));
  /* 12295cc7 push esi */
  push32((uint32_t)(ESI));
  /* 12295cc8 push edi */
  push32((uint32_t)(EDI));
  /* 12295cc9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12295cd0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295cd4 je 0x12295ce2 */
  if (C.zf) goto L_12295ce2;
  /* 12295cd6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295cda je 0x12295ce2 */
  if (C.zf) goto L_12295ce2;
  /* 12295cdc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295ce0 jne 0x12295d10 */
  if (!C.zf) goto L_12295d10;
L_12295ce2:;
  /* 12295ce2 push 0x122bbcf4 */
  push32((uint32_t)(0x122bbcf4u));
  /* 12295ce7 push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 12295cec push 0 */
  push32((uint32_t)(0x0u));
  /* 12295cee push 0 */
  push32((uint32_t)(0x0u));
  /* 12295cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295cf4 call 0x12293470 */
  push32(0x12295cf9u); f_12293470();
  /* 12295cf9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295cfc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295cff jne 0x12295d02 */
  if (!C.zf) goto L_12295d02;
  /* 12295d01 int3  */
  x86_unimpl("int3 @ 0x12295d01");
L_12295d02:;
  /* 12295d02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12295d04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295d06 jne 0x12295ce2 */
  if (!C.zf) goto L_12295ce2;
  /* 12295d08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12295d0b jmp 0x12295ddc */
  goto L_12295ddc;
L_12295d10:;
  /* 12295d10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12295d17 jmp 0x12295d22 */
  goto L_12295d22;
L_12295d19:;
  /* 12295d19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295d1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12295d1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12295d22:;
  /* 12295d22 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295d26 jge 0x12295dac */
  if ((C.sf==C.of)) goto L_12295dac;
  /* 12295d2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295d2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12295d32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295d35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12295d38 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12295d3c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12295d40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295d43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295d46 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12295d4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295d4d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12295d50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295d53 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12295d56 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12295d5a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12295d5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295d61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295d64 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12295d68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295d6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295d6e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295d73 jne 0x12295d82 */
  if (!C.zf) goto L_12295d82;
  /* 12295d75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295d78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295d7b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295d80 je 0x12295da7 */
  if (C.zf) goto L_12295da7;
L_12295d82:;
  /* 12295d82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295d86 je 0x12295da7 */
  if (C.zf) goto L_12295da7;
  /* 12295d88 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295d8c jne 0x12295da0 */
  if (!C.zf) goto L_12295da0;
  /* 12295d8e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295d92 jne 0x12295da7 */
  if (!C.zf) goto L_12295da7;
  /* 12295d94 mov eax, dword ptr [0x122bea84] */
  EAX = (r32((uint32_t)(0x122bea84)));
  /* 12295d99 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12295d9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295d9e je 0x12295da7 */
  if (C.zf) goto L_12295da7;
L_12295da0:;
  /* 12295da0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12295da7:;
  /* 12295da7 jmp 0x12295d19 */
  goto L_12295d19;
L_12295dac:;
  /* 12295dac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12295daf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12295db2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12295db5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12295db8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295dbb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12295dbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12295dc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12295dc4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12295dc7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12295dca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295dcd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12295dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295dd3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12295dd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12295ddc:;
  /* 12295ddc pop edi */
  EDI = (pop32());
  /* 12295ddd pop esi */
  ESI = (pop32());
  /* 12295dde pop ebx */
  EBX = (pop32());
  /* 12295ddf mov esp, ebp */
  ESP = (EBP);
  /* 12295de1 pop ebp */
  EBP = (pop32());
  /* 12295de2 ret  */
  ESPCHK(0x12295cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x12295df0 (697 bytes, 253 insns) */
void f_12295df0(void) {
  FTRACE(0x12295df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12295df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12295df1 mov ebp, esp */
  EBP = (ESP);
  /* 12295df3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12295df6 push ebx */
  push32((uint32_t)(EBX));
  /* 12295df7 push esi */
  push32((uint32_t)(ESI));
  /* 12295df8 push edi */
  push32((uint32_t)(EDI));
  /* 12295df9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12295e00 push 9 */
  push32((uint32_t)(0x9u));
  /* 12295e02 call 0x12297db0 */
  push32(0x12295e07u); f_12297db0();
  /* 12295e07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12295e0a:;
  /* 12295e0a push 0x122bbdec */
  push32((uint32_t)(0x122bbdecu));
  /* 12295e0f push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 12295e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12295e1c call 0x12293470 */
  push32(0x12295e21u); f_12293470();
  /* 12295e21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295e24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295e27 jne 0x12295e2a */
  if (!C.zf) goto L_12295e2a;
  /* 12295e29 int3  */
  x86_unimpl("int3 @ 0x12295e29");
L_12295e2a:;
  /* 12295e2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12295e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295e2e jne 0x12295e0a */
  if (!C.zf) goto L_12295e0a;
  /* 12295e30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295e34 je 0x12295e3e */
  if (C.zf) goto L_12295e3e;
  /* 12295e36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12295e39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12295e3b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12295e3e:;
  /* 12295e3e mov eax, dword ptr [0x122c064c] */
  EAX = (r32((uint32_t)(0x122c064c)));
  /* 12295e43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12295e46 jmp 0x12295e50 */
  goto L_12295e50;
L_12295e48:;
  /* 12295e48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295e4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12295e4d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12295e50:;
  /* 12295e50 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295e54 je 0x12296072 */
  if (C.zf) goto L_12296072;
  /* 12295e5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295e5d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295e60 je 0x12296072 */
  if (C.zf) goto L_12296072;
  /* 12295e66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295e69 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12295e6c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12295e72 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295e75 je 0x12295ea4 */
  if (C.zf) goto L_12295ea4;
  /* 12295e77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295e7a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12295e7d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12295e83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12295e85 je 0x12295ea4 */
  if (C.zf) goto L_12295ea4;
  /* 12295e87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295e8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12295e8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12295e92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295e95 jne 0x12295ea9 */
  if (!C.zf) goto L_12295ea9;
  /* 12295e97 mov ecx, dword ptr [0x122bea84] */
  ECX = (r32((uint32_t)(0x122bea84)));
  /* 12295e9d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12295ea0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12295ea2 jne 0x12295ea9 */
  if (!C.zf) goto L_12295ea9;
L_12295ea4:;
  /* 12295ea4 jmp 0x1229606d */
  goto L_1229606d;
L_12295ea9:;
  /* 12295ea9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295eac cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295eb0 je 0x12295f22 */
  if (C.zf) goto L_12295f22;
  /* 12295eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12295eb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295eb9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12295ebc push ecx */
  push32((uint32_t)(ECX));
  /* 12295ebd call 0x12295960 */
  push32(0x12295ec2u); f_12295960();
  /* 12295ec2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295ec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295ec7 jne 0x12295ef3 */
  if (!C.zf) goto L_12295ef3;
L_12295ec9:;
  /* 12295ec9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295ecc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12295ecf push eax */
  push32((uint32_t)(EAX));
  /* 12295ed0 push 0x122bbdd8 */
  push32((uint32_t)(0x122bbdd8u));
  /* 12295ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295edb push 0 */
  push32((uint32_t)(0x0u));
  /* 12295edd call 0x12293470 */
  push32(0x12295ee2u); f_12293470();
  /* 12295ee2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295ee5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295ee8 jne 0x12295eeb */
  if (!C.zf) goto L_12295eeb;
  /* 12295eea int3  */
  x86_unimpl("int3 @ 0x12295eea");
L_12295eeb:;
  /* 12295eeb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12295eed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12295eef jne 0x12295ec9 */
  if (!C.zf) goto L_12295ec9;
  /* 12295ef1 jmp 0x12295f22 */
  goto L_12295f22;
L_12295ef3:;
  /* 12295ef3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295ef6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12295ef9 push eax */
  push32((uint32_t)(EAX));
  /* 12295efa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295efd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12295f00 push edx */
  push32((uint32_t)(EDX));
  /* 12295f01 push 0x122bbdcc */
  push32((uint32_t)(0x122bbdccu));
  /* 12295f06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295f08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12295f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12295f0e call 0x12293470 */
  push32(0x12295f13u); f_12293470();
  /* 12295f13 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295f16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295f19 jne 0x12295f1c */
  if (!C.zf) goto L_12295f1c;
  /* 12295f1b int3  */
  x86_unimpl("int3 @ 0x12295f1b");
L_12295f1c:;
  /* 12295f1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12295f1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295f20 jne 0x12295ef3 */
  if (!C.zf) goto L_12295ef3;
L_12295f22:;
  /* 12295f22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295f25 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12295f28 push edx */
  push32((uint32_t)(EDX));
  /* 12295f29 push 0x122bbdc4 */
  push32((uint32_t)(0x122bbdc4u));
  /* 12295f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12295f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295f36 call 0x12293470 */
  push32(0x12295f3bu); f_12293470();
  /* 12295f3b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295f3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295f41 jne 0x12295f44 */
  if (!C.zf) goto L_12295f44;
  /* 12295f43 int3  */
  x86_unimpl("int3 @ 0x12295f43");
L_12295f44:;
  /* 12295f44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12295f46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12295f48 jne 0x12295f22 */
  if (!C.zf) goto L_12295f22;
  /* 12295f4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295f4d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12295f50 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12295f56 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295f59 jne 0x12295fcc */
  if (!C.zf) goto L_12295fcc;
L_12295f5b:;
  /* 12295f5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295f5e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12295f61 push ecx */
  push32((uint32_t)(ECX));
  /* 12295f62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295f65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12295f68 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12295f6b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12295f70 push eax */
  push32((uint32_t)(EAX));
  /* 12295f71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295f74 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12295f77 push ecx */
  push32((uint32_t)(ECX));
  /* 12295f78 push 0x122bbd90 */
  push32((uint32_t)(0x122bbd90u));
  /* 12295f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12295f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12295f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295f85 call 0x12293470 */
  push32(0x12295f8au); f_12293470();
  /* 12295f8a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295f8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295f90 jne 0x12295f93 */
  if (!C.zf) goto L_12295f93;
  /* 12295f92 int3  */
  x86_unimpl("int3 @ 0x12295f92");
L_12295f93:;
  /* 12295f93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12295f95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12295f97 jne 0x12295f5b */
  if (!C.zf) goto L_12295f5b;
  /* 12295f99 cmp dword ptr [0x122c1fb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c1fb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295fa0 je 0x12295fbb */
  if (C.zf) goto L_12295fbb;
  /* 12295fa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295fa5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12295fa8 push ecx */
  push32((uint32_t)(ECX));
  /* 12295fa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295fac add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12295faf push edx */
  push32((uint32_t)(EDX));
  /* 12295fb0 call dword ptr [0x122c1fb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c1fb8))), 0x12295fb6u);
  /* 12295fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295fb9 jmp 0x12295fc7 */
  goto L_12295fc7;
L_12295fbb:;
  /* 12295fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295fbe push eax */
  push32((uint32_t)(EAX));
  /* 12295fbf call 0x122960b0 */
  push32(0x12295fc4u); f_122960b0();
  /* 12295fc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12295fc7:;
  /* 12295fc7 jmp 0x1229606d */
  goto L_1229606d;
L_12295fcc:;
  /* 12295fcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295fcf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295fd3 jne 0x12296012 */
  if (!C.zf) goto L_12296012;
L_12295fd5:;
  /* 12295fd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295fd8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12295fdb push eax */
  push32((uint32_t)(EAX));
  /* 12295fdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12295fdf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12295fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 12295fe3 push 0x122bbd68 */
  push32((uint32_t)(0x122bbd68u));
  /* 12295fe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12295fea push 0 */
  push32((uint32_t)(0x0u));
  /* 12295fec push 0 */
  push32((uint32_t)(0x0u));
  /* 12295fee push 0 */
  push32((uint32_t)(0x0u));
  /* 12295ff0 call 0x12293470 */
  push32(0x12295ff5u); f_12293470();
  /* 12295ff5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12295ff8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12295ffb jne 0x12295ffe */
  if (!C.zf) goto L_12295ffe;
  /* 12295ffd int3  */
  x86_unimpl("int3 @ 0x12295ffd");
L_12295ffe:;
  /* 12295ffe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12296000 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12296002 jne 0x12295fd5 */
  if (!C.zf) goto L_12295fd5;
  /* 12296004 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296007 push eax */
  push32((uint32_t)(EAX));
  /* 12296008 call 0x122960b0 */
  push32(0x1229600du); f_122960b0();
  /* 1229600d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296010 jmp 0x1229606d */
  goto L_1229606d;
L_12296012:;
  /* 12296012 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296015 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12296018 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1229601e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296021 jne 0x1229606d */
  if (!C.zf) goto L_1229606d;
L_12296023:;
  /* 12296023 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296026 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12296029 push ecx */
  push32((uint32_t)(ECX));
  /* 1229602a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229602d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12296030 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12296033 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12296038 push eax */
  push32((uint32_t)(EAX));
  /* 12296039 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229603c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229603f push ecx */
  push32((uint32_t)(ECX));
  /* 12296040 push 0x122bbd34 */
  push32((uint32_t)(0x122bbd34u));
  /* 12296045 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296047 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296049 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229604b push 0 */
  push32((uint32_t)(0x0u));
  /* 1229604d call 0x12293470 */
  push32(0x12296052u); f_12293470();
  /* 12296052 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296055 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296058 jne 0x1229605b */
  if (!C.zf) goto L_1229605b;
  /* 1229605a int3  */
  x86_unimpl("int3 @ 0x1229605a");
L_1229605b:;
  /* 1229605b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229605d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229605f jne 0x12296023 */
  if (!C.zf) goto L_12296023;
  /* 12296061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296064 push eax */
  push32((uint32_t)(EAX));
  /* 12296065 call 0x122960b0 */
  push32(0x1229606au); f_122960b0();
  /* 1229606a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229606d:;
  /* 1229606d jmp 0x12295e48 */
  goto L_12295e48;
L_12296072:;
  /* 12296072 push 9 */
  push32((uint32_t)(0x9u));
  /* 12296074 call 0x12297e50 */
  push32(0x12296079u); f_12297e50();
  /* 12296079 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229607c:;
  /* 1229607c push 0x122bbd1c */
  push32((uint32_t)(0x122bbd1cu));
  /* 12296081 push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 12296086 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296088 push 0 */
  push32((uint32_t)(0x0u));
  /* 1229608a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229608c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229608e call 0x12293470 */
  push32(0x12296093u); f_12293470();
  /* 12296093 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296096 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296099 jne 0x1229609c */
  if (!C.zf) goto L_1229609c;
  /* 1229609b int3  */
  x86_unimpl("int3 @ 0x1229609b");
L_1229609c:;
  /* 1229609c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1229609e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122960a0 jne 0x1229607c */
  if (!C.zf) goto L_1229607c;
  /* 122960a2 pop edi */
  EDI = (pop32());
  /* 122960a3 pop esi */
  ESI = (pop32());
  /* 122960a4 pop ebx */
  EBX = (pop32());
  /* 122960a5 mov esp, ebp */
  ESP = (EBP);
  /* 122960a7 pop ebp */
  EBP = (pop32());
  /* 122960a8 ret  */
  ESPCHK(0x12295df0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060b0 @ 0x122960b0 (276 bytes, 89 insns) */
void f_122960b0(void) {
  FTRACE(0x122960b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122960b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122960b1 mov ebp, esp */
  EBP = (ESP);
  /* 122960b3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122960b6 push ebx */
  push32((uint32_t)(EBX));
  /* 122960b7 push esi */
  push32((uint32_t)(ESI));
  /* 122960b8 push edi */
  push32((uint32_t)(EDI));
  /* 122960b9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 122960c0 jmp 0x122960cb */
  goto L_122960cb;
L_122960c2:;
  /* 122960c2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 122960c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122960c8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_122960cb:;
  /* 122960cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122960ce cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122960d2 jge 0x122960df */
  if ((C.sf==C.of)) goto L_122960df;
  /* 122960d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122960d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 122960da mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 122960dd jmp 0x122960e6 */
  goto L_122960e6;
L_122960df:;
  /* 122960df mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_122960e6:;
  /* 122960e6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 122960e9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122960ec jge 0x1229618c */
  if ((C.sf==C.of)) goto L_1229618c;
  /* 122960f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122960f5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122960f8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 122960fb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 122960fe cmp dword ptr [0x122beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296105 jle 0x12296123 */
  if ((C.zf||C.sf!=C.of)) goto L_12296123;
  /* 12296107 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1229610c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1229610f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12296115 push ecx */
  push32((uint32_t)(ECX));
  /* 12296116 call 0x1229a3c0 */
  push32(0x1229611bu); f_1229a3c0();
  /* 1229611b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229611e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12296121 jmp 0x12296140 */
  goto L_12296140;
L_12296123:;
  /* 12296123 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12296126 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1229612c mov eax, dword ptr [0x122bec98] */
  EAX = (r32((uint32_t)(0x122bec98)));
  /* 12296131 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12296133 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12296137 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1229613d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12296140:;
  /* 12296140 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296144 je 0x12296154 */
  if (C.zf) goto L_12296154;
  /* 12296146 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12296149 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1229614f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12296152 jmp 0x1229615b */
  goto L_1229615b;
L_12296154:;
  /* 12296154 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1229615b:;
  /* 1229615b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1229615e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12296161 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12296165 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12296168 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1229616e push edx */
  push32((uint32_t)(EDX));
  /* 1229616f push 0x122bbe10 */
  push32((uint32_t)(0x122bbe10u));
  /* 12296174 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12296177 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229617a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1229617e push ecx */
  push32((uint32_t)(ECX));
  /* 1229617f call 0x1229a2c0 */
  push32(0x12296184u); f_1229a2c0();
  /* 12296184 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296187 jmp 0x122960c2 */
  goto L_122960c2;
L_1229618c:;
  /* 1229618c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1229618f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12296194:;
  /* 12296194 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12296197 push eax */
  push32((uint32_t)(EAX));
  /* 12296198 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1229619b push ecx */
  push32((uint32_t)(ECX));
  /* 1229619c push 0x122bbe00 */
  push32((uint32_t)(0x122bbe00u));
  /* 122961a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122961a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122961a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122961a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122961a9 call 0x12293470 */
  push32(0x122961aeu); f_12293470();
  /* 122961ae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122961b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122961b4 jne 0x122961b7 */
  if (!C.zf) goto L_122961b7;
  /* 122961b6 int3  */
  x86_unimpl("int3 @ 0x122961b6");
L_122961b7:;
  /* 122961b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122961b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122961bb jne 0x12296194 */
  if (!C.zf) goto L_12296194;
  /* 122961bd pop edi */
  EDI = (pop32());
  /* 122961be pop esi */
  ESI = (pop32());
  /* 122961bf pop ebx */
  EBX = (pop32());
  /* 122961c0 mov esp, ebp */
  ESP = (EBP);
  /* 122961c2 pop ebp */
  EBP = (pop32());
  /* 122961c3 ret  */
  ESPCHK(0x122960b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061d0 @ 0x122961d0 (116 bytes, 46 insns) */
void f_122961d0(void) {
  FTRACE(0x122961d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122961d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122961d1 mov ebp, esp */
  EBP = (ESP);
  /* 122961d3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122961d6 push ebx */
  push32((uint32_t)(EBX));
  /* 122961d7 push esi */
  push32((uint32_t)(ESI));
  /* 122961d8 push edi */
  push32((uint32_t)(EDI));
  /* 122961d9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 122961dc push eax */
  push32((uint32_t)(EAX));
  /* 122961dd call 0x12295b50 */
  push32(0x122961e2u); f_12295b50();
  /* 122961e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122961e5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122961e9 jne 0x12296204 */
  if (!C.zf) goto L_12296204;
  /* 122961eb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122961ef jne 0x12296204 */
  if (!C.zf) goto L_12296204;
  /* 122961f1 mov ecx, dword ptr [0x122bea84] */
  ECX = (r32((uint32_t)(0x122bea84)));
  /* 122961f7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 122961fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122961fc je 0x1229623b */
  if (C.zf) goto L_1229623b;
  /* 122961fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296202 je 0x1229623b */
  if (C.zf) goto L_1229623b;
L_12296204:;
  /* 12296204 push 0x122bbe18 */
  push32((uint32_t)(0x122bbe18u));
  /* 12296209 push 0x122bb7e4 */
  push32((uint32_t)(0x122bb7e4u));
  /* 1229620e push 0 */
  push32((uint32_t)(0x0u));
  /* 12296210 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296212 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296214 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296216 call 0x12293470 */
  push32(0x1229621bu); f_12293470();
  /* 1229621b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229621e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296221 jne 0x12296224 */
  if (!C.zf) goto L_12296224;
  /* 12296223 int3  */
  x86_unimpl("int3 @ 0x12296223");
L_12296224:;
  /* 12296224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12296226 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12296228 jne 0x12296204 */
  if (!C.zf) goto L_12296204;
  /* 1229622a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229622c call 0x12295df0 */
  push32(0x12296231u); f_12295df0();
  /* 12296231 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296234 mov eax, 1 */
  EAX = (0x1u);
  /* 12296239 jmp 0x1229623d */
  goto L_1229623d;
L_1229623b:;
  /* 1229623b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1229623d:;
  /* 1229623d pop edi */
  EDI = (pop32());
  /* 1229623e pop esi */
  ESI = (pop32());
  /* 1229623f pop ebx */
  EBX = (pop32());
  /* 12296240 mov esp, ebp */
  ESP = (EBP);
  /* 12296242 pop ebp */
  EBP = (pop32());
  /* 12296243 ret  */
  ESPCHK(0x122961d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006250 @ 0x12296250 (197 bytes, 79 insns) */
void f_12296250(void) {
  FTRACE(0x12296250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12296250 push ebp */
  push32((uint32_t)(EBP));
  /* 12296251 mov ebp, esp */
  EBP = (ESP);
  /* 12296253 push ecx */
  push32((uint32_t)(ECX));
  /* 12296254 push ebx */
  push32((uint32_t)(EBX));
  /* 12296255 push esi */
  push32((uint32_t)(ESI));
  /* 12296256 push edi */
  push32((uint32_t)(EDI));
  /* 12296257 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229625b jne 0x12296262 */
  if (!C.zf) goto L_12296262;
  /* 1229625d jmp 0x1229630e */
  goto L_1229630e;
L_12296262:;
  /* 12296262 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12296269 jmp 0x12296274 */
  goto L_12296274;
L_1229626b:;
  /* 1229626b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229626e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296271 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12296274:;
  /* 12296274 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296278 jge 0x122962be */
  if ((C.sf==C.of)) goto L_122962be;
L_1229627a:;
  /* 1229627a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229627d mov edx, dword ptr [ecx*4 + 0x122bea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122bea94)));
  /* 12296284 push edx */
  push32((uint32_t)(EDX));
  /* 12296285 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296288 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229628b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1229628f push edx */
  push32((uint32_t)(EDX));
  /* 12296290 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296293 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12296296 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1229629a push edx */
  push32((uint32_t)(EDX));
  /* 1229629b push 0x122bbe74 */
  push32((uint32_t)(0x122bbe74u));
  /* 122962a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122962a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122962a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122962a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122962a8 call 0x12293470 */
  push32(0x122962adu); f_12293470();
  /* 122962ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122962b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122962b3 jne 0x122962b6 */
  if (!C.zf) goto L_122962b6;
  /* 122962b5 int3  */
  x86_unimpl("int3 @ 0x122962b5");
L_122962b6:;
  /* 122962b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122962b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122962ba jne 0x1229627a */
  if (!C.zf) goto L_1229627a;
  /* 122962bc jmp 0x1229626b */
  goto L_1229626b;
L_122962be:;
  /* 122962be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122962c1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 122962c4 push edx */
  push32((uint32_t)(EDX));
  /* 122962c5 push 0x122bbe50 */
  push32((uint32_t)(0x122bbe50u));
  /* 122962ca push 0 */
  push32((uint32_t)(0x0u));
  /* 122962cc push 0 */
  push32((uint32_t)(0x0u));
  /* 122962ce push 0 */
  push32((uint32_t)(0x0u));
  /* 122962d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122962d2 call 0x12293470 */
  push32(0x122962d7u); f_12293470();
  /* 122962d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122962da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122962dd jne 0x122962e0 */
  if (!C.zf) goto L_122962e0;
  /* 122962df int3  */
  x86_unimpl("int3 @ 0x122962df");
L_122962e0:;
  /* 122962e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122962e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122962e4 jne 0x122962be */
  if (!C.zf) goto L_122962be;
L_122962e6:;
  /* 122962e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122962e9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 122962ec push edx */
  push32((uint32_t)(EDX));
  /* 122962ed push 0x122bbe30 */
  push32((uint32_t)(0x122bbe30u));
  /* 122962f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122962f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122962f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122962f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122962fa call 0x12293470 */
  push32(0x122962ffu); f_12293470();
  /* 122962ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296302 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296305 jne 0x12296308 */
  if (!C.zf) goto L_12296308;
  /* 12296307 int3  */
  x86_unimpl("int3 @ 0x12296307");
L_12296308:;
  /* 12296308 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229630a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229630c jne 0x122962e6 */
  if (!C.zf) goto L_122962e6;
L_1229630e:;
  /* 1229630e pop edi */
  EDI = (pop32());
  /* 1229630f pop esi */
  ESI = (pop32());
  /* 12296310 pop ebx */
  EBX = (pop32());
  /* 12296311 mov esp, ebp */
  ESP = (EBP);
  /* 12296313 pop ebp */
  EBP = (pop32());
  /* 12296314 ret  */
  ESPCHK(0x12296250u, _esp0);
  ESP += 4; return;
}

/* FUN_10006320 @ 0x12296320 (329 bytes, 102 insns) */
void f_12296320(void) {
  FTRACE(0x12296320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12296320 push ebp */
  push32((uint32_t)(EBP));
  /* 12296321 mov ebp, esp */
  EBP = (ESP);
  /* 12296323 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12296326 cmp dword ptr [0x122c2130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c2130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229632d jne 0x12296334 */
  if (!C.zf) goto L_12296334;
  /* 1229632f call 0x1229ac60 */
  push32(0x12296334u); f_1229ac60();
L_12296334:;
  /* 12296334 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1229633b mov eax, dword ptr [0x122c05e8] */
  EAX = (r32((uint32_t)(0x122c05e8)));
  /* 12296340 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12296343:;
  /* 12296343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296346 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12296349 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229634b je 0x12296379 */
  if (C.zf) goto L_12296379;
  /* 1229634d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296350 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12296353 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296356 je 0x12296361 */
  if (C.zf) goto L_12296361;
  /* 12296358 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229635b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229635e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12296361:;
  /* 12296361 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296364 push eax */
  push32((uint32_t)(EAX));
  /* 12296365 call 0x122971e0 */
  push32(0x1229636au); f_122971e0();
  /* 1229636a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229636d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296370 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12296374 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12296377 jmp 0x12296343 */
  goto L_12296343;
L_12296379:;
  /* 12296379 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1229637b push 0x122bbe94 */
  push32((uint32_t)(0x122bbe94u));
  /* 12296380 push 2 */
  push32((uint32_t)(0x2u));
  /* 12296382 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296385 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1229638c push ecx */
  push32((uint32_t)(ECX));
  /* 1229638d call 0x122943b0 */
  push32(0x12296392u); f_122943b0();
  /* 12296392 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296395 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12296398 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229639b mov dword ptr [0x122c061c], edx */
  w32((uint32_t)(0x122c061c), (EDX));
  /* 122963a1 cmp dword ptr [0x122c061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122963a8 jne 0x122963b4 */
  if (!C.zf) goto L_122963b4;
  /* 122963aa push 9 */
  push32((uint32_t)(0x9u));
  /* 122963ac call 0x12293320 */
  push32(0x122963b1u); f_12293320();
  /* 122963b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122963b4:;
  /* 122963b4 mov eax, dword ptr [0x122c05e8] */
  EAX = (r32((uint32_t)(0x122c05e8)));
  /* 122963b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122963bc jmp 0x122963c7 */
  goto L_122963c7;
L_122963be:;
  /* 122963be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122963c1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122963c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122963c7:;
  /* 122963c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122963ca movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122963cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122963cf je 0x12296437 */
  if (C.zf) goto L_12296437;
  /* 122963d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122963d4 push ecx */
  push32((uint32_t)(ECX));
  /* 122963d5 call 0x122971e0 */
  push32(0x122963dau); f_122971e0();
  /* 122963da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122963dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122963e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122963e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122963e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122963e9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122963ec je 0x12296435 */
  if (C.zf) goto L_12296435;
  /* 122963ee push 0x79 */
  push32((uint32_t)(0x79u));
  /* 122963f0 push 0x122bbe94 */
  push32((uint32_t)(0x122bbe94u));
  /* 122963f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122963f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122963fa push ecx */
  push32((uint32_t)(ECX));
  /* 122963fb call 0x122943b0 */
  push32(0x12296400u); f_122943b0();
  /* 12296400 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296403 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296406 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12296408 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229640b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229640e jne 0x1229641a */
  if (!C.zf) goto L_1229641a;
  /* 12296410 push 9 */
  push32((uint32_t)(0x9u));
  /* 12296412 call 0x12293320 */
  push32(0x12296417u); f_12293320();
  /* 12296417 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229641a:;
  /* 1229641a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229641d push ecx */
  push32((uint32_t)(ECX));
  /* 1229641e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296421 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12296423 push eax */
  push32((uint32_t)(EAX));
  /* 12296424 call 0x12297360 */
  push32(0x12296429u); f_12297360();
  /* 12296429 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229642c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229642f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296432 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12296435:;
  /* 12296435 jmp 0x122963be */
  goto L_122963be;
L_12296437:;
  /* 12296437 push 2 */
  push32((uint32_t)(0x2u));
  /* 12296439 mov edx, dword ptr [0x122c05e8] */
  EDX = (r32((uint32_t)(0x122c05e8)));
  /* 1229643f push edx */
  push32((uint32_t)(EDX));
  /* 12296440 call 0x12294e40 */
  push32(0x12296445u); f_12294e40();
  /* 12296445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296448 mov dword ptr [0x122c05e8], 0 */
  w32((uint32_t)(0x122c05e8), (0x0u));
  /* 12296452 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296455 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1229645b mov dword ptr [0x122c2120], 1 */
  w32((uint32_t)(0x122c2120), (0x1u));
  /* 12296465 mov esp, ebp */
  ESP = (EBP);
  /* 12296467 pop ebp */
  EBP = (pop32());
  /* 12296468 ret  */
  ESPCHK(0x12296320u, _esp0);
  ESP += 4; return;
}

/* FUN_10006470 @ 0x12296470 (216 bytes, 69 insns) */
void f_12296470(void) {
  FTRACE(0x12296470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12296470 push ebp */
  push32((uint32_t)(EBP));
  /* 12296471 mov ebp, esp */
  EBP = (ESP);
  /* 12296473 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12296476 cmp dword ptr [0x122c2130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c2130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229647d jne 0x12296484 */
  if (!C.zf) goto L_12296484;
  /* 1229647f call 0x1229ac60 */
  push32(0x12296484u); f_1229ac60();
L_12296484:;
  /* 12296484 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12296489 push 0x122c0658 */
  push32((uint32_t)(0x122c0658u));
  /* 1229648e push 0 */
  push32((uint32_t)(0x0u));
  /* 12296490 call dword ptr [0x122c32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32b8))), 0x12296496u);
  /* 12296496 mov dword ptr [0x122c062c], 0x122c0658 */
  w32((uint32_t)(0x122c062c), (0x122c0658u));
  /* 122964a0 mov eax, dword ptr [0x122c214c] */
  EAX = (r32((uint32_t)(0x122c214c)));
  /* 122964a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122964a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122964aa jne 0x122964b7 */
  if (!C.zf) goto L_122964b7;
  /* 122964ac mov edx, dword ptr [0x122c062c] */
  EDX = (r32((uint32_t)(0x122c062c)));
  /* 122964b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122964b5 jmp 0x122964bf */
  goto L_122964bf;
L_122964b7:;
  /* 122964b7 mov eax, dword ptr [0x122c214c] */
  EAX = (r32((uint32_t)(0x122c214c)));
  /* 122964bc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_122964bf:;
  /* 122964bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122964c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122964c5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 122964c8 push edx */
  push32((uint32_t)(EDX));
  /* 122964c9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 122964cc push eax */
  push32((uint32_t)(EAX));
  /* 122964cd push 0 */
  push32((uint32_t)(0x0u));
  /* 122964cf push 0 */
  push32((uint32_t)(0x0u));
  /* 122964d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122964d4 push ecx */
  push32((uint32_t)(ECX));
  /* 122964d5 call 0x12296550 */
  push32(0x122964dau); f_12296550();
  /* 122964da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122964dd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 122964e2 push 0x122bbea0 */
  push32((uint32_t)(0x122bbea0u));
  /* 122964e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122964e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122964ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122964ef lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 122964f2 push ecx */
  push32((uint32_t)(ECX));
  /* 122964f3 call 0x122943b0 */
  push32(0x122964f8u); f_122943b0();
  /* 122964f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122964fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122964fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296502 jne 0x1229650e */
  if (!C.zf) goto L_1229650e;
  /* 12296504 push 8 */
  push32((uint32_t)(0x8u));
  /* 12296506 call 0x12293320 */
  push32(0x1229650bu); f_12293320();
  /* 1229650b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229650e:;
  /* 1229650e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12296511 push edx */
  push32((uint32_t)(EDX));
  /* 12296512 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12296515 push eax */
  push32((uint32_t)(EAX));
  /* 12296516 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296519 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229651c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1229651f push eax */
  push32((uint32_t)(EAX));
  /* 12296520 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296523 push ecx */
  push32((uint32_t)(ECX));
  /* 12296524 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12296527 push edx */
  push32((uint32_t)(EDX));
  /* 12296528 call 0x12296550 */
  push32(0x1229652du); f_12296550();
  /* 1229652d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296530 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296533 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12296536 mov dword ptr [0x122c0610], eax */
  w32((uint32_t)(0x122c0610), (EAX));
  /* 1229653b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229653e mov dword ptr [0x122c0614], ecx */
  w32((uint32_t)(0x122c0614), (ECX));
  /* 12296544 mov esp, ebp */
  ESP = (EBP);
  /* 12296546 pop ebp */
  EBP = (pop32());
  /* 12296547 ret  */
  ESPCHK(0x12296470u, _esp0);
  ESP += 4; return;
}

/* FUN_10006550 @ 0x12296550 (1060 bytes, 360 insns) */
void f_12296550(void) {
  FTRACE(0x12296550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12296550 push ebp */
  push32((uint32_t)(EBP));
  /* 12296551 mov ebp, esp */
  EBP = (ESP);
  /* 12296553 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12296556 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12296559 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1229655f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12296562 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12296568 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229656b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229656e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296572 je 0x12296585 */
  if (C.zf) goto L_12296585;
  /* 12296574 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12296577 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229657a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1229657c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229657f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296582 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12296585:;
  /* 12296585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296588 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229658b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229658e jne 0x1229665d */
  if (!C.zf) goto L_1229665d;
L_12296594:;
  /* 12296594 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296597 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229659a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229659d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122965a0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122965a3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122965a6 je 0x12296622 */
  if (C.zf) goto L_12296622;
  /* 122965a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122965ab movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122965ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122965b0 je 0x12296622 */
  if (C.zf) goto L_12296622;
  /* 122965b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122965b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122965b7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122965b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122965bb mov al, byte ptr [edx + 0x122c1e81] */
  AL = (r8((uint32_t)(EDX + 0x122c1e81)));
  /* 122965c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 122965c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122965c6 je 0x122965f7 */
  if (C.zf) goto L_122965f7;
  /* 122965c8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122965cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122965cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122965d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122965d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122965d5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122965d9 je 0x122965f7 */
  if (C.zf) goto L_122965f7;
  /* 122965db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122965de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122965e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122965e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122965e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122965e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122965eb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 122965ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122965f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122965f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122965f7:;
  /* 122965f7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122965fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122965fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122965ff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12296602 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12296604 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296608 je 0x1229661d */
  if (C.zf) goto L_1229661d;
  /* 1229660a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229660d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296610 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12296612 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12296614 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12296617 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229661a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1229661d:;
  /* 1229661d jmp 0x12296594 */
  goto L_12296594;
L_12296622:;
  /* 12296622 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12296625 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12296627 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229662a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1229662d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1229662f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296633 je 0x12296644 */
  if (C.zf) goto L_12296644;
  /* 12296635 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12296638 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1229663b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229663e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296641 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12296644:;
  /* 12296644 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296647 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229664a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229664d jne 0x12296658 */
  if (!C.zf) goto L_12296658;
  /* 1229664f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296652 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296655 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12296658:;
  /* 12296658 jmp 0x1229672c */
  goto L_1229672c;
L_1229665d:;
  /* 1229665d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12296660 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12296662 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296665 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12296668 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1229666a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229666e je 0x12296683 */
  if (C.zf) goto L_12296683;
  /* 12296670 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12296673 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296676 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12296678 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1229667a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229667d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296680 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12296683:;
  /* 12296683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296686 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12296688 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1229668b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229668e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296691 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12296694 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296697 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1229669d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229669f mov dl, byte ptr [ecx + 0x122c1e81] */
  DL = (r8((uint32_t)(ECX + 0x122c1e81)));
  /* 122966a5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 122966a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122966aa je 0x122966db */
  if (C.zf) goto L_122966db;
  /* 122966ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122966af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122966b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122966b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122966b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122966b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122966bd je 0x122966d2 */
  if (C.zf) goto L_122966d2;
  /* 122966bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122966c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122966c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122966c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122966c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122966cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122966cf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_122966d2:;
  /* 122966d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122966d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122966d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122966db:;
  /* 122966db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122966de and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122966e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122966e7 je 0x12296707 */
  if (C.zf) goto L_12296707;
  /* 122966e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122966ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122966f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122966f3 je 0x12296707 */
  if (C.zf) goto L_12296707;
  /* 122966f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122966f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 122966fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296701 jne 0x1229665d */
  if (!C.zf) goto L_1229665d;
L_12296707:;
  /* 12296707 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229670a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12296710 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12296712 jne 0x1229671f */
  if (!C.zf) goto L_1229671f;
  /* 12296714 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296717 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229671a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229671d jmp 0x1229672c */
  goto L_1229672c;
L_1229671f:;
  /* 1229671f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296723 je 0x1229672c */
  if (C.zf) goto L_1229672c;
  /* 12296725 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12296728 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1229672c:;
  /* 1229672c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12296733:;
  /* 12296733 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296736 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12296739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229673b je 0x1229675e */
  if (C.zf) goto L_1229675e;
L_1229673d:;
  /* 1229673d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296740 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12296743 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296746 je 0x12296753 */
  if (C.zf) goto L_12296753;
  /* 12296748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229674b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229674e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296751 jne 0x1229675e */
  if (!C.zf) goto L_1229675e;
L_12296753:;
  /* 12296753 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296756 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296759 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229675c jmp 0x1229673d */
  goto L_1229673d;
L_1229675e:;
  /* 1229675e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296761 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12296764 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12296766 jne 0x1229676d */
  if (!C.zf) goto L_1229676d;
  /* 12296768 jmp 0x1229694b */
  goto L_1229694b;
L_1229676d:;
  /* 1229676d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296771 je 0x12296784 */
  if (C.zf) goto L_12296784;
  /* 12296773 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12296776 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12296779 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1229677b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229677e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296781 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12296784:;
  /* 12296784 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12296787 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12296789 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229678c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229678f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12296791:;
  /* 12296791 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12296798 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1229679f:;
  /* 1229679f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122967a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122967a5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122967a8 jne 0x122967be */
  if (!C.zf) goto L_122967be;
  /* 122967aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122967ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122967b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122967b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122967b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122967b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 122967bc jmp 0x1229679f */
  goto L_1229679f;
L_122967be:;
  /* 122967be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122967c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122967c4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122967c7 jne 0x1229681a */
  if (!C.zf) goto L_1229681a;
  /* 122967c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122967cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122967ce mov ecx, 2 */
  ECX = (0x2u);
  /* 122967d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122967d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122967d7 jne 0x12296812 */
  if (!C.zf) goto L_12296812;
  /* 122967d9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122967dd je 0x122967ff */
  if (C.zf) goto L_122967ff;
  /* 122967df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122967e2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 122967e6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122967e9 jne 0x122967f6 */
  if (!C.zf) goto L_122967f6;
  /* 122967eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122967ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122967f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122967f4 jmp 0x122967fd */
  goto L_122967fd;
L_122967f6:;
  /* 122967f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122967fd:;
  /* 122967fd jmp 0x12296806 */
  goto L_12296806;
L_122967ff:;
  /* 122967ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12296806:;
  /* 12296806 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12296808 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229680c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1229680f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12296812:;
  /* 12296812 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12296815 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12296817 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1229681a:;
  /* 1229681a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229681d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12296820 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12296823 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12296826 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12296828 je 0x1229684e */
  if (C.zf) goto L_1229684e;
  /* 1229682a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229682e je 0x1229683f */
  if (C.zf) goto L_1229683f;
  /* 12296830 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12296833 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12296836 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12296839 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229683c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1229683f:;
  /* 1229683f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12296842 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12296844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296847 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1229684a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1229684c jmp 0x1229681a */
  goto L_1229681a;
L_1229684e:;
  /* 1229684e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296851 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12296854 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12296856 je 0x12296874 */
  if (C.zf) goto L_12296874;
  /* 12296858 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229685c jne 0x12296879 */
  if (!C.zf) goto L_12296879;
  /* 1229685e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296861 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12296864 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296867 je 0x12296874 */
  if (C.zf) goto L_12296874;
  /* 12296869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229686c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1229686f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296872 jne 0x12296879 */
  if (!C.zf) goto L_12296879;
L_12296874:;
  /* 12296874 jmp 0x12296924 */
  goto L_12296924;
L_12296879:;
  /* 12296879 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229687d je 0x12296916 */
  if (C.zf) goto L_12296916;
  /* 12296883 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296887 je 0x122968dd */
  if (C.zf) goto L_122968dd;
  /* 12296889 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229688c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229688e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12296890 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12296892 mov cl, byte ptr [eax + 0x122c1e81] */
  CL = (r8((uint32_t)(EAX + 0x122c1e81)));
  /* 12296898 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1229689b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1229689d je 0x122968c8 */
  if (C.zf) goto L_122968c8;
  /* 1229689f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122968a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122968a5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122968a7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 122968a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122968ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122968af mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 122968b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122968b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122968b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122968bb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122968be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122968c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122968c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122968c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122968c8:;
  /* 122968c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122968cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122968ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122968d0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122968d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122968d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122968d8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 122968db jmp 0x12296909 */
  goto L_12296909;
L_122968dd:;
  /* 122968dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122968e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122968e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122968e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122968e6 mov cl, byte ptr [eax + 0x122c1e81] */
  CL = (r8((uint32_t)(EAX + 0x122c1e81)));
  /* 122968ec and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 122968ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122968f1 je 0x12296909 */
  if (C.zf) goto L_12296909;
  /* 122968f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122968f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122968f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122968fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122968ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12296901 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296904 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12296907 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12296909:;
  /* 12296909 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1229690c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229690e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296911 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12296914 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12296916:;
  /* 12296916 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296919 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229691c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229691f jmp 0x12296791 */
  goto L_12296791;
L_12296924:;
  /* 12296924 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296928 je 0x12296939 */
  if (C.zf) goto L_12296939;
  /* 1229692a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1229692d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12296930 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12296933 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296936 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12296939:;
  /* 12296939 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1229693c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229693e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296941 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12296944 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12296946 jmp 0x12296733 */
  goto L_12296733;
L_1229694b:;
  /* 1229694b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229694f je 0x12296963 */
  if (C.zf) goto L_12296963;
  /* 12296951 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12296954 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1229695a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229695d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296960 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12296963:;
  /* 12296963 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12296966 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12296968 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229696b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229696e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12296970 mov esp, ebp */
  ESP = (EBP);
  /* 12296972 pop ebp */
  EBP = (pop32());
  /* 12296973 ret  */
  ESPCHK(0x12296550u, _esp0);
  ESP += 4; return;
}

/* FUN_10006980 @ 0x12296980 (537 bytes, 173 insns) */
void f_12296980(void) {
  FTRACE(0x12296980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12296980 push ebp */
  push32((uint32_t)(EBP));
  /* 12296981 mov ebp, esp */
  EBP = (ESP);
  /* 12296983 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12296986 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1229698d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12296994 cmp dword ptr [0x122c075c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c075c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229699b jne 0x122969da */
  if (!C.zf) goto L_122969da;
  /* 1229699d call dword ptr [0x122c3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3314))), 0x122969a3u);
  /* 122969a3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122969a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122969aa je 0x122969b8 */
  if (C.zf) goto L_122969b8;
  /* 122969ac mov dword ptr [0x122c075c], 1 */
  w32((uint32_t)(0x122c075c), (0x1u));
  /* 122969b6 jmp 0x122969da */
  goto L_122969da;
L_122969b8:;
  /* 122969b8 call dword ptr [0x122c3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3310))), 0x122969beu);
  /* 122969be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122969c1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122969c5 je 0x122969d3 */
  if (C.zf) goto L_122969d3;
  /* 122969c7 mov dword ptr [0x122c075c], 2 */
  w32((uint32_t)(0x122c075c), (0x2u));
  /* 122969d1 jmp 0x122969da */
  goto L_122969da;
L_122969d3:;
  /* 122969d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122969d5 jmp 0x12296b95 */
  goto L_12296b95;
L_122969da:;
  /* 122969da cmp dword ptr [0x122c075c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c075c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122969e1 jne 0x12296ade */
  if (!C.zf) goto L_12296ade;
  /* 122969e7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122969eb jne 0x12296a03 */
  if (!C.zf) goto L_12296a03;
  /* 122969ed call dword ptr [0x122c3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3314))), 0x122969f3u);
  /* 122969f3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122969f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122969fa jne 0x12296a03 */
  if (!C.zf) goto L_12296a03;
  /* 122969fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122969fe jmp 0x12296b95 */
  goto L_12296b95;
L_12296a03:;
  /* 12296a03 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12296a06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12296a09:;
  /* 12296a09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296a0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12296a0e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12296a11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12296a13 je 0x12296a35 */
  if (C.zf) goto L_12296a35;
  /* 12296a15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296a18 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296a1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12296a1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296a21 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12296a23 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12296a26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12296a28 jne 0x12296a33 */
  if (!C.zf) goto L_12296a33;
  /* 12296a2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296a2d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296a30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12296a33:;
  /* 12296a33 jmp 0x12296a09 */
  goto L_12296a09;
L_12296a35:;
  /* 12296a35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296a38 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12296a3b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12296a3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296a40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12296a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296a4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296a4e push edx */
  push32((uint32_t)(EDX));
  /* 12296a4f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12296a52 push eax */
  push32((uint32_t)(EAX));
  /* 12296a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296a57 call dword ptr [0x122c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c330c))), 0x12296a5du);
  /* 12296a5d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12296a60 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296a64 je 0x12296a84 */
  if (C.zf) goto L_12296a84;
  /* 12296a66 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12296a68 push 0x122bbeac */
  push32((uint32_t)(0x122bbeacu));
  /* 12296a6d push 2 */
  push32((uint32_t)(0x2u));
  /* 12296a6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12296a72 push ecx */
  push32((uint32_t)(ECX));
  /* 12296a73 call 0x122943b0 */
  push32(0x12296a78u); f_122943b0();
  /* 12296a78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296a7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12296a7e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296a82 jne 0x12296a95 */
  if (!C.zf) goto L_12296a95;
L_12296a84:;
  /* 12296a84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12296a87 push edx */
  push32((uint32_t)(EDX));
  /* 12296a88 call dword ptr [0x122c3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3308))), 0x12296a8eu);
  /* 12296a8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12296a90 jmp 0x12296b95 */
  goto L_12296b95;
L_12296a95:;
  /* 12296a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296a97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296a99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12296a9c push eax */
  push32((uint32_t)(EAX));
  /* 12296a9d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12296aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12296aa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296aa4 push edx */
  push32((uint32_t)(EDX));
  /* 12296aa5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12296aa8 push eax */
  push32((uint32_t)(EAX));
  /* 12296aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296aab push 0 */
  push32((uint32_t)(0x0u));
  /* 12296aad call dword ptr [0x122c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c330c))), 0x12296ab3u);
  /* 12296ab3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12296ab5 jne 0x12296acc */
  if (!C.zf) goto L_12296acc;
  /* 12296ab7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12296ab9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12296abc push ecx */
  push32((uint32_t)(ECX));
  /* 12296abd call 0x12294e40 */
  push32(0x12296ac2u); f_12294e40();
  /* 12296ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296ac5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12296acc:;
  /* 12296acc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12296acf push edx */
  push32((uint32_t)(EDX));
  /* 12296ad0 call dword ptr [0x122c3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3308))), 0x12296ad6u);
  /* 12296ad6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12296ad9 jmp 0x12296b95 */
  goto L_12296b95;
L_12296ade:;
  /* 12296ade cmp dword ptr [0x122c075c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x122c075c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296ae5 jne 0x12296b93 */
  if (!C.zf) goto L_12296b93;
  /* 12296aeb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296aef jne 0x12296b07 */
  if (!C.zf) goto L_12296b07;
  /* 12296af1 call dword ptr [0x122c3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3310))), 0x12296af7u);
  /* 12296af7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12296afa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296afe jne 0x12296b07 */
  if (!C.zf) goto L_12296b07;
  /* 12296b00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12296b02 jmp 0x12296b95 */
  goto L_12296b95;
L_12296b07:;
  /* 12296b07 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12296b0a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12296b0d:;
  /* 12296b0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296b10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12296b13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12296b15 je 0x12296b35 */
  if (C.zf) goto L_12296b35;
  /* 12296b17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296b1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296b1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12296b20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296b23 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12296b26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12296b28 jne 0x12296b33 */
  if (!C.zf) goto L_12296b33;
  /* 12296b2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296b2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296b30 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12296b33:;
  /* 12296b33 jmp 0x12296b0d */
  goto L_12296b0d;
L_12296b35:;
  /* 12296b35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296b38 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12296b3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296b3e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12296b41 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12296b46 push 0x122bbeac */
  push32((uint32_t)(0x122bbeacu));
  /* 12296b4b push 2 */
  push32((uint32_t)(0x2u));
  /* 12296b4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12296b50 push edx */
  push32((uint32_t)(EDX));
  /* 12296b51 call 0x122943b0 */
  push32(0x12296b56u); f_122943b0();
  /* 12296b56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296b59 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12296b5c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296b60 jne 0x12296b70 */
  if (!C.zf) goto L_12296b70;
  /* 12296b62 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12296b65 push eax */
  push32((uint32_t)(EAX));
  /* 12296b66 call dword ptr [0x122c3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3304))), 0x12296b6cu);
  /* 12296b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12296b6e jmp 0x12296b95 */
  goto L_12296b95;
L_12296b70:;
  /* 12296b70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12296b73 push ecx */
  push32((uint32_t)(ECX));
  /* 12296b74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12296b77 push edx */
  push32((uint32_t)(EDX));
  /* 12296b78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296b7b push eax */
  push32((uint32_t)(EAX));
  /* 12296b7c call 0x1229ac90 */
  push32(0x12296b81u); f_1229ac90();
  /* 12296b81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296b84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12296b87 push ecx */
  push32((uint32_t)(ECX));
  /* 12296b88 call dword ptr [0x122c3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3304))), 0x12296b8eu);
  /* 12296b8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296b91 jmp 0x12296b95 */
  goto L_12296b95;
L_12296b93:;
  /* 12296b93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12296b95:;
  /* 12296b95 mov esp, ebp */
  ESP = (EBP);
  /* 12296b97 pop ebp */
  EBP = (pop32());
  /* 12296b98 ret  */
  ESPCHK(0x12296980u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x12296ba0 (77 bytes, 25 insns) */
void f_12296ba0(void) {
  FTRACE(0x12296ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12296ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12296ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12296ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296ba5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12296baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12296bac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296bb0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12296bb3 push eax */
  push32((uint32_t)(EAX));
  /* 12296bb4 call dword ptr [0x122c331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c331c))), 0x12296bbau);
  /* 12296bba mov dword ptr [0x122c1fac], eax */
  w32((uint32_t)(0x122c1fac), (EAX));
  /* 12296bbf cmp dword ptr [0x122c1fac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c1fac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296bc6 jne 0x12296bcc */
  if (!C.zf) goto L_12296bcc;
  /* 12296bc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12296bca jmp 0x12296beb */
  goto L_12296beb;
L_12296bcc:;
  /* 12296bcc call 0x12298650 */
  push32(0x12296bd1u); f_12298650();
  /* 12296bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12296bd3 jne 0x12296be6 */
  if (!C.zf) goto L_12296be6;
  /* 12296bd5 mov ecx, dword ptr [0x122c1fac] */
  ECX = (r32((uint32_t)(0x122c1fac)));
  /* 12296bdb push ecx */
  push32((uint32_t)(ECX));
  /* 12296bdc call dword ptr [0x122c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3318))), 0x12296be2u);
  /* 12296be2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12296be4 jmp 0x12296beb */
  goto L_12296beb;
L_12296be6:;
  /* 12296be6 mov eax, 1 */
  EAX = (0x1u);
L_12296beb:;
  /* 12296beb pop ebp */
  EBP = (pop32());
  /* 12296bec ret  */
  ESPCHK(0x12296ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x12296bf0 (156 bytes, 48 insns) */
void f_12296bf0(void) {
  FTRACE(0x12296bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12296bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12296bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12296bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12296bf6 mov eax, dword ptr [0x122c1fa8] */
  EAX = (r32((uint32_t)(0x122c1fa8)));
  /* 12296bfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12296bfe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12296c05 jmp 0x12296c10 */
  goto L_12296c10;
L_12296c07:;
  /* 12296c07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296c0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296c0d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12296c10:;
  /* 12296c10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296c13 cmp edx, dword ptr [0x122c1fa4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x122c1fa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296c19 jge 0x12296c66 */
  if ((C.sf==C.of)) goto L_12296c66;
  /* 12296c1b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12296c20 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12296c25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296c28 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12296c2b push ecx */
  push32((uint32_t)(ECX));
  /* 12296c2c call dword ptr [0x122c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3324))), 0x12296c32u);
  /* 12296c32 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12296c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296c39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296c3c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12296c3f push eax */
  push32((uint32_t)(EAX));
  /* 12296c40 call dword ptr [0x122c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3324))), 0x12296c46u);
  /* 12296c46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296c49 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12296c4c push edx */
  push32((uint32_t)(EDX));
  /* 12296c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12296c4f mov eax, dword ptr [0x122c1fac] */
  EAX = (r32((uint32_t)(0x122c1fac)));
  /* 12296c54 push eax */
  push32((uint32_t)(EAX));
  /* 12296c55 call dword ptr [0x122c3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3320))), 0x12296c5bu);
  /* 12296c5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296c5e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296c61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12296c64 jmp 0x12296c07 */
  goto L_12296c07;
L_12296c66:;
  /* 12296c66 mov edx, dword ptr [0x122c1fa8] */
  EDX = (r32((uint32_t)(0x122c1fa8)));
  /* 12296c6c push edx */
  push32((uint32_t)(EDX));
  /* 12296c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12296c6f mov eax, dword ptr [0x122c1fac] */
  EAX = (r32((uint32_t)(0x122c1fac)));
  /* 12296c74 push eax */
  push32((uint32_t)(EAX));
  /* 12296c75 call dword ptr [0x122c3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3320))), 0x12296c7bu);
  /* 12296c7b mov ecx, dword ptr [0x122c1fac] */
  ECX = (r32((uint32_t)(0x122c1fac)));
  /* 12296c81 push ecx */
  push32((uint32_t)(ECX));
  /* 12296c82 call dword ptr [0x122c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3318))), 0x12296c88u);
  /* 12296c88 mov esp, ebp */
  ESP = (EBP);
  /* 12296c8a pop ebp */
  EBP = (pop32());
  /* 12296c8b ret  */
  ESPCHK(0x12296bf0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12296c90 (73 bytes, 19 insns) */
void f_12296c90(void) {
  FTRACE(0x12296c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12296c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12296c91 mov ebp, esp */
  EBP = (ESP);
  /* 12296c93 cmp dword ptr [0x122c05f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c05f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296c9a je 0x12296cae */
  if (C.zf) goto L_12296cae;
  /* 12296c9c cmp dword ptr [0x122c05f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c05f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296ca3 jne 0x12296cd7 */
  if (!C.zf) goto L_12296cd7;
  /* 12296ca5 cmp dword ptr [0x122c05f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c05f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296cac jne 0x12296cd7 */
  if (!C.zf) goto L_12296cd7;
L_12296cae:;
  /* 12296cae push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12296cb3 call 0x12296ce0 */
  push32(0x12296cb8u); f_12296ce0();
  /* 12296cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296cbb cmp dword ptr [0x122c0760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296cc2 je 0x12296cca */
  if (C.zf) goto L_12296cca;
  /* 12296cc4 call dword ptr [0x122c0760] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c0760))), 0x12296ccau);
L_12296cca:;
  /* 12296cca push 0xff */
  push32((uint32_t)(0xffu));
  /* 12296ccf call 0x12296ce0 */
  push32(0x12296cd4u); f_12296ce0();
  /* 12296cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12296cd7:;
  /* 12296cd7 pop ebp */
  EBP = (pop32());
  /* 12296cd8 ret  */
  ESPCHK(0x12296c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x12296ce0 (447 bytes, 131 insns) */
void f_12296ce0(void) {
  FTRACE(0x12296ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12296ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12296ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12296ce3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12296ce9 push ebx */
  push32((uint32_t)(EBX));
  /* 12296cea push esi */
  push32((uint32_t)(ESI));
  /* 12296ceb push edi */
  push32((uint32_t)(EDI));
  /* 12296cec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12296cf3 jmp 0x12296cfe */
  goto L_12296cfe;
L_12296cf5:;
  /* 12296cf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296cf8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296cfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12296cfe:;
  /* 12296cfe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296d02 jae 0x12296d17 */
  if (!C.cf) goto L_12296d17;
  /* 12296d04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296d07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12296d0a cmp edx, dword ptr [ecx*8 + 0x122beab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x122beab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296d11 jne 0x12296d15 */
  if (!C.zf) goto L_12296d15;
  /* 12296d13 jmp 0x12296d17 */
  goto L_12296d17;
L_12296d15:;
  /* 12296d15 jmp 0x12296cf5 */
  goto L_12296cf5;
L_12296d17:;
  /* 12296d17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296d1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12296d1d cmp ecx, dword ptr [eax*8 + 0x122beab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x122beab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296d24 jne 0x12296e98 */
  if (!C.zf) goto L_12296e98;
  /* 12296d2a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296d31 je 0x12296d54 */
  if (C.zf) goto L_12296d54;
  /* 12296d33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296d36 mov eax, dword ptr [edx*8 + 0x122beab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x122beab4)));
  /* 12296d3d push eax */
  push32((uint32_t)(EAX));
  /* 12296d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12296d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296d44 push 1 */
  push32((uint32_t)(0x1u));
  /* 12296d46 call 0x12293470 */
  push32(0x12296d4bu); f_12293470();
  /* 12296d4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296d4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296d51 jne 0x12296d54 */
  if (!C.zf) goto L_12296d54;
  /* 12296d53 int3  */
  x86_unimpl("int3 @ 0x12296d53");
L_12296d54:;
  /* 12296d54 cmp dword ptr [0x122c05f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c05f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296d5b je 0x12296d6f */
  if (C.zf) goto L_12296d6f;
  /* 12296d5d cmp dword ptr [0x122c05f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c05f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296d64 jne 0x12296da8 */
  if (!C.zf) goto L_12296da8;
  /* 12296d66 cmp dword ptr [0x122c05f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122c05f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296d6d jne 0x12296da8 */
  if (!C.zf) goto L_12296da8;
L_12296d6f:;
  /* 12296d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12296d71 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12296d74 push ecx */
  push32((uint32_t)(ECX));
  /* 12296d75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296d78 mov eax, dword ptr [edx*8 + 0x122beab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x122beab4)));
  /* 12296d7f push eax */
  push32((uint32_t)(EAX));
  /* 12296d80 call 0x122971e0 */
  push32(0x12296d85u); f_122971e0();
  /* 12296d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296d88 push eax */
  push32((uint32_t)(EAX));
  /* 12296d89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296d8c mov edx, dword ptr [ecx*8 + 0x122beab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x122beab4)));
  /* 12296d93 push edx */
  push32((uint32_t)(EDX));
  /* 12296d94 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12296d96 call dword ptr [0x122c329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c329c))), 0x12296d9cu);
  /* 12296d9c push eax */
  push32((uint32_t)(EAX));
  /* 12296d9d call dword ptr [0x122c32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32a0))), 0x12296da3u);
  /* 12296da3 jmp 0x12296e98 */
  goto L_12296e98;
L_12296da8:;
  /* 12296da8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296daf je 0x12296e98 */
  if (C.zf) goto L_12296e98;
  /* 12296db5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12296dba lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12296dc0 push eax */
  push32((uint32_t)(EAX));
  /* 12296dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296dc3 call dword ptr [0x122c32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32b8))), 0x12296dc9u);
  /* 12296dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12296dcb jne 0x12296de1 */
  if (!C.zf) goto L_12296de1;
  /* 12296dcd push 0x122bb714 */
  push32((uint32_t)(0x122bb714u));
  /* 12296dd2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12296dd8 push ecx */
  push32((uint32_t)(ECX));
  /* 12296dd9 call 0x12297360 */
  push32(0x12296ddeu); f_12297360();
  /* 12296dde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12296de1:;
  /* 12296de1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12296de7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12296dea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296ded push eax */
  push32((uint32_t)(EAX));
  /* 12296dee call 0x122971e0 */
  push32(0x12296df3u); f_122971e0();
  /* 12296df3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296df6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296df9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296dfc jbe 0x12296e2a */
  if ((C.cf||C.zf)) goto L_12296e2a;
  /* 12296dfe lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12296e04 push ecx */
  push32((uint32_t)(ECX));
  /* 12296e05 call 0x122971e0 */
  push32(0x12296e0au); f_122971e0();
  /* 12296e0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296e0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296e10 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12296e14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12296e17 push 3 */
  push32((uint32_t)(0x3u));
  /* 12296e19 push 0x122bb710 */
  push32((uint32_t)(0x122bb710u));
  /* 12296e1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296e21 push ecx */
  push32((uint32_t)(ECX));
  /* 12296e22 call 0x12297bd0 */
  push32(0x12296e27u); f_12297bd0();
  /* 12296e27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12296e2a:;
  /* 12296e2a push 0x122bc168 */
  push32((uint32_t)(0x122bc168u));
  /* 12296e2f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12296e35 push edx */
  push32((uint32_t)(EDX));
  /* 12296e36 call 0x12297360 */
  push32(0x12296e3bu); f_12297360();
  /* 12296e3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296e3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296e41 push eax */
  push32((uint32_t)(EAX));
  /* 12296e42 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12296e48 push ecx */
  push32((uint32_t)(ECX));
  /* 12296e49 call 0x12297370 */
  push32(0x12296e4eu); f_12297370();
  /* 12296e4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296e51 push 0x122bb688 */
  push32((uint32_t)(0x122bb688u));
  /* 12296e56 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12296e5c push edx */
  push32((uint32_t)(EDX));
  /* 12296e5d call 0x12297370 */
  push32(0x12296e62u); f_12297370();
  /* 12296e62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296e65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296e68 mov ecx, dword ptr [eax*8 + 0x122beab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x122beab4)));
  /* 12296e6f push ecx */
  push32((uint32_t)(ECX));
  /* 12296e70 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12296e76 push edx */
  push32((uint32_t)(EDX));
  /* 12296e77 call 0x12297370 */
  push32(0x12296e7cu); f_12297370();
  /* 12296e7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296e7f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12296e84 push 0x122bc140 */
  push32((uint32_t)(0x122bc140u));
  /* 12296e89 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12296e8f push eax */
  push32((uint32_t)(EAX));
  /* 12296e90 call 0x12297b10 */
  push32(0x12296e95u); f_12297b10();
  /* 12296e95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12296e98:;
  /* 12296e98 pop edi */
  EDI = (pop32());
  /* 12296e99 pop esi */
  ESI = (pop32());
  /* 12296e9a pop ebx */
  EBX = (pop32());
  /* 12296e9b mov esp, ebp */
  ESP = (EBP);
  /* 12296e9d pop ebp */
  EBP = (pop32());
  /* 12296e9e ret  */
  ESPCHK(0x12296ce0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12296ea0 (80 bytes, 27 insns) */
void f_12296ea0(void) {
  FTRACE(0x12296ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12296ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12296ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12296ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 12296ea4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12296eab jmp 0x12296eb6 */
  goto L_12296eb6;
L_12296ead:;
  /* 12296ead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296eb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296eb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12296eb6:;
  /* 12296eb6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296eba jae 0x12296ecf */
  if (!C.cf) goto L_12296ecf;
  /* 12296ebc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296ebf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12296ec2 cmp edx, dword ptr [ecx*8 + 0x122beab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x122beab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296ec9 jne 0x12296ecd */
  if (!C.zf) goto L_12296ecd;
  /* 12296ecb jmp 0x12296ecf */
  goto L_12296ecf;
L_12296ecd:;
  /* 12296ecd jmp 0x12296ead */
  goto L_12296ead;
L_12296ecf:;
  /* 12296ecf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296ed2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12296ed5 cmp ecx, dword ptr [eax*8 + 0x122beab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x122beab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296edc jne 0x12296eea */
  if (!C.zf) goto L_12296eea;
  /* 12296ede mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296ee1 mov eax, dword ptr [edx*8 + 0x122beab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x122beab4)));
  /* 12296ee8 jmp 0x12296eec */
  goto L_12296eec;
L_12296eea:;
  /* 12296eea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12296eec:;
  /* 12296eec mov esp, ebp */
  ESP = (EBP);
  /* 12296eee pop ebp */
  EBP = (pop32());
  /* 12296eef ret  */
  ESPCHK(0x12296ea0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12296ef0 (66 bytes, 28 insns) */
void f_12296ef0(void) {
  FTRACE(0x12296ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12296ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12296ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12296ef3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296ef7 jne 0x12296f17 */
  if (!C.zf) goto L_12296f17;
  /* 12296ef9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296efd jge 0x12296f17 */
  if ((C.sf==C.of)) goto L_12296f17;
  /* 12296eff push 1 */
  push32((uint32_t)(0x1u));
  /* 12296f01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12296f04 push eax */
  push32((uint32_t)(EAX));
  /* 12296f05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12296f08 push ecx */
  push32((uint32_t)(ECX));
  /* 12296f09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12296f0c push edx */
  push32((uint32_t)(EDX));
  /* 12296f0d call 0x12296f40 */
  push32(0x12296f12u); f_12296f40();
  /* 12296f12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12296f15 jmp 0x12296f2d */
  goto L_12296f2d;
L_12296f17:;
  /* 12296f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12296f19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12296f1c push eax */
  push32((uint32_t)(EAX));
  /* 12296f1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12296f20 push ecx */
  push32((uint32_t)(ECX));
  /* 12296f21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12296f24 push edx */
  push32((uint32_t)(EDX));
  /* 12296f25 call 0x12296f40 */
  push32(0x12296f2au); f_12296f40();
  /* 12296f2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12296f2d:;
  /* 12296f2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12296f30 pop ebp */
  EBP = (pop32());
  /* 12296f31 ret  */
  ESPCHK(0x12296ef0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12296f40 (194 bytes, 71 insns) */
void f_12296f40(void) {
  FTRACE(0x12296f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12296f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12296f41 mov ebp, esp */
  EBP = (ESP);
  /* 12296f43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12296f46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12296f49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12296f4c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296f50 je 0x12296f69 */
  if (C.zf) goto L_12296f69;
  /* 12296f52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296f55 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12296f58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296f5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296f5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12296f61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12296f64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12296f66 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12296f69:;
  /* 12296f69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296f6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12296f6f:;
  /* 12296f6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12296f72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12296f74 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12296f77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12296f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12296f7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12296f7f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12296f82 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12296f85 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296f89 jbe 0x12296fa1 */
  if ((C.cf||C.zf)) goto L_12296fa1;
  /* 12296f8b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296f8e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296f91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296f94 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12296f96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296f99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296f9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12296f9f jmp 0x12296fb5 */
  goto L_12296fb5;
L_12296fa1:;
  /* 12296fa1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12296fa4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296fa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296faa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12296fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296faf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296fb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12296fb5:;
  /* 12296fb5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296fb9 ja 0x12296f6f */
  if ((!C.cf&&!C.zf)) goto L_12296f6f;
  /* 12296fbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296fbe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12296fc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296fc4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12296fc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12296fca:;
  /* 12296fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296fcd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12296fcf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12296fd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296fd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296fd8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12296fda mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12296fdc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296fdf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12296fe2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12296fe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12296fe7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12296fea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12296fed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296ff0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12296ff3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12296ff6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12296ff9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12296ffc jb 0x12296fca */
  if (C.cf) goto L_12296fca;
  /* 12296ffe mov esp, ebp */
  ESP = (EBP);
  /* 12297000 pop ebp */
  EBP = (pop32());
  /* 12297001 ret  */
  ESPCHK(0x12296f40u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12297010 (63 bytes, 24 insns) */
void f_12297010(void) {
  FTRACE(0x12297010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297010 push ebp */
  push32((uint32_t)(EBP));
  /* 12297011 mov ebp, esp */
  EBP = (ESP);
  /* 12297013 push ecx */
  push32((uint32_t)(ECX));
  /* 12297014 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297018 jne 0x12297029 */
  if (!C.zf) goto L_12297029;
  /* 1229701a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229701e jge 0x12297029 */
  if ((C.sf==C.of)) goto L_12297029;
  /* 12297020 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12297027 jmp 0x12297030 */
  goto L_12297030;
L_12297029:;
  /* 12297029 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12297030:;
  /* 12297030 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297033 push eax */
  push32((uint32_t)(EAX));
  /* 12297034 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12297037 push ecx */
  push32((uint32_t)(ECX));
  /* 12297038 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229703b push edx */
  push32((uint32_t)(EDX));
  /* 1229703c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229703f push eax */
  push32((uint32_t)(EAX));
  /* 12297040 call 0x12296f40 */
  push32(0x12297045u); f_12296f40();
  /* 12297045 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12297048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229704b mov esp, ebp */
  ESP = (EBP);
  /* 1229704d pop ebp */
  EBP = (pop32());
  /* 1229704e ret  */
  ESPCHK(0x12297010u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12297050 (30 bytes, 14 insns) */
void f_12297050(void) {
  FTRACE(0x12297050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297050 push ebp */
  push32((uint32_t)(EBP));
  /* 12297051 mov ebp, esp */
  EBP = (ESP);
  /* 12297053 push 0 */
  push32((uint32_t)(0x0u));
  /* 12297055 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12297058 push eax */
  push32((uint32_t)(EAX));
  /* 12297059 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229705c push ecx */
  push32((uint32_t)(ECX));
  /* 1229705d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297060 push edx */
  push32((uint32_t)(EDX));
  /* 12297061 call 0x12296f40 */
  push32(0x12297066u); f_12296f40();
  /* 12297066 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12297069 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229706c pop ebp */
  EBP = (pop32());
  /* 1229706d ret  */
  ESPCHK(0x12297050u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12297070 (72 bytes, 28 insns) */
void f_12297070(void) {
  FTRACE(0x12297070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297070 push ebp */
  push32((uint32_t)(EBP));
  /* 12297071 mov ebp, esp */
  EBP = (ESP);
  /* 12297073 push ecx */
  push32((uint32_t)(ECX));
  /* 12297074 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297078 jne 0x12297091 */
  if (!C.zf) goto L_12297091;
  /* 1229707a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229707e jg 0x12297091 */
  if ((!C.zf&&C.sf==C.of)) goto L_12297091;
  /* 12297080 jl 0x12297088 */
  if ((C.sf!=C.of)) goto L_12297088;
  /* 12297082 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297086 jae 0x12297091 */
  if (!C.cf) goto L_12297091;
L_12297088:;
  /* 12297088 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1229708f jmp 0x12297098 */
  goto L_12297098;
L_12297091:;
  /* 12297091 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12297098:;
  /* 12297098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229709b push eax */
  push32((uint32_t)(EAX));
  /* 1229709c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1229709f push ecx */
  push32((uint32_t)(ECX));
  /* 122970a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122970a3 push edx */
  push32((uint32_t)(EDX));
  /* 122970a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122970a7 push eax */
  push32((uint32_t)(EAX));
  /* 122970a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122970ab push ecx */
  push32((uint32_t)(ECX));
  /* 122970ac call 0x122970c0 */
  push32(0x122970b1u); f_122970c0();
  /* 122970b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122970b4 mov esp, ebp */
  ESP = (EBP);
  /* 122970b6 pop ebp */
  EBP = (pop32());
  /* 122970b7 ret  */
  ESPCHK(0x12297070u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x122970c0 (242 bytes, 91 insns) */
void f_122970c0(void) {
  FTRACE(0x122970c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122970c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122970c1 mov ebp, esp */
  EBP = (ESP);
  /* 122970c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122970c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122970c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122970cc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122970d0 je 0x122970f4 */
  if (C.zf) goto L_122970f4;
  /* 122970d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122970d5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 122970d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122970db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122970de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122970e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122970e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122970e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122970e9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122970ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122970ee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122970f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_122970f4:;
  /* 122970f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122970f7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_122970fa:;
  /* 122970fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122970fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122970ff push ecx */
  push32((uint32_t)(ECX));
  /* 12297100 push eax */
  push32((uint32_t)(EAX));
  /* 12297101 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12297104 push edx */
  push32((uint32_t)(EDX));
  /* 12297105 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297108 push eax */
  push32((uint32_t)(EAX));
  /* 12297109 call 0x1229b040 */
  push32(0x1229710eu); f_1229b040();
  /* 1229710e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12297111 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12297114 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12297116 push edx */
  push32((uint32_t)(EDX));
  /* 12297117 push ecx */
  push32((uint32_t)(ECX));
  /* 12297118 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229711b push eax */
  push32((uint32_t)(EAX));
  /* 1229711c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229711f push ecx */
  push32((uint32_t)(ECX));
  /* 12297120 call 0x1229afd0 */
  push32(0x12297125u); f_1229afd0();
  /* 12297125 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12297128 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1229712b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229712f jbe 0x12297147 */
  if ((C.cf||C.zf)) goto L_12297147;
  /* 12297131 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12297134 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229713a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1229713c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229713f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297142 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12297145 jmp 0x1229715b */
  goto L_1229715b;
L_12297147:;
  /* 12297147 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229714a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229714d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297150 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12297152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297155 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297158 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1229715b:;
  /* 1229715b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229715f ja 0x122970fa */
  if ((!C.cf&&!C.zf)) goto L_122970fa;
  /* 12297161 jb 0x12297169 */
  if (C.cf) goto L_12297169;
  /* 12297163 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297167 ja 0x122970fa */
  if ((!C.cf&&!C.zf)) goto L_122970fa;
L_12297169:;
  /* 12297169 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229716c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1229716f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297172 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297175 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12297178:;
  /* 12297178 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229717b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1229717d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12297180 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297183 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297186 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12297188 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1229718a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229718d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12297190 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12297192 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297195 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297198 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1229719b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229719e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122971a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122971a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122971a7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122971aa jb 0x12297178 */
  if (C.cf) goto L_12297178;
  /* 122971ac mov esp, ebp */
  ESP = (EBP);
  /* 122971ae pop ebp */
  EBP = (pop32());
  /* 122971af ret 0x14 */
  ESPCHK(0x122970c0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x122971c0 (31 bytes, 15 insns) */
void f_122971c0(void) {
  FTRACE(0x122971c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122971c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122971c1 mov ebp, esp */
  EBP = (ESP);
  /* 122971c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122971c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122971c8 push eax */
  push32((uint32_t)(EAX));
  /* 122971c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122971cc push ecx */
  push32((uint32_t)(ECX));
  /* 122971cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122971d0 push edx */
  push32((uint32_t)(EDX));
  /* 122971d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122971d4 push eax */
  push32((uint32_t)(EAX));
  /* 122971d5 call 0x122970c0 */
  push32(0x122971dau); f_122970c0();
  /* 122971da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122971dd pop ebp */
  EBP = (pop32());
  /* 122971de ret  */
  ESPCHK(0x122971c0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x122971e0 (123 bytes, 44 insns) */
void f_122971e0(void) {
  FTRACE(0x122971e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122971e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 122971e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 122971ea je 0x12297200 */
  if (C.zf) goto L_12297200;
L_122971ec:;
  /* 122971ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 122971ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 122971ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 122971f1 je 0x12297233 */
  if (C.zf) goto L_12297233;
  /* 122971f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 122971f9 jne 0x122971ec */
  if (!C.zf) goto L_122971ec;
  /* 122971fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12297200:;
  /* 12297200 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12297202 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12297207 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297209 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1229720c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1229720e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297211 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12297216 je 0x12297200 */
  if (C.zf) goto L_12297200;
  /* 12297218 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1229721b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1229721d je 0x12297251 */
  if (C.zf) goto L_12297251;
  /* 1229721f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12297221 je 0x12297247 */
  if (C.zf) goto L_12297247;
  /* 12297223 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12297228 je 0x1229723d */
  if (C.zf) goto L_1229723d;
  /* 1229722a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1229722f je 0x12297233 */
  if (C.zf) goto L_12297233;
  /* 12297231 jmp 0x12297200 */
  goto L_12297200;
L_12297233:;
  /* 12297233 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12297236 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1229723a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229723c ret  */
  ESPCHK(0x122971e0u, _esp0);
  ESP += 4; return;
L_1229723d:;
  /* 1229723d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12297240 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12297244 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297246 ret  */
  ESPCHK(0x122971e0u, _esp0);
  ESP += 4; return;
L_12297247:;
  /* 12297247 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1229724a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1229724e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297250 ret  */
  ESPCHK(0x122971e0u, _esp0);
  ESP += 4; return;
L_12297251:;
  /* 12297251 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12297254 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12297258 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229725a ret  */
  ESPCHK(0x122971e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007260 @ 0x12297260 (249 bytes, 93 insns) */
void f_12297260(void) {
  FTRACE(0x12297260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297260 push ebp */
  push32((uint32_t)(EBP));
  /* 12297261 mov ebp, esp */
  EBP = (ESP);
  /* 12297263 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297266 push ebx */
  push32((uint32_t)(EBX));
  /* 12297267 push esi */
  push32((uint32_t)(ESI));
  /* 12297268 push edi */
  push32((uint32_t)(EDI));
  /* 12297269 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1229726c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1229726f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12297272 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12297275:;
  /* 12297275 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297279 jne 0x12297299 */
  if (!C.zf) goto L_12297299;
  /* 1229727b push 0x122bc1a0 */
  push32((uint32_t)(0x122bc1a0u));
  /* 12297280 push 0 */
  push32((uint32_t)(0x0u));
  /* 12297282 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12297284 push 0x122bc194 */
  push32((uint32_t)(0x122bc194u));
  /* 12297289 push 2 */
  push32((uint32_t)(0x2u));
  /* 1229728b call 0x12293470 */
  push32(0x12297290u); f_12293470();
  /* 12297290 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12297293 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297296 jne 0x12297299 */
  if (!C.zf) goto L_12297299;
  /* 12297298 int3  */
  x86_unimpl("int3 @ 0x12297298");
L_12297299:;
  /* 12297299 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229729b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229729d jne 0x12297275 */
  if (!C.zf) goto L_12297275;
L_1229729f:;
  /* 1229729f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122972a3 jne 0x122972c3 */
  if (!C.zf) goto L_122972c3;
  /* 122972a5 push 0x122bc184 */
  push32((uint32_t)(0x122bc184u));
  /* 122972aa push 0 */
  push32((uint32_t)(0x0u));
  /* 122972ac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 122972ae push 0x122bc194 */
  push32((uint32_t)(0x122bc194u));
  /* 122972b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 122972b5 call 0x12293470 */
  push32(0x122972bau); f_12293470();
  /* 122972ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122972bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122972c0 jne 0x122972c3 */
  if (!C.zf) goto L_122972c3;
  /* 122972c2 int3  */
  x86_unimpl("int3 @ 0x122972c2");
L_122972c3:;
  /* 122972c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122972c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122972c7 jne 0x1229729f */
  if (!C.zf) goto L_1229729f;
  /* 122972c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122972cc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 122972d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122972d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122972d9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 122972dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122972df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122972e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 122972e4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122972e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122972ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 122972ed mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122972f0 push edx */
  push32((uint32_t)(EDX));
  /* 122972f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122972f4 push eax */
  push32((uint32_t)(EAX));
  /* 122972f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122972f8 push ecx */
  push32((uint32_t)(ECX));
  /* 122972f9 call 0x1229b340 */
  push32(0x122972feu); f_1229b340();
  /* 122972fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12297301 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12297304 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12297307 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1229730a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229730d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12297310 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12297313 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12297316 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229731a jl 0x1229733e */
  if ((C.sf!=C.of)) goto L_1229733e;
  /* 1229731c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229731f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12297321 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12297324 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12297326 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1229732c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1229732f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12297332 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12297334 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297337 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229733a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1229733c jmp 0x1229734f */
  goto L_1229734f;
L_1229733e:;
  /* 1229733e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12297341 push eax */
  push32((uint32_t)(EAX));
  /* 12297342 push 0 */
  push32((uint32_t)(0x0u));
  /* 12297344 call 0x1229b0c0 */
  push32(0x12297349u); f_1229b0c0();
  /* 12297349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229734c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1229734f:;
  /* 1229734f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12297352 pop edi */
  EDI = (pop32());
  /* 12297353 pop esi */
  ESI = (pop32());
  /* 12297354 pop ebx */
  EBX = (pop32());
  /* 12297355 mov esp, ebp */
  ESP = (EBP);
  /* 12297357 pop ebp */
  EBP = (pop32());
  /* 12297358 ret  */
  ESPCHK(0x12297260u, _esp0);
  ESP += 4; return;
}

/* FUN_10007360 @ 0x12297360 (7 bytes, 3 insns) */
void f_12297360(void) {
  FTRACE(0x12297360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297360 push edi */
  push32((uint32_t)(EDI));
  /* 12297361 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12297365 jmp 0x122973d1 */
  jmp_ind(0x122973d1u); return;
}

/* FUN_10007370 @ 0x12297370 (224 bytes, 84 insns) */
void f_12297370(void) {
  FTRACE(0x12297370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297370 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12297374 push edi */
  push32((uint32_t)(EDI));
  /* 12297375 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1229737b je 0x1229738c */
  if (C.zf) goto L_1229738c;
L_1229737d:;
  /* 1229737d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1229737f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12297380 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12297382 je 0x122973bf */
  if (C.zf) goto L_122973bf;
  /* 12297384 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1229738a jne 0x1229737d */
  if (!C.zf) goto L_1229737d;
L_1229738c:;
  /* 1229738c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1229738e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12297393 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297395 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12297398 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1229739a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229739d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 122973a2 je 0x1229738c */
  if (C.zf) goto L_1229738c;
  /* 122973a4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 122973a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 122973a9 je 0x122973ce */
  if (C.zf) goto L_122973ce;
  /* 122973ab test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 122973ad je 0x122973c9 */
  if (C.zf) goto L_122973c9;
  /* 122973af test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 122973b4 je 0x122973c4 */
  if (C.zf) goto L_122973c4;
  /* 122973b6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 122973bb je 0x122973bf */
  if (C.zf) goto L_122973bf;
  /* 122973bd jmp 0x1229738c */
  goto L_1229738c;
L_122973bf:;
  /* 122973bf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 122973c2 jmp 0x122973d1 */
  goto L_122973d1;
L_122973c4:;
  /* 122973c4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 122973c7 jmp 0x122973d1 */
  goto L_122973d1;
L_122973c9:;
  /* 122973c9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 122973cc jmp 0x122973d1 */
  goto L_122973d1;
L_122973ce:;
  /* 122973ce lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_122973d1:;
  /* 122973d1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 122973d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 122973db je 0x122973f6 */
  if (C.zf) goto L_122973f6;
L_122973dd:;
  /* 122973dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122973df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 122973e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 122973e2 je 0x12297448 */
  if (C.zf) goto L_12297448;
  /* 122973e4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 122973e6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122973e7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 122973ed jne 0x122973dd */
  if (!C.zf) goto L_122973dd;
  /* 122973ef jmp 0x122973f6 */
  goto L_122973f6;
L_122973f1:;
  /* 122973f1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 122973f3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_122973f6:;
  /* 122973f6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 122973fb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 122973fd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122973ff xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12297402 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12297404 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12297406 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297409 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1229740e je 0x122973f1 */
  if (C.zf) goto L_122973f1;
  /* 12297410 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12297412 je 0x12297448 */
  if (C.zf) goto L_12297448;
  /* 12297414 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12297416 je 0x1229743f */
  if (C.zf) goto L_1229743f;
  /* 12297418 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1229741e je 0x12297432 */
  if (C.zf) goto L_12297432;
  /* 12297420 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12297426 je 0x1229742a */
  if (C.zf) goto L_1229742a;
  /* 12297428 jmp 0x122973f1 */
  goto L_122973f1;
L_1229742a:;
  /* 1229742a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1229742c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12297430 pop edi */
  EDI = (pop32());
  /* 12297431 ret  */
  ESPCHK(0x12297370u, _esp0);
  ESP += 4; return;
L_12297432:;
  /* 12297432 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12297435 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12297439 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1229743d pop edi */
  EDI = (pop32());
  /* 1229743e ret  */
  ESPCHK(0x12297370u, _esp0);
  ESP += 4; return;
L_1229743f:;
  /* 1229743f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12297442 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12297446 pop edi */
  EDI = (pop32());
  /* 12297447 ret  */
  ESPCHK(0x12297370u, _esp0);
  ESP += 4; return;
L_12297448:;
  /* 12297448 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1229744a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1229744e pop edi */
  EDI = (pop32());
  /* 1229744f ret  */
  ESPCHK(0x12297370u, _esp0);
  ESP += 4; return;
}

/* FUN_10007450 @ 0x12297450 (243 bytes, 91 insns) */
void f_12297450(void) {
  FTRACE(0x12297450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297450 push ebp */
  push32((uint32_t)(EBP));
  /* 12297451 mov ebp, esp */
  EBP = (ESP);
  /* 12297453 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297456 push ebx */
  push32((uint32_t)(EBX));
  /* 12297457 push esi */
  push32((uint32_t)(ESI));
  /* 12297458 push edi */
  push32((uint32_t)(EDI));
  /* 12297459 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1229745c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1229745f:;
  /* 1229745f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297463 jne 0x12297483 */
  if (!C.zf) goto L_12297483;
  /* 12297465 push 0x122bc1a0 */
  push32((uint32_t)(0x122bc1a0u));
  /* 1229746a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229746c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1229746e push 0x122bc1b0 */
  push32((uint32_t)(0x122bc1b0u));
  /* 12297473 push 2 */
  push32((uint32_t)(0x2u));
  /* 12297475 call 0x12293470 */
  push32(0x1229747au); f_12293470();
  /* 1229747a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229747d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297480 jne 0x12297483 */
  if (!C.zf) goto L_12297483;
  /* 12297482 int3  */
  x86_unimpl("int3 @ 0x12297482");
L_12297483:;
  /* 12297483 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12297485 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12297487 jne 0x1229745f */
  if (!C.zf) goto L_1229745f;
L_12297489:;
  /* 12297489 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229748d jne 0x122974ad */
  if (!C.zf) goto L_122974ad;
  /* 1229748f push 0x122bc184 */
  push32((uint32_t)(0x122bc184u));
  /* 12297494 push 0 */
  push32((uint32_t)(0x0u));
  /* 12297496 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12297498 push 0x122bc1b0 */
  push32((uint32_t)(0x122bc1b0u));
  /* 1229749d push 2 */
  push32((uint32_t)(0x2u));
  /* 1229749f call 0x12293470 */
  push32(0x122974a4u); f_12293470();
  /* 122974a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122974a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122974aa jne 0x122974ad */
  if (!C.zf) goto L_122974ad;
  /* 122974ac int3  */
  x86_unimpl("int3 @ 0x122974ac");
L_122974ad:;
  /* 122974ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122974af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122974b1 jne 0x12297489 */
  if (!C.zf) goto L_12297489;
  /* 122974b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122974b6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 122974bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122974c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122974c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 122974c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122974c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122974cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 122974ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122974d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122974d4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 122974d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122974da push ecx */
  push32((uint32_t)(ECX));
  /* 122974db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122974de push edx */
  push32((uint32_t)(EDX));
  /* 122974df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122974e2 push eax */
  push32((uint32_t)(EAX));
  /* 122974e3 call 0x1229b340 */
  push32(0x122974e8u); f_1229b340();
  /* 122974e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122974eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122974ee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122974f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122974f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122974f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122974fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 122974fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12297500 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297504 jl 0x12297528 */
  if ((C.sf!=C.of)) goto L_12297528;
  /* 12297506 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12297509 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1229750b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1229750e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12297510 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12297516 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12297519 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229751c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1229751e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297521 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12297524 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12297526 jmp 0x12297539 */
  goto L_12297539;
L_12297528:;
  /* 12297528 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1229752b push edx */
  push32((uint32_t)(EDX));
  /* 1229752c push 0 */
  push32((uint32_t)(0x0u));
  /* 1229752e call 0x1229b0c0 */
  push32(0x12297533u); f_1229b0c0();
  /* 12297533 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12297536 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12297539:;
  /* 12297539 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1229753c pop edi */
  EDI = (pop32());
  /* 1229753d pop esi */
  ESI = (pop32());
  /* 1229753e pop ebx */
  EBX = (pop32());
  /* 1229753f mov esp, ebp */
  ESP = (EBP);
  /* 12297541 pop ebp */
  EBP = (pop32());
  /* 12297542 ret  */
  ESPCHK(0x12297450u, _esp0);
  ESP += 4; return;
}

/* FUN_10007550 @ 0x12297550 (47 bytes, 17 insns) */
void f_12297550(void) {
  FTRACE(0x12297550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297550 push ecx */
  push32((uint32_t)(ECX));
  /* 12297551 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297556 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1229755a jb 0x12297570 */
  if (C.cf) goto L_12297570;
L_1229755c:;
  /* 1229755c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297562 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297567 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12297569 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229756e jae 0x1229755c */
  if (!C.cf) goto L_1229755c;
L_12297570:;
  /* 12297570 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297572 mov eax, esp */
  EAX = (ESP);
  /* 12297574 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12297576 mov esp, ecx */
  ESP = (ECX);
  /* 12297578 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1229757a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1229757d push eax */
  push32((uint32_t)(EAX));
  /* 1229757e ret  */
  ESPCHK(0x12297550u, _esp0);
  ESP += 4; return;
}

/* FUN_10007580 @ 0x12297580 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12297580(void) {
  FTRACE(0x12297580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297580 push ebp */
  push32((uint32_t)(EBP));
  /* 12297581 mov ebp, esp */
  EBP = (ESP);
  /* 12297583 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297586 push esi */
  push32((uint32_t)(ESI));
  /* 12297587 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229758b je 0x12297593 */
  if (C.zf) goto L_12297593;
  /* 1229758d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297591 jne 0x12297598 */
  if (!C.zf) goto L_12297598;
L_12297593:;
  /* 12297593 jmp 0x12297768 */
  goto L_12297768;
L_12297598:;
  /* 12297598 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229759c je 0x122975b4 */
  if (C.zf) goto L_122975b4;
  /* 1229759e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122975a2 je 0x122975b4 */
  if (C.zf) goto L_122975b4;
  /* 122975a4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122975a8 je 0x122975b4 */
  if (C.zf) goto L_122975b4;
  /* 122975aa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122975ae jne 0x12297691 */
  if (!C.zf) goto L_12297691;
L_122975b4:;
  /* 122975b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 122975b6 call 0x12297db0 */
  push32(0x122975bbu); f_12297db0();
  /* 122975bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122975be cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122975c2 je 0x122975ca */
  if (C.zf) goto L_122975ca;
  /* 122975c4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122975c8 jne 0x1229760f */
  if (!C.zf) goto L_1229760f;
L_122975ca:;
  /* 122975ca cmp dword ptr [0x122c0774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122975d1 jne 0x1229760f */
  if (!C.zf) goto L_1229760f;
  /* 122975d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122975d5 push 0x122977b0 */
  push32((uint32_t)(0x122977b0u));
  /* 122975da call dword ptr [0x122c3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3328))), 0x122975e0u);
  /* 122975e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122975e3 jne 0x122975f1 */
  if (!C.zf) goto L_122975f1;
  /* 122975e5 mov dword ptr [0x122c0774], 1 */
  w32((uint32_t)(0x122c0774), (0x1u));
  /* 122975ef jmp 0x1229760f */
  goto L_1229760f;
L_122975f1:;
  /* 122975f1 call dword ptr [0x122c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32e0))), 0x122975f7u);
  /* 122975f7 mov esi, eax */
  ESI = (EAX);
  /* 122975f9 call 0x1229c290 */
  push32(0x122975feu); f_1229c290();
  /* 122975fe mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12297600 push 1 */
  push32((uint32_t)(0x1u));
  /* 12297602 call 0x12297e50 */
  push32(0x12297607u); f_12297e50();
  /* 12297607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229760a jmp 0x12297768 */
  goto L_12297768;
L_1229760f:;
  /* 1229760f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297612 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12297615 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297618 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1229761b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1229761e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297622 ja 0x12297682 */
  if ((!C.cf&&!C.zf)) goto L_12297682;
  /* 12297624 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297627 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12297629 mov dl, byte ptr [eax + 0x1229778f] */
  DL = (r8((uint32_t)(EAX + 0x1229778f)));
  /* 1229762f jmp dword ptr [edx*4 + 0x1229777b] */
  switch (EDX) {
    case 0: goto L_12297636;
    case 1: goto L_12297670;
    case 2: goto L_1229764a;
    case 3: goto L_1229765d;
    case 4: goto L_12297682;
    default: x86_unimpl("switch@0x1229762f out of table"); return;
  }
L_12297636:;
  /* 12297636 mov ecx, dword ptr [0x122c0764] */
  ECX = (r32((uint32_t)(0x122c0764)));
  /* 1229763c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1229763f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12297642 mov dword ptr [0x122c0764], edx */
  w32((uint32_t)(0x122c0764), (EDX));
  /* 12297648 jmp 0x12297682 */
  goto L_12297682;
L_1229764a:;
  /* 1229764a mov eax, dword ptr [0x122c0768] */
  EAX = (r32((uint32_t)(0x122c0768)));
  /* 1229764f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12297652 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12297655 mov dword ptr [0x122c0768], ecx */
  w32((uint32_t)(0x122c0768), (ECX));
  /* 1229765b jmp 0x12297682 */
  goto L_12297682;
L_1229765d:;
  /* 1229765d mov edx, dword ptr [0x122c076c] */
  EDX = (r32((uint32_t)(0x122c076c)));
  /* 12297663 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12297666 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12297669 mov dword ptr [0x122c076c], eax */
  w32((uint32_t)(0x122c076c), (EAX));
  /* 1229766e jmp 0x12297682 */
  goto L_12297682;
L_12297670:;
  /* 12297670 mov ecx, dword ptr [0x122c0770] */
  ECX = (r32((uint32_t)(0x122c0770)));
  /* 12297676 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12297679 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229767c mov dword ptr [0x122c0770], edx */
  w32((uint32_t)(0x122c0770), (EDX));
L_12297682:;
  /* 12297682 push 1 */
  push32((uint32_t)(0x1u));
  /* 12297684 call 0x12297e50 */
  push32(0x12297689u); f_12297e50();
  /* 12297689 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229768c jmp 0x12297763 */
  goto L_12297763;
L_12297691:;
  /* 12297691 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297695 je 0x122976a8 */
  if (C.zf) goto L_122976a8;
  /* 12297697 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229769b je 0x122976a8 */
  if (C.zf) goto L_122976a8;
  /* 1229769d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122976a1 je 0x122976a8 */
  if (C.zf) goto L_122976a8;
  /* 122976a3 jmp 0x12297768 */
  goto L_12297768;
L_122976a8:;
  /* 122976a8 call 0x12293df0 */
  push32(0x122976adu); f_12293df0();
  /* 122976ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122976b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122976b3 cmp dword ptr [eax + 0x50], 0x122bec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x122bec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122976ba jne 0x12297705 */
  if (!C.zf) goto L_12297705;
  /* 122976bc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 122976c1 push 0x122bc1bc */
  push32((uint32_t)(0x122bc1bcu));
  /* 122976c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122976c8 mov ecx, dword ptr [0x122bec80] */
  ECX = (r32((uint32_t)(0x122bec80)));
  /* 122976ce push ecx */
  push32((uint32_t)(ECX));
  /* 122976cf call 0x122943b0 */
  push32(0x122976d4u); f_122943b0();
  /* 122976d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122976d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122976da mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 122976dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122976e0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122976e4 je 0x12297703 */
  if (C.zf) goto L_12297703;
  /* 122976e6 mov ecx, dword ptr [0x122bec80] */
  ECX = (r32((uint32_t)(0x122bec80)));
  /* 122976ec push ecx */
  push32((uint32_t)(ECX));
  /* 122976ed push 0x122bec00 */
  push32((uint32_t)(0x122bec00u));
  /* 122976f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122976f5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 122976f8 push eax */
  push32((uint32_t)(EAX));
  /* 122976f9 call 0x1229ac90 */
  push32(0x122976feu); f_1229ac90();
  /* 122976fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12297701 jmp 0x12297705 */
  goto L_12297705;
L_12297703:;
  /* 12297703 jmp 0x12297768 */
  goto L_12297768;
L_12297705:;
  /* 12297705 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297708 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1229770b push edx */
  push32((uint32_t)(EDX));
  /* 1229770c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229770f push eax */
  push32((uint32_t)(EAX));
  /* 12297710 call 0x12297a90 */
  push32(0x12297715u); f_12297a90();
  /* 12297715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12297718 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1229771b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229771f jne 0x12297723 */
  if (!C.zf) goto L_12297723;
  /* 12297721 jmp 0x12297768 */
  goto L_12297768;
L_12297723:;
  /* 12297723 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297726 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12297729 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1229772c:;
  /* 1229772c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229772f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12297732 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297735 jne 0x12297763 */
  if (!C.zf) goto L_12297763;
  /* 12297737 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229773a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229773d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12297740 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297743 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297746 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12297749 mov edx, dword ptr [0x122bec84] */
  EDX = (r32((uint32_t)(0x122bec84)));
  /* 1229774f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12297752 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297755 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12297758 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229775a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229775d jb 0x12297761 */
  if (C.cf) goto L_12297761;
  /* 1229775f jmp 0x12297763 */
  goto L_12297763;
L_12297761:;
  /* 12297761 jmp 0x1229772c */
  goto L_1229772c;
L_12297763:;
  /* 12297763 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12297766 jmp 0x12297776 */
  goto L_12297776;
L_12297768:;
  /* 12297768 call 0x1229c280 */
  push32(0x1229776du); f_1229c280();
  /* 1229776d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12297773 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12297776:;
  /* 12297776 pop esi */
  ESI = (pop32());
  /* 12297777 mov esp, ebp */
  ESP = (EBP);
  /* 12297779 pop ebp */
  EBP = (pop32());
  /* 1229777a ret  */
  ESPCHK(0x12297580u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x122977b0 (146 bytes, 45 insns) */
void f_122977b0(void) {
  FTRACE(0x122977b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122977b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122977b1 mov ebp, esp */
  EBP = (ESP);
  /* 122977b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122977b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 122977b8 call 0x12297db0 */
  push32(0x122977bdu); f_12297db0();
  /* 122977bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122977c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122977c4 jne 0x122977de */
  if (!C.zf) goto L_122977de;
  /* 122977c6 mov dword ptr [ebp - 8], 0x122c0764 */
  w32((uint32_t)(EBP + -0x8), (0x122c0764u));
  /* 122977cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122977d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122977d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122977d5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 122977dc jmp 0x122977f4 */
  goto L_122977f4;
L_122977de:;
  /* 122977de mov dword ptr [ebp - 8], 0x122c0768 */
  w32((uint32_t)(EBP + -0x8), (0x122c0768u));
  /* 122977e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122977e8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122977ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122977ed mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_122977f4:;
  /* 122977f4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122977f8 jne 0x12297808 */
  if (!C.zf) goto L_12297808;
  /* 122977fa push 1 */
  push32((uint32_t)(0x1u));
  /* 122977fc call 0x12297e50 */
  push32(0x12297801u); f_12297e50();
  /* 12297801 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12297804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12297806 jmp 0x1229783c */
  goto L_1229783c;
L_12297808:;
  /* 12297808 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229780c je 0x1229782d */
  if (C.zf) goto L_1229782d;
  /* 1229780e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297811 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12297817 push 1 */
  push32((uint32_t)(0x1u));
  /* 12297819 call 0x12297e50 */
  push32(0x1229781eu); f_12297e50();
  /* 1229781e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12297821 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297824 push edx */
  push32((uint32_t)(EDX));
  /* 12297825 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12297828u);
  /* 12297828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229782b jmp 0x12297837 */
  goto L_12297837;
L_1229782d:;
  /* 1229782d push 1 */
  push32((uint32_t)(0x1u));
  /* 1229782f call 0x12297e50 */
  push32(0x12297834u); f_12297e50();
  /* 12297834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12297837:;
  /* 12297837 mov eax, 1 */
  EAX = (0x1u);
L_1229783c:;
  /* 1229783c mov esp, ebp */
  ESP = (EBP);
  /* 1229783e pop ebp */
  EBP = (pop32());
  /* 1229783f ret 4 */
  ESPCHK(0x122977b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007850 @ 0x12297850 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12297850(void) {
  FTRACE(0x12297850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297850 push ebp */
  push32((uint32_t)(EBP));
  /* 12297851 mov ebp, esp */
  EBP = (ESP);
  /* 12297853 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297856 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1229785d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297860 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12297863 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12297866 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297869 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1229786c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297870 ja 0x1229791e */
  if ((!C.cf&&!C.zf)) goto L_1229791e;
  /* 12297876 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12297879 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1229787b mov dl, byte ptr [eax + 0x12297a72] */
  DL = (r8((uint32_t)(EAX + 0x12297a72)));
  /* 12297881 jmp dword ptr [edx*4 + 0x12297a5a] */
  switch (EDX) {
    case 0: goto L_12297888;
    case 1: goto L_122978f3;
    case 2: goto L_122978d9;
    case 3: goto L_122978a5;
    case 4: goto L_122978bf;
    case 5: goto L_1229791e;
    default: x86_unimpl("switch@0x12297881 out of table"); return;
  }
L_12297888:;
  /* 12297888 mov dword ptr [ebp - 0x18], 0x122c0764 */
  w32((uint32_t)(EBP + -0x18), (0x122c0764u));
  /* 1229788f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12297892 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12297894 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12297897 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1229789a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229789d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122978a0 jmp 0x12297926 */
  goto L_12297926;
L_122978a5:;
  /* 122978a5 mov dword ptr [ebp - 0x18], 0x122c0768 */
  w32((uint32_t)(EBP + -0x18), (0x122c0768u));
  /* 122978ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122978af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122978b1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 122978b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122978b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122978ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122978bd jmp 0x12297926 */
  goto L_12297926;
L_122978bf:;
  /* 122978bf mov dword ptr [ebp - 0x18], 0x122c076c */
  w32((uint32_t)(EBP + -0x18), (0x122c076cu));
  /* 122978c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122978c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122978cb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 122978ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122978d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122978d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122978d7 jmp 0x12297926 */
  goto L_12297926;
L_122978d9:;
  /* 122978d9 mov dword ptr [ebp - 0x18], 0x122c0770 */
  w32((uint32_t)(EBP + -0x18), (0x122c0770u));
  /* 122978e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122978e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122978e5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 122978e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122978eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122978ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122978f1 jmp 0x12297926 */
  goto L_12297926;
L_122978f3:;
  /* 122978f3 call 0x12293df0 */
  push32(0x122978f8u); f_12293df0();
  /* 122978f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122978fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122978fe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12297901 push edx */
  push32((uint32_t)(EDX));
  /* 12297902 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297905 push eax */
  push32((uint32_t)(EAX));
  /* 12297906 call 0x12297a90 */
  push32(0x1229790bu); f_12297a90();
  /* 1229790b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229790e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297911 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12297914 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12297917 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12297919 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1229791c jmp 0x12297926 */
  goto L_12297926;
L_1229791e:;
  /* 1229791e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12297921 jmp 0x12297a56 */
  goto L_12297a56;
L_12297926:;
  /* 12297926 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229792a je 0x12297936 */
  if (C.zf) goto L_12297936;
  /* 1229792c push 1 */
  push32((uint32_t)(0x1u));
  /* 1229792e call 0x12297db0 */
  push32(0x12297933u); f_12297db0();
  /* 12297933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12297936:;
  /* 12297936 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229793a jne 0x12297953 */
  if (!C.zf) goto L_12297953;
  /* 1229793c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297940 je 0x1229794c */
  if (C.zf) goto L_1229794c;
  /* 12297942 push 1 */
  push32((uint32_t)(0x1u));
  /* 12297944 call 0x12297e50 */
  push32(0x12297949u); f_12297e50();
  /* 12297949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229794c:;
  /* 1229794c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229794e jmp 0x12297a56 */
  goto L_12297a56;
L_12297953:;
  /* 12297953 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297957 jne 0x12297970 */
  if (!C.zf) goto L_12297970;
  /* 12297959 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229795d je 0x12297969 */
  if (C.zf) goto L_12297969;
  /* 1229795f push 1 */
  push32((uint32_t)(0x1u));
  /* 12297961 call 0x12297e50 */
  push32(0x12297966u); f_12297e50();
  /* 12297966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12297969:;
  /* 12297969 push 3 */
  push32((uint32_t)(0x3u));
  /* 1229796b call 0x12293b70 */
  push32(0x12297970u); f_12293b70();
L_12297970:;
  /* 12297970 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297974 je 0x12297982 */
  if (C.zf) goto L_12297982;
  /* 12297976 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229797a je 0x12297982 */
  if (C.zf) goto L_12297982;
  /* 1229797c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297980 jne 0x122979ae */
  if (!C.zf) goto L_122979ae;
L_12297982:;
  /* 12297982 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297985 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12297988 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1229798b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229798e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12297995 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297999 jne 0x122979ae */
  if (!C.zf) goto L_122979ae;
  /* 1229799b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229799e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 122979a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122979a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122979a7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_122979ae:;
  /* 122979ae cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122979b2 jne 0x122979f0 */
  if (!C.zf) goto L_122979f0;
  /* 122979b4 mov eax, dword ptr [0x122bec78] */
  EAX = (r32((uint32_t)(0x122bec78)));
  /* 122979b9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122979bc jmp 0x122979c7 */
  goto L_122979c7;
L_122979be:;
  /* 122979be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122979c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122979c4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122979c7:;
  /* 122979c7 mov edx, dword ptr [0x122bec78] */
  EDX = (r32((uint32_t)(0x122bec78)));
  /* 122979cd add edx, dword ptr [0x122bec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x122bec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122979d3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122979d6 jge 0x122979ee */
  if ((C.sf==C.of)) goto L_122979ee;
  /* 122979d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122979db imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122979de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122979e1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 122979e4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 122979ec jmp 0x122979be */
  goto L_122979be;
L_122979ee:;
  /* 122979ee jmp 0x122979f9 */
  goto L_122979f9;
L_122979f0:;
  /* 122979f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122979f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_122979f9:;
  /* 122979f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122979fd je 0x12297a09 */
  if (C.zf) goto L_12297a09;
  /* 122979ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12297a01 call 0x12297e50 */
  push32(0x12297a06u); f_12297e50();
  /* 12297a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12297a09:;
  /* 12297a09 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297a0d jne 0x12297a20 */
  if (!C.zf) goto L_12297a20;
  /* 12297a0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297a12 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12297a15 push edx */
  push32((uint32_t)(EDX));
  /* 12297a16 push 8 */
  push32((uint32_t)(0x8u));
  /* 12297a18 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12297a1bu);
  /* 12297a1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12297a1e jmp 0x12297a2a */
  goto L_12297a2a;
L_12297a20:;
  /* 12297a20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297a23 push eax */
  push32((uint32_t)(EAX));
  /* 12297a24 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12297a27u);
  /* 12297a27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12297a2a:;
  /* 12297a2a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297a2e je 0x12297a3c */
  if (C.zf) goto L_12297a3c;
  /* 12297a30 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297a34 je 0x12297a3c */
  if (C.zf) goto L_12297a3c;
  /* 12297a36 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297a3a jne 0x12297a54 */
  if (!C.zf) goto L_12297a54;
L_12297a3c:;
  /* 12297a3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297a3f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12297a42 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12297a45 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297a49 jne 0x12297a54 */
  if (!C.zf) goto L_12297a54;
  /* 12297a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297a4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297a51 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12297a54:;
  /* 12297a54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12297a56:;
  /* 12297a56 mov esp, ebp */
  ESP = (EBP);
  /* 12297a58 pop ebp */
  EBP = (pop32());
  /* 12297a59 ret  */
  ESPCHK(0x12297850u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a90 @ 0x12297a90 (91 bytes, 35 insns) */
void f_12297a90(void) {
  FTRACE(0x12297a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12297a91 mov ebp, esp */
  EBP = (ESP);
  /* 12297a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12297a94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12297a97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12297a9a:;
  /* 12297a9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297a9d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12297aa0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297aa3 je 0x12297ac3 */
  if (C.zf) goto L_12297ac3;
  /* 12297aa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297aa8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297aab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12297aae mov ecx, dword ptr [0x122bec84] */
  ECX = (r32((uint32_t)(0x122bec84)));
  /* 12297ab4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12297ab7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12297aba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297abc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297abf jae 0x12297ac3 */
  if (!C.cf) goto L_12297ac3;
  /* 12297ac1 jmp 0x12297a9a */
  goto L_12297a9a;
L_12297ac3:;
  /* 12297ac3 mov eax, dword ptr [0x122bec84] */
  EAX = (r32((uint32_t)(0x122bec84)));
  /* 12297ac8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12297acb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12297ace add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297ad0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297ad3 jae 0x12297ae5 */
  if (!C.cf) goto L_12297ae5;
  /* 12297ad5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297ad8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12297adb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297ade jne 0x12297ae5 */
  if (!C.zf) goto L_12297ae5;
  /* 12297ae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297ae3 jmp 0x12297ae7 */
  goto L_12297ae7;
L_12297ae5:;
  /* 12297ae5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12297ae7:;
  /* 12297ae7 mov esp, ebp */
  ESP = (EBP);
  /* 12297ae9 pop ebp */
  EBP = (pop32());
  /* 12297aea ret  */
  ESPCHK(0x12297a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af0 @ 0x12297af0 (13 bytes, 6 insns) */
void f_12297af0(void) {
  FTRACE(0x12297af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12297af1 mov ebp, esp */
  EBP = (ESP);
  /* 12297af3 call 0x12293df0 */
  push32(0x12297af8u); f_12293df0();
  /* 12297af8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297afb pop ebp */
  EBP = (pop32());
  /* 12297afc ret  */
  ESPCHK(0x12297af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b00 @ 0x12297b00 (13 bytes, 6 insns) */
void f_12297b00(void) {
  FTRACE(0x12297b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12297b01 mov ebp, esp */
  EBP = (ESP);
  /* 12297b03 call 0x12293df0 */
  push32(0x12297b08u); f_12293df0();
  /* 12297b08 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297b0b pop ebp */
  EBP = (pop32());
  /* 12297b0c ret  */
  ESPCHK(0x12297b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b10 @ 0x12297b10 (187 bytes, 54 insns) */
void f_12297b10(void) {
  FTRACE(0x12297b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12297b11 mov ebp, esp */
  EBP = (ESP);
  /* 12297b13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297b16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12297b1d cmp dword ptr [0x122c0778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297b24 jne 0x12297b83 */
  if (!C.zf) goto L_12297b83;
  /* 12297b26 push 0x122bb5e8 */
  push32((uint32_t)(0x122bb5e8u));
  /* 12297b2b call dword ptr [0x122c32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32b0))), 0x12297b31u);
  /* 12297b31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12297b34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297b38 je 0x12297b57 */
  if (C.zf) goto L_12297b57;
  /* 12297b3a push 0x122bc1ec */
  push32((uint32_t)(0x122bc1ecu));
  /* 12297b3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297b42 push eax */
  push32((uint32_t)(EAX));
  /* 12297b43 call dword ptr [0x122c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32ac))), 0x12297b49u);
  /* 12297b49 mov dword ptr [0x122c0778], eax */
  w32((uint32_t)(0x122c0778), (EAX));
  /* 12297b4e cmp dword ptr [0x122c0778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297b55 jne 0x12297b5b */
  if (!C.zf) goto L_12297b5b;
L_12297b57:;
  /* 12297b57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12297b59 jmp 0x12297bc7 */
  goto L_12297bc7;
L_12297b5b:;
  /* 12297b5b push 0x122bc1dc */
  push32((uint32_t)(0x122bc1dcu));
  /* 12297b60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297b63 push ecx */
  push32((uint32_t)(ECX));
  /* 12297b64 call dword ptr [0x122c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32ac))), 0x12297b6au);
  /* 12297b6a mov dword ptr [0x122c077c], eax */
  w32((uint32_t)(0x122c077c), (EAX));
  /* 12297b6f push 0x122bc1c8 */
  push32((uint32_t)(0x122bc1c8u));
  /* 12297b74 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297b77 push edx */
  push32((uint32_t)(EDX));
  /* 12297b78 call dword ptr [0x122c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32ac))), 0x12297b7eu);
  /* 12297b7e mov dword ptr [0x122c0780], eax */
  w32((uint32_t)(0x122c0780), (EAX));
L_12297b83:;
  /* 12297b83 cmp dword ptr [0x122c077c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c077c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297b8a je 0x12297b95 */
  if (C.zf) goto L_12297b95;
  /* 12297b8c call dword ptr [0x122c077c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c077c))), 0x12297b92u);
  /* 12297b92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12297b95:;
  /* 12297b95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297b99 je 0x12297bb1 */
  if (C.zf) goto L_12297bb1;
  /* 12297b9b cmp dword ptr [0x122c0780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c0780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297ba2 je 0x12297bb1 */
  if (C.zf) goto L_12297bb1;
  /* 12297ba4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297ba7 push eax */
  push32((uint32_t)(EAX));
  /* 12297ba8 call dword ptr [0x122c0780] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c0780))), 0x12297baeu);
  /* 12297bae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12297bb1:;
  /* 12297bb1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12297bb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12297bb5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12297bb8 push edx */
  push32((uint32_t)(EDX));
  /* 12297bb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297bbc push eax */
  push32((uint32_t)(EAX));
  /* 12297bbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297bc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12297bc1 call dword ptr [0x122c0778] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c0778))), 0x12297bc7u);
L_12297bc7:;
  /* 12297bc7 mov esp, ebp */
  ESP = (EBP);
  /* 12297bc9 pop ebp */
  EBP = (pop32());
  /* 12297bca ret  */
  ESPCHK(0x12297b10u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12297bd0 (254 bytes, 109 insns) */
void f_12297bd0(void) {
  FTRACE(0x12297bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297bd0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12297bd4 push edi */
  push32((uint32_t)(EDI));
  /* 12297bd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12297bd7 je 0x12297c53 */
  if (C.zf) goto L_12297c53;
  /* 12297bd9 push esi */
  push32((uint32_t)(ESI));
  /* 12297bda push ebx */
  push32((uint32_t)(EBX));
  /* 12297bdb mov ebx, ecx */
  EBX = (ECX);
  /* 12297bdd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12297be1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12297be7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12297beb jne 0x12297bf4 */
  if (!C.zf) goto L_12297bf4;
  /* 12297bed shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12297bf0 jne 0x12297c61 */
  if (!C.zf) goto L_12297c61;
  /* 12297bf2 jmp 0x12297c15 */
  goto L_12297c15;
L_12297bf4:;
  /* 12297bf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12297bf6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12297bf7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12297bf9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12297bfa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12297bfb je 0x12297c22 */
  if (C.zf) goto L_12297c22;
  /* 12297bfd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12297bff je 0x12297c2a */
  if (C.zf) goto L_12297c2a;
  /* 12297c01 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12297c07 jne 0x12297bf4 */
  if (!C.zf) goto L_12297bf4;
  /* 12297c09 mov ebx, ecx */
  EBX = (ECX);
  /* 12297c0b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12297c0e jne 0x12297c61 */
  if (!C.zf) goto L_12297c61;
L_12297c10:;
  /* 12297c10 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12297c13 je 0x12297c22 */
  if (C.zf) goto L_12297c22;
L_12297c15:;
  /* 12297c15 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12297c17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12297c18 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12297c1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12297c1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12297c1d je 0x12297c4e */
  if (C.zf) goto L_12297c4e;
  /* 12297c1f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12297c20 jne 0x12297c15 */
  if (!C.zf) goto L_12297c15;
L_12297c22:;
  /* 12297c22 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12297c26 pop ebx */
  EBX = (pop32());
  /* 12297c27 pop esi */
  ESI = (pop32());
  /* 12297c28 pop edi */
  EDI = (pop32());
  /* 12297c29 ret  */
  ESPCHK(0x12297bd0u, _esp0);
  ESP += 4; return;
L_12297c2a:;
  /* 12297c2a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12297c30 je 0x12297c44 */
  if (C.zf) goto L_12297c44;
L_12297c32:;
  /* 12297c32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12297c34 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12297c35 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12297c36 je 0x12297cc6 */
  if (C.zf) goto L_12297cc6;
  /* 12297c3c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12297c42 jne 0x12297c32 */
  if (!C.zf) goto L_12297c32;
L_12297c44:;
  /* 12297c44 mov ebx, ecx */
  EBX = (ECX);
  /* 12297c46 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12297c49 jne 0x12297cb7 */
  if (!C.zf) goto L_12297cb7;
L_12297c4b:;
  /* 12297c4b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12297c4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12297c4e:;
  /* 12297c4e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12297c4f jne 0x12297c4b */
  if (!C.zf) goto L_12297c4b;
  /* 12297c51 pop ebx */
  EBX = (pop32());
  /* 12297c52 pop esi */
  ESI = (pop32());
L_12297c53:;
  /* 12297c53 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12297c57 pop edi */
  EDI = (pop32());
  /* 12297c58 ret  */
  ESPCHK(0x12297bd0u, _esp0);
  ESP += 4; return;
L_12297c59:;
  /* 12297c59 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12297c5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12297c5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12297c5f je 0x12297c10 */
  if (C.zf) goto L_12297c10;
L_12297c61:;
  /* 12297c61 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12297c66 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12297c68 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297c6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12297c6d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12297c6f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12297c71 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12297c74 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12297c79 je 0x12297c59 */
  if (C.zf) goto L_12297c59;
  /* 12297c7b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12297c7d je 0x12297cab */
  if (C.zf) goto L_12297cab;
  /* 12297c7f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12297c81 je 0x12297ca1 */
  if (C.zf) goto L_12297ca1;
  /* 12297c83 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12297c89 je 0x12297c97 */
  if (C.zf) goto L_12297c97;
  /* 12297c8b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12297c91 jne 0x12297c59 */
  if (!C.zf) goto L_12297c59;
  /* 12297c93 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12297c95 jmp 0x12297caf */
  goto L_12297caf;
L_12297c97:;
  /* 12297c97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12297c9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12297c9f jmp 0x12297caf */
  goto L_12297caf;
L_12297ca1:;
  /* 12297ca1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12297ca7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12297ca9 jmp 0x12297caf */
  goto L_12297caf;
L_12297cab:;
  /* 12297cab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12297cad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12297caf:;
  /* 12297caf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12297cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12297cb4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12297cb5 je 0x12297cc1 */
  if (C.zf) goto L_12297cc1;
L_12297cb7:;
  /* 12297cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12297cb9:;
  /* 12297cb9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12297cbb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12297cbe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12297cbf jne 0x12297cb9 */
  if (!C.zf) goto L_12297cb9;
L_12297cc1:;
  /* 12297cc1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12297cc4 jne 0x12297c4b */
  if (!C.zf) goto L_12297c4b;
L_12297cc6:;
  /* 12297cc6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12297cca pop ebx */
  EBX = (pop32());
  /* 12297ccb pop esi */
  ESI = (pop32());
  /* 12297ccc pop edi */
  EDI = (pop32());
  /* 12297ccd ret  */
  ESPCHK(0x12297bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cd0 @ 0x12297cd0 (55 bytes, 16 insns) */
void f_12297cd0(void) {
  FTRACE(0x12297cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12297cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12297cd3 mov eax, dword ptr [0x122beb84] */
  EAX = (r32((uint32_t)(0x122beb84)));
  /* 12297cd8 push eax */
  push32((uint32_t)(EAX));
  /* 12297cd9 call dword ptr [0x122c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c332c))), 0x12297cdfu);
  /* 12297cdf mov ecx, dword ptr [0x122beb74] */
  ECX = (r32((uint32_t)(0x122beb74)));
  /* 12297ce5 push ecx */
  push32((uint32_t)(ECX));
  /* 12297ce6 call dword ptr [0x122c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c332c))), 0x12297cecu);
  /* 12297cec mov edx, dword ptr [0x122beb64] */
  EDX = (r32((uint32_t)(0x122beb64)));
  /* 12297cf2 push edx */
  push32((uint32_t)(EDX));
  /* 12297cf3 call dword ptr [0x122c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c332c))), 0x12297cf9u);
  /* 12297cf9 mov eax, dword ptr [0x122beb44] */
  EAX = (r32((uint32_t)(0x122beb44)));
  /* 12297cfe push eax */
  push32((uint32_t)(EAX));
  /* 12297cff call dword ptr [0x122c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c332c))), 0x12297d05u);
  /* 12297d05 pop ebp */
  EBP = (pop32());
  /* 12297d06 ret  */
  ESPCHK(0x12297cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d10 @ 0x12297d10 (159 bytes, 47 insns) */
void f_12297d10(void) {
  FTRACE(0x12297d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12297d11 mov ebp, esp */
  EBP = (ESP);
  /* 12297d13 push ecx */
  push32((uint32_t)(ECX));
  /* 12297d14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12297d1b jmp 0x12297d26 */
  goto L_12297d26;
L_12297d1d:;
  /* 12297d1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297d20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12297d26:;
  /* 12297d26 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297d2a jge 0x12297d79 */
  if ((C.sf==C.of)) goto L_12297d79;
  /* 12297d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297d2f cmp dword ptr [ecx*4 + 0x122beb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x122beb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297d37 je 0x12297d77 */
  if (C.zf) goto L_12297d77;
  /* 12297d39 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297d3d je 0x12297d77 */
  if (C.zf) goto L_12297d77;
  /* 12297d3f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297d43 je 0x12297d77 */
  if (C.zf) goto L_12297d77;
  /* 12297d45 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297d49 je 0x12297d77 */
  if (C.zf) goto L_12297d77;
  /* 12297d4b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297d4f je 0x12297d77 */
  if (C.zf) goto L_12297d77;
  /* 12297d51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297d54 mov eax, dword ptr [edx*4 + 0x122beb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122beb40)));
  /* 12297d5b push eax */
  push32((uint32_t)(EAX));
  /* 12297d5c call dword ptr [0x122c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32f4))), 0x12297d62u);
  /* 12297d62 push 2 */
  push32((uint32_t)(0x2u));
  /* 12297d64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297d67 mov edx, dword ptr [ecx*4 + 0x122beb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122beb40)));
  /* 12297d6e push edx */
  push32((uint32_t)(EDX));
  /* 12297d6f call 0x12294e40 */
  push32(0x12297d74u); f_12294e40();
  /* 12297d74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12297d77:;
  /* 12297d77 jmp 0x12297d1d */
  goto L_12297d1d;
L_12297d79:;
  /* 12297d79 mov eax, dword ptr [0x122beb64] */
  EAX = (r32((uint32_t)(0x122beb64)));
  /* 12297d7e push eax */
  push32((uint32_t)(EAX));
  /* 12297d7f call dword ptr [0x122c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32f4))), 0x12297d85u);
  /* 12297d85 mov ecx, dword ptr [0x122beb74] */
  ECX = (r32((uint32_t)(0x122beb74)));
  /* 12297d8b push ecx */
  push32((uint32_t)(ECX));
  /* 12297d8c call dword ptr [0x122c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32f4))), 0x12297d92u);
  /* 12297d92 mov edx, dword ptr [0x122beb84] */
  EDX = (r32((uint32_t)(0x122beb84)));
  /* 12297d98 push edx */
  push32((uint32_t)(EDX));
  /* 12297d99 call dword ptr [0x122c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32f4))), 0x12297d9fu);
  /* 12297d9f mov eax, dword ptr [0x122beb44] */
  EAX = (r32((uint32_t)(0x122beb44)));
  /* 12297da4 push eax */
  push32((uint32_t)(EAX));
  /* 12297da5 call dword ptr [0x122c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32f4))), 0x12297dabu);
  /* 12297dab mov esp, ebp */
  ESP = (EBP);
  /* 12297dad pop ebp */
  EBP = (pop32());
  /* 12297dae ret  */
  ESPCHK(0x12297d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007db0 @ 0x12297db0 (151 bytes, 46 insns) */
void f_12297db0(void) {
  FTRACE(0x12297db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12297db1 mov ebp, esp */
  EBP = (ESP);
  /* 12297db3 push ecx */
  push32((uint32_t)(ECX));
  /* 12297db4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297db7 cmp dword ptr [eax*4 + 0x122beb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x122beb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297dbf jne 0x12297e32 */
  if (!C.zf) goto L_12297e32;
  /* 12297dc1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12297dc6 push 0x122bc1f8 */
  push32((uint32_t)(0x122bc1f8u));
  /* 12297dcb push 2 */
  push32((uint32_t)(0x2u));
  /* 12297dcd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12297dcf call 0x122943b0 */
  push32(0x12297dd4u); f_122943b0();
  /* 12297dd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12297dd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12297dda cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297dde jne 0x12297dea */
  if (!C.zf) goto L_12297dea;
  /* 12297de0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12297de2 call 0x12293320 */
  push32(0x12297de7u); f_12293320();
  /* 12297de7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12297dea:;
  /* 12297dea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12297dec call 0x12297db0 */
  push32(0x12297df1u); f_12297db0();
  /* 12297df1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12297df4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297df7 cmp dword ptr [ecx*4 + 0x122beb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x122beb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297dff jne 0x12297e1a */
  if (!C.zf) goto L_12297e1a;
  /* 12297e01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297e04 push edx */
  push32((uint32_t)(EDX));
  /* 12297e05 call dword ptr [0x122c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c332c))), 0x12297e0bu);
  /* 12297e0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297e0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297e11 mov dword ptr [eax*4 + 0x122beb40], ecx */
  w32((uint32_t)(EAX*4 + 0x122beb40), (ECX));
  /* 12297e18 jmp 0x12297e28 */
  goto L_12297e28;
L_12297e1a:;
  /* 12297e1a push 2 */
  push32((uint32_t)(0x2u));
  /* 12297e1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12297e1f push edx */
  push32((uint32_t)(EDX));
  /* 12297e20 call 0x12294e40 */
  push32(0x12297e25u); f_12294e40();
  /* 12297e25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12297e28:;
  /* 12297e28 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12297e2a call 0x12297e50 */
  push32(0x12297e2fu); f_12297e50();
  /* 12297e2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12297e32:;
  /* 12297e32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297e35 mov ecx, dword ptr [eax*4 + 0x122beb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x122beb40)));
  /* 12297e3c push ecx */
  push32((uint32_t)(ECX));
  /* 12297e3d call dword ptr [0x122c32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32f8))), 0x12297e43u);
  /* 12297e43 mov esp, ebp */
  ESP = (EBP);
  /* 12297e45 pop ebp */
  EBP = (pop32());
  /* 12297e46 ret  */
  ESPCHK(0x12297db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e50 @ 0x12297e50 (22 bytes, 8 insns) */
void f_12297e50(void) {
  FTRACE(0x12297e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12297e51 mov ebp, esp */
  EBP = (ESP);
  /* 12297e53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297e56 mov ecx, dword ptr [eax*4 + 0x122beb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x122beb40)));
  /* 12297e5d push ecx */
  push32((uint32_t)(ECX));
  /* 12297e5e call dword ptr [0x122c32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32fc))), 0x12297e64u);
  /* 12297e64 pop ebp */
  EBP = (pop32());
  /* 12297e65 ret  */
  ESPCHK(0x12297e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e70 @ 0x12297e70 (26 bytes, 10 insns) */
void f_12297e70(void) {
  FTRACE(0x12297e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12297e71 mov ebp, esp */
  EBP = (ESP);
  /* 12297e73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297e76 push eax */
  push32((uint32_t)(EAX));
  /* 12297e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12297e79 call dword ptr [0x122c3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3338))), 0x12297e7fu);
  /* 12297e7f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12297e84 call dword ptr [0x122c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32bc))), 0x12297e8au);
  /* 12297e8a pop ebp */
  EBP = (pop32());
  /* 12297e8b ret  */
  ESPCHK(0x12297e70u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12297e90 (446 bytes, 130 insns) */
void f_12297e90(void) {
  FTRACE(0x12297e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12297e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12297e91 mov ebp, esp */
  EBP = (ESP);
  /* 12297e93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12297e96 call 0x12293df0 */
  push32(0x12297e9bu); f_12293df0();
  /* 12297e9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12297e9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297ea1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12297ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 12297ea5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12297ea8 push edx */
  push32((uint32_t)(EDX));
  /* 12297ea9 call 0x12298050 */
  push32(0x12297eaeu); f_12298050();
  /* 12297eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12297eb1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12297eb4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297eb8 je 0x12297ec3 */
  if (C.zf) goto L_12297ec3;
  /* 12297eba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297ebd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297ec1 jne 0x12297ed2 */
  if (!C.zf) goto L_12297ed2;
L_12297ec3:;
  /* 12297ec3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12297ec6 push ecx */
  push32((uint32_t)(ECX));
  /* 12297ec7 call dword ptr [0x122c333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c333c))), 0x12297ecdu);
  /* 12297ecd jmp 0x1229804a */
  goto L_1229804a;
L_12297ed2:;
  /* 12297ed2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297ed5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297ed9 jne 0x12297eef */
  if (!C.zf) goto L_12297eef;
  /* 12297edb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297ede mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12297ee5 mov eax, 1 */
  EAX = (0x1u);
  /* 12297eea jmp 0x1229804a */
  goto L_1229804a;
L_12297eef:;
  /* 12297eef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297ef2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297ef6 jne 0x12297f00 */
  if (!C.zf) goto L_12297f00;
  /* 12297ef8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12297efb jmp 0x1229804a */
  goto L_1229804a;
L_12297f00:;
  /* 12297f00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297f03 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12297f06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12297f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297f0c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12297f0f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12297f12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297f15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12297f18 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12297f1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297f1e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297f22 jne 0x12298027 */
  if (!C.zf) goto L_12298027;
  /* 12297f28 mov eax, dword ptr [0x122bec78] */
  EAX = (r32((uint32_t)(0x122bec78)));
  /* 12297f2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12297f30 jmp 0x12297f3b */
  goto L_12297f3b;
L_12297f32:;
  /* 12297f32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12297f35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297f38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12297f3b:;
  /* 12297f3b mov edx, dword ptr [0x122bec78] */
  EDX = (r32((uint32_t)(0x122bec78)));
  /* 12297f41 add edx, dword ptr [0x122bec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x122bec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12297f47 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297f4a jge 0x12297f62 */
  if ((C.sf==C.of)) goto L_12297f62;
  /* 12297f4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12297f4f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12297f52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297f55 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12297f58 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12297f60 jmp 0x12297f32 */
  goto L_12297f32;
L_12297f62:;
  /* 12297f62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297f65 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12297f68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12297f6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297f6e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297f74 jne 0x12297f85 */
  if (!C.zf) goto L_12297f85;
  /* 12297f76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297f79 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12297f80 jmp 0x1229800d */
  goto L_1229800d;
L_12297f85:;
  /* 12297f85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297f88 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297f8e jne 0x12297f9c */
  if (!C.zf) goto L_12297f9c;
  /* 12297f90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297f93 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12297f9a jmp 0x1229800d */
  goto L_1229800d;
L_12297f9c:;
  /* 12297f9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297f9f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297fa5 jne 0x12297fb3 */
  if (!C.zf) goto L_12297fb3;
  /* 12297fa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297faa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12297fb1 jmp 0x1229800d */
  goto L_1229800d;
L_12297fb3:;
  /* 12297fb3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297fb6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297fbc jne 0x12297fca */
  if (!C.zf) goto L_12297fca;
  /* 12297fbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297fc1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12297fc8 jmp 0x1229800d */
  goto L_1229800d;
L_12297fca:;
  /* 12297fca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297fcd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297fd3 jne 0x12297fe1 */
  if (!C.zf) goto L_12297fe1;
  /* 12297fd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297fd8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12297fdf jmp 0x1229800d */
  goto L_1229800d;
L_12297fe1:;
  /* 12297fe1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297fe4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12297fea jne 0x12297ff8 */
  if (!C.zf) goto L_12297ff8;
  /* 12297fec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12297fef mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12297ff6 jmp 0x1229800d */
  goto L_1229800d;
L_12297ff8:;
  /* 12297ff8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12297ffb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298001 jne 0x1229800d */
  if (!C.zf) goto L_1229800d;
  /* 12298003 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12298006 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1229800d:;
  /* 1229800d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12298010 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12298013 push edx */
  push32((uint32_t)(EDX));
  /* 12298014 push 8 */
  push32((uint32_t)(0x8u));
  /* 12298016 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12298019u);
  /* 12298019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229801c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1229801f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12298022 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12298025 jmp 0x1229803e */
  goto L_1229803e;
L_12298027:;
  /* 12298027 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1229802a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12298031 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12298034 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12298037 push ecx */
  push32((uint32_t)(ECX));
  /* 12298038 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1229803bu);
  /* 1229803b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1229803e:;
  /* 1229803e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12298041 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12298044 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12298047 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1229804a:;
  /* 1229804a mov esp, ebp */
  ESP = (EBP);
  /* 1229804c pop ebp */
  EBP = (pop32());
  /* 1229804d ret  */
  ESPCHK(0x12297e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008050 @ 0x12298050 (89 bytes, 35 insns) */
void f_12298050(void) {
  FTRACE(0x12298050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298050 push ebp */
  push32((uint32_t)(EBP));
  /* 12298051 mov ebp, esp */
  EBP = (ESP);
  /* 12298053 push ecx */
  push32((uint32_t)(ECX));
  /* 12298054 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12298057 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1229805a:;
  /* 1229805a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229805d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1229805f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298062 je 0x12298082 */
  if (C.zf) goto L_12298082;
  /* 12298064 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298067 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229806a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1229806d mov ecx, dword ptr [0x122bec84] */
  ECX = (r32((uint32_t)(0x122bec84)));
  /* 12298073 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12298076 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12298079 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229807b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229807e jae 0x12298082 */
  if (!C.cf) goto L_12298082;
  /* 12298080 jmp 0x1229805a */
  goto L_1229805a;
L_12298082:;
  /* 12298082 mov eax, dword ptr [0x122bec84] */
  EAX = (r32((uint32_t)(0x122bec84)));
  /* 12298087 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1229808a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229808d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229808f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298092 jae 0x1229809e */
  if (!C.cf) goto L_1229809e;
  /* 12298094 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298097 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12298099 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229809c je 0x122980a2 */
  if (C.zf) goto L_122980a2;
L_1229809e:;
  /* 1229809e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122980a0 jmp 0x122980a5 */
  goto L_122980a5;
L_122980a2:;
  /* 122980a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122980a5:;
  /* 122980a5 mov esp, ebp */
  ESP = (EBP);
  /* 122980a7 pop ebp */
  EBP = (pop32());
  /* 122980a8 ret  */
  ESPCHK(0x12298050u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x122980b0 (48 bytes, 17 insns) */
void f_122980b0(void) {
  FTRACE(0x122980b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122980b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122980b1 mov ebp, esp */
  EBP = (ESP);
  /* 122980b3 push ecx */
  push32((uint32_t)(ECX));
  /* 122980b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 122980b6 call 0x12297db0 */
  push32(0x122980bbu); f_12297db0();
  /* 122980bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122980be mov eax, dword ptr [0x122c07ec] */
  EAX = (r32((uint32_t)(0x122c07ec)));
  /* 122980c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122980c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122980c9 mov dword ptr [0x122c07ec], ecx */
  w32((uint32_t)(0x122c07ec), (ECX));
  /* 122980cf push 9 */
  push32((uint32_t)(0x9u));
  /* 122980d1 call 0x12297e50 */
  push32(0x122980d6u); f_12297e50();
  /* 122980d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122980d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122980dc mov esp, ebp */
  ESP = (EBP);
  /* 122980de pop ebp */
  EBP = (pop32());
  /* 122980df ret  */
  ESPCHK(0x122980b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080e0 @ 0x122980e0 (10 bytes, 5 insns) */
void f_122980e0(void) {
  FTRACE(0x122980e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122980e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122980e1 mov ebp, esp */
  EBP = (ESP);
  /* 122980e3 mov eax, dword ptr [0x122c07ec] */
  EAX = (r32((uint32_t)(0x122c07ec)));
  /* 122980e8 pop ebp */
  EBP = (pop32());
  /* 122980e9 ret  */
  ESPCHK(0x122980e0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x122980f0 (45 bytes, 19 insns) */
void f_122980f0(void) {
  FTRACE(0x122980f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122980f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122980f1 mov ebp, esp */
  EBP = (ESP);
  /* 122980f3 push ecx */
  push32((uint32_t)(ECX));
  /* 122980f4 mov eax, dword ptr [0x122c07ec] */
  EAX = (r32((uint32_t)(0x122c07ec)));
  /* 122980f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122980fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298100 je 0x12298110 */
  if (C.zf) goto L_12298110;
  /* 12298102 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298105 push ecx */
  push32((uint32_t)(ECX));
  /* 12298106 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12298109u);
  /* 12298109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229810c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229810e jne 0x12298114 */
  if (!C.zf) goto L_12298114;
L_12298110:;
  /* 12298110 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12298112 jmp 0x12298119 */
  goto L_12298119;
L_12298114:;
  /* 12298114 mov eax, 1 */
  EAX = (0x1u);
L_12298119:;
  /* 12298119 mov esp, ebp */
  ESP = (EBP);
  /* 1229811b pop ebp */
  EBP = (pop32());
  /* 1229811c ret  */
  ESPCHK(0x122980f0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12298120 (88 bytes, 40 insns) */
void f_12298120(void) {
  FTRACE(0x12298120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298120 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12298124 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12298128 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1229812a je 0x12298173 */
  if (C.zf) goto L_12298173;
  /* 1229812c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229812e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12298132 push edi */
  push32((uint32_t)(EDI));
  /* 12298133 mov edi, ecx */
  EDI = (ECX);
  /* 12298135 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298138 jb 0x12298167 */
  if (C.cf) goto L_12298167;
  /* 1229813a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1229813c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1229813f je 0x12298149 */
  if (C.zf) goto L_12298149;
  /* 12298141 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12298143:;
  /* 12298143 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12298145 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12298146 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12298147 jne 0x12298143 */
  if (!C.zf) goto L_12298143;
L_12298149:;
  /* 12298149 mov ecx, eax */
  ECX = (EAX);
  /* 1229814b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1229814e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298150 mov ecx, eax */
  ECX = (EAX);
  /* 12298152 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12298155 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298157 mov ecx, edx */
  ECX = (EDX);
  /* 12298159 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1229815c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1229815f je 0x12298167 */
  if (C.zf) goto L_12298167;
  /* 12298161 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12298163 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12298165 je 0x1229816d */
  if (C.zf) goto L_1229816d;
L_12298167:;
  /* 12298167 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12298169 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1229816a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1229816b jne 0x12298167 */
  if (!C.zf) goto L_12298167;
L_1229816d:;
  /* 1229816d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12298171 pop edi */
  EDI = (pop32());
  /* 12298172 ret  */
  ESPCHK(0x12298120u, _esp0);
  ESP += 4; return;
L_12298173:;
  /* 12298173 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12298177 ret  */
  ESPCHK(0x12298120u, _esp0);
  ESP += 4; return;
}

/* FUN_10008180 @ 0x12298180 (23 bytes, 10 insns) */
void f_12298180(void) {
  FTRACE(0x12298180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298180 push ebp */
  push32((uint32_t)(EBP));
  /* 12298181 mov ebp, esp */
  EBP = (ESP);
  /* 12298183 mov eax, dword ptr [0x122c07e8] */
  EAX = (r32((uint32_t)(0x122c07e8)));
  /* 12298188 push eax */
  push32((uint32_t)(EAX));
  /* 12298189 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229818c push ecx */
  push32((uint32_t)(ECX));
  /* 1229818d call 0x122981a0 */
  push32(0x12298192u); f_122981a0();
  /* 12298192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298195 pop ebp */
  EBP = (pop32());
  /* 12298196 ret  */
  ESPCHK(0x12298180u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x122981a0 (87 bytes, 34 insns) */
void f_122981a0(void) {
  FTRACE(0x122981a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122981a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122981a1 mov ebp, esp */
  EBP = (ESP);
  /* 122981a3 push ecx */
  push32((uint32_t)(ECX));
  /* 122981a4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122981a8 jbe 0x122981ae */
  if ((C.cf||C.zf)) goto L_122981ae;
  /* 122981aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122981ac jmp 0x122981f3 */
  goto L_122981f3;
L_122981ae:;
  /* 122981ae cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122981b2 ja 0x122981c5 */
  if ((!C.cf&&!C.zf)) goto L_122981c5;
  /* 122981b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122981b7 push eax */
  push32((uint32_t)(EAX));
  /* 122981b8 call 0x12298200 */
  push32(0x122981bdu); f_12298200();
  /* 122981bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122981c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122981c3 jmp 0x122981cc */
  goto L_122981cc;
L_122981c5:;
  /* 122981c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122981cc:;
  /* 122981cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122981d0 jne 0x122981d8 */
  if (!C.zf) goto L_122981d8;
  /* 122981d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122981d6 jne 0x122981dd */
  if (!C.zf) goto L_122981dd;
L_122981d8:;
  /* 122981d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122981db jmp 0x122981f3 */
  goto L_122981f3;
L_122981dd:;
  /* 122981dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122981e0 push ecx */
  push32((uint32_t)(ECX));
  /* 122981e1 call 0x122980f0 */
  push32(0x122981e6u); f_122980f0();
  /* 122981e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122981e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122981eb jne 0x122981f1 */
  if (!C.zf) goto L_122981f1;
  /* 122981ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122981ef jmp 0x122981f3 */
  goto L_122981f3;
L_122981f1:;
  /* 122981f1 jmp 0x122981ae */
  goto L_122981ae;
L_122981f3:;
  /* 122981f3 mov esp, ebp */
  ESP = (EBP);
  /* 122981f5 pop ebp */
  EBP = (pop32());
  /* 122981f6 ret  */
  ESPCHK(0x122981a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008200 @ 0x12298200 (109 bytes, 37 insns) */
void f_12298200(void) {
  FTRACE(0x12298200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298200 push ebp */
  push32((uint32_t)(EBP));
  /* 12298201 mov ebp, esp */
  EBP = (ESP);
  /* 12298203 push ecx */
  push32((uint32_t)(ECX));
  /* 12298204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298207 cmp eax, dword ptr [0x122bec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122bec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229820d ja 0x1229823d */
  if ((!C.cf&&!C.zf)) goto L_1229823d;
  /* 1229820f push 9 */
  push32((uint32_t)(0x9u));
  /* 12298211 call 0x12297db0 */
  push32(0x12298216u); f_12297db0();
  /* 12298216 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298219 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229821c push ecx */
  push32((uint32_t)(ECX));
  /* 1229821d call 0x12298d40 */
  push32(0x12298222u); f_12298d40();
  /* 12298222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298225 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12298228 push 9 */
  push32((uint32_t)(0x9u));
  /* 1229822a call 0x12297e50 */
  push32(0x1229822fu); f_12297e50();
  /* 1229822f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298232 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298236 je 0x1229823d */
  if (C.zf) goto L_1229823d;
  /* 12298238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1229823b jmp 0x12298269 */
  goto L_12298269;
L_1229823d:;
  /* 1229823d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298241 jne 0x1229824a */
  if (!C.zf) goto L_1229824a;
  /* 12298243 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1229824a:;
  /* 1229824a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229824d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298250 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12298253 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12298256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298259 push eax */
  push32((uint32_t)(EAX));
  /* 1229825a push 0 */
  push32((uint32_t)(0x0u));
  /* 1229825c mov ecx, dword ptr [0x122c1fac] */
  ECX = (r32((uint32_t)(0x122c1fac)));
  /* 12298262 push ecx */
  push32((uint32_t)(ECX));
  /* 12298263 call dword ptr [0x122c3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3340))), 0x12298269u);
L_12298269:;
  /* 12298269 mov esp, ebp */
  ESP = (EBP);
  /* 1229826b pop ebp */
  EBP = (pop32());
  /* 1229826c ret  */
  ESPCHK(0x12298200u, _esp0);
  ESP += 4; return;
}

/* FUN_10008270 @ 0x12298270 (10 bytes, 5 insns) */
void f_12298270(void) {
  FTRACE(0x12298270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298270 push ebp */
  push32((uint32_t)(EBP));
  /* 12298271 mov ebp, esp */
  EBP = (ESP);
  /* 12298273 mov eax, 1 */
  EAX = (0x1u);
  /* 12298278 pop ebp */
  EBP = (pop32());
  /* 12298279 ret  */
  ESPCHK(0x12298270u, _esp0);
  ESP += 4; return;
}

/* FUN_10008280 @ 0x12298280 (173 bytes, 59 insns) */
void f_12298280(void) {
  FTRACE(0x12298280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298280 push ebp */
  push32((uint32_t)(EBP));
  /* 12298281 mov ebp, esp */
  EBP = (ESP);
  /* 12298283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298286 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229828a jbe 0x12298293 */
  if ((C.cf||C.zf)) goto L_12298293;
  /* 1229828c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229828e jmp 0x12298329 */
  goto L_12298329;
L_12298293:;
  /* 12298293 push 9 */
  push32((uint32_t)(0x9u));
  /* 12298295 call 0x12297db0 */
  push32(0x1229829au); f_12297db0();
  /* 1229829a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229829d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122982a0 push eax */
  push32((uint32_t)(EAX));
  /* 122982a1 call 0x122986b0 */
  push32(0x122982a6u); f_122986b0();
  /* 122982a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122982a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122982ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122982b0 je 0x122982f1 */
  if (C.zf) goto L_122982f1;
  /* 122982b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122982b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122982bc cmp ecx, dword ptr [0x122bec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122bec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122982c2 ja 0x122982e2 */
  if ((!C.cf&&!C.zf)) goto L_122982e2;
  /* 122982c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122982c7 push edx */
  push32((uint32_t)(EDX));
  /* 122982c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122982cb push eax */
  push32((uint32_t)(EAX));
  /* 122982cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122982cf push ecx */
  push32((uint32_t)(ECX));
  /* 122982d0 call 0x12299580 */
  push32(0x122982d5u); f_12299580();
  /* 122982d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122982d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122982da je 0x122982e2 */
  if (C.zf) goto L_122982e2;
  /* 122982dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122982df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122982e2:;
  /* 122982e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 122982e4 call 0x12297e50 */
  push32(0x122982e9u); f_12297e50();
  /* 122982e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122982ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122982ef jmp 0x12298329 */
  goto L_12298329;
L_122982f1:;
  /* 122982f1 push 9 */
  push32((uint32_t)(0x9u));
  /* 122982f3 call 0x12297e50 */
  push32(0x122982f8u); f_12297e50();
  /* 122982f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122982fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122982ff jne 0x12298308 */
  if (!C.zf) goto L_12298308;
  /* 12298301 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12298308:;
  /* 12298308 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229830b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1229830e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12298310 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12298313 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12298316 push ecx */
  push32((uint32_t)(ECX));
  /* 12298317 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229831a push edx */
  push32((uint32_t)(EDX));
  /* 1229831b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1229831d mov eax, dword ptr [0x122c1fac] */
  EAX = (r32((uint32_t)(0x122c1fac)));
  /* 12298322 push eax */
  push32((uint32_t)(EAX));
  /* 12298323 call dword ptr [0x122c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3344))), 0x12298329u);
L_12298329:;
  /* 12298329 mov esp, ebp */
  ESP = (EBP);
  /* 1229832b pop ebp */
  EBP = (pop32());
  /* 1229832c ret  */
  ESPCHK(0x12298280u, _esp0);
  ESP += 4; return;
}

/* FUN_10008330 @ 0x12298330 (490 bytes, 165 insns) */
void f_12298330(void) {
  FTRACE(0x12298330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298330 push ebp */
  push32((uint32_t)(EBP));
  /* 12298331 mov ebp, esp */
  EBP = (ESP);
  /* 12298333 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298336 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229833a jne 0x1229834d */
  if (!C.zf) goto L_1229834d;
  /* 1229833c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229833f push eax */
  push32((uint32_t)(EAX));
  /* 12298340 call 0x12298180 */
  push32(0x12298345u); f_12298180();
  /* 12298345 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298348 jmp 0x12298516 */
  goto L_12298516;
L_1229834d:;
  /* 1229834d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298351 jne 0x12298366 */
  if (!C.zf) goto L_12298366;
  /* 12298353 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298356 push ecx */
  push32((uint32_t)(ECX));
  /* 12298357 call 0x12298520 */
  push32(0x1229835cu); f_12298520();
  /* 1229835c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229835f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12298361 jmp 0x12298516 */
  goto L_12298516;
L_12298366:;
  /* 12298366 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1229836d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298371 ja 0x122984e9 */
  if ((!C.cf&&!C.zf)) goto L_122984e9;
  /* 12298377 push 9 */
  push32((uint32_t)(0x9u));
  /* 12298379 call 0x12297db0 */
  push32(0x1229837eu); f_12297db0();
  /* 1229837e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298381 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298384 push edx */
  push32((uint32_t)(EDX));
  /* 12298385 call 0x122986b0 */
  push32(0x1229838au); f_122986b0();
  /* 1229838a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229838d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12298390 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298394 je 0x122984ac */
  if (C.zf) goto L_122984ac;
  /* 1229839a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1229839d cmp eax, dword ptr [0x122bec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122bec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122983a3 ja 0x12298420 */
  if ((!C.cf&&!C.zf)) goto L_12298420;
  /* 122983a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122983a8 push ecx */
  push32((uint32_t)(ECX));
  /* 122983a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122983ac push edx */
  push32((uint32_t)(EDX));
  /* 122983ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122983b0 push eax */
  push32((uint32_t)(EAX));
  /* 122983b1 call 0x12299580 */
  push32(0x122983b6u); f_12299580();
  /* 122983b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122983b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122983bb je 0x122983c5 */
  if (C.zf) goto L_122983c5;
  /* 122983bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122983c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122983c3 jmp 0x12298420 */
  goto L_12298420;
L_122983c5:;
  /* 122983c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122983c8 push edx */
  push32((uint32_t)(EDX));
  /* 122983c9 call 0x12298d40 */
  push32(0x122983ceu); f_12298d40();
  /* 122983ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122983d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122983d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122983d8 je 0x12298420 */
  if (C.zf) goto L_12298420;
  /* 122983da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122983dd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 122983e0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122983e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122983e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122983e9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122983ec jae 0x122983f6 */
  if (!C.cf) goto L_122983f6;
  /* 122983ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122983f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122983f4 jmp 0x122983fc */
  goto L_122983fc;
L_122983f6:;
  /* 122983f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122983f9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122983fc:;
  /* 122983fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122983ff push edx */
  push32((uint32_t)(EDX));
  /* 12298400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298403 push eax */
  push32((uint32_t)(EAX));
  /* 12298404 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12298407 push ecx */
  push32((uint32_t)(ECX));
  /* 12298408 call 0x1229ac90 */
  push32(0x1229840du); f_1229ac90();
  /* 1229840d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298410 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298413 push edx */
  push32((uint32_t)(EDX));
  /* 12298414 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12298417 push eax */
  push32((uint32_t)(EAX));
  /* 12298418 call 0x12298770 */
  push32(0x1229841du); f_12298770();
  /* 1229841d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12298420:;
  /* 12298420 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298424 jne 0x122984a0 */
  if (!C.zf) goto L_122984a0;
  /* 12298426 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229842a jne 0x12298433 */
  if (!C.zf) goto L_12298433;
  /* 1229842c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12298433:;
  /* 12298433 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12298436 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12298439 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1229843c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1229843f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12298442 push edx */
  push32((uint32_t)(EDX));
  /* 12298443 push 0 */
  push32((uint32_t)(0x0u));
  /* 12298445 mov eax, dword ptr [0x122c1fac] */
  EAX = (r32((uint32_t)(0x122c1fac)));
  /* 1229844a push eax */
  push32((uint32_t)(EAX));
  /* 1229844b call dword ptr [0x122c3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3340))), 0x12298451u);
  /* 12298451 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12298454 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298458 je 0x122984a0 */
  if (C.zf) goto L_122984a0;
  /* 1229845a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229845d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12298460 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12298463 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12298466 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298469 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1229846c jae 0x12298476 */
  if (!C.cf) goto L_12298476;
  /* 1229846e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298471 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12298474 jmp 0x1229847c */
  goto L_1229847c;
L_12298476:;
  /* 12298476 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12298479 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1229847c:;
  /* 1229847c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1229847f push eax */
  push32((uint32_t)(EAX));
  /* 12298480 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298483 push ecx */
  push32((uint32_t)(ECX));
  /* 12298484 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12298487 push edx */
  push32((uint32_t)(EDX));
  /* 12298488 call 0x1229ac90 */
  push32(0x1229848du); f_1229ac90();
  /* 1229848d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298493 push eax */
  push32((uint32_t)(EAX));
  /* 12298494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12298497 push ecx */
  push32((uint32_t)(ECX));
  /* 12298498 call 0x12298770 */
  push32(0x1229849du); f_12298770();
  /* 1229849d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122984a0:;
  /* 122984a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 122984a2 call 0x12297e50 */
  push32(0x122984a7u); f_12297e50();
  /* 122984a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122984aa jmp 0x122984e9 */
  goto L_122984e9;
L_122984ac:;
  /* 122984ac push 9 */
  push32((uint32_t)(0x9u));
  /* 122984ae call 0x12297e50 */
  push32(0x122984b3u); f_12297e50();
  /* 122984b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122984b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122984ba jne 0x122984c3 */
  if (!C.zf) goto L_122984c3;
  /* 122984bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_122984c3:;
  /* 122984c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122984c6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122984c9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 122984cc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 122984cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122984d2 push eax */
  push32((uint32_t)(EAX));
  /* 122984d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122984d6 push ecx */
  push32((uint32_t)(ECX));
  /* 122984d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122984d9 mov edx, dword ptr [0x122c1fac] */
  EDX = (r32((uint32_t)(0x122c1fac)));
  /* 122984df push edx */
  push32((uint32_t)(EDX));
  /* 122984e0 call dword ptr [0x122c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3344))), 0x122984e6u);
  /* 122984e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122984e9:;
  /* 122984e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122984ed jne 0x122984f8 */
  if (!C.zf) goto L_122984f8;
  /* 122984ef cmp dword ptr [0x122c07e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122c07e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122984f6 jne 0x122984fd */
  if (!C.zf) goto L_122984fd;
L_122984f8:;
  /* 122984f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122984fb jmp 0x12298516 */
  goto L_12298516;
L_122984fd:;
  /* 122984fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12298500 push eax */
  push32((uint32_t)(EAX));
  /* 12298501 call 0x122980f0 */
  push32(0x12298506u); f_122980f0();
  /* 12298506 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1229850b jne 0x12298511 */
  if (!C.zf) goto L_12298511;
  /* 1229850d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1229850f jmp 0x12298516 */
  goto L_12298516;
L_12298511:;
  /* 12298511 jmp 0x12298366 */
  goto L_12298366;
L_12298516:;
  /* 12298516 mov esp, ebp */
  ESP = (EBP);
  /* 12298518 pop ebp */
  EBP = (pop32());
  /* 12298519 ret  */
  ESPCHK(0x12298330u, _esp0);
  ESP += 4; return;
}

/* FUN_10008520 @ 0x12298520 (104 bytes, 38 insns) */
void f_12298520(void) {
  FTRACE(0x12298520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298520 push ebp */
  push32((uint32_t)(EBP));
  /* 12298521 mov ebp, esp */
  EBP = (ESP);
  /* 12298523 push ecx */
  push32((uint32_t)(ECX));
  /* 12298524 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298528 jne 0x1229852c */
  if (!C.zf) goto L_1229852c;
  /* 1229852a jmp 0x12298584 */
  goto L_12298584;
L_1229852c:;
  /* 1229852c push 9 */
  push32((uint32_t)(0x9u));
  /* 1229852e call 0x12297db0 */
  push32(0x12298533u); f_12297db0();
  /* 12298533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298539 push eax */
  push32((uint32_t)(EAX));
  /* 1229853a call 0x122986b0 */
  push32(0x1229853fu); f_122986b0();
  /* 1229853f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298542 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12298545 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12298549 je 0x12298567 */
  if (C.zf) goto L_12298567;
  /* 1229854b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1229854e push ecx */
  push32((uint32_t)(ECX));
  /* 1229854f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298552 push edx */
  push32((uint32_t)(EDX));
  /* 12298553 call 0x12298770 */
  push32(0x12298558u); f_12298770();
  /* 12298558 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1229855b push 9 */
  push32((uint32_t)(0x9u));
  /* 1229855d call 0x12297e50 */
  push32(0x12298562u); f_12297e50();
  /* 12298562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298565 jmp 0x12298584 */
  goto L_12298584;
L_12298567:;
  /* 12298567 push 9 */
  push32((uint32_t)(0x9u));
  /* 12298569 call 0x12297e50 */
  push32(0x1229856eu); f_12297e50();
  /* 1229856e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12298571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12298574 push eax */
  push32((uint32_t)(EAX));
  /* 12298575 push 0 */
  push32((uint32_t)(0x0u));
  /* 12298577 mov ecx, dword ptr [0x122c1fac] */
  ECX = (r32((uint32_t)(0x122c1fac)));
  /* 1229857d push ecx */
  push32((uint32_t)(ECX));
  /* 1229857e call dword ptr [0x122c3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3320))), 0x12298584u);
L_12298584:;
  /* 12298584 mov esp, ebp */
  ESP = (EBP);
  /* 12298586 pop ebp */
  EBP = (pop32());
  /* 12298587 ret  */
  ESPCHK(0x12298520u, _esp0);
  ESP += 4; return;
}

/* FUN_10008590 @ 0x12298590 (116 bytes, 34 insns) */
void f_12298590(void) {
  FTRACE(0x12298590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298590 push ebp */
  push32((uint32_t)(EBP));
  /* 12298591 mov ebp, esp */
  EBP = (ESP);
  /* 12298593 push ecx */
  push32((uint32_t)(ECX));
  /* 12298594 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1229859b push 9 */
  push32((uint32_t)(0x9u));
  /* 1229859d call 0x12297db0 */
  push32(0x122985a2u); f_12297db0();
  /* 122985a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122985a5 call 0x12299ca0 */
  push32(0x122985aau); f_12299ca0();
  /* 122985aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122985ac jge 0x122985b5 */
  if ((C.sf==C.of)) goto L_122985b5;
  /* 122985ae mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_122985b5:;
  /* 122985b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 122985b7 call 0x12297e50 */
  push32(0x122985bcu); f_12297e50();
  /* 122985bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122985bf push 0 */
  push32((uint32_t)(0x0u));
  /* 122985c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122985c3 mov eax, dword ptr [0x122c1fac] */
  EAX = (r32((uint32_t)(0x122c1fac)));
  /* 122985c8 push eax */
  push32((uint32_t)(EAX));
  /* 122985c9 call dword ptr [0x122c3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c3300))), 0x122985cfu);
  /* 122985cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122985d1 jne 0x122985fd */
  if (!C.zf) goto L_122985fd;
  /* 122985d3 call dword ptr [0x122c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122c32e0))), 0x122985d9u);
  /* 122985d9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122985dc jne 0x122985f6 */
  if (!C.zf) goto L_122985f6;
  /* 122985de call 0x1229c290 */
  push32(0x122985e3u); f_1229c290();
  /* 122985e3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 122985e9 call 0x1229c280 */
  push32(0x122985eeu); f_1229c280();
  /* 122985ee mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 122985f4 jmp 0x122985fd */
  goto L_122985fd;
L_122985f6:;
  /* 122985f6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_122985fd:;
  /* 122985fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12298600 mov esp, ebp */
  ESP = (EBP);
  /* 12298602 pop ebp */
  EBP = (pop32());
  /* 12298603 ret  */
  ESPCHK(0x12298590u, _esp0);
  ESP += 4; return;
}

/* FUN_10008610 @ 0x12298610 (10 bytes, 5 insns) */
void f_12298610(void) {
  FTRACE(0x12298610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12298610 push ebp */
  push32((uint32_t)(EBP));
  /* 12298611 mov ebp, esp */
  EBP = (ESP);
  /* 12298613 call 0x12298590 */
  push32(0x12298618u); f_12298590();
  /* 12298618 pop ebp */
  EBP = (pop32());
  /* 12298619 ret  */
  ESPCHK(0x12298610u, _esp0);
  ESP += 4; return;
}

