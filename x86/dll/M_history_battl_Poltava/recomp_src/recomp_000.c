#include "recomp.h"

/* thunk_FUN_10002610 @ 0x12b91005 (5 bytes, 1 insns) */
void f_12b91005(void) {
  FTRACE(0x12b91005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b91005 jmp 0x12b92610 */
  f_12b92610(); return;
}

/* OnInit @ 0x12b9100a (5 bytes, 1 insns) */
void f_12b9100a(void) {
  FTRACE(0x12b9100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9100a jmp 0x12b911b0 */
  f_12b911b0(); return;
}

/* thunk_FUN_10001130 @ 0x12b9100f (5 bytes, 1 insns) */
void f_12b9100f(void) {
  FTRACE(0x12b9100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9100f jmp 0x12b91130 */
  f_12b91130(); return;
}

/* thunk_FUN_10001050 @ 0x12b91014 (5 bytes, 1 insns) */
void f_12b91014(void) {
  FTRACE(0x12b91014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b91014 jmp 0x12b91050 */
  f_12b91050(); return;
}

/* thunk_FUN_100010b0 @ 0x12b91019 (5 bytes, 1 insns) */
void f_12b91019(void) {
  FTRACE(0x12b91019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b91019 jmp 0x12b910b0 */
  f_12b910b0(); return;
}

/* ProcessScenary @ 0x12b9101e (5 bytes, 1 insns) */
void f_12b9101e(void) {
  FTRACE(0x12b9101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9101e jmp 0x12b92200 */
  f_12b92200(); return;
}

/* FUN_10001050 @ 0x12b91050 (67 bytes, 26 insns) */
void f_12b91050(void) {
  FTRACE(0x12b91050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b91050 push ebp */
  push32((uint32_t)(EBP));
  /* 12b91051 mov ebp, esp */
  EBP = (ESP);
  /* 12b91053 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b91056 push ebx */
  push32((uint32_t)(EBX));
  /* 12b91057 push esi */
  push32((uint32_t)(ESI));
  /* 12b91058 push edi */
  push32((uint32_t)(EDI));
  /* 12b91059 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12b9105c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12b91061 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12b91066 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12b91068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9106b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9106e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91072 je 0x12b91076 */
  if (C.zf) goto L_12b91076;
  /* 12b91074 jmp 0x12b9107b */
  goto L_12b9107b;
L_12b91076:;
  /* 12b91076 call 0x12b9100a */
  push32(0x12b9107bu); f_12b9100a();
L_12b9107b:;
  /* 12b9107b mov eax, 1 */
  EAX = (0x1u);
  /* 12b91080 pop edi */
  EDI = (pop32());
  /* 12b91081 pop esi */
  ESI = (pop32());
  /* 12b91082 pop ebx */
  EBX = (pop32());
  /* 12b91083 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91086 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91088 call 0x12b926c0 */
  push32(0x12b9108du); f_12b926c0();
  /* 12b9108d mov esp, ebp */
  ESP = (EBP);
  /* 12b9108f pop ebp */
  EBP = (pop32());
  /* 12b91090 ret 0xc */
  ESPCHK(0x12b91050u, _esp0);
  ESP += 16; return;
}

/* FUN_100010b0 @ 0x12b910b0 (92 bytes, 34 insns) */
void f_12b910b0(void) {
  FTRACE(0x12b910b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b910b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b910b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b910b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b910b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12b910b7 push esi */
  push32((uint32_t)(ESI));
  /* 12b910b8 push edi */
  push32((uint32_t)(EDI));
  /* 12b910b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12b910bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12b910c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12b910c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12b910c8 mov esi, esp */
  ESI = (ESP);
  /* 12b910ca call dword ptr [0x12bc13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13dc))), 0x12b910d0u);
  /* 12b910d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b910d2 call 0x12b926c0 */
  push32(0x12b910d7u); f_12b926c0();
  /* 12b910d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b910d9 jne 0x12b910ec */
  if (!C.zf) goto L_12b910ec;
  /* 12b910db mov esi, esp */
  ESI = (ESP);
  /* 12b910dd call dword ptr [0x12bc13e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13e0))), 0x12b910e3u);
  /* 12b910e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b910e5 call 0x12b926c0 */
  push32(0x12b910eau); f_12b926c0();
  /* 12b910ea jmp 0x12b910fb */
  goto L_12b910fb;
L_12b910ec:;
  /* 12b910ec mov esi, esp */
  ESI = (ESP);
  /* 12b910ee call dword ptr [0x12bc13e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13e4))), 0x12b910f4u);
  /* 12b910f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b910f6 call 0x12b926c0 */
  push32(0x12b910fbu); f_12b926c0();
L_12b910fb:;
  /* 12b910fb pop edi */
  EDI = (pop32());
  /* 12b910fc pop esi */
  ESI = (pop32());
  /* 12b910fd pop ebx */
  EBX = (pop32());
  /* 12b910fe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91101 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91103 call 0x12b926c0 */
  push32(0x12b91108u); f_12b926c0();
  /* 12b91108 mov esp, ebp */
  ESP = (EBP);
  /* 12b9110a pop ebp */
  EBP = (pop32());
  /* 12b9110b ret  */
  ESPCHK(0x12b910b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001130 @ 0x12b91130 (93 bytes, 34 insns) */
void f_12b91130(void) {
  FTRACE(0x12b91130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b91130 push ebp */
  push32((uint32_t)(EBP));
  /* 12b91131 mov ebp, esp */
  EBP = (ESP);
  /* 12b91133 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b91136 push ebx */
  push32((uint32_t)(EBX));
  /* 12b91137 push esi */
  push32((uint32_t)(ESI));
  /* 12b91138 push edi */
  push32((uint32_t)(EDI));
  /* 12b91139 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12b9113c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12b91141 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12b91146 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12b91148 mov esi, esp */
  ESI = (ESP);
  /* 12b9114a call dword ptr [0x12bc13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13dc))), 0x12b91150u);
  /* 12b91150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91152 call 0x12b926c0 */
  push32(0x12b91157u); f_12b926c0();
  /* 12b91157 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9115a jne 0x12b9116d */
  if (!C.zf) goto L_12b9116d;
  /* 12b9115c mov esi, esp */
  ESI = (ESP);
  /* 12b9115e call dword ptr [0x12bc13e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13e0))), 0x12b91164u);
  /* 12b91164 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91166 call 0x12b926c0 */
  push32(0x12b9116bu); f_12b926c0();
  /* 12b9116b jmp 0x12b9117c */
  goto L_12b9117c;
L_12b9116d:;
  /* 12b9116d mov esi, esp */
  ESI = (ESP);
  /* 12b9116f call dword ptr [0x12bc13e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13e4))), 0x12b91175u);
  /* 12b91175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91177 call 0x12b926c0 */
  push32(0x12b9117cu); f_12b926c0();
L_12b9117c:;
  /* 12b9117c pop edi */
  EDI = (pop32());
  /* 12b9117d pop esi */
  ESI = (pop32());
  /* 12b9117e pop ebx */
  EBX = (pop32());
  /* 12b9117f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91182 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91184 call 0x12b926c0 */
  push32(0x12b91189u); f_12b926c0();
  /* 12b91189 mov esp, ebp */
  ESP = (EBP);
  /* 12b9118b pop ebp */
  EBP = (pop32());
  /* 12b9118c ret  */
  ESPCHK(0x12b91130u, _esp0);
  ESP += 4; return;
}

/* FUN_100011b0 @ 0x12b911b0 (3336 bytes, 848 insns) */
void f_12b911b0(void) {
  FTRACE(0x12b911b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b911b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b911b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b911b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b911b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12b911b7 push esi */
  push32((uint32_t)(ESI));
  /* 12b911b8 push edi */
  push32((uint32_t)(EDI));
  /* 12b911b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12b911bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12b911c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12b911c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12b911c8 mov esi, esp */
  ESI = (ESP);
  /* 12b911ca push 0x12bba880 */
  push32((uint32_t)(0x12bba880u));
  /* 12b911cf push 0x12bbf420 */
  push32((uint32_t)(0x12bbf420u));
  /* 12b911d4 call dword ptr [0x12bc13c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13c8))), 0x12b911dau);
  /* 12b911da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b911dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b911df call 0x12b926c0 */
  push32(0x12b911e4u); f_12b926c0();
  /* 12b911e4 mov esi, esp */
  ESI = (ESP);
  /* 12b911e6 push 0x12bba878 */
  push32((uint32_t)(0x12bba878u));
  /* 12b911eb push 0x12bbf428 */
  push32((uint32_t)(0x12bbf428u));
  /* 12b911f0 call dword ptr [0x12bc13c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13c8))), 0x12b911f6u);
  /* 12b911f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b911f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b911fb call 0x12b926c0 */
  push32(0x12b91200u); f_12b926c0();
  /* 12b91200 mov esi, esp */
  ESI = (ESP);
  /* 12b91202 push 0x12bba870 */
  push32((uint32_t)(0x12bba870u));
  /* 12b91207 push 0x12bbf430 */
  push32((uint32_t)(0x12bbf430u));
  /* 12b9120c call dword ptr [0x12bc13c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13c8))), 0x12b91212u);
  /* 12b91212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91215 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91217 call 0x12b926c0 */
  push32(0x12b9121cu); f_12b926c0();
  /* 12b9121c mov esi, esp */
  ESI = (ESP);
  /* 12b9121e push 0x12bba868 */
  push32((uint32_t)(0x12bba868u));
  /* 12b91223 push 0x12bbf438 */
  push32((uint32_t)(0x12bbf438u));
  /* 12b91228 call dword ptr [0x12bc13c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13c8))), 0x12b9122eu);
  /* 12b9122e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91231 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91233 call 0x12b926c0 */
  push32(0x12b91238u); f_12b926c0();
  /* 12b91238 mov esi, esp */
  ESI = (ESP);
  /* 12b9123a push 0x12bba860 */
  push32((uint32_t)(0x12bba860u));
  /* 12b9123f push 0x12bbf440 */
  push32((uint32_t)(0x12bbf440u));
  /* 12b91244 call dword ptr [0x12bc13c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13c8))), 0x12b9124au);
  /* 12b9124a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9124d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9124f call 0x12b926c0 */
  push32(0x12b91254u); f_12b926c0();
  /* 12b91254 mov esi, esp */
  ESI = (ESP);
  /* 12b91256 push 0x12bba858 */
  push32((uint32_t)(0x12bba858u));
  /* 12b9125b push 0x12bbf410 */
  push32((uint32_t)(0x12bbf410u));
  /* 12b91260 call dword ptr [0x12bc13cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13cc))), 0x12b91266u);
  /* 12b91266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91269 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9126b call 0x12b926c0 */
  push32(0x12b91270u); f_12b926c0();
  /* 12b91270 mov esi, esp */
  ESI = (ESP);
  /* 12b91272 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91277 push 0x12bbf418 */
  push32((uint32_t)(0x12bbf418u));
  /* 12b9127c call dword ptr [0x12bc13cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13cc))), 0x12b91282u);
  /* 12b91282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91285 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91287 call 0x12b926c0 */
  push32(0x12b9128cu); f_12b926c0();
  /* 12b9128c mov esi, esp */
  ESI = (ESP);
  /* 12b9128e push 1 */
  push32((uint32_t)(0x1u));
  /* 12b91290 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b91292 call dword ptr [0x12bc13d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d0))), 0x12b91298u);
  /* 12b91298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9129b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9129d call 0x12b926c0 */
  push32(0x12b912a2u); f_12b926c0();
  /* 12b912a2 mov esi, esp */
  ESI = (ESP);
  /* 12b912a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b912a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b912a8 call dword ptr [0x12bc13d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d0))), 0x12b912aeu);
  /* 12b912ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b912b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b912b3 call 0x12b926c0 */
  push32(0x12b912b8u); f_12b926c0();
  /* 12b912b8 mov esi, esp */
  ESI = (ESP);
  /* 12b912ba push 7 */
  push32((uint32_t)(0x7u));
  /* 12b912bc push 3 */
  push32((uint32_t)(0x3u));
  /* 12b912be call dword ptr [0x12bc13d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d0))), 0x12b912c4u);
  /* 12b912c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b912c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b912c9 call 0x12b926c0 */
  push32(0x12b912ceu); f_12b926c0();
  /* 12b912ce mov esi, esp */
  ESI = (ESP);
  /* 12b912d0 push 0x12bba834 */
  push32((uint32_t)(0x12bba834u));
  /* 12b912d5 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b912da call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b912e0u);
  /* 12b912e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b912e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b912e5 call 0x12b926c0 */
  push32(0x12b912eau); f_12b926c0();
  /* 12b912ea mov esi, esp */
  ESI = (ESP);
  /* 12b912ec push 0x12bba814 */
  push32((uint32_t)(0x12bba814u));
  /* 12b912f1 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b912f6 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b912fcu);
  /* 12b912fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b912ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91301 call 0x12b926c0 */
  push32(0x12b91306u); f_12b926c0();
  /* 12b91306 mov esi, esp */
  ESI = (ESP);
  /* 12b91308 push 0x12bba7f4 */
  push32((uint32_t)(0x12bba7f4u));
  /* 12b9130d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91312 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91318u);
  /* 12b91318 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9131b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9131d call 0x12b926c0 */
  push32(0x12b91322u); f_12b926c0();
  /* 12b91322 mov esi, esp */
  ESI = (ESP);
  /* 12b91324 push 0x12bba7d4 */
  push32((uint32_t)(0x12bba7d4u));
  /* 12b91329 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9132e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91334u);
  /* 12b91334 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91337 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91339 call 0x12b926c0 */
  push32(0x12b9133eu); f_12b926c0();
  /* 12b9133e mov esi, esp */
  ESI = (ESP);
  /* 12b91340 push 0x12bba7b4 */
  push32((uint32_t)(0x12bba7b4u));
  /* 12b91345 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9134a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91350u);
  /* 12b91350 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91353 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91355 call 0x12b926c0 */
  push32(0x12b9135au); f_12b926c0();
  /* 12b9135a mov esi, esp */
  ESI = (ESP);
  /* 12b9135c push 0x12bba794 */
  push32((uint32_t)(0x12bba794u));
  /* 12b91361 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91366 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b9136cu);
  /* 12b9136c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9136f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91371 call 0x12b926c0 */
  push32(0x12b91376u); f_12b926c0();
  /* 12b91376 mov esi, esp */
  ESI = (ESP);
  /* 12b91378 push 0x12bba778 */
  push32((uint32_t)(0x12bba778u));
  /* 12b9137d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91382 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91388u);
  /* 12b91388 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9138b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9138d call 0x12b926c0 */
  push32(0x12b91392u); f_12b926c0();
  /* 12b91392 mov esi, esp */
  ESI = (ESP);
  /* 12b91394 push 0x12bba758 */
  push32((uint32_t)(0x12bba758u));
  /* 12b91399 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9139e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b913a4u);
  /* 12b913a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b913a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b913a9 call 0x12b926c0 */
  push32(0x12b913aeu); f_12b926c0();
  /* 12b913ae mov esi, esp */
  ESI = (ESP);
  /* 12b913b0 push 0x12bba738 */
  push32((uint32_t)(0x12bba738u));
  /* 12b913b5 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b913ba call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b913c0u);
  /* 12b913c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b913c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b913c5 call 0x12b926c0 */
  push32(0x12b913cau); f_12b926c0();
  /* 12b913ca mov esi, esp */
  ESI = (ESP);
  /* 12b913cc push 0x12bba718 */
  push32((uint32_t)(0x12bba718u));
  /* 12b913d1 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b913d6 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b913dcu);
  /* 12b913dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b913df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b913e1 call 0x12b926c0 */
  push32(0x12b913e6u); f_12b926c0();
  /* 12b913e6 mov esi, esp */
  ESI = (ESP);
  /* 12b913e8 push 0x12bba6f8 */
  push32((uint32_t)(0x12bba6f8u));
  /* 12b913ed push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b913f2 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b913f8u);
  /* 12b913f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b913fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b913fd call 0x12b926c0 */
  push32(0x12b91402u); f_12b926c0();
  /* 12b91402 mov esi, esp */
  ESI = (ESP);
  /* 12b91404 push 0x12bba6d8 */
  push32((uint32_t)(0x12bba6d8u));
  /* 12b91409 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9140e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91414u);
  /* 12b91414 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91417 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91419 call 0x12b926c0 */
  push32(0x12b9141eu); f_12b926c0();
  /* 12b9141e mov esi, esp */
  ESI = (ESP);
  /* 12b91420 push 0x12bba6c0 */
  push32((uint32_t)(0x12bba6c0u));
  /* 12b91425 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9142a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91430u);
  /* 12b91430 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91433 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91435 call 0x12b926c0 */
  push32(0x12b9143au); f_12b926c0();
  /* 12b9143a mov esi, esp */
  ESI = (ESP);
  /* 12b9143c push 0x12bba6a4 */
  push32((uint32_t)(0x12bba6a4u));
  /* 12b91441 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91446 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b9144cu);
  /* 12b9144c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9144f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91451 call 0x12b926c0 */
  push32(0x12b91456u); f_12b926c0();
  /* 12b91456 mov esi, esp */
  ESI = (ESP);
  /* 12b91458 push 0x12bba688 */
  push32((uint32_t)(0x12bba688u));
  /* 12b9145d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91462 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91468u);
  /* 12b91468 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9146b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9146d call 0x12b926c0 */
  push32(0x12b91472u); f_12b926c0();
  /* 12b91472 mov esi, esp */
  ESI = (ESP);
  /* 12b91474 push 0x12bba66c */
  push32((uint32_t)(0x12bba66cu));
  /* 12b91479 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9147e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91484u);
  /* 12b91484 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91487 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91489 call 0x12b926c0 */
  push32(0x12b9148eu); f_12b926c0();
  /* 12b9148e mov esi, esp */
  ESI = (ESP);
  /* 12b91490 push 0x12bba650 */
  push32((uint32_t)(0x12bba650u));
  /* 12b91495 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9149a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b914a0u);
  /* 12b914a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b914a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b914a5 call 0x12b926c0 */
  push32(0x12b914aau); f_12b926c0();
  /* 12b914aa mov esi, esp */
  ESI = (ESP);
  /* 12b914ac push 0x12bba634 */
  push32((uint32_t)(0x12bba634u));
  /* 12b914b1 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b914b6 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b914bcu);
  /* 12b914bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b914bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b914c1 call 0x12b926c0 */
  push32(0x12b914c6u); f_12b926c0();
  /* 12b914c6 mov esi, esp */
  ESI = (ESP);
  /* 12b914c8 push 0x12bba61c */
  push32((uint32_t)(0x12bba61cu));
  /* 12b914cd push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b914d2 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b914d8u);
  /* 12b914d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b914db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b914dd call 0x12b926c0 */
  push32(0x12b914e2u); f_12b926c0();
  /* 12b914e2 mov esi, esp */
  ESI = (ESP);
  /* 12b914e4 push 0x12bba600 */
  push32((uint32_t)(0x12bba600u));
  /* 12b914e9 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b914ee call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b914f4u);
  /* 12b914f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b914f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b914f9 call 0x12b926c0 */
  push32(0x12b914feu); f_12b926c0();
  /* 12b914fe mov esi, esp */
  ESI = (ESP);
  /* 12b91500 push 0x12bba5e4 */
  push32((uint32_t)(0x12bba5e4u));
  /* 12b91505 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9150a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91510u);
  /* 12b91510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91513 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91515 call 0x12b926c0 */
  push32(0x12b9151au); f_12b926c0();
  /* 12b9151a mov esi, esp */
  ESI = (ESP);
  /* 12b9151c push 0x12bba5c8 */
  push32((uint32_t)(0x12bba5c8u));
  /* 12b91521 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91526 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b9152cu);
  /* 12b9152c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9152f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91531 call 0x12b926c0 */
  push32(0x12b91536u); f_12b926c0();
  /* 12b91536 mov esi, esp */
  ESI = (ESP);
  /* 12b91538 push 0x12bba5ac */
  push32((uint32_t)(0x12bba5acu));
  /* 12b9153d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91542 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91548u);
  /* 12b91548 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9154b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9154d call 0x12b926c0 */
  push32(0x12b91552u); f_12b926c0();
  /* 12b91552 mov esi, esp */
  ESI = (ESP);
  /* 12b91554 push 0x12bba590 */
  push32((uint32_t)(0x12bba590u));
  /* 12b91559 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9155e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91564u);
  /* 12b91564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91567 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91569 call 0x12b926c0 */
  push32(0x12b9156eu); f_12b926c0();
  /* 12b9156e mov esi, esp */
  ESI = (ESP);
  /* 12b91570 push 0x12bba578 */
  push32((uint32_t)(0x12bba578u));
  /* 12b91575 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9157a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91580u);
  /* 12b91580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91583 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91585 call 0x12b926c0 */
  push32(0x12b9158au); f_12b926c0();
  /* 12b9158a mov esi, esp */
  ESI = (ESP);
  /* 12b9158c push 0x12bba560 */
  push32((uint32_t)(0x12bba560u));
  /* 12b91591 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91596 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b9159cu);
  /* 12b9159c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9159f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b915a1 call 0x12b926c0 */
  push32(0x12b915a6u); f_12b926c0();
  /* 12b915a6 mov esi, esp */
  ESI = (ESP);
  /* 12b915a8 push 0x12bba548 */
  push32((uint32_t)(0x12bba548u));
  /* 12b915ad push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b915b2 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b915b8u);
  /* 12b915b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b915bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b915bd call 0x12b926c0 */
  push32(0x12b915c2u); f_12b926c0();
  /* 12b915c2 mov esi, esp */
  ESI = (ESP);
  /* 12b915c4 push 0x12bba530 */
  push32((uint32_t)(0x12bba530u));
  /* 12b915c9 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b915ce call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b915d4u);
  /* 12b915d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b915d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b915d9 call 0x12b926c0 */
  push32(0x12b915deu); f_12b926c0();
  /* 12b915de mov esi, esp */
  ESI = (ESP);
  /* 12b915e0 push 0x12bba518 */
  push32((uint32_t)(0x12bba518u));
  /* 12b915e5 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b915ea call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b915f0u);
  /* 12b915f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b915f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b915f5 call 0x12b926c0 */
  push32(0x12b915fau); f_12b926c0();
  /* 12b915fa mov esi, esp */
  ESI = (ESP);
  /* 12b915fc push 0x12bba500 */
  push32((uint32_t)(0x12bba500u));
  /* 12b91601 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91606 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b9160cu);
  /* 12b9160c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9160f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91611 call 0x12b926c0 */
  push32(0x12b91616u); f_12b926c0();
  /* 12b91616 mov esi, esp */
  ESI = (ESP);
  /* 12b91618 push 0x12bba4e8 */
  push32((uint32_t)(0x12bba4e8u));
  /* 12b9161d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91622 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91628u);
  /* 12b91628 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9162b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9162d call 0x12b926c0 */
  push32(0x12b91632u); f_12b926c0();
  /* 12b91632 mov esi, esp */
  ESI = (ESP);
  /* 12b91634 push 0x12bba4d0 */
  push32((uint32_t)(0x12bba4d0u));
  /* 12b91639 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9163e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91644u);
  /* 12b91644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91647 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91649 call 0x12b926c0 */
  push32(0x12b9164eu); f_12b926c0();
  /* 12b9164e mov esi, esp */
  ESI = (ESP);
  /* 12b91650 push 0x12bba4b8 */
  push32((uint32_t)(0x12bba4b8u));
  /* 12b91655 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9165a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91660u);
  /* 12b91660 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91663 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91665 call 0x12b926c0 */
  push32(0x12b9166au); f_12b926c0();
  /* 12b9166a mov esi, esp */
  ESI = (ESP);
  /* 12b9166c push 0x12bba4a0 */
  push32((uint32_t)(0x12bba4a0u));
  /* 12b91671 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91676 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b9167cu);
  /* 12b9167c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9167f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91681 call 0x12b926c0 */
  push32(0x12b91686u); f_12b926c0();
  /* 12b91686 mov esi, esp */
  ESI = (ESP);
  /* 12b91688 push 0x12bba488 */
  push32((uint32_t)(0x12bba488u));
  /* 12b9168d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91692 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91698u);
  /* 12b91698 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9169b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9169d call 0x12b926c0 */
  push32(0x12b916a2u); f_12b926c0();
  /* 12b916a2 mov esi, esp */
  ESI = (ESP);
  /* 12b916a4 push 0x12bba470 */
  push32((uint32_t)(0x12bba470u));
  /* 12b916a9 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b916ae call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b916b4u);
  /* 12b916b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b916b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b916b9 call 0x12b926c0 */
  push32(0x12b916beu); f_12b926c0();
  /* 12b916be mov esi, esp */
  ESI = (ESP);
  /* 12b916c0 push 0x12bba458 */
  push32((uint32_t)(0x12bba458u));
  /* 12b916c5 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b916ca call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b916d0u);
  /* 12b916d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b916d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b916d5 call 0x12b926c0 */
  push32(0x12b916dau); f_12b926c0();
  /* 12b916da mov esi, esp */
  ESI = (ESP);
  /* 12b916dc push 0x12bba440 */
  push32((uint32_t)(0x12bba440u));
  /* 12b916e1 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b916e6 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b916ecu);
  /* 12b916ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b916ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b916f1 call 0x12b926c0 */
  push32(0x12b916f6u); f_12b926c0();
  /* 12b916f6 mov esi, esp */
  ESI = (ESP);
  /* 12b916f8 push 0x12bba428 */
  push32((uint32_t)(0x12bba428u));
  /* 12b916fd push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91702 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91708u);
  /* 12b91708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9170b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9170d call 0x12b926c0 */
  push32(0x12b91712u); f_12b926c0();
  /* 12b91712 mov esi, esp */
  ESI = (ESP);
  /* 12b91714 push 0x12bba410 */
  push32((uint32_t)(0x12bba410u));
  /* 12b91719 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9171e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91724u);
  /* 12b91724 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91727 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91729 call 0x12b926c0 */
  push32(0x12b9172eu); f_12b926c0();
  /* 12b9172e mov esi, esp */
  ESI = (ESP);
  /* 12b91730 push 0x12bba3f8 */
  push32((uint32_t)(0x12bba3f8u));
  /* 12b91735 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9173a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91740u);
  /* 12b91740 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91743 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91745 call 0x12b926c0 */
  push32(0x12b9174au); f_12b926c0();
  /* 12b9174a mov esi, esp */
  ESI = (ESP);
  /* 12b9174c push 0x12bba3e0 */
  push32((uint32_t)(0x12bba3e0u));
  /* 12b91751 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91756 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b9175cu);
  /* 12b9175c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9175f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91761 call 0x12b926c0 */
  push32(0x12b91766u); f_12b926c0();
  /* 12b91766 mov esi, esp */
  ESI = (ESP);
  /* 12b91768 push 0x12bba3c8 */
  push32((uint32_t)(0x12bba3c8u));
  /* 12b9176d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91772 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91778u);
  /* 12b91778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9177b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9177d call 0x12b926c0 */
  push32(0x12b91782u); f_12b926c0();
  /* 12b91782 mov esi, esp */
  ESI = (ESP);
  /* 12b91784 push 0x12bba3b0 */
  push32((uint32_t)(0x12bba3b0u));
  /* 12b91789 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9178e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91794u);
  /* 12b91794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91797 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91799 call 0x12b926c0 */
  push32(0x12b9179eu); f_12b926c0();
  /* 12b9179e mov esi, esp */
  ESI = (ESP);
  /* 12b917a0 push 0x12bba398 */
  push32((uint32_t)(0x12bba398u));
  /* 12b917a5 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b917aa call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b917b0u);
  /* 12b917b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b917b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b917b5 call 0x12b926c0 */
  push32(0x12b917bau); f_12b926c0();
  /* 12b917ba mov esi, esp */
  ESI = (ESP);
  /* 12b917bc push 0x12bba380 */
  push32((uint32_t)(0x12bba380u));
  /* 12b917c1 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b917c6 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b917ccu);
  /* 12b917cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b917cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b917d1 call 0x12b926c0 */
  push32(0x12b917d6u); f_12b926c0();
  /* 12b917d6 mov esi, esp */
  ESI = (ESP);
  /* 12b917d8 push 0x12bba368 */
  push32((uint32_t)(0x12bba368u));
  /* 12b917dd push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b917e2 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b917e8u);
  /* 12b917e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b917eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b917ed call 0x12b926c0 */
  push32(0x12b917f2u); f_12b926c0();
  /* 12b917f2 mov esi, esp */
  ESI = (ESP);
  /* 12b917f4 push 0x12bba350 */
  push32((uint32_t)(0x12bba350u));
  /* 12b917f9 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b917fe call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91804u);
  /* 12b91804 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91807 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91809 call 0x12b926c0 */
  push32(0x12b9180eu); f_12b926c0();
  /* 12b9180e mov esi, esp */
  ESI = (ESP);
  /* 12b91810 push 0x12bba338 */
  push32((uint32_t)(0x12bba338u));
  /* 12b91815 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9181a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91820u);
  /* 12b91820 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91823 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91825 call 0x12b926c0 */
  push32(0x12b9182au); f_12b926c0();
  /* 12b9182a mov esi, esp */
  ESI = (ESP);
  /* 12b9182c push 0x12bba31c */
  push32((uint32_t)(0x12bba31cu));
  /* 12b91831 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91836 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b9183cu);
  /* 12b9183c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9183f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91841 call 0x12b926c0 */
  push32(0x12b91846u); f_12b926c0();
  /* 12b91846 mov esi, esp */
  ESI = (ESP);
  /* 12b91848 push 0x12bba300 */
  push32((uint32_t)(0x12bba300u));
  /* 12b9184d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91852 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91858u);
  /* 12b91858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9185b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9185d call 0x12b926c0 */
  push32(0x12b91862u); f_12b926c0();
  /* 12b91862 mov esi, esp */
  ESI = (ESP);
  /* 12b91864 push 0x12bba2e4 */
  push32((uint32_t)(0x12bba2e4u));
  /* 12b91869 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9186e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91874u);
  /* 12b91874 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91877 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91879 call 0x12b926c0 */
  push32(0x12b9187eu); f_12b926c0();
  /* 12b9187e mov esi, esp */
  ESI = (ESP);
  /* 12b91880 push 0x12bba2c8 */
  push32((uint32_t)(0x12bba2c8u));
  /* 12b91885 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9188a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91890u);
  /* 12b91890 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91893 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91895 call 0x12b926c0 */
  push32(0x12b9189au); f_12b926c0();
  /* 12b9189a mov esi, esp */
  ESI = (ESP);
  /* 12b9189c push 0x12bba2ac */
  push32((uint32_t)(0x12bba2acu));
  /* 12b918a1 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b918a6 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b918acu);
  /* 12b918ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b918af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b918b1 call 0x12b926c0 */
  push32(0x12b918b6u); f_12b926c0();
  /* 12b918b6 mov esi, esp */
  ESI = (ESP);
  /* 12b918b8 push 0x12bba294 */
  push32((uint32_t)(0x12bba294u));
  /* 12b918bd push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b918c2 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b918c8u);
  /* 12b918c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b918cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b918cd call 0x12b926c0 */
  push32(0x12b918d2u); f_12b926c0();
  /* 12b918d2 mov esi, esp */
  ESI = (ESP);
  /* 12b918d4 push 0x12bba278 */
  push32((uint32_t)(0x12bba278u));
  /* 12b918d9 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b918de call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b918e4u);
  /* 12b918e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b918e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b918e9 call 0x12b926c0 */
  push32(0x12b918eeu); f_12b926c0();
  /* 12b918ee mov esi, esp */
  ESI = (ESP);
  /* 12b918f0 push 0x12bba25c */
  push32((uint32_t)(0x12bba25cu));
  /* 12b918f5 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b918fa call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91900u);
  /* 12b91900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91903 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91905 call 0x12b926c0 */
  push32(0x12b9190au); f_12b926c0();
  /* 12b9190a mov esi, esp */
  ESI = (ESP);
  /* 12b9190c push 0x12bba240 */
  push32((uint32_t)(0x12bba240u));
  /* 12b91911 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91916 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b9191cu);
  /* 12b9191c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9191f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91921 call 0x12b926c0 */
  push32(0x12b91926u); f_12b926c0();
  /* 12b91926 mov esi, esp */
  ESI = (ESP);
  /* 12b91928 push 0x12bba224 */
  push32((uint32_t)(0x12bba224u));
  /* 12b9192d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91932 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91938u);
  /* 12b91938 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9193b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9193d call 0x12b926c0 */
  push32(0x12b91942u); f_12b926c0();
  /* 12b91942 mov esi, esp */
  ESI = (ESP);
  /* 12b91944 push 0x12bba208 */
  push32((uint32_t)(0x12bba208u));
  /* 12b91949 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9194e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91954u);
  /* 12b91954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91957 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91959 call 0x12b926c0 */
  push32(0x12b9195eu); f_12b926c0();
  /* 12b9195e mov esi, esp */
  ESI = (ESP);
  /* 12b91960 push 0x12bba1fc */
  push32((uint32_t)(0x12bba1fcu));
  /* 12b91965 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b9196a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91970u);
  /* 12b91970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91973 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91975 call 0x12b926c0 */
  push32(0x12b9197au); f_12b926c0();
  /* 12b9197a mov esi, esp */
  ESI = (ESP);
  /* 12b9197c push 0x12bba1f0 */
  push32((uint32_t)(0x12bba1f0u));
  /* 12b91981 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91986 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b9198cu);
  /* 12b9198c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9198f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91991 call 0x12b926c0 */
  push32(0x12b91996u); f_12b926c0();
  /* 12b91996 mov esi, esp */
  ESI = (ESP);
  /* 12b91998 push 0x12bba1e4 */
  push32((uint32_t)(0x12bba1e4u));
  /* 12b9199d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b919a2 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b919a8u);
  /* 12b919a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b919ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b919ad call 0x12b926c0 */
  push32(0x12b919b2u); f_12b926c0();
  /* 12b919b2 mov esi, esp */
  ESI = (ESP);
  /* 12b919b4 push 0x12bba1d8 */
  push32((uint32_t)(0x12bba1d8u));
  /* 12b919b9 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b919be call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b919c4u);
  /* 12b919c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b919c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b919c9 call 0x12b926c0 */
  push32(0x12b919ceu); f_12b926c0();
  /* 12b919ce mov esi, esp */
  ESI = (ESP);
  /* 12b919d0 push 0x12bba1cc */
  push32((uint32_t)(0x12bba1ccu));
  /* 12b919d5 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b919da call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b919e0u);
  /* 12b919e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b919e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b919e5 call 0x12b926c0 */
  push32(0x12b919eau); f_12b926c0();
  /* 12b919ea mov esi, esp */
  ESI = (ESP);
  /* 12b919ec push 0x12bba1c0 */
  push32((uint32_t)(0x12bba1c0u));
  /* 12b919f1 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b919f6 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b919fcu);
  /* 12b919fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b919ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91a01 call 0x12b926c0 */
  push32(0x12b91a06u); f_12b926c0();
  /* 12b91a06 mov esi, esp */
  ESI = (ESP);
  /* 12b91a08 push 0x12bba1b4 */
  push32((uint32_t)(0x12bba1b4u));
  /* 12b91a0d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91a12 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91a18u);
  /* 12b91a18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91a1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91a1d call 0x12b926c0 */
  push32(0x12b91a22u); f_12b926c0();
  /* 12b91a22 mov esi, esp */
  ESI = (ESP);
  /* 12b91a24 push 0x12bba1a8 */
  push32((uint32_t)(0x12bba1a8u));
  /* 12b91a29 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91a2e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91a34u);
  /* 12b91a34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91a37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91a39 call 0x12b926c0 */
  push32(0x12b91a3eu); f_12b926c0();
  /* 12b91a3e mov esi, esp */
  ESI = (ESP);
  /* 12b91a40 push 0x12bba19c */
  push32((uint32_t)(0x12bba19cu));
  /* 12b91a45 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91a4a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91a50u);
  /* 12b91a50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91a53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91a55 call 0x12b926c0 */
  push32(0x12b91a5au); f_12b926c0();
  /* 12b91a5a mov esi, esp */
  ESI = (ESP);
  /* 12b91a5c push 0x12bba190 */
  push32((uint32_t)(0x12bba190u));
  /* 12b91a61 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91a66 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91a6cu);
  /* 12b91a6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91a6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91a71 call 0x12b926c0 */
  push32(0x12b91a76u); f_12b926c0();
  /* 12b91a76 mov esi, esp */
  ESI = (ESP);
  /* 12b91a78 push 0x12bba184 */
  push32((uint32_t)(0x12bba184u));
  /* 12b91a7d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91a82 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91a88u);
  /* 12b91a88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91a8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91a8d call 0x12b926c0 */
  push32(0x12b91a92u); f_12b926c0();
  /* 12b91a92 mov esi, esp */
  ESI = (ESP);
  /* 12b91a94 push 0x12bba178 */
  push32((uint32_t)(0x12bba178u));
  /* 12b91a99 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91a9e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91aa4u);
  /* 12b91aa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91aa7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91aa9 call 0x12b926c0 */
  push32(0x12b91aaeu); f_12b926c0();
  /* 12b91aae mov esi, esp */
  ESI = (ESP);
  /* 12b91ab0 push 0x12bba16c */
  push32((uint32_t)(0x12bba16cu));
  /* 12b91ab5 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91aba call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91ac0u);
  /* 12b91ac0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91ac3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91ac5 call 0x12b926c0 */
  push32(0x12b91acau); f_12b926c0();
  /* 12b91aca mov esi, esp */
  ESI = (ESP);
  /* 12b91acc push 0x12bba160 */
  push32((uint32_t)(0x12bba160u));
  /* 12b91ad1 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91ad6 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91adcu);
  /* 12b91adc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91adf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91ae1 call 0x12b926c0 */
  push32(0x12b91ae6u); f_12b926c0();
  /* 12b91ae6 mov esi, esp */
  ESI = (ESP);
  /* 12b91ae8 push 0x12bba154 */
  push32((uint32_t)(0x12bba154u));
  /* 12b91aed push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91af2 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91af8u);
  /* 12b91af8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91afb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91afd call 0x12b926c0 */
  push32(0x12b91b02u); f_12b926c0();
  /* 12b91b02 mov esi, esp */
  ESI = (ESP);
  /* 12b91b04 push 0x12bba148 */
  push32((uint32_t)(0x12bba148u));
  /* 12b91b09 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91b0e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91b14u);
  /* 12b91b14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91b17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91b19 call 0x12b926c0 */
  push32(0x12b91b1eu); f_12b926c0();
  /* 12b91b1e mov esi, esp */
  ESI = (ESP);
  /* 12b91b20 push 0x12bba13c */
  push32((uint32_t)(0x12bba13cu));
  /* 12b91b25 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91b2a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91b30u);
  /* 12b91b30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91b33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91b35 call 0x12b926c0 */
  push32(0x12b91b3au); f_12b926c0();
  /* 12b91b3a mov esi, esp */
  ESI = (ESP);
  /* 12b91b3c push 0x12bba130 */
  push32((uint32_t)(0x12bba130u));
  /* 12b91b41 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91b46 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91b4cu);
  /* 12b91b4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91b4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91b51 call 0x12b926c0 */
  push32(0x12b91b56u); f_12b926c0();
  /* 12b91b56 mov esi, esp */
  ESI = (ESP);
  /* 12b91b58 push 0x12bba124 */
  push32((uint32_t)(0x12bba124u));
  /* 12b91b5d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91b62 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91b68u);
  /* 12b91b68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91b6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91b6d call 0x12b926c0 */
  push32(0x12b91b72u); f_12b926c0();
  /* 12b91b72 mov esi, esp */
  ESI = (ESP);
  /* 12b91b74 push 0x12bba118 */
  push32((uint32_t)(0x12bba118u));
  /* 12b91b79 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91b7e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91b84u);
  /* 12b91b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91b87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91b89 call 0x12b926c0 */
  push32(0x12b91b8eu); f_12b926c0();
  /* 12b91b8e mov esi, esp */
  ESI = (ESP);
  /* 12b91b90 push 0x12bba10c */
  push32((uint32_t)(0x12bba10cu));
  /* 12b91b95 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91b9a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91ba0u);
  /* 12b91ba0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91ba3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91ba5 call 0x12b926c0 */
  push32(0x12b91baau); f_12b926c0();
  /* 12b91baa mov esi, esp */
  ESI = (ESP);
  /* 12b91bac push 0x12bba100 */
  push32((uint32_t)(0x12bba100u));
  /* 12b91bb1 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91bb6 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91bbcu);
  /* 12b91bbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91bbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91bc1 call 0x12b926c0 */
  push32(0x12b91bc6u); f_12b926c0();
  /* 12b91bc6 mov esi, esp */
  ESI = (ESP);
  /* 12b91bc8 push 0x12bba0f4 */
  push32((uint32_t)(0x12bba0f4u));
  /* 12b91bcd push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91bd2 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91bd8u);
  /* 12b91bd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91bdb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91bdd call 0x12b926c0 */
  push32(0x12b91be2u); f_12b926c0();
  /* 12b91be2 mov esi, esp */
  ESI = (ESP);
  /* 12b91be4 push 0x12bba0e8 */
  push32((uint32_t)(0x12bba0e8u));
  /* 12b91be9 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91bee call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91bf4u);
  /* 12b91bf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91bf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91bf9 call 0x12b926c0 */
  push32(0x12b91bfeu); f_12b926c0();
  /* 12b91bfe mov esi, esp */
  ESI = (ESP);
  /* 12b91c00 push 0x12bba0dc */
  push32((uint32_t)(0x12bba0dcu));
  /* 12b91c05 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91c0a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91c10u);
  /* 12b91c10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91c13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91c15 call 0x12b926c0 */
  push32(0x12b91c1au); f_12b926c0();
  /* 12b91c1a mov esi, esp */
  ESI = (ESP);
  /* 12b91c1c push 0x12bba0d0 */
  push32((uint32_t)(0x12bba0d0u));
  /* 12b91c21 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91c26 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91c2cu);
  /* 12b91c2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91c2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91c31 call 0x12b926c0 */
  push32(0x12b91c36u); f_12b926c0();
  /* 12b91c36 mov esi, esp */
  ESI = (ESP);
  /* 12b91c38 push 0x12bba0c4 */
  push32((uint32_t)(0x12bba0c4u));
  /* 12b91c3d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91c42 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91c48u);
  /* 12b91c48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91c4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91c4d call 0x12b926c0 */
  push32(0x12b91c52u); f_12b926c0();
  /* 12b91c52 mov esi, esp */
  ESI = (ESP);
  /* 12b91c54 push 0x12bba0b8 */
  push32((uint32_t)(0x12bba0b8u));
  /* 12b91c59 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91c5e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91c64u);
  /* 12b91c64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91c67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91c69 call 0x12b926c0 */
  push32(0x12b91c6eu); f_12b926c0();
  /* 12b91c6e mov esi, esp */
  ESI = (ESP);
  /* 12b91c70 push 0x12bba0ac */
  push32((uint32_t)(0x12bba0acu));
  /* 12b91c75 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91c7a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91c80u);
  /* 12b91c80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91c83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91c85 call 0x12b926c0 */
  push32(0x12b91c8au); f_12b926c0();
  /* 12b91c8a mov esi, esp */
  ESI = (ESP);
  /* 12b91c8c push 0x12bba0a0 */
  push32((uint32_t)(0x12bba0a0u));
  /* 12b91c91 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91c96 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91c9cu);
  /* 12b91c9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91c9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91ca1 call 0x12b926c0 */
  push32(0x12b91ca6u); f_12b926c0();
  /* 12b91ca6 mov esi, esp */
  ESI = (ESP);
  /* 12b91ca8 push 0x12bba094 */
  push32((uint32_t)(0x12bba094u));
  /* 12b91cad push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91cb2 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91cb8u);
  /* 12b91cb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91cbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91cbd call 0x12b926c0 */
  push32(0x12b91cc2u); f_12b926c0();
  /* 12b91cc2 mov esi, esp */
  ESI = (ESP);
  /* 12b91cc4 push 0x12bba088 */
  push32((uint32_t)(0x12bba088u));
  /* 12b91cc9 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91cce call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91cd4u);
  /* 12b91cd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91cd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91cd9 call 0x12b926c0 */
  push32(0x12b91cdeu); f_12b926c0();
  /* 12b91cde mov esi, esp */
  ESI = (ESP);
  /* 12b91ce0 push 0x12bba07c */
  push32((uint32_t)(0x12bba07cu));
  /* 12b91ce5 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91cea call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91cf0u);
  /* 12b91cf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91cf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91cf5 call 0x12b926c0 */
  push32(0x12b91cfau); f_12b926c0();
  /* 12b91cfa mov esi, esp */
  ESI = (ESP);
  /* 12b91cfc push 0x12bba070 */
  push32((uint32_t)(0x12bba070u));
  /* 12b91d01 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91d06 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91d0cu);
  /* 12b91d0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91d0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91d11 call 0x12b926c0 */
  push32(0x12b91d16u); f_12b926c0();
  /* 12b91d16 mov esi, esp */
  ESI = (ESP);
  /* 12b91d18 push 0x12bba064 */
  push32((uint32_t)(0x12bba064u));
  /* 12b91d1d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91d22 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91d28u);
  /* 12b91d28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91d2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91d2d call 0x12b926c0 */
  push32(0x12b91d32u); f_12b926c0();
  /* 12b91d32 mov esi, esp */
  ESI = (ESP);
  /* 12b91d34 push 0x12bba058 */
  push32((uint32_t)(0x12bba058u));
  /* 12b91d39 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91d3e call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91d44u);
  /* 12b91d44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91d47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91d49 call 0x12b926c0 */
  push32(0x12b91d4eu); f_12b926c0();
  /* 12b91d4e mov esi, esp */
  ESI = (ESP);
  /* 12b91d50 push 0x12bba04c */
  push32((uint32_t)(0x12bba04cu));
  /* 12b91d55 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91d5a call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91d60u);
  /* 12b91d60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91d63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91d65 call 0x12b926c0 */
  push32(0x12b91d6au); f_12b926c0();
  /* 12b91d6a mov esi, esp */
  ESI = (ESP);
  /* 12b91d6c push 0x12bba040 */
  push32((uint32_t)(0x12bba040u));
  /* 12b91d71 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91d76 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91d7cu);
  /* 12b91d7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91d7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91d81 call 0x12b926c0 */
  push32(0x12b91d86u); f_12b926c0();
  /* 12b91d86 mov esi, esp */
  ESI = (ESP);
  /* 12b91d88 push 0x12bba034 */
  push32((uint32_t)(0x12bba034u));
  /* 12b91d8d push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91d92 call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91d98u);
  /* 12b91d98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91d9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91d9d call 0x12b926c0 */
  push32(0x12b91da2u); f_12b926c0();
  /* 12b91da2 mov esi, esp */
  ESI = (ESP);
  /* 12b91da4 push 0x12bba028 */
  push32((uint32_t)(0x12bba028u));
  /* 12b91da9 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91dae call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91db4u);
  /* 12b91db4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91db7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91db9 call 0x12b926c0 */
  push32(0x12b91dbeu); f_12b926c0();
  /* 12b91dbe mov esi, esp */
  ESI = (ESP);
  /* 12b91dc0 push 0x12bba01c */
  push32((uint32_t)(0x12bba01cu));
  /* 12b91dc5 push 0x12bba850 */
  push32((uint32_t)(0x12bba850u));
  /* 12b91dca call dword ptr [0x12bc13d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d4))), 0x12b91dd0u);
  /* 12b91dd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91dd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91dd5 call 0x12b926c0 */
  push32(0x12b91ddau); f_12b926c0();
  /* 12b91dda mov esi, esp */
  ESI = (ESP);
  /* 12b91ddc push 1 */
  push32((uint32_t)(0x1u));
  /* 12b91dde push 0 */
  push32((uint32_t)(0x0u));
  /* 12b91de0 push 0x12bbf420 */
  push32((uint32_t)(0x12bbf420u));
  /* 12b91de5 call dword ptr [0x12bc13d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d8))), 0x12b91debu);
  /* 12b91deb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91dee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91df0 call 0x12b926c0 */
  push32(0x12b91df5u); f_12b926c0();
  /* 12b91df5 mov esi, esp */
  ESI = (ESP);
  /* 12b91df7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b91df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b91dfb push 0x12bbf428 */
  push32((uint32_t)(0x12bbf428u));
  /* 12b91e00 call dword ptr [0x12bc13d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d8))), 0x12b91e06u);
  /* 12b91e06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91e09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91e0b call 0x12b926c0 */
  push32(0x12b91e10u); f_12b926c0();
  /* 12b91e10 mov esi, esp */
  ESI = (ESP);
  /* 12b91e12 push 3 */
  push32((uint32_t)(0x3u));
  /* 12b91e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b91e16 push 0x12bbf430 */
  push32((uint32_t)(0x12bbf430u));
  /* 12b91e1b call dword ptr [0x12bc13d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d8))), 0x12b91e21u);
  /* 12b91e21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91e24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91e26 call 0x12b926c0 */
  push32(0x12b91e2bu); f_12b926c0();
  /* 12b91e2b mov esi, esp */
  ESI = (ESP);
  /* 12b91e2d push 4 */
  push32((uint32_t)(0x4u));
  /* 12b91e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12b91e31 push 0x12bbf438 */
  push32((uint32_t)(0x12bbf438u));
  /* 12b91e36 call dword ptr [0x12bc13d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d8))), 0x12b91e3cu);
  /* 12b91e3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91e3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91e41 call 0x12b926c0 */
  push32(0x12b91e46u); f_12b926c0();
  /* 12b91e46 mov esi, esp */
  ESI = (ESP);
  /* 12b91e48 push 5 */
  push32((uint32_t)(0x5u));
  /* 12b91e4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b91e4c push 0x12bbf440 */
  push32((uint32_t)(0x12bbf440u));
  /* 12b91e51 call dword ptr [0x12bc13d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13d8))), 0x12b91e57u);
  /* 12b91e57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91e5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91e5c call 0x12b926c0 */
  push32(0x12b91e61u); f_12b926c0();
  /* 12b91e61 mov dword ptr [0x12bbf3e0], 0 */
  w32((uint32_t)(0x12bbf3e0), (0x0u));
  /* 12b91e6b jmp 0x12b91e7a */
  goto L_12b91e7a;
L_12b91e6d:;
  /* 12b91e6d mov eax, dword ptr [0x12bbf3e0] */
  EAX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b91e72 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91e75 mov dword ptr [0x12bbf3e0], eax */
  w32((uint32_t)(0x12bbf3e0), (EAX));
L_12b91e7a:;
  /* 12b91e7a cmp dword ptr [0x12bbf3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91e81 jge 0x12b91ea7 */
  if ((C.sf==C.of)) goto L_12b91ea7;
  /* 12b91e83 mov ecx, dword ptr [0x12bbf3e0] */
  ECX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b91e89 mov dword ptr [ecx*4 + 0x12bbf3e4], 0 */
  w32((uint32_t)(ECX*4 + 0x12bbf3e4), (0x0u));
  /* 12b91e94 mov edx, dword ptr [0x12bbf3e0] */
  EDX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b91e9a mov dword ptr [edx*4 + 0x12bbf3f8], 0 */
  w32((uint32_t)(EDX*4 + 0x12bbf3f8), (0x0u));
  /* 12b91ea5 jmp 0x12b91e6d */
  goto L_12b91e6d;
L_12b91ea7:;
  /* 12b91ea7 pop edi */
  EDI = (pop32());
  /* 12b91ea8 pop esi */
  ESI = (pop32());
  /* 12b91ea9 pop ebx */
  EBX = (pop32());
  /* 12b91eaa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b91ead cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b91eaf call 0x12b926c0 */
  push32(0x12b91eb4u); f_12b926c0();
  /* 12b91eb4 mov esp, ebp */
  ESP = (EBP);
  /* 12b91eb6 pop ebp */
  EBP = (pop32());
  /* 12b91eb7 ret  */
  ESPCHK(0x12b911b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002200 @ 0x12b92200 (830 bytes, 219 insns) */
void f_12b92200(void) {
  FTRACE(0x12b92200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b92200 push ebp */
  push32((uint32_t)(EBP));
  /* 12b92201 mov ebp, esp */
  EBP = (ESP);
  /* 12b92203 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b92206 push ebx */
  push32((uint32_t)(EBX));
  /* 12b92207 push esi */
  push32((uint32_t)(ESI));
  /* 12b92208 push edi */
  push32((uint32_t)(EDI));
  /* 12b92209 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12b9220c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12b92211 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12b92216 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12b92218 mov dword ptr [0x12bbf3e0], 0 */
  w32((uint32_t)(0x12bbf3e0), (0x0u));
  /* 12b92222 jmp 0x12b92231 */
  goto L_12b92231;
L_12b92224:;
  /* 12b92224 mov eax, dword ptr [0x12bbf3e0] */
  EAX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b92229 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9222c mov dword ptr [0x12bbf3e0], eax */
  w32((uint32_t)(0x12bbf3e0), (EAX));
L_12b92231:;
  /* 12b92231 cmp dword ptr [0x12bbf3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92238 jge 0x12b9231b */
  if ((C.sf==C.of)) goto L_12b9231b;
  /* 12b9223e mov esi, esp */
  ESI = (ESP);
  /* 12b92240 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b92242 mov ecx, dword ptr [0x12bbf3e0] */
  ECX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b92248 lea edx, [ecx*8 + 0x12bbf420] */
  EDX = ((uint32_t)(ECX*8 + 0x12bbf420));
  /* 12b9224f push edx */
  push32((uint32_t)(EDX));
  /* 12b92250 call dword ptr [0x12bc13b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13b4))), 0x12b92256u);
  /* 12b92256 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92259 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9225b call 0x12b926c0 */
  push32(0x12b92260u); f_12b926c0();
  /* 12b92260 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92262 jle 0x12b922aa */
  if ((C.zf||C.sf!=C.of)) goto L_12b922aa;
  /* 12b92264 mov esi, esp */
  ESI = (ESP);
  /* 12b92266 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b92268 mov eax, dword ptr [0x12bbf3e0] */
  EAX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b9226d lea ecx, [eax*8 + 0x12bbf420] */
  ECX = ((uint32_t)(EAX*8 + 0x12bbf420));
  /* 12b92274 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92275 call dword ptr [0x12bc13b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13b4))), 0x12b9227bu);
  /* 12b9227b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9227e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92280 call 0x12b926c0 */
  push32(0x12b92285u); f_12b926c0();
  /* 12b92285 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92287 jne 0x12b922aa */
  if (!C.zf) goto L_12b922aa;
  /* 12b92289 mov edx, dword ptr [0x12bbf3e0] */
  EDX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b9228f mov dword ptr [edx*4 + 0x12bbf3e4], 1 */
  w32((uint32_t)(EDX*4 + 0x12bbf3e4), (0x1u));
  /* 12b9229a mov eax, dword ptr [0x12bbf3e0] */
  EAX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b9229f mov dword ptr [eax*4 + 0x12bbf3f8], 0 */
  w32((uint32_t)(EAX*4 + 0x12bbf3f8), (0x0u));
L_12b922aa:;
  /* 12b922aa mov esi, esp */
  ESI = (ESP);
  /* 12b922ac push 1 */
  push32((uint32_t)(0x1u));
  /* 12b922ae mov ecx, dword ptr [0x12bbf3e0] */
  ECX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b922b4 lea edx, [ecx*8 + 0x12bbf420] */
  EDX = ((uint32_t)(ECX*8 + 0x12bbf420));
  /* 12b922bb push edx */
  push32((uint32_t)(EDX));
  /* 12b922bc call dword ptr [0x12bc13b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13b4))), 0x12b922c2u);
  /* 12b922c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b922c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b922c7 call 0x12b926c0 */
  push32(0x12b922ccu); f_12b926c0();
  /* 12b922cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b922ce jle 0x12b92316 */
  if ((C.zf||C.sf!=C.of)) goto L_12b92316;
  /* 12b922d0 mov esi, esp */
  ESI = (ESP);
  /* 12b922d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b922d4 mov eax, dword ptr [0x12bbf3e0] */
  EAX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b922d9 lea ecx, [eax*8 + 0x12bbf420] */
  ECX = ((uint32_t)(EAX*8 + 0x12bbf420));
  /* 12b922e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12b922e1 call dword ptr [0x12bc13b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13b4))), 0x12b922e7u);
  /* 12b922e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b922ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b922ec call 0x12b926c0 */
  push32(0x12b922f1u); f_12b926c0();
  /* 12b922f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b922f3 jne 0x12b92316 */
  if (!C.zf) goto L_12b92316;
  /* 12b922f5 mov edx, dword ptr [0x12bbf3e0] */
  EDX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b922fb mov dword ptr [edx*4 + 0x12bbf3e4], 0 */
  w32((uint32_t)(EDX*4 + 0x12bbf3e4), (0x0u));
  /* 12b92306 mov eax, dword ptr [0x12bbf3e0] */
  EAX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b9230b mov dword ptr [eax*4 + 0x12bbf3f8], 1 */
  w32((uint32_t)(EAX*4 + 0x12bbf3f8), (0x1u));
L_12b92316:;
  /* 12b92316 jmp 0x12b92224 */
  goto L_12b92224;
L_12b9231b:;
  /* 12b9231b mov dword ptr [0x12bbf448], 0 */
  w32((uint32_t)(0x12bbf448), (0x0u));
  /* 12b92325 mov dword ptr [0x12bbf44c], 0 */
  w32((uint32_t)(0x12bbf44c), (0x0u));
  /* 12b9232f mov dword ptr [0x12bbf3e0], 0 */
  w32((uint32_t)(0x12bbf3e0), (0x0u));
  /* 12b92339 jmp 0x12b9234a */
  goto L_12b9234a;
L_12b9233b:;
  /* 12b9233b mov ecx, dword ptr [0x12bbf3e0] */
  ECX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b92341 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92344 mov dword ptr [0x12bbf3e0], ecx */
  w32((uint32_t)(0x12bbf3e0), (ECX));
L_12b9234a:;
  /* 12b9234a cmp dword ptr [0x12bbf3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92351 jge 0x12b92385 */
  if ((C.sf==C.of)) goto L_12b92385;
  /* 12b92353 mov edx, dword ptr [0x12bbf3e0] */
  EDX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b92359 mov eax, dword ptr [0x12bbf448] */
  EAX = (r32((uint32_t)(0x12bbf448)));
  /* 12b9235e add eax, dword ptr [edx*4 + 0x12bbf3e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12bbf3e4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92365 mov dword ptr [0x12bbf448], eax */
  w32((uint32_t)(0x12bbf448), (EAX));
  /* 12b9236a mov ecx, dword ptr [0x12bbf3e0] */
  ECX = (r32((uint32_t)(0x12bbf3e0)));
  /* 12b92370 mov edx, dword ptr [0x12bbf44c] */
  EDX = (r32((uint32_t)(0x12bbf44c)));
  /* 12b92376 add edx, dword ptr [ecx*4 + 0x12bbf3f8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x12bbf3f8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9237d mov dword ptr [0x12bbf44c], edx */
  w32((uint32_t)(0x12bbf44c), (EDX));
  /* 12b92383 jmp 0x12b9233b */
  goto L_12b9233b;
L_12b92385:;
  /* 12b92385 cmp dword ptr [0x12bbf448], 3 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf448))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9238c jl 0x12b92390 */
  if ((C.sf!=C.of)) goto L_12b92390;
  /* 12b9238e jmp 0x12b9239e */
  goto L_12b9239e;
L_12b92390:;
  /* 12b92390 cmp dword ptr [0x12bbf44c], 3 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf44c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92397 jl 0x12b9239e */
  if ((C.sf!=C.of)) goto L_12b9239e;
  /* 12b92399 call 0x12b9100f */
  push32(0x12b9239eu); f_12b9100f();
L_12b9239e:;
  /* 12b9239e mov esi, esp */
  ESI = (ESP);
  /* 12b923a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12b923a2 call dword ptr [0x12bc13b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13b8))), 0x12b923a8u);
  /* 12b923a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b923ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b923ad call 0x12b926c0 */
  push32(0x12b923b2u); f_12b926c0();
  /* 12b923b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b923b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b923b9 je 0x12b92403 */
  if (C.zf) goto L_12b92403;
  /* 12b923bb mov esi, esp */
  ESI = (ESP);
  /* 12b923bd call dword ptr [0x12bc13bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13bc))), 0x12b923c3u);
  /* 12b923c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b923c5 call 0x12b926c0 */
  push32(0x12b923cau); f_12b926c0();
  /* 12b923ca cmp eax, 0xbb80 */
  { uint32_t _a=(EAX),_b=(0xbb80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b923cf jle 0x12b92403 */
  if ((C.zf||C.sf!=C.of)) goto L_12b92403;
  /* 12b923d1 mov esi, esp */
  ESI = (ESP);
  /* 12b923d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b923d5 push 0xa */
  push32((uint32_t)(0xau));
  /* 12b923d7 call dword ptr [0x12bc13c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13c0))), 0x12b923ddu);
  /* 12b923dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b923e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b923e2 call 0x12b926c0 */
  push32(0x12b923e7u); f_12b926c0();
  /* 12b923e7 mov esi, esp */
  ESI = (ESP);
  /* 12b923e9 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 12b923ee push 0x12bba890 */
  push32((uint32_t)(0x12bba890u));
  /* 12b923f3 call dword ptr [0x12bc13c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13c4))), 0x12b923f9u);
  /* 12b923f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b923fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b923fe call 0x12b926c0 */
  push32(0x12b92403u); f_12b926c0();
L_12b92403:;
  /* 12b92403 mov esi, esp */
  ESI = (ESP);
  /* 12b92405 call dword ptr [0x12bc13bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13bc))), 0x12b9240bu);
  /* 12b9240b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9240d call 0x12b926c0 */
  push32(0x12b92412u); f_12b926c0();
  /* 12b92412 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92417 jle 0x12b9241e */
  if ((C.zf||C.sf!=C.of)) goto L_12b9241e;
  /* 12b92419 call 0x12b91019 */
  push32(0x12b9241eu); f_12b91019();
L_12b9241e:;
  /* 12b9241e mov esi, esp */
  ESI = (ESP);
  /* 12b92420 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12b92422 call dword ptr [0x12bc13b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13b8))), 0x12b92428u);
  /* 12b92428 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9242b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9242d call 0x12b926c0 */
  push32(0x12b92432u); f_12b926c0();
  /* 12b92432 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b92437 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92439 je 0x12b92490 */
  if (C.zf) goto L_12b92490;
  /* 12b9243b push 0x12bbf410 */
  push32((uint32_t)(0x12bbf410u));
  /* 12b92440 call 0x12b91005 */
  push32(0x12b92445u); f_12b91005();
  /* 12b92445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92448 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9244b jge 0x12b92490 */
  if ((C.sf==C.of)) goto L_12b92490;
  /* 12b9244d mov esi, esp */
  ESI = (ESP);
  /* 12b9244f push 0 */
  push32((uint32_t)(0x0u));
  /* 12b92451 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12b92453 call dword ptr [0x12bc13c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13c0))), 0x12b92459u);
  /* 12b92459 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9245c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9245e call 0x12b926c0 */
  push32(0x12b92463u); f_12b926c0();
  /* 12b92463 mov esi, esp */
  ESI = (ESP);
  /* 12b92465 call dword ptr [0x12bc13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13dc))), 0x12b9246bu);
  /* 12b9246b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9246d call 0x12b926c0 */
  push32(0x12b92472u); f_12b926c0();
  /* 12b92472 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92475 jne 0x12b92490 */
  if (!C.zf) goto L_12b92490;
  /* 12b92477 mov esi, esp */
  ESI = (ESP);
  /* 12b92479 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12b9247b push 0x12bba888 */
  push32((uint32_t)(0x12bba888u));
  /* 12b92480 call dword ptr [0x12bc13c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13c4))), 0x12b92486u);
  /* 12b92486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92489 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9248b call 0x12b926c0 */
  push32(0x12b92490u); f_12b926c0();
L_12b92490:;
  /* 12b92490 mov esi, esp */
  ESI = (ESP);
  /* 12b92492 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12b92494 call dword ptr [0x12bc13b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13b8))), 0x12b9249au);
  /* 12b9249a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9249d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9249f call 0x12b926c0 */
  push32(0x12b924a4u); f_12b926c0();
  /* 12b924a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b924a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b924ab je 0x12b92501 */
  if (C.zf) goto L_12b92501;
  /* 12b924ad push 0x12bbf418 */
  push32((uint32_t)(0x12bbf418u));
  /* 12b924b2 call 0x12b91005 */
  push32(0x12b924b7u); f_12b91005();
  /* 12b924b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b924ba cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b924bd jge 0x12b92501 */
  if ((C.sf==C.of)) goto L_12b92501;
  /* 12b924bf mov esi, esp */
  ESI = (ESP);
  /* 12b924c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b924c3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12b924c5 call dword ptr [0x12bc13c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13c0))), 0x12b924cbu);
  /* 12b924cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b924ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b924d0 call 0x12b926c0 */
  push32(0x12b924d5u); f_12b926c0();
  /* 12b924d5 mov esi, esp */
  ESI = (ESP);
  /* 12b924d7 call dword ptr [0x12bc13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13dc))), 0x12b924ddu);
  /* 12b924dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b924df call 0x12b926c0 */
  push32(0x12b924e4u); f_12b926c0();
  /* 12b924e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b924e6 jne 0x12b92501 */
  if (!C.zf) goto L_12b92501;
  /* 12b924e8 mov esi, esp */
  ESI = (ESP);
  /* 12b924ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12b924ec push 0x12bba888 */
  push32((uint32_t)(0x12bba888u));
  /* 12b924f1 call dword ptr [0x12bc13c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13c4))), 0x12b924f7u);
  /* 12b924f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b924fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b924fc call 0x12b926c0 */
  push32(0x12b92501u); f_12b926c0();
L_12b92501:;
  /* 12b92501 push 0x12bbf410 */
  push32((uint32_t)(0x12bbf410u));
  /* 12b92506 call 0x12b91005 */
  push32(0x12b9250bu); f_12b91005();
  /* 12b9250b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9250e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92510 jne 0x12b92517 */
  if (!C.zf) goto L_12b92517;
  /* 12b92512 call 0x12b9100f */
  push32(0x12b92517u); f_12b9100f();
L_12b92517:;
  /* 12b92517 push 0x12bbf418 */
  push32((uint32_t)(0x12bbf418u));
  /* 12b9251c call 0x12b91005 */
  push32(0x12b92521u); f_12b91005();
  /* 12b92521 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92526 jne 0x12b9252d */
  if (!C.zf) goto L_12b9252d;
  /* 12b92528 call 0x12b91019 */
  push32(0x12b9252du); f_12b91019();
L_12b9252d:;
  /* 12b9252d pop edi */
  EDI = (pop32());
  /* 12b9252e pop esi */
  ESI = (pop32());
  /* 12b9252f pop ebx */
  EBX = (pop32());
  /* 12b92530 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92533 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92535 call 0x12b926c0 */
  push32(0x12b9253au); f_12b926c0();
  /* 12b9253a mov esp, ebp */
  ESP = (EBP);
  /* 12b9253c pop ebp */
  EBP = (pop32());
  /* 12b9253d ret  */
  ESPCHK(0x12b92200u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x12b92610 (63 bytes, 26 insns) */
void f_12b92610(void) {
  FTRACE(0x12b92610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b92610 push ebp */
  push32((uint32_t)(EBP));
  /* 12b92611 mov ebp, esp */
  EBP = (ESP);
  /* 12b92613 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b92616 push ebx */
  push32((uint32_t)(EBX));
  /* 12b92617 push esi */
  push32((uint32_t)(ESI));
  /* 12b92618 push edi */
  push32((uint32_t)(EDI));
  /* 12b92619 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12b9261c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12b92621 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12b92626 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12b92628 mov esi, esp */
  ESI = (ESP);
  /* 12b9262a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9262d push eax */
  push32((uint32_t)(EAX));
  /* 12b9262e call dword ptr [0x12bc13b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc13b0))), 0x12b92634u);
  /* 12b92634 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92637 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92639 call 0x12b926c0 */
  push32(0x12b9263eu); f_12b926c0();
  /* 12b9263e pop edi */
  EDI = (pop32());
  /* 12b9263f pop esi */
  ESI = (pop32());
  /* 12b92640 pop ebx */
  EBX = (pop32());
  /* 12b92641 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92644 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92646 call 0x12b926c0 */
  push32(0x12b9264bu); f_12b926c0();
  /* 12b9264b mov esp, ebp */
  ESP = (EBP);
  /* 12b9264d pop ebp */
  EBP = (pop32());
  /* 12b9264e ret  */
  ESPCHK(0x12b92610u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12b926c0 (56 bytes, 28 insns) */
void f_12b926c0(void) {
  FTRACE(0x12b926c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b926c0 jne 0x12b926c3 */
  if (!C.zf) goto L_12b926c3;
  /* 12b926c2 ret  */
  ESPCHK(0x12b926c0u, _esp0);
  ESP += 4; return;
L_12b926c3:;
  /* 12b926c3 push ebp */
  push32((uint32_t)(EBP));
  /* 12b926c4 mov ebp, esp */
  EBP = (ESP);
  /* 12b926c6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b926c9 push eax */
  push32((uint32_t)(EAX));
  /* 12b926ca push edx */
  push32((uint32_t)(EDX));
  /* 12b926cb push ebx */
  push32((uint32_t)(EBX));
  /* 12b926cc push esi */
  push32((uint32_t)(ESI));
  /* 12b926cd push edi */
  push32((uint32_t)(EDI));
  /* 12b926ce push 0x12bba8ac */
  push32((uint32_t)(0x12bba8acu));
  /* 12b926d3 push 0x12bba8a8 */
  push32((uint32_t)(0x12bba8a8u));
  /* 12b926d8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12b926da push 0x12bba898 */
  push32((uint32_t)(0x12bba898u));
  /* 12b926df push 1 */
  push32((uint32_t)(0x1u));
  /* 12b926e1 call 0x12b92a90 */
  push32(0x12b926e6u); f_12b92a90();
  /* 12b926e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b926e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b926ec jne 0x12b926ef */
  if (!C.zf) goto L_12b926ef;
  /* 12b926ee int3  */
  x86_unimpl("int3 @ 0x12b926ee");
L_12b926ef:;
  /* 12b926ef pop edi */
  EDI = (pop32());
  /* 12b926f0 pop esi */
  ESI = (pop32());
  /* 12b926f1 pop ebx */
  EBX = (pop32());
  /* 12b926f2 pop edx */
  EDX = (pop32());
  /* 12b926f3 pop eax */
  EAX = (pop32());
  /* 12b926f4 mov esp, ebp */
  ESP = (EBP);
  /* 12b926f6 pop ebp */
  EBP = (pop32());
  /* 12b926f7 ret  */
  ESPCHK(0x12b926c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002700 @ 0x12b92700 (313 bytes, 78 insns) */
void f_12b92700(void) {
  FTRACE(0x12b92700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b92700 push ebp */
  push32((uint32_t)(EBP));
  /* 12b92701 mov ebp, esp */
  EBP = (ESP);
  /* 12b92703 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92707 jne 0x12b927c7 */
  if (!C.zf) goto L_12b927c7;
  /* 12b9270d call dword ptr [0x12bc1268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1268))), 0x12b92713u);
  /* 12b92713 mov dword ptr [0x12bbf488], eax */
  w32((uint32_t)(0x12bbf488), (EAX));
  /* 12b92718 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9271a call 0x12b961c0 */
  push32(0x12b9271fu); f_12b961c0();
  /* 12b9271f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92722 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92724 jne 0x12b9272d */
  if (!C.zf) goto L_12b9272d;
  /* 12b92726 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b92728 jmp 0x12b92835 */
  goto L_12b92835;
L_12b9272d:;
  /* 12b9272d mov eax, dword ptr [0x12bbf488] */
  EAX = (r32((uint32_t)(0x12bbf488)));
  /* 12b92732 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12b92735 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9273a mov dword ptr [0x12bbf494], eax */
  w32((uint32_t)(0x12bbf494), (EAX));
  /* 12b9273f mov ecx, dword ptr [0x12bbf488] */
  ECX = (r32((uint32_t)(0x12bbf488)));
  /* 12b92745 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9274b mov dword ptr [0x12bbf490], ecx */
  w32((uint32_t)(0x12bbf490), (ECX));
  /* 12b92751 mov edx, dword ptr [0x12bbf490] */
  EDX = (r32((uint32_t)(0x12bbf490)));
  /* 12b92757 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12b9275a add edx, dword ptr [0x12bbf494] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12bbf494))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92760 mov dword ptr [0x12bbf48c], edx */
  w32((uint32_t)(0x12bbf48c), (EDX));
  /* 12b92766 mov eax, dword ptr [0x12bbf488] */
  EAX = (r32((uint32_t)(0x12bbf488)));
  /* 12b9276b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12b9276e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b92773 mov dword ptr [0x12bbf488], eax */
  w32((uint32_t)(0x12bbf488), (EAX));
  /* 12b92778 call 0x12b93330 */
  push32(0x12b9277du); f_12b93330();
  /* 12b9277d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9277f jne 0x12b9278d */
  if (!C.zf) goto L_12b9278d;
  /* 12b92781 call 0x12b96210 */
  push32(0x12b92786u); f_12b96210();
  /* 12b92786 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b92788 jmp 0x12b92835 */
  goto L_12b92835;
L_12b9278d:;
  /* 12b9278d call dword ptr [0x12bc1264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1264))), 0x12b92793u);
  /* 12b92793 mov dword ptr [0x12bc0fcc], eax */
  w32((uint32_t)(0x12bc0fcc), (EAX));
  /* 12b92798 call 0x12b95fa0 */
  push32(0x12b9279du); f_12b95fa0();
  /* 12b9279d mov dword ptr [0x12bbf470], eax */
  w32((uint32_t)(0x12bbf470), (EAX));
  /* 12b927a2 call 0x12b935e0 */
  push32(0x12b927a7u); f_12b935e0();
  /* 12b927a7 call 0x12b95a90 */
  push32(0x12b927acu); f_12b95a90();
  /* 12b927ac call 0x12b95940 */
  push32(0x12b927b1u); f_12b95940();
  /* 12b927b1 call 0x12b93130 */
  push32(0x12b927b6u); f_12b93130();
  /* 12b927b6 mov ecx, dword ptr [0x12bbf46c] */
  ECX = (r32((uint32_t)(0x12bbf46c)));
  /* 12b927bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b927bf mov dword ptr [0x12bbf46c], ecx */
  w32((uint32_t)(0x12bbf46c), (ECX));
  /* 12b927c5 jmp 0x12b92830 */
  goto L_12b92830;
L_12b927c7:;
  /* 12b927c7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b927cb jne 0x12b92820 */
  if (!C.zf) goto L_12b92820;
  /* 12b927cd cmp dword ptr [0x12bbf46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b927d4 jle 0x12b9281a */
  if ((C.zf||C.sf!=C.of)) goto L_12b9281a;
  /* 12b927d6 mov edx, dword ptr [0x12bbf46c] */
  EDX = (r32((uint32_t)(0x12bbf46c)));
  /* 12b927dc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b927df mov dword ptr [0x12bbf46c], edx */
  w32((uint32_t)(0x12bbf46c), (EDX));
  /* 12b927e5 cmp dword ptr [0x12bbf4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b927ec jne 0x12b927f3 */
  if (!C.zf) goto L_12b927f3;
  /* 12b927ee call 0x12b931b0 */
  push32(0x12b927f3u); f_12b931b0();
L_12b927f3:;
  /* 12b927f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12b927f5 call 0x12b94ee0 */
  push32(0x12b927fau); f_12b94ee0();
  /* 12b927fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b927fd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12b92800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92802 je 0x12b92809 */
  if (C.zf) goto L_12b92809;
  /* 12b92804 call 0x12b957f0 */
  push32(0x12b92809u); f_12b957f0();
L_12b92809:;
  /* 12b92809 call 0x12b93910 */
  push32(0x12b9280eu); f_12b93910();
  /* 12b9280e call 0x12b933c0 */
  push32(0x12b92813u); f_12b933c0();
  /* 12b92813 call 0x12b96210 */
  push32(0x12b92818u); f_12b96210();
  /* 12b92818 jmp 0x12b9281e */
  goto L_12b9281e;
L_12b9281a:;
  /* 12b9281a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9281c jmp 0x12b92835 */
  goto L_12b92835;
L_12b9281e:;
  /* 12b9281e jmp 0x12b92830 */
  goto L_12b92830;
L_12b92820:;
  /* 12b92820 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92824 jne 0x12b92830 */
  if (!C.zf) goto L_12b92830;
  /* 12b92826 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b92828 call 0x12b934b0 */
  push32(0x12b9282du); f_12b934b0();
  /* 12b9282d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b92830:;
  /* 12b92830 mov eax, 1 */
  EAX = (0x1u);
L_12b92835:;
  /* 12b92835 pop ebp */
  EBP = (pop32());
  /* 12b92836 ret 0xc */
  ESPCHK(0x12b92700u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12b92840 (243 bytes, 86 insns) */
void f_12b92840(void) {
  FTRACE(0x12b92840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b92840 push ebp */
  push32((uint32_t)(EBP));
  /* 12b92841 mov ebp, esp */
  EBP = (ESP);
  /* 12b92843 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92844 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12b9284b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9284f jne 0x12b92861 */
  if (!C.zf) goto L_12b92861;
  /* 12b92851 cmp dword ptr [0x12bbf46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92858 jne 0x12b92861 */
  if (!C.zf) goto L_12b92861;
  /* 12b9285a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9285c jmp 0x12b9292d */
  goto L_12b9292d;
L_12b92861:;
  /* 12b92861 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92865 je 0x12b9286d */
  if (C.zf) goto L_12b9286d;
  /* 12b92867 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9286b jne 0x12b928af */
  if (!C.zf) goto L_12b928af;
L_12b9286d:;
  /* 12b9286d cmp dword ptr [0x12bc0fdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0fdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92874 je 0x12b9288b */
  if (C.zf) goto L_12b9288b;
  /* 12b92876 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b92879 push eax */
  push32((uint32_t)(EAX));
  /* 12b9287a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9287d push ecx */
  push32((uint32_t)(ECX));
  /* 12b9287e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92881 push edx */
  push32((uint32_t)(EDX));
  /* 12b92882 call dword ptr [0x12bc0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc0fdc))), 0x12b92888u);
  /* 12b92888 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b9288b:;
  /* 12b9288b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9288f je 0x12b928a5 */
  if (C.zf) goto L_12b928a5;
  /* 12b92891 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b92894 push eax */
  push32((uint32_t)(EAX));
  /* 12b92895 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b92898 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92899 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9289c push edx */
  push32((uint32_t)(EDX));
  /* 12b9289d call 0x12b92700 */
  push32(0x12b928a2u); f_12b92700();
  /* 12b928a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b928a5:;
  /* 12b928a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b928a9 jne 0x12b928af */
  if (!C.zf) goto L_12b928af;
  /* 12b928ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b928ad jmp 0x12b9292d */
  goto L_12b9292d;
L_12b928af:;
  /* 12b928af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b928b2 push eax */
  push32((uint32_t)(EAX));
  /* 12b928b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b928b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12b928b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b928ba push edx */
  push32((uint32_t)(EDX));
  /* 12b928bb call 0x12b91014 */
  push32(0x12b928c0u); f_12b91014();
  /* 12b928c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b928c3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b928c7 jne 0x12b928de */
  if (!C.zf) goto L_12b928de;
  /* 12b928c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b928cd jne 0x12b928de */
  if (!C.zf) goto L_12b928de;
  /* 12b928cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b928d2 push eax */
  push32((uint32_t)(EAX));
  /* 12b928d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b928d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b928d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12b928d9 call 0x12b92700 */
  push32(0x12b928deu); f_12b92700();
L_12b928de:;
  /* 12b928de cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b928e2 je 0x12b928ea */
  if (C.zf) goto L_12b928ea;
  /* 12b928e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b928e8 jne 0x12b9292a */
  if (!C.zf) goto L_12b9292a;
L_12b928ea:;
  /* 12b928ea mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b928ed push edx */
  push32((uint32_t)(EDX));
  /* 12b928ee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b928f1 push eax */
  push32((uint32_t)(EAX));
  /* 12b928f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b928f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12b928f6 call 0x12b92700 */
  push32(0x12b928fbu); f_12b92700();
  /* 12b928fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b928fd jne 0x12b92906 */
  if (!C.zf) goto L_12b92906;
  /* 12b928ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12b92906:;
  /* 12b92906 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9290a je 0x12b9292a */
  if (C.zf) goto L_12b9292a;
  /* 12b9290c cmp dword ptr [0x12bc0fdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0fdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92913 je 0x12b9292a */
  if (C.zf) goto L_12b9292a;
  /* 12b92915 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b92918 push edx */
  push32((uint32_t)(EDX));
  /* 12b92919 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9291c push eax */
  push32((uint32_t)(EAX));
  /* 12b9291d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92920 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92921 call dword ptr [0x12bc0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc0fdc))), 0x12b92927u);
  /* 12b92927 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b9292a:;
  /* 12b9292a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12b9292d:;
  /* 12b9292d mov esp, ebp */
  ESP = (EBP);
  /* 12b9292f pop ebp */
  EBP = (pop32());
  /* 12b92930 ret 0xc */
  ESPCHK(0x12b92840u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12b92940 (58 bytes, 18 insns) */
void f_12b92940(void) {
  FTRACE(0x12b92940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b92940 push ebp */
  push32((uint32_t)(EBP));
  /* 12b92941 mov ebp, esp */
  EBP = (ESP);
  /* 12b92943 cmp dword ptr [0x12bbf478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9294a je 0x12b9295e */
  if (C.zf) goto L_12b9295e;
  /* 12b9294c cmp dword ptr [0x12bbf478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92953 jne 0x12b92963 */
  if (!C.zf) goto L_12b92963;
  /* 12b92955 cmp dword ptr [0x12bbf47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9295c jne 0x12b92963 */
  if (!C.zf) goto L_12b92963;
L_12b9295e:;
  /* 12b9295e call 0x12b962b0 */
  push32(0x12b92963u); f_12b962b0();
L_12b92963:;
  /* 12b92963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92966 push eax */
  push32((uint32_t)(EAX));
  /* 12b92967 call 0x12b96300 */
  push32(0x12b9296cu); f_12b96300();
  /* 12b9296c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9296f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12b92974 call dword ptr [0x12bbda30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbda30))), 0x12b9297au);
  /* 12b9297a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9297d pop ebp */
  EBP = (pop32());
  /* 12b9297e ret  */
  ESPCHK(0x12b92940u, _esp0);
  ESP += 4; return;
}

/* FUN_10002980 @ 0x12b92980 (11 bytes, 5 insns) */
void f_12b92980(void) {
  FTRACE(0x12b92980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b92980 push ebp */
  push32((uint32_t)(EBP));
  /* 12b92981 mov ebp, esp */
  EBP = (ESP);
  /* 12b92983 call dword ptr [0x12bc126c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc126c))), 0x12b92989u);
  /* 12b92989 pop ebp */
  EBP = (pop32());
  /* 12b9298a ret  */
  ESPCHK(0x12b92980u, _esp0);
  ESP += 4; return;
}

/* FUN_10002990 @ 0x12b92990 (87 bytes, 30 insns) */
void f_12b92990(void) {
  FTRACE(0x12b92990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b92990 push ebp */
  push32((uint32_t)(EBP));
  /* 12b92991 mov ebp, esp */
  EBP = (ESP);
  /* 12b92993 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92994 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92998 jl 0x12b929a0 */
  if ((C.sf!=C.of)) goto L_12b929a0;
  /* 12b9299a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9299e jl 0x12b929a5 */
  if ((C.sf!=C.of)) goto L_12b929a5;
L_12b929a0:;
  /* 12b929a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b929a3 jmp 0x12b929e3 */
  goto L_12b929e3;
L_12b929a5:;
  /* 12b929a5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b929a9 jne 0x12b929b7 */
  if (!C.zf) goto L_12b929b7;
  /* 12b929ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b929ae mov eax, dword ptr [eax*4 + 0x12bbda38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12bbda38)));
  /* 12b929b5 jmp 0x12b929e3 */
  goto L_12b929e3;
L_12b929b7:;
  /* 12b929b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b929ba and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12b929bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b929bf je 0x12b929c6 */
  if (C.zf) goto L_12b929c6;
  /* 12b929c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b929c4 jmp 0x12b929e3 */
  goto L_12b929e3;
L_12b929c6:;
  /* 12b929c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b929c9 mov eax, dword ptr [edx*4 + 0x12bbda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12bbda38)));
  /* 12b929d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b929d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b929d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b929d9 mov dword ptr [ecx*4 + 0x12bbda38], edx */
  w32((uint32_t)(ECX*4 + 0x12bbda38), (EDX));
  /* 12b929e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12b929e3:;
  /* 12b929e3 mov esp, ebp */
  ESP = (EBP);
  /* 12b929e5 pop ebp */
  EBP = (pop32());
  /* 12b929e6 ret  */
  ESPCHK(0x12b92990u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12b929f0 (126 bytes, 38 insns) */
void f_12b929f0(void) {
  FTRACE(0x12b929f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b929f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b929f1 mov ebp, esp */
  EBP = (ESP);
  /* 12b929f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b929f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b929f8 jl 0x12b92a00 */
  if ((C.sf!=C.of)) goto L_12b92a00;
  /* 12b929fa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b929fe jl 0x12b92a07 */
  if ((C.sf!=C.of)) goto L_12b92a07;
L_12b92a00:;
  /* 12b92a00 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12b92a05 jmp 0x12b92a6a */
  goto L_12b92a6a;
L_12b92a07:;
  /* 12b92a07 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92a0b jne 0x12b92a19 */
  if (!C.zf) goto L_12b92a19;
  /* 12b92a0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92a10 mov eax, dword ptr [eax*4 + 0x12bbda44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12bbda44)));
  /* 12b92a17 jmp 0x12b92a6a */
  goto L_12b92a6a;
L_12b92a19:;
  /* 12b92a19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92a1c mov edx, dword ptr [ecx*4 + 0x12bbda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12bbda44)));
  /* 12b92a23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b92a26 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92a2a jne 0x12b92a40 */
  if (!C.zf) goto L_12b92a40;
  /* 12b92a2c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12b92a2e call dword ptr [0x12bc1270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1270))), 0x12b92a34u);
  /* 12b92a34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92a37 mov dword ptr [ecx*4 + 0x12bbda44], eax */
  w32((uint32_t)(ECX*4 + 0x12bbda44), (EAX));
  /* 12b92a3e jmp 0x12b92a67 */
  goto L_12b92a67;
L_12b92a40:;
  /* 12b92a40 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92a44 jne 0x12b92a5a */
  if (!C.zf) goto L_12b92a5a;
  /* 12b92a46 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12b92a48 call dword ptr [0x12bc1270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1270))), 0x12b92a4eu);
  /* 12b92a4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92a51 mov dword ptr [edx*4 + 0x12bbda44], eax */
  w32((uint32_t)(EDX*4 + 0x12bbda44), (EAX));
  /* 12b92a58 jmp 0x12b92a67 */
  goto L_12b92a67;
L_12b92a5a:;
  /* 12b92a5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92a5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b92a60 mov dword ptr [eax*4 + 0x12bbda44], ecx */
  w32((uint32_t)(EAX*4 + 0x12bbda44), (ECX));
L_12b92a67:;
  /* 12b92a67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12b92a6a:;
  /* 12b92a6a mov esp, ebp */
  ESP = (EBP);
  /* 12b92a6c pop ebp */
  EBP = (pop32());
  /* 12b92a6d ret  */
  ESPCHK(0x12b929f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a70 @ 0x12b92a70 (28 bytes, 11 insns) */
void f_12b92a70(void) {
  FTRACE(0x12b92a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b92a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12b92a71 mov ebp, esp */
  EBP = (ESP);
  /* 12b92a73 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92a74 mov eax, dword ptr [0x12bc0fc0] */
  EAX = (r32((uint32_t)(0x12bc0fc0)));
  /* 12b92a79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b92a7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92a7f mov dword ptr [0x12bc0fc0], ecx */
  w32((uint32_t)(0x12bc0fc0), (ECX));
  /* 12b92a85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b92a88 mov esp, ebp */
  ESP = (EBP);
  /* 12b92a8a pop ebp */
  EBP = (pop32());
  /* 12b92a8b ret  */
  ESPCHK(0x12b92a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a90 @ 0x12b92a90 (912 bytes, 248 insns) */
void f_12b92a90(void) {
  FTRACE(0x12b92a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b92a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12b92a91 mov ebp, esp */
  EBP = (ESP);
  /* 12b92a93 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12b92a98 call 0x12b96b70 */
  push32(0x12b92a9du); f_12b96b70();
  /* 12b92a9d push edi */
  push32((uint32_t)(EDI));
  /* 12b92a9e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12b92aa5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12b92aaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b92aac lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12b92ab2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12b92ab4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12b92ab6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12b92ab7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12b92abe mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12b92ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b92ac5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12b92acb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12b92acd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12b92acf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12b92ad0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12b92ad7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12b92adc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b92ade lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12b92ae4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12b92ae6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12b92ae8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12b92ae9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12b92aec mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12b92af2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92af6 jl 0x12b92afe */
  if ((C.sf!=C.of)) goto L_12b92afe;
  /* 12b92af8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92afc jl 0x12b92b06 */
  if ((C.sf!=C.of)) goto L_12b92b06;
L_12b92afe:;
  /* 12b92afe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b92b01 jmp 0x12b92e1b */
  goto L_12b92e1b;
L_12b92b06:;
  /* 12b92b06 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92b0a jne 0x12b92bb0 */
  if (!C.zf) goto L_12b92bb0;
  /* 12b92b10 push 0x12bbda34 */
  push32((uint32_t)(0x12bbda34u));
  /* 12b92b15 call dword ptr [0x12bc1288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1288))), 0x12b92b1bu);
  /* 12b92b1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92b1d jle 0x12b92bb0 */
  if ((C.zf||C.sf!=C.of)) goto L_12b92bb0;
  /* 12b92b23 cmp dword ptr [0x12bbf480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92b2a jne 0x12b92b6e */
  if (!C.zf) goto L_12b92b6e;
  /* 12b92b2c push 0x12bbaa54 */
  push32((uint32_t)(0x12bbaa54u));
  /* 12b92b31 call dword ptr [0x12bc1284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1284))), 0x12b92b37u);
  /* 12b92b37 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12b92b3d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92b44 je 0x12b92b66 */
  if (C.zf) goto L_12b92b66;
  /* 12b92b46 push 0x12bbaa48 */
  push32((uint32_t)(0x12bbaa48u));
  /* 12b92b4b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12b92b51 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92b52 call dword ptr [0x12bc1280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1280))), 0x12b92b58u);
  /* 12b92b58 mov dword ptr [0x12bbf480], eax */
  w32((uint32_t)(0x12bbf480), (EAX));
  /* 12b92b5d cmp dword ptr [0x12bbf480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92b64 jne 0x12b92b6e */
  if (!C.zf) goto L_12b92b6e;
L_12b92b66:;
  /* 12b92b66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b92b69 jmp 0x12b92e1b */
  goto L_12b92e1b;
L_12b92b6e:;
  /* 12b92b6e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b92b71 push edx */
  push32((uint32_t)(EDX));
  /* 12b92b72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b92b75 push eax */
  push32((uint32_t)(EAX));
  /* 12b92b76 push 0x12bbaa14 */
  push32((uint32_t)(0x12bbaa14u));
  /* 12b92b7b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12b92b81 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92b82 call dword ptr [0x12bbf480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf480))), 0x12b92b88u);
  /* 12b92b88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92b8b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12b92b91 push edx */
  push32((uint32_t)(EDX));
  /* 12b92b92 call dword ptr [0x12bc127c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc127c))), 0x12b92b98u);
  /* 12b92b98 push 0x12bbda34 */
  push32((uint32_t)(0x12bbda34u));
  /* 12b92b9d call dword ptr [0x12bc1278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1278))), 0x12b92ba3u);
  /* 12b92ba3 call 0x12b92980 */
  push32(0x12b92ba8u); f_12b92980();
  /* 12b92ba8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b92bab jmp 0x12b92e1b */
  goto L_12b92e1b;
L_12b92bb0:;
  /* 12b92bb0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92bb4 je 0x12b92bed */
  if (C.zf) goto L_12b92bed;
  /* 12b92bb6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12b92bbc push eax */
  push32((uint32_t)(EAX));
  /* 12b92bbd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b92bc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92bc1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12b92bc6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12b92bcc push edx */
  push32((uint32_t)(EDX));
  /* 12b92bcd call 0x12b96a70 */
  push32(0x12b92bd2u); f_12b96a70();
  /* 12b92bd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92bd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92bd7 jge 0x12b92bed */
  if ((C.sf==C.of)) goto L_12b92bed;
  /* 12b92bd9 push 0x12bba9e8 */
  push32((uint32_t)(0x12bba9e8u));
  /* 12b92bde lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12b92be4 push eax */
  push32((uint32_t)(EAX));
  /* 12b92be5 call 0x12b96980 */
  push32(0x12b92beau); f_12b96980();
  /* 12b92bea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b92bed:;
  /* 12b92bed cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92bf1 jne 0x12b92c25 */
  if (!C.zf) goto L_12b92c25;
  /* 12b92bf3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92bf7 je 0x12b92c05 */
  if (C.zf) goto L_12b92c05;
  /* 12b92bf9 mov dword ptr [ebp - 0x3028], 0x12bba9d4 */
  w32((uint32_t)(EBP + -0x3028), (0x12bba9d4u));
  /* 12b92c03 jmp 0x12b92c0f */
  goto L_12b92c0f;
L_12b92c05:;
  /* 12b92c05 mov dword ptr [ebp - 0x3028], 0x12bba9c0 */
  w32((uint32_t)(EBP + -0x3028), (0x12bba9c0u));
L_12b92c0f:;
  /* 12b92c0f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12b92c15 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92c16 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12b92c1c push edx */
  push32((uint32_t)(EDX));
  /* 12b92c1d call 0x12b96980 */
  push32(0x12b92c22u); f_12b96980();
  /* 12b92c22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b92c25:;
  /* 12b92c25 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12b92c2b push eax */
  push32((uint32_t)(EAX));
  /* 12b92c2c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12b92c32 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92c33 call 0x12b96990 */
  push32(0x12b92c38u); f_12b96990();
  /* 12b92c38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92c3b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92c3f jne 0x12b92c7a */
  if (!C.zf) goto L_12b92c7a;
  /* 12b92c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92c44 mov eax, dword ptr [edx*4 + 0x12bbda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12bbda38)));
  /* 12b92c4b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12b92c4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92c50 je 0x12b92c66 */
  if (C.zf) goto L_12b92c66;
  /* 12b92c52 push 0x12bba9bc */
  push32((uint32_t)(0x12bba9bcu));
  /* 12b92c57 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12b92c5d push ecx */
  push32((uint32_t)(ECX));
  /* 12b92c5e call 0x12b96990 */
  push32(0x12b92c63u); f_12b96990();
  /* 12b92c63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b92c66:;
  /* 12b92c66 push 0x12bba9b8 */
  push32((uint32_t)(0x12bba9b8u));
  /* 12b92c6b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12b92c71 push edx */
  push32((uint32_t)(EDX));
  /* 12b92c72 call 0x12b96990 */
  push32(0x12b92c77u); f_12b96990();
  /* 12b92c77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b92c7a:;
  /* 12b92c7a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92c7e je 0x12b92cc2 */
  if (C.zf) goto L_12b92cc2;
  /* 12b92c80 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12b92c86 push eax */
  push32((uint32_t)(EAX));
  /* 12b92c87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b92c8a push ecx */
  push32((uint32_t)(ECX));
  /* 12b92c8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b92c8e push edx */
  push32((uint32_t)(EDX));
  /* 12b92c8f push 0x12bba9ac */
  push32((uint32_t)(0x12bba9acu));
  /* 12b92c94 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12b92c99 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12b92c9f push eax */
  push32((uint32_t)(EAX));
  /* 12b92ca0 call 0x12b96880 */
  push32(0x12b92ca5u); f_12b96880();
  /* 12b92ca5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92ca8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92caa jge 0x12b92cc0 */
  if ((C.sf==C.of)) goto L_12b92cc0;
  /* 12b92cac push 0x12bba9e8 */
  push32((uint32_t)(0x12bba9e8u));
  /* 12b92cb1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12b92cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92cb8 call 0x12b96980 */
  push32(0x12b92cbdu); f_12b96980();
  /* 12b92cbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b92cc0:;
  /* 12b92cc0 jmp 0x12b92cd8 */
  goto L_12b92cd8;
L_12b92cc2:;
  /* 12b92cc2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12b92cc8 push edx */
  push32((uint32_t)(EDX));
  /* 12b92cc9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12b92ccf push eax */
  push32((uint32_t)(EAX));
  /* 12b92cd0 call 0x12b96980 */
  push32(0x12b92cd5u); f_12b96980();
  /* 12b92cd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b92cd8:;
  /* 12b92cd8 cmp dword ptr [0x12bc0fc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0fc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92cdf je 0x12b92d1c */
  if (C.zf) goto L_12b92d1c;
  /* 12b92ce1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12b92ce7 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92ce8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12b92cee push edx */
  push32((uint32_t)(EDX));
  /* 12b92cef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92cf2 push eax */
  push32((uint32_t)(EAX));
  /* 12b92cf3 call dword ptr [0x12bc0fc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc0fc0))), 0x12b92cf9u);
  /* 12b92cf9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92cfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92cfe je 0x12b92d1c */
  if (C.zf) goto L_12b92d1c;
  /* 12b92d00 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92d04 jne 0x12b92d11 */
  if (!C.zf) goto L_12b92d11;
  /* 12b92d06 push 0x12bbda34 */
  push32((uint32_t)(0x12bbda34u));
  /* 12b92d0b call dword ptr [0x12bc1278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1278))), 0x12b92d11u);
L_12b92d11:;
  /* 12b92d11 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12b92d17 jmp 0x12b92e1b */
  goto L_12b92e1b;
L_12b92d1c:;
  /* 12b92d1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92d1f mov edx, dword ptr [ecx*4 + 0x12bbda38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12bbda38)));
  /* 12b92d26 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12b92d29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b92d2b je 0x12b92d6b */
  if (C.zf) goto L_12b92d6b;
  /* 12b92d2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92d30 cmp dword ptr [eax*4 + 0x12bbda44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12bbda44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92d38 je 0x12b92d6b */
  if (C.zf) goto L_12b92d6b;
  /* 12b92d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b92d3c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12b92d42 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92d43 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12b92d49 push edx */
  push32((uint32_t)(EDX));
  /* 12b92d4a call 0x12b96800 */
  push32(0x12b92d4fu); f_12b96800();
  /* 12b92d4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92d52 push eax */
  push32((uint32_t)(EAX));
  /* 12b92d53 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12b92d59 push eax */
  push32((uint32_t)(EAX));
  /* 12b92d5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92d5d mov edx, dword ptr [ecx*4 + 0x12bbda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12bbda44)));
  /* 12b92d64 push edx */
  push32((uint32_t)(EDX));
  /* 12b92d65 call dword ptr [0x12bc1274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1274))), 0x12b92d6bu);
L_12b92d6b:;
  /* 12b92d6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92d6e mov ecx, dword ptr [eax*4 + 0x12bbda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12bbda38)));
  /* 12b92d75 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12b92d78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b92d7a je 0x12b92d89 */
  if (C.zf) goto L_12b92d89;
  /* 12b92d7c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12b92d82 push edx */
  push32((uint32_t)(EDX));
  /* 12b92d83 call dword ptr [0x12bc127c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc127c))), 0x12b92d89u);
L_12b92d89:;
  /* 12b92d89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92d8c mov ecx, dword ptr [eax*4 + 0x12bbda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12bbda38)));
  /* 12b92d93 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12b92d96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b92d98 je 0x12b92e08 */
  if (C.zf) goto L_12b92e08;
  /* 12b92d9a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92d9e je 0x12b92dbd */
  if (C.zf) goto L_12b92dbd;
  /* 12b92da0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12b92da2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12b92da8 push edx */
  push32((uint32_t)(EDX));
  /* 12b92da9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b92dac push eax */
  push32((uint32_t)(EAX));
  /* 12b92dad call 0x12b96510 */
  push32(0x12b92db2u); f_12b96510();
  /* 12b92db2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92db5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12b92dbb jmp 0x12b92dc7 */
  goto L_12b92dc7;
L_12b92dbd:;
  /* 12b92dbd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12b92dc7:;
  /* 12b92dc7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12b92dcd push ecx */
  push32((uint32_t)(ECX));
  /* 12b92dce mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b92dd1 push edx */
  push32((uint32_t)(EDX));
  /* 12b92dd2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12b92dd8 push eax */
  push32((uint32_t)(EAX));
  /* 12b92dd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b92ddc push ecx */
  push32((uint32_t)(ECX));
  /* 12b92ddd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b92de0 push edx */
  push32((uint32_t)(EDX));
  /* 12b92de1 call 0x12b92e20 */
  push32(0x12b92de6u); f_12b92e20();
  /* 12b92de6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92de9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12b92def cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92df3 jne 0x12b92e00 */
  if (!C.zf) goto L_12b92e00;
  /* 12b92df5 push 0x12bbda34 */
  push32((uint32_t)(0x12bbda34u));
  /* 12b92dfa call dword ptr [0x12bc1278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1278))), 0x12b92e00u);
L_12b92e00:;
  /* 12b92e00 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12b92e06 jmp 0x12b92e1b */
  goto L_12b92e1b;
L_12b92e08:;
  /* 12b92e08 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92e0c jne 0x12b92e19 */
  if (!C.zf) goto L_12b92e19;
  /* 12b92e0e push 0x12bbda34 */
  push32((uint32_t)(0x12bbda34u));
  /* 12b92e13 call dword ptr [0x12bc1278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1278))), 0x12b92e19u);
L_12b92e19:;
  /* 12b92e19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b92e1b:;
  /* 12b92e1b pop edi */
  EDI = (pop32());
  /* 12b92e1c mov esp, ebp */
  ESP = (EBP);
  /* 12b92e1e pop ebp */
  EBP = (pop32());
  /* 12b92e1f ret  */
  ESPCHK(0x12b92a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e20 @ 0x12b92e20 (780 bytes, 197 insns) */
void f_12b92e20(void) {
  FTRACE(0x12b92e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b92e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12b92e21 mov ebp, esp */
  EBP = (ESP);
  /* 12b92e23 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12b92e28 call 0x12b96b70 */
  push32(0x12b92e2du); f_12b96b70();
L_12b92e2d:;
  /* 12b92e2d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92e31 jne 0x12b92e58 */
  if (!C.zf) goto L_12b92e58;
  /* 12b92e33 push 0x12bbaba4 */
  push32((uint32_t)(0x12bbaba4u));
  /* 12b92e38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b92e3a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12b92e3f push 0x12bbab98 */
  push32((uint32_t)(0x12bbab98u));
  /* 12b92e44 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b92e46 call 0x12b92a90 */
  push32(0x12b92e4bu); f_12b92a90();
  /* 12b92e4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92e4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92e51 jne 0x12b92e58 */
  if (!C.zf) goto L_12b92e58;
  /* 12b92e53 call 0x12b92980 */
  push32(0x12b92e58u); f_12b92980();
L_12b92e58:;
  /* 12b92e58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b92e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92e5c jne 0x12b92e2d */
  if (!C.zf) goto L_12b92e2d;
  /* 12b92e5e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12b92e63 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12b92e69 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b92e6c call dword ptr [0x12bc128c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc128c))), 0x12b92e72u);
  /* 12b92e72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b92e74 jne 0x12b92e8a */
  if (!C.zf) goto L_12b92e8a;
  /* 12b92e76 push 0x12bbab80 */
  push32((uint32_t)(0x12bbab80u));
  /* 12b92e7b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12b92e81 push edx */
  push32((uint32_t)(EDX));
  /* 12b92e82 call 0x12b96980 */
  push32(0x12b92e87u); f_12b96980();
  /* 12b92e87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b92e8a:;
  /* 12b92e8a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12b92e90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b92e93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b92e96 push ecx */
  push32((uint32_t)(ECX));
  /* 12b92e97 call 0x12b96800 */
  push32(0x12b92e9cu); f_12b96800();
  /* 12b92e9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92e9f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92ea2 jbe 0x12b92ecd */
  if ((C.cf||C.zf)) goto L_12b92ecd;
  /* 12b92ea4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b92ea7 push edx */
  push32((uint32_t)(EDX));
  /* 12b92ea8 call 0x12b96800 */
  push32(0x12b92eadu); f_12b96800();
  /* 12b92ead add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92eb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b92eb3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12b92eb7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b92eba push 3 */
  push32((uint32_t)(0x3u));
  /* 12b92ebc push 0x12bbab7c */
  push32((uint32_t)(0x12bbab7cu));
  /* 12b92ec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b92ec4 push eax */
  push32((uint32_t)(EAX));
  /* 12b92ec5 call 0x12b971f0 */
  push32(0x12b92ecau); f_12b971f0();
  /* 12b92eca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b92ecd:;
  /* 12b92ecd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b92ed0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12b92ed6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92edd je 0x12b92f28 */
  if (C.zf) goto L_12b92f28;
  /* 12b92edf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12b92ee5 push edx */
  push32((uint32_t)(EDX));
  /* 12b92ee6 call 0x12b96800 */
  push32(0x12b92eebu); f_12b96800();
  /* 12b92eeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92eee cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92ef1 jbe 0x12b92f28 */
  if ((C.cf||C.zf)) goto L_12b92f28;
  /* 12b92ef3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12b92ef9 push eax */
  push32((uint32_t)(EAX));
  /* 12b92efa call 0x12b96800 */
  push32(0x12b92effu); f_12b96800();
  /* 12b92eff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b92f02 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12b92f08 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12b92f0c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12b92f12 push 3 */
  push32((uint32_t)(0x3u));
  /* 12b92f14 push 0x12bbab7c */
  push32((uint32_t)(0x12bbab7cu));
  /* 12b92f19 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12b92f1f push eax */
  push32((uint32_t)(EAX));
  /* 12b92f20 call 0x12b971f0 */
  push32(0x12b92f25u); f_12b971f0();
  /* 12b92f25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b92f28:;
  /* 12b92f28 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92f2c jne 0x12b92f3a */
  if (!C.zf) goto L_12b92f3a;
  /* 12b92f2e mov dword ptr [ebp - 0x1114], 0x12bbab08 */
  w32((uint32_t)(EBP + -0x1114), (0x12bbab08u));
  /* 12b92f38 jmp 0x12b92f44 */
  goto L_12b92f44;
L_12b92f3a:;
  /* 12b92f3a mov dword ptr [ebp - 0x1114], 0x12bba8a8 */
  w32((uint32_t)(EBP + -0x1114), (0x12bba8a8u));
L_12b92f44:;
  /* 12b92f44 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b92f47 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b92f4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b92f4c je 0x12b92f59 */
  if (C.zf) goto L_12b92f59;
  /* 12b92f4e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b92f51 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12b92f57 jmp 0x12b92f63 */
  goto L_12b92f63;
L_12b92f59:;
  /* 12b92f59 mov dword ptr [ebp - 0x1118], 0x12bba8a8 */
  w32((uint32_t)(EBP + -0x1118), (0x12bba8a8u));
L_12b92f63:;
  /* 12b92f63 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b92f66 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b92f69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b92f6b je 0x12b92f7f */
  if (C.zf) goto L_12b92f7f;
  /* 12b92f6d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92f71 jne 0x12b92f7f */
  if (!C.zf) goto L_12b92f7f;
  /* 12b92f73 mov dword ptr [ebp - 0x111c], 0x12bbaaf8 */
  w32((uint32_t)(EBP + -0x111c), (0x12bbaaf8u));
  /* 12b92f7d jmp 0x12b92f89 */
  goto L_12b92f89;
L_12b92f7f:;
  /* 12b92f7f mov dword ptr [ebp - 0x111c], 0x12bba8a8 */
  w32((uint32_t)(EBP + -0x111c), (0x12bba8a8u));
L_12b92f89:;
  /* 12b92f89 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b92f8c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b92f8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b92f91 je 0x12b92f9f */
  if (C.zf) goto L_12b92f9f;
  /* 12b92f93 mov dword ptr [ebp - 0x1120], 0x12bbaaf4 */
  w32((uint32_t)(EBP + -0x1120), (0x12bbaaf4u));
  /* 12b92f9d jmp 0x12b92fa9 */
  goto L_12b92fa9;
L_12b92f9f:;
  /* 12b92f9f mov dword ptr [ebp - 0x1120], 0x12bba8a8 */
  w32((uint32_t)(EBP + -0x1120), (0x12bba8a8u));
L_12b92fa9:;
  /* 12b92fa9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92fad je 0x12b92fba */
  if (C.zf) goto L_12b92fba;
  /* 12b92faf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b92fb2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12b92fb8 jmp 0x12b92fc4 */
  goto L_12b92fc4;
L_12b92fba:;
  /* 12b92fba mov dword ptr [ebp - 0x1124], 0x12bba8a8 */
  w32((uint32_t)(EBP + -0x1124), (0x12bba8a8u));
L_12b92fc4:;
  /* 12b92fc4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92fc8 je 0x12b92fd6 */
  if (C.zf) goto L_12b92fd6;
  /* 12b92fca mov dword ptr [ebp - 0x1128], 0x12bbaaec */
  w32((uint32_t)(EBP + -0x1128), (0x12bbaaecu));
  /* 12b92fd4 jmp 0x12b92fe0 */
  goto L_12b92fe0;
L_12b92fd6:;
  /* 12b92fd6 mov dword ptr [ebp - 0x1128], 0x12bba8a8 */
  w32((uint32_t)(EBP + -0x1128), (0x12bba8a8u));
L_12b92fe0:;
  /* 12b92fe0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92fe4 je 0x12b92ff1 */
  if (C.zf) goto L_12b92ff1;
  /* 12b92fe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b92fe9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12b92fef jmp 0x12b92ffb */
  goto L_12b92ffb;
L_12b92ff1:;
  /* 12b92ff1 mov dword ptr [ebp - 0x112c], 0x12bba8a8 */
  w32((uint32_t)(EBP + -0x112c), (0x12bba8a8u));
L_12b92ffb:;
  /* 12b92ffb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b92fff je 0x12b9300d */
  if (C.zf) goto L_12b9300d;
  /* 12b93001 mov dword ptr [ebp - 0x1130], 0x12bbaae4 */
  w32((uint32_t)(EBP + -0x1130), (0x12bbaae4u));
  /* 12b9300b jmp 0x12b93017 */
  goto L_12b93017;
L_12b9300d:;
  /* 12b9300d mov dword ptr [ebp - 0x1130], 0x12bba8a8 */
  w32((uint32_t)(EBP + -0x1130), (0x12bba8a8u));
L_12b93017:;
  /* 12b93017 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9301e je 0x12b9302e */
  if (C.zf) goto L_12b9302e;
  /* 12b93020 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12b93026 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12b9302c jmp 0x12b93038 */
  goto L_12b93038;
L_12b9302e:;
  /* 12b9302e mov dword ptr [ebp - 0x1134], 0x12bba8a8 */
  w32((uint32_t)(EBP + -0x1134), (0x12bba8a8u));
L_12b93038:;
  /* 12b93038 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9303f je 0x12b9304d */
  if (C.zf) goto L_12b9304d;
  /* 12b93041 mov dword ptr [ebp - 0x1138], 0x12bbaad8 */
  w32((uint32_t)(EBP + -0x1138), (0x12bbaad8u));
  /* 12b9304b jmp 0x12b93057 */
  goto L_12b93057;
L_12b9304d:;
  /* 12b9304d mov dword ptr [ebp - 0x1138], 0x12bba8a8 */
  w32((uint32_t)(EBP + -0x1138), (0x12bba8a8u));
L_12b93057:;
  /* 12b93057 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12b9305d push edx */
  push32((uint32_t)(EDX));
  /* 12b9305e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12b93064 push eax */
  push32((uint32_t)(EAX));
  /* 12b93065 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12b9306b push ecx */
  push32((uint32_t)(ECX));
  /* 12b9306c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12b93072 push edx */
  push32((uint32_t)(EDX));
  /* 12b93073 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12b93079 push eax */
  push32((uint32_t)(EAX));
  /* 12b9307a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12b93080 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93081 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12b93087 push edx */
  push32((uint32_t)(EDX));
  /* 12b93088 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12b9308e push eax */
  push32((uint32_t)(EAX));
  /* 12b9308f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12b93095 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93096 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12b9309c push edx */
  push32((uint32_t)(EDX));
  /* 12b9309d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b930a0 push eax */
  push32((uint32_t)(EAX));
  /* 12b930a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b930a4 mov edx, dword ptr [ecx*4 + 0x12bbda50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12bbda50)));
  /* 12b930ab push edx */
  push32((uint32_t)(EDX));
  /* 12b930ac push 0x12bbaa84 */
  push32((uint32_t)(0x12bbaa84u));
  /* 12b930b1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12b930b6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12b930bc push eax */
  push32((uint32_t)(EAX));
  /* 12b930bd call 0x12b96880 */
  push32(0x12b930c2u); f_12b96880();
  /* 12b930c2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b930c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b930c7 jge 0x12b930dd */
  if ((C.sf==C.of)) goto L_12b930dd;
  /* 12b930c9 push 0x12bba9e8 */
  push32((uint32_t)(0x12bba9e8u));
  /* 12b930ce lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12b930d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12b930d5 call 0x12b96980 */
  push32(0x12b930dau); f_12b96980();
  /* 12b930da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b930dd:;
  /* 12b930dd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12b930e2 push 0x12bbaa60 */
  push32((uint32_t)(0x12bbaa60u));
  /* 12b930e7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12b930ed push edx */
  push32((uint32_t)(EDX));
  /* 12b930ee call 0x12b97130 */
  push32(0x12b930f3u); f_12b97130();
  /* 12b930f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b930f6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12b930fc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93103 jne 0x12b93116 */
  if (!C.zf) goto L_12b93116;
  /* 12b93105 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12b93107 call 0x12b96e70 */
  push32(0x12b9310cu); f_12b96e70();
  /* 12b9310c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9310f push 3 */
  push32((uint32_t)(0x3u));
  /* 12b93111 call 0x12b93190 */
  push32(0x12b93116u); f_12b93190();
L_12b93116:;
  /* 12b93116 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9311d jne 0x12b93126 */
  if (!C.zf) goto L_12b93126;
  /* 12b9311f mov eax, 1 */
  EAX = (0x1u);
  /* 12b93124 jmp 0x12b93128 */
  goto L_12b93128;
L_12b93126:;
  /* 12b93126 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b93128:;
  /* 12b93128 mov esp, ebp */
  ESP = (EBP);
  /* 12b9312a pop ebp */
  EBP = (pop32());
  /* 12b9312b ret  */
  ESPCHK(0x12b92e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003130 @ 0x12b93130 (56 bytes, 15 insns) */
void f_12b93130(void) {
  FTRACE(0x12b93130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93130 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93131 mov ebp, esp */
  EBP = (ESP);
  /* 12b93133 cmp dword ptr [0x12bc0fbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0fbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9313a je 0x12b93142 */
  if (C.zf) goto L_12b93142;
  /* 12b9313c call dword ptr [0x12bc0fbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc0fbc))), 0x12b93142u);
L_12b93142:;
  /* 12b93142 push 0x12bbd418 */
  push32((uint32_t)(0x12bbd418u));
  /* 12b93147 push 0x12bbd208 */
  push32((uint32_t)(0x12bbd208u));
  /* 12b9314c call 0x12b93300 */
  push32(0x12b93151u); f_12b93300();
  /* 12b93151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93154 push 0x12bbd104 */
  push32((uint32_t)(0x12bbd104u));
  /* 12b93159 push 0x12bbd000 */
  push32((uint32_t)(0x12bbd000u));
  /* 12b9315e call 0x12b93300 */
  push32(0x12b93163u); f_12b93300();
  /* 12b93163 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93166 pop ebp */
  EBP = (pop32());
  /* 12b93167 ret  */
  ESPCHK(0x12b93130u, _esp0);
  ESP += 4; return;
}

/* FUN_10003170 @ 0x12b93170 (21 bytes, 10 insns) */
void f_12b93170(void) {
  FTRACE(0x12b93170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93170 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93171 mov ebp, esp */
  EBP = (ESP);
  /* 12b93173 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93175 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93177 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9317a push eax */
  push32((uint32_t)(EAX));
  /* 12b9317b call 0x12b931f0 */
  push32(0x12b93180u); f_12b931f0();
  /* 12b93180 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93183 pop ebp */
  EBP = (pop32());
  /* 12b93184 ret  */
  ESPCHK(0x12b93170u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12b93190 (21 bytes, 10 insns) */
void f_12b93190(void) {
  FTRACE(0x12b93190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93190 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93191 mov ebp, esp */
  EBP = (ESP);
  /* 12b93193 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93195 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b93197 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9319a push eax */
  push32((uint32_t)(EAX));
  /* 12b9319b call 0x12b931f0 */
  push32(0x12b931a0u); f_12b931f0();
  /* 12b931a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b931a3 pop ebp */
  EBP = (pop32());
  /* 12b931a4 ret  */
  ESPCHK(0x12b93190u, _esp0);
  ESP += 4; return;
}

/* FUN_100031b0 @ 0x12b931b0 (19 bytes, 9 insns) */
void f_12b931b0(void) {
  FTRACE(0x12b931b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b931b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b931b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b931b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b931b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b931b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b931b9 call 0x12b931f0 */
  push32(0x12b931beu); f_12b931f0();
  /* 12b931be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b931c1 pop ebp */
  EBP = (pop32());
  /* 12b931c2 ret  */
  ESPCHK(0x12b931b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100031d0 @ 0x12b931d0 (19 bytes, 9 insns) */
void f_12b931d0(void) {
  FTRACE(0x12b931d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b931d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b931d1 mov ebp, esp */
  EBP = (ESP);
  /* 12b931d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b931d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b931d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b931d9 call 0x12b931f0 */
  push32(0x12b931deu); f_12b931f0();
  /* 12b931de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b931e1 pop ebp */
  EBP = (pop32());
  /* 12b931e2 ret  */
  ESPCHK(0x12b931d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100031f0 @ 0x12b931f0 (227 bytes, 61 insns) */
void f_12b931f0(void) {
  FTRACE(0x12b931f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b931f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b931f1 mov ebp, esp */
  EBP = (ESP);
  /* 12b931f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b931f4 call 0x12b932e0 */
  push32(0x12b931f9u); f_12b932e0();
  /* 12b931f9 cmp dword ptr [0x12bbf4c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf4c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93200 jne 0x12b93213 */
  if (!C.zf) goto L_12b93213;
  /* 12b93202 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93205 push eax */
  push32((uint32_t)(EAX));
  /* 12b93206 call dword ptr [0x12bc1298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1298))), 0x12b9320cu);
  /* 12b9320c push eax */
  push32((uint32_t)(EAX));
  /* 12b9320d call dword ptr [0x12bc1294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1294))), 0x12b93213u);
L_12b93213:;
  /* 12b93213 mov dword ptr [0x12bbf4c0], 1 */
  w32((uint32_t)(0x12bbf4c0), (0x1u));
  /* 12b9321d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12b93220 mov byte ptr [0x12bbf4bc], cl */
  w8((uint32_t)(0x12bbf4bc), (CL));
  /* 12b93226 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9322a jne 0x12b93273 */
  if (!C.zf) goto L_12b93273;
  /* 12b9322c cmp dword ptr [0x12bc0fb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0fb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93233 je 0x12b93261 */
  if (C.zf) goto L_12b93261;
  /* 12b93235 mov edx, dword ptr [0x12bc0fb4] */
  EDX = (r32((uint32_t)(0x12bc0fb4)));
  /* 12b9323b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b9323e:;
  /* 12b9323e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93241 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b93244 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b93247 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9324a cmp ecx, dword ptr [0x12bc0fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bc0fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93250 jb 0x12b93261 */
  if (C.cf) goto L_12b93261;
  /* 12b93252 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93255 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93258 je 0x12b9325f */
  if (C.zf) goto L_12b9325f;
  /* 12b9325a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9325d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12b9325fu);
L_12b9325f:;
  /* 12b9325f jmp 0x12b9323e */
  goto L_12b9323e;
L_12b93261:;
  /* 12b93261 push 0x12bbd724 */
  push32((uint32_t)(0x12bbd724u));
  /* 12b93266 push 0x12bbd51c */
  push32((uint32_t)(0x12bbd51cu));
  /* 12b9326b call 0x12b93300 */
  push32(0x12b93270u); f_12b93300();
  /* 12b93270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b93273:;
  /* 12b93273 push 0x12bbd92c */
  push32((uint32_t)(0x12bbd92cu));
  /* 12b93278 push 0x12bbd828 */
  push32((uint32_t)(0x12bbd828u));
  /* 12b9327d call 0x12b93300 */
  push32(0x12b93282u); f_12b93300();
  /* 12b93282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93285 cmp dword ptr [0x12bbf4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9328c jne 0x12b932ae */
  if (!C.zf) goto L_12b932ae;
  /* 12b9328e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12b93290 call 0x12b94ee0 */
  push32(0x12b93295u); f_12b94ee0();
  /* 12b93295 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93298 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9329b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9329d je 0x12b932ae */
  if (C.zf) goto L_12b932ae;
  /* 12b9329f mov dword ptr [0x12bbf4c8], 1 */
  w32((uint32_t)(0x12bbf4c8), (0x1u));
  /* 12b932a9 call 0x12b957f0 */
  push32(0x12b932aeu); f_12b957f0();
L_12b932ae:;
  /* 12b932ae cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b932b2 je 0x12b932bb */
  if (C.zf) goto L_12b932bb;
  /* 12b932b4 call 0x12b932f0 */
  push32(0x12b932b9u); f_12b932f0();
  /* 12b932b9 jmp 0x12b932cf */
  goto L_12b932cf;
L_12b932bb:;
  /* 12b932bb mov dword ptr [0x12bbf4c4], 1 */
  w32((uint32_t)(0x12bbf4c4), (0x1u));
  /* 12b932c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b932c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12b932c9 call dword ptr [0x12bc1290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1290))), 0x12b932cfu);
L_12b932cf:;
  /* 12b932cf mov esp, ebp */
  ESP = (EBP);
  /* 12b932d1 pop ebp */
  EBP = (pop32());
  /* 12b932d2 ret  */
  ESPCHK(0x12b931f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032e0 @ 0x12b932e0 (15 bytes, 7 insns) */
void f_12b932e0(void) {
  FTRACE(0x12b932e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b932e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b932e1 mov ebp, esp */
  EBP = (ESP);
  /* 12b932e3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12b932e5 call 0x12b973d0 */
  push32(0x12b932eau); f_12b973d0();
  /* 12b932ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b932ed pop ebp */
  EBP = (pop32());
  /* 12b932ee ret  */
  ESPCHK(0x12b932e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032f0 @ 0x12b932f0 (15 bytes, 7 insns) */
void f_12b932f0(void) {
  FTRACE(0x12b932f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b932f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b932f1 mov ebp, esp */
  EBP = (ESP);
  /* 12b932f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12b932f5 call 0x12b97470 */
  push32(0x12b932fau); f_12b97470();
  /* 12b932fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b932fd pop ebp */
  EBP = (pop32());
  /* 12b932fe ret  */
  ESPCHK(0x12b932f0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12b93300 (37 bytes, 16 insns) */
void f_12b93300(void) {
  FTRACE(0x12b93300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93300 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93301 mov ebp, esp */
  EBP = (ESP);
L_12b93303:;
  /* 12b93303 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93306 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93309 jae 0x12b93323 */
  if (!C.cf) goto L_12b93323;
  /* 12b9330b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9330e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93311 je 0x12b93318 */
  if (C.zf) goto L_12b93318;
  /* 12b93313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93316 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12b93318u);
L_12b93318:;
  /* 12b93318 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9331b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9331e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12b93321 jmp 0x12b93303 */
  goto L_12b93303;
L_12b93323:;
  /* 12b93323 pop ebp */
  EBP = (pop32());
  /* 12b93324 ret  */
  ESPCHK(0x12b93300u, _esp0);
  ESP += 4; return;
}

/* FUN_10003330 @ 0x12b93330 (130 bytes, 42 insns) */
void f_12b93330(void) {
  FTRACE(0x12b93330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93330 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93331 mov ebp, esp */
  EBP = (ESP);
  /* 12b93333 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93334 call 0x12b972f0 */
  push32(0x12b93339u); f_12b972f0();
  /* 12b93339 call dword ptr [0x12bc12a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12a4))), 0x12b9333fu);
  /* 12b9333f mov dword ptr [0x12bbda5c], eax */
  w32((uint32_t)(0x12bbda5c), (EAX));
  /* 12b93344 cmp dword ptr [0x12bbda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9334b jne 0x12b93351 */
  if (!C.zf) goto L_12b93351;
  /* 12b9334d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9334f jmp 0x12b933ae */
  goto L_12b933ae;
L_12b93351:;
  /* 12b93351 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12b93353 push 0x12bbabbc */
  push32((uint32_t)(0x12bbabbcu));
  /* 12b93358 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9335a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12b9335c push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9335e call 0x12b93de0 */
  push32(0x12b93363u); f_12b93de0();
  /* 12b93363 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93366 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b93369 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9336d je 0x12b93384 */
  if (C.zf) goto L_12b93384;
  /* 12b9336f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93372 push eax */
  push32((uint32_t)(EAX));
  /* 12b93373 mov ecx, dword ptr [0x12bbda5c] */
  ECX = (r32((uint32_t)(0x12bbda5c)));
  /* 12b93379 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9337a call dword ptr [0x12bc12a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12a0))), 0x12b93380u);
  /* 12b93380 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b93382 jne 0x12b93388 */
  if (!C.zf) goto L_12b93388;
L_12b93384:;
  /* 12b93384 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b93386 jmp 0x12b933ae */
  goto L_12b933ae;
L_12b93388:;
  /* 12b93388 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9338b push edx */
  push32((uint32_t)(EDX));
  /* 12b9338c call 0x12b933f0 */
  push32(0x12b93391u); f_12b933f0();
  /* 12b93391 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93394 call dword ptr [0x12bc129c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc129c))), 0x12b9339au);
  /* 12b9339a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9339d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12b9339f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b933a2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12b933a9 mov eax, 1 */
  EAX = (0x1u);
L_12b933ae:;
  /* 12b933ae mov esp, ebp */
  ESP = (EBP);
  /* 12b933b0 pop ebp */
  EBP = (pop32());
  /* 12b933b1 ret  */
  ESPCHK(0x12b93330u, _esp0);
  ESP += 4; return;
}

/* FUN_100033c0 @ 0x12b933c0 (41 bytes, 11 insns) */
void f_12b933c0(void) {
  FTRACE(0x12b933c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b933c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b933c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b933c3 call 0x12b97330 */
  push32(0x12b933c8u); f_12b97330();
  /* 12b933c8 cmp dword ptr [0x12bbda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b933cf je 0x12b933e7 */
  if (C.zf) goto L_12b933e7;
  /* 12b933d1 mov eax, dword ptr [0x12bbda5c] */
  EAX = (r32((uint32_t)(0x12bbda5c)));
  /* 12b933d6 push eax */
  push32((uint32_t)(EAX));
  /* 12b933d7 call dword ptr [0x12bc12a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12a8))), 0x12b933ddu);
  /* 12b933dd mov dword ptr [0x12bbda5c], 0xffffffff */
  w32((uint32_t)(0x12bbda5c), (0xffffffffu));
L_12b933e7:;
  /* 12b933e7 pop ebp */
  EBP = (pop32());
  /* 12b933e8 ret  */
  ESPCHK(0x12b933c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100033f0 @ 0x12b933f0 (25 bytes, 8 insns) */
void f_12b933f0(void) {
  FTRACE(0x12b933f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b933f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b933f1 mov ebp, esp */
  EBP = (ESP);
  /* 12b933f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b933f6 mov dword ptr [eax + 0x50], 0x12bbdc00 */
  w32((uint32_t)(EAX + 0x50), (0x12bbdc00u));
  /* 12b933fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93400 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12b93407 pop ebp */
  EBP = (pop32());
  /* 12b93408 ret  */
  ESPCHK(0x12b933f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003410 @ 0x12b93410 (152 bytes, 48 insns) */
void f_12b93410(void) {
  FTRACE(0x12b93410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93410 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93411 mov ebp, esp */
  EBP = (ESP);
  /* 12b93413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b93416 call dword ptr [0x12bc12b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12b4))), 0x12b9341cu);
  /* 12b9341c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9341f mov eax, dword ptr [0x12bbda5c] */
  EAX = (r32((uint32_t)(0x12bbda5c)));
  /* 12b93424 push eax */
  push32((uint32_t)(EAX));
  /* 12b93425 call dword ptr [0x12bc12b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12b0))), 0x12b9342bu);
  /* 12b9342b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9342e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93432 jne 0x12b93497 */
  if (!C.zf) goto L_12b93497;
  /* 12b93434 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12b93439 push 0x12bbabbc */
  push32((uint32_t)(0x12bbabbcu));
  /* 12b9343e push 2 */
  push32((uint32_t)(0x2u));
  /* 12b93440 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12b93442 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b93444 call 0x12b93de0 */
  push32(0x12b93449u); f_12b93de0();
  /* 12b93449 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9344c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9344f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93453 je 0x12b9348d */
  if (C.zf) goto L_12b9348d;
  /* 12b93455 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93458 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93459 mov edx, dword ptr [0x12bbda5c] */
  EDX = (r32((uint32_t)(0x12bbda5c)));
  /* 12b9345f push edx */
  push32((uint32_t)(EDX));
  /* 12b93460 call dword ptr [0x12bc12a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12a0))), 0x12b93466u);
  /* 12b93466 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b93468 je 0x12b9348d */
  if (C.zf) goto L_12b9348d;
  /* 12b9346a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9346d push eax */
  push32((uint32_t)(EAX));
  /* 12b9346e call 0x12b933f0 */
  push32(0x12b93473u); f_12b933f0();
  /* 12b93473 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93476 call dword ptr [0x12bc129c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc129c))), 0x12b9347cu);
  /* 12b9347c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9347f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12b93481 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93484 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12b9348b jmp 0x12b93497 */
  goto L_12b93497;
L_12b9348d:;
  /* 12b9348d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12b9348f call 0x12b92940 */
  push32(0x12b93494u); f_12b92940();
  /* 12b93494 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b93497:;
  /* 12b93497 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9349a push eax */
  push32((uint32_t)(EAX));
  /* 12b9349b call dword ptr [0x12bc12ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12ac))), 0x12b934a1u);
  /* 12b934a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b934a4 mov esp, ebp */
  ESP = (EBP);
  /* 12b934a6 pop ebp */
  EBP = (pop32());
  /* 12b934a7 ret  */
  ESPCHK(0x12b93410u, _esp0);
  ESP += 4; return;
}

/* FUN_100034b0 @ 0x12b934b0 (263 bytes, 86 insns) */
void f_12b934b0(void) {
  FTRACE(0x12b934b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b934b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b934b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b934b3 cmp dword ptr [0x12bbda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b934ba je 0x12b935b5 */
  if (C.zf) goto L_12b935b5;
  /* 12b934c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b934c4 jne 0x12b934d5 */
  if (!C.zf) goto L_12b934d5;
  /* 12b934c6 mov eax, dword ptr [0x12bbda5c] */
  EAX = (r32((uint32_t)(0x12bbda5c)));
  /* 12b934cb push eax */
  push32((uint32_t)(EAX));
  /* 12b934cc call dword ptr [0x12bc12b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12b0))), 0x12b934d2u);
  /* 12b934d2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12b934d5:;
  /* 12b934d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b934d9 je 0x12b935a6 */
  if (C.zf) goto L_12b935a6;
  /* 12b934df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b934e2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b934e6 je 0x12b934f9 */
  if (C.zf) goto L_12b934f9;
  /* 12b934e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b934ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b934ed mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12b934f0 push eax */
  push32((uint32_t)(EAX));
  /* 12b934f1 call 0x12b94460 */
  push32(0x12b934f6u); f_12b94460();
  /* 12b934f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b934f9:;
  /* 12b934f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b934fc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93500 je 0x12b93513 */
  if (C.zf) goto L_12b93513;
  /* 12b93502 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b93504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93507 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12b9350a push eax */
  push32((uint32_t)(EAX));
  /* 12b9350b call 0x12b94460 */
  push32(0x12b93510u); f_12b94460();
  /* 12b93510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b93513:;
  /* 12b93513 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93516 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9351a je 0x12b9352d */
  if (C.zf) goto L_12b9352d;
  /* 12b9351c push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9351e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93521 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12b93524 push eax */
  push32((uint32_t)(EAX));
  /* 12b93525 call 0x12b94460 */
  push32(0x12b9352au); f_12b94460();
  /* 12b9352a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9352d:;
  /* 12b9352d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93530 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93534 je 0x12b93547 */
  if (C.zf) goto L_12b93547;
  /* 12b93536 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b93538 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9353b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12b9353e push eax */
  push32((uint32_t)(EAX));
  /* 12b9353f call 0x12b94460 */
  push32(0x12b93544u); f_12b94460();
  /* 12b93544 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b93547:;
  /* 12b93547 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9354a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9354e je 0x12b93561 */
  if (C.zf) goto L_12b93561;
  /* 12b93550 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b93552 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93555 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12b93558 push eax */
  push32((uint32_t)(EAX));
  /* 12b93559 call 0x12b94460 */
  push32(0x12b9355eu); f_12b94460();
  /* 12b9355e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b93561:;
  /* 12b93561 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93564 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93568 je 0x12b9357b */
  if (C.zf) goto L_12b9357b;
  /* 12b9356a push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9356c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9356f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12b93572 push eax */
  push32((uint32_t)(EAX));
  /* 12b93573 call 0x12b94460 */
  push32(0x12b93578u); f_12b94460();
  /* 12b93578 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9357b:;
  /* 12b9357b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9357e cmp dword ptr [ecx + 0x50], 0x12bbdc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12bbdc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93585 je 0x12b93598 */
  if (C.zf) goto L_12b93598;
  /* 12b93587 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b93589 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9358c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12b9358f push eax */
  push32((uint32_t)(EAX));
  /* 12b93590 call 0x12b94460 */
  push32(0x12b93595u); f_12b94460();
  /* 12b93595 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b93598:;
  /* 12b93598 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9359a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9359d push ecx */
  push32((uint32_t)(ECX));
  /* 12b9359e call 0x12b94460 */
  push32(0x12b935a3u); f_12b94460();
  /* 12b935a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b935a6:;
  /* 12b935a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b935a8 mov edx, dword ptr [0x12bbda5c] */
  EDX = (r32((uint32_t)(0x12bbda5c)));
  /* 12b935ae push edx */
  push32((uint32_t)(EDX));
  /* 12b935af call dword ptr [0x12bc12a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12a0))), 0x12b935b5u);
L_12b935b5:;
  /* 12b935b5 pop ebp */
  EBP = (pop32());
  /* 12b935b6 ret  */
  ESPCHK(0x12b934b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035c0 @ 0x12b935c0 (11 bytes, 5 insns) */
void f_12b935c0(void) {
  FTRACE(0x12b935c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b935c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b935c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b935c3 call dword ptr [0x12bc129c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc129c))), 0x12b935c9u);
  /* 12b935c9 pop ebp */
  EBP = (pop32());
  /* 12b935ca ret  */
  ESPCHK(0x12b935c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035d0 @ 0x12b935d0 (11 bytes, 5 insns) */
void f_12b935d0(void) {
  FTRACE(0x12b935d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b935d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b935d1 mov ebp, esp */
  EBP = (ESP);
  /* 12b935d3 call dword ptr [0x12bc12b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12b8))), 0x12b935d9u);
  /* 12b935d9 pop ebp */
  EBP = (pop32());
  /* 12b935da ret  */
  ESPCHK(0x12b935d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035e0 @ 0x12b935e0 (804 bytes, 236 insns) */
void f_12b935e0(void) {
  FTRACE(0x12b935e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b935e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b935e1 mov ebp, esp */
  EBP = (ESP);
  /* 12b935e3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b935e6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12b935eb push 0x12bbabc8 */
  push32((uint32_t)(0x12bbabc8u));
  /* 12b935f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b935f2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12b935f7 call 0x12b939d0 */
  push32(0x12b935fcu); f_12b939d0();
  /* 12b935fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b935ff mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12b93602 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93606 jne 0x12b93612 */
  if (!C.zf) goto L_12b93612;
  /* 12b93608 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12b9360a call 0x12b92940 */
  push32(0x12b9360fu); f_12b92940();
  /* 12b9360f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b93612:;
  /* 12b93612 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b93615 mov dword ptr [0x12bc0e60], eax */
  w32((uint32_t)(0x12bc0e60), (EAX));
  /* 12b9361a mov dword ptr [0x12bc0f9c], 0x20 */
  w32((uint32_t)(0x12bc0f9c), (0x20u));
  /* 12b93624 jmp 0x12b9362f */
  goto L_12b9362f;
L_12b93626:;
  /* 12b93626 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b93629 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9362c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12b9362f:;
  /* 12b9362f mov edx, dword ptr [0x12bc0e60] */
  EDX = (r32((uint32_t)(0x12bc0e60)));
  /* 12b93635 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9363b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9363e jae 0x12b93663 */
  if (!C.cf) goto L_12b93663;
  /* 12b93640 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b93643 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12b93647 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b9364a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12b93650 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b93653 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12b93657 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b9365a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12b93661 jmp 0x12b93626 */
  goto L_12b93626;
L_12b93663:;
  /* 12b93663 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12b93666 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93667 call dword ptr [0x12bc12c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12c4))), 0x12b9366du);
  /* 12b9366d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12b93670 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b93676 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b93678 je 0x12b93805 */
  if (C.zf) goto L_12b93805;
  /* 12b9367e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93682 je 0x12b93805 */
  if (C.zf) goto L_12b93805;
  /* 12b93688 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b9368b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b9368d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12b93690 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b93693 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93696 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b93699 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9369c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9369f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12b936a2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b936a9 jge 0x12b936b3 */
  if ((C.sf==C.of)) goto L_12b936b3;
  /* 12b936ab mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12b936ae mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12b936b1 jmp 0x12b936ba */
  goto L_12b936ba;
L_12b936b3:;
  /* 12b936b3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12b936ba:;
  /* 12b936ba mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12b936bd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12b936c0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12b936c7 jmp 0x12b936d2 */
  goto L_12b936d2;
L_12b936c9:;
  /* 12b936c9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12b936cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b936cf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12b936d2:;
  /* 12b936d2 mov ecx, dword ptr [0x12bc0f9c] */
  ECX = (r32((uint32_t)(0x12bc0f9c)));
  /* 12b936d8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b936db jge 0x12b93772 */
  if ((C.sf==C.of)) goto L_12b93772;
  /* 12b936e1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12b936e6 push 0x12bbabc8 */
  push32((uint32_t)(0x12bbabc8u));
  /* 12b936eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12b936ed push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12b936f2 call 0x12b939d0 */
  push32(0x12b936f7u); f_12b939d0();
  /* 12b936f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b936fa mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12b936fd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93701 jne 0x12b9370e */
  if (!C.zf) goto L_12b9370e;
  /* 12b93703 mov edx, dword ptr [0x12bc0f9c] */
  EDX = (r32((uint32_t)(0x12bc0f9c)));
  /* 12b93709 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12b9370c jmp 0x12b93772 */
  goto L_12b93772;
L_12b9370e:;
  /* 12b9370e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12b93711 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b93714 mov dword ptr [eax*4 + 0x12bc0e60], ecx */
  w32((uint32_t)(EAX*4 + 0x12bc0e60), (ECX));
  /* 12b9371b mov edx, dword ptr [0x12bc0f9c] */
  EDX = (r32((uint32_t)(0x12bc0f9c)));
  /* 12b93721 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93724 mov dword ptr [0x12bc0f9c], edx */
  w32((uint32_t)(0x12bc0f9c), (EDX));
  /* 12b9372a jmp 0x12b93735 */
  goto L_12b93735;
L_12b9372c:;
  /* 12b9372c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b9372f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93732 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12b93735:;
  /* 12b93735 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12b93738 mov edx, dword ptr [ecx*4 + 0x12bc0e60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12b9373f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93745 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93748 jae 0x12b9376d */
  if (!C.cf) goto L_12b9376d;
  /* 12b9374a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b9374d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12b93751 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b93754 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12b9375a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b9375d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12b93761 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b93764 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12b9376b jmp 0x12b9372c */
  goto L_12b9372c;
L_12b9376d:;
  /* 12b9376d jmp 0x12b936c9 */
  goto L_12b936c9;
L_12b93772:;
  /* 12b93772 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12b93779 jmp 0x12b93796 */
  goto L_12b93796;
L_12b9377b:;
  /* 12b9377b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12b9377e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93781 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12b93784 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93787 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9378a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b9378d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12b93790 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93793 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12b93796:;
  /* 12b93796 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12b93799 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9379c jge 0x12b93805 */
  if ((C.sf==C.of)) goto L_12b93805;
  /* 12b9379e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12b937a1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b937a4 je 0x12b93800 */
  if (C.zf) goto L_12b93800;
  /* 12b937a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b937a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b937ac and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12b937af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b937b1 je 0x12b93800 */
  if (C.zf) goto L_12b93800;
  /* 12b937b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b937b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b937b9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12b937bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b937be jne 0x12b937d0 */
  if (!C.zf) goto L_12b937d0;
  /* 12b937c0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12b937c3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b937c5 push edx */
  push32((uint32_t)(EDX));
  /* 12b937c6 call dword ptr [0x12bc12c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12c0))), 0x12b937ccu);
  /* 12b937cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b937ce je 0x12b93800 */
  if (C.zf) goto L_12b93800;
L_12b937d0:;
  /* 12b937d0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12b937d3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b937d6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12b937d9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12b937dc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b937df mov edx, dword ptr [eax*4 + 0x12bc0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12bc0e60)));
  /* 12b937e6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b937e8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12b937eb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b937ee mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12b937f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b937f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12b937f5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b937f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b937fb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b937fd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12b93800:;
  /* 12b93800 jmp 0x12b9377b */
  goto L_12b9377b;
L_12b93805:;
  /* 12b93805 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12b9380c jmp 0x12b93817 */
  goto L_12b93817;
L_12b9380e:;
  /* 12b9380e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12b93811 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93814 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12b93817:;
  /* 12b93817 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9381b jge 0x12b938f4 */
  if ((C.sf==C.of)) goto L_12b938f4;
  /* 12b93821 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12b93824 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b93827 mov edx, dword ptr [0x12bc0e60] */
  EDX = (r32((uint32_t)(0x12bc0e60)));
  /* 12b9382d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9382f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12b93832 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b93835 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93838 jne 0x12b938e0 */
  if (!C.zf) goto L_12b938e0;
  /* 12b9383e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b93841 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12b93845 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93849 jne 0x12b93854 */
  if (!C.zf) goto L_12b93854;
  /* 12b9384b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12b93852 jmp 0x12b93864 */
  goto L_12b93864;
L_12b93854:;
  /* 12b93854 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12b93857 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9385a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9385c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9385e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93861 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12b93864:;
  /* 12b93864 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12b93867 push eax */
  push32((uint32_t)(EAX));
  /* 12b93868 call dword ptr [0x12bc1270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1270))), 0x12b9386eu);
  /* 12b9386e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12b93871 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93875 je 0x12b938cf */
  if (C.zf) goto L_12b938cf;
  /* 12b93877 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12b9387a push ecx */
  push32((uint32_t)(ECX));
  /* 12b9387b call dword ptr [0x12bc12c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12c0))), 0x12b93881u);
  /* 12b93881 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12b93884 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93888 je 0x12b938cf */
  if (C.zf) goto L_12b938cf;
  /* 12b9388a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b9388d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12b93890 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12b93892 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12b93895 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9389b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9389e jne 0x12b938b0 */
  if (!C.zf) goto L_12b938b0;
  /* 12b938a0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b938a3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12b938a6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12b938a8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b938ab mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12b938ae jmp 0x12b938cd */
  goto L_12b938cd;
L_12b938b0:;
  /* 12b938b0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12b938b3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b938b9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b938bc jne 0x12b938cd */
  if (!C.zf) goto L_12b938cd;
  /* 12b938be mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b938c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12b938c4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12b938c7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b938ca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12b938cd:;
  /* 12b938cd jmp 0x12b938de */
  goto L_12b938de;
L_12b938cf:;
  /* 12b938cf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b938d2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12b938d5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12b938d8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b938db mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12b938de:;
  /* 12b938de jmp 0x12b938ef */
  goto L_12b938ef;
L_12b938e0:;
  /* 12b938e0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b938e3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12b938e6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12b938e9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b938ec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12b938ef:;
  /* 12b938ef jmp 0x12b9380e */
  goto L_12b9380e;
L_12b938f4:;
  /* 12b938f4 mov eax, dword ptr [0x12bc0f9c] */
  EAX = (r32((uint32_t)(0x12bc0f9c)));
  /* 12b938f9 push eax */
  push32((uint32_t)(EAX));
  /* 12b938fa call dword ptr [0x12bc12bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12bc))), 0x12b93900u);
  /* 12b93900 mov esp, ebp */
  ESP = (EBP);
  /* 12b93902 pop ebp */
  EBP = (pop32());
  /* 12b93903 ret  */
  ESPCHK(0x12b935e0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12b93910 (155 bytes, 45 insns) */
void f_12b93910(void) {
  FTRACE(0x12b93910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93910 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93911 mov ebp, esp */
  EBP = (ESP);
  /* 12b93913 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b93916 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12b9391d jmp 0x12b93928 */
  goto L_12b93928;
L_12b9391f:;
  /* 12b9391f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b93922 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93925 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12b93928:;
  /* 12b93928 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9392c jge 0x12b939a7 */
  if ((C.sf==C.of)) goto L_12b939a7;
  /* 12b9392e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b93931 cmp dword ptr [ecx*4 + 0x12bc0e60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12bc0e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93939 je 0x12b939a2 */
  if (C.zf) goto L_12b939a2;
  /* 12b9393b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9393e mov eax, dword ptr [edx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12bc0e60)));
  /* 12b93945 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b93948 jmp 0x12b93953 */
  goto L_12b93953;
L_12b9394a:;
  /* 12b9394a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9394d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93950 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b93953:;
  /* 12b93953 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b93956 mov eax, dword ptr [edx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12bc0e60)));
  /* 12b9395d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93962 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93965 jae 0x12b9397f */
  if (!C.cf) goto L_12b9397f;
  /* 12b93967 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9396a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9396e je 0x12b9397d */
  if (C.zf) goto L_12b9397d;
  /* 12b93970 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93973 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93976 push edx */
  push32((uint32_t)(EDX));
  /* 12b93977 call dword ptr [0x12bc12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12c8))), 0x12b9397du);
L_12b9397d:;
  /* 12b9397d jmp 0x12b9394a */
  goto L_12b9394a;
L_12b9397f:;
  /* 12b9397f push 2 */
  push32((uint32_t)(0x2u));
  /* 12b93981 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b93984 mov ecx, dword ptr [eax*4 + 0x12bc0e60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12bc0e60)));
  /* 12b9398b push ecx */
  push32((uint32_t)(ECX));
  /* 12b9398c call 0x12b94460 */
  push32(0x12b93991u); f_12b94460();
  /* 12b93991 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93994 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b93997 mov dword ptr [edx*4 + 0x12bc0e60], 0 */
  w32((uint32_t)(EDX*4 + 0x12bc0e60), (0x0u));
L_12b939a2:;
  /* 12b939a2 jmp 0x12b9391f */
  goto L_12b9391f;
L_12b939a7:;
  /* 12b939a7 mov esp, ebp */
  ESP = (EBP);
  /* 12b939a9 pop ebp */
  EBP = (pop32());
  /* 12b939aa ret  */
  ESPCHK(0x12b93910u, _esp0);
  ESP += 4; return;
}

/* FUN_100039b0 @ 0x12b939b0 (29 bytes, 13 insns) */
void f_12b939b0(void) {
  FTRACE(0x12b939b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b939b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b939b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b939b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b939b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b939b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b939b9 mov eax, dword ptr [0x12bbf670] */
  EAX = (r32((uint32_t)(0x12bbf670)));
  /* 12b939be push eax */
  push32((uint32_t)(EAX));
  /* 12b939bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b939c2 push ecx */
  push32((uint32_t)(ECX));
  /* 12b939c3 call 0x12b93a20 */
  push32(0x12b939c8u); f_12b93a20();
  /* 12b939c8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b939cb pop ebp */
  EBP = (pop32());
  /* 12b939cc ret  */
  ESPCHK(0x12b939b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039d0 @ 0x12b939d0 (35 bytes, 16 insns) */
void f_12b939d0(void) {
  FTRACE(0x12b939d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b939d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b939d1 mov ebp, esp */
  EBP = (ESP);
  /* 12b939d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b939d6 push eax */
  push32((uint32_t)(EAX));
  /* 12b939d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b939da push ecx */
  push32((uint32_t)(ECX));
  /* 12b939db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b939de push edx */
  push32((uint32_t)(EDX));
  /* 12b939df mov eax, dword ptr [0x12bbf670] */
  EAX = (r32((uint32_t)(0x12bbf670)));
  /* 12b939e4 push eax */
  push32((uint32_t)(EAX));
  /* 12b939e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b939e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12b939e9 call 0x12b93a20 */
  push32(0x12b939eeu); f_12b93a20();
  /* 12b939ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b939f1 pop ebp */
  EBP = (pop32());
  /* 12b939f2 ret  */
  ESPCHK(0x12b939d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a00 @ 0x12b93a00 (27 bytes, 13 insns) */
void f_12b93a00(void) {
  FTRACE(0x12b93a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93a01 mov ebp, esp */
  EBP = (ESP);
  /* 12b93a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93a07 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b93a09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93a0c push eax */
  push32((uint32_t)(EAX));
  /* 12b93a0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93a10 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93a11 call 0x12b93a20 */
  push32(0x12b93a16u); f_12b93a20();
  /* 12b93a16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93a19 pop ebp */
  EBP = (pop32());
  /* 12b93a1a ret  */
  ESPCHK(0x12b93a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a20 @ 0x12b93a20 (94 bytes, 38 insns) */
void f_12b93a20(void) {
  FTRACE(0x12b93a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93a21 mov ebp, esp */
  EBP = (ESP);
  /* 12b93a23 push ecx */
  push32((uint32_t)(ECX));
L_12b93a24:;
  /* 12b93a24 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b93a26 call 0x12b973d0 */
  push32(0x12b93a2bu); f_12b973d0();
  /* 12b93a2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93a2e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b93a31 push eax */
  push32((uint32_t)(EAX));
  /* 12b93a32 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b93a35 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93a36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b93a39 push edx */
  push32((uint32_t)(EDX));
  /* 12b93a3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93a3d push eax */
  push32((uint32_t)(EAX));
  /* 12b93a3e call 0x12b93aa0 */
  push32(0x12b93a43u); f_12b93aa0();
  /* 12b93a43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93a46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b93a49 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b93a4b call 0x12b97470 */
  push32(0x12b93a50u); f_12b97470();
  /* 12b93a50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93a53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93a57 jne 0x12b93a5f */
  if (!C.zf) goto L_12b93a5f;
  /* 12b93a59 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93a5d jne 0x12b93a64 */
  if (!C.zf) goto L_12b93a64;
L_12b93a5f:;
  /* 12b93a5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93a62 jmp 0x12b93a7a */
  goto L_12b93a7a;
L_12b93a64:;
  /* 12b93a64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93a67 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93a68 call 0x12b97710 */
  push32(0x12b93a6du); f_12b97710();
  /* 12b93a6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93a70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b93a72 jne 0x12b93a78 */
  if (!C.zf) goto L_12b93a78;
  /* 12b93a74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b93a76 jmp 0x12b93a7a */
  goto L_12b93a7a;
L_12b93a78:;
  /* 12b93a78 jmp 0x12b93a24 */
  goto L_12b93a24;
L_12b93a7a:;
  /* 12b93a7a mov esp, ebp */
  ESP = (EBP);
  /* 12b93a7c pop ebp */
  EBP = (pop32());
  /* 12b93a7d ret  */
  ESPCHK(0x12b93a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a80 @ 0x12b93a80 (23 bytes, 11 insns) */
void f_12b93a80(void) {
  FTRACE(0x12b93a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93a81 mov ebp, esp */
  EBP = (ESP);
  /* 12b93a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93a87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b93a89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93a8c push eax */
  push32((uint32_t)(EAX));
  /* 12b93a8d call 0x12b93aa0 */
  push32(0x12b93a92u); f_12b93aa0();
  /* 12b93a92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93a95 pop ebp */
  EBP = (pop32());
  /* 12b93a96 ret  */
  ESPCHK(0x12b93a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003aa0 @ 0x12b93aa0 (787 bytes, 254 insns) */
void f_12b93aa0(void) {
  FTRACE(0x12b93aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12b93aa3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b93aa6 push ebx */
  push32((uint32_t)(EBX));
  /* 12b93aa7 push esi */
  push32((uint32_t)(ESI));
  /* 12b93aa8 push edi */
  push32((uint32_t)(EDI));
  /* 12b93aa9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12b93ab0 mov eax, dword ptr [0x12bbda84] */
  EAX = (r32((uint32_t)(0x12bbda84)));
  /* 12b93ab5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12b93ab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b93aba je 0x12b93aec */
  if (C.zf) goto L_12b93aec;
L_12b93abc:;
  /* 12b93abc call 0x12b94b70 */
  push32(0x12b93ac1u); f_12b94b70();
  /* 12b93ac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b93ac3 jne 0x12b93ae6 */
  if (!C.zf) goto L_12b93ae6;
  /* 12b93ac5 push 0x12bbacbc */
  push32((uint32_t)(0x12bbacbcu));
  /* 12b93aca push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93acc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12b93ad1 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b93ad6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b93ad8 call 0x12b92a90 */
  push32(0x12b93addu); f_12b92a90();
  /* 12b93add add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93ae0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93ae3 jne 0x12b93ae6 */
  if (!C.zf) goto L_12b93ae6;
  /* 12b93ae5 int3  */
  x86_unimpl("int3 @ 0x12b93ae5");
L_12b93ae6:;
  /* 12b93ae6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b93ae8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b93aea jne 0x12b93abc */
  if (!C.zf) goto L_12b93abc;
L_12b93aec:;
  /* 12b93aec mov edx, dword ptr [0x12bbda88] */
  EDX = (r32((uint32_t)(0x12bbda88)));
  /* 12b93af2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12b93af5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b93af8 cmp eax, dword ptr [0x12bbda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93afe jne 0x12b93b01 */
  if (!C.zf) goto L_12b93b01;
  /* 12b93b00 int3  */
  x86_unimpl("int3 @ 0x12b93b00");
L_12b93b01:;
  /* 12b93b01 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b93b04 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93b05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b93b08 push edx */
  push32((uint32_t)(EDX));
  /* 12b93b09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b93b0c push eax */
  push32((uint32_t)(EAX));
  /* 12b93b0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93b10 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93b11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93b14 push edx */
  push32((uint32_t)(EDX));
  /* 12b93b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93b17 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b93b19 call dword ptr [0x12bbdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbdc90))), 0x12b93b1fu);
  /* 12b93b1f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93b22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b93b24 jne 0x12b93b84 */
  if (!C.zf) goto L_12b93b84;
  /* 12b93b26 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93b2a je 0x12b93b57 */
  if (C.zf) goto L_12b93b57;
L_12b93b2c:;
  /* 12b93b2c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b93b2f push eax */
  push32((uint32_t)(EAX));
  /* 12b93b30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b93b33 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93b34 push 0x12bbac78 */
  push32((uint32_t)(0x12bbac78u));
  /* 12b93b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93b41 call 0x12b92a90 */
  push32(0x12b93b46u); f_12b92a90();
  /* 12b93b46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93b49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93b4c jne 0x12b93b4f */
  if (!C.zf) goto L_12b93b4f;
  /* 12b93b4e int3  */
  x86_unimpl("int3 @ 0x12b93b4e");
L_12b93b4f:;
  /* 12b93b4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b93b51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b93b53 jne 0x12b93b2c */
  if (!C.zf) goto L_12b93b2c;
  /* 12b93b55 jmp 0x12b93b7d */
  goto L_12b93b7d;
L_12b93b57:;
  /* 12b93b57 push 0x12bbac54 */
  push32((uint32_t)(0x12bbac54u));
  /* 12b93b5c push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b93b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93b69 call 0x12b92a90 */
  push32(0x12b93b6eu); f_12b92a90();
  /* 12b93b6e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93b71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93b74 jne 0x12b93b77 */
  if (!C.zf) goto L_12b93b77;
  /* 12b93b76 int3  */
  x86_unimpl("int3 @ 0x12b93b76");
L_12b93b77:;
  /* 12b93b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b93b79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b93b7b jne 0x12b93b57 */
  if (!C.zf) goto L_12b93b57;
L_12b93b7d:;
  /* 12b93b7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b93b7f jmp 0x12b93dac */
  goto L_12b93dac;
L_12b93b84:;
  /* 12b93b84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93b87 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b93b8d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93b90 je 0x12b93ba6 */
  if (C.zf) goto L_12b93ba6;
  /* 12b93b92 mov edx, dword ptr [0x12bbda84] */
  EDX = (r32((uint32_t)(0x12bbda84)));
  /* 12b93b98 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12b93b9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b93b9d jne 0x12b93ba6 */
  if (!C.zf) goto L_12b93ba6;
  /* 12b93b9f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12b93ba6:;
  /* 12b93ba6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93baa ja 0x12b93bb7 */
  if ((!C.cf&&!C.zf)) goto L_12b93bb7;
  /* 12b93bac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93baf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93bb2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93bb5 jbe 0x12b93be3 */
  if ((C.cf||C.zf)) goto L_12b93be3;
L_12b93bb7:;
  /* 12b93bb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93bba push ecx */
  push32((uint32_t)(ECX));
  /* 12b93bbb push 0x12bbac2c */
  push32((uint32_t)(0x12bbac2cu));
  /* 12b93bc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93bc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93bc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93bc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b93bc8 call 0x12b92a90 */
  push32(0x12b93bcdu); f_12b92a90();
  /* 12b93bcd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93bd0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93bd3 jne 0x12b93bd6 */
  if (!C.zf) goto L_12b93bd6;
  /* 12b93bd5 int3  */
  x86_unimpl("int3 @ 0x12b93bd5");
L_12b93bd6:;
  /* 12b93bd6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b93bd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b93bda jne 0x12b93bb7 */
  if (!C.zf) goto L_12b93bb7;
  /* 12b93bdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b93bde jmp 0x12b93dac */
  goto L_12b93dac;
L_12b93be3:;
  /* 12b93be3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93be6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b93beb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93bee je 0x12b93c30 */
  if (C.zf) goto L_12b93c30;
  /* 12b93bf0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93bf4 je 0x12b93c30 */
  if (C.zf) goto L_12b93c30;
  /* 12b93bf6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93bf9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b93bff cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93c02 je 0x12b93c30 */
  if (C.zf) goto L_12b93c30;
  /* 12b93c04 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93c08 je 0x12b93c30 */
  if (C.zf) goto L_12b93c30;
L_12b93c0a:;
  /* 12b93c0a push 0x12bbabf8 */
  push32((uint32_t)(0x12bbabf8u));
  /* 12b93c0f push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b93c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93c1a push 1 */
  push32((uint32_t)(0x1u));
  /* 12b93c1c call 0x12b92a90 */
  push32(0x12b93c21u); f_12b92a90();
  /* 12b93c21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93c24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93c27 jne 0x12b93c2a */
  if (!C.zf) goto L_12b93c2a;
  /* 12b93c29 int3  */
  x86_unimpl("int3 @ 0x12b93c29");
L_12b93c2a:;
  /* 12b93c2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b93c2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b93c2e jne 0x12b93c0a */
  if (!C.zf) goto L_12b93c0a;
L_12b93c30:;
  /* 12b93c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93c33 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93c36 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12b93c39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b93c3c push ecx */
  push32((uint32_t)(ECX));
  /* 12b93c3d call 0x12b97820 */
  push32(0x12b93c42u); f_12b97820();
  /* 12b93c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93c45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b93c48 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93c4c jne 0x12b93c55 */
  if (!C.zf) goto L_12b93c55;
  /* 12b93c4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b93c50 jmp 0x12b93dac */
  goto L_12b93dac;
L_12b93c55:;
  /* 12b93c55 mov edx, dword ptr [0x12bbda88] */
  EDX = (r32((uint32_t)(0x12bbda88)));
  /* 12b93c5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93c5e mov dword ptr [0x12bbda88], edx */
  w32((uint32_t)(0x12bbda88), (EDX));
  /* 12b93c64 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93c68 je 0x12b93cb3 */
  if (C.zf) goto L_12b93cb3;
  /* 12b93c6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93c6d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12b93c73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93c76 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12b93c7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93c80 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12b93c87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93c8a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12b93c91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93c94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93c97 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12b93c9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93c9d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12b93ca4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93ca7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12b93cae jmp 0x12b93d53 */
  goto L_12b93d53;
L_12b93cb3:;
  /* 12b93cb3 mov edx, dword ptr [0x12bbf4d0] */
  EDX = (r32((uint32_t)(0x12bbf4d0)));
  /* 12b93cb9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93cbc mov dword ptr [0x12bbf4d0], edx */
  w32((uint32_t)(0x12bbf4d0), (EDX));
  /* 12b93cc2 mov eax, dword ptr [0x12bbf4d8] */
  EAX = (r32((uint32_t)(0x12bbf4d8)));
  /* 12b93cc7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93cca mov dword ptr [0x12bbf4d8], eax */
  w32((uint32_t)(0x12bbf4d8), (EAX));
  /* 12b93ccf mov ecx, dword ptr [0x12bbf4d8] */
  ECX = (r32((uint32_t)(0x12bbf4d8)));
  /* 12b93cd5 cmp ecx, dword ptr [0x12bbf4dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bbf4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93cdb jbe 0x12b93ce9 */
  if ((C.cf||C.zf)) goto L_12b93ce9;
  /* 12b93cdd mov edx, dword ptr [0x12bbf4d8] */
  EDX = (r32((uint32_t)(0x12bbf4d8)));
  /* 12b93ce3 mov dword ptr [0x12bbf4dc], edx */
  w32((uint32_t)(0x12bbf4dc), (EDX));
L_12b93ce9:;
  /* 12b93ce9 cmp dword ptr [0x12bbf4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93cf0 je 0x12b93cff */
  if (C.zf) goto L_12b93cff;
  /* 12b93cf2 mov eax, dword ptr [0x12bbf4d4] */
  EAX = (r32((uint32_t)(0x12bbf4d4)));
  /* 12b93cf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93cfa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12b93cfd jmp 0x12b93d08 */
  goto L_12b93d08;
L_12b93cff:;
  /* 12b93cff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93d02 mov dword ptr [0x12bbf4cc], edx */
  w32((uint32_t)(0x12bbf4cc), (EDX));
L_12b93d08:;
  /* 12b93d08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93d0b mov ecx, dword ptr [0x12bbf4d4] */
  ECX = (r32((uint32_t)(0x12bbf4d4)));
  /* 12b93d11 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12b93d13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93d16 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12b93d1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93d20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b93d23 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12b93d26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93d29 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b93d2c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12b93d2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93d32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93d35 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12b93d38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93d3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93d3e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12b93d41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93d44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b93d47 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12b93d4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93d4d mov dword ptr [0x12bbf4d4], ecx */
  w32((uint32_t)(0x12bbf4d4), (ECX));
L_12b93d53:;
  /* 12b93d53 push 4 */
  push32((uint32_t)(0x4u));
  /* 12b93d55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b93d57 mov dl, byte ptr [0x12bbda90] */
  DL = (r8((uint32_t)(0x12bbda90)));
  /* 12b93d5d push edx */
  push32((uint32_t)(EDX));
  /* 12b93d5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93d61 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93d64 push eax */
  push32((uint32_t)(EAX));
  /* 12b93d65 call 0x12b97740 */
  push32(0x12b93d6au); f_12b97740();
  /* 12b93d6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93d6d push 4 */
  push32((uint32_t)(0x4u));
  /* 12b93d6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b93d71 mov cl, byte ptr [0x12bbda90] */
  CL = (r8((uint32_t)(0x12bbda90)));
  /* 12b93d77 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93d78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93d7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93d7e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12b93d82 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93d83 call 0x12b97740 */
  push32(0x12b93d88u); f_12b97740();
  /* 12b93d88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93d8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93d8e push edx */
  push32((uint32_t)(EDX));
  /* 12b93d8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b93d91 mov al, byte ptr [0x12bbda92] */
  AL = (r8((uint32_t)(0x12bbda92)));
  /* 12b93d96 push eax */
  push32((uint32_t)(EAX));
  /* 12b93d97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93d9a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93d9d push ecx */
  push32((uint32_t)(ECX));
  /* 12b93d9e call 0x12b97740 */
  push32(0x12b93da3u); f_12b97740();
  /* 12b93da3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93da6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93da9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12b93dac:;
  /* 12b93dac pop edi */
  EDI = (pop32());
  /* 12b93dad pop esi */
  ESI = (pop32());
  /* 12b93dae pop ebx */
  EBX = (pop32());
  /* 12b93daf mov esp, ebp */
  ESP = (EBP);
  /* 12b93db1 pop ebp */
  EBP = (pop32());
  /* 12b93db2 ret  */
  ESPCHK(0x12b93aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dc0 @ 0x12b93dc0 (27 bytes, 13 insns) */
void f_12b93dc0(void) {
  FTRACE(0x12b93dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12b93dc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93dc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b93dc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93dcc push eax */
  push32((uint32_t)(EAX));
  /* 12b93dcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93dd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93dd1 call 0x12b93de0 */
  push32(0x12b93dd6u); f_12b93de0();
  /* 12b93dd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93dd9 pop ebp */
  EBP = (pop32());
  /* 12b93dda ret  */
  ESPCHK(0x12b93dc0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12b93de0 (96 bytes, 37 insns) */
void f_12b93de0(void) {
  FTRACE(0x12b93de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93de1 mov ebp, esp */
  EBP = (ESP);
  /* 12b93de3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b93de6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93de9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b93ded mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12b93df0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b93df3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93df4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b93df7 push edx */
  push32((uint32_t)(EDX));
  /* 12b93df8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b93dfb push eax */
  push32((uint32_t)(EAX));
  /* 12b93dfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93dff push ecx */
  push32((uint32_t)(ECX));
  /* 12b93e00 call 0x12b939d0 */
  push32(0x12b93e05u); f_12b939d0();
  /* 12b93e05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93e08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b93e0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93e0f je 0x12b93e39 */
  if (C.zf) goto L_12b93e39;
  /* 12b93e11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b93e14 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12b93e17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b93e1a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93e1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b93e20:;
  /* 12b93e20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b93e23 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93e26 jae 0x12b93e39 */
  if (!C.cf) goto L_12b93e39;
  /* 12b93e28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b93e2b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12b93e2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b93e31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93e34 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b93e37 jmp 0x12b93e20 */
  goto L_12b93e20;
L_12b93e39:;
  /* 12b93e39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b93e3c mov esp, ebp */
  ESP = (EBP);
  /* 12b93e3e pop ebp */
  EBP = (pop32());
  /* 12b93e3f ret  */
  ESPCHK(0x12b93de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e40 @ 0x12b93e40 (27 bytes, 13 insns) */
void f_12b93e40(void) {
  FTRACE(0x12b93e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93e41 mov ebp, esp */
  EBP = (ESP);
  /* 12b93e43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93e47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b93e49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93e4c push eax */
  push32((uint32_t)(EAX));
  /* 12b93e4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93e50 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93e51 call 0x12b93e60 */
  push32(0x12b93e56u); f_12b93e60();
  /* 12b93e56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93e59 pop ebp */
  EBP = (pop32());
  /* 12b93e5a ret  */
  ESPCHK(0x12b93e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e60 @ 0x12b93e60 (64 bytes, 27 insns) */
void f_12b93e60(void) {
  FTRACE(0x12b93e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93e61 mov ebp, esp */
  EBP = (ESP);
  /* 12b93e63 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93e64 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b93e66 call 0x12b973d0 */
  push32(0x12b93e6bu); f_12b973d0();
  /* 12b93e6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93e6e push 1 */
  push32((uint32_t)(0x1u));
  /* 12b93e70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b93e73 push eax */
  push32((uint32_t)(EAX));
  /* 12b93e74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b93e77 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93e78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b93e7b push edx */
  push32((uint32_t)(EDX));
  /* 12b93e7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93e7f push eax */
  push32((uint32_t)(EAX));
  /* 12b93e80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93e83 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93e84 call 0x12b93ea0 */
  push32(0x12b93e89u); f_12b93ea0();
  /* 12b93e89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93e8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b93e8f push 9 */
  push32((uint32_t)(0x9u));
  /* 12b93e91 call 0x12b97470 */
  push32(0x12b93e96u); f_12b97470();
  /* 12b93e96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93e99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b93e9c mov esp, ebp */
  ESP = (EBP);
  /* 12b93e9e pop ebp */
  EBP = (pop32());
  /* 12b93e9f ret  */
  ESPCHK(0x12b93e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ea0 @ 0x12b93ea0 (1297 bytes, 431 insns) */
void f_12b93ea0(void) {
  FTRACE(0x12b93ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b93ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b93ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12b93ea3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b93ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 12b93ea7 push esi */
  push32((uint32_t)(ESI));
  /* 12b93ea8 push edi */
  push32((uint32_t)(EDI));
  /* 12b93ea9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12b93eb0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93eb4 jne 0x12b93ed3 */
  if (!C.zf) goto L_12b93ed3;
  /* 12b93eb6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b93eb9 push eax */
  push32((uint32_t)(EAX));
  /* 12b93eba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b93ebd push ecx */
  push32((uint32_t)(ECX));
  /* 12b93ebe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b93ec1 push edx */
  push32((uint32_t)(EDX));
  /* 12b93ec2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93ec5 push eax */
  push32((uint32_t)(EAX));
  /* 12b93ec6 call 0x12b939d0 */
  push32(0x12b93ecbu); f_12b939d0();
  /* 12b93ecb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93ece jmp 0x12b943aa */
  goto L_12b943aa;
L_12b93ed3:;
  /* 12b93ed3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93ed7 je 0x12b93ef6 */
  if (C.zf) goto L_12b93ef6;
  /* 12b93ed9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93edd jne 0x12b93ef6 */
  if (!C.zf) goto L_12b93ef6;
  /* 12b93edf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b93ee2 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93ee3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93ee6 push edx */
  push32((uint32_t)(EDX));
  /* 12b93ee7 call 0x12b94460 */
  push32(0x12b93eecu); f_12b94460();
  /* 12b93eec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93eef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b93ef1 jmp 0x12b943aa */
  goto L_12b943aa;
L_12b93ef6:;
  /* 12b93ef6 mov eax, dword ptr [0x12bbda84] */
  EAX = (r32((uint32_t)(0x12bbda84)));
  /* 12b93efb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12b93efe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b93f00 je 0x12b93f32 */
  if (C.zf) goto L_12b93f32;
L_12b93f02:;
  /* 12b93f02 call 0x12b94b70 */
  push32(0x12b93f07u); f_12b94b70();
  /* 12b93f07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b93f09 jne 0x12b93f2c */
  if (!C.zf) goto L_12b93f2c;
  /* 12b93f0b push 0x12bbacbc */
  push32((uint32_t)(0x12bbacbcu));
  /* 12b93f10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93f12 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12b93f17 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b93f1c push 2 */
  push32((uint32_t)(0x2u));
  /* 12b93f1e call 0x12b92a90 */
  push32(0x12b93f23u); f_12b92a90();
  /* 12b93f23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93f26 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93f29 jne 0x12b93f2c */
  if (!C.zf) goto L_12b93f2c;
  /* 12b93f2b int3  */
  x86_unimpl("int3 @ 0x12b93f2b");
L_12b93f2c:;
  /* 12b93f2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b93f2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b93f30 jne 0x12b93f02 */
  if (!C.zf) goto L_12b93f02;
L_12b93f32:;
  /* 12b93f32 mov edx, dword ptr [0x12bbda88] */
  EDX = (r32((uint32_t)(0x12bbda88)));
  /* 12b93f38 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12b93f3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b93f3e cmp eax, dword ptr [0x12bbda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93f44 jne 0x12b93f47 */
  if (!C.zf) goto L_12b93f47;
  /* 12b93f46 int3  */
  x86_unimpl("int3 @ 0x12b93f46");
L_12b93f47:;
  /* 12b93f47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b93f4a push ecx */
  push32((uint32_t)(ECX));
  /* 12b93f4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b93f4e push edx */
  push32((uint32_t)(EDX));
  /* 12b93f4f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b93f52 push eax */
  push32((uint32_t)(EAX));
  /* 12b93f53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b93f56 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93f57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93f5a push edx */
  push32((uint32_t)(EDX));
  /* 12b93f5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b93f5e push eax */
  push32((uint32_t)(EAX));
  /* 12b93f5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12b93f61 call dword ptr [0x12bbdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbdc90))), 0x12b93f67u);
  /* 12b93f67 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93f6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b93f6c jne 0x12b93fcc */
  if (!C.zf) goto L_12b93fcc;
  /* 12b93f6e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93f72 je 0x12b93f9f */
  if (C.zf) goto L_12b93f9f;
L_12b93f74:;
  /* 12b93f74 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b93f77 push ecx */
  push32((uint32_t)(ECX));
  /* 12b93f78 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b93f7b push edx */
  push32((uint32_t)(EDX));
  /* 12b93f7c push 0x12bbae38 */
  push32((uint32_t)(0x12bbae38u));
  /* 12b93f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93f89 call 0x12b92a90 */
  push32(0x12b93f8eu); f_12b92a90();
  /* 12b93f8e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93f91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93f94 jne 0x12b93f97 */
  if (!C.zf) goto L_12b93f97;
  /* 12b93f96 int3  */
  x86_unimpl("int3 @ 0x12b93f96");
L_12b93f97:;
  /* 12b93f97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b93f99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b93f9b jne 0x12b93f74 */
  if (!C.zf) goto L_12b93f74;
  /* 12b93f9d jmp 0x12b93fc5 */
  goto L_12b93fc5;
L_12b93f9f:;
  /* 12b93f9f push 0x12bbae14 */
  push32((uint32_t)(0x12bbae14u));
  /* 12b93fa4 push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b93fa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93fab push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93fad push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93faf push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93fb1 call 0x12b92a90 */
  push32(0x12b93fb6u); f_12b92a90();
  /* 12b93fb6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93fb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93fbc jne 0x12b93fbf */
  if (!C.zf) goto L_12b93fbf;
  /* 12b93fbe int3  */
  x86_unimpl("int3 @ 0x12b93fbe");
L_12b93fbf:;
  /* 12b93fbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b93fc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b93fc3 jne 0x12b93f9f */
  if (!C.zf) goto L_12b93f9f;
L_12b93fc5:;
  /* 12b93fc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b93fc7 jmp 0x12b943aa */
  goto L_12b943aa;
L_12b93fcc:;
  /* 12b93fcc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93fd0 jbe 0x12b93ffe */
  if ((C.cf||C.zf)) goto L_12b93ffe;
L_12b93fd2:;
  /* 12b93fd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b93fd5 push edx */
  push32((uint32_t)(EDX));
  /* 12b93fd6 push 0x12bbade4 */
  push32((uint32_t)(0x12bbade4u));
  /* 12b93fdb push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93fdd push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 12b93fe1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b93fe3 call 0x12b92a90 */
  push32(0x12b93fe8u); f_12b92a90();
  /* 12b93fe8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b93feb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b93fee jne 0x12b93ff1 */
  if (!C.zf) goto L_12b93ff1;
  /* 12b93ff0 int3  */
  x86_unimpl("int3 @ 0x12b93ff0");
L_12b93ff1:;
  /* 12b93ff1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b93ff3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b93ff5 jne 0x12b93fd2 */
  if (!C.zf) goto L_12b93fd2;
  /* 12b93ff7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b93ff9 jmp 0x12b943aa */
  goto L_12b943aa;
L_12b93ffe:;
  /* 12b93ffe cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94002 je 0x12b94046 */
  if (C.zf) goto L_12b94046;
  /* 12b94004 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b94007 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9400d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94010 je 0x12b94046 */
  if (C.zf) goto L_12b94046;
  /* 12b94012 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b94015 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9401b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9401e je 0x12b94046 */
  if (C.zf) goto L_12b94046;
L_12b94020:;
  /* 12b94020 push 0x12bbabf8 */
  push32((uint32_t)(0x12bbabf8u));
  /* 12b94025 push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b9402a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9402c push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9402e push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94030 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b94032 call 0x12b92a90 */
  push32(0x12b94037u); f_12b92a90();
  /* 12b94037 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9403a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9403d jne 0x12b94040 */
  if (!C.zf) goto L_12b94040;
  /* 12b9403f int3  */
  x86_unimpl("int3 @ 0x12b9403f");
L_12b94040:;
  /* 12b94040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94042 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94044 jne 0x12b94020 */
  if (!C.zf) goto L_12b94020;
L_12b94046:;
  /* 12b94046 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94049 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9404a call 0x12b94fd0 */
  push32(0x12b9404fu); f_12b94fd0();
  /* 12b9404f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94052 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94054 jne 0x12b94077 */
  if (!C.zf) goto L_12b94077;
  /* 12b94056 push 0x12bbadc0 */
  push32((uint32_t)(0x12bbadc0u));
  /* 12b9405b push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9405d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12b94062 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b94067 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b94069 call 0x12b92a90 */
  push32(0x12b9406eu); f_12b92a90();
  /* 12b9406e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94071 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94074 jne 0x12b94077 */
  if (!C.zf) goto L_12b94077;
  /* 12b94076 int3  */
  x86_unimpl("int3 @ 0x12b94076");
L_12b94077:;
  /* 12b94077 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b94079 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9407b jne 0x12b94046 */
  if (!C.zf) goto L_12b94046;
  /* 12b9407d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94080 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b94083 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b94086 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94089 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9408d jne 0x12b94096 */
  if (!C.zf) goto L_12b94096;
  /* 12b9408f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12b94096:;
  /* 12b94096 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9409a je 0x12b940da */
  if (C.zf) goto L_12b940da;
L_12b9409c:;
  /* 12b9409c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9409f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b940a6 jne 0x12b940b1 */
  if (!C.zf) goto L_12b940b1;
  /* 12b940a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b940ab cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b940af je 0x12b940d2 */
  if (C.zf) goto L_12b940d2;
L_12b940b1:;
  /* 12b940b1 push 0x12bbad78 */
  push32((uint32_t)(0x12bbad78u));
  /* 12b940b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b940b8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12b940bd push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b940c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b940c4 call 0x12b92a90 */
  push32(0x12b940c9u); f_12b92a90();
  /* 12b940c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b940cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b940cf jne 0x12b940d2 */
  if (!C.zf) goto L_12b940d2;
  /* 12b940d1 int3  */
  x86_unimpl("int3 @ 0x12b940d1");
L_12b940d2:;
  /* 12b940d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b940d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b940d6 jne 0x12b9409c */
  if (!C.zf) goto L_12b9409c;
  /* 12b940d8 jmp 0x12b9413e */
  goto L_12b9413e;
L_12b940da:;
  /* 12b940da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b940dd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b940e0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b940e5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b940e8 jne 0x12b940ff */
  if (!C.zf) goto L_12b940ff;
  /* 12b940ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b940ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b940f3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b940f6 jne 0x12b940ff */
  if (!C.zf) goto L_12b940ff;
  /* 12b940f8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12b940ff:;
  /* 12b940ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94102 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b94105 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9410a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9410d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b94113 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94115 je 0x12b94138 */
  if (C.zf) goto L_12b94138;
  /* 12b94117 push 0x12bbad3c */
  push32((uint32_t)(0x12bbad3cu));
  /* 12b9411c push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9411e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12b94123 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b94128 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9412a call 0x12b92a90 */
  push32(0x12b9412fu); f_12b92a90();
  /* 12b9412f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94132 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94135 jne 0x12b94138 */
  if (!C.zf) goto L_12b94138;
  /* 12b94137 int3  */
  x86_unimpl("int3 @ 0x12b94137");
L_12b94138:;
  /* 12b94138 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9413a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9413c jne 0x12b940ff */
  if (!C.zf) goto L_12b940ff;
L_12b9413e:;
  /* 12b9413e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94142 je 0x12b94169 */
  if (C.zf) goto L_12b94169;
  /* 12b94144 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b94147 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9414a push eax */
  push32((uint32_t)(EAX));
  /* 12b9414b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9414e push ecx */
  push32((uint32_t)(ECX));
  /* 12b9414f call 0x12b97950 */
  push32(0x12b94154u); f_12b97950();
  /* 12b94154 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94157 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b9415a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9415e jne 0x12b94167 */
  if (!C.zf) goto L_12b94167;
  /* 12b94160 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94162 jmp 0x12b943aa */
  goto L_12b943aa;
L_12b94167:;
  /* 12b94167 jmp 0x12b9418c */
  goto L_12b9418c;
L_12b94169:;
  /* 12b94169 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9416c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9416f push edx */
  push32((uint32_t)(EDX));
  /* 12b94170 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94173 push eax */
  push32((uint32_t)(EAX));
  /* 12b94174 call 0x12b978a0 */
  push32(0x12b94179u); f_12b978a0();
  /* 12b94179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9417c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b9417f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94183 jne 0x12b9418c */
  if (!C.zf) goto L_12b9418c;
  /* 12b94185 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94187 jmp 0x12b943aa */
  goto L_12b943aa;
L_12b9418c:;
  /* 12b9418c mov ecx, dword ptr [0x12bbda88] */
  ECX = (r32((uint32_t)(0x12bbda88)));
  /* 12b94192 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94195 mov dword ptr [0x12bbda88], ecx */
  w32((uint32_t)(0x12bbda88), (ECX));
  /* 12b9419b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9419f jne 0x12b941f7 */
  if (!C.zf) goto L_12b941f7;
  /* 12b941a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b941a4 mov eax, dword ptr [0x12bbf4d0] */
  EAX = (r32((uint32_t)(0x12bbf4d0)));
  /* 12b941a9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b941ac mov dword ptr [0x12bbf4d0], eax */
  w32((uint32_t)(0x12bbf4d0), (EAX));
  /* 12b941b1 mov ecx, dword ptr [0x12bbf4d0] */
  ECX = (r32((uint32_t)(0x12bbf4d0)));
  /* 12b941b7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b941ba mov dword ptr [0x12bbf4d0], ecx */
  w32((uint32_t)(0x12bbf4d0), (ECX));
  /* 12b941c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b941c3 mov eax, dword ptr [0x12bbf4d8] */
  EAX = (r32((uint32_t)(0x12bbf4d8)));
  /* 12b941c8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b941cb mov dword ptr [0x12bbf4d8], eax */
  w32((uint32_t)(0x12bbf4d8), (EAX));
  /* 12b941d0 mov ecx, dword ptr [0x12bbf4d8] */
  ECX = (r32((uint32_t)(0x12bbf4d8)));
  /* 12b941d6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b941d9 mov dword ptr [0x12bbf4d8], ecx */
  w32((uint32_t)(0x12bbf4d8), (ECX));
  /* 12b941df mov edx, dword ptr [0x12bbf4d8] */
  EDX = (r32((uint32_t)(0x12bbf4d8)));
  /* 12b941e5 cmp edx, dword ptr [0x12bbf4dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12bbf4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b941eb jbe 0x12b941f7 */
  if ((C.cf||C.zf)) goto L_12b941f7;
  /* 12b941ed mov eax, dword ptr [0x12bbf4d8] */
  EAX = (r32((uint32_t)(0x12bbf4d8)));
  /* 12b941f2 mov dword ptr [0x12bbf4dc], eax */
  w32((uint32_t)(0x12bbf4dc), (EAX));
L_12b941f7:;
  /* 12b941f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b941fa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b941fd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b94200 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b94203 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b94206 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94209 jbe 0x12b9422f */
  if ((C.cf||C.zf)) goto L_12b9422f;
  /* 12b9420b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9420e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b94211 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b94214 push edx */
  push32((uint32_t)(EDX));
  /* 12b94215 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94217 mov al, byte ptr [0x12bbda92] */
  AL = (r8((uint32_t)(0x12bbda92)));
  /* 12b9421c push eax */
  push32((uint32_t)(EAX));
  /* 12b9421d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b94220 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94223 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94226 push edx */
  push32((uint32_t)(EDX));
  /* 12b94227 call 0x12b97740 */
  push32(0x12b9422cu); f_12b97740();
  /* 12b9422c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9422f:;
  /* 12b9422f push 4 */
  push32((uint32_t)(0x4u));
  /* 12b94231 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94233 mov al, byte ptr [0x12bbda90] */
  AL = (r8((uint32_t)(0x12bbda90)));
  /* 12b94238 push eax */
  push32((uint32_t)(EAX));
  /* 12b94239 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9423c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9423f push ecx */
  push32((uint32_t)(ECX));
  /* 12b94240 call 0x12b97740 */
  push32(0x12b94245u); f_12b97740();
  /* 12b94245 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94248 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9424c jne 0x12b94269 */
  if (!C.zf) goto L_12b94269;
  /* 12b9424e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b94251 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b94254 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12b94257 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9425a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b9425d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12b94260 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b94263 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b94266 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12b94269:;
  /* 12b94269 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9426c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9426f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12b94272:;
  /* 12b94272 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94276 jne 0x12b942a7 */
  if (!C.zf) goto L_12b942a7;
  /* 12b94278 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9427c jne 0x12b94286 */
  if (!C.zf) goto L_12b94286;
  /* 12b9427e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b94281 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94284 je 0x12b942a7 */
  if (C.zf) goto L_12b942a7;
L_12b94286:;
  /* 12b94286 push 0x12bbad08 */
  push32((uint32_t)(0x12bbad08u));
  /* 12b9428b push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9428d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12b94292 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b94297 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b94299 call 0x12b92a90 */
  push32(0x12b9429eu); f_12b92a90();
  /* 12b9429e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b942a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b942a4 jne 0x12b942a7 */
  if (!C.zf) goto L_12b942a7;
  /* 12b942a6 int3  */
  x86_unimpl("int3 @ 0x12b942a6");
L_12b942a7:;
  /* 12b942a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b942a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b942ab jne 0x12b94272 */
  if (!C.zf) goto L_12b94272;
  /* 12b942ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b942b0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b942b3 je 0x12b942bb */
  if (C.zf) goto L_12b942bb;
  /* 12b942b5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b942b9 je 0x12b942c3 */
  if (C.zf) goto L_12b942c3;
L_12b942bb:;
  /* 12b942bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b942be jmp 0x12b943aa */
  goto L_12b943aa;
L_12b942c3:;
  /* 12b942c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b942c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b942c9 je 0x12b942db */
  if (C.zf) goto L_12b942db;
  /* 12b942cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b942ce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b942d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b942d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b942d6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12b942d9 jmp 0x12b94317 */
  goto L_12b94317;
L_12b942db:;
  /* 12b942db mov eax, dword ptr [0x12bbf4cc] */
  EAX = (r32((uint32_t)(0x12bbf4cc)));
  /* 12b942e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b942e3 je 0x12b94306 */
  if (C.zf) goto L_12b94306;
  /* 12b942e5 push 0x12bbacec */
  push32((uint32_t)(0x12bbacecu));
  /* 12b942ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12b942ec push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12b942f1 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b942f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b942f8 call 0x12b92a90 */
  push32(0x12b942fdu); f_12b92a90();
  /* 12b942fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94300 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94303 jne 0x12b94306 */
  if (!C.zf) goto L_12b94306;
  /* 12b94305 int3  */
  x86_unimpl("int3 @ 0x12b94305");
L_12b94306:;
  /* 12b94306 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b94308 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9430a jne 0x12b942db */
  if (!C.zf) goto L_12b942db;
  /* 12b9430c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9430f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b94312 mov dword ptr [0x12bbf4cc], eax */
  w32((uint32_t)(0x12bbf4cc), (EAX));
L_12b94317:;
  /* 12b94317 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9431a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9431e je 0x12b9432f */
  if (C.zf) goto L_12b9432f;
  /* 12b94320 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b94323 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b94326 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b94329 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b9432b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12b9432d jmp 0x12b9436a */
  goto L_12b9436a;
L_12b9432f:;
  /* 12b9432f mov eax, dword ptr [0x12bbf4d4] */
  EAX = (r32((uint32_t)(0x12bbf4d4)));
  /* 12b94334 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94337 je 0x12b9435a */
  if (C.zf) goto L_12b9435a;
  /* 12b94339 push 0x12bbacd0 */
  push32((uint32_t)(0x12bbacd0u));
  /* 12b9433e push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94340 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12b94345 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b9434a push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9434c call 0x12b92a90 */
  push32(0x12b94351u); f_12b92a90();
  /* 12b94351 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94354 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94357 jne 0x12b9435a */
  if (!C.zf) goto L_12b9435a;
  /* 12b94359 int3  */
  x86_unimpl("int3 @ 0x12b94359");
L_12b9435a:;
  /* 12b9435a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9435c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9435e jne 0x12b9432f */
  if (!C.zf) goto L_12b9432f;
  /* 12b94360 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b94363 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b94365 mov dword ptr [0x12bbf4d4], eax */
  w32((uint32_t)(0x12bbf4d4), (EAX));
L_12b9436a:;
  /* 12b9436a cmp dword ptr [0x12bbf4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94371 je 0x12b94381 */
  if (C.zf) goto L_12b94381;
  /* 12b94373 mov ecx, dword ptr [0x12bbf4d4] */
  ECX = (r32((uint32_t)(0x12bbf4d4)));
  /* 12b94379 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9437c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12b9437f jmp 0x12b94389 */
  goto L_12b94389;
L_12b94381:;
  /* 12b94381 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b94384 mov dword ptr [0x12bbf4cc], eax */
  w32((uint32_t)(0x12bbf4cc), (EAX));
L_12b94389:;
  /* 12b94389 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9438c mov edx, dword ptr [0x12bbf4d4] */
  EDX = (r32((uint32_t)(0x12bbf4d4)));
  /* 12b94392 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12b94394 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b94397 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12b9439e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b943a1 mov dword ptr [0x12bbf4d4], ecx */
  w32((uint32_t)(0x12bbf4d4), (ECX));
  /* 12b943a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12b943aa:;
  /* 12b943aa pop edi */
  EDI = (pop32());
  /* 12b943ab pop esi */
  ESI = (pop32());
  /* 12b943ac pop ebx */
  EBX = (pop32());
  /* 12b943ad mov esp, ebp */
  ESP = (EBP);
  /* 12b943af pop ebp */
  EBP = (pop32());
  /* 12b943b0 ret  */
  ESPCHK(0x12b93ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043c0 @ 0x12b943c0 (27 bytes, 13 insns) */
void f_12b943c0(void) {
  FTRACE(0x12b943c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b943c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b943c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b943c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b943c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b943c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b943c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b943cc push eax */
  push32((uint32_t)(EAX));
  /* 12b943cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b943d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12b943d1 call 0x12b943e0 */
  push32(0x12b943d6u); f_12b943e0();
  /* 12b943d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b943d9 pop ebp */
  EBP = (pop32());
  /* 12b943da ret  */
  ESPCHK(0x12b943c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043e0 @ 0x12b943e0 (64 bytes, 27 insns) */
void f_12b943e0(void) {
  FTRACE(0x12b943e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b943e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b943e1 mov ebp, esp */
  EBP = (ESP);
  /* 12b943e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b943e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b943e6 call 0x12b973d0 */
  push32(0x12b943ebu); f_12b973d0();
  /* 12b943eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b943ee push 0 */
  push32((uint32_t)(0x0u));
  /* 12b943f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b943f3 push eax */
  push32((uint32_t)(EAX));
  /* 12b943f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b943f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12b943f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b943fb push edx */
  push32((uint32_t)(EDX));
  /* 12b943fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b943ff push eax */
  push32((uint32_t)(EAX));
  /* 12b94400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94403 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94404 call 0x12b93ea0 */
  push32(0x12b94409u); f_12b93ea0();
  /* 12b94409 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9440c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9440f push 9 */
  push32((uint32_t)(0x9u));
  /* 12b94411 call 0x12b97470 */
  push32(0x12b94416u); f_12b97470();
  /* 12b94416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94419 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9441c mov esp, ebp */
  ESP = (EBP);
  /* 12b9441e pop ebp */
  EBP = (pop32());
  /* 12b9441f ret  */
  ESPCHK(0x12b943e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004420 @ 0x12b94420 (19 bytes, 9 insns) */
void f_12b94420(void) {
  FTRACE(0x12b94420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94420 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94421 mov ebp, esp */
  EBP = (ESP);
  /* 12b94423 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b94425 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94428 push eax */
  push32((uint32_t)(EAX));
  /* 12b94429 call 0x12b94460 */
  push32(0x12b9442eu); f_12b94460();
  /* 12b9442e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94431 pop ebp */
  EBP = (pop32());
  /* 12b94432 ret  */
  ESPCHK(0x12b94420u, _esp0);
  ESP += 4; return;
}

/* FUN_10004440 @ 0x12b94440 (19 bytes, 9 insns) */
void f_12b94440(void) {
  FTRACE(0x12b94440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94440 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94441 mov ebp, esp */
  EBP = (ESP);
  /* 12b94443 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b94445 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94448 push eax */
  push32((uint32_t)(EAX));
  /* 12b94449 call 0x12b94490 */
  push32(0x12b9444eu); f_12b94490();
  /* 12b9444e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94451 pop ebp */
  EBP = (pop32());
  /* 12b94452 ret  */
  ESPCHK(0x12b94440u, _esp0);
  ESP += 4; return;
}

/* FUN_10004460 @ 0x12b94460 (41 bytes, 16 insns) */
void f_12b94460(void) {
  FTRACE(0x12b94460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94460 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94461 mov ebp, esp */
  EBP = (ESP);
  /* 12b94463 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b94465 call 0x12b973d0 */
  push32(0x12b9446au); f_12b973d0();
  /* 12b9446a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9446d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b94470 push eax */
  push32((uint32_t)(EAX));
  /* 12b94471 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94474 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94475 call 0x12b94490 */
  push32(0x12b9447au); f_12b94490();
  /* 12b9447a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9447d push 9 */
  push32((uint32_t)(0x9u));
  /* 12b9447f call 0x12b97470 */
  push32(0x12b94484u); f_12b97470();
  /* 12b94484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94487 pop ebp */
  EBP = (pop32());
  /* 12b94488 ret  */
  ESPCHK(0x12b94460u, _esp0);
  ESP += 4; return;
}

/* FUN_10004490 @ 0x12b94490 (1004 bytes, 342 insns) */
void f_12b94490(void) {
  FTRACE(0x12b94490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94490 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94491 mov ebp, esp */
  EBP = (ESP);
  /* 12b94493 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94494 push ebx */
  push32((uint32_t)(EBX));
  /* 12b94495 push esi */
  push32((uint32_t)(ESI));
  /* 12b94496 push edi */
  push32((uint32_t)(EDI));
  /* 12b94497 mov eax, dword ptr [0x12bbda84] */
  EAX = (r32((uint32_t)(0x12bbda84)));
  /* 12b9449c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9449f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b944a1 je 0x12b944d3 */
  if (C.zf) goto L_12b944d3;
L_12b944a3:;
  /* 12b944a3 call 0x12b94b70 */
  push32(0x12b944a8u); f_12b94b70();
  /* 12b944a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b944aa jne 0x12b944cd */
  if (!C.zf) goto L_12b944cd;
  /* 12b944ac push 0x12bbacbc */
  push32((uint32_t)(0x12bbacbcu));
  /* 12b944b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b944b3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12b944b8 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b944bd push 2 */
  push32((uint32_t)(0x2u));
  /* 12b944bf call 0x12b92a90 */
  push32(0x12b944c4u); f_12b92a90();
  /* 12b944c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b944c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b944ca jne 0x12b944cd */
  if (!C.zf) goto L_12b944cd;
  /* 12b944cc int3  */
  x86_unimpl("int3 @ 0x12b944cc");
L_12b944cd:;
  /* 12b944cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b944cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b944d1 jne 0x12b944a3 */
  if (!C.zf) goto L_12b944a3;
L_12b944d3:;
  /* 12b944d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b944d7 jne 0x12b944de */
  if (!C.zf) goto L_12b944de;
  /* 12b944d9 jmp 0x12b94875 */
  goto L_12b94875;
L_12b944de:;
  /* 12b944de push 0 */
  push32((uint32_t)(0x0u));
  /* 12b944e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b944e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b944e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b944e7 push edx */
  push32((uint32_t)(EDX));
  /* 12b944e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b944ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b944ed push eax */
  push32((uint32_t)(EAX));
  /* 12b944ee push 3 */
  push32((uint32_t)(0x3u));
  /* 12b944f0 call dword ptr [0x12bbdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbdc90))), 0x12b944f6u);
  /* 12b944f6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b944f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b944fb jne 0x12b94528 */
  if (!C.zf) goto L_12b94528;
L_12b944fd:;
  /* 12b944fd push 0x12bbaf80 */
  push32((uint32_t)(0x12bbaf80u));
  /* 12b94502 push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b94507 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94509 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9450b push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9450d push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9450f call 0x12b92a90 */
  push32(0x12b94514u); f_12b92a90();
  /* 12b94514 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94517 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9451a jne 0x12b9451d */
  if (!C.zf) goto L_12b9451d;
  /* 12b9451c int3  */
  x86_unimpl("int3 @ 0x12b9451c");
L_12b9451d:;
  /* 12b9451d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9451f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b94521 jne 0x12b944fd */
  if (!C.zf) goto L_12b944fd;
  /* 12b94523 jmp 0x12b94875 */
  goto L_12b94875;
L_12b94528:;
  /* 12b94528 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9452b push edx */
  push32((uint32_t)(EDX));
  /* 12b9452c call 0x12b94fd0 */
  push32(0x12b94531u); f_12b94fd0();
  /* 12b94531 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94534 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94536 jne 0x12b94559 */
  if (!C.zf) goto L_12b94559;
  /* 12b94538 push 0x12bbadc0 */
  push32((uint32_t)(0x12bbadc0u));
  /* 12b9453d push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9453f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12b94544 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b94549 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9454b call 0x12b92a90 */
  push32(0x12b94550u); f_12b92a90();
  /* 12b94550 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94553 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94556 jne 0x12b94559 */
  if (!C.zf) goto L_12b94559;
  /* 12b94558 int3  */
  x86_unimpl("int3 @ 0x12b94558");
L_12b94559:;
  /* 12b94559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9455b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9455d jne 0x12b94528 */
  if (!C.zf) goto L_12b94528;
  /* 12b9455f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94562 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b94565 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b94568:;
  /* 12b94568 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9456b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b9456e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b94573 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94576 je 0x12b945bb */
  if (C.zf) goto L_12b945bb;
  /* 12b94578 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9457b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9457f je 0x12b945bb */
  if (C.zf) goto L_12b945bb;
  /* 12b94581 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94584 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b94587 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9458c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9458f je 0x12b945bb */
  if (C.zf) goto L_12b945bb;
  /* 12b94591 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94594 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94598 je 0x12b945bb */
  if (C.zf) goto L_12b945bb;
  /* 12b9459a push 0x12bbaf58 */
  push32((uint32_t)(0x12bbaf58u));
  /* 12b9459f push 0 */
  push32((uint32_t)(0x0u));
  /* 12b945a1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12b945a6 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b945ab push 2 */
  push32((uint32_t)(0x2u));
  /* 12b945ad call 0x12b92a90 */
  push32(0x12b945b2u); f_12b92a90();
  /* 12b945b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b945b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b945b8 jne 0x12b945bb */
  if (!C.zf) goto L_12b945bb;
  /* 12b945ba int3  */
  x86_unimpl("int3 @ 0x12b945ba");
L_12b945bb:;
  /* 12b945bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b945bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b945bf jne 0x12b94568 */
  if (!C.zf) goto L_12b94568;
  /* 12b945c1 mov eax, dword ptr [0x12bbda84] */
  EAX = (r32((uint32_t)(0x12bbda84)));
  /* 12b945c6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12b945c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b945cb jne 0x12b94696 */
  if (!C.zf) goto L_12b94696;
  /* 12b945d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 12b945d3 mov cl, byte ptr [0x12bbda90] */
  CL = (r8((uint32_t)(0x12bbda90)));
  /* 12b945d9 push ecx */
  push32((uint32_t)(ECX));
  /* 12b945da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b945dd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b945e0 push edx */
  push32((uint32_t)(EDX));
  /* 12b945e1 call 0x12b94ae0 */
  push32(0x12b945e6u); f_12b94ae0();
  /* 12b945e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b945e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b945eb jne 0x12b94630 */
  if (!C.zf) goto L_12b94630;
L_12b945ed:;
  /* 12b945ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b945f0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b945f3 push eax */
  push32((uint32_t)(EAX));
  /* 12b945f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b945f7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12b945fa push edx */
  push32((uint32_t)(EDX));
  /* 12b945fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b945fe mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12b94601 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b94607 mov edx, dword ptr [ecx*4 + 0x12bbda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12bbda94)));
  /* 12b9460e push edx */
  push32((uint32_t)(EDX));
  /* 12b9460f push 0x12bbaf2c */
  push32((uint32_t)(0x12bbaf2cu));
  /* 12b94614 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94616 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94618 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9461a push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9461c call 0x12b92a90 */
  push32(0x12b94621u); f_12b92a90();
  /* 12b94621 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94624 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94627 jne 0x12b9462a */
  if (!C.zf) goto L_12b9462a;
  /* 12b94629 int3  */
  x86_unimpl("int3 @ 0x12b94629");
L_12b9462a:;
  /* 12b9462a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9462c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9462e jne 0x12b945ed */
  if (!C.zf) goto L_12b945ed;
L_12b94630:;
  /* 12b94630 push 4 */
  push32((uint32_t)(0x4u));
  /* 12b94632 mov cl, byte ptr [0x12bbda90] */
  CL = (r8((uint32_t)(0x12bbda90)));
  /* 12b94638 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94639 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9463c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b9463f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94642 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12b94646 push edx */
  push32((uint32_t)(EDX));
  /* 12b94647 call 0x12b94ae0 */
  push32(0x12b9464cu); f_12b94ae0();
  /* 12b9464c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9464f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94651 jne 0x12b94696 */
  if (!C.zf) goto L_12b94696;
L_12b94653:;
  /* 12b94653 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94656 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94659 push eax */
  push32((uint32_t)(EAX));
  /* 12b9465a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9465d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12b94660 push edx */
  push32((uint32_t)(EDX));
  /* 12b94661 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94664 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12b94667 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9466d mov edx, dword ptr [ecx*4 + 0x12bbda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12bbda94)));
  /* 12b94674 push edx */
  push32((uint32_t)(EDX));
  /* 12b94675 push 0x12bbaf00 */
  push32((uint32_t)(0x12bbaf00u));
  /* 12b9467a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9467c push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9467e push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94680 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b94682 call 0x12b92a90 */
  push32(0x12b94687u); f_12b92a90();
  /* 12b94687 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9468a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9468d jne 0x12b94690 */
  if (!C.zf) goto L_12b94690;
  /* 12b9468f int3  */
  x86_unimpl("int3 @ 0x12b9468f");
L_12b94690:;
  /* 12b94690 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94692 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94694 jne 0x12b94653 */
  if (!C.zf) goto L_12b94653;
L_12b94696:;
  /* 12b94696 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94699 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9469d jne 0x12b9470b */
  if (!C.zf) goto L_12b9470b;
L_12b9469f:;
  /* 12b9469f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b946a2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b946a9 jne 0x12b946b4 */
  if (!C.zf) goto L_12b946b4;
  /* 12b946ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b946ae cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b946b2 je 0x12b946d5 */
  if (C.zf) goto L_12b946d5;
L_12b946b4:;
  /* 12b946b4 push 0x12bbaec0 */
  push32((uint32_t)(0x12bbaec0u));
  /* 12b946b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b946bb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12b946c0 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b946c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b946c7 call 0x12b92a90 */
  push32(0x12b946ccu); f_12b92a90();
  /* 12b946cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b946cf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b946d2 jne 0x12b946d5 */
  if (!C.zf) goto L_12b946d5;
  /* 12b946d4 int3  */
  x86_unimpl("int3 @ 0x12b946d4");
L_12b946d5:;
  /* 12b946d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b946d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b946d9 jne 0x12b9469f */
  if (!C.zf) goto L_12b9469f;
  /* 12b946db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b946de mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b946e1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b946e4 push eax */
  push32((uint32_t)(EAX));
  /* 12b946e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b946e7 mov cl, byte ptr [0x12bbda91] */
  CL = (r8((uint32_t)(0x12bbda91)));
  /* 12b946ed push ecx */
  push32((uint32_t)(ECX));
  /* 12b946ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b946f1 push edx */
  push32((uint32_t)(EDX));
  /* 12b946f2 call 0x12b97740 */
  push32(0x12b946f7u); f_12b97740();
  /* 12b946f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b946fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b946fd push eax */
  push32((uint32_t)(EAX));
  /* 12b946fe call 0x12b97b40 */
  push32(0x12b94703u); f_12b97b40();
  /* 12b94703 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94706 jmp 0x12b94875 */
  goto L_12b94875;
L_12b9470b:;
  /* 12b9470b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9470e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94712 jne 0x12b94721 */
  if (!C.zf) goto L_12b94721;
  /* 12b94714 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94718 jne 0x12b94721 */
  if (!C.zf) goto L_12b94721;
  /* 12b9471a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12b94721:;
  /* 12b94721 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94724 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b94727 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9472a je 0x12b9474d */
  if (C.zf) goto L_12b9474d;
  /* 12b9472c push 0x12bbaea0 */
  push32((uint32_t)(0x12bbaea0u));
  /* 12b94731 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94733 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12b94738 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b9473d push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9473f call 0x12b92a90 */
  push32(0x12b94744u); f_12b92a90();
  /* 12b94744 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94747 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9474a jne 0x12b9474d */
  if (!C.zf) goto L_12b9474d;
  /* 12b9474c int3  */
  x86_unimpl("int3 @ 0x12b9474c");
L_12b9474d:;
  /* 12b9474d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9474f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b94751 jne 0x12b94721 */
  if (!C.zf) goto L_12b94721;
  /* 12b94753 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94756 mov eax, dword ptr [0x12bbf4d8] */
  EAX = (r32((uint32_t)(0x12bbf4d8)));
  /* 12b9475b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9475e mov dword ptr [0x12bbf4d8], eax */
  w32((uint32_t)(0x12bbf4d8), (EAX));
  /* 12b94763 mov ecx, dword ptr [0x12bbda84] */
  ECX = (r32((uint32_t)(0x12bbda84)));
  /* 12b94769 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9476c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9476e jne 0x12b9484c */
  if (!C.zf) goto L_12b9484c;
  /* 12b94774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94777 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9477a je 0x12b9478c */
  if (C.zf) goto L_12b9478c;
  /* 12b9477c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9477f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b94781 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94784 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b94787 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12b9478a jmp 0x12b947ca */
  goto L_12b947ca;
L_12b9478c:;
  /* 12b9478c mov ecx, dword ptr [0x12bbf4cc] */
  ECX = (r32((uint32_t)(0x12bbf4cc)));
  /* 12b94792 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94795 je 0x12b947b8 */
  if (C.zf) goto L_12b947b8;
  /* 12b94797 push 0x12bbae88 */
  push32((uint32_t)(0x12bbae88u));
  /* 12b9479c push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9479e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12b947a3 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b947a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b947aa call 0x12b92a90 */
  push32(0x12b947afu); f_12b92a90();
  /* 12b947af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b947b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b947b5 jne 0x12b947b8 */
  if (!C.zf) goto L_12b947b8;
  /* 12b947b7 int3  */
  x86_unimpl("int3 @ 0x12b947b7");
L_12b947b8:;
  /* 12b947b8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b947ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b947bc jne 0x12b9478c */
  if (!C.zf) goto L_12b9478c;
  /* 12b947be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b947c1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b947c4 mov dword ptr [0x12bbf4cc], ecx */
  w32((uint32_t)(0x12bbf4cc), (ECX));
L_12b947ca:;
  /* 12b947ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b947cd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b947d1 je 0x12b947e2 */
  if (C.zf) goto L_12b947e2;
  /* 12b947d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b947d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b947d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b947dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b947de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12b947e0 jmp 0x12b9481f */
  goto L_12b9481f;
L_12b947e2:;
  /* 12b947e2 mov ecx, dword ptr [0x12bbf4d4] */
  ECX = (r32((uint32_t)(0x12bbf4d4)));
  /* 12b947e8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b947eb je 0x12b9480e */
  if (C.zf) goto L_12b9480e;
  /* 12b947ed push 0x12bbae70 */
  push32((uint32_t)(0x12bbae70u));
  /* 12b947f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b947f4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12b947f9 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b947fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12b94800 call 0x12b92a90 */
  push32(0x12b94805u); f_12b92a90();
  /* 12b94805 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94808 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9480b jne 0x12b9480e */
  if (!C.zf) goto L_12b9480e;
  /* 12b9480d int3  */
  x86_unimpl("int3 @ 0x12b9480d");
L_12b9480e:;
  /* 12b9480e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b94810 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b94812 jne 0x12b947e2 */
  if (!C.zf) goto L_12b947e2;
  /* 12b94814 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94817 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b94819 mov dword ptr [0x12bbf4d4], ecx */
  w32((uint32_t)(0x12bbf4d4), (ECX));
L_12b9481f:;
  /* 12b9481f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94822 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b94825 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94828 push eax */
  push32((uint32_t)(EAX));
  /* 12b94829 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9482b mov cl, byte ptr [0x12bbda91] */
  CL = (r8((uint32_t)(0x12bbda91)));
  /* 12b94831 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94832 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94835 push edx */
  push32((uint32_t)(EDX));
  /* 12b94836 call 0x12b97740 */
  push32(0x12b9483bu); f_12b97740();
  /* 12b9483b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9483e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94841 push eax */
  push32((uint32_t)(EAX));
  /* 12b94842 call 0x12b97b40 */
  push32(0x12b94847u); f_12b97b40();
  /* 12b94847 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9484a jmp 0x12b94875 */
  goto L_12b94875;
L_12b9484c:;
  /* 12b9484c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9484f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12b94856 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94859 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b9485c push eax */
  push32((uint32_t)(EAX));
  /* 12b9485d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9485f mov cl, byte ptr [0x12bbda91] */
  CL = (r8((uint32_t)(0x12bbda91)));
  /* 12b94865 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94866 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94869 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9486c push edx */
  push32((uint32_t)(EDX));
  /* 12b9486d call 0x12b97740 */
  push32(0x12b94872u); f_12b97740();
  /* 12b94872 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b94875:;
  /* 12b94875 pop edi */
  EDI = (pop32());
  /* 12b94876 pop esi */
  ESI = (pop32());
  /* 12b94877 pop ebx */
  EBX = (pop32());
  /* 12b94878 mov esp, ebp */
  ESP = (EBP);
  /* 12b9487a pop ebp */
  EBP = (pop32());
  /* 12b9487b ret  */
  ESPCHK(0x12b94490u, _esp0);
  ESP += 4; return;
}

/* FUN_10004880 @ 0x12b94880 (19 bytes, 9 insns) */
void f_12b94880(void) {
  FTRACE(0x12b94880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94880 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94881 mov ebp, esp */
  EBP = (ESP);
  /* 12b94883 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b94885 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94888 push eax */
  push32((uint32_t)(EAX));
  /* 12b94889 call 0x12b948a0 */
  push32(0x12b9488eu); f_12b948a0();
  /* 12b9488e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94891 pop ebp */
  EBP = (pop32());
  /* 12b94892 ret  */
  ESPCHK(0x12b94880u, _esp0);
  ESP += 4; return;
}

/* FUN_100048a0 @ 0x12b948a0 (342 bytes, 119 insns) */
void f_12b948a0(void) {
  FTRACE(0x12b948a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b948a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b948a1 mov ebp, esp */
  EBP = (ESP);
  /* 12b948a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b948a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12b948a7 push esi */
  push32((uint32_t)(ESI));
  /* 12b948a8 push edi */
  push32((uint32_t)(EDI));
  /* 12b948a9 mov eax, dword ptr [0x12bbda84] */
  EAX = (r32((uint32_t)(0x12bbda84)));
  /* 12b948ae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12b948b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b948b3 je 0x12b948e5 */
  if (C.zf) goto L_12b948e5;
L_12b948b5:;
  /* 12b948b5 call 0x12b94b70 */
  push32(0x12b948bau); f_12b94b70();
  /* 12b948ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b948bc jne 0x12b948df */
  if (!C.zf) goto L_12b948df;
  /* 12b948be push 0x12bbacbc */
  push32((uint32_t)(0x12bbacbcu));
  /* 12b948c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b948c5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12b948ca push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b948cf push 2 */
  push32((uint32_t)(0x2u));
  /* 12b948d1 call 0x12b92a90 */
  push32(0x12b948d6u); f_12b92a90();
  /* 12b948d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b948d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b948dc jne 0x12b948df */
  if (!C.zf) goto L_12b948df;
  /* 12b948de int3  */
  x86_unimpl("int3 @ 0x12b948de");
L_12b948df:;
  /* 12b948df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b948e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b948e3 jne 0x12b948b5 */
  if (!C.zf) goto L_12b948b5;
L_12b948e5:;
  /* 12b948e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b948e7 call 0x12b973d0 */
  push32(0x12b948ecu); f_12b973d0();
  /* 12b948ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b948ef:;
  /* 12b948ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b948f2 push edx */
  push32((uint32_t)(EDX));
  /* 12b948f3 call 0x12b94fd0 */
  push32(0x12b948f8u); f_12b94fd0();
  /* 12b948f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b948fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b948fd jne 0x12b94920 */
  if (!C.zf) goto L_12b94920;
  /* 12b948ff push 0x12bbadc0 */
  push32((uint32_t)(0x12bbadc0u));
  /* 12b94904 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94906 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12b9490b push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b94910 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b94912 call 0x12b92a90 */
  push32(0x12b94917u); f_12b92a90();
  /* 12b94917 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9491a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9491d jne 0x12b94920 */
  if (!C.zf) goto L_12b94920;
  /* 12b9491f int3  */
  x86_unimpl("int3 @ 0x12b9491f");
L_12b94920:;
  /* 12b94920 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94924 jne 0x12b948ef */
  if (!C.zf) goto L_12b948ef;
  /* 12b94926 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94929 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9492c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12b9492f:;
  /* 12b9492f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94932 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b94935 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9493a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9493d je 0x12b94982 */
  if (C.zf) goto L_12b94982;
  /* 12b9493f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94942 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94946 je 0x12b94982 */
  if (C.zf) goto L_12b94982;
  /* 12b94948 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9494b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b9494e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b94953 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94956 je 0x12b94982 */
  if (C.zf) goto L_12b94982;
  /* 12b94958 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9495b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9495f je 0x12b94982 */
  if (C.zf) goto L_12b94982;
  /* 12b94961 push 0x12bbaf58 */
  push32((uint32_t)(0x12bbaf58u));
  /* 12b94966 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94968 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12b9496d push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b94972 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b94974 call 0x12b92a90 */
  push32(0x12b94979u); f_12b92a90();
  /* 12b94979 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9497c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9497f jne 0x12b94982 */
  if (!C.zf) goto L_12b94982;
  /* 12b94981 int3  */
  x86_unimpl("int3 @ 0x12b94981");
L_12b94982:;
  /* 12b94982 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b94984 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b94986 jne 0x12b9492f */
  if (!C.zf) goto L_12b9492f;
  /* 12b94988 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9498b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9498f jne 0x12b9499e */
  if (!C.zf) goto L_12b9499e;
  /* 12b94991 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94995 jne 0x12b9499e */
  if (!C.zf) goto L_12b9499e;
  /* 12b94997 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12b9499e:;
  /* 12b9499e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b949a1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b949a5 je 0x12b949d9 */
  if (C.zf) goto L_12b949d9;
L_12b949a7:;
  /* 12b949a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b949aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b949ad cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b949b0 je 0x12b949d3 */
  if (C.zf) goto L_12b949d3;
  /* 12b949b2 push 0x12bbaea0 */
  push32((uint32_t)(0x12bbaea0u));
  /* 12b949b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b949b9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12b949be push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b949c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b949c5 call 0x12b92a90 */
  push32(0x12b949cau); f_12b92a90();
  /* 12b949ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b949cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b949d0 jne 0x12b949d3 */
  if (!C.zf) goto L_12b949d3;
  /* 12b949d2 int3  */
  x86_unimpl("int3 @ 0x12b949d2");
L_12b949d3:;
  /* 12b949d3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b949d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b949d7 jne 0x12b949a7 */
  if (!C.zf) goto L_12b949a7;
L_12b949d9:;
  /* 12b949d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b949dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b949df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b949e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b949e4 call 0x12b97470 */
  push32(0x12b949e9u); f_12b97470();
  /* 12b949e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b949ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b949ef pop edi */
  EDI = (pop32());
  /* 12b949f0 pop esi */
  ESI = (pop32());
  /* 12b949f1 pop ebx */
  EBX = (pop32());
  /* 12b949f2 mov esp, ebp */
  ESP = (EBP);
  /* 12b949f4 pop ebp */
  EBP = (pop32());
  /* 12b949f5 ret  */
  ESPCHK(0x12b948a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a00 @ 0x12b94a00 (28 bytes, 11 insns) */
void f_12b94a00(void) {
  FTRACE(0x12b94a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94a01 mov ebp, esp */
  EBP = (ESP);
  /* 12b94a03 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94a04 mov eax, dword ptr [0x12bbda8c] */
  EAX = (r32((uint32_t)(0x12bbda8c)));
  /* 12b94a09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b94a0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94a0f mov dword ptr [0x12bbda8c], ecx */
  w32((uint32_t)(0x12bbda8c), (ECX));
  /* 12b94a15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94a18 mov esp, ebp */
  ESP = (EBP);
  /* 12b94a1a pop ebp */
  EBP = (pop32());
  /* 12b94a1b ret  */
  ESPCHK(0x12b94a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a20 @ 0x12b94a20 (157 bytes, 59 insns) */
void f_12b94a20(void) {
  FTRACE(0x12b94a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94a21 mov ebp, esp */
  EBP = (ESP);
  /* 12b94a23 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94a24 push ebx */
  push32((uint32_t)(EBX));
  /* 12b94a25 push esi */
  push32((uint32_t)(ESI));
  /* 12b94a26 push edi */
  push32((uint32_t)(EDI));
  /* 12b94a27 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b94a29 call 0x12b973d0 */
  push32(0x12b94a2eu); f_12b973d0();
  /* 12b94a2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94a31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94a34 push eax */
  push32((uint32_t)(EAX));
  /* 12b94a35 call 0x12b94fd0 */
  push32(0x12b94a3au); f_12b94fd0();
  /* 12b94a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94a3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94a3f je 0x12b94aac */
  if (C.zf) goto L_12b94aac;
  /* 12b94a41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94a44 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b94a47 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b94a4a:;
  /* 12b94a4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94a4d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b94a50 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b94a55 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94a58 je 0x12b94a9d */
  if (C.zf) goto L_12b94a9d;
  /* 12b94a5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94a5d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94a61 je 0x12b94a9d */
  if (C.zf) goto L_12b94a9d;
  /* 12b94a63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94a66 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b94a69 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b94a6e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94a71 je 0x12b94a9d */
  if (C.zf) goto L_12b94a9d;
  /* 12b94a73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94a76 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94a7a je 0x12b94a9d */
  if (C.zf) goto L_12b94a9d;
  /* 12b94a7c push 0x12bbaf58 */
  push32((uint32_t)(0x12bbaf58u));
  /* 12b94a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94a83 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12b94a88 push 0x12bbacb0 */
  push32((uint32_t)(0x12bbacb0u));
  /* 12b94a8d push 2 */
  push32((uint32_t)(0x2u));
  /* 12b94a8f call 0x12b92a90 */
  push32(0x12b94a94u); f_12b92a90();
  /* 12b94a94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94a97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94a9a jne 0x12b94a9d */
  if (!C.zf) goto L_12b94a9d;
  /* 12b94a9c int3  */
  x86_unimpl("int3 @ 0x12b94a9c");
L_12b94a9d:;
  /* 12b94a9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b94a9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b94aa1 jne 0x12b94a4a */
  if (!C.zf) goto L_12b94a4a;
  /* 12b94aa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94aa6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b94aa9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12b94aac:;
  /* 12b94aac push 9 */
  push32((uint32_t)(0x9u));
  /* 12b94aae call 0x12b97470 */
  push32(0x12b94ab3u); f_12b97470();
  /* 12b94ab3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94ab6 pop edi */
  EDI = (pop32());
  /* 12b94ab7 pop esi */
  ESI = (pop32());
  /* 12b94ab8 pop ebx */
  EBX = (pop32());
  /* 12b94ab9 mov esp, ebp */
  ESP = (EBP);
  /* 12b94abb pop ebp */
  EBP = (pop32());
  /* 12b94abc ret  */
  ESPCHK(0x12b94a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ac0 @ 0x12b94ac0 (28 bytes, 11 insns) */
void f_12b94ac0(void) {
  FTRACE(0x12b94ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12b94ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94ac4 mov eax, dword ptr [0x12bbdc90] */
  EAX = (r32((uint32_t)(0x12bbdc90)));
  /* 12b94ac9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b94acc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94acf mov dword ptr [0x12bbdc90], ecx */
  w32((uint32_t)(0x12bbdc90), (ECX));
  /* 12b94ad5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94ad8 mov esp, ebp */
  ESP = (EBP);
  /* 12b94ada pop ebp */
  EBP = (pop32());
  /* 12b94adb ret  */
  ESPCHK(0x12b94ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ae0 @ 0x12b94ae0 (136 bytes, 55 insns) */
void f_12b94ae0(void) {
  FTRACE(0x12b94ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12b94ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94ae4 push ebx */
  push32((uint32_t)(EBX));
  /* 12b94ae5 push esi */
  push32((uint32_t)(ESI));
  /* 12b94ae6 push edi */
  push32((uint32_t)(EDI));
  /* 12b94ae7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12b94aee:;
  /* 12b94aee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b94af1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b94af4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b94af7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12b94afa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94afc je 0x12b94b5e */
  if (C.zf) goto L_12b94b5e;
  /* 12b94afe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94b01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94b03 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12b94b05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b94b08 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b94b0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94b11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94b14 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12b94b17 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94b19 je 0x12b94b5c */
  if (C.zf) goto L_12b94b5c;
L_12b94b1b:;
  /* 12b94b1b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b94b1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b94b23 push eax */
  push32((uint32_t)(EAX));
  /* 12b94b24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94b27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b94b29 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12b94b2c push edx */
  push32((uint32_t)(EDX));
  /* 12b94b2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94b30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b94b33 push eax */
  push32((uint32_t)(EAX));
  /* 12b94b34 push 0x12bbaf9c */
  push32((uint32_t)(0x12bbaf9cu));
  /* 12b94b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94b41 call 0x12b92a90 */
  push32(0x12b94b46u); f_12b92a90();
  /* 12b94b46 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94b49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94b4c jne 0x12b94b4f */
  if (!C.zf) goto L_12b94b4f;
  /* 12b94b4e int3  */
  x86_unimpl("int3 @ 0x12b94b4e");
L_12b94b4f:;
  /* 12b94b4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b94b51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b94b53 jne 0x12b94b1b */
  if (!C.zf) goto L_12b94b1b;
  /* 12b94b55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12b94b5c:;
  /* 12b94b5c jmp 0x12b94aee */
  goto L_12b94aee;
L_12b94b5e:;
  /* 12b94b5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94b61 pop edi */
  EDI = (pop32());
  /* 12b94b62 pop esi */
  ESI = (pop32());
  /* 12b94b63 pop ebx */
  EBX = (pop32());
  /* 12b94b64 mov esp, ebp */
  ESP = (EBP);
  /* 12b94b66 pop ebp */
  EBP = (pop32());
  /* 12b94b67 ret  */
  ESPCHK(0x12b94ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b70 @ 0x12b94b70 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12b94b70(void) {
  FTRACE(0x12b94b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94b71 mov ebp, esp */
  EBP = (ESP);
  /* 12b94b73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b94b76 push ebx */
  push32((uint32_t)(EBX));
  /* 12b94b77 push esi */
  push32((uint32_t)(ESI));
  /* 12b94b78 push edi */
  push32((uint32_t)(EDI));
  /* 12b94b79 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12b94b80 mov eax, dword ptr [0x12bbda84] */
  EAX = (r32((uint32_t)(0x12bbda84)));
  /* 12b94b85 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12b94b88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94b8a jne 0x12b94b96 */
  if (!C.zf) goto L_12b94b96;
  /* 12b94b8c mov eax, 1 */
  EAX = (0x1u);
  /* 12b94b91 jmp 0x12b94ec8 */
  goto L_12b94ec8;
L_12b94b96:;
  /* 12b94b96 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b94b98 call 0x12b973d0 */
  push32(0x12b94b9du); f_12b973d0();
  /* 12b94b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94ba0 call 0x12b97bb0 */
  push32(0x12b94ba5u); f_12b97bb0();
  /* 12b94ba5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b94ba8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94bac je 0x12b94cb9 */
  if (C.zf) goto L_12b94cb9;
  /* 12b94bb2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94bb6 je 0x12b94cb9 */
  if (C.zf) goto L_12b94cb9;
  /* 12b94bbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b94bbf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12b94bc2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b94bc5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94bc8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12b94bcb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94bcf ja 0x12b94c82 */
  if ((!C.cf&&!C.zf)) goto L_12b94c82;
  /* 12b94bd5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b94bd8 jmp dword ptr [eax*4 + 0x12b94ecf] */
  switch (EAX) {
    case 0: goto L_12b94c5a;
    case 1: goto L_12b94c32;
    case 2: goto L_12b94c0a;
    case 3: goto L_12b94bdf;
    default: x86_unimpl("switch@0x12b94bd8 out of table"); return;
  }
L_12b94bdf:;
  /* 12b94bdf push 0x12bbb0f0 */
  push32((uint32_t)(0x12bbb0f0u));
  /* 12b94be4 push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b94be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94beb push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94bed push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94bef push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94bf1 call 0x12b92a90 */
  push32(0x12b94bf6u); f_12b92a90();
  /* 12b94bf6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94bf9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94bfc jne 0x12b94bff */
  if (!C.zf) goto L_12b94bff;
  /* 12b94bfe int3  */
  x86_unimpl("int3 @ 0x12b94bfe");
L_12b94bff:;
  /* 12b94bff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b94c01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b94c03 jne 0x12b94bdf */
  if (!C.zf) goto L_12b94bdf;
  /* 12b94c05 jmp 0x12b94ca8 */
  goto L_12b94ca8;
L_12b94c0a:;
  /* 12b94c0a push 0x12bbb0cc */
  push32((uint32_t)(0x12bbb0ccu));
  /* 12b94c0f push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b94c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c1c call 0x12b92a90 */
  push32(0x12b94c21u); f_12b92a90();
  /* 12b94c21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94c24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94c27 jne 0x12b94c2a */
  if (!C.zf) goto L_12b94c2a;
  /* 12b94c29 int3  */
  x86_unimpl("int3 @ 0x12b94c29");
L_12b94c2a:;
  /* 12b94c2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b94c2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b94c2e jne 0x12b94c0a */
  if (!C.zf) goto L_12b94c0a;
  /* 12b94c30 jmp 0x12b94ca8 */
  goto L_12b94ca8;
L_12b94c32:;
  /* 12b94c32 push 0x12bbb0a8 */
  push32((uint32_t)(0x12bbb0a8u));
  /* 12b94c37 push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b94c3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c44 call 0x12b92a90 */
  push32(0x12b94c49u); f_12b92a90();
  /* 12b94c49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94c4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94c4f jne 0x12b94c52 */
  if (!C.zf) goto L_12b94c52;
  /* 12b94c51 int3  */
  x86_unimpl("int3 @ 0x12b94c51");
L_12b94c52:;
  /* 12b94c52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94c54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94c56 jne 0x12b94c32 */
  if (!C.zf) goto L_12b94c32;
  /* 12b94c58 jmp 0x12b94ca8 */
  goto L_12b94ca8;
L_12b94c5a:;
  /* 12b94c5a push 0x12bbb084 */
  push32((uint32_t)(0x12bbb084u));
  /* 12b94c5f push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b94c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c6c call 0x12b92a90 */
  push32(0x12b94c71u); f_12b92a90();
  /* 12b94c71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94c74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94c77 jne 0x12b94c7a */
  if (!C.zf) goto L_12b94c7a;
  /* 12b94c79 int3  */
  x86_unimpl("int3 @ 0x12b94c79");
L_12b94c7a:;
  /* 12b94c7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b94c7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b94c7e jne 0x12b94c5a */
  if (!C.zf) goto L_12b94c5a;
  /* 12b94c80 jmp 0x12b94ca8 */
  goto L_12b94ca8;
L_12b94c82:;
  /* 12b94c82 push 0x12bbb058 */
  push32((uint32_t)(0x12bbb058u));
  /* 12b94c87 push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b94c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94c94 call 0x12b92a90 */
  push32(0x12b94c99u); f_12b92a90();
  /* 12b94c99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94c9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94c9f jne 0x12b94ca2 */
  if (!C.zf) goto L_12b94ca2;
  /* 12b94ca1 int3  */
  x86_unimpl("int3 @ 0x12b94ca1");
L_12b94ca2:;
  /* 12b94ca2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b94ca4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b94ca6 jne 0x12b94c82 */
  if (!C.zf) goto L_12b94c82;
L_12b94ca8:;
  /* 12b94ca8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b94caa call 0x12b97470 */
  push32(0x12b94cafu); f_12b97470();
  /* 12b94caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94cb4 jmp 0x12b94ec8 */
  goto L_12b94ec8;
L_12b94cb9:;
  /* 12b94cb9 mov eax, dword ptr [0x12bbf4d4] */
  EAX = (r32((uint32_t)(0x12bbf4d4)));
  /* 12b94cbe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b94cc1 jmp 0x12b94ccb */
  goto L_12b94ccb;
L_12b94cc3:;
  /* 12b94cc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94cc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b94cc8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12b94ccb:;
  /* 12b94ccb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94ccf je 0x12b94ebb */
  if (C.zf) goto L_12b94ebb;
  /* 12b94cd5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12b94cdc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94cdf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12b94ce2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b94ce8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94ceb je 0x12b94d10 */
  if (C.zf) goto L_12b94d10;
  /* 12b94ced mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94cf0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94cf4 je 0x12b94d10 */
  if (C.zf) goto L_12b94d10;
  /* 12b94cf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94cf9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12b94cfc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b94d02 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94d05 je 0x12b94d10 */
  if (C.zf) goto L_12b94d10;
  /* 12b94d07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94d0a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94d0e jne 0x12b94d28 */
  if (!C.zf) goto L_12b94d28;
L_12b94d10:;
  /* 12b94d10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94d13 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12b94d16 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b94d1c mov edx, dword ptr [ecx*4 + 0x12bbda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12bbda94)));
  /* 12b94d23 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12b94d26 jmp 0x12b94d2f */
  goto L_12b94d2f;
L_12b94d28:;
  /* 12b94d28 mov dword ptr [ebp - 0x14], 0x12bbb050 */
  w32((uint32_t)(EBP + -0x14), (0x12bbb050u));
L_12b94d2f:;
  /* 12b94d2f push 4 */
  push32((uint32_t)(0x4u));
  /* 12b94d31 mov al, byte ptr [0x12bbda90] */
  AL = (r8((uint32_t)(0x12bbda90)));
  /* 12b94d36 push eax */
  push32((uint32_t)(EAX));
  /* 12b94d37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94d3a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94d3d push ecx */
  push32((uint32_t)(ECX));
  /* 12b94d3e call 0x12b94ae0 */
  push32(0x12b94d43u); f_12b94ae0();
  /* 12b94d43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94d46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94d48 jne 0x12b94d84 */
  if (!C.zf) goto L_12b94d84;
L_12b94d4a:;
  /* 12b94d4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94d4d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94d50 push edx */
  push32((uint32_t)(EDX));
  /* 12b94d51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94d54 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12b94d57 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94d58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b94d5b push edx */
  push32((uint32_t)(EDX));
  /* 12b94d5c push 0x12bbaf2c */
  push32((uint32_t)(0x12bbaf2cu));
  /* 12b94d61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94d69 call 0x12b92a90 */
  push32(0x12b94d6eu); f_12b92a90();
  /* 12b94d6e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94d71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94d74 jne 0x12b94d77 */
  if (!C.zf) goto L_12b94d77;
  /* 12b94d76 int3  */
  x86_unimpl("int3 @ 0x12b94d76");
L_12b94d77:;
  /* 12b94d77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94d79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94d7b jne 0x12b94d4a */
  if (!C.zf) goto L_12b94d4a;
  /* 12b94d7d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12b94d84:;
  /* 12b94d84 push 4 */
  push32((uint32_t)(0x4u));
  /* 12b94d86 mov cl, byte ptr [0x12bbda90] */
  CL = (r8((uint32_t)(0x12bbda90)));
  /* 12b94d8c push ecx */
  push32((uint32_t)(ECX));
  /* 12b94d8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94d90 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b94d93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94d96 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12b94d9a push edx */
  push32((uint32_t)(EDX));
  /* 12b94d9b call 0x12b94ae0 */
  push32(0x12b94da0u); f_12b94ae0();
  /* 12b94da0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94da3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94da5 jne 0x12b94de1 */
  if (!C.zf) goto L_12b94de1;
L_12b94da7:;
  /* 12b94da7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94daa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94dad push eax */
  push32((uint32_t)(EAX));
  /* 12b94dae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94db1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12b94db4 push edx */
  push32((uint32_t)(EDX));
  /* 12b94db5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b94db8 push eax */
  push32((uint32_t)(EAX));
  /* 12b94db9 push 0x12bbaf00 */
  push32((uint32_t)(0x12bbaf00u));
  /* 12b94dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94dc6 call 0x12b92a90 */
  push32(0x12b94dcbu); f_12b92a90();
  /* 12b94dcb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94dce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94dd1 jne 0x12b94dd4 */
  if (!C.zf) goto L_12b94dd4;
  /* 12b94dd3 int3  */
  x86_unimpl("int3 @ 0x12b94dd3");
L_12b94dd4:;
  /* 12b94dd4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b94dd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b94dd8 jne 0x12b94da7 */
  if (!C.zf) goto L_12b94da7;
  /* 12b94dda mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12b94de1:;
  /* 12b94de1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94de4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94de8 jne 0x12b94e3a */
  if (!C.zf) goto L_12b94e3a;
  /* 12b94dea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94ded mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b94df0 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94df1 mov dl, byte ptr [0x12bbda91] */
  DL = (r8((uint32_t)(0x12bbda91)));
  /* 12b94df7 push edx */
  push32((uint32_t)(EDX));
  /* 12b94df8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94dfb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94dfe push eax */
  push32((uint32_t)(EAX));
  /* 12b94dff call 0x12b94ae0 */
  push32(0x12b94e04u); f_12b94ae0();
  /* 12b94e04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94e07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94e09 jne 0x12b94e3a */
  if (!C.zf) goto L_12b94e3a;
L_12b94e0b:;
  /* 12b94e0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94e0e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94e11 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94e12 push 0x12bbb024 */
  push32((uint32_t)(0x12bbb024u));
  /* 12b94e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94e1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94e1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94e1f call 0x12b92a90 */
  push32(0x12b94e24u); f_12b92a90();
  /* 12b94e24 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94e27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94e2a jne 0x12b94e2d */
  if (!C.zf) goto L_12b94e2d;
  /* 12b94e2c int3  */
  x86_unimpl("int3 @ 0x12b94e2c");
L_12b94e2d:;
  /* 12b94e2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b94e2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b94e31 jne 0x12b94e0b */
  if (!C.zf) goto L_12b94e0b;
  /* 12b94e33 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12b94e3a:;
  /* 12b94e3a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94e3e jne 0x12b94eb6 */
  if (!C.zf) goto L_12b94eb6;
  /* 12b94e40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94e43 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94e47 je 0x12b94e7c */
  if (C.zf) goto L_12b94e7c;
L_12b94e49:;
  /* 12b94e49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94e4c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b94e4f push edx */
  push32((uint32_t)(EDX));
  /* 12b94e50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94e53 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b94e56 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94e57 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b94e5a push edx */
  push32((uint32_t)(EDX));
  /* 12b94e5b push 0x12bbb004 */
  push32((uint32_t)(0x12bbb004u));
  /* 12b94e60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94e68 call 0x12b92a90 */
  push32(0x12b94e6du); f_12b92a90();
  /* 12b94e6d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94e70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94e73 jne 0x12b94e76 */
  if (!C.zf) goto L_12b94e76;
  /* 12b94e75 int3  */
  x86_unimpl("int3 @ 0x12b94e75");
L_12b94e76:;
  /* 12b94e76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94e78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94e7a jne 0x12b94e49 */
  if (!C.zf) goto L_12b94e49;
L_12b94e7c:;
  /* 12b94e7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94e7f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12b94e82 push edx */
  push32((uint32_t)(EDX));
  /* 12b94e83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b94e86 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94e89 push eax */
  push32((uint32_t)(EAX));
  /* 12b94e8a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b94e8d push ecx */
  push32((uint32_t)(ECX));
  /* 12b94e8e push 0x12bbafd8 */
  push32((uint32_t)(0x12bbafd8u));
  /* 12b94e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94e95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b94e9b call 0x12b92a90 */
  push32(0x12b94ea0u); f_12b92a90();
  /* 12b94ea0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94ea3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94ea6 jne 0x12b94ea9 */
  if (!C.zf) goto L_12b94ea9;
  /* 12b94ea8 int3  */
  x86_unimpl("int3 @ 0x12b94ea8");
L_12b94ea9:;
  /* 12b94ea9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b94eab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b94ead jne 0x12b94e7c */
  if (!C.zf) goto L_12b94e7c;
  /* 12b94eaf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12b94eb6:;
  /* 12b94eb6 jmp 0x12b94cc3 */
  goto L_12b94cc3;
L_12b94ebb:;
  /* 12b94ebb push 9 */
  push32((uint32_t)(0x9u));
  /* 12b94ebd call 0x12b97470 */
  push32(0x12b94ec2u); f_12b97470();
  /* 12b94ec2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94ec5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12b94ec8:;
  /* 12b94ec8 pop edi */
  EDI = (pop32());
  /* 12b94ec9 pop esi */
  ESI = (pop32());
  /* 12b94eca pop ebx */
  EBX = (pop32());
  /* 12b94ecb mov esp, ebp */
  ESP = (EBP);
  /* 12b94ecd pop ebp */
  EBP = (pop32());
  /* 12b94ece ret  */
  ESPCHK(0x12b94b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ee0 @ 0x12b94ee0 (34 bytes, 13 insns) */
void f_12b94ee0(void) {
  FTRACE(0x12b94ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12b94ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94ee4 mov eax, dword ptr [0x12bbda84] */
  EAX = (r32((uint32_t)(0x12bbda84)));
  /* 12b94ee9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b94eec cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94ef0 je 0x12b94efb */
  if (C.zf) goto L_12b94efb;
  /* 12b94ef2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94ef5 mov dword ptr [0x12bbda84], ecx */
  w32((uint32_t)(0x12bbda84), (ECX));
L_12b94efb:;
  /* 12b94efb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94efe mov esp, ebp */
  ESP = (EBP);
  /* 12b94f00 pop ebp */
  EBP = (pop32());
  /* 12b94f01 ret  */
  ESPCHK(0x12b94ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f10 @ 0x12b94f10 (103 bytes, 38 insns) */
void f_12b94f10(void) {
  FTRACE(0x12b94f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94f11 mov ebp, esp */
  EBP = (ESP);
  /* 12b94f13 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94f14 mov eax, dword ptr [0x12bbda84] */
  EAX = (r32((uint32_t)(0x12bbda84)));
  /* 12b94f19 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12b94f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94f1e jne 0x12b94f22 */
  if (!C.zf) goto L_12b94f22;
  /* 12b94f20 jmp 0x12b94f73 */
  goto L_12b94f73;
L_12b94f22:;
  /* 12b94f22 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b94f24 call 0x12b973d0 */
  push32(0x12b94f29u); f_12b973d0();
  /* 12b94f29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94f2c mov ecx, dword ptr [0x12bbf4d4] */
  ECX = (r32((uint32_t)(0x12bbf4d4)));
  /* 12b94f32 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b94f35 jmp 0x12b94f3f */
  goto L_12b94f3f;
L_12b94f37:;
  /* 12b94f37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94f3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b94f3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b94f3f:;
  /* 12b94f3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94f43 je 0x12b94f69 */
  if (C.zf) goto L_12b94f69;
  /* 12b94f45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94f48 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12b94f4b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b94f51 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94f54 jne 0x12b94f67 */
  if (!C.zf) goto L_12b94f67;
  /* 12b94f56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b94f59 push eax */
  push32((uint32_t)(EAX));
  /* 12b94f5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94f5d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94f60 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94f61 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12b94f64u);
  /* 12b94f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b94f67:;
  /* 12b94f67 jmp 0x12b94f37 */
  goto L_12b94f37;
L_12b94f69:;
  /* 12b94f69 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b94f6b call 0x12b97470 */
  push32(0x12b94f70u); f_12b97470();
  /* 12b94f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b94f73:;
  /* 12b94f73 mov esp, ebp */
  ESP = (EBP);
  /* 12b94f75 pop ebp */
  EBP = (pop32());
  /* 12b94f76 ret  */
  ESPCHK(0x12b94f10u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12b94f80 (75 bytes, 28 insns) */
void f_12b94f80(void) {
  FTRACE(0x12b94f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94f81 mov ebp, esp */
  EBP = (ESP);
  /* 12b94f83 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94f84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94f88 je 0x12b94fbd */
  if (C.zf) goto L_12b94fbd;
  /* 12b94f8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b94f8d push eax */
  push32((uint32_t)(EAX));
  /* 12b94f8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94f91 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94f92 call dword ptr [0x12bc12d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12d0))), 0x12b94f98u);
  /* 12b94f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94f9a jne 0x12b94fbd */
  if (!C.zf) goto L_12b94fbd;
  /* 12b94f9c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94fa0 je 0x12b94fb4 */
  if (C.zf) goto L_12b94fb4;
  /* 12b94fa2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b94fa5 push edx */
  push32((uint32_t)(EDX));
  /* 12b94fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94fa9 push eax */
  push32((uint32_t)(EAX));
  /* 12b94faa call dword ptr [0x12bc12cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12cc))), 0x12b94fb0u);
  /* 12b94fb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94fb2 jne 0x12b94fbd */
  if (!C.zf) goto L_12b94fbd;
L_12b94fb4:;
  /* 12b94fb4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12b94fbb jmp 0x12b94fc4 */
  goto L_12b94fc4;
L_12b94fbd:;
  /* 12b94fbd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12b94fc4:;
  /* 12b94fc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b94fc7 mov esp, ebp */
  ESP = (EBP);
  /* 12b94fc9 pop ebp */
  EBP = (pop32());
  /* 12b94fca ret  */
  ESPCHK(0x12b94f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fd0 @ 0x12b94fd0 (134 bytes, 50 insns) */
void f_12b94fd0(void) {
  FTRACE(0x12b94fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b94fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b94fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12b94fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b94fd4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b94fd8 jne 0x12b94fde */
  if (!C.zf) goto L_12b94fde;
  /* 12b94fda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94fdc jmp 0x12b95052 */
  goto L_12b95052;
L_12b94fde:;
  /* 12b94fde push 1 */
  push32((uint32_t)(0x1u));
  /* 12b94fe0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12b94fe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94fe5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b94fe8 push eax */
  push32((uint32_t)(EAX));
  /* 12b94fe9 call 0x12b94f80 */
  push32(0x12b94feeu); f_12b94f80();
  /* 12b94fee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b94ff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b94ff3 jne 0x12b94ff9 */
  if (!C.zf) goto L_12b94ff9;
  /* 12b94ff5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b94ff7 jmp 0x12b95052 */
  goto L_12b95052;
L_12b94ff9:;
  /* 12b94ff9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b94ffc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b94fff push ecx */
  push32((uint32_t)(ECX));
  /* 12b95000 call 0x12b97cd0 */
  push32(0x12b95005u); f_12b97cd0();
  /* 12b95005 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95008 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9500b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9500f je 0x12b95026 */
  if (C.zf) goto L_12b95026;
  /* 12b95011 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95014 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b95017 push edx */
  push32((uint32_t)(EDX));
  /* 12b95018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9501b push eax */
  push32((uint32_t)(EAX));
  /* 12b9501c call 0x12b97d30 */
  push32(0x12b95021u); f_12b97d30();
  /* 12b95021 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95024 jmp 0x12b95052 */
  goto L_12b95052;
L_12b95026:;
  /* 12b95026 mov ecx, dword ptr [0x12bbf488] */
  ECX = (r32((uint32_t)(0x12bbf488)));
  /* 12b9502c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12b95032 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b95034 je 0x12b9503d */
  if (C.zf) goto L_12b9503d;
  /* 12b95036 mov eax, 1 */
  EAX = (0x1u);
  /* 12b9503b jmp 0x12b95052 */
  goto L_12b95052;
L_12b9503d:;
  /* 12b9503d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95040 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b95043 push edx */
  push32((uint32_t)(EDX));
  /* 12b95044 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95046 mov eax, dword ptr [0x12bc0e2c] */
  EAX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b9504b push eax */
  push32((uint32_t)(EAX));
  /* 12b9504c call dword ptr [0x12bc1230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1230))), 0x12b95052u);
L_12b95052:;
  /* 12b95052 mov esp, ebp */
  ESP = (EBP);
  /* 12b95054 pop ebp */
  EBP = (pop32());
  /* 12b95055 ret  */
  ESPCHK(0x12b94fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005060 @ 0x12b95060 (227 bytes, 80 insns) */
void f_12b95060(void) {
  FTRACE(0x12b95060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b95060 push ebp */
  push32((uint32_t)(EBP));
  /* 12b95061 mov ebp, esp */
  EBP = (ESP);
  /* 12b95063 push ecx */
  push32((uint32_t)(ECX));
  /* 12b95064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95067 push eax */
  push32((uint32_t)(EAX));
  /* 12b95068 call 0x12b94fd0 */
  push32(0x12b9506du); f_12b94fd0();
  /* 12b9506d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b95072 jne 0x12b9507b */
  if (!C.zf) goto L_12b9507b;
  /* 12b95074 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b95076 jmp 0x12b9513f */
  goto L_12b9513f;
L_12b9507b:;
  /* 12b9507b push 9 */
  push32((uint32_t)(0x9u));
  /* 12b9507d call 0x12b973d0 */
  push32(0x12b95082u); f_12b973d0();
  /* 12b95082 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95085 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95088 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9508b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b9508e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95091 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b95094 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b95099 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9509c je 0x12b950c0 */
  if (C.zf) goto L_12b950c0;
  /* 12b9509e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b950a1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b950a5 je 0x12b950c0 */
  if (C.zf) goto L_12b950c0;
  /* 12b950a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b950aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b950ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b950b2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b950b5 je 0x12b950c0 */
  if (C.zf) goto L_12b950c0;
  /* 12b950b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b950ba cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b950be jne 0x12b95133 */
  if (!C.zf) goto L_12b95133;
L_12b950c0:;
  /* 12b950c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b950c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b950c5 push edx */
  push32((uint32_t)(EDX));
  /* 12b950c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b950c9 push eax */
  push32((uint32_t)(EAX));
  /* 12b950ca call 0x12b94f80 */
  push32(0x12b950cfu); f_12b94f80();
  /* 12b950cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b950d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b950d4 je 0x12b95133 */
  if (C.zf) goto L_12b95133;
  /* 12b950d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b950d9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12b950dc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b950df jne 0x12b95133 */
  if (!C.zf) goto L_12b95133;
  /* 12b950e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b950e4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12b950e7 cmp ecx, dword ptr [0x12bbda88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bbda88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b950ed jg 0x12b95133 */
  if ((!C.zf&&C.sf==C.of)) goto L_12b95133;
  /* 12b950ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b950f3 je 0x12b95100 */
  if (C.zf) goto L_12b95100;
  /* 12b950f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b950f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b950fb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12b950fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12b95100:;
  /* 12b95100 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95104 je 0x12b95111 */
  if (C.zf) goto L_12b95111;
  /* 12b95106 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b95109 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9510c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b9510f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12b95111:;
  /* 12b95111 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95115 je 0x12b95122 */
  if (C.zf) goto L_12b95122;
  /* 12b95117 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b9511a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9511d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12b95120 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12b95122:;
  /* 12b95122 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b95124 call 0x12b97470 */
  push32(0x12b95129u); f_12b97470();
  /* 12b95129 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9512c mov eax, 1 */
  EAX = (0x1u);
  /* 12b95131 jmp 0x12b9513f */
  goto L_12b9513f;
L_12b95133:;
  /* 12b95133 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b95135 call 0x12b97470 */
  push32(0x12b9513au); f_12b97470();
  /* 12b9513a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9513d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b9513f:;
  /* 12b9513f mov esp, ebp */
  ESP = (EBP);
  /* 12b95141 pop ebp */
  EBP = (pop32());
  /* 12b95142 ret  */
  ESPCHK(0x12b95060u, _esp0);
  ESP += 4; return;
}

/* FUN_10005150 @ 0x12b95150 (28 bytes, 11 insns) */
void f_12b95150(void) {
  FTRACE(0x12b95150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b95150 push ebp */
  push32((uint32_t)(EBP));
  /* 12b95151 mov ebp, esp */
  EBP = (ESP);
  /* 12b95153 push ecx */
  push32((uint32_t)(ECX));
  /* 12b95154 mov eax, dword ptr [0x12bc0e38] */
  EAX = (r32((uint32_t)(0x12bc0e38)));
  /* 12b95159 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9515c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9515f mov dword ptr [0x12bc0e38], ecx */
  w32((uint32_t)(0x12bc0e38), (ECX));
  /* 12b95165 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95168 mov esp, ebp */
  ESP = (EBP);
  /* 12b9516a pop ebp */
  EBP = (pop32());
  /* 12b9516b ret  */
  ESPCHK(0x12b95150u, _esp0);
  ESP += 4; return;
}

/* FUN_10005170 @ 0x12b95170 (362 bytes, 116 insns) */
void f_12b95170(void) {
  FTRACE(0x12b95170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b95170 push ebp */
  push32((uint32_t)(EBP));
  /* 12b95171 mov ebp, esp */
  EBP = (ESP);
  /* 12b95173 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b95176 push ebx */
  push32((uint32_t)(EBX));
  /* 12b95177 push esi */
  push32((uint32_t)(ESI));
  /* 12b95178 push edi */
  push32((uint32_t)(EDI));
  /* 12b95179 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9517d jne 0x12b951aa */
  if (!C.zf) goto L_12b951aa;
L_12b9517f:;
  /* 12b9517f push 0x12bbb138 */
  push32((uint32_t)(0x12bbb138u));
  /* 12b95184 push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b95189 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9518b push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9518d push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9518f push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95191 call 0x12b92a90 */
  push32(0x12b95196u); f_12b92a90();
  /* 12b95196 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95199 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9519c jne 0x12b9519f */
  if (!C.zf) goto L_12b9519f;
  /* 12b9519e int3  */
  x86_unimpl("int3 @ 0x12b9519e");
L_12b9519f:;
  /* 12b9519f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b951a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b951a3 jne 0x12b9517f */
  if (!C.zf) goto L_12b9517f;
  /* 12b951a5 jmp 0x12b952d3 */
  goto L_12b952d3;
L_12b951aa:;
  /* 12b951aa push 9 */
  push32((uint32_t)(0x9u));
  /* 12b951ac call 0x12b973d0 */
  push32(0x12b951b1u); f_12b973d0();
  /* 12b951b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b951b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b951b7 mov edx, dword ptr [0x12bbf4d4] */
  EDX = (r32((uint32_t)(0x12bbf4d4)));
  /* 12b951bd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12b951bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b951c6 jmp 0x12b951d1 */
  goto L_12b951d1;
L_12b951c8:;
  /* 12b951c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b951cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b951ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b951d1:;
  /* 12b951d1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b951d5 jge 0x12b951f5 */
  if ((C.sf==C.of)) goto L_12b951f5;
  /* 12b951d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b951da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b951dd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12b951e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b951e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b951eb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12b951f3 jmp 0x12b951c8 */
  goto L_12b951c8;
L_12b951f5:;
  /* 12b951f5 mov edx, dword ptr [0x12bbf4d4] */
  EDX = (r32((uint32_t)(0x12bbf4d4)));
  /* 12b951fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12b951fe jmp 0x12b95208 */
  goto L_12b95208;
L_12b95200:;
  /* 12b95200 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b95203 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b95205 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12b95208:;
  /* 12b95208 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9520c je 0x12b952b1 */
  if (C.zf) goto L_12b952b1;
  /* 12b95212 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b95215 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b95218 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9521d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9521f jl 0x12b95287 */
  if ((C.sf!=C.of)) goto L_12b95287;
  /* 12b95221 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b95224 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12b95227 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9522d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95230 jge 0x12b95287 */
  if ((C.sf==C.of)) goto L_12b95287;
  /* 12b95232 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b95235 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12b95238 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9523e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95241 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12b95245 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95248 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9524b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12b9524e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b95254 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95257 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12b9525b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9525e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b95261 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b95266 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95269 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12b9526d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b95270 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95273 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b95276 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12b95279 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9527e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95281 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12b95285 jmp 0x12b952ac */
  goto L_12b952ac;
L_12b95287:;
  /* 12b95287 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9528a push edx */
  push32((uint32_t)(EDX));
  /* 12b9528b push 0x12bbb114 */
  push32((uint32_t)(0x12bbb114u));
  /* 12b95290 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95292 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95294 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95296 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95298 call 0x12b92a90 */
  push32(0x12b9529du); f_12b92a90();
  /* 12b9529d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b952a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b952a3 jne 0x12b952a6 */
  if (!C.zf) goto L_12b952a6;
  /* 12b952a5 int3  */
  x86_unimpl("int3 @ 0x12b952a5");
L_12b952a6:;
  /* 12b952a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b952a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b952aa jne 0x12b95287 */
  if (!C.zf) goto L_12b95287;
L_12b952ac:;
  /* 12b952ac jmp 0x12b95200 */
  goto L_12b95200;
L_12b952b1:;
  /* 12b952b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b952b4 mov edx, dword ptr [0x12bbf4dc] */
  EDX = (r32((uint32_t)(0x12bbf4dc)));
  /* 12b952ba mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12b952bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b952c0 mov ecx, dword ptr [0x12bbf4d0] */
  ECX = (r32((uint32_t)(0x12bbf4d0)));
  /* 12b952c6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12b952c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b952cb call 0x12b97470 */
  push32(0x12b952d0u); f_12b97470();
  /* 12b952d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b952d3:;
  /* 12b952d3 pop edi */
  EDI = (pop32());
  /* 12b952d4 pop esi */
  ESI = (pop32());
  /* 12b952d5 pop ebx */
  EBX = (pop32());
  /* 12b952d6 mov esp, ebp */
  ESP = (EBP);
  /* 12b952d8 pop ebp */
  EBP = (pop32());
  /* 12b952d9 ret  */
  ESPCHK(0x12b95170u, _esp0);
  ESP += 4; return;
}

/* FUN_100052e0 @ 0x12b952e0 (291 bytes, 95 insns) */
void f_12b952e0(void) {
  FTRACE(0x12b952e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b952e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b952e1 mov ebp, esp */
  EBP = (ESP);
  /* 12b952e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b952e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12b952e7 push esi */
  push32((uint32_t)(ESI));
  /* 12b952e8 push edi */
  push32((uint32_t)(EDI));
  /* 12b952e9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12b952f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b952f4 je 0x12b95302 */
  if (C.zf) goto L_12b95302;
  /* 12b952f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b952fa je 0x12b95302 */
  if (C.zf) goto L_12b95302;
  /* 12b952fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95300 jne 0x12b95330 */
  if (!C.zf) goto L_12b95330;
L_12b95302:;
  /* 12b95302 push 0x12bbb160 */
  push32((uint32_t)(0x12bbb160u));
  /* 12b95307 push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b9530c push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9530e push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95310 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95312 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95314 call 0x12b92a90 */
  push32(0x12b95319u); f_12b92a90();
  /* 12b95319 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9531c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9531f jne 0x12b95322 */
  if (!C.zf) goto L_12b95322;
  /* 12b95321 int3  */
  x86_unimpl("int3 @ 0x12b95321");
L_12b95322:;
  /* 12b95322 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b95324 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b95326 jne 0x12b95302 */
  if (!C.zf) goto L_12b95302;
  /* 12b95328 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9532b jmp 0x12b953fc */
  goto L_12b953fc;
L_12b95330:;
  /* 12b95330 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b95337 jmp 0x12b95342 */
  goto L_12b95342;
L_12b95339:;
  /* 12b95339 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9533c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9533f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b95342:;
  /* 12b95342 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95346 jge 0x12b953cc */
  if ((C.sf==C.of)) goto L_12b953cc;
  /* 12b9534c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9534f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95352 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95355 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12b95358 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12b9535c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b95360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95363 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95366 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12b9536a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9536d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95370 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95373 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12b95376 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12b9537a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9537e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95381 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95384 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12b95388 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9538b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9538e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95393 jne 0x12b953a2 */
  if (!C.zf) goto L_12b953a2;
  /* 12b95395 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95398 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9539b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b953a0 je 0x12b953c7 */
  if (C.zf) goto L_12b953c7;
L_12b953a2:;
  /* 12b953a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b953a6 je 0x12b953c7 */
  if (C.zf) goto L_12b953c7;
  /* 12b953a8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b953ac jne 0x12b953c0 */
  if (!C.zf) goto L_12b953c0;
  /* 12b953ae cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b953b2 jne 0x12b953c7 */
  if (!C.zf) goto L_12b953c7;
  /* 12b953b4 mov eax, dword ptr [0x12bbda84] */
  EAX = (r32((uint32_t)(0x12bbda84)));
  /* 12b953b9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12b953bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b953be je 0x12b953c7 */
  if (C.zf) goto L_12b953c7;
L_12b953c0:;
  /* 12b953c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12b953c7:;
  /* 12b953c7 jmp 0x12b95339 */
  goto L_12b95339;
L_12b953cc:;
  /* 12b953cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b953cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b953d2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12b953d5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b953d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b953db mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12b953de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b953e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b953e4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12b953e7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b953ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b953ed mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12b953f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b953f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12b953f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12b953fc:;
  /* 12b953fc pop edi */
  EDI = (pop32());
  /* 12b953fd pop esi */
  ESI = (pop32());
  /* 12b953fe pop ebx */
  EBX = (pop32());
  /* 12b953ff mov esp, ebp */
  ESP = (EBP);
  /* 12b95401 pop ebp */
  EBP = (pop32());
  /* 12b95402 ret  */
  ESPCHK(0x12b952e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005410 @ 0x12b95410 (697 bytes, 253 insns) */
void f_12b95410(void) {
  FTRACE(0x12b95410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b95410 push ebp */
  push32((uint32_t)(EBP));
  /* 12b95411 mov ebp, esp */
  EBP = (ESP);
  /* 12b95413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b95416 push ebx */
  push32((uint32_t)(EBX));
  /* 12b95417 push esi */
  push32((uint32_t)(ESI));
  /* 12b95418 push edi */
  push32((uint32_t)(EDI));
  /* 12b95419 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12b95420 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b95422 call 0x12b973d0 */
  push32(0x12b95427u); f_12b973d0();
  /* 12b95427 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9542a:;
  /* 12b9542a push 0x12bbb258 */
  push32((uint32_t)(0x12bbb258u));
  /* 12b9542f push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b95434 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95436 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95438 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9543a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9543c call 0x12b92a90 */
  push32(0x12b95441u); f_12b92a90();
  /* 12b95441 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95444 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95447 jne 0x12b9544a */
  if (!C.zf) goto L_12b9544a;
  /* 12b95449 int3  */
  x86_unimpl("int3 @ 0x12b95449");
L_12b9544a:;
  /* 12b9544a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9544c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9544e jne 0x12b9542a */
  if (!C.zf) goto L_12b9542a;
  /* 12b95450 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95454 je 0x12b9545e */
  if (C.zf) goto L_12b9545e;
  /* 12b95456 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95459 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b9545b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12b9545e:;
  /* 12b9545e mov eax, dword ptr [0x12bbf4d4] */
  EAX = (r32((uint32_t)(0x12bbf4d4)));
  /* 12b95463 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b95466 jmp 0x12b95470 */
  goto L_12b95470;
L_12b95468:;
  /* 12b95468 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9546b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b9546d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b95470:;
  /* 12b95470 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95474 je 0x12b95692 */
  if (C.zf) goto L_12b95692;
  /* 12b9547a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9547d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95480 je 0x12b95692 */
  if (C.zf) goto L_12b95692;
  /* 12b95486 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95489 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12b9548c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b95492 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95495 je 0x12b954c4 */
  if (C.zf) goto L_12b954c4;
  /* 12b95497 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9549a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12b9549d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b954a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b954a5 je 0x12b954c4 */
  if (C.zf) goto L_12b954c4;
  /* 12b954a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b954aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b954ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b954b2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b954b5 jne 0x12b954c9 */
  if (!C.zf) goto L_12b954c9;
  /* 12b954b7 mov ecx, dword ptr [0x12bbda84] */
  ECX = (r32((uint32_t)(0x12bbda84)));
  /* 12b954bd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12b954c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b954c2 jne 0x12b954c9 */
  if (!C.zf) goto L_12b954c9;
L_12b954c4:;
  /* 12b954c4 jmp 0x12b9568d */
  goto L_12b9568d;
L_12b954c9:;
  /* 12b954c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b954cc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b954d0 je 0x12b95542 */
  if (C.zf) goto L_12b95542;
  /* 12b954d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b954d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b954d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b954d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b954dc push ecx */
  push32((uint32_t)(ECX));
  /* 12b954dd call 0x12b94f80 */
  push32(0x12b954e2u); f_12b94f80();
  /* 12b954e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b954e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b954e7 jne 0x12b95513 */
  if (!C.zf) goto L_12b95513;
L_12b954e9:;
  /* 12b954e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b954ec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12b954ef push eax */
  push32((uint32_t)(EAX));
  /* 12b954f0 push 0x12bbb244 */
  push32((uint32_t)(0x12bbb244u));
  /* 12b954f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b954f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b954f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b954fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12b954fd call 0x12b92a90 */
  push32(0x12b95502u); f_12b92a90();
  /* 12b95502 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95505 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95508 jne 0x12b9550b */
  if (!C.zf) goto L_12b9550b;
  /* 12b9550a int3  */
  x86_unimpl("int3 @ 0x12b9550a");
L_12b9550b:;
  /* 12b9550b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9550d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9550f jne 0x12b954e9 */
  if (!C.zf) goto L_12b954e9;
  /* 12b95511 jmp 0x12b95542 */
  goto L_12b95542;
L_12b95513:;
  /* 12b95513 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95516 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12b95519 push eax */
  push32((uint32_t)(EAX));
  /* 12b9551a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9551d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12b95520 push edx */
  push32((uint32_t)(EDX));
  /* 12b95521 push 0x12bbb238 */
  push32((uint32_t)(0x12bbb238u));
  /* 12b95526 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95528 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9552a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9552c push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9552e call 0x12b92a90 */
  push32(0x12b95533u); f_12b92a90();
  /* 12b95533 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95536 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95539 jne 0x12b9553c */
  if (!C.zf) goto L_12b9553c;
  /* 12b9553b int3  */
  x86_unimpl("int3 @ 0x12b9553b");
L_12b9553c:;
  /* 12b9553c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9553e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b95540 jne 0x12b95513 */
  if (!C.zf) goto L_12b95513;
L_12b95542:;
  /* 12b95542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95545 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12b95548 push edx */
  push32((uint32_t)(EDX));
  /* 12b95549 push 0x12bbb230 */
  push32((uint32_t)(0x12bbb230u));
  /* 12b9554e push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95550 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95552 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95554 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95556 call 0x12b92a90 */
  push32(0x12b9555bu); f_12b92a90();
  /* 12b9555b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9555e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95561 jne 0x12b95564 */
  if (!C.zf) goto L_12b95564;
  /* 12b95563 int3  */
  x86_unimpl("int3 @ 0x12b95563");
L_12b95564:;
  /* 12b95564 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b95566 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b95568 jne 0x12b95542 */
  if (!C.zf) goto L_12b95542;
  /* 12b9556a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9556d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12b95570 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b95576 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95579 jne 0x12b955ec */
  if (!C.zf) goto L_12b955ec;
L_12b9557b:;
  /* 12b9557b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9557e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b95581 push ecx */
  push32((uint32_t)(ECX));
  /* 12b95582 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95585 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b95588 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12b9558b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b95590 push eax */
  push32((uint32_t)(EAX));
  /* 12b95591 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95594 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95597 push ecx */
  push32((uint32_t)(ECX));
  /* 12b95598 push 0x12bbb1fc */
  push32((uint32_t)(0x12bbb1fcu));
  /* 12b9559d push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9559f push 0 */
  push32((uint32_t)(0x0u));
  /* 12b955a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b955a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b955a5 call 0x12b92a90 */
  push32(0x12b955aau); f_12b92a90();
  /* 12b955aa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b955ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b955b0 jne 0x12b955b3 */
  if (!C.zf) goto L_12b955b3;
  /* 12b955b2 int3  */
  x86_unimpl("int3 @ 0x12b955b2");
L_12b955b3:;
  /* 12b955b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b955b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b955b7 jne 0x12b9557b */
  if (!C.zf) goto L_12b9557b;
  /* 12b955b9 cmp dword ptr [0x12bc0e38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0e38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b955c0 je 0x12b955db */
  if (C.zf) goto L_12b955db;
  /* 12b955c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b955c5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b955c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12b955c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b955cc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b955cf push edx */
  push32((uint32_t)(EDX));
  /* 12b955d0 call dword ptr [0x12bc0e38] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc0e38))), 0x12b955d6u);
  /* 12b955d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b955d9 jmp 0x12b955e7 */
  goto L_12b955e7;
L_12b955db:;
  /* 12b955db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b955de push eax */
  push32((uint32_t)(EAX));
  /* 12b955df call 0x12b956d0 */
  push32(0x12b955e4u); f_12b956d0();
  /* 12b955e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b955e7:;
  /* 12b955e7 jmp 0x12b9568d */
  goto L_12b9568d;
L_12b955ec:;
  /* 12b955ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b955ef cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b955f3 jne 0x12b95632 */
  if (!C.zf) goto L_12b95632;
L_12b955f5:;
  /* 12b955f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b955f8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b955fb push eax */
  push32((uint32_t)(EAX));
  /* 12b955fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b955ff add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95602 push ecx */
  push32((uint32_t)(ECX));
  /* 12b95603 push 0x12bbb1d4 */
  push32((uint32_t)(0x12bbb1d4u));
  /* 12b95608 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9560a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9560c push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9560e push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95610 call 0x12b92a90 */
  push32(0x12b95615u); f_12b92a90();
  /* 12b95615 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95618 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9561b jne 0x12b9561e */
  if (!C.zf) goto L_12b9561e;
  /* 12b9561d int3  */
  x86_unimpl("int3 @ 0x12b9561d");
L_12b9561e:;
  /* 12b9561e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b95620 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b95622 jne 0x12b955f5 */
  if (!C.zf) goto L_12b955f5;
  /* 12b95624 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95627 push eax */
  push32((uint32_t)(EAX));
  /* 12b95628 call 0x12b956d0 */
  push32(0x12b9562du); f_12b956d0();
  /* 12b9562d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95630 jmp 0x12b9568d */
  goto L_12b9568d;
L_12b95632:;
  /* 12b95632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95635 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12b95638 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9563e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95641 jne 0x12b9568d */
  if (!C.zf) goto L_12b9568d;
L_12b95643:;
  /* 12b95643 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95646 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b95649 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9564a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9564d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b95650 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12b95653 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b95658 push eax */
  push32((uint32_t)(EAX));
  /* 12b95659 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9565c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9565f push ecx */
  push32((uint32_t)(ECX));
  /* 12b95660 push 0x12bbb1a0 */
  push32((uint32_t)(0x12bbb1a0u));
  /* 12b95665 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95667 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95669 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9566b push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9566d call 0x12b92a90 */
  push32(0x12b95672u); f_12b92a90();
  /* 12b95672 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95675 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95678 jne 0x12b9567b */
  if (!C.zf) goto L_12b9567b;
  /* 12b9567a int3  */
  x86_unimpl("int3 @ 0x12b9567a");
L_12b9567b:;
  /* 12b9567b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9567d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9567f jne 0x12b95643 */
  if (!C.zf) goto L_12b95643;
  /* 12b95681 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95684 push eax */
  push32((uint32_t)(EAX));
  /* 12b95685 call 0x12b956d0 */
  push32(0x12b9568au); f_12b956d0();
  /* 12b9568a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9568d:;
  /* 12b9568d jmp 0x12b95468 */
  goto L_12b95468;
L_12b95692:;
  /* 12b95692 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b95694 call 0x12b97470 */
  push32(0x12b95699u); f_12b97470();
  /* 12b95699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9569c:;
  /* 12b9569c push 0x12bbb188 */
  push32((uint32_t)(0x12bbb188u));
  /* 12b956a1 push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b956a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b956a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b956aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12b956ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12b956ae call 0x12b92a90 */
  push32(0x12b956b3u); f_12b92a90();
  /* 12b956b3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b956b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b956b9 jne 0x12b956bc */
  if (!C.zf) goto L_12b956bc;
  /* 12b956bb int3  */
  x86_unimpl("int3 @ 0x12b956bb");
L_12b956bc:;
  /* 12b956bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b956be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b956c0 jne 0x12b9569c */
  if (!C.zf) goto L_12b9569c;
  /* 12b956c2 pop edi */
  EDI = (pop32());
  /* 12b956c3 pop esi */
  ESI = (pop32());
  /* 12b956c4 pop ebx */
  EBX = (pop32());
  /* 12b956c5 mov esp, ebp */
  ESP = (EBP);
  /* 12b956c7 pop ebp */
  EBP = (pop32());
  /* 12b956c8 ret  */
  ESPCHK(0x12b95410u, _esp0);
  ESP += 4; return;
}

/* FUN_100056d0 @ 0x12b956d0 (276 bytes, 89 insns) */
void f_12b956d0(void) {
  FTRACE(0x12b956d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b956d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b956d1 mov ebp, esp */
  EBP = (ESP);
  /* 12b956d3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b956d6 push ebx */
  push32((uint32_t)(EBX));
  /* 12b956d7 push esi */
  push32((uint32_t)(ESI));
  /* 12b956d8 push edi */
  push32((uint32_t)(EDI));
  /* 12b956d9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12b956e0 jmp 0x12b956eb */
  goto L_12b956eb;
L_12b956e2:;
  /* 12b956e2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12b956e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b956e8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12b956eb:;
  /* 12b956eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b956ee cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b956f2 jge 0x12b956ff */
  if ((C.sf==C.of)) goto L_12b956ff;
  /* 12b956f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b956f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b956fa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12b956fd jmp 0x12b95706 */
  goto L_12b95706;
L_12b956ff:;
  /* 12b956ff mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12b95706:;
  /* 12b95706 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12b95709 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9570c jge 0x12b957ac */
  if ((C.sf==C.of)) goto L_12b957ac;
  /* 12b95712 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95715 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95718 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12b9571b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12b9571e cmp dword ptr [0x12bbdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95725 jle 0x12b95743 */
  if ((C.zf||C.sf!=C.of)) goto L_12b95743;
  /* 12b95727 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12b9572c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b9572f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b95735 push ecx */
  push32((uint32_t)(ECX));
  /* 12b95736 call 0x12b999e0 */
  push32(0x12b9573bu); f_12b999e0();
  /* 12b9573b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9573e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12b95741 jmp 0x12b95760 */
  goto L_12b95760;
L_12b95743:;
  /* 12b95743 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b95746 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9574c mov eax, dword ptr [0x12bbdc98] */
  EAX = (r32((uint32_t)(0x12bbdc98)));
  /* 12b95751 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b95753 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12b95757 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9575d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12b95760:;
  /* 12b95760 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95764 je 0x12b95774 */
  if (C.zf) goto L_12b95774;
  /* 12b95766 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b95769 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9576f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12b95772 jmp 0x12b9577b */
  goto L_12b9577b;
L_12b95774:;
  /* 12b95774 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12b9577b:;
  /* 12b9577b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12b9577e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12b95781 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12b95785 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12b95788 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9578e push edx */
  push32((uint32_t)(EDX));
  /* 12b9578f push 0x12bbb27c */
  push32((uint32_t)(0x12bbb27cu));
  /* 12b95794 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12b95797 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9579a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12b9579e push ecx */
  push32((uint32_t)(ECX));
  /* 12b9579f call 0x12b998e0 */
  push32(0x12b957a4u); f_12b998e0();
  /* 12b957a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b957a7 jmp 0x12b956e2 */
  goto L_12b956e2;
L_12b957ac:;
  /* 12b957ac mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12b957af mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12b957b4:;
  /* 12b957b4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12b957b7 push eax */
  push32((uint32_t)(EAX));
  /* 12b957b8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12b957bb push ecx */
  push32((uint32_t)(ECX));
  /* 12b957bc push 0x12bbb26c */
  push32((uint32_t)(0x12bbb26cu));
  /* 12b957c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b957c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b957c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b957c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b957c9 call 0x12b92a90 */
  push32(0x12b957ceu); f_12b92a90();
  /* 12b957ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b957d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b957d4 jne 0x12b957d7 */
  if (!C.zf) goto L_12b957d7;
  /* 12b957d6 int3  */
  x86_unimpl("int3 @ 0x12b957d6");
L_12b957d7:;
  /* 12b957d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b957d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b957db jne 0x12b957b4 */
  if (!C.zf) goto L_12b957b4;
  /* 12b957dd pop edi */
  EDI = (pop32());
  /* 12b957de pop esi */
  ESI = (pop32());
  /* 12b957df pop ebx */
  EBX = (pop32());
  /* 12b957e0 mov esp, ebp */
  ESP = (EBP);
  /* 12b957e2 pop ebp */
  EBP = (pop32());
  /* 12b957e3 ret  */
  ESPCHK(0x12b956d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057f0 @ 0x12b957f0 (116 bytes, 46 insns) */
void f_12b957f0(void) {
  FTRACE(0x12b957f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b957f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b957f1 mov ebp, esp */
  EBP = (ESP);
  /* 12b957f3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b957f6 push ebx */
  push32((uint32_t)(EBX));
  /* 12b957f7 push esi */
  push32((uint32_t)(ESI));
  /* 12b957f8 push edi */
  push32((uint32_t)(EDI));
  /* 12b957f9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12b957fc push eax */
  push32((uint32_t)(EAX));
  /* 12b957fd call 0x12b95170 */
  push32(0x12b95802u); f_12b95170();
  /* 12b95802 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95805 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95809 jne 0x12b95824 */
  if (!C.zf) goto L_12b95824;
  /* 12b9580b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9580f jne 0x12b95824 */
  if (!C.zf) goto L_12b95824;
  /* 12b95811 mov ecx, dword ptr [0x12bbda84] */
  ECX = (r32((uint32_t)(0x12bbda84)));
  /* 12b95817 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9581a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9581c je 0x12b9585b */
  if (C.zf) goto L_12b9585b;
  /* 12b9581e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95822 je 0x12b9585b */
  if (C.zf) goto L_12b9585b;
L_12b95824:;
  /* 12b95824 push 0x12bbb284 */
  push32((uint32_t)(0x12bbb284u));
  /* 12b95829 push 0x12bbac50 */
  push32((uint32_t)(0x12bbac50u));
  /* 12b9582e push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95830 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95832 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95834 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95836 call 0x12b92a90 */
  push32(0x12b9583bu); f_12b92a90();
  /* 12b9583b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9583e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95841 jne 0x12b95844 */
  if (!C.zf) goto L_12b95844;
  /* 12b95843 int3  */
  x86_unimpl("int3 @ 0x12b95843");
L_12b95844:;
  /* 12b95844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b95846 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b95848 jne 0x12b95824 */
  if (!C.zf) goto L_12b95824;
  /* 12b9584a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9584c call 0x12b95410 */
  push32(0x12b95851u); f_12b95410();
  /* 12b95851 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95854 mov eax, 1 */
  EAX = (0x1u);
  /* 12b95859 jmp 0x12b9585d */
  goto L_12b9585d;
L_12b9585b:;
  /* 12b9585b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b9585d:;
  /* 12b9585d pop edi */
  EDI = (pop32());
  /* 12b9585e pop esi */
  ESI = (pop32());
  /* 12b9585f pop ebx */
  EBX = (pop32());
  /* 12b95860 mov esp, ebp */
  ESP = (EBP);
  /* 12b95862 pop ebp */
  EBP = (pop32());
  /* 12b95863 ret  */
  ESPCHK(0x12b957f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005870 @ 0x12b95870 (197 bytes, 79 insns) */
void f_12b95870(void) {
  FTRACE(0x12b95870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b95870 push ebp */
  push32((uint32_t)(EBP));
  /* 12b95871 mov ebp, esp */
  EBP = (ESP);
  /* 12b95873 push ecx */
  push32((uint32_t)(ECX));
  /* 12b95874 push ebx */
  push32((uint32_t)(EBX));
  /* 12b95875 push esi */
  push32((uint32_t)(ESI));
  /* 12b95876 push edi */
  push32((uint32_t)(EDI));
  /* 12b95877 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9587b jne 0x12b95882 */
  if (!C.zf) goto L_12b95882;
  /* 12b9587d jmp 0x12b9592e */
  goto L_12b9592e;
L_12b95882:;
  /* 12b95882 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b95889 jmp 0x12b95894 */
  goto L_12b95894;
L_12b9588b:;
  /* 12b9588b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9588e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95891 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b95894:;
  /* 12b95894 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95898 jge 0x12b958de */
  if ((C.sf==C.of)) goto L_12b958de;
L_12b9589a:;
  /* 12b9589a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9589d mov edx, dword ptr [ecx*4 + 0x12bbda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12bbda94)));
  /* 12b958a4 push edx */
  push32((uint32_t)(EDX));
  /* 12b958a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b958a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b958ab mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12b958af push edx */
  push32((uint32_t)(EDX));
  /* 12b958b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b958b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b958b6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12b958ba push edx */
  push32((uint32_t)(EDX));
  /* 12b958bb push 0x12bbb2e0 */
  push32((uint32_t)(0x12bbb2e0u));
  /* 12b958c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b958c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b958c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b958c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b958c8 call 0x12b92a90 */
  push32(0x12b958cdu); f_12b92a90();
  /* 12b958cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b958d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b958d3 jne 0x12b958d6 */
  if (!C.zf) goto L_12b958d6;
  /* 12b958d5 int3  */
  x86_unimpl("int3 @ 0x12b958d5");
L_12b958d6:;
  /* 12b958d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b958d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b958da jne 0x12b9589a */
  if (!C.zf) goto L_12b9589a;
  /* 12b958dc jmp 0x12b9588b */
  goto L_12b9588b;
L_12b958de:;
  /* 12b958de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b958e1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12b958e4 push edx */
  push32((uint32_t)(EDX));
  /* 12b958e5 push 0x12bbb2bc */
  push32((uint32_t)(0x12bbb2bcu));
  /* 12b958ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12b958ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12b958ee push 0 */
  push32((uint32_t)(0x0u));
  /* 12b958f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b958f2 call 0x12b92a90 */
  push32(0x12b958f7u); f_12b92a90();
  /* 12b958f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b958fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b958fd jne 0x12b95900 */
  if (!C.zf) goto L_12b95900;
  /* 12b958ff int3  */
  x86_unimpl("int3 @ 0x12b958ff");
L_12b95900:;
  /* 12b95900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b95902 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b95904 jne 0x12b958de */
  if (!C.zf) goto L_12b958de;
L_12b95906:;
  /* 12b95906 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95909 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12b9590c push edx */
  push32((uint32_t)(EDX));
  /* 12b9590d push 0x12bbb29c */
  push32((uint32_t)(0x12bbb29cu));
  /* 12b95912 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95914 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95916 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95918 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9591a call 0x12b92a90 */
  push32(0x12b9591fu); f_12b92a90();
  /* 12b9591f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95922 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95925 jne 0x12b95928 */
  if (!C.zf) goto L_12b95928;
  /* 12b95927 int3  */
  x86_unimpl("int3 @ 0x12b95927");
L_12b95928:;
  /* 12b95928 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9592a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9592c jne 0x12b95906 */
  if (!C.zf) goto L_12b95906;
L_12b9592e:;
  /* 12b9592e pop edi */
  EDI = (pop32());
  /* 12b9592f pop esi */
  ESI = (pop32());
  /* 12b95930 pop ebx */
  EBX = (pop32());
  /* 12b95931 mov esp, ebp */
  ESP = (EBP);
  /* 12b95933 pop ebp */
  EBP = (pop32());
  /* 12b95934 ret  */
  ESPCHK(0x12b95870u, _esp0);
  ESP += 4; return;
}

/* FUN_10005940 @ 0x12b95940 (329 bytes, 102 insns) */
void f_12b95940(void) {
  FTRACE(0x12b95940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b95940 push ebp */
  push32((uint32_t)(EBP));
  /* 12b95941 mov ebp, esp */
  EBP = (ESP);
  /* 12b95943 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b95946 cmp dword ptr [0x12bc0fb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0fb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9594d jne 0x12b95954 */
  if (!C.zf) goto L_12b95954;
  /* 12b9594f call 0x12b9a280 */
  push32(0x12b95954u); f_12b9a280();
L_12b95954:;
  /* 12b95954 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12b9595b mov eax, dword ptr [0x12bbf470] */
  EAX = (r32((uint32_t)(0x12bbf470)));
  /* 12b95960 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b95963:;
  /* 12b95963 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95966 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b95969 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9596b je 0x12b95999 */
  if (C.zf) goto L_12b95999;
  /* 12b9596d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95970 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b95973 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95976 je 0x12b95981 */
  if (C.zf) goto L_12b95981;
  /* 12b95978 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9597b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9597e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12b95981:;
  /* 12b95981 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95984 push eax */
  push32((uint32_t)(EAX));
  /* 12b95985 call 0x12b96800 */
  push32(0x12b9598au); f_12b96800();
  /* 12b9598a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9598d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95990 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12b95994 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b95997 jmp 0x12b95963 */
  goto L_12b95963;
L_12b95999:;
  /* 12b95999 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12b9599b push 0x12bbb300 */
  push32((uint32_t)(0x12bbb300u));
  /* 12b959a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b959a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b959a5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12b959ac push ecx */
  push32((uint32_t)(ECX));
  /* 12b959ad call 0x12b939d0 */
  push32(0x12b959b2u); f_12b939d0();
  /* 12b959b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b959b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b959b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b959bb mov dword ptr [0x12bbf4a4], edx */
  w32((uint32_t)(0x12bbf4a4), (EDX));
  /* 12b959c1 cmp dword ptr [0x12bbf4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b959c8 jne 0x12b959d4 */
  if (!C.zf) goto L_12b959d4;
  /* 12b959ca push 9 */
  push32((uint32_t)(0x9u));
  /* 12b959cc call 0x12b92940 */
  push32(0x12b959d1u); f_12b92940();
  /* 12b959d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b959d4:;
  /* 12b959d4 mov eax, dword ptr [0x12bbf470] */
  EAX = (r32((uint32_t)(0x12bbf470)));
  /* 12b959d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b959dc jmp 0x12b959e7 */
  goto L_12b959e7;
L_12b959de:;
  /* 12b959de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b959e1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b959e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b959e7:;
  /* 12b959e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b959ea movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b959ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b959ef je 0x12b95a57 */
  if (C.zf) goto L_12b95a57;
  /* 12b959f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b959f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12b959f5 call 0x12b96800 */
  push32(0x12b959fau); f_12b96800();
  /* 12b959fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b959fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95a00 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12b95a03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95a06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b95a09 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95a0c je 0x12b95a55 */
  if (C.zf) goto L_12b95a55;
  /* 12b95a0e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12b95a10 push 0x12bbb300 */
  push32((uint32_t)(0x12bbb300u));
  /* 12b95a15 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b95a17 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b95a1a push ecx */
  push32((uint32_t)(ECX));
  /* 12b95a1b call 0x12b939d0 */
  push32(0x12b95a20u); f_12b939d0();
  /* 12b95a20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95a23 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b95a26 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12b95a28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b95a2b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95a2e jne 0x12b95a3a */
  if (!C.zf) goto L_12b95a3a;
  /* 12b95a30 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b95a32 call 0x12b92940 */
  push32(0x12b95a37u); f_12b92940();
  /* 12b95a37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b95a3a:;
  /* 12b95a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95a3d push ecx */
  push32((uint32_t)(ECX));
  /* 12b95a3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b95a41 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b95a43 push eax */
  push32((uint32_t)(EAX));
  /* 12b95a44 call 0x12b96980 */
  push32(0x12b95a49u); f_12b96980();
  /* 12b95a49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95a4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b95a4f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95a52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12b95a55:;
  /* 12b95a55 jmp 0x12b959de */
  goto L_12b959de;
L_12b95a57:;
  /* 12b95a57 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b95a59 mov edx, dword ptr [0x12bbf470] */
  EDX = (r32((uint32_t)(0x12bbf470)));
  /* 12b95a5f push edx */
  push32((uint32_t)(EDX));
  /* 12b95a60 call 0x12b94460 */
  push32(0x12b95a65u); f_12b94460();
  /* 12b95a65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95a68 mov dword ptr [0x12bbf470], 0 */
  w32((uint32_t)(0x12bbf470), (0x0u));
  /* 12b95a72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b95a75 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12b95a7b mov dword ptr [0x12bc0fa0], 1 */
  w32((uint32_t)(0x12bc0fa0), (0x1u));
  /* 12b95a85 mov esp, ebp */
  ESP = (EBP);
  /* 12b95a87 pop ebp */
  EBP = (pop32());
  /* 12b95a88 ret  */
  ESPCHK(0x12b95940u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x12b95a90 (216 bytes, 69 insns) */
void f_12b95a90(void) {
  FTRACE(0x12b95a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b95a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12b95a91 mov ebp, esp */
  EBP = (ESP);
  /* 12b95a93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b95a96 cmp dword ptr [0x12bc0fb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0fb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95a9d jne 0x12b95aa4 */
  if (!C.zf) goto L_12b95aa4;
  /* 12b95a9f call 0x12b9a280 */
  push32(0x12b95aa4u); f_12b9a280();
L_12b95aa4:;
  /* 12b95aa4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12b95aa9 push 0x12bbf4e0 */
  push32((uint32_t)(0x12bbf4e0u));
  /* 12b95aae push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95ab0 call dword ptr [0x12bc128c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc128c))), 0x12b95ab6u);
  /* 12b95ab6 mov dword ptr [0x12bbf4b4], 0x12bbf4e0 */
  w32((uint32_t)(0x12bbf4b4), (0x12bbf4e0u));
  /* 12b95ac0 mov eax, dword ptr [0x12bc0fcc] */
  EAX = (r32((uint32_t)(0x12bc0fcc)));
  /* 12b95ac5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b95ac8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b95aca jne 0x12b95ad7 */
  if (!C.zf) goto L_12b95ad7;
  /* 12b95acc mov edx, dword ptr [0x12bbf4b4] */
  EDX = (r32((uint32_t)(0x12bbf4b4)));
  /* 12b95ad2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12b95ad5 jmp 0x12b95adf */
  goto L_12b95adf;
L_12b95ad7:;
  /* 12b95ad7 mov eax, dword ptr [0x12bc0fcc] */
  EAX = (r32((uint32_t)(0x12bc0fcc)));
  /* 12b95adc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12b95adf:;
  /* 12b95adf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b95ae2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12b95ae5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12b95ae8 push edx */
  push32((uint32_t)(EDX));
  /* 12b95ae9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12b95aec push eax */
  push32((uint32_t)(EAX));
  /* 12b95aed push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95aef push 0 */
  push32((uint32_t)(0x0u));
  /* 12b95af1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b95af4 push ecx */
  push32((uint32_t)(ECX));
  /* 12b95af5 call 0x12b95b70 */
  push32(0x12b95afau); f_12b95b70();
  /* 12b95afa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95afd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12b95b02 push 0x12bbb30c */
  push32((uint32_t)(0x12bbb30cu));
  /* 12b95b07 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b95b09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b95b0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95b0f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12b95b12 push ecx */
  push32((uint32_t)(ECX));
  /* 12b95b13 call 0x12b939d0 */
  push32(0x12b95b18u); f_12b939d0();
  /* 12b95b18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95b1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b95b1e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95b22 jne 0x12b95b2e */
  if (!C.zf) goto L_12b95b2e;
  /* 12b95b24 push 8 */
  push32((uint32_t)(0x8u));
  /* 12b95b26 call 0x12b92940 */
  push32(0x12b95b2bu); f_12b92940();
  /* 12b95b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b95b2e:;
  /* 12b95b2e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12b95b31 push edx */
  push32((uint32_t)(EDX));
  /* 12b95b32 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12b95b35 push eax */
  push32((uint32_t)(EAX));
  /* 12b95b36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b95b39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b95b3c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12b95b3f push eax */
  push32((uint32_t)(EAX));
  /* 12b95b40 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b95b43 push ecx */
  push32((uint32_t)(ECX));
  /* 12b95b44 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b95b47 push edx */
  push32((uint32_t)(EDX));
  /* 12b95b48 call 0x12b95b70 */
  push32(0x12b95b4du); f_12b95b70();
  /* 12b95b4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95b50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b95b53 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b95b56 mov dword ptr [0x12bbf498], eax */
  w32((uint32_t)(0x12bbf498), (EAX));
  /* 12b95b5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b95b5e mov dword ptr [0x12bbf49c], ecx */
  w32((uint32_t)(0x12bbf49c), (ECX));
  /* 12b95b64 mov esp, ebp */
  ESP = (EBP);
  /* 12b95b66 pop ebp */
  EBP = (pop32());
  /* 12b95b67 ret  */
  ESPCHK(0x12b95a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b70 @ 0x12b95b70 (1060 bytes, 360 insns) */
void f_12b95b70(void) {
  FTRACE(0x12b95b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b95b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12b95b71 mov ebp, esp */
  EBP = (ESP);
  /* 12b95b73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b95b76 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95b79 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12b95b7f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b95b82 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12b95b88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b95b8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b95b8e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95b92 je 0x12b95ba5 */
  if (C.zf) goto L_12b95ba5;
  /* 12b95b94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b95b97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95b9a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12b95b9c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b95b9f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95ba2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12b95ba5:;
  /* 12b95ba5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95ba8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b95bab cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95bae jne 0x12b95c7d */
  if (!C.zf) goto L_12b95c7d;
L_12b95bb4:;
  /* 12b95bb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95bb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95bba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b95bbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95bc0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b95bc3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95bc6 je 0x12b95c42 */
  if (C.zf) goto L_12b95c42;
  /* 12b95bc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95bcb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b95bce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b95bd0 je 0x12b95c42 */
  if (C.zf) goto L_12b95c42;
  /* 12b95bd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95bd5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b95bd7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b95bd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b95bdb mov al, byte ptr [edx + 0x12bc0d01] */
  AL = (r8((uint32_t)(EDX + 0x12bc0d01)));
  /* 12b95be1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12b95be4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b95be6 je 0x12b95c17 */
  if (C.zf) goto L_12b95c17;
  /* 12b95be8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95beb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b95bed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95bf0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95bf3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12b95bf5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95bf9 je 0x12b95c17 */
  if (C.zf) goto L_12b95c17;
  /* 12b95bfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95bfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95c01 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12b95c03 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12b95c05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95c08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95c0b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12b95c0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95c11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95c14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b95c17:;
  /* 12b95c17 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95c1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b95c1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95c1f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95c22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12b95c24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95c28 je 0x12b95c3d */
  if (C.zf) goto L_12b95c3d;
  /* 12b95c2a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95c2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95c30 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b95c32 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12b95c34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95c37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95c3a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12b95c3d:;
  /* 12b95c3d jmp 0x12b95bb4 */
  goto L_12b95bb4;
L_12b95c42:;
  /* 12b95c42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95c45 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b95c47 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95c4a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95c4d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12b95c4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95c53 je 0x12b95c64 */
  if (C.zf) goto L_12b95c64;
  /* 12b95c55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95c58 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12b95c5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95c5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95c61 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12b95c64:;
  /* 12b95c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95c67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b95c6a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95c6d jne 0x12b95c78 */
  if (!C.zf) goto L_12b95c78;
  /* 12b95c6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95c72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95c75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b95c78:;
  /* 12b95c78 jmp 0x12b95d4c */
  goto L_12b95d4c;
L_12b95c7d:;
  /* 12b95c7d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95c80 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b95c82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95c85 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95c88 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12b95c8a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95c8e je 0x12b95ca3 */
  if (C.zf) goto L_12b95ca3;
  /* 12b95c90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95c93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95c96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b95c98 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12b95c9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95c9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95ca0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12b95ca3:;
  /* 12b95ca3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95ca6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b95ca8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12b95cab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95cae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95cb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b95cb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b95cb7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b95cbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b95cbf mov dl, byte ptr [ecx + 0x12bc0d01] */
  DL = (r8((uint32_t)(ECX + 0x12bc0d01)));
  /* 12b95cc5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12b95cc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b95cca je 0x12b95cfb */
  if (C.zf) goto L_12b95cfb;
  /* 12b95ccc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95ccf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b95cd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95cd4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95cd7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12b95cd9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95cdd je 0x12b95cf2 */
  if (C.zf) goto L_12b95cf2;
  /* 12b95cdf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95ce2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95ce5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b95ce7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12b95ce9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95cec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95cef mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12b95cf2:;
  /* 12b95cf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95cf5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95cf8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b95cfb:;
  /* 12b95cfb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b95cfe and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b95d04 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95d07 je 0x12b95d27 */
  if (C.zf) goto L_12b95d27;
  /* 12b95d09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b95d0c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b95d11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b95d13 je 0x12b95d27 */
  if (C.zf) goto L_12b95d27;
  /* 12b95d15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b95d18 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b95d1e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95d21 jne 0x12b95c7d */
  if (!C.zf) goto L_12b95c7d;
L_12b95d27:;
  /* 12b95d27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b95d2a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b95d30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b95d32 jne 0x12b95d3f */
  if (!C.zf) goto L_12b95d3f;
  /* 12b95d34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95d37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b95d3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b95d3d jmp 0x12b95d4c */
  goto L_12b95d4c;
L_12b95d3f:;
  /* 12b95d3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95d43 je 0x12b95d4c */
  if (C.zf) goto L_12b95d4c;
  /* 12b95d45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95d48 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12b95d4c:;
  /* 12b95d4c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12b95d53:;
  /* 12b95d53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95d56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b95d59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b95d5b je 0x12b95d7e */
  if (C.zf) goto L_12b95d7e;
L_12b95d5d:;
  /* 12b95d5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95d60 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b95d63 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95d66 je 0x12b95d73 */
  if (C.zf) goto L_12b95d73;
  /* 12b95d68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95d6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b95d6e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95d71 jne 0x12b95d7e */
  if (!C.zf) goto L_12b95d7e;
L_12b95d73:;
  /* 12b95d73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95d76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95d79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b95d7c jmp 0x12b95d5d */
  goto L_12b95d5d;
L_12b95d7e:;
  /* 12b95d7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95d81 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b95d84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b95d86 jne 0x12b95d8d */
  if (!C.zf) goto L_12b95d8d;
  /* 12b95d88 jmp 0x12b95f6b */
  goto L_12b95f6b;
L_12b95d8d:;
  /* 12b95d8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95d91 je 0x12b95da4 */
  if (C.zf) goto L_12b95da4;
  /* 12b95d93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b95d96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95d99 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12b95d9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b95d9e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95da1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12b95da4:;
  /* 12b95da4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b95da7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b95da9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95dac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b95daf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12b95db1:;
  /* 12b95db1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12b95db8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12b95dbf:;
  /* 12b95dbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95dc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b95dc5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95dc8 jne 0x12b95dde */
  if (!C.zf) goto L_12b95dde;
  /* 12b95dca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95dcd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95dd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b95dd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b95dd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95dd9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12b95ddc jmp 0x12b95dbf */
  goto L_12b95dbf;
L_12b95dde:;
  /* 12b95dde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95de1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b95de4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95de7 jne 0x12b95e3a */
  if (!C.zf) goto L_12b95e3a;
  /* 12b95de9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b95dec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b95dee mov ecx, 2 */
  ECX = (0x2u);
  /* 12b95df3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12b95df5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b95df7 jne 0x12b95e32 */
  if (!C.zf) goto L_12b95e32;
  /* 12b95df9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95dfd je 0x12b95e1f */
  if (C.zf) goto L_12b95e1f;
  /* 12b95dff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95e02 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12b95e06 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95e09 jne 0x12b95e16 */
  if (!C.zf) goto L_12b95e16;
  /* 12b95e0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95e0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95e11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b95e14 jmp 0x12b95e1d */
  goto L_12b95e1d;
L_12b95e16:;
  /* 12b95e16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12b95e1d:;
  /* 12b95e1d jmp 0x12b95e26 */
  goto L_12b95e26;
L_12b95e1f:;
  /* 12b95e1f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12b95e26:;
  /* 12b95e26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b95e28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95e2c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12b95e2f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12b95e32:;
  /* 12b95e32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b95e35 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12b95e37 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12b95e3a:;
  /* 12b95e3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b95e3d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b95e40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b95e43 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12b95e46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b95e48 je 0x12b95e6e */
  if (C.zf) goto L_12b95e6e;
  /* 12b95e4a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95e4e je 0x12b95e5f */
  if (C.zf) goto L_12b95e5f;
  /* 12b95e50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95e53 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12b95e56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95e59 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95e5c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12b95e5f:;
  /* 12b95e5f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95e62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b95e64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95e67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95e6a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12b95e6c jmp 0x12b95e3a */
  goto L_12b95e3a;
L_12b95e6e:;
  /* 12b95e6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95e71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b95e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b95e76 je 0x12b95e94 */
  if (C.zf) goto L_12b95e94;
  /* 12b95e78 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95e7c jne 0x12b95e99 */
  if (!C.zf) goto L_12b95e99;
  /* 12b95e7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95e81 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b95e84 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95e87 je 0x12b95e94 */
  if (C.zf) goto L_12b95e94;
  /* 12b95e89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95e8c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b95e8f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95e92 jne 0x12b95e99 */
  if (!C.zf) goto L_12b95e99;
L_12b95e94:;
  /* 12b95e94 jmp 0x12b95f44 */
  goto L_12b95f44;
L_12b95e99:;
  /* 12b95e99 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95e9d je 0x12b95f36 */
  if (C.zf) goto L_12b95f36;
  /* 12b95ea3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95ea7 je 0x12b95efd */
  if (C.zf) goto L_12b95efd;
  /* 12b95ea9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95eac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b95eae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12b95eb0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b95eb2 mov cl, byte ptr [eax + 0x12bc0d01] */
  CL = (r8((uint32_t)(EAX + 0x12bc0d01)));
  /* 12b95eb8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12b95ebb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b95ebd je 0x12b95ee8 */
  if (C.zf) goto L_12b95ee8;
  /* 12b95ebf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95ec2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95ec5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12b95ec7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12b95ec9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95ecc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95ecf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12b95ed2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95ed5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95ed8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b95edb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95ede mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b95ee0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95ee3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95ee6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12b95ee8:;
  /* 12b95ee8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95eeb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95eee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12b95ef0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12b95ef2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95ef5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95ef8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12b95efb jmp 0x12b95f29 */
  goto L_12b95f29;
L_12b95efd:;
  /* 12b95efd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95f00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b95f02 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12b95f04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b95f06 mov cl, byte ptr [eax + 0x12bc0d01] */
  CL = (r8((uint32_t)(EAX + 0x12bc0d01)));
  /* 12b95f0c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12b95f0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b95f11 je 0x12b95f29 */
  if (C.zf) goto L_12b95f29;
  /* 12b95f13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95f16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95f19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b95f1c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95f1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b95f21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95f24 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95f27 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12b95f29:;
  /* 12b95f29 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95f2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b95f2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95f31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95f34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12b95f36:;
  /* 12b95f36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b95f39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95f3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b95f3f jmp 0x12b95db1 */
  goto L_12b95db1;
L_12b95f44:;
  /* 12b95f44 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95f48 je 0x12b95f59 */
  if (C.zf) goto L_12b95f59;
  /* 12b95f4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95f4d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12b95f50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b95f53 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95f56 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12b95f59:;
  /* 12b95f59 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95f5c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b95f5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95f61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b95f64 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12b95f66 jmp 0x12b95d53 */
  goto L_12b95d53;
L_12b95f6b:;
  /* 12b95f6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95f6f je 0x12b95f83 */
  if (C.zf) goto L_12b95f83;
  /* 12b95f71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b95f74 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12b95f7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b95f7d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95f80 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12b95f83:;
  /* 12b95f83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b95f86 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b95f88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b95f8b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b95f8e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12b95f90 mov esp, ebp */
  ESP = (EBP);
  /* 12b95f92 pop ebp */
  EBP = (pop32());
  /* 12b95f93 ret  */
  ESPCHK(0x12b95b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fa0 @ 0x12b95fa0 (537 bytes, 173 insns) */
void f_12b95fa0(void) {
  FTRACE(0x12b95fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b95fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b95fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12b95fa3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b95fa6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12b95fad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12b95fb4 cmp dword ptr [0x12bbf5e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf5e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95fbb jne 0x12b95ffa */
  if (!C.zf) goto L_12b95ffa;
  /* 12b95fbd call dword ptr [0x12bc12e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e8))), 0x12b95fc3u);
  /* 12b95fc3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12b95fc6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95fca je 0x12b95fd8 */
  if (C.zf) goto L_12b95fd8;
  /* 12b95fcc mov dword ptr [0x12bbf5e4], 1 */
  w32((uint32_t)(0x12bbf5e4), (0x1u));
  /* 12b95fd6 jmp 0x12b95ffa */
  goto L_12b95ffa;
L_12b95fd8:;
  /* 12b95fd8 call dword ptr [0x12bc12e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e4))), 0x12b95fdeu);
  /* 12b95fde mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b95fe1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b95fe5 je 0x12b95ff3 */
  if (C.zf) goto L_12b95ff3;
  /* 12b95fe7 mov dword ptr [0x12bbf5e4], 2 */
  w32((uint32_t)(0x12bbf5e4), (0x2u));
  /* 12b95ff1 jmp 0x12b95ffa */
  goto L_12b95ffa;
L_12b95ff3:;
  /* 12b95ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b95ff5 jmp 0x12b961b5 */
  goto L_12b961b5;
L_12b95ffa:;
  /* 12b95ffa cmp dword ptr [0x12bbf5e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf5e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96001 jne 0x12b960fe */
  if (!C.zf) goto L_12b960fe;
  /* 12b96007 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9600b jne 0x12b96023 */
  if (!C.zf) goto L_12b96023;
  /* 12b9600d call dword ptr [0x12bc12e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e8))), 0x12b96013u);
  /* 12b96013 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12b96016 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9601a jne 0x12b96023 */
  if (!C.zf) goto L_12b96023;
  /* 12b9601c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9601e jmp 0x12b961b5 */
  goto L_12b961b5;
L_12b96023:;
  /* 12b96023 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b96026 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12b96029:;
  /* 12b96029 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9602c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9602e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12b96031 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b96033 je 0x12b96055 */
  if (C.zf) goto L_12b96055;
  /* 12b96035 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96038 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9603b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9603e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96041 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b96043 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12b96046 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b96048 jne 0x12b96053 */
  if (!C.zf) goto L_12b96053;
  /* 12b9604a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9604d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96050 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12b96053:;
  /* 12b96053 jmp 0x12b96029 */
  goto L_12b96029;
L_12b96055:;
  /* 12b96055 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96058 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9605b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12b9605d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96060 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b96063 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96065 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96067 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96069 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9606b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9606e push edx */
  push32((uint32_t)(EDX));
  /* 12b9606f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b96072 push eax */
  push32((uint32_t)(EAX));
  /* 12b96073 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96075 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96077 call dword ptr [0x12bc12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e0))), 0x12b9607du);
  /* 12b9607d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12b96080 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96084 je 0x12b960a4 */
  if (C.zf) goto L_12b960a4;
  /* 12b96086 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12b96088 push 0x12bbb318 */
  push32((uint32_t)(0x12bbb318u));
  /* 12b9608d push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9608f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b96092 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96093 call 0x12b939d0 */
  push32(0x12b96098u); f_12b939d0();
  /* 12b96098 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9609b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b9609e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b960a2 jne 0x12b960b5 */
  if (!C.zf) goto L_12b960b5;
L_12b960a4:;
  /* 12b960a4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b960a7 push edx */
  push32((uint32_t)(EDX));
  /* 12b960a8 call dword ptr [0x12bc12dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12dc))), 0x12b960aeu);
  /* 12b960ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b960b0 jmp 0x12b961b5 */
  goto L_12b961b5;
L_12b960b5:;
  /* 12b960b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b960b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b960b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b960bc push eax */
  push32((uint32_t)(EAX));
  /* 12b960bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b960c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12b960c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b960c4 push edx */
  push32((uint32_t)(EDX));
  /* 12b960c5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b960c8 push eax */
  push32((uint32_t)(EAX));
  /* 12b960c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b960cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12b960cd call dword ptr [0x12bc12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e0))), 0x12b960d3u);
  /* 12b960d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b960d5 jne 0x12b960ec */
  if (!C.zf) goto L_12b960ec;
  /* 12b960d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b960d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b960dc push ecx */
  push32((uint32_t)(ECX));
  /* 12b960dd call 0x12b94460 */
  push32(0x12b960e2u); f_12b94460();
  /* 12b960e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b960e5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12b960ec:;
  /* 12b960ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b960ef push edx */
  push32((uint32_t)(EDX));
  /* 12b960f0 call dword ptr [0x12bc12dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12dc))), 0x12b960f6u);
  /* 12b960f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b960f9 jmp 0x12b961b5 */
  goto L_12b961b5;
L_12b960fe:;
  /* 12b960fe cmp dword ptr [0x12bbf5e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf5e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96105 jne 0x12b961b3 */
  if (!C.zf) goto L_12b961b3;
  /* 12b9610b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9610f jne 0x12b96127 */
  if (!C.zf) goto L_12b96127;
  /* 12b96111 call dword ptr [0x12bc12e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e4))), 0x12b96117u);
  /* 12b96117 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b9611a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9611e jne 0x12b96127 */
  if (!C.zf) goto L_12b96127;
  /* 12b96120 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b96122 jmp 0x12b961b5 */
  goto L_12b961b5;
L_12b96127:;
  /* 12b96127 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9612a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12b9612d:;
  /* 12b9612d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b96130 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b96133 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b96135 je 0x12b96155 */
  if (C.zf) goto L_12b96155;
  /* 12b96137 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9613a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9613d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b96140 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b96143 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b96146 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b96148 jne 0x12b96153 */
  if (!C.zf) goto L_12b96153;
  /* 12b9614a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9614d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96150 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12b96153:;
  /* 12b96153 jmp 0x12b9612d */
  goto L_12b9612d;
L_12b96155:;
  /* 12b96155 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b96158 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9615b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9615e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12b96161 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12b96166 push 0x12bbb318 */
  push32((uint32_t)(0x12bbb318u));
  /* 12b9616b push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9616d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b96170 push edx */
  push32((uint32_t)(EDX));
  /* 12b96171 call 0x12b939d0 */
  push32(0x12b96176u); f_12b939d0();
  /* 12b96176 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96179 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b9617c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96180 jne 0x12b96190 */
  if (!C.zf) goto L_12b96190;
  /* 12b96182 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b96185 push eax */
  push32((uint32_t)(EAX));
  /* 12b96186 call dword ptr [0x12bc122c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc122c))), 0x12b9618cu);
  /* 12b9618c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9618e jmp 0x12b961b5 */
  goto L_12b961b5;
L_12b96190:;
  /* 12b96190 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b96193 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96194 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b96197 push edx */
  push32((uint32_t)(EDX));
  /* 12b96198 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9619b push eax */
  push32((uint32_t)(EAX));
  /* 12b9619c call 0x12b9a2b0 */
  push32(0x12b961a1u); f_12b9a2b0();
  /* 12b961a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b961a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b961a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12b961a8 call dword ptr [0x12bc122c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc122c))), 0x12b961aeu);
  /* 12b961ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b961b1 jmp 0x12b961b5 */
  goto L_12b961b5;
L_12b961b3:;
  /* 12b961b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b961b5:;
  /* 12b961b5 mov esp, ebp */
  ESP = (EBP);
  /* 12b961b7 pop ebp */
  EBP = (pop32());
  /* 12b961b8 ret  */
  ESPCHK(0x12b95fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061c0 @ 0x12b961c0 (77 bytes, 25 insns) */
void f_12b961c0(void) {
  FTRACE(0x12b961c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b961c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b961c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b961c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b961c5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12b961ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b961cc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b961d0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12b961d3 push eax */
  push32((uint32_t)(EAX));
  /* 12b961d4 call dword ptr [0x12bc12f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12f0))), 0x12b961dau);
  /* 12b961da mov dword ptr [0x12bc0e2c], eax */
  w32((uint32_t)(0x12bc0e2c), (EAX));
  /* 12b961df cmp dword ptr [0x12bc0e2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0e2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b961e6 jne 0x12b961ec */
  if (!C.zf) goto L_12b961ec;
  /* 12b961e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b961ea jmp 0x12b9620b */
  goto L_12b9620b;
L_12b961ec:;
  /* 12b961ec call 0x12b97c70 */
  push32(0x12b961f1u); f_12b97c70();
  /* 12b961f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b961f3 jne 0x12b96206 */
  if (!C.zf) goto L_12b96206;
  /* 12b961f5 mov ecx, dword ptr [0x12bc0e2c] */
  ECX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b961fb push ecx */
  push32((uint32_t)(ECX));
  /* 12b961fc call dword ptr [0x12bc12ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12ec))), 0x12b96202u);
  /* 12b96202 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b96204 jmp 0x12b9620b */
  goto L_12b9620b;
L_12b96206:;
  /* 12b96206 mov eax, 1 */
  EAX = (0x1u);
L_12b9620b:;
  /* 12b9620b pop ebp */
  EBP = (pop32());
  /* 12b9620c ret  */
  ESPCHK(0x12b961c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006210 @ 0x12b96210 (156 bytes, 48 insns) */
void f_12b96210(void) {
  FTRACE(0x12b96210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96210 push ebp */
  push32((uint32_t)(EBP));
  /* 12b96211 mov ebp, esp */
  EBP = (ESP);
  /* 12b96213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96216 mov eax, dword ptr [0x12bc0e28] */
  EAX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b9621b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9621e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b96225 jmp 0x12b96230 */
  goto L_12b96230;
L_12b96227:;
  /* 12b96227 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9622a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9622d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b96230:;
  /* 12b96230 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96233 cmp edx, dword ptr [0x12bc0e24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12bc0e24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96239 jge 0x12b96286 */
  if ((C.sf==C.of)) goto L_12b96286;
  /* 12b9623b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12b96240 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12b96245 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96248 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12b9624b push ecx */
  push32((uint32_t)(ECX));
  /* 12b9624c call dword ptr [0x12bc12f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12f8))), 0x12b96252u);
  /* 12b96252 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12b96257 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96259 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9625c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12b9625f push eax */
  push32((uint32_t)(EAX));
  /* 12b96260 call dword ptr [0x12bc12f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12f8))), 0x12b96266u);
  /* 12b96266 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96269 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12b9626c push edx */
  push32((uint32_t)(EDX));
  /* 12b9626d push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9626f mov eax, dword ptr [0x12bc0e2c] */
  EAX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b96274 push eax */
  push32((uint32_t)(EAX));
  /* 12b96275 call dword ptr [0x12bc12f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12f4))), 0x12b9627bu);
  /* 12b9627b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9627e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96281 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b96284 jmp 0x12b96227 */
  goto L_12b96227;
L_12b96286:;
  /* 12b96286 mov edx, dword ptr [0x12bc0e28] */
  EDX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b9628c push edx */
  push32((uint32_t)(EDX));
  /* 12b9628d push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9628f mov eax, dword ptr [0x12bc0e2c] */
  EAX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b96294 push eax */
  push32((uint32_t)(EAX));
  /* 12b96295 call dword ptr [0x12bc12f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12f4))), 0x12b9629bu);
  /* 12b9629b mov ecx, dword ptr [0x12bc0e2c] */
  ECX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b962a1 push ecx */
  push32((uint32_t)(ECX));
  /* 12b962a2 call dword ptr [0x12bc12ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12ec))), 0x12b962a8u);
  /* 12b962a8 mov esp, ebp */
  ESP = (EBP);
  /* 12b962aa pop ebp */
  EBP = (pop32());
  /* 12b962ab ret  */
  ESPCHK(0x12b96210u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12b962b0 (73 bytes, 19 insns) */
void f_12b962b0(void) {
  FTRACE(0x12b962b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b962b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b962b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b962b3 cmp dword ptr [0x12bbf478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b962ba je 0x12b962ce */
  if (C.zf) goto L_12b962ce;
  /* 12b962bc cmp dword ptr [0x12bbf478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b962c3 jne 0x12b962f7 */
  if (!C.zf) goto L_12b962f7;
  /* 12b962c5 cmp dword ptr [0x12bbf47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b962cc jne 0x12b962f7 */
  if (!C.zf) goto L_12b962f7;
L_12b962ce:;
  /* 12b962ce push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12b962d3 call 0x12b96300 */
  push32(0x12b962d8u); f_12b96300();
  /* 12b962d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b962db cmp dword ptr [0x12bbf5e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf5e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b962e2 je 0x12b962ea */
  if (C.zf) goto L_12b962ea;
  /* 12b962e4 call dword ptr [0x12bbf5e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf5e8))), 0x12b962eau);
L_12b962ea:;
  /* 12b962ea push 0xff */
  push32((uint32_t)(0xffu));
  /* 12b962ef call 0x12b96300 */
  push32(0x12b962f4u); f_12b96300();
  /* 12b962f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b962f7:;
  /* 12b962f7 pop ebp */
  EBP = (pop32());
  /* 12b962f8 ret  */
  ESPCHK(0x12b962b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006300 @ 0x12b96300 (447 bytes, 131 insns) */
void f_12b96300(void) {
  FTRACE(0x12b96300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96300 push ebp */
  push32((uint32_t)(EBP));
  /* 12b96301 mov ebp, esp */
  EBP = (ESP);
  /* 12b96303 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96309 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9630a push esi */
  push32((uint32_t)(ESI));
  /* 12b9630b push edi */
  push32((uint32_t)(EDI));
  /* 12b9630c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12b96313 jmp 0x12b9631e */
  goto L_12b9631e;
L_12b96315:;
  /* 12b96315 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96318 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9631b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12b9631e:;
  /* 12b9631e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96322 jae 0x12b96337 */
  if (!C.cf) goto L_12b96337;
  /* 12b96324 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96327 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9632a cmp edx, dword ptr [ecx*8 + 0x12bbdab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12bbdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96331 jne 0x12b96335 */
  if (!C.zf) goto L_12b96335;
  /* 12b96333 jmp 0x12b96337 */
  goto L_12b96337;
L_12b96335:;
  /* 12b96335 jmp 0x12b96315 */
  goto L_12b96315;
L_12b96337:;
  /* 12b96337 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9633a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9633d cmp ecx, dword ptr [eax*8 + 0x12bbdab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12bbdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96344 jne 0x12b964b8 */
  if (!C.zf) goto L_12b964b8;
  /* 12b9634a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96351 je 0x12b96374 */
  if (C.zf) goto L_12b96374;
  /* 12b96353 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96356 mov eax, dword ptr [edx*8 + 0x12bbdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12bbdab4)));
  /* 12b9635d push eax */
  push32((uint32_t)(EAX));
  /* 12b9635e push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96360 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96362 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96364 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b96366 call 0x12b92a90 */
  push32(0x12b9636bu); f_12b92a90();
  /* 12b9636b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9636e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96371 jne 0x12b96374 */
  if (!C.zf) goto L_12b96374;
  /* 12b96373 int3  */
  x86_unimpl("int3 @ 0x12b96373");
L_12b96374:;
  /* 12b96374 cmp dword ptr [0x12bbf478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9637b je 0x12b9638f */
  if (C.zf) goto L_12b9638f;
  /* 12b9637d cmp dword ptr [0x12bbf478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96384 jne 0x12b963c8 */
  if (!C.zf) goto L_12b963c8;
  /* 12b96386 cmp dword ptr [0x12bbf47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9638d jne 0x12b963c8 */
  if (!C.zf) goto L_12b963c8;
L_12b9638f:;
  /* 12b9638f push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96391 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12b96394 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96395 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96398 mov eax, dword ptr [edx*8 + 0x12bbdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12bbdab4)));
  /* 12b9639f push eax */
  push32((uint32_t)(EAX));
  /* 12b963a0 call 0x12b96800 */
  push32(0x12b963a5u); f_12b96800();
  /* 12b963a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b963a8 push eax */
  push32((uint32_t)(EAX));
  /* 12b963a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b963ac mov edx, dword ptr [ecx*8 + 0x12bbdab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12bbdab4)));
  /* 12b963b3 push edx */
  push32((uint32_t)(EDX));
  /* 12b963b4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12b963b6 call dword ptr [0x12bc1270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1270))), 0x12b963bcu);
  /* 12b963bc push eax */
  push32((uint32_t)(EAX));
  /* 12b963bd call dword ptr [0x12bc1274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1274))), 0x12b963c3u);
  /* 12b963c3 jmp 0x12b964b8 */
  goto L_12b964b8;
L_12b963c8:;
  /* 12b963c8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b963cf je 0x12b964b8 */
  if (C.zf) goto L_12b964b8;
  /* 12b963d5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12b963da lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12b963e0 push eax */
  push32((uint32_t)(EAX));
  /* 12b963e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b963e3 call dword ptr [0x12bc128c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc128c))), 0x12b963e9u);
  /* 12b963e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b963eb jne 0x12b96401 */
  if (!C.zf) goto L_12b96401;
  /* 12b963ed push 0x12bbab80 */
  push32((uint32_t)(0x12bbab80u));
  /* 12b963f2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12b963f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12b963f9 call 0x12b96980 */
  push32(0x12b963feu); f_12b96980();
  /* 12b963fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b96401:;
  /* 12b96401 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12b96407 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12b9640a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9640d push eax */
  push32((uint32_t)(EAX));
  /* 12b9640e call 0x12b96800 */
  push32(0x12b96413u); f_12b96800();
  /* 12b96413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96416 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96419 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9641c jbe 0x12b9644a */
  if ((C.cf||C.zf)) goto L_12b9644a;
  /* 12b9641e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12b96424 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96425 call 0x12b96800 */
  push32(0x12b9642au); f_12b96800();
  /* 12b9642a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9642d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b96430 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12b96434 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b96437 push 3 */
  push32((uint32_t)(0x3u));
  /* 12b96439 push 0x12bbab7c */
  push32((uint32_t)(0x12bbab7cu));
  /* 12b9643e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b96441 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96442 call 0x12b971f0 */
  push32(0x12b96447u); f_12b971f0();
  /* 12b96447 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9644a:;
  /* 12b9644a push 0x12bbb5d4 */
  push32((uint32_t)(0x12bbb5d4u));
  /* 12b9644f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12b96455 push edx */
  push32((uint32_t)(EDX));
  /* 12b96456 call 0x12b96980 */
  push32(0x12b9645bu); f_12b96980();
  /* 12b9645b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9645e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b96461 push eax */
  push32((uint32_t)(EAX));
  /* 12b96462 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12b96468 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96469 call 0x12b96990 */
  push32(0x12b9646eu); f_12b96990();
  /* 12b9646e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96471 push 0x12bbaaf4 */
  push32((uint32_t)(0x12bbaaf4u));
  /* 12b96476 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12b9647c push edx */
  push32((uint32_t)(EDX));
  /* 12b9647d call 0x12b96990 */
  push32(0x12b96482u); f_12b96990();
  /* 12b96482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96488 mov ecx, dword ptr [eax*8 + 0x12bbdab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12bbdab4)));
  /* 12b9648f push ecx */
  push32((uint32_t)(ECX));
  /* 12b96490 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12b96496 push edx */
  push32((uint32_t)(EDX));
  /* 12b96497 call 0x12b96990 */
  push32(0x12b9649cu); f_12b96990();
  /* 12b9649c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9649f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12b964a4 push 0x12bbb5ac */
  push32((uint32_t)(0x12bbb5acu));
  /* 12b964a9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12b964af push eax */
  push32((uint32_t)(EAX));
  /* 12b964b0 call 0x12b97130 */
  push32(0x12b964b5u); f_12b97130();
  /* 12b964b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b964b8:;
  /* 12b964b8 pop edi */
  EDI = (pop32());
  /* 12b964b9 pop esi */
  ESI = (pop32());
  /* 12b964ba pop ebx */
  EBX = (pop32());
  /* 12b964bb mov esp, ebp */
  ESP = (EBP);
  /* 12b964bd pop ebp */
  EBP = (pop32());
  /* 12b964be ret  */
  ESPCHK(0x12b96300u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12b964c0 (80 bytes, 27 insns) */
void f_12b964c0(void) {
  FTRACE(0x12b964c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b964c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b964c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b964c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b964c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b964cb jmp 0x12b964d6 */
  goto L_12b964d6;
L_12b964cd:;
  /* 12b964cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b964d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b964d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b964d6:;
  /* 12b964d6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b964da jae 0x12b964ef */
  if (!C.cf) goto L_12b964ef;
  /* 12b964dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b964df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b964e2 cmp edx, dword ptr [ecx*8 + 0x12bbdab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12bbdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b964e9 jne 0x12b964ed */
  if (!C.zf) goto L_12b964ed;
  /* 12b964eb jmp 0x12b964ef */
  goto L_12b964ef;
L_12b964ed:;
  /* 12b964ed jmp 0x12b964cd */
  goto L_12b964cd;
L_12b964ef:;
  /* 12b964ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b964f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b964f5 cmp ecx, dword ptr [eax*8 + 0x12bbdab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12bbdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b964fc jne 0x12b9650a */
  if (!C.zf) goto L_12b9650a;
  /* 12b964fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96501 mov eax, dword ptr [edx*8 + 0x12bbdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12bbdab4)));
  /* 12b96508 jmp 0x12b9650c */
  goto L_12b9650c;
L_12b9650a:;
  /* 12b9650a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b9650c:;
  /* 12b9650c mov esp, ebp */
  ESP = (EBP);
  /* 12b9650e pop ebp */
  EBP = (pop32());
  /* 12b9650f ret  */
  ESPCHK(0x12b964c0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12b96510 (66 bytes, 28 insns) */
void f_12b96510(void) {
  FTRACE(0x12b96510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96510 push ebp */
  push32((uint32_t)(EBP));
  /* 12b96511 mov ebp, esp */
  EBP = (ESP);
  /* 12b96513 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96517 jne 0x12b96537 */
  if (!C.zf) goto L_12b96537;
  /* 12b96519 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9651d jge 0x12b96537 */
  if ((C.sf==C.of)) goto L_12b96537;
  /* 12b9651f push 1 */
  push32((uint32_t)(0x1u));
  /* 12b96521 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b96524 push eax */
  push32((uint32_t)(EAX));
  /* 12b96525 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b96528 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96529 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9652c push edx */
  push32((uint32_t)(EDX));
  /* 12b9652d call 0x12b96560 */
  push32(0x12b96532u); f_12b96560();
  /* 12b96532 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96535 jmp 0x12b9654d */
  goto L_12b9654d;
L_12b96537:;
  /* 12b96537 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96539 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9653c push eax */
  push32((uint32_t)(EAX));
  /* 12b9653d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b96540 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96541 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b96544 push edx */
  push32((uint32_t)(EDX));
  /* 12b96545 call 0x12b96560 */
  push32(0x12b9654au); f_12b96560();
  /* 12b9654a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9654d:;
  /* 12b9654d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b96550 pop ebp */
  EBP = (pop32());
  /* 12b96551 ret  */
  ESPCHK(0x12b96510u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12b96560 (194 bytes, 71 insns) */
void f_12b96560(void) {
  FTRACE(0x12b96560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96560 push ebp */
  push32((uint32_t)(EBP));
  /* 12b96561 mov ebp, esp */
  EBP = (ESP);
  /* 12b96563 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96566 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b96569 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9656c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96570 je 0x12b96589 */
  if (C.zf) goto L_12b96589;
  /* 12b96572 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96575 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12b96578 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9657b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9657e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b96581 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b96584 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b96586 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12b96589:;
  /* 12b96589 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9658c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12b9658f:;
  /* 12b9658f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b96592 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b96594 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12b96597 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12b9659a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9659d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9659f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12b965a2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12b965a5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b965a9 jbe 0x12b965c1 */
  if ((C.cf||C.zf)) goto L_12b965c1;
  /* 12b965ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b965ae add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b965b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b965b4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12b965b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b965b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b965bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b965bf jmp 0x12b965d5 */
  goto L_12b965d5;
L_12b965c1:;
  /* 12b965c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b965c4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b965c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b965ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12b965cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b965cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b965d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b965d5:;
  /* 12b965d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b965d9 ja 0x12b9658f */
  if ((!C.cf&&!C.zf)) goto L_12b9658f;
  /* 12b965db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b965de mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12b965e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b965e4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b965e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b965ea:;
  /* 12b965ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b965ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b965ef mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12b965f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b965f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b965f8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b965fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12b965fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b965ff mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12b96602 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12b96604 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96607 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9660a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b9660d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96610 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96613 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b96616 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96619 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9661c jb 0x12b965ea */
  if (C.cf) goto L_12b965ea;
  /* 12b9661e mov esp, ebp */
  ESP = (EBP);
  /* 12b96620 pop ebp */
  EBP = (pop32());
  /* 12b96621 ret  */
  ESPCHK(0x12b96560u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12b96630 (63 bytes, 24 insns) */
void f_12b96630(void) {
  FTRACE(0x12b96630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96630 push ebp */
  push32((uint32_t)(EBP));
  /* 12b96631 mov ebp, esp */
  EBP = (ESP);
  /* 12b96633 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96634 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96638 jne 0x12b96649 */
  if (!C.zf) goto L_12b96649;
  /* 12b9663a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9663e jge 0x12b96649 */
  if ((C.sf==C.of)) goto L_12b96649;
  /* 12b96640 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12b96647 jmp 0x12b96650 */
  goto L_12b96650;
L_12b96649:;
  /* 12b96649 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12b96650:;
  /* 12b96650 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96653 push eax */
  push32((uint32_t)(EAX));
  /* 12b96654 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b96657 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96658 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9665b push edx */
  push32((uint32_t)(EDX));
  /* 12b9665c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9665f push eax */
  push32((uint32_t)(EAX));
  /* 12b96660 call 0x12b96560 */
  push32(0x12b96665u); f_12b96560();
  /* 12b96665 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96668 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9666b mov esp, ebp */
  ESP = (EBP);
  /* 12b9666d pop ebp */
  EBP = (pop32());
  /* 12b9666e ret  */
  ESPCHK(0x12b96630u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12b96670 (30 bytes, 14 insns) */
void f_12b96670(void) {
  FTRACE(0x12b96670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96670 push ebp */
  push32((uint32_t)(EBP));
  /* 12b96671 mov ebp, esp */
  EBP = (ESP);
  /* 12b96673 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96675 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b96678 push eax */
  push32((uint32_t)(EAX));
  /* 12b96679 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9667c push ecx */
  push32((uint32_t)(ECX));
  /* 12b9667d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b96680 push edx */
  push32((uint32_t)(EDX));
  /* 12b96681 call 0x12b96560 */
  push32(0x12b96686u); f_12b96560();
  /* 12b96686 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96689 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9668c pop ebp */
  EBP = (pop32());
  /* 12b9668d ret  */
  ESPCHK(0x12b96670u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12b96690 (72 bytes, 28 insns) */
void f_12b96690(void) {
  FTRACE(0x12b96690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96690 push ebp */
  push32((uint32_t)(EBP));
  /* 12b96691 mov ebp, esp */
  EBP = (ESP);
  /* 12b96693 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96694 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96698 jne 0x12b966b1 */
  if (!C.zf) goto L_12b966b1;
  /* 12b9669a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9669e jg 0x12b966b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12b966b1;
  /* 12b966a0 jl 0x12b966a8 */
  if ((C.sf!=C.of)) goto L_12b966a8;
  /* 12b966a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b966a6 jae 0x12b966b1 */
  if (!C.cf) goto L_12b966b1;
L_12b966a8:;
  /* 12b966a8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12b966af jmp 0x12b966b8 */
  goto L_12b966b8;
L_12b966b1:;
  /* 12b966b1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12b966b8:;
  /* 12b966b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b966bb push eax */
  push32((uint32_t)(EAX));
  /* 12b966bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b966bf push ecx */
  push32((uint32_t)(ECX));
  /* 12b966c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b966c3 push edx */
  push32((uint32_t)(EDX));
  /* 12b966c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b966c7 push eax */
  push32((uint32_t)(EAX));
  /* 12b966c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b966cb push ecx */
  push32((uint32_t)(ECX));
  /* 12b966cc call 0x12b966e0 */
  push32(0x12b966d1u); f_12b966e0();
  /* 12b966d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b966d4 mov esp, ebp */
  ESP = (EBP);
  /* 12b966d6 pop ebp */
  EBP = (pop32());
  /* 12b966d7 ret  */
  ESPCHK(0x12b96690u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12b966e0 (242 bytes, 91 insns) */
void f_12b966e0(void) {
  FTRACE(0x12b966e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b966e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b966e1 mov ebp, esp */
  EBP = (ESP);
  /* 12b966e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b966e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b966e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b966ec cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b966f0 je 0x12b96714 */
  if (C.zf) goto L_12b96714;
  /* 12b966f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b966f5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12b966f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b966fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b966fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b96701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b96704 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b96706 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b96709 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9670c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9670e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12b96711 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12b96714:;
  /* 12b96714 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96717 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12b9671a:;
  /* 12b9671a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b9671d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9671f push ecx */
  push32((uint32_t)(ECX));
  /* 12b96720 push eax */
  push32((uint32_t)(EAX));
  /* 12b96721 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b96724 push edx */
  push32((uint32_t)(EDX));
  /* 12b96725 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b96728 push eax */
  push32((uint32_t)(EAX));
  /* 12b96729 call 0x12b9a660 */
  push32(0x12b9672eu); f_12b9a660();
  /* 12b9672e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b96731 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b96734 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b96736 push edx */
  push32((uint32_t)(EDX));
  /* 12b96737 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96738 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9673b push eax */
  push32((uint32_t)(EAX));
  /* 12b9673c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9673f push ecx */
  push32((uint32_t)(ECX));
  /* 12b96740 call 0x12b9a5f0 */
  push32(0x12b96745u); f_12b9a5f0();
  /* 12b96745 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12b96748 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12b9674b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9674f jbe 0x12b96767 */
  if ((C.cf||C.zf)) goto L_12b96767;
  /* 12b96751 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b96754 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96757 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9675a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12b9675c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9675f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96762 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b96765 jmp 0x12b9677b */
  goto L_12b9677b;
L_12b96767:;
  /* 12b96767 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9676a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9676d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96770 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12b96772 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96775 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96778 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b9677b:;
  /* 12b9677b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9677f ja 0x12b9671a */
  if ((!C.cf&&!C.zf)) goto L_12b9671a;
  /* 12b96781 jb 0x12b96789 */
  if (C.cf) goto L_12b96789;
  /* 12b96783 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96787 ja 0x12b9671a */
  if ((!C.cf&&!C.zf)) goto L_12b9671a;
L_12b96789:;
  /* 12b96789 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9678c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12b9678f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96792 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96795 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b96798:;
  /* 12b96798 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9679b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b9679d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12b967a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b967a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b967a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b967a8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12b967aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b967ad mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12b967b0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12b967b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b967b5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b967b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b967bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b967be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b967c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b967c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b967c7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b967ca jb 0x12b96798 */
  if (C.cf) goto L_12b96798;
  /* 12b967cc mov esp, ebp */
  ESP = (EBP);
  /* 12b967ce pop ebp */
  EBP = (pop32());
  /* 12b967cf ret 0x14 */
  ESPCHK(0x12b966e0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12b967e0 (31 bytes, 15 insns) */
void f_12b967e0(void) {
  FTRACE(0x12b967e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b967e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b967e1 mov ebp, esp */
  EBP = (ESP);
  /* 12b967e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b967e5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b967e8 push eax */
  push32((uint32_t)(EAX));
  /* 12b967e9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b967ec push ecx */
  push32((uint32_t)(ECX));
  /* 12b967ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b967f0 push edx */
  push32((uint32_t)(EDX));
  /* 12b967f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b967f4 push eax */
  push32((uint32_t)(EAX));
  /* 12b967f5 call 0x12b966e0 */
  push32(0x12b967fau); f_12b966e0();
  /* 12b967fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b967fd pop ebp */
  EBP = (pop32());
  /* 12b967fe ret  */
  ESPCHK(0x12b967e0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12b96800 (123 bytes, 44 insns) */
void f_12b96800(void) {
  FTRACE(0x12b96800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96800 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12b96804 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12b9680a je 0x12b96820 */
  if (C.zf) goto L_12b96820;
L_12b9680c:;
  /* 12b9680c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12b9680e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12b9680f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12b96811 je 0x12b96853 */
  if (C.zf) goto L_12b96853;
  /* 12b96813 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12b96819 jne 0x12b9680c */
  if (!C.zf) goto L_12b9680c;
  /* 12b9681b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12b96820:;
  /* 12b96820 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12b96822 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12b96827 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96829 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9682c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9682e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96831 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12b96836 je 0x12b96820 */
  if (C.zf) goto L_12b96820;
  /* 12b96838 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12b9683b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12b9683d je 0x12b96871 */
  if (C.zf) goto L_12b96871;
  /* 12b9683f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12b96841 je 0x12b96867 */
  if (C.zf) goto L_12b96867;
  /* 12b96843 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12b96848 je 0x12b9685d */
  if (C.zf) goto L_12b9685d;
  /* 12b9684a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12b9684f je 0x12b96853 */
  if (C.zf) goto L_12b96853;
  /* 12b96851 jmp 0x12b96820 */
  goto L_12b96820;
L_12b96853:;
  /* 12b96853 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12b96856 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12b9685a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9685c ret  */
  ESPCHK(0x12b96800u, _esp0);
  ESP += 4; return;
L_12b9685d:;
  /* 12b9685d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12b96860 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12b96864 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96866 ret  */
  ESPCHK(0x12b96800u, _esp0);
  ESP += 4; return;
L_12b96867:;
  /* 12b96867 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12b9686a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12b9686e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96870 ret  */
  ESPCHK(0x12b96800u, _esp0);
  ESP += 4; return;
L_12b96871:;
  /* 12b96871 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12b96874 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12b96878 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9687a ret  */
  ESPCHK(0x12b96800u, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x12b96880 (249 bytes, 93 insns) */
void f_12b96880(void) {
  FTRACE(0x12b96880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96880 push ebp */
  push32((uint32_t)(EBP));
  /* 12b96881 mov ebp, esp */
  EBP = (ESP);
  /* 12b96883 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96886 push ebx */
  push32((uint32_t)(EBX));
  /* 12b96887 push esi */
  push32((uint32_t)(ESI));
  /* 12b96888 push edi */
  push32((uint32_t)(EDI));
  /* 12b96889 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12b9688c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12b9688f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12b96892 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12b96895:;
  /* 12b96895 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96899 jne 0x12b968b9 */
  if (!C.zf) goto L_12b968b9;
  /* 12b9689b push 0x12bbb60c */
  push32((uint32_t)(0x12bbb60cu));
  /* 12b968a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b968a2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12b968a4 push 0x12bbb600 */
  push32((uint32_t)(0x12bbb600u));
  /* 12b968a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b968ab call 0x12b92a90 */
  push32(0x12b968b0u); f_12b92a90();
  /* 12b968b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b968b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b968b6 jne 0x12b968b9 */
  if (!C.zf) goto L_12b968b9;
  /* 12b968b8 int3  */
  x86_unimpl("int3 @ 0x12b968b8");
L_12b968b9:;
  /* 12b968b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b968bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b968bd jne 0x12b96895 */
  if (!C.zf) goto L_12b96895;
L_12b968bf:;
  /* 12b968bf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b968c3 jne 0x12b968e3 */
  if (!C.zf) goto L_12b968e3;
  /* 12b968c5 push 0x12bbb5f0 */
  push32((uint32_t)(0x12bbb5f0u));
  /* 12b968ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12b968cc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12b968ce push 0x12bbb600 */
  push32((uint32_t)(0x12bbb600u));
  /* 12b968d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b968d5 call 0x12b92a90 */
  push32(0x12b968dau); f_12b92a90();
  /* 12b968da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b968dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b968e0 jne 0x12b968e3 */
  if (!C.zf) goto L_12b968e3;
  /* 12b968e2 int3  */
  x86_unimpl("int3 @ 0x12b968e2");
L_12b968e3:;
  /* 12b968e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b968e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b968e7 jne 0x12b968bf */
  if (!C.zf) goto L_12b968bf;
  /* 12b968e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b968ec mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12b968f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b968f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b968f9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12b968fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b968ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b96902 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12b96904 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96907 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9690a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12b9690d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b96910 push edx */
  push32((uint32_t)(EDX));
  /* 12b96911 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b96914 push eax */
  push32((uint32_t)(EAX));
  /* 12b96915 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96918 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96919 call 0x12b9a960 */
  push32(0x12b9691eu); f_12b9a960();
  /* 12b9691e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96921 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12b96924 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96927 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b9692a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9692d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96930 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12b96933 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96936 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9693a jl 0x12b9695e */
  if ((C.sf!=C.of)) goto L_12b9695e;
  /* 12b9693c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9693f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b96941 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12b96944 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b96946 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9694c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12b9694f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96952 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b96954 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96957 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9695a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12b9695c jmp 0x12b9696f */
  goto L_12b9696f;
L_12b9695e:;
  /* 12b9695e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96961 push eax */
  push32((uint32_t)(EAX));
  /* 12b96962 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96964 call 0x12b9a6e0 */
  push32(0x12b96969u); f_12b9a6e0();
  /* 12b96969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9696c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12b9696f:;
  /* 12b9696f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b96972 pop edi */
  EDI = (pop32());
  /* 12b96973 pop esi */
  ESI = (pop32());
  /* 12b96974 pop ebx */
  EBX = (pop32());
  /* 12b96975 mov esp, ebp */
  ESP = (EBP);
  /* 12b96977 pop ebp */
  EBP = (pop32());
  /* 12b96978 ret  */
  ESPCHK(0x12b96880u, _esp0);
  ESP += 4; return;
}

/* FUN_10006980 @ 0x12b96980 (7 bytes, 3 insns) */
void f_12b96980(void) {
  FTRACE(0x12b96980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96980 push edi */
  push32((uint32_t)(EDI));
  /* 12b96981 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12b96985 jmp 0x12b969f1 */
  jmp_ind(0x12b969f1u); return;
}

/* FUN_10006990 @ 0x12b96990 (224 bytes, 84 insns) */
void f_12b96990(void) {
  FTRACE(0x12b96990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96990 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12b96994 push edi */
  push32((uint32_t)(EDI));
  /* 12b96995 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12b9699b je 0x12b969ac */
  if (C.zf) goto L_12b969ac;
L_12b9699d:;
  /* 12b9699d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12b9699f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12b969a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12b969a2 je 0x12b969df */
  if (C.zf) goto L_12b969df;
  /* 12b969a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12b969aa jne 0x12b9699d */
  if (!C.zf) goto L_12b9699d;
L_12b969ac:;
  /* 12b969ac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12b969ae mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12b969b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b969b5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b969b8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b969ba add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b969bd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12b969c2 je 0x12b969ac */
  if (C.zf) goto L_12b969ac;
  /* 12b969c4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12b969c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12b969c9 je 0x12b969ee */
  if (C.zf) goto L_12b969ee;
  /* 12b969cb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12b969cd je 0x12b969e9 */
  if (C.zf) goto L_12b969e9;
  /* 12b969cf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12b969d4 je 0x12b969e4 */
  if (C.zf) goto L_12b969e4;
  /* 12b969d6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12b969db je 0x12b969df */
  if (C.zf) goto L_12b969df;
  /* 12b969dd jmp 0x12b969ac */
  goto L_12b969ac;
L_12b969df:;
  /* 12b969df lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12b969e2 jmp 0x12b969f1 */
  goto L_12b969f1;
L_12b969e4:;
  /* 12b969e4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12b969e7 jmp 0x12b969f1 */
  goto L_12b969f1;
L_12b969e9:;
  /* 12b969e9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12b969ec jmp 0x12b969f1 */
  goto L_12b969f1;
L_12b969ee:;
  /* 12b969ee lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12b969f1:;
  /* 12b969f1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12b969f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12b969fb je 0x12b96a16 */
  if (C.zf) goto L_12b96a16;
L_12b969fd:;
  /* 12b969fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b969ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12b96a00 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12b96a02 je 0x12b96a68 */
  if (C.zf) goto L_12b96a68;
  /* 12b96a04 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12b96a06 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12b96a07 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12b96a0d jne 0x12b969fd */
  if (!C.zf) goto L_12b969fd;
  /* 12b96a0f jmp 0x12b96a16 */
  goto L_12b96a16;
L_12b96a11:;
  /* 12b96a11 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12b96a13 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12b96a16:;
  /* 12b96a16 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12b96a1b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12b96a1d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96a1f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b96a22 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b96a24 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b96a26 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96a29 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12b96a2e je 0x12b96a11 */
  if (C.zf) goto L_12b96a11;
  /* 12b96a30 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12b96a32 je 0x12b96a68 */
  if (C.zf) goto L_12b96a68;
  /* 12b96a34 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12b96a36 je 0x12b96a5f */
  if (C.zf) goto L_12b96a5f;
  /* 12b96a38 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12b96a3e je 0x12b96a52 */
  if (C.zf) goto L_12b96a52;
  /* 12b96a40 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12b96a46 je 0x12b96a4a */
  if (C.zf) goto L_12b96a4a;
  /* 12b96a48 jmp 0x12b96a11 */
  goto L_12b96a11;
L_12b96a4a:;
  /* 12b96a4a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12b96a4c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12b96a50 pop edi */
  EDI = (pop32());
  /* 12b96a51 ret  */
  ESPCHK(0x12b96990u, _esp0);
  ESP += 4; return;
L_12b96a52:;
  /* 12b96a52 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12b96a55 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12b96a59 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12b96a5d pop edi */
  EDI = (pop32());
  /* 12b96a5e ret  */
  ESPCHK(0x12b96990u, _esp0);
  ESP += 4; return;
L_12b96a5f:;
  /* 12b96a5f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12b96a62 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12b96a66 pop edi */
  EDI = (pop32());
  /* 12b96a67 ret  */
  ESPCHK(0x12b96990u, _esp0);
  ESP += 4; return;
L_12b96a68:;
  /* 12b96a68 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12b96a6a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12b96a6e pop edi */
  EDI = (pop32());
  /* 12b96a6f ret  */
  ESPCHK(0x12b96990u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a70 @ 0x12b96a70 (243 bytes, 91 insns) */
void f_12b96a70(void) {
  FTRACE(0x12b96a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12b96a71 mov ebp, esp */
  EBP = (ESP);
  /* 12b96a73 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96a76 push ebx */
  push32((uint32_t)(EBX));
  /* 12b96a77 push esi */
  push32((uint32_t)(ESI));
  /* 12b96a78 push edi */
  push32((uint32_t)(EDI));
  /* 12b96a79 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12b96a7c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12b96a7f:;
  /* 12b96a7f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96a83 jne 0x12b96aa3 */
  if (!C.zf) goto L_12b96aa3;
  /* 12b96a85 push 0x12bbb60c */
  push32((uint32_t)(0x12bbb60cu));
  /* 12b96a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96a8c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12b96a8e push 0x12bbb61c */
  push32((uint32_t)(0x12bbb61cu));
  /* 12b96a93 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b96a95 call 0x12b92a90 */
  push32(0x12b96a9au); f_12b92a90();
  /* 12b96a9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96a9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96aa0 jne 0x12b96aa3 */
  if (!C.zf) goto L_12b96aa3;
  /* 12b96aa2 int3  */
  x86_unimpl("int3 @ 0x12b96aa2");
L_12b96aa3:;
  /* 12b96aa3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b96aa5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b96aa7 jne 0x12b96a7f */
  if (!C.zf) goto L_12b96a7f;
L_12b96aa9:;
  /* 12b96aa9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96aad jne 0x12b96acd */
  if (!C.zf) goto L_12b96acd;
  /* 12b96aaf push 0x12bbb5f0 */
  push32((uint32_t)(0x12bbb5f0u));
  /* 12b96ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96ab6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12b96ab8 push 0x12bbb61c */
  push32((uint32_t)(0x12bbb61cu));
  /* 12b96abd push 2 */
  push32((uint32_t)(0x2u));
  /* 12b96abf call 0x12b92a90 */
  push32(0x12b96ac4u); f_12b92a90();
  /* 12b96ac4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96ac7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96aca jne 0x12b96acd */
  if (!C.zf) goto L_12b96acd;
  /* 12b96acc int3  */
  x86_unimpl("int3 @ 0x12b96acc");
L_12b96acd:;
  /* 12b96acd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b96acf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b96ad1 jne 0x12b96aa9 */
  if (!C.zf) goto L_12b96aa9;
  /* 12b96ad3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96ad6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12b96add mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96ae0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b96ae3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12b96ae6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96ae9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b96aec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12b96aee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96af1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b96af4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12b96af7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b96afa push ecx */
  push32((uint32_t)(ECX));
  /* 12b96afb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b96afe push edx */
  push32((uint32_t)(EDX));
  /* 12b96aff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96b02 push eax */
  push32((uint32_t)(EAX));
  /* 12b96b03 call 0x12b9a960 */
  push32(0x12b96b08u); f_12b9a960();
  /* 12b96b08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96b0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12b96b0e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96b11 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b96b14 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96b17 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96b1a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12b96b1d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96b20 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96b24 jl 0x12b96b48 */
  if ((C.sf!=C.of)) goto L_12b96b48;
  /* 12b96b26 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96b29 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b96b2b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12b96b2e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b96b30 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b96b36 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12b96b39 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96b3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b96b3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96b41 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96b44 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12b96b46 jmp 0x12b96b59 */
  goto L_12b96b59;
L_12b96b48:;
  /* 12b96b48 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b96b4b push edx */
  push32((uint32_t)(EDX));
  /* 12b96b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12b96b4e call 0x12b9a6e0 */
  push32(0x12b96b53u); f_12b9a6e0();
  /* 12b96b53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96b56 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12b96b59:;
  /* 12b96b59 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b96b5c pop edi */
  EDI = (pop32());
  /* 12b96b5d pop esi */
  ESI = (pop32());
  /* 12b96b5e pop ebx */
  EBX = (pop32());
  /* 12b96b5f mov esp, ebp */
  ESP = (EBP);
  /* 12b96b61 pop ebp */
  EBP = (pop32());
  /* 12b96b62 ret  */
  ESPCHK(0x12b96a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b70 @ 0x12b96b70 (47 bytes, 17 insns) */
void f_12b96b70(void) {
  FTRACE(0x12b96b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96b70 push ecx */
  push32((uint32_t)(ECX));
  /* 12b96b71 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96b76 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12b96b7a jb 0x12b96b90 */
  if (C.cf) goto L_12b96b90;
L_12b96b7c:;
  /* 12b96b7c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96b82 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96b87 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12b96b89 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96b8e jae 0x12b96b7c */
  if (!C.cf) goto L_12b96b7c;
L_12b96b90:;
  /* 12b96b90 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96b92 mov eax, esp */
  EAX = (ESP);
  /* 12b96b94 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12b96b96 mov esp, ecx */
  ESP = (ECX);
  /* 12b96b98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b96b9a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b96b9d push eax */
  push32((uint32_t)(EAX));
  /* 12b96b9e ret  */
  ESPCHK(0x12b96b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x12b96ba0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12b96ba0(void) {
  FTRACE(0x12b96ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b96ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12b96ba3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96ba6 push esi */
  push32((uint32_t)(ESI));
  /* 12b96ba7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96bab je 0x12b96bb3 */
  if (C.zf) goto L_12b96bb3;
  /* 12b96bad cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96bb1 jne 0x12b96bb8 */
  if (!C.zf) goto L_12b96bb8;
L_12b96bb3:;
  /* 12b96bb3 jmp 0x12b96d88 */
  goto L_12b96d88;
L_12b96bb8:;
  /* 12b96bb8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96bbc je 0x12b96bd4 */
  if (C.zf) goto L_12b96bd4;
  /* 12b96bbe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96bc2 je 0x12b96bd4 */
  if (C.zf) goto L_12b96bd4;
  /* 12b96bc4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96bc8 je 0x12b96bd4 */
  if (C.zf) goto L_12b96bd4;
  /* 12b96bca cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96bce jne 0x12b96cb1 */
  if (!C.zf) goto L_12b96cb1;
L_12b96bd4:;
  /* 12b96bd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b96bd6 call 0x12b973d0 */
  push32(0x12b96bdbu); f_12b973d0();
  /* 12b96bdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96bde cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96be2 je 0x12b96bea */
  if (C.zf) goto L_12b96bea;
  /* 12b96be4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96be8 jne 0x12b96c2f */
  if (!C.zf) goto L_12b96c2f;
L_12b96bea:;
  /* 12b96bea cmp dword ptr [0x12bbf5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96bf1 jne 0x12b96c2f */
  if (!C.zf) goto L_12b96c2f;
  /* 12b96bf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b96bf5 push 0x12b96dd0 */
  push32((uint32_t)(0x12b96dd0u));
  /* 12b96bfa call dword ptr [0x12bc12fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12fc))), 0x12b96c00u);
  /* 12b96c00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96c03 jne 0x12b96c11 */
  if (!C.zf) goto L_12b96c11;
  /* 12b96c05 mov dword ptr [0x12bbf5fc], 1 */
  w32((uint32_t)(0x12bbf5fc), (0x1u));
  /* 12b96c0f jmp 0x12b96c2f */
  goto L_12b96c2f;
L_12b96c11:;
  /* 12b96c11 call dword ptr [0x12bc12b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12b4))), 0x12b96c17u);
  /* 12b96c17 mov esi, eax */
  ESI = (EAX);
  /* 12b96c19 call 0x12b9b8b0 */
  push32(0x12b96c1eu); f_12b9b8b0();
  /* 12b96c1e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12b96c20 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b96c22 call 0x12b97470 */
  push32(0x12b96c27u); f_12b97470();
  /* 12b96c27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96c2a jmp 0x12b96d88 */
  goto L_12b96d88;
L_12b96c2f:;
  /* 12b96c2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b96c32 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12b96c35 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b96c38 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96c3b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12b96c3e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96c42 ja 0x12b96ca2 */
  if ((!C.cf&&!C.zf)) goto L_12b96ca2;
  /* 12b96c44 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b96c47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b96c49 mov dl, byte ptr [eax + 0x12b96daf] */
  DL = (r8((uint32_t)(EAX + 0x12b96daf)));
  /* 12b96c4f jmp dword ptr [edx*4 + 0x12b96d9b] */
  switch (EDX) {
    case 0: goto L_12b96c56;
    case 1: goto L_12b96c90;
    case 2: goto L_12b96c6a;
    case 3: goto L_12b96c7d;
    case 4: goto L_12b96ca2;
    default: x86_unimpl("switch@0x12b96c4f out of table"); return;
  }
L_12b96c56:;
  /* 12b96c56 mov ecx, dword ptr [0x12bbf5ec] */
  ECX = (r32((uint32_t)(0x12bbf5ec)));
  /* 12b96c5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b96c5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b96c62 mov dword ptr [0x12bbf5ec], edx */
  w32((uint32_t)(0x12bbf5ec), (EDX));
  /* 12b96c68 jmp 0x12b96ca2 */
  goto L_12b96ca2;
L_12b96c6a:;
  /* 12b96c6a mov eax, dword ptr [0x12bbf5f0] */
  EAX = (r32((uint32_t)(0x12bbf5f0)));
  /* 12b96c6f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b96c72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b96c75 mov dword ptr [0x12bbf5f0], ecx */
  w32((uint32_t)(0x12bbf5f0), (ECX));
  /* 12b96c7b jmp 0x12b96ca2 */
  goto L_12b96ca2;
L_12b96c7d:;
  /* 12b96c7d mov edx, dword ptr [0x12bbf5f4] */
  EDX = (r32((uint32_t)(0x12bbf5f4)));
  /* 12b96c83 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12b96c86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b96c89 mov dword ptr [0x12bbf5f4], eax */
  w32((uint32_t)(0x12bbf5f4), (EAX));
  /* 12b96c8e jmp 0x12b96ca2 */
  goto L_12b96ca2;
L_12b96c90:;
  /* 12b96c90 mov ecx, dword ptr [0x12bbf5f8] */
  ECX = (r32((uint32_t)(0x12bbf5f8)));
  /* 12b96c96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b96c99 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b96c9c mov dword ptr [0x12bbf5f8], edx */
  w32((uint32_t)(0x12bbf5f8), (EDX));
L_12b96ca2:;
  /* 12b96ca2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b96ca4 call 0x12b97470 */
  push32(0x12b96ca9u); f_12b97470();
  /* 12b96ca9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96cac jmp 0x12b96d83 */
  goto L_12b96d83;
L_12b96cb1:;
  /* 12b96cb1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96cb5 je 0x12b96cc8 */
  if (C.zf) goto L_12b96cc8;
  /* 12b96cb7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96cbb je 0x12b96cc8 */
  if (C.zf) goto L_12b96cc8;
  /* 12b96cbd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96cc1 je 0x12b96cc8 */
  if (C.zf) goto L_12b96cc8;
  /* 12b96cc3 jmp 0x12b96d88 */
  goto L_12b96d88;
L_12b96cc8:;
  /* 12b96cc8 call 0x12b93410 */
  push32(0x12b96ccdu); f_12b93410();
  /* 12b96ccd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b96cd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96cd3 cmp dword ptr [eax + 0x50], 0x12bbdc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12bbdc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96cda jne 0x12b96d25 */
  if (!C.zf) goto L_12b96d25;
  /* 12b96cdc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12b96ce1 push 0x12bbb628 */
  push32((uint32_t)(0x12bbb628u));
  /* 12b96ce6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b96ce8 mov ecx, dword ptr [0x12bbdc80] */
  ECX = (r32((uint32_t)(0x12bbdc80)));
  /* 12b96cee push ecx */
  push32((uint32_t)(ECX));
  /* 12b96cef call 0x12b939d0 */
  push32(0x12b96cf4u); f_12b939d0();
  /* 12b96cf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96cf7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96cfa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12b96cfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96d00 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96d04 je 0x12b96d23 */
  if (C.zf) goto L_12b96d23;
  /* 12b96d06 mov ecx, dword ptr [0x12bbdc80] */
  ECX = (r32((uint32_t)(0x12bbdc80)));
  /* 12b96d0c push ecx */
  push32((uint32_t)(ECX));
  /* 12b96d0d push 0x12bbdc00 */
  push32((uint32_t)(0x12bbdc00u));
  /* 12b96d12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96d15 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12b96d18 push eax */
  push32((uint32_t)(EAX));
  /* 12b96d19 call 0x12b9a2b0 */
  push32(0x12b96d1eu); f_12b9a2b0();
  /* 12b96d1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96d21 jmp 0x12b96d25 */
  goto L_12b96d25;
L_12b96d23:;
  /* 12b96d23 jmp 0x12b96d88 */
  goto L_12b96d88;
L_12b96d25:;
  /* 12b96d25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96d28 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12b96d2b push edx */
  push32((uint32_t)(EDX));
  /* 12b96d2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b96d2f push eax */
  push32((uint32_t)(EAX));
  /* 12b96d30 call 0x12b970b0 */
  push32(0x12b96d35u); f_12b970b0();
  /* 12b96d35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96d38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b96d3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96d3f jne 0x12b96d43 */
  if (!C.zf) goto L_12b96d43;
  /* 12b96d41 jmp 0x12b96d88 */
  goto L_12b96d88;
L_12b96d43:;
  /* 12b96d43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96d46 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12b96d49 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12b96d4c:;
  /* 12b96d4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96d4f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b96d52 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96d55 jne 0x12b96d83 */
  if (!C.zf) goto L_12b96d83;
  /* 12b96d57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96d5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b96d5d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12b96d60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96d63 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96d66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b96d69 mov edx, dword ptr [0x12bbdc84] */
  EDX = (r32((uint32_t)(0x12bbdc84)));
  /* 12b96d6f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b96d72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96d75 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12b96d78 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96d7a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96d7d jb 0x12b96d81 */
  if (C.cf) goto L_12b96d81;
  /* 12b96d7f jmp 0x12b96d83 */
  goto L_12b96d83;
L_12b96d81:;
  /* 12b96d81 jmp 0x12b96d4c */
  goto L_12b96d4c;
L_12b96d83:;
  /* 12b96d83 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b96d86 jmp 0x12b96d96 */
  goto L_12b96d96;
L_12b96d88:;
  /* 12b96d88 call 0x12b9b8a0 */
  push32(0x12b96d8du); f_12b9b8a0();
  /* 12b96d8d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12b96d93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12b96d96:;
  /* 12b96d96 pop esi */
  ESI = (pop32());
  /* 12b96d97 mov esp, ebp */
  ESP = (EBP);
  /* 12b96d99 pop ebp */
  EBP = (pop32());
  /* 12b96d9a ret  */
  ESPCHK(0x12b96ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dd0 @ 0x12b96dd0 (146 bytes, 45 insns) */
void f_12b96dd0(void) {
  FTRACE(0x12b96dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b96dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12b96dd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96dd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b96dd8 call 0x12b973d0 */
  push32(0x12b96dddu); f_12b973d0();
  /* 12b96ddd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96de0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96de4 jne 0x12b96dfe */
  if (!C.zf) goto L_12b96dfe;
  /* 12b96de6 mov dword ptr [ebp - 8], 0x12bbf5ec */
  w32((uint32_t)(EBP + -0x8), (0x12bbf5ecu));
  /* 12b96ded mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96df0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b96df2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b96df5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12b96dfc jmp 0x12b96e14 */
  goto L_12b96e14;
L_12b96dfe:;
  /* 12b96dfe mov dword ptr [ebp - 8], 0x12bbf5f0 */
  w32((uint32_t)(EBP + -0x8), (0x12bbf5f0u));
  /* 12b96e05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96e08 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b96e0a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b96e0d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12b96e14:;
  /* 12b96e14 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96e18 jne 0x12b96e28 */
  if (!C.zf) goto L_12b96e28;
  /* 12b96e1a push 1 */
  push32((uint32_t)(0x1u));
  /* 12b96e1c call 0x12b97470 */
  push32(0x12b96e21u); f_12b97470();
  /* 12b96e21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96e24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b96e26 jmp 0x12b96e5c */
  goto L_12b96e5c;
L_12b96e28:;
  /* 12b96e28 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96e2c je 0x12b96e4d */
  if (C.zf) goto L_12b96e4d;
  /* 12b96e2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b96e31 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12b96e37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b96e39 call 0x12b97470 */
  push32(0x12b96e3eu); f_12b97470();
  /* 12b96e3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96e41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96e44 push edx */
  push32((uint32_t)(EDX));
  /* 12b96e45 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12b96e48u);
  /* 12b96e48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96e4b jmp 0x12b96e57 */
  goto L_12b96e57;
L_12b96e4d:;
  /* 12b96e4d push 1 */
  push32((uint32_t)(0x1u));
  /* 12b96e4f call 0x12b97470 */
  push32(0x12b96e54u); f_12b97470();
  /* 12b96e54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b96e57:;
  /* 12b96e57 mov eax, 1 */
  EAX = (0x1u);
L_12b96e5c:;
  /* 12b96e5c mov esp, ebp */
  ESP = (EBP);
  /* 12b96e5e pop ebp */
  EBP = (pop32());
  /* 12b96e5f ret 4 */
  ESPCHK(0x12b96dd0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006e70 @ 0x12b96e70 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12b96e70(void) {
  FTRACE(0x12b96e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b96e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12b96e71 mov ebp, esp */
  EBP = (ESP);
  /* 12b96e73 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96e76 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12b96e7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b96e80 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12b96e83 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b96e86 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b96e89 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12b96e8c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96e90 ja 0x12b96f3e */
  if ((!C.cf&&!C.zf)) goto L_12b96f3e;
  /* 12b96e96 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b96e99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b96e9b mov dl, byte ptr [eax + 0x12b97092] */
  DL = (r8((uint32_t)(EAX + 0x12b97092)));
  /* 12b96ea1 jmp dword ptr [edx*4 + 0x12b9707a] */
  switch (EDX) {
    case 0: goto L_12b96ea8;
    case 1: goto L_12b96f13;
    case 2: goto L_12b96ef9;
    case 3: goto L_12b96ec5;
    case 4: goto L_12b96edf;
    case 5: goto L_12b96f3e;
    default: x86_unimpl("switch@0x12b96ea1 out of table"); return;
  }
L_12b96ea8:;
  /* 12b96ea8 mov dword ptr [ebp - 0x18], 0x12bbf5ec */
  w32((uint32_t)(EBP + -0x18), (0x12bbf5ecu));
  /* 12b96eaf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b96eb2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b96eb4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12b96eb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b96eba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96ebd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b96ec0 jmp 0x12b96f46 */
  goto L_12b96f46;
L_12b96ec5:;
  /* 12b96ec5 mov dword ptr [ebp - 0x18], 0x12bbf5f0 */
  w32((uint32_t)(EBP + -0x18), (0x12bbf5f0u));
  /* 12b96ecc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b96ecf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b96ed1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12b96ed4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b96ed7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96eda mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b96edd jmp 0x12b96f46 */
  goto L_12b96f46;
L_12b96edf:;
  /* 12b96edf mov dword ptr [ebp - 0x18], 0x12bbf5f4 */
  w32((uint32_t)(EBP + -0x18), (0x12bbf5f4u));
  /* 12b96ee6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b96ee9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b96eeb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12b96eee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b96ef1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96ef4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b96ef7 jmp 0x12b96f46 */
  goto L_12b96f46;
L_12b96ef9:;
  /* 12b96ef9 mov dword ptr [ebp - 0x18], 0x12bbf5f8 */
  w32((uint32_t)(EBP + -0x18), (0x12bbf5f8u));
  /* 12b96f00 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b96f03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b96f05 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12b96f08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b96f0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96f0e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b96f11 jmp 0x12b96f46 */
  goto L_12b96f46;
L_12b96f13:;
  /* 12b96f13 call 0x12b93410 */
  push32(0x12b96f18u); f_12b93410();
  /* 12b96f18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b96f1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96f1e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12b96f21 push edx */
  push32((uint32_t)(EDX));
  /* 12b96f22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b96f25 push eax */
  push32((uint32_t)(EAX));
  /* 12b96f26 call 0x12b970b0 */
  push32(0x12b96f2bu); f_12b970b0();
  /* 12b96f2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96f2e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96f31 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b96f34 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b96f37 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b96f39 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12b96f3c jmp 0x12b96f46 */
  goto L_12b96f46;
L_12b96f3e:;
  /* 12b96f3e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b96f41 jmp 0x12b97076 */
  goto L_12b97076;
L_12b96f46:;
  /* 12b96f46 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96f4a je 0x12b96f56 */
  if (C.zf) goto L_12b96f56;
  /* 12b96f4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12b96f4e call 0x12b973d0 */
  push32(0x12b96f53u); f_12b973d0();
  /* 12b96f53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b96f56:;
  /* 12b96f56 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96f5a jne 0x12b96f73 */
  if (!C.zf) goto L_12b96f73;
  /* 12b96f5c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96f60 je 0x12b96f6c */
  if (C.zf) goto L_12b96f6c;
  /* 12b96f62 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b96f64 call 0x12b97470 */
  push32(0x12b96f69u); f_12b97470();
  /* 12b96f69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b96f6c:;
  /* 12b96f6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b96f6e jmp 0x12b97076 */
  goto L_12b97076;
L_12b96f73:;
  /* 12b96f73 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96f77 jne 0x12b96f90 */
  if (!C.zf) goto L_12b96f90;
  /* 12b96f79 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96f7d je 0x12b96f89 */
  if (C.zf) goto L_12b96f89;
  /* 12b96f7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12b96f81 call 0x12b97470 */
  push32(0x12b96f86u); f_12b97470();
  /* 12b96f86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b96f89:;
  /* 12b96f89 push 3 */
  push32((uint32_t)(0x3u));
  /* 12b96f8b call 0x12b93190 */
  push32(0x12b96f90u); f_12b93190();
L_12b96f90:;
  /* 12b96f90 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96f94 je 0x12b96fa2 */
  if (C.zf) goto L_12b96fa2;
  /* 12b96f96 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96f9a je 0x12b96fa2 */
  if (C.zf) goto L_12b96fa2;
  /* 12b96f9c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96fa0 jne 0x12b96fce */
  if (!C.zf) goto L_12b96fce;
L_12b96fa2:;
  /* 12b96fa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96fa5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12b96fa8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12b96fab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96fae mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12b96fb5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96fb9 jne 0x12b96fce */
  if (!C.zf) goto L_12b96fce;
  /* 12b96fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96fbe mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12b96fc1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b96fc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b96fc7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12b96fce:;
  /* 12b96fce cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96fd2 jne 0x12b97010 */
  if (!C.zf) goto L_12b97010;
  /* 12b96fd4 mov eax, dword ptr [0x12bbdc78] */
  EAX = (r32((uint32_t)(0x12bbdc78)));
  /* 12b96fd9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12b96fdc jmp 0x12b96fe7 */
  goto L_12b96fe7;
L_12b96fde:;
  /* 12b96fde mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b96fe1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96fe4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12b96fe7:;
  /* 12b96fe7 mov edx, dword ptr [0x12bbdc78] */
  EDX = (r32((uint32_t)(0x12bbdc78)));
  /* 12b96fed add edx, dword ptr [0x12bbdc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12bbdc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b96ff3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b96ff6 jge 0x12b9700e */
  if ((C.sf==C.of)) goto L_12b9700e;
  /* 12b96ff8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b96ffb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b96ffe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97001 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12b97004 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12b9700c jmp 0x12b96fde */
  goto L_12b96fde;
L_12b9700e:;
  /* 12b9700e jmp 0x12b97019 */
  goto L_12b97019;
L_12b97010:;
  /* 12b97010 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b97013 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12b97019:;
  /* 12b97019 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9701d je 0x12b97029 */
  if (C.zf) goto L_12b97029;
  /* 12b9701f push 1 */
  push32((uint32_t)(0x1u));
  /* 12b97021 call 0x12b97470 */
  push32(0x12b97026u); f_12b97470();
  /* 12b97026 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b97029:;
  /* 12b97029 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9702d jne 0x12b97040 */
  if (!C.zf) goto L_12b97040;
  /* 12b9702f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97032 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12b97035 push edx */
  push32((uint32_t)(EDX));
  /* 12b97036 push 8 */
  push32((uint32_t)(0x8u));
  /* 12b97038 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12b9703bu);
  /* 12b9703b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9703e jmp 0x12b9704a */
  goto L_12b9704a;
L_12b97040:;
  /* 12b97040 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97043 push eax */
  push32((uint32_t)(EAX));
  /* 12b97044 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12b97047u);
  /* 12b97047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9704a:;
  /* 12b9704a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9704e je 0x12b9705c */
  if (C.zf) goto L_12b9705c;
  /* 12b97050 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97054 je 0x12b9705c */
  if (C.zf) goto L_12b9705c;
  /* 12b97056 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9705a jne 0x12b97074 */
  if (!C.zf) goto L_12b97074;
L_12b9705c:;
  /* 12b9705c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9705f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b97062 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12b97065 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97069 jne 0x12b97074 */
  if (!C.zf) goto L_12b97074;
  /* 12b9706b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9706e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97071 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12b97074:;
  /* 12b97074 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b97076:;
  /* 12b97076 mov esp, ebp */
  ESP = (EBP);
  /* 12b97078 pop ebp */
  EBP = (pop32());
  /* 12b97079 ret  */
  ESPCHK(0x12b96e70u, _esp0);
  ESP += 4; return;
}

/* FUN_100070b0 @ 0x12b970b0 (91 bytes, 35 insns) */
void f_12b970b0(void) {
  FTRACE(0x12b970b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b970b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b970b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b970b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b970b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b970b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b970ba:;
  /* 12b970ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b970bd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b970c0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b970c3 je 0x12b970e3 */
  if (C.zf) goto L_12b970e3;
  /* 12b970c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b970c8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b970cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b970ce mov ecx, dword ptr [0x12bbdc84] */
  ECX = (r32((uint32_t)(0x12bbdc84)));
  /* 12b970d4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b970d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b970da add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b970dc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b970df jae 0x12b970e3 */
  if (!C.cf) goto L_12b970e3;
  /* 12b970e1 jmp 0x12b970ba */
  goto L_12b970ba;
L_12b970e3:;
  /* 12b970e3 mov eax, dword ptr [0x12bbdc84] */
  EAX = (r32((uint32_t)(0x12bbdc84)));
  /* 12b970e8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b970eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b970ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b970f0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b970f3 jae 0x12b97105 */
  if (!C.cf) goto L_12b97105;
  /* 12b970f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b970f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b970fb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b970fe jne 0x12b97105 */
  if (!C.zf) goto L_12b97105;
  /* 12b97100 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97103 jmp 0x12b97107 */
  goto L_12b97107;
L_12b97105:;
  /* 12b97105 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b97107:;
  /* 12b97107 mov esp, ebp */
  ESP = (EBP);
  /* 12b97109 pop ebp */
  EBP = (pop32());
  /* 12b9710a ret  */
  ESPCHK(0x12b970b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007110 @ 0x12b97110 (13 bytes, 6 insns) */
void f_12b97110(void) {
  FTRACE(0x12b97110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97110 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97111 mov ebp, esp */
  EBP = (ESP);
  /* 12b97113 call 0x12b93410 */
  push32(0x12b97118u); f_12b93410();
  /* 12b97118 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9711b pop ebp */
  EBP = (pop32());
  /* 12b9711c ret  */
  ESPCHK(0x12b97110u, _esp0);
  ESP += 4; return;
}

/* FUN_10007120 @ 0x12b97120 (13 bytes, 6 insns) */
void f_12b97120(void) {
  FTRACE(0x12b97120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97120 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97121 mov ebp, esp */
  EBP = (ESP);
  /* 12b97123 call 0x12b93410 */
  push32(0x12b97128u); f_12b93410();
  /* 12b97128 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9712b pop ebp */
  EBP = (pop32());
  /* 12b9712c ret  */
  ESPCHK(0x12b97120u, _esp0);
  ESP += 4; return;
}

/* FUN_10007130 @ 0x12b97130 (187 bytes, 54 insns) */
void f_12b97130(void) {
  FTRACE(0x12b97130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97130 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97131 mov ebp, esp */
  EBP = (ESP);
  /* 12b97133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97136 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9713d cmp dword ptr [0x12bbf600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97144 jne 0x12b971a3 */
  if (!C.zf) goto L_12b971a3;
  /* 12b97146 push 0x12bbaa54 */
  push32((uint32_t)(0x12bbaa54u));
  /* 12b9714b call dword ptr [0x12bc1284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1284))), 0x12b97151u);
  /* 12b97151 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b97154 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97158 je 0x12b97177 */
  if (C.zf) goto L_12b97177;
  /* 12b9715a push 0x12bbb658 */
  push32((uint32_t)(0x12bbb658u));
  /* 12b9715f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97162 push eax */
  push32((uint32_t)(EAX));
  /* 12b97163 call dword ptr [0x12bc1280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1280))), 0x12b97169u);
  /* 12b97169 mov dword ptr [0x12bbf600], eax */
  w32((uint32_t)(0x12bbf600), (EAX));
  /* 12b9716e cmp dword ptr [0x12bbf600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97175 jne 0x12b9717b */
  if (!C.zf) goto L_12b9717b;
L_12b97177:;
  /* 12b97177 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b97179 jmp 0x12b971e7 */
  goto L_12b971e7;
L_12b9717b:;
  /* 12b9717b push 0x12bbb648 */
  push32((uint32_t)(0x12bbb648u));
  /* 12b97180 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97183 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97184 call dword ptr [0x12bc1280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1280))), 0x12b9718au);
  /* 12b9718a mov dword ptr [0x12bbf604], eax */
  w32((uint32_t)(0x12bbf604), (EAX));
  /* 12b9718f push 0x12bbb634 */
  push32((uint32_t)(0x12bbb634u));
  /* 12b97194 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97197 push edx */
  push32((uint32_t)(EDX));
  /* 12b97198 call dword ptr [0x12bc1280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1280))), 0x12b9719eu);
  /* 12b9719e mov dword ptr [0x12bbf608], eax */
  w32((uint32_t)(0x12bbf608), (EAX));
L_12b971a3:;
  /* 12b971a3 cmp dword ptr [0x12bbf604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b971aa je 0x12b971b5 */
  if (C.zf) goto L_12b971b5;
  /* 12b971ac call dword ptr [0x12bbf604] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf604))), 0x12b971b2u);
  /* 12b971b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b971b5:;
  /* 12b971b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b971b9 je 0x12b971d1 */
  if (C.zf) goto L_12b971d1;
  /* 12b971bb cmp dword ptr [0x12bbf608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b971c2 je 0x12b971d1 */
  if (C.zf) goto L_12b971d1;
  /* 12b971c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b971c7 push eax */
  push32((uint32_t)(EAX));
  /* 12b971c8 call dword ptr [0x12bbf608] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf608))), 0x12b971ceu);
  /* 12b971ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b971d1:;
  /* 12b971d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b971d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12b971d5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b971d8 push edx */
  push32((uint32_t)(EDX));
  /* 12b971d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b971dc push eax */
  push32((uint32_t)(EAX));
  /* 12b971dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b971e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12b971e1 call dword ptr [0x12bbf600] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf600))), 0x12b971e7u);
L_12b971e7:;
  /* 12b971e7 mov esp, ebp */
  ESP = (EBP);
  /* 12b971e9 pop ebp */
  EBP = (pop32());
  /* 12b971ea ret  */
  ESPCHK(0x12b97130u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12b971f0 (254 bytes, 109 insns) */
void f_12b971f0(void) {
  FTRACE(0x12b971f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b971f0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12b971f4 push edi */
  push32((uint32_t)(EDI));
  /* 12b971f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b971f7 je 0x12b97273 */
  if (C.zf) goto L_12b97273;
  /* 12b971f9 push esi */
  push32((uint32_t)(ESI));
  /* 12b971fa push ebx */
  push32((uint32_t)(EBX));
  /* 12b971fb mov ebx, ecx */
  EBX = (ECX);
  /* 12b971fd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12b97201 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12b97207 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12b9720b jne 0x12b97214 */
  if (!C.zf) goto L_12b97214;
  /* 12b9720d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b97210 jne 0x12b97281 */
  if (!C.zf) goto L_12b97281;
  /* 12b97212 jmp 0x12b97235 */
  goto L_12b97235;
L_12b97214:;
  /* 12b97214 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b97216 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12b97217 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b97219 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12b9721a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12b9721b je 0x12b97242 */
  if (C.zf) goto L_12b97242;
  /* 12b9721d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12b9721f je 0x12b9724a */
  if (C.zf) goto L_12b9724a;
  /* 12b97221 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12b97227 jne 0x12b97214 */
  if (!C.zf) goto L_12b97214;
  /* 12b97229 mov ebx, ecx */
  EBX = (ECX);
  /* 12b9722b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9722e jne 0x12b97281 */
  if (!C.zf) goto L_12b97281;
L_12b97230:;
  /* 12b97230 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12b97233 je 0x12b97242 */
  if (C.zf) goto L_12b97242;
L_12b97235:;
  /* 12b97235 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b97237 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12b97238 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9723a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12b9723b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12b9723d je 0x12b9726e */
  if (C.zf) goto L_12b9726e;
  /* 12b9723f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12b97240 jne 0x12b97235 */
  if (!C.zf) goto L_12b97235;
L_12b97242:;
  /* 12b97242 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12b97246 pop ebx */
  EBX = (pop32());
  /* 12b97247 pop esi */
  ESI = (pop32());
  /* 12b97248 pop edi */
  EDI = (pop32());
  /* 12b97249 ret  */
  ESPCHK(0x12b971f0u, _esp0);
  ESP += 4; return;
L_12b9724a:;
  /* 12b9724a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12b97250 je 0x12b97264 */
  if (C.zf) goto L_12b97264;
L_12b97252:;
  /* 12b97252 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b97254 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12b97255 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12b97256 je 0x12b972e6 */
  if (C.zf) goto L_12b972e6;
  /* 12b9725c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12b97262 jne 0x12b97252 */
  if (!C.zf) goto L_12b97252;
L_12b97264:;
  /* 12b97264 mov ebx, ecx */
  EBX = (ECX);
  /* 12b97266 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b97269 jne 0x12b972d7 */
  if (!C.zf) goto L_12b972d7;
L_12b9726b:;
  /* 12b9726b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9726d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12b9726e:;
  /* 12b9726e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12b9726f jne 0x12b9726b */
  if (!C.zf) goto L_12b9726b;
  /* 12b97271 pop ebx */
  EBX = (pop32());
  /* 12b97272 pop esi */
  ESI = (pop32());
L_12b97273:;
  /* 12b97273 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12b97277 pop edi */
  EDI = (pop32());
  /* 12b97278 ret  */
  ESPCHK(0x12b971f0u, _esp0);
  ESP += 4; return;
L_12b97279:;
  /* 12b97279 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12b9727b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9727e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12b9727f je 0x12b97230 */
  if (C.zf) goto L_12b97230;
L_12b97281:;
  /* 12b97281 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12b97286 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12b97288 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9728a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9728d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9728f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12b97291 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97294 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12b97299 je 0x12b97279 */
  if (C.zf) goto L_12b97279;
  /* 12b9729b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12b9729d je 0x12b972cb */
  if (C.zf) goto L_12b972cb;
  /* 12b9729f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12b972a1 je 0x12b972c1 */
  if (C.zf) goto L_12b972c1;
  /* 12b972a3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12b972a9 je 0x12b972b7 */
  if (C.zf) goto L_12b972b7;
  /* 12b972ab test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12b972b1 jne 0x12b97279 */
  if (!C.zf) goto L_12b97279;
  /* 12b972b3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12b972b5 jmp 0x12b972cf */
  goto L_12b972cf;
L_12b972b7:;
  /* 12b972b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b972bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12b972bf jmp 0x12b972cf */
  goto L_12b972cf;
L_12b972c1:;
  /* 12b972c1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b972c7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12b972c9 jmp 0x12b972cf */
  goto L_12b972cf;
L_12b972cb:;
  /* 12b972cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b972cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12b972cf:;
  /* 12b972cf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b972d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b972d4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12b972d5 je 0x12b972e1 */
  if (C.zf) goto L_12b972e1;
L_12b972d7:;
  /* 12b972d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b972d9:;
  /* 12b972d9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12b972db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b972de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12b972df jne 0x12b972d9 */
  if (!C.zf) goto L_12b972d9;
L_12b972e1:;
  /* 12b972e1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12b972e4 jne 0x12b9726b */
  if (!C.zf) goto L_12b9726b;
L_12b972e6:;
  /* 12b972e6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12b972ea pop ebx */
  EBX = (pop32());
  /* 12b972eb pop esi */
  ESI = (pop32());
  /* 12b972ec pop edi */
  EDI = (pop32());
  /* 12b972ed ret  */
  ESPCHK(0x12b971f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072f0 @ 0x12b972f0 (55 bytes, 16 insns) */
void f_12b972f0(void) {
  FTRACE(0x12b972f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b972f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b972f1 mov ebp, esp */
  EBP = (ESP);
  /* 12b972f3 mov eax, dword ptr [0x12bbdb84] */
  EAX = (r32((uint32_t)(0x12bbdb84)));
  /* 12b972f8 push eax */
  push32((uint32_t)(EAX));
  /* 12b972f9 call dword ptr [0x12bc1300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1300))), 0x12b972ffu);
  /* 12b972ff mov ecx, dword ptr [0x12bbdb74] */
  ECX = (r32((uint32_t)(0x12bbdb74)));
  /* 12b97305 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97306 call dword ptr [0x12bc1300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1300))), 0x12b9730cu);
  /* 12b9730c mov edx, dword ptr [0x12bbdb64] */
  EDX = (r32((uint32_t)(0x12bbdb64)));
  /* 12b97312 push edx */
  push32((uint32_t)(EDX));
  /* 12b97313 call dword ptr [0x12bc1300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1300))), 0x12b97319u);
  /* 12b97319 mov eax, dword ptr [0x12bbdb44] */
  EAX = (r32((uint32_t)(0x12bbdb44)));
  /* 12b9731e push eax */
  push32((uint32_t)(EAX));
  /* 12b9731f call dword ptr [0x12bc1300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1300))), 0x12b97325u);
  /* 12b97325 pop ebp */
  EBP = (pop32());
  /* 12b97326 ret  */
  ESPCHK(0x12b972f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007330 @ 0x12b97330 (159 bytes, 47 insns) */
void f_12b97330(void) {
  FTRACE(0x12b97330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97330 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97331 mov ebp, esp */
  EBP = (ESP);
  /* 12b97333 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97334 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9733b jmp 0x12b97346 */
  goto L_12b97346;
L_12b9733d:;
  /* 12b9733d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97340 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97343 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b97346:;
  /* 12b97346 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9734a jge 0x12b97399 */
  if ((C.sf==C.of)) goto L_12b97399;
  /* 12b9734c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9734f cmp dword ptr [ecx*4 + 0x12bbdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12bbdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97357 je 0x12b97397 */
  if (C.zf) goto L_12b97397;
  /* 12b97359 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9735d je 0x12b97397 */
  if (C.zf) goto L_12b97397;
  /* 12b9735f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97363 je 0x12b97397 */
  if (C.zf) goto L_12b97397;
  /* 12b97365 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97369 je 0x12b97397 */
  if (C.zf) goto L_12b97397;
  /* 12b9736b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9736f je 0x12b97397 */
  if (C.zf) goto L_12b97397;
  /* 12b97371 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97374 mov eax, dword ptr [edx*4 + 0x12bbdb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12bbdb40)));
  /* 12b9737b push eax */
  push32((uint32_t)(EAX));
  /* 12b9737c call dword ptr [0x12bc12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12c8))), 0x12b97382u);
  /* 12b97382 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b97384 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97387 mov edx, dword ptr [ecx*4 + 0x12bbdb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12bbdb40)));
  /* 12b9738e push edx */
  push32((uint32_t)(EDX));
  /* 12b9738f call 0x12b94460 */
  push32(0x12b97394u); f_12b94460();
  /* 12b97394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b97397:;
  /* 12b97397 jmp 0x12b9733d */
  goto L_12b9733d;
L_12b97399:;
  /* 12b97399 mov eax, dword ptr [0x12bbdb64] */
  EAX = (r32((uint32_t)(0x12bbdb64)));
  /* 12b9739e push eax */
  push32((uint32_t)(EAX));
  /* 12b9739f call dword ptr [0x12bc12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12c8))), 0x12b973a5u);
  /* 12b973a5 mov ecx, dword ptr [0x12bbdb74] */
  ECX = (r32((uint32_t)(0x12bbdb74)));
  /* 12b973ab push ecx */
  push32((uint32_t)(ECX));
  /* 12b973ac call dword ptr [0x12bc12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12c8))), 0x12b973b2u);
  /* 12b973b2 mov edx, dword ptr [0x12bbdb84] */
  EDX = (r32((uint32_t)(0x12bbdb84)));
  /* 12b973b8 push edx */
  push32((uint32_t)(EDX));
  /* 12b973b9 call dword ptr [0x12bc12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12c8))), 0x12b973bfu);
  /* 12b973bf mov eax, dword ptr [0x12bbdb44] */
  EAX = (r32((uint32_t)(0x12bbdb44)));
  /* 12b973c4 push eax */
  push32((uint32_t)(EAX));
  /* 12b973c5 call dword ptr [0x12bc12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12c8))), 0x12b973cbu);
  /* 12b973cb mov esp, ebp */
  ESP = (EBP);
  /* 12b973cd pop ebp */
  EBP = (pop32());
  /* 12b973ce ret  */
  ESPCHK(0x12b97330u, _esp0);
  ESP += 4; return;
}

/* FUN_100073d0 @ 0x12b973d0 (151 bytes, 46 insns) */
void f_12b973d0(void) {
  FTRACE(0x12b973d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b973d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b973d1 mov ebp, esp */
  EBP = (ESP);
  /* 12b973d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b973d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b973d7 cmp dword ptr [eax*4 + 0x12bbdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12bbdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b973df jne 0x12b97452 */
  if (!C.zf) goto L_12b97452;
  /* 12b973e1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12b973e6 push 0x12bbb664 */
  push32((uint32_t)(0x12bbb664u));
  /* 12b973eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12b973ed push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12b973ef call 0x12b939d0 */
  push32(0x12b973f4u); f_12b939d0();
  /* 12b973f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b973f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b973fa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b973fe jne 0x12b9740a */
  if (!C.zf) goto L_12b9740a;
  /* 12b97400 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12b97402 call 0x12b92940 */
  push32(0x12b97407u); f_12b92940();
  /* 12b97407 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9740a:;
  /* 12b9740a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12b9740c call 0x12b973d0 */
  push32(0x12b97411u); f_12b973d0();
  /* 12b97411 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97414 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97417 cmp dword ptr [ecx*4 + 0x12bbdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12bbdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9741f jne 0x12b9743a */
  if (!C.zf) goto L_12b9743a;
  /* 12b97421 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97424 push edx */
  push32((uint32_t)(EDX));
  /* 12b97425 call dword ptr [0x12bc1300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1300))), 0x12b9742bu);
  /* 12b9742b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9742e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97431 mov dword ptr [eax*4 + 0x12bbdb40], ecx */
  w32((uint32_t)(EAX*4 + 0x12bbdb40), (ECX));
  /* 12b97438 jmp 0x12b97448 */
  goto L_12b97448;
L_12b9743a:;
  /* 12b9743a push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9743c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9743f push edx */
  push32((uint32_t)(EDX));
  /* 12b97440 call 0x12b94460 */
  push32(0x12b97445u); f_12b94460();
  /* 12b97445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b97448:;
  /* 12b97448 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12b9744a call 0x12b97470 */
  push32(0x12b9744fu); f_12b97470();
  /* 12b9744f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b97452:;
  /* 12b97452 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97455 mov ecx, dword ptr [eax*4 + 0x12bbdb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12bbdb40)));
  /* 12b9745c push ecx */
  push32((uint32_t)(ECX));
  /* 12b9745d call dword ptr [0x12bc1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1304))), 0x12b97463u);
  /* 12b97463 mov esp, ebp */
  ESP = (EBP);
  /* 12b97465 pop ebp */
  EBP = (pop32());
  /* 12b97466 ret  */
  ESPCHK(0x12b973d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007470 @ 0x12b97470 (22 bytes, 8 insns) */
void f_12b97470(void) {
  FTRACE(0x12b97470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97470 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97471 mov ebp, esp */
  EBP = (ESP);
  /* 12b97473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97476 mov ecx, dword ptr [eax*4 + 0x12bbdb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12bbdb40)));
  /* 12b9747d push ecx */
  push32((uint32_t)(ECX));
  /* 12b9747e call dword ptr [0x12bc1308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1308))), 0x12b97484u);
  /* 12b97484 pop ebp */
  EBP = (pop32());
  /* 12b97485 ret  */
  ESPCHK(0x12b97470u, _esp0);
  ESP += 4; return;
}

/* FUN_10007490 @ 0x12b97490 (26 bytes, 10 insns) */
void f_12b97490(void) {
  FTRACE(0x12b97490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97490 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97491 mov ebp, esp */
  EBP = (ESP);
  /* 12b97493 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97496 push eax */
  push32((uint32_t)(EAX));
  /* 12b97497 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b97499 call dword ptr [0x12bc130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc130c))), 0x12b9749fu);
  /* 12b9749f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12b974a4 call dword ptr [0x12bc1290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1290))), 0x12b974aau);
  /* 12b974aa pop ebp */
  EBP = (pop32());
  /* 12b974ab ret  */
  ESPCHK(0x12b97490u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12b974b0 (446 bytes, 130 insns) */
void f_12b974b0(void) {
  FTRACE(0x12b974b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b974b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b974b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b974b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b974b6 call 0x12b93410 */
  push32(0x12b974bbu); f_12b93410();
  /* 12b974bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b974be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b974c1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12b974c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12b974c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b974c8 push edx */
  push32((uint32_t)(EDX));
  /* 12b974c9 call 0x12b97670 */
  push32(0x12b974ceu); f_12b97670();
  /* 12b974ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b974d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12b974d4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b974d8 je 0x12b974e3 */
  if (C.zf) goto L_12b974e3;
  /* 12b974da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b974dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b974e1 jne 0x12b974f2 */
  if (!C.zf) goto L_12b974f2;
L_12b974e3:;
  /* 12b974e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b974e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12b974e7 call dword ptr [0x12bc1310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1310))), 0x12b974edu);
  /* 12b974ed jmp 0x12b9766a */
  goto L_12b9766a;
L_12b974f2:;
  /* 12b974f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b974f5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b974f9 jne 0x12b9750f */
  if (!C.zf) goto L_12b9750f;
  /* 12b974fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b974fe mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12b97505 mov eax, 1 */
  EAX = (0x1u);
  /* 12b9750a jmp 0x12b9766a */
  goto L_12b9766a;
L_12b9750f:;
  /* 12b9750f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b97512 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97516 jne 0x12b97520 */
  if (!C.zf) goto L_12b97520;
  /* 12b97518 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9751b jmp 0x12b9766a */
  goto L_12b9766a;
L_12b97520:;
  /* 12b97520 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b97523 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12b97526 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b97529 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9752c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12b9752f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12b97532 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97535 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97538 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12b9753b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9753e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97542 jne 0x12b97647 */
  if (!C.zf) goto L_12b97647;
  /* 12b97548 mov eax, dword ptr [0x12bbdc78] */
  EAX = (r32((uint32_t)(0x12bbdc78)));
  /* 12b9754d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12b97550 jmp 0x12b9755b */
  goto L_12b9755b;
L_12b97552:;
  /* 12b97552 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b97555 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97558 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12b9755b:;
  /* 12b9755b mov edx, dword ptr [0x12bbdc78] */
  EDX = (r32((uint32_t)(0x12bbdc78)));
  /* 12b97561 add edx, dword ptr [0x12bbdc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12bbdc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97567 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9756a jge 0x12b97582 */
  if ((C.sf==C.of)) goto L_12b97582;
  /* 12b9756c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b9756f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b97572 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97575 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12b97578 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12b97580 jmp 0x12b97552 */
  goto L_12b97552;
L_12b97582:;
  /* 12b97582 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97585 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12b97588 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9758b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9758e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97594 jne 0x12b975a5 */
  if (!C.zf) goto L_12b975a5;
  /* 12b97596 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97599 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12b975a0 jmp 0x12b9762d */
  goto L_12b9762d;
L_12b975a5:;
  /* 12b975a5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b975a8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b975ae jne 0x12b975bc */
  if (!C.zf) goto L_12b975bc;
  /* 12b975b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b975b3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12b975ba jmp 0x12b9762d */
  goto L_12b9762d;
L_12b975bc:;
  /* 12b975bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b975bf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b975c5 jne 0x12b975d3 */
  if (!C.zf) goto L_12b975d3;
  /* 12b975c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b975ca mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12b975d1 jmp 0x12b9762d */
  goto L_12b9762d;
L_12b975d3:;
  /* 12b975d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b975d6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b975dc jne 0x12b975ea */
  if (!C.zf) goto L_12b975ea;
  /* 12b975de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b975e1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12b975e8 jmp 0x12b9762d */
  goto L_12b9762d;
L_12b975ea:;
  /* 12b975ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b975ed cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b975f3 jne 0x12b97601 */
  if (!C.zf) goto L_12b97601;
  /* 12b975f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b975f8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12b975ff jmp 0x12b9762d */
  goto L_12b9762d;
L_12b97601:;
  /* 12b97601 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b97604 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9760a jne 0x12b97618 */
  if (!C.zf) goto L_12b97618;
  /* 12b9760c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9760f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12b97616 jmp 0x12b9762d */
  goto L_12b9762d;
L_12b97618:;
  /* 12b97618 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9761b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97621 jne 0x12b9762d */
  if (!C.zf) goto L_12b9762d;
  /* 12b97623 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97626 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12b9762d:;
  /* 12b9762d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97630 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12b97633 push edx */
  push32((uint32_t)(EDX));
  /* 12b97634 push 8 */
  push32((uint32_t)(0x8u));
  /* 12b97636 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12b97639u);
  /* 12b97639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9763c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9763f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b97642 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12b97645 jmp 0x12b9765e */
  goto L_12b9765e;
L_12b97647:;
  /* 12b97647 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9764a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12b97651 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b97654 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b97657 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97658 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12b9765bu);
  /* 12b9765b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9765e:;
  /* 12b9765e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97661 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b97664 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12b97667 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12b9766a:;
  /* 12b9766a mov esp, ebp */
  ESP = (EBP);
  /* 12b9766c pop ebp */
  EBP = (pop32());
  /* 12b9766d ret  */
  ESPCHK(0x12b974b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007670 @ 0x12b97670 (89 bytes, 35 insns) */
void f_12b97670(void) {
  FTRACE(0x12b97670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97670 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97671 mov ebp, esp */
  EBP = (ESP);
  /* 12b97673 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97674 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97677 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b9767a:;
  /* 12b9767a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9767d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b9767f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97682 je 0x12b976a2 */
  if (C.zf) goto L_12b976a2;
  /* 12b97684 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97687 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9768a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9768d mov ecx, dword ptr [0x12bbdc84] */
  ECX = (r32((uint32_t)(0x12bbdc84)));
  /* 12b97693 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b97696 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97699 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9769b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9769e jae 0x12b976a2 */
  if (!C.cf) goto L_12b976a2;
  /* 12b976a0 jmp 0x12b9767a */
  goto L_12b9767a;
L_12b976a2:;
  /* 12b976a2 mov eax, dword ptr [0x12bbdc84] */
  EAX = (r32((uint32_t)(0x12bbdc84)));
  /* 12b976a7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b976aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b976ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b976af cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b976b2 jae 0x12b976be */
  if (!C.cf) goto L_12b976be;
  /* 12b976b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b976b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b976b9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b976bc je 0x12b976c2 */
  if (C.zf) goto L_12b976c2;
L_12b976be:;
  /* 12b976be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b976c0 jmp 0x12b976c5 */
  goto L_12b976c5;
L_12b976c2:;
  /* 12b976c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12b976c5:;
  /* 12b976c5 mov esp, ebp */
  ESP = (EBP);
  /* 12b976c7 pop ebp */
  EBP = (pop32());
  /* 12b976c8 ret  */
  ESPCHK(0x12b97670u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12b976d0 (48 bytes, 17 insns) */
void f_12b976d0(void) {
  FTRACE(0x12b976d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b976d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b976d1 mov ebp, esp */
  EBP = (ESP);
  /* 12b976d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b976d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b976d6 call 0x12b973d0 */
  push32(0x12b976dbu); f_12b973d0();
  /* 12b976db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b976de mov eax, dword ptr [0x12bbf674] */
  EAX = (r32((uint32_t)(0x12bbf674)));
  /* 12b976e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b976e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b976e9 mov dword ptr [0x12bbf674], ecx */
  w32((uint32_t)(0x12bbf674), (ECX));
  /* 12b976ef push 9 */
  push32((uint32_t)(0x9u));
  /* 12b976f1 call 0x12b97470 */
  push32(0x12b976f6u); f_12b97470();
  /* 12b976f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b976f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b976fc mov esp, ebp */
  ESP = (EBP);
  /* 12b976fe pop ebp */
  EBP = (pop32());
  /* 12b976ff ret  */
  ESPCHK(0x12b976d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007700 @ 0x12b97700 (10 bytes, 5 insns) */
void f_12b97700(void) {
  FTRACE(0x12b97700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97700 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97701 mov ebp, esp */
  EBP = (ESP);
  /* 12b97703 mov eax, dword ptr [0x12bbf674] */
  EAX = (r32((uint32_t)(0x12bbf674)));
  /* 12b97708 pop ebp */
  EBP = (pop32());
  /* 12b97709 ret  */
  ESPCHK(0x12b97700u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12b97710 (45 bytes, 19 insns) */
void f_12b97710(void) {
  FTRACE(0x12b97710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97710 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97711 mov ebp, esp */
  EBP = (ESP);
  /* 12b97713 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97714 mov eax, dword ptr [0x12bbf674] */
  EAX = (r32((uint32_t)(0x12bbf674)));
  /* 12b97719 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9771c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97720 je 0x12b97730 */
  if (C.zf) goto L_12b97730;
  /* 12b97722 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97725 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97726 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12b97729u);
  /* 12b97729 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9772c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9772e jne 0x12b97734 */
  if (!C.zf) goto L_12b97734;
L_12b97730:;
  /* 12b97730 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b97732 jmp 0x12b97739 */
  goto L_12b97739;
L_12b97734:;
  /* 12b97734 mov eax, 1 */
  EAX = (0x1u);
L_12b97739:;
  /* 12b97739 mov esp, ebp */
  ESP = (EBP);
  /* 12b9773b pop ebp */
  EBP = (pop32());
  /* 12b9773c ret  */
  ESPCHK(0x12b97710u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12b97740 (88 bytes, 40 insns) */
void f_12b97740(void) {
  FTRACE(0x12b97740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97740 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12b97744 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12b97748 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9774a je 0x12b97793 */
  if (C.zf) goto L_12b97793;
  /* 12b9774c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9774e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12b97752 push edi */
  push32((uint32_t)(EDI));
  /* 12b97753 mov edi, ecx */
  EDI = (ECX);
  /* 12b97755 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97758 jb 0x12b97787 */
  if (C.cf) goto L_12b97787;
  /* 12b9775a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9775c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9775f je 0x12b97769 */
  if (C.zf) goto L_12b97769;
  /* 12b97761 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12b97763:;
  /* 12b97763 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b97765 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12b97766 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12b97767 jne 0x12b97763 */
  if (!C.zf) goto L_12b97763;
L_12b97769:;
  /* 12b97769 mov ecx, eax */
  ECX = (EAX);
  /* 12b9776b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12b9776e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97770 mov ecx, eax */
  ECX = (EAX);
  /* 12b97772 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12b97775 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97777 mov ecx, edx */
  ECX = (EDX);
  /* 12b97779 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9777c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9777f je 0x12b97787 */
  if (C.zf) goto L_12b97787;
  /* 12b97781 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12b97783 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b97785 je 0x12b9778d */
  if (C.zf) goto L_12b9778d;
L_12b97787:;
  /* 12b97787 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b97789 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12b9778a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12b9778b jne 0x12b97787 */
  if (!C.zf) goto L_12b97787;
L_12b9778d:;
  /* 12b9778d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12b97791 pop edi */
  EDI = (pop32());
  /* 12b97792 ret  */
  ESPCHK(0x12b97740u, _esp0);
  ESP += 4; return;
L_12b97793:;
  /* 12b97793 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12b97797 ret  */
  ESPCHK(0x12b97740u, _esp0);
  ESP += 4; return;
}

/* FUN_100077a0 @ 0x12b977a0 (23 bytes, 10 insns) */
void f_12b977a0(void) {
  FTRACE(0x12b977a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b977a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b977a1 mov ebp, esp */
  EBP = (ESP);
  /* 12b977a3 mov eax, dword ptr [0x12bbf670] */
  EAX = (r32((uint32_t)(0x12bbf670)));
  /* 12b977a8 push eax */
  push32((uint32_t)(EAX));
  /* 12b977a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b977ac push ecx */
  push32((uint32_t)(ECX));
  /* 12b977ad call 0x12b977c0 */
  push32(0x12b977b2u); f_12b977c0();
  /* 12b977b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b977b5 pop ebp */
  EBP = (pop32());
  /* 12b977b6 ret  */
  ESPCHK(0x12b977a0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12b977c0 (87 bytes, 34 insns) */
void f_12b977c0(void) {
  FTRACE(0x12b977c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b977c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b977c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b977c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b977c4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b977c8 jbe 0x12b977ce */
  if ((C.cf||C.zf)) goto L_12b977ce;
  /* 12b977ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b977cc jmp 0x12b97813 */
  goto L_12b97813;
L_12b977ce:;
  /* 12b977ce cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b977d2 ja 0x12b977e5 */
  if ((!C.cf&&!C.zf)) goto L_12b977e5;
  /* 12b977d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b977d7 push eax */
  push32((uint32_t)(EAX));
  /* 12b977d8 call 0x12b97820 */
  push32(0x12b977ddu); f_12b97820();
  /* 12b977dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b977e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b977e3 jmp 0x12b977ec */
  goto L_12b977ec;
L_12b977e5:;
  /* 12b977e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12b977ec:;
  /* 12b977ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b977f0 jne 0x12b977f8 */
  if (!C.zf) goto L_12b977f8;
  /* 12b977f2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b977f6 jne 0x12b977fd */
  if (!C.zf) goto L_12b977fd;
L_12b977f8:;
  /* 12b977f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b977fb jmp 0x12b97813 */
  goto L_12b97813;
L_12b977fd:;
  /* 12b977fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97800 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97801 call 0x12b97710 */
  push32(0x12b97806u); f_12b97710();
  /* 12b97806 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9780b jne 0x12b97811 */
  if (!C.zf) goto L_12b97811;
  /* 12b9780d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9780f jmp 0x12b97813 */
  goto L_12b97813;
L_12b97811:;
  /* 12b97811 jmp 0x12b977ce */
  goto L_12b977ce;
L_12b97813:;
  /* 12b97813 mov esp, ebp */
  ESP = (EBP);
  /* 12b97815 pop ebp */
  EBP = (pop32());
  /* 12b97816 ret  */
  ESPCHK(0x12b977c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007820 @ 0x12b97820 (109 bytes, 37 insns) */
void f_12b97820(void) {
  FTRACE(0x12b97820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97820 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97821 mov ebp, esp */
  EBP = (ESP);
  /* 12b97823 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97827 cmp eax, dword ptr [0x12bbdc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9782d ja 0x12b9785d */
  if ((!C.cf&&!C.zf)) goto L_12b9785d;
  /* 12b9782f push 9 */
  push32((uint32_t)(0x9u));
  /* 12b97831 call 0x12b973d0 */
  push32(0x12b97836u); f_12b973d0();
  /* 12b97836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97839 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9783c push ecx */
  push32((uint32_t)(ECX));
  /* 12b9783d call 0x12b98360 */
  push32(0x12b97842u); f_12b98360();
  /* 12b97842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97845 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b97848 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b9784a call 0x12b97470 */
  push32(0x12b9784fu); f_12b97470();
  /* 12b9784f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97852 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97856 je 0x12b9785d */
  if (C.zf) goto L_12b9785d;
  /* 12b97858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9785b jmp 0x12b97889 */
  goto L_12b97889;
L_12b9785d:;
  /* 12b9785d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97861 jne 0x12b9786a */
  if (!C.zf) goto L_12b9786a;
  /* 12b97863 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12b9786a:;
  /* 12b9786a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9786d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97870 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12b97873 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12b97876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97879 push eax */
  push32((uint32_t)(EAX));
  /* 12b9787a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9787c mov ecx, dword ptr [0x12bc0e2c] */
  ECX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b97882 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97883 call dword ptr [0x12bc12d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12d8))), 0x12b97889u);
L_12b97889:;
  /* 12b97889 mov esp, ebp */
  ESP = (EBP);
  /* 12b9788b pop ebp */
  EBP = (pop32());
  /* 12b9788c ret  */
  ESPCHK(0x12b97820u, _esp0);
  ESP += 4; return;
}

