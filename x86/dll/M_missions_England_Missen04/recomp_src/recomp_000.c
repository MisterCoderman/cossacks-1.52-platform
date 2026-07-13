#include "recomp.h"

/* thunk_FUN_10001b50 @ 0x10461005 (5 bytes, 1 insns) */
void f_10461005(void) {
  FTRACE(0x10461005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461005 jmp 0x10461b50 */
  f_10461b50(); return;
}

/* OnInit @ 0x1046100a (5 bytes, 1 insns) */
void f_1046100a(void) {
  FTRACE(0x1046100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046100a jmp 0x10461090 */
  f_10461090(); return;
}

/* thunk_FUN_10001030 @ 0x1046100f (5 bytes, 1 insns) */
void f_1046100f(void) {
  FTRACE(0x1046100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046100f jmp 0x10461030 */
  f_10461030(); return;
}

/* ProcessScenary @ 0x10461014 (5 bytes, 1 insns) */
void f_10461014(void) {
  FTRACE(0x10461014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461014 jmp 0x104612d0 */
  f_104612d0(); return;
}

/* FUN_10001030 @ 0x10461030 (67 bytes, 26 insns) */
void f_10461030(void) {
  FTRACE(0x10461030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461030 push ebp */
  push32((uint32_t)(EBP));
  /* 10461031 mov ebp, esp */
  EBP = (ESP);
  /* 10461033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10461036 push ebx */
  push32((uint32_t)(EBX));
  /* 10461037 push esi */
  push32((uint32_t)(ESI));
  /* 10461038 push edi */
  push32((uint32_t)(EDI));
  /* 10461039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1046103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10461041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10461046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10461048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461052 je 0x10461056 */
  if (C.zf) goto L_10461056;
  /* 10461054 jmp 0x1046105b */
  goto L_1046105b;
L_10461056:;
  /* 10461056 call 0x1046100a */
  push32(0x1046105bu); f_1046100a();
L_1046105b:;
  /* 1046105b mov eax, 1 */
  EAX = (0x1u);
  /* 10461060 pop edi */
  EDI = (pop32());
  /* 10461061 pop esi */
  ESI = (pop32());
  /* 10461062 pop ebx */
  EBX = (pop32());
  /* 10461063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461068 call 0x10461c00 */
  push32(0x1046106du); f_10461c00();
  /* 1046106d mov esp, ebp */
  ESP = (EBP);
  /* 1046106f pop ebp */
  EBP = (pop32());
  /* 10461070 ret 0xc */
  ESPCHK(0x10461030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10461090 (455 bytes, 124 insns) */
void f_10461090(void) {
  FTRACE(0x10461090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461090 push ebp */
  push32((uint32_t)(EBP));
  /* 10461091 mov ebp, esp */
  EBP = (ESP);
  /* 10461093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10461096 push ebx */
  push32((uint32_t)(EBX));
  /* 10461097 push esi */
  push32((uint32_t)(ESI));
  /* 10461098 push edi */
  push32((uint32_t)(EDI));
  /* 10461099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1046109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 104610a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104610a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104610a8 mov esi, esp */
  ESI = (ESP);
  /* 104610aa push 0x10489090 */
  push32((uint32_t)(0x10489090u));
  /* 104610af push 0x1048e410 */
  push32((uint32_t)(0x1048e410u));
  /* 104610b4 call dword ptr [0x104903ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903ec))), 0x104610bau);
  /* 104610ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104610bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104610bf call 0x10461c00 */
  push32(0x104610c4u); f_10461c00();
  /* 104610c4 mov esi, esp */
  ESI = (ESP);
  /* 104610c6 push 0x10489088 */
  push32((uint32_t)(0x10489088u));
  /* 104610cb push 0x1048e418 */
  push32((uint32_t)(0x1048e418u));
  /* 104610d0 call dword ptr [0x104903ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903ec))), 0x104610d6u);
  /* 104610d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104610d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104610db call 0x10461c00 */
  push32(0x104610e0u); f_10461c00();
  /* 104610e0 mov esi, esp */
  ESI = (ESP);
  /* 104610e2 push 0x10489080 */
  push32((uint32_t)(0x10489080u));
  /* 104610e7 push 0x1048e420 */
  push32((uint32_t)(0x1048e420u));
  /* 104610ec call dword ptr [0x104903ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903ec))), 0x104610f2u);
  /* 104610f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104610f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104610f7 call 0x10461c00 */
  push32(0x104610fcu); f_10461c00();
  /* 104610fc mov esi, esp */
  ESI = (ESP);
  /* 104610fe push 0x10489078 */
  push32((uint32_t)(0x10489078u));
  /* 10461103 push 0x1048e428 */
  push32((uint32_t)(0x1048e428u));
  /* 10461108 call dword ptr [0x104903ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903ec))), 0x1046110eu);
  /* 1046110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461113 call 0x10461c00 */
  push32(0x10461118u); f_10461c00();
  /* 10461118 mov esi, esp */
  ESI = (ESP);
  /* 1046111a push 0x10489070 */
  push32((uint32_t)(0x10489070u));
  /* 1046111f push 0x1048e430 */
  push32((uint32_t)(0x1048e430u));
  /* 10461124 call dword ptr [0x104903ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903ec))), 0x1046112au);
  /* 1046112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046112f call 0x10461c00 */
  push32(0x10461134u); f_10461c00();
  /* 10461134 mov esi, esp */
  ESI = (ESP);
  /* 10461136 push 0x10489068 */
  push32((uint32_t)(0x10489068u));
  /* 1046113b push 0x1048e438 */
  push32((uint32_t)(0x1048e438u));
  /* 10461140 call dword ptr [0x104903ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903ec))), 0x10461146u);
  /* 10461146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046114b call 0x10461c00 */
  push32(0x10461150u); f_10461c00();
  /* 10461150 mov esi, esp */
  ESI = (ESP);
  /* 10461152 push 0x10489060 */
  push32((uint32_t)(0x10489060u));
  /* 10461157 push 0x1048e440 */
  push32((uint32_t)(0x1048e440u));
  /* 1046115c call dword ptr [0x104903ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903ec))), 0x10461162u);
  /* 10461162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461167 call 0x10461c00 */
  push32(0x1046116cu); f_10461c00();
  /* 1046116c mov esi, esp */
  ESI = (ESP);
  /* 1046116e push 0x10489058 */
  push32((uint32_t)(0x10489058u));
  /* 10461173 push 0x1048e3e0 */
  push32((uint32_t)(0x1048e3e0u));
  /* 10461178 call dword ptr [0x104903f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903f0))), 0x1046117eu);
  /* 1046117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461183 call 0x10461c00 */
  push32(0x10461188u); f_10461c00();
  /* 10461188 mov esi, esp */
  ESI = (ESP);
  /* 1046118a push 0x10489050 */
  push32((uint32_t)(0x10489050u));
  /* 1046118f push 0x1048e3f0 */
  push32((uint32_t)(0x1048e3f0u));
  /* 10461194 call dword ptr [0x104903f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903f0))), 0x1046119au);
  /* 1046119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046119f call 0x10461c00 */
  push32(0x104611a4u); f_10461c00();
  /* 104611a4 mov esi, esp */
  ESI = (ESP);
  /* 104611a6 push 0x10489048 */
  push32((uint32_t)(0x10489048u));
  /* 104611ab push 0x1048e3e8 */
  push32((uint32_t)(0x1048e3e8u));
  /* 104611b0 call dword ptr [0x104903f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903f0))), 0x104611b6u);
  /* 104611b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104611b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104611bb call 0x10461c00 */
  push32(0x104611c0u); f_10461c00();
  /* 104611c0 mov esi, esp */
  ESI = (ESP);
  /* 104611c2 push 0x10489040 */
  push32((uint32_t)(0x10489040u));
  /* 104611c7 push 0x1048e400 */
  push32((uint32_t)(0x1048e400u));
  /* 104611cc call dword ptr [0x104903f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903f0))), 0x104611d2u);
  /* 104611d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104611d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104611d7 call 0x10461c00 */
  push32(0x104611dcu); f_10461c00();
  /* 104611dc mov esi, esp */
  ESI = (ESP);
  /* 104611de push 0x10489038 */
  push32((uint32_t)(0x10489038u));
  /* 104611e3 push 0x1048e3f8 */
  push32((uint32_t)(0x1048e3f8u));
  /* 104611e8 call dword ptr [0x104903f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903f0))), 0x104611eeu);
  /* 104611ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104611f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104611f3 call 0x10461c00 */
  push32(0x104611f8u); f_10461c00();
  /* 104611f8 mov esi, esp */
  ESI = (ESP);
  /* 104611fa push 0x10489030 */
  push32((uint32_t)(0x10489030u));
  /* 104611ff push 0x1048e408 */
  push32((uint32_t)(0x1048e408u));
  /* 10461204 call dword ptr [0x104903f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903f0))), 0x1046120au);
  /* 1046120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046120f call 0x10461c00 */
  push32(0x10461214u); f_10461c00();
  /* 10461214 mov esi, esp */
  ESI = (ESP);
  /* 10461216 push 0x10489028 */
  push32((uint32_t)(0x10489028u));
  /* 1046121b push 1 */
  push32((uint32_t)(0x1u));
  /* 1046121d call dword ptr [0x104903e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903e8))), 0x10461223u);
  /* 10461223 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461226 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461228 call 0x10461c00 */
  push32(0x1046122du); f_10461c00();
  /* 1046122d mov esi, esp */
  ESI = (ESP);
  /* 1046122f push 0x1048901c */
  push32((uint32_t)(0x1048901cu));
  /* 10461234 push 5 */
  push32((uint32_t)(0x5u));
  /* 10461236 call dword ptr [0x104903e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903e8))), 0x1046123cu);
  /* 1046123c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046123f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461241 call 0x10461c00 */
  push32(0x10461246u); f_10461c00();
  /* 10461246 pop edi */
  EDI = (pop32());
  /* 10461247 pop esi */
  ESI = (pop32());
  /* 10461248 pop ebx */
  EBX = (pop32());
  /* 10461249 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046124c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046124e call 0x10461c00 */
  push32(0x10461253u); f_10461c00();
  /* 10461253 mov esp, ebp */
  ESP = (EBP);
  /* 10461255 pop ebp */
  EBP = (pop32());
  /* 10461256 ret  */
  ESPCHK(0x10461090u, _esp0);
  ESP += 4; return;
}

/* FUN_100012d0 @ 0x104612d0 (1733 bytes, 510 insns) */
void f_104612d0(void) {
  FTRACE(0x104612d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104612d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104612d1 mov ebp, esp */
  EBP = (ESP);
  /* 104612d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104612d6 push ebx */
  push32((uint32_t)(EBX));
  /* 104612d7 push esi */
  push32((uint32_t)(ESI));
  /* 104612d8 push edi */
  push32((uint32_t)(EDI));
  /* 104612d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 104612dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 104612e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104612e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104612e8 mov esi, esp */
  ESI = (ESP);
  /* 104612ea push 1 */
  push32((uint32_t)(0x1u));
  /* 104612ec call dword ptr [0x104903c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c0))), 0x104612f2u);
  /* 104612f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104612f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104612f7 call 0x10461c00 */
  push32(0x104612fcu); f_10461c00();
  /* 104612fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10461301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461303 je 0x10461458 */
  if (C.zf) goto L_10461458;
  /* 10461309 mov esi, esp */
  ESI = (ESP);
  /* 1046130b push 0 */
  push32((uint32_t)(0x0u));
  /* 1046130d push 1 */
  push32((uint32_t)(0x1u));
  /* 1046130f call dword ptr [0x104903b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903b8))), 0x10461315u);
  /* 10461315 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461318 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046131a call 0x10461c00 */
  push32(0x1046131fu); f_10461c00();
  /* 1046131f mov esi, esp */
  ESI = (ESP);
  /* 10461321 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10461326 push 3 */
  push32((uint32_t)(0x3u));
  /* 10461328 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046132a call dword ptr [0x104903c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c8))), 0x10461330u);
  /* 10461330 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461333 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461335 call 0x10461c00 */
  push32(0x1046133au); f_10461c00();
  /* 1046133a mov esi, esp */
  ESI = (ESP);
  /* 1046133c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10461341 push 1 */
  push32((uint32_t)(0x1u));
  /* 10461343 push 0 */
  push32((uint32_t)(0x0u));
  /* 10461345 call dword ptr [0x104903c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c8))), 0x1046134bu);
  /* 1046134b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046134e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461350 call 0x10461c00 */
  push32(0x10461355u); f_10461c00();
  /* 10461355 mov esi, esp */
  ESI = (ESP);
  /* 10461357 push 0 */
  push32((uint32_t)(0x0u));
  /* 10461359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046135b push 0 */
  push32((uint32_t)(0x0u));
  /* 1046135d call dword ptr [0x104903c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c8))), 0x10461363u);
  /* 10461363 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461366 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461368 call 0x10461c00 */
  push32(0x1046136du); f_10461c00();
  /* 1046136d mov esi, esp */
  ESI = (ESP);
  /* 1046136f push 0 */
  push32((uint32_t)(0x0u));
  /* 10461371 push 2 */
  push32((uint32_t)(0x2u));
  /* 10461373 push 0 */
  push32((uint32_t)(0x0u));
  /* 10461375 call dword ptr [0x104903c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c8))), 0x1046137bu);
  /* 1046137b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046137e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461380 call 0x10461c00 */
  push32(0x10461385u); f_10461c00();
  /* 10461385 mov esi, esp */
  ESI = (ESP);
  /* 10461387 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1046138c push 5 */
  push32((uint32_t)(0x5u));
  /* 1046138e push 0 */
  push32((uint32_t)(0x0u));
  /* 10461390 call dword ptr [0x104903c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c8))), 0x10461396u);
  /* 10461396 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461399 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046139b call 0x10461c00 */
  push32(0x104613a0u); f_10461c00();
  /* 104613a0 mov esi, esp */
  ESI = (ESP);
  /* 104613a2 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 104613a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 104613a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104613ab call dword ptr [0x104903c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c8))), 0x104613b1u);
  /* 104613b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104613b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104613b6 call 0x10461c00 */
  push32(0x104613bbu); f_10461c00();
  /* 104613bb mov esi, esp */
  ESI = (ESP);
  /* 104613bd push 0x104890dc */
  push32((uint32_t)(0x104890dcu));
  /* 104613c2 call dword ptr [0x104903cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903cc))), 0x104613c8u);
  /* 104613c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104613cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104613cd call 0x10461c00 */
  push32(0x104613d2u); f_10461c00();
  /* 104613d2 mov esi, esp */
  ESI = (ESP);
  /* 104613d4 push 0x104890d0 */
  push32((uint32_t)(0x104890d0u));
  /* 104613d9 call dword ptr [0x104903cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903cc))), 0x104613dfu);
  /* 104613df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104613e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104613e4 call 0x10461c00 */
  push32(0x104613e9u); f_10461c00();
  /* 104613e9 mov esi, esp */
  ESI = (ESP);
  /* 104613eb push 0 */
  push32((uint32_t)(0x0u));
  /* 104613ed push 0x1048e3f0 */
  push32((uint32_t)(0x1048e3f0u));
  /* 104613f2 call dword ptr [0x104903c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c4))), 0x104613f8u);
  /* 104613f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104613fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104613fd call 0x10461c00 */
  push32(0x10461402u); f_10461c00();
  /* 10461402 mov esi, esp */
  ESI = (ESP);
  /* 10461404 push 0 */
  push32((uint32_t)(0x0u));
  /* 10461406 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 1046140b push 0x1048e418 */
  push32((uint32_t)(0x1048e418u));
  /* 10461410 push 1 */
  push32((uint32_t)(0x1u));
  /* 10461412 call dword ptr [0x104903d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903d4))), 0x10461418u);
  /* 10461418 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046141b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046141d call 0x10461c00 */
  push32(0x10461422u); f_10461c00();
  /* 10461422 mov esi, esp */
  ESI = (ESP);
  /* 10461424 push 0 */
  push32((uint32_t)(0x0u));
  /* 10461426 push 0x1048e400 */
  push32((uint32_t)(0x1048e400u));
  /* 1046142b call dword ptr [0x104903c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c4))), 0x10461431u);
  /* 10461431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461434 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461436 call 0x10461c00 */
  push32(0x1046143bu); f_10461c00();
  /* 1046143b mov esi, esp */
  ESI = (ESP);
  /* 1046143d push 0 */
  push32((uint32_t)(0x0u));
  /* 1046143f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10461441 push 0x1048e410 */
  push32((uint32_t)(0x1048e410u));
  /* 10461446 push 5 */
  push32((uint32_t)(0x5u));
  /* 10461448 call dword ptr [0x104903d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903d4))), 0x1046144eu);
  /* 1046144e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461451 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461453 call 0x10461c00 */
  push32(0x10461458u); f_10461c00();
L_10461458:;
  /* 10461458 mov esi, esp */
  ESI = (ESP);
  /* 1046145a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1046145c call dword ptr [0x104903c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c0))), 0x10461462u);
  /* 10461462 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461465 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461467 call 0x10461c00 */
  push32(0x1046146cu); f_10461c00();
  /* 1046146c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10461471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461473 je 0x104614d3 */
  if (C.zf) goto L_104614d3;
  /* 10461475 push 0x1048e3f0 */
  push32((uint32_t)(0x1048e3f0u));
  /* 1046147a call 0x10461005 */
  push32(0x1046147fu); f_10461005();
  /* 1046147f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461482 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461485 jge 0x104614d3 */
  if ((C.sf==C.of)) goto L_104614d3;
  /* 10461487 mov esi, esp */
  ESI = (ESP);
  /* 10461489 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046148b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1046148d call dword ptr [0x104903b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903b8))), 0x10461493u);
  /* 10461493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461496 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461498 call 0x10461c00 */
  push32(0x1046149du); f_10461c00();
  /* 1046149d mov esi, esp */
  ESI = (ESP);
  /* 1046149f push 0 */
  push32((uint32_t)(0x0u));
  /* 104614a1 push 0x1048e3e8 */
  push32((uint32_t)(0x1048e3e8u));
  /* 104614a6 call dword ptr [0x104903c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c4))), 0x104614acu);
  /* 104614ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104614af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104614b1 call 0x10461c00 */
  push32(0x104614b6u); f_10461c00();
  /* 104614b6 mov esi, esp */
  ESI = (ESP);
  /* 104614b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104614ba push 0 */
  push32((uint32_t)(0x0u));
  /* 104614bc push 0x1048e410 */
  push32((uint32_t)(0x1048e410u));
  /* 104614c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104614c3 call dword ptr [0x104903d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903d4))), 0x104614c9u);
  /* 104614c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104614cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104614ce call 0x10461c00 */
  push32(0x104614d3u); f_10461c00();
L_104614d3:;
  /* 104614d3 mov esi, esp */
  ESI = (ESP);
  /* 104614d5 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 104614d7 call dword ptr [0x104903c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c0))), 0x104614ddu);
  /* 104614dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104614e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104614e2 call 0x10461c00 */
  push32(0x104614e7u); f_10461c00();
  /* 104614e7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104614ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104614ee je 0x10461542 */
  if (C.zf) goto L_10461542;
  /* 104614f0 mov esi, esp */
  ESI = (ESP);
  /* 104614f2 push 0x1048e400 */
  push32((uint32_t)(0x1048e400u));
  /* 104614f7 push 0x1048e410 */
  push32((uint32_t)(0x1048e410u));
  /* 104614fc call dword ptr [0x104903d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903d8))), 0x10461502u);
  /* 10461502 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461505 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461507 call 0x10461c00 */
  push32(0x1046150cu); f_10461c00();
  /* 1046150c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046150e jle 0x10461542 */
  if ((C.zf||C.sf!=C.of)) goto L_10461542;
  /* 10461510 mov esi, esp */
  ESI = (ESP);
  /* 10461512 push 0 */
  push32((uint32_t)(0x0u));
  /* 10461514 push 0x1048e400 */
  push32((uint32_t)(0x1048e400u));
  /* 10461519 call dword ptr [0x104903c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c4))), 0x1046151fu);
  /* 1046151f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461522 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461524 call 0x10461c00 */
  push32(0x10461529u); f_10461c00();
  /* 10461529 mov esi, esp */
  ESI = (ESP);
  /* 1046152b push 0x1048e3f0 */
  push32((uint32_t)(0x1048e3f0u));
  /* 10461530 push 5 */
  push32((uint32_t)(0x5u));
  /* 10461532 call dword ptr [0x104903d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903d0))), 0x10461538u);
  /* 10461538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046153b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046153d call 0x10461c00 */
  push32(0x10461542u); f_10461c00();
L_10461542:;
  /* 10461542 mov esi, esp */
  ESI = (ESP);
  /* 10461544 push 2 */
  push32((uint32_t)(0x2u));
  /* 10461546 call dword ptr [0x104903c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c0))), 0x1046154cu);
  /* 1046154c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046154f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461551 call 0x10461c00 */
  push32(0x10461556u); f_10461c00();
  /* 10461556 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046155b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046155d je 0x1046160d */
  if (C.zf) goto L_1046160d;
  /* 10461563 push 0x1048e400 */
  push32((uint32_t)(0x1048e400u));
  /* 10461568 call 0x10461005 */
  push32(0x1046156du); f_10461005();
  /* 1046156d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461572 jle 0x1046160d */
  if ((C.zf||C.sf!=C.of)) goto L_1046160d;
  /* 10461578 push 0x1048e3f0 */
  push32((uint32_t)(0x1048e3f0u));
  /* 1046157d call 0x10461005 */
  push32(0x10461582u); f_10461005();
  /* 10461582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461587 jne 0x1046160d */
  if (!C.zf) goto L_1046160d;
  /* 1046158d mov esi, esp */
  ESI = (ESP);
  /* 1046158f push 0 */
  push32((uint32_t)(0x0u));
  /* 10461591 push 2 */
  push32((uint32_t)(0x2u));
  /* 10461593 call dword ptr [0x104903b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903b8))), 0x10461599u);
  /* 10461599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046159c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046159e call 0x10461c00 */
  push32(0x104615a3u); f_10461c00();
  /* 104615a3 mov esi, esp */
  ESI = (ESP);
  /* 104615a5 push 0x104890c8 */
  push32((uint32_t)(0x104890c8u));
  /* 104615aa call dword ptr [0x104903cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903cc))), 0x104615b0u);
  /* 104615b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104615b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104615b5 call 0x10461c00 */
  push32(0x104615bau); f_10461c00();
  /* 104615ba mov esi, esp */
  ESI = (ESP);
  /* 104615bc push 0 */
  push32((uint32_t)(0x0u));
  /* 104615be push 0x1048e400 */
  push32((uint32_t)(0x1048e400u));
  /* 104615c3 call dword ptr [0x104903c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c4))), 0x104615c9u);
  /* 104615c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104615cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104615ce call 0x10461c00 */
  push32(0x104615d3u); f_10461c00();
  /* 104615d3 mov esi, esp */
  ESI = (ESP);
  /* 104615d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104615d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104615d9 push 0x1048e440 */
  push32((uint32_t)(0x1048e440u));
  /* 104615de push 5 */
  push32((uint32_t)(0x5u));
  /* 104615e0 call dword ptr [0x104903e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903e0))), 0x104615e6u);
  /* 104615e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104615e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104615eb call 0x10461c00 */
  push32(0x104615f0u); f_10461c00();
  /* 104615f0 mov esi, esp */
  ESI = (ESP);
  /* 104615f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104615f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104615f6 push 0x1048e438 */
  push32((uint32_t)(0x1048e438u));
  /* 104615fb push 5 */
  push32((uint32_t)(0x5u));
  /* 104615fd call dword ptr [0x104903e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903e0))), 0x10461603u);
  /* 10461603 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461606 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461608 call 0x10461c00 */
  push32(0x1046160du); f_10461c00();
L_1046160d:;
  /* 1046160d mov esi, esp */
  ESI = (ESP);
  /* 1046160f push 3 */
  push32((uint32_t)(0x3u));
  /* 10461611 call dword ptr [0x104903c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c0))), 0x10461617u);
  /* 10461617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046161a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046161c call 0x10461c00 */
  push32(0x10461621u); f_10461c00();
  /* 10461621 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10461626 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461628 je 0x104616b3 */
  if (C.zf) goto L_104616b3;
  /* 1046162e push 0x1048e400 */
  push32((uint32_t)(0x1048e400u));
  /* 10461633 call 0x10461005 */
  push32(0x10461638u); f_10461005();
  /* 10461638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046163b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046163d jne 0x104616b3 */
  if (!C.zf) goto L_104616b3;
  /* 1046163f push 0x1048e3f0 */
  push32((uint32_t)(0x1048e3f0u));
  /* 10461644 call 0x10461005 */
  push32(0x10461649u); f_10461005();
  /* 10461649 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046164c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046164e jne 0x104616b3 */
  if (!C.zf) goto L_104616b3;
  /* 10461650 mov esi, esp */
  ESI = (ESP);
  /* 10461652 push 0 */
  push32((uint32_t)(0x0u));
  /* 10461654 push 3 */
  push32((uint32_t)(0x3u));
  /* 10461656 call dword ptr [0x104903b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903b8))), 0x1046165cu);
  /* 1046165c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046165f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461661 call 0x10461c00 */
  push32(0x10461666u); f_10461c00();
  /* 10461666 mov esi, esp */
  ESI = (ESP);
  /* 10461668 push 0x104890c0 */
  push32((uint32_t)(0x104890c0u));
  /* 1046166d call dword ptr [0x104903cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903cc))), 0x10461673u);
  /* 10461673 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461676 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461678 call 0x10461c00 */
  push32(0x1046167du); f_10461c00();
  /* 1046167d mov esi, esp */
  ESI = (ESP);
  /* 1046167f push 0 */
  push32((uint32_t)(0x0u));
  /* 10461681 push 0x1048e408 */
  push32((uint32_t)(0x1048e408u));
  /* 10461686 call dword ptr [0x104903c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c4))), 0x1046168cu);
  /* 1046168c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046168f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461691 call 0x10461c00 */
  push32(0x10461696u); f_10461c00();
  /* 10461696 mov esi, esp */
  ESI = (ESP);
  /* 10461698 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046169a push 0 */
  push32((uint32_t)(0x0u));
  /* 1046169c push 0x1048e430 */
  push32((uint32_t)(0x1048e430u));
  /* 104616a1 push 5 */
  push32((uint32_t)(0x5u));
  /* 104616a3 call dword ptr [0x104903d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903d4))), 0x104616a9u);
  /* 104616a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104616ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104616ae call 0x10461c00 */
  push32(0x104616b3u); f_10461c00();
L_104616b3:;
  /* 104616b3 mov esi, esp */
  ESI = (ESP);
  /* 104616b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 104616b7 call dword ptr [0x104903c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c0))), 0x104616bdu);
  /* 104616bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104616c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104616c2 call 0x10461c00 */
  push32(0x104616c7u); f_10461c00();
  /* 104616c7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104616cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104616ce jne 0x1046175e */
  if (!C.zf) goto L_1046175e;
  /* 104616d4 mov esi, esp */
  ESI = (ESP);
  /* 104616d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 104616d8 call dword ptr [0x104903c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c0))), 0x104616deu);
  /* 104616de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104616e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104616e3 call 0x10461c00 */
  push32(0x104616e8u); f_10461c00();
  /* 104616e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104616ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104616ef je 0x1046175e */
  if (C.zf) goto L_1046175e;
  /* 104616f1 mov esi, esp */
  ESI = (ESP);
  /* 104616f3 push 0x1048e3e0 */
  push32((uint32_t)(0x1048e3e0u));
  /* 104616f8 push 0x1048e428 */
  push32((uint32_t)(0x1048e428u));
  /* 104616fd call dword ptr [0x104903d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903d8))), 0x10461703u);
  /* 10461703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461706 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461708 call 0x10461c00 */
  push32(0x1046170du); f_10461c00();
  /* 1046170d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046170f jle 0x1046175e */
  if ((C.zf||C.sf!=C.of)) goto L_1046175e;
  /* 10461711 push 0x1048e408 */
  push32((uint32_t)(0x1048e408u));
  /* 10461716 call 0x10461005 */
  push32(0x1046171bu); f_10461005();
  /* 1046171b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046171e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461720 jne 0x1046175e */
  if (!C.zf) goto L_1046175e;
  /* 10461722 mov esi, esp */
  ESI = (ESP);
  /* 10461724 push 0 */
  push32((uint32_t)(0x0u));
  /* 10461726 push 4 */
  push32((uint32_t)(0x4u));
  /* 10461728 call dword ptr [0x104903b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903b8))), 0x1046172eu);
  /* 1046172e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461731 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461733 call 0x10461c00 */
  push32(0x10461738u); f_10461c00();
  /* 10461738 mov esi, esp */
  ESI = (ESP);
  /* 1046173a push 0x104890b8 */
  push32((uint32_t)(0x104890b8u));
  /* 1046173f call dword ptr [0x104903cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903cc))), 0x10461745u);
  /* 10461745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461748 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046174a call 0x10461c00 */
  push32(0x1046174fu); f_10461c00();
  /* 1046174f mov esi, esp */
  ESI = (ESP);
  /* 10461751 call dword ptr [0x104903e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903e4))), 0x10461757u);
  /* 10461757 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461759 call 0x10461c00 */
  push32(0x1046175eu); f_10461c00();
L_1046175e:;
  /* 1046175e mov esi, esp */
  ESI = (ESP);
  /* 10461760 push 5 */
  push32((uint32_t)(0x5u));
  /* 10461762 call dword ptr [0x104903c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c0))), 0x10461768u);
  /* 10461768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046176b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046176d call 0x10461c00 */
  push32(0x10461772u); f_10461c00();
  /* 10461772 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10461777 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461779 je 0x104617c8 */
  if (C.zf) goto L_104617c8;
  /* 1046177b push 0x1048e3e0 */
  push32((uint32_t)(0x1048e3e0u));
  /* 10461780 call 0x10461005 */
  push32(0x10461785u); f_10461005();
  /* 10461785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046178a jne 0x104617c8 */
  if (!C.zf) goto L_104617c8;
  /* 1046178c mov esi, esp */
  ESI = (ESP);
  /* 1046178e push 0 */
  push32((uint32_t)(0x0u));
  /* 10461790 push 5 */
  push32((uint32_t)(0x5u));
  /* 10461792 call dword ptr [0x104903b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903b8))), 0x10461798u);
  /* 10461798 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046179b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046179d call 0x10461c00 */
  push32(0x104617a2u); f_10461c00();
  /* 104617a2 mov esi, esp */
  ESI = (ESP);
  /* 104617a4 push 0x104890b0 */
  push32((uint32_t)(0x104890b0u));
  /* 104617a9 call dword ptr [0x104903cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903cc))), 0x104617afu);
  /* 104617af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104617b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104617b4 call 0x10461c00 */
  push32(0x104617b9u); f_10461c00();
  /* 104617b9 mov esi, esp */
  ESI = (ESP);
  /* 104617bb call dword ptr [0x104903dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903dc))), 0x104617c1u);
  /* 104617c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104617c3 call 0x10461c00 */
  push32(0x104617c8u); f_10461c00();
L_104617c8:;
  /* 104617c8 mov esi, esp */
  ESI = (ESP);
  /* 104617ca push 5 */
  push32((uint32_t)(0x5u));
  /* 104617cc call dword ptr [0x104903c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c0))), 0x104617d2u);
  /* 104617d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104617d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104617d7 call 0x10461c00 */
  push32(0x104617dcu); f_10461c00();
  /* 104617dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104617e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104617e3 je 0x10461841 */
  if (C.zf) goto L_10461841;
  /* 104617e5 mov esi, esp */
  ESI = (ESP);
  /* 104617e7 push 0x1048e3f0 */
  push32((uint32_t)(0x1048e3f0u));
  /* 104617ec push 0x1048e418 */
  push32((uint32_t)(0x1048e418u));
  /* 104617f1 call dword ptr [0x104903d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903d8))), 0x104617f7u);
  /* 104617f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104617fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104617fc call 0x10461c00 */
  push32(0x10461801u); f_10461c00();
  /* 10461801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461803 jle 0x10461841 */
  if ((C.zf||C.sf!=C.of)) goto L_10461841;
  /* 10461805 mov esi, esp */
  ESI = (ESP);
  /* 10461807 push 0 */
  push32((uint32_t)(0x0u));
  /* 10461809 push 5 */
  push32((uint32_t)(0x5u));
  /* 1046180b call dword ptr [0x104903b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903b8))), 0x10461811u);
  /* 10461811 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461814 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461816 call 0x10461c00 */
  push32(0x1046181bu); f_10461c00();
  /* 1046181b mov esi, esp */
  ESI = (ESP);
  /* 1046181d push 0x104890a8 */
  push32((uint32_t)(0x104890a8u));
  /* 10461822 call dword ptr [0x104903cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903cc))), 0x10461828u);
  /* 10461828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046182b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046182d call 0x10461c00 */
  push32(0x10461832u); f_10461c00();
  /* 10461832 mov esi, esp */
  ESI = (ESP);
  /* 10461834 call dword ptr [0x104903dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903dc))), 0x1046183au);
  /* 1046183a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046183c call 0x10461c00 */
  push32(0x10461841u); f_10461c00();
L_10461841:;
  /* 10461841 mov esi, esp */
  ESI = (ESP);
  /* 10461843 push 7 */
  push32((uint32_t)(0x7u));
  /* 10461845 call dword ptr [0x104903c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c0))), 0x1046184bu);
  /* 1046184b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046184e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461850 call 0x10461c00 */
  push32(0x10461855u); f_10461c00();
  /* 10461855 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046185a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046185c je 0x104618ab */
  if (C.zf) goto L_104618ab;
  /* 1046185e mov esi, esp */
  ESI = (ESP);
  /* 10461860 push 0x1048e3e0 */
  push32((uint32_t)(0x1048e3e0u));
  /* 10461865 push 0x1048e420 */
  push32((uint32_t)(0x1048e420u));
  /* 1046186a call dword ptr [0x104903d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903d8))), 0x10461870u);
  /* 10461870 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461873 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461875 call 0x10461c00 */
  push32(0x1046187au); f_10461c00();
  /* 1046187a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046187c jle 0x104618ab */
  if ((C.zf||C.sf!=C.of)) goto L_104618ab;
  /* 1046187e mov esi, esp */
  ESI = (ESP);
  /* 10461880 push 0 */
  push32((uint32_t)(0x0u));
  /* 10461882 push 7 */
  push32((uint32_t)(0x7u));
  /* 10461884 call dword ptr [0x104903b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903b8))), 0x1046188au);
  /* 1046188a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046188d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046188f call 0x10461c00 */
  push32(0x10461894u); f_10461c00();
  /* 10461894 mov esi, esp */
  ESI = (ESP);
  /* 10461896 push 0x104890a0 */
  push32((uint32_t)(0x104890a0u));
  /* 1046189b call dword ptr [0x104903cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903cc))), 0x104618a1u);
  /* 104618a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104618a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104618a6 call 0x10461c00 */
  push32(0x104618abu); f_10461c00();
L_104618ab:;
  /* 104618ab mov esi, esp */
  ESI = (ESP);
  /* 104618ad push 8 */
  push32((uint32_t)(0x8u));
  /* 104618af call dword ptr [0x104903c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c0))), 0x104618b5u);
  /* 104618b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104618b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104618ba call 0x10461c00 */
  push32(0x104618bfu); f_10461c00();
  /* 104618bf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104618c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104618c6 je 0x10461915 */
  if (C.zf) goto L_10461915;
  /* 104618c8 mov esi, esp */
  ESI = (ESP);
  /* 104618ca push 0x1048e400 */
  push32((uint32_t)(0x1048e400u));
  /* 104618cf push 0x1048e438 */
  push32((uint32_t)(0x1048e438u));
  /* 104618d4 call dword ptr [0x104903d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903d8))), 0x104618dau);
  /* 104618da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104618dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104618df call 0x10461c00 */
  push32(0x104618e4u); f_10461c00();
  /* 104618e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104618e6 jle 0x10461915 */
  if ((C.zf||C.sf!=C.of)) goto L_10461915;
  /* 104618e8 mov esi, esp */
  ESI = (ESP);
  /* 104618ea push 0 */
  push32((uint32_t)(0x0u));
  /* 104618ec push 8 */
  push32((uint32_t)(0x8u));
  /* 104618ee call dword ptr [0x104903b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903b8))), 0x104618f4u);
  /* 104618f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104618f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104618f9 call 0x10461c00 */
  push32(0x104618feu); f_10461c00();
  /* 104618fe mov esi, esp */
  ESI = (ESP);
  /* 10461900 push 0x10489098 */
  push32((uint32_t)(0x10489098u));
  /* 10461905 call dword ptr [0x104903cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903cc))), 0x1046190bu);
  /* 1046190b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046190e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461910 call 0x10461c00 */
  push32(0x10461915u); f_10461c00();
L_10461915:;
  /* 10461915 mov esi, esp */
  ESI = (ESP);
  /* 10461917 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10461919 call dword ptr [0x104903c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c0))), 0x1046191fu);
  /* 1046191f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461922 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461924 call 0x10461c00 */
  push32(0x10461929u); f_10461c00();
  /* 10461929 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046192e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461930 je 0x10461984 */
  if (C.zf) goto L_10461984;
  /* 10461932 mov esi, esp */
  ESI = (ESP);
  /* 10461934 push 0x1048e408 */
  push32((uint32_t)(0x1048e408u));
  /* 10461939 push 0x1048e430 */
  push32((uint32_t)(0x1048e430u));
  /* 1046193e call dword ptr [0x104903d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903d8))), 0x10461944u);
  /* 10461944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461947 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461949 call 0x10461c00 */
  push32(0x1046194eu); f_10461c00();
  /* 1046194e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461950 jle 0x10461984 */
  if ((C.zf||C.sf!=C.of)) goto L_10461984;
  /* 10461952 mov esi, esp */
  ESI = (ESP);
  /* 10461954 push 0 */
  push32((uint32_t)(0x0u));
  /* 10461956 push 0x1048e408 */
  push32((uint32_t)(0x1048e408u));
  /* 1046195b call dword ptr [0x104903c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903c4))), 0x10461961u);
  /* 10461961 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461964 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461966 call 0x10461c00 */
  push32(0x1046196bu); f_10461c00();
  /* 1046196b mov esi, esp */
  ESI = (ESP);
  /* 1046196d push 0x1048e3e0 */
  push32((uint32_t)(0x1048e3e0u));
  /* 10461972 push 5 */
  push32((uint32_t)(0x5u));
  /* 10461974 call dword ptr [0x104903d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903d0))), 0x1046197au);
  /* 1046197a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046197d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046197f call 0x10461c00 */
  push32(0x10461984u); f_10461c00();
L_10461984:;
  /* 10461984 pop edi */
  EDI = (pop32());
  /* 10461985 pop esi */
  ESI = (pop32());
  /* 10461986 pop ebx */
  EBX = (pop32());
  /* 10461987 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046198a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046198c call 0x10461c00 */
  push32(0x10461991u); f_10461c00();
  /* 10461991 mov esp, ebp */
  ESP = (EBP);
  /* 10461993 pop ebp */
  EBP = (pop32());
  /* 10461994 ret  */
  ESPCHK(0x104612d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b50 @ 0x10461b50 (63 bytes, 26 insns) */
void f_10461b50(void) {
  FTRACE(0x10461b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10461b51 mov ebp, esp */
  EBP = (ESP);
  /* 10461b53 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10461b56 push ebx */
  push32((uint32_t)(EBX));
  /* 10461b57 push esi */
  push32((uint32_t)(ESI));
  /* 10461b58 push edi */
  push32((uint32_t)(EDI));
  /* 10461b59 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10461b5c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10461b61 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10461b66 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10461b68 mov esi, esp */
  ESI = (ESP);
  /* 10461b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461b6d push eax */
  push32((uint32_t)(EAX));
  /* 10461b6e call dword ptr [0x104903bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104903bc))), 0x10461b74u);
  /* 10461b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461b77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461b79 call 0x10461c00 */
  push32(0x10461b7eu); f_10461c00();
  /* 10461b7e pop edi */
  EDI = (pop32());
  /* 10461b7f pop esi */
  ESI = (pop32());
  /* 10461b80 pop ebx */
  EBX = (pop32());
  /* 10461b81 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461b84 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461b86 call 0x10461c00 */
  push32(0x10461b8bu); f_10461c00();
  /* 10461b8b mov esp, ebp */
  ESP = (EBP);
  /* 10461b8d pop ebp */
  EBP = (pop32());
  /* 10461b8e ret  */
  ESPCHK(0x10461b50u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10461c00 (56 bytes, 28 insns) */
void f_10461c00(void) {
  FTRACE(0x10461c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461c00 jne 0x10461c03 */
  if (!C.zf) goto L_10461c03;
  /* 10461c02 ret  */
  ESPCHK(0x10461c00u, _esp0);
  ESP += 4; return;
L_10461c03:;
  /* 10461c03 push ebp */
  push32((uint32_t)(EBP));
  /* 10461c04 mov ebp, esp */
  EBP = (ESP);
  /* 10461c06 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10461c09 push eax */
  push32((uint32_t)(EAX));
  /* 10461c0a push edx */
  push32((uint32_t)(EDX));
  /* 10461c0b push ebx */
  push32((uint32_t)(EBX));
  /* 10461c0c push esi */
  push32((uint32_t)(ESI));
  /* 10461c0d push edi */
  push32((uint32_t)(EDI));
  /* 10461c0e push 0x104890f8 */
  push32((uint32_t)(0x104890f8u));
  /* 10461c13 push 0x104890f4 */
  push32((uint32_t)(0x104890f4u));
  /* 10461c18 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10461c1a push 0x104890e4 */
  push32((uint32_t)(0x104890e4u));
  /* 10461c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10461c21 call 0x10461fd0 */
  push32(0x10461c26u); f_10461fd0();
  /* 10461c26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461c29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461c2c jne 0x10461c2f */
  if (!C.zf) goto L_10461c2f;
  /* 10461c2e int3  */
  x86_unimpl("int3 @ 0x10461c2e");
L_10461c2f:;
  /* 10461c2f pop edi */
  EDI = (pop32());
  /* 10461c30 pop esi */
  ESI = (pop32());
  /* 10461c31 pop ebx */
  EBX = (pop32());
  /* 10461c32 pop edx */
  EDX = (pop32());
  /* 10461c33 pop eax */
  EAX = (pop32());
  /* 10461c34 mov esp, ebp */
  ESP = (EBP);
  /* 10461c36 pop ebp */
  EBP = (pop32());
  /* 10461c37 ret  */
  ESPCHK(0x10461c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c40 @ 0x10461c40 (313 bytes, 78 insns) */
void f_10461c40(void) {
  FTRACE(0x10461c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10461c41 mov ebp, esp */
  EBP = (ESP);
  /* 10461c43 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461c47 jne 0x10461d07 */
  if (!C.zf) goto L_10461d07;
  /* 10461c4d call dword ptr [0x10490274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490274))), 0x10461c53u);
  /* 10461c53 mov dword ptr [0x1048e480], eax */
  w32((uint32_t)(0x1048e480), (EAX));
  /* 10461c58 push 1 */
  push32((uint32_t)(0x1u));
  /* 10461c5a call 0x10465700 */
  push32(0x10461c5fu); f_10465700();
  /* 10461c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461c62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461c64 jne 0x10461c6d */
  if (!C.zf) goto L_10461c6d;
  /* 10461c66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10461c68 jmp 0x10461d75 */
  goto L_10461d75;
L_10461c6d:;
  /* 10461c6d mov eax, dword ptr [0x1048e480] */
  EAX = (r32((uint32_t)(0x1048e480)));
  /* 10461c72 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10461c75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10461c7a mov dword ptr [0x1048e48c], eax */
  w32((uint32_t)(0x1048e48c), (EAX));
  /* 10461c7f mov ecx, dword ptr [0x1048e480] */
  ECX = (r32((uint32_t)(0x1048e480)));
  /* 10461c85 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10461c8b mov dword ptr [0x1048e488], ecx */
  w32((uint32_t)(0x1048e488), (ECX));
  /* 10461c91 mov edx, dword ptr [0x1048e488] */
  EDX = (r32((uint32_t)(0x1048e488)));
  /* 10461c97 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10461c9a add edx, dword ptr [0x1048e48c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1048e48c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10461ca0 mov dword ptr [0x1048e484], edx */
  w32((uint32_t)(0x1048e484), (EDX));
  /* 10461ca6 mov eax, dword ptr [0x1048e480] */
  EAX = (r32((uint32_t)(0x1048e480)));
  /* 10461cab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10461cae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10461cb3 mov dword ptr [0x1048e480], eax */
  w32((uint32_t)(0x1048e480), (EAX));
  /* 10461cb8 call 0x10462870 */
  push32(0x10461cbdu); f_10462870();
  /* 10461cbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461cbf jne 0x10461ccd */
  if (!C.zf) goto L_10461ccd;
  /* 10461cc1 call 0x10465750 */
  push32(0x10461cc6u); f_10465750();
  /* 10461cc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10461cc8 jmp 0x10461d75 */
  goto L_10461d75;
L_10461ccd:;
  /* 10461ccd call dword ptr [0x10490270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490270))), 0x10461cd3u);
  /* 10461cd3 mov dword ptr [0x1048ffcc], eax */
  w32((uint32_t)(0x1048ffcc), (EAX));
  /* 10461cd8 call 0x104654e0 */
  push32(0x10461cddu); f_104654e0();
  /* 10461cdd mov dword ptr [0x1048e468], eax */
  w32((uint32_t)(0x1048e468), (EAX));
  /* 10461ce2 call 0x10462b20 */
  push32(0x10461ce7u); f_10462b20();
  /* 10461ce7 call 0x10464fd0 */
  push32(0x10461cecu); f_10464fd0();
  /* 10461cec call 0x10464e80 */
  push32(0x10461cf1u); f_10464e80();
  /* 10461cf1 call 0x10462670 */
  push32(0x10461cf6u); f_10462670();
  /* 10461cf6 mov ecx, dword ptr [0x1048e464] */
  ECX = (r32((uint32_t)(0x1048e464)));
  /* 10461cfc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10461cff mov dword ptr [0x1048e464], ecx */
  w32((uint32_t)(0x1048e464), (ECX));
  /* 10461d05 jmp 0x10461d70 */
  goto L_10461d70;
L_10461d07:;
  /* 10461d07 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461d0b jne 0x10461d60 */
  if (!C.zf) goto L_10461d60;
  /* 10461d0d cmp dword ptr [0x1048e464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461d14 jle 0x10461d5a */
  if ((C.zf||C.sf!=C.of)) goto L_10461d5a;
  /* 10461d16 mov edx, dword ptr [0x1048e464] */
  EDX = (r32((uint32_t)(0x1048e464)));
  /* 10461d1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10461d1f mov dword ptr [0x1048e464], edx */
  w32((uint32_t)(0x1048e464), (EDX));
  /* 10461d25 cmp dword ptr [0x1048e4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461d2c jne 0x10461d33 */
  if (!C.zf) goto L_10461d33;
  /* 10461d2e call 0x104626f0 */
  push32(0x10461d33u); f_104626f0();
L_10461d33:;
  /* 10461d33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10461d35 call 0x10464420 */
  push32(0x10461d3au); f_10464420();
  /* 10461d3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461d3d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10461d40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461d42 je 0x10461d49 */
  if (C.zf) goto L_10461d49;
  /* 10461d44 call 0x10464d30 */
  push32(0x10461d49u); f_10464d30();
L_10461d49:;
  /* 10461d49 call 0x10462e50 */
  push32(0x10461d4eu); f_10462e50();
  /* 10461d4e call 0x10462900 */
  push32(0x10461d53u); f_10462900();
  /* 10461d53 call 0x10465750 */
  push32(0x10461d58u); f_10465750();
  /* 10461d58 jmp 0x10461d5e */
  goto L_10461d5e;
L_10461d5a:;
  /* 10461d5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10461d5c jmp 0x10461d75 */
  goto L_10461d75;
L_10461d5e:;
  /* 10461d5e jmp 0x10461d70 */
  goto L_10461d70;
L_10461d60:;
  /* 10461d60 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461d64 jne 0x10461d70 */
  if (!C.zf) goto L_10461d70;
  /* 10461d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10461d68 call 0x104629f0 */
  push32(0x10461d6du); f_104629f0();
  /* 10461d6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10461d70:;
  /* 10461d70 mov eax, 1 */
  EAX = (0x1u);
L_10461d75:;
  /* 10461d75 pop ebp */
  EBP = (pop32());
  /* 10461d76 ret 0xc */
  ESPCHK(0x10461c40u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10461d80 (243 bytes, 86 insns) */
void f_10461d80(void) {
  FTRACE(0x10461d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10461d81 mov ebp, esp */
  EBP = (ESP);
  /* 10461d83 push ecx */
  push32((uint32_t)(ECX));
  /* 10461d84 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10461d8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461d8f jne 0x10461da1 */
  if (!C.zf) goto L_10461da1;
  /* 10461d91 cmp dword ptr [0x1048e464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461d98 jne 0x10461da1 */
  if (!C.zf) goto L_10461da1;
  /* 10461d9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10461d9c jmp 0x10461e6d */
  goto L_10461e6d;
L_10461da1:;
  /* 10461da1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461da5 je 0x10461dad */
  if (C.zf) goto L_10461dad;
  /* 10461da7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461dab jne 0x10461def */
  if (!C.zf) goto L_10461def;
L_10461dad:;
  /* 10461dad cmp dword ptr [0x1048ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461db4 je 0x10461dcb */
  if (C.zf) goto L_10461dcb;
  /* 10461db6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10461db9 push eax */
  push32((uint32_t)(EAX));
  /* 10461dba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10461dbd push ecx */
  push32((uint32_t)(ECX));
  /* 10461dbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461dc1 push edx */
  push32((uint32_t)(EDX));
  /* 10461dc2 call dword ptr [0x1048ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048ffdc))), 0x10461dc8u);
  /* 10461dc8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10461dcb:;
  /* 10461dcb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461dcf je 0x10461de5 */
  if (C.zf) goto L_10461de5;
  /* 10461dd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10461dd4 push eax */
  push32((uint32_t)(EAX));
  /* 10461dd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10461dd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10461dd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461ddc push edx */
  push32((uint32_t)(EDX));
  /* 10461ddd call 0x10461c40 */
  push32(0x10461de2u); f_10461c40();
  /* 10461de2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10461de5:;
  /* 10461de5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461de9 jne 0x10461def */
  if (!C.zf) goto L_10461def;
  /* 10461deb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10461ded jmp 0x10461e6d */
  goto L_10461e6d;
L_10461def:;
  /* 10461def mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10461df2 push eax */
  push32((uint32_t)(EAX));
  /* 10461df3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10461df6 push ecx */
  push32((uint32_t)(ECX));
  /* 10461df7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461dfa push edx */
  push32((uint32_t)(EDX));
  /* 10461dfb call 0x1046100f */
  push32(0x10461e00u); f_1046100f();
  /* 10461e00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10461e03 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461e07 jne 0x10461e1e */
  if (!C.zf) goto L_10461e1e;
  /* 10461e09 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461e0d jne 0x10461e1e */
  if (!C.zf) goto L_10461e1e;
  /* 10461e0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10461e12 push eax */
  push32((uint32_t)(EAX));
  /* 10461e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10461e15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461e18 push ecx */
  push32((uint32_t)(ECX));
  /* 10461e19 call 0x10461c40 */
  push32(0x10461e1eu); f_10461c40();
L_10461e1e:;
  /* 10461e1e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461e22 je 0x10461e2a */
  if (C.zf) goto L_10461e2a;
  /* 10461e24 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461e28 jne 0x10461e6a */
  if (!C.zf) goto L_10461e6a;
L_10461e2a:;
  /* 10461e2a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10461e2d push edx */
  push32((uint32_t)(EDX));
  /* 10461e2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10461e31 push eax */
  push32((uint32_t)(EAX));
  /* 10461e32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461e35 push ecx */
  push32((uint32_t)(ECX));
  /* 10461e36 call 0x10461c40 */
  push32(0x10461e3bu); f_10461c40();
  /* 10461e3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10461e3d jne 0x10461e46 */
  if (!C.zf) goto L_10461e46;
  /* 10461e3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10461e46:;
  /* 10461e46 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461e4a je 0x10461e6a */
  if (C.zf) goto L_10461e6a;
  /* 10461e4c cmp dword ptr [0x1048ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461e53 je 0x10461e6a */
  if (C.zf) goto L_10461e6a;
  /* 10461e55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10461e58 push edx */
  push32((uint32_t)(EDX));
  /* 10461e59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10461e5c push eax */
  push32((uint32_t)(EAX));
  /* 10461e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461e60 push ecx */
  push32((uint32_t)(ECX));
  /* 10461e61 call dword ptr [0x1048ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048ffdc))), 0x10461e67u);
  /* 10461e67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10461e6a:;
  /* 10461e6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10461e6d:;
  /* 10461e6d mov esp, ebp */
  ESP = (EBP);
  /* 10461e6f pop ebp */
  EBP = (pop32());
  /* 10461e70 ret 0xc */
  ESPCHK(0x10461d80u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10461e80 (58 bytes, 18 insns) */
void f_10461e80(void) {
  FTRACE(0x10461e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10461e81 mov ebp, esp */
  EBP = (ESP);
  /* 10461e83 cmp dword ptr [0x1048e470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461e8a je 0x10461e9e */
  if (C.zf) goto L_10461e9e;
  /* 10461e8c cmp dword ptr [0x1048e470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461e93 jne 0x10461ea3 */
  if (!C.zf) goto L_10461ea3;
  /* 10461e95 cmp dword ptr [0x1048e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461e9c jne 0x10461ea3 */
  if (!C.zf) goto L_10461ea3;
L_10461e9e:;
  /* 10461e9e call 0x104657f0 */
  push32(0x10461ea3u); f_104657f0();
L_10461ea3:;
  /* 10461ea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461ea6 push eax */
  push32((uint32_t)(EAX));
  /* 10461ea7 call 0x10465840 */
  push32(0x10461eacu); f_10465840();
  /* 10461eac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461eaf push 0xff */
  push32((uint32_t)(0xffu));
  /* 10461eb4 call dword ptr [0x1048ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048ca30))), 0x10461ebau);
  /* 10461eba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10461ebd pop ebp */
  EBP = (pop32());
  /* 10461ebe ret  */
  ESPCHK(0x10461e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ec0 @ 0x10461ec0 (11 bytes, 5 insns) */
void f_10461ec0(void) {
  FTRACE(0x10461ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10461ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10461ec3 call dword ptr [0x10490278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490278))), 0x10461ec9u);
  /* 10461ec9 pop ebp */
  EBP = (pop32());
  /* 10461eca ret  */
  ESPCHK(0x10461ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ed0 @ 0x10461ed0 (87 bytes, 30 insns) */
void f_10461ed0(void) {
  FTRACE(0x10461ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10461ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10461ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10461ed4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461ed8 jl 0x10461ee0 */
  if ((C.sf!=C.of)) goto L_10461ee0;
  /* 10461eda cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461ede jl 0x10461ee5 */
  if ((C.sf!=C.of)) goto L_10461ee5;
L_10461ee0:;
  /* 10461ee0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10461ee3 jmp 0x10461f23 */
  goto L_10461f23;
L_10461ee5:;
  /* 10461ee5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461ee9 jne 0x10461ef7 */
  if (!C.zf) goto L_10461ef7;
  /* 10461eeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461eee mov eax, dword ptr [eax*4 + 0x1048ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1048ca38)));
  /* 10461ef5 jmp 0x10461f23 */
  goto L_10461f23;
L_10461ef7:;
  /* 10461ef7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10461efa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10461efd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10461eff je 0x10461f06 */
  if (C.zf) goto L_10461f06;
  /* 10461f01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10461f04 jmp 0x10461f23 */
  goto L_10461f23;
L_10461f06:;
  /* 10461f06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461f09 mov eax, dword ptr [edx*4 + 0x1048ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1048ca38)));
  /* 10461f10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10461f13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461f16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10461f19 mov dword ptr [ecx*4 + 0x1048ca38], edx */
  w32((uint32_t)(ECX*4 + 0x1048ca38), (EDX));
  /* 10461f20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10461f23:;
  /* 10461f23 mov esp, ebp */
  ESP = (EBP);
  /* 10461f25 pop ebp */
  EBP = (pop32());
  /* 10461f26 ret  */
  ESPCHK(0x10461ed0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10461f30 (126 bytes, 38 insns) */
void f_10461f30(void) {
  FTRACE(0x10461f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10461f31 mov ebp, esp */
  EBP = (ESP);
  /* 10461f33 push ecx */
  push32((uint32_t)(ECX));
  /* 10461f34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461f38 jl 0x10461f40 */
  if ((C.sf!=C.of)) goto L_10461f40;
  /* 10461f3a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461f3e jl 0x10461f47 */
  if ((C.sf!=C.of)) goto L_10461f47;
L_10461f40:;
  /* 10461f40 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10461f45 jmp 0x10461faa */
  goto L_10461faa;
L_10461f47:;
  /* 10461f47 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461f4b jne 0x10461f59 */
  if (!C.zf) goto L_10461f59;
  /* 10461f4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461f50 mov eax, dword ptr [eax*4 + 0x1048ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1048ca44)));
  /* 10461f57 jmp 0x10461faa */
  goto L_10461faa;
L_10461f59:;
  /* 10461f59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461f5c mov edx, dword ptr [ecx*4 + 0x1048ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1048ca44)));
  /* 10461f63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10461f66 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461f6a jne 0x10461f80 */
  if (!C.zf) goto L_10461f80;
  /* 10461f6c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10461f6e call dword ptr [0x1049027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049027c))), 0x10461f74u);
  /* 10461f74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461f77 mov dword ptr [ecx*4 + 0x1048ca44], eax */
  w32((uint32_t)(ECX*4 + 0x1048ca44), (EAX));
  /* 10461f7e jmp 0x10461fa7 */
  goto L_10461fa7;
L_10461f80:;
  /* 10461f80 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10461f84 jne 0x10461f9a */
  if (!C.zf) goto L_10461f9a;
  /* 10461f86 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10461f88 call dword ptr [0x1049027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049027c))), 0x10461f8eu);
  /* 10461f8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461f91 mov dword ptr [edx*4 + 0x1048ca44], eax */
  w32((uint32_t)(EDX*4 + 0x1048ca44), (EAX));
  /* 10461f98 jmp 0x10461fa7 */
  goto L_10461fa7;
L_10461f9a:;
  /* 10461f9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461f9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10461fa0 mov dword ptr [eax*4 + 0x1048ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x1048ca44), (ECX));
L_10461fa7:;
  /* 10461fa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10461faa:;
  /* 10461faa mov esp, ebp */
  ESP = (EBP);
  /* 10461fac pop ebp */
  EBP = (pop32());
  /* 10461fad ret  */
  ESPCHK(0x10461f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fb0 @ 0x10461fb0 (28 bytes, 11 insns) */
void f_10461fb0(void) {
  FTRACE(0x10461fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10461fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10461fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10461fb4 mov eax, dword ptr [0x1048ffc0] */
  EAX = (r32((uint32_t)(0x1048ffc0)));
  /* 10461fb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10461fbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10461fbf mov dword ptr [0x1048ffc0], ecx */
  w32((uint32_t)(0x1048ffc0), (ECX));
  /* 10461fc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10461fc8 mov esp, ebp */
  ESP = (EBP);
  /* 10461fca pop ebp */
  EBP = (pop32());
  /* 10461fcb ret  */
  ESPCHK(0x10461fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fd0 @ 0x10461fd0 (912 bytes, 248 insns) */
void f_10461fd0(void) {
  FTRACE(0x10461fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10461fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10461fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10461fd3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10461fd8 call 0x104660b0 */
  push32(0x10461fddu); f_104660b0();
  /* 10461fdd push edi */
  push32((uint32_t)(EDI));
  /* 10461fde mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10461fe5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10461fea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10461fec lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10461ff2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10461ff4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10461ff6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10461ff7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10461ffe mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10462003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10462005 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1046200b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1046200d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1046200f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10462010 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10462017 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1046201c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046201e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10462024 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10462026 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10462028 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10462029 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1046202c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10462032 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462036 jl 0x1046203e */
  if ((C.sf!=C.of)) goto L_1046203e;
  /* 10462038 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046203c jl 0x10462046 */
  if ((C.sf!=C.of)) goto L_10462046;
L_1046203e:;
  /* 1046203e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10462041 jmp 0x1046235b */
  goto L_1046235b;
L_10462046:;
  /* 10462046 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046204a jne 0x104620f0 */
  if (!C.zf) goto L_104620f0;
  /* 10462050 push 0x1048ca34 */
  push32((uint32_t)(0x1048ca34u));
  /* 10462055 call dword ptr [0x10490294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490294))), 0x1046205bu);
  /* 1046205b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046205d jle 0x104620f0 */
  if ((C.zf||C.sf!=C.of)) goto L_104620f0;
  /* 10462063 cmp dword ptr [0x1048e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046206a jne 0x104620ae */
  if (!C.zf) goto L_104620ae;
  /* 1046206c push 0x104892a0 */
  push32((uint32_t)(0x104892a0u));
  /* 10462071 call dword ptr [0x10490290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490290))), 0x10462077u);
  /* 10462077 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1046207d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462084 je 0x104620a6 */
  if (C.zf) goto L_104620a6;
  /* 10462086 push 0x10489294 */
  push32((uint32_t)(0x10489294u));
  /* 1046208b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10462091 push ecx */
  push32((uint32_t)(ECX));
  /* 10462092 call dword ptr [0x1049028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049028c))), 0x10462098u);
  /* 10462098 mov dword ptr [0x1048e478], eax */
  w32((uint32_t)(0x1048e478), (EAX));
  /* 1046209d cmp dword ptr [0x1048e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104620a4 jne 0x104620ae */
  if (!C.zf) goto L_104620ae;
L_104620a6:;
  /* 104620a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104620a9 jmp 0x1046235b */
  goto L_1046235b;
L_104620ae:;
  /* 104620ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104620b1 push edx */
  push32((uint32_t)(EDX));
  /* 104620b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104620b5 push eax */
  push32((uint32_t)(EAX));
  /* 104620b6 push 0x10489260 */
  push32((uint32_t)(0x10489260u));
  /* 104620bb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 104620c1 push ecx */
  push32((uint32_t)(ECX));
  /* 104620c2 call dword ptr [0x1048e478] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e478))), 0x104620c8u);
  /* 104620c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104620cb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 104620d1 push edx */
  push32((uint32_t)(EDX));
  /* 104620d2 call dword ptr [0x10490288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490288))), 0x104620d8u);
  /* 104620d8 push 0x1048ca34 */
  push32((uint32_t)(0x1048ca34u));
  /* 104620dd call dword ptr [0x10490284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490284))), 0x104620e3u);
  /* 104620e3 call 0x10461ec0 */
  push32(0x104620e8u); f_10461ec0();
  /* 104620e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104620eb jmp 0x1046235b */
  goto L_1046235b;
L_104620f0:;
  /* 104620f0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104620f4 je 0x1046212d */
  if (C.zf) goto L_1046212d;
  /* 104620f6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 104620fc push eax */
  push32((uint32_t)(EAX));
  /* 104620fd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10462100 push ecx */
  push32((uint32_t)(ECX));
  /* 10462101 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10462106 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1046210c push edx */
  push32((uint32_t)(EDX));
  /* 1046210d call 0x10465fb0 */
  push32(0x10462112u); f_10465fb0();
  /* 10462112 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462115 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10462117 jge 0x1046212d */
  if ((C.sf==C.of)) goto L_1046212d;
  /* 10462119 push 0x10489234 */
  push32((uint32_t)(0x10489234u));
  /* 1046211e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10462124 push eax */
  push32((uint32_t)(EAX));
  /* 10462125 call 0x10465ec0 */
  push32(0x1046212au); f_10465ec0();
  /* 1046212a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046212d:;
  /* 1046212d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462131 jne 0x10462165 */
  if (!C.zf) goto L_10462165;
  /* 10462133 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462137 je 0x10462145 */
  if (C.zf) goto L_10462145;
  /* 10462139 mov dword ptr [ebp - 0x3028], 0x10489220 */
  w32((uint32_t)(EBP + -0x3028), (0x10489220u));
  /* 10462143 jmp 0x1046214f */
  goto L_1046214f;
L_10462145:;
  /* 10462145 mov dword ptr [ebp - 0x3028], 0x1048920c */
  w32((uint32_t)(EBP + -0x3028), (0x1048920cu));
L_1046214f:;
  /* 1046214f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10462155 push ecx */
  push32((uint32_t)(ECX));
  /* 10462156 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1046215c push edx */
  push32((uint32_t)(EDX));
  /* 1046215d call 0x10465ec0 */
  push32(0x10462162u); f_10465ec0();
  /* 10462162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10462165:;
  /* 10462165 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1046216b push eax */
  push32((uint32_t)(EAX));
  /* 1046216c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10462172 push ecx */
  push32((uint32_t)(ECX));
  /* 10462173 call 0x10465ed0 */
  push32(0x10462178u); f_10465ed0();
  /* 10462178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046217b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046217f jne 0x104621ba */
  if (!C.zf) goto L_104621ba;
  /* 10462181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462184 mov eax, dword ptr [edx*4 + 0x1048ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1048ca38)));
  /* 1046218b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1046218e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10462190 je 0x104621a6 */
  if (C.zf) goto L_104621a6;
  /* 10462192 push 0x10489208 */
  push32((uint32_t)(0x10489208u));
  /* 10462197 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1046219d push ecx */
  push32((uint32_t)(ECX));
  /* 1046219e call 0x10465ed0 */
  push32(0x104621a3u); f_10465ed0();
  /* 104621a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104621a6:;
  /* 104621a6 push 0x10489204 */
  push32((uint32_t)(0x10489204u));
  /* 104621ab lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 104621b1 push edx */
  push32((uint32_t)(EDX));
  /* 104621b2 call 0x10465ed0 */
  push32(0x104621b7u); f_10465ed0();
  /* 104621b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104621ba:;
  /* 104621ba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104621be je 0x10462202 */
  if (C.zf) goto L_10462202;
  /* 104621c0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 104621c6 push eax */
  push32((uint32_t)(EAX));
  /* 104621c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104621ca push ecx */
  push32((uint32_t)(ECX));
  /* 104621cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104621ce push edx */
  push32((uint32_t)(EDX));
  /* 104621cf push 0x104891f8 */
  push32((uint32_t)(0x104891f8u));
  /* 104621d4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104621d9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 104621df push eax */
  push32((uint32_t)(EAX));
  /* 104621e0 call 0x10465dc0 */
  push32(0x104621e5u); f_10465dc0();
  /* 104621e5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104621e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104621ea jge 0x10462200 */
  if ((C.sf==C.of)) goto L_10462200;
  /* 104621ec push 0x10489234 */
  push32((uint32_t)(0x10489234u));
  /* 104621f1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 104621f7 push ecx */
  push32((uint32_t)(ECX));
  /* 104621f8 call 0x10465ec0 */
  push32(0x104621fdu); f_10465ec0();
  /* 104621fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10462200:;
  /* 10462200 jmp 0x10462218 */
  goto L_10462218;
L_10462202:;
  /* 10462202 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10462208 push edx */
  push32((uint32_t)(EDX));
  /* 10462209 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1046220f push eax */
  push32((uint32_t)(EAX));
  /* 10462210 call 0x10465ec0 */
  push32(0x10462215u); f_10465ec0();
  /* 10462215 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10462218:;
  /* 10462218 cmp dword ptr [0x1048ffc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048ffc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046221f je 0x1046225c */
  if (C.zf) goto L_1046225c;
  /* 10462221 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10462227 push ecx */
  push32((uint32_t)(ECX));
  /* 10462228 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1046222e push edx */
  push32((uint32_t)(EDX));
  /* 1046222f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462232 push eax */
  push32((uint32_t)(EAX));
  /* 10462233 call dword ptr [0x1048ffc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048ffc0))), 0x10462239u);
  /* 10462239 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046223c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046223e je 0x1046225c */
  if (C.zf) goto L_1046225c;
  /* 10462240 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462244 jne 0x10462251 */
  if (!C.zf) goto L_10462251;
  /* 10462246 push 0x1048ca34 */
  push32((uint32_t)(0x1048ca34u));
  /* 1046224b call dword ptr [0x10490284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490284))), 0x10462251u);
L_10462251:;
  /* 10462251 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10462257 jmp 0x1046235b */
  goto L_1046235b;
L_1046225c:;
  /* 1046225c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046225f mov edx, dword ptr [ecx*4 + 0x1048ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1048ca38)));
  /* 10462266 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10462269 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046226b je 0x104622ab */
  if (C.zf) goto L_104622ab;
  /* 1046226d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462270 cmp dword ptr [eax*4 + 0x1048ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1048ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462278 je 0x104622ab */
  if (C.zf) goto L_104622ab;
  /* 1046227a push 0 */
  push32((uint32_t)(0x0u));
  /* 1046227c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10462282 push ecx */
  push32((uint32_t)(ECX));
  /* 10462283 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10462289 push edx */
  push32((uint32_t)(EDX));
  /* 1046228a call 0x10465d40 */
  push32(0x1046228fu); f_10465d40();
  /* 1046228f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462292 push eax */
  push32((uint32_t)(EAX));
  /* 10462293 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10462299 push eax */
  push32((uint32_t)(EAX));
  /* 1046229a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046229d mov edx, dword ptr [ecx*4 + 0x1048ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1048ca44)));
  /* 104622a4 push edx */
  push32((uint32_t)(EDX));
  /* 104622a5 call dword ptr [0x10490280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490280))), 0x104622abu);
L_104622ab:;
  /* 104622ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104622ae mov ecx, dword ptr [eax*4 + 0x1048ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1048ca38)));
  /* 104622b5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 104622b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104622ba je 0x104622c9 */
  if (C.zf) goto L_104622c9;
  /* 104622bc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 104622c2 push edx */
  push32((uint32_t)(EDX));
  /* 104622c3 call dword ptr [0x10490288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490288))), 0x104622c9u);
L_104622c9:;
  /* 104622c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104622cc mov ecx, dword ptr [eax*4 + 0x1048ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1048ca38)));
  /* 104622d3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104622d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104622d8 je 0x10462348 */
  if (C.zf) goto L_10462348;
  /* 104622da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104622de je 0x104622fd */
  if (C.zf) goto L_104622fd;
  /* 104622e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 104622e2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 104622e8 push edx */
  push32((uint32_t)(EDX));
  /* 104622e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104622ec push eax */
  push32((uint32_t)(EAX));
  /* 104622ed call 0x10465a50 */
  push32(0x104622f2u); f_10465a50();
  /* 104622f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104622f5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 104622fb jmp 0x10462307 */
  goto L_10462307;
L_104622fd:;
  /* 104622fd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10462307:;
  /* 10462307 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1046230d push ecx */
  push32((uint32_t)(ECX));
  /* 1046230e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10462311 push edx */
  push32((uint32_t)(EDX));
  /* 10462312 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10462318 push eax */
  push32((uint32_t)(EAX));
  /* 10462319 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046231c push ecx */
  push32((uint32_t)(ECX));
  /* 1046231d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462320 push edx */
  push32((uint32_t)(EDX));
  /* 10462321 call 0x10462360 */
  push32(0x10462326u); f_10462360();
  /* 10462326 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462329 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1046232f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462333 jne 0x10462340 */
  if (!C.zf) goto L_10462340;
  /* 10462335 push 0x1048ca34 */
  push32((uint32_t)(0x1048ca34u));
  /* 1046233a call dword ptr [0x10490284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490284))), 0x10462340u);
L_10462340:;
  /* 10462340 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10462346 jmp 0x1046235b */
  goto L_1046235b;
L_10462348:;
  /* 10462348 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046234c jne 0x10462359 */
  if (!C.zf) goto L_10462359;
  /* 1046234e push 0x1048ca34 */
  push32((uint32_t)(0x1048ca34u));
  /* 10462353 call dword ptr [0x10490284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490284))), 0x10462359u);
L_10462359:;
  /* 10462359 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1046235b:;
  /* 1046235b pop edi */
  EDI = (pop32());
  /* 1046235c mov esp, ebp */
  ESP = (EBP);
  /* 1046235e pop ebp */
  EBP = (pop32());
  /* 1046235f ret  */
  ESPCHK(0x10461fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002360 @ 0x10462360 (780 bytes, 197 insns) */
void f_10462360(void) {
  FTRACE(0x10462360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462360 push ebp */
  push32((uint32_t)(EBP));
  /* 10462361 mov ebp, esp */
  EBP = (ESP);
  /* 10462363 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10462368 call 0x104660b0 */
  push32(0x1046236du); f_104660b0();
L_1046236d:;
  /* 1046236d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462371 jne 0x10462398 */
  if (!C.zf) goto L_10462398;
  /* 10462373 push 0x104893f0 */
  push32((uint32_t)(0x104893f0u));
  /* 10462378 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046237a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1046237f push 0x104893e4 */
  push32((uint32_t)(0x104893e4u));
  /* 10462384 push 2 */
  push32((uint32_t)(0x2u));
  /* 10462386 call 0x10461fd0 */
  push32(0x1046238bu); f_10461fd0();
  /* 1046238b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046238e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462391 jne 0x10462398 */
  if (!C.zf) goto L_10462398;
  /* 10462393 call 0x10461ec0 */
  push32(0x10462398u); f_10461ec0();
L_10462398:;
  /* 10462398 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046239a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046239c jne 0x1046236d */
  if (!C.zf) goto L_1046236d;
  /* 1046239e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 104623a3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 104623a9 push ecx */
  push32((uint32_t)(ECX));
  /* 104623aa push 0 */
  push32((uint32_t)(0x0u));
  /* 104623ac call dword ptr [0x10490298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490298))), 0x104623b2u);
  /* 104623b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104623b4 jne 0x104623ca */
  if (!C.zf) goto L_104623ca;
  /* 104623b6 push 0x104893cc */
  push32((uint32_t)(0x104893ccu));
  /* 104623bb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 104623c1 push edx */
  push32((uint32_t)(EDX));
  /* 104623c2 call 0x10465ec0 */
  push32(0x104623c7u); f_10465ec0();
  /* 104623c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104623ca:;
  /* 104623ca lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 104623d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104623d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104623d6 push ecx */
  push32((uint32_t)(ECX));
  /* 104623d7 call 0x10465d40 */
  push32(0x104623dcu); f_10465d40();
  /* 104623dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104623df cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104623e2 jbe 0x1046240d */
  if ((C.cf||C.zf)) goto L_1046240d;
  /* 104623e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104623e7 push edx */
  push32((uint32_t)(EDX));
  /* 104623e8 call 0x10465d40 */
  push32(0x104623edu); f_10465d40();
  /* 104623ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104623f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104623f3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 104623f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104623fa push 3 */
  push32((uint32_t)(0x3u));
  /* 104623fc push 0x104893c8 */
  push32((uint32_t)(0x104893c8u));
  /* 10462401 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10462404 push eax */
  push32((uint32_t)(EAX));
  /* 10462405 call 0x10466730 */
  push32(0x1046240au); f_10466730();
  /* 1046240a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046240d:;
  /* 1046240d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10462410 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10462416 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046241d je 0x10462468 */
  if (C.zf) goto L_10462468;
  /* 1046241f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10462425 push edx */
  push32((uint32_t)(EDX));
  /* 10462426 call 0x10465d40 */
  push32(0x1046242bu); f_10465d40();
  /* 1046242b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046242e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462431 jbe 0x10462468 */
  if ((C.cf||C.zf)) goto L_10462468;
  /* 10462433 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10462439 push eax */
  push32((uint32_t)(EAX));
  /* 1046243a call 0x10465d40 */
  push32(0x1046243fu); f_10465d40();
  /* 1046243f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462442 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10462448 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1046244c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10462452 push 3 */
  push32((uint32_t)(0x3u));
  /* 10462454 push 0x104893c8 */
  push32((uint32_t)(0x104893c8u));
  /* 10462459 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1046245f push eax */
  push32((uint32_t)(EAX));
  /* 10462460 call 0x10466730 */
  push32(0x10462465u); f_10466730();
  /* 10462465 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10462468:;
  /* 10462468 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046246c jne 0x1046247a */
  if (!C.zf) goto L_1046247a;
  /* 1046246e mov dword ptr [ebp - 0x1114], 0x10489354 */
  w32((uint32_t)(EBP + -0x1114), (0x10489354u));
  /* 10462478 jmp 0x10462484 */
  goto L_10462484;
L_1046247a:;
  /* 1046247a mov dword ptr [ebp - 0x1114], 0x104890f4 */
  w32((uint32_t)(EBP + -0x1114), (0x104890f4u));
L_10462484:;
  /* 10462484 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10462487 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1046248a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046248c je 0x10462499 */
  if (C.zf) goto L_10462499;
  /* 1046248e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10462491 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10462497 jmp 0x104624a3 */
  goto L_104624a3;
L_10462499:;
  /* 10462499 mov dword ptr [ebp - 0x1118], 0x104890f4 */
  w32((uint32_t)(EBP + -0x1118), (0x104890f4u));
L_104624a3:;
  /* 104624a3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104624a6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104624a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104624ab je 0x104624bf */
  if (C.zf) goto L_104624bf;
  /* 104624ad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104624b1 jne 0x104624bf */
  if (!C.zf) goto L_104624bf;
  /* 104624b3 mov dword ptr [ebp - 0x111c], 0x10489344 */
  w32((uint32_t)(EBP + -0x111c), (0x10489344u));
  /* 104624bd jmp 0x104624c9 */
  goto L_104624c9;
L_104624bf:;
  /* 104624bf mov dword ptr [ebp - 0x111c], 0x104890f4 */
  w32((uint32_t)(EBP + -0x111c), (0x104890f4u));
L_104624c9:;
  /* 104624c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104624cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104624cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104624d1 je 0x104624df */
  if (C.zf) goto L_104624df;
  /* 104624d3 mov dword ptr [ebp - 0x1120], 0x10489340 */
  w32((uint32_t)(EBP + -0x1120), (0x10489340u));
  /* 104624dd jmp 0x104624e9 */
  goto L_104624e9;
L_104624df:;
  /* 104624df mov dword ptr [ebp - 0x1120], 0x104890f4 */
  w32((uint32_t)(EBP + -0x1120), (0x104890f4u));
L_104624e9:;
  /* 104624e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104624ed je 0x104624fa */
  if (C.zf) goto L_104624fa;
  /* 104624ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104624f2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 104624f8 jmp 0x10462504 */
  goto L_10462504;
L_104624fa:;
  /* 104624fa mov dword ptr [ebp - 0x1124], 0x104890f4 */
  w32((uint32_t)(EBP + -0x1124), (0x104890f4u));
L_10462504:;
  /* 10462504 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462508 je 0x10462516 */
  if (C.zf) goto L_10462516;
  /* 1046250a mov dword ptr [ebp - 0x1128], 0x10489338 */
  w32((uint32_t)(EBP + -0x1128), (0x10489338u));
  /* 10462514 jmp 0x10462520 */
  goto L_10462520;
L_10462516:;
  /* 10462516 mov dword ptr [ebp - 0x1128], 0x104890f4 */
  w32((uint32_t)(EBP + -0x1128), (0x104890f4u));
L_10462520:;
  /* 10462520 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462524 je 0x10462531 */
  if (C.zf) goto L_10462531;
  /* 10462526 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10462529 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1046252f jmp 0x1046253b */
  goto L_1046253b;
L_10462531:;
  /* 10462531 mov dword ptr [ebp - 0x112c], 0x104890f4 */
  w32((uint32_t)(EBP + -0x112c), (0x104890f4u));
L_1046253b:;
  /* 1046253b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046253f je 0x1046254d */
  if (C.zf) goto L_1046254d;
  /* 10462541 mov dword ptr [ebp - 0x1130], 0x10489330 */
  w32((uint32_t)(EBP + -0x1130), (0x10489330u));
  /* 1046254b jmp 0x10462557 */
  goto L_10462557;
L_1046254d:;
  /* 1046254d mov dword ptr [ebp - 0x1130], 0x104890f4 */
  w32((uint32_t)(EBP + -0x1130), (0x104890f4u));
L_10462557:;
  /* 10462557 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046255e je 0x1046256e */
  if (C.zf) goto L_1046256e;
  /* 10462560 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10462566 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1046256c jmp 0x10462578 */
  goto L_10462578;
L_1046256e:;
  /* 1046256e mov dword ptr [ebp - 0x1134], 0x104890f4 */
  w32((uint32_t)(EBP + -0x1134), (0x104890f4u));
L_10462578:;
  /* 10462578 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046257f je 0x1046258d */
  if (C.zf) goto L_1046258d;
  /* 10462581 mov dword ptr [ebp - 0x1138], 0x10489324 */
  w32((uint32_t)(EBP + -0x1138), (0x10489324u));
  /* 1046258b jmp 0x10462597 */
  goto L_10462597;
L_1046258d:;
  /* 1046258d mov dword ptr [ebp - 0x1138], 0x104890f4 */
  w32((uint32_t)(EBP + -0x1138), (0x104890f4u));
L_10462597:;
  /* 10462597 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1046259d push edx */
  push32((uint32_t)(EDX));
  /* 1046259e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 104625a4 push eax */
  push32((uint32_t)(EAX));
  /* 104625a5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 104625ab push ecx */
  push32((uint32_t)(ECX));
  /* 104625ac mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 104625b2 push edx */
  push32((uint32_t)(EDX));
  /* 104625b3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 104625b9 push eax */
  push32((uint32_t)(EAX));
  /* 104625ba mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 104625c0 push ecx */
  push32((uint32_t)(ECX));
  /* 104625c1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 104625c7 push edx */
  push32((uint32_t)(EDX));
  /* 104625c8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 104625ce push eax */
  push32((uint32_t)(EAX));
  /* 104625cf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 104625d5 push ecx */
  push32((uint32_t)(ECX));
  /* 104625d6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 104625dc push edx */
  push32((uint32_t)(EDX));
  /* 104625dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104625e0 push eax */
  push32((uint32_t)(EAX));
  /* 104625e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104625e4 mov edx, dword ptr [ecx*4 + 0x1048ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1048ca50)));
  /* 104625eb push edx */
  push32((uint32_t)(EDX));
  /* 104625ec push 0x104892d0 */
  push32((uint32_t)(0x104892d0u));
  /* 104625f1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104625f6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 104625fc push eax */
  push32((uint32_t)(EAX));
  /* 104625fd call 0x10465dc0 */
  push32(0x10462602u); f_10465dc0();
  /* 10462602 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10462607 jge 0x1046261d */
  if ((C.sf==C.of)) goto L_1046261d;
  /* 10462609 push 0x10489234 */
  push32((uint32_t)(0x10489234u));
  /* 1046260e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10462614 push ecx */
  push32((uint32_t)(ECX));
  /* 10462615 call 0x10465ec0 */
  push32(0x1046261au); f_10465ec0();
  /* 1046261a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046261d:;
  /* 1046261d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10462622 push 0x104892ac */
  push32((uint32_t)(0x104892acu));
  /* 10462627 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1046262d push edx */
  push32((uint32_t)(EDX));
  /* 1046262e call 0x10466670 */
  push32(0x10462633u); f_10466670();
  /* 10462633 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462636 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1046263c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462643 jne 0x10462656 */
  if (!C.zf) goto L_10462656;
  /* 10462645 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10462647 call 0x104663b0 */
  push32(0x1046264cu); f_104663b0();
  /* 1046264c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046264f push 3 */
  push32((uint32_t)(0x3u));
  /* 10462651 call 0x104626d0 */
  push32(0x10462656u); f_104626d0();
L_10462656:;
  /* 10462656 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046265d jne 0x10462666 */
  if (!C.zf) goto L_10462666;
  /* 1046265f mov eax, 1 */
  EAX = (0x1u);
  /* 10462664 jmp 0x10462668 */
  goto L_10462668;
L_10462666:;
  /* 10462666 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10462668:;
  /* 10462668 mov esp, ebp */
  ESP = (EBP);
  /* 1046266a pop ebp */
  EBP = (pop32());
  /* 1046266b ret  */
  ESPCHK(0x10462360u, _esp0);
  ESP += 4; return;
}

/* FUN_10002670 @ 0x10462670 (56 bytes, 15 insns) */
void f_10462670(void) {
  FTRACE(0x10462670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462670 push ebp */
  push32((uint32_t)(EBP));
  /* 10462671 mov ebp, esp */
  EBP = (ESP);
  /* 10462673 cmp dword ptr [0x1048ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046267a je 0x10462682 */
  if (C.zf) goto L_10462682;
  /* 1046267c call dword ptr [0x1048ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048ffbc))), 0x10462682u);
L_10462682:;
  /* 10462682 push 0x1048c418 */
  push32((uint32_t)(0x1048c418u));
  /* 10462687 push 0x1048c208 */
  push32((uint32_t)(0x1048c208u));
  /* 1046268c call 0x10462840 */
  push32(0x10462691u); f_10462840();
  /* 10462691 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462694 push 0x1048c104 */
  push32((uint32_t)(0x1048c104u));
  /* 10462699 push 0x1048c000 */
  push32((uint32_t)(0x1048c000u));
  /* 1046269e call 0x10462840 */
  push32(0x104626a3u); f_10462840();
  /* 104626a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104626a6 pop ebp */
  EBP = (pop32());
  /* 104626a7 ret  */
  ESPCHK(0x10462670u, _esp0);
  ESP += 4; return;
}

/* FUN_100026b0 @ 0x104626b0 (21 bytes, 10 insns) */
void f_104626b0(void) {
  FTRACE(0x104626b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104626b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104626b1 mov ebp, esp */
  EBP = (ESP);
  /* 104626b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104626b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104626b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104626ba push eax */
  push32((uint32_t)(EAX));
  /* 104626bb call 0x10462730 */
  push32(0x104626c0u); f_10462730();
  /* 104626c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104626c3 pop ebp */
  EBP = (pop32());
  /* 104626c4 ret  */
  ESPCHK(0x104626b0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x104626d0 (21 bytes, 10 insns) */
void f_104626d0(void) {
  FTRACE(0x104626d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104626d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104626d1 mov ebp, esp */
  EBP = (ESP);
  /* 104626d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104626d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 104626d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104626da push eax */
  push32((uint32_t)(EAX));
  /* 104626db call 0x10462730 */
  push32(0x104626e0u); f_10462730();
  /* 104626e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104626e3 pop ebp */
  EBP = (pop32());
  /* 104626e4 ret  */
  ESPCHK(0x104626d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x104626f0 (19 bytes, 9 insns) */
void f_104626f0(void) {
  FTRACE(0x104626f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104626f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104626f1 mov ebp, esp */
  EBP = (ESP);
  /* 104626f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104626f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104626f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104626f9 call 0x10462730 */
  push32(0x104626feu); f_10462730();
  /* 104626fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462701 pop ebp */
  EBP = (pop32());
  /* 10462702 ret  */
  ESPCHK(0x104626f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002710 @ 0x10462710 (19 bytes, 9 insns) */
void f_10462710(void) {
  FTRACE(0x10462710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462710 push ebp */
  push32((uint32_t)(EBP));
  /* 10462711 mov ebp, esp */
  EBP = (ESP);
  /* 10462713 push 1 */
  push32((uint32_t)(0x1u));
  /* 10462715 push 1 */
  push32((uint32_t)(0x1u));
  /* 10462717 push 0 */
  push32((uint32_t)(0x0u));
  /* 10462719 call 0x10462730 */
  push32(0x1046271eu); f_10462730();
  /* 1046271e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462721 pop ebp */
  EBP = (pop32());
  /* 10462722 ret  */
  ESPCHK(0x10462710u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x10462730 (227 bytes, 61 insns) */
void f_10462730(void) {
  FTRACE(0x10462730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462730 push ebp */
  push32((uint32_t)(EBP));
  /* 10462731 mov ebp, esp */
  EBP = (ESP);
  /* 10462733 push ecx */
  push32((uint32_t)(ECX));
  /* 10462734 call 0x10462820 */
  push32(0x10462739u); f_10462820();
  /* 10462739 cmp dword ptr [0x1048e4bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e4bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462740 jne 0x10462753 */
  if (!C.zf) goto L_10462753;
  /* 10462742 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462745 push eax */
  push32((uint32_t)(EAX));
  /* 10462746 call dword ptr [0x104902a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902a4))), 0x1046274cu);
  /* 1046274c push eax */
  push32((uint32_t)(EAX));
  /* 1046274d call dword ptr [0x104902a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902a0))), 0x10462753u);
L_10462753:;
  /* 10462753 mov dword ptr [0x1048e4b8], 1 */
  w32((uint32_t)(0x1048e4b8), (0x1u));
  /* 1046275d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10462760 mov byte ptr [0x1048e4b4], cl */
  w8((uint32_t)(0x1048e4b4), (CL));
  /* 10462766 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046276a jne 0x104627b3 */
  if (!C.zf) goto L_104627b3;
  /* 1046276c cmp dword ptr [0x1048ffb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048ffb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462773 je 0x104627a1 */
  if (C.zf) goto L_104627a1;
  /* 10462775 mov edx, dword ptr [0x1048ffb4] */
  EDX = (r32((uint32_t)(0x1048ffb4)));
  /* 1046277b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1046277e:;
  /* 1046277e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10462781 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10462784 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10462787 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046278a cmp ecx, dword ptr [0x1048ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462790 jb 0x104627a1 */
  if (C.cf) goto L_104627a1;
  /* 10462792 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10462795 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462798 je 0x1046279f */
  if (C.zf) goto L_1046279f;
  /* 1046279a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046279d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1046279fu);
L_1046279f:;
  /* 1046279f jmp 0x1046277e */
  goto L_1046277e;
L_104627a1:;
  /* 104627a1 push 0x1048c724 */
  push32((uint32_t)(0x1048c724u));
  /* 104627a6 push 0x1048c51c */
  push32((uint32_t)(0x1048c51cu));
  /* 104627ab call 0x10462840 */
  push32(0x104627b0u); f_10462840();
  /* 104627b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104627b3:;
  /* 104627b3 push 0x1048c92c */
  push32((uint32_t)(0x1048c92cu));
  /* 104627b8 push 0x1048c828 */
  push32((uint32_t)(0x1048c828u));
  /* 104627bd call 0x10462840 */
  push32(0x104627c2u); f_10462840();
  /* 104627c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104627c5 cmp dword ptr [0x1048e4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104627cc jne 0x104627ee */
  if (!C.zf) goto L_104627ee;
  /* 104627ce push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104627d0 call 0x10464420 */
  push32(0x104627d5u); f_10464420();
  /* 104627d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104627d8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 104627db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104627dd je 0x104627ee */
  if (C.zf) goto L_104627ee;
  /* 104627df mov dword ptr [0x1048e4c0], 1 */
  w32((uint32_t)(0x1048e4c0), (0x1u));
  /* 104627e9 call 0x10464d30 */
  push32(0x104627eeu); f_10464d30();
L_104627ee:;
  /* 104627ee cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104627f2 je 0x104627fb */
  if (C.zf) goto L_104627fb;
  /* 104627f4 call 0x10462830 */
  push32(0x104627f9u); f_10462830();
  /* 104627f9 jmp 0x1046280f */
  goto L_1046280f;
L_104627fb:;
  /* 104627fb mov dword ptr [0x1048e4bc], 1 */
  w32((uint32_t)(0x1048e4bc), (0x1u));
  /* 10462805 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462808 push ecx */
  push32((uint32_t)(ECX));
  /* 10462809 call dword ptr [0x1049029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049029c))), 0x1046280fu);
L_1046280f:;
  /* 1046280f mov esp, ebp */
  ESP = (EBP);
  /* 10462811 pop ebp */
  EBP = (pop32());
  /* 10462812 ret  */
  ESPCHK(0x10462730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002820 @ 0x10462820 (15 bytes, 7 insns) */
void f_10462820(void) {
  FTRACE(0x10462820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462820 push ebp */
  push32((uint32_t)(EBP));
  /* 10462821 mov ebp, esp */
  EBP = (ESP);
  /* 10462823 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10462825 call 0x10466910 */
  push32(0x1046282au); f_10466910();
  /* 1046282a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046282d pop ebp */
  EBP = (pop32());
  /* 1046282e ret  */
  ESPCHK(0x10462820u, _esp0);
  ESP += 4; return;
}

/* FUN_10002830 @ 0x10462830 (15 bytes, 7 insns) */
void f_10462830(void) {
  FTRACE(0x10462830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462830 push ebp */
  push32((uint32_t)(EBP));
  /* 10462831 mov ebp, esp */
  EBP = (ESP);
  /* 10462833 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10462835 call 0x104669b0 */
  push32(0x1046283au); f_104669b0();
  /* 1046283a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046283d pop ebp */
  EBP = (pop32());
  /* 1046283e ret  */
  ESPCHK(0x10462830u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10462840 (37 bytes, 16 insns) */
void f_10462840(void) {
  FTRACE(0x10462840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462840 push ebp */
  push32((uint32_t)(EBP));
  /* 10462841 mov ebp, esp */
  EBP = (ESP);
L_10462843:;
  /* 10462843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462846 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462849 jae 0x10462863 */
  if (!C.cf) goto L_10462863;
  /* 1046284b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046284e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462851 je 0x10462858 */
  if (C.zf) goto L_10462858;
  /* 10462853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462856 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10462858u);
L_10462858:;
  /* 10462858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046285b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046285e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10462861 jmp 0x10462843 */
  goto L_10462843;
L_10462863:;
  /* 10462863 pop ebp */
  EBP = (pop32());
  /* 10462864 ret  */
  ESPCHK(0x10462840u, _esp0);
  ESP += 4; return;
}

/* FUN_10002870 @ 0x10462870 (130 bytes, 42 insns) */
void f_10462870(void) {
  FTRACE(0x10462870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462870 push ebp */
  push32((uint32_t)(EBP));
  /* 10462871 mov ebp, esp */
  EBP = (ESP);
  /* 10462873 push ecx */
  push32((uint32_t)(ECX));
  /* 10462874 call 0x10466830 */
  push32(0x10462879u); f_10466830();
  /* 10462879 call dword ptr [0x104902b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902b0))), 0x1046287fu);
  /* 1046287f mov dword ptr [0x1048ca5c], eax */
  w32((uint32_t)(0x1048ca5c), (EAX));
  /* 10462884 cmp dword ptr [0x1048ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1048ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046288b jne 0x10462891 */
  if (!C.zf) goto L_10462891;
  /* 1046288d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046288f jmp 0x104628ee */
  goto L_104628ee;
L_10462891:;
  /* 10462891 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10462893 push 0x10489408 */
  push32((uint32_t)(0x10489408u));
  /* 10462898 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046289a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1046289c push 1 */
  push32((uint32_t)(0x1u));
  /* 1046289e call 0x10463320 */
  push32(0x104628a3u); f_10463320();
  /* 104628a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104628a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104628a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104628ad je 0x104628c4 */
  if (C.zf) goto L_104628c4;
  /* 104628af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104628b2 push eax */
  push32((uint32_t)(EAX));
  /* 104628b3 mov ecx, dword ptr [0x1048ca5c] */
  ECX = (r32((uint32_t)(0x1048ca5c)));
  /* 104628b9 push ecx */
  push32((uint32_t)(ECX));
  /* 104628ba call dword ptr [0x104902ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ac))), 0x104628c0u);
  /* 104628c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104628c2 jne 0x104628c8 */
  if (!C.zf) goto L_104628c8;
L_104628c4:;
  /* 104628c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104628c6 jmp 0x104628ee */
  goto L_104628ee;
L_104628c8:;
  /* 104628c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104628cb push edx */
  push32((uint32_t)(EDX));
  /* 104628cc call 0x10462930 */
  push32(0x104628d1u); f_10462930();
  /* 104628d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104628d4 call dword ptr [0x104902a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902a8))), 0x104628dau);
  /* 104628da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104628dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104628df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104628e2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 104628e9 mov eax, 1 */
  EAX = (0x1u);
L_104628ee:;
  /* 104628ee mov esp, ebp */
  ESP = (EBP);
  /* 104628f0 pop ebp */
  EBP = (pop32());
  /* 104628f1 ret  */
  ESPCHK(0x10462870u, _esp0);
  ESP += 4; return;
}

/* FUN_10002900 @ 0x10462900 (41 bytes, 11 insns) */
void f_10462900(void) {
  FTRACE(0x10462900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462900 push ebp */
  push32((uint32_t)(EBP));
  /* 10462901 mov ebp, esp */
  EBP = (ESP);
  /* 10462903 call 0x10466870 */
  push32(0x10462908u); f_10466870();
  /* 10462908 cmp dword ptr [0x1048ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1048ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046290f je 0x10462927 */
  if (C.zf) goto L_10462927;
  /* 10462911 mov eax, dword ptr [0x1048ca5c] */
  EAX = (r32((uint32_t)(0x1048ca5c)));
  /* 10462916 push eax */
  push32((uint32_t)(EAX));
  /* 10462917 call dword ptr [0x104902b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902b4))), 0x1046291du);
  /* 1046291d mov dword ptr [0x1048ca5c], 0xffffffff */
  w32((uint32_t)(0x1048ca5c), (0xffffffffu));
L_10462927:;
  /* 10462927 pop ebp */
  EBP = (pop32());
  /* 10462928 ret  */
  ESPCHK(0x10462900u, _esp0);
  ESP += 4; return;
}

/* FUN_10002930 @ 0x10462930 (25 bytes, 8 insns) */
void f_10462930(void) {
  FTRACE(0x10462930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462930 push ebp */
  push32((uint32_t)(EBP));
  /* 10462931 mov ebp, esp */
  EBP = (ESP);
  /* 10462933 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462936 mov dword ptr [eax + 0x50], 0x1048cc00 */
  w32((uint32_t)(EAX + 0x50), (0x1048cc00u));
  /* 1046293d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462940 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10462947 pop ebp */
  EBP = (pop32());
  /* 10462948 ret  */
  ESPCHK(0x10462930u, _esp0);
  ESP += 4; return;
}

/* FUN_10002950 @ 0x10462950 (152 bytes, 48 insns) */
void f_10462950(void) {
  FTRACE(0x10462950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462950 push ebp */
  push32((uint32_t)(EBP));
  /* 10462951 mov ebp, esp */
  EBP = (ESP);
  /* 10462953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10462956 call dword ptr [0x104902c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902c0))), 0x1046295cu);
  /* 1046295c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046295f mov eax, dword ptr [0x1048ca5c] */
  EAX = (r32((uint32_t)(0x1048ca5c)));
  /* 10462964 push eax */
  push32((uint32_t)(EAX));
  /* 10462965 call dword ptr [0x104902bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902bc))), 0x1046296bu);
  /* 1046296b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046296e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462972 jne 0x104629d7 */
  if (!C.zf) goto L_104629d7;
  /* 10462974 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10462979 push 0x10489408 */
  push32((uint32_t)(0x10489408u));
  /* 1046297e push 2 */
  push32((uint32_t)(0x2u));
  /* 10462980 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10462982 push 1 */
  push32((uint32_t)(0x1u));
  /* 10462984 call 0x10463320 */
  push32(0x10462989u); f_10463320();
  /* 10462989 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046298c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046298f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462993 je 0x104629cd */
  if (C.zf) goto L_104629cd;
  /* 10462995 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10462998 push ecx */
  push32((uint32_t)(ECX));
  /* 10462999 mov edx, dword ptr [0x1048ca5c] */
  EDX = (r32((uint32_t)(0x1048ca5c)));
  /* 1046299f push edx */
  push32((uint32_t)(EDX));
  /* 104629a0 call dword ptr [0x104902ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ac))), 0x104629a6u);
  /* 104629a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104629a8 je 0x104629cd */
  if (C.zf) goto L_104629cd;
  /* 104629aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104629ad push eax */
  push32((uint32_t)(EAX));
  /* 104629ae call 0x10462930 */
  push32(0x104629b3u); f_10462930();
  /* 104629b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104629b6 call dword ptr [0x104902a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902a8))), 0x104629bcu);
  /* 104629bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104629bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104629c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104629c4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 104629cb jmp 0x104629d7 */
  goto L_104629d7;
L_104629cd:;
  /* 104629cd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 104629cf call 0x10461e80 */
  push32(0x104629d4u); f_10461e80();
  /* 104629d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104629d7:;
  /* 104629d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104629da push eax */
  push32((uint32_t)(EAX));
  /* 104629db call dword ptr [0x104902b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902b8))), 0x104629e1u);
  /* 104629e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104629e4 mov esp, ebp */
  ESP = (EBP);
  /* 104629e6 pop ebp */
  EBP = (pop32());
  /* 104629e7 ret  */
  ESPCHK(0x10462950u, _esp0);
  ESP += 4; return;
}

/* FUN_100029f0 @ 0x104629f0 (263 bytes, 86 insns) */
void f_104629f0(void) {
  FTRACE(0x104629f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104629f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104629f1 mov ebp, esp */
  EBP = (ESP);
  /* 104629f3 cmp dword ptr [0x1048ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1048ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104629fa je 0x10462af5 */
  if (C.zf) goto L_10462af5;
  /* 10462a00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462a04 jne 0x10462a15 */
  if (!C.zf) goto L_10462a15;
  /* 10462a06 mov eax, dword ptr [0x1048ca5c] */
  EAX = (r32((uint32_t)(0x1048ca5c)));
  /* 10462a0b push eax */
  push32((uint32_t)(EAX));
  /* 10462a0c call dword ptr [0x104902bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902bc))), 0x10462a12u);
  /* 10462a12 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10462a15:;
  /* 10462a15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462a19 je 0x10462ae6 */
  if (C.zf) goto L_10462ae6;
  /* 10462a1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462a22 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462a26 je 0x10462a39 */
  if (C.zf) goto L_10462a39;
  /* 10462a28 push 2 */
  push32((uint32_t)(0x2u));
  /* 10462a2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462a2d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10462a30 push eax */
  push32((uint32_t)(EAX));
  /* 10462a31 call 0x104639a0 */
  push32(0x10462a36u); f_104639a0();
  /* 10462a36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10462a39:;
  /* 10462a39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462a3c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462a40 je 0x10462a53 */
  if (C.zf) goto L_10462a53;
  /* 10462a42 push 2 */
  push32((uint32_t)(0x2u));
  /* 10462a44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462a47 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10462a4a push eax */
  push32((uint32_t)(EAX));
  /* 10462a4b call 0x104639a0 */
  push32(0x10462a50u); f_104639a0();
  /* 10462a50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10462a53:;
  /* 10462a53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462a56 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462a5a je 0x10462a6d */
  if (C.zf) goto L_10462a6d;
  /* 10462a5c push 2 */
  push32((uint32_t)(0x2u));
  /* 10462a5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462a61 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10462a64 push eax */
  push32((uint32_t)(EAX));
  /* 10462a65 call 0x104639a0 */
  push32(0x10462a6au); f_104639a0();
  /* 10462a6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10462a6d:;
  /* 10462a6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462a70 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462a74 je 0x10462a87 */
  if (C.zf) goto L_10462a87;
  /* 10462a76 push 2 */
  push32((uint32_t)(0x2u));
  /* 10462a78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462a7b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10462a7e push eax */
  push32((uint32_t)(EAX));
  /* 10462a7f call 0x104639a0 */
  push32(0x10462a84u); f_104639a0();
  /* 10462a84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10462a87:;
  /* 10462a87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462a8a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462a8e je 0x10462aa1 */
  if (C.zf) goto L_10462aa1;
  /* 10462a90 push 2 */
  push32((uint32_t)(0x2u));
  /* 10462a92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462a95 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10462a98 push eax */
  push32((uint32_t)(EAX));
  /* 10462a99 call 0x104639a0 */
  push32(0x10462a9eu); f_104639a0();
  /* 10462a9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10462aa1:;
  /* 10462aa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462aa4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462aa8 je 0x10462abb */
  if (C.zf) goto L_10462abb;
  /* 10462aaa push 2 */
  push32((uint32_t)(0x2u));
  /* 10462aac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462aaf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10462ab2 push eax */
  push32((uint32_t)(EAX));
  /* 10462ab3 call 0x104639a0 */
  push32(0x10462ab8u); f_104639a0();
  /* 10462ab8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10462abb:;
  /* 10462abb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462abe cmp dword ptr [ecx + 0x50], 0x1048cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1048cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462ac5 je 0x10462ad8 */
  if (C.zf) goto L_10462ad8;
  /* 10462ac7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10462ac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462acc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10462acf push eax */
  push32((uint32_t)(EAX));
  /* 10462ad0 call 0x104639a0 */
  push32(0x10462ad5u); f_104639a0();
  /* 10462ad5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10462ad8:;
  /* 10462ad8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10462ada mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462add push ecx */
  push32((uint32_t)(ECX));
  /* 10462ade call 0x104639a0 */
  push32(0x10462ae3u); f_104639a0();
  /* 10462ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10462ae6:;
  /* 10462ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10462ae8 mov edx, dword ptr [0x1048ca5c] */
  EDX = (r32((uint32_t)(0x1048ca5c)));
  /* 10462aee push edx */
  push32((uint32_t)(EDX));
  /* 10462aef call dword ptr [0x104902ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ac))), 0x10462af5u);
L_10462af5:;
  /* 10462af5 pop ebp */
  EBP = (pop32());
  /* 10462af6 ret  */
  ESPCHK(0x104629f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b00 @ 0x10462b00 (11 bytes, 5 insns) */
void f_10462b00(void) {
  FTRACE(0x10462b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10462b01 mov ebp, esp */
  EBP = (ESP);
  /* 10462b03 call dword ptr [0x104902a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902a8))), 0x10462b09u);
  /* 10462b09 pop ebp */
  EBP = (pop32());
  /* 10462b0a ret  */
  ESPCHK(0x10462b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b10 @ 0x10462b10 (11 bytes, 5 insns) */
void f_10462b10(void) {
  FTRACE(0x10462b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10462b11 mov ebp, esp */
  EBP = (ESP);
  /* 10462b13 call dword ptr [0x104902c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902c4))), 0x10462b19u);
  /* 10462b19 pop ebp */
  EBP = (pop32());
  /* 10462b1a ret  */
  ESPCHK(0x10462b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b20 @ 0x10462b20 (804 bytes, 236 insns) */
void f_10462b20(void) {
  FTRACE(0x10462b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10462b21 mov ebp, esp */
  EBP = (ESP);
  /* 10462b23 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10462b26 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10462b2b push 0x10489414 */
  push32((uint32_t)(0x10489414u));
  /* 10462b30 push 2 */
  push32((uint32_t)(0x2u));
  /* 10462b32 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10462b37 call 0x10462f10 */
  push32(0x10462b3cu); f_10462f10();
  /* 10462b3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462b3f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10462b42 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462b46 jne 0x10462b52 */
  if (!C.zf) goto L_10462b52;
  /* 10462b48 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10462b4a call 0x10461e80 */
  push32(0x10462b4fu); f_10461e80();
  /* 10462b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10462b52:;
  /* 10462b52 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462b55 mov dword ptr [0x1048fe60], eax */
  w32((uint32_t)(0x1048fe60), (EAX));
  /* 10462b5a mov dword ptr [0x1048ff9c], 0x20 */
  w32((uint32_t)(0x1048ff9c), (0x20u));
  /* 10462b64 jmp 0x10462b6f */
  goto L_10462b6f;
L_10462b66:;
  /* 10462b66 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462b69 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462b6c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10462b6f:;
  /* 10462b6f mov edx, dword ptr [0x1048fe60] */
  EDX = (r32((uint32_t)(0x1048fe60)));
  /* 10462b75 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462b7b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462b7e jae 0x10462ba3 */
  if (!C.cf) goto L_10462ba3;
  /* 10462b80 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462b83 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10462b87 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462b8a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10462b90 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462b93 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10462b97 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462b9a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10462ba1 jmp 0x10462b66 */
  goto L_10462b66;
L_10462ba3:;
  /* 10462ba3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10462ba6 push ecx */
  push32((uint32_t)(ECX));
  /* 10462ba7 call dword ptr [0x104902d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902d0))), 0x10462badu);
  /* 10462bad mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10462bb0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10462bb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10462bb8 je 0x10462d45 */
  if (C.zf) goto L_10462d45;
  /* 10462bbe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462bc2 je 0x10462d45 */
  if (C.zf) goto L_10462d45;
  /* 10462bc8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10462bcb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10462bcd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10462bd0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10462bd3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462bd6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10462bd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10462bdc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462bdf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10462be2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462be9 jge 0x10462bf3 */
  if ((C.sf==C.of)) goto L_10462bf3;
  /* 10462beb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10462bee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10462bf1 jmp 0x10462bfa */
  goto L_10462bfa;
L_10462bf3:;
  /* 10462bf3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10462bfa:;
  /* 10462bfa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10462bfd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10462c00 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10462c07 jmp 0x10462c12 */
  goto L_10462c12;
L_10462c09:;
  /* 10462c09 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10462c0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462c0f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10462c12:;
  /* 10462c12 mov ecx, dword ptr [0x1048ff9c] */
  ECX = (r32((uint32_t)(0x1048ff9c)));
  /* 10462c18 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462c1b jge 0x10462cb2 */
  if ((C.sf==C.of)) goto L_10462cb2;
  /* 10462c21 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10462c26 push 0x10489414 */
  push32((uint32_t)(0x10489414u));
  /* 10462c2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10462c2d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10462c32 call 0x10462f10 */
  push32(0x10462c37u); f_10462f10();
  /* 10462c37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462c3a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10462c3d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462c41 jne 0x10462c4e */
  if (!C.zf) goto L_10462c4e;
  /* 10462c43 mov edx, dword ptr [0x1048ff9c] */
  EDX = (r32((uint32_t)(0x1048ff9c)));
  /* 10462c49 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10462c4c jmp 0x10462cb2 */
  goto L_10462cb2;
L_10462c4e:;
  /* 10462c4e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10462c51 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462c54 mov dword ptr [eax*4 + 0x1048fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x1048fe60), (ECX));
  /* 10462c5b mov edx, dword ptr [0x1048ff9c] */
  EDX = (r32((uint32_t)(0x1048ff9c)));
  /* 10462c61 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462c64 mov dword ptr [0x1048ff9c], edx */
  w32((uint32_t)(0x1048ff9c), (EDX));
  /* 10462c6a jmp 0x10462c75 */
  goto L_10462c75;
L_10462c6c:;
  /* 10462c6c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462c6f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462c72 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10462c75:;
  /* 10462c75 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10462c78 mov edx, dword ptr [ecx*4 + 0x1048fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 10462c7f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462c85 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462c88 jae 0x10462cad */
  if (!C.cf) goto L_10462cad;
  /* 10462c8a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462c8d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10462c91 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462c94 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10462c9a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462c9d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10462ca1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462ca4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10462cab jmp 0x10462c6c */
  goto L_10462c6c;
L_10462cad:;
  /* 10462cad jmp 0x10462c09 */
  goto L_10462c09;
L_10462cb2:;
  /* 10462cb2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10462cb9 jmp 0x10462cd6 */
  goto L_10462cd6;
L_10462cbb:;
  /* 10462cbb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10462cbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462cc1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10462cc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10462cc7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462cca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10462ccd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10462cd0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462cd3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10462cd6:;
  /* 10462cd6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10462cd9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462cdc jge 0x10462d45 */
  if ((C.sf==C.of)) goto L_10462d45;
  /* 10462cde mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10462ce1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462ce4 je 0x10462d40 */
  if (C.zf) goto L_10462d40;
  /* 10462ce6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10462ce9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10462cec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10462cef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10462cf1 je 0x10462d40 */
  if (C.zf) goto L_10462d40;
  /* 10462cf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10462cf6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10462cf9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10462cfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10462cfe jne 0x10462d10 */
  if (!C.zf) goto L_10462d10;
  /* 10462d00 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10462d03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10462d05 push edx */
  push32((uint32_t)(EDX));
  /* 10462d06 call dword ptr [0x104902cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902cc))), 0x10462d0cu);
  /* 10462d0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10462d0e je 0x10462d40 */
  if (C.zf) goto L_10462d40;
L_10462d10:;
  /* 10462d10 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10462d13 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10462d16 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10462d19 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10462d1c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10462d1f mov edx, dword ptr [eax*4 + 0x1048fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1048fe60)));
  /* 10462d26 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462d28 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10462d2b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462d2e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10462d31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10462d33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10462d35 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462d38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10462d3b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10462d3d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10462d40:;
  /* 10462d40 jmp 0x10462cbb */
  goto L_10462cbb;
L_10462d45:;
  /* 10462d45 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10462d4c jmp 0x10462d57 */
  goto L_10462d57;
L_10462d4e:;
  /* 10462d4e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10462d51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462d54 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10462d57:;
  /* 10462d57 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462d5b jge 0x10462e34 */
  if ((C.sf==C.of)) goto L_10462e34;
  /* 10462d61 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10462d64 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10462d67 mov edx, dword ptr [0x1048fe60] */
  EDX = (r32((uint32_t)(0x1048fe60)));
  /* 10462d6d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462d6f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10462d72 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462d75 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462d78 jne 0x10462e20 */
  if (!C.zf) goto L_10462e20;
  /* 10462d7e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462d81 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10462d85 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462d89 jne 0x10462d94 */
  if (!C.zf) goto L_10462d94;
  /* 10462d8b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10462d92 jmp 0x10462da4 */
  goto L_10462da4;
L_10462d94:;
  /* 10462d94 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10462d97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10462d9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10462d9c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10462d9e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462da1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10462da4:;
  /* 10462da4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10462da7 push eax */
  push32((uint32_t)(EAX));
  /* 10462da8 call dword ptr [0x1049027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049027c))), 0x10462daeu);
  /* 10462dae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10462db1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462db5 je 0x10462e0f */
  if (C.zf) goto L_10462e0f;
  /* 10462db7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10462dba push ecx */
  push32((uint32_t)(ECX));
  /* 10462dbb call dword ptr [0x104902cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902cc))), 0x10462dc1u);
  /* 10462dc1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10462dc4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462dc8 je 0x10462e0f */
  if (C.zf) goto L_10462e0f;
  /* 10462dca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462dcd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10462dd0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10462dd2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10462dd5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10462ddb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462dde jne 0x10462df0 */
  if (!C.zf) goto L_10462df0;
  /* 10462de0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462de3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10462de6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10462de8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462deb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10462dee jmp 0x10462e0d */
  goto L_10462e0d;
L_10462df0:;
  /* 10462df0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10462df3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10462df9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462dfc jne 0x10462e0d */
  if (!C.zf) goto L_10462e0d;
  /* 10462dfe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462e01 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10462e04 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10462e07 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462e0a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10462e0d:;
  /* 10462e0d jmp 0x10462e1e */
  goto L_10462e1e;
L_10462e0f:;
  /* 10462e0f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462e12 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10462e15 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10462e18 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462e1b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10462e1e:;
  /* 10462e1e jmp 0x10462e2f */
  goto L_10462e2f;
L_10462e20:;
  /* 10462e20 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462e23 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10462e26 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10462e29 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10462e2c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10462e2f:;
  /* 10462e2f jmp 0x10462d4e */
  goto L_10462d4e;
L_10462e34:;
  /* 10462e34 mov eax, dword ptr [0x1048ff9c] */
  EAX = (r32((uint32_t)(0x1048ff9c)));
  /* 10462e39 push eax */
  push32((uint32_t)(EAX));
  /* 10462e3a call dword ptr [0x104902c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902c8))), 0x10462e40u);
  /* 10462e40 mov esp, ebp */
  ESP = (EBP);
  /* 10462e42 pop ebp */
  EBP = (pop32());
  /* 10462e43 ret  */
  ESPCHK(0x10462b20u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10462e50 (155 bytes, 45 insns) */
void f_10462e50(void) {
  FTRACE(0x10462e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10462e51 mov ebp, esp */
  EBP = (ESP);
  /* 10462e53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10462e56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10462e5d jmp 0x10462e68 */
  goto L_10462e68;
L_10462e5f:;
  /* 10462e5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10462e62 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462e65 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10462e68:;
  /* 10462e68 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462e6c jge 0x10462ee7 */
  if ((C.sf==C.of)) goto L_10462ee7;
  /* 10462e6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10462e71 cmp dword ptr [ecx*4 + 0x1048fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1048fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462e79 je 0x10462ee2 */
  if (C.zf) goto L_10462ee2;
  /* 10462e7b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10462e7e mov eax, dword ptr [edx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1048fe60)));
  /* 10462e85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10462e88 jmp 0x10462e93 */
  goto L_10462e93;
L_10462e8a:;
  /* 10462e8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10462e8d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462e90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10462e93:;
  /* 10462e93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10462e96 mov eax, dword ptr [edx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1048fe60)));
  /* 10462e9d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462ea2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462ea5 jae 0x10462ebf */
  if (!C.cf) goto L_10462ebf;
  /* 10462ea7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10462eaa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462eae je 0x10462ebd */
  if (C.zf) goto L_10462ebd;
  /* 10462eb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10462eb3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10462eb6 push edx */
  push32((uint32_t)(EDX));
  /* 10462eb7 call dword ptr [0x104902d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902d4))), 0x10462ebdu);
L_10462ebd:;
  /* 10462ebd jmp 0x10462e8a */
  goto L_10462e8a;
L_10462ebf:;
  /* 10462ebf push 2 */
  push32((uint32_t)(0x2u));
  /* 10462ec1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10462ec4 mov ecx, dword ptr [eax*4 + 0x1048fe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1048fe60)));
  /* 10462ecb push ecx */
  push32((uint32_t)(ECX));
  /* 10462ecc call 0x104639a0 */
  push32(0x10462ed1u); f_104639a0();
  /* 10462ed1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462ed4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10462ed7 mov dword ptr [edx*4 + 0x1048fe60], 0 */
  w32((uint32_t)(EDX*4 + 0x1048fe60), (0x0u));
L_10462ee2:;
  /* 10462ee2 jmp 0x10462e5f */
  goto L_10462e5f;
L_10462ee7:;
  /* 10462ee7 mov esp, ebp */
  ESP = (EBP);
  /* 10462ee9 pop ebp */
  EBP = (pop32());
  /* 10462eea ret  */
  ESPCHK(0x10462e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ef0 @ 0x10462ef0 (29 bytes, 13 insns) */
void f_10462ef0(void) {
  FTRACE(0x10462ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10462ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10462ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10462ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10462ef7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10462ef9 mov eax, dword ptr [0x1048e668] */
  EAX = (r32((uint32_t)(0x1048e668)));
  /* 10462efe push eax */
  push32((uint32_t)(EAX));
  /* 10462eff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462f02 push ecx */
  push32((uint32_t)(ECX));
  /* 10462f03 call 0x10462f60 */
  push32(0x10462f08u); f_10462f60();
  /* 10462f08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462f0b pop ebp */
  EBP = (pop32());
  /* 10462f0c ret  */
  ESPCHK(0x10462ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f10 @ 0x10462f10 (35 bytes, 16 insns) */
void f_10462f10(void) {
  FTRACE(0x10462f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10462f11 mov ebp, esp */
  EBP = (ESP);
  /* 10462f13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10462f16 push eax */
  push32((uint32_t)(EAX));
  /* 10462f17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10462f1a push ecx */
  push32((uint32_t)(ECX));
  /* 10462f1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10462f1e push edx */
  push32((uint32_t)(EDX));
  /* 10462f1f mov eax, dword ptr [0x1048e668] */
  EAX = (r32((uint32_t)(0x1048e668)));
  /* 10462f24 push eax */
  push32((uint32_t)(EAX));
  /* 10462f25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462f28 push ecx */
  push32((uint32_t)(ECX));
  /* 10462f29 call 0x10462f60 */
  push32(0x10462f2eu); f_10462f60();
  /* 10462f2e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462f31 pop ebp */
  EBP = (pop32());
  /* 10462f32 ret  */
  ESPCHK(0x10462f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f40 @ 0x10462f40 (27 bytes, 13 insns) */
void f_10462f40(void) {
  FTRACE(0x10462f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10462f41 mov ebp, esp */
  EBP = (ESP);
  /* 10462f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10462f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10462f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10462f49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10462f4c push eax */
  push32((uint32_t)(EAX));
  /* 10462f4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462f50 push ecx */
  push32((uint32_t)(ECX));
  /* 10462f51 call 0x10462f60 */
  push32(0x10462f56u); f_10462f60();
  /* 10462f56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462f59 pop ebp */
  EBP = (pop32());
  /* 10462f5a ret  */
  ESPCHK(0x10462f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f60 @ 0x10462f60 (94 bytes, 38 insns) */
void f_10462f60(void) {
  FTRACE(0x10462f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10462f61 mov ebp, esp */
  EBP = (ESP);
  /* 10462f63 push ecx */
  push32((uint32_t)(ECX));
L_10462f64:;
  /* 10462f64 push 9 */
  push32((uint32_t)(0x9u));
  /* 10462f66 call 0x10466910 */
  push32(0x10462f6bu); f_10466910();
  /* 10462f6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462f6e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10462f71 push eax */
  push32((uint32_t)(EAX));
  /* 10462f72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10462f75 push ecx */
  push32((uint32_t)(ECX));
  /* 10462f76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10462f79 push edx */
  push32((uint32_t)(EDX));
  /* 10462f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462f7d push eax */
  push32((uint32_t)(EAX));
  /* 10462f7e call 0x10462fe0 */
  push32(0x10462f83u); f_10462fe0();
  /* 10462f83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462f86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10462f89 push 9 */
  push32((uint32_t)(0x9u));
  /* 10462f8b call 0x104669b0 */
  push32(0x10462f90u); f_104669b0();
  /* 10462f90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462f93 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462f97 jne 0x10462f9f */
  if (!C.zf) goto L_10462f9f;
  /* 10462f99 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10462f9d jne 0x10462fa4 */
  if (!C.zf) goto L_10462fa4;
L_10462f9f:;
  /* 10462f9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10462fa2 jmp 0x10462fba */
  goto L_10462fba;
L_10462fa4:;
  /* 10462fa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462fa7 push ecx */
  push32((uint32_t)(ECX));
  /* 10462fa8 call 0x10466c50 */
  push32(0x10462fadu); f_10466c50();
  /* 10462fad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462fb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10462fb2 jne 0x10462fb8 */
  if (!C.zf) goto L_10462fb8;
  /* 10462fb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10462fb6 jmp 0x10462fba */
  goto L_10462fba;
L_10462fb8:;
  /* 10462fb8 jmp 0x10462f64 */
  goto L_10462f64;
L_10462fba:;
  /* 10462fba mov esp, ebp */
  ESP = (EBP);
  /* 10462fbc pop ebp */
  EBP = (pop32());
  /* 10462fbd ret  */
  ESPCHK(0x10462f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fc0 @ 0x10462fc0 (23 bytes, 11 insns) */
void f_10462fc0(void) {
  FTRACE(0x10462fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10462fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10462fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10462fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10462fc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10462fc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10462fcc push eax */
  push32((uint32_t)(EAX));
  /* 10462fcd call 0x10462fe0 */
  push32(0x10462fd2u); f_10462fe0();
  /* 10462fd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10462fd5 pop ebp */
  EBP = (pop32());
  /* 10462fd6 ret  */
  ESPCHK(0x10462fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fe0 @ 0x10462fe0 (787 bytes, 254 insns) */
void f_10462fe0(void) {
  FTRACE(0x10462fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10462fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10462fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10462fe3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10462fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 10462fe7 push esi */
  push32((uint32_t)(ESI));
  /* 10462fe8 push edi */
  push32((uint32_t)(EDI));
  /* 10462fe9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10462ff0 mov eax, dword ptr [0x1048ca84] */
  EAX = (r32((uint32_t)(0x1048ca84)));
  /* 10462ff5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10462ff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10462ffa je 0x1046302c */
  if (C.zf) goto L_1046302c;
L_10462ffc:;
  /* 10462ffc call 0x104640b0 */
  push32(0x10463001u); f_104640b0();
  /* 10463001 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463003 jne 0x10463026 */
  if (!C.zf) goto L_10463026;
  /* 10463005 push 0x10489508 */
  push32((uint32_t)(0x10489508u));
  /* 1046300a push 0 */
  push32((uint32_t)(0x0u));
  /* 1046300c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10463011 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463016 push 2 */
  push32((uint32_t)(0x2u));
  /* 10463018 call 0x10461fd0 */
  push32(0x1046301du); f_10461fd0();
  /* 1046301d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463020 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463023 jne 0x10463026 */
  if (!C.zf) goto L_10463026;
  /* 10463025 int3  */
  x86_unimpl("int3 @ 0x10463025");
L_10463026:;
  /* 10463026 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10463028 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046302a jne 0x10462ffc */
  if (!C.zf) goto L_10462ffc;
L_1046302c:;
  /* 1046302c mov edx, dword ptr [0x1048ca88] */
  EDX = (r32((uint32_t)(0x1048ca88)));
  /* 10463032 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10463035 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10463038 cmp eax, dword ptr [0x1048ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046303e jne 0x10463041 */
  if (!C.zf) goto L_10463041;
  /* 10463040 int3  */
  x86_unimpl("int3 @ 0x10463040");
L_10463041:;
  /* 10463041 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10463044 push ecx */
  push32((uint32_t)(ECX));
  /* 10463045 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10463048 push edx */
  push32((uint32_t)(EDX));
  /* 10463049 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046304c push eax */
  push32((uint32_t)(EAX));
  /* 1046304d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10463050 push ecx */
  push32((uint32_t)(ECX));
  /* 10463051 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463054 push edx */
  push32((uint32_t)(EDX));
  /* 10463055 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463057 push 1 */
  push32((uint32_t)(0x1u));
  /* 10463059 call dword ptr [0x1048cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048cc90))), 0x1046305fu);
  /* 1046305f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463064 jne 0x104630c4 */
  if (!C.zf) goto L_104630c4;
  /* 10463066 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046306a je 0x10463097 */
  if (C.zf) goto L_10463097;
L_1046306c:;
  /* 1046306c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046306f push eax */
  push32((uint32_t)(EAX));
  /* 10463070 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10463073 push ecx */
  push32((uint32_t)(ECX));
  /* 10463074 push 0x104894c4 */
  push32((uint32_t)(0x104894c4u));
  /* 10463079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046307b push 0 */
  push32((uint32_t)(0x0u));
  /* 1046307d push 0 */
  push32((uint32_t)(0x0u));
  /* 1046307f push 0 */
  push32((uint32_t)(0x0u));
  /* 10463081 call 0x10461fd0 */
  push32(0x10463086u); f_10461fd0();
  /* 10463086 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463089 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046308c jne 0x1046308f */
  if (!C.zf) goto L_1046308f;
  /* 1046308e int3  */
  x86_unimpl("int3 @ 0x1046308e");
L_1046308f:;
  /* 1046308f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10463091 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10463093 jne 0x1046306c */
  if (!C.zf) goto L_1046306c;
  /* 10463095 jmp 0x104630bd */
  goto L_104630bd;
L_10463097:;
  /* 10463097 push 0x104894a0 */
  push32((uint32_t)(0x104894a0u));
  /* 1046309c push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 104630a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104630a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104630a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104630a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104630a9 call 0x10461fd0 */
  push32(0x104630aeu); f_10461fd0();
  /* 104630ae add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104630b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104630b4 jne 0x104630b7 */
  if (!C.zf) goto L_104630b7;
  /* 104630b6 int3  */
  x86_unimpl("int3 @ 0x104630b6");
L_104630b7:;
  /* 104630b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104630b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104630bb jne 0x10463097 */
  if (!C.zf) goto L_10463097;
L_104630bd:;
  /* 104630bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104630bf jmp 0x104632ec */
  goto L_104632ec;
L_104630c4:;
  /* 104630c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104630c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104630cd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104630d0 je 0x104630e6 */
  if (C.zf) goto L_104630e6;
  /* 104630d2 mov edx, dword ptr [0x1048ca84] */
  EDX = (r32((uint32_t)(0x1048ca84)));
  /* 104630d8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104630db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104630dd jne 0x104630e6 */
  if (!C.zf) goto L_104630e6;
  /* 104630df mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_104630e6:;
  /* 104630e6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104630ea ja 0x104630f7 */
  if ((!C.cf&&!C.zf)) goto L_104630f7;
  /* 104630ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104630ef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104630f2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104630f5 jbe 0x10463123 */
  if ((C.cf||C.zf)) goto L_10463123;
L_104630f7:;
  /* 104630f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104630fa push ecx */
  push32((uint32_t)(ECX));
  /* 104630fb push 0x10489478 */
  push32((uint32_t)(0x10489478u));
  /* 10463100 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463102 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463104 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463106 push 1 */
  push32((uint32_t)(0x1u));
  /* 10463108 call 0x10461fd0 */
  push32(0x1046310du); f_10461fd0();
  /* 1046310d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463110 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463113 jne 0x10463116 */
  if (!C.zf) goto L_10463116;
  /* 10463115 int3  */
  x86_unimpl("int3 @ 0x10463115");
L_10463116:;
  /* 10463116 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10463118 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046311a jne 0x104630f7 */
  if (!C.zf) goto L_104630f7;
  /* 1046311c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046311e jmp 0x104632ec */
  goto L_104632ec;
L_10463123:;
  /* 10463123 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10463126 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046312b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046312e je 0x10463170 */
  if (C.zf) goto L_10463170;
  /* 10463130 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463134 je 0x10463170 */
  if (C.zf) goto L_10463170;
  /* 10463136 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10463139 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1046313f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463142 je 0x10463170 */
  if (C.zf) goto L_10463170;
  /* 10463144 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463148 je 0x10463170 */
  if (C.zf) goto L_10463170;
L_1046314a:;
  /* 1046314a push 0x10489444 */
  push32((uint32_t)(0x10489444u));
  /* 1046314f push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 10463154 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463156 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463158 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046315a push 1 */
  push32((uint32_t)(0x1u));
  /* 1046315c call 0x10461fd0 */
  push32(0x10463161u); f_10461fd0();
  /* 10463161 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463164 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463167 jne 0x1046316a */
  if (!C.zf) goto L_1046316a;
  /* 10463169 int3  */
  x86_unimpl("int3 @ 0x10463169");
L_1046316a:;
  /* 1046316a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1046316c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046316e jne 0x1046314a */
  if (!C.zf) goto L_1046314a;
L_10463170:;
  /* 10463170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463173 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10463176 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10463179 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046317c push ecx */
  push32((uint32_t)(ECX));
  /* 1046317d call 0x10466d60 */
  push32(0x10463182u); f_10466d60();
  /* 10463182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463185 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10463188 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046318c jne 0x10463195 */
  if (!C.zf) goto L_10463195;
  /* 1046318e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10463190 jmp 0x104632ec */
  goto L_104632ec;
L_10463195:;
  /* 10463195 mov edx, dword ptr [0x1048ca88] */
  EDX = (r32((uint32_t)(0x1048ca88)));
  /* 1046319b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046319e mov dword ptr [0x1048ca88], edx */
  w32((uint32_t)(0x1048ca88), (EDX));
  /* 104631a4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104631a8 je 0x104631f3 */
  if (C.zf) goto L_104631f3;
  /* 104631aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104631ad mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104631b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104631b6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 104631bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104631c0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 104631c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104631ca mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 104631d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104631d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104631d7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 104631da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104631dd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 104631e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104631e7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 104631ee jmp 0x10463293 */
  goto L_10463293;
L_104631f3:;
  /* 104631f3 mov edx, dword ptr [0x1048e4c8] */
  EDX = (r32((uint32_t)(0x1048e4c8)));
  /* 104631f9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104631fc mov dword ptr [0x1048e4c8], edx */
  w32((uint32_t)(0x1048e4c8), (EDX));
  /* 10463202 mov eax, dword ptr [0x1048e4d0] */
  EAX = (r32((uint32_t)(0x1048e4d0)));
  /* 10463207 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046320a mov dword ptr [0x1048e4d0], eax */
  w32((uint32_t)(0x1048e4d0), (EAX));
  /* 1046320f mov ecx, dword ptr [0x1048e4d0] */
  ECX = (r32((uint32_t)(0x1048e4d0)));
  /* 10463215 cmp ecx, dword ptr [0x1048e4d4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048e4d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046321b jbe 0x10463229 */
  if ((C.cf||C.zf)) goto L_10463229;
  /* 1046321d mov edx, dword ptr [0x1048e4d0] */
  EDX = (r32((uint32_t)(0x1048e4d0)));
  /* 10463223 mov dword ptr [0x1048e4d4], edx */
  w32((uint32_t)(0x1048e4d4), (EDX));
L_10463229:;
  /* 10463229 cmp dword ptr [0x1048e4cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e4cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463230 je 0x1046323f */
  if (C.zf) goto L_1046323f;
  /* 10463232 mov eax, dword ptr [0x1048e4cc] */
  EAX = (r32((uint32_t)(0x1048e4cc)));
  /* 10463237 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046323a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1046323d jmp 0x10463248 */
  goto L_10463248;
L_1046323f:;
  /* 1046323f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463242 mov dword ptr [0x1048e4c4], edx */
  w32((uint32_t)(0x1048e4c4), (EDX));
L_10463248:;
  /* 10463248 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046324b mov ecx, dword ptr [0x1048e4cc] */
  ECX = (r32((uint32_t)(0x1048e4cc)));
  /* 10463251 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10463253 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463256 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1046325d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463260 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10463263 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10463266 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463269 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046326c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1046326f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463272 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463275 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10463278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046327b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046327e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10463281 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463284 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10463287 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1046328a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046328d mov dword ptr [0x1048e4cc], ecx */
  w32((uint32_t)(0x1048e4cc), (ECX));
L_10463293:;
  /* 10463293 push 4 */
  push32((uint32_t)(0x4u));
  /* 10463295 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10463297 mov dl, byte ptr [0x1048ca90] */
  DL = (r8((uint32_t)(0x1048ca90)));
  /* 1046329d push edx */
  push32((uint32_t)(EDX));
  /* 1046329e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104632a1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104632a4 push eax */
  push32((uint32_t)(EAX));
  /* 104632a5 call 0x10466c80 */
  push32(0x104632aau); f_10466c80();
  /* 104632aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104632ad push 4 */
  push32((uint32_t)(0x4u));
  /* 104632af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104632b1 mov cl, byte ptr [0x1048ca90] */
  CL = (r8((uint32_t)(0x1048ca90)));
  /* 104632b7 push ecx */
  push32((uint32_t)(ECX));
  /* 104632b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104632bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104632be lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 104632c2 push ecx */
  push32((uint32_t)(ECX));
  /* 104632c3 call 0x10466c80 */
  push32(0x104632c8u); f_10466c80();
  /* 104632c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104632cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104632ce push edx */
  push32((uint32_t)(EDX));
  /* 104632cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104632d1 mov al, byte ptr [0x1048ca92] */
  AL = (r8((uint32_t)(0x1048ca92)));
  /* 104632d6 push eax */
  push32((uint32_t)(EAX));
  /* 104632d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104632da add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104632dd push ecx */
  push32((uint32_t)(ECX));
  /* 104632de call 0x10466c80 */
  push32(0x104632e3u); f_10466c80();
  /* 104632e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104632e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104632e9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_104632ec:;
  /* 104632ec pop edi */
  EDI = (pop32());
  /* 104632ed pop esi */
  ESI = (pop32());
  /* 104632ee pop ebx */
  EBX = (pop32());
  /* 104632ef mov esp, ebp */
  ESP = (EBP);
  /* 104632f1 pop ebp */
  EBP = (pop32());
  /* 104632f2 ret  */
  ESPCHK(0x10462fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003300 @ 0x10463300 (27 bytes, 13 insns) */
void f_10463300(void) {
  FTRACE(0x10463300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10463300 push ebp */
  push32((uint32_t)(EBP));
  /* 10463301 mov ebp, esp */
  EBP = (ESP);
  /* 10463303 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463305 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463307 push 1 */
  push32((uint32_t)(0x1u));
  /* 10463309 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046330c push eax */
  push32((uint32_t)(EAX));
  /* 1046330d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463310 push ecx */
  push32((uint32_t)(ECX));
  /* 10463311 call 0x10463320 */
  push32(0x10463316u); f_10463320();
  /* 10463316 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463319 pop ebp */
  EBP = (pop32());
  /* 1046331a ret  */
  ESPCHK(0x10463300u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10463320 (96 bytes, 37 insns) */
void f_10463320(void) {
  FTRACE(0x10463320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10463320 push ebp */
  push32((uint32_t)(EBP));
  /* 10463321 mov ebp, esp */
  EBP = (ESP);
  /* 10463323 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10463326 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10463329 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046332d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10463330 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10463333 push ecx */
  push32((uint32_t)(ECX));
  /* 10463334 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10463337 push edx */
  push32((uint32_t)(EDX));
  /* 10463338 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046333b push eax */
  push32((uint32_t)(EAX));
  /* 1046333c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046333f push ecx */
  push32((uint32_t)(ECX));
  /* 10463340 call 0x10462f10 */
  push32(0x10463345u); f_10462f10();
  /* 10463345 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463348 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046334b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046334f je 0x10463379 */
  if (C.zf) goto L_10463379;
  /* 10463351 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10463354 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10463357 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046335a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046335d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10463360:;
  /* 10463360 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10463363 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463366 jae 0x10463379 */
  if (!C.cf) goto L_10463379;
  /* 10463368 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046336b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1046336e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10463371 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10463374 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10463377 jmp 0x10463360 */
  goto L_10463360;
L_10463379:;
  /* 10463379 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046337c mov esp, ebp */
  ESP = (EBP);
  /* 1046337e pop ebp */
  EBP = (pop32());
  /* 1046337f ret  */
  ESPCHK(0x10463320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003380 @ 0x10463380 (27 bytes, 13 insns) */
void f_10463380(void) {
  FTRACE(0x10463380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10463380 push ebp */
  push32((uint32_t)(EBP));
  /* 10463381 mov ebp, esp */
  EBP = (ESP);
  /* 10463383 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463385 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463387 push 1 */
  push32((uint32_t)(0x1u));
  /* 10463389 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046338c push eax */
  push32((uint32_t)(EAX));
  /* 1046338d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463390 push ecx */
  push32((uint32_t)(ECX));
  /* 10463391 call 0x104633a0 */
  push32(0x10463396u); f_104633a0();
  /* 10463396 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463399 pop ebp */
  EBP = (pop32());
  /* 1046339a ret  */
  ESPCHK(0x10463380u, _esp0);
  ESP += 4; return;
}

/* FUN_100033a0 @ 0x104633a0 (64 bytes, 27 insns) */
void f_104633a0(void) {
  FTRACE(0x104633a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104633a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104633a1 mov ebp, esp */
  EBP = (ESP);
  /* 104633a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104633a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 104633a6 call 0x10466910 */
  push32(0x104633abu); f_10466910();
  /* 104633ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104633ae push 1 */
  push32((uint32_t)(0x1u));
  /* 104633b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104633b3 push eax */
  push32((uint32_t)(EAX));
  /* 104633b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104633b7 push ecx */
  push32((uint32_t)(ECX));
  /* 104633b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104633bb push edx */
  push32((uint32_t)(EDX));
  /* 104633bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104633bf push eax */
  push32((uint32_t)(EAX));
  /* 104633c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104633c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104633c4 call 0x104633e0 */
  push32(0x104633c9u); f_104633e0();
  /* 104633c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104633cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104633cf push 9 */
  push32((uint32_t)(0x9u));
  /* 104633d1 call 0x104669b0 */
  push32(0x104633d6u); f_104669b0();
  /* 104633d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104633d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104633dc mov esp, ebp */
  ESP = (EBP);
  /* 104633de pop ebp */
  EBP = (pop32());
  /* 104633df ret  */
  ESPCHK(0x104633a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100033e0 @ 0x104633e0 (1297 bytes, 431 insns) */
void f_104633e0(void) {
  FTRACE(0x104633e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104633e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104633e1 mov ebp, esp */
  EBP = (ESP);
  /* 104633e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104633e6 push ebx */
  push32((uint32_t)(EBX));
  /* 104633e7 push esi */
  push32((uint32_t)(ESI));
  /* 104633e8 push edi */
  push32((uint32_t)(EDI));
  /* 104633e9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 104633f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104633f4 jne 0x10463413 */
  if (!C.zf) goto L_10463413;
  /* 104633f6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104633f9 push eax */
  push32((uint32_t)(EAX));
  /* 104633fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104633fd push ecx */
  push32((uint32_t)(ECX));
  /* 104633fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10463401 push edx */
  push32((uint32_t)(EDX));
  /* 10463402 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10463405 push eax */
  push32((uint32_t)(EAX));
  /* 10463406 call 0x10462f10 */
  push32(0x1046340bu); f_10462f10();
  /* 1046340b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046340e jmp 0x104638ea */
  goto L_104638ea;
L_10463413:;
  /* 10463413 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463417 je 0x10463436 */
  if (C.zf) goto L_10463436;
  /* 10463419 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046341d jne 0x10463436 */
  if (!C.zf) goto L_10463436;
  /* 1046341f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10463422 push ecx */
  push32((uint32_t)(ECX));
  /* 10463423 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463426 push edx */
  push32((uint32_t)(EDX));
  /* 10463427 call 0x104639a0 */
  push32(0x1046342cu); f_104639a0();
  /* 1046342c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046342f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10463431 jmp 0x104638ea */
  goto L_104638ea;
L_10463436:;
  /* 10463436 mov eax, dword ptr [0x1048ca84] */
  EAX = (r32((uint32_t)(0x1048ca84)));
  /* 1046343b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1046343e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463440 je 0x10463472 */
  if (C.zf) goto L_10463472;
L_10463442:;
  /* 10463442 call 0x104640b0 */
  push32(0x10463447u); f_104640b0();
  /* 10463447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463449 jne 0x1046346c */
  if (!C.zf) goto L_1046346c;
  /* 1046344b push 0x10489508 */
  push32((uint32_t)(0x10489508u));
  /* 10463450 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463452 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10463457 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 1046345c push 2 */
  push32((uint32_t)(0x2u));
  /* 1046345e call 0x10461fd0 */
  push32(0x10463463u); f_10461fd0();
  /* 10463463 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463466 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463469 jne 0x1046346c */
  if (!C.zf) goto L_1046346c;
  /* 1046346b int3  */
  x86_unimpl("int3 @ 0x1046346b");
L_1046346c:;
  /* 1046346c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046346e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10463470 jne 0x10463442 */
  if (!C.zf) goto L_10463442;
L_10463472:;
  /* 10463472 mov edx, dword ptr [0x1048ca88] */
  EDX = (r32((uint32_t)(0x1048ca88)));
  /* 10463478 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1046347b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046347e cmp eax, dword ptr [0x1048ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463484 jne 0x10463487 */
  if (!C.zf) goto L_10463487;
  /* 10463486 int3  */
  x86_unimpl("int3 @ 0x10463486");
L_10463487:;
  /* 10463487 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046348a push ecx */
  push32((uint32_t)(ECX));
  /* 1046348b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046348e push edx */
  push32((uint32_t)(EDX));
  /* 1046348f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10463492 push eax */
  push32((uint32_t)(EAX));
  /* 10463493 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10463496 push ecx */
  push32((uint32_t)(ECX));
  /* 10463497 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046349a push edx */
  push32((uint32_t)(EDX));
  /* 1046349b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046349e push eax */
  push32((uint32_t)(EAX));
  /* 1046349f push 2 */
  push32((uint32_t)(0x2u));
  /* 104634a1 call dword ptr [0x1048cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048cc90))), 0x104634a7u);
  /* 104634a7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104634aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104634ac jne 0x1046350c */
  if (!C.zf) goto L_1046350c;
  /* 104634ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104634b2 je 0x104634df */
  if (C.zf) goto L_104634df;
L_104634b4:;
  /* 104634b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104634b7 push ecx */
  push32((uint32_t)(ECX));
  /* 104634b8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104634bb push edx */
  push32((uint32_t)(EDX));
  /* 104634bc push 0x10489684 */
  push32((uint32_t)(0x10489684u));
  /* 104634c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104634c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104634c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104634c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104634c9 call 0x10461fd0 */
  push32(0x104634ceu); f_10461fd0();
  /* 104634ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104634d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104634d4 jne 0x104634d7 */
  if (!C.zf) goto L_104634d7;
  /* 104634d6 int3  */
  x86_unimpl("int3 @ 0x104634d6");
L_104634d7:;
  /* 104634d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104634d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104634db jne 0x104634b4 */
  if (!C.zf) goto L_104634b4;
  /* 104634dd jmp 0x10463505 */
  goto L_10463505;
L_104634df:;
  /* 104634df push 0x10489660 */
  push32((uint32_t)(0x10489660u));
  /* 104634e4 push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 104634e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104634eb push 0 */
  push32((uint32_t)(0x0u));
  /* 104634ed push 0 */
  push32((uint32_t)(0x0u));
  /* 104634ef push 0 */
  push32((uint32_t)(0x0u));
  /* 104634f1 call 0x10461fd0 */
  push32(0x104634f6u); f_10461fd0();
  /* 104634f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104634f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104634fc jne 0x104634ff */
  if (!C.zf) goto L_104634ff;
  /* 104634fe int3  */
  x86_unimpl("int3 @ 0x104634fe");
L_104634ff:;
  /* 104634ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10463501 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10463503 jne 0x104634df */
  if (!C.zf) goto L_104634df;
L_10463505:;
  /* 10463505 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10463507 jmp 0x104638ea */
  goto L_104638ea;
L_1046350c:;
  /* 1046350c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463510 jbe 0x1046353e */
  if ((C.cf||C.zf)) goto L_1046353e;
L_10463512:;
  /* 10463512 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10463515 push edx */
  push32((uint32_t)(EDX));
  /* 10463516 push 0x10489630 */
  push32((uint32_t)(0x10489630u));
  /* 1046351b push 0 */
  push32((uint32_t)(0x0u));
  /* 1046351d push 0 */
  push32((uint32_t)(0x0u));
  /* 1046351f push 0 */
  push32((uint32_t)(0x0u));
  /* 10463521 push 1 */
  push32((uint32_t)(0x1u));
  /* 10463523 call 0x10461fd0 */
  push32(0x10463528u); f_10461fd0();
  /* 10463528 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046352b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046352e jne 0x10463531 */
  if (!C.zf) goto L_10463531;
  /* 10463530 int3  */
  x86_unimpl("int3 @ 0x10463530");
L_10463531:;
  /* 10463531 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10463533 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463535 jne 0x10463512 */
  if (!C.zf) goto L_10463512;
  /* 10463537 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10463539 jmp 0x104638ea */
  goto L_104638ea;
L_1046353e:;
  /* 1046353e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463542 je 0x10463586 */
  if (C.zf) goto L_10463586;
  /* 10463544 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10463547 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1046354d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463550 je 0x10463586 */
  if (C.zf) goto L_10463586;
  /* 10463552 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10463555 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1046355b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046355e je 0x10463586 */
  if (C.zf) goto L_10463586;
L_10463560:;
  /* 10463560 push 0x10489444 */
  push32((uint32_t)(0x10489444u));
  /* 10463565 push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 1046356a push 0 */
  push32((uint32_t)(0x0u));
  /* 1046356c push 0 */
  push32((uint32_t)(0x0u));
  /* 1046356e push 0 */
  push32((uint32_t)(0x0u));
  /* 10463570 push 1 */
  push32((uint32_t)(0x1u));
  /* 10463572 call 0x10461fd0 */
  push32(0x10463577u); f_10461fd0();
  /* 10463577 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046357a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046357d jne 0x10463580 */
  if (!C.zf) goto L_10463580;
  /* 1046357f int3  */
  x86_unimpl("int3 @ 0x1046357f");
L_10463580:;
  /* 10463580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10463582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463584 jne 0x10463560 */
  if (!C.zf) goto L_10463560;
L_10463586:;
  /* 10463586 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463589 push ecx */
  push32((uint32_t)(ECX));
  /* 1046358a call 0x10464510 */
  push32(0x1046358fu); f_10464510();
  /* 1046358f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463592 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463594 jne 0x104635b7 */
  if (!C.zf) goto L_104635b7;
  /* 10463596 push 0x1048960c */
  push32((uint32_t)(0x1048960cu));
  /* 1046359b push 0 */
  push32((uint32_t)(0x0u));
  /* 1046359d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 104635a2 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 104635a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104635a9 call 0x10461fd0 */
  push32(0x104635aeu); f_10461fd0();
  /* 104635ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104635b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104635b4 jne 0x104635b7 */
  if (!C.zf) goto L_104635b7;
  /* 104635b6 int3  */
  x86_unimpl("int3 @ 0x104635b6");
L_104635b7:;
  /* 104635b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104635b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104635bb jne 0x10463586 */
  if (!C.zf) goto L_10463586;
  /* 104635bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104635c0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104635c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104635c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104635c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104635cd jne 0x104635d6 */
  if (!C.zf) goto L_104635d6;
  /* 104635cf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_104635d6:;
  /* 104635d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104635da je 0x1046361a */
  if (C.zf) goto L_1046361a;
L_104635dc:;
  /* 104635dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104635df cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104635e6 jne 0x104635f1 */
  if (!C.zf) goto L_104635f1;
  /* 104635e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104635eb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104635ef je 0x10463612 */
  if (C.zf) goto L_10463612;
L_104635f1:;
  /* 104635f1 push 0x104895c4 */
  push32((uint32_t)(0x104895c4u));
  /* 104635f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104635f8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 104635fd push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463602 push 2 */
  push32((uint32_t)(0x2u));
  /* 10463604 call 0x10461fd0 */
  push32(0x10463609u); f_10461fd0();
  /* 10463609 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046360c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046360f jne 0x10463612 */
  if (!C.zf) goto L_10463612;
  /* 10463611 int3  */
  x86_unimpl("int3 @ 0x10463611");
L_10463612:;
  /* 10463612 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10463614 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10463616 jne 0x104635dc */
  if (!C.zf) goto L_104635dc;
  /* 10463618 jmp 0x1046367e */
  goto L_1046367e;
L_1046361a:;
  /* 1046361a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046361d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10463620 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10463625 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463628 jne 0x1046363f */
  if (!C.zf) goto L_1046363f;
  /* 1046362a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046362d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10463633 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463636 jne 0x1046363f */
  if (!C.zf) goto L_1046363f;
  /* 10463638 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1046363f:;
  /* 1046363f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10463642 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10463645 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046364a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046364d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10463653 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463655 je 0x10463678 */
  if (C.zf) goto L_10463678;
  /* 10463657 push 0x10489588 */
  push32((uint32_t)(0x10489588u));
  /* 1046365c push 0 */
  push32((uint32_t)(0x0u));
  /* 1046365e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10463663 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463668 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046366a call 0x10461fd0 */
  push32(0x1046366fu); f_10461fd0();
  /* 1046366f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463672 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463675 jne 0x10463678 */
  if (!C.zf) goto L_10463678;
  /* 10463677 int3  */
  x86_unimpl("int3 @ 0x10463677");
L_10463678:;
  /* 10463678 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1046367a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046367c jne 0x1046363f */
  if (!C.zf) goto L_1046363f;
L_1046367e:;
  /* 1046367e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463682 je 0x104636a9 */
  if (C.zf) goto L_104636a9;
  /* 10463684 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10463687 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046368a push eax */
  push32((uint32_t)(EAX));
  /* 1046368b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046368e push ecx */
  push32((uint32_t)(ECX));
  /* 1046368f call 0x10466e90 */
  push32(0x10463694u); f_10466e90();
  /* 10463694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463697 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1046369a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046369e jne 0x104636a7 */
  if (!C.zf) goto L_104636a7;
  /* 104636a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104636a2 jmp 0x104638ea */
  goto L_104638ea;
L_104636a7:;
  /* 104636a7 jmp 0x104636cc */
  goto L_104636cc;
L_104636a9:;
  /* 104636a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104636ac add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104636af push edx */
  push32((uint32_t)(EDX));
  /* 104636b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104636b3 push eax */
  push32((uint32_t)(EAX));
  /* 104636b4 call 0x10466de0 */
  push32(0x104636b9u); f_10466de0();
  /* 104636b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104636bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104636bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104636c3 jne 0x104636cc */
  if (!C.zf) goto L_104636cc;
  /* 104636c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104636c7 jmp 0x104638ea */
  goto L_104638ea;
L_104636cc:;
  /* 104636cc mov ecx, dword ptr [0x1048ca88] */
  ECX = (r32((uint32_t)(0x1048ca88)));
  /* 104636d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104636d5 mov dword ptr [0x1048ca88], ecx */
  w32((uint32_t)(0x1048ca88), (ECX));
  /* 104636db cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104636df jne 0x10463737 */
  if (!C.zf) goto L_10463737;
  /* 104636e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104636e4 mov eax, dword ptr [0x1048e4c8] */
  EAX = (r32((uint32_t)(0x1048e4c8)));
  /* 104636e9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104636ec mov dword ptr [0x1048e4c8], eax */
  w32((uint32_t)(0x1048e4c8), (EAX));
  /* 104636f1 mov ecx, dword ptr [0x1048e4c8] */
  ECX = (r32((uint32_t)(0x1048e4c8)));
  /* 104636f7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104636fa mov dword ptr [0x1048e4c8], ecx */
  w32((uint32_t)(0x1048e4c8), (ECX));
  /* 10463700 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10463703 mov eax, dword ptr [0x1048e4d0] */
  EAX = (r32((uint32_t)(0x1048e4d0)));
  /* 10463708 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046370b mov dword ptr [0x1048e4d0], eax */
  w32((uint32_t)(0x1048e4d0), (EAX));
  /* 10463710 mov ecx, dword ptr [0x1048e4d0] */
  ECX = (r32((uint32_t)(0x1048e4d0)));
  /* 10463716 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10463719 mov dword ptr [0x1048e4d0], ecx */
  w32((uint32_t)(0x1048e4d0), (ECX));
  /* 1046371f mov edx, dword ptr [0x1048e4d0] */
  EDX = (r32((uint32_t)(0x1048e4d0)));
  /* 10463725 cmp edx, dword ptr [0x1048e4d4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1048e4d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046372b jbe 0x10463737 */
  if ((C.cf||C.zf)) goto L_10463737;
  /* 1046372d mov eax, dword ptr [0x1048e4d0] */
  EAX = (r32((uint32_t)(0x1048e4d0)));
  /* 10463732 mov dword ptr [0x1048e4d4], eax */
  w32((uint32_t)(0x1048e4d4), (EAX));
L_10463737:;
  /* 10463737 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046373a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046373d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10463740 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10463743 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10463746 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463749 jbe 0x1046376f */
  if ((C.cf||C.zf)) goto L_1046376f;
  /* 1046374b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046374e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10463751 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10463754 push edx */
  push32((uint32_t)(EDX));
  /* 10463755 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10463757 mov al, byte ptr [0x1048ca92] */
  AL = (r8((uint32_t)(0x1048ca92)));
  /* 1046375c push eax */
  push32((uint32_t)(EAX));
  /* 1046375d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10463760 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463763 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10463766 push edx */
  push32((uint32_t)(EDX));
  /* 10463767 call 0x10466c80 */
  push32(0x1046376cu); f_10466c80();
  /* 1046376c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046376f:;
  /* 1046376f push 4 */
  push32((uint32_t)(0x4u));
  /* 10463771 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10463773 mov al, byte ptr [0x1048ca90] */
  AL = (r8((uint32_t)(0x1048ca90)));
  /* 10463778 push eax */
  push32((uint32_t)(EAX));
  /* 10463779 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046377c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046377f push ecx */
  push32((uint32_t)(ECX));
  /* 10463780 call 0x10466c80 */
  push32(0x10463785u); f_10466c80();
  /* 10463785 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463788 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046378c jne 0x104637a9 */
  if (!C.zf) goto L_104637a9;
  /* 1046378e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10463791 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10463794 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10463797 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046379a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046379d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 104637a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104637a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104637a6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_104637a9:;
  /* 104637a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104637ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104637af mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_104637b2:;
  /* 104637b2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104637b6 jne 0x104637e7 */
  if (!C.zf) goto L_104637e7;
  /* 104637b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104637bc jne 0x104637c6 */
  if (!C.zf) goto L_104637c6;
  /* 104637be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104637c1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104637c4 je 0x104637e7 */
  if (C.zf) goto L_104637e7;
L_104637c6:;
  /* 104637c6 push 0x10489554 */
  push32((uint32_t)(0x10489554u));
  /* 104637cb push 0 */
  push32((uint32_t)(0x0u));
  /* 104637cd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 104637d2 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 104637d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104637d9 call 0x10461fd0 */
  push32(0x104637deu); f_10461fd0();
  /* 104637de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104637e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104637e4 jne 0x104637e7 */
  if (!C.zf) goto L_104637e7;
  /* 104637e6 int3  */
  x86_unimpl("int3 @ 0x104637e6");
L_104637e7:;
  /* 104637e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104637e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104637eb jne 0x104637b2 */
  if (!C.zf) goto L_104637b2;
  /* 104637ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104637f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104637f3 je 0x104637fb */
  if (C.zf) goto L_104637fb;
  /* 104637f5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104637f9 je 0x10463803 */
  if (C.zf) goto L_10463803;
L_104637fb:;
  /* 104637fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104637fe jmp 0x104638ea */
  goto L_104638ea;
L_10463803:;
  /* 10463803 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10463806 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463809 je 0x1046381b */
  if (C.zf) goto L_1046381b;
  /* 1046380b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046380e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10463810 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10463813 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10463816 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10463819 jmp 0x10463857 */
  goto L_10463857;
L_1046381b:;
  /* 1046381b mov eax, dword ptr [0x1048e4c4] */
  EAX = (r32((uint32_t)(0x1048e4c4)));
  /* 10463820 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463823 je 0x10463846 */
  if (C.zf) goto L_10463846;
  /* 10463825 push 0x10489538 */
  push32((uint32_t)(0x10489538u));
  /* 1046382a push 0 */
  push32((uint32_t)(0x0u));
  /* 1046382c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10463831 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463836 push 2 */
  push32((uint32_t)(0x2u));
  /* 10463838 call 0x10461fd0 */
  push32(0x1046383du); f_10461fd0();
  /* 1046383d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463840 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463843 jne 0x10463846 */
  if (!C.zf) goto L_10463846;
  /* 10463845 int3  */
  x86_unimpl("int3 @ 0x10463845");
L_10463846:;
  /* 10463846 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10463848 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046384a jne 0x1046381b */
  if (!C.zf) goto L_1046381b;
  /* 1046384c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046384f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10463852 mov dword ptr [0x1048e4c4], eax */
  w32((uint32_t)(0x1048e4c4), (EAX));
L_10463857:;
  /* 10463857 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046385a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046385e je 0x1046386f */
  if (C.zf) goto L_1046386f;
  /* 10463860 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10463863 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10463866 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10463869 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1046386b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1046386d jmp 0x104638aa */
  goto L_104638aa;
L_1046386f:;
  /* 1046386f mov eax, dword ptr [0x1048e4cc] */
  EAX = (r32((uint32_t)(0x1048e4cc)));
  /* 10463874 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463877 je 0x1046389a */
  if (C.zf) goto L_1046389a;
  /* 10463879 push 0x1048951c */
  push32((uint32_t)(0x1048951cu));
  /* 1046387e push 0 */
  push32((uint32_t)(0x0u));
  /* 10463880 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10463885 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 1046388a push 2 */
  push32((uint32_t)(0x2u));
  /* 1046388c call 0x10461fd0 */
  push32(0x10463891u); f_10461fd0();
  /* 10463891 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463894 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463897 jne 0x1046389a */
  if (!C.zf) goto L_1046389a;
  /* 10463899 int3  */
  x86_unimpl("int3 @ 0x10463899");
L_1046389a:;
  /* 1046389a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046389c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046389e jne 0x1046386f */
  if (!C.zf) goto L_1046386f;
  /* 104638a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104638a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104638a5 mov dword ptr [0x1048e4cc], eax */
  w32((uint32_t)(0x1048e4cc), (EAX));
L_104638aa:;
  /* 104638aa cmp dword ptr [0x1048e4cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e4cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104638b1 je 0x104638c1 */
  if (C.zf) goto L_104638c1;
  /* 104638b3 mov ecx, dword ptr [0x1048e4cc] */
  ECX = (r32((uint32_t)(0x1048e4cc)));
  /* 104638b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104638bc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 104638bf jmp 0x104638c9 */
  goto L_104638c9;
L_104638c1:;
  /* 104638c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104638c4 mov dword ptr [0x1048e4c4], eax */
  w32((uint32_t)(0x1048e4c4), (EAX));
L_104638c9:;
  /* 104638c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104638cc mov edx, dword ptr [0x1048e4cc] */
  EDX = (r32((uint32_t)(0x1048e4cc)));
  /* 104638d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104638d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104638d7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 104638de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104638e1 mov dword ptr [0x1048e4cc], ecx */
  w32((uint32_t)(0x1048e4cc), (ECX));
  /* 104638e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104638ea:;
  /* 104638ea pop edi */
  EDI = (pop32());
  /* 104638eb pop esi */
  ESI = (pop32());
  /* 104638ec pop ebx */
  EBX = (pop32());
  /* 104638ed mov esp, ebp */
  ESP = (EBP);
  /* 104638ef pop ebp */
  EBP = (pop32());
  /* 104638f0 ret  */
  ESPCHK(0x104633e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003900 @ 0x10463900 (27 bytes, 13 insns) */
void f_10463900(void) {
  FTRACE(0x10463900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10463900 push ebp */
  push32((uint32_t)(EBP));
  /* 10463901 mov ebp, esp */
  EBP = (ESP);
  /* 10463903 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463905 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463907 push 1 */
  push32((uint32_t)(0x1u));
  /* 10463909 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046390c push eax */
  push32((uint32_t)(EAX));
  /* 1046390d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463910 push ecx */
  push32((uint32_t)(ECX));
  /* 10463911 call 0x10463920 */
  push32(0x10463916u); f_10463920();
  /* 10463916 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463919 pop ebp */
  EBP = (pop32());
  /* 1046391a ret  */
  ESPCHK(0x10463900u, _esp0);
  ESP += 4; return;
}

/* FUN_10003920 @ 0x10463920 (64 bytes, 27 insns) */
void f_10463920(void) {
  FTRACE(0x10463920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10463920 push ebp */
  push32((uint32_t)(EBP));
  /* 10463921 mov ebp, esp */
  EBP = (ESP);
  /* 10463923 push ecx */
  push32((uint32_t)(ECX));
  /* 10463924 push 9 */
  push32((uint32_t)(0x9u));
  /* 10463926 call 0x10466910 */
  push32(0x1046392bu); f_10466910();
  /* 1046392b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046392e push 0 */
  push32((uint32_t)(0x0u));
  /* 10463930 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10463933 push eax */
  push32((uint32_t)(EAX));
  /* 10463934 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10463937 push ecx */
  push32((uint32_t)(ECX));
  /* 10463938 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046393b push edx */
  push32((uint32_t)(EDX));
  /* 1046393c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046393f push eax */
  push32((uint32_t)(EAX));
  /* 10463940 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463943 push ecx */
  push32((uint32_t)(ECX));
  /* 10463944 call 0x104633e0 */
  push32(0x10463949u); f_104633e0();
  /* 10463949 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046394c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046394f push 9 */
  push32((uint32_t)(0x9u));
  /* 10463951 call 0x104669b0 */
  push32(0x10463956u); f_104669b0();
  /* 10463956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046395c mov esp, ebp */
  ESP = (EBP);
  /* 1046395e pop ebp */
  EBP = (pop32());
  /* 1046395f ret  */
  ESPCHK(0x10463920u, _esp0);
  ESP += 4; return;
}

/* FUN_10003960 @ 0x10463960 (19 bytes, 9 insns) */
void f_10463960(void) {
  FTRACE(0x10463960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10463960 push ebp */
  push32((uint32_t)(EBP));
  /* 10463961 mov ebp, esp */
  EBP = (ESP);
  /* 10463963 push 1 */
  push32((uint32_t)(0x1u));
  /* 10463965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463968 push eax */
  push32((uint32_t)(EAX));
  /* 10463969 call 0x104639a0 */
  push32(0x1046396eu); f_104639a0();
  /* 1046396e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463971 pop ebp */
  EBP = (pop32());
  /* 10463972 ret  */
  ESPCHK(0x10463960u, _esp0);
  ESP += 4; return;
}

/* FUN_10003980 @ 0x10463980 (19 bytes, 9 insns) */
void f_10463980(void) {
  FTRACE(0x10463980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10463980 push ebp */
  push32((uint32_t)(EBP));
  /* 10463981 mov ebp, esp */
  EBP = (ESP);
  /* 10463983 push 1 */
  push32((uint32_t)(0x1u));
  /* 10463985 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463988 push eax */
  push32((uint32_t)(EAX));
  /* 10463989 call 0x104639d0 */
  push32(0x1046398eu); f_104639d0();
  /* 1046398e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463991 pop ebp */
  EBP = (pop32());
  /* 10463992 ret  */
  ESPCHK(0x10463980u, _esp0);
  ESP += 4; return;
}

/* FUN_100039a0 @ 0x104639a0 (41 bytes, 16 insns) */
void f_104639a0(void) {
  FTRACE(0x104639a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104639a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104639a1 mov ebp, esp */
  EBP = (ESP);
  /* 104639a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 104639a5 call 0x10466910 */
  push32(0x104639aau); f_10466910();
  /* 104639aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104639ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104639b0 push eax */
  push32((uint32_t)(EAX));
  /* 104639b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104639b4 push ecx */
  push32((uint32_t)(ECX));
  /* 104639b5 call 0x104639d0 */
  push32(0x104639bau); f_104639d0();
  /* 104639ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104639bd push 9 */
  push32((uint32_t)(0x9u));
  /* 104639bf call 0x104669b0 */
  push32(0x104639c4u); f_104669b0();
  /* 104639c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104639c7 pop ebp */
  EBP = (pop32());
  /* 104639c8 ret  */
  ESPCHK(0x104639a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039d0 @ 0x104639d0 (1004 bytes, 342 insns) */
void f_104639d0(void) {
  FTRACE(0x104639d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104639d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104639d1 mov ebp, esp */
  EBP = (ESP);
  /* 104639d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104639d4 push ebx */
  push32((uint32_t)(EBX));
  /* 104639d5 push esi */
  push32((uint32_t)(ESI));
  /* 104639d6 push edi */
  push32((uint32_t)(EDI));
  /* 104639d7 mov eax, dword ptr [0x1048ca84] */
  EAX = (r32((uint32_t)(0x1048ca84)));
  /* 104639dc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104639df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104639e1 je 0x10463a13 */
  if (C.zf) goto L_10463a13;
L_104639e3:;
  /* 104639e3 call 0x104640b0 */
  push32(0x104639e8u); f_104640b0();
  /* 104639e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104639ea jne 0x10463a0d */
  if (!C.zf) goto L_10463a0d;
  /* 104639ec push 0x10489508 */
  push32((uint32_t)(0x10489508u));
  /* 104639f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104639f3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 104639f8 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 104639fd push 2 */
  push32((uint32_t)(0x2u));
  /* 104639ff call 0x10461fd0 */
  push32(0x10463a04u); f_10461fd0();
  /* 10463a04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463a07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463a0a jne 0x10463a0d */
  if (!C.zf) goto L_10463a0d;
  /* 10463a0c int3  */
  x86_unimpl("int3 @ 0x10463a0c");
L_10463a0d:;
  /* 10463a0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10463a0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10463a11 jne 0x104639e3 */
  if (!C.zf) goto L_104639e3;
L_10463a13:;
  /* 10463a13 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463a17 jne 0x10463a1e */
  if (!C.zf) goto L_10463a1e;
  /* 10463a19 jmp 0x10463db5 */
  goto L_10463db5;
L_10463a1e:;
  /* 10463a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10463a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463a24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10463a27 push edx */
  push32((uint32_t)(EDX));
  /* 10463a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463a2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463a2d push eax */
  push32((uint32_t)(EAX));
  /* 10463a2e push 3 */
  push32((uint32_t)(0x3u));
  /* 10463a30 call dword ptr [0x1048cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048cc90))), 0x10463a36u);
  /* 10463a36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463a3b jne 0x10463a68 */
  if (!C.zf) goto L_10463a68;
L_10463a3d:;
  /* 10463a3d push 0x104897cc */
  push32((uint32_t)(0x104897ccu));
  /* 10463a42 push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 10463a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10463a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10463a4f call 0x10461fd0 */
  push32(0x10463a54u); f_10461fd0();
  /* 10463a54 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463a57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463a5a jne 0x10463a5d */
  if (!C.zf) goto L_10463a5d;
  /* 10463a5c int3  */
  x86_unimpl("int3 @ 0x10463a5c");
L_10463a5d:;
  /* 10463a5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10463a5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10463a61 jne 0x10463a3d */
  if (!C.zf) goto L_10463a3d;
  /* 10463a63 jmp 0x10463db5 */
  goto L_10463db5;
L_10463a68:;
  /* 10463a68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463a6b push edx */
  push32((uint32_t)(EDX));
  /* 10463a6c call 0x10464510 */
  push32(0x10463a71u); f_10464510();
  /* 10463a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463a76 jne 0x10463a99 */
  if (!C.zf) goto L_10463a99;
  /* 10463a78 push 0x1048960c */
  push32((uint32_t)(0x1048960cu));
  /* 10463a7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10463a7f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10463a84 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463a89 push 2 */
  push32((uint32_t)(0x2u));
  /* 10463a8b call 0x10461fd0 */
  push32(0x10463a90u); f_10461fd0();
  /* 10463a90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463a93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463a96 jne 0x10463a99 */
  if (!C.zf) goto L_10463a99;
  /* 10463a98 int3  */
  x86_unimpl("int3 @ 0x10463a98");
L_10463a99:;
  /* 10463a99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10463a9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463a9d jne 0x10463a68 */
  if (!C.zf) goto L_10463a68;
  /* 10463a9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463aa2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10463aa5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10463aa8:;
  /* 10463aa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463aab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10463aae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10463ab3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463ab6 je 0x10463afb */
  if (C.zf) goto L_10463afb;
  /* 10463ab8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463abb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463abf je 0x10463afb */
  if (C.zf) goto L_10463afb;
  /* 10463ac1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463ac4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10463ac7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10463acc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463acf je 0x10463afb */
  if (C.zf) goto L_10463afb;
  /* 10463ad1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463ad4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463ad8 je 0x10463afb */
  if (C.zf) goto L_10463afb;
  /* 10463ada push 0x104897a4 */
  push32((uint32_t)(0x104897a4u));
  /* 10463adf push 0 */
  push32((uint32_t)(0x0u));
  /* 10463ae1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10463ae6 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463aeb push 2 */
  push32((uint32_t)(0x2u));
  /* 10463aed call 0x10461fd0 */
  push32(0x10463af2u); f_10461fd0();
  /* 10463af2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463af5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463af8 jne 0x10463afb */
  if (!C.zf) goto L_10463afb;
  /* 10463afa int3  */
  x86_unimpl("int3 @ 0x10463afa");
L_10463afb:;
  /* 10463afb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10463afd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10463aff jne 0x10463aa8 */
  if (!C.zf) goto L_10463aa8;
  /* 10463b01 mov eax, dword ptr [0x1048ca84] */
  EAX = (r32((uint32_t)(0x1048ca84)));
  /* 10463b06 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10463b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463b0b jne 0x10463bd6 */
  if (!C.zf) goto L_10463bd6;
  /* 10463b11 push 4 */
  push32((uint32_t)(0x4u));
  /* 10463b13 mov cl, byte ptr [0x1048ca90] */
  CL = (r8((uint32_t)(0x1048ca90)));
  /* 10463b19 push ecx */
  push32((uint32_t)(ECX));
  /* 10463b1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463b1d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10463b20 push edx */
  push32((uint32_t)(EDX));
  /* 10463b21 call 0x10464020 */
  push32(0x10463b26u); f_10464020();
  /* 10463b26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463b2b jne 0x10463b70 */
  if (!C.zf) goto L_10463b70;
L_10463b2d:;
  /* 10463b2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463b30 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10463b33 push eax */
  push32((uint32_t)(EAX));
  /* 10463b34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463b37 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10463b3a push edx */
  push32((uint32_t)(EDX));
  /* 10463b3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463b3e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10463b41 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10463b47 mov edx, dword ptr [ecx*4 + 0x1048ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1048ca94)));
  /* 10463b4e push edx */
  push32((uint32_t)(EDX));
  /* 10463b4f push 0x10489778 */
  push32((uint32_t)(0x10489778u));
  /* 10463b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463b58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463b5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10463b5c call 0x10461fd0 */
  push32(0x10463b61u); f_10461fd0();
  /* 10463b61 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463b64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463b67 jne 0x10463b6a */
  if (!C.zf) goto L_10463b6a;
  /* 10463b69 int3  */
  x86_unimpl("int3 @ 0x10463b69");
L_10463b6a:;
  /* 10463b6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10463b6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463b6e jne 0x10463b2d */
  if (!C.zf) goto L_10463b2d;
L_10463b70:;
  /* 10463b70 push 4 */
  push32((uint32_t)(0x4u));
  /* 10463b72 mov cl, byte ptr [0x1048ca90] */
  CL = (r8((uint32_t)(0x1048ca90)));
  /* 10463b78 push ecx */
  push32((uint32_t)(ECX));
  /* 10463b79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463b7c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10463b7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463b82 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10463b86 push edx */
  push32((uint32_t)(EDX));
  /* 10463b87 call 0x10464020 */
  push32(0x10463b8cu); f_10464020();
  /* 10463b8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463b8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463b91 jne 0x10463bd6 */
  if (!C.zf) goto L_10463bd6;
L_10463b93:;
  /* 10463b93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463b96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10463b99 push eax */
  push32((uint32_t)(EAX));
  /* 10463b9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463b9d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10463ba0 push edx */
  push32((uint32_t)(EDX));
  /* 10463ba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463ba4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10463ba7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10463bad mov edx, dword ptr [ecx*4 + 0x1048ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1048ca94)));
  /* 10463bb4 push edx */
  push32((uint32_t)(EDX));
  /* 10463bb5 push 0x1048974c */
  push32((uint32_t)(0x1048974cu));
  /* 10463bba push 0 */
  push32((uint32_t)(0x0u));
  /* 10463bbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10463bbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10463bc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10463bc2 call 0x10461fd0 */
  push32(0x10463bc7u); f_10461fd0();
  /* 10463bc7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463bca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463bcd jne 0x10463bd0 */
  if (!C.zf) goto L_10463bd0;
  /* 10463bcf int3  */
  x86_unimpl("int3 @ 0x10463bcf");
L_10463bd0:;
  /* 10463bd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10463bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463bd4 jne 0x10463b93 */
  if (!C.zf) goto L_10463b93;
L_10463bd6:;
  /* 10463bd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463bd9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463bdd jne 0x10463c4b */
  if (!C.zf) goto L_10463c4b;
L_10463bdf:;
  /* 10463bdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463be2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463be9 jne 0x10463bf4 */
  if (!C.zf) goto L_10463bf4;
  /* 10463beb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463bee cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463bf2 je 0x10463c15 */
  if (C.zf) goto L_10463c15;
L_10463bf4:;
  /* 10463bf4 push 0x1048970c */
  push32((uint32_t)(0x1048970cu));
  /* 10463bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463bfb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10463c00 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463c05 push 2 */
  push32((uint32_t)(0x2u));
  /* 10463c07 call 0x10461fd0 */
  push32(0x10463c0cu); f_10461fd0();
  /* 10463c0c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463c0f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463c12 jne 0x10463c15 */
  if (!C.zf) goto L_10463c15;
  /* 10463c14 int3  */
  x86_unimpl("int3 @ 0x10463c14");
L_10463c15:;
  /* 10463c15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10463c17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10463c19 jne 0x10463bdf */
  if (!C.zf) goto L_10463bdf;
  /* 10463c1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463c1e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10463c21 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10463c24 push eax */
  push32((uint32_t)(EAX));
  /* 10463c25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10463c27 mov cl, byte ptr [0x1048ca91] */
  CL = (r8((uint32_t)(0x1048ca91)));
  /* 10463c2d push ecx */
  push32((uint32_t)(ECX));
  /* 10463c2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463c31 push edx */
  push32((uint32_t)(EDX));
  /* 10463c32 call 0x10466c80 */
  push32(0x10463c37u); f_10466c80();
  /* 10463c37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463c3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463c3d push eax */
  push32((uint32_t)(EAX));
  /* 10463c3e call 0x10467080 */
  push32(0x10463c43u); f_10467080();
  /* 10463c43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463c46 jmp 0x10463db5 */
  goto L_10463db5;
L_10463c4b:;
  /* 10463c4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463c4e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463c52 jne 0x10463c61 */
  if (!C.zf) goto L_10463c61;
  /* 10463c54 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463c58 jne 0x10463c61 */
  if (!C.zf) goto L_10463c61;
  /* 10463c5a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10463c61:;
  /* 10463c61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463c64 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10463c67 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463c6a je 0x10463c8d */
  if (C.zf) goto L_10463c8d;
  /* 10463c6c push 0x104896ec */
  push32((uint32_t)(0x104896ecu));
  /* 10463c71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463c73 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10463c78 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10463c7f call 0x10461fd0 */
  push32(0x10463c84u); f_10461fd0();
  /* 10463c84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463c87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463c8a jne 0x10463c8d */
  if (!C.zf) goto L_10463c8d;
  /* 10463c8c int3  */
  x86_unimpl("int3 @ 0x10463c8c");
L_10463c8d:;
  /* 10463c8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10463c8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10463c91 jne 0x10463c61 */
  if (!C.zf) goto L_10463c61;
  /* 10463c93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463c96 mov eax, dword ptr [0x1048e4d0] */
  EAX = (r32((uint32_t)(0x1048e4d0)));
  /* 10463c9b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10463c9e mov dword ptr [0x1048e4d0], eax */
  w32((uint32_t)(0x1048e4d0), (EAX));
  /* 10463ca3 mov ecx, dword ptr [0x1048ca84] */
  ECX = (r32((uint32_t)(0x1048ca84)));
  /* 10463ca9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10463cac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10463cae jne 0x10463d8c */
  if (!C.zf) goto L_10463d8c;
  /* 10463cb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463cb7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463cba je 0x10463ccc */
  if (C.zf) goto L_10463ccc;
  /* 10463cbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463cbf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10463cc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463cc4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10463cc7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10463cca jmp 0x10463d0a */
  goto L_10463d0a;
L_10463ccc:;
  /* 10463ccc mov ecx, dword ptr [0x1048e4c4] */
  ECX = (r32((uint32_t)(0x1048e4c4)));
  /* 10463cd2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463cd5 je 0x10463cf8 */
  if (C.zf) goto L_10463cf8;
  /* 10463cd7 push 0x104896d4 */
  push32((uint32_t)(0x104896d4u));
  /* 10463cdc push 0 */
  push32((uint32_t)(0x0u));
  /* 10463cde push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10463ce3 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463ce8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10463cea call 0x10461fd0 */
  push32(0x10463cefu); f_10461fd0();
  /* 10463cef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463cf2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463cf5 jne 0x10463cf8 */
  if (!C.zf) goto L_10463cf8;
  /* 10463cf7 int3  */
  x86_unimpl("int3 @ 0x10463cf7");
L_10463cf8:;
  /* 10463cf8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10463cfa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10463cfc jne 0x10463ccc */
  if (!C.zf) goto L_10463ccc;
  /* 10463cfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463d01 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10463d04 mov dword ptr [0x1048e4c4], ecx */
  w32((uint32_t)(0x1048e4c4), (ECX));
L_10463d0a:;
  /* 10463d0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463d0d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463d11 je 0x10463d22 */
  if (C.zf) goto L_10463d22;
  /* 10463d13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463d16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10463d19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463d1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10463d1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10463d20 jmp 0x10463d5f */
  goto L_10463d5f;
L_10463d22:;
  /* 10463d22 mov ecx, dword ptr [0x1048e4cc] */
  ECX = (r32((uint32_t)(0x1048e4cc)));
  /* 10463d28 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463d2b je 0x10463d4e */
  if (C.zf) goto L_10463d4e;
  /* 10463d2d push 0x104896bc */
  push32((uint32_t)(0x104896bcu));
  /* 10463d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463d34 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10463d39 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463d3e push 2 */
  push32((uint32_t)(0x2u));
  /* 10463d40 call 0x10461fd0 */
  push32(0x10463d45u); f_10461fd0();
  /* 10463d45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463d48 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463d4b jne 0x10463d4e */
  if (!C.zf) goto L_10463d4e;
  /* 10463d4d int3  */
  x86_unimpl("int3 @ 0x10463d4d");
L_10463d4e:;
  /* 10463d4e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10463d50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10463d52 jne 0x10463d22 */
  if (!C.zf) goto L_10463d22;
  /* 10463d54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463d57 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10463d59 mov dword ptr [0x1048e4cc], ecx */
  w32((uint32_t)(0x1048e4cc), (ECX));
L_10463d5f:;
  /* 10463d5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463d62 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10463d65 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10463d68 push eax */
  push32((uint32_t)(EAX));
  /* 10463d69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10463d6b mov cl, byte ptr [0x1048ca91] */
  CL = (r8((uint32_t)(0x1048ca91)));
  /* 10463d71 push ecx */
  push32((uint32_t)(ECX));
  /* 10463d72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463d75 push edx */
  push32((uint32_t)(EDX));
  /* 10463d76 call 0x10466c80 */
  push32(0x10463d7bu); f_10466c80();
  /* 10463d7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463d7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463d81 push eax */
  push32((uint32_t)(EAX));
  /* 10463d82 call 0x10467080 */
  push32(0x10463d87u); f_10467080();
  /* 10463d87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463d8a jmp 0x10463db5 */
  goto L_10463db5;
L_10463d8c:;
  /* 10463d8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463d8f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10463d96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463d99 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10463d9c push eax */
  push32((uint32_t)(EAX));
  /* 10463d9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10463d9f mov cl, byte ptr [0x1048ca91] */
  CL = (r8((uint32_t)(0x1048ca91)));
  /* 10463da5 push ecx */
  push32((uint32_t)(ECX));
  /* 10463da6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463da9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10463dac push edx */
  push32((uint32_t)(EDX));
  /* 10463dad call 0x10466c80 */
  push32(0x10463db2u); f_10466c80();
  /* 10463db2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10463db5:;
  /* 10463db5 pop edi */
  EDI = (pop32());
  /* 10463db6 pop esi */
  ESI = (pop32());
  /* 10463db7 pop ebx */
  EBX = (pop32());
  /* 10463db8 mov esp, ebp */
  ESP = (EBP);
  /* 10463dba pop ebp */
  EBP = (pop32());
  /* 10463dbb ret  */
  ESPCHK(0x104639d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dc0 @ 0x10463dc0 (19 bytes, 9 insns) */
void f_10463dc0(void) {
  FTRACE(0x10463dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10463dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10463dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10463dc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10463dc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463dc8 push eax */
  push32((uint32_t)(EAX));
  /* 10463dc9 call 0x10463de0 */
  push32(0x10463dceu); f_10463de0();
  /* 10463dce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463dd1 pop ebp */
  EBP = (pop32());
  /* 10463dd2 ret  */
  ESPCHK(0x10463dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003de0 @ 0x10463de0 (342 bytes, 119 insns) */
void f_10463de0(void) {
  FTRACE(0x10463de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10463de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10463de1 mov ebp, esp */
  EBP = (ESP);
  /* 10463de3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10463de6 push ebx */
  push32((uint32_t)(EBX));
  /* 10463de7 push esi */
  push32((uint32_t)(ESI));
  /* 10463de8 push edi */
  push32((uint32_t)(EDI));
  /* 10463de9 mov eax, dword ptr [0x1048ca84] */
  EAX = (r32((uint32_t)(0x1048ca84)));
  /* 10463dee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10463df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463df3 je 0x10463e25 */
  if (C.zf) goto L_10463e25;
L_10463df5:;
  /* 10463df5 call 0x104640b0 */
  push32(0x10463dfau); f_104640b0();
  /* 10463dfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463dfc jne 0x10463e1f */
  if (!C.zf) goto L_10463e1f;
  /* 10463dfe push 0x10489508 */
  push32((uint32_t)(0x10489508u));
  /* 10463e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463e05 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10463e0a push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463e0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10463e11 call 0x10461fd0 */
  push32(0x10463e16u); f_10461fd0();
  /* 10463e16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463e19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463e1c jne 0x10463e1f */
  if (!C.zf) goto L_10463e1f;
  /* 10463e1e int3  */
  x86_unimpl("int3 @ 0x10463e1e");
L_10463e1f:;
  /* 10463e1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10463e21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10463e23 jne 0x10463df5 */
  if (!C.zf) goto L_10463df5;
L_10463e25:;
  /* 10463e25 push 9 */
  push32((uint32_t)(0x9u));
  /* 10463e27 call 0x10466910 */
  push32(0x10463e2cu); f_10466910();
  /* 10463e2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10463e2f:;
  /* 10463e2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463e32 push edx */
  push32((uint32_t)(EDX));
  /* 10463e33 call 0x10464510 */
  push32(0x10463e38u); f_10464510();
  /* 10463e38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463e3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463e3d jne 0x10463e60 */
  if (!C.zf) goto L_10463e60;
  /* 10463e3f push 0x1048960c */
  push32((uint32_t)(0x1048960cu));
  /* 10463e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463e46 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10463e4b push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463e50 push 2 */
  push32((uint32_t)(0x2u));
  /* 10463e52 call 0x10461fd0 */
  push32(0x10463e57u); f_10461fd0();
  /* 10463e57 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463e5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463e5d jne 0x10463e60 */
  if (!C.zf) goto L_10463e60;
  /* 10463e5f int3  */
  x86_unimpl("int3 @ 0x10463e5f");
L_10463e60:;
  /* 10463e60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10463e62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463e64 jne 0x10463e2f */
  if (!C.zf) goto L_10463e2f;
  /* 10463e66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463e69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10463e6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10463e6f:;
  /* 10463e6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10463e72 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10463e75 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10463e7a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463e7d je 0x10463ec2 */
  if (C.zf) goto L_10463ec2;
  /* 10463e7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10463e82 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463e86 je 0x10463ec2 */
  if (C.zf) goto L_10463ec2;
  /* 10463e88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10463e8b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10463e8e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10463e93 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463e96 je 0x10463ec2 */
  if (C.zf) goto L_10463ec2;
  /* 10463e98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10463e9b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463e9f je 0x10463ec2 */
  if (C.zf) goto L_10463ec2;
  /* 10463ea1 push 0x104897a4 */
  push32((uint32_t)(0x104897a4u));
  /* 10463ea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463ea8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10463ead push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463eb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10463eb4 call 0x10461fd0 */
  push32(0x10463eb9u); f_10461fd0();
  /* 10463eb9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463ebc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463ebf jne 0x10463ec2 */
  if (!C.zf) goto L_10463ec2;
  /* 10463ec1 int3  */
  x86_unimpl("int3 @ 0x10463ec1");
L_10463ec2:;
  /* 10463ec2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10463ec4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10463ec6 jne 0x10463e6f */
  if (!C.zf) goto L_10463e6f;
  /* 10463ec8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10463ecb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463ecf jne 0x10463ede */
  if (!C.zf) goto L_10463ede;
  /* 10463ed1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463ed5 jne 0x10463ede */
  if (!C.zf) goto L_10463ede;
  /* 10463ed7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10463ede:;
  /* 10463ede mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10463ee1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463ee5 je 0x10463f19 */
  if (C.zf) goto L_10463f19;
L_10463ee7:;
  /* 10463ee7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10463eea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10463eed cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463ef0 je 0x10463f13 */
  if (C.zf) goto L_10463f13;
  /* 10463ef2 push 0x104896ec */
  push32((uint32_t)(0x104896ecu));
  /* 10463ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463ef9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10463efe push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463f03 push 2 */
  push32((uint32_t)(0x2u));
  /* 10463f05 call 0x10461fd0 */
  push32(0x10463f0au); f_10461fd0();
  /* 10463f0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463f0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463f10 jne 0x10463f13 */
  if (!C.zf) goto L_10463f13;
  /* 10463f12 int3  */
  x86_unimpl("int3 @ 0x10463f12");
L_10463f13:;
  /* 10463f13 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10463f15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10463f17 jne 0x10463ee7 */
  if (!C.zf) goto L_10463ee7;
L_10463f19:;
  /* 10463f19 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10463f1c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10463f1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10463f22 push 9 */
  push32((uint32_t)(0x9u));
  /* 10463f24 call 0x104669b0 */
  push32(0x10463f29u); f_104669b0();
  /* 10463f29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463f2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463f2f pop edi */
  EDI = (pop32());
  /* 10463f30 pop esi */
  ESI = (pop32());
  /* 10463f31 pop ebx */
  EBX = (pop32());
  /* 10463f32 mov esp, ebp */
  ESP = (EBP);
  /* 10463f34 pop ebp */
  EBP = (pop32());
  /* 10463f35 ret  */
  ESPCHK(0x10463de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f40 @ 0x10463f40 (28 bytes, 11 insns) */
void f_10463f40(void) {
  FTRACE(0x10463f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10463f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10463f41 mov ebp, esp */
  EBP = (ESP);
  /* 10463f43 push ecx */
  push32((uint32_t)(ECX));
  /* 10463f44 mov eax, dword ptr [0x1048ca8c] */
  EAX = (r32((uint32_t)(0x1048ca8c)));
  /* 10463f49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10463f4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463f4f mov dword ptr [0x1048ca8c], ecx */
  w32((uint32_t)(0x1048ca8c), (ECX));
  /* 10463f55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463f58 mov esp, ebp */
  ESP = (EBP);
  /* 10463f5a pop ebp */
  EBP = (pop32());
  /* 10463f5b ret  */
  ESPCHK(0x10463f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f60 @ 0x10463f60 (157 bytes, 59 insns) */
void f_10463f60(void) {
  FTRACE(0x10463f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10463f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10463f61 mov ebp, esp */
  EBP = (ESP);
  /* 10463f63 push ecx */
  push32((uint32_t)(ECX));
  /* 10463f64 push ebx */
  push32((uint32_t)(EBX));
  /* 10463f65 push esi */
  push32((uint32_t)(ESI));
  /* 10463f66 push edi */
  push32((uint32_t)(EDI));
  /* 10463f67 push 9 */
  push32((uint32_t)(0x9u));
  /* 10463f69 call 0x10466910 */
  push32(0x10463f6eu); f_10466910();
  /* 10463f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463f71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463f74 push eax */
  push32((uint32_t)(EAX));
  /* 10463f75 call 0x10464510 */
  push32(0x10463f7au); f_10464510();
  /* 10463f7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10463f7f je 0x10463fec */
  if (C.zf) goto L_10463fec;
  /* 10463f81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10463f84 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10463f87 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10463f8a:;
  /* 10463f8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463f8d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10463f90 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10463f95 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463f98 je 0x10463fdd */
  if (C.zf) goto L_10463fdd;
  /* 10463f9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463f9d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463fa1 je 0x10463fdd */
  if (C.zf) goto L_10463fdd;
  /* 10463fa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463fa6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10463fa9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10463fae cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463fb1 je 0x10463fdd */
  if (C.zf) goto L_10463fdd;
  /* 10463fb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463fb6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463fba je 0x10463fdd */
  if (C.zf) goto L_10463fdd;
  /* 10463fbc push 0x104897a4 */
  push32((uint32_t)(0x104897a4u));
  /* 10463fc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10463fc3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10463fc8 push 0x104894fc */
  push32((uint32_t)(0x104894fcu));
  /* 10463fcd push 2 */
  push32((uint32_t)(0x2u));
  /* 10463fcf call 0x10461fd0 */
  push32(0x10463fd4u); f_10461fd0();
  /* 10463fd4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463fd7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10463fda jne 0x10463fdd */
  if (!C.zf) goto L_10463fdd;
  /* 10463fdc int3  */
  x86_unimpl("int3 @ 0x10463fdc");
L_10463fdd:;
  /* 10463fdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10463fdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10463fe1 jne 0x10463f8a */
  if (!C.zf) goto L_10463f8a;
  /* 10463fe3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10463fe6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10463fe9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10463fec:;
  /* 10463fec push 9 */
  push32((uint32_t)(0x9u));
  /* 10463fee call 0x104669b0 */
  push32(0x10463ff3u); f_104669b0();
  /* 10463ff3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10463ff6 pop edi */
  EDI = (pop32());
  /* 10463ff7 pop esi */
  ESI = (pop32());
  /* 10463ff8 pop ebx */
  EBX = (pop32());
  /* 10463ff9 mov esp, ebp */
  ESP = (EBP);
  /* 10463ffb pop ebp */
  EBP = (pop32());
  /* 10463ffc ret  */
  ESPCHK(0x10463f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004000 @ 0x10464000 (28 bytes, 11 insns) */
void f_10464000(void) {
  FTRACE(0x10464000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10464000 push ebp */
  push32((uint32_t)(EBP));
  /* 10464001 mov ebp, esp */
  EBP = (ESP);
  /* 10464003 push ecx */
  push32((uint32_t)(ECX));
  /* 10464004 mov eax, dword ptr [0x1048cc90] */
  EAX = (r32((uint32_t)(0x1048cc90)));
  /* 10464009 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046400c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046400f mov dword ptr [0x1048cc90], ecx */
  w32((uint32_t)(0x1048cc90), (ECX));
  /* 10464015 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464018 mov esp, ebp */
  ESP = (EBP);
  /* 1046401a pop ebp */
  EBP = (pop32());
  /* 1046401b ret  */
  ESPCHK(0x10464000u, _esp0);
  ESP += 4; return;
}

/* FUN_10004020 @ 0x10464020 (136 bytes, 55 insns) */
void f_10464020(void) {
  FTRACE(0x10464020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10464020 push ebp */
  push32((uint32_t)(EBP));
  /* 10464021 mov ebp, esp */
  EBP = (ESP);
  /* 10464023 push ecx */
  push32((uint32_t)(ECX));
  /* 10464024 push ebx */
  push32((uint32_t)(EBX));
  /* 10464025 push esi */
  push32((uint32_t)(ESI));
  /* 10464026 push edi */
  push32((uint32_t)(EDI));
  /* 10464027 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1046402e:;
  /* 1046402e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10464031 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10464034 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10464037 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1046403a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046403c je 0x1046409e */
  if (C.zf) goto L_1046409e;
  /* 1046403e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464041 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10464043 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10464045 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10464048 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1046404e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464051 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464054 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10464057 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464059 je 0x1046409c */
  if (C.zf) goto L_1046409c;
L_1046405b:;
  /* 1046405b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046405e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10464063 push eax */
  push32((uint32_t)(EAX));
  /* 10464064 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464067 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10464069 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1046406c push edx */
  push32((uint32_t)(EDX));
  /* 1046406d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464070 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10464073 push eax */
  push32((uint32_t)(EAX));
  /* 10464074 push 0x104897e8 */
  push32((uint32_t)(0x104897e8u));
  /* 10464079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046407b push 0 */
  push32((uint32_t)(0x0u));
  /* 1046407d push 0 */
  push32((uint32_t)(0x0u));
  /* 1046407f push 0 */
  push32((uint32_t)(0x0u));
  /* 10464081 call 0x10461fd0 */
  push32(0x10464086u); f_10461fd0();
  /* 10464086 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464089 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046408c jne 0x1046408f */
  if (!C.zf) goto L_1046408f;
  /* 1046408e int3  */
  x86_unimpl("int3 @ 0x1046408e");
L_1046408f:;
  /* 1046408f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10464091 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10464093 jne 0x1046405b */
  if (!C.zf) goto L_1046405b;
  /* 10464095 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1046409c:;
  /* 1046409c jmp 0x1046402e */
  goto L_1046402e;
L_1046409e:;
  /* 1046409e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104640a1 pop edi */
  EDI = (pop32());
  /* 104640a2 pop esi */
  ESI = (pop32());
  /* 104640a3 pop ebx */
  EBX = (pop32());
  /* 104640a4 mov esp, ebp */
  ESP = (EBP);
  /* 104640a6 pop ebp */
  EBP = (pop32());
  /* 104640a7 ret  */
  ESPCHK(0x10464020u, _esp0);
  ESP += 4; return;
}

/* FUN_100040b0 @ 0x104640b0 (234 bytes, 76 insns) [1 switch table(s)] */
void f_104640b0(void) {
  FTRACE(0x104640b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104640b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104640b1 mov ebp, esp */
  EBP = (ESP);
  /* 104640b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104640b6 push ebx */
  push32((uint32_t)(EBX));
  /* 104640b7 push esi */
  push32((uint32_t)(ESI));
  /* 104640b8 push edi */
  push32((uint32_t)(EDI));
  /* 104640b9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104640c0 mov eax, dword ptr [0x1048ca84] */
  EAX = (r32((uint32_t)(0x1048ca84)));
  /* 104640c5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 104640c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104640ca jne 0x104640d6 */
  if (!C.zf) goto L_104640d6;
  /* 104640cc mov eax, 1 */
  EAX = (0x1u);
  /* 104640d1 jmp 0x10464408 */
  jmp_ind(0x10464408u); return;
L_104640d6:;
  /* 104640d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 104640d8 call 0x10466910 */
  push32(0x104640ddu); f_10466910();
  /* 104640dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104640e0 call 0x104670f0 */
  push32(0x104640e5u); f_104670f0();
  /* 104640e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104640e8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104640ec je 0x104641f9 */
  if (C.zf) { jmp_ind(0x104641f9u); return; }
  /* 104640f2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104640f6 je 0x104641f9 */
  if (C.zf) { jmp_ind(0x104641f9u); return; }
  /* 104640fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104640ff mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10464102 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10464105 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464108 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1046410b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046410f ja 0x104641c2 */
  if ((!C.cf&&!C.zf)) { jmp_ind(0x104641c2u); return; }
  /* 10464115 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10464118 jmp dword ptr [eax*4 + 0x1046440f] */
  switch (EAX) {
    case 1: goto L_10464172;
    case 2: goto L_1046414a;
    case 3: goto L_1046411f;
    default: x86_unimpl("switch@0x10464118 out of table"); return;
  }
L_1046411f:;
  /* 1046411f push 0x1048993c */
  push32((uint32_t)(0x1048993cu));
  /* 10464124 push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 10464129 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046412b push 0 */
  push32((uint32_t)(0x0u));
  /* 1046412d push 0 */
  push32((uint32_t)(0x0u));
  /* 1046412f push 0 */
  push32((uint32_t)(0x0u));
  /* 10464131 call 0x10461fd0 */
  push32(0x10464136u); f_10461fd0();
  /* 10464136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464139 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046413c jne 0x1046413f */
  if (!C.zf) goto L_1046413f;
  /* 1046413e int3  */
  x86_unimpl("int3 @ 0x1046413e");
L_1046413f:;
  /* 1046413f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10464141 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10464143 jne 0x1046411f */
  if (!C.zf) goto L_1046411f;
  /* 10464145 jmp 0x104641e8 */
  jmp_ind(0x104641e8u); return;
L_1046414a:;
  /* 1046414a push 0x10489918 */
  push32((uint32_t)(0x10489918u));
  /* 1046414f push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 10464154 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464156 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464158 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046415a push 0 */
  push32((uint32_t)(0x0u));
  /* 1046415c call 0x10461fd0 */
  push32(0x10464161u); f_10461fd0();
  /* 10464161 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464164 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464167 jne 0x1046416a */
  if (!C.zf) goto L_1046416a;
  /* 10464169 int3  */
  x86_unimpl("int3 @ 0x10464169");
L_1046416a:;
  /* 1046416a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1046416c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046416e jne 0x1046414a */
  if (!C.zf) goto L_1046414a;
  /* 10464170 jmp 0x104641e8 */
  jmp_ind(0x104641e8u); return;
L_10464172:;
  /* 10464172 push 0x104898f4 */
  push32((uint32_t)(0x104898f4u));
  /* 10464177 push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 1046417c push 0 */
  push32((uint32_t)(0x0u));
  /* 1046417e push 0 */
  push32((uint32_t)(0x0u));
  /* 10464180 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464182 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464184 call 0x10461fd0 */
  push32(0x10464189u); f_10461fd0();
  /* 10464189 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046418c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046418f jne 0x10464192 */
  if (!C.zf) goto L_10464192;
  /* 10464191 int3  */
  x86_unimpl("int3 @ 0x10464191");
L_10464192:;
  /* 10464192 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10464194 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10464196 jne 0x10464172 */
  if (!C.zf) goto L_10464172;
  /* 10464198 jmp 0x104641e8 */
  jmp_ind(0x104641e8u); return;
}

/* caseD_fffffffa @ 0x1046419a (64 bytes, 223 insns) */
void f_1046419a(void) {
  FTRACE(0x1046419au);
  uint32_t _esp0 = ESP; (void)_esp0;
L_1046419a:;
  /* 1046419a push 0x104898d0 */
  push32((uint32_t)(0x104898d0u));
  /* 1046419f push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 104641a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104641a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104641a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104641aa push 0 */
  push32((uint32_t)(0x0u));
  /* 104641ac call 0x10461fd0 */
  push32(0x104641b1u); f_10461fd0();
  /* 104641b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104641b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104641b7 jne 0x104641ba */
  if (!C.zf) goto L_104641ba;
  /* 104641b9 int3  */
  x86_unimpl("int3 @ 0x104641b9");
L_104641ba:;
  /* 104641ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104641bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104641be jne 0x1046419a */
  if (!C.zf) goto L_1046419a;
  /* 104641c0 jmp 0x104641e8 */
  goto L_104641e8;
L_104641c2:;
  /* 104641c2 push 0x104898a4 */
  push32((uint32_t)(0x104898a4u));
  /* 104641c7 push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 104641cc push 0 */
  push32((uint32_t)(0x0u));
  /* 104641ce push 0 */
  push32((uint32_t)(0x0u));
  /* 104641d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104641d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104641d4 call 0x10461fd0 */
  push32(0x104641d9u); f_10461fd0();
  /* 104641d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104641dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104641df jne 0x104641e2 */
  if (!C.zf) goto L_104641e2;
  /* 104641e1 int3  */
  x86_unimpl("int3 @ 0x104641e1");
L_104641e2:;
  /* 104641e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104641e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104641e6 jne 0x104641c2 */
  if (!C.zf) goto L_104641c2;
L_104641e8:;
  /* 104641e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 104641ea call 0x104669b0 */
  push32(0x104641efu); f_104669b0();
  /* 104641ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104641f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104641f4 jmp 0x10464408 */
  goto L_10464408;
  /* 104641f9 mov eax, dword ptr [0x1048e4cc] */
  EAX = (r32((uint32_t)(0x1048e4cc)));
  /* 104641fe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10464201 jmp 0x1046420b */
  goto L_1046420b;
L_10464203:;
  /* 10464203 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464206 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10464208 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1046420b:;
  /* 1046420b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046420f je 0x104643fb */
  if (C.zf) goto L_104643fb;
  /* 10464215 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1046421c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046421f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10464222 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10464228 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046422b je 0x10464250 */
  if (C.zf) goto L_10464250;
  /* 1046422d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464230 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464234 je 0x10464250 */
  if (C.zf) goto L_10464250;
  /* 10464236 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464239 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1046423c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10464242 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464245 je 0x10464250 */
  if (C.zf) goto L_10464250;
  /* 10464247 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046424a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046424e jne 0x10464268 */
  if (!C.zf) goto L_10464268;
L_10464250:;
  /* 10464250 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464253 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10464256 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1046425c mov edx, dword ptr [ecx*4 + 0x1048ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1048ca94)));
  /* 10464263 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10464266 jmp 0x1046426f */
  goto L_1046426f;
L_10464268:;
  /* 10464268 mov dword ptr [ebp - 0x14], 0x1048989c */
  w32((uint32_t)(EBP + -0x14), (0x1048989cu));
L_1046426f:;
  /* 1046426f push 4 */
  push32((uint32_t)(0x4u));
  /* 10464271 mov al, byte ptr [0x1048ca90] */
  AL = (r8((uint32_t)(0x1048ca90)));
  /* 10464276 push eax */
  push32((uint32_t)(EAX));
  /* 10464277 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046427a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046427d push ecx */
  push32((uint32_t)(ECX));
  /* 1046427e call 0x10464020 */
  push32(0x10464283u); f_10464020();
  /* 10464283 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10464288 jne 0x104642c4 */
  if (!C.zf) goto L_104642c4;
L_1046428a:;
  /* 1046428a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046428d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464290 push edx */
  push32((uint32_t)(EDX));
  /* 10464291 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464294 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10464297 push ecx */
  push32((uint32_t)(ECX));
  /* 10464298 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046429b push edx */
  push32((uint32_t)(EDX));
  /* 1046429c push 0x10489778 */
  push32((uint32_t)(0x10489778u));
  /* 104642a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104642a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104642a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104642a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104642a9 call 0x10461fd0 */
  push32(0x104642aeu); f_10461fd0();
  /* 104642ae add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104642b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104642b4 jne 0x104642b7 */
  if (!C.zf) goto L_104642b7;
  /* 104642b6 int3  */
  x86_unimpl("int3 @ 0x104642b6");
L_104642b7:;
  /* 104642b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104642b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104642bb jne 0x1046428a */
  if (!C.zf) goto L_1046428a;
  /* 104642bd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_104642c4:;
  /* 104642c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 104642c6 mov cl, byte ptr [0x1048ca90] */
  CL = (r8((uint32_t)(0x1048ca90)));
  /* 104642cc push ecx */
  push32((uint32_t)(ECX));
  /* 104642cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104642d0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104642d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104642d6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 104642da push edx */
  push32((uint32_t)(EDX));
  /* 104642db call 0x10464020 */
  push32(0x104642e0u); f_10464020();
  /* 104642e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104642e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104642e5 jne 0x10464321 */
  if (!C.zf) goto L_10464321;
L_104642e7:;
  /* 104642e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104642ea add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104642ed push eax */
  push32((uint32_t)(EAX));
  /* 104642ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104642f1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104642f4 push edx */
  push32((uint32_t)(EDX));
  /* 104642f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104642f8 push eax */
  push32((uint32_t)(EAX));
  /* 104642f9 push 0x1048974c */
  push32((uint32_t)(0x1048974cu));
  /* 104642fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10464300 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464302 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464304 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464306 call 0x10461fd0 */
  push32(0x1046430bu); f_10461fd0();
  /* 1046430b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046430e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464311 jne 0x10464314 */
  if (!C.zf) goto L_10464314;
  /* 10464313 int3  */
  x86_unimpl("int3 @ 0x10464313");
L_10464314:;
  /* 10464314 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10464316 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10464318 jne 0x104642e7 */
  if (!C.zf) goto L_104642e7;
  /* 1046431a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10464321:;
  /* 10464321 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464324 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464328 jne 0x1046437a */
  if (!C.zf) goto L_1046437a;
  /* 1046432a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046432d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10464330 push ecx */
  push32((uint32_t)(ECX));
  /* 10464331 mov dl, byte ptr [0x1048ca91] */
  DL = (r8((uint32_t)(0x1048ca91)));
  /* 10464337 push edx */
  push32((uint32_t)(EDX));
  /* 10464338 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046433b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046433e push eax */
  push32((uint32_t)(EAX));
  /* 1046433f call 0x10464020 */
  push32(0x10464344u); f_10464020();
  /* 10464344 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10464349 jne 0x1046437a */
  if (!C.zf) goto L_1046437a;
L_1046434b:;
  /* 1046434b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046434e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464351 push ecx */
  push32((uint32_t)(ECX));
  /* 10464352 push 0x10489870 */
  push32((uint32_t)(0x10489870u));
  /* 10464357 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046435b push 0 */
  push32((uint32_t)(0x0u));
  /* 1046435d push 0 */
  push32((uint32_t)(0x0u));
  /* 1046435f call 0x10461fd0 */
  push32(0x10464364u); f_10461fd0();
  /* 10464364 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464367 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046436a jne 0x1046436d */
  if (!C.zf) goto L_1046436d;
  /* 1046436c int3  */
  x86_unimpl("int3 @ 0x1046436c");
L_1046436d:;
  /* 1046436d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1046436f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10464371 jne 0x1046434b */
  if (!C.zf) goto L_1046434b;
  /* 10464373 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1046437a:;
  /* 1046437a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046437e jne 0x104643f6 */
  if (!C.zf) goto L_104643f6;
  /* 10464380 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464383 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464387 je 0x104643bc */
  if (C.zf) goto L_104643bc;
L_10464389:;
  /* 10464389 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046438c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1046438f push edx */
  push32((uint32_t)(EDX));
  /* 10464390 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464393 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10464396 push ecx */
  push32((uint32_t)(ECX));
  /* 10464397 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046439a push edx */
  push32((uint32_t)(EDX));
  /* 1046439b push 0x10489850 */
  push32((uint32_t)(0x10489850u));
  /* 104643a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104643a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104643a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104643a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104643a8 call 0x10461fd0 */
  push32(0x104643adu); f_10461fd0();
  /* 104643ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104643b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104643b3 jne 0x104643b6 */
  if (!C.zf) goto L_104643b6;
  /* 104643b5 int3  */
  x86_unimpl("int3 @ 0x104643b5");
L_104643b6:;
  /* 104643b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104643b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104643ba jne 0x10464389 */
  if (!C.zf) goto L_10464389;
L_104643bc:;
  /* 104643bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104643bf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104643c2 push edx */
  push32((uint32_t)(EDX));
  /* 104643c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104643c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104643c9 push eax */
  push32((uint32_t)(EAX));
  /* 104643ca mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104643cd push ecx */
  push32((uint32_t)(ECX));
  /* 104643ce push 0x10489824 */
  push32((uint32_t)(0x10489824u));
  /* 104643d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104643d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104643d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104643d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104643db call 0x10461fd0 */
  push32(0x104643e0u); f_10461fd0();
  /* 104643e0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104643e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104643e6 jne 0x104643e9 */
  if (!C.zf) goto L_104643e9;
  /* 104643e8 int3  */
  x86_unimpl("int3 @ 0x104643e8");
L_104643e9:;
  /* 104643e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104643eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104643ed jne 0x104643bc */
  if (!C.zf) goto L_104643bc;
  /* 104643ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104643f6:;
  /* 104643f6 jmp 0x10464203 */
  goto L_10464203;
L_104643fb:;
  /* 104643fb push 9 */
  push32((uint32_t)(0x9u));
  /* 104643fd call 0x104669b0 */
  push32(0x10464402u); f_104669b0();
  /* 10464402 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464405 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10464408:;
  /* 10464408 pop edi */
  EDI = (pop32());
  /* 10464409 pop esi */
  ESI = (pop32());
  /* 1046440a pop ebx */
  EBX = (pop32());
  /* 1046440b mov esp, ebp */
  ESP = (EBP);
  /* 1046440d pop ebp */
  EBP = (pop32());
  /* 1046440e ret  */
  ESPCHK(0x1046419au, _esp0);
  ESP += 4; return;
}

/* FUN_10004420 @ 0x10464420 (34 bytes, 13 insns) */
void f_10464420(void) {
  FTRACE(0x10464420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10464420 push ebp */
  push32((uint32_t)(EBP));
  /* 10464421 mov ebp, esp */
  EBP = (ESP);
  /* 10464423 push ecx */
  push32((uint32_t)(ECX));
  /* 10464424 mov eax, dword ptr [0x1048ca84] */
  EAX = (r32((uint32_t)(0x1048ca84)));
  /* 10464429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046442c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464430 je 0x1046443b */
  if (C.zf) goto L_1046443b;
  /* 10464432 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464435 mov dword ptr [0x1048ca84], ecx */
  w32((uint32_t)(0x1048ca84), (ECX));
L_1046443b:;
  /* 1046443b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046443e mov esp, ebp */
  ESP = (EBP);
  /* 10464440 pop ebp */
  EBP = (pop32());
  /* 10464441 ret  */
  ESPCHK(0x10464420u, _esp0);
  ESP += 4; return;
}

/* FUN_10004450 @ 0x10464450 (103 bytes, 38 insns) */
void f_10464450(void) {
  FTRACE(0x10464450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10464450 push ebp */
  push32((uint32_t)(EBP));
  /* 10464451 mov ebp, esp */
  EBP = (ESP);
  /* 10464453 push ecx */
  push32((uint32_t)(ECX));
  /* 10464454 mov eax, dword ptr [0x1048ca84] */
  EAX = (r32((uint32_t)(0x1048ca84)));
  /* 10464459 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1046445c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046445e jne 0x10464462 */
  if (!C.zf) goto L_10464462;
  /* 10464460 jmp 0x104644b3 */
  goto L_104644b3;
L_10464462:;
  /* 10464462 push 9 */
  push32((uint32_t)(0x9u));
  /* 10464464 call 0x10466910 */
  push32(0x10464469u); f_10466910();
  /* 10464469 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046446c mov ecx, dword ptr [0x1048e4cc] */
  ECX = (r32((uint32_t)(0x1048e4cc)));
  /* 10464472 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10464475 jmp 0x1046447f */
  goto L_1046447f;
L_10464477:;
  /* 10464477 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046447a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1046447c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1046447f:;
  /* 1046447f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464483 je 0x104644a9 */
  if (C.zf) goto L_104644a9;
  /* 10464485 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464488 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1046448b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10464491 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464494 jne 0x104644a7 */
  if (!C.zf) goto L_104644a7;
  /* 10464496 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10464499 push eax */
  push32((uint32_t)(EAX));
  /* 1046449a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046449d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104644a0 push ecx */
  push32((uint32_t)(ECX));
  /* 104644a1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x104644a4u);
  /* 104644a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104644a7:;
  /* 104644a7 jmp 0x10464477 */
  goto L_10464477;
L_104644a9:;
  /* 104644a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 104644ab call 0x104669b0 */
  push32(0x104644b0u); f_104669b0();
  /* 104644b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104644b3:;
  /* 104644b3 mov esp, ebp */
  ESP = (EBP);
  /* 104644b5 pop ebp */
  EBP = (pop32());
  /* 104644b6 ret  */
  ESPCHK(0x10464450u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x104644c0 (75 bytes, 28 insns) */
void f_104644c0(void) {
  FTRACE(0x104644c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104644c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104644c1 mov ebp, esp */
  EBP = (ESP);
  /* 104644c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104644c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104644c8 je 0x104644fd */
  if (C.zf) goto L_104644fd;
  /* 104644ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104644cd push eax */
  push32((uint32_t)(EAX));
  /* 104644ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104644d1 push ecx */
  push32((uint32_t)(ECX));
  /* 104644d2 call dword ptr [0x104902dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902dc))), 0x104644d8u);
  /* 104644d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104644da jne 0x104644fd */
  if (!C.zf) goto L_104644fd;
  /* 104644dc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104644e0 je 0x104644f4 */
  if (C.zf) goto L_104644f4;
  /* 104644e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104644e5 push edx */
  push32((uint32_t)(EDX));
  /* 104644e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104644e9 push eax */
  push32((uint32_t)(EAX));
  /* 104644ea call dword ptr [0x104902d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902d8))), 0x104644f0u);
  /* 104644f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104644f2 jne 0x104644fd */
  if (!C.zf) goto L_104644fd;
L_104644f4:;
  /* 104644f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104644fb jmp 0x10464504 */
  goto L_10464504;
L_104644fd:;
  /* 104644fd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10464504:;
  /* 10464504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464507 mov esp, ebp */
  ESP = (EBP);
  /* 10464509 pop ebp */
  EBP = (pop32());
  /* 1046450a ret  */
  ESPCHK(0x104644c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004510 @ 0x10464510 (134 bytes, 50 insns) */
void f_10464510(void) {
  FTRACE(0x10464510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10464510 push ebp */
  push32((uint32_t)(EBP));
  /* 10464511 mov ebp, esp */
  EBP = (ESP);
  /* 10464513 push ecx */
  push32((uint32_t)(ECX));
  /* 10464514 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464518 jne 0x1046451e */
  if (!C.zf) goto L_1046451e;
  /* 1046451a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046451c jmp 0x10464592 */
  goto L_10464592;
L_1046451e:;
  /* 1046451e push 1 */
  push32((uint32_t)(0x1u));
  /* 10464520 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10464522 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464525 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10464528 push eax */
  push32((uint32_t)(EAX));
  /* 10464529 call 0x104644c0 */
  push32(0x1046452eu); f_104644c0();
  /* 1046452e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464531 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10464533 jne 0x10464539 */
  if (!C.zf) goto L_10464539;
  /* 10464535 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10464537 jmp 0x10464592 */
  goto L_10464592;
L_10464539:;
  /* 10464539 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046453c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046453f push ecx */
  push32((uint32_t)(ECX));
  /* 10464540 call 0x10467210 */
  push32(0x10464545u); f_10467210();
  /* 10464545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464548 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046454b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046454f je 0x10464566 */
  if (C.zf) goto L_10464566;
  /* 10464551 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464554 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10464557 push edx */
  push32((uint32_t)(EDX));
  /* 10464558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046455b push eax */
  push32((uint32_t)(EAX));
  /* 1046455c call 0x10467270 */
  push32(0x10464561u); f_10467270();
  /* 10464561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464564 jmp 0x10464592 */
  goto L_10464592;
L_10464566:;
  /* 10464566 mov ecx, dword ptr [0x1048e480] */
  ECX = (r32((uint32_t)(0x1048e480)));
  /* 1046456c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10464572 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10464574 je 0x1046457d */
  if (C.zf) goto L_1046457d;
  /* 10464576 mov eax, 1 */
  EAX = (0x1u);
  /* 1046457b jmp 0x10464592 */
  goto L_10464592;
L_1046457d:;
  /* 1046457d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464580 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10464583 push edx */
  push32((uint32_t)(EDX));
  /* 10464584 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464586 mov eax, dword ptr [0x1048fe2c] */
  EAX = (r32((uint32_t)(0x1048fe2c)));
  /* 1046458b push eax */
  push32((uint32_t)(EAX));
  /* 1046458c call dword ptr [0x10490234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490234))), 0x10464592u);
L_10464592:;
  /* 10464592 mov esp, ebp */
  ESP = (EBP);
  /* 10464594 pop ebp */
  EBP = (pop32());
  /* 10464595 ret  */
  ESPCHK(0x10464510u, _esp0);
  ESP += 4; return;
}

/* FUN_100045a0 @ 0x104645a0 (227 bytes, 80 insns) */
void f_104645a0(void) {
  FTRACE(0x104645a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104645a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104645a1 mov ebp, esp */
  EBP = (ESP);
  /* 104645a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104645a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104645a7 push eax */
  push32((uint32_t)(EAX));
  /* 104645a8 call 0x10464510 */
  push32(0x104645adu); f_10464510();
  /* 104645ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104645b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104645b2 jne 0x104645bb */
  if (!C.zf) goto L_104645bb;
  /* 104645b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104645b6 jmp 0x1046467f */
  goto L_1046467f;
L_104645bb:;
  /* 104645bb push 9 */
  push32((uint32_t)(0x9u));
  /* 104645bd call 0x10466910 */
  push32(0x104645c2u); f_10466910();
  /* 104645c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104645c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104645c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104645cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104645ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104645d1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104645d4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104645d9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104645dc je 0x10464600 */
  if (C.zf) goto L_10464600;
  /* 104645de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104645e1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104645e5 je 0x10464600 */
  if (C.zf) goto L_10464600;
  /* 104645e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104645ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104645ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104645f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104645f5 je 0x10464600 */
  if (C.zf) goto L_10464600;
  /* 104645f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104645fa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104645fe jne 0x10464673 */
  if (!C.zf) goto L_10464673;
L_10464600:;
  /* 10464600 push 1 */
  push32((uint32_t)(0x1u));
  /* 10464602 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10464605 push edx */
  push32((uint32_t)(EDX));
  /* 10464606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464609 push eax */
  push32((uint32_t)(EAX));
  /* 1046460a call 0x104644c0 */
  push32(0x1046460fu); f_104644c0();
  /* 1046460f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10464614 je 0x10464673 */
  if (C.zf) goto L_10464673;
  /* 10464616 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464619 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1046461c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046461f jne 0x10464673 */
  if (!C.zf) goto L_10464673;
  /* 10464621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464624 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10464627 cmp ecx, dword ptr [0x1048ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046462d jg 0x10464673 */
  if ((!C.zf&&C.sf==C.of)) goto L_10464673;
  /* 1046462f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464633 je 0x10464640 */
  if (C.zf) goto L_10464640;
  /* 10464635 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10464638 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046463b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1046463e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10464640:;
  /* 10464640 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464644 je 0x10464651 */
  if (C.zf) goto L_10464651;
  /* 10464646 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10464649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046464c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1046464f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10464651:;
  /* 10464651 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464655 je 0x10464662 */
  if (C.zf) goto L_10464662;
  /* 10464657 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046465a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046465d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10464660 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10464662:;
  /* 10464662 push 9 */
  push32((uint32_t)(0x9u));
  /* 10464664 call 0x104669b0 */
  push32(0x10464669u); f_104669b0();
  /* 10464669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046466c mov eax, 1 */
  EAX = (0x1u);
  /* 10464671 jmp 0x1046467f */
  goto L_1046467f;
L_10464673:;
  /* 10464673 push 9 */
  push32((uint32_t)(0x9u));
  /* 10464675 call 0x104669b0 */
  push32(0x1046467au); f_104669b0();
  /* 1046467a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046467d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1046467f:;
  /* 1046467f mov esp, ebp */
  ESP = (EBP);
  /* 10464681 pop ebp */
  EBP = (pop32());
  /* 10464682 ret  */
  ESPCHK(0x104645a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004690 @ 0x10464690 (28 bytes, 11 insns) */
void f_10464690(void) {
  FTRACE(0x10464690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10464690 push ebp */
  push32((uint32_t)(EBP));
  /* 10464691 mov ebp, esp */
  EBP = (ESP);
  /* 10464693 push ecx */
  push32((uint32_t)(ECX));
  /* 10464694 mov eax, dword ptr [0x1048fe38] */
  EAX = (r32((uint32_t)(0x1048fe38)));
  /* 10464699 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046469c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046469f mov dword ptr [0x1048fe38], ecx */
  w32((uint32_t)(0x1048fe38), (ECX));
  /* 104646a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104646a8 mov esp, ebp */
  ESP = (EBP);
  /* 104646aa pop ebp */
  EBP = (pop32());
  /* 104646ab ret  */
  ESPCHK(0x10464690u, _esp0);
  ESP += 4; return;
}

/* FUN_100046b0 @ 0x104646b0 (362 bytes, 116 insns) */
void f_104646b0(void) {
  FTRACE(0x104646b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104646b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104646b1 mov ebp, esp */
  EBP = (ESP);
  /* 104646b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104646b6 push ebx */
  push32((uint32_t)(EBX));
  /* 104646b7 push esi */
  push32((uint32_t)(ESI));
  /* 104646b8 push edi */
  push32((uint32_t)(EDI));
  /* 104646b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104646bd jne 0x104646ea */
  if (!C.zf) goto L_104646ea;
L_104646bf:;
  /* 104646bf push 0x10489984 */
  push32((uint32_t)(0x10489984u));
  /* 104646c4 push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 104646c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104646cb push 0 */
  push32((uint32_t)(0x0u));
  /* 104646cd push 0 */
  push32((uint32_t)(0x0u));
  /* 104646cf push 0 */
  push32((uint32_t)(0x0u));
  /* 104646d1 call 0x10461fd0 */
  push32(0x104646d6u); f_10461fd0();
  /* 104646d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104646d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104646dc jne 0x104646df */
  if (!C.zf) goto L_104646df;
  /* 104646de int3  */
  x86_unimpl("int3 @ 0x104646de");
L_104646df:;
  /* 104646df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104646e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104646e3 jne 0x104646bf */
  if (!C.zf) goto L_104646bf;
  /* 104646e5 jmp 0x10464813 */
  goto L_10464813;
L_104646ea:;
  /* 104646ea push 9 */
  push32((uint32_t)(0x9u));
  /* 104646ec call 0x10466910 */
  push32(0x104646f1u); f_10466910();
  /* 104646f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104646f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104646f7 mov edx, dword ptr [0x1048e4cc] */
  EDX = (r32((uint32_t)(0x1048e4cc)));
  /* 104646fd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104646ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10464706 jmp 0x10464711 */
  goto L_10464711;
L_10464708:;
  /* 10464708 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046470b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046470e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10464711:;
  /* 10464711 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464715 jge 0x10464735 */
  if ((C.sf==C.of)) goto L_10464735;
  /* 10464717 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046471a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046471d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10464725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464728 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046472b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10464733 jmp 0x10464708 */
  goto L_10464708;
L_10464735:;
  /* 10464735 mov edx, dword ptr [0x1048e4cc] */
  EDX = (r32((uint32_t)(0x1048e4cc)));
  /* 1046473b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1046473e jmp 0x10464748 */
  goto L_10464748;
L_10464740:;
  /* 10464740 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464743 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10464745 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10464748:;
  /* 10464748 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046474c je 0x104647f1 */
  if (C.zf) goto L_104647f1;
  /* 10464752 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464755 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10464758 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046475d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046475f jl 0x104647c7 */
  if ((C.sf!=C.of)) goto L_104647c7;
  /* 10464761 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464764 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10464767 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1046476d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464770 jge 0x104647c7 */
  if ((C.sf==C.of)) goto L_104647c7;
  /* 10464772 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464775 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10464778 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1046477e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464781 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10464785 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464788 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046478b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1046478e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10464794 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464797 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1046479b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046479e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104647a1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104647a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104647a9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 104647ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104647b0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104647b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104647b6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 104647b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104647be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104647c1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 104647c5 jmp 0x104647ec */
  goto L_104647ec;
L_104647c7:;
  /* 104647c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104647ca push edx */
  push32((uint32_t)(EDX));
  /* 104647cb push 0x10489960 */
  push32((uint32_t)(0x10489960u));
  /* 104647d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104647d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104647d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104647d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104647d8 call 0x10461fd0 */
  push32(0x104647ddu); f_10461fd0();
  /* 104647dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104647e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104647e3 jne 0x104647e6 */
  if (!C.zf) goto L_104647e6;
  /* 104647e5 int3  */
  x86_unimpl("int3 @ 0x104647e5");
L_104647e6:;
  /* 104647e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104647e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104647ea jne 0x104647c7 */
  if (!C.zf) goto L_104647c7;
L_104647ec:;
  /* 104647ec jmp 0x10464740 */
  goto L_10464740;
L_104647f1:;
  /* 104647f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104647f4 mov edx, dword ptr [0x1048e4d4] */
  EDX = (r32((uint32_t)(0x1048e4d4)));
  /* 104647fa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 104647fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464800 mov ecx, dword ptr [0x1048e4c8] */
  ECX = (r32((uint32_t)(0x1048e4c8)));
  /* 10464806 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10464809 push 9 */
  push32((uint32_t)(0x9u));
  /* 1046480b call 0x104669b0 */
  push32(0x10464810u); f_104669b0();
  /* 10464810 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10464813:;
  /* 10464813 pop edi */
  EDI = (pop32());
  /* 10464814 pop esi */
  ESI = (pop32());
  /* 10464815 pop ebx */
  EBX = (pop32());
  /* 10464816 mov esp, ebp */
  ESP = (EBP);
  /* 10464818 pop ebp */
  EBP = (pop32());
  /* 10464819 ret  */
  ESPCHK(0x104646b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004820 @ 0x10464820 (291 bytes, 95 insns) */
void f_10464820(void) {
  FTRACE(0x10464820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10464820 push ebp */
  push32((uint32_t)(EBP));
  /* 10464821 mov ebp, esp */
  EBP = (ESP);
  /* 10464823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10464826 push ebx */
  push32((uint32_t)(EBX));
  /* 10464827 push esi */
  push32((uint32_t)(ESI));
  /* 10464828 push edi */
  push32((uint32_t)(EDI));
  /* 10464829 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10464830 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464834 je 0x10464842 */
  if (C.zf) goto L_10464842;
  /* 10464836 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046483a je 0x10464842 */
  if (C.zf) goto L_10464842;
  /* 1046483c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464840 jne 0x10464870 */
  if (!C.zf) goto L_10464870;
L_10464842:;
  /* 10464842 push 0x104899ac */
  push32((uint32_t)(0x104899acu));
  /* 10464847 push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 1046484c push 0 */
  push32((uint32_t)(0x0u));
  /* 1046484e push 0 */
  push32((uint32_t)(0x0u));
  /* 10464850 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464852 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464854 call 0x10461fd0 */
  push32(0x10464859u); f_10461fd0();
  /* 10464859 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046485c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046485f jne 0x10464862 */
  if (!C.zf) goto L_10464862;
  /* 10464861 int3  */
  x86_unimpl("int3 @ 0x10464861");
L_10464862:;
  /* 10464862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10464864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10464866 jne 0x10464842 */
  if (!C.zf) goto L_10464842;
  /* 10464868 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046486b jmp 0x1046493c */
  goto L_1046493c;
L_10464870:;
  /* 10464870 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10464877 jmp 0x10464882 */
  goto L_10464882;
L_10464879:;
  /* 10464879 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046487c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046487f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10464882:;
  /* 10464882 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464886 jge 0x1046490c */
  if ((C.sf==C.of)) goto L_1046490c;
  /* 1046488c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046488f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10464892 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464895 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10464898 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1046489c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104648a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104648a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104648a6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 104648aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104648ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104648b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104648b3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104648b6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 104648ba sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104648be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104648c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104648c4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 104648c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104648cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104648ce cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104648d3 jne 0x104648e2 */
  if (!C.zf) goto L_104648e2;
  /* 104648d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104648d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104648db cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104648e0 je 0x10464907 */
  if (C.zf) goto L_10464907;
L_104648e2:;
  /* 104648e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104648e6 je 0x10464907 */
  if (C.zf) goto L_10464907;
  /* 104648e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104648ec jne 0x10464900 */
  if (!C.zf) goto L_10464900;
  /* 104648ee cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104648f2 jne 0x10464907 */
  if (!C.zf) goto L_10464907;
  /* 104648f4 mov eax, dword ptr [0x1048ca84] */
  EAX = (r32((uint32_t)(0x1048ca84)));
  /* 104648f9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 104648fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104648fe je 0x10464907 */
  if (C.zf) goto L_10464907;
L_10464900:;
  /* 10464900 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10464907:;
  /* 10464907 jmp 0x10464879 */
  goto L_10464879;
L_1046490c:;
  /* 1046490c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046490f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10464912 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10464915 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10464918 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046491b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1046491e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10464921 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10464924 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10464927 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046492a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046492d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10464930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464933 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10464939 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1046493c:;
  /* 1046493c pop edi */
  EDI = (pop32());
  /* 1046493d pop esi */
  ESI = (pop32());
  /* 1046493e pop ebx */
  EBX = (pop32());
  /* 1046493f mov esp, ebp */
  ESP = (EBP);
  /* 10464941 pop ebp */
  EBP = (pop32());
  /* 10464942 ret  */
  ESPCHK(0x10464820u, _esp0);
  ESP += 4; return;
}

/* FUN_10004950 @ 0x10464950 (697 bytes, 253 insns) */
void f_10464950(void) {
  FTRACE(0x10464950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10464950 push ebp */
  push32((uint32_t)(EBP));
  /* 10464951 mov ebp, esp */
  EBP = (ESP);
  /* 10464953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10464956 push ebx */
  push32((uint32_t)(EBX));
  /* 10464957 push esi */
  push32((uint32_t)(ESI));
  /* 10464958 push edi */
  push32((uint32_t)(EDI));
  /* 10464959 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10464960 push 9 */
  push32((uint32_t)(0x9u));
  /* 10464962 call 0x10466910 */
  push32(0x10464967u); f_10466910();
  /* 10464967 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046496a:;
  /* 1046496a push 0x10489aa4 */
  push32((uint32_t)(0x10489aa4u));
  /* 1046496f push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 10464974 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464976 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464978 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046497a push 0 */
  push32((uint32_t)(0x0u));
  /* 1046497c call 0x10461fd0 */
  push32(0x10464981u); f_10461fd0();
  /* 10464981 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464984 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464987 jne 0x1046498a */
  if (!C.zf) goto L_1046498a;
  /* 10464989 int3  */
  x86_unimpl("int3 @ 0x10464989");
L_1046498a:;
  /* 1046498a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046498c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046498e jne 0x1046496a */
  if (!C.zf) goto L_1046496a;
  /* 10464990 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464994 je 0x1046499e */
  if (C.zf) goto L_1046499e;
  /* 10464996 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464999 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1046499b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1046499e:;
  /* 1046499e mov eax, dword ptr [0x1048e4cc] */
  EAX = (r32((uint32_t)(0x1048e4cc)));
  /* 104649a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104649a6 jmp 0x104649b0 */
  goto L_104649b0;
L_104649a8:;
  /* 104649a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104649ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104649ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104649b0:;
  /* 104649b0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104649b4 je 0x10464bd2 */
  if (C.zf) goto L_10464bd2;
  /* 104649ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104649bd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104649c0 je 0x10464bd2 */
  if (C.zf) goto L_10464bd2;
  /* 104649c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104649c9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104649cc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104649d2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104649d5 je 0x10464a04 */
  if (C.zf) goto L_10464a04;
  /* 104649d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104649da mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104649dd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104649e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104649e5 je 0x10464a04 */
  if (C.zf) goto L_10464a04;
  /* 104649e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104649ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104649ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104649f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104649f5 jne 0x10464a09 */
  if (!C.zf) goto L_10464a09;
  /* 104649f7 mov ecx, dword ptr [0x1048ca84] */
  ECX = (r32((uint32_t)(0x1048ca84)));
  /* 104649fd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10464a00 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10464a02 jne 0x10464a09 */
  if (!C.zf) goto L_10464a09;
L_10464a04:;
  /* 10464a04 jmp 0x10464bcd */
  goto L_10464bcd;
L_10464a09:;
  /* 10464a09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464a0c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464a10 je 0x10464a82 */
  if (C.zf) goto L_10464a82;
  /* 10464a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464a14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10464a16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464a19 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10464a1c push ecx */
  push32((uint32_t)(ECX));
  /* 10464a1d call 0x104644c0 */
  push32(0x10464a22u); f_104644c0();
  /* 10464a22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464a25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10464a27 jne 0x10464a53 */
  if (!C.zf) goto L_10464a53;
L_10464a29:;
  /* 10464a29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464a2c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10464a2f push eax */
  push32((uint32_t)(EAX));
  /* 10464a30 push 0x10489a90 */
  push32((uint32_t)(0x10489a90u));
  /* 10464a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464a39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10464a3d call 0x10461fd0 */
  push32(0x10464a42u); f_10461fd0();
  /* 10464a42 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464a45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464a48 jne 0x10464a4b */
  if (!C.zf) goto L_10464a4b;
  /* 10464a4a int3  */
  x86_unimpl("int3 @ 0x10464a4a");
L_10464a4b:;
  /* 10464a4b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10464a4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10464a4f jne 0x10464a29 */
  if (!C.zf) goto L_10464a29;
  /* 10464a51 jmp 0x10464a82 */
  goto L_10464a82;
L_10464a53:;
  /* 10464a53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464a56 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10464a59 push eax */
  push32((uint32_t)(EAX));
  /* 10464a5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464a5d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10464a60 push edx */
  push32((uint32_t)(EDX));
  /* 10464a61 push 0x10489a84 */
  push32((uint32_t)(0x10489a84u));
  /* 10464a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10464a6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10464a6e call 0x10461fd0 */
  push32(0x10464a73u); f_10461fd0();
  /* 10464a73 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464a76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464a79 jne 0x10464a7c */
  if (!C.zf) goto L_10464a7c;
  /* 10464a7b int3  */
  x86_unimpl("int3 @ 0x10464a7b");
L_10464a7c:;
  /* 10464a7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10464a7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10464a80 jne 0x10464a53 */
  if (!C.zf) goto L_10464a53;
L_10464a82:;
  /* 10464a82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464a85 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10464a88 push edx */
  push32((uint32_t)(EDX));
  /* 10464a89 push 0x10489a7c */
  push32((uint32_t)(0x10489a7cu));
  /* 10464a8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10464a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464a96 call 0x10461fd0 */
  push32(0x10464a9bu); f_10461fd0();
  /* 10464a9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464a9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464aa1 jne 0x10464aa4 */
  if (!C.zf) goto L_10464aa4;
  /* 10464aa3 int3  */
  x86_unimpl("int3 @ 0x10464aa3");
L_10464aa4:;
  /* 10464aa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10464aa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10464aa8 jne 0x10464a82 */
  if (!C.zf) goto L_10464a82;
  /* 10464aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464aad mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10464ab0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10464ab6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464ab9 jne 0x10464b2c */
  if (!C.zf) goto L_10464b2c;
L_10464abb:;
  /* 10464abb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464abe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10464ac1 push ecx */
  push32((uint32_t)(ECX));
  /* 10464ac2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464ac5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10464ac8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10464acb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10464ad0 push eax */
  push32((uint32_t)(EAX));
  /* 10464ad1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464ad4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464ad7 push ecx */
  push32((uint32_t)(ECX));
  /* 10464ad8 push 0x10489a48 */
  push32((uint32_t)(0x10489a48u));
  /* 10464add push 0 */
  push32((uint32_t)(0x0u));
  /* 10464adf push 0 */
  push32((uint32_t)(0x0u));
  /* 10464ae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464ae5 call 0x10461fd0 */
  push32(0x10464aeau); f_10461fd0();
  /* 10464aea add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464aed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464af0 jne 0x10464af3 */
  if (!C.zf) goto L_10464af3;
  /* 10464af2 int3  */
  x86_unimpl("int3 @ 0x10464af2");
L_10464af3:;
  /* 10464af3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10464af5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10464af7 jne 0x10464abb */
  if (!C.zf) goto L_10464abb;
  /* 10464af9 cmp dword ptr [0x1048fe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048fe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464b00 je 0x10464b1b */
  if (C.zf) goto L_10464b1b;
  /* 10464b02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464b05 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10464b08 push ecx */
  push32((uint32_t)(ECX));
  /* 10464b09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464b0c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464b0f push edx */
  push32((uint32_t)(EDX));
  /* 10464b10 call dword ptr [0x1048fe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048fe38))), 0x10464b16u);
  /* 10464b16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464b19 jmp 0x10464b27 */
  goto L_10464b27;
L_10464b1b:;
  /* 10464b1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464b1e push eax */
  push32((uint32_t)(EAX));
  /* 10464b1f call 0x10464c10 */
  push32(0x10464b24u); f_10464c10();
  /* 10464b24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10464b27:;
  /* 10464b27 jmp 0x10464bcd */
  goto L_10464bcd;
L_10464b2c:;
  /* 10464b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464b2f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464b33 jne 0x10464b72 */
  if (!C.zf) goto L_10464b72;
L_10464b35:;
  /* 10464b35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464b38 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10464b3b push eax */
  push32((uint32_t)(EAX));
  /* 10464b3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464b3f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464b42 push ecx */
  push32((uint32_t)(ECX));
  /* 10464b43 push 0x10489a20 */
  push32((uint32_t)(0x10489a20u));
  /* 10464b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10464b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10464b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10464b50 call 0x10461fd0 */
  push32(0x10464b55u); f_10461fd0();
  /* 10464b55 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464b58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464b5b jne 0x10464b5e */
  if (!C.zf) goto L_10464b5e;
  /* 10464b5d int3  */
  x86_unimpl("int3 @ 0x10464b5d");
L_10464b5e:;
  /* 10464b5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10464b60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10464b62 jne 0x10464b35 */
  if (!C.zf) goto L_10464b35;
  /* 10464b64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464b67 push eax */
  push32((uint32_t)(EAX));
  /* 10464b68 call 0x10464c10 */
  push32(0x10464b6du); f_10464c10();
  /* 10464b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464b70 jmp 0x10464bcd */
  goto L_10464bcd;
L_10464b72:;
  /* 10464b72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464b75 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10464b78 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10464b7e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464b81 jne 0x10464bcd */
  if (!C.zf) goto L_10464bcd;
L_10464b83:;
  /* 10464b83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464b86 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10464b89 push ecx */
  push32((uint32_t)(ECX));
  /* 10464b8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464b8d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10464b90 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10464b93 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10464b98 push eax */
  push32((uint32_t)(EAX));
  /* 10464b99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464b9c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464b9f push ecx */
  push32((uint32_t)(ECX));
  /* 10464ba0 push 0x104899ec */
  push32((uint32_t)(0x104899ecu));
  /* 10464ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464bab push 0 */
  push32((uint32_t)(0x0u));
  /* 10464bad call 0x10461fd0 */
  push32(0x10464bb2u); f_10461fd0();
  /* 10464bb2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464bb5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464bb8 jne 0x10464bbb */
  if (!C.zf) goto L_10464bbb;
  /* 10464bba int3  */
  x86_unimpl("int3 @ 0x10464bba");
L_10464bbb:;
  /* 10464bbb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10464bbd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10464bbf jne 0x10464b83 */
  if (!C.zf) goto L_10464b83;
  /* 10464bc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464bc4 push eax */
  push32((uint32_t)(EAX));
  /* 10464bc5 call 0x10464c10 */
  push32(0x10464bcau); f_10464c10();
  /* 10464bca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10464bcd:;
  /* 10464bcd jmp 0x104649a8 */
  goto L_104649a8;
L_10464bd2:;
  /* 10464bd2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10464bd4 call 0x104669b0 */
  push32(0x10464bd9u); f_104669b0();
  /* 10464bd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10464bdc:;
  /* 10464bdc push 0x104899d4 */
  push32((uint32_t)(0x104899d4u));
  /* 10464be1 push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 10464be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464bea push 0 */
  push32((uint32_t)(0x0u));
  /* 10464bec push 0 */
  push32((uint32_t)(0x0u));
  /* 10464bee call 0x10461fd0 */
  push32(0x10464bf3u); f_10461fd0();
  /* 10464bf3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464bf6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464bf9 jne 0x10464bfc */
  if (!C.zf) goto L_10464bfc;
  /* 10464bfb int3  */
  x86_unimpl("int3 @ 0x10464bfb");
L_10464bfc:;
  /* 10464bfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10464bfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10464c00 jne 0x10464bdc */
  if (!C.zf) goto L_10464bdc;
  /* 10464c02 pop edi */
  EDI = (pop32());
  /* 10464c03 pop esi */
  ESI = (pop32());
  /* 10464c04 pop ebx */
  EBX = (pop32());
  /* 10464c05 mov esp, ebp */
  ESP = (EBP);
  /* 10464c07 pop ebp */
  EBP = (pop32());
  /* 10464c08 ret  */
  ESPCHK(0x10464950u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c10 @ 0x10464c10 (276 bytes, 89 insns) */
void f_10464c10(void) {
  FTRACE(0x10464c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10464c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10464c11 mov ebp, esp */
  EBP = (ESP);
  /* 10464c13 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10464c16 push ebx */
  push32((uint32_t)(EBX));
  /* 10464c17 push esi */
  push32((uint32_t)(ESI));
  /* 10464c18 push edi */
  push32((uint32_t)(EDI));
  /* 10464c19 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10464c20 jmp 0x10464c2b */
  goto L_10464c2b;
L_10464c22:;
  /* 10464c22 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10464c25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464c28 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10464c2b:;
  /* 10464c2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464c2e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464c32 jge 0x10464c3f */
  if ((C.sf==C.of)) goto L_10464c3f;
  /* 10464c34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464c37 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10464c3a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10464c3d jmp 0x10464c46 */
  goto L_10464c46;
L_10464c3f:;
  /* 10464c3f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10464c46:;
  /* 10464c46 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10464c49 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464c4c jge 0x10464cec */
  if ((C.sf==C.of)) goto L_10464cec;
  /* 10464c52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464c55 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464c58 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10464c5b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10464c5e cmp dword ptr [0x1048cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464c65 jle 0x10464c83 */
  if ((C.zf||C.sf!=C.of)) goto L_10464c83;
  /* 10464c67 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10464c6c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10464c6f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10464c75 push ecx */
  push32((uint32_t)(ECX));
  /* 10464c76 call 0x10468f20 */
  push32(0x10464c7bu); f_10468f20();
  /* 10464c7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464c7e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10464c81 jmp 0x10464ca0 */
  goto L_10464ca0;
L_10464c83:;
  /* 10464c83 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10464c86 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10464c8c mov eax, dword ptr [0x1048cc98] */
  EAX = (r32((uint32_t)(0x1048cc98)));
  /* 10464c91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10464c93 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10464c97 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10464c9d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10464ca0:;
  /* 10464ca0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464ca4 je 0x10464cb4 */
  if (C.zf) goto L_10464cb4;
  /* 10464ca6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10464ca9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10464caf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10464cb2 jmp 0x10464cbb */
  goto L_10464cbb;
L_10464cb4:;
  /* 10464cb4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10464cbb:;
  /* 10464cbb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10464cbe mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10464cc1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10464cc5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10464cc8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10464cce push edx */
  push32((uint32_t)(EDX));
  /* 10464ccf push 0x10489ac8 */
  push32((uint32_t)(0x10489ac8u));
  /* 10464cd4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10464cd7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10464cda lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10464cde push ecx */
  push32((uint32_t)(ECX));
  /* 10464cdf call 0x10468e20 */
  push32(0x10464ce4u); f_10468e20();
  /* 10464ce4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464ce7 jmp 0x10464c22 */
  goto L_10464c22;
L_10464cec:;
  /* 10464cec mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10464cef mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10464cf4:;
  /* 10464cf4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10464cf7 push eax */
  push32((uint32_t)(EAX));
  /* 10464cf8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10464cfb push ecx */
  push32((uint32_t)(ECX));
  /* 10464cfc push 0x10489ab8 */
  push32((uint32_t)(0x10489ab8u));
  /* 10464d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464d09 call 0x10461fd0 */
  push32(0x10464d0eu); f_10461fd0();
  /* 10464d0e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464d11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464d14 jne 0x10464d17 */
  if (!C.zf) goto L_10464d17;
  /* 10464d16 int3  */
  x86_unimpl("int3 @ 0x10464d16");
L_10464d17:;
  /* 10464d17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10464d19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10464d1b jne 0x10464cf4 */
  if (!C.zf) goto L_10464cf4;
  /* 10464d1d pop edi */
  EDI = (pop32());
  /* 10464d1e pop esi */
  ESI = (pop32());
  /* 10464d1f pop ebx */
  EBX = (pop32());
  /* 10464d20 mov esp, ebp */
  ESP = (EBP);
  /* 10464d22 pop ebp */
  EBP = (pop32());
  /* 10464d23 ret  */
  ESPCHK(0x10464c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d30 @ 0x10464d30 (116 bytes, 46 insns) */
void f_10464d30(void) {
  FTRACE(0x10464d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10464d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10464d31 mov ebp, esp */
  EBP = (ESP);
  /* 10464d33 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10464d36 push ebx */
  push32((uint32_t)(EBX));
  /* 10464d37 push esi */
  push32((uint32_t)(ESI));
  /* 10464d38 push edi */
  push32((uint32_t)(EDI));
  /* 10464d39 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10464d3c push eax */
  push32((uint32_t)(EAX));
  /* 10464d3d call 0x104646b0 */
  push32(0x10464d42u); f_104646b0();
  /* 10464d42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464d45 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464d49 jne 0x10464d64 */
  if (!C.zf) goto L_10464d64;
  /* 10464d4b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464d4f jne 0x10464d64 */
  if (!C.zf) goto L_10464d64;
  /* 10464d51 mov ecx, dword ptr [0x1048ca84] */
  ECX = (r32((uint32_t)(0x1048ca84)));
  /* 10464d57 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10464d5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10464d5c je 0x10464d9b */
  if (C.zf) goto L_10464d9b;
  /* 10464d5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464d62 je 0x10464d9b */
  if (C.zf) goto L_10464d9b;
L_10464d64:;
  /* 10464d64 push 0x10489ad0 */
  push32((uint32_t)(0x10489ad0u));
  /* 10464d69 push 0x1048949c */
  push32((uint32_t)(0x1048949cu));
  /* 10464d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10464d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464d76 call 0x10461fd0 */
  push32(0x10464d7bu); f_10461fd0();
  /* 10464d7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464d7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464d81 jne 0x10464d84 */
  if (!C.zf) goto L_10464d84;
  /* 10464d83 int3  */
  x86_unimpl("int3 @ 0x10464d83");
L_10464d84:;
  /* 10464d84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10464d86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10464d88 jne 0x10464d64 */
  if (!C.zf) goto L_10464d64;
  /* 10464d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10464d8c call 0x10464950 */
  push32(0x10464d91u); f_10464950();
  /* 10464d91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464d94 mov eax, 1 */
  EAX = (0x1u);
  /* 10464d99 jmp 0x10464d9d */
  goto L_10464d9d;
L_10464d9b:;
  /* 10464d9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10464d9d:;
  /* 10464d9d pop edi */
  EDI = (pop32());
  /* 10464d9e pop esi */
  ESI = (pop32());
  /* 10464d9f pop ebx */
  EBX = (pop32());
  /* 10464da0 mov esp, ebp */
  ESP = (EBP);
  /* 10464da2 pop ebp */
  EBP = (pop32());
  /* 10464da3 ret  */
  ESPCHK(0x10464d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004db0 @ 0x10464db0 (197 bytes, 79 insns) */
void f_10464db0(void) {
  FTRACE(0x10464db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10464db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10464db1 mov ebp, esp */
  EBP = (ESP);
  /* 10464db3 push ecx */
  push32((uint32_t)(ECX));
  /* 10464db4 push ebx */
  push32((uint32_t)(EBX));
  /* 10464db5 push esi */
  push32((uint32_t)(ESI));
  /* 10464db6 push edi */
  push32((uint32_t)(EDI));
  /* 10464db7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464dbb jne 0x10464dc2 */
  if (!C.zf) goto L_10464dc2;
  /* 10464dbd jmp 0x10464e6e */
  goto L_10464e6e;
L_10464dc2:;
  /* 10464dc2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10464dc9 jmp 0x10464dd4 */
  goto L_10464dd4;
L_10464dcb:;
  /* 10464dcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464dce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464dd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10464dd4:;
  /* 10464dd4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464dd8 jge 0x10464e1e */
  if ((C.sf==C.of)) goto L_10464e1e;
L_10464dda:;
  /* 10464dda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464ddd mov edx, dword ptr [ecx*4 + 0x1048ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1048ca94)));
  /* 10464de4 push edx */
  push32((uint32_t)(EDX));
  /* 10464de5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464de8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464deb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10464def push edx */
  push32((uint32_t)(EDX));
  /* 10464df0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464df3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464df6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10464dfa push edx */
  push32((uint32_t)(EDX));
  /* 10464dfb push 0x10489b2c */
  push32((uint32_t)(0x10489b2cu));
  /* 10464e00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464e08 call 0x10461fd0 */
  push32(0x10464e0du); f_10461fd0();
  /* 10464e0d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464e10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464e13 jne 0x10464e16 */
  if (!C.zf) goto L_10464e16;
  /* 10464e15 int3  */
  x86_unimpl("int3 @ 0x10464e15");
L_10464e16:;
  /* 10464e16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10464e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10464e1a jne 0x10464dda */
  if (!C.zf) goto L_10464dda;
  /* 10464e1c jmp 0x10464dcb */
  goto L_10464dcb;
L_10464e1e:;
  /* 10464e1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464e21 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10464e24 push edx */
  push32((uint32_t)(EDX));
  /* 10464e25 push 0x10489b08 */
  push32((uint32_t)(0x10489b08u));
  /* 10464e2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10464e2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10464e2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10464e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464e32 call 0x10461fd0 */
  push32(0x10464e37u); f_10461fd0();
  /* 10464e37 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464e3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464e3d jne 0x10464e40 */
  if (!C.zf) goto L_10464e40;
  /* 10464e3f int3  */
  x86_unimpl("int3 @ 0x10464e3f");
L_10464e40:;
  /* 10464e40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10464e42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10464e44 jne 0x10464e1e */
  if (!C.zf) goto L_10464e1e;
L_10464e46:;
  /* 10464e46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10464e49 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10464e4c push edx */
  push32((uint32_t)(EDX));
  /* 10464e4d push 0x10489ae8 */
  push32((uint32_t)(0x10489ae8u));
  /* 10464e52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10464e5a call 0x10461fd0 */
  push32(0x10464e5fu); f_10461fd0();
  /* 10464e5f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464e62 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464e65 jne 0x10464e68 */
  if (!C.zf) goto L_10464e68;
  /* 10464e67 int3  */
  x86_unimpl("int3 @ 0x10464e67");
L_10464e68:;
  /* 10464e68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10464e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10464e6c jne 0x10464e46 */
  if (!C.zf) goto L_10464e46;
L_10464e6e:;
  /* 10464e6e pop edi */
  EDI = (pop32());
  /* 10464e6f pop esi */
  ESI = (pop32());
  /* 10464e70 pop ebx */
  EBX = (pop32());
  /* 10464e71 mov esp, ebp */
  ESP = (EBP);
  /* 10464e73 pop ebp */
  EBP = (pop32());
  /* 10464e74 ret  */
  ESPCHK(0x10464db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e80 @ 0x10464e80 (329 bytes, 102 insns) */
void f_10464e80(void) {
  FTRACE(0x10464e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10464e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10464e81 mov ebp, esp */
  EBP = (ESP);
  /* 10464e83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10464e86 cmp dword ptr [0x1048ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464e8d jne 0x10464e94 */
  if (!C.zf) goto L_10464e94;
  /* 10464e8f call 0x104697c0 */
  push32(0x10464e94u); f_104697c0();
L_10464e94:;
  /* 10464e94 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10464e9b mov eax, dword ptr [0x1048e468] */
  EAX = (r32((uint32_t)(0x1048e468)));
  /* 10464ea0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10464ea3:;
  /* 10464ea3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464ea6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10464ea9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10464eab je 0x10464ed9 */
  if (C.zf) goto L_10464ed9;
  /* 10464ead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464eb0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10464eb3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464eb6 je 0x10464ec1 */
  if (C.zf) goto L_10464ec1;
  /* 10464eb8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464ebb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464ebe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10464ec1:;
  /* 10464ec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464ec4 push eax */
  push32((uint32_t)(EAX));
  /* 10464ec5 call 0x10465d40 */
  push32(0x10464ecau); f_10465d40();
  /* 10464eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464ecd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464ed0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10464ed4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10464ed7 jmp 0x10464ea3 */
  goto L_10464ea3;
L_10464ed9:;
  /* 10464ed9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10464edb push 0x10489b4c */
  push32((uint32_t)(0x10489b4cu));
  /* 10464ee0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10464ee2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10464ee5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10464eec push ecx */
  push32((uint32_t)(ECX));
  /* 10464eed call 0x10462f10 */
  push32(0x10464ef2u); f_10462f10();
  /* 10464ef2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464ef5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10464ef8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10464efb mov dword ptr [0x1048e49c], edx */
  w32((uint32_t)(0x1048e49c), (EDX));
  /* 10464f01 cmp dword ptr [0x1048e49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464f08 jne 0x10464f14 */
  if (!C.zf) goto L_10464f14;
  /* 10464f0a push 9 */
  push32((uint32_t)(0x9u));
  /* 10464f0c call 0x10461e80 */
  push32(0x10464f11u); f_10461e80();
  /* 10464f11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10464f14:;
  /* 10464f14 mov eax, dword ptr [0x1048e468] */
  EAX = (r32((uint32_t)(0x1048e468)));
  /* 10464f19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10464f1c jmp 0x10464f27 */
  goto L_10464f27;
L_10464f1e:;
  /* 10464f1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464f21 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464f24 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10464f27:;
  /* 10464f27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464f2a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10464f2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10464f2f je 0x10464f97 */
  if (C.zf) goto L_10464f97;
  /* 10464f31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464f34 push ecx */
  push32((uint32_t)(ECX));
  /* 10464f35 call 0x10465d40 */
  push32(0x10464f3au); f_10465d40();
  /* 10464f3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464f3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464f40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10464f43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464f46 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10464f49 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464f4c je 0x10464f95 */
  if (C.zf) goto L_10464f95;
  /* 10464f4e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10464f50 push 0x10489b4c */
  push32((uint32_t)(0x10489b4cu));
  /* 10464f55 push 2 */
  push32((uint32_t)(0x2u));
  /* 10464f57 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10464f5a push ecx */
  push32((uint32_t)(ECX));
  /* 10464f5b call 0x10462f10 */
  push32(0x10464f60u); f_10462f10();
  /* 10464f60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464f63 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10464f66 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10464f68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10464f6b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464f6e jne 0x10464f7a */
  if (!C.zf) goto L_10464f7a;
  /* 10464f70 push 9 */
  push32((uint32_t)(0x9u));
  /* 10464f72 call 0x10461e80 */
  push32(0x10464f77u); f_10461e80();
  /* 10464f77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10464f7a:;
  /* 10464f7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10464f7d push ecx */
  push32((uint32_t)(ECX));
  /* 10464f7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10464f81 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10464f83 push eax */
  push32((uint32_t)(EAX));
  /* 10464f84 call 0x10465ec0 */
  push32(0x10464f89u); f_10465ec0();
  /* 10464f89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464f8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10464f8f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10464f92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10464f95:;
  /* 10464f95 jmp 0x10464f1e */
  goto L_10464f1e;
L_10464f97:;
  /* 10464f97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10464f99 mov edx, dword ptr [0x1048e468] */
  EDX = (r32((uint32_t)(0x1048e468)));
  /* 10464f9f push edx */
  push32((uint32_t)(EDX));
  /* 10464fa0 call 0x104639a0 */
  push32(0x10464fa5u); f_104639a0();
  /* 10464fa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10464fa8 mov dword ptr [0x1048e468], 0 */
  w32((uint32_t)(0x1048e468), (0x0u));
  /* 10464fb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10464fb5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10464fbb mov dword ptr [0x1048ffa0], 1 */
  w32((uint32_t)(0x1048ffa0), (0x1u));
  /* 10464fc5 mov esp, ebp */
  ESP = (EBP);
  /* 10464fc7 pop ebp */
  EBP = (pop32());
  /* 10464fc8 ret  */
  ESPCHK(0x10464e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fd0 @ 0x10464fd0 (216 bytes, 69 insns) */
void f_10464fd0(void) {
  FTRACE(0x10464fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10464fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10464fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10464fd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10464fd6 cmp dword ptr [0x1048ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10464fdd jne 0x10464fe4 */
  if (!C.zf) goto L_10464fe4;
  /* 10464fdf call 0x104697c0 */
  push32(0x10464fe4u); f_104697c0();
L_10464fe4:;
  /* 10464fe4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10464fe9 push 0x1048e4d8 */
  push32((uint32_t)(0x1048e4d8u));
  /* 10464fee push 0 */
  push32((uint32_t)(0x0u));
  /* 10464ff0 call dword ptr [0x10490298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490298))), 0x10464ff6u);
  /* 10464ff6 mov dword ptr [0x1048e4ac], 0x1048e4d8 */
  w32((uint32_t)(0x1048e4ac), (0x1048e4d8u));
  /* 10465000 mov eax, dword ptr [0x1048ffcc] */
  EAX = (r32((uint32_t)(0x1048ffcc)));
  /* 10465005 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10465008 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046500a jne 0x10465017 */
  if (!C.zf) goto L_10465017;
  /* 1046500c mov edx, dword ptr [0x1048e4ac] */
  EDX = (r32((uint32_t)(0x1048e4ac)));
  /* 10465012 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10465015 jmp 0x1046501f */
  goto L_1046501f;
L_10465017:;
  /* 10465017 mov eax, dword ptr [0x1048ffcc] */
  EAX = (r32((uint32_t)(0x1048ffcc)));
  /* 1046501c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1046501f:;
  /* 1046501f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10465022 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10465025 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10465028 push edx */
  push32((uint32_t)(EDX));
  /* 10465029 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1046502c push eax */
  push32((uint32_t)(EAX));
  /* 1046502d push 0 */
  push32((uint32_t)(0x0u));
  /* 1046502f push 0 */
  push32((uint32_t)(0x0u));
  /* 10465031 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10465034 push ecx */
  push32((uint32_t)(ECX));
  /* 10465035 call 0x104650b0 */
  push32(0x1046503au); f_104650b0();
  /* 1046503a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046503d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10465042 push 0x10489b58 */
  push32((uint32_t)(0x10489b58u));
  /* 10465047 push 2 */
  push32((uint32_t)(0x2u));
  /* 10465049 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046504c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046504f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10465052 push ecx */
  push32((uint32_t)(ECX));
  /* 10465053 call 0x10462f10 */
  push32(0x10465058u); f_10462f10();
  /* 10465058 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046505b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046505e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465062 jne 0x1046506e */
  if (!C.zf) goto L_1046506e;
  /* 10465064 push 8 */
  push32((uint32_t)(0x8u));
  /* 10465066 call 0x10461e80 */
  push32(0x1046506bu); f_10461e80();
  /* 1046506b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046506e:;
  /* 1046506e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10465071 push edx */
  push32((uint32_t)(EDX));
  /* 10465072 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10465075 push eax */
  push32((uint32_t)(EAX));
  /* 10465076 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10465079 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046507c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1046507f push eax */
  push32((uint32_t)(EAX));
  /* 10465080 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465083 push ecx */
  push32((uint32_t)(ECX));
  /* 10465084 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10465087 push edx */
  push32((uint32_t)(EDX));
  /* 10465088 call 0x104650b0 */
  push32(0x1046508du); f_104650b0();
  /* 1046508d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10465090 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10465093 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465096 mov dword ptr [0x1048e490], eax */
  w32((uint32_t)(0x1048e490), (EAX));
  /* 1046509b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046509e mov dword ptr [0x1048e494], ecx */
  w32((uint32_t)(0x1048e494), (ECX));
  /* 104650a4 mov esp, ebp */
  ESP = (EBP);
  /* 104650a6 pop ebp */
  EBP = (pop32());
  /* 104650a7 ret  */
  ESPCHK(0x10464fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100050b0 @ 0x104650b0 (1060 bytes, 360 insns) */
void f_104650b0(void) {
  FTRACE(0x104650b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104650b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104650b1 mov ebp, esp */
  EBP = (ESP);
  /* 104650b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104650b6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104650b9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104650bf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104650c2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 104650c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104650cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104650ce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104650d2 je 0x104650e5 */
  if (C.zf) goto L_104650e5;
  /* 104650d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104650d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104650da mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104650dc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104650df add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104650e2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_104650e5:;
  /* 104650e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104650e8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104650eb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104650ee jne 0x104651bd */
  if (!C.zf) goto L_104651bd;
L_104650f4:;
  /* 104650f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104650f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104650fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104650fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465100 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10465103 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465106 je 0x10465182 */
  if (C.zf) goto L_10465182;
  /* 10465108 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046510b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1046510e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10465110 je 0x10465182 */
  if (C.zf) goto L_10465182;
  /* 10465112 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465115 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10465117 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10465119 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046511b mov al, byte ptr [edx + 0x1048fd01] */
  AL = (r8((uint32_t)(EDX + 0x1048fd01)));
  /* 10465121 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10465124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10465126 je 0x10465157 */
  if (C.zf) goto L_10465157;
  /* 10465128 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046512b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1046512d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465130 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10465133 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10465135 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465139 je 0x10465157 */
  if (C.zf) goto L_10465157;
  /* 1046513b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046513e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465141 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10465143 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10465145 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465148 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046514b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1046514e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465151 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465154 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10465157:;
  /* 10465157 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046515a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046515c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046515f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10465162 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10465164 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465168 je 0x1046517d */
  if (C.zf) goto L_1046517d;
  /* 1046516a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046516d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465170 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10465172 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10465174 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465177 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046517a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1046517d:;
  /* 1046517d jmp 0x104650f4 */
  goto L_104650f4;
L_10465182:;
  /* 10465182 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10465185 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10465187 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046518a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046518d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1046518f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465193 je 0x104651a4 */
  if (C.zf) goto L_104651a4;
  /* 10465195 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465198 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1046519b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046519e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104651a1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_104651a4:;
  /* 104651a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104651a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104651aa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104651ad jne 0x104651b8 */
  if (!C.zf) goto L_104651b8;
  /* 104651af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104651b2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104651b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104651b8:;
  /* 104651b8 jmp 0x1046528c */
  goto L_1046528c;
L_104651bd:;
  /* 104651bd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104651c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104651c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104651c5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104651c8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104651ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104651ce je 0x104651e3 */
  if (C.zf) goto L_104651e3;
  /* 104651d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104651d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104651d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104651d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104651da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104651dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104651e0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_104651e3:;
  /* 104651e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104651e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104651e8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 104651eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104651ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104651f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104651f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104651f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104651fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104651ff mov dl, byte ptr [ecx + 0x1048fd01] */
  DL = (r8((uint32_t)(ECX + 0x1048fd01)));
  /* 10465205 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10465208 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046520a je 0x1046523b */
  if (C.zf) goto L_1046523b;
  /* 1046520c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046520f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10465211 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465214 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10465217 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10465219 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046521d je 0x10465232 */
  if (C.zf) goto L_10465232;
  /* 1046521f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465222 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465225 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10465227 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10465229 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046522c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046522f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10465232:;
  /* 10465232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465235 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465238 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1046523b:;
  /* 1046523b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046523e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10465244 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465247 je 0x10465267 */
  if (C.zf) goto L_10465267;
  /* 10465249 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046524c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10465251 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10465253 je 0x10465267 */
  if (C.zf) goto L_10465267;
  /* 10465255 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10465258 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1046525e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465261 jne 0x104651bd */
  if (!C.zf) goto L_104651bd;
L_10465267:;
  /* 10465267 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046526a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10465270 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10465272 jne 0x1046527f */
  if (!C.zf) goto L_1046527f;
  /* 10465274 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465277 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046527a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046527d jmp 0x1046528c */
  goto L_1046528c;
L_1046527f:;
  /* 1046527f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465283 je 0x1046528c */
  if (C.zf) goto L_1046528c;
  /* 10465285 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465288 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1046528c:;
  /* 1046528c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10465293:;
  /* 10465293 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465296 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10465299 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046529b je 0x104652be */
  if (C.zf) goto L_104652be;
L_1046529d:;
  /* 1046529d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104652a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104652a3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104652a6 je 0x104652b3 */
  if (C.zf) goto L_104652b3;
  /* 104652a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104652ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104652ae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104652b1 jne 0x104652be */
  if (!C.zf) goto L_104652be;
L_104652b3:;
  /* 104652b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104652b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104652b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104652bc jmp 0x1046529d */
  goto L_1046529d;
L_104652be:;
  /* 104652be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104652c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104652c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104652c6 jne 0x104652cd */
  if (!C.zf) goto L_104652cd;
  /* 104652c8 jmp 0x104654ab */
  goto L_104654ab;
L_104652cd:;
  /* 104652cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104652d1 je 0x104652e4 */
  if (C.zf) goto L_104652e4;
  /* 104652d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104652d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104652d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104652db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104652de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104652e1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_104652e4:;
  /* 104652e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104652e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104652e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104652ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104652ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_104652f1:;
  /* 104652f1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104652f8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_104652ff:;
  /* 104652ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465302 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10465305 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465308 jne 0x1046531e */
  if (!C.zf) goto L_1046531e;
  /* 1046530a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046530d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465310 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10465313 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10465316 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465319 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1046531c jmp 0x104652ff */
  goto L_104652ff;
L_1046531e:;
  /* 1046531e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465321 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10465324 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465327 jne 0x1046537a */
  if (!C.zf) goto L_1046537a;
  /* 10465329 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046532c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1046532e mov ecx, 2 */
  ECX = (0x2u);
  /* 10465333 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10465335 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10465337 jne 0x10465372 */
  if (!C.zf) goto L_10465372;
  /* 10465339 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046533d je 0x1046535f */
  if (C.zf) goto L_1046535f;
  /* 1046533f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465342 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10465346 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465349 jne 0x10465356 */
  if (!C.zf) goto L_10465356;
  /* 1046534b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046534e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465351 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10465354 jmp 0x1046535d */
  goto L_1046535d;
L_10465356:;
  /* 10465356 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1046535d:;
  /* 1046535d jmp 0x10465366 */
  goto L_10465366;
L_1046535f:;
  /* 1046535f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10465366:;
  /* 10465366 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10465368 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046536c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1046536f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10465372:;
  /* 10465372 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10465375 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10465377 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1046537a:;
  /* 1046537a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046537d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10465380 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465383 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10465386 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10465388 je 0x104653ae */
  if (C.zf) goto L_104653ae;
  /* 1046538a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046538e je 0x1046539f */
  if (C.zf) goto L_1046539f;
  /* 10465390 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465393 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10465396 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465399 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046539c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1046539f:;
  /* 1046539f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104653a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104653a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104653a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104653aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104653ac jmp 0x1046537a */
  goto L_1046537a;
L_104653ae:;
  /* 104653ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104653b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104653b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104653b6 je 0x104653d4 */
  if (C.zf) goto L_104653d4;
  /* 104653b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104653bc jne 0x104653d9 */
  if (!C.zf) goto L_104653d9;
  /* 104653be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104653c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104653c4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104653c7 je 0x104653d4 */
  if (C.zf) goto L_104653d4;
  /* 104653c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104653cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104653cf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104653d2 jne 0x104653d9 */
  if (!C.zf) goto L_104653d9;
L_104653d4:;
  /* 104653d4 jmp 0x10465484 */
  goto L_10465484;
L_104653d9:;
  /* 104653d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104653dd je 0x10465476 */
  if (C.zf) goto L_10465476;
  /* 104653e3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104653e7 je 0x1046543d */
  if (C.zf) goto L_1046543d;
  /* 104653e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104653ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104653ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104653f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104653f2 mov cl, byte ptr [eax + 0x1048fd01] */
  CL = (r8((uint32_t)(EAX + 0x1048fd01)));
  /* 104653f8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104653fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104653fd je 0x10465428 */
  if (C.zf) goto L_10465428;
  /* 104653ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465402 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465405 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10465407 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10465409 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046540c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046540f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10465412 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465415 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465418 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046541b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046541e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10465420 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465423 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10465426 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10465428:;
  /* 10465428 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046542b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046542e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10465430 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10465432 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465435 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465438 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1046543b jmp 0x10465469 */
  goto L_10465469;
L_1046543d:;
  /* 1046543d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465440 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10465442 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10465444 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10465446 mov cl, byte ptr [eax + 0x1048fd01] */
  CL = (r8((uint32_t)(EAX + 0x1048fd01)));
  /* 1046544c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1046544f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10465451 je 0x10465469 */
  if (C.zf) goto L_10465469;
  /* 10465453 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465456 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465459 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1046545c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046545f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10465461 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465464 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10465467 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10465469:;
  /* 10465469 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046546c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046546e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465471 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10465474 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10465476:;
  /* 10465476 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465479 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046547c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046547f jmp 0x104652f1 */
  goto L_104652f1;
L_10465484:;
  /* 10465484 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465488 je 0x10465499 */
  if (C.zf) goto L_10465499;
  /* 1046548a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046548d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10465490 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465493 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465496 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10465499:;
  /* 10465499 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046549c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046549e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104654a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104654a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104654a6 jmp 0x10465293 */
  goto L_10465293;
L_104654ab:;
  /* 104654ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104654af je 0x104654c3 */
  if (C.zf) goto L_104654c3;
  /* 104654b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104654b4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104654ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104654bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104654c0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_104654c3:;
  /* 104654c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104654c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104654c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104654cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104654ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104654d0 mov esp, ebp */
  ESP = (EBP);
  /* 104654d2 pop ebp */
  EBP = (pop32());
  /* 104654d3 ret  */
  ESPCHK(0x104650b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054e0 @ 0x104654e0 (537 bytes, 173 insns) */
void f_104654e0(void) {
  FTRACE(0x104654e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104654e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104654e1 mov ebp, esp */
  EBP = (ESP);
  /* 104654e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104654e6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 104654ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 104654f4 cmp dword ptr [0x1048e5dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e5dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104654fb jne 0x1046553a */
  if (!C.zf) goto L_1046553a;
  /* 104654fd call dword ptr [0x104902f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902f4))), 0x10465503u);
  /* 10465503 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10465506 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046550a je 0x10465518 */
  if (C.zf) goto L_10465518;
  /* 1046550c mov dword ptr [0x1048e5dc], 1 */
  w32((uint32_t)(0x1048e5dc), (0x1u));
  /* 10465516 jmp 0x1046553a */
  goto L_1046553a;
L_10465518:;
  /* 10465518 call dword ptr [0x104902f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902f0))), 0x1046551eu);
  /* 1046551e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10465521 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465525 je 0x10465533 */
  if (C.zf) goto L_10465533;
  /* 10465527 mov dword ptr [0x1048e5dc], 2 */
  w32((uint32_t)(0x1048e5dc), (0x2u));
  /* 10465531 jmp 0x1046553a */
  goto L_1046553a;
L_10465533:;
  /* 10465533 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10465535 jmp 0x104656f5 */
  goto L_104656f5;
L_1046553a:;
  /* 1046553a cmp dword ptr [0x1048e5dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e5dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465541 jne 0x1046563e */
  if (!C.zf) goto L_1046563e;
  /* 10465547 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046554b jne 0x10465563 */
  if (!C.zf) goto L_10465563;
  /* 1046554d call dword ptr [0x104902f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902f4))), 0x10465553u);
  /* 10465553 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10465556 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046555a jne 0x10465563 */
  if (!C.zf) goto L_10465563;
  /* 1046555c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046555e jmp 0x104656f5 */
  goto L_104656f5;
L_10465563:;
  /* 10465563 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10465566 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10465569:;
  /* 10465569 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046556c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1046556e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10465571 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10465573 je 0x10465595 */
  if (C.zf) goto L_10465595;
  /* 10465575 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465578 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046557b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046557e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465581 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10465583 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10465586 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10465588 jne 0x10465593 */
  if (!C.zf) goto L_10465593;
  /* 1046558a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046558d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465590 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10465593:;
  /* 10465593 jmp 0x10465569 */
  goto L_10465569;
L_10465595:;
  /* 10465595 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465598 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046559b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1046559d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104655a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104655a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104655a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104655a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104655a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104655ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104655ae push edx */
  push32((uint32_t)(EDX));
  /* 104655af mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104655b2 push eax */
  push32((uint32_t)(EAX));
  /* 104655b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104655b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104655b7 call dword ptr [0x104902ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ec))), 0x104655bdu);
  /* 104655bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104655c0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104655c4 je 0x104655e4 */
  if (C.zf) goto L_104655e4;
  /* 104655c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 104655c8 push 0x10489b64 */
  push32((uint32_t)(0x10489b64u));
  /* 104655cd push 2 */
  push32((uint32_t)(0x2u));
  /* 104655cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104655d2 push ecx */
  push32((uint32_t)(ECX));
  /* 104655d3 call 0x10462f10 */
  push32(0x104655d8u); f_10462f10();
  /* 104655d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104655db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104655de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104655e2 jne 0x104655f5 */
  if (!C.zf) goto L_104655f5;
L_104655e4:;
  /* 104655e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104655e7 push edx */
  push32((uint32_t)(EDX));
  /* 104655e8 call dword ptr [0x104902e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902e8))), 0x104655eeu);
  /* 104655ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104655f0 jmp 0x104656f5 */
  goto L_104656f5;
L_104655f5:;
  /* 104655f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104655f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104655f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104655fc push eax */
  push32((uint32_t)(EAX));
  /* 104655fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10465600 push ecx */
  push32((uint32_t)(ECX));
  /* 10465601 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465604 push edx */
  push32((uint32_t)(EDX));
  /* 10465605 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10465608 push eax */
  push32((uint32_t)(EAX));
  /* 10465609 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046560b push 0 */
  push32((uint32_t)(0x0u));
  /* 1046560d call dword ptr [0x104902ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ec))), 0x10465613u);
  /* 10465613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10465615 jne 0x1046562c */
  if (!C.zf) goto L_1046562c;
  /* 10465617 push 2 */
  push32((uint32_t)(0x2u));
  /* 10465619 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046561c push ecx */
  push32((uint32_t)(ECX));
  /* 1046561d call 0x104639a0 */
  push32(0x10465622u); f_104639a0();
  /* 10465622 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10465625 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1046562c:;
  /* 1046562c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046562f push edx */
  push32((uint32_t)(EDX));
  /* 10465630 call dword ptr [0x104902e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902e8))), 0x10465636u);
  /* 10465636 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10465639 jmp 0x104656f5 */
  goto L_104656f5;
L_1046563e:;
  /* 1046563e cmp dword ptr [0x1048e5dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1048e5dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465645 jne 0x104656f3 */
  if (!C.zf) goto L_104656f3;
  /* 1046564b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046564f jne 0x10465667 */
  if (!C.zf) goto L_10465667;
  /* 10465651 call dword ptr [0x104902f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902f0))), 0x10465657u);
  /* 10465657 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1046565a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046565e jne 0x10465667 */
  if (!C.zf) goto L_10465667;
  /* 10465660 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10465662 jmp 0x104656f5 */
  goto L_104656f5;
L_10465667:;
  /* 10465667 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046566a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1046566d:;
  /* 1046566d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10465670 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10465673 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10465675 je 0x10465695 */
  if (C.zf) goto L_10465695;
  /* 10465677 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046567a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046567d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10465680 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10465683 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10465686 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10465688 jne 0x10465693 */
  if (!C.zf) goto L_10465693;
  /* 1046568a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046568d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465690 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10465693:;
  /* 10465693 jmp 0x1046566d */
  goto L_1046566d;
L_10465695:;
  /* 10465695 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10465698 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046569b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046569e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104656a1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 104656a6 push 0x10489b64 */
  push32((uint32_t)(0x10489b64u));
  /* 104656ab push 2 */
  push32((uint32_t)(0x2u));
  /* 104656ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104656b0 push edx */
  push32((uint32_t)(EDX));
  /* 104656b1 call 0x10462f10 */
  push32(0x104656b6u); f_10462f10();
  /* 104656b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104656b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104656bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104656c0 jne 0x104656d0 */
  if (!C.zf) goto L_104656d0;
  /* 104656c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104656c5 push eax */
  push32((uint32_t)(EAX));
  /* 104656c6 call dword ptr [0x10490238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490238))), 0x104656ccu);
  /* 104656cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104656ce jmp 0x104656f5 */
  goto L_104656f5;
L_104656d0:;
  /* 104656d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104656d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104656d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104656d7 push edx */
  push32((uint32_t)(EDX));
  /* 104656d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104656db push eax */
  push32((uint32_t)(EAX));
  /* 104656dc call 0x104697f0 */
  push32(0x104656e1u); f_104697f0();
  /* 104656e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104656e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104656e7 push ecx */
  push32((uint32_t)(ECX));
  /* 104656e8 call dword ptr [0x10490238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490238))), 0x104656eeu);
  /* 104656ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104656f1 jmp 0x104656f5 */
  goto L_104656f5;
L_104656f3:;
  /* 104656f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104656f5:;
  /* 104656f5 mov esp, ebp */
  ESP = (EBP);
  /* 104656f7 pop ebp */
  EBP = (pop32());
  /* 104656f8 ret  */
  ESPCHK(0x104654e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005700 @ 0x10465700 (77 bytes, 25 insns) */
void f_10465700(void) {
  FTRACE(0x10465700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465700 push ebp */
  push32((uint32_t)(EBP));
  /* 10465701 mov ebp, esp */
  EBP = (ESP);
  /* 10465703 push 0 */
  push32((uint32_t)(0x0u));
  /* 10465705 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1046570a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046570c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465710 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10465713 push eax */
  push32((uint32_t)(EAX));
  /* 10465714 call dword ptr [0x104902fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902fc))), 0x1046571au);
  /* 1046571a mov dword ptr [0x1048fe2c], eax */
  w32((uint32_t)(0x1048fe2c), (EAX));
  /* 1046571f cmp dword ptr [0x1048fe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048fe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465726 jne 0x1046572c */
  if (!C.zf) goto L_1046572c;
  /* 10465728 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046572a jmp 0x1046574b */
  goto L_1046574b;
L_1046572c:;
  /* 1046572c call 0x104671b0 */
  push32(0x10465731u); f_104671b0();
  /* 10465731 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10465733 jne 0x10465746 */
  if (!C.zf) goto L_10465746;
  /* 10465735 mov ecx, dword ptr [0x1048fe2c] */
  ECX = (r32((uint32_t)(0x1048fe2c)));
  /* 1046573b push ecx */
  push32((uint32_t)(ECX));
  /* 1046573c call dword ptr [0x104902f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902f8))), 0x10465742u);
  /* 10465742 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10465744 jmp 0x1046574b */
  goto L_1046574b;
L_10465746:;
  /* 10465746 mov eax, 1 */
  EAX = (0x1u);
L_1046574b:;
  /* 1046574b pop ebp */
  EBP = (pop32());
  /* 1046574c ret  */
  ESPCHK(0x10465700u, _esp0);
  ESP += 4; return;
}

/* FUN_10005750 @ 0x10465750 (156 bytes, 48 insns) */
void f_10465750(void) {
  FTRACE(0x10465750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465750 push ebp */
  push32((uint32_t)(EBP));
  /* 10465751 mov ebp, esp */
  EBP = (ESP);
  /* 10465753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465756 mov eax, dword ptr [0x1048fe28] */
  EAX = (r32((uint32_t)(0x1048fe28)));
  /* 1046575b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046575e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10465765 jmp 0x10465770 */
  goto L_10465770;
L_10465767:;
  /* 10465767 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046576a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046576d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10465770:;
  /* 10465770 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465773 cmp edx, dword ptr [0x1048fe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1048fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465779 jge 0x104657c6 */
  if ((C.sf==C.of)) goto L_104657c6;
  /* 1046577b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10465780 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10465785 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465788 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1046578b push ecx */
  push32((uint32_t)(ECX));
  /* 1046578c call dword ptr [0x10490304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490304))), 0x10465792u);
  /* 10465792 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10465797 push 0 */
  push32((uint32_t)(0x0u));
  /* 10465799 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046579c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1046579f push eax */
  push32((uint32_t)(EAX));
  /* 104657a0 call dword ptr [0x10490304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490304))), 0x104657a6u);
  /* 104657a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104657a9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104657ac push edx */
  push32((uint32_t)(EDX));
  /* 104657ad push 0 */
  push32((uint32_t)(0x0u));
  /* 104657af mov eax, dword ptr [0x1048fe2c] */
  EAX = (r32((uint32_t)(0x1048fe2c)));
  /* 104657b4 push eax */
  push32((uint32_t)(EAX));
  /* 104657b5 call dword ptr [0x10490300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490300))), 0x104657bbu);
  /* 104657bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104657be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104657c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104657c4 jmp 0x10465767 */
  goto L_10465767;
L_104657c6:;
  /* 104657c6 mov edx, dword ptr [0x1048fe28] */
  EDX = (r32((uint32_t)(0x1048fe28)));
  /* 104657cc push edx */
  push32((uint32_t)(EDX));
  /* 104657cd push 0 */
  push32((uint32_t)(0x0u));
  /* 104657cf mov eax, dword ptr [0x1048fe2c] */
  EAX = (r32((uint32_t)(0x1048fe2c)));
  /* 104657d4 push eax */
  push32((uint32_t)(EAX));
  /* 104657d5 call dword ptr [0x10490300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490300))), 0x104657dbu);
  /* 104657db mov ecx, dword ptr [0x1048fe2c] */
  ECX = (r32((uint32_t)(0x1048fe2c)));
  /* 104657e1 push ecx */
  push32((uint32_t)(ECX));
  /* 104657e2 call dword ptr [0x104902f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902f8))), 0x104657e8u);
  /* 104657e8 mov esp, ebp */
  ESP = (EBP);
  /* 104657ea pop ebp */
  EBP = (pop32());
  /* 104657eb ret  */
  ESPCHK(0x10465750u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x104657f0 (73 bytes, 19 insns) */
void f_104657f0(void) {
  FTRACE(0x104657f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104657f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104657f1 mov ebp, esp */
  EBP = (ESP);
  /* 104657f3 cmp dword ptr [0x1048e470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104657fa je 0x1046580e */
  if (C.zf) goto L_1046580e;
  /* 104657fc cmp dword ptr [0x1048e470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465803 jne 0x10465837 */
  if (!C.zf) goto L_10465837;
  /* 10465805 cmp dword ptr [0x1048e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046580c jne 0x10465837 */
  if (!C.zf) goto L_10465837;
L_1046580e:;
  /* 1046580e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10465813 call 0x10465840 */
  push32(0x10465818u); f_10465840();
  /* 10465818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046581b cmp dword ptr [0x1048e5e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e5e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465822 je 0x1046582a */
  if (C.zf) goto L_1046582a;
  /* 10465824 call dword ptr [0x1048e5e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e5e0))), 0x1046582au);
L_1046582a:;
  /* 1046582a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1046582f call 0x10465840 */
  push32(0x10465834u); f_10465840();
  /* 10465834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10465837:;
  /* 10465837 pop ebp */
  EBP = (pop32());
  /* 10465838 ret  */
  ESPCHK(0x104657f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005840 @ 0x10465840 (447 bytes, 131 insns) */
void f_10465840(void) {
  FTRACE(0x10465840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465840 push ebp */
  push32((uint32_t)(EBP));
  /* 10465841 mov ebp, esp */
  EBP = (ESP);
  /* 10465843 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465849 push ebx */
  push32((uint32_t)(EBX));
  /* 1046584a push esi */
  push32((uint32_t)(ESI));
  /* 1046584b push edi */
  push32((uint32_t)(EDI));
  /* 1046584c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10465853 jmp 0x1046585e */
  goto L_1046585e;
L_10465855:;
  /* 10465855 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465858 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046585b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1046585e:;
  /* 1046585e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465862 jae 0x10465877 */
  if (!C.cf) goto L_10465877;
  /* 10465864 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465867 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046586a cmp edx, dword ptr [ecx*8 + 0x1048cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1048cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465871 jne 0x10465875 */
  if (!C.zf) goto L_10465875;
  /* 10465873 jmp 0x10465877 */
  goto L_10465877;
L_10465875:;
  /* 10465875 jmp 0x10465855 */
  goto L_10465855;
L_10465877:;
  /* 10465877 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046587a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046587d cmp ecx, dword ptr [eax*8 + 0x1048cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1048cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465884 jne 0x104659f8 */
  if (!C.zf) goto L_104659f8;
  /* 1046588a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465891 je 0x104658b4 */
  if (C.zf) goto L_104658b4;
  /* 10465893 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465896 mov eax, dword ptr [edx*8 + 0x1048cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1048cab4)));
  /* 1046589d push eax */
  push32((uint32_t)(EAX));
  /* 1046589e push 0 */
  push32((uint32_t)(0x0u));
  /* 104658a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104658a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104658a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104658a6 call 0x10461fd0 */
  push32(0x104658abu); f_10461fd0();
  /* 104658ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104658ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104658b1 jne 0x104658b4 */
  if (!C.zf) goto L_104658b4;
  /* 104658b3 int3  */
  x86_unimpl("int3 @ 0x104658b3");
L_104658b4:;
  /* 104658b4 cmp dword ptr [0x1048e470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104658bb je 0x104658cf */
  if (C.zf) goto L_104658cf;
  /* 104658bd cmp dword ptr [0x1048e470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104658c4 jne 0x10465908 */
  if (!C.zf) goto L_10465908;
  /* 104658c6 cmp dword ptr [0x1048e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104658cd jne 0x10465908 */
  if (!C.zf) goto L_10465908;
L_104658cf:;
  /* 104658cf push 0 */
  push32((uint32_t)(0x0u));
  /* 104658d1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 104658d4 push ecx */
  push32((uint32_t)(ECX));
  /* 104658d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104658d8 mov eax, dword ptr [edx*8 + 0x1048cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1048cab4)));
  /* 104658df push eax */
  push32((uint32_t)(EAX));
  /* 104658e0 call 0x10465d40 */
  push32(0x104658e5u); f_10465d40();
  /* 104658e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104658e8 push eax */
  push32((uint32_t)(EAX));
  /* 104658e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104658ec mov edx, dword ptr [ecx*8 + 0x1048cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1048cab4)));
  /* 104658f3 push edx */
  push32((uint32_t)(EDX));
  /* 104658f4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 104658f6 call dword ptr [0x1049027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049027c))), 0x104658fcu);
  /* 104658fc push eax */
  push32((uint32_t)(EAX));
  /* 104658fd call dword ptr [0x10490280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490280))), 0x10465903u);
  /* 10465903 jmp 0x104659f8 */
  goto L_104659f8;
L_10465908:;
  /* 10465908 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046590f je 0x104659f8 */
  if (C.zf) goto L_104659f8;
  /* 10465915 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1046591a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10465920 push eax */
  push32((uint32_t)(EAX));
  /* 10465921 push 0 */
  push32((uint32_t)(0x0u));
  /* 10465923 call dword ptr [0x10490298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490298))), 0x10465929u);
  /* 10465929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046592b jne 0x10465941 */
  if (!C.zf) goto L_10465941;
  /* 1046592d push 0x104893cc */
  push32((uint32_t)(0x104893ccu));
  /* 10465932 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10465938 push ecx */
  push32((uint32_t)(ECX));
  /* 10465939 call 0x10465ec0 */
  push32(0x1046593eu); f_10465ec0();
  /* 1046593e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10465941:;
  /* 10465941 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10465947 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1046594a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046594d push eax */
  push32((uint32_t)(EAX));
  /* 1046594e call 0x10465d40 */
  push32(0x10465953u); f_10465d40();
  /* 10465953 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10465956 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465959 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046595c jbe 0x1046598a */
  if ((C.cf||C.zf)) goto L_1046598a;
  /* 1046595e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10465964 push ecx */
  push32((uint32_t)(ECX));
  /* 10465965 call 0x10465d40 */
  push32(0x1046596au); f_10465d40();
  /* 1046596a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046596d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10465970 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10465974 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10465977 push 3 */
  push32((uint32_t)(0x3u));
  /* 10465979 push 0x104893c8 */
  push32((uint32_t)(0x104893c8u));
  /* 1046597e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10465981 push ecx */
  push32((uint32_t)(ECX));
  /* 10465982 call 0x10466730 */
  push32(0x10465987u); f_10466730();
  /* 10465987 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046598a:;
  /* 1046598a push 0x10489e20 */
  push32((uint32_t)(0x10489e20u));
  /* 1046598f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10465995 push edx */
  push32((uint32_t)(EDX));
  /* 10465996 call 0x10465ec0 */
  push32(0x1046599bu); f_10465ec0();
  /* 1046599b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046599e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104659a1 push eax */
  push32((uint32_t)(EAX));
  /* 104659a2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 104659a8 push ecx */
  push32((uint32_t)(ECX));
  /* 104659a9 call 0x10465ed0 */
  push32(0x104659aeu); f_10465ed0();
  /* 104659ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104659b1 push 0x10489340 */
  push32((uint32_t)(0x10489340u));
  /* 104659b6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 104659bc push edx */
  push32((uint32_t)(EDX));
  /* 104659bd call 0x10465ed0 */
  push32(0x104659c2u); f_10465ed0();
  /* 104659c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104659c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104659c8 mov ecx, dword ptr [eax*8 + 0x1048cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1048cab4)));
  /* 104659cf push ecx */
  push32((uint32_t)(ECX));
  /* 104659d0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 104659d6 push edx */
  push32((uint32_t)(EDX));
  /* 104659d7 call 0x10465ed0 */
  push32(0x104659dcu); f_10465ed0();
  /* 104659dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104659df push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 104659e4 push 0x10489df8 */
  push32((uint32_t)(0x10489df8u));
  /* 104659e9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 104659ef push eax */
  push32((uint32_t)(EAX));
  /* 104659f0 call 0x10466670 */
  push32(0x104659f5u); f_10466670();
  /* 104659f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104659f8:;
  /* 104659f8 pop edi */
  EDI = (pop32());
  /* 104659f9 pop esi */
  ESI = (pop32());
  /* 104659fa pop ebx */
  EBX = (pop32());
  /* 104659fb mov esp, ebp */
  ESP = (EBP);
  /* 104659fd pop ebp */
  EBP = (pop32());
  /* 104659fe ret  */
  ESPCHK(0x10465840u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10465a00 (80 bytes, 27 insns) */
void f_10465a00(void) {
  FTRACE(0x10465a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10465a01 mov ebp, esp */
  EBP = (ESP);
  /* 10465a03 push ecx */
  push32((uint32_t)(ECX));
  /* 10465a04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10465a0b jmp 0x10465a16 */
  goto L_10465a16;
L_10465a0d:;
  /* 10465a0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465a10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465a13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10465a16:;
  /* 10465a16 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465a1a jae 0x10465a2f */
  if (!C.cf) goto L_10465a2f;
  /* 10465a1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465a1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465a22 cmp edx, dword ptr [ecx*8 + 0x1048cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1048cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465a29 jne 0x10465a2d */
  if (!C.zf) goto L_10465a2d;
  /* 10465a2b jmp 0x10465a2f */
  goto L_10465a2f;
L_10465a2d:;
  /* 10465a2d jmp 0x10465a0d */
  goto L_10465a0d;
L_10465a2f:;
  /* 10465a2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465a32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465a35 cmp ecx, dword ptr [eax*8 + 0x1048cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1048cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465a3c jne 0x10465a4a */
  if (!C.zf) goto L_10465a4a;
  /* 10465a3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465a41 mov eax, dword ptr [edx*8 + 0x1048cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1048cab4)));
  /* 10465a48 jmp 0x10465a4c */
  goto L_10465a4c;
L_10465a4a:;
  /* 10465a4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10465a4c:;
  /* 10465a4c mov esp, ebp */
  ESP = (EBP);
  /* 10465a4e pop ebp */
  EBP = (pop32());
  /* 10465a4f ret  */
  ESPCHK(0x10465a00u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10465a50 (66 bytes, 28 insns) */
void f_10465a50(void) {
  FTRACE(0x10465a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10465a51 mov ebp, esp */
  EBP = (ESP);
  /* 10465a53 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465a57 jne 0x10465a77 */
  if (!C.zf) goto L_10465a77;
  /* 10465a59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465a5d jge 0x10465a77 */
  if ((C.sf==C.of)) goto L_10465a77;
  /* 10465a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10465a61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465a64 push eax */
  push32((uint32_t)(EAX));
  /* 10465a65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465a68 push ecx */
  push32((uint32_t)(ECX));
  /* 10465a69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465a6c push edx */
  push32((uint32_t)(EDX));
  /* 10465a6d call 0x10465aa0 */
  push32(0x10465a72u); f_10465aa0();
  /* 10465a72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10465a75 jmp 0x10465a8d */
  goto L_10465a8d;
L_10465a77:;
  /* 10465a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10465a79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465a7c push eax */
  push32((uint32_t)(EAX));
  /* 10465a7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465a80 push ecx */
  push32((uint32_t)(ECX));
  /* 10465a81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465a84 push edx */
  push32((uint32_t)(EDX));
  /* 10465a85 call 0x10465aa0 */
  push32(0x10465a8au); f_10465aa0();
  /* 10465a8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10465a8d:;
  /* 10465a8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465a90 pop ebp */
  EBP = (pop32());
  /* 10465a91 ret  */
  ESPCHK(0x10465a50u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10465aa0 (194 bytes, 71 insns) */
void f_10465aa0(void) {
  FTRACE(0x10465aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10465aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10465aa3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465aa6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465aa9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10465aac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465ab0 je 0x10465ac9 */
  if (C.zf) goto L_10465ac9;
  /* 10465ab2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465ab5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10465ab8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465abb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465abe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10465ac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465ac4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10465ac6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10465ac9:;
  /* 10465ac9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465acc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10465acf:;
  /* 10465acf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465ad2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10465ad4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10465ad7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10465ada mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465add xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10465adf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10465ae2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10465ae5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465ae9 jbe 0x10465b01 */
  if ((C.cf||C.zf)) goto L_10465b01;
  /* 10465aeb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10465aee add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465af1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465af4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10465af6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465af9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465afc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10465aff jmp 0x10465b15 */
  goto L_10465b15;
L_10465b01:;
  /* 10465b01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10465b04 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465b07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465b0a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10465b0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465b0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465b12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10465b15:;
  /* 10465b15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465b19 ja 0x10465acf */
  if ((!C.cf&&!C.zf)) goto L_10465acf;
  /* 10465b1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465b1e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10465b21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465b24 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465b27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10465b2a:;
  /* 10465b2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465b2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10465b2f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10465b32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465b35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465b38 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10465b3a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10465b3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465b3f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10465b42 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10465b44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465b47 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465b4a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10465b4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465b50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465b53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10465b56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465b59 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465b5c jb 0x10465b2a */
  if (C.cf) goto L_10465b2a;
  /* 10465b5e mov esp, ebp */
  ESP = (EBP);
  /* 10465b60 pop ebp */
  EBP = (pop32());
  /* 10465b61 ret  */
  ESPCHK(0x10465aa0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10465b70 (63 bytes, 24 insns) */
void f_10465b70(void) {
  FTRACE(0x10465b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10465b71 mov ebp, esp */
  EBP = (ESP);
  /* 10465b73 push ecx */
  push32((uint32_t)(ECX));
  /* 10465b74 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465b78 jne 0x10465b89 */
  if (!C.zf) goto L_10465b89;
  /* 10465b7a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465b7e jge 0x10465b89 */
  if ((C.sf==C.of)) goto L_10465b89;
  /* 10465b80 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10465b87 jmp 0x10465b90 */
  goto L_10465b90;
L_10465b89:;
  /* 10465b89 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10465b90:;
  /* 10465b90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465b93 push eax */
  push32((uint32_t)(EAX));
  /* 10465b94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465b97 push ecx */
  push32((uint32_t)(ECX));
  /* 10465b98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465b9b push edx */
  push32((uint32_t)(EDX));
  /* 10465b9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465b9f push eax */
  push32((uint32_t)(EAX));
  /* 10465ba0 call 0x10465aa0 */
  push32(0x10465ba5u); f_10465aa0();
  /* 10465ba5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10465ba8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465bab mov esp, ebp */
  ESP = (EBP);
  /* 10465bad pop ebp */
  EBP = (pop32());
  /* 10465bae ret  */
  ESPCHK(0x10465b70u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10465bb0 (30 bytes, 14 insns) */
void f_10465bb0(void) {
  FTRACE(0x10465bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10465bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10465bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10465bb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465bb8 push eax */
  push32((uint32_t)(EAX));
  /* 10465bb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465bbc push ecx */
  push32((uint32_t)(ECX));
  /* 10465bbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465bc0 push edx */
  push32((uint32_t)(EDX));
  /* 10465bc1 call 0x10465aa0 */
  push32(0x10465bc6u); f_10465aa0();
  /* 10465bc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10465bc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465bcc pop ebp */
  EBP = (pop32());
  /* 10465bcd ret  */
  ESPCHK(0x10465bb0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10465bd0 (72 bytes, 28 insns) */
void f_10465bd0(void) {
  FTRACE(0x10465bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10465bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10465bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10465bd4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465bd8 jne 0x10465bf1 */
  if (!C.zf) goto L_10465bf1;
  /* 10465bda cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465bde jg 0x10465bf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10465bf1;
  /* 10465be0 jl 0x10465be8 */
  if ((C.sf!=C.of)) goto L_10465be8;
  /* 10465be2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465be6 jae 0x10465bf1 */
  if (!C.cf) goto L_10465bf1;
L_10465be8:;
  /* 10465be8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10465bef jmp 0x10465bf8 */
  goto L_10465bf8;
L_10465bf1:;
  /* 10465bf1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10465bf8:;
  /* 10465bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465bfb push eax */
  push32((uint32_t)(EAX));
  /* 10465bfc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10465bff push ecx */
  push32((uint32_t)(ECX));
  /* 10465c00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465c03 push edx */
  push32((uint32_t)(EDX));
  /* 10465c04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465c07 push eax */
  push32((uint32_t)(EAX));
  /* 10465c08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465c0b push ecx */
  push32((uint32_t)(ECX));
  /* 10465c0c call 0x10465c20 */
  push32(0x10465c11u); f_10465c20();
  /* 10465c11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465c14 mov esp, ebp */
  ESP = (EBP);
  /* 10465c16 pop ebp */
  EBP = (pop32());
  /* 10465c17 ret  */
  ESPCHK(0x10465bd0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10465c20 (242 bytes, 91 insns) */
void f_10465c20(void) {
  FTRACE(0x10465c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10465c21 mov ebp, esp */
  EBP = (ESP);
  /* 10465c23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465c26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465c29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10465c2c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465c30 je 0x10465c54 */
  if (C.zf) goto L_10465c54;
  /* 10465c32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465c35 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10465c38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465c3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465c3e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10465c41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465c44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10465c46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465c49 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465c4c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10465c4e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10465c51 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10465c54:;
  /* 10465c54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465c57 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10465c5a:;
  /* 10465c5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10465c5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10465c5f push ecx */
  push32((uint32_t)(ECX));
  /* 10465c60 push eax */
  push32((uint32_t)(EAX));
  /* 10465c61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465c64 push edx */
  push32((uint32_t)(EDX));
  /* 10465c65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465c68 push eax */
  push32((uint32_t)(EAX));
  /* 10465c69 call 0x10469ba0 */
  push32(0x10465c6eu); f_10469ba0();
  /* 10465c6e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10465c71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10465c74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10465c76 push edx */
  push32((uint32_t)(EDX));
  /* 10465c77 push ecx */
  push32((uint32_t)(ECX));
  /* 10465c78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465c7b push eax */
  push32((uint32_t)(EAX));
  /* 10465c7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465c7f push ecx */
  push32((uint32_t)(ECX));
  /* 10465c80 call 0x10469b30 */
  push32(0x10465c85u); f_10469b30();
  /* 10465c85 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10465c88 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10465c8b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465c8f jbe 0x10465ca7 */
  if ((C.cf||C.zf)) goto L_10465ca7;
  /* 10465c91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10465c94 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465c97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465c9a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10465c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465c9f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465ca2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10465ca5 jmp 0x10465cbb */
  goto L_10465cbb;
L_10465ca7:;
  /* 10465ca7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10465caa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465cad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465cb0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10465cb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465cb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465cb8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10465cbb:;
  /* 10465cbb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465cbf ja 0x10465c5a */
  if ((!C.cf&&!C.zf)) goto L_10465c5a;
  /* 10465cc1 jb 0x10465cc9 */
  if (C.cf) goto L_10465cc9;
  /* 10465cc3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465cc7 ja 0x10465c5a */
  if ((!C.cf&&!C.zf)) goto L_10465c5a;
L_10465cc9:;
  /* 10465cc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465ccc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10465ccf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465cd2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465cd5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10465cd8:;
  /* 10465cd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465cdb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10465cdd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10465ce0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465ce3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465ce6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10465ce8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10465cea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465ced mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10465cf0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10465cf2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10465cf5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465cf8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10465cfb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465cfe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465d01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10465d04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10465d07 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465d0a jb 0x10465cd8 */
  if (C.cf) goto L_10465cd8;
  /* 10465d0c mov esp, ebp */
  ESP = (EBP);
  /* 10465d0e pop ebp */
  EBP = (pop32());
  /* 10465d0f ret 0x14 */
  ESPCHK(0x10465c20u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10465d20 (31 bytes, 15 insns) */
void f_10465d20(void) {
  FTRACE(0x10465d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10465d21 mov ebp, esp */
  EBP = (ESP);
  /* 10465d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10465d25 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10465d28 push eax */
  push32((uint32_t)(EAX));
  /* 10465d29 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465d2c push ecx */
  push32((uint32_t)(ECX));
  /* 10465d2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465d30 push edx */
  push32((uint32_t)(EDX));
  /* 10465d31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465d34 push eax */
  push32((uint32_t)(EAX));
  /* 10465d35 call 0x10465c20 */
  push32(0x10465d3au); f_10465c20();
  /* 10465d3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465d3d pop ebp */
  EBP = (pop32());
  /* 10465d3e ret  */
  ESPCHK(0x10465d20u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10465d40 (123 bytes, 44 insns) */
void f_10465d40(void) {
  FTRACE(0x10465d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465d40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10465d44 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10465d4a je 0x10465d60 */
  if (C.zf) goto L_10465d60;
L_10465d4c:;
  /* 10465d4c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10465d4e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10465d4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10465d51 je 0x10465d93 */
  if (C.zf) goto L_10465d93;
  /* 10465d53 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10465d59 jne 0x10465d4c */
  if (!C.zf) goto L_10465d4c;
  /* 10465d5b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10465d60:;
  /* 10465d60 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10465d62 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10465d67 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465d69 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10465d6c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10465d6e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465d71 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10465d76 je 0x10465d60 */
  if (C.zf) goto L_10465d60;
  /* 10465d78 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10465d7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10465d7d je 0x10465db1 */
  if (C.zf) goto L_10465db1;
  /* 10465d7f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10465d81 je 0x10465da7 */
  if (C.zf) goto L_10465da7;
  /* 10465d83 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10465d88 je 0x10465d9d */
  if (C.zf) goto L_10465d9d;
  /* 10465d8a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10465d8f je 0x10465d93 */
  if (C.zf) goto L_10465d93;
  /* 10465d91 jmp 0x10465d60 */
  goto L_10465d60;
L_10465d93:;
  /* 10465d93 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10465d96 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10465d9a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465d9c ret  */
  ESPCHK(0x10465d40u, _esp0);
  ESP += 4; return;
L_10465d9d:;
  /* 10465d9d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10465da0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10465da4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465da6 ret  */
  ESPCHK(0x10465d40u, _esp0);
  ESP += 4; return;
L_10465da7:;
  /* 10465da7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10465daa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10465dae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465db0 ret  */
  ESPCHK(0x10465d40u, _esp0);
  ESP += 4; return;
L_10465db1:;
  /* 10465db1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10465db4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10465db8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465dba ret  */
  ESPCHK(0x10465d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dc0 @ 0x10465dc0 (249 bytes, 93 insns) */
void f_10465dc0(void) {
  FTRACE(0x10465dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10465dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10465dc3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 10465dc7 push esi */
  push32((uint32_t)(ESI));
  /* 10465dc8 push edi */
  push32((uint32_t)(EDI));
  /* 10465dc9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10465dcc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10465dcf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10465dd2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10465dd5:;
  /* 10465dd5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465dd9 jne 0x10465df9 */
  if (!C.zf) goto L_10465df9;
  /* 10465ddb push 0x10489e58 */
  push32((uint32_t)(0x10489e58u));
  /* 10465de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10465de2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10465de4 push 0x10489e4c */
  push32((uint32_t)(0x10489e4cu));
  /* 10465de9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10465deb call 0x10461fd0 */
  push32(0x10465df0u); f_10461fd0();
  /* 10465df0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10465df3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465df6 jne 0x10465df9 */
  if (!C.zf) goto L_10465df9;
  /* 10465df8 int3  */
  x86_unimpl("int3 @ 0x10465df8");
L_10465df9:;
  /* 10465df9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10465dfb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10465dfd jne 0x10465dd5 */
  if (!C.zf) goto L_10465dd5;
L_10465dff:;
  /* 10465dff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465e03 jne 0x10465e23 */
  if (!C.zf) goto L_10465e23;
  /* 10465e05 push 0x10489e3c */
  push32((uint32_t)(0x10489e3cu));
  /* 10465e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10465e0c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10465e0e push 0x10489e4c */
  push32((uint32_t)(0x10489e4cu));
  /* 10465e13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10465e15 call 0x10461fd0 */
  push32(0x10465e1au); f_10461fd0();
  /* 10465e1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10465e1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465e20 jne 0x10465e23 */
  if (!C.zf) goto L_10465e23;
  /* 10465e22 int3  */
  x86_unimpl("int3 @ 0x10465e22");
L_10465e23:;
  /* 10465e23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10465e25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10465e27 jne 0x10465dff */
  if (!C.zf) goto L_10465dff;
  /* 10465e29 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10465e2c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10465e33 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10465e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465e39 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10465e3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10465e3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10465e42 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10465e44 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10465e47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10465e4a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10465e4d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10465e50 push edx */
  push32((uint32_t)(EDX));
  /* 10465e51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10465e54 push eax */
  push32((uint32_t)(EAX));
  /* 10465e55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10465e58 push ecx */
  push32((uint32_t)(ECX));
  /* 10465e59 call 0x10469ea0 */
  push32(0x10465e5eu); f_10469ea0();
  /* 10465e5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10465e61 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10465e64 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10465e67 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10465e6a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465e6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10465e70 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10465e73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10465e76 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465e7a jl 0x10465e9e */
  if ((C.sf!=C.of)) goto L_10465e9e;
  /* 10465e7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10465e7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10465e81 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10465e84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10465e86 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10465e8c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10465e8f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10465e92 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10465e94 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465e97 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10465e9a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10465e9c jmp 0x10465eaf */
  goto L_10465eaf;
L_10465e9e:;
  /* 10465e9e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10465ea1 push eax */
  push32((uint32_t)(EAX));
  /* 10465ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10465ea4 call 0x10469c20 */
  push32(0x10465ea9u); f_10469c20();
  /* 10465ea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10465eac mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10465eaf:;
  /* 10465eaf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10465eb2 pop edi */
  EDI = (pop32());
  /* 10465eb3 pop esi */
  ESI = (pop32());
  /* 10465eb4 pop ebx */
  EBX = (pop32());
  /* 10465eb5 mov esp, ebp */
  ESP = (EBP);
  /* 10465eb7 pop ebp */
  EBP = (pop32());
  /* 10465eb8 ret  */
  ESPCHK(0x10465dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec0 @ 0x10465ec0 (7 bytes, 3 insns) */
void f_10465ec0(void) {
  FTRACE(0x10465ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465ec0 push edi */
  push32((uint32_t)(EDI));
  /* 10465ec1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10465ec5 jmp 0x10465f31 */
  jmp_ind(0x10465f31u); return;
}

/* FUN_10005ed0 @ 0x10465ed0 (224 bytes, 84 insns) */
void f_10465ed0(void) {
  FTRACE(0x10465ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465ed0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10465ed4 push edi */
  push32((uint32_t)(EDI));
  /* 10465ed5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10465edb je 0x10465eec */
  if (C.zf) goto L_10465eec;
L_10465edd:;
  /* 10465edd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10465edf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10465ee0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10465ee2 je 0x10465f1f */
  if (C.zf) goto L_10465f1f;
  /* 10465ee4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10465eea jne 0x10465edd */
  if (!C.zf) goto L_10465edd;
L_10465eec:;
  /* 10465eec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10465eee mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10465ef3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465ef5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10465ef8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10465efa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465efd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10465f02 je 0x10465eec */
  if (C.zf) goto L_10465eec;
  /* 10465f04 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10465f07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10465f09 je 0x10465f2e */
  if (C.zf) goto L_10465f2e;
  /* 10465f0b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10465f0d je 0x10465f29 */
  if (C.zf) goto L_10465f29;
  /* 10465f0f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10465f14 je 0x10465f24 */
  if (C.zf) goto L_10465f24;
  /* 10465f16 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10465f1b je 0x10465f1f */
  if (C.zf) goto L_10465f1f;
  /* 10465f1d jmp 0x10465eec */
  goto L_10465eec;
L_10465f1f:;
  /* 10465f1f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10465f22 jmp 0x10465f31 */
  goto L_10465f31;
L_10465f24:;
  /* 10465f24 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10465f27 jmp 0x10465f31 */
  goto L_10465f31;
L_10465f29:;
  /* 10465f29 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10465f2c jmp 0x10465f31 */
  goto L_10465f31;
L_10465f2e:;
  /* 10465f2e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10465f31:;
  /* 10465f31 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10465f35 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10465f3b je 0x10465f56 */
  if (C.zf) goto L_10465f56;
L_10465f3d:;
  /* 10465f3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10465f3f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10465f40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10465f42 je 0x10465fa8 */
  if (C.zf) goto L_10465fa8;
  /* 10465f44 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10465f46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10465f47 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10465f4d jne 0x10465f3d */
  if (!C.zf) goto L_10465f3d;
  /* 10465f4f jmp 0x10465f56 */
  goto L_10465f56;
L_10465f51:;
  /* 10465f51 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10465f53 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10465f56:;
  /* 10465f56 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10465f5b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10465f5d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465f5f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10465f62 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10465f64 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10465f66 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10465f69 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10465f6e je 0x10465f51 */
  if (C.zf) goto L_10465f51;
  /* 10465f70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10465f72 je 0x10465fa8 */
  if (C.zf) goto L_10465fa8;
  /* 10465f74 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10465f76 je 0x10465f9f */
  if (C.zf) goto L_10465f9f;
  /* 10465f78 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10465f7e je 0x10465f92 */
  if (C.zf) goto L_10465f92;
  /* 10465f80 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10465f86 je 0x10465f8a */
  if (C.zf) goto L_10465f8a;
  /* 10465f88 jmp 0x10465f51 */
  goto L_10465f51;
L_10465f8a:;
  /* 10465f8a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10465f8c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10465f90 pop edi */
  EDI = (pop32());
  /* 10465f91 ret  */
  ESPCHK(0x10465ed0u, _esp0);
  ESP += 4; return;
L_10465f92:;
  /* 10465f92 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10465f95 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10465f99 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10465f9d pop edi */
  EDI = (pop32());
  /* 10465f9e ret  */
  ESPCHK(0x10465ed0u, _esp0);
  ESP += 4; return;
L_10465f9f:;
  /* 10465f9f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10465fa2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10465fa6 pop edi */
  EDI = (pop32());
  /* 10465fa7 ret  */
  ESPCHK(0x10465ed0u, _esp0);
  ESP += 4; return;
L_10465fa8:;
  /* 10465fa8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10465faa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10465fae pop edi */
  EDI = (pop32());
  /* 10465faf ret  */
  ESPCHK(0x10465ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fb0 @ 0x10465fb0 (243 bytes, 91 insns) */
void f_10465fb0(void) {
  FTRACE(0x10465fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10465fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10465fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10465fb3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10465fb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10465fb7 push esi */
  push32((uint32_t)(ESI));
  /* 10465fb8 push edi */
  push32((uint32_t)(EDI));
  /* 10465fb9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10465fbc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10465fbf:;
  /* 10465fbf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465fc3 jne 0x10465fe3 */
  if (!C.zf) goto L_10465fe3;
  /* 10465fc5 push 0x10489e58 */
  push32((uint32_t)(0x10489e58u));
  /* 10465fca push 0 */
  push32((uint32_t)(0x0u));
  /* 10465fcc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10465fce push 0x10489e68 */
  push32((uint32_t)(0x10489e68u));
  /* 10465fd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10465fd5 call 0x10461fd0 */
  push32(0x10465fdau); f_10461fd0();
  /* 10465fda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10465fdd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465fe0 jne 0x10465fe3 */
  if (!C.zf) goto L_10465fe3;
  /* 10465fe2 int3  */
  x86_unimpl("int3 @ 0x10465fe2");
L_10465fe3:;
  /* 10465fe3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10465fe5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10465fe7 jne 0x10465fbf */
  if (!C.zf) goto L_10465fbf;
L_10465fe9:;
  /* 10465fe9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10465fed jne 0x1046600d */
  if (!C.zf) goto L_1046600d;
  /* 10465fef push 0x10489e3c */
  push32((uint32_t)(0x10489e3cu));
  /* 10465ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10465ff6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10465ff8 push 0x10489e68 */
  push32((uint32_t)(0x10489e68u));
  /* 10465ffd push 2 */
  push32((uint32_t)(0x2u));
  /* 10465fff call 0x10461fd0 */
  push32(0x10466004u); f_10461fd0();
  /* 10466004 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466007 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046600a jne 0x1046600d */
  if (!C.zf) goto L_1046600d;
  /* 1046600c int3  */
  x86_unimpl("int3 @ 0x1046600c");
L_1046600d:;
  /* 1046600d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1046600f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10466011 jne 0x10465fe9 */
  if (!C.zf) goto L_10465fe9;
  /* 10466013 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10466016 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1046601d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10466020 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466023 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10466026 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10466029 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046602c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1046602e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10466031 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466034 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10466037 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046603a push ecx */
  push32((uint32_t)(ECX));
  /* 1046603b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046603e push edx */
  push32((uint32_t)(EDX));
  /* 1046603f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10466042 push eax */
  push32((uint32_t)(EAX));
  /* 10466043 call 0x10469ea0 */
  push32(0x10466048u); f_10469ea0();
  /* 10466048 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046604b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1046604e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10466051 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10466054 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10466057 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046605a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1046605d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10466060 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466064 jl 0x10466088 */
  if ((C.sf!=C.of)) goto L_10466088;
  /* 10466066 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10466069 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1046606b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1046606e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10466070 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10466076 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10466079 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046607c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1046607e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466081 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10466084 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10466086 jmp 0x10466099 */
  goto L_10466099;
L_10466088:;
  /* 10466088 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046608b push edx */
  push32((uint32_t)(EDX));
  /* 1046608c push 0 */
  push32((uint32_t)(0x0u));
  /* 1046608e call 0x10469c20 */
  push32(0x10466093u); f_10469c20();
  /* 10466093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466096 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10466099:;
  /* 10466099 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1046609c pop edi */
  EDI = (pop32());
  /* 1046609d pop esi */
  ESI = (pop32());
  /* 1046609e pop ebx */
  EBX = (pop32());
  /* 1046609f mov esp, ebp */
  ESP = (EBP);
  /* 104660a1 pop ebp */
  EBP = (pop32());
  /* 104660a2 ret  */
  ESPCHK(0x10465fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060b0 @ 0x104660b0 (47 bytes, 17 insns) */
void f_104660b0(void) {
  FTRACE(0x104660b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104660b0 push ecx */
  push32((uint32_t)(ECX));
  /* 104660b1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104660b6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 104660ba jb 0x104660d0 */
  if (C.cf) goto L_104660d0;
L_104660bc:;
  /* 104660bc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104660c2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104660c7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 104660c9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104660ce jae 0x104660bc */
  if (!C.cf) goto L_104660bc;
L_104660d0:;
  /* 104660d0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104660d2 mov eax, esp */
  EAX = (ESP);
  /* 104660d4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 104660d6 mov esp, ecx */
  ESP = (ECX);
  /* 104660d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104660da mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 104660dd push eax */
  push32((uint32_t)(EAX));
  /* 104660de ret  */
  ESPCHK(0x104660b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060e0 @ 0x104660e0 (448 bytes, 130 insns) [1 switch table(s)] */
void f_104660e0(void) {
  FTRACE(0x104660e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104660e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104660e1 mov ebp, esp */
  EBP = (ESP);
  /* 104660e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104660e6 push esi */
  push32((uint32_t)(ESI));
  /* 104660e7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104660eb je 0x104660f3 */
  if (C.zf) goto L_104660f3;
  /* 104660ed cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104660f1 jne 0x104660f8 */
  if (!C.zf) goto L_104660f8;
L_104660f3:;
  /* 104660f3 jmp 0x104662c8 */
  f_104662c8(); return;
L_104660f8:;
  /* 104660f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104660fc je 0x10466114 */
  if (C.zf) goto L_10466114;
  /* 104660fe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466102 je 0x10466114 */
  if (C.zf) goto L_10466114;
  /* 10466104 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466108 je 0x10466114 */
  if (C.zf) goto L_10466114;
  /* 1046610a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046610e jne 0x104661f1 */
  if (!C.zf) goto L_104661f1;
L_10466114:;
  /* 10466114 push 1 */
  push32((uint32_t)(0x1u));
  /* 10466116 call 0x10466910 */
  push32(0x1046611bu); f_10466910();
  /* 1046611b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046611e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466122 je 0x1046612a */
  if (C.zf) goto L_1046612a;
  /* 10466124 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466128 jne 0x1046616f */
  if (!C.zf) goto L_1046616f;
L_1046612a:;
  /* 1046612a cmp dword ptr [0x1048e5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466131 jne 0x1046616f */
  if (!C.zf) goto L_1046616f;
  /* 10466133 push 1 */
  push32((uint32_t)(0x1u));
  /* 10466135 push 0x10466310 */
  push32((uint32_t)(0x10466310u));
  /* 1046613a call dword ptr [0x10490308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490308))), 0x10466140u);
  /* 10466140 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466143 jne 0x10466151 */
  if (!C.zf) goto L_10466151;
  /* 10466145 mov dword ptr [0x1048e5f4], 1 */
  w32((uint32_t)(0x1048e5f4), (0x1u));
  /* 1046614f jmp 0x1046616f */
  goto L_1046616f;
L_10466151:;
  /* 10466151 call dword ptr [0x104902c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902c0))), 0x10466157u);
  /* 10466157 mov esi, eax */
  ESI = (EAX);
  /* 10466159 call 0x1046adf0 */
  push32(0x1046615eu); f_1046adf0();
  /* 1046615e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10466160 push 1 */
  push32((uint32_t)(0x1u));
  /* 10466162 call 0x104669b0 */
  push32(0x10466167u); f_104669b0();
  /* 10466167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046616a jmp 0x104662c8 */
  f_104662c8(); return;
L_1046616f:;
  /* 1046616f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466172 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10466175 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466178 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046617b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1046617e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466182 ja 0x104661e2 */
  if ((!C.cf&&!C.zf)) goto L_104661e2;
  /* 10466184 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466187 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10466189 mov dl, byte ptr [eax + 0x104662ef] */
  DL = (r8((uint32_t)(EAX + 0x104662ef)));
  /* 1046618f jmp dword ptr [edx*4 + 0x104662db] */
  switch (EDX) {
    case 0: goto L_10466196;
    case 1: goto L_104661d0;
    case 2: goto L_104661aa;
    case 3: goto L_104661bd;
    case 4: goto L_104661e2;
    default: x86_unimpl("switch@0x1046618f out of table"); return;
  }
L_10466196:;
  /* 10466196 mov ecx, dword ptr [0x1048e5e4] */
  ECX = (r32((uint32_t)(0x1048e5e4)));
  /* 1046619c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046619f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104661a2 mov dword ptr [0x1048e5e4], edx */
  w32((uint32_t)(0x1048e5e4), (EDX));
  /* 104661a8 jmp 0x104661e2 */
  goto L_104661e2;
L_104661aa:;
  /* 104661aa mov eax, dword ptr [0x1048e5e8] */
  EAX = (r32((uint32_t)(0x1048e5e8)));
  /* 104661af mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104661b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104661b5 mov dword ptr [0x1048e5e8], ecx */
  w32((uint32_t)(0x1048e5e8), (ECX));
  /* 104661bb jmp 0x104661e2 */
  goto L_104661e2;
L_104661bd:;
  /* 104661bd mov edx, dword ptr [0x1048e5ec] */
  EDX = (r32((uint32_t)(0x1048e5ec)));
  /* 104661c3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104661c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104661c9 mov dword ptr [0x1048e5ec], eax */
  w32((uint32_t)(0x1048e5ec), (EAX));
  /* 104661ce jmp 0x104661e2 */
  goto L_104661e2;
L_104661d0:;
  /* 104661d0 mov ecx, dword ptr [0x1048e5f0] */
  ECX = (r32((uint32_t)(0x1048e5f0)));
  /* 104661d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104661d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104661dc mov dword ptr [0x1048e5f0], edx */
  w32((uint32_t)(0x1048e5f0), (EDX));
L_104661e2:;
  /* 104661e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104661e4 call 0x104669b0 */
  push32(0x104661e9u); f_104669b0();
  /* 104661e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104661ec jmp 0x104662c3 */
  jmp_ind(0x104662c3u); return;
L_104661f1:;
  /* 104661f1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104661f5 je 0x10466208 */
  if (C.zf) goto L_10466208;
  /* 104661f7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104661fb je 0x10466208 */
  if (C.zf) goto L_10466208;
  /* 104661fd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466201 je 0x10466208 */
  if (C.zf) goto L_10466208;
  /* 10466203 jmp 0x104662c8 */
  f_104662c8(); return;
L_10466208:;
  /* 10466208 call 0x10462950 */
  push32(0x1046620du); f_10462950();
  /* 1046620d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10466210 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466213 cmp dword ptr [eax + 0x50], 0x1048cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1048cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046621a jne 0x10466265 */
  if (!C.zf) goto L_10466265;
  /* 1046621c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10466221 push 0x10489e74 */
  push32((uint32_t)(0x10489e74u));
  /* 10466226 push 2 */
  push32((uint32_t)(0x2u));
  /* 10466228 mov ecx, dword ptr [0x1048cc80] */
  ECX = (r32((uint32_t)(0x1048cc80)));
  /* 1046622e push ecx */
  push32((uint32_t)(ECX));
  /* 1046622f call 0x10462f10 */
  push32(0x10466234u); f_10462f10();
  /* 10466234 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466237 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046623a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1046623d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466240 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466244 je 0x10466263 */
  if (C.zf) goto L_10466263;
  /* 10466246 mov ecx, dword ptr [0x1048cc80] */
  ECX = (r32((uint32_t)(0x1048cc80)));
  /* 1046624c push ecx */
  push32((uint32_t)(ECX));
  /* 1046624d push 0x1048cc00 */
  push32((uint32_t)(0x1048cc00u));
  /* 10466252 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466255 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10466258 push eax */
  push32((uint32_t)(EAX));
  /* 10466259 call 0x104697f0 */
  push32(0x1046625eu); f_104697f0();
  /* 1046625e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466261 jmp 0x10466265 */
  goto L_10466265;
L_10466263:;
  /* 10466263 jmp 0x104662c8 */
  f_104662c8(); return;
L_10466265:;
  /* 10466265 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466268 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1046626b push edx */
  push32((uint32_t)(EDX));
  /* 1046626c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046626f push eax */
  push32((uint32_t)(EAX));
  /* 10466270 call 0x104665f0 */
  push32(0x10466275u); f_104665f0();
  /* 10466275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466278 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046627b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046627f jne 0x10466283 */
  if (!C.zf) goto L_10466283;
  /* 10466281 jmp 0x104662c8 */
  f_104662c8(); return;
L_10466283:;
  /* 10466283 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466286 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10466289 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1046628c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046628f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10466292 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466295 jne 0x104662c3 */
  if (!C.zf) { jmp_ind(0x104662c3u); return; }
  /* 10466297 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046629a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046629d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
}

/* caseD_2 @ 0x10466196 (40 bytes, 92 insns) */
void f_10466196(void) {
  FTRACE(0x10466196u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466196 mov ecx, dword ptr [0x1048e5e4] */
  ECX = (r32((uint32_t)(0x1048e5e4)));
  /* 1046619c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046619f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104661a2 mov dword ptr [0x1048e5e4], edx */
  w32((uint32_t)(0x1048e5e4), (EDX));
  /* 104661a8 jmp 0x104661e2 */
  goto L_104661e2;
  /* 104661aa mov eax, dword ptr [0x1048e5e8] */
  EAX = (r32((uint32_t)(0x1048e5e8)));
  /* 104661af mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104661b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104661b5 mov dword ptr [0x1048e5e8], ecx */
  w32((uint32_t)(0x1048e5e8), (ECX));
  /* 104661bb jmp 0x104661e2 */
  goto L_104661e2;
  /* 104661bd mov edx, dword ptr [0x1048e5ec] */
  EDX = (r32((uint32_t)(0x1048e5ec)));
  /* 104661c3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104661c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104661c9 mov dword ptr [0x1048e5ec], eax */
  w32((uint32_t)(0x1048e5ec), (EAX));
  /* 104661ce jmp 0x104661e2 */
  goto L_104661e2;
  /* 104661d0 mov ecx, dword ptr [0x1048e5f0] */
  ECX = (r32((uint32_t)(0x1048e5f0)));
  /* 104661d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104661d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104661dc mov dword ptr [0x1048e5f0], edx */
  w32((uint32_t)(0x1048e5f0), (EDX));
L_104661e2:;
  /* 104661e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104661e4 call 0x104669b0 */
  push32(0x104661e9u); f_104669b0();
  /* 104661e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104661ec jmp 0x104662c3 */
  goto L_104662c3;
  /* 104661f1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104661f5 je 0x10466208 */
  if (C.zf) goto L_10466208;
  /* 104661f7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104661fb je 0x10466208 */
  if (C.zf) goto L_10466208;
  /* 104661fd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466201 je 0x10466208 */
  if (C.zf) goto L_10466208;
  /* 10466203 jmp 0x104662c8 */
  f_104662c8(); return;
L_10466208:;
  /* 10466208 call 0x10462950 */
  push32(0x1046620du); f_10462950();
  /* 1046620d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10466210 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466213 cmp dword ptr [eax + 0x50], 0x1048cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1048cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046621a jne 0x10466265 */
  if (!C.zf) goto L_10466265;
  /* 1046621c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10466221 push 0x10489e74 */
  push32((uint32_t)(0x10489e74u));
  /* 10466226 push 2 */
  push32((uint32_t)(0x2u));
  /* 10466228 mov ecx, dword ptr [0x1048cc80] */
  ECX = (r32((uint32_t)(0x1048cc80)));
  /* 1046622e push ecx */
  push32((uint32_t)(ECX));
  /* 1046622f call 0x10462f10 */
  push32(0x10466234u); f_10462f10();
  /* 10466234 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466237 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046623a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1046623d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466240 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466244 je 0x10466263 */
  if (C.zf) goto L_10466263;
  /* 10466246 mov ecx, dword ptr [0x1048cc80] */
  ECX = (r32((uint32_t)(0x1048cc80)));
  /* 1046624c push ecx */
  push32((uint32_t)(ECX));
  /* 1046624d push 0x1048cc00 */
  push32((uint32_t)(0x1048cc00u));
  /* 10466252 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466255 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10466258 push eax */
  push32((uint32_t)(EAX));
  /* 10466259 call 0x104697f0 */
  push32(0x1046625eu); f_104697f0();
  /* 1046625e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466261 jmp 0x10466265 */
  goto L_10466265;
L_10466263:;
  /* 10466263 jmp 0x104662c8 */
  f_104662c8(); return;
L_10466265:;
  /* 10466265 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466268 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1046626b push edx */
  push32((uint32_t)(EDX));
  /* 1046626c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046626f push eax */
  push32((uint32_t)(EAX));
  /* 10466270 call 0x104665f0 */
  push32(0x10466275u); f_104665f0();
  /* 10466275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466278 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046627b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046627f jne 0x10466283 */
  if (!C.zf) goto L_10466283;
  /* 10466281 jmp 0x104662c8 */
  f_104662c8(); return;
L_10466283:;
  /* 10466283 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466286 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10466289 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1046628c:;
  /* 1046628c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046628f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10466292 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466295 jne 0x104662c3 */
  if (!C.zf) goto L_104662c3;
  /* 10466297 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046629a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046629d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104662a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104662a3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104662a6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104662a9 mov edx, dword ptr [0x1048cc84] */
  EDX = (r32((uint32_t)(0x1048cc84)));
  /* 104662af imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104662b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104662b5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 104662b8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104662ba cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104662bd jb 0x104662c1 */
  if (C.cf) goto L_104662c1;
  /* 104662bf jmp 0x104662c3 */
  goto L_104662c3;
L_104662c1:;
  /* 104662c1 jmp 0x1046628c */
  goto L_1046628c;
L_104662c3:;
  /* 104662c3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104662c6 jmp 0x104662d6 */
  jmp_ind(0x104662d6u); return;
}

/* FUN_100062c8 @ 0x104662c8 (19 bytes, 7 insns) */
void f_104662c8(void) {
  FTRACE(0x104662c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104662c8 call 0x1046ade0 */
  push32(0x104662cdu); f_1046ade0();
  /* 104662cd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 104662d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104662d6 pop esi */
  ESI = (pop32());
  /* 104662d7 mov esp, ebp */
  ESP = (EBP);
  /* 104662d9 pop ebp */
  EBP = (pop32());
  /* 104662da ret  */
  ESPCHK(0x104662c8u, _esp0);
  ESP += 4; return;
}

/* FUN_10006310 @ 0x10466310 (146 bytes, 45 insns) */
void f_10466310(void) {
  FTRACE(0x10466310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466310 push ebp */
  push32((uint32_t)(EBP));
  /* 10466311 mov ebp, esp */
  EBP = (ESP);
  /* 10466313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10466316 push 1 */
  push32((uint32_t)(0x1u));
  /* 10466318 call 0x10466910 */
  push32(0x1046631du); f_10466910();
  /* 1046631d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466320 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466324 jne 0x1046633e */
  if (!C.zf) goto L_1046633e;
  /* 10466326 mov dword ptr [ebp - 8], 0x1048e5e4 */
  w32((uint32_t)(EBP + -0x8), (0x1048e5e4u));
  /* 1046632d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466330 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10466332 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10466335 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1046633c jmp 0x10466354 */
  goto L_10466354;
L_1046633e:;
  /* 1046633e mov dword ptr [ebp - 8], 0x1048e5e8 */
  w32((uint32_t)(EBP + -0x8), (0x1048e5e8u));
  /* 10466345 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466348 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1046634a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1046634d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10466354:;
  /* 10466354 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466358 jne 0x10466368 */
  if (!C.zf) goto L_10466368;
  /* 1046635a push 1 */
  push32((uint32_t)(0x1u));
  /* 1046635c call 0x104669b0 */
  push32(0x10466361u); f_104669b0();
  /* 10466361 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466364 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10466366 jmp 0x1046639c */
  goto L_1046639c;
L_10466368:;
  /* 10466368 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046636c je 0x1046638d */
  if (C.zf) goto L_1046638d;
  /* 1046636e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466371 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10466377 push 1 */
  push32((uint32_t)(0x1u));
  /* 10466379 call 0x104669b0 */
  push32(0x1046637eu); f_104669b0();
  /* 1046637e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466381 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466384 push edx */
  push32((uint32_t)(EDX));
  /* 10466385 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10466388u);
  /* 10466388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046638b jmp 0x10466397 */
  goto L_10466397;
L_1046638d:;
  /* 1046638d push 1 */
  push32((uint32_t)(0x1u));
  /* 1046638f call 0x104669b0 */
  push32(0x10466394u); f_104669b0();
  /* 10466394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10466397:;
  /* 10466397 mov eax, 1 */
  EAX = (0x1u);
L_1046639c:;
  /* 1046639c mov esp, ebp */
  ESP = (EBP);
  /* 1046639e pop ebp */
  EBP = (pop32());
  /* 1046639f ret 4 */
  ESPCHK(0x10466310u, _esp0);
  ESP += 8; return;
}

/* FUN_100063b0 @ 0x104663b0 (56 bytes, 15 insns) */
void f_104663b0(void) {
  FTRACE(0x104663b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104663b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104663b1 mov ebp, esp */
  EBP = (ESP);
  /* 104663b3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104663b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104663bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104663c0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104663c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104663c6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104663c9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104663cc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104663d0 ja 0x1046647e */
  if ((!C.cf&&!C.zf)) { jmp_ind(0x1046647eu); return; }
  /* 104663d6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104663d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104663db mov dl, byte ptr [eax + 0x104665d2] */
  DL = (r8((uint32_t)(EAX + 0x104665d2)));
  /* 104663e1 jmp dword ptr [edx*4 + 0x104665ba] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x104665ba)))); return;
}

/* caseD_2 @ 0x104663e8 (337 bytes, 147 insns) */
void f_104663e8(void) {
  FTRACE(0x104663e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104663e8 mov dword ptr [ebp - 0x18], 0x1048e5e4 */
  w32((uint32_t)(EBP + -0x18), (0x1048e5e4u));
  /* 104663ef mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104663f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104663f4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104663f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104663fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104663fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10466400 jmp 0x10466486 */
  goto L_10466486;
  /* 10466405 mov dword ptr [ebp - 0x18], 0x1048e5e8 */
  w32((uint32_t)(EBP + -0x18), (0x1048e5e8u));
  /* 1046640c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046640f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10466411 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10466414 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10466417 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046641a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1046641d jmp 0x10466486 */
  goto L_10466486;
  /* 1046641f mov dword ptr [ebp - 0x18], 0x1048e5ec */
  w32((uint32_t)(EBP + -0x18), (0x1048e5ecu));
  /* 10466426 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10466429 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1046642b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1046642e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10466431 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466434 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10466437 jmp 0x10466486 */
  goto L_10466486;
  /* 10466439 mov dword ptr [ebp - 0x18], 0x1048e5f0 */
  w32((uint32_t)(EBP + -0x18), (0x1048e5f0u));
  /* 10466440 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10466443 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10466445 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10466448 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046644b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046644e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10466451 jmp 0x10466486 */
  goto L_10466486;
  /* 10466453 call 0x10462950 */
  push32(0x10466458u); f_10462950();
  /* 10466458 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046645b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046645e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10466461 push edx */
  push32((uint32_t)(EDX));
  /* 10466462 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466465 push eax */
  push32((uint32_t)(EAX));
  /* 10466466 call 0x104665f0 */
  push32(0x1046646bu); f_104665f0();
  /* 1046646b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046646e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466471 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10466474 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10466477 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10466479 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1046647c jmp 0x10466486 */
  goto L_10466486;
  /* 1046647e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10466481 jmp 0x104665b6 */
  goto L_104665b6;
L_10466486:;
  /* 10466486 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046648a je 0x10466496 */
  if (C.zf) goto L_10466496;
  /* 1046648c push 1 */
  push32((uint32_t)(0x1u));
  /* 1046648e call 0x10466910 */
  push32(0x10466493u); f_10466910();
  /* 10466493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10466496:;
  /* 10466496 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046649a jne 0x104664b3 */
  if (!C.zf) goto L_104664b3;
  /* 1046649c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104664a0 je 0x104664ac */
  if (C.zf) goto L_104664ac;
  /* 104664a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104664a4 call 0x104669b0 */
  push32(0x104664a9u); f_104669b0();
  /* 104664a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104664ac:;
  /* 104664ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104664ae jmp 0x104665b6 */
  goto L_104665b6;
L_104664b3:;
  /* 104664b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104664b7 jne 0x104664d0 */
  if (!C.zf) goto L_104664d0;
  /* 104664b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104664bd je 0x104664c9 */
  if (C.zf) goto L_104664c9;
  /* 104664bf push 1 */
  push32((uint32_t)(0x1u));
  /* 104664c1 call 0x104669b0 */
  push32(0x104664c6u); f_104669b0();
  /* 104664c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104664c9:;
  /* 104664c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 104664cb call 0x104626d0 */
  push32(0x104664d0u); f_104626d0();
L_104664d0:;
  /* 104664d0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104664d4 je 0x104664e2 */
  if (C.zf) goto L_104664e2;
  /* 104664d6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104664da je 0x104664e2 */
  if (C.zf) goto L_104664e2;
  /* 104664dc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104664e0 jne 0x1046650e */
  if (!C.zf) goto L_1046650e;
L_104664e2:;
  /* 104664e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104664e5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 104664e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104664eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104664ee mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 104664f5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104664f9 jne 0x1046650e */
  if (!C.zf) goto L_1046650e;
  /* 104664fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104664fe mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10466501 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10466504 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466507 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1046650e:;
  /* 1046650e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466512 jne 0x10466550 */
  if (!C.zf) goto L_10466550;
  /* 10466514 mov eax, dword ptr [0x1048cc78] */
  EAX = (r32((uint32_t)(0x1048cc78)));
  /* 10466519 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1046651c jmp 0x10466527 */
  goto L_10466527;
L_1046651e:;
  /* 1046651e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466521 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466524 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10466527:;
  /* 10466527 mov edx, dword ptr [0x1048cc78] */
  EDX = (r32((uint32_t)(0x1048cc78)));
  /* 1046652d add edx, dword ptr [0x1048cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1048cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466533 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466536 jge 0x1046654e */
  if ((C.sf==C.of)) goto L_1046654e;
  /* 10466538 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046653b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046653e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466541 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10466544 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1046654c jmp 0x1046651e */
  goto L_1046651e;
L_1046654e:;
  /* 1046654e jmp 0x10466559 */
  goto L_10466559;
L_10466550:;
  /* 10466550 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10466553 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10466559:;
  /* 10466559 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046655d je 0x10466569 */
  if (C.zf) goto L_10466569;
  /* 1046655f push 1 */
  push32((uint32_t)(0x1u));
  /* 10466561 call 0x104669b0 */
  push32(0x10466566u); f_104669b0();
  /* 10466566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10466569:;
  /* 10466569 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046656d jne 0x10466580 */
  if (!C.zf) goto L_10466580;
  /* 1046656f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466572 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10466575 push edx */
  push32((uint32_t)(EDX));
  /* 10466576 push 8 */
  push32((uint32_t)(0x8u));
  /* 10466578 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1046657bu);
  /* 1046657b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046657e jmp 0x1046658a */
  goto L_1046658a;
L_10466580:;
  /* 10466580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466583 push eax */
  push32((uint32_t)(EAX));
  /* 10466584 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10466587u);
  /* 10466587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046658a:;
  /* 1046658a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046658e je 0x1046659c */
  if (C.zf) goto L_1046659c;
  /* 10466590 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466594 je 0x1046659c */
  if (C.zf) goto L_1046659c;
  /* 10466596 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046659a jne 0x104665b4 */
  if (!C.zf) goto L_104665b4;
L_1046659c:;
  /* 1046659c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046659f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104665a2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 104665a5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104665a9 jne 0x104665b4 */
  if (!C.zf) goto L_104665b4;
  /* 104665ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104665ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104665b1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_104665b4:;
  /* 104665b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104665b6:;
  /* 104665b6 mov esp, ebp */
  ESP = (EBP);
  /* 104665b8 pop ebp */
  EBP = (pop32());
  /* 104665b9 ret  */
  ESPCHK(0x104663e8u, _esp0);
  ESP += 4; return;
}

/* FUN_100065f0 @ 0x104665f0 (91 bytes, 35 insns) */
void f_104665f0(void) {
  FTRACE(0x104665f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104665f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104665f1 mov ebp, esp */
  EBP = (ESP);
  /* 104665f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104665f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104665f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104665fa:;
  /* 104665fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104665fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10466600 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466603 je 0x10466623 */
  if (C.zf) goto L_10466623;
  /* 10466605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466608 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046660b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046660e mov ecx, dword ptr [0x1048cc84] */
  ECX = (r32((uint32_t)(0x1048cc84)));
  /* 10466614 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10466617 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046661a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046661c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046661f jae 0x10466623 */
  if (!C.cf) goto L_10466623;
  /* 10466621 jmp 0x104665fa */
  goto L_104665fa;
L_10466623:;
  /* 10466623 mov eax, dword ptr [0x1048cc84] */
  EAX = (r32((uint32_t)(0x1048cc84)));
  /* 10466628 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046662b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046662e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466630 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466633 jae 0x10466645 */
  if (!C.cf) goto L_10466645;
  /* 10466635 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466638 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1046663b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046663e jne 0x10466645 */
  if (!C.zf) goto L_10466645;
  /* 10466640 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466643 jmp 0x10466647 */
  goto L_10466647;
L_10466645:;
  /* 10466645 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10466647:;
  /* 10466647 mov esp, ebp */
  ESP = (EBP);
  /* 10466649 pop ebp */
  EBP = (pop32());
  /* 1046664a ret  */
  ESPCHK(0x104665f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006650 @ 0x10466650 (13 bytes, 6 insns) */
void f_10466650(void) {
  FTRACE(0x10466650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466650 push ebp */
  push32((uint32_t)(EBP));
  /* 10466651 mov ebp, esp */
  EBP = (ESP);
  /* 10466653 call 0x10462950 */
  push32(0x10466658u); f_10462950();
  /* 10466658 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046665b pop ebp */
  EBP = (pop32());
  /* 1046665c ret  */
  ESPCHK(0x10466650u, _esp0);
  ESP += 4; return;
}

/* FUN_10006660 @ 0x10466660 (13 bytes, 6 insns) */
void f_10466660(void) {
  FTRACE(0x10466660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466660 push ebp */
  push32((uint32_t)(EBP));
  /* 10466661 mov ebp, esp */
  EBP = (ESP);
  /* 10466663 call 0x10462950 */
  push32(0x10466668u); f_10462950();
  /* 10466668 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046666b pop ebp */
  EBP = (pop32());
  /* 1046666c ret  */
  ESPCHK(0x10466660u, _esp0);
  ESP += 4; return;
}

/* FUN_10006670 @ 0x10466670 (187 bytes, 54 insns) */
void f_10466670(void) {
  FTRACE(0x10466670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466670 push ebp */
  push32((uint32_t)(EBP));
  /* 10466671 mov ebp, esp */
  EBP = (ESP);
  /* 10466673 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10466676 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046667d cmp dword ptr [0x1048e5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466684 jne 0x104666e3 */
  if (!C.zf) goto L_104666e3;
  /* 10466686 push 0x104892a0 */
  push32((uint32_t)(0x104892a0u));
  /* 1046668b call dword ptr [0x10490290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490290))), 0x10466691u);
  /* 10466691 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10466694 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466698 je 0x104666b7 */
  if (C.zf) goto L_104666b7;
  /* 1046669a push 0x10489ea4 */
  push32((uint32_t)(0x10489ea4u));
  /* 1046669f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104666a2 push eax */
  push32((uint32_t)(EAX));
  /* 104666a3 call dword ptr [0x1049028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049028c))), 0x104666a9u);
  /* 104666a9 mov dword ptr [0x1048e5f8], eax */
  w32((uint32_t)(0x1048e5f8), (EAX));
  /* 104666ae cmp dword ptr [0x1048e5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104666b5 jne 0x104666bb */
  if (!C.zf) goto L_104666bb;
L_104666b7:;
  /* 104666b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104666b9 jmp 0x10466727 */
  goto L_10466727;
L_104666bb:;
  /* 104666bb push 0x10489e94 */
  push32((uint32_t)(0x10489e94u));
  /* 104666c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104666c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104666c4 call dword ptr [0x1049028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049028c))), 0x104666cau);
  /* 104666ca mov dword ptr [0x1048e5fc], eax */
  w32((uint32_t)(0x1048e5fc), (EAX));
  /* 104666cf push 0x10489e80 */
  push32((uint32_t)(0x10489e80u));
  /* 104666d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104666d7 push edx */
  push32((uint32_t)(EDX));
  /* 104666d8 call dword ptr [0x1049028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049028c))), 0x104666deu);
  /* 104666de mov dword ptr [0x1048e600], eax */
  w32((uint32_t)(0x1048e600), (EAX));
L_104666e3:;
  /* 104666e3 cmp dword ptr [0x1048e5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104666ea je 0x104666f5 */
  if (C.zf) goto L_104666f5;
  /* 104666ec call dword ptr [0x1048e5fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e5fc))), 0x104666f2u);
  /* 104666f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104666f5:;
  /* 104666f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104666f9 je 0x10466711 */
  if (C.zf) goto L_10466711;
  /* 104666fb cmp dword ptr [0x1048e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466702 je 0x10466711 */
  if (C.zf) goto L_10466711;
  /* 10466704 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466707 push eax */
  push32((uint32_t)(EAX));
  /* 10466708 call dword ptr [0x1048e600] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e600))), 0x1046670eu);
  /* 1046670e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10466711:;
  /* 10466711 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10466714 push ecx */
  push32((uint32_t)(ECX));
  /* 10466715 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466718 push edx */
  push32((uint32_t)(EDX));
  /* 10466719 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046671c push eax */
  push32((uint32_t)(EAX));
  /* 1046671d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466720 push ecx */
  push32((uint32_t)(ECX));
  /* 10466721 call dword ptr [0x1048e5f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e5f8))), 0x10466727u);
L_10466727:;
  /* 10466727 mov esp, ebp */
  ESP = (EBP);
  /* 10466729 pop ebp */
  EBP = (pop32());
  /* 1046672a ret  */
  ESPCHK(0x10466670u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10466730 (254 bytes, 109 insns) */
void f_10466730(void) {
  FTRACE(0x10466730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466730 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10466734 push edi */
  push32((uint32_t)(EDI));
  /* 10466735 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10466737 je 0x104667b3 */
  if (C.zf) goto L_104667b3;
  /* 10466739 push esi */
  push32((uint32_t)(ESI));
  /* 1046673a push ebx */
  push32((uint32_t)(EBX));
  /* 1046673b mov ebx, ecx */
  EBX = (ECX);
  /* 1046673d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10466741 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10466747 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1046674b jne 0x10466754 */
  if (!C.zf) goto L_10466754;
  /* 1046674d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10466750 jne 0x104667c1 */
  if (!C.zf) goto L_104667c1;
  /* 10466752 jmp 0x10466775 */
  goto L_10466775;
L_10466754:;
  /* 10466754 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10466756 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10466757 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10466759 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1046675a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1046675b je 0x10466782 */
  if (C.zf) goto L_10466782;
  /* 1046675d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1046675f je 0x1046678a */
  if (C.zf) goto L_1046678a;
  /* 10466761 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10466767 jne 0x10466754 */
  if (!C.zf) goto L_10466754;
  /* 10466769 mov ebx, ecx */
  EBX = (ECX);
  /* 1046676b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1046676e jne 0x104667c1 */
  if (!C.zf) goto L_104667c1;
L_10466770:;
  /* 10466770 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10466773 je 0x10466782 */
  if (C.zf) goto L_10466782;
L_10466775:;
  /* 10466775 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10466777 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10466778 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1046677a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1046677b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1046677d je 0x104667ae */
  if (C.zf) goto L_104667ae;
  /* 1046677f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10466780 jne 0x10466775 */
  if (!C.zf) goto L_10466775;
L_10466782:;
  /* 10466782 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10466786 pop ebx */
  EBX = (pop32());
  /* 10466787 pop esi */
  ESI = (pop32());
  /* 10466788 pop edi */
  EDI = (pop32());
  /* 10466789 ret  */
  ESPCHK(0x10466730u, _esp0);
  ESP += 4; return;
L_1046678a:;
  /* 1046678a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10466790 je 0x104667a4 */
  if (C.zf) goto L_104667a4;
L_10466792:;
  /* 10466792 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10466794 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10466795 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10466796 je 0x10466826 */
  if (C.zf) goto L_10466826;
  /* 1046679c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 104667a2 jne 0x10466792 */
  if (!C.zf) goto L_10466792;
L_104667a4:;
  /* 104667a4 mov ebx, ecx */
  EBX = (ECX);
  /* 104667a6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104667a9 jne 0x10466817 */
  if (!C.zf) goto L_10466817;
L_104667ab:;
  /* 104667ab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104667ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_104667ae:;
  /* 104667ae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 104667af jne 0x104667ab */
  if (!C.zf) goto L_104667ab;
  /* 104667b1 pop ebx */
  EBX = (pop32());
  /* 104667b2 pop esi */
  ESI = (pop32());
L_104667b3:;
  /* 104667b3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104667b7 pop edi */
  EDI = (pop32());
  /* 104667b8 ret  */
  ESPCHK(0x10466730u, _esp0);
  ESP += 4; return;
L_104667b9:;
  /* 104667b9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104667bb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104667be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104667bf je 0x10466770 */
  if (C.zf) goto L_10466770;
L_104667c1:;
  /* 104667c1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 104667c6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 104667c8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104667ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104667cd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104667cf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 104667d1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104667d4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 104667d9 je 0x104667b9 */
  if (C.zf) goto L_104667b9;
  /* 104667db test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 104667dd je 0x1046680b */
  if (C.zf) goto L_1046680b;
  /* 104667df test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 104667e1 je 0x10466801 */
  if (C.zf) goto L_10466801;
  /* 104667e3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 104667e9 je 0x104667f7 */
  if (C.zf) goto L_104667f7;
  /* 104667eb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 104667f1 jne 0x104667b9 */
  if (!C.zf) goto L_104667b9;
  /* 104667f3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104667f5 jmp 0x1046680f */
  goto L_1046680f;
L_104667f7:;
  /* 104667f7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104667fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104667ff jmp 0x1046680f */
  goto L_1046680f;
L_10466801:;
  /* 10466801 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10466807 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10466809 jmp 0x1046680f */
  goto L_1046680f;
L_1046680b:;
  /* 1046680b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1046680d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1046680f:;
  /* 1046680f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10466812 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10466814 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10466815 je 0x10466821 */
  if (C.zf) goto L_10466821;
L_10466817:;
  /* 10466817 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10466819:;
  /* 10466819 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1046681b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1046681e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1046681f jne 0x10466819 */
  if (!C.zf) goto L_10466819;
L_10466821:;
  /* 10466821 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10466824 jne 0x104667ab */
  if (!C.zf) goto L_104667ab;
L_10466826:;
  /* 10466826 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1046682a pop ebx */
  EBX = (pop32());
  /* 1046682b pop esi */
  ESI = (pop32());
  /* 1046682c pop edi */
  EDI = (pop32());
  /* 1046682d ret  */
  ESPCHK(0x10466730u, _esp0);
  ESP += 4; return;
}

/* FUN_10006830 @ 0x10466830 (55 bytes, 16 insns) */
void f_10466830(void) {
  FTRACE(0x10466830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466830 push ebp */
  push32((uint32_t)(EBP));
  /* 10466831 mov ebp, esp */
  EBP = (ESP);
  /* 10466833 mov eax, dword ptr [0x1048cb84] */
  EAX = (r32((uint32_t)(0x1048cb84)));
  /* 10466838 push eax */
  push32((uint32_t)(EAX));
  /* 10466839 call dword ptr [0x1049030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049030c))), 0x1046683fu);
  /* 1046683f mov ecx, dword ptr [0x1048cb74] */
  ECX = (r32((uint32_t)(0x1048cb74)));
  /* 10466845 push ecx */
  push32((uint32_t)(ECX));
  /* 10466846 call dword ptr [0x1049030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049030c))), 0x1046684cu);
  /* 1046684c mov edx, dword ptr [0x1048cb64] */
  EDX = (r32((uint32_t)(0x1048cb64)));
  /* 10466852 push edx */
  push32((uint32_t)(EDX));
  /* 10466853 call dword ptr [0x1049030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049030c))), 0x10466859u);
  /* 10466859 mov eax, dword ptr [0x1048cb44] */
  EAX = (r32((uint32_t)(0x1048cb44)));
  /* 1046685e push eax */
  push32((uint32_t)(EAX));
  /* 1046685f call dword ptr [0x1049030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049030c))), 0x10466865u);
  /* 10466865 pop ebp */
  EBP = (pop32());
  /* 10466866 ret  */
  ESPCHK(0x10466830u, _esp0);
  ESP += 4; return;
}

/* FUN_10006870 @ 0x10466870 (159 bytes, 47 insns) */
void f_10466870(void) {
  FTRACE(0x10466870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466870 push ebp */
  push32((uint32_t)(EBP));
  /* 10466871 mov ebp, esp */
  EBP = (ESP);
  /* 10466873 push ecx */
  push32((uint32_t)(ECX));
  /* 10466874 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046687b jmp 0x10466886 */
  goto L_10466886;
L_1046687d:;
  /* 1046687d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466880 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466883 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10466886:;
  /* 10466886 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046688a jge 0x104668d9 */
  if ((C.sf==C.of)) goto L_104668d9;
  /* 1046688c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046688f cmp dword ptr [ecx*4 + 0x1048cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1048cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466897 je 0x104668d7 */
  if (C.zf) goto L_104668d7;
  /* 10466899 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046689d je 0x104668d7 */
  if (C.zf) goto L_104668d7;
  /* 1046689f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104668a3 je 0x104668d7 */
  if (C.zf) goto L_104668d7;
  /* 104668a5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104668a9 je 0x104668d7 */
  if (C.zf) goto L_104668d7;
  /* 104668ab cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104668af je 0x104668d7 */
  if (C.zf) goto L_104668d7;
  /* 104668b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104668b4 mov eax, dword ptr [edx*4 + 0x1048cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1048cb40)));
  /* 104668bb push eax */
  push32((uint32_t)(EAX));
  /* 104668bc call dword ptr [0x104902d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902d4))), 0x104668c2u);
  /* 104668c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104668c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104668c7 mov edx, dword ptr [ecx*4 + 0x1048cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1048cb40)));
  /* 104668ce push edx */
  push32((uint32_t)(EDX));
  /* 104668cf call 0x104639a0 */
  push32(0x104668d4u); f_104639a0();
  /* 104668d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104668d7:;
  /* 104668d7 jmp 0x1046687d */
  goto L_1046687d;
L_104668d9:;
  /* 104668d9 mov eax, dword ptr [0x1048cb64] */
  EAX = (r32((uint32_t)(0x1048cb64)));
  /* 104668de push eax */
  push32((uint32_t)(EAX));
  /* 104668df call dword ptr [0x104902d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902d4))), 0x104668e5u);
  /* 104668e5 mov ecx, dword ptr [0x1048cb74] */
  ECX = (r32((uint32_t)(0x1048cb74)));
  /* 104668eb push ecx */
  push32((uint32_t)(ECX));
  /* 104668ec call dword ptr [0x104902d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902d4))), 0x104668f2u);
  /* 104668f2 mov edx, dword ptr [0x1048cb84] */
  EDX = (r32((uint32_t)(0x1048cb84)));
  /* 104668f8 push edx */
  push32((uint32_t)(EDX));
  /* 104668f9 call dword ptr [0x104902d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902d4))), 0x104668ffu);
  /* 104668ff mov eax, dword ptr [0x1048cb44] */
  EAX = (r32((uint32_t)(0x1048cb44)));
  /* 10466904 push eax */
  push32((uint32_t)(EAX));
  /* 10466905 call dword ptr [0x104902d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902d4))), 0x1046690bu);
  /* 1046690b mov esp, ebp */
  ESP = (EBP);
  /* 1046690d pop ebp */
  EBP = (pop32());
  /* 1046690e ret  */
  ESPCHK(0x10466870u, _esp0);
  ESP += 4; return;
}

/* FUN_10006910 @ 0x10466910 (151 bytes, 46 insns) */
void f_10466910(void) {
  FTRACE(0x10466910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466910 push ebp */
  push32((uint32_t)(EBP));
  /* 10466911 mov ebp, esp */
  EBP = (ESP);
  /* 10466913 push ecx */
  push32((uint32_t)(ECX));
  /* 10466914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466917 cmp dword ptr [eax*4 + 0x1048cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1048cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046691f jne 0x10466992 */
  if (!C.zf) goto L_10466992;
  /* 10466921 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10466926 push 0x10489eb0 */
  push32((uint32_t)(0x10489eb0u));
  /* 1046692b push 2 */
  push32((uint32_t)(0x2u));
  /* 1046692d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1046692f call 0x10462f10 */
  push32(0x10466934u); f_10462f10();
  /* 10466934 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466937 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046693a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046693e jne 0x1046694a */
  if (!C.zf) goto L_1046694a;
  /* 10466940 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10466942 call 0x10461e80 */
  push32(0x10466947u); f_10461e80();
  /* 10466947 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046694a:;
  /* 1046694a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1046694c call 0x10466910 */
  push32(0x10466951u); f_10466910();
  /* 10466951 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466954 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466957 cmp dword ptr [ecx*4 + 0x1048cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1048cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046695f jne 0x1046697a */
  if (!C.zf) goto L_1046697a;
  /* 10466961 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466964 push edx */
  push32((uint32_t)(EDX));
  /* 10466965 call dword ptr [0x1049030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049030c))), 0x1046696bu);
  /* 1046696b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046696e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466971 mov dword ptr [eax*4 + 0x1048cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1048cb40), (ECX));
  /* 10466978 jmp 0x10466988 */
  goto L_10466988;
L_1046697a:;
  /* 1046697a push 2 */
  push32((uint32_t)(0x2u));
  /* 1046697c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046697f push edx */
  push32((uint32_t)(EDX));
  /* 10466980 call 0x104639a0 */
  push32(0x10466985u); f_104639a0();
  /* 10466985 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10466988:;
  /* 10466988 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1046698a call 0x104669b0 */
  push32(0x1046698fu); f_104669b0();
  /* 1046698f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10466992:;
  /* 10466992 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466995 mov ecx, dword ptr [eax*4 + 0x1048cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1048cb40)));
  /* 1046699c push ecx */
  push32((uint32_t)(ECX));
  /* 1046699d call dword ptr [0x10490310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490310))), 0x104669a3u);
  /* 104669a3 mov esp, ebp */
  ESP = (EBP);
  /* 104669a5 pop ebp */
  EBP = (pop32());
  /* 104669a6 ret  */
  ESPCHK(0x10466910u, _esp0);
  ESP += 4; return;
}

/* FUN_100069b0 @ 0x104669b0 (22 bytes, 8 insns) */
void f_104669b0(void) {
  FTRACE(0x104669b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104669b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104669b1 mov ebp, esp */
  EBP = (ESP);
  /* 104669b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104669b6 mov ecx, dword ptr [eax*4 + 0x1048cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1048cb40)));
  /* 104669bd push ecx */
  push32((uint32_t)(ECX));
  /* 104669be call dword ptr [0x10490314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490314))), 0x104669c4u);
  /* 104669c4 pop ebp */
  EBP = (pop32());
  /* 104669c5 ret  */
  ESPCHK(0x104669b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069d0 @ 0x104669d0 (26 bytes, 10 insns) */
void f_104669d0(void) {
  FTRACE(0x104669d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104669d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104669d1 mov ebp, esp */
  EBP = (ESP);
  /* 104669d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104669d6 push eax */
  push32((uint32_t)(EAX));
  /* 104669d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104669d9 call dword ptr [0x10490318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490318))), 0x104669dfu);
  /* 104669df push 0xff */
  push32((uint32_t)(0xffu));
  /* 104669e4 call dword ptr [0x1049029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049029c))), 0x104669eau);
  /* 104669ea pop ebp */
  EBP = (pop32());
  /* 104669eb ret  */
  ESPCHK(0x104669d0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x104669f0 (446 bytes, 130 insns) */
void f_104669f0(void) {
  FTRACE(0x104669f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104669f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104669f1 mov ebp, esp */
  EBP = (ESP);
  /* 104669f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104669f6 call 0x10462950 */
  push32(0x104669fbu); f_10462950();
  /* 104669fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104669fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466a01 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10466a04 push ecx */
  push32((uint32_t)(ECX));
  /* 10466a05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466a08 push edx */
  push32((uint32_t)(EDX));
  /* 10466a09 call 0x10466bb0 */
  push32(0x10466a0eu); f_10466bb0();
  /* 10466a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466a11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10466a14 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466a18 je 0x10466a23 */
  if (C.zf) goto L_10466a23;
  /* 10466a1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466a1d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466a21 jne 0x10466a32 */
  if (!C.zf) goto L_10466a32;
L_10466a23:;
  /* 10466a23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466a26 push ecx */
  push32((uint32_t)(ECX));
  /* 10466a27 call dword ptr [0x104902e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902e0))), 0x10466a2du);
  /* 10466a2d jmp 0x10466baa */
  goto L_10466baa;
L_10466a32:;
  /* 10466a32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466a35 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466a39 jne 0x10466a4f */
  if (!C.zf) goto L_10466a4f;
  /* 10466a3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466a3e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10466a45 mov eax, 1 */
  EAX = (0x1u);
  /* 10466a4a jmp 0x10466baa */
  goto L_10466baa;
L_10466a4f:;
  /* 10466a4f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466a52 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466a56 jne 0x10466a60 */
  if (!C.zf) goto L_10466a60;
  /* 10466a58 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10466a5b jmp 0x10466baa */
  goto L_10466baa;
L_10466a60:;
  /* 10466a60 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466a63 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10466a66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10466a69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466a6c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10466a6f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10466a72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466a75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466a78 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10466a7b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466a7e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466a82 jne 0x10466b87 */
  if (!C.zf) goto L_10466b87;
  /* 10466a88 mov eax, dword ptr [0x1048cc78] */
  EAX = (r32((uint32_t)(0x1048cc78)));
  /* 10466a8d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10466a90 jmp 0x10466a9b */
  goto L_10466a9b;
L_10466a92:;
  /* 10466a92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10466a95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466a98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10466a9b:;
  /* 10466a9b mov edx, dword ptr [0x1048cc78] */
  EDX = (r32((uint32_t)(0x1048cc78)));
  /* 10466aa1 add edx, dword ptr [0x1048cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1048cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466aa7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466aaa jge 0x10466ac2 */
  if ((C.sf==C.of)) goto L_10466ac2;
  /* 10466aac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10466aaf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10466ab2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466ab5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10466ab8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10466ac0 jmp 0x10466a92 */
  goto L_10466a92;
L_10466ac2:;
  /* 10466ac2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466ac5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10466ac8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10466acb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466ace cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466ad4 jne 0x10466ae5 */
  if (!C.zf) goto L_10466ae5;
  /* 10466ad6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466ad9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10466ae0 jmp 0x10466b6d */
  goto L_10466b6d;
L_10466ae5:;
  /* 10466ae5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466ae8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466aee jne 0x10466afc */
  if (!C.zf) goto L_10466afc;
  /* 10466af0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466af3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10466afa jmp 0x10466b6d */
  goto L_10466b6d;
L_10466afc:;
  /* 10466afc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466aff cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466b05 jne 0x10466b13 */
  if (!C.zf) goto L_10466b13;
  /* 10466b07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466b0a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10466b11 jmp 0x10466b6d */
  goto L_10466b6d;
L_10466b13:;
  /* 10466b13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466b16 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466b1c jne 0x10466b2a */
  if (!C.zf) goto L_10466b2a;
  /* 10466b1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466b21 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10466b28 jmp 0x10466b6d */
  goto L_10466b6d;
L_10466b2a:;
  /* 10466b2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466b2d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466b33 jne 0x10466b41 */
  if (!C.zf) goto L_10466b41;
  /* 10466b35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466b38 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10466b3f jmp 0x10466b6d */
  goto L_10466b6d;
L_10466b41:;
  /* 10466b41 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466b44 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466b4a jne 0x10466b58 */
  if (!C.zf) goto L_10466b58;
  /* 10466b4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466b4f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10466b56 jmp 0x10466b6d */
  goto L_10466b6d;
L_10466b58:;
  /* 10466b58 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466b5b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466b61 jne 0x10466b6d */
  if (!C.zf) goto L_10466b6d;
  /* 10466b63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466b66 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10466b6d:;
  /* 10466b6d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466b70 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10466b73 push edx */
  push32((uint32_t)(EDX));
  /* 10466b74 push 8 */
  push32((uint32_t)(0x8u));
  /* 10466b76 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10466b79u);
  /* 10466b79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466b7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466b7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10466b82 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10466b85 jmp 0x10466b9e */
  goto L_10466b9e;
L_10466b87:;
  /* 10466b87 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466b8a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10466b91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466b94 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10466b97 push ecx */
  push32((uint32_t)(ECX));
  /* 10466b98 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10466b9bu);
  /* 10466b9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10466b9e:;
  /* 10466b9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466ba1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10466ba4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10466ba7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10466baa:;
  /* 10466baa mov esp, ebp */
  ESP = (EBP);
  /* 10466bac pop ebp */
  EBP = (pop32());
  /* 10466bad ret  */
  ESPCHK(0x104669f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bb0 @ 0x10466bb0 (89 bytes, 35 insns) */
void f_10466bb0(void) {
  FTRACE(0x10466bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10466bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10466bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10466bb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466bb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10466bba:;
  /* 10466bba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466bbd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10466bbf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466bc2 je 0x10466be2 */
  if (C.zf) goto L_10466be2;
  /* 10466bc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466bc7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466bca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10466bcd mov ecx, dword ptr [0x1048cc84] */
  ECX = (r32((uint32_t)(0x1048cc84)));
  /* 10466bd3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10466bd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466bd9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466bdb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466bde jae 0x10466be2 */
  if (!C.cf) goto L_10466be2;
  /* 10466be0 jmp 0x10466bba */
  goto L_10466bba;
L_10466be2:;
  /* 10466be2 mov eax, dword ptr [0x1048cc84] */
  EAX = (r32((uint32_t)(0x1048cc84)));
  /* 10466be7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10466bea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466bed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466bef cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466bf2 jae 0x10466bfe */
  if (!C.cf) goto L_10466bfe;
  /* 10466bf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466bf7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10466bf9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466bfc je 0x10466c02 */
  if (C.zf) goto L_10466c02;
L_10466bfe:;
  /* 10466bfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10466c00 jmp 0x10466c05 */
  goto L_10466c05;
L_10466c02:;
  /* 10466c02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10466c05:;
  /* 10466c05 mov esp, ebp */
  ESP = (EBP);
  /* 10466c07 pop ebp */
  EBP = (pop32());
  /* 10466c08 ret  */
  ESPCHK(0x10466bb0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10466c10 (48 bytes, 17 insns) */
void f_10466c10(void) {
  FTRACE(0x10466c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10466c11 mov ebp, esp */
  EBP = (ESP);
  /* 10466c13 push ecx */
  push32((uint32_t)(ECX));
  /* 10466c14 push 9 */
  push32((uint32_t)(0x9u));
  /* 10466c16 call 0x10466910 */
  push32(0x10466c1bu); f_10466910();
  /* 10466c1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466c1e mov eax, dword ptr [0x1048e66c] */
  EAX = (r32((uint32_t)(0x1048e66c)));
  /* 10466c23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10466c26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466c29 mov dword ptr [0x1048e66c], ecx */
  w32((uint32_t)(0x1048e66c), (ECX));
  /* 10466c2f push 9 */
  push32((uint32_t)(0x9u));
  /* 10466c31 call 0x104669b0 */
  push32(0x10466c36u); f_104669b0();
  /* 10466c36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466c39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466c3c mov esp, ebp */
  ESP = (EBP);
  /* 10466c3e pop ebp */
  EBP = (pop32());
  /* 10466c3f ret  */
  ESPCHK(0x10466c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c40 @ 0x10466c40 (10 bytes, 5 insns) */
void f_10466c40(void) {
  FTRACE(0x10466c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10466c41 mov ebp, esp */
  EBP = (ESP);
  /* 10466c43 mov eax, dword ptr [0x1048e66c] */
  EAX = (r32((uint32_t)(0x1048e66c)));
  /* 10466c48 pop ebp */
  EBP = (pop32());
  /* 10466c49 ret  */
  ESPCHK(0x10466c40u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10466c50 (45 bytes, 19 insns) */
void f_10466c50(void) {
  FTRACE(0x10466c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466c50 push ebp */
  push32((uint32_t)(EBP));
  /* 10466c51 mov ebp, esp */
  EBP = (ESP);
  /* 10466c53 push ecx */
  push32((uint32_t)(ECX));
  /* 10466c54 mov eax, dword ptr [0x1048e66c] */
  EAX = (r32((uint32_t)(0x1048e66c)));
  /* 10466c59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10466c5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466c60 je 0x10466c70 */
  if (C.zf) goto L_10466c70;
  /* 10466c62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466c65 push ecx */
  push32((uint32_t)(ECX));
  /* 10466c66 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10466c69u);
  /* 10466c69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466c6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10466c6e jne 0x10466c74 */
  if (!C.zf) goto L_10466c74;
L_10466c70:;
  /* 10466c70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10466c72 jmp 0x10466c79 */
  goto L_10466c79;
L_10466c74:;
  /* 10466c74 mov eax, 1 */
  EAX = (0x1u);
L_10466c79:;
  /* 10466c79 mov esp, ebp */
  ESP = (EBP);
  /* 10466c7b pop ebp */
  EBP = (pop32());
  /* 10466c7c ret  */
  ESPCHK(0x10466c50u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10466c80 (88 bytes, 40 insns) */
void f_10466c80(void) {
  FTRACE(0x10466c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466c80 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10466c84 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10466c88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10466c8a je 0x10466cd3 */
  if (C.zf) goto L_10466cd3;
  /* 10466c8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10466c8e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10466c92 push edi */
  push32((uint32_t)(EDI));
  /* 10466c93 mov edi, ecx */
  EDI = (ECX);
  /* 10466c95 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466c98 jb 0x10466cc7 */
  if (C.cf) goto L_10466cc7;
  /* 10466c9a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10466c9c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10466c9f je 0x10466ca9 */
  if (C.zf) goto L_10466ca9;
  /* 10466ca1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10466ca3:;
  /* 10466ca3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10466ca5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10466ca6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10466ca7 jne 0x10466ca3 */
  if (!C.zf) goto L_10466ca3;
L_10466ca9:;
  /* 10466ca9 mov ecx, eax */
  ECX = (EAX);
  /* 10466cab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10466cae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466cb0 mov ecx, eax */
  ECX = (EAX);
  /* 10466cb2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10466cb5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466cb7 mov ecx, edx */
  ECX = (EDX);
  /* 10466cb9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10466cbc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10466cbf je 0x10466cc7 */
  if (C.zf) goto L_10466cc7;
  /* 10466cc1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10466cc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10466cc5 je 0x10466ccd */
  if (C.zf) goto L_10466ccd;
L_10466cc7:;
  /* 10466cc7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10466cc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10466cca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10466ccb jne 0x10466cc7 */
  if (!C.zf) goto L_10466cc7;
L_10466ccd:;
  /* 10466ccd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10466cd1 pop edi */
  EDI = (pop32());
  /* 10466cd2 ret  */
  ESPCHK(0x10466c80u, _esp0);
  ESP += 4; return;
L_10466cd3:;
  /* 10466cd3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10466cd7 ret  */
  ESPCHK(0x10466c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x10466ce0 (23 bytes, 10 insns) */
void f_10466ce0(void) {
  FTRACE(0x10466ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10466ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10466ce3 mov eax, dword ptr [0x1048e668] */
  EAX = (r32((uint32_t)(0x1048e668)));
  /* 10466ce8 push eax */
  push32((uint32_t)(EAX));
  /* 10466ce9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466cec push ecx */
  push32((uint32_t)(ECX));
  /* 10466ced call 0x10466d00 */
  push32(0x10466cf2u); f_10466d00();
  /* 10466cf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466cf5 pop ebp */
  EBP = (pop32());
  /* 10466cf6 ret  */
  ESPCHK(0x10466ce0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10466d00 (87 bytes, 34 insns) */
void f_10466d00(void) {
  FTRACE(0x10466d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10466d01 mov ebp, esp */
  EBP = (ESP);
  /* 10466d03 push ecx */
  push32((uint32_t)(ECX));
  /* 10466d04 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466d08 jbe 0x10466d0e */
  if ((C.cf||C.zf)) goto L_10466d0e;
  /* 10466d0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10466d0c jmp 0x10466d53 */
  goto L_10466d53;
L_10466d0e:;
  /* 10466d0e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466d12 ja 0x10466d25 */
  if ((!C.cf&&!C.zf)) goto L_10466d25;
  /* 10466d14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466d17 push eax */
  push32((uint32_t)(EAX));
  /* 10466d18 call 0x10466d60 */
  push32(0x10466d1du); f_10466d60();
  /* 10466d1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466d20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10466d23 jmp 0x10466d2c */
  goto L_10466d2c;
L_10466d25:;
  /* 10466d25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10466d2c:;
  /* 10466d2c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466d30 jne 0x10466d38 */
  if (!C.zf) goto L_10466d38;
  /* 10466d32 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466d36 jne 0x10466d3d */
  if (!C.zf) goto L_10466d3d;
L_10466d38:;
  /* 10466d38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466d3b jmp 0x10466d53 */
  goto L_10466d53;
L_10466d3d:;
  /* 10466d3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466d40 push ecx */
  push32((uint32_t)(ECX));
  /* 10466d41 call 0x10466c50 */
  push32(0x10466d46u); f_10466c50();
  /* 10466d46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466d49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10466d4b jne 0x10466d51 */
  if (!C.zf) goto L_10466d51;
  /* 10466d4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10466d4f jmp 0x10466d53 */
  goto L_10466d53;
L_10466d51:;
  /* 10466d51 jmp 0x10466d0e */
  goto L_10466d0e;
L_10466d53:;
  /* 10466d53 mov esp, ebp */
  ESP = (EBP);
  /* 10466d55 pop ebp */
  EBP = (pop32());
  /* 10466d56 ret  */
  ESPCHK(0x10466d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d60 @ 0x10466d60 (109 bytes, 37 insns) */
void f_10466d60(void) {
  FTRACE(0x10466d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10466d61 mov ebp, esp */
  EBP = (ESP);
  /* 10466d63 push ecx */
  push32((uint32_t)(ECX));
  /* 10466d64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466d67 cmp eax, dword ptr [0x1048cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466d6d ja 0x10466d9d */
  if ((!C.cf&&!C.zf)) goto L_10466d9d;
  /* 10466d6f push 9 */
  push32((uint32_t)(0x9u));
  /* 10466d71 call 0x10466910 */
  push32(0x10466d76u); f_10466910();
  /* 10466d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466d79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466d7c push ecx */
  push32((uint32_t)(ECX));
  /* 10466d7d call 0x104678a0 */
  push32(0x10466d82u); f_104678a0();
  /* 10466d82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466d85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10466d88 push 9 */
  push32((uint32_t)(0x9u));
  /* 10466d8a call 0x104669b0 */
  push32(0x10466d8fu); f_104669b0();
  /* 10466d8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466d92 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466d96 je 0x10466d9d */
  if (C.zf) goto L_10466d9d;
  /* 10466d98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466d9b jmp 0x10466dc9 */
  goto L_10466dc9;
L_10466d9d:;
  /* 10466d9d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466da1 jne 0x10466daa */
  if (!C.zf) goto L_10466daa;
  /* 10466da3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10466daa:;
  /* 10466daa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466dad add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466db0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10466db3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10466db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466db9 push eax */
  push32((uint32_t)(EAX));
  /* 10466dba push 0 */
  push32((uint32_t)(0x0u));
  /* 10466dbc mov ecx, dword ptr [0x1048fe2c] */
  ECX = (r32((uint32_t)(0x1048fe2c)));
  /* 10466dc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10466dc3 call dword ptr [0x10490320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490320))), 0x10466dc9u);
L_10466dc9:;
  /* 10466dc9 mov esp, ebp */
  ESP = (EBP);
  /* 10466dcb pop ebp */
  EBP = (pop32());
  /* 10466dcc ret  */
  ESPCHK(0x10466d60u, _esp0);
  ESP += 4; return;
}

