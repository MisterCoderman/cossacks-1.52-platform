#include "recomp.h"

/* thunk_FUN_10001a00 @ 0x12e31005 (5 bytes, 1 insns) */
void f_12e31005(void) {
  FTRACE(0x12e31005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31005 jmp 0x12e31a00 */
  f_12e31a00(); return;
}

/* OnInit @ 0x12e3100a (5 bytes, 1 insns) */
void f_12e3100a(void) {
  FTRACE(0x12e3100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3100a jmp 0x12e312a0 */
  f_12e312a0(); return;
}

/* thunk_FUN_10001140 @ 0x12e3100f (5 bytes, 1 insns) */
void f_12e3100f(void) {
  FTRACE(0x12e3100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3100f jmp 0x12e31140 */
  f_12e31140(); return;
}

/* thunk_FUN_10001a50 @ 0x12e31014 (5 bytes, 1 insns) */
void f_12e31014(void) {
  FTRACE(0x12e31014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31014 jmp 0x12e31a50 */
  f_12e31a50(); return;
}

/* thunk_FUN_10001060 @ 0x12e31019 (5 bytes, 1 insns) */
void f_12e31019(void) {
  FTRACE(0x12e31019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31019 jmp 0x12e31060 */
  f_12e31060(); return;
}

/* thunk_FUN_100011c0 @ 0x12e3101e (5 bytes, 1 insns) */
void f_12e3101e(void) {
  FTRACE(0x12e3101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3101e jmp 0x12e311c0 */
  f_12e311c0(); return;
}

/* thunk_FUN_100010c0 @ 0x12e31023 (5 bytes, 1 insns) */
void f_12e31023(void) {
  FTRACE(0x12e31023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31023 jmp 0x12e310c0 */
  f_12e310c0(); return;
}

/* ProcessScenary @ 0x12e31028 (5 bytes, 1 insns) */
void f_12e31028(void) {
  FTRACE(0x12e31028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31028 jmp 0x12e314a0 */
  f_12e314a0(); return;
}

/* thunk_FUN_10001230 @ 0x12e3102d (5 bytes, 1 insns) */
void f_12e3102d(void) {
  FTRACE(0x12e3102du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e3102d jmp 0x12e31230 */
  f_12e31230(); return;
}

/* FUN_10001060 @ 0x12e31060 (67 bytes, 26 insns) */
void f_12e31060(void) {
  FTRACE(0x12e31060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31060 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31061 mov ebp, esp */
  EBP = (ESP);
  /* 12e31063 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e31066 push ebx */
  push32((uint32_t)(EBX));
  /* 12e31067 push esi */
  push32((uint32_t)(ESI));
  /* 12e31068 push edi */
  push32((uint32_t)(EDI));
  /* 12e31069 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12e3106c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12e31071 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e31076 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e31078 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3107b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3107e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31082 je 0x12e31086 */
  if (C.zf) goto L_12e31086;
  /* 12e31084 jmp 0x12e3108b */
  goto L_12e3108b;
L_12e31086:;
  /* 12e31086 call 0x12e3100a */
  push32(0x12e3108bu); f_12e3100a();
L_12e3108b:;
  /* 12e3108b mov eax, 1 */
  EAX = (0x1u);
  /* 12e31090 pop edi */
  EDI = (pop32());
  /* 12e31091 pop esi */
  ESI = (pop32());
  /* 12e31092 pop ebx */
  EBX = (pop32());
  /* 12e31093 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31096 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31098 call 0x12e31b10 */
  push32(0x12e3109du); f_12e31b10();
  /* 12e3109d mov esp, ebp */
  ESP = (EBP);
  /* 12e3109f pop ebp */
  EBP = (pop32());
  /* 12e310a0 ret 0xc */
  ESPCHK(0x12e31060u, _esp0);
  ESP += 16; return;
}

/* FUN_100010c0 @ 0x12e310c0 (92 bytes, 34 insns) */
void f_12e310c0(void) {
  FTRACE(0x12e310c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e310c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e310c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e310c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e310c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e310c7 push esi */
  push32((uint32_t)(ESI));
  /* 12e310c8 push edi */
  push32((uint32_t)(EDI));
  /* 12e310c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e310cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e310d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e310d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e310d8 mov esi, esp */
  ESI = (ESP);
  /* 12e310da call dword ptr [0x12e603fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603fc))), 0x12e310e0u);
  /* 12e310e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e310e2 call 0x12e31b10 */
  push32(0x12e310e7u); f_12e31b10();
  /* 12e310e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e310e9 jne 0x12e310fc */
  if (!C.zf) goto L_12e310fc;
  /* 12e310eb mov esi, esp */
  ESI = (ESP);
  /* 12e310ed call dword ptr [0x12e60400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60400))), 0x12e310f3u);
  /* 12e310f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e310f5 call 0x12e31b10 */
  push32(0x12e310fau); f_12e31b10();
  /* 12e310fa jmp 0x12e3110b */
  goto L_12e3110b;
L_12e310fc:;
  /* 12e310fc mov esi, esp */
  ESI = (ESP);
  /* 12e310fe call dword ptr [0x12e603f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603f8))), 0x12e31104u);
  /* 12e31104 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31106 call 0x12e31b10 */
  push32(0x12e3110bu); f_12e31b10();
L_12e3110b:;
  /* 12e3110b pop edi */
  EDI = (pop32());
  /* 12e3110c pop esi */
  ESI = (pop32());
  /* 12e3110d pop ebx */
  EBX = (pop32());
  /* 12e3110e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31111 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31113 call 0x12e31b10 */
  push32(0x12e31118u); f_12e31b10();
  /* 12e31118 mov esp, ebp */
  ESP = (EBP);
  /* 12e3111a pop ebp */
  EBP = (pop32());
  /* 12e3111b ret  */
  ESPCHK(0x12e310c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001140 @ 0x12e31140 (93 bytes, 34 insns) */
void f_12e31140(void) {
  FTRACE(0x12e31140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31140 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31141 mov ebp, esp */
  EBP = (ESP);
  /* 12e31143 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e31146 push ebx */
  push32((uint32_t)(EBX));
  /* 12e31147 push esi */
  push32((uint32_t)(ESI));
  /* 12e31148 push edi */
  push32((uint32_t)(EDI));
  /* 12e31149 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e3114c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e31151 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e31156 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e31158 mov esi, esp */
  ESI = (ESP);
  /* 12e3115a call dword ptr [0x12e603fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603fc))), 0x12e31160u);
  /* 12e31160 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31162 call 0x12e31b10 */
  push32(0x12e31167u); f_12e31b10();
  /* 12e31167 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3116a jne 0x12e3117d */
  if (!C.zf) goto L_12e3117d;
  /* 12e3116c mov esi, esp */
  ESI = (ESP);
  /* 12e3116e call dword ptr [0x12e60400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60400))), 0x12e31174u);
  /* 12e31174 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31176 call 0x12e31b10 */
  push32(0x12e3117bu); f_12e31b10();
  /* 12e3117b jmp 0x12e3118c */
  goto L_12e3118c;
L_12e3117d:;
  /* 12e3117d mov esi, esp */
  ESI = (ESP);
  /* 12e3117f call dword ptr [0x12e603f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603f8))), 0x12e31185u);
  /* 12e31185 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31187 call 0x12e31b10 */
  push32(0x12e3118cu); f_12e31b10();
L_12e3118c:;
  /* 12e3118c pop edi */
  EDI = (pop32());
  /* 12e3118d pop esi */
  ESI = (pop32());
  /* 12e3118e pop ebx */
  EBX = (pop32());
  /* 12e3118f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31192 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31194 call 0x12e31b10 */
  push32(0x12e31199u); f_12e31b10();
  /* 12e31199 mov esp, ebp */
  ESP = (EBP);
  /* 12e3119b pop ebp */
  EBP = (pop32());
  /* 12e3119c ret  */
  ESPCHK(0x12e31140u, _esp0);
  ESP += 4; return;
}

/* FUN_100011c0 @ 0x12e311c0 (90 bytes, 34 insns) */
void f_12e311c0(void) {
  FTRACE(0x12e311c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e311c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e311c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e311c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e311c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e311c7 push esi */
  push32((uint32_t)(ESI));
  /* 12e311c8 push edi */
  push32((uint32_t)(EDI));
  /* 12e311c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e311cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e311d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e311d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e311d8 mov esi, esp */
  ESI = (ESP);
  /* 12e311da push 0 */
  push32((uint32_t)(0x0u));
  /* 12e311dc push 5 */
  push32((uint32_t)(0x5u));
  /* 12e311de push 0 */
  push32((uint32_t)(0x0u));
  /* 12e311e0 call dword ptr [0x12e603f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603f4))), 0x12e311e6u);
  /* 12e311e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e311e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e311eb call 0x12e31b10 */
  push32(0x12e311f0u); f_12e31b10();
  /* 12e311f0 mov esi, esp */
  ESI = (ESP);
  /* 12e311f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12e311f4 push 0x12e5901c */
  push32((uint32_t)(0x12e5901cu));
  /* 12e311f9 call dword ptr [0x12e603ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603ec))), 0x12e311ffu);
  /* 12e311ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31202 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31204 call 0x12e31b10 */
  push32(0x12e31209u); f_12e31b10();
  /* 12e31209 pop edi */
  EDI = (pop32());
  /* 12e3120a pop esi */
  ESI = (pop32());
  /* 12e3120b pop ebx */
  EBX = (pop32());
  /* 12e3120c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3120f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31211 call 0x12e31b10 */
  push32(0x12e31216u); f_12e31b10();
  /* 12e31216 mov esp, ebp */
  ESP = (EBP);
  /* 12e31218 pop ebp */
  EBP = (pop32());
  /* 12e31219 ret  */
  ESPCHK(0x12e311c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001230 @ 0x12e31230 (90 bytes, 34 insns) */
void f_12e31230(void) {
  FTRACE(0x12e31230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31230 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31231 mov ebp, esp */
  EBP = (ESP);
  /* 12e31233 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e31236 push ebx */
  push32((uint32_t)(EBX));
  /* 12e31237 push esi */
  push32((uint32_t)(ESI));
  /* 12e31238 push edi */
  push32((uint32_t)(EDI));
  /* 12e31239 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e3123c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e31241 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e31246 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e31248 mov esi, esp */
  ESI = (ESP);
  /* 12e3124a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3124c push 5 */
  push32((uint32_t)(0x5u));
  /* 12e3124e push 1 */
  push32((uint32_t)(0x1u));
  /* 12e31250 call dword ptr [0x12e603f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603f4))), 0x12e31256u);
  /* 12e31256 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31259 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3125b call 0x12e31b10 */
  push32(0x12e31260u); f_12e31b10();
  /* 12e31260 mov esi, esp */
  ESI = (ESP);
  /* 12e31262 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12e31264 push 0x12e59024 */
  push32((uint32_t)(0x12e59024u));
  /* 12e31269 call dword ptr [0x12e603ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603ec))), 0x12e3126fu);
  /* 12e3126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31272 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31274 call 0x12e31b10 */
  push32(0x12e31279u); f_12e31b10();
  /* 12e31279 pop edi */
  EDI = (pop32());
  /* 12e3127a pop esi */
  ESI = (pop32());
  /* 12e3127b pop ebx */
  EBX = (pop32());
  /* 12e3127c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3127f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31281 call 0x12e31b10 */
  push32(0x12e31286u); f_12e31b10();
  /* 12e31286 mov esp, ebp */
  ESP = (EBP);
  /* 12e31288 pop ebp */
  EBP = (pop32());
  /* 12e31289 ret  */
  ESPCHK(0x12e31230u, _esp0);
  ESP += 4; return;
}

/* FUN_100012a0 @ 0x12e312a0 (401 bytes, 108 insns) */
void f_12e312a0(void) {
  FTRACE(0x12e312a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e312a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e312a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e312a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e312a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e312a7 push esi */
  push32((uint32_t)(ESI));
  /* 12e312a8 push edi */
  push32((uint32_t)(EDI));
  /* 12e312a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e312ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e312b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e312b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e312b8 mov esi, esp */
  ESI = (ESP);
  /* 12e312ba push 0x12e5906c */
  push32((uint32_t)(0x12e5906cu));
  /* 12e312bf push 0x12e5e428 */
  push32((uint32_t)(0x12e5e428u));
  /* 12e312c4 call dword ptr [0x12e603e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603e4))), 0x12e312cau);
  /* 12e312ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e312cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e312cf call 0x12e31b10 */
  push32(0x12e312d4u); f_12e31b10();
  /* 12e312d4 mov esi, esp */
  ESI = (ESP);
  /* 12e312d6 push 0x12e59064 */
  push32((uint32_t)(0x12e59064u));
  /* 12e312db push 0x12e5e430 */
  push32((uint32_t)(0x12e5e430u));
  /* 12e312e0 call dword ptr [0x12e603e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603e4))), 0x12e312e6u);
  /* 12e312e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e312e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e312eb call 0x12e31b10 */
  push32(0x12e312f0u); f_12e31b10();
  /* 12e312f0 mov esi, esp */
  ESI = (ESP);
  /* 12e312f2 push 0x12e5905c */
  push32((uint32_t)(0x12e5905cu));
  /* 12e312f7 push 0x12e5e438 */
  push32((uint32_t)(0x12e5e438u));
  /* 12e312fc call dword ptr [0x12e603e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603e4))), 0x12e31302u);
  /* 12e31302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31305 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31307 call 0x12e31b10 */
  push32(0x12e3130cu); f_12e31b10();
  /* 12e3130c mov esi, esp */
  ESI = (ESP);
  /* 12e3130e push 0x12e59054 */
  push32((uint32_t)(0x12e59054u));
  /* 12e31313 push 0x12e5e440 */
  push32((uint32_t)(0x12e5e440u));
  /* 12e31318 call dword ptr [0x12e603e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603e4))), 0x12e3131eu);
  /* 12e3131e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31321 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31323 call 0x12e31b10 */
  push32(0x12e31328u); f_12e31b10();
  /* 12e31328 mov esi, esp */
  ESI = (ESP);
  /* 12e3132a push 0x12e5904c */
  push32((uint32_t)(0x12e5904cu));
  /* 12e3132f push 0x12e5e448 */
  push32((uint32_t)(0x12e5e448u));
  /* 12e31334 call dword ptr [0x12e603e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603e4))), 0x12e3133au);
  /* 12e3133a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3133d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3133f call 0x12e31b10 */
  push32(0x12e31344u); f_12e31b10();
  /* 12e31344 mov esi, esp */
  ESI = (ESP);
  /* 12e31346 push 0x12e5903c */
  push32((uint32_t)(0x12e5903cu));
  /* 12e3134b push 0x12e5e420 */
  push32((uint32_t)(0x12e5e420u));
  /* 12e31350 call dword ptr [0x12e603e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603e8))), 0x12e31356u);
  /* 12e31356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31359 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3135b call 0x12e31b10 */
  push32(0x12e31360u); f_12e31b10();
  /* 12e31360 mov esi, esp */
  ESI = (ESP);
  /* 12e31362 push 0x12e59034 */
  push32((uint32_t)(0x12e59034u));
  /* 12e31367 push 0x12e5e410 */
  push32((uint32_t)(0x12e5e410u));
  /* 12e3136c call dword ptr [0x12e603e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603e0))), 0x12e31372u);
  /* 12e31372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31375 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31377 call 0x12e31b10 */
  push32(0x12e3137cu); f_12e31b10();
  /* 12e3137c mov esi, esp */
  ESI = (ESP);
  /* 12e3137e push 0x12e5902c */
  push32((uint32_t)(0x12e5902cu));
  /* 12e31383 push 0x12e5e418 */
  push32((uint32_t)(0x12e5e418u));
  /* 12e31388 call dword ptr [0x12e603e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603e0))), 0x12e3138eu);
  /* 12e3138e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31391 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31393 call 0x12e31b10 */
  push32(0x12e31398u); f_12e31b10();
  /* 12e31398 mov esi, esp */
  ESI = (ESP);
  /* 12e3139a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3139c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3139e call dword ptr [0x12e603f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603f0))), 0x12e313a4u);
  /* 12e313a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e313a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e313a9 call 0x12e31b10 */
  push32(0x12e313aeu); f_12e31b10();
  /* 12e313ae mov esi, esp */
  ESI = (ESP);
  /* 12e313b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e313b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e313b4 call dword ptr [0x12e603f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603f0))), 0x12e313bau);
  /* 12e313ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e313bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e313bf call 0x12e31b10 */
  push32(0x12e313c4u); f_12e31b10();
  /* 12e313c4 mov esi, esp */
  ESI = (ESP);
  /* 12e313c6 push 7 */
  push32((uint32_t)(0x7u));
  /* 12e313c8 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e313ca call dword ptr [0x12e603f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603f0))), 0x12e313d0u);
  /* 12e313d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e313d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e313d5 call 0x12e31b10 */
  push32(0x12e313dau); f_12e31b10();
  /* 12e313da mov dword ptr [0x12e5e3e0], 0 */
  w32((uint32_t)(0x12e5e3e0), (0x0u));
  /* 12e313e4 jmp 0x12e313f3 */
  goto L_12e313f3;
L_12e313e6:;
  /* 12e313e6 mov eax, dword ptr [0x12e5e3e0] */
  EAX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e313eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e313ee mov dword ptr [0x12e5e3e0], eax */
  w32((uint32_t)(0x12e5e3e0), (EAX));
L_12e313f3:;
  /* 12e313f3 cmp dword ptr [0x12e5e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e313fa jge 0x12e31420 */
  if ((C.sf==C.of)) goto L_12e31420;
  /* 12e313fc mov ecx, dword ptr [0x12e5e3e0] */
  ECX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e31402 mov dword ptr [ecx*4 + 0x12e5e3e4], 0 */
  w32((uint32_t)(ECX*4 + 0x12e5e3e4), (0x0u));
  /* 12e3140d mov edx, dword ptr [0x12e5e3e0] */
  EDX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e31413 mov dword ptr [edx*4 + 0x12e5e3f8], 0 */
  w32((uint32_t)(EDX*4 + 0x12e5e3f8), (0x0u));
  /* 12e3141e jmp 0x12e313e6 */
  goto L_12e313e6;
L_12e31420:;
  /* 12e31420 pop edi */
  EDI = (pop32());
  /* 12e31421 pop esi */
  ESI = (pop32());
  /* 12e31422 pop ebx */
  EBX = (pop32());
  /* 12e31423 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31426 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31428 call 0x12e31b10 */
  push32(0x12e3142du); f_12e31b10();
  /* 12e3142d mov esp, ebp */
  ESP = (EBP);
  /* 12e3142f pop ebp */
  EBP = (pop32());
  /* 12e31430 ret  */
  ESPCHK(0x12e312a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100014a0 @ 0x12e314a0 (1093 bytes, 298 insns) */
void f_12e314a0(void) {
  FTRACE(0x12e314a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e314a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e314a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e314a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e314a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e314a7 push esi */
  push32((uint32_t)(ESI));
  /* 12e314a8 push edi */
  push32((uint32_t)(EDI));
  /* 12e314a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e314ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e314b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e314b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e314b8 mov esi, esp */
  ESI = (ESP);
  /* 12e314ba push 0xff */
  push32((uint32_t)(0xffu));
  /* 12e314bf call dword ptr [0x12e603cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603cc))), 0x12e314c5u);
  /* 12e314c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e314c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e314ca call 0x12e31b10 */
  push32(0x12e314cfu); f_12e31b10();
  /* 12e314cf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e314d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e314d6 je 0x12e31507 */
  if (C.zf) goto L_12e31507;
  /* 12e314d8 mov esi, esp */
  ESI = (ESP);
  /* 12e314da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12e314dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e314de call dword ptr [0x12e603d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603d0))), 0x12e314e4u);
  /* 12e314e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e314e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e314e9 call 0x12e31b10 */
  push32(0x12e314eeu); f_12e31b10();
  /* 12e314ee mov esi, esp */
  ESI = (ESP);
  /* 12e314f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e314f2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 12e314f7 call dword ptr [0x12e603c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603c8))), 0x12e314fdu);
  /* 12e314fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31500 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31502 call 0x12e31b10 */
  push32(0x12e31507u); f_12e31b10();
L_12e31507:;
  /* 12e31507 mov esi, esp */
  ESI = (ESP);
  /* 12e31509 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3150b call dword ptr [0x12e603d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603d8))), 0x12e31511u);
  /* 12e31511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31514 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31516 call 0x12e31b10 */
  push32(0x12e3151bu); f_12e31b10();
  /* 12e3151b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e31520 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e31522 jne 0x12e31529 */
  if (!C.zf) goto L_12e31529;
  /* 12e31524 jmp 0x12e318d4 */
  goto L_12e318d4;
L_12e31529:;
  /* 12e31529 mov dword ptr [0x12e5e3e0], 0 */
  w32((uint32_t)(0x12e5e3e0), (0x0u));
  /* 12e31533 jmp 0x12e31542 */
  goto L_12e31542;
L_12e31535:;
  /* 12e31535 mov eax, dword ptr [0x12e5e3e0] */
  EAX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e3153a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3153d mov dword ptr [0x12e5e3e0], eax */
  w32((uint32_t)(0x12e5e3e0), (EAX));
L_12e31542:;
  /* 12e31542 cmp dword ptr [0x12e5e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31549 jge 0x12e3162c */
  if ((C.sf==C.of)) goto L_12e3162c;
  /* 12e3154f mov esi, esp */
  ESI = (ESP);
  /* 12e31551 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e31553 mov ecx, dword ptr [0x12e5e3e0] */
  ECX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e31559 lea edx, [ecx*8 + 0x12e5e428] */
  EDX = ((uint32_t)(ECX*8 + 0x12e5e428));
  /* 12e31560 push edx */
  push32((uint32_t)(EDX));
  /* 12e31561 call dword ptr [0x12e603dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603dc))), 0x12e31567u);
  /* 12e31567 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3156a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3156c call 0x12e31b10 */
  push32(0x12e31571u); f_12e31b10();
  /* 12e31571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e31573 jle 0x12e315bb */
  if ((C.zf||C.sf!=C.of)) goto L_12e315bb;
  /* 12e31575 mov esi, esp */
  ESI = (ESP);
  /* 12e31577 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e31579 mov eax, dword ptr [0x12e5e3e0] */
  EAX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e3157e lea ecx, [eax*8 + 0x12e5e428] */
  ECX = ((uint32_t)(EAX*8 + 0x12e5e428));
  /* 12e31585 push ecx */
  push32((uint32_t)(ECX));
  /* 12e31586 call dword ptr [0x12e603dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603dc))), 0x12e3158cu);
  /* 12e3158c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3158f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31591 call 0x12e31b10 */
  push32(0x12e31596u); f_12e31b10();
  /* 12e31596 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e31598 jne 0x12e315bb */
  if (!C.zf) goto L_12e315bb;
  /* 12e3159a mov edx, dword ptr [0x12e5e3e0] */
  EDX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e315a0 mov dword ptr [edx*4 + 0x12e5e3e4], 1 */
  w32((uint32_t)(EDX*4 + 0x12e5e3e4), (0x1u));
  /* 12e315ab mov eax, dword ptr [0x12e5e3e0] */
  EAX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e315b0 mov dword ptr [eax*4 + 0x12e5e3f8], 0 */
  w32((uint32_t)(EAX*4 + 0x12e5e3f8), (0x0u));
L_12e315bb:;
  /* 12e315bb mov esi, esp */
  ESI = (ESP);
  /* 12e315bd push 1 */
  push32((uint32_t)(0x1u));
  /* 12e315bf mov ecx, dword ptr [0x12e5e3e0] */
  ECX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e315c5 lea edx, [ecx*8 + 0x12e5e428] */
  EDX = ((uint32_t)(ECX*8 + 0x12e5e428));
  /* 12e315cc push edx */
  push32((uint32_t)(EDX));
  /* 12e315cd call dword ptr [0x12e603dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603dc))), 0x12e315d3u);
  /* 12e315d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e315d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e315d8 call 0x12e31b10 */
  push32(0x12e315ddu); f_12e31b10();
  /* 12e315dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e315df jle 0x12e31627 */
  if ((C.zf||C.sf!=C.of)) goto L_12e31627;
  /* 12e315e1 mov esi, esp */
  ESI = (ESP);
  /* 12e315e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e315e5 mov eax, dword ptr [0x12e5e3e0] */
  EAX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e315ea lea ecx, [eax*8 + 0x12e5e428] */
  ECX = ((uint32_t)(EAX*8 + 0x12e5e428));
  /* 12e315f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e315f2 call dword ptr [0x12e603dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603dc))), 0x12e315f8u);
  /* 12e315f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e315fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e315fd call 0x12e31b10 */
  push32(0x12e31602u); f_12e31b10();
  /* 12e31602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e31604 jne 0x12e31627 */
  if (!C.zf) goto L_12e31627;
  /* 12e31606 mov edx, dword ptr [0x12e5e3e0] */
  EDX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e3160c mov dword ptr [edx*4 + 0x12e5e3e4], 0 */
  w32((uint32_t)(EDX*4 + 0x12e5e3e4), (0x0u));
  /* 12e31617 mov eax, dword ptr [0x12e5e3e0] */
  EAX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e3161c mov dword ptr [eax*4 + 0x12e5e3f8], 1 */
  w32((uint32_t)(EAX*4 + 0x12e5e3f8), (0x1u));
L_12e31627:;
  /* 12e31627 jmp 0x12e31535 */
  goto L_12e31535;
L_12e3162c:;
  /* 12e3162c mov dword ptr [0x12e5e450], 0 */
  w32((uint32_t)(0x12e5e450), (0x0u));
  /* 12e31636 mov dword ptr [0x12e5e454], 0 */
  w32((uint32_t)(0x12e5e454), (0x0u));
  /* 12e31640 mov dword ptr [0x12e5e3e0], 0 */
  w32((uint32_t)(0x12e5e3e0), (0x0u));
  /* 12e3164a jmp 0x12e3165b */
  goto L_12e3165b;
L_12e3164c:;
  /* 12e3164c mov ecx, dword ptr [0x12e5e3e0] */
  ECX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e31652 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31655 mov dword ptr [0x12e5e3e0], ecx */
  w32((uint32_t)(0x12e5e3e0), (ECX));
L_12e3165b:;
  /* 12e3165b cmp dword ptr [0x12e5e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31662 jge 0x12e31696 */
  if ((C.sf==C.of)) goto L_12e31696;
  /* 12e31664 mov edx, dword ptr [0x12e5e3e0] */
  EDX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e3166a mov eax, dword ptr [0x12e5e450] */
  EAX = (r32((uint32_t)(0x12e5e450)));
  /* 12e3166f add eax, dword ptr [edx*4 + 0x12e5e3e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12e5e3e4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31676 mov dword ptr [0x12e5e450], eax */
  w32((uint32_t)(0x12e5e450), (EAX));
  /* 12e3167b mov ecx, dword ptr [0x12e5e3e0] */
  ECX = (r32((uint32_t)(0x12e5e3e0)));
  /* 12e31681 mov edx, dword ptr [0x12e5e454] */
  EDX = (r32((uint32_t)(0x12e5e454)));
  /* 12e31687 add edx, dword ptr [ecx*4 + 0x12e5e3f8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x12e5e3f8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3168e mov dword ptr [0x12e5e454], edx */
  w32((uint32_t)(0x12e5e454), (EDX));
  /* 12e31694 jmp 0x12e3164c */
  goto L_12e3164c;
L_12e31696:;
  /* 12e31696 cmp dword ptr [0x12e5e450], 3 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e450))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3169d jl 0x12e316a1 */
  if ((C.sf!=C.of)) goto L_12e316a1;
  /* 12e3169f jmp 0x12e316af */
  goto L_12e316af;
L_12e316a1:;
  /* 12e316a1 cmp dword ptr [0x12e5e454], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e454))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e316a8 jl 0x12e316af */
  if ((C.sf!=C.of)) goto L_12e316af;
  /* 12e316aa call 0x12e3100f */
  push32(0x12e316afu); f_12e3100f();
L_12e316af:;
  /* 12e316af mov esi, esp */
  ESI = (ESP);
  /* 12e316b1 push 0xa */
  push32((uint32_t)(0xau));
  /* 12e316b3 call dword ptr [0x12e603cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603cc))), 0x12e316b9u);
  /* 12e316b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e316bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e316be call 0x12e31b10 */
  push32(0x12e316c3u); f_12e31b10();
  /* 12e316c3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e316c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e316ca je 0x12e31714 */
  if (C.zf) goto L_12e31714;
  /* 12e316cc mov esi, esp */
  ESI = (ESP);
  /* 12e316ce call dword ptr [0x12e603d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603d4))), 0x12e316d4u);
  /* 12e316d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e316d6 call 0x12e31b10 */
  push32(0x12e316dbu); f_12e31b10();
  /* 12e316db cmp eax, 0x9470 */
  { uint32_t _a=(EAX),_b=(0x9470u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e316e0 jle 0x12e31714 */
  if ((C.zf||C.sf!=C.of)) goto L_12e31714;
  /* 12e316e2 mov esi, esp */
  ESI = (ESP);
  /* 12e316e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e316e6 push 0xa */
  push32((uint32_t)(0xau));
  /* 12e316e8 call dword ptr [0x12e603c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603c8))), 0x12e316eeu);
  /* 12e316ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e316f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e316f3 call 0x12e31b10 */
  push32(0x12e316f8u); f_12e31b10();
  /* 12e316f8 mov esi, esp */
  ESI = (ESP);
  /* 12e316fa push 0x96 */
  push32((uint32_t)(0x96u));
  /* 12e316ff push 0x12e5907c */
  push32((uint32_t)(0x12e5907cu));
  /* 12e31704 call dword ptr [0x12e603ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603ec))), 0x12e3170au);
  /* 12e3170a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3170d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3170f call 0x12e31b10 */
  push32(0x12e31714u); f_12e31b10();
L_12e31714:;
  /* 12e31714 mov esi, esp */
  ESI = (ESP);
  /* 12e31716 call dword ptr [0x12e603d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603d4))), 0x12e3171cu);
  /* 12e3171c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3171e call 0x12e31b10 */
  push32(0x12e31723u); f_12e31b10();
  /* 12e31723 cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31728 jle 0x12e3172f */
  if ((C.zf||C.sf!=C.of)) goto L_12e3172f;
  /* 12e3172a call 0x12e31023 */
  push32(0x12e3172fu); f_12e31023();
L_12e3172f:;
  /* 12e3172f mov esi, esp */
  ESI = (ESP);
  /* 12e31731 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12e31733 call dword ptr [0x12e603cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603cc))), 0x12e31739u);
  /* 12e31739 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3173c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3173e call 0x12e31b10 */
  push32(0x12e31743u); f_12e31b10();
  /* 12e31743 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e31748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3174a je 0x12e317a1 */
  if (C.zf) goto L_12e317a1;
  /* 12e3174c push 0x12e5e410 */
  push32((uint32_t)(0x12e5e410u));
  /* 12e31751 call 0x12e31005 */
  push32(0x12e31756u); f_12e31005();
  /* 12e31756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31759 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3175c jge 0x12e317a1 */
  if ((C.sf==C.of)) goto L_12e317a1;
  /* 12e3175e mov esi, esp */
  ESI = (ESP);
  /* 12e31760 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e31762 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12e31764 call dword ptr [0x12e603c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603c8))), 0x12e3176au);
  /* 12e3176a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3176d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3176f call 0x12e31b10 */
  push32(0x12e31774u); f_12e31b10();
  /* 12e31774 mov esi, esp */
  ESI = (ESP);
  /* 12e31776 call dword ptr [0x12e603fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603fc))), 0x12e3177cu);
  /* 12e3177c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3177e call 0x12e31b10 */
  push32(0x12e31783u); f_12e31b10();
  /* 12e31783 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31786 jne 0x12e317a1 */
  if (!C.zf) goto L_12e317a1;
  /* 12e31788 mov esi, esp */
  ESI = (ESP);
  /* 12e3178a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12e3178c push 0x12e59074 */
  push32((uint32_t)(0x12e59074u));
  /* 12e31791 call dword ptr [0x12e603ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603ec))), 0x12e31797u);
  /* 12e31797 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3179a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3179c call 0x12e31b10 */
  push32(0x12e317a1u); f_12e31b10();
L_12e317a1:;
  /* 12e317a1 mov esi, esp */
  ESI = (ESP);
  /* 12e317a3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12e317a5 call dword ptr [0x12e603cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603cc))), 0x12e317abu);
  /* 12e317ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e317ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e317b0 call 0x12e31b10 */
  push32(0x12e317b5u); f_12e31b10();
  /* 12e317b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e317ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e317bc je 0x12e31812 */
  if (C.zf) goto L_12e31812;
  /* 12e317be push 0x12e5e418 */
  push32((uint32_t)(0x12e5e418u));
  /* 12e317c3 call 0x12e31005 */
  push32(0x12e317c8u); f_12e31005();
  /* 12e317c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e317cb cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e317ce jge 0x12e31812 */
  if ((C.sf==C.of)) goto L_12e31812;
  /* 12e317d0 mov esi, esp */
  ESI = (ESP);
  /* 12e317d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e317d4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12e317d6 call dword ptr [0x12e603c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603c8))), 0x12e317dcu);
  /* 12e317dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e317df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e317e1 call 0x12e31b10 */
  push32(0x12e317e6u); f_12e31b10();
  /* 12e317e6 mov esi, esp */
  ESI = (ESP);
  /* 12e317e8 call dword ptr [0x12e603fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603fc))), 0x12e317eeu);
  /* 12e317ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e317f0 call 0x12e31b10 */
  push32(0x12e317f5u); f_12e31b10();
  /* 12e317f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e317f7 jne 0x12e31812 */
  if (!C.zf) goto L_12e31812;
  /* 12e317f9 mov esi, esp */
  ESI = (ESP);
  /* 12e317fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12e317fd push 0x12e59074 */
  push32((uint32_t)(0x12e59074u));
  /* 12e31802 call dword ptr [0x12e603ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603ec))), 0x12e31808u);
  /* 12e31808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3180b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3180d call 0x12e31b10 */
  push32(0x12e31812u); f_12e31b10();
L_12e31812:;
  /* 12e31812 push 0x12e5e410 */
  push32((uint32_t)(0x12e5e410u));
  /* 12e31817 call 0x12e31005 */
  push32(0x12e3181cu); f_12e31005();
  /* 12e3181c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3181f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e31821 jne 0x12e31828 */
  if (!C.zf) goto L_12e31828;
  /* 12e31823 call 0x12e3100f */
  push32(0x12e31828u); f_12e3100f();
L_12e31828:;
  /* 12e31828 push 0x12e5e418 */
  push32((uint32_t)(0x12e5e418u));
  /* 12e3182d call 0x12e31005 */
  push32(0x12e31832u); f_12e31005();
  /* 12e31832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e31837 jne 0x12e3183e */
  if (!C.zf) goto L_12e3183e;
  /* 12e31839 call 0x12e31023 */
  push32(0x12e3183eu); f_12e31023();
L_12e3183e:;
  /* 12e3183e mov esi, esp */
  ESI = (ESP);
  /* 12e31840 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e31842 call dword ptr [0x12e603cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603cc))), 0x12e31848u);
  /* 12e31848 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3184b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3184d call 0x12e31b10 */
  push32(0x12e31852u); f_12e31b10();
  /* 12e31852 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e31857 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e31859 je 0x12e31889 */
  if (C.zf) goto L_12e31889;
  /* 12e3185b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3185d push 0x12e5e420 */
  push32((uint32_t)(0x12e5e420u));
  /* 12e31862 call 0x12e31014 */
  push32(0x12e31867u); f_12e31014();
  /* 12e31867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3186a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3186c jne 0x12e31889 */
  if (!C.zf) goto L_12e31889;
  /* 12e3186e mov esi, esp */
  ESI = (ESP);
  /* 12e31870 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e31872 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e31874 call dword ptr [0x12e603c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603c8))), 0x12e3187au);
  /* 12e3187a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3187d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3187f call 0x12e31b10 */
  push32(0x12e31884u); f_12e31b10();
  /* 12e31884 call 0x12e3101e */
  push32(0x12e31889u); f_12e3101e();
L_12e31889:;
  /* 12e31889 mov esi, esp */
  ESI = (ESP);
  /* 12e3188b push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e3188d call dword ptr [0x12e603cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603cc))), 0x12e31893u);
  /* 12e31893 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31896 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31898 call 0x12e31b10 */
  push32(0x12e3189du); f_12e31b10();
  /* 12e3189d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e318a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e318a4 je 0x12e318d4 */
  if (C.zf) goto L_12e318d4;
  /* 12e318a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e318a8 push 0x12e5e420 */
  push32((uint32_t)(0x12e5e420u));
  /* 12e318ad call 0x12e31014 */
  push32(0x12e318b2u); f_12e31014();
  /* 12e318b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e318b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e318b7 jne 0x12e318d4 */
  if (!C.zf) goto L_12e318d4;
  /* 12e318b9 mov esi, esp */
  ESI = (ESP);
  /* 12e318bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e318bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e318bf call dword ptr [0x12e603c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603c8))), 0x12e318c5u);
  /* 12e318c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e318c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e318ca call 0x12e31b10 */
  push32(0x12e318cfu); f_12e31b10();
  /* 12e318cf call 0x12e3102d */
  push32(0x12e318d4u); f_12e3102d();
L_12e318d4:;
  /* 12e318d4 pop edi */
  EDI = (pop32());
  /* 12e318d5 pop esi */
  ESI = (pop32());
  /* 12e318d6 pop ebx */
  EBX = (pop32());
  /* 12e318d7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e318da cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e318dc call 0x12e31b10 */
  push32(0x12e318e1u); f_12e31b10();
  /* 12e318e1 mov esp, ebp */
  ESP = (EBP);
  /* 12e318e3 pop ebp */
  EBP = (pop32());
  /* 12e318e4 ret  */
  ESPCHK(0x12e314a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a00 @ 0x12e31a00 (63 bytes, 26 insns) */
void f_12e31a00(void) {
  FTRACE(0x12e31a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31a01 mov ebp, esp */
  EBP = (ESP);
  /* 12e31a03 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e31a06 push ebx */
  push32((uint32_t)(EBX));
  /* 12e31a07 push esi */
  push32((uint32_t)(ESI));
  /* 12e31a08 push edi */
  push32((uint32_t)(EDI));
  /* 12e31a09 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e31a0c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e31a11 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e31a16 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e31a18 mov esi, esp */
  ESI = (ESP);
  /* 12e31a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31a1d push eax */
  push32((uint32_t)(EAX));
  /* 12e31a1e call dword ptr [0x12e603c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603c0))), 0x12e31a24u);
  /* 12e31a24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31a27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31a29 call 0x12e31b10 */
  push32(0x12e31a2eu); f_12e31b10();
  /* 12e31a2e pop edi */
  EDI = (pop32());
  /* 12e31a2f pop esi */
  ESI = (pop32());
  /* 12e31a30 pop ebx */
  EBX = (pop32());
  /* 12e31a31 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31a34 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31a36 call 0x12e31b10 */
  push32(0x12e31a3bu); f_12e31b10();
  /* 12e31a3b mov esp, ebp */
  ESP = (EBP);
  /* 12e31a3d pop ebp */
  EBP = (pop32());
  /* 12e31a3e ret  */
  ESPCHK(0x12e31a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a50 @ 0x12e31a50 (67 bytes, 28 insns) */
void f_12e31a50(void) {
  FTRACE(0x12e31a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31a51 mov ebp, esp */
  EBP = (ESP);
  /* 12e31a53 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e31a56 push ebx */
  push32((uint32_t)(EBX));
  /* 12e31a57 push esi */
  push32((uint32_t)(ESI));
  /* 12e31a58 push edi */
  push32((uint32_t)(EDI));
  /* 12e31a59 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e31a5c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e31a61 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e31a66 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e31a68 mov esi, esp */
  ESI = (ESP);
  /* 12e31a6a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12e31a6d push eax */
  push32((uint32_t)(EAX));
  /* 12e31a6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31a71 push ecx */
  push32((uint32_t)(ECX));
  /* 12e31a72 call dword ptr [0x12e603c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e603c4))), 0x12e31a78u);
  /* 12e31a78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31a7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31a7d call 0x12e31b10 */
  push32(0x12e31a82u); f_12e31b10();
  /* 12e31a82 pop edi */
  EDI = (pop32());
  /* 12e31a83 pop esi */
  ESI = (pop32());
  /* 12e31a84 pop ebx */
  EBX = (pop32());
  /* 12e31a85 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31a88 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31a8a call 0x12e31b10 */
  push32(0x12e31a8fu); f_12e31b10();
  /* 12e31a8f mov esp, ebp */
  ESP = (EBP);
  /* 12e31a91 pop ebp */
  EBP = (pop32());
  /* 12e31a92 ret  */
  ESPCHK(0x12e31a50u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12e31b10 (56 bytes, 28 insns) */
void f_12e31b10(void) {
  FTRACE(0x12e31b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31b10 jne 0x12e31b13 */
  if (!C.zf) goto L_12e31b13;
  /* 12e31b12 ret  */
  ESPCHK(0x12e31b10u, _esp0);
  ESP += 4; return;
L_12e31b13:;
  /* 12e31b13 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31b14 mov ebp, esp */
  EBP = (ESP);
  /* 12e31b16 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e31b19 push eax */
  push32((uint32_t)(EAX));
  /* 12e31b1a push edx */
  push32((uint32_t)(EDX));
  /* 12e31b1b push ebx */
  push32((uint32_t)(EBX));
  /* 12e31b1c push esi */
  push32((uint32_t)(ESI));
  /* 12e31b1d push edi */
  push32((uint32_t)(EDI));
  /* 12e31b1e push 0x12e59098 */
  push32((uint32_t)(0x12e59098u));
  /* 12e31b23 push 0x12e59094 */
  push32((uint32_t)(0x12e59094u));
  /* 12e31b28 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12e31b2a push 0x12e59084 */
  push32((uint32_t)(0x12e59084u));
  /* 12e31b2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e31b31 call 0x12e31ee0 */
  push32(0x12e31b36u); f_12e31ee0();
  /* 12e31b36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31b39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31b3c jne 0x12e31b3f */
  if (!C.zf) goto L_12e31b3f;
  /* 12e31b3e int3  */
  x86_unimpl("int3 @ 0x12e31b3e");
L_12e31b3f:;
  /* 12e31b3f pop edi */
  EDI = (pop32());
  /* 12e31b40 pop esi */
  ESI = (pop32());
  /* 12e31b41 pop ebx */
  EBX = (pop32());
  /* 12e31b42 pop edx */
  EDX = (pop32());
  /* 12e31b43 pop eax */
  EAX = (pop32());
  /* 12e31b44 mov esp, ebp */
  ESP = (EBP);
  /* 12e31b46 pop ebp */
  EBP = (pop32());
  /* 12e31b47 ret  */
  ESPCHK(0x12e31b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b50 @ 0x12e31b50 (313 bytes, 78 insns) */
void f_12e31b50(void) {
  FTRACE(0x12e31b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31b51 mov ebp, esp */
  EBP = (ESP);
  /* 12e31b53 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31b57 jne 0x12e31c17 */
  if (!C.zf) goto L_12e31c17;
  /* 12e31b5d call dword ptr [0x12e60284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60284))), 0x12e31b63u);
  /* 12e31b63 mov dword ptr [0x12e5e490], eax */
  w32((uint32_t)(0x12e5e490), (EAX));
  /* 12e31b68 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e31b6a call 0x12e35610 */
  push32(0x12e31b6fu); f_12e35610();
  /* 12e31b6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31b72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e31b74 jne 0x12e31b7d */
  if (!C.zf) goto L_12e31b7d;
  /* 12e31b76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e31b78 jmp 0x12e31c85 */
  goto L_12e31c85;
L_12e31b7d:;
  /* 12e31b7d mov eax, dword ptr [0x12e5e490] */
  EAX = (r32((uint32_t)(0x12e5e490)));
  /* 12e31b82 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12e31b85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e31b8a mov dword ptr [0x12e5e49c], eax */
  w32((uint32_t)(0x12e5e49c), (EAX));
  /* 12e31b8f mov ecx, dword ptr [0x12e5e490] */
  ECX = (r32((uint32_t)(0x12e5e490)));
  /* 12e31b95 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e31b9b mov dword ptr [0x12e5e498], ecx */
  w32((uint32_t)(0x12e5e498), (ECX));
  /* 12e31ba1 mov edx, dword ptr [0x12e5e498] */
  EDX = (r32((uint32_t)(0x12e5e498)));
  /* 12e31ba7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12e31baa add edx, dword ptr [0x12e5e49c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e5e49c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31bb0 mov dword ptr [0x12e5e494], edx */
  w32((uint32_t)(0x12e5e494), (EDX));
  /* 12e31bb6 mov eax, dword ptr [0x12e5e490] */
  EAX = (r32((uint32_t)(0x12e5e490)));
  /* 12e31bbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12e31bbe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e31bc3 mov dword ptr [0x12e5e490], eax */
  w32((uint32_t)(0x12e5e490), (EAX));
  /* 12e31bc8 call 0x12e32780 */
  push32(0x12e31bcdu); f_12e32780();
  /* 12e31bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e31bcf jne 0x12e31bdd */
  if (!C.zf) goto L_12e31bdd;
  /* 12e31bd1 call 0x12e35660 */
  push32(0x12e31bd6u); f_12e35660();
  /* 12e31bd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e31bd8 jmp 0x12e31c85 */
  goto L_12e31c85;
L_12e31bdd:;
  /* 12e31bdd call dword ptr [0x12e60280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60280))), 0x12e31be3u);
  /* 12e31be3 mov dword ptr [0x12e5ffcc], eax */
  w32((uint32_t)(0x12e5ffcc), (EAX));
  /* 12e31be8 call 0x12e353f0 */
  push32(0x12e31bedu); f_12e353f0();
  /* 12e31bed mov dword ptr [0x12e5e478], eax */
  w32((uint32_t)(0x12e5e478), (EAX));
  /* 12e31bf2 call 0x12e32a30 */
  push32(0x12e31bf7u); f_12e32a30();
  /* 12e31bf7 call 0x12e34ee0 */
  push32(0x12e31bfcu); f_12e34ee0();
  /* 12e31bfc call 0x12e34d90 */
  push32(0x12e31c01u); f_12e34d90();
  /* 12e31c01 call 0x12e32580 */
  push32(0x12e31c06u); f_12e32580();
  /* 12e31c06 mov ecx, dword ptr [0x12e5e474] */
  ECX = (r32((uint32_t)(0x12e5e474)));
  /* 12e31c0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31c0f mov dword ptr [0x12e5e474], ecx */
  w32((uint32_t)(0x12e5e474), (ECX));
  /* 12e31c15 jmp 0x12e31c80 */
  goto L_12e31c80;
L_12e31c17:;
  /* 12e31c17 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31c1b jne 0x12e31c70 */
  if (!C.zf) goto L_12e31c70;
  /* 12e31c1d cmp dword ptr [0x12e5e474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31c24 jle 0x12e31c6a */
  if ((C.zf||C.sf!=C.of)) goto L_12e31c6a;
  /* 12e31c26 mov edx, dword ptr [0x12e5e474] */
  EDX = (r32((uint32_t)(0x12e5e474)));
  /* 12e31c2c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e31c2f mov dword ptr [0x12e5e474], edx */
  w32((uint32_t)(0x12e5e474), (EDX));
  /* 12e31c35 cmp dword ptr [0x12e5e4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31c3c jne 0x12e31c43 */
  if (!C.zf) goto L_12e31c43;
  /* 12e31c3e call 0x12e32600 */
  push32(0x12e31c43u); f_12e32600();
L_12e31c43:;
  /* 12e31c43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e31c45 call 0x12e34330 */
  push32(0x12e31c4au); f_12e34330();
  /* 12e31c4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31c4d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12e31c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e31c52 je 0x12e31c59 */
  if (C.zf) goto L_12e31c59;
  /* 12e31c54 call 0x12e34c40 */
  push32(0x12e31c59u); f_12e34c40();
L_12e31c59:;
  /* 12e31c59 call 0x12e32d60 */
  push32(0x12e31c5eu); f_12e32d60();
  /* 12e31c5e call 0x12e32810 */
  push32(0x12e31c63u); f_12e32810();
  /* 12e31c63 call 0x12e35660 */
  push32(0x12e31c68u); f_12e35660();
  /* 12e31c68 jmp 0x12e31c6e */
  goto L_12e31c6e;
L_12e31c6a:;
  /* 12e31c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e31c6c jmp 0x12e31c85 */
  goto L_12e31c85;
L_12e31c6e:;
  /* 12e31c6e jmp 0x12e31c80 */
  goto L_12e31c80;
L_12e31c70:;
  /* 12e31c70 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31c74 jne 0x12e31c80 */
  if (!C.zf) goto L_12e31c80;
  /* 12e31c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e31c78 call 0x12e32900 */
  push32(0x12e31c7du); f_12e32900();
  /* 12e31c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e31c80:;
  /* 12e31c80 mov eax, 1 */
  EAX = (0x1u);
L_12e31c85:;
  /* 12e31c85 pop ebp */
  EBP = (pop32());
  /* 12e31c86 ret 0xc */
  ESPCHK(0x12e31b50u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12e31c90 (243 bytes, 86 insns) */
void f_12e31c90(void) {
  FTRACE(0x12e31c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31c91 mov ebp, esp */
  EBP = (ESP);
  /* 12e31c93 push ecx */
  push32((uint32_t)(ECX));
  /* 12e31c94 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e31c9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31c9f jne 0x12e31cb1 */
  if (!C.zf) goto L_12e31cb1;
  /* 12e31ca1 cmp dword ptr [0x12e5e474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31ca8 jne 0x12e31cb1 */
  if (!C.zf) goto L_12e31cb1;
  /* 12e31caa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e31cac jmp 0x12e31d7d */
  goto L_12e31d7d;
L_12e31cb1:;
  /* 12e31cb1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31cb5 je 0x12e31cbd */
  if (C.zf) goto L_12e31cbd;
  /* 12e31cb7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31cbb jne 0x12e31cff */
  if (!C.zf) goto L_12e31cff;
L_12e31cbd:;
  /* 12e31cbd cmp dword ptr [0x12e5ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31cc4 je 0x12e31cdb */
  if (C.zf) goto L_12e31cdb;
  /* 12e31cc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e31cc9 push eax */
  push32((uint32_t)(EAX));
  /* 12e31cca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e31ccd push ecx */
  push32((uint32_t)(ECX));
  /* 12e31cce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31cd1 push edx */
  push32((uint32_t)(EDX));
  /* 12e31cd2 call dword ptr [0x12e5ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5ffdc))), 0x12e31cd8u);
  /* 12e31cd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e31cdb:;
  /* 12e31cdb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31cdf je 0x12e31cf5 */
  if (C.zf) goto L_12e31cf5;
  /* 12e31ce1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e31ce4 push eax */
  push32((uint32_t)(EAX));
  /* 12e31ce5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e31ce8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e31ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31cec push edx */
  push32((uint32_t)(EDX));
  /* 12e31ced call 0x12e31b50 */
  push32(0x12e31cf2u); f_12e31b50();
  /* 12e31cf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e31cf5:;
  /* 12e31cf5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31cf9 jne 0x12e31cff */
  if (!C.zf) goto L_12e31cff;
  /* 12e31cfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e31cfd jmp 0x12e31d7d */
  goto L_12e31d7d;
L_12e31cff:;
  /* 12e31cff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e31d02 push eax */
  push32((uint32_t)(EAX));
  /* 12e31d03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e31d06 push ecx */
  push32((uint32_t)(ECX));
  /* 12e31d07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31d0a push edx */
  push32((uint32_t)(EDX));
  /* 12e31d0b call 0x12e31019 */
  push32(0x12e31d10u); f_12e31019();
  /* 12e31d10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e31d13 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31d17 jne 0x12e31d2e */
  if (!C.zf) goto L_12e31d2e;
  /* 12e31d19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31d1d jne 0x12e31d2e */
  if (!C.zf) goto L_12e31d2e;
  /* 12e31d1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e31d22 push eax */
  push32((uint32_t)(EAX));
  /* 12e31d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e31d25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31d28 push ecx */
  push32((uint32_t)(ECX));
  /* 12e31d29 call 0x12e31b50 */
  push32(0x12e31d2eu); f_12e31b50();
L_12e31d2e:;
  /* 12e31d2e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31d32 je 0x12e31d3a */
  if (C.zf) goto L_12e31d3a;
  /* 12e31d34 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31d38 jne 0x12e31d7a */
  if (!C.zf) goto L_12e31d7a;
L_12e31d3a:;
  /* 12e31d3a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e31d3d push edx */
  push32((uint32_t)(EDX));
  /* 12e31d3e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e31d41 push eax */
  push32((uint32_t)(EAX));
  /* 12e31d42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31d45 push ecx */
  push32((uint32_t)(ECX));
  /* 12e31d46 call 0x12e31b50 */
  push32(0x12e31d4bu); f_12e31b50();
  /* 12e31d4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e31d4d jne 0x12e31d56 */
  if (!C.zf) goto L_12e31d56;
  /* 12e31d4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e31d56:;
  /* 12e31d56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31d5a je 0x12e31d7a */
  if (C.zf) goto L_12e31d7a;
  /* 12e31d5c cmp dword ptr [0x12e5ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31d63 je 0x12e31d7a */
  if (C.zf) goto L_12e31d7a;
  /* 12e31d65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e31d68 push edx */
  push32((uint32_t)(EDX));
  /* 12e31d69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e31d6c push eax */
  push32((uint32_t)(EAX));
  /* 12e31d6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31d70 push ecx */
  push32((uint32_t)(ECX));
  /* 12e31d71 call dword ptr [0x12e5ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5ffdc))), 0x12e31d77u);
  /* 12e31d77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e31d7a:;
  /* 12e31d7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e31d7d:;
  /* 12e31d7d mov esp, ebp */
  ESP = (EBP);
  /* 12e31d7f pop ebp */
  EBP = (pop32());
  /* 12e31d80 ret 0xc */
  ESPCHK(0x12e31c90u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12e31d90 (58 bytes, 18 insns) */
void f_12e31d90(void) {
  FTRACE(0x12e31d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31d91 mov ebp, esp */
  EBP = (ESP);
  /* 12e31d93 cmp dword ptr [0x12e5e480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31d9a je 0x12e31dae */
  if (C.zf) goto L_12e31dae;
  /* 12e31d9c cmp dword ptr [0x12e5e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31da3 jne 0x12e31db3 */
  if (!C.zf) goto L_12e31db3;
  /* 12e31da5 cmp dword ptr [0x12e5e484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31dac jne 0x12e31db3 */
  if (!C.zf) goto L_12e31db3;
L_12e31dae:;
  /* 12e31dae call 0x12e35700 */
  push32(0x12e31db3u); f_12e35700();
L_12e31db3:;
  /* 12e31db3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31db6 push eax */
  push32((uint32_t)(EAX));
  /* 12e31db7 call 0x12e35750 */
  push32(0x12e31dbcu); f_12e35750();
  /* 12e31dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31dbf push 0xff */
  push32((uint32_t)(0xffu));
  /* 12e31dc4 call dword ptr [0x12e5ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5ca30))), 0x12e31dcau);
  /* 12e31dca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31dcd pop ebp */
  EBP = (pop32());
  /* 12e31dce ret  */
  ESPCHK(0x12e31d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dd0 @ 0x12e31dd0 (11 bytes, 5 insns) */
void f_12e31dd0(void) {
  FTRACE(0x12e31dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12e31dd3 call dword ptr [0x12e60288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60288))), 0x12e31dd9u);
  /* 12e31dd9 pop ebp */
  EBP = (pop32());
  /* 12e31dda ret  */
  ESPCHK(0x12e31dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001de0 @ 0x12e31de0 (87 bytes, 30 insns) */
void f_12e31de0(void) {
  FTRACE(0x12e31de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31de1 mov ebp, esp */
  EBP = (ESP);
  /* 12e31de3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e31de4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31de8 jl 0x12e31df0 */
  if ((C.sf!=C.of)) goto L_12e31df0;
  /* 12e31dea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31dee jl 0x12e31df5 */
  if ((C.sf!=C.of)) goto L_12e31df5;
L_12e31df0:;
  /* 12e31df0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e31df3 jmp 0x12e31e33 */
  goto L_12e31e33;
L_12e31df5:;
  /* 12e31df5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31df9 jne 0x12e31e07 */
  if (!C.zf) goto L_12e31e07;
  /* 12e31dfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31dfe mov eax, dword ptr [eax*4 + 0x12e5ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12e5ca38)));
  /* 12e31e05 jmp 0x12e31e33 */
  goto L_12e31e33;
L_12e31e07:;
  /* 12e31e07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e31e0a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12e31e0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e31e0f je 0x12e31e16 */
  if (C.zf) goto L_12e31e16;
  /* 12e31e11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e31e14 jmp 0x12e31e33 */
  goto L_12e31e33;
L_12e31e16:;
  /* 12e31e16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31e19 mov eax, dword ptr [edx*4 + 0x12e5ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e5ca38)));
  /* 12e31e20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e31e23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31e26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e31e29 mov dword ptr [ecx*4 + 0x12e5ca38], edx */
  w32((uint32_t)(ECX*4 + 0x12e5ca38), (EDX));
  /* 12e31e30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e31e33:;
  /* 12e31e33 mov esp, ebp */
  ESP = (EBP);
  /* 12e31e35 pop ebp */
  EBP = (pop32());
  /* 12e31e36 ret  */
  ESPCHK(0x12e31de0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12e31e40 (126 bytes, 38 insns) */
void f_12e31e40(void) {
  FTRACE(0x12e31e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31e41 mov ebp, esp */
  EBP = (ESP);
  /* 12e31e43 push ecx */
  push32((uint32_t)(ECX));
  /* 12e31e44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31e48 jl 0x12e31e50 */
  if ((C.sf!=C.of)) goto L_12e31e50;
  /* 12e31e4a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31e4e jl 0x12e31e57 */
  if ((C.sf!=C.of)) goto L_12e31e57;
L_12e31e50:;
  /* 12e31e50 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12e31e55 jmp 0x12e31eba */
  goto L_12e31eba;
L_12e31e57:;
  /* 12e31e57 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31e5b jne 0x12e31e69 */
  if (!C.zf) goto L_12e31e69;
  /* 12e31e5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31e60 mov eax, dword ptr [eax*4 + 0x12e5ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12e5ca44)));
  /* 12e31e67 jmp 0x12e31eba */
  goto L_12e31eba;
L_12e31e69:;
  /* 12e31e69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31e6c mov edx, dword ptr [ecx*4 + 0x12e5ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e5ca44)));
  /* 12e31e73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e31e76 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31e7a jne 0x12e31e90 */
  if (!C.zf) goto L_12e31e90;
  /* 12e31e7c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12e31e7e call dword ptr [0x12e6028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6028c))), 0x12e31e84u);
  /* 12e31e84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31e87 mov dword ptr [ecx*4 + 0x12e5ca44], eax */
  w32((uint32_t)(ECX*4 + 0x12e5ca44), (EAX));
  /* 12e31e8e jmp 0x12e31eb7 */
  goto L_12e31eb7;
L_12e31e90:;
  /* 12e31e90 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31e94 jne 0x12e31eaa */
  if (!C.zf) goto L_12e31eaa;
  /* 12e31e96 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12e31e98 call dword ptr [0x12e6028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6028c))), 0x12e31e9eu);
  /* 12e31e9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31ea1 mov dword ptr [edx*4 + 0x12e5ca44], eax */
  w32((uint32_t)(EDX*4 + 0x12e5ca44), (EAX));
  /* 12e31ea8 jmp 0x12e31eb7 */
  goto L_12e31eb7;
L_12e31eaa:;
  /* 12e31eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31ead mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e31eb0 mov dword ptr [eax*4 + 0x12e5ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x12e5ca44), (ECX));
L_12e31eb7:;
  /* 12e31eb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e31eba:;
  /* 12e31eba mov esp, ebp */
  ESP = (EBP);
  /* 12e31ebc pop ebp */
  EBP = (pop32());
  /* 12e31ebd ret  */
  ESPCHK(0x12e31e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ec0 @ 0x12e31ec0 (28 bytes, 11 insns) */
void f_12e31ec0(void) {
  FTRACE(0x12e31ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12e31ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e31ec4 mov eax, dword ptr [0x12e5ffc0] */
  EAX = (r32((uint32_t)(0x12e5ffc0)));
  /* 12e31ec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e31ecc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e31ecf mov dword ptr [0x12e5ffc0], ecx */
  w32((uint32_t)(0x12e5ffc0), (ECX));
  /* 12e31ed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e31ed8 mov esp, ebp */
  ESP = (EBP);
  /* 12e31eda pop ebp */
  EBP = (pop32());
  /* 12e31edb ret  */
  ESPCHK(0x12e31ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ee0 @ 0x12e31ee0 (912 bytes, 248 insns) */
void f_12e31ee0(void) {
  FTRACE(0x12e31ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e31ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e31ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12e31ee3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12e31ee8 call 0x12e35fc0 */
  push32(0x12e31eedu); f_12e35fc0();
  /* 12e31eed push edi */
  push32((uint32_t)(EDI));
  /* 12e31eee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12e31ef5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12e31efa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e31efc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12e31f02 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e31f04 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12e31f06 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12e31f07 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12e31f0e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12e31f13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e31f15 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12e31f1b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e31f1d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12e31f1f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12e31f20 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12e31f27 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12e31f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e31f2e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12e31f34 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e31f36 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12e31f38 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12e31f39 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12e31f3c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12e31f42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31f46 jl 0x12e31f4e */
  if ((C.sf!=C.of)) goto L_12e31f4e;
  /* 12e31f48 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31f4c jl 0x12e31f56 */
  if ((C.sf!=C.of)) goto L_12e31f56;
L_12e31f4e:;
  /* 12e31f4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e31f51 jmp 0x12e3226b */
  goto L_12e3226b;
L_12e31f56:;
  /* 12e31f56 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31f5a jne 0x12e32000 */
  if (!C.zf) goto L_12e32000;
  /* 12e31f60 push 0x12e5ca34 */
  push32((uint32_t)(0x12e5ca34u));
  /* 12e31f65 call dword ptr [0x12e602a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602a4))), 0x12e31f6bu);
  /* 12e31f6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e31f6d jle 0x12e32000 */
  if ((C.zf||C.sf!=C.of)) goto L_12e32000;
  /* 12e31f73 cmp dword ptr [0x12e5e488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31f7a jne 0x12e31fbe */
  if (!C.zf) goto L_12e31fbe;
  /* 12e31f7c push 0x12e59240 */
  push32((uint32_t)(0x12e59240u));
  /* 12e31f81 call dword ptr [0x12e602a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602a0))), 0x12e31f87u);
  /* 12e31f87 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12e31f8d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31f94 je 0x12e31fb6 */
  if (C.zf) goto L_12e31fb6;
  /* 12e31f96 push 0x12e59234 */
  push32((uint32_t)(0x12e59234u));
  /* 12e31f9b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12e31fa1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e31fa2 call dword ptr [0x12e6029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6029c))), 0x12e31fa8u);
  /* 12e31fa8 mov dword ptr [0x12e5e488], eax */
  w32((uint32_t)(0x12e5e488), (EAX));
  /* 12e31fad cmp dword ptr [0x12e5e488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e31fb4 jne 0x12e31fbe */
  if (!C.zf) goto L_12e31fbe;
L_12e31fb6:;
  /* 12e31fb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e31fb9 jmp 0x12e3226b */
  goto L_12e3226b;
L_12e31fbe:;
  /* 12e31fbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e31fc1 push edx */
  push32((uint32_t)(EDX));
  /* 12e31fc2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e31fc5 push eax */
  push32((uint32_t)(EAX));
  /* 12e31fc6 push 0x12e59200 */
  push32((uint32_t)(0x12e59200u));
  /* 12e31fcb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12e31fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e31fd2 call dword ptr [0x12e5e488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e488))), 0x12e31fd8u);
  /* 12e31fd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e31fdb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12e31fe1 push edx */
  push32((uint32_t)(EDX));
  /* 12e31fe2 call dword ptr [0x12e60298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60298))), 0x12e31fe8u);
  /* 12e31fe8 push 0x12e5ca34 */
  push32((uint32_t)(0x12e5ca34u));
  /* 12e31fed call dword ptr [0x12e60294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60294))), 0x12e31ff3u);
  /* 12e31ff3 call 0x12e31dd0 */
  push32(0x12e31ff8u); f_12e31dd0();
  /* 12e31ff8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e31ffb jmp 0x12e3226b */
  goto L_12e3226b;
L_12e32000:;
  /* 12e32000 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32004 je 0x12e3203d */
  if (C.zf) goto L_12e3203d;
  /* 12e32006 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12e3200c push eax */
  push32((uint32_t)(EAX));
  /* 12e3200d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e32010 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32011 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12e32016 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12e3201c push edx */
  push32((uint32_t)(EDX));
  /* 12e3201d call 0x12e35ec0 */
  push32(0x12e32022u); f_12e35ec0();
  /* 12e32022 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32025 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e32027 jge 0x12e3203d */
  if ((C.sf==C.of)) goto L_12e3203d;
  /* 12e32029 push 0x12e591d4 */
  push32((uint32_t)(0x12e591d4u));
  /* 12e3202e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12e32034 push eax */
  push32((uint32_t)(EAX));
  /* 12e32035 call 0x12e35dd0 */
  push32(0x12e3203au); f_12e35dd0();
  /* 12e3203a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3203d:;
  /* 12e3203d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32041 jne 0x12e32075 */
  if (!C.zf) goto L_12e32075;
  /* 12e32043 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32047 je 0x12e32055 */
  if (C.zf) goto L_12e32055;
  /* 12e32049 mov dword ptr [ebp - 0x3028], 0x12e591c0 */
  w32((uint32_t)(EBP + -0x3028), (0x12e591c0u));
  /* 12e32053 jmp 0x12e3205f */
  goto L_12e3205f;
L_12e32055:;
  /* 12e32055 mov dword ptr [ebp - 0x3028], 0x12e591ac */
  w32((uint32_t)(EBP + -0x3028), (0x12e591acu));
L_12e3205f:;
  /* 12e3205f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12e32065 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32066 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12e3206c push edx */
  push32((uint32_t)(EDX));
  /* 12e3206d call 0x12e35dd0 */
  push32(0x12e32072u); f_12e35dd0();
  /* 12e32072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e32075:;
  /* 12e32075 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12e3207b push eax */
  push32((uint32_t)(EAX));
  /* 12e3207c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12e32082 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32083 call 0x12e35de0 */
  push32(0x12e32088u); f_12e35de0();
  /* 12e32088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3208b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3208f jne 0x12e320ca */
  if (!C.zf) goto L_12e320ca;
  /* 12e32091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32094 mov eax, dword ptr [edx*4 + 0x12e5ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e5ca38)));
  /* 12e3209b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3209e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e320a0 je 0x12e320b6 */
  if (C.zf) goto L_12e320b6;
  /* 12e320a2 push 0x12e591a8 */
  push32((uint32_t)(0x12e591a8u));
  /* 12e320a7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12e320ad push ecx */
  push32((uint32_t)(ECX));
  /* 12e320ae call 0x12e35de0 */
  push32(0x12e320b3u); f_12e35de0();
  /* 12e320b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e320b6:;
  /* 12e320b6 push 0x12e591a4 */
  push32((uint32_t)(0x12e591a4u));
  /* 12e320bb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12e320c1 push edx */
  push32((uint32_t)(EDX));
  /* 12e320c2 call 0x12e35de0 */
  push32(0x12e320c7u); f_12e35de0();
  /* 12e320c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e320ca:;
  /* 12e320ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e320ce je 0x12e32112 */
  if (C.zf) goto L_12e32112;
  /* 12e320d0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12e320d6 push eax */
  push32((uint32_t)(EAX));
  /* 12e320d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e320da push ecx */
  push32((uint32_t)(ECX));
  /* 12e320db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e320de push edx */
  push32((uint32_t)(EDX));
  /* 12e320df push 0x12e59198 */
  push32((uint32_t)(0x12e59198u));
  /* 12e320e4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12e320e9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12e320ef push eax */
  push32((uint32_t)(EAX));
  /* 12e320f0 call 0x12e35cd0 */
  push32(0x12e320f5u); f_12e35cd0();
  /* 12e320f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e320f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e320fa jge 0x12e32110 */
  if ((C.sf==C.of)) goto L_12e32110;
  /* 12e320fc push 0x12e591d4 */
  push32((uint32_t)(0x12e591d4u));
  /* 12e32101 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12e32107 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32108 call 0x12e35dd0 */
  push32(0x12e3210du); f_12e35dd0();
  /* 12e3210d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e32110:;
  /* 12e32110 jmp 0x12e32128 */
  goto L_12e32128;
L_12e32112:;
  /* 12e32112 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12e32118 push edx */
  push32((uint32_t)(EDX));
  /* 12e32119 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12e3211f push eax */
  push32((uint32_t)(EAX));
  /* 12e32120 call 0x12e35dd0 */
  push32(0x12e32125u); f_12e35dd0();
  /* 12e32125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e32128:;
  /* 12e32128 cmp dword ptr [0x12e5ffc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5ffc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3212f je 0x12e3216c */
  if (C.zf) goto L_12e3216c;
  /* 12e32131 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12e32137 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32138 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12e3213e push edx */
  push32((uint32_t)(EDX));
  /* 12e3213f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32142 push eax */
  push32((uint32_t)(EAX));
  /* 12e32143 call dword ptr [0x12e5ffc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5ffc0))), 0x12e32149u);
  /* 12e32149 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3214c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3214e je 0x12e3216c */
  if (C.zf) goto L_12e3216c;
  /* 12e32150 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32154 jne 0x12e32161 */
  if (!C.zf) goto L_12e32161;
  /* 12e32156 push 0x12e5ca34 */
  push32((uint32_t)(0x12e5ca34u));
  /* 12e3215b call dword ptr [0x12e60294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60294))), 0x12e32161u);
L_12e32161:;
  /* 12e32161 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12e32167 jmp 0x12e3226b */
  goto L_12e3226b;
L_12e3216c:;
  /* 12e3216c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3216f mov edx, dword ptr [ecx*4 + 0x12e5ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e5ca38)));
  /* 12e32176 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e32179 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3217b je 0x12e321bb */
  if (C.zf) goto L_12e321bb;
  /* 12e3217d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32180 cmp dword ptr [eax*4 + 0x12e5ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12e5ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32188 je 0x12e321bb */
  if (C.zf) goto L_12e321bb;
  /* 12e3218a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3218c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12e32192 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32193 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12e32199 push edx */
  push32((uint32_t)(EDX));
  /* 12e3219a call 0x12e35c50 */
  push32(0x12e3219fu); f_12e35c50();
  /* 12e3219f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e321a2 push eax */
  push32((uint32_t)(EAX));
  /* 12e321a3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12e321a9 push eax */
  push32((uint32_t)(EAX));
  /* 12e321aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e321ad mov edx, dword ptr [ecx*4 + 0x12e5ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e5ca44)));
  /* 12e321b4 push edx */
  push32((uint32_t)(EDX));
  /* 12e321b5 call dword ptr [0x12e60290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60290))), 0x12e321bbu);
L_12e321bb:;
  /* 12e321bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e321be mov ecx, dword ptr [eax*4 + 0x12e5ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e5ca38)));
  /* 12e321c5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12e321c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e321ca je 0x12e321d9 */
  if (C.zf) goto L_12e321d9;
  /* 12e321cc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12e321d2 push edx */
  push32((uint32_t)(EDX));
  /* 12e321d3 call dword ptr [0x12e60298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60298))), 0x12e321d9u);
L_12e321d9:;
  /* 12e321d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e321dc mov ecx, dword ptr [eax*4 + 0x12e5ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e5ca38)));
  /* 12e321e3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e321e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e321e8 je 0x12e32258 */
  if (C.zf) goto L_12e32258;
  /* 12e321ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e321ee je 0x12e3220d */
  if (C.zf) goto L_12e3220d;
  /* 12e321f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12e321f2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12e321f8 push edx */
  push32((uint32_t)(EDX));
  /* 12e321f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e321fc push eax */
  push32((uint32_t)(EAX));
  /* 12e321fd call 0x12e35960 */
  push32(0x12e32202u); f_12e35960();
  /* 12e32202 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32205 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12e3220b jmp 0x12e32217 */
  goto L_12e32217;
L_12e3220d:;
  /* 12e3220d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12e32217:;
  /* 12e32217 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12e3221d push ecx */
  push32((uint32_t)(ECX));
  /* 12e3221e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e32221 push edx */
  push32((uint32_t)(EDX));
  /* 12e32222 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12e32228 push eax */
  push32((uint32_t)(EAX));
  /* 12e32229 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3222c push ecx */
  push32((uint32_t)(ECX));
  /* 12e3222d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32230 push edx */
  push32((uint32_t)(EDX));
  /* 12e32231 call 0x12e32270 */
  push32(0x12e32236u); f_12e32270();
  /* 12e32236 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32239 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12e3223f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32243 jne 0x12e32250 */
  if (!C.zf) goto L_12e32250;
  /* 12e32245 push 0x12e5ca34 */
  push32((uint32_t)(0x12e5ca34u));
  /* 12e3224a call dword ptr [0x12e60294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60294))), 0x12e32250u);
L_12e32250:;
  /* 12e32250 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12e32256 jmp 0x12e3226b */
  goto L_12e3226b;
L_12e32258:;
  /* 12e32258 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3225c jne 0x12e32269 */
  if (!C.zf) goto L_12e32269;
  /* 12e3225e push 0x12e5ca34 */
  push32((uint32_t)(0x12e5ca34u));
  /* 12e32263 call dword ptr [0x12e60294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60294))), 0x12e32269u);
L_12e32269:;
  /* 12e32269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e3226b:;
  /* 12e3226b pop edi */
  EDI = (pop32());
  /* 12e3226c mov esp, ebp */
  ESP = (EBP);
  /* 12e3226e pop ebp */
  EBP = (pop32());
  /* 12e3226f ret  */
  ESPCHK(0x12e31ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002270 @ 0x12e32270 (780 bytes, 197 insns) */
void f_12e32270(void) {
  FTRACE(0x12e32270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32270 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32271 mov ebp, esp */
  EBP = (ESP);
  /* 12e32273 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12e32278 call 0x12e35fc0 */
  push32(0x12e3227du); f_12e35fc0();
L_12e3227d:;
  /* 12e3227d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32281 jne 0x12e322a8 */
  if (!C.zf) goto L_12e322a8;
  /* 12e32283 push 0x12e59390 */
  push32((uint32_t)(0x12e59390u));
  /* 12e32288 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3228a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12e3228f push 0x12e59384 */
  push32((uint32_t)(0x12e59384u));
  /* 12e32294 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e32296 call 0x12e31ee0 */
  push32(0x12e3229bu); f_12e31ee0();
  /* 12e3229b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3229e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e322a1 jne 0x12e322a8 */
  if (!C.zf) goto L_12e322a8;
  /* 12e322a3 call 0x12e31dd0 */
  push32(0x12e322a8u); f_12e31dd0();
L_12e322a8:;
  /* 12e322a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e322aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e322ac jne 0x12e3227d */
  if (!C.zf) goto L_12e3227d;
  /* 12e322ae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12e322b3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12e322b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e322ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12e322bc call dword ptr [0x12e602a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602a8))), 0x12e322c2u);
  /* 12e322c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e322c4 jne 0x12e322da */
  if (!C.zf) goto L_12e322da;
  /* 12e322c6 push 0x12e5936c */
  push32((uint32_t)(0x12e5936cu));
  /* 12e322cb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12e322d1 push edx */
  push32((uint32_t)(EDX));
  /* 12e322d2 call 0x12e35dd0 */
  push32(0x12e322d7u); f_12e35dd0();
  /* 12e322d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e322da:;
  /* 12e322da lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12e322e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e322e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e322e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e322e7 call 0x12e35c50 */
  push32(0x12e322ecu); f_12e35c50();
  /* 12e322ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e322ef cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e322f2 jbe 0x12e3231d */
  if ((C.cf||C.zf)) goto L_12e3231d;
  /* 12e322f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e322f7 push edx */
  push32((uint32_t)(EDX));
  /* 12e322f8 call 0x12e35c50 */
  push32(0x12e322fdu); f_12e35c50();
  /* 12e322fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32300 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e32303 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12e32307 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e3230a push 3 */
  push32((uint32_t)(0x3u));
  /* 12e3230c push 0x12e59368 */
  push32((uint32_t)(0x12e59368u));
  /* 12e32311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e32314 push eax */
  push32((uint32_t)(EAX));
  /* 12e32315 call 0x12e36640 */
  push32(0x12e3231au); f_12e36640();
  /* 12e3231a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3231d:;
  /* 12e3231d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e32320 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12e32326 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3232d je 0x12e32378 */
  if (C.zf) goto L_12e32378;
  /* 12e3232f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12e32335 push edx */
  push32((uint32_t)(EDX));
  /* 12e32336 call 0x12e35c50 */
  push32(0x12e3233bu); f_12e35c50();
  /* 12e3233b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3233e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32341 jbe 0x12e32378 */
  if ((C.cf||C.zf)) goto L_12e32378;
  /* 12e32343 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12e32349 push eax */
  push32((uint32_t)(EAX));
  /* 12e3234a call 0x12e35c50 */
  push32(0x12e3234fu); f_12e35c50();
  /* 12e3234f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32352 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12e32358 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12e3235c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12e32362 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e32364 push 0x12e59368 */
  push32((uint32_t)(0x12e59368u));
  /* 12e32369 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12e3236f push eax */
  push32((uint32_t)(EAX));
  /* 12e32370 call 0x12e36640 */
  push32(0x12e32375u); f_12e36640();
  /* 12e32375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e32378:;
  /* 12e32378 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3237c jne 0x12e3238a */
  if (!C.zf) goto L_12e3238a;
  /* 12e3237e mov dword ptr [ebp - 0x1114], 0x12e592f4 */
  w32((uint32_t)(EBP + -0x1114), (0x12e592f4u));
  /* 12e32388 jmp 0x12e32394 */
  goto L_12e32394;
L_12e3238a:;
  /* 12e3238a mov dword ptr [ebp - 0x1114], 0x12e59094 */
  w32((uint32_t)(EBP + -0x1114), (0x12e59094u));
L_12e32394:;
  /* 12e32394 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e32397 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e3239a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3239c je 0x12e323a9 */
  if (C.zf) goto L_12e323a9;
  /* 12e3239e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e323a1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12e323a7 jmp 0x12e323b3 */
  goto L_12e323b3;
L_12e323a9:;
  /* 12e323a9 mov dword ptr [ebp - 0x1118], 0x12e59094 */
  w32((uint32_t)(EBP + -0x1118), (0x12e59094u));
L_12e323b3:;
  /* 12e323b3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e323b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e323b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e323bb je 0x12e323cf */
  if (C.zf) goto L_12e323cf;
  /* 12e323bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e323c1 jne 0x12e323cf */
  if (!C.zf) goto L_12e323cf;
  /* 12e323c3 mov dword ptr [ebp - 0x111c], 0x12e592e4 */
  w32((uint32_t)(EBP + -0x111c), (0x12e592e4u));
  /* 12e323cd jmp 0x12e323d9 */
  goto L_12e323d9;
L_12e323cf:;
  /* 12e323cf mov dword ptr [ebp - 0x111c], 0x12e59094 */
  w32((uint32_t)(EBP + -0x111c), (0x12e59094u));
L_12e323d9:;
  /* 12e323d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e323dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e323df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e323e1 je 0x12e323ef */
  if (C.zf) goto L_12e323ef;
  /* 12e323e3 mov dword ptr [ebp - 0x1120], 0x12e592e0 */
  w32((uint32_t)(EBP + -0x1120), (0x12e592e0u));
  /* 12e323ed jmp 0x12e323f9 */
  goto L_12e323f9;
L_12e323ef:;
  /* 12e323ef mov dword ptr [ebp - 0x1120], 0x12e59094 */
  w32((uint32_t)(EBP + -0x1120), (0x12e59094u));
L_12e323f9:;
  /* 12e323f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e323fd je 0x12e3240a */
  if (C.zf) goto L_12e3240a;
  /* 12e323ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e32402 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12e32408 jmp 0x12e32414 */
  goto L_12e32414;
L_12e3240a:;
  /* 12e3240a mov dword ptr [ebp - 0x1124], 0x12e59094 */
  w32((uint32_t)(EBP + -0x1124), (0x12e59094u));
L_12e32414:;
  /* 12e32414 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32418 je 0x12e32426 */
  if (C.zf) goto L_12e32426;
  /* 12e3241a mov dword ptr [ebp - 0x1128], 0x12e592d8 */
  w32((uint32_t)(EBP + -0x1128), (0x12e592d8u));
  /* 12e32424 jmp 0x12e32430 */
  goto L_12e32430;
L_12e32426:;
  /* 12e32426 mov dword ptr [ebp - 0x1128], 0x12e59094 */
  w32((uint32_t)(EBP + -0x1128), (0x12e59094u));
L_12e32430:;
  /* 12e32430 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32434 je 0x12e32441 */
  if (C.zf) goto L_12e32441;
  /* 12e32436 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e32439 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12e3243f jmp 0x12e3244b */
  goto L_12e3244b;
L_12e32441:;
  /* 12e32441 mov dword ptr [ebp - 0x112c], 0x12e59094 */
  w32((uint32_t)(EBP + -0x112c), (0x12e59094u));
L_12e3244b:;
  /* 12e3244b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3244f je 0x12e3245d */
  if (C.zf) goto L_12e3245d;
  /* 12e32451 mov dword ptr [ebp - 0x1130], 0x12e592d0 */
  w32((uint32_t)(EBP + -0x1130), (0x12e592d0u));
  /* 12e3245b jmp 0x12e32467 */
  goto L_12e32467;
L_12e3245d:;
  /* 12e3245d mov dword ptr [ebp - 0x1130], 0x12e59094 */
  w32((uint32_t)(EBP + -0x1130), (0x12e59094u));
L_12e32467:;
  /* 12e32467 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3246e je 0x12e3247e */
  if (C.zf) goto L_12e3247e;
  /* 12e32470 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12e32476 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12e3247c jmp 0x12e32488 */
  goto L_12e32488;
L_12e3247e:;
  /* 12e3247e mov dword ptr [ebp - 0x1134], 0x12e59094 */
  w32((uint32_t)(EBP + -0x1134), (0x12e59094u));
L_12e32488:;
  /* 12e32488 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3248f je 0x12e3249d */
  if (C.zf) goto L_12e3249d;
  /* 12e32491 mov dword ptr [ebp - 0x1138], 0x12e592c4 */
  w32((uint32_t)(EBP + -0x1138), (0x12e592c4u));
  /* 12e3249b jmp 0x12e324a7 */
  goto L_12e324a7;
L_12e3249d:;
  /* 12e3249d mov dword ptr [ebp - 0x1138], 0x12e59094 */
  w32((uint32_t)(EBP + -0x1138), (0x12e59094u));
L_12e324a7:;
  /* 12e324a7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12e324ad push edx */
  push32((uint32_t)(EDX));
  /* 12e324ae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12e324b4 push eax */
  push32((uint32_t)(EAX));
  /* 12e324b5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12e324bb push ecx */
  push32((uint32_t)(ECX));
  /* 12e324bc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12e324c2 push edx */
  push32((uint32_t)(EDX));
  /* 12e324c3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12e324c9 push eax */
  push32((uint32_t)(EAX));
  /* 12e324ca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12e324d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e324d1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12e324d7 push edx */
  push32((uint32_t)(EDX));
  /* 12e324d8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12e324de push eax */
  push32((uint32_t)(EAX));
  /* 12e324df mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12e324e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e324e6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12e324ec push edx */
  push32((uint32_t)(EDX));
  /* 12e324ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e324f0 push eax */
  push32((uint32_t)(EAX));
  /* 12e324f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e324f4 mov edx, dword ptr [ecx*4 + 0x12e5ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e5ca50)));
  /* 12e324fb push edx */
  push32((uint32_t)(EDX));
  /* 12e324fc push 0x12e59270 */
  push32((uint32_t)(0x12e59270u));
  /* 12e32501 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12e32506 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12e3250c push eax */
  push32((uint32_t)(EAX));
  /* 12e3250d call 0x12e35cd0 */
  push32(0x12e32512u); f_12e35cd0();
  /* 12e32512 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e32517 jge 0x12e3252d */
  if ((C.sf==C.of)) goto L_12e3252d;
  /* 12e32519 push 0x12e591d4 */
  push32((uint32_t)(0x12e591d4u));
  /* 12e3251e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12e32524 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32525 call 0x12e35dd0 */
  push32(0x12e3252au); f_12e35dd0();
  /* 12e3252a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3252d:;
  /* 12e3252d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12e32532 push 0x12e5924c */
  push32((uint32_t)(0x12e5924cu));
  /* 12e32537 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12e3253d push edx */
  push32((uint32_t)(EDX));
  /* 12e3253e call 0x12e36580 */
  push32(0x12e32543u); f_12e36580();
  /* 12e32543 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32546 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12e3254c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32553 jne 0x12e32566 */
  if (!C.zf) goto L_12e32566;
  /* 12e32555 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12e32557 call 0x12e362c0 */
  push32(0x12e3255cu); f_12e362c0();
  /* 12e3255c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3255f push 3 */
  push32((uint32_t)(0x3u));
  /* 12e32561 call 0x12e325e0 */
  push32(0x12e32566u); f_12e325e0();
L_12e32566:;
  /* 12e32566 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3256d jne 0x12e32576 */
  if (!C.zf) goto L_12e32576;
  /* 12e3256f mov eax, 1 */
  EAX = (0x1u);
  /* 12e32574 jmp 0x12e32578 */
  goto L_12e32578;
L_12e32576:;
  /* 12e32576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e32578:;
  /* 12e32578 mov esp, ebp */
  ESP = (EBP);
  /* 12e3257a pop ebp */
  EBP = (pop32());
  /* 12e3257b ret  */
  ESPCHK(0x12e32270u, _esp0);
  ESP += 4; return;
}

/* FUN_10002580 @ 0x12e32580 (56 bytes, 15 insns) */
void f_12e32580(void) {
  FTRACE(0x12e32580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32580 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32581 mov ebp, esp */
  EBP = (ESP);
  /* 12e32583 cmp dword ptr [0x12e5ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3258a je 0x12e32592 */
  if (C.zf) goto L_12e32592;
  /* 12e3258c call dword ptr [0x12e5ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5ffbc))), 0x12e32592u);
L_12e32592:;
  /* 12e32592 push 0x12e5c418 */
  push32((uint32_t)(0x12e5c418u));
  /* 12e32597 push 0x12e5c208 */
  push32((uint32_t)(0x12e5c208u));
  /* 12e3259c call 0x12e32750 */
  push32(0x12e325a1u); f_12e32750();
  /* 12e325a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e325a4 push 0x12e5c104 */
  push32((uint32_t)(0x12e5c104u));
  /* 12e325a9 push 0x12e5c000 */
  push32((uint32_t)(0x12e5c000u));
  /* 12e325ae call 0x12e32750 */
  push32(0x12e325b3u); f_12e32750();
  /* 12e325b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e325b6 pop ebp */
  EBP = (pop32());
  /* 12e325b7 ret  */
  ESPCHK(0x12e32580u, _esp0);
  ESP += 4; return;
}

/* FUN_100025c0 @ 0x12e325c0 (21 bytes, 10 insns) */
void f_12e325c0(void) {
  FTRACE(0x12e325c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e325c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e325c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e325c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e325c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e325c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e325ca push eax */
  push32((uint32_t)(EAX));
  /* 12e325cb call 0x12e32640 */
  push32(0x12e325d0u); f_12e32640();
  /* 12e325d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e325d3 pop ebp */
  EBP = (pop32());
  /* 12e325d4 ret  */
  ESPCHK(0x12e325c0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12e325e0 (21 bytes, 10 insns) */
void f_12e325e0(void) {
  FTRACE(0x12e325e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e325e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e325e1 mov ebp, esp */
  EBP = (ESP);
  /* 12e325e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e325e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e325e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e325ea push eax */
  push32((uint32_t)(EAX));
  /* 12e325eb call 0x12e32640 */
  push32(0x12e325f0u); f_12e32640();
  /* 12e325f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e325f3 pop ebp */
  EBP = (pop32());
  /* 12e325f4 ret  */
  ESPCHK(0x12e325e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002600 @ 0x12e32600 (19 bytes, 9 insns) */
void f_12e32600(void) {
  FTRACE(0x12e32600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32600 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32601 mov ebp, esp */
  EBP = (ESP);
  /* 12e32603 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e32605 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32607 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32609 call 0x12e32640 */
  push32(0x12e3260eu); f_12e32640();
  /* 12e3260e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32611 pop ebp */
  EBP = (pop32());
  /* 12e32612 ret  */
  ESPCHK(0x12e32600u, _esp0);
  ESP += 4; return;
}

/* FUN_10002620 @ 0x12e32620 (19 bytes, 9 insns) */
void f_12e32620(void) {
  FTRACE(0x12e32620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32620 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32621 mov ebp, esp */
  EBP = (ESP);
  /* 12e32623 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e32625 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e32627 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32629 call 0x12e32640 */
  push32(0x12e3262eu); f_12e32640();
  /* 12e3262e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32631 pop ebp */
  EBP = (pop32());
  /* 12e32632 ret  */
  ESPCHK(0x12e32620u, _esp0);
  ESP += 4; return;
}

/* FUN_10002640 @ 0x12e32640 (227 bytes, 61 insns) */
void f_12e32640(void) {
  FTRACE(0x12e32640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32640 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32641 mov ebp, esp */
  EBP = (ESP);
  /* 12e32643 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32644 call 0x12e32730 */
  push32(0x12e32649u); f_12e32730();
  /* 12e32649 cmp dword ptr [0x12e5e4cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e4cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32650 jne 0x12e32663 */
  if (!C.zf) goto L_12e32663;
  /* 12e32652 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32655 push eax */
  push32((uint32_t)(EAX));
  /* 12e32656 call dword ptr [0x12e602b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602b4))), 0x12e3265cu);
  /* 12e3265c push eax */
  push32((uint32_t)(EAX));
  /* 12e3265d call dword ptr [0x12e602b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602b0))), 0x12e32663u);
L_12e32663:;
  /* 12e32663 mov dword ptr [0x12e5e4c8], 1 */
  w32((uint32_t)(0x12e5e4c8), (0x1u));
  /* 12e3266d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12e32670 mov byte ptr [0x12e5e4c4], cl */
  w8((uint32_t)(0x12e5e4c4), (CL));
  /* 12e32676 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3267a jne 0x12e326c3 */
  if (!C.zf) goto L_12e326c3;
  /* 12e3267c cmp dword ptr [0x12e5ffb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5ffb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32683 je 0x12e326b1 */
  if (C.zf) goto L_12e326b1;
  /* 12e32685 mov edx, dword ptr [0x12e5ffb4] */
  EDX = (r32((uint32_t)(0x12e5ffb4)));
  /* 12e3268b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e3268e:;
  /* 12e3268e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e32691 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e32694 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e32697 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3269a cmp ecx, dword ptr [0x12e5ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e326a0 jb 0x12e326b1 */
  if (C.cf) goto L_12e326b1;
  /* 12e326a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e326a5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e326a8 je 0x12e326af */
  if (C.zf) goto L_12e326af;
  /* 12e326aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e326ad call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12e326afu);
L_12e326af:;
  /* 12e326af jmp 0x12e3268e */
  goto L_12e3268e;
L_12e326b1:;
  /* 12e326b1 push 0x12e5c724 */
  push32((uint32_t)(0x12e5c724u));
  /* 12e326b6 push 0x12e5c51c */
  push32((uint32_t)(0x12e5c51cu));
  /* 12e326bb call 0x12e32750 */
  push32(0x12e326c0u); f_12e32750();
  /* 12e326c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e326c3:;
  /* 12e326c3 push 0x12e5c92c */
  push32((uint32_t)(0x12e5c92cu));
  /* 12e326c8 push 0x12e5c828 */
  push32((uint32_t)(0x12e5c828u));
  /* 12e326cd call 0x12e32750 */
  push32(0x12e326d2u); f_12e32750();
  /* 12e326d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e326d5 cmp dword ptr [0x12e5e4d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e4d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e326dc jne 0x12e326fe */
  if (!C.zf) goto L_12e326fe;
  /* 12e326de push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e326e0 call 0x12e34330 */
  push32(0x12e326e5u); f_12e34330();
  /* 12e326e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e326e8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12e326eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e326ed je 0x12e326fe */
  if (C.zf) goto L_12e326fe;
  /* 12e326ef mov dword ptr [0x12e5e4d0], 1 */
  w32((uint32_t)(0x12e5e4d0), (0x1u));
  /* 12e326f9 call 0x12e34c40 */
  push32(0x12e326feu); f_12e34c40();
L_12e326fe:;
  /* 12e326fe cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32702 je 0x12e3270b */
  if (C.zf) goto L_12e3270b;
  /* 12e32704 call 0x12e32740 */
  push32(0x12e32709u); f_12e32740();
  /* 12e32709 jmp 0x12e3271f */
  goto L_12e3271f;
L_12e3270b:;
  /* 12e3270b mov dword ptr [0x12e5e4cc], 1 */
  w32((uint32_t)(0x12e5e4cc), (0x1u));
  /* 12e32715 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32718 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32719 call dword ptr [0x12e602ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602ac))), 0x12e3271fu);
L_12e3271f:;
  /* 12e3271f mov esp, ebp */
  ESP = (EBP);
  /* 12e32721 pop ebp */
  EBP = (pop32());
  /* 12e32722 ret  */
  ESPCHK(0x12e32640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x12e32730 (15 bytes, 7 insns) */
void f_12e32730(void) {
  FTRACE(0x12e32730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32730 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32731 mov ebp, esp */
  EBP = (ESP);
  /* 12e32733 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12e32735 call 0x12e36820 */
  push32(0x12e3273au); f_12e36820();
  /* 12e3273a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3273d pop ebp */
  EBP = (pop32());
  /* 12e3273e ret  */
  ESPCHK(0x12e32730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x12e32740 (15 bytes, 7 insns) */
void f_12e32740(void) {
  FTRACE(0x12e32740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32740 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32741 mov ebp, esp */
  EBP = (ESP);
  /* 12e32743 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12e32745 call 0x12e368c0 */
  push32(0x12e3274au); f_12e368c0();
  /* 12e3274a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3274d pop ebp */
  EBP = (pop32());
  /* 12e3274e ret  */
  ESPCHK(0x12e32740u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12e32750 (37 bytes, 16 insns) */
void f_12e32750(void) {
  FTRACE(0x12e32750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32750 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32751 mov ebp, esp */
  EBP = (ESP);
L_12e32753:;
  /* 12e32753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32756 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32759 jae 0x12e32773 */
  if (!C.cf) goto L_12e32773;
  /* 12e3275b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3275e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32761 je 0x12e32768 */
  if (C.zf) goto L_12e32768;
  /* 12e32763 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32766 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12e32768u);
L_12e32768:;
  /* 12e32768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3276b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3276e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e32771 jmp 0x12e32753 */
  goto L_12e32753;
L_12e32773:;
  /* 12e32773 pop ebp */
  EBP = (pop32());
  /* 12e32774 ret  */
  ESPCHK(0x12e32750u, _esp0);
  ESP += 4; return;
}

/* FUN_10002780 @ 0x12e32780 (130 bytes, 42 insns) */
void f_12e32780(void) {
  FTRACE(0x12e32780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32780 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32781 mov ebp, esp */
  EBP = (ESP);
  /* 12e32783 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32784 call 0x12e36740 */
  push32(0x12e32789u); f_12e36740();
  /* 12e32789 call dword ptr [0x12e602c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602c0))), 0x12e3278fu);
  /* 12e3278f mov dword ptr [0x12e5ca5c], eax */
  w32((uint32_t)(0x12e5ca5c), (EAX));
  /* 12e32794 cmp dword ptr [0x12e5ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3279b jne 0x12e327a1 */
  if (!C.zf) goto L_12e327a1;
  /* 12e3279d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3279f jmp 0x12e327fe */
  goto L_12e327fe;
L_12e327a1:;
  /* 12e327a1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12e327a3 push 0x12e593a8 */
  push32((uint32_t)(0x12e593a8u));
  /* 12e327a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e327aa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12e327ac push 1 */
  push32((uint32_t)(0x1u));
  /* 12e327ae call 0x12e33230 */
  push32(0x12e327b3u); f_12e33230();
  /* 12e327b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e327b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e327b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e327bd je 0x12e327d4 */
  if (C.zf) goto L_12e327d4;
  /* 12e327bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e327c2 push eax */
  push32((uint32_t)(EAX));
  /* 12e327c3 mov ecx, dword ptr [0x12e5ca5c] */
  ECX = (r32((uint32_t)(0x12e5ca5c)));
  /* 12e327c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e327ca call dword ptr [0x12e602bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602bc))), 0x12e327d0u);
  /* 12e327d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e327d2 jne 0x12e327d8 */
  if (!C.zf) goto L_12e327d8;
L_12e327d4:;
  /* 12e327d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e327d6 jmp 0x12e327fe */
  goto L_12e327fe;
L_12e327d8:;
  /* 12e327d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e327db push edx */
  push32((uint32_t)(EDX));
  /* 12e327dc call 0x12e32840 */
  push32(0x12e327e1u); f_12e32840();
  /* 12e327e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e327e4 call dword ptr [0x12e602b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602b8))), 0x12e327eau);
  /* 12e327ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e327ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e327ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e327f2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12e327f9 mov eax, 1 */
  EAX = (0x1u);
L_12e327fe:;
  /* 12e327fe mov esp, ebp */
  ESP = (EBP);
  /* 12e32800 pop ebp */
  EBP = (pop32());
  /* 12e32801 ret  */
  ESPCHK(0x12e32780u, _esp0);
  ESP += 4; return;
}

/* FUN_10002810 @ 0x12e32810 (41 bytes, 11 insns) */
void f_12e32810(void) {
  FTRACE(0x12e32810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32810 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32811 mov ebp, esp */
  EBP = (ESP);
  /* 12e32813 call 0x12e36780 */
  push32(0x12e32818u); f_12e36780();
  /* 12e32818 cmp dword ptr [0x12e5ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3281f je 0x12e32837 */
  if (C.zf) goto L_12e32837;
  /* 12e32821 mov eax, dword ptr [0x12e5ca5c] */
  EAX = (r32((uint32_t)(0x12e5ca5c)));
  /* 12e32826 push eax */
  push32((uint32_t)(EAX));
  /* 12e32827 call dword ptr [0x12e602c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602c4))), 0x12e3282du);
  /* 12e3282d mov dword ptr [0x12e5ca5c], 0xffffffff */
  w32((uint32_t)(0x12e5ca5c), (0xffffffffu));
L_12e32837:;
  /* 12e32837 pop ebp */
  EBP = (pop32());
  /* 12e32838 ret  */
  ESPCHK(0x12e32810u, _esp0);
  ESP += 4; return;
}

/* FUN_10002840 @ 0x12e32840 (25 bytes, 8 insns) */
void f_12e32840(void) {
  FTRACE(0x12e32840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32840 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32841 mov ebp, esp */
  EBP = (ESP);
  /* 12e32843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32846 mov dword ptr [eax + 0x50], 0x12e5cc00 */
  w32((uint32_t)(EAX + 0x50), (0x12e5cc00u));
  /* 12e3284d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32850 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12e32857 pop ebp */
  EBP = (pop32());
  /* 12e32858 ret  */
  ESPCHK(0x12e32840u, _esp0);
  ESP += 4; return;
}

/* FUN_10002860 @ 0x12e32860 (152 bytes, 48 insns) */
void f_12e32860(void) {
  FTRACE(0x12e32860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32860 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32861 mov ebp, esp */
  EBP = (ESP);
  /* 12e32863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e32866 call dword ptr [0x12e602d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602d0))), 0x12e3286cu);
  /* 12e3286c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3286f mov eax, dword ptr [0x12e5ca5c] */
  EAX = (r32((uint32_t)(0x12e5ca5c)));
  /* 12e32874 push eax */
  push32((uint32_t)(EAX));
  /* 12e32875 call dword ptr [0x12e602cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602cc))), 0x12e3287bu);
  /* 12e3287b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3287e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32882 jne 0x12e328e7 */
  if (!C.zf) goto L_12e328e7;
  /* 12e32884 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12e32889 push 0x12e593a8 */
  push32((uint32_t)(0x12e593a8u));
  /* 12e3288e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e32890 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12e32892 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e32894 call 0x12e33230 */
  push32(0x12e32899u); f_12e33230();
  /* 12e32899 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3289c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3289f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e328a3 je 0x12e328dd */
  if (C.zf) goto L_12e328dd;
  /* 12e328a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e328a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e328a9 mov edx, dword ptr [0x12e5ca5c] */
  EDX = (r32((uint32_t)(0x12e5ca5c)));
  /* 12e328af push edx */
  push32((uint32_t)(EDX));
  /* 12e328b0 call dword ptr [0x12e602bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602bc))), 0x12e328b6u);
  /* 12e328b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e328b8 je 0x12e328dd */
  if (C.zf) goto L_12e328dd;
  /* 12e328ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e328bd push eax */
  push32((uint32_t)(EAX));
  /* 12e328be call 0x12e32840 */
  push32(0x12e328c3u); f_12e32840();
  /* 12e328c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e328c6 call dword ptr [0x12e602b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602b8))), 0x12e328ccu);
  /* 12e328cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e328cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e328d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e328d4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12e328db jmp 0x12e328e7 */
  goto L_12e328e7;
L_12e328dd:;
  /* 12e328dd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12e328df call 0x12e31d90 */
  push32(0x12e328e4u); f_12e31d90();
  /* 12e328e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e328e7:;
  /* 12e328e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e328ea push eax */
  push32((uint32_t)(EAX));
  /* 12e328eb call dword ptr [0x12e602c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602c8))), 0x12e328f1u);
  /* 12e328f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e328f4 mov esp, ebp */
  ESP = (EBP);
  /* 12e328f6 pop ebp */
  EBP = (pop32());
  /* 12e328f7 ret  */
  ESPCHK(0x12e32860u, _esp0);
  ESP += 4; return;
}

/* FUN_10002900 @ 0x12e32900 (263 bytes, 86 insns) */
void f_12e32900(void) {
  FTRACE(0x12e32900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32900 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32901 mov ebp, esp */
  EBP = (ESP);
  /* 12e32903 cmp dword ptr [0x12e5ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3290a je 0x12e32a05 */
  if (C.zf) goto L_12e32a05;
  /* 12e32910 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32914 jne 0x12e32925 */
  if (!C.zf) goto L_12e32925;
  /* 12e32916 mov eax, dword ptr [0x12e5ca5c] */
  EAX = (r32((uint32_t)(0x12e5ca5c)));
  /* 12e3291b push eax */
  push32((uint32_t)(EAX));
  /* 12e3291c call dword ptr [0x12e602cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602cc))), 0x12e32922u);
  /* 12e32922 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e32925:;
  /* 12e32925 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32929 je 0x12e329f6 */
  if (C.zf) goto L_12e329f6;
  /* 12e3292f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32932 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32936 je 0x12e32949 */
  if (C.zf) goto L_12e32949;
  /* 12e32938 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3293a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3293d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12e32940 push eax */
  push32((uint32_t)(EAX));
  /* 12e32941 call 0x12e338b0 */
  push32(0x12e32946u); f_12e338b0();
  /* 12e32946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e32949:;
  /* 12e32949 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3294c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32950 je 0x12e32963 */
  if (C.zf) goto L_12e32963;
  /* 12e32952 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e32954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32957 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12e3295a push eax */
  push32((uint32_t)(EAX));
  /* 12e3295b call 0x12e338b0 */
  push32(0x12e32960u); f_12e338b0();
  /* 12e32960 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e32963:;
  /* 12e32963 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32966 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3296a je 0x12e3297d */
  if (C.zf) goto L_12e3297d;
  /* 12e3296c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3296e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32971 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12e32974 push eax */
  push32((uint32_t)(EAX));
  /* 12e32975 call 0x12e338b0 */
  push32(0x12e3297au); f_12e338b0();
  /* 12e3297a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3297d:;
  /* 12e3297d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32980 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32984 je 0x12e32997 */
  if (C.zf) goto L_12e32997;
  /* 12e32986 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e32988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3298b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12e3298e push eax */
  push32((uint32_t)(EAX));
  /* 12e3298f call 0x12e338b0 */
  push32(0x12e32994u); f_12e338b0();
  /* 12e32994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e32997:;
  /* 12e32997 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3299a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3299e je 0x12e329b1 */
  if (C.zf) goto L_12e329b1;
  /* 12e329a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e329a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e329a5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12e329a8 push eax */
  push32((uint32_t)(EAX));
  /* 12e329a9 call 0x12e338b0 */
  push32(0x12e329aeu); f_12e338b0();
  /* 12e329ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e329b1:;
  /* 12e329b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e329b4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e329b8 je 0x12e329cb */
  if (C.zf) goto L_12e329cb;
  /* 12e329ba push 2 */
  push32((uint32_t)(0x2u));
  /* 12e329bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e329bf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12e329c2 push eax */
  push32((uint32_t)(EAX));
  /* 12e329c3 call 0x12e338b0 */
  push32(0x12e329c8u); f_12e338b0();
  /* 12e329c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e329cb:;
  /* 12e329cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e329ce cmp dword ptr [ecx + 0x50], 0x12e5cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12e5cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e329d5 je 0x12e329e8 */
  if (C.zf) goto L_12e329e8;
  /* 12e329d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e329d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e329dc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12e329df push eax */
  push32((uint32_t)(EAX));
  /* 12e329e0 call 0x12e338b0 */
  push32(0x12e329e5u); f_12e338b0();
  /* 12e329e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e329e8:;
  /* 12e329e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e329ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e329ed push ecx */
  push32((uint32_t)(ECX));
  /* 12e329ee call 0x12e338b0 */
  push32(0x12e329f3u); f_12e338b0();
  /* 12e329f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e329f6:;
  /* 12e329f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e329f8 mov edx, dword ptr [0x12e5ca5c] */
  EDX = (r32((uint32_t)(0x12e5ca5c)));
  /* 12e329fe push edx */
  push32((uint32_t)(EDX));
  /* 12e329ff call dword ptr [0x12e602bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602bc))), 0x12e32a05u);
L_12e32a05:;
  /* 12e32a05 pop ebp */
  EBP = (pop32());
  /* 12e32a06 ret  */
  ESPCHK(0x12e32900u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a10 @ 0x12e32a10 (11 bytes, 5 insns) */
void f_12e32a10(void) {
  FTRACE(0x12e32a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32a11 mov ebp, esp */
  EBP = (ESP);
  /* 12e32a13 call dword ptr [0x12e602b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602b8))), 0x12e32a19u);
  /* 12e32a19 pop ebp */
  EBP = (pop32());
  /* 12e32a1a ret  */
  ESPCHK(0x12e32a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a20 @ 0x12e32a20 (11 bytes, 5 insns) */
void f_12e32a20(void) {
  FTRACE(0x12e32a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32a21 mov ebp, esp */
  EBP = (ESP);
  /* 12e32a23 call dword ptr [0x12e602d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602d4))), 0x12e32a29u);
  /* 12e32a29 pop ebp */
  EBP = (pop32());
  /* 12e32a2a ret  */
  ESPCHK(0x12e32a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a30 @ 0x12e32a30 (804 bytes, 236 insns) */
void f_12e32a30(void) {
  FTRACE(0x12e32a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32a31 mov ebp, esp */
  EBP = (ESP);
  /* 12e32a33 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e32a36 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12e32a3b push 0x12e593b4 */
  push32((uint32_t)(0x12e593b4u));
  /* 12e32a40 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e32a42 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12e32a47 call 0x12e32e20 */
  push32(0x12e32a4cu); f_12e32e20();
  /* 12e32a4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32a4f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12e32a52 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32a56 jne 0x12e32a62 */
  if (!C.zf) goto L_12e32a62;
  /* 12e32a58 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12e32a5a call 0x12e31d90 */
  push32(0x12e32a5fu); f_12e31d90();
  /* 12e32a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e32a62:;
  /* 12e32a62 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32a65 mov dword ptr [0x12e5fe60], eax */
  w32((uint32_t)(0x12e5fe60), (EAX));
  /* 12e32a6a mov dword ptr [0x12e5ff9c], 0x20 */
  w32((uint32_t)(0x12e5ff9c), (0x20u));
  /* 12e32a74 jmp 0x12e32a7f */
  goto L_12e32a7f;
L_12e32a76:;
  /* 12e32a76 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32a79 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32a7c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12e32a7f:;
  /* 12e32a7f mov edx, dword ptr [0x12e5fe60] */
  EDX = (r32((uint32_t)(0x12e5fe60)));
  /* 12e32a85 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32a8b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32a8e jae 0x12e32ab3 */
  if (!C.cf) goto L_12e32ab3;
  /* 12e32a90 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32a93 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12e32a97 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32a9a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12e32aa0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32aa3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12e32aa7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32aaa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12e32ab1 jmp 0x12e32a76 */
  goto L_12e32a76;
L_12e32ab3:;
  /* 12e32ab3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12e32ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32ab7 call dword ptr [0x12e602e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602e0))), 0x12e32abdu);
  /* 12e32abd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12e32ac0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e32ac6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e32ac8 je 0x12e32c55 */
  if (C.zf) goto L_12e32c55;
  /* 12e32ace cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32ad2 je 0x12e32c55 */
  if (C.zf) goto L_12e32c55;
  /* 12e32ad8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e32adb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e32add mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12e32ae0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e32ae3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32ae6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e32ae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e32aec add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32aef mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12e32af2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32af9 jge 0x12e32b03 */
  if ((C.sf==C.of)) goto L_12e32b03;
  /* 12e32afb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12e32afe mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12e32b01 jmp 0x12e32b0a */
  goto L_12e32b0a;
L_12e32b03:;
  /* 12e32b03 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12e32b0a:;
  /* 12e32b0a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12e32b0d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12e32b10 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12e32b17 jmp 0x12e32b22 */
  goto L_12e32b22;
L_12e32b19:;
  /* 12e32b19 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12e32b1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32b1f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12e32b22:;
  /* 12e32b22 mov ecx, dword ptr [0x12e5ff9c] */
  ECX = (r32((uint32_t)(0x12e5ff9c)));
  /* 12e32b28 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32b2b jge 0x12e32bc2 */
  if ((C.sf==C.of)) goto L_12e32bc2;
  /* 12e32b31 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12e32b36 push 0x12e593b4 */
  push32((uint32_t)(0x12e593b4u));
  /* 12e32b3b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e32b3d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12e32b42 call 0x12e32e20 */
  push32(0x12e32b47u); f_12e32e20();
  /* 12e32b47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32b4a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12e32b4d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32b51 jne 0x12e32b5e */
  if (!C.zf) goto L_12e32b5e;
  /* 12e32b53 mov edx, dword ptr [0x12e5ff9c] */
  EDX = (r32((uint32_t)(0x12e5ff9c)));
  /* 12e32b59 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12e32b5c jmp 0x12e32bc2 */
  goto L_12e32bc2;
L_12e32b5e:;
  /* 12e32b5e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12e32b61 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32b64 mov dword ptr [eax*4 + 0x12e5fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x12e5fe60), (ECX));
  /* 12e32b6b mov edx, dword ptr [0x12e5ff9c] */
  EDX = (r32((uint32_t)(0x12e5ff9c)));
  /* 12e32b71 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32b74 mov dword ptr [0x12e5ff9c], edx */
  w32((uint32_t)(0x12e5ff9c), (EDX));
  /* 12e32b7a jmp 0x12e32b85 */
  goto L_12e32b85;
L_12e32b7c:;
  /* 12e32b7c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32b7f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32b82 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12e32b85:;
  /* 12e32b85 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12e32b88 mov edx, dword ptr [ecx*4 + 0x12e5fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e5fe60)));
  /* 12e32b8f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32b95 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32b98 jae 0x12e32bbd */
  if (!C.cf) goto L_12e32bbd;
  /* 12e32b9a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32b9d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12e32ba1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32ba4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12e32baa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32bad mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12e32bb1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32bb4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12e32bbb jmp 0x12e32b7c */
  goto L_12e32b7c;
L_12e32bbd:;
  /* 12e32bbd jmp 0x12e32b19 */
  goto L_12e32b19;
L_12e32bc2:;
  /* 12e32bc2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12e32bc9 jmp 0x12e32be6 */
  goto L_12e32be6;
L_12e32bcb:;
  /* 12e32bcb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e32bce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32bd1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12e32bd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e32bd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32bda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e32bdd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12e32be0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32be3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12e32be6:;
  /* 12e32be6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e32be9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32bec jge 0x12e32c55 */
  if ((C.sf==C.of)) goto L_12e32c55;
  /* 12e32bee mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12e32bf1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32bf4 je 0x12e32c50 */
  if (C.zf) goto L_12e32c50;
  /* 12e32bf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e32bf9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e32bfc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e32bff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e32c01 je 0x12e32c50 */
  if (C.zf) goto L_12e32c50;
  /* 12e32c03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e32c06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e32c09 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12e32c0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e32c0e jne 0x12e32c20 */
  if (!C.zf) goto L_12e32c20;
  /* 12e32c10 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12e32c13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e32c15 push edx */
  push32((uint32_t)(EDX));
  /* 12e32c16 call dword ptr [0x12e602dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602dc))), 0x12e32c1cu);
  /* 12e32c1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e32c1e je 0x12e32c50 */
  if (C.zf) goto L_12e32c50;
L_12e32c20:;
  /* 12e32c20 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e32c23 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e32c26 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e32c29 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e32c2c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e32c2f mov edx, dword ptr [eax*4 + 0x12e5fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e5fe60)));
  /* 12e32c36 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32c38 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12e32c3b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32c3e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12e32c41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e32c43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e32c45 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32c48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e32c4b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e32c4d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12e32c50:;
  /* 12e32c50 jmp 0x12e32bcb */
  goto L_12e32bcb;
L_12e32c55:;
  /* 12e32c55 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12e32c5c jmp 0x12e32c67 */
  goto L_12e32c67;
L_12e32c5e:;
  /* 12e32c5e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e32c61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32c64 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12e32c67:;
  /* 12e32c67 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32c6b jge 0x12e32d44 */
  if ((C.sf==C.of)) goto L_12e32d44;
  /* 12e32c71 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e32c74 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e32c77 mov edx, dword ptr [0x12e5fe60] */
  EDX = (r32((uint32_t)(0x12e5fe60)));
  /* 12e32c7d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32c7f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12e32c82 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32c85 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32c88 jne 0x12e32d30 */
  if (!C.zf) goto L_12e32d30;
  /* 12e32c8e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32c91 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12e32c95 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32c99 jne 0x12e32ca4 */
  if (!C.zf) goto L_12e32ca4;
  /* 12e32c9b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12e32ca2 jmp 0x12e32cb4 */
  goto L_12e32cb4;
L_12e32ca4:;
  /* 12e32ca4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e32ca7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e32caa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e32cac sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e32cae add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32cb1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12e32cb4:;
  /* 12e32cb4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12e32cb7 push eax */
  push32((uint32_t)(EAX));
  /* 12e32cb8 call dword ptr [0x12e6028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6028c))), 0x12e32cbeu);
  /* 12e32cbe mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12e32cc1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32cc5 je 0x12e32d1f */
  if (C.zf) goto L_12e32d1f;
  /* 12e32cc7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e32cca push ecx */
  push32((uint32_t)(ECX));
  /* 12e32ccb call dword ptr [0x12e602dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602dc))), 0x12e32cd1u);
  /* 12e32cd1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12e32cd4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32cd8 je 0x12e32d1f */
  if (C.zf) goto L_12e32d1f;
  /* 12e32cda mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32cdd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e32ce0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e32ce2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12e32ce5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e32ceb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32cee jne 0x12e32d00 */
  if (!C.zf) goto L_12e32d00;
  /* 12e32cf0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32cf3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12e32cf6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12e32cf8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32cfb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12e32cfe jmp 0x12e32d1d */
  goto L_12e32d1d;
L_12e32d00:;
  /* 12e32d00 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12e32d03 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e32d09 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32d0c jne 0x12e32d1d */
  if (!C.zf) goto L_12e32d1d;
  /* 12e32d0e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32d11 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e32d14 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12e32d17 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32d1a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12e32d1d:;
  /* 12e32d1d jmp 0x12e32d2e */
  goto L_12e32d2e;
L_12e32d1f:;
  /* 12e32d1f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32d22 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e32d25 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12e32d28 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32d2b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12e32d2e:;
  /* 12e32d2e jmp 0x12e32d3f */
  goto L_12e32d3f;
L_12e32d30:;
  /* 12e32d30 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32d33 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e32d36 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12e32d39 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e32d3c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12e32d3f:;
  /* 12e32d3f jmp 0x12e32c5e */
  goto L_12e32c5e;
L_12e32d44:;
  /* 12e32d44 mov eax, dword ptr [0x12e5ff9c] */
  EAX = (r32((uint32_t)(0x12e5ff9c)));
  /* 12e32d49 push eax */
  push32((uint32_t)(EAX));
  /* 12e32d4a call dword ptr [0x12e602d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602d8))), 0x12e32d50u);
  /* 12e32d50 mov esp, ebp */
  ESP = (EBP);
  /* 12e32d52 pop ebp */
  EBP = (pop32());
  /* 12e32d53 ret  */
  ESPCHK(0x12e32a30u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12e32d60 (155 bytes, 45 insns) */
void f_12e32d60(void) {
  FTRACE(0x12e32d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32d61 mov ebp, esp */
  EBP = (ESP);
  /* 12e32d63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e32d66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e32d6d jmp 0x12e32d78 */
  goto L_12e32d78;
L_12e32d6f:;
  /* 12e32d6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e32d72 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32d75 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e32d78:;
  /* 12e32d78 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32d7c jge 0x12e32df7 */
  if ((C.sf==C.of)) goto L_12e32df7;
  /* 12e32d7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e32d81 cmp dword ptr [ecx*4 + 0x12e5fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12e5fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32d89 je 0x12e32df2 */
  if (C.zf) goto L_12e32df2;
  /* 12e32d8b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e32d8e mov eax, dword ptr [edx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e5fe60)));
  /* 12e32d95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e32d98 jmp 0x12e32da3 */
  goto L_12e32da3;
L_12e32d9a:;
  /* 12e32d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e32d9d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32da0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e32da3:;
  /* 12e32da3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e32da6 mov eax, dword ptr [edx*4 + 0x12e5fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e5fe60)));
  /* 12e32dad add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32db2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32db5 jae 0x12e32dcf */
  if (!C.cf) goto L_12e32dcf;
  /* 12e32db7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e32dba cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32dbe je 0x12e32dcd */
  if (C.zf) goto L_12e32dcd;
  /* 12e32dc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e32dc3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32dc6 push edx */
  push32((uint32_t)(EDX));
  /* 12e32dc7 call dword ptr [0x12e602e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602e4))), 0x12e32dcdu);
L_12e32dcd:;
  /* 12e32dcd jmp 0x12e32d9a */
  goto L_12e32d9a;
L_12e32dcf:;
  /* 12e32dcf push 2 */
  push32((uint32_t)(0x2u));
  /* 12e32dd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e32dd4 mov ecx, dword ptr [eax*4 + 0x12e5fe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e5fe60)));
  /* 12e32ddb push ecx */
  push32((uint32_t)(ECX));
  /* 12e32ddc call 0x12e338b0 */
  push32(0x12e32de1u); f_12e338b0();
  /* 12e32de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32de4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e32de7 mov dword ptr [edx*4 + 0x12e5fe60], 0 */
  w32((uint32_t)(EDX*4 + 0x12e5fe60), (0x0u));
L_12e32df2:;
  /* 12e32df2 jmp 0x12e32d6f */
  goto L_12e32d6f;
L_12e32df7:;
  /* 12e32df7 mov esp, ebp */
  ESP = (EBP);
  /* 12e32df9 pop ebp */
  EBP = (pop32());
  /* 12e32dfa ret  */
  ESPCHK(0x12e32d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e00 @ 0x12e32e00 (29 bytes, 13 insns) */
void f_12e32e00(void) {
  FTRACE(0x12e32e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32e01 mov ebp, esp */
  EBP = (ESP);
  /* 12e32e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32e07 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e32e09 mov eax, dword ptr [0x12e5e678] */
  EAX = (r32((uint32_t)(0x12e5e678)));
  /* 12e32e0e push eax */
  push32((uint32_t)(EAX));
  /* 12e32e0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32e12 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32e13 call 0x12e32e70 */
  push32(0x12e32e18u); f_12e32e70();
  /* 12e32e18 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32e1b pop ebp */
  EBP = (pop32());
  /* 12e32e1c ret  */
  ESPCHK(0x12e32e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e20 @ 0x12e32e20 (35 bytes, 16 insns) */
void f_12e32e20(void) {
  FTRACE(0x12e32e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32e21 mov ebp, esp */
  EBP = (ESP);
  /* 12e32e23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e32e26 push eax */
  push32((uint32_t)(EAX));
  /* 12e32e27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e32e2a push ecx */
  push32((uint32_t)(ECX));
  /* 12e32e2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e32e2e push edx */
  push32((uint32_t)(EDX));
  /* 12e32e2f mov eax, dword ptr [0x12e5e678] */
  EAX = (r32((uint32_t)(0x12e5e678)));
  /* 12e32e34 push eax */
  push32((uint32_t)(EAX));
  /* 12e32e35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32e38 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32e39 call 0x12e32e70 */
  push32(0x12e32e3eu); f_12e32e70();
  /* 12e32e3e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32e41 pop ebp */
  EBP = (pop32());
  /* 12e32e42 ret  */
  ESPCHK(0x12e32e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e50 @ 0x12e32e50 (27 bytes, 13 insns) */
void f_12e32e50(void) {
  FTRACE(0x12e32e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32e51 mov ebp, esp */
  EBP = (ESP);
  /* 12e32e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32e57 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e32e59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e32e5c push eax */
  push32((uint32_t)(EAX));
  /* 12e32e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32e60 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32e61 call 0x12e32e70 */
  push32(0x12e32e66u); f_12e32e70();
  /* 12e32e66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32e69 pop ebp */
  EBP = (pop32());
  /* 12e32e6a ret  */
  ESPCHK(0x12e32e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e70 @ 0x12e32e70 (94 bytes, 38 insns) */
void f_12e32e70(void) {
  FTRACE(0x12e32e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32e71 mov ebp, esp */
  EBP = (ESP);
  /* 12e32e73 push ecx */
  push32((uint32_t)(ECX));
L_12e32e74:;
  /* 12e32e74 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e32e76 call 0x12e36820 */
  push32(0x12e32e7bu); f_12e36820();
  /* 12e32e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32e7e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e32e81 push eax */
  push32((uint32_t)(EAX));
  /* 12e32e82 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e32e85 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32e86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e32e89 push edx */
  push32((uint32_t)(EDX));
  /* 12e32e8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32e8d push eax */
  push32((uint32_t)(EAX));
  /* 12e32e8e call 0x12e32ef0 */
  push32(0x12e32e93u); f_12e32ef0();
  /* 12e32e93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32e96 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e32e99 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e32e9b call 0x12e368c0 */
  push32(0x12e32ea0u); f_12e368c0();
  /* 12e32ea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32ea3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32ea7 jne 0x12e32eaf */
  if (!C.zf) goto L_12e32eaf;
  /* 12e32ea9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32ead jne 0x12e32eb4 */
  if (!C.zf) goto L_12e32eb4;
L_12e32eaf:;
  /* 12e32eaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e32eb2 jmp 0x12e32eca */
  goto L_12e32eca;
L_12e32eb4:;
  /* 12e32eb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32eb8 call 0x12e36b60 */
  push32(0x12e32ebdu); f_12e36b60();
  /* 12e32ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e32ec2 jne 0x12e32ec8 */
  if (!C.zf) goto L_12e32ec8;
  /* 12e32ec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e32ec6 jmp 0x12e32eca */
  goto L_12e32eca;
L_12e32ec8:;
  /* 12e32ec8 jmp 0x12e32e74 */
  goto L_12e32e74;
L_12e32eca:;
  /* 12e32eca mov esp, ebp */
  ESP = (EBP);
  /* 12e32ecc pop ebp */
  EBP = (pop32());
  /* 12e32ecd ret  */
  ESPCHK(0x12e32e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ed0 @ 0x12e32ed0 (23 bytes, 11 insns) */
void f_12e32ed0(void) {
  FTRACE(0x12e32ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12e32ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32ed7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e32ed9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32edc push eax */
  push32((uint32_t)(EAX));
  /* 12e32edd call 0x12e32ef0 */
  push32(0x12e32ee2u); f_12e32ef0();
  /* 12e32ee2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32ee5 pop ebp */
  EBP = (pop32());
  /* 12e32ee6 ret  */
  ESPCHK(0x12e32ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ef0 @ 0x12e32ef0 (787 bytes, 254 insns) */
void f_12e32ef0(void) {
  FTRACE(0x12e32ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e32ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e32ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12e32ef3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e32ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e32ef7 push esi */
  push32((uint32_t)(ESI));
  /* 12e32ef8 push edi */
  push32((uint32_t)(EDI));
  /* 12e32ef9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e32f00 mov eax, dword ptr [0x12e5ca84] */
  EAX = (r32((uint32_t)(0x12e5ca84)));
  /* 12e32f05 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e32f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e32f0a je 0x12e32f3c */
  if (C.zf) goto L_12e32f3c;
L_12e32f0c:;
  /* 12e32f0c call 0x12e33fc0 */
  push32(0x12e32f11u); f_12e33fc0();
  /* 12e32f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e32f13 jne 0x12e32f36 */
  if (!C.zf) goto L_12e32f36;
  /* 12e32f15 push 0x12e594a8 */
  push32((uint32_t)(0x12e594a8u));
  /* 12e32f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32f1c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12e32f21 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e32f26 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e32f28 call 0x12e31ee0 */
  push32(0x12e32f2du); f_12e31ee0();
  /* 12e32f2d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32f30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32f33 jne 0x12e32f36 */
  if (!C.zf) goto L_12e32f36;
  /* 12e32f35 int3  */
  x86_unimpl("int3 @ 0x12e32f35");
L_12e32f36:;
  /* 12e32f36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e32f38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e32f3a jne 0x12e32f0c */
  if (!C.zf) goto L_12e32f0c;
L_12e32f3c:;
  /* 12e32f3c mov edx, dword ptr [0x12e5ca88] */
  EDX = (r32((uint32_t)(0x12e5ca88)));
  /* 12e32f42 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e32f45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e32f48 cmp eax, dword ptr [0x12e5ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32f4e jne 0x12e32f51 */
  if (!C.zf) goto L_12e32f51;
  /* 12e32f50 int3  */
  x86_unimpl("int3 @ 0x12e32f50");
L_12e32f51:;
  /* 12e32f51 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e32f54 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32f55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e32f58 push edx */
  push32((uint32_t)(EDX));
  /* 12e32f59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e32f5c push eax */
  push32((uint32_t)(EAX));
  /* 12e32f5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e32f60 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32f61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32f64 push edx */
  push32((uint32_t)(EDX));
  /* 12e32f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32f67 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e32f69 call dword ptr [0x12e5cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5cc90))), 0x12e32f6fu);
  /* 12e32f6f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e32f74 jne 0x12e32fd4 */
  if (!C.zf) goto L_12e32fd4;
  /* 12e32f76 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32f7a je 0x12e32fa7 */
  if (C.zf) goto L_12e32fa7;
L_12e32f7c:;
  /* 12e32f7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e32f7f push eax */
  push32((uint32_t)(EAX));
  /* 12e32f80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e32f83 push ecx */
  push32((uint32_t)(ECX));
  /* 12e32f84 push 0x12e59464 */
  push32((uint32_t)(0x12e59464u));
  /* 12e32f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32f91 call 0x12e31ee0 */
  push32(0x12e32f96u); f_12e31ee0();
  /* 12e32f96 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32f99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32f9c jne 0x12e32f9f */
  if (!C.zf) goto L_12e32f9f;
  /* 12e32f9e int3  */
  x86_unimpl("int3 @ 0x12e32f9e");
L_12e32f9f:;
  /* 12e32f9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e32fa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e32fa3 jne 0x12e32f7c */
  if (!C.zf) goto L_12e32f7c;
  /* 12e32fa5 jmp 0x12e32fcd */
  goto L_12e32fcd;
L_12e32fa7:;
  /* 12e32fa7 push 0x12e59440 */
  push32((uint32_t)(0x12e59440u));
  /* 12e32fac push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e32fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e32fb9 call 0x12e31ee0 */
  push32(0x12e32fbeu); f_12e31ee0();
  /* 12e32fbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e32fc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32fc4 jne 0x12e32fc7 */
  if (!C.zf) goto L_12e32fc7;
  /* 12e32fc6 int3  */
  x86_unimpl("int3 @ 0x12e32fc6");
L_12e32fc7:;
  /* 12e32fc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e32fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e32fcb jne 0x12e32fa7 */
  if (!C.zf) goto L_12e32fa7;
L_12e32fcd:;
  /* 12e32fcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e32fcf jmp 0x12e331fc */
  goto L_12e331fc;
L_12e32fd4:;
  /* 12e32fd4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e32fd7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e32fdd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32fe0 je 0x12e32ff6 */
  if (C.zf) goto L_12e32ff6;
  /* 12e32fe2 mov edx, dword ptr [0x12e5ca84] */
  EDX = (r32((uint32_t)(0x12e5ca84)));
  /* 12e32fe8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e32feb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e32fed jne 0x12e32ff6 */
  if (!C.zf) goto L_12e32ff6;
  /* 12e32fef mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12e32ff6:;
  /* 12e32ff6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e32ffa ja 0x12e33007 */
  if ((!C.cf&&!C.zf)) goto L_12e33007;
  /* 12e32ffc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e32fff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33002 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33005 jbe 0x12e33033 */
  if ((C.cf||C.zf)) goto L_12e33033;
L_12e33007:;
  /* 12e33007 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3300a push ecx */
  push32((uint32_t)(ECX));
  /* 12e3300b push 0x12e59418 */
  push32((uint32_t)(0x12e59418u));
  /* 12e33010 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33012 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33014 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33016 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e33018 call 0x12e31ee0 */
  push32(0x12e3301du); f_12e31ee0();
  /* 12e3301d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33020 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33023 jne 0x12e33026 */
  if (!C.zf) goto L_12e33026;
  /* 12e33025 int3  */
  x86_unimpl("int3 @ 0x12e33025");
L_12e33026:;
  /* 12e33026 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e33028 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3302a jne 0x12e33007 */
  if (!C.zf) goto L_12e33007;
  /* 12e3302c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3302e jmp 0x12e331fc */
  goto L_12e331fc;
L_12e33033:;
  /* 12e33033 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e33036 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3303b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3303e je 0x12e33080 */
  if (C.zf) goto L_12e33080;
  /* 12e33040 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33044 je 0x12e33080 */
  if (C.zf) goto L_12e33080;
  /* 12e33046 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e33049 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3304f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33052 je 0x12e33080 */
  if (C.zf) goto L_12e33080;
  /* 12e33054 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33058 je 0x12e33080 */
  if (C.zf) goto L_12e33080;
L_12e3305a:;
  /* 12e3305a push 0x12e593e4 */
  push32((uint32_t)(0x12e593e4u));
  /* 12e3305f push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e33064 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33066 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33068 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3306a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3306c call 0x12e31ee0 */
  push32(0x12e33071u); f_12e31ee0();
  /* 12e33071 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33074 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33077 jne 0x12e3307a */
  if (!C.zf) goto L_12e3307a;
  /* 12e33079 int3  */
  x86_unimpl("int3 @ 0x12e33079");
L_12e3307a:;
  /* 12e3307a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3307c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3307e jne 0x12e3305a */
  if (!C.zf) goto L_12e3305a;
L_12e33080:;
  /* 12e33080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33083 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33086 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e33089 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3308c push ecx */
  push32((uint32_t)(ECX));
  /* 12e3308d call 0x12e36c70 */
  push32(0x12e33092u); f_12e36c70();
  /* 12e33092 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33095 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e33098 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3309c jne 0x12e330a5 */
  if (!C.zf) goto L_12e330a5;
  /* 12e3309e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e330a0 jmp 0x12e331fc */
  goto L_12e331fc;
L_12e330a5:;
  /* 12e330a5 mov edx, dword ptr [0x12e5ca88] */
  EDX = (r32((uint32_t)(0x12e5ca88)));
  /* 12e330ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e330ae mov dword ptr [0x12e5ca88], edx */
  w32((uint32_t)(0x12e5ca88), (EDX));
  /* 12e330b4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e330b8 je 0x12e33103 */
  if (C.zf) goto L_12e33103;
  /* 12e330ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e330bd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e330c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e330c6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12e330cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e330d0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12e330d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e330da mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12e330e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e330e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e330e7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12e330ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e330ed mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12e330f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e330f7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12e330fe jmp 0x12e331a3 */
  goto L_12e331a3;
L_12e33103:;
  /* 12e33103 mov edx, dword ptr [0x12e5e4d8] */
  EDX = (r32((uint32_t)(0x12e5e4d8)));
  /* 12e33109 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3310c mov dword ptr [0x12e5e4d8], edx */
  w32((uint32_t)(0x12e5e4d8), (EDX));
  /* 12e33112 mov eax, dword ptr [0x12e5e4e0] */
  EAX = (r32((uint32_t)(0x12e5e4e0)));
  /* 12e33117 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3311a mov dword ptr [0x12e5e4e0], eax */
  w32((uint32_t)(0x12e5e4e0), (EAX));
  /* 12e3311f mov ecx, dword ptr [0x12e5e4e0] */
  ECX = (r32((uint32_t)(0x12e5e4e0)));
  /* 12e33125 cmp ecx, dword ptr [0x12e5e4e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5e4e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3312b jbe 0x12e33139 */
  if ((C.cf||C.zf)) goto L_12e33139;
  /* 12e3312d mov edx, dword ptr [0x12e5e4e0] */
  EDX = (r32((uint32_t)(0x12e5e4e0)));
  /* 12e33133 mov dword ptr [0x12e5e4e4], edx */
  w32((uint32_t)(0x12e5e4e4), (EDX));
L_12e33139:;
  /* 12e33139 cmp dword ptr [0x12e5e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33140 je 0x12e3314f */
  if (C.zf) goto L_12e3314f;
  /* 12e33142 mov eax, dword ptr [0x12e5e4dc] */
  EAX = (r32((uint32_t)(0x12e5e4dc)));
  /* 12e33147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3314a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12e3314d jmp 0x12e33158 */
  goto L_12e33158;
L_12e3314f:;
  /* 12e3314f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33152 mov dword ptr [0x12e5e4d4], edx */
  w32((uint32_t)(0x12e5e4d4), (EDX));
L_12e33158:;
  /* 12e33158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3315b mov ecx, dword ptr [0x12e5e4dc] */
  ECX = (r32((uint32_t)(0x12e5e4dc)));
  /* 12e33161 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e33163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33166 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12e3316d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33170 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e33173 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12e33176 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33179 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3317c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12e3317f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33182 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33185 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12e33188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3318b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3318e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12e33191 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33194 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e33197 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12e3319a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3319d mov dword ptr [0x12e5e4dc], ecx */
  w32((uint32_t)(0x12e5e4dc), (ECX));
L_12e331a3:;
  /* 12e331a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e331a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e331a7 mov dl, byte ptr [0x12e5ca90] */
  DL = (r8((uint32_t)(0x12e5ca90)));
  /* 12e331ad push edx */
  push32((uint32_t)(EDX));
  /* 12e331ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e331b1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e331b4 push eax */
  push32((uint32_t)(EAX));
  /* 12e331b5 call 0x12e36b90 */
  push32(0x12e331bau); f_12e36b90();
  /* 12e331ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e331bd push 4 */
  push32((uint32_t)(0x4u));
  /* 12e331bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e331c1 mov cl, byte ptr [0x12e5ca90] */
  CL = (r8((uint32_t)(0x12e5ca90)));
  /* 12e331c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e331c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e331cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e331ce lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12e331d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e331d3 call 0x12e36b90 */
  push32(0x12e331d8u); f_12e36b90();
  /* 12e331d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e331db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e331de push edx */
  push32((uint32_t)(EDX));
  /* 12e331df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e331e1 mov al, byte ptr [0x12e5ca92] */
  AL = (r8((uint32_t)(0x12e5ca92)));
  /* 12e331e6 push eax */
  push32((uint32_t)(EAX));
  /* 12e331e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e331ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e331ed push ecx */
  push32((uint32_t)(ECX));
  /* 12e331ee call 0x12e36b90 */
  push32(0x12e331f3u); f_12e36b90();
  /* 12e331f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e331f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e331f9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12e331fc:;
  /* 12e331fc pop edi */
  EDI = (pop32());
  /* 12e331fd pop esi */
  ESI = (pop32());
  /* 12e331fe pop ebx */
  EBX = (pop32());
  /* 12e331ff mov esp, ebp */
  ESP = (EBP);
  /* 12e33201 pop ebp */
  EBP = (pop32());
  /* 12e33202 ret  */
  ESPCHK(0x12e32ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003210 @ 0x12e33210 (27 bytes, 13 insns) */
void f_12e33210(void) {
  FTRACE(0x12e33210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33210 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33211 mov ebp, esp */
  EBP = (ESP);
  /* 12e33213 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33215 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33217 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e33219 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3321c push eax */
  push32((uint32_t)(EAX));
  /* 12e3321d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33220 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33221 call 0x12e33230 */
  push32(0x12e33226u); f_12e33230();
  /* 12e33226 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33229 pop ebp */
  EBP = (pop32());
  /* 12e3322a ret  */
  ESPCHK(0x12e33210u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12e33230 (96 bytes, 37 insns) */
void f_12e33230(void) {
  FTRACE(0x12e33230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33230 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33231 mov ebp, esp */
  EBP = (ESP);
  /* 12e33233 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e33236 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e33239 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3323d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12e33240 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e33243 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33244 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e33247 push edx */
  push32((uint32_t)(EDX));
  /* 12e33248 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3324b push eax */
  push32((uint32_t)(EAX));
  /* 12e3324c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3324f push ecx */
  push32((uint32_t)(ECX));
  /* 12e33250 call 0x12e32e20 */
  push32(0x12e33255u); f_12e32e20();
  /* 12e33255 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33258 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3325b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3325f je 0x12e33289 */
  if (C.zf) goto L_12e33289;
  /* 12e33261 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e33264 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e33267 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3326a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3326d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e33270:;
  /* 12e33270 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e33273 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33276 jae 0x12e33289 */
  if (!C.cf) goto L_12e33289;
  /* 12e33278 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3327b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12e3327e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e33281 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33284 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e33287 jmp 0x12e33270 */
  goto L_12e33270;
L_12e33289:;
  /* 12e33289 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3328c mov esp, ebp */
  ESP = (EBP);
  /* 12e3328e pop ebp */
  EBP = (pop32());
  /* 12e3328f ret  */
  ESPCHK(0x12e33230u, _esp0);
  ESP += 4; return;
}

/* FUN_10003290 @ 0x12e33290 (27 bytes, 13 insns) */
void f_12e33290(void) {
  FTRACE(0x12e33290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33290 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33291 mov ebp, esp */
  EBP = (ESP);
  /* 12e33293 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33295 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33297 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e33299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3329c push eax */
  push32((uint32_t)(EAX));
  /* 12e3329d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e332a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e332a1 call 0x12e332b0 */
  push32(0x12e332a6u); f_12e332b0();
  /* 12e332a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e332a9 pop ebp */
  EBP = (pop32());
  /* 12e332aa ret  */
  ESPCHK(0x12e33290u, _esp0);
  ESP += 4; return;
}

/* FUN_100032b0 @ 0x12e332b0 (64 bytes, 27 insns) */
void f_12e332b0(void) {
  FTRACE(0x12e332b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e332b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e332b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e332b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e332b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e332b6 call 0x12e36820 */
  push32(0x12e332bbu); f_12e36820();
  /* 12e332bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e332be push 1 */
  push32((uint32_t)(0x1u));
  /* 12e332c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e332c3 push eax */
  push32((uint32_t)(EAX));
  /* 12e332c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e332c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e332c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e332cb push edx */
  push32((uint32_t)(EDX));
  /* 12e332cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e332cf push eax */
  push32((uint32_t)(EAX));
  /* 12e332d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e332d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e332d4 call 0x12e332f0 */
  push32(0x12e332d9u); f_12e332f0();
  /* 12e332d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e332dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e332df push 9 */
  push32((uint32_t)(0x9u));
  /* 12e332e1 call 0x12e368c0 */
  push32(0x12e332e6u); f_12e368c0();
  /* 12e332e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e332e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e332ec mov esp, ebp */
  ESP = (EBP);
  /* 12e332ee pop ebp */
  EBP = (pop32());
  /* 12e332ef ret  */
  ESPCHK(0x12e332b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032f0 @ 0x12e332f0 (1297 bytes, 431 insns) */
void f_12e332f0(void) {
  FTRACE(0x12e332f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e332f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e332f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e332f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e332f6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e332f7 push esi */
  push32((uint32_t)(ESI));
  /* 12e332f8 push edi */
  push32((uint32_t)(EDI));
  /* 12e332f9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12e33300 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33304 jne 0x12e33323 */
  if (!C.zf) goto L_12e33323;
  /* 12e33306 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e33309 push eax */
  push32((uint32_t)(EAX));
  /* 12e3330a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3330d push ecx */
  push32((uint32_t)(ECX));
  /* 12e3330e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e33311 push edx */
  push32((uint32_t)(EDX));
  /* 12e33312 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e33315 push eax */
  push32((uint32_t)(EAX));
  /* 12e33316 call 0x12e32e20 */
  push32(0x12e3331bu); f_12e32e20();
  /* 12e3331b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3331e jmp 0x12e337fa */
  goto L_12e337fa;
L_12e33323:;
  /* 12e33323 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33327 je 0x12e33346 */
  if (C.zf) goto L_12e33346;
  /* 12e33329 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3332d jne 0x12e33346 */
  if (!C.zf) goto L_12e33346;
  /* 12e3332f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e33332 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33333 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33336 push edx */
  push32((uint32_t)(EDX));
  /* 12e33337 call 0x12e338b0 */
  push32(0x12e3333cu); f_12e338b0();
  /* 12e3333c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3333f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e33341 jmp 0x12e337fa */
  goto L_12e337fa;
L_12e33346:;
  /* 12e33346 mov eax, dword ptr [0x12e5ca84] */
  EAX = (r32((uint32_t)(0x12e5ca84)));
  /* 12e3334b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3334e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33350 je 0x12e33382 */
  if (C.zf) goto L_12e33382;
L_12e33352:;
  /* 12e33352 call 0x12e33fc0 */
  push32(0x12e33357u); f_12e33fc0();
  /* 12e33357 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33359 jne 0x12e3337c */
  if (!C.zf) goto L_12e3337c;
  /* 12e3335b push 0x12e594a8 */
  push32((uint32_t)(0x12e594a8u));
  /* 12e33360 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33362 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12e33367 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e3336c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3336e call 0x12e31ee0 */
  push32(0x12e33373u); f_12e31ee0();
  /* 12e33373 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33376 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33379 jne 0x12e3337c */
  if (!C.zf) goto L_12e3337c;
  /* 12e3337b int3  */
  x86_unimpl("int3 @ 0x12e3337b");
L_12e3337c:;
  /* 12e3337c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3337e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e33380 jne 0x12e33352 */
  if (!C.zf) goto L_12e33352;
L_12e33382:;
  /* 12e33382 mov edx, dword ptr [0x12e5ca88] */
  EDX = (r32((uint32_t)(0x12e5ca88)));
  /* 12e33388 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e3338b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3338e cmp eax, dword ptr [0x12e5ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e5ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33394 jne 0x12e33397 */
  if (!C.zf) goto L_12e33397;
  /* 12e33396 int3  */
  x86_unimpl("int3 @ 0x12e33396");
L_12e33397:;
  /* 12e33397 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3339a push ecx */
  push32((uint32_t)(ECX));
  /* 12e3339b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e3339e push edx */
  push32((uint32_t)(EDX));
  /* 12e3339f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e333a2 push eax */
  push32((uint32_t)(EAX));
  /* 12e333a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e333a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e333a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e333aa push edx */
  push32((uint32_t)(EDX));
  /* 12e333ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e333ae push eax */
  push32((uint32_t)(EAX));
  /* 12e333af push 2 */
  push32((uint32_t)(0x2u));
  /* 12e333b1 call dword ptr [0x12e5cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5cc90))), 0x12e333b7u);
  /* 12e333b7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e333ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e333bc jne 0x12e3341c */
  if (!C.zf) goto L_12e3341c;
  /* 12e333be cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e333c2 je 0x12e333ef */
  if (C.zf) goto L_12e333ef;
L_12e333c4:;
  /* 12e333c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e333c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e333c8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e333cb push edx */
  push32((uint32_t)(EDX));
  /* 12e333cc push 0x12e59624 */
  push32((uint32_t)(0x12e59624u));
  /* 12e333d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e333d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e333d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e333d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e333d9 call 0x12e31ee0 */
  push32(0x12e333deu); f_12e31ee0();
  /* 12e333de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e333e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e333e4 jne 0x12e333e7 */
  if (!C.zf) goto L_12e333e7;
  /* 12e333e6 int3  */
  x86_unimpl("int3 @ 0x12e333e6");
L_12e333e7:;
  /* 12e333e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e333e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e333eb jne 0x12e333c4 */
  if (!C.zf) goto L_12e333c4;
  /* 12e333ed jmp 0x12e33415 */
  goto L_12e33415;
L_12e333ef:;
  /* 12e333ef push 0x12e59600 */
  push32((uint32_t)(0x12e59600u));
  /* 12e333f4 push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e333f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e333fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e333fd push 0 */
  push32((uint32_t)(0x0u));
  /* 12e333ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33401 call 0x12e31ee0 */
  push32(0x12e33406u); f_12e31ee0();
  /* 12e33406 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33409 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3340c jne 0x12e3340f */
  if (!C.zf) goto L_12e3340f;
  /* 12e3340e int3  */
  x86_unimpl("int3 @ 0x12e3340e");
L_12e3340f:;
  /* 12e3340f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e33411 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e33413 jne 0x12e333ef */
  if (!C.zf) goto L_12e333ef;
L_12e33415:;
  /* 12e33415 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e33417 jmp 0x12e337fa */
  goto L_12e337fa;
L_12e3341c:;
  /* 12e3341c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33420 jbe 0x12e3344e */
  if ((C.cf||C.zf)) goto L_12e3344e;
L_12e33422:;
  /* 12e33422 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e33425 push edx */
  push32((uint32_t)(EDX));
  /* 12e33426 push 0x12e595d0 */
  push32((uint32_t)(0x12e595d0u));
  /* 12e3342b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3342d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3342f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33431 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e33433 call 0x12e31ee0 */
  push32(0x12e33438u); f_12e31ee0();
  /* 12e33438 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3343b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3343e jne 0x12e33441 */
  if (!C.zf) goto L_12e33441;
  /* 12e33440 int3  */
  x86_unimpl("int3 @ 0x12e33440");
L_12e33441:;
  /* 12e33441 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e33443 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33445 jne 0x12e33422 */
  if (!C.zf) goto L_12e33422;
  /* 12e33447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e33449 jmp 0x12e337fa */
  goto L_12e337fa;
L_12e3344e:;
  /* 12e3344e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33452 je 0x12e33496 */
  if (C.zf) goto L_12e33496;
  /* 12e33454 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e33457 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3345d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33460 je 0x12e33496 */
  if (C.zf) goto L_12e33496;
  /* 12e33462 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e33465 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3346b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3346e je 0x12e33496 */
  if (C.zf) goto L_12e33496;
L_12e33470:;
  /* 12e33470 push 0x12e593e4 */
  push32((uint32_t)(0x12e593e4u));
  /* 12e33475 push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e3347a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3347c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3347e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33480 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e33482 call 0x12e31ee0 */
  push32(0x12e33487u); f_12e31ee0();
  /* 12e33487 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3348a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3348d jne 0x12e33490 */
  if (!C.zf) goto L_12e33490;
  /* 12e3348f int3  */
  x86_unimpl("int3 @ 0x12e3348f");
L_12e33490:;
  /* 12e33490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e33492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33494 jne 0x12e33470 */
  if (!C.zf) goto L_12e33470;
L_12e33496:;
  /* 12e33496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33499 push ecx */
  push32((uint32_t)(ECX));
  /* 12e3349a call 0x12e34420 */
  push32(0x12e3349fu); f_12e34420();
  /* 12e3349f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e334a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e334a4 jne 0x12e334c7 */
  if (!C.zf) goto L_12e334c7;
  /* 12e334a6 push 0x12e595ac */
  push32((uint32_t)(0x12e595acu));
  /* 12e334ab push 0 */
  push32((uint32_t)(0x0u));
  /* 12e334ad push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12e334b2 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e334b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e334b9 call 0x12e31ee0 */
  push32(0x12e334beu); f_12e31ee0();
  /* 12e334be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e334c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e334c4 jne 0x12e334c7 */
  if (!C.zf) goto L_12e334c7;
  /* 12e334c6 int3  */
  x86_unimpl("int3 @ 0x12e334c6");
L_12e334c7:;
  /* 12e334c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e334c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e334cb jne 0x12e33496 */
  if (!C.zf) goto L_12e33496;
  /* 12e334cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e334d0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e334d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e334d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e334d9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e334dd jne 0x12e334e6 */
  if (!C.zf) goto L_12e334e6;
  /* 12e334df mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12e334e6:;
  /* 12e334e6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e334ea je 0x12e3352a */
  if (C.zf) goto L_12e3352a;
L_12e334ec:;
  /* 12e334ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e334ef cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e334f6 jne 0x12e33501 */
  if (!C.zf) goto L_12e33501;
  /* 12e334f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e334fb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e334ff je 0x12e33522 */
  if (C.zf) goto L_12e33522;
L_12e33501:;
  /* 12e33501 push 0x12e59564 */
  push32((uint32_t)(0x12e59564u));
  /* 12e33506 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33508 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12e3350d push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e33512 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e33514 call 0x12e31ee0 */
  push32(0x12e33519u); f_12e31ee0();
  /* 12e33519 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3351c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3351f jne 0x12e33522 */
  if (!C.zf) goto L_12e33522;
  /* 12e33521 int3  */
  x86_unimpl("int3 @ 0x12e33521");
L_12e33522:;
  /* 12e33522 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e33524 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e33526 jne 0x12e334ec */
  if (!C.zf) goto L_12e334ec;
  /* 12e33528 jmp 0x12e3358e */
  goto L_12e3358e;
L_12e3352a:;
  /* 12e3352a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3352d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e33530 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e33535 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33538 jne 0x12e3354f */
  if (!C.zf) goto L_12e3354f;
  /* 12e3353a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3353d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e33543 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33546 jne 0x12e3354f */
  if (!C.zf) goto L_12e3354f;
  /* 12e33548 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12e3354f:;
  /* 12e3354f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e33552 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e33555 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3355a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3355d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e33563 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33565 je 0x12e33588 */
  if (C.zf) goto L_12e33588;
  /* 12e33567 push 0x12e59528 */
  push32((uint32_t)(0x12e59528u));
  /* 12e3356c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3356e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12e33573 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e33578 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3357a call 0x12e31ee0 */
  push32(0x12e3357fu); f_12e31ee0();
  /* 12e3357f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33582 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33585 jne 0x12e33588 */
  if (!C.zf) goto L_12e33588;
  /* 12e33587 int3  */
  x86_unimpl("int3 @ 0x12e33587");
L_12e33588:;
  /* 12e33588 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3358a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3358c jne 0x12e3354f */
  if (!C.zf) goto L_12e3354f;
L_12e3358e:;
  /* 12e3358e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33592 je 0x12e335b9 */
  if (C.zf) goto L_12e335b9;
  /* 12e33594 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e33597 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3359a push eax */
  push32((uint32_t)(EAX));
  /* 12e3359b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3359e push ecx */
  push32((uint32_t)(ECX));
  /* 12e3359f call 0x12e36da0 */
  push32(0x12e335a4u); f_12e36da0();
  /* 12e335a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e335a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e335aa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e335ae jne 0x12e335b7 */
  if (!C.zf) goto L_12e335b7;
  /* 12e335b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e335b2 jmp 0x12e337fa */
  goto L_12e337fa;
L_12e335b7:;
  /* 12e335b7 jmp 0x12e335dc */
  goto L_12e335dc;
L_12e335b9:;
  /* 12e335b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e335bc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e335bf push edx */
  push32((uint32_t)(EDX));
  /* 12e335c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e335c3 push eax */
  push32((uint32_t)(EAX));
  /* 12e335c4 call 0x12e36cf0 */
  push32(0x12e335c9u); f_12e36cf0();
  /* 12e335c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e335cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e335cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e335d3 jne 0x12e335dc */
  if (!C.zf) goto L_12e335dc;
  /* 12e335d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e335d7 jmp 0x12e337fa */
  goto L_12e337fa;
L_12e335dc:;
  /* 12e335dc mov ecx, dword ptr [0x12e5ca88] */
  ECX = (r32((uint32_t)(0x12e5ca88)));
  /* 12e335e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e335e5 mov dword ptr [0x12e5ca88], ecx */
  w32((uint32_t)(0x12e5ca88), (ECX));
  /* 12e335eb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e335ef jne 0x12e33647 */
  if (!C.zf) goto L_12e33647;
  /* 12e335f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e335f4 mov eax, dword ptr [0x12e5e4d8] */
  EAX = (r32((uint32_t)(0x12e5e4d8)));
  /* 12e335f9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e335fc mov dword ptr [0x12e5e4d8], eax */
  w32((uint32_t)(0x12e5e4d8), (EAX));
  /* 12e33601 mov ecx, dword ptr [0x12e5e4d8] */
  ECX = (r32((uint32_t)(0x12e5e4d8)));
  /* 12e33607 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3360a mov dword ptr [0x12e5e4d8], ecx */
  w32((uint32_t)(0x12e5e4d8), (ECX));
  /* 12e33610 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e33613 mov eax, dword ptr [0x12e5e4e0] */
  EAX = (r32((uint32_t)(0x12e5e4e0)));
  /* 12e33618 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3361b mov dword ptr [0x12e5e4e0], eax */
  w32((uint32_t)(0x12e5e4e0), (EAX));
  /* 12e33620 mov ecx, dword ptr [0x12e5e4e0] */
  ECX = (r32((uint32_t)(0x12e5e4e0)));
  /* 12e33626 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33629 mov dword ptr [0x12e5e4e0], ecx */
  w32((uint32_t)(0x12e5e4e0), (ECX));
  /* 12e3362f mov edx, dword ptr [0x12e5e4e0] */
  EDX = (r32((uint32_t)(0x12e5e4e0)));
  /* 12e33635 cmp edx, dword ptr [0x12e5e4e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e5e4e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3363b jbe 0x12e33647 */
  if ((C.cf||C.zf)) goto L_12e33647;
  /* 12e3363d mov eax, dword ptr [0x12e5e4e0] */
  EAX = (r32((uint32_t)(0x12e5e4e0)));
  /* 12e33642 mov dword ptr [0x12e5e4e4], eax */
  w32((uint32_t)(0x12e5e4e4), (EAX));
L_12e33647:;
  /* 12e33647 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3364a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3364d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e33650 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e33653 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e33656 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33659 jbe 0x12e3367f */
  if ((C.cf||C.zf)) goto L_12e3367f;
  /* 12e3365b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3365e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e33661 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e33664 push edx */
  push32((uint32_t)(EDX));
  /* 12e33665 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e33667 mov al, byte ptr [0x12e5ca92] */
  AL = (r8((uint32_t)(0x12e5ca92)));
  /* 12e3366c push eax */
  push32((uint32_t)(EAX));
  /* 12e3366d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e33670 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33673 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33676 push edx */
  push32((uint32_t)(EDX));
  /* 12e33677 call 0x12e36b90 */
  push32(0x12e3367cu); f_12e36b90();
  /* 12e3367c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3367f:;
  /* 12e3367f push 4 */
  push32((uint32_t)(0x4u));
  /* 12e33681 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e33683 mov al, byte ptr [0x12e5ca90] */
  AL = (r8((uint32_t)(0x12e5ca90)));
  /* 12e33688 push eax */
  push32((uint32_t)(EAX));
  /* 12e33689 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3368c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3368f push ecx */
  push32((uint32_t)(ECX));
  /* 12e33690 call 0x12e36b90 */
  push32(0x12e33695u); f_12e36b90();
  /* 12e33695 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33698 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3369c jne 0x12e336b9 */
  if (!C.zf) goto L_12e336b9;
  /* 12e3369e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e336a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e336a4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e336a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e336aa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e336ad mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12e336b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e336b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e336b6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12e336b9:;
  /* 12e336b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e336bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e336bf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12e336c2:;
  /* 12e336c2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e336c6 jne 0x12e336f7 */
  if (!C.zf) goto L_12e336f7;
  /* 12e336c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e336cc jne 0x12e336d6 */
  if (!C.zf) goto L_12e336d6;
  /* 12e336ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e336d1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e336d4 je 0x12e336f7 */
  if (C.zf) goto L_12e336f7;
L_12e336d6:;
  /* 12e336d6 push 0x12e594f4 */
  push32((uint32_t)(0x12e594f4u));
  /* 12e336db push 0 */
  push32((uint32_t)(0x0u));
  /* 12e336dd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12e336e2 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e336e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e336e9 call 0x12e31ee0 */
  push32(0x12e336eeu); f_12e31ee0();
  /* 12e336ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e336f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e336f4 jne 0x12e336f7 */
  if (!C.zf) goto L_12e336f7;
  /* 12e336f6 int3  */
  x86_unimpl("int3 @ 0x12e336f6");
L_12e336f7:;
  /* 12e336f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e336f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e336fb jne 0x12e336c2 */
  if (!C.zf) goto L_12e336c2;
  /* 12e336fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e33700 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33703 je 0x12e3370b */
  if (C.zf) goto L_12e3370b;
  /* 12e33705 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33709 je 0x12e33713 */
  if (C.zf) goto L_12e33713;
L_12e3370b:;
  /* 12e3370b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3370e jmp 0x12e337fa */
  goto L_12e337fa;
L_12e33713:;
  /* 12e33713 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e33716 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33719 je 0x12e3372b */
  if (C.zf) goto L_12e3372b;
  /* 12e3371b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3371e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e33720 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e33723 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e33726 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e33729 jmp 0x12e33767 */
  goto L_12e33767;
L_12e3372b:;
  /* 12e3372b mov eax, dword ptr [0x12e5e4d4] */
  EAX = (r32((uint32_t)(0x12e5e4d4)));
  /* 12e33730 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33733 je 0x12e33756 */
  if (C.zf) goto L_12e33756;
  /* 12e33735 push 0x12e594d8 */
  push32((uint32_t)(0x12e594d8u));
  /* 12e3373a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3373c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12e33741 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e33746 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e33748 call 0x12e31ee0 */
  push32(0x12e3374du); f_12e31ee0();
  /* 12e3374d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33750 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33753 jne 0x12e33756 */
  if (!C.zf) goto L_12e33756;
  /* 12e33755 int3  */
  x86_unimpl("int3 @ 0x12e33755");
L_12e33756:;
  /* 12e33756 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e33758 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3375a jne 0x12e3372b */
  if (!C.zf) goto L_12e3372b;
  /* 12e3375c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3375f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e33762 mov dword ptr [0x12e5e4d4], eax */
  w32((uint32_t)(0x12e5e4d4), (EAX));
L_12e33767:;
  /* 12e33767 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3376a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3376e je 0x12e3377f */
  if (C.zf) goto L_12e3377f;
  /* 12e33770 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e33773 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e33776 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e33779 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e3377b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e3377d jmp 0x12e337ba */
  goto L_12e337ba;
L_12e3377f:;
  /* 12e3377f mov eax, dword ptr [0x12e5e4dc] */
  EAX = (r32((uint32_t)(0x12e5e4dc)));
  /* 12e33784 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33787 je 0x12e337aa */
  if (C.zf) goto L_12e337aa;
  /* 12e33789 push 0x12e594bc */
  push32((uint32_t)(0x12e594bcu));
  /* 12e3378e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33790 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12e33795 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e3379a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3379c call 0x12e31ee0 */
  push32(0x12e337a1u); f_12e31ee0();
  /* 12e337a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e337a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e337a7 jne 0x12e337aa */
  if (!C.zf) goto L_12e337aa;
  /* 12e337a9 int3  */
  x86_unimpl("int3 @ 0x12e337a9");
L_12e337aa:;
  /* 12e337aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e337ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e337ae jne 0x12e3377f */
  if (!C.zf) goto L_12e3377f;
  /* 12e337b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e337b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e337b5 mov dword ptr [0x12e5e4dc], eax */
  w32((uint32_t)(0x12e5e4dc), (EAX));
L_12e337ba:;
  /* 12e337ba cmp dword ptr [0x12e5e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e337c1 je 0x12e337d1 */
  if (C.zf) goto L_12e337d1;
  /* 12e337c3 mov ecx, dword ptr [0x12e5e4dc] */
  ECX = (r32((uint32_t)(0x12e5e4dc)));
  /* 12e337c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e337cc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12e337cf jmp 0x12e337d9 */
  goto L_12e337d9;
L_12e337d1:;
  /* 12e337d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e337d4 mov dword ptr [0x12e5e4d4], eax */
  w32((uint32_t)(0x12e5e4d4), (EAX));
L_12e337d9:;
  /* 12e337d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e337dc mov edx, dword ptr [0x12e5e4dc] */
  EDX = (r32((uint32_t)(0x12e5e4dc)));
  /* 12e337e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e337e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e337e7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12e337ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e337f1 mov dword ptr [0x12e5e4dc], ecx */
  w32((uint32_t)(0x12e5e4dc), (ECX));
  /* 12e337f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e337fa:;
  /* 12e337fa pop edi */
  EDI = (pop32());
  /* 12e337fb pop esi */
  ESI = (pop32());
  /* 12e337fc pop ebx */
  EBX = (pop32());
  /* 12e337fd mov esp, ebp */
  ESP = (EBP);
  /* 12e337ff pop ebp */
  EBP = (pop32());
  /* 12e33800 ret  */
  ESPCHK(0x12e332f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x12e33810 (27 bytes, 13 insns) */
void f_12e33810(void) {
  FTRACE(0x12e33810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33810 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33811 mov ebp, esp */
  EBP = (ESP);
  /* 12e33813 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33815 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33817 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e33819 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3381c push eax */
  push32((uint32_t)(EAX));
  /* 12e3381d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33820 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33821 call 0x12e33830 */
  push32(0x12e33826u); f_12e33830();
  /* 12e33826 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33829 pop ebp */
  EBP = (pop32());
  /* 12e3382a ret  */
  ESPCHK(0x12e33810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003830 @ 0x12e33830 (64 bytes, 27 insns) */
void f_12e33830(void) {
  FTRACE(0x12e33830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33830 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33831 mov ebp, esp */
  EBP = (ESP);
  /* 12e33833 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33834 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e33836 call 0x12e36820 */
  push32(0x12e3383bu); f_12e36820();
  /* 12e3383b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3383e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33840 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e33843 push eax */
  push32((uint32_t)(EAX));
  /* 12e33844 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e33847 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33848 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3384b push edx */
  push32((uint32_t)(EDX));
  /* 12e3384c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3384f push eax */
  push32((uint32_t)(EAX));
  /* 12e33850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33853 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33854 call 0x12e332f0 */
  push32(0x12e33859u); f_12e332f0();
  /* 12e33859 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3385c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3385f push 9 */
  push32((uint32_t)(0x9u));
  /* 12e33861 call 0x12e368c0 */
  push32(0x12e33866u); f_12e368c0();
  /* 12e33866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3386c mov esp, ebp */
  ESP = (EBP);
  /* 12e3386e pop ebp */
  EBP = (pop32());
  /* 12e3386f ret  */
  ESPCHK(0x12e33830u, _esp0);
  ESP += 4; return;
}

/* FUN_10003870 @ 0x12e33870 (19 bytes, 9 insns) */
void f_12e33870(void) {
  FTRACE(0x12e33870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33870 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33871 mov ebp, esp */
  EBP = (ESP);
  /* 12e33873 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e33875 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33878 push eax */
  push32((uint32_t)(EAX));
  /* 12e33879 call 0x12e338b0 */
  push32(0x12e3387eu); f_12e338b0();
  /* 12e3387e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33881 pop ebp */
  EBP = (pop32());
  /* 12e33882 ret  */
  ESPCHK(0x12e33870u, _esp0);
  ESP += 4; return;
}

/* FUN_10003890 @ 0x12e33890 (19 bytes, 9 insns) */
void f_12e33890(void) {
  FTRACE(0x12e33890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33890 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33891 mov ebp, esp */
  EBP = (ESP);
  /* 12e33893 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e33895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33898 push eax */
  push32((uint32_t)(EAX));
  /* 12e33899 call 0x12e338e0 */
  push32(0x12e3389eu); f_12e338e0();
  /* 12e3389e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e338a1 pop ebp */
  EBP = (pop32());
  /* 12e338a2 ret  */
  ESPCHK(0x12e33890u, _esp0);
  ESP += 4; return;
}

/* FUN_100038b0 @ 0x12e338b0 (41 bytes, 16 insns) */
void f_12e338b0(void) {
  FTRACE(0x12e338b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e338b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e338b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e338b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e338b5 call 0x12e36820 */
  push32(0x12e338bau); f_12e36820();
  /* 12e338ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e338bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e338c0 push eax */
  push32((uint32_t)(EAX));
  /* 12e338c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e338c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e338c5 call 0x12e338e0 */
  push32(0x12e338cau); f_12e338e0();
  /* 12e338ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e338cd push 9 */
  push32((uint32_t)(0x9u));
  /* 12e338cf call 0x12e368c0 */
  push32(0x12e338d4u); f_12e368c0();
  /* 12e338d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e338d7 pop ebp */
  EBP = (pop32());
  /* 12e338d8 ret  */
  ESPCHK(0x12e338b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038e0 @ 0x12e338e0 (1004 bytes, 342 insns) */
void f_12e338e0(void) {
  FTRACE(0x12e338e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e338e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e338e1 mov ebp, esp */
  EBP = (ESP);
  /* 12e338e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e338e4 push ebx */
  push32((uint32_t)(EBX));
  /* 12e338e5 push esi */
  push32((uint32_t)(ESI));
  /* 12e338e6 push edi */
  push32((uint32_t)(EDI));
  /* 12e338e7 mov eax, dword ptr [0x12e5ca84] */
  EAX = (r32((uint32_t)(0x12e5ca84)));
  /* 12e338ec and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e338ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e338f1 je 0x12e33923 */
  if (C.zf) goto L_12e33923;
L_12e338f3:;
  /* 12e338f3 call 0x12e33fc0 */
  push32(0x12e338f8u); f_12e33fc0();
  /* 12e338f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e338fa jne 0x12e3391d */
  if (!C.zf) goto L_12e3391d;
  /* 12e338fc push 0x12e594a8 */
  push32((uint32_t)(0x12e594a8u));
  /* 12e33901 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33903 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12e33908 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e3390d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3390f call 0x12e31ee0 */
  push32(0x12e33914u); f_12e31ee0();
  /* 12e33914 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33917 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3391a jne 0x12e3391d */
  if (!C.zf) goto L_12e3391d;
  /* 12e3391c int3  */
  x86_unimpl("int3 @ 0x12e3391c");
L_12e3391d:;
  /* 12e3391d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3391f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e33921 jne 0x12e338f3 */
  if (!C.zf) goto L_12e338f3;
L_12e33923:;
  /* 12e33923 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33927 jne 0x12e3392e */
  if (!C.zf) goto L_12e3392e;
  /* 12e33929 jmp 0x12e33cc5 */
  goto L_12e33cc5;
L_12e3392e:;
  /* 12e3392e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33930 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33932 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33934 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e33937 push edx */
  push32((uint32_t)(EDX));
  /* 12e33938 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3393a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3393d push eax */
  push32((uint32_t)(EAX));
  /* 12e3393e push 3 */
  push32((uint32_t)(0x3u));
  /* 12e33940 call dword ptr [0x12e5cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5cc90))), 0x12e33946u);
  /* 12e33946 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3394b jne 0x12e33978 */
  if (!C.zf) goto L_12e33978;
L_12e3394d:;
  /* 12e3394d push 0x12e5976c */
  push32((uint32_t)(0x12e5976cu));
  /* 12e33952 push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e33957 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33959 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3395b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3395d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3395f call 0x12e31ee0 */
  push32(0x12e33964u); f_12e31ee0();
  /* 12e33964 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33967 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3396a jne 0x12e3396d */
  if (!C.zf) goto L_12e3396d;
  /* 12e3396c int3  */
  x86_unimpl("int3 @ 0x12e3396c");
L_12e3396d:;
  /* 12e3396d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3396f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e33971 jne 0x12e3394d */
  if (!C.zf) goto L_12e3394d;
  /* 12e33973 jmp 0x12e33cc5 */
  goto L_12e33cc5;
L_12e33978:;
  /* 12e33978 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3397b push edx */
  push32((uint32_t)(EDX));
  /* 12e3397c call 0x12e34420 */
  push32(0x12e33981u); f_12e34420();
  /* 12e33981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33986 jne 0x12e339a9 */
  if (!C.zf) goto L_12e339a9;
  /* 12e33988 push 0x12e595ac */
  push32((uint32_t)(0x12e595acu));
  /* 12e3398d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3398f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12e33994 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e33999 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3399b call 0x12e31ee0 */
  push32(0x12e339a0u); f_12e31ee0();
  /* 12e339a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e339a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e339a6 jne 0x12e339a9 */
  if (!C.zf) goto L_12e339a9;
  /* 12e339a8 int3  */
  x86_unimpl("int3 @ 0x12e339a8");
L_12e339a9:;
  /* 12e339a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e339ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e339ad jne 0x12e33978 */
  if (!C.zf) goto L_12e33978;
  /* 12e339af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e339b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e339b5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e339b8:;
  /* 12e339b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e339bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e339be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e339c3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e339c6 je 0x12e33a0b */
  if (C.zf) goto L_12e33a0b;
  /* 12e339c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e339cb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e339cf je 0x12e33a0b */
  if (C.zf) goto L_12e33a0b;
  /* 12e339d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e339d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e339d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e339dc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e339df je 0x12e33a0b */
  if (C.zf) goto L_12e33a0b;
  /* 12e339e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e339e4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e339e8 je 0x12e33a0b */
  if (C.zf) goto L_12e33a0b;
  /* 12e339ea push 0x12e59744 */
  push32((uint32_t)(0x12e59744u));
  /* 12e339ef push 0 */
  push32((uint32_t)(0x0u));
  /* 12e339f1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12e339f6 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e339fb push 2 */
  push32((uint32_t)(0x2u));
  /* 12e339fd call 0x12e31ee0 */
  push32(0x12e33a02u); f_12e31ee0();
  /* 12e33a02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33a05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33a08 jne 0x12e33a0b */
  if (!C.zf) goto L_12e33a0b;
  /* 12e33a0a int3  */
  x86_unimpl("int3 @ 0x12e33a0a");
L_12e33a0b:;
  /* 12e33a0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e33a0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e33a0f jne 0x12e339b8 */
  if (!C.zf) goto L_12e339b8;
  /* 12e33a11 mov eax, dword ptr [0x12e5ca84] */
  EAX = (r32((uint32_t)(0x12e5ca84)));
  /* 12e33a16 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e33a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33a1b jne 0x12e33ae6 */
  if (!C.zf) goto L_12e33ae6;
  /* 12e33a21 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e33a23 mov cl, byte ptr [0x12e5ca90] */
  CL = (r8((uint32_t)(0x12e5ca90)));
  /* 12e33a29 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33a2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33a2d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33a30 push edx */
  push32((uint32_t)(EDX));
  /* 12e33a31 call 0x12e33f30 */
  push32(0x12e33a36u); f_12e33f30();
  /* 12e33a36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33a3b jne 0x12e33a80 */
  if (!C.zf) goto L_12e33a80;
L_12e33a3d:;
  /* 12e33a3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33a40 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33a43 push eax */
  push32((uint32_t)(EAX));
  /* 12e33a44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33a47 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e33a4a push edx */
  push32((uint32_t)(EDX));
  /* 12e33a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33a4e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e33a51 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e33a57 mov edx, dword ptr [ecx*4 + 0x12e5ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e5ca94)));
  /* 12e33a5e push edx */
  push32((uint32_t)(EDX));
  /* 12e33a5f push 0x12e59718 */
  push32((uint32_t)(0x12e59718u));
  /* 12e33a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33a6a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e33a6c call 0x12e31ee0 */
  push32(0x12e33a71u); f_12e31ee0();
  /* 12e33a71 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33a74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33a77 jne 0x12e33a7a */
  if (!C.zf) goto L_12e33a7a;
  /* 12e33a79 int3  */
  x86_unimpl("int3 @ 0x12e33a79");
L_12e33a7a:;
  /* 12e33a7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e33a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33a7e jne 0x12e33a3d */
  if (!C.zf) goto L_12e33a3d;
L_12e33a80:;
  /* 12e33a80 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e33a82 mov cl, byte ptr [0x12e5ca90] */
  CL = (r8((uint32_t)(0x12e5ca90)));
  /* 12e33a88 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33a89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33a8c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e33a8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33a92 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12e33a96 push edx */
  push32((uint32_t)(EDX));
  /* 12e33a97 call 0x12e33f30 */
  push32(0x12e33a9cu); f_12e33f30();
  /* 12e33a9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33a9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33aa1 jne 0x12e33ae6 */
  if (!C.zf) goto L_12e33ae6;
L_12e33aa3:;
  /* 12e33aa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33aa6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33aa9 push eax */
  push32((uint32_t)(EAX));
  /* 12e33aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33aad mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e33ab0 push edx */
  push32((uint32_t)(EDX));
  /* 12e33ab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33ab4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e33ab7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e33abd mov edx, dword ptr [ecx*4 + 0x12e5ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e5ca94)));
  /* 12e33ac4 push edx */
  push32((uint32_t)(EDX));
  /* 12e33ac5 push 0x12e596ec */
  push32((uint32_t)(0x12e596ecu));
  /* 12e33aca push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33acc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33ace push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33ad0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e33ad2 call 0x12e31ee0 */
  push32(0x12e33ad7u); f_12e31ee0();
  /* 12e33ad7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33ada cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33add jne 0x12e33ae0 */
  if (!C.zf) goto L_12e33ae0;
  /* 12e33adf int3  */
  x86_unimpl("int3 @ 0x12e33adf");
L_12e33ae0:;
  /* 12e33ae0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e33ae2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33ae4 jne 0x12e33aa3 */
  if (!C.zf) goto L_12e33aa3;
L_12e33ae6:;
  /* 12e33ae6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33ae9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33aed jne 0x12e33b5b */
  if (!C.zf) goto L_12e33b5b;
L_12e33aef:;
  /* 12e33aef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33af2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33af9 jne 0x12e33b04 */
  if (!C.zf) goto L_12e33b04;
  /* 12e33afb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33afe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33b02 je 0x12e33b25 */
  if (C.zf) goto L_12e33b25;
L_12e33b04:;
  /* 12e33b04 push 0x12e596ac */
  push32((uint32_t)(0x12e596acu));
  /* 12e33b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33b0b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12e33b10 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e33b15 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e33b17 call 0x12e31ee0 */
  push32(0x12e33b1cu); f_12e31ee0();
  /* 12e33b1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33b1f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33b22 jne 0x12e33b25 */
  if (!C.zf) goto L_12e33b25;
  /* 12e33b24 int3  */
  x86_unimpl("int3 @ 0x12e33b24");
L_12e33b25:;
  /* 12e33b25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e33b27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e33b29 jne 0x12e33aef */
  if (!C.zf) goto L_12e33aef;
  /* 12e33b2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33b2e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e33b31 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33b34 push eax */
  push32((uint32_t)(EAX));
  /* 12e33b35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e33b37 mov cl, byte ptr [0x12e5ca91] */
  CL = (r8((uint32_t)(0x12e5ca91)));
  /* 12e33b3d push ecx */
  push32((uint32_t)(ECX));
  /* 12e33b3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33b41 push edx */
  push32((uint32_t)(EDX));
  /* 12e33b42 call 0x12e36b90 */
  push32(0x12e33b47u); f_12e36b90();
  /* 12e33b47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33b4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33b4d push eax */
  push32((uint32_t)(EAX));
  /* 12e33b4e call 0x12e36f90 */
  push32(0x12e33b53u); f_12e36f90();
  /* 12e33b53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33b56 jmp 0x12e33cc5 */
  goto L_12e33cc5;
L_12e33b5b:;
  /* 12e33b5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33b5e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33b62 jne 0x12e33b71 */
  if (!C.zf) goto L_12e33b71;
  /* 12e33b64 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33b68 jne 0x12e33b71 */
  if (!C.zf) goto L_12e33b71;
  /* 12e33b6a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12e33b71:;
  /* 12e33b71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33b74 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e33b77 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33b7a je 0x12e33b9d */
  if (C.zf) goto L_12e33b9d;
  /* 12e33b7c push 0x12e5968c */
  push32((uint32_t)(0x12e5968cu));
  /* 12e33b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33b83 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12e33b88 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e33b8d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e33b8f call 0x12e31ee0 */
  push32(0x12e33b94u); f_12e31ee0();
  /* 12e33b94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33b97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33b9a jne 0x12e33b9d */
  if (!C.zf) goto L_12e33b9d;
  /* 12e33b9c int3  */
  x86_unimpl("int3 @ 0x12e33b9c");
L_12e33b9d:;
  /* 12e33b9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e33b9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e33ba1 jne 0x12e33b71 */
  if (!C.zf) goto L_12e33b71;
  /* 12e33ba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33ba6 mov eax, dword ptr [0x12e5e4e0] */
  EAX = (r32((uint32_t)(0x12e5e4e0)));
  /* 12e33bab sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e33bae mov dword ptr [0x12e5e4e0], eax */
  w32((uint32_t)(0x12e5e4e0), (EAX));
  /* 12e33bb3 mov ecx, dword ptr [0x12e5ca84] */
  ECX = (r32((uint32_t)(0x12e5ca84)));
  /* 12e33bb9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12e33bbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e33bbe jne 0x12e33c9c */
  if (!C.zf) goto L_12e33c9c;
  /* 12e33bc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33bc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33bca je 0x12e33bdc */
  if (C.zf) goto L_12e33bdc;
  /* 12e33bcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33bcf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e33bd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33bd4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e33bd7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12e33bda jmp 0x12e33c1a */
  goto L_12e33c1a;
L_12e33bdc:;
  /* 12e33bdc mov ecx, dword ptr [0x12e5e4d4] */
  ECX = (r32((uint32_t)(0x12e5e4d4)));
  /* 12e33be2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33be5 je 0x12e33c08 */
  if (C.zf) goto L_12e33c08;
  /* 12e33be7 push 0x12e59674 */
  push32((uint32_t)(0x12e59674u));
  /* 12e33bec push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33bee push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12e33bf3 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e33bf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e33bfa call 0x12e31ee0 */
  push32(0x12e33bffu); f_12e31ee0();
  /* 12e33bff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33c02 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33c05 jne 0x12e33c08 */
  if (!C.zf) goto L_12e33c08;
  /* 12e33c07 int3  */
  x86_unimpl("int3 @ 0x12e33c07");
L_12e33c08:;
  /* 12e33c08 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e33c0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e33c0c jne 0x12e33bdc */
  if (!C.zf) goto L_12e33bdc;
  /* 12e33c0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33c11 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e33c14 mov dword ptr [0x12e5e4d4], ecx */
  w32((uint32_t)(0x12e5e4d4), (ECX));
L_12e33c1a:;
  /* 12e33c1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33c1d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33c21 je 0x12e33c32 */
  if (C.zf) goto L_12e33c32;
  /* 12e33c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33c26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e33c29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33c2c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e33c2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e33c30 jmp 0x12e33c6f */
  goto L_12e33c6f;
L_12e33c32:;
  /* 12e33c32 mov ecx, dword ptr [0x12e5e4dc] */
  ECX = (r32((uint32_t)(0x12e5e4dc)));
  /* 12e33c38 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33c3b je 0x12e33c5e */
  if (C.zf) goto L_12e33c5e;
  /* 12e33c3d push 0x12e5965c */
  push32((uint32_t)(0x12e5965cu));
  /* 12e33c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33c44 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12e33c49 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e33c4e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e33c50 call 0x12e31ee0 */
  push32(0x12e33c55u); f_12e31ee0();
  /* 12e33c55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33c58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33c5b jne 0x12e33c5e */
  if (!C.zf) goto L_12e33c5e;
  /* 12e33c5d int3  */
  x86_unimpl("int3 @ 0x12e33c5d");
L_12e33c5e:;
  /* 12e33c5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e33c60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e33c62 jne 0x12e33c32 */
  if (!C.zf) goto L_12e33c32;
  /* 12e33c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33c67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e33c69 mov dword ptr [0x12e5e4dc], ecx */
  w32((uint32_t)(0x12e5e4dc), (ECX));
L_12e33c6f:;
  /* 12e33c6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33c72 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e33c75 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33c78 push eax */
  push32((uint32_t)(EAX));
  /* 12e33c79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e33c7b mov cl, byte ptr [0x12e5ca91] */
  CL = (r8((uint32_t)(0x12e5ca91)));
  /* 12e33c81 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33c85 push edx */
  push32((uint32_t)(EDX));
  /* 12e33c86 call 0x12e36b90 */
  push32(0x12e33c8bu); f_12e36b90();
  /* 12e33c8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33c8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33c91 push eax */
  push32((uint32_t)(EAX));
  /* 12e33c92 call 0x12e36f90 */
  push32(0x12e33c97u); f_12e36f90();
  /* 12e33c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33c9a jmp 0x12e33cc5 */
  goto L_12e33cc5;
L_12e33c9c:;
  /* 12e33c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33c9f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12e33ca6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33ca9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e33cac push eax */
  push32((uint32_t)(EAX));
  /* 12e33cad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e33caf mov cl, byte ptr [0x12e5ca91] */
  CL = (r8((uint32_t)(0x12e5ca91)));
  /* 12e33cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33cb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33cb9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33cbc push edx */
  push32((uint32_t)(EDX));
  /* 12e33cbd call 0x12e36b90 */
  push32(0x12e33cc2u); f_12e36b90();
  /* 12e33cc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e33cc5:;
  /* 12e33cc5 pop edi */
  EDI = (pop32());
  /* 12e33cc6 pop esi */
  ESI = (pop32());
  /* 12e33cc7 pop ebx */
  EBX = (pop32());
  /* 12e33cc8 mov esp, ebp */
  ESP = (EBP);
  /* 12e33cca pop ebp */
  EBP = (pop32());
  /* 12e33ccb ret  */
  ESPCHK(0x12e338e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd0 @ 0x12e33cd0 (19 bytes, 9 insns) */
void f_12e33cd0(void) {
  FTRACE(0x12e33cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12e33cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e33cd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33cd8 push eax */
  push32((uint32_t)(EAX));
  /* 12e33cd9 call 0x12e33cf0 */
  push32(0x12e33cdeu); f_12e33cf0();
  /* 12e33cde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33ce1 pop ebp */
  EBP = (pop32());
  /* 12e33ce2 ret  */
  ESPCHK(0x12e33cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cf0 @ 0x12e33cf0 (342 bytes, 119 insns) */
void f_12e33cf0(void) {
  FTRACE(0x12e33cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12e33cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e33cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e33cf7 push esi */
  push32((uint32_t)(ESI));
  /* 12e33cf8 push edi */
  push32((uint32_t)(EDI));
  /* 12e33cf9 mov eax, dword ptr [0x12e5ca84] */
  EAX = (r32((uint32_t)(0x12e5ca84)));
  /* 12e33cfe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e33d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33d03 je 0x12e33d35 */
  if (C.zf) goto L_12e33d35;
L_12e33d05:;
  /* 12e33d05 call 0x12e33fc0 */
  push32(0x12e33d0au); f_12e33fc0();
  /* 12e33d0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33d0c jne 0x12e33d2f */
  if (!C.zf) goto L_12e33d2f;
  /* 12e33d0e push 0x12e594a8 */
  push32((uint32_t)(0x12e594a8u));
  /* 12e33d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33d15 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12e33d1a push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e33d1f push 2 */
  push32((uint32_t)(0x2u));
  /* 12e33d21 call 0x12e31ee0 */
  push32(0x12e33d26u); f_12e31ee0();
  /* 12e33d26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33d29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33d2c jne 0x12e33d2f */
  if (!C.zf) goto L_12e33d2f;
  /* 12e33d2e int3  */
  x86_unimpl("int3 @ 0x12e33d2e");
L_12e33d2f:;
  /* 12e33d2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e33d31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e33d33 jne 0x12e33d05 */
  if (!C.zf) goto L_12e33d05;
L_12e33d35:;
  /* 12e33d35 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e33d37 call 0x12e36820 */
  push32(0x12e33d3cu); f_12e36820();
  /* 12e33d3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e33d3f:;
  /* 12e33d3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33d42 push edx */
  push32((uint32_t)(EDX));
  /* 12e33d43 call 0x12e34420 */
  push32(0x12e33d48u); f_12e34420();
  /* 12e33d48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33d4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33d4d jne 0x12e33d70 */
  if (!C.zf) goto L_12e33d70;
  /* 12e33d4f push 0x12e595ac */
  push32((uint32_t)(0x12e595acu));
  /* 12e33d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33d56 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12e33d5b push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e33d60 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e33d62 call 0x12e31ee0 */
  push32(0x12e33d67u); f_12e31ee0();
  /* 12e33d67 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33d6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33d6d jne 0x12e33d70 */
  if (!C.zf) goto L_12e33d70;
  /* 12e33d6f int3  */
  x86_unimpl("int3 @ 0x12e33d6f");
L_12e33d70:;
  /* 12e33d70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e33d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33d74 jne 0x12e33d3f */
  if (!C.zf) goto L_12e33d3f;
  /* 12e33d76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33d79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e33d7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e33d7f:;
  /* 12e33d7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e33d82 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e33d85 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e33d8a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33d8d je 0x12e33dd2 */
  if (C.zf) goto L_12e33dd2;
  /* 12e33d8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e33d92 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33d96 je 0x12e33dd2 */
  if (C.zf) goto L_12e33dd2;
  /* 12e33d98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e33d9b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e33d9e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e33da3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33da6 je 0x12e33dd2 */
  if (C.zf) goto L_12e33dd2;
  /* 12e33da8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e33dab cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33daf je 0x12e33dd2 */
  if (C.zf) goto L_12e33dd2;
  /* 12e33db1 push 0x12e59744 */
  push32((uint32_t)(0x12e59744u));
  /* 12e33db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33db8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12e33dbd push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e33dc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e33dc4 call 0x12e31ee0 */
  push32(0x12e33dc9u); f_12e31ee0();
  /* 12e33dc9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33dcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33dcf jne 0x12e33dd2 */
  if (!C.zf) goto L_12e33dd2;
  /* 12e33dd1 int3  */
  x86_unimpl("int3 @ 0x12e33dd1");
L_12e33dd2:;
  /* 12e33dd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e33dd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e33dd6 jne 0x12e33d7f */
  if (!C.zf) goto L_12e33d7f;
  /* 12e33dd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e33ddb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33ddf jne 0x12e33dee */
  if (!C.zf) goto L_12e33dee;
  /* 12e33de1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33de5 jne 0x12e33dee */
  if (!C.zf) goto L_12e33dee;
  /* 12e33de7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12e33dee:;
  /* 12e33dee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e33df1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33df5 je 0x12e33e29 */
  if (C.zf) goto L_12e33e29;
L_12e33df7:;
  /* 12e33df7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e33dfa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e33dfd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33e00 je 0x12e33e23 */
  if (C.zf) goto L_12e33e23;
  /* 12e33e02 push 0x12e5968c */
  push32((uint32_t)(0x12e5968cu));
  /* 12e33e07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33e09 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12e33e0e push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e33e13 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e33e15 call 0x12e31ee0 */
  push32(0x12e33e1au); f_12e31ee0();
  /* 12e33e1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33e1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33e20 jne 0x12e33e23 */
  if (!C.zf) goto L_12e33e23;
  /* 12e33e22 int3  */
  x86_unimpl("int3 @ 0x12e33e22");
L_12e33e23:;
  /* 12e33e23 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e33e25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e33e27 jne 0x12e33df7 */
  if (!C.zf) goto L_12e33df7;
L_12e33e29:;
  /* 12e33e29 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e33e2c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e33e2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e33e32 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e33e34 call 0x12e368c0 */
  push32(0x12e33e39u); f_12e368c0();
  /* 12e33e39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33e3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33e3f pop edi */
  EDI = (pop32());
  /* 12e33e40 pop esi */
  ESI = (pop32());
  /* 12e33e41 pop ebx */
  EBX = (pop32());
  /* 12e33e42 mov esp, ebp */
  ESP = (EBP);
  /* 12e33e44 pop ebp */
  EBP = (pop32());
  /* 12e33e45 ret  */
  ESPCHK(0x12e33cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e50 @ 0x12e33e50 (28 bytes, 11 insns) */
void f_12e33e50(void) {
  FTRACE(0x12e33e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33e51 mov ebp, esp */
  EBP = (ESP);
  /* 12e33e53 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33e54 mov eax, dword ptr [0x12e5ca8c] */
  EAX = (r32((uint32_t)(0x12e5ca8c)));
  /* 12e33e59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e33e5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33e5f mov dword ptr [0x12e5ca8c], ecx */
  w32((uint32_t)(0x12e5ca8c), (ECX));
  /* 12e33e65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33e68 mov esp, ebp */
  ESP = (EBP);
  /* 12e33e6a pop ebp */
  EBP = (pop32());
  /* 12e33e6b ret  */
  ESPCHK(0x12e33e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e70 @ 0x12e33e70 (157 bytes, 59 insns) */
void f_12e33e70(void) {
  FTRACE(0x12e33e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33e71 mov ebp, esp */
  EBP = (ESP);
  /* 12e33e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33e74 push ebx */
  push32((uint32_t)(EBX));
  /* 12e33e75 push esi */
  push32((uint32_t)(ESI));
  /* 12e33e76 push edi */
  push32((uint32_t)(EDI));
  /* 12e33e77 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e33e79 call 0x12e36820 */
  push32(0x12e33e7eu); f_12e36820();
  /* 12e33e7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33e81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33e84 push eax */
  push32((uint32_t)(EAX));
  /* 12e33e85 call 0x12e34420 */
  push32(0x12e33e8au); f_12e34420();
  /* 12e33e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33e8f je 0x12e33efc */
  if (C.zf) goto L_12e33efc;
  /* 12e33e91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33e94 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e33e97 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e33e9a:;
  /* 12e33e9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33e9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e33ea0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e33ea5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33ea8 je 0x12e33eed */
  if (C.zf) goto L_12e33eed;
  /* 12e33eaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33ead cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33eb1 je 0x12e33eed */
  if (C.zf) goto L_12e33eed;
  /* 12e33eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33eb6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e33eb9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e33ebe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33ec1 je 0x12e33eed */
  if (C.zf) goto L_12e33eed;
  /* 12e33ec3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33ec6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33eca je 0x12e33eed */
  if (C.zf) goto L_12e33eed;
  /* 12e33ecc push 0x12e59744 */
  push32((uint32_t)(0x12e59744u));
  /* 12e33ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33ed3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12e33ed8 push 0x12e5949c */
  push32((uint32_t)(0x12e5949cu));
  /* 12e33edd push 2 */
  push32((uint32_t)(0x2u));
  /* 12e33edf call 0x12e31ee0 */
  push32(0x12e33ee4u); f_12e31ee0();
  /* 12e33ee4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33ee7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33eea jne 0x12e33eed */
  if (!C.zf) goto L_12e33eed;
  /* 12e33eec int3  */
  x86_unimpl("int3 @ 0x12e33eec");
L_12e33eed:;
  /* 12e33eed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e33eef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e33ef1 jne 0x12e33e9a */
  if (!C.zf) goto L_12e33e9a;
  /* 12e33ef3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33ef6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e33ef9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12e33efc:;
  /* 12e33efc push 9 */
  push32((uint32_t)(0x9u));
  /* 12e33efe call 0x12e368c0 */
  push32(0x12e33f03u); f_12e368c0();
  /* 12e33f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33f06 pop edi */
  EDI = (pop32());
  /* 12e33f07 pop esi */
  ESI = (pop32());
  /* 12e33f08 pop ebx */
  EBX = (pop32());
  /* 12e33f09 mov esp, ebp */
  ESP = (EBP);
  /* 12e33f0b pop ebp */
  EBP = (pop32());
  /* 12e33f0c ret  */
  ESPCHK(0x12e33e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f10 @ 0x12e33f10 (28 bytes, 11 insns) */
void f_12e33f10(void) {
  FTRACE(0x12e33f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33f11 mov ebp, esp */
  EBP = (ESP);
  /* 12e33f13 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33f14 mov eax, dword ptr [0x12e5cc90] */
  EAX = (r32((uint32_t)(0x12e5cc90)));
  /* 12e33f19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e33f1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33f1f mov dword ptr [0x12e5cc90], ecx */
  w32((uint32_t)(0x12e5cc90), (ECX));
  /* 12e33f25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33f28 mov esp, ebp */
  ESP = (EBP);
  /* 12e33f2a pop ebp */
  EBP = (pop32());
  /* 12e33f2b ret  */
  ESPCHK(0x12e33f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f30 @ 0x12e33f30 (136 bytes, 55 insns) */
void f_12e33f30(void) {
  FTRACE(0x12e33f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33f31 mov ebp, esp */
  EBP = (ESP);
  /* 12e33f33 push ecx */
  push32((uint32_t)(ECX));
  /* 12e33f34 push ebx */
  push32((uint32_t)(EBX));
  /* 12e33f35 push esi */
  push32((uint32_t)(ESI));
  /* 12e33f36 push edi */
  push32((uint32_t)(EDI));
  /* 12e33f37 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12e33f3e:;
  /* 12e33f3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e33f41 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e33f44 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e33f47 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e33f4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33f4c je 0x12e33fae */
  if (C.zf) goto L_12e33fae;
  /* 12e33f4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33f51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e33f53 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e33f55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e33f58 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e33f5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33f61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33f64 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e33f67 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33f69 je 0x12e33fac */
  if (C.zf) goto L_12e33fac;
L_12e33f6b:;
  /* 12e33f6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e33f6e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e33f73 push eax */
  push32((uint32_t)(EAX));
  /* 12e33f74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33f77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e33f79 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12e33f7c push edx */
  push32((uint32_t)(EDX));
  /* 12e33f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e33f80 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e33f83 push eax */
  push32((uint32_t)(EAX));
  /* 12e33f84 push 0x12e59788 */
  push32((uint32_t)(0x12e59788u));
  /* 12e33f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e33f91 call 0x12e31ee0 */
  push32(0x12e33f96u); f_12e31ee0();
  /* 12e33f96 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33f99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33f9c jne 0x12e33f9f */
  if (!C.zf) goto L_12e33f9f;
  /* 12e33f9e int3  */
  x86_unimpl("int3 @ 0x12e33f9e");
L_12e33f9f:;
  /* 12e33f9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e33fa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e33fa3 jne 0x12e33f6b */
  if (!C.zf) goto L_12e33f6b;
  /* 12e33fa5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e33fac:;
  /* 12e33fac jmp 0x12e33f3e */
  goto L_12e33f3e;
L_12e33fae:;
  /* 12e33fae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e33fb1 pop edi */
  EDI = (pop32());
  /* 12e33fb2 pop esi */
  ESI = (pop32());
  /* 12e33fb3 pop ebx */
  EBX = (pop32());
  /* 12e33fb4 mov esp, ebp */
  ESP = (EBP);
  /* 12e33fb6 pop ebp */
  EBP = (pop32());
  /* 12e33fb7 ret  */
  ESPCHK(0x12e33f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fc0 @ 0x12e33fc0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12e33fc0(void) {
  FTRACE(0x12e33fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e33fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e33fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12e33fc3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e33fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e33fc7 push esi */
  push32((uint32_t)(ESI));
  /* 12e33fc8 push edi */
  push32((uint32_t)(EDI));
  /* 12e33fc9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e33fd0 mov eax, dword ptr [0x12e5ca84] */
  EAX = (r32((uint32_t)(0x12e5ca84)));
  /* 12e33fd5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12e33fd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e33fda jne 0x12e33fe6 */
  if (!C.zf) goto L_12e33fe6;
  /* 12e33fdc mov eax, 1 */
  EAX = (0x1u);
  /* 12e33fe1 jmp 0x12e34318 */
  goto L_12e34318;
L_12e33fe6:;
  /* 12e33fe6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e33fe8 call 0x12e36820 */
  push32(0x12e33fedu); f_12e36820();
  /* 12e33fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e33ff0 call 0x12e37000 */
  push32(0x12e33ff5u); f_12e37000();
  /* 12e33ff5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e33ff8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e33ffc je 0x12e34109 */
  if (C.zf) goto L_12e34109;
  /* 12e34002 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34006 je 0x12e34109 */
  if (C.zf) goto L_12e34109;
  /* 12e3400c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3400f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e34012 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e34015 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34018 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e3401b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3401f ja 0x12e340d2 */
  if ((!C.cf&&!C.zf)) goto L_12e340d2;
  /* 12e34025 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e34028 jmp dword ptr [eax*4 + 0x12e3431f] */
  switch (EAX) {
    case 0: goto L_12e340aa;
    case 1: goto L_12e34082;
    case 2: goto L_12e3405a;
    case 3: goto L_12e3402f;
    default: x86_unimpl("switch@0x12e34028 out of table"); return;
  }
L_12e3402f:;
  /* 12e3402f push 0x12e598dc */
  push32((uint32_t)(0x12e598dcu));
  /* 12e34034 push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e34039 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3403b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3403d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3403f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34041 call 0x12e31ee0 */
  push32(0x12e34046u); f_12e31ee0();
  /* 12e34046 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34049 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3404c jne 0x12e3404f */
  if (!C.zf) goto L_12e3404f;
  /* 12e3404e int3  */
  x86_unimpl("int3 @ 0x12e3404e");
L_12e3404f:;
  /* 12e3404f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e34051 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e34053 jne 0x12e3402f */
  if (!C.zf) goto L_12e3402f;
  /* 12e34055 jmp 0x12e340f8 */
  goto L_12e340f8;
L_12e3405a:;
  /* 12e3405a push 0x12e598b8 */
  push32((uint32_t)(0x12e598b8u));
  /* 12e3405f push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e34064 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34066 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34068 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3406a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3406c call 0x12e31ee0 */
  push32(0x12e34071u); f_12e31ee0();
  /* 12e34071 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34074 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34077 jne 0x12e3407a */
  if (!C.zf) goto L_12e3407a;
  /* 12e34079 int3  */
  x86_unimpl("int3 @ 0x12e34079");
L_12e3407a:;
  /* 12e3407a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3407c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3407e jne 0x12e3405a */
  if (!C.zf) goto L_12e3405a;
  /* 12e34080 jmp 0x12e340f8 */
  goto L_12e340f8;
L_12e34082:;
  /* 12e34082 push 0x12e59894 */
  push32((uint32_t)(0x12e59894u));
  /* 12e34087 push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e3408c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3408e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34090 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34092 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34094 call 0x12e31ee0 */
  push32(0x12e34099u); f_12e31ee0();
  /* 12e34099 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3409c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3409f jne 0x12e340a2 */
  if (!C.zf) goto L_12e340a2;
  /* 12e340a1 int3  */
  x86_unimpl("int3 @ 0x12e340a1");
L_12e340a2:;
  /* 12e340a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e340a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e340a6 jne 0x12e34082 */
  if (!C.zf) goto L_12e34082;
  /* 12e340a8 jmp 0x12e340f8 */
  goto L_12e340f8;
L_12e340aa:;
  /* 12e340aa push 0x12e59870 */
  push32((uint32_t)(0x12e59870u));
  /* 12e340af push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e340b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e340b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e340b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e340ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12e340bc call 0x12e31ee0 */
  push32(0x12e340c1u); f_12e31ee0();
  /* 12e340c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e340c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e340c7 jne 0x12e340ca */
  if (!C.zf) goto L_12e340ca;
  /* 12e340c9 int3  */
  x86_unimpl("int3 @ 0x12e340c9");
L_12e340ca:;
  /* 12e340ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e340cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e340ce jne 0x12e340aa */
  if (!C.zf) goto L_12e340aa;
  /* 12e340d0 jmp 0x12e340f8 */
  goto L_12e340f8;
L_12e340d2:;
  /* 12e340d2 push 0x12e59844 */
  push32((uint32_t)(0x12e59844u));
  /* 12e340d7 push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e340dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e340de push 0 */
  push32((uint32_t)(0x0u));
  /* 12e340e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e340e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e340e4 call 0x12e31ee0 */
  push32(0x12e340e9u); f_12e31ee0();
  /* 12e340e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e340ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e340ef jne 0x12e340f2 */
  if (!C.zf) goto L_12e340f2;
  /* 12e340f1 int3  */
  x86_unimpl("int3 @ 0x12e340f1");
L_12e340f2:;
  /* 12e340f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e340f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e340f6 jne 0x12e340d2 */
  if (!C.zf) goto L_12e340d2;
L_12e340f8:;
  /* 12e340f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e340fa call 0x12e368c0 */
  push32(0x12e340ffu); f_12e368c0();
  /* 12e340ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34102 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e34104 jmp 0x12e34318 */
  goto L_12e34318;
L_12e34109:;
  /* 12e34109 mov eax, dword ptr [0x12e5e4dc] */
  EAX = (r32((uint32_t)(0x12e5e4dc)));
  /* 12e3410e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e34111 jmp 0x12e3411b */
  goto L_12e3411b;
L_12e34113:;
  /* 12e34113 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34116 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e34118 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e3411b:;
  /* 12e3411b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3411f je 0x12e3430b */
  if (C.zf) goto L_12e3430b;
  /* 12e34125 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12e3412c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3412f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e34132 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e34138 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3413b je 0x12e34160 */
  if (C.zf) goto L_12e34160;
  /* 12e3413d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34140 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34144 je 0x12e34160 */
  if (C.zf) goto L_12e34160;
  /* 12e34146 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34149 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e3414c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e34152 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34155 je 0x12e34160 */
  if (C.zf) goto L_12e34160;
  /* 12e34157 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3415a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3415e jne 0x12e34178 */
  if (!C.zf) goto L_12e34178;
L_12e34160:;
  /* 12e34160 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34163 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e34166 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3416c mov edx, dword ptr [ecx*4 + 0x12e5ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e5ca94)));
  /* 12e34173 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e34176 jmp 0x12e3417f */
  goto L_12e3417f;
L_12e34178:;
  /* 12e34178 mov dword ptr [ebp - 0x14], 0x12e5983c */
  w32((uint32_t)(EBP + -0x14), (0x12e5983cu));
L_12e3417f:;
  /* 12e3417f push 4 */
  push32((uint32_t)(0x4u));
  /* 12e34181 mov al, byte ptr [0x12e5ca90] */
  AL = (r8((uint32_t)(0x12e5ca90)));
  /* 12e34186 push eax */
  push32((uint32_t)(EAX));
  /* 12e34187 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3418a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3418d push ecx */
  push32((uint32_t)(ECX));
  /* 12e3418e call 0x12e33f30 */
  push32(0x12e34193u); f_12e33f30();
  /* 12e34193 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e34198 jne 0x12e341d4 */
  if (!C.zf) goto L_12e341d4;
L_12e3419a:;
  /* 12e3419a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3419d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e341a0 push edx */
  push32((uint32_t)(EDX));
  /* 12e341a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e341a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12e341a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e341a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e341ab push edx */
  push32((uint32_t)(EDX));
  /* 12e341ac push 0x12e59718 */
  push32((uint32_t)(0x12e59718u));
  /* 12e341b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e341b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e341b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e341b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e341b9 call 0x12e31ee0 */
  push32(0x12e341beu); f_12e31ee0();
  /* 12e341be add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e341c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e341c4 jne 0x12e341c7 */
  if (!C.zf) goto L_12e341c7;
  /* 12e341c6 int3  */
  x86_unimpl("int3 @ 0x12e341c6");
L_12e341c7:;
  /* 12e341c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e341c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e341cb jne 0x12e3419a */
  if (!C.zf) goto L_12e3419a;
  /* 12e341cd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12e341d4:;
  /* 12e341d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e341d6 mov cl, byte ptr [0x12e5ca90] */
  CL = (r8((uint32_t)(0x12e5ca90)));
  /* 12e341dc push ecx */
  push32((uint32_t)(ECX));
  /* 12e341dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e341e0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e341e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e341e6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12e341ea push edx */
  push32((uint32_t)(EDX));
  /* 12e341eb call 0x12e33f30 */
  push32(0x12e341f0u); f_12e33f30();
  /* 12e341f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e341f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e341f5 jne 0x12e34231 */
  if (!C.zf) goto L_12e34231;
L_12e341f7:;
  /* 12e341f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e341fa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e341fd push eax */
  push32((uint32_t)(EAX));
  /* 12e341fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34201 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e34204 push edx */
  push32((uint32_t)(EDX));
  /* 12e34205 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e34208 push eax */
  push32((uint32_t)(EAX));
  /* 12e34209 push 0x12e596ec */
  push32((uint32_t)(0x12e596ecu));
  /* 12e3420e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34210 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34212 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34214 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34216 call 0x12e31ee0 */
  push32(0x12e3421bu); f_12e31ee0();
  /* 12e3421b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3421e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34221 jne 0x12e34224 */
  if (!C.zf) goto L_12e34224;
  /* 12e34223 int3  */
  x86_unimpl("int3 @ 0x12e34223");
L_12e34224:;
  /* 12e34224 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e34226 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e34228 jne 0x12e341f7 */
  if (!C.zf) goto L_12e341f7;
  /* 12e3422a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12e34231:;
  /* 12e34231 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34234 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34238 jne 0x12e3428a */
  if (!C.zf) goto L_12e3428a;
  /* 12e3423a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3423d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e34240 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34241 mov dl, byte ptr [0x12e5ca91] */
  DL = (r8((uint32_t)(0x12e5ca91)));
  /* 12e34247 push edx */
  push32((uint32_t)(EDX));
  /* 12e34248 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3424b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3424e push eax */
  push32((uint32_t)(EAX));
  /* 12e3424f call 0x12e33f30 */
  push32(0x12e34254u); f_12e33f30();
  /* 12e34254 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e34259 jne 0x12e3428a */
  if (!C.zf) goto L_12e3428a;
L_12e3425b:;
  /* 12e3425b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3425e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34261 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34262 push 0x12e59810 */
  push32((uint32_t)(0x12e59810u));
  /* 12e34267 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34269 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3426b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3426d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3426f call 0x12e31ee0 */
  push32(0x12e34274u); f_12e31ee0();
  /* 12e34274 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34277 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3427a jne 0x12e3427d */
  if (!C.zf) goto L_12e3427d;
  /* 12e3427c int3  */
  x86_unimpl("int3 @ 0x12e3427c");
L_12e3427d:;
  /* 12e3427d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3427f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e34281 jne 0x12e3425b */
  if (!C.zf) goto L_12e3425b;
  /* 12e34283 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12e3428a:;
  /* 12e3428a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3428e jne 0x12e34306 */
  if (!C.zf) goto L_12e34306;
  /* 12e34290 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34293 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34297 je 0x12e342cc */
  if (C.zf) goto L_12e342cc;
L_12e34299:;
  /* 12e34299 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3429c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e3429f push edx */
  push32((uint32_t)(EDX));
  /* 12e342a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e342a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e342a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e342a7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e342aa push edx */
  push32((uint32_t)(EDX));
  /* 12e342ab push 0x12e597f0 */
  push32((uint32_t)(0x12e597f0u));
  /* 12e342b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e342b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e342b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e342b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e342b8 call 0x12e31ee0 */
  push32(0x12e342bdu); f_12e31ee0();
  /* 12e342bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e342c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e342c3 jne 0x12e342c6 */
  if (!C.zf) goto L_12e342c6;
  /* 12e342c5 int3  */
  x86_unimpl("int3 @ 0x12e342c5");
L_12e342c6:;
  /* 12e342c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e342c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e342ca jne 0x12e34299 */
  if (!C.zf) goto L_12e34299;
L_12e342cc:;
  /* 12e342cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e342cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e342d2 push edx */
  push32((uint32_t)(EDX));
  /* 12e342d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e342d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e342d9 push eax */
  push32((uint32_t)(EAX));
  /* 12e342da mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e342dd push ecx */
  push32((uint32_t)(ECX));
  /* 12e342de push 0x12e597c4 */
  push32((uint32_t)(0x12e597c4u));
  /* 12e342e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e342e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e342e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e342e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e342eb call 0x12e31ee0 */
  push32(0x12e342f0u); f_12e31ee0();
  /* 12e342f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e342f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e342f6 jne 0x12e342f9 */
  if (!C.zf) goto L_12e342f9;
  /* 12e342f8 int3  */
  x86_unimpl("int3 @ 0x12e342f8");
L_12e342f9:;
  /* 12e342f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e342fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e342fd jne 0x12e342cc */
  if (!C.zf) goto L_12e342cc;
  /* 12e342ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e34306:;
  /* 12e34306 jmp 0x12e34113 */
  goto L_12e34113;
L_12e3430b:;
  /* 12e3430b push 9 */
  push32((uint32_t)(0x9u));
  /* 12e3430d call 0x12e368c0 */
  push32(0x12e34312u); f_12e368c0();
  /* 12e34312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e34318:;
  /* 12e34318 pop edi */
  EDI = (pop32());
  /* 12e34319 pop esi */
  ESI = (pop32());
  /* 12e3431a pop ebx */
  EBX = (pop32());
  /* 12e3431b mov esp, ebp */
  ESP = (EBP);
  /* 12e3431d pop ebp */
  EBP = (pop32());
  /* 12e3431e ret  */
  ESPCHK(0x12e33fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004330 @ 0x12e34330 (34 bytes, 13 insns) */
void f_12e34330(void) {
  FTRACE(0x12e34330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e34330 push ebp */
  push32((uint32_t)(EBP));
  /* 12e34331 mov ebp, esp */
  EBP = (ESP);
  /* 12e34333 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34334 mov eax, dword ptr [0x12e5ca84] */
  EAX = (r32((uint32_t)(0x12e5ca84)));
  /* 12e34339 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3433c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34340 je 0x12e3434b */
  if (C.zf) goto L_12e3434b;
  /* 12e34342 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34345 mov dword ptr [0x12e5ca84], ecx */
  w32((uint32_t)(0x12e5ca84), (ECX));
L_12e3434b:;
  /* 12e3434b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3434e mov esp, ebp */
  ESP = (EBP);
  /* 12e34350 pop ebp */
  EBP = (pop32());
  /* 12e34351 ret  */
  ESPCHK(0x12e34330u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x12e34360 (103 bytes, 38 insns) */
void f_12e34360(void) {
  FTRACE(0x12e34360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e34360 push ebp */
  push32((uint32_t)(EBP));
  /* 12e34361 mov ebp, esp */
  EBP = (ESP);
  /* 12e34363 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34364 mov eax, dword ptr [0x12e5ca84] */
  EAX = (r32((uint32_t)(0x12e5ca84)));
  /* 12e34369 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3436c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3436e jne 0x12e34372 */
  if (!C.zf) goto L_12e34372;
  /* 12e34370 jmp 0x12e343c3 */
  goto L_12e343c3;
L_12e34372:;
  /* 12e34372 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e34374 call 0x12e36820 */
  push32(0x12e34379u); f_12e36820();
  /* 12e34379 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3437c mov ecx, dword ptr [0x12e5e4dc] */
  ECX = (r32((uint32_t)(0x12e5e4dc)));
  /* 12e34382 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e34385 jmp 0x12e3438f */
  goto L_12e3438f;
L_12e34387:;
  /* 12e34387 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3438a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e3438c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e3438f:;
  /* 12e3438f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34393 je 0x12e343b9 */
  if (C.zf) goto L_12e343b9;
  /* 12e34395 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34398 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e3439b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e343a1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e343a4 jne 0x12e343b7 */
  if (!C.zf) goto L_12e343b7;
  /* 12e343a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e343a9 push eax */
  push32((uint32_t)(EAX));
  /* 12e343aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e343ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e343b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e343b1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12e343b4u);
  /* 12e343b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e343b7:;
  /* 12e343b7 jmp 0x12e34387 */
  goto L_12e34387;
L_12e343b9:;
  /* 12e343b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e343bb call 0x12e368c0 */
  push32(0x12e343c0u); f_12e368c0();
  /* 12e343c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e343c3:;
  /* 12e343c3 mov esp, ebp */
  ESP = (EBP);
  /* 12e343c5 pop ebp */
  EBP = (pop32());
  /* 12e343c6 ret  */
  ESPCHK(0x12e34360u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12e343d0 (75 bytes, 28 insns) */
void f_12e343d0(void) {
  FTRACE(0x12e343d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e343d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e343d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e343d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e343d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e343d8 je 0x12e3440d */
  if (C.zf) goto L_12e3440d;
  /* 12e343da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e343dd push eax */
  push32((uint32_t)(EAX));
  /* 12e343de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e343e1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e343e2 call dword ptr [0x12e6023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6023c))), 0x12e343e8u);
  /* 12e343e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e343ea jne 0x12e3440d */
  if (!C.zf) goto L_12e3440d;
  /* 12e343ec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e343f0 je 0x12e34404 */
  if (C.zf) goto L_12e34404;
  /* 12e343f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e343f5 push edx */
  push32((uint32_t)(EDX));
  /* 12e343f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e343f9 push eax */
  push32((uint32_t)(EAX));
  /* 12e343fa call dword ptr [0x12e602e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602e8))), 0x12e34400u);
  /* 12e34400 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e34402 jne 0x12e3440d */
  if (!C.zf) goto L_12e3440d;
L_12e34404:;
  /* 12e34404 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e3440b jmp 0x12e34414 */
  goto L_12e34414;
L_12e3440d:;
  /* 12e3440d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e34414:;
  /* 12e34414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34417 mov esp, ebp */
  ESP = (EBP);
  /* 12e34419 pop ebp */
  EBP = (pop32());
  /* 12e3441a ret  */
  ESPCHK(0x12e343d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004420 @ 0x12e34420 (134 bytes, 50 insns) */
void f_12e34420(void) {
  FTRACE(0x12e34420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e34420 push ebp */
  push32((uint32_t)(EBP));
  /* 12e34421 mov ebp, esp */
  EBP = (ESP);
  /* 12e34423 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34424 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34428 jne 0x12e3442e */
  if (!C.zf) goto L_12e3442e;
  /* 12e3442a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3442c jmp 0x12e344a2 */
  goto L_12e344a2;
L_12e3442e:;
  /* 12e3442e push 1 */
  push32((uint32_t)(0x1u));
  /* 12e34430 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12e34432 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34435 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e34438 push eax */
  push32((uint32_t)(EAX));
  /* 12e34439 call 0x12e343d0 */
  push32(0x12e3443eu); f_12e343d0();
  /* 12e3443e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e34443 jne 0x12e34449 */
  if (!C.zf) goto L_12e34449;
  /* 12e34445 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e34447 jmp 0x12e344a2 */
  goto L_12e344a2;
L_12e34449:;
  /* 12e34449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3444c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3444f push ecx */
  push32((uint32_t)(ECX));
  /* 12e34450 call 0x12e37120 */
  push32(0x12e34455u); f_12e37120();
  /* 12e34455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34458 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3445b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3445f je 0x12e34476 */
  if (C.zf) goto L_12e34476;
  /* 12e34461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34464 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e34467 push edx */
  push32((uint32_t)(EDX));
  /* 12e34468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3446b push eax */
  push32((uint32_t)(EAX));
  /* 12e3446c call 0x12e37180 */
  push32(0x12e34471u); f_12e37180();
  /* 12e34471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34474 jmp 0x12e344a2 */
  goto L_12e344a2;
L_12e34476:;
  /* 12e34476 mov ecx, dword ptr [0x12e5e490] */
  ECX = (r32((uint32_t)(0x12e5e490)));
  /* 12e3447c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12e34482 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e34484 je 0x12e3448d */
  if (C.zf) goto L_12e3448d;
  /* 12e34486 mov eax, 1 */
  EAX = (0x1u);
  /* 12e3448b jmp 0x12e344a2 */
  goto L_12e344a2;
L_12e3448d:;
  /* 12e3448d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34490 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e34493 push edx */
  push32((uint32_t)(EDX));
  /* 12e34494 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34496 mov eax, dword ptr [0x12e5fe2c] */
  EAX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e3449b push eax */
  push32((uint32_t)(EAX));
  /* 12e3449c call dword ptr [0x12e60240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60240))), 0x12e344a2u);
L_12e344a2:;
  /* 12e344a2 mov esp, ebp */
  ESP = (EBP);
  /* 12e344a4 pop ebp */
  EBP = (pop32());
  /* 12e344a5 ret  */
  ESPCHK(0x12e34420u, _esp0);
  ESP += 4; return;
}

/* FUN_100044b0 @ 0x12e344b0 (227 bytes, 80 insns) */
void f_12e344b0(void) {
  FTRACE(0x12e344b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e344b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e344b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e344b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e344b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e344b7 push eax */
  push32((uint32_t)(EAX));
  /* 12e344b8 call 0x12e34420 */
  push32(0x12e344bdu); f_12e34420();
  /* 12e344bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e344c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e344c2 jne 0x12e344cb */
  if (!C.zf) goto L_12e344cb;
  /* 12e344c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e344c6 jmp 0x12e3458f */
  goto L_12e3458f;
L_12e344cb:;
  /* 12e344cb push 9 */
  push32((uint32_t)(0x9u));
  /* 12e344cd call 0x12e36820 */
  push32(0x12e344d2u); f_12e36820();
  /* 12e344d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e344d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e344d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e344db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e344de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e344e1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e344e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e344e9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e344ec je 0x12e34510 */
  if (C.zf) goto L_12e34510;
  /* 12e344ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e344f1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e344f5 je 0x12e34510 */
  if (C.zf) goto L_12e34510;
  /* 12e344f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e344fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e344fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e34502 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34505 je 0x12e34510 */
  if (C.zf) goto L_12e34510;
  /* 12e34507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3450a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3450e jne 0x12e34583 */
  if (!C.zf) goto L_12e34583;
L_12e34510:;
  /* 12e34510 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e34512 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e34515 push edx */
  push32((uint32_t)(EDX));
  /* 12e34516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34519 push eax */
  push32((uint32_t)(EAX));
  /* 12e3451a call 0x12e343d0 */
  push32(0x12e3451fu); f_12e343d0();
  /* 12e3451f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e34524 je 0x12e34583 */
  if (C.zf) goto L_12e34583;
  /* 12e34526 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34529 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e3452c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3452f jne 0x12e34583 */
  if (!C.zf) goto L_12e34583;
  /* 12e34531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34534 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12e34537 cmp ecx, dword ptr [0x12e5ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e5ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3453d jg 0x12e34583 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e34583;
  /* 12e3453f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34543 je 0x12e34550 */
  if (C.zf) goto L_12e34550;
  /* 12e34545 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e34548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3454b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12e3454e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e34550:;
  /* 12e34550 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34554 je 0x12e34561 */
  if (C.zf) goto L_12e34561;
  /* 12e34556 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e34559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3455c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e3455f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e34561:;
  /* 12e34561 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34565 je 0x12e34572 */
  if (C.zf) goto L_12e34572;
  /* 12e34567 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3456a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3456d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e34570 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e34572:;
  /* 12e34572 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e34574 call 0x12e368c0 */
  push32(0x12e34579u); f_12e368c0();
  /* 12e34579 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3457c mov eax, 1 */
  EAX = (0x1u);
  /* 12e34581 jmp 0x12e3458f */
  goto L_12e3458f;
L_12e34583:;
  /* 12e34583 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e34585 call 0x12e368c0 */
  push32(0x12e3458au); f_12e368c0();
  /* 12e3458a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3458d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e3458f:;
  /* 12e3458f mov esp, ebp */
  ESP = (EBP);
  /* 12e34591 pop ebp */
  EBP = (pop32());
  /* 12e34592 ret  */
  ESPCHK(0x12e344b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045a0 @ 0x12e345a0 (28 bytes, 11 insns) */
void f_12e345a0(void) {
  FTRACE(0x12e345a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e345a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e345a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e345a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e345a4 mov eax, dword ptr [0x12e5fe38] */
  EAX = (r32((uint32_t)(0x12e5fe38)));
  /* 12e345a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e345ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e345af mov dword ptr [0x12e5fe38], ecx */
  w32((uint32_t)(0x12e5fe38), (ECX));
  /* 12e345b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e345b8 mov esp, ebp */
  ESP = (EBP);
  /* 12e345ba pop ebp */
  EBP = (pop32());
  /* 12e345bb ret  */
  ESPCHK(0x12e345a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045c0 @ 0x12e345c0 (362 bytes, 116 insns) */
void f_12e345c0(void) {
  FTRACE(0x12e345c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e345c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e345c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e345c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e345c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e345c7 push esi */
  push32((uint32_t)(ESI));
  /* 12e345c8 push edi */
  push32((uint32_t)(EDI));
  /* 12e345c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e345cd jne 0x12e345fa */
  if (!C.zf) goto L_12e345fa;
L_12e345cf:;
  /* 12e345cf push 0x12e59924 */
  push32((uint32_t)(0x12e59924u));
  /* 12e345d4 push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e345d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e345db push 0 */
  push32((uint32_t)(0x0u));
  /* 12e345dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12e345df push 0 */
  push32((uint32_t)(0x0u));
  /* 12e345e1 call 0x12e31ee0 */
  push32(0x12e345e6u); f_12e31ee0();
  /* 12e345e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e345e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e345ec jne 0x12e345ef */
  if (!C.zf) goto L_12e345ef;
  /* 12e345ee int3  */
  x86_unimpl("int3 @ 0x12e345ee");
L_12e345ef:;
  /* 12e345ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e345f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e345f3 jne 0x12e345cf */
  if (!C.zf) goto L_12e345cf;
  /* 12e345f5 jmp 0x12e34723 */
  goto L_12e34723;
L_12e345fa:;
  /* 12e345fa push 9 */
  push32((uint32_t)(0x9u));
  /* 12e345fc call 0x12e36820 */
  push32(0x12e34601u); f_12e36820();
  /* 12e34601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34604 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34607 mov edx, dword ptr [0x12e5e4dc] */
  EDX = (r32((uint32_t)(0x12e5e4dc)));
  /* 12e3460d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e3460f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e34616 jmp 0x12e34621 */
  goto L_12e34621;
L_12e34618:;
  /* 12e34618 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3461b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3461e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e34621:;
  /* 12e34621 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34625 jge 0x12e34645 */
  if ((C.sf==C.of)) goto L_12e34645;
  /* 12e34627 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3462a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3462d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12e34635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34638 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3463b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12e34643 jmp 0x12e34618 */
  goto L_12e34618;
L_12e34645:;
  /* 12e34645 mov edx, dword ptr [0x12e5e4dc] */
  EDX = (r32((uint32_t)(0x12e5e4dc)));
  /* 12e3464b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e3464e jmp 0x12e34658 */
  goto L_12e34658;
L_12e34650:;
  /* 12e34650 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34653 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e34655 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e34658:;
  /* 12e34658 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3465c je 0x12e34701 */
  if (C.zf) goto L_12e34701;
  /* 12e34662 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34665 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e34668 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3466d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3466f jl 0x12e346d7 */
  if ((C.sf!=C.of)) goto L_12e346d7;
  /* 12e34671 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34674 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e34677 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3467d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34680 jge 0x12e346d7 */
  if ((C.sf==C.of)) goto L_12e346d7;
  /* 12e34682 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34685 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e34688 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3468e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34691 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12e34695 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34698 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3469b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e3469e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e346a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e346a7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12e346ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e346ae mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e346b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e346b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e346b9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12e346bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e346c0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e346c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e346c6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e346c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e346ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e346d1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12e346d5 jmp 0x12e346fc */
  goto L_12e346fc;
L_12e346d7:;
  /* 12e346d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e346da push edx */
  push32((uint32_t)(EDX));
  /* 12e346db push 0x12e59900 */
  push32((uint32_t)(0x12e59900u));
  /* 12e346e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e346e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e346e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e346e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e346e8 call 0x12e31ee0 */
  push32(0x12e346edu); f_12e31ee0();
  /* 12e346ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e346f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e346f3 jne 0x12e346f6 */
  if (!C.zf) goto L_12e346f6;
  /* 12e346f5 int3  */
  x86_unimpl("int3 @ 0x12e346f5");
L_12e346f6:;
  /* 12e346f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e346f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e346fa jne 0x12e346d7 */
  if (!C.zf) goto L_12e346d7;
L_12e346fc:;
  /* 12e346fc jmp 0x12e34650 */
  goto L_12e34650;
L_12e34701:;
  /* 12e34701 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34704 mov edx, dword ptr [0x12e5e4e4] */
  EDX = (r32((uint32_t)(0x12e5e4e4)));
  /* 12e3470a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12e3470d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34710 mov ecx, dword ptr [0x12e5e4d8] */
  ECX = (r32((uint32_t)(0x12e5e4d8)));
  /* 12e34716 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12e34719 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e3471b call 0x12e368c0 */
  push32(0x12e34720u); f_12e368c0();
  /* 12e34720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e34723:;
  /* 12e34723 pop edi */
  EDI = (pop32());
  /* 12e34724 pop esi */
  ESI = (pop32());
  /* 12e34725 pop ebx */
  EBX = (pop32());
  /* 12e34726 mov esp, ebp */
  ESP = (EBP);
  /* 12e34728 pop ebp */
  EBP = (pop32());
  /* 12e34729 ret  */
  ESPCHK(0x12e345c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004730 @ 0x12e34730 (291 bytes, 95 insns) */
void f_12e34730(void) {
  FTRACE(0x12e34730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e34730 push ebp */
  push32((uint32_t)(EBP));
  /* 12e34731 mov ebp, esp */
  EBP = (ESP);
  /* 12e34733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e34736 push ebx */
  push32((uint32_t)(EBX));
  /* 12e34737 push esi */
  push32((uint32_t)(ESI));
  /* 12e34738 push edi */
  push32((uint32_t)(EDI));
  /* 12e34739 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e34740 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34744 je 0x12e34752 */
  if (C.zf) goto L_12e34752;
  /* 12e34746 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3474a je 0x12e34752 */
  if (C.zf) goto L_12e34752;
  /* 12e3474c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34750 jne 0x12e34780 */
  if (!C.zf) goto L_12e34780;
L_12e34752:;
  /* 12e34752 push 0x12e5994c */
  push32((uint32_t)(0x12e5994cu));
  /* 12e34757 push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e3475c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3475e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34760 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34762 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34764 call 0x12e31ee0 */
  push32(0x12e34769u); f_12e31ee0();
  /* 12e34769 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3476c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3476f jne 0x12e34772 */
  if (!C.zf) goto L_12e34772;
  /* 12e34771 int3  */
  x86_unimpl("int3 @ 0x12e34771");
L_12e34772:;
  /* 12e34772 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e34774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e34776 jne 0x12e34752 */
  if (!C.zf) goto L_12e34752;
  /* 12e34778 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3477b jmp 0x12e3484c */
  goto L_12e3484c;
L_12e34780:;
  /* 12e34780 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e34787 jmp 0x12e34792 */
  goto L_12e34792;
L_12e34789:;
  /* 12e34789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3478c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3478f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e34792:;
  /* 12e34792 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34796 jge 0x12e3481c */
  if ((C.sf==C.of)) goto L_12e3481c;
  /* 12e3479c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3479f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e347a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e347a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e347a8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12e347ac sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e347b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e347b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e347b6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12e347ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e347bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e347c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e347c3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e347c6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12e347ca sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e347ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e347d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e347d4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12e347d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e347db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e347de cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e347e3 jne 0x12e347f2 */
  if (!C.zf) goto L_12e347f2;
  /* 12e347e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e347e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e347eb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e347f0 je 0x12e34817 */
  if (C.zf) goto L_12e34817;
L_12e347f2:;
  /* 12e347f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e347f6 je 0x12e34817 */
  if (C.zf) goto L_12e34817;
  /* 12e347f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e347fc jne 0x12e34810 */
  if (!C.zf) goto L_12e34810;
  /* 12e347fe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34802 jne 0x12e34817 */
  if (!C.zf) goto L_12e34817;
  /* 12e34804 mov eax, dword ptr [0x12e5ca84] */
  EAX = (r32((uint32_t)(0x12e5ca84)));
  /* 12e34809 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12e3480c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3480e je 0x12e34817 */
  if (C.zf) goto L_12e34817;
L_12e34810:;
  /* 12e34810 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12e34817:;
  /* 12e34817 jmp 0x12e34789 */
  goto L_12e34789;
L_12e3481c:;
  /* 12e3481c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3481f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e34822 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12e34825 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e34828 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3482b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12e3482e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e34831 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e34834 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12e34837 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3483a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3483d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12e34840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34843 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e34849 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e3484c:;
  /* 12e3484c pop edi */
  EDI = (pop32());
  /* 12e3484d pop esi */
  ESI = (pop32());
  /* 12e3484e pop ebx */
  EBX = (pop32());
  /* 12e3484f mov esp, ebp */
  ESP = (EBP);
  /* 12e34851 pop ebp */
  EBP = (pop32());
  /* 12e34852 ret  */
  ESPCHK(0x12e34730u, _esp0);
  ESP += 4; return;
}

/* FUN_10004860 @ 0x12e34860 (697 bytes, 253 insns) */
void f_12e34860(void) {
  FTRACE(0x12e34860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e34860 push ebp */
  push32((uint32_t)(EBP));
  /* 12e34861 mov ebp, esp */
  EBP = (ESP);
  /* 12e34863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e34866 push ebx */
  push32((uint32_t)(EBX));
  /* 12e34867 push esi */
  push32((uint32_t)(ESI));
  /* 12e34868 push edi */
  push32((uint32_t)(EDI));
  /* 12e34869 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e34870 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e34872 call 0x12e36820 */
  push32(0x12e34877u); f_12e36820();
  /* 12e34877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3487a:;
  /* 12e3487a push 0x12e59a44 */
  push32((uint32_t)(0x12e59a44u));
  /* 12e3487f push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e34884 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34886 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34888 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3488a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3488c call 0x12e31ee0 */
  push32(0x12e34891u); f_12e31ee0();
  /* 12e34891 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34894 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34897 jne 0x12e3489a */
  if (!C.zf) goto L_12e3489a;
  /* 12e34899 int3  */
  x86_unimpl("int3 @ 0x12e34899");
L_12e3489a:;
  /* 12e3489a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3489c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3489e jne 0x12e3487a */
  if (!C.zf) goto L_12e3487a;
  /* 12e348a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e348a4 je 0x12e348ae */
  if (C.zf) goto L_12e348ae;
  /* 12e348a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e348a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e348ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e348ae:;
  /* 12e348ae mov eax, dword ptr [0x12e5e4dc] */
  EAX = (r32((uint32_t)(0x12e5e4dc)));
  /* 12e348b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e348b6 jmp 0x12e348c0 */
  goto L_12e348c0;
L_12e348b8:;
  /* 12e348b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e348bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e348bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e348c0:;
  /* 12e348c0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e348c4 je 0x12e34ae2 */
  if (C.zf) goto L_12e34ae2;
  /* 12e348ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e348cd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e348d0 je 0x12e34ae2 */
  if (C.zf) goto L_12e34ae2;
  /* 12e348d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e348d9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e348dc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e348e2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e348e5 je 0x12e34914 */
  if (C.zf) goto L_12e34914;
  /* 12e348e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e348ea mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e348ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e348f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e348f5 je 0x12e34914 */
  if (C.zf) goto L_12e34914;
  /* 12e348f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e348fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e348fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e34902 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34905 jne 0x12e34919 */
  if (!C.zf) goto L_12e34919;
  /* 12e34907 mov ecx, dword ptr [0x12e5ca84] */
  ECX = (r32((uint32_t)(0x12e5ca84)));
  /* 12e3490d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12e34910 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e34912 jne 0x12e34919 */
  if (!C.zf) goto L_12e34919;
L_12e34914:;
  /* 12e34914 jmp 0x12e34add */
  goto L_12e34add;
L_12e34919:;
  /* 12e34919 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3491c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34920 je 0x12e34992 */
  if (C.zf) goto L_12e34992;
  /* 12e34922 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34924 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e34926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34929 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e3492c push ecx */
  push32((uint32_t)(ECX));
  /* 12e3492d call 0x12e343d0 */
  push32(0x12e34932u); f_12e343d0();
  /* 12e34932 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e34937 jne 0x12e34963 */
  if (!C.zf) goto L_12e34963;
L_12e34939:;
  /* 12e34939 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3493c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e3493f push eax */
  push32((uint32_t)(EAX));
  /* 12e34940 push 0x12e59a30 */
  push32((uint32_t)(0x12e59a30u));
  /* 12e34945 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34947 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34949 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3494b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3494d call 0x12e31ee0 */
  push32(0x12e34952u); f_12e31ee0();
  /* 12e34952 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34955 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34958 jne 0x12e3495b */
  if (!C.zf) goto L_12e3495b;
  /* 12e3495a int3  */
  x86_unimpl("int3 @ 0x12e3495a");
L_12e3495b:;
  /* 12e3495b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e3495d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3495f jne 0x12e34939 */
  if (!C.zf) goto L_12e34939;
  /* 12e34961 jmp 0x12e34992 */
  goto L_12e34992;
L_12e34963:;
  /* 12e34963 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34966 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e34969 push eax */
  push32((uint32_t)(EAX));
  /* 12e3496a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3496d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e34970 push edx */
  push32((uint32_t)(EDX));
  /* 12e34971 push 0x12e59a24 */
  push32((uint32_t)(0x12e59a24u));
  /* 12e34976 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34978 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3497a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3497c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3497e call 0x12e31ee0 */
  push32(0x12e34983u); f_12e31ee0();
  /* 12e34983 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34986 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34989 jne 0x12e3498c */
  if (!C.zf) goto L_12e3498c;
  /* 12e3498b int3  */
  x86_unimpl("int3 @ 0x12e3498b");
L_12e3498c:;
  /* 12e3498c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3498e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e34990 jne 0x12e34963 */
  if (!C.zf) goto L_12e34963;
L_12e34992:;
  /* 12e34992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34995 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e34998 push edx */
  push32((uint32_t)(EDX));
  /* 12e34999 push 0x12e59a1c */
  push32((uint32_t)(0x12e59a1cu));
  /* 12e3499e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e349a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e349a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e349a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e349a6 call 0x12e31ee0 */
  push32(0x12e349abu); f_12e31ee0();
  /* 12e349ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e349ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e349b1 jne 0x12e349b4 */
  if (!C.zf) goto L_12e349b4;
  /* 12e349b3 int3  */
  x86_unimpl("int3 @ 0x12e349b3");
L_12e349b4:;
  /* 12e349b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e349b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e349b8 jne 0x12e34992 */
  if (!C.zf) goto L_12e34992;
  /* 12e349ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e349bd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e349c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e349c6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e349c9 jne 0x12e34a3c */
  if (!C.zf) goto L_12e34a3c;
L_12e349cb:;
  /* 12e349cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e349ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e349d1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e349d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e349d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e349d8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12e349db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e349e0 push eax */
  push32((uint32_t)(EAX));
  /* 12e349e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e349e4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e349e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e349e8 push 0x12e599e8 */
  push32((uint32_t)(0x12e599e8u));
  /* 12e349ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12e349ef push 0 */
  push32((uint32_t)(0x0u));
  /* 12e349f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e349f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e349f5 call 0x12e31ee0 */
  push32(0x12e349fau); f_12e31ee0();
  /* 12e349fa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e349fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34a00 jne 0x12e34a03 */
  if (!C.zf) goto L_12e34a03;
  /* 12e34a02 int3  */
  x86_unimpl("int3 @ 0x12e34a02");
L_12e34a03:;
  /* 12e34a03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e34a05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e34a07 jne 0x12e349cb */
  if (!C.zf) goto L_12e349cb;
  /* 12e34a09 cmp dword ptr [0x12e5fe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5fe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34a10 je 0x12e34a2b */
  if (C.zf) goto L_12e34a2b;
  /* 12e34a12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34a15 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e34a18 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34a19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34a1c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34a1f push edx */
  push32((uint32_t)(EDX));
  /* 12e34a20 call dword ptr [0x12e5fe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5fe38))), 0x12e34a26u);
  /* 12e34a26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34a29 jmp 0x12e34a37 */
  goto L_12e34a37;
L_12e34a2b:;
  /* 12e34a2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34a2e push eax */
  push32((uint32_t)(EAX));
  /* 12e34a2f call 0x12e34b20 */
  push32(0x12e34a34u); f_12e34b20();
  /* 12e34a34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e34a37:;
  /* 12e34a37 jmp 0x12e34add */
  goto L_12e34add;
L_12e34a3c:;
  /* 12e34a3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34a3f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34a43 jne 0x12e34a82 */
  if (!C.zf) goto L_12e34a82;
L_12e34a45:;
  /* 12e34a45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34a48 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e34a4b push eax */
  push32((uint32_t)(EAX));
  /* 12e34a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34a4f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34a52 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34a53 push 0x12e599c0 */
  push32((uint32_t)(0x12e599c0u));
  /* 12e34a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34a60 call 0x12e31ee0 */
  push32(0x12e34a65u); f_12e31ee0();
  /* 12e34a65 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34a68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34a6b jne 0x12e34a6e */
  if (!C.zf) goto L_12e34a6e;
  /* 12e34a6d int3  */
  x86_unimpl("int3 @ 0x12e34a6d");
L_12e34a6e:;
  /* 12e34a6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e34a70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e34a72 jne 0x12e34a45 */
  if (!C.zf) goto L_12e34a45;
  /* 12e34a74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34a77 push eax */
  push32((uint32_t)(EAX));
  /* 12e34a78 call 0x12e34b20 */
  push32(0x12e34a7du); f_12e34b20();
  /* 12e34a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34a80 jmp 0x12e34add */
  goto L_12e34add;
L_12e34a82:;
  /* 12e34a82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34a85 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e34a88 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e34a8e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34a91 jne 0x12e34add */
  if (!C.zf) goto L_12e34add;
L_12e34a93:;
  /* 12e34a93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34a96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e34a99 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34a9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34a9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e34aa0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12e34aa3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e34aa8 push eax */
  push32((uint32_t)(EAX));
  /* 12e34aa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34aac add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34aaf push ecx */
  push32((uint32_t)(ECX));
  /* 12e34ab0 push 0x12e5998c */
  push32((uint32_t)(0x12e5998cu));
  /* 12e34ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34abb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34abd call 0x12e31ee0 */
  push32(0x12e34ac2u); f_12e31ee0();
  /* 12e34ac2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34ac5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34ac8 jne 0x12e34acb */
  if (!C.zf) goto L_12e34acb;
  /* 12e34aca int3  */
  x86_unimpl("int3 @ 0x12e34aca");
L_12e34acb:;
  /* 12e34acb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e34acd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e34acf jne 0x12e34a93 */
  if (!C.zf) goto L_12e34a93;
  /* 12e34ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34ad4 push eax */
  push32((uint32_t)(EAX));
  /* 12e34ad5 call 0x12e34b20 */
  push32(0x12e34adau); f_12e34b20();
  /* 12e34ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e34add:;
  /* 12e34add jmp 0x12e348b8 */
  goto L_12e348b8;
L_12e34ae2:;
  /* 12e34ae2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e34ae4 call 0x12e368c0 */
  push32(0x12e34ae9u); f_12e368c0();
  /* 12e34ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e34aec:;
  /* 12e34aec push 0x12e59974 */
  push32((uint32_t)(0x12e59974u));
  /* 12e34af1 push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e34af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34afa push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34afc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34afe call 0x12e31ee0 */
  push32(0x12e34b03u); f_12e31ee0();
  /* 12e34b03 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34b06 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34b09 jne 0x12e34b0c */
  if (!C.zf) goto L_12e34b0c;
  /* 12e34b0b int3  */
  x86_unimpl("int3 @ 0x12e34b0b");
L_12e34b0c:;
  /* 12e34b0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e34b0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e34b10 jne 0x12e34aec */
  if (!C.zf) goto L_12e34aec;
  /* 12e34b12 pop edi */
  EDI = (pop32());
  /* 12e34b13 pop esi */
  ESI = (pop32());
  /* 12e34b14 pop ebx */
  EBX = (pop32());
  /* 12e34b15 mov esp, ebp */
  ESP = (EBP);
  /* 12e34b17 pop ebp */
  EBP = (pop32());
  /* 12e34b18 ret  */
  ESPCHK(0x12e34860u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b20 @ 0x12e34b20 (276 bytes, 89 insns) */
void f_12e34b20(void) {
  FTRACE(0x12e34b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e34b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12e34b21 mov ebp, esp */
  EBP = (ESP);
  /* 12e34b23 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e34b26 push ebx */
  push32((uint32_t)(EBX));
  /* 12e34b27 push esi */
  push32((uint32_t)(ESI));
  /* 12e34b28 push edi */
  push32((uint32_t)(EDI));
  /* 12e34b29 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12e34b30 jmp 0x12e34b3b */
  goto L_12e34b3b;
L_12e34b32:;
  /* 12e34b32 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e34b35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34b38 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12e34b3b:;
  /* 12e34b3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34b3e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34b42 jge 0x12e34b4f */
  if ((C.sf==C.of)) goto L_12e34b4f;
  /* 12e34b44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34b47 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e34b4a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12e34b4d jmp 0x12e34b56 */
  goto L_12e34b56;
L_12e34b4f:;
  /* 12e34b4f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12e34b56:;
  /* 12e34b56 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e34b59 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34b5c jge 0x12e34bfc */
  if ((C.sf==C.of)) goto L_12e34bfc;
  /* 12e34b62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34b65 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34b68 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12e34b6b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12e34b6e cmp dword ptr [0x12e5cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34b75 jle 0x12e34b93 */
  if ((C.zf||C.sf!=C.of)) goto L_12e34b93;
  /* 12e34b77 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12e34b7c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e34b7f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e34b85 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34b86 call 0x12e38e30 */
  push32(0x12e34b8bu); f_12e38e30();
  /* 12e34b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34b8e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12e34b91 jmp 0x12e34bb0 */
  goto L_12e34bb0;
L_12e34b93:;
  /* 12e34b93 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e34b96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e34b9c mov eax, dword ptr [0x12e5cc98] */
  EAX = (r32((uint32_t)(0x12e5cc98)));
  /* 12e34ba1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e34ba3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12e34ba7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12e34bad mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12e34bb0:;
  /* 12e34bb0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34bb4 je 0x12e34bc4 */
  if (C.zf) goto L_12e34bc4;
  /* 12e34bb6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e34bb9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e34bbf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12e34bc2 jmp 0x12e34bcb */
  goto L_12e34bcb;
L_12e34bc4:;
  /* 12e34bc4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12e34bcb:;
  /* 12e34bcb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e34bce mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12e34bd1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12e34bd5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e34bd8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e34bde push edx */
  push32((uint32_t)(EDX));
  /* 12e34bdf push 0x12e59a68 */
  push32((uint32_t)(0x12e59a68u));
  /* 12e34be4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e34be7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e34bea lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12e34bee push ecx */
  push32((uint32_t)(ECX));
  /* 12e34bef call 0x12e38d30 */
  push32(0x12e34bf4u); f_12e38d30();
  /* 12e34bf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34bf7 jmp 0x12e34b32 */
  goto L_12e34b32;
L_12e34bfc:;
  /* 12e34bfc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e34bff mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12e34c04:;
  /* 12e34c04 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12e34c07 push eax */
  push32((uint32_t)(EAX));
  /* 12e34c08 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12e34c0b push ecx */
  push32((uint32_t)(ECX));
  /* 12e34c0c push 0x12e59a58 */
  push32((uint32_t)(0x12e59a58u));
  /* 12e34c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34c19 call 0x12e31ee0 */
  push32(0x12e34c1eu); f_12e31ee0();
  /* 12e34c1e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34c21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34c24 jne 0x12e34c27 */
  if (!C.zf) goto L_12e34c27;
  /* 12e34c26 int3  */
  x86_unimpl("int3 @ 0x12e34c26");
L_12e34c27:;
  /* 12e34c27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e34c29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e34c2b jne 0x12e34c04 */
  if (!C.zf) goto L_12e34c04;
  /* 12e34c2d pop edi */
  EDI = (pop32());
  /* 12e34c2e pop esi */
  ESI = (pop32());
  /* 12e34c2f pop ebx */
  EBX = (pop32());
  /* 12e34c30 mov esp, ebp */
  ESP = (EBP);
  /* 12e34c32 pop ebp */
  EBP = (pop32());
  /* 12e34c33 ret  */
  ESPCHK(0x12e34b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c40 @ 0x12e34c40 (116 bytes, 46 insns) */
void f_12e34c40(void) {
  FTRACE(0x12e34c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e34c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12e34c41 mov ebp, esp */
  EBP = (ESP);
  /* 12e34c43 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e34c46 push ebx */
  push32((uint32_t)(EBX));
  /* 12e34c47 push esi */
  push32((uint32_t)(ESI));
  /* 12e34c48 push edi */
  push32((uint32_t)(EDI));
  /* 12e34c49 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12e34c4c push eax */
  push32((uint32_t)(EAX));
  /* 12e34c4d call 0x12e345c0 */
  push32(0x12e34c52u); f_12e345c0();
  /* 12e34c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34c55 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34c59 jne 0x12e34c74 */
  if (!C.zf) goto L_12e34c74;
  /* 12e34c5b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34c5f jne 0x12e34c74 */
  if (!C.zf) goto L_12e34c74;
  /* 12e34c61 mov ecx, dword ptr [0x12e5ca84] */
  ECX = (r32((uint32_t)(0x12e5ca84)));
  /* 12e34c67 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12e34c6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e34c6c je 0x12e34cab */
  if (C.zf) goto L_12e34cab;
  /* 12e34c6e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34c72 je 0x12e34cab */
  if (C.zf) goto L_12e34cab;
L_12e34c74:;
  /* 12e34c74 push 0x12e59a70 */
  push32((uint32_t)(0x12e59a70u));
  /* 12e34c79 push 0x12e5943c */
  push32((uint32_t)(0x12e5943cu));
  /* 12e34c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34c86 call 0x12e31ee0 */
  push32(0x12e34c8bu); f_12e31ee0();
  /* 12e34c8b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34c8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34c91 jne 0x12e34c94 */
  if (!C.zf) goto L_12e34c94;
  /* 12e34c93 int3  */
  x86_unimpl("int3 @ 0x12e34c93");
L_12e34c94:;
  /* 12e34c94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e34c96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e34c98 jne 0x12e34c74 */
  if (!C.zf) goto L_12e34c74;
  /* 12e34c9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34c9c call 0x12e34860 */
  push32(0x12e34ca1u); f_12e34860();
  /* 12e34ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34ca4 mov eax, 1 */
  EAX = (0x1u);
  /* 12e34ca9 jmp 0x12e34cad */
  goto L_12e34cad;
L_12e34cab:;
  /* 12e34cab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e34cad:;
  /* 12e34cad pop edi */
  EDI = (pop32());
  /* 12e34cae pop esi */
  ESI = (pop32());
  /* 12e34caf pop ebx */
  EBX = (pop32());
  /* 12e34cb0 mov esp, ebp */
  ESP = (EBP);
  /* 12e34cb2 pop ebp */
  EBP = (pop32());
  /* 12e34cb3 ret  */
  ESPCHK(0x12e34c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cc0 @ 0x12e34cc0 (197 bytes, 79 insns) */
void f_12e34cc0(void) {
  FTRACE(0x12e34cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e34cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e34cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12e34cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34cc4 push ebx */
  push32((uint32_t)(EBX));
  /* 12e34cc5 push esi */
  push32((uint32_t)(ESI));
  /* 12e34cc6 push edi */
  push32((uint32_t)(EDI));
  /* 12e34cc7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34ccb jne 0x12e34cd2 */
  if (!C.zf) goto L_12e34cd2;
  /* 12e34ccd jmp 0x12e34d7e */
  goto L_12e34d7e;
L_12e34cd2:;
  /* 12e34cd2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e34cd9 jmp 0x12e34ce4 */
  goto L_12e34ce4;
L_12e34cdb:;
  /* 12e34cdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34cde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34ce1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e34ce4:;
  /* 12e34ce4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34ce8 jge 0x12e34d2e */
  if ((C.sf==C.of)) goto L_12e34d2e;
L_12e34cea:;
  /* 12e34cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34ced mov edx, dword ptr [ecx*4 + 0x12e5ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e5ca94)));
  /* 12e34cf4 push edx */
  push32((uint32_t)(EDX));
  /* 12e34cf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34cf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34cfb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12e34cff push edx */
  push32((uint32_t)(EDX));
  /* 12e34d00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34d03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34d06 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12e34d0a push edx */
  push32((uint32_t)(EDX));
  /* 12e34d0b push 0x12e59acc */
  push32((uint32_t)(0x12e59accu));
  /* 12e34d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34d18 call 0x12e31ee0 */
  push32(0x12e34d1du); f_12e31ee0();
  /* 12e34d1d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34d20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34d23 jne 0x12e34d26 */
  if (!C.zf) goto L_12e34d26;
  /* 12e34d25 int3  */
  x86_unimpl("int3 @ 0x12e34d25");
L_12e34d26:;
  /* 12e34d26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e34d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e34d2a jne 0x12e34cea */
  if (!C.zf) goto L_12e34cea;
  /* 12e34d2c jmp 0x12e34cdb */
  goto L_12e34cdb;
L_12e34d2e:;
  /* 12e34d2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34d31 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12e34d34 push edx */
  push32((uint32_t)(EDX));
  /* 12e34d35 push 0x12e59aa8 */
  push32((uint32_t)(0x12e59aa8u));
  /* 12e34d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34d42 call 0x12e31ee0 */
  push32(0x12e34d47u); f_12e31ee0();
  /* 12e34d47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34d4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34d4d jne 0x12e34d50 */
  if (!C.zf) goto L_12e34d50;
  /* 12e34d4f int3  */
  x86_unimpl("int3 @ 0x12e34d4f");
L_12e34d50:;
  /* 12e34d50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e34d52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e34d54 jne 0x12e34d2e */
  if (!C.zf) goto L_12e34d2e;
L_12e34d56:;
  /* 12e34d56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34d59 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12e34d5c push edx */
  push32((uint32_t)(EDX));
  /* 12e34d5d push 0x12e59a88 */
  push32((uint32_t)(0x12e59a88u));
  /* 12e34d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34d6a call 0x12e31ee0 */
  push32(0x12e34d6fu); f_12e31ee0();
  /* 12e34d6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34d72 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34d75 jne 0x12e34d78 */
  if (!C.zf) goto L_12e34d78;
  /* 12e34d77 int3  */
  x86_unimpl("int3 @ 0x12e34d77");
L_12e34d78:;
  /* 12e34d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e34d7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e34d7c jne 0x12e34d56 */
  if (!C.zf) goto L_12e34d56;
L_12e34d7e:;
  /* 12e34d7e pop edi */
  EDI = (pop32());
  /* 12e34d7f pop esi */
  ESI = (pop32());
  /* 12e34d80 pop ebx */
  EBX = (pop32());
  /* 12e34d81 mov esp, ebp */
  ESP = (EBP);
  /* 12e34d83 pop ebp */
  EBP = (pop32());
  /* 12e34d84 ret  */
  ESPCHK(0x12e34cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d90 @ 0x12e34d90 (329 bytes, 102 insns) */
void f_12e34d90(void) {
  FTRACE(0x12e34d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e34d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e34d91 mov ebp, esp */
  EBP = (ESP);
  /* 12e34d93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e34d96 cmp dword ptr [0x12e5ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34d9d jne 0x12e34da4 */
  if (!C.zf) goto L_12e34da4;
  /* 12e34d9f call 0x12e396d0 */
  push32(0x12e34da4u); f_12e396d0();
L_12e34da4:;
  /* 12e34da4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e34dab mov eax, dword ptr [0x12e5e478] */
  EAX = (r32((uint32_t)(0x12e5e478)));
  /* 12e34db0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e34db3:;
  /* 12e34db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34db6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e34db9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e34dbb je 0x12e34de9 */
  if (C.zf) goto L_12e34de9;
  /* 12e34dbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34dc0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e34dc3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34dc6 je 0x12e34dd1 */
  if (C.zf) goto L_12e34dd1;
  /* 12e34dc8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34dcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34dce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e34dd1:;
  /* 12e34dd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34dd4 push eax */
  push32((uint32_t)(EAX));
  /* 12e34dd5 call 0x12e35c50 */
  push32(0x12e34ddau); f_12e35c50();
  /* 12e34dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34ddd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34de0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e34de4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e34de7 jmp 0x12e34db3 */
  goto L_12e34db3;
L_12e34de9:;
  /* 12e34de9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12e34deb push 0x12e59aec */
  push32((uint32_t)(0x12e59aecu));
  /* 12e34df0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e34df2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34df5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12e34dfc push ecx */
  push32((uint32_t)(ECX));
  /* 12e34dfd call 0x12e32e20 */
  push32(0x12e34e02u); f_12e32e20();
  /* 12e34e02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34e05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e34e08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e34e0b mov dword ptr [0x12e5e4ac], edx */
  w32((uint32_t)(0x12e5e4ac), (EDX));
  /* 12e34e11 cmp dword ptr [0x12e5e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34e18 jne 0x12e34e24 */
  if (!C.zf) goto L_12e34e24;
  /* 12e34e1a push 9 */
  push32((uint32_t)(0x9u));
  /* 12e34e1c call 0x12e31d90 */
  push32(0x12e34e21u); f_12e31d90();
  /* 12e34e21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e34e24:;
  /* 12e34e24 mov eax, dword ptr [0x12e5e478] */
  EAX = (r32((uint32_t)(0x12e5e478)));
  /* 12e34e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e34e2c jmp 0x12e34e37 */
  goto L_12e34e37;
L_12e34e2e:;
  /* 12e34e2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34e31 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34e34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e34e37:;
  /* 12e34e37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34e3a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e34e3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e34e3f je 0x12e34ea7 */
  if (C.zf) goto L_12e34ea7;
  /* 12e34e41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34e44 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34e45 call 0x12e35c50 */
  push32(0x12e34e4au); f_12e35c50();
  /* 12e34e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34e4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34e50 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e34e53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34e56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e34e59 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34e5c je 0x12e34ea5 */
  if (C.zf) goto L_12e34ea5;
  /* 12e34e5e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12e34e60 push 0x12e59aec */
  push32((uint32_t)(0x12e59aecu));
  /* 12e34e65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e34e67 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e34e6a push ecx */
  push32((uint32_t)(ECX));
  /* 12e34e6b call 0x12e32e20 */
  push32(0x12e34e70u); f_12e32e20();
  /* 12e34e70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34e73 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e34e76 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e34e78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e34e7b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34e7e jne 0x12e34e8a */
  if (!C.zf) goto L_12e34e8a;
  /* 12e34e80 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e34e82 call 0x12e31d90 */
  push32(0x12e34e87u); f_12e31d90();
  /* 12e34e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e34e8a:;
  /* 12e34e8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34e8d push ecx */
  push32((uint32_t)(ECX));
  /* 12e34e8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e34e91 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e34e93 push eax */
  push32((uint32_t)(EAX));
  /* 12e34e94 call 0x12e35dd0 */
  push32(0x12e34e99u); f_12e35dd0();
  /* 12e34e99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34e9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e34e9f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34ea2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12e34ea5:;
  /* 12e34ea5 jmp 0x12e34e2e */
  goto L_12e34e2e;
L_12e34ea7:;
  /* 12e34ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e34ea9 mov edx, dword ptr [0x12e5e478] */
  EDX = (r32((uint32_t)(0x12e5e478)));
  /* 12e34eaf push edx */
  push32((uint32_t)(EDX));
  /* 12e34eb0 call 0x12e338b0 */
  push32(0x12e34eb5u); f_12e338b0();
  /* 12e34eb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34eb8 mov dword ptr [0x12e5e478], 0 */
  w32((uint32_t)(0x12e5e478), (0x0u));
  /* 12e34ec2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e34ec5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e34ecb mov dword ptr [0x12e5ffa0], 1 */
  w32((uint32_t)(0x12e5ffa0), (0x1u));
  /* 12e34ed5 mov esp, ebp */
  ESP = (EBP);
  /* 12e34ed7 pop ebp */
  EBP = (pop32());
  /* 12e34ed8 ret  */
  ESPCHK(0x12e34d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ee0 @ 0x12e34ee0 (216 bytes, 69 insns) */
void f_12e34ee0(void) {
  FTRACE(0x12e34ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e34ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e34ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12e34ee3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e34ee6 cmp dword ptr [0x12e5ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34eed jne 0x12e34ef4 */
  if (!C.zf) goto L_12e34ef4;
  /* 12e34eef call 0x12e396d0 */
  push32(0x12e34ef4u); f_12e396d0();
L_12e34ef4:;
  /* 12e34ef4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12e34ef9 push 0x12e5e4e8 */
  push32((uint32_t)(0x12e5e4e8u));
  /* 12e34efe push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34f00 call dword ptr [0x12e602a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602a8))), 0x12e34f06u);
  /* 12e34f06 mov dword ptr [0x12e5e4bc], 0x12e5e4e8 */
  w32((uint32_t)(0x12e5e4bc), (0x12e5e4e8u));
  /* 12e34f10 mov eax, dword ptr [0x12e5ffcc] */
  EAX = (r32((uint32_t)(0x12e5ffcc)));
  /* 12e34f15 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e34f18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e34f1a jne 0x12e34f27 */
  if (!C.zf) goto L_12e34f27;
  /* 12e34f1c mov edx, dword ptr [0x12e5e4bc] */
  EDX = (r32((uint32_t)(0x12e5e4bc)));
  /* 12e34f22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e34f25 jmp 0x12e34f2f */
  goto L_12e34f2f;
L_12e34f27:;
  /* 12e34f27 mov eax, dword ptr [0x12e5ffcc] */
  EAX = (r32((uint32_t)(0x12e5ffcc)));
  /* 12e34f2c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12e34f2f:;
  /* 12e34f2f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e34f32 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e34f35 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12e34f38 push edx */
  push32((uint32_t)(EDX));
  /* 12e34f39 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12e34f3c push eax */
  push32((uint32_t)(EAX));
  /* 12e34f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e34f41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e34f44 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34f45 call 0x12e34fc0 */
  push32(0x12e34f4au); f_12e34fc0();
  /* 12e34f4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34f4d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12e34f52 push 0x12e59af8 */
  push32((uint32_t)(0x12e59af8u));
  /* 12e34f57 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e34f59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e34f5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34f5f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12e34f62 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34f63 call 0x12e32e20 */
  push32(0x12e34f68u); f_12e32e20();
  /* 12e34f68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34f6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e34f6e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34f72 jne 0x12e34f7e */
  if (!C.zf) goto L_12e34f7e;
  /* 12e34f74 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e34f76 call 0x12e31d90 */
  push32(0x12e34f7bu); f_12e31d90();
  /* 12e34f7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e34f7e:;
  /* 12e34f7e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12e34f81 push edx */
  push32((uint32_t)(EDX));
  /* 12e34f82 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12e34f85 push eax */
  push32((uint32_t)(EAX));
  /* 12e34f86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e34f89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34f8c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12e34f8f push eax */
  push32((uint32_t)(EAX));
  /* 12e34f90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12e34f94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e34f97 push edx */
  push32((uint32_t)(EDX));
  /* 12e34f98 call 0x12e34fc0 */
  push32(0x12e34f9du); f_12e34fc0();
  /* 12e34f9d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34fa0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e34fa3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e34fa6 mov dword ptr [0x12e5e4a0], eax */
  w32((uint32_t)(0x12e5e4a0), (EAX));
  /* 12e34fab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e34fae mov dword ptr [0x12e5e4a4], ecx */
  w32((uint32_t)(0x12e5e4a4), (ECX));
  /* 12e34fb4 mov esp, ebp */
  ESP = (EBP);
  /* 12e34fb6 pop ebp */
  EBP = (pop32());
  /* 12e34fb7 ret  */
  ESPCHK(0x12e34ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc0 @ 0x12e34fc0 (1060 bytes, 360 insns) */
void f_12e34fc0(void) {
  FTRACE(0x12e34fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e34fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e34fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12e34fc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e34fc6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e34fc9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e34fcf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e34fd2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12e34fd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e34fdb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e34fde cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34fe2 je 0x12e34ff5 */
  if (C.zf) goto L_12e34ff5;
  /* 12e34fe4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e34fe7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e34fea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e34fec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e34fef add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e34ff2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12e34ff5:;
  /* 12e34ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e34ff8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e34ffb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e34ffe jne 0x12e350cd */
  if (!C.zf) goto L_12e350cd;
L_12e35004:;
  /* 12e35004 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35007 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3500a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e3500d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35010 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e35013 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35016 je 0x12e35092 */
  if (C.zf) goto L_12e35092;
  /* 12e35018 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3501b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e3501e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e35020 je 0x12e35092 */
  if (C.zf) goto L_12e35092;
  /* 12e35022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35025 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e35027 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e35029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3502b mov al, byte ptr [edx + 0x12e5fd01] */
  AL = (r8((uint32_t)(EDX + 0x12e5fd01)));
  /* 12e35031 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e35034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e35036 je 0x12e35067 */
  if (C.zf) goto L_12e35067;
  /* 12e35038 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3503b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e3503d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35040 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e35043 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e35045 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35049 je 0x12e35067 */
  if (C.zf) goto L_12e35067;
  /* 12e3504b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3504e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35051 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e35053 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e35055 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35058 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3505b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e3505e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35061 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35064 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e35067:;
  /* 12e35067 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3506a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e3506c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3506f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e35072 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e35074 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35078 je 0x12e3508d */
  if (C.zf) goto L_12e3508d;
  /* 12e3507a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3507d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35080 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e35082 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e35084 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35087 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3508a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12e3508d:;
  /* 12e3508d jmp 0x12e35004 */
  goto L_12e35004;
L_12e35092:;
  /* 12e35092 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e35095 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e35097 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3509a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3509d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e3509f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e350a3 je 0x12e350b4 */
  if (C.zf) goto L_12e350b4;
  /* 12e350a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e350a8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12e350ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e350ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e350b1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12e350b4:;
  /* 12e350b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e350b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e350ba cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e350bd jne 0x12e350c8 */
  if (!C.zf) goto L_12e350c8;
  /* 12e350bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e350c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e350c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e350c8:;
  /* 12e350c8 jmp 0x12e3519c */
  goto L_12e3519c;
L_12e350cd:;
  /* 12e350cd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e350d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e350d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e350d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e350d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e350da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e350de je 0x12e350f3 */
  if (C.zf) goto L_12e350f3;
  /* 12e350e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e350e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e350e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e350e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e350ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e350ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e350f0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12e350f3:;
  /* 12e350f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e350f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e350f8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12e350fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e350fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35101 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e35104 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e35107 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3510d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3510f mov dl, byte ptr [ecx + 0x12e5fd01] */
  DL = (r8((uint32_t)(ECX + 0x12e5fd01)));
  /* 12e35115 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e35118 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e3511a je 0x12e3514b */
  if (C.zf) goto L_12e3514b;
  /* 12e3511c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3511f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e35121 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35124 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e35127 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e35129 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3512d je 0x12e35142 */
  if (C.zf) goto L_12e35142;
  /* 12e3512f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35132 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35135 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e35137 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e35139 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3513c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3513f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12e35142:;
  /* 12e35142 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35145 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35148 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e3514b:;
  /* 12e3514b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3514e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e35154 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35157 je 0x12e35177 */
  if (C.zf) goto L_12e35177;
  /* 12e35159 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3515c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e35161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e35163 je 0x12e35177 */
  if (C.zf) goto L_12e35177;
  /* 12e35165 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e35168 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e3516e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35171 jne 0x12e350cd */
  if (!C.zf) goto L_12e350cd;
L_12e35177:;
  /* 12e35177 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3517a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e35180 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e35182 jne 0x12e3518f */
  if (!C.zf) goto L_12e3518f;
  /* 12e35184 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35187 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3518a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3518d jmp 0x12e3519c */
  goto L_12e3519c;
L_12e3518f:;
  /* 12e3518f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35193 je 0x12e3519c */
  if (C.zf) goto L_12e3519c;
  /* 12e35195 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35198 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12e3519c:;
  /* 12e3519c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12e351a3:;
  /* 12e351a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e351a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e351a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e351ab je 0x12e351ce */
  if (C.zf) goto L_12e351ce;
L_12e351ad:;
  /* 12e351ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e351b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e351b3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e351b6 je 0x12e351c3 */
  if (C.zf) goto L_12e351c3;
  /* 12e351b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e351bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e351be cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e351c1 jne 0x12e351ce */
  if (!C.zf) goto L_12e351ce;
L_12e351c3:;
  /* 12e351c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e351c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e351c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e351cc jmp 0x12e351ad */
  goto L_12e351ad;
L_12e351ce:;
  /* 12e351ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e351d1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e351d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e351d6 jne 0x12e351dd */
  if (!C.zf) goto L_12e351dd;
  /* 12e351d8 jmp 0x12e353bb */
  goto L_12e353bb;
L_12e351dd:;
  /* 12e351dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e351e1 je 0x12e351f4 */
  if (C.zf) goto L_12e351f4;
  /* 12e351e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e351e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e351e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e351eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e351ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e351f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12e351f4:;
  /* 12e351f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e351f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e351f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e351fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e351ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12e35201:;
  /* 12e35201 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12e35208 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12e3520f:;
  /* 12e3520f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35212 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e35215 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35218 jne 0x12e3522e */
  if (!C.zf) goto L_12e3522e;
  /* 12e3521a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3521d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35220 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e35223 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e35226 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35229 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e3522c jmp 0x12e3520f */
  goto L_12e3520f;
L_12e3522e:;
  /* 12e3522e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35231 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e35234 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35237 jne 0x12e3528a */
  if (!C.zf) goto L_12e3528a;
  /* 12e35239 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3523c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3523e mov ecx, 2 */
  ECX = (0x2u);
  /* 12e35243 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e35245 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e35247 jne 0x12e35282 */
  if (!C.zf) goto L_12e35282;
  /* 12e35249 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3524d je 0x12e3526f */
  if (C.zf) goto L_12e3526f;
  /* 12e3524f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35252 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12e35256 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35259 jne 0x12e35266 */
  if (!C.zf) goto L_12e35266;
  /* 12e3525b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3525e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35261 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e35264 jmp 0x12e3526d */
  goto L_12e3526d;
L_12e35266:;
  /* 12e35266 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e3526d:;
  /* 12e3526d jmp 0x12e35276 */
  goto L_12e35276;
L_12e3526f:;
  /* 12e3526f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e35276:;
  /* 12e35276 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e35278 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3527c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12e3527f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12e35282:;
  /* 12e35282 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e35285 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e35287 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12e3528a:;
  /* 12e3528a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3528d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e35290 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35293 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e35296 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e35298 je 0x12e352be */
  if (C.zf) goto L_12e352be;
  /* 12e3529a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3529e je 0x12e352af */
  if (C.zf) goto L_12e352af;
  /* 12e352a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e352a3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12e352a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e352a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e352ac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12e352af:;
  /* 12e352af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e352b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e352b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e352b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e352ba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e352bc jmp 0x12e3528a */
  goto L_12e3528a;
L_12e352be:;
  /* 12e352be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e352c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e352c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e352c6 je 0x12e352e4 */
  if (C.zf) goto L_12e352e4;
  /* 12e352c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e352cc jne 0x12e352e9 */
  if (!C.zf) goto L_12e352e9;
  /* 12e352ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e352d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e352d4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e352d7 je 0x12e352e4 */
  if (C.zf) goto L_12e352e4;
  /* 12e352d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e352dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e352df cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e352e2 jne 0x12e352e9 */
  if (!C.zf) goto L_12e352e9;
L_12e352e4:;
  /* 12e352e4 jmp 0x12e35394 */
  goto L_12e35394;
L_12e352e9:;
  /* 12e352e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e352ed je 0x12e35386 */
  if (C.zf) goto L_12e35386;
  /* 12e352f3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e352f7 je 0x12e3534d */
  if (C.zf) goto L_12e3534d;
  /* 12e352f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e352fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e352fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e35300 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e35302 mov cl, byte ptr [eax + 0x12e5fd01] */
  CL = (r8((uint32_t)(EAX + 0x12e5fd01)));
  /* 12e35308 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3530b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e3530d je 0x12e35338 */
  if (C.zf) goto L_12e35338;
  /* 12e3530f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35315 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e35317 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12e35319 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3531c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3531f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12e35322 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35325 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35328 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3532b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3532e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e35330 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35333 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e35336 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e35338:;
  /* 12e35338 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3533b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3533e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e35340 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e35342 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35345 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35348 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e3534b jmp 0x12e35379 */
  goto L_12e35379;
L_12e3534d:;
  /* 12e3534d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35350 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e35352 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e35354 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e35356 mov cl, byte ptr [eax + 0x12e5fd01] */
  CL = (r8((uint32_t)(EAX + 0x12e5fd01)));
  /* 12e3535c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e3535f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e35361 je 0x12e35379 */
  if (C.zf) goto L_12e35379;
  /* 12e35363 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35366 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35369 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e3536c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3536f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e35371 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35374 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e35377 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e35379:;
  /* 12e35379 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e3537c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e3537e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35381 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e35384 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e35386:;
  /* 12e35386 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35389 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3538c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3538f jmp 0x12e35201 */
  goto L_12e35201;
L_12e35394:;
  /* 12e35394 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35398 je 0x12e353a9 */
  if (C.zf) goto L_12e353a9;
  /* 12e3539a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3539d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12e353a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e353a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e353a6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12e353a9:;
  /* 12e353a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e353ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e353ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e353b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e353b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e353b6 jmp 0x12e351a3 */
  goto L_12e351a3;
L_12e353bb:;
  /* 12e353bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e353bf je 0x12e353d3 */
  if (C.zf) goto L_12e353d3;
  /* 12e353c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e353c4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e353ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e353cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e353d0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12e353d3:;
  /* 12e353d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e353d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e353d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e353db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e353de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e353e0 mov esp, ebp */
  ESP = (EBP);
  /* 12e353e2 pop ebp */
  EBP = (pop32());
  /* 12e353e3 ret  */
  ESPCHK(0x12e34fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053f0 @ 0x12e353f0 (537 bytes, 173 insns) */
void f_12e353f0(void) {
  FTRACE(0x12e353f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e353f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e353f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e353f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e353f6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12e353fd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12e35404 cmp dword ptr [0x12e5e5ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e5ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3540b jne 0x12e3544a */
  if (!C.zf) goto L_12e3544a;
  /* 12e3540d call dword ptr [0x12e60304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60304))), 0x12e35413u);
  /* 12e35413 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e35416 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3541a je 0x12e35428 */
  if (C.zf) goto L_12e35428;
  /* 12e3541c mov dword ptr [0x12e5e5ec], 1 */
  w32((uint32_t)(0x12e5e5ec), (0x1u));
  /* 12e35426 jmp 0x12e3544a */
  goto L_12e3544a;
L_12e35428:;
  /* 12e35428 call dword ptr [0x12e60300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60300))), 0x12e3542eu);
  /* 12e3542e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e35431 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35435 je 0x12e35443 */
  if (C.zf) goto L_12e35443;
  /* 12e35437 mov dword ptr [0x12e5e5ec], 2 */
  w32((uint32_t)(0x12e5e5ec), (0x2u));
  /* 12e35441 jmp 0x12e3544a */
  goto L_12e3544a;
L_12e35443:;
  /* 12e35443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e35445 jmp 0x12e35605 */
  goto L_12e35605;
L_12e3544a:;
  /* 12e3544a cmp dword ptr [0x12e5e5ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e5ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35451 jne 0x12e3554e */
  if (!C.zf) goto L_12e3554e;
  /* 12e35457 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3545b jne 0x12e35473 */
  if (!C.zf) goto L_12e35473;
  /* 12e3545d call dword ptr [0x12e60304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60304))), 0x12e35463u);
  /* 12e35463 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e35466 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3546a jne 0x12e35473 */
  if (!C.zf) goto L_12e35473;
  /* 12e3546c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3546e jmp 0x12e35605 */
  goto L_12e35605;
L_12e35473:;
  /* 12e35473 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e35476 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e35479:;
  /* 12e35479 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3547c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3547e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12e35481 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e35483 je 0x12e354a5 */
  if (C.zf) goto L_12e354a5;
  /* 12e35485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e35488 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3548b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3548e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e35491 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e35493 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12e35496 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e35498 jne 0x12e354a3 */
  if (!C.zf) goto L_12e354a3;
  /* 12e3549a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3549d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e354a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e354a3:;
  /* 12e354a3 jmp 0x12e35479 */
  goto L_12e35479;
L_12e354a5:;
  /* 12e354a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e354a8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e354ab sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12e354ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e354b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e354b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e354b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e354b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e354b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e354bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e354be push edx */
  push32((uint32_t)(EDX));
  /* 12e354bf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e354c2 push eax */
  push32((uint32_t)(EAX));
  /* 12e354c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e354c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e354c7 call dword ptr [0x12e602fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602fc))), 0x12e354cdu);
  /* 12e354cd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e354d0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e354d4 je 0x12e354f4 */
  if (C.zf) goto L_12e354f4;
  /* 12e354d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12e354d8 push 0x12e59b04 */
  push32((uint32_t)(0x12e59b04u));
  /* 12e354dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12e354df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e354e2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e354e3 call 0x12e32e20 */
  push32(0x12e354e8u); f_12e32e20();
  /* 12e354e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e354eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e354ee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e354f2 jne 0x12e35505 */
  if (!C.zf) goto L_12e35505;
L_12e354f4:;
  /* 12e354f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e354f7 push edx */
  push32((uint32_t)(EDX));
  /* 12e354f8 call dword ptr [0x12e602f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602f8))), 0x12e354feu);
  /* 12e354fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e35500 jmp 0x12e35605 */
  goto L_12e35605;
L_12e35505:;
  /* 12e35505 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e35507 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e35509 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3550c push eax */
  push32((uint32_t)(EAX));
  /* 12e3550d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e35510 push ecx */
  push32((uint32_t)(ECX));
  /* 12e35511 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35514 push edx */
  push32((uint32_t)(EDX));
  /* 12e35515 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e35518 push eax */
  push32((uint32_t)(EAX));
  /* 12e35519 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3551b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e3551d call dword ptr [0x12e602fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602fc))), 0x12e35523u);
  /* 12e35523 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e35525 jne 0x12e3553c */
  if (!C.zf) goto L_12e3553c;
  /* 12e35527 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e35529 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3552c push ecx */
  push32((uint32_t)(ECX));
  /* 12e3552d call 0x12e338b0 */
  push32(0x12e35532u); f_12e338b0();
  /* 12e35532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35535 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12e3553c:;
  /* 12e3553c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e3553f push edx */
  push32((uint32_t)(EDX));
  /* 12e35540 call dword ptr [0x12e602f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602f8))), 0x12e35546u);
  /* 12e35546 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e35549 jmp 0x12e35605 */
  goto L_12e35605;
L_12e3554e:;
  /* 12e3554e cmp dword ptr [0x12e5e5ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e5ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35555 jne 0x12e35603 */
  if (!C.zf) goto L_12e35603;
  /* 12e3555b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3555f jne 0x12e35577 */
  if (!C.zf) goto L_12e35577;
  /* 12e35561 call dword ptr [0x12e60300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60300))), 0x12e35567u);
  /* 12e35567 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e3556a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3556e jne 0x12e35577 */
  if (!C.zf) goto L_12e35577;
  /* 12e35570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e35572 jmp 0x12e35605 */
  goto L_12e35605;
L_12e35577:;
  /* 12e35577 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3557a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e3557d:;
  /* 12e3557d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e35580 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e35583 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e35585 je 0x12e355a5 */
  if (C.zf) goto L_12e355a5;
  /* 12e35587 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3558a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3558d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e35590 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e35593 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e35596 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e35598 jne 0x12e355a3 */
  if (!C.zf) goto L_12e355a3;
  /* 12e3559a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3559d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e355a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e355a3:;
  /* 12e355a3 jmp 0x12e3557d */
  goto L_12e3557d;
L_12e355a5:;
  /* 12e355a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e355a8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e355ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e355ae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e355b1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12e355b6 push 0x12e59b04 */
  push32((uint32_t)(0x12e59b04u));
  /* 12e355bb push 2 */
  push32((uint32_t)(0x2u));
  /* 12e355bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e355c0 push edx */
  push32((uint32_t)(EDX));
  /* 12e355c1 call 0x12e32e20 */
  push32(0x12e355c6u); f_12e32e20();
  /* 12e355c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e355c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e355cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e355d0 jne 0x12e355e0 */
  if (!C.zf) goto L_12e355e0;
  /* 12e355d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e355d5 push eax */
  push32((uint32_t)(EAX));
  /* 12e355d6 call dword ptr [0x12e602f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602f4))), 0x12e355dcu);
  /* 12e355dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e355de jmp 0x12e35605 */
  goto L_12e35605;
L_12e355e0:;
  /* 12e355e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e355e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e355e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e355e7 push edx */
  push32((uint32_t)(EDX));
  /* 12e355e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e355eb push eax */
  push32((uint32_t)(EAX));
  /* 12e355ec call 0x12e39700 */
  push32(0x12e355f1u); f_12e39700();
  /* 12e355f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e355f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e355f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e355f8 call dword ptr [0x12e602f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602f4))), 0x12e355feu);
  /* 12e355fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e35601 jmp 0x12e35605 */
  goto L_12e35605;
L_12e35603:;
  /* 12e35603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e35605:;
  /* 12e35605 mov esp, ebp */
  ESP = (EBP);
  /* 12e35607 pop ebp */
  EBP = (pop32());
  /* 12e35608 ret  */
  ESPCHK(0x12e353f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005610 @ 0x12e35610 (77 bytes, 25 insns) */
void f_12e35610(void) {
  FTRACE(0x12e35610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35610 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35611 mov ebp, esp */
  EBP = (ESP);
  /* 12e35613 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e35615 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12e3561a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3561c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35620 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12e35623 push eax */
  push32((uint32_t)(EAX));
  /* 12e35624 call dword ptr [0x12e6030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6030c))), 0x12e3562au);
  /* 12e3562a mov dword ptr [0x12e5fe2c], eax */
  w32((uint32_t)(0x12e5fe2c), (EAX));
  /* 12e3562f cmp dword ptr [0x12e5fe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5fe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35636 jne 0x12e3563c */
  if (!C.zf) goto L_12e3563c;
  /* 12e35638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e3563a jmp 0x12e3565b */
  goto L_12e3565b;
L_12e3563c:;
  /* 12e3563c call 0x12e370c0 */
  push32(0x12e35641u); f_12e370c0();
  /* 12e35641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e35643 jne 0x12e35656 */
  if (!C.zf) goto L_12e35656;
  /* 12e35645 mov ecx, dword ptr [0x12e5fe2c] */
  ECX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e3564b push ecx */
  push32((uint32_t)(ECX));
  /* 12e3564c call dword ptr [0x12e60308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60308))), 0x12e35652u);
  /* 12e35652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e35654 jmp 0x12e3565b */
  goto L_12e3565b;
L_12e35656:;
  /* 12e35656 mov eax, 1 */
  EAX = (0x1u);
L_12e3565b:;
  /* 12e3565b pop ebp */
  EBP = (pop32());
  /* 12e3565c ret  */
  ESPCHK(0x12e35610u, _esp0);
  ESP += 4; return;
}

/* FUN_10005660 @ 0x12e35660 (156 bytes, 48 insns) */
void f_12e35660(void) {
  FTRACE(0x12e35660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35660 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35661 mov ebp, esp */
  EBP = (ESP);
  /* 12e35663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35666 mov eax, dword ptr [0x12e5fe28] */
  EAX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e3566b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3566e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e35675 jmp 0x12e35680 */
  goto L_12e35680;
L_12e35677:;
  /* 12e35677 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3567a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3567d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e35680:;
  /* 12e35680 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35683 cmp edx, dword ptr [0x12e5fe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e5fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35689 jge 0x12e356d6 */
  if ((C.sf==C.of)) goto L_12e356d6;
  /* 12e3568b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12e35690 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12e35695 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e35698 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e3569b push ecx */
  push32((uint32_t)(ECX));
  /* 12e3569c call dword ptr [0x12e60314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60314))), 0x12e356a2u);
  /* 12e356a2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12e356a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e356a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e356ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e356af push eax */
  push32((uint32_t)(EAX));
  /* 12e356b0 call dword ptr [0x12e60314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60314))), 0x12e356b6u);
  /* 12e356b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e356b9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e356bc push edx */
  push32((uint32_t)(EDX));
  /* 12e356bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12e356bf mov eax, dword ptr [0x12e5fe2c] */
  EAX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e356c4 push eax */
  push32((uint32_t)(EAX));
  /* 12e356c5 call dword ptr [0x12e60310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60310))), 0x12e356cbu);
  /* 12e356cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e356ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e356d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e356d4 jmp 0x12e35677 */
  goto L_12e35677;
L_12e356d6:;
  /* 12e356d6 mov edx, dword ptr [0x12e5fe28] */
  EDX = (r32((uint32_t)(0x12e5fe28)));
  /* 12e356dc push edx */
  push32((uint32_t)(EDX));
  /* 12e356dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12e356df mov eax, dword ptr [0x12e5fe2c] */
  EAX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e356e4 push eax */
  push32((uint32_t)(EAX));
  /* 12e356e5 call dword ptr [0x12e60310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60310))), 0x12e356ebu);
  /* 12e356eb mov ecx, dword ptr [0x12e5fe2c] */
  ECX = (r32((uint32_t)(0x12e5fe2c)));
  /* 12e356f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e356f2 call dword ptr [0x12e60308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60308))), 0x12e356f8u);
  /* 12e356f8 mov esp, ebp */
  ESP = (EBP);
  /* 12e356fa pop ebp */
  EBP = (pop32());
  /* 12e356fb ret  */
  ESPCHK(0x12e35660u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12e35700 (73 bytes, 19 insns) */
void f_12e35700(void) {
  FTRACE(0x12e35700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35700 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35701 mov ebp, esp */
  EBP = (ESP);
  /* 12e35703 cmp dword ptr [0x12e5e480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3570a je 0x12e3571e */
  if (C.zf) goto L_12e3571e;
  /* 12e3570c cmp dword ptr [0x12e5e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35713 jne 0x12e35747 */
  if (!C.zf) goto L_12e35747;
  /* 12e35715 cmp dword ptr [0x12e5e484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3571c jne 0x12e35747 */
  if (!C.zf) goto L_12e35747;
L_12e3571e:;
  /* 12e3571e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12e35723 call 0x12e35750 */
  push32(0x12e35728u); f_12e35750();
  /* 12e35728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3572b cmp dword ptr [0x12e5e5f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e5f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35732 je 0x12e3573a */
  if (C.zf) goto L_12e3573a;
  /* 12e35734 call dword ptr [0x12e5e5f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e5f0))), 0x12e3573au);
L_12e3573a:;
  /* 12e3573a push 0xff */
  push32((uint32_t)(0xffu));
  /* 12e3573f call 0x12e35750 */
  push32(0x12e35744u); f_12e35750();
  /* 12e35744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e35747:;
  /* 12e35747 pop ebp */
  EBP = (pop32());
  /* 12e35748 ret  */
  ESPCHK(0x12e35700u, _esp0);
  ESP += 4; return;
}

/* FUN_10005750 @ 0x12e35750 (447 bytes, 131 insns) */
void f_12e35750(void) {
  FTRACE(0x12e35750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35750 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35751 mov ebp, esp */
  EBP = (ESP);
  /* 12e35753 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35759 push ebx */
  push32((uint32_t)(EBX));
  /* 12e3575a push esi */
  push32((uint32_t)(ESI));
  /* 12e3575b push edi */
  push32((uint32_t)(EDI));
  /* 12e3575c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e35763 jmp 0x12e3576e */
  goto L_12e3576e;
L_12e35765:;
  /* 12e35765 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e35768 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3576b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e3576e:;
  /* 12e3576e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35772 jae 0x12e35787 */
  if (!C.cf) goto L_12e35787;
  /* 12e35774 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e35777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3577a cmp edx, dword ptr [ecx*8 + 0x12e5cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12e5cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35781 jne 0x12e35785 */
  if (!C.zf) goto L_12e35785;
  /* 12e35783 jmp 0x12e35787 */
  goto L_12e35787;
L_12e35785:;
  /* 12e35785 jmp 0x12e35765 */
  goto L_12e35765;
L_12e35787:;
  /* 12e35787 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3578a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3578d cmp ecx, dword ptr [eax*8 + 0x12e5cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12e5cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35794 jne 0x12e35908 */
  if (!C.zf) goto L_12e35908;
  /* 12e3579a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e357a1 je 0x12e357c4 */
  if (C.zf) goto L_12e357c4;
  /* 12e357a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e357a6 mov eax, dword ptr [edx*8 + 0x12e5cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12e5cab4)));
  /* 12e357ad push eax */
  push32((uint32_t)(EAX));
  /* 12e357ae push 0 */
  push32((uint32_t)(0x0u));
  /* 12e357b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e357b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e357b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e357b6 call 0x12e31ee0 */
  push32(0x12e357bbu); f_12e31ee0();
  /* 12e357bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e357be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e357c1 jne 0x12e357c4 */
  if (!C.zf) goto L_12e357c4;
  /* 12e357c3 int3  */
  x86_unimpl("int3 @ 0x12e357c3");
L_12e357c4:;
  /* 12e357c4 cmp dword ptr [0x12e5e480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e357cb je 0x12e357df */
  if (C.zf) goto L_12e357df;
  /* 12e357cd cmp dword ptr [0x12e5e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e357d4 jne 0x12e35818 */
  if (!C.zf) goto L_12e35818;
  /* 12e357d6 cmp dword ptr [0x12e5e484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e357dd jne 0x12e35818 */
  if (!C.zf) goto L_12e35818;
L_12e357df:;
  /* 12e357df push 0 */
  push32((uint32_t)(0x0u));
  /* 12e357e1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12e357e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e357e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e357e8 mov eax, dword ptr [edx*8 + 0x12e5cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12e5cab4)));
  /* 12e357ef push eax */
  push32((uint32_t)(EAX));
  /* 12e357f0 call 0x12e35c50 */
  push32(0x12e357f5u); f_12e35c50();
  /* 12e357f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e357f8 push eax */
  push32((uint32_t)(EAX));
  /* 12e357f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e357fc mov edx, dword ptr [ecx*8 + 0x12e5cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12e5cab4)));
  /* 12e35803 push edx */
  push32((uint32_t)(EDX));
  /* 12e35804 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12e35806 call dword ptr [0x12e6028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6028c))), 0x12e3580cu);
  /* 12e3580c push eax */
  push32((uint32_t)(EAX));
  /* 12e3580d call dword ptr [0x12e60290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60290))), 0x12e35813u);
  /* 12e35813 jmp 0x12e35908 */
  goto L_12e35908;
L_12e35818:;
  /* 12e35818 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3581f je 0x12e35908 */
  if (C.zf) goto L_12e35908;
  /* 12e35825 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12e3582a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12e35830 push eax */
  push32((uint32_t)(EAX));
  /* 12e35831 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e35833 call dword ptr [0x12e602a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602a8))), 0x12e35839u);
  /* 12e35839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e3583b jne 0x12e35851 */
  if (!C.zf) goto L_12e35851;
  /* 12e3583d push 0x12e5936c */
  push32((uint32_t)(0x12e5936cu));
  /* 12e35842 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12e35848 push ecx */
  push32((uint32_t)(ECX));
  /* 12e35849 call 0x12e35dd0 */
  push32(0x12e3584eu); f_12e35dd0();
  /* 12e3584e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e35851:;
  /* 12e35851 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12e35857 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e3585a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3585d push eax */
  push32((uint32_t)(EAX));
  /* 12e3585e call 0x12e35c50 */
  push32(0x12e35863u); f_12e35c50();
  /* 12e35863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35866 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35869 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3586c jbe 0x12e3589a */
  if ((C.cf||C.zf)) goto L_12e3589a;
  /* 12e3586e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12e35874 push ecx */
  push32((uint32_t)(ECX));
  /* 12e35875 call 0x12e35c50 */
  push32(0x12e3587au); f_12e35c50();
  /* 12e3587a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3587d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e35880 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12e35884 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e35887 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e35889 push 0x12e59368 */
  push32((uint32_t)(0x12e59368u));
  /* 12e3588e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e35891 push ecx */
  push32((uint32_t)(ECX));
  /* 12e35892 call 0x12e36640 */
  push32(0x12e35897u); f_12e36640();
  /* 12e35897 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3589a:;
  /* 12e3589a push 0x12e59dc0 */
  push32((uint32_t)(0x12e59dc0u));
  /* 12e3589f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12e358a5 push edx */
  push32((uint32_t)(EDX));
  /* 12e358a6 call 0x12e35dd0 */
  push32(0x12e358abu); f_12e35dd0();
  /* 12e358ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e358ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e358b1 push eax */
  push32((uint32_t)(EAX));
  /* 12e358b2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12e358b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e358b9 call 0x12e35de0 */
  push32(0x12e358beu); f_12e35de0();
  /* 12e358be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e358c1 push 0x12e592e0 */
  push32((uint32_t)(0x12e592e0u));
  /* 12e358c6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12e358cc push edx */
  push32((uint32_t)(EDX));
  /* 12e358cd call 0x12e35de0 */
  push32(0x12e358d2u); f_12e35de0();
  /* 12e358d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e358d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e358d8 mov ecx, dword ptr [eax*8 + 0x12e5cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12e5cab4)));
  /* 12e358df push ecx */
  push32((uint32_t)(ECX));
  /* 12e358e0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12e358e6 push edx */
  push32((uint32_t)(EDX));
  /* 12e358e7 call 0x12e35de0 */
  push32(0x12e358ecu); f_12e35de0();
  /* 12e358ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e358ef push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12e358f4 push 0x12e59d98 */
  push32((uint32_t)(0x12e59d98u));
  /* 12e358f9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12e358ff push eax */
  push32((uint32_t)(EAX));
  /* 12e35900 call 0x12e36580 */
  push32(0x12e35905u); f_12e36580();
  /* 12e35905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e35908:;
  /* 12e35908 pop edi */
  EDI = (pop32());
  /* 12e35909 pop esi */
  ESI = (pop32());
  /* 12e3590a pop ebx */
  EBX = (pop32());
  /* 12e3590b mov esp, ebp */
  ESP = (EBP);
  /* 12e3590d pop ebp */
  EBP = (pop32());
  /* 12e3590e ret  */
  ESPCHK(0x12e35750u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12e35910 (80 bytes, 27 insns) */
void f_12e35910(void) {
  FTRACE(0x12e35910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35910 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35911 mov ebp, esp */
  EBP = (ESP);
  /* 12e35913 push ecx */
  push32((uint32_t)(ECX));
  /* 12e35914 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3591b jmp 0x12e35926 */
  goto L_12e35926;
L_12e3591d:;
  /* 12e3591d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35920 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35923 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e35926:;
  /* 12e35926 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3592a jae 0x12e3593f */
  if (!C.cf) goto L_12e3593f;
  /* 12e3592c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3592f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35932 cmp edx, dword ptr [ecx*8 + 0x12e5cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12e5cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35939 jne 0x12e3593d */
  if (!C.zf) goto L_12e3593d;
  /* 12e3593b jmp 0x12e3593f */
  goto L_12e3593f;
L_12e3593d:;
  /* 12e3593d jmp 0x12e3591d */
  goto L_12e3591d;
L_12e3593f:;
  /* 12e3593f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35942 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35945 cmp ecx, dword ptr [eax*8 + 0x12e5cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12e5cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3594c jne 0x12e3595a */
  if (!C.zf) goto L_12e3595a;
  /* 12e3594e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35951 mov eax, dword ptr [edx*8 + 0x12e5cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12e5cab4)));
  /* 12e35958 jmp 0x12e3595c */
  goto L_12e3595c;
L_12e3595a:;
  /* 12e3595a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e3595c:;
  /* 12e3595c mov esp, ebp */
  ESP = (EBP);
  /* 12e3595e pop ebp */
  EBP = (pop32());
  /* 12e3595f ret  */
  ESPCHK(0x12e35910u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12e35960 (66 bytes, 28 insns) */
void f_12e35960(void) {
  FTRACE(0x12e35960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35960 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35961 mov ebp, esp */
  EBP = (ESP);
  /* 12e35963 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35967 jne 0x12e35987 */
  if (!C.zf) goto L_12e35987;
  /* 12e35969 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3596d jge 0x12e35987 */
  if ((C.sf==C.of)) goto L_12e35987;
  /* 12e3596f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e35971 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35974 push eax */
  push32((uint32_t)(EAX));
  /* 12e35975 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e35978 push ecx */
  push32((uint32_t)(ECX));
  /* 12e35979 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3597c push edx */
  push32((uint32_t)(EDX));
  /* 12e3597d call 0x12e359b0 */
  push32(0x12e35982u); f_12e359b0();
  /* 12e35982 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35985 jmp 0x12e3599d */
  goto L_12e3599d;
L_12e35987:;
  /* 12e35987 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e35989 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e3598c push eax */
  push32((uint32_t)(EAX));
  /* 12e3598d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e35990 push ecx */
  push32((uint32_t)(ECX));
  /* 12e35991 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35994 push edx */
  push32((uint32_t)(EDX));
  /* 12e35995 call 0x12e359b0 */
  push32(0x12e3599au); f_12e359b0();
  /* 12e3599a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3599d:;
  /* 12e3599d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e359a0 pop ebp */
  EBP = (pop32());
  /* 12e359a1 ret  */
  ESPCHK(0x12e35960u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12e359b0 (194 bytes, 71 insns) */
void f_12e359b0(void) {
  FTRACE(0x12e359b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e359b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e359b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e359b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e359b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e359b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e359bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e359c0 je 0x12e359d9 */
  if (C.zf) goto L_12e359d9;
  /* 12e359c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e359c5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12e359c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e359cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e359ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e359d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e359d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e359d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e359d9:;
  /* 12e359d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e359dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e359df:;
  /* 12e359df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e359e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e359e4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e359e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e359ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e359ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e359ef div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e359f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e359f5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e359f9 jbe 0x12e35a11 */
  if ((C.cf||C.zf)) goto L_12e35a11;
  /* 12e359fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e359fe add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35a01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35a04 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e35a06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35a09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35a0c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e35a0f jmp 0x12e35a25 */
  goto L_12e35a25;
L_12e35a11:;
  /* 12e35a11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e35a14 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35a17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35a1a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e35a1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35a1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35a22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e35a25:;
  /* 12e35a25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35a29 ja 0x12e359df */
  if ((!C.cf&&!C.zf)) goto L_12e359df;
  /* 12e35a2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35a2e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12e35a31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35a34 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35a37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e35a3a:;
  /* 12e35a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35a3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e35a3f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12e35a42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35a45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e35a48 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e35a4a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e35a4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e35a4f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12e35a52 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12e35a54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35a57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35a5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e35a5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e35a60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35a63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e35a66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e35a69 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35a6c jb 0x12e35a3a */
  if (C.cf) goto L_12e35a3a;
  /* 12e35a6e mov esp, ebp */
  ESP = (EBP);
  /* 12e35a70 pop ebp */
  EBP = (pop32());
  /* 12e35a71 ret  */
  ESPCHK(0x12e359b0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12e35a80 (63 bytes, 24 insns) */
void f_12e35a80(void) {
  FTRACE(0x12e35a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35a81 mov ebp, esp */
  EBP = (ESP);
  /* 12e35a83 push ecx */
  push32((uint32_t)(ECX));
  /* 12e35a84 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35a88 jne 0x12e35a99 */
  if (!C.zf) goto L_12e35a99;
  /* 12e35a8a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35a8e jge 0x12e35a99 */
  if ((C.sf==C.of)) goto L_12e35a99;
  /* 12e35a90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e35a97 jmp 0x12e35aa0 */
  goto L_12e35aa0;
L_12e35a99:;
  /* 12e35a99 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e35aa0:;
  /* 12e35aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35aa3 push eax */
  push32((uint32_t)(EAX));
  /* 12e35aa4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e35aa8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e35aab push edx */
  push32((uint32_t)(EDX));
  /* 12e35aac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35aaf push eax */
  push32((uint32_t)(EAX));
  /* 12e35ab0 call 0x12e359b0 */
  push32(0x12e35ab5u); f_12e359b0();
  /* 12e35ab5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35ab8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e35abb mov esp, ebp */
  ESP = (EBP);
  /* 12e35abd pop ebp */
  EBP = (pop32());
  /* 12e35abe ret  */
  ESPCHK(0x12e35a80u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12e35ac0 (30 bytes, 14 insns) */
void f_12e35ac0(void) {
  FTRACE(0x12e35ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12e35ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e35ac5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35ac8 push eax */
  push32((uint32_t)(EAX));
  /* 12e35ac9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e35acc push ecx */
  push32((uint32_t)(ECX));
  /* 12e35acd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35ad0 push edx */
  push32((uint32_t)(EDX));
  /* 12e35ad1 call 0x12e359b0 */
  push32(0x12e35ad6u); f_12e359b0();
  /* 12e35ad6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35ad9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e35adc pop ebp */
  EBP = (pop32());
  /* 12e35add ret  */
  ESPCHK(0x12e35ac0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12e35ae0 (72 bytes, 28 insns) */
void f_12e35ae0(void) {
  FTRACE(0x12e35ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12e35ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e35ae4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35ae8 jne 0x12e35b01 */
  if (!C.zf) goto L_12e35b01;
  /* 12e35aea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35aee jg 0x12e35b01 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e35b01;
  /* 12e35af0 jl 0x12e35af8 */
  if ((C.sf!=C.of)) goto L_12e35af8;
  /* 12e35af2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35af6 jae 0x12e35b01 */
  if (!C.cf) goto L_12e35b01;
L_12e35af8:;
  /* 12e35af8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e35aff jmp 0x12e35b08 */
  goto L_12e35b08;
L_12e35b01:;
  /* 12e35b01 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e35b08:;
  /* 12e35b08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35b0b push eax */
  push32((uint32_t)(EAX));
  /* 12e35b0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e35b0f push ecx */
  push32((uint32_t)(ECX));
  /* 12e35b10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35b13 push edx */
  push32((uint32_t)(EDX));
  /* 12e35b14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e35b17 push eax */
  push32((uint32_t)(EAX));
  /* 12e35b18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35b1b push ecx */
  push32((uint32_t)(ECX));
  /* 12e35b1c call 0x12e35b30 */
  push32(0x12e35b21u); f_12e35b30();
  /* 12e35b21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35b24 mov esp, ebp */
  ESP = (EBP);
  /* 12e35b26 pop ebp */
  EBP = (pop32());
  /* 12e35b27 ret  */
  ESPCHK(0x12e35ae0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12e35b30 (242 bytes, 91 insns) */
void f_12e35b30(void) {
  FTRACE(0x12e35b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35b31 mov ebp, esp */
  EBP = (ESP);
  /* 12e35b33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35b36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e35b3c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35b40 je 0x12e35b64 */
  if (C.zf) goto L_12e35b64;
  /* 12e35b42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35b45 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12e35b48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35b4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35b4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e35b51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35b54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e35b56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e35b59 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35b5c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e35b5e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e35b61 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12e35b64:;
  /* 12e35b64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35b67 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e35b6a:;
  /* 12e35b6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e35b6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e35b6f push ecx */
  push32((uint32_t)(ECX));
  /* 12e35b70 push eax */
  push32((uint32_t)(EAX));
  /* 12e35b71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e35b74 push edx */
  push32((uint32_t)(EDX));
  /* 12e35b75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35b78 push eax */
  push32((uint32_t)(EAX));
  /* 12e35b79 call 0x12e39ab0 */
  push32(0x12e35b7eu); f_12e39ab0();
  /* 12e35b7e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e35b81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e35b84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e35b86 push edx */
  push32((uint32_t)(EDX));
  /* 12e35b87 push ecx */
  push32((uint32_t)(ECX));
  /* 12e35b88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e35b8b push eax */
  push32((uint32_t)(EAX));
  /* 12e35b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35b8f push ecx */
  push32((uint32_t)(ECX));
  /* 12e35b90 call 0x12e39a40 */
  push32(0x12e35b95u); f_12e39a40();
  /* 12e35b95 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e35b98 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12e35b9b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35b9f jbe 0x12e35bb7 */
  if ((C.cf||C.zf)) goto L_12e35bb7;
  /* 12e35ba1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e35ba4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35baa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e35bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35baf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35bb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e35bb5 jmp 0x12e35bcb */
  goto L_12e35bcb;
L_12e35bb7:;
  /* 12e35bb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e35bba add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35bbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35bc0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e35bc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35bc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35bc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e35bcb:;
  /* 12e35bcb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35bcf ja 0x12e35b6a */
  if ((!C.cf&&!C.zf)) goto L_12e35b6a;
  /* 12e35bd1 jb 0x12e35bd9 */
  if (C.cf) goto L_12e35bd9;
  /* 12e35bd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35bd7 ja 0x12e35b6a */
  if ((!C.cf&&!C.zf)) goto L_12e35b6a;
L_12e35bd9:;
  /* 12e35bd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35bdc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12e35bdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35be2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35be5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e35be8:;
  /* 12e35be8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35beb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e35bed mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12e35bf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35bf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e35bf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e35bf8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e35bfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e35bfd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12e35c00 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12e35c02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e35c05 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35c08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e35c0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e35c0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35c11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e35c14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e35c17 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35c1a jb 0x12e35be8 */
  if (C.cf) goto L_12e35be8;
  /* 12e35c1c mov esp, ebp */
  ESP = (EBP);
  /* 12e35c1e pop ebp */
  EBP = (pop32());
  /* 12e35c1f ret 0x14 */
  ESPCHK(0x12e35b30u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12e35c30 (31 bytes, 15 insns) */
void f_12e35c30(void) {
  FTRACE(0x12e35c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35c31 mov ebp, esp */
  EBP = (ESP);
  /* 12e35c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e35c35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e35c38 push eax */
  push32((uint32_t)(EAX));
  /* 12e35c39 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35c3c push ecx */
  push32((uint32_t)(ECX));
  /* 12e35c3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e35c40 push edx */
  push32((uint32_t)(EDX));
  /* 12e35c41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35c44 push eax */
  push32((uint32_t)(EAX));
  /* 12e35c45 call 0x12e35b30 */
  push32(0x12e35c4au); f_12e35b30();
  /* 12e35c4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35c4d pop ebp */
  EBP = (pop32());
  /* 12e35c4e ret  */
  ESPCHK(0x12e35c30u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12e35c50 (123 bytes, 44 insns) */
void f_12e35c50(void) {
  FTRACE(0x12e35c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35c50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e35c54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12e35c5a je 0x12e35c70 */
  if (C.zf) goto L_12e35c70;
L_12e35c5c:;
  /* 12e35c5c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12e35c5e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12e35c5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e35c61 je 0x12e35ca3 */
  if (C.zf) goto L_12e35ca3;
  /* 12e35c63 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12e35c69 jne 0x12e35c5c */
  if (!C.zf) goto L_12e35c5c;
  /* 12e35c6b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12e35c70:;
  /* 12e35c70 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12e35c72 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12e35c77 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35c79 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e35c7c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e35c7e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35c81 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12e35c86 je 0x12e35c70 */
  if (C.zf) goto L_12e35c70;
  /* 12e35c88 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12e35c8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e35c8d je 0x12e35cc1 */
  if (C.zf) goto L_12e35cc1;
  /* 12e35c8f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12e35c91 je 0x12e35cb7 */
  if (C.zf) goto L_12e35cb7;
  /* 12e35c93 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12e35c98 je 0x12e35cad */
  if (C.zf) goto L_12e35cad;
  /* 12e35c9a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12e35c9f je 0x12e35ca3 */
  if (C.zf) goto L_12e35ca3;
  /* 12e35ca1 jmp 0x12e35c70 */
  goto L_12e35c70;
L_12e35ca3:;
  /* 12e35ca3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12e35ca6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e35caa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35cac ret  */
  ESPCHK(0x12e35c50u, _esp0);
  ESP += 4; return;
L_12e35cad:;
  /* 12e35cad lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12e35cb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e35cb4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35cb6 ret  */
  ESPCHK(0x12e35c50u, _esp0);
  ESP += 4; return;
L_12e35cb7:;
  /* 12e35cb7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12e35cba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e35cbe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35cc0 ret  */
  ESPCHK(0x12e35c50u, _esp0);
  ESP += 4; return;
L_12e35cc1:;
  /* 12e35cc1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12e35cc4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e35cc8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35cca ret  */
  ESPCHK(0x12e35c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cd0 @ 0x12e35cd0 (249 bytes, 93 insns) */
void f_12e35cd0(void) {
  FTRACE(0x12e35cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12e35cd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e35cd7 push esi */
  push32((uint32_t)(ESI));
  /* 12e35cd8 push edi */
  push32((uint32_t)(EDI));
  /* 12e35cd9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12e35cdc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e35cdf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12e35ce2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12e35ce5:;
  /* 12e35ce5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35ce9 jne 0x12e35d09 */
  if (!C.zf) goto L_12e35d09;
  /* 12e35ceb push 0x12e59df8 */
  push32((uint32_t)(0x12e59df8u));
  /* 12e35cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e35cf2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12e35cf4 push 0x12e59dec */
  push32((uint32_t)(0x12e59decu));
  /* 12e35cf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e35cfb call 0x12e31ee0 */
  push32(0x12e35d00u); f_12e31ee0();
  /* 12e35d00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35d03 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35d06 jne 0x12e35d09 */
  if (!C.zf) goto L_12e35d09;
  /* 12e35d08 int3  */
  x86_unimpl("int3 @ 0x12e35d08");
L_12e35d09:;
  /* 12e35d09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e35d0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e35d0d jne 0x12e35ce5 */
  if (!C.zf) goto L_12e35ce5;
L_12e35d0f:;
  /* 12e35d0f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35d13 jne 0x12e35d33 */
  if (!C.zf) goto L_12e35d33;
  /* 12e35d15 push 0x12e59ddc */
  push32((uint32_t)(0x12e59ddcu));
  /* 12e35d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e35d1c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12e35d1e push 0x12e59dec */
  push32((uint32_t)(0x12e59decu));
  /* 12e35d23 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e35d25 call 0x12e31ee0 */
  push32(0x12e35d2au); f_12e31ee0();
  /* 12e35d2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35d2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35d30 jne 0x12e35d33 */
  if (!C.zf) goto L_12e35d33;
  /* 12e35d32 int3  */
  x86_unimpl("int3 @ 0x12e35d32");
L_12e35d33:;
  /* 12e35d33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e35d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e35d37 jne 0x12e35d0f */
  if (!C.zf) goto L_12e35d0f;
  /* 12e35d39 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35d3c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12e35d43 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35d49 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e35d4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35d4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35d52 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e35d54 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35d57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e35d5a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12e35d5d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e35d60 push edx */
  push32((uint32_t)(EDX));
  /* 12e35d61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35d64 push eax */
  push32((uint32_t)(EAX));
  /* 12e35d65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35d68 push ecx */
  push32((uint32_t)(ECX));
  /* 12e35d69 call 0x12e39db0 */
  push32(0x12e35d6eu); f_12e39db0();
  /* 12e35d6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35d71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e35d74 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35d77 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e35d7a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35d7d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35d80 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12e35d83 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35d86 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35d8a jl 0x12e35dae */
  if ((C.sf!=C.of)) goto L_12e35dae;
  /* 12e35d8c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35d8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e35d91 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12e35d94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e35d96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e35d9c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12e35d9f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35da2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e35da4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35da7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35daa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e35dac jmp 0x12e35dbf */
  goto L_12e35dbf;
L_12e35dae:;
  /* 12e35dae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35db1 push eax */
  push32((uint32_t)(EAX));
  /* 12e35db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e35db4 call 0x12e39b30 */
  push32(0x12e35db9u); f_12e39b30();
  /* 12e35db9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35dbc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12e35dbf:;
  /* 12e35dbf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e35dc2 pop edi */
  EDI = (pop32());
  /* 12e35dc3 pop esi */
  ESI = (pop32());
  /* 12e35dc4 pop ebx */
  EBX = (pop32());
  /* 12e35dc5 mov esp, ebp */
  ESP = (EBP);
  /* 12e35dc7 pop ebp */
  EBP = (pop32());
  /* 12e35dc8 ret  */
  ESPCHK(0x12e35cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x12e35dd0 (7 bytes, 3 insns) */
void f_12e35dd0(void) {
  FTRACE(0x12e35dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35dd0 push edi */
  push32((uint32_t)(EDI));
  /* 12e35dd1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12e35dd5 jmp 0x12e35e41 */
  jmp_ind(0x12e35e41u); return;
}

/* FUN_10005de0 @ 0x12e35de0 (224 bytes, 84 insns) */
void f_12e35de0(void) {
  FTRACE(0x12e35de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35de0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e35de4 push edi */
  push32((uint32_t)(EDI));
  /* 12e35de5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12e35deb je 0x12e35dfc */
  if (C.zf) goto L_12e35dfc;
L_12e35ded:;
  /* 12e35ded mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12e35def inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12e35df0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e35df2 je 0x12e35e2f */
  if (C.zf) goto L_12e35e2f;
  /* 12e35df4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12e35dfa jne 0x12e35ded */
  if (!C.zf) goto L_12e35ded;
L_12e35dfc:;
  /* 12e35dfc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12e35dfe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12e35e03 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35e05 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e35e08 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e35e0a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35e0d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12e35e12 je 0x12e35dfc */
  if (C.zf) goto L_12e35dfc;
  /* 12e35e14 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12e35e17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e35e19 je 0x12e35e3e */
  if (C.zf) goto L_12e35e3e;
  /* 12e35e1b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12e35e1d je 0x12e35e39 */
  if (C.zf) goto L_12e35e39;
  /* 12e35e1f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12e35e24 je 0x12e35e34 */
  if (C.zf) goto L_12e35e34;
  /* 12e35e26 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12e35e2b je 0x12e35e2f */
  if (C.zf) goto L_12e35e2f;
  /* 12e35e2d jmp 0x12e35dfc */
  goto L_12e35dfc;
L_12e35e2f:;
  /* 12e35e2f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12e35e32 jmp 0x12e35e41 */
  goto L_12e35e41;
L_12e35e34:;
  /* 12e35e34 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12e35e37 jmp 0x12e35e41 */
  goto L_12e35e41;
L_12e35e39:;
  /* 12e35e39 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12e35e3c jmp 0x12e35e41 */
  goto L_12e35e41;
L_12e35e3e:;
  /* 12e35e3e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12e35e41:;
  /* 12e35e41 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e35e45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12e35e4b je 0x12e35e66 */
  if (C.zf) goto L_12e35e66;
L_12e35e4d:;
  /* 12e35e4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e35e4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12e35e50 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12e35e52 je 0x12e35eb8 */
  if (C.zf) goto L_12e35eb8;
  /* 12e35e54 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12e35e56 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e35e57 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12e35e5d jne 0x12e35e4d */
  if (!C.zf) goto L_12e35e4d;
  /* 12e35e5f jmp 0x12e35e66 */
  goto L_12e35e66;
L_12e35e61:;
  /* 12e35e61 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12e35e63 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12e35e66:;
  /* 12e35e66 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12e35e6b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12e35e6d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35e6f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e35e72 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e35e74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e35e76 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35e79 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12e35e7e je 0x12e35e61 */
  if (C.zf) goto L_12e35e61;
  /* 12e35e80 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12e35e82 je 0x12e35eb8 */
  if (C.zf) goto L_12e35eb8;
  /* 12e35e84 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12e35e86 je 0x12e35eaf */
  if (C.zf) goto L_12e35eaf;
  /* 12e35e88 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12e35e8e je 0x12e35ea2 */
  if (C.zf) goto L_12e35ea2;
  /* 12e35e90 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12e35e96 je 0x12e35e9a */
  if (C.zf) goto L_12e35e9a;
  /* 12e35e98 jmp 0x12e35e61 */
  goto L_12e35e61;
L_12e35e9a:;
  /* 12e35e9a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12e35e9c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e35ea0 pop edi */
  EDI = (pop32());
  /* 12e35ea1 ret  */
  ESPCHK(0x12e35de0u, _esp0);
  ESP += 4; return;
L_12e35ea2:;
  /* 12e35ea2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12e35ea5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e35ea9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12e35ead pop edi */
  EDI = (pop32());
  /* 12e35eae ret  */
  ESPCHK(0x12e35de0u, _esp0);
  ESP += 4; return;
L_12e35eaf:;
  /* 12e35eaf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12e35eb2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e35eb6 pop edi */
  EDI = (pop32());
  /* 12e35eb7 ret  */
  ESPCHK(0x12e35de0u, _esp0);
  ESP += 4; return;
L_12e35eb8:;
  /* 12e35eb8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12e35eba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e35ebe pop edi */
  EDI = (pop32());
  /* 12e35ebf ret  */
  ESPCHK(0x12e35de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec0 @ 0x12e35ec0 (243 bytes, 91 insns) */
void f_12e35ec0(void) {
  FTRACE(0x12e35ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12e35ec3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35ec6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e35ec7 push esi */
  push32((uint32_t)(ESI));
  /* 12e35ec8 push edi */
  push32((uint32_t)(EDI));
  /* 12e35ec9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12e35ecc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e35ecf:;
  /* 12e35ecf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35ed3 jne 0x12e35ef3 */
  if (!C.zf) goto L_12e35ef3;
  /* 12e35ed5 push 0x12e59df8 */
  push32((uint32_t)(0x12e59df8u));
  /* 12e35eda push 0 */
  push32((uint32_t)(0x0u));
  /* 12e35edc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12e35ede push 0x12e59e08 */
  push32((uint32_t)(0x12e59e08u));
  /* 12e35ee3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e35ee5 call 0x12e31ee0 */
  push32(0x12e35eeau); f_12e31ee0();
  /* 12e35eea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35eed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35ef0 jne 0x12e35ef3 */
  if (!C.zf) goto L_12e35ef3;
  /* 12e35ef2 int3  */
  x86_unimpl("int3 @ 0x12e35ef2");
L_12e35ef3:;
  /* 12e35ef3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e35ef5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e35ef7 jne 0x12e35ecf */
  if (!C.zf) goto L_12e35ecf;
L_12e35ef9:;
  /* 12e35ef9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35efd jne 0x12e35f1d */
  if (!C.zf) goto L_12e35f1d;
  /* 12e35eff push 0x12e59ddc */
  push32((uint32_t)(0x12e59ddcu));
  /* 12e35f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e35f06 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12e35f08 push 0x12e59e08 */
  push32((uint32_t)(0x12e59e08u));
  /* 12e35f0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e35f0f call 0x12e31ee0 */
  push32(0x12e35f14u); f_12e31ee0();
  /* 12e35f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35f17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35f1a jne 0x12e35f1d */
  if (!C.zf) goto L_12e35f1d;
  /* 12e35f1c int3  */
  x86_unimpl("int3 @ 0x12e35f1c");
L_12e35f1d:;
  /* 12e35f1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e35f1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e35f21 jne 0x12e35ef9 */
  if (!C.zf) goto L_12e35ef9;
  /* 12e35f23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35f26 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12e35f2d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35f30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35f33 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12e35f36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35f39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e35f3c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e35f3e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35f41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e35f44 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12e35f47 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e35f4a push ecx */
  push32((uint32_t)(ECX));
  /* 12e35f4b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e35f4e push edx */
  push32((uint32_t)(EDX));
  /* 12e35f4f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35f52 push eax */
  push32((uint32_t)(EAX));
  /* 12e35f53 call 0x12e39db0 */
  push32(0x12e35f58u); f_12e39db0();
  /* 12e35f58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35f5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e35f5e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35f61 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e35f64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35f67 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35f6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e35f6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35f70 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35f74 jl 0x12e35f98 */
  if ((C.sf!=C.of)) goto L_12e35f98;
  /* 12e35f76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35f79 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e35f7b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e35f7e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e35f80 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e35f86 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12e35f89 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35f8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e35f8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35f91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35f94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e35f96 jmp 0x12e35fa9 */
  goto L_12e35fa9;
L_12e35f98:;
  /* 12e35f98 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e35f9b push edx */
  push32((uint32_t)(EDX));
  /* 12e35f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e35f9e call 0x12e39b30 */
  push32(0x12e35fa3u); f_12e39b30();
  /* 12e35fa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e35fa6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12e35fa9:;
  /* 12e35fa9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e35fac pop edi */
  EDI = (pop32());
  /* 12e35fad pop esi */
  ESI = (pop32());
  /* 12e35fae pop ebx */
  EBX = (pop32());
  /* 12e35faf mov esp, ebp */
  ESP = (EBP);
  /* 12e35fb1 pop ebp */
  EBP = (pop32());
  /* 12e35fb2 ret  */
  ESPCHK(0x12e35ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fc0 @ 0x12e35fc0 (47 bytes, 17 insns) */
void f_12e35fc0(void) {
  FTRACE(0x12e35fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e35fc1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35fc6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12e35fca jb 0x12e35fe0 */
  if (C.cf) goto L_12e35fe0;
L_12e35fcc:;
  /* 12e35fcc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35fd2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35fd7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12e35fd9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35fde jae 0x12e35fcc */
  if (!C.cf) goto L_12e35fcc;
L_12e35fe0:;
  /* 12e35fe0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35fe2 mov eax, esp */
  EAX = (ESP);
  /* 12e35fe4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12e35fe6 mov esp, ecx */
  ESP = (ECX);
  /* 12e35fe8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e35fea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e35fed push eax */
  push32((uint32_t)(EAX));
  /* 12e35fee ret  */
  ESPCHK(0x12e35fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff0 @ 0x12e35ff0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12e35ff0(void) {
  FTRACE(0x12e35ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e35ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e35ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12e35ff3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e35ff6 push esi */
  push32((uint32_t)(ESI));
  /* 12e35ff7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e35ffb je 0x12e36003 */
  if (C.zf) goto L_12e36003;
  /* 12e35ffd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36001 jne 0x12e36008 */
  if (!C.zf) goto L_12e36008;
L_12e36003:;
  /* 12e36003 jmp 0x12e361d8 */
  goto L_12e361d8;
L_12e36008:;
  /* 12e36008 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3600c je 0x12e36024 */
  if (C.zf) goto L_12e36024;
  /* 12e3600e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36012 je 0x12e36024 */
  if (C.zf) goto L_12e36024;
  /* 12e36014 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36018 je 0x12e36024 */
  if (C.zf) goto L_12e36024;
  /* 12e3601a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3601e jne 0x12e36101 */
  if (!C.zf) goto L_12e36101;
L_12e36024:;
  /* 12e36024 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e36026 call 0x12e36820 */
  push32(0x12e3602bu); f_12e36820();
  /* 12e3602b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3602e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36032 je 0x12e3603a */
  if (C.zf) goto L_12e3603a;
  /* 12e36034 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36038 jne 0x12e3607f */
  if (!C.zf) goto L_12e3607f;
L_12e3603a:;
  /* 12e3603a cmp dword ptr [0x12e5e604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36041 jne 0x12e3607f */
  if (!C.zf) goto L_12e3607f;
  /* 12e36043 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e36045 push 0x12e36220 */
  push32((uint32_t)(0x12e36220u));
  /* 12e3604a call dword ptr [0x12e60318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60318))), 0x12e36050u);
  /* 12e36050 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36053 jne 0x12e36061 */
  if (!C.zf) goto L_12e36061;
  /* 12e36055 mov dword ptr [0x12e5e604], 1 */
  w32((uint32_t)(0x12e5e604), (0x1u));
  /* 12e3605f jmp 0x12e3607f */
  goto L_12e3607f;
L_12e36061:;
  /* 12e36061 call dword ptr [0x12e602d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602d0))), 0x12e36067u);
  /* 12e36067 mov esi, eax */
  ESI = (EAX);
  /* 12e36069 call 0x12e3ad00 */
  push32(0x12e3606eu); f_12e3ad00();
  /* 12e3606e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12e36070 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e36072 call 0x12e368c0 */
  push32(0x12e36077u); f_12e368c0();
  /* 12e36077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3607a jmp 0x12e361d8 */
  goto L_12e361d8;
L_12e3607f:;
  /* 12e3607f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36082 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e36085 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36088 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e3608b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e3608e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36092 ja 0x12e360f2 */
  if ((!C.cf&&!C.zf)) goto L_12e360f2;
  /* 12e36094 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36097 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e36099 mov dl, byte ptr [eax + 0x12e361ff] */
  DL = (r8((uint32_t)(EAX + 0x12e361ff)));
  /* 12e3609f jmp dword ptr [edx*4 + 0x12e361eb] */
  switch (EDX) {
    case 0: goto L_12e360a6;
    case 1: goto L_12e360e0;
    case 2: goto L_12e360ba;
    case 3: goto L_12e360cd;
    case 4: goto L_12e360f2;
    default: x86_unimpl("switch@0x12e3609f out of table"); return;
  }
L_12e360a6:;
  /* 12e360a6 mov ecx, dword ptr [0x12e5e5f4] */
  ECX = (r32((uint32_t)(0x12e5e5f4)));
  /* 12e360ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e360af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e360b2 mov dword ptr [0x12e5e5f4], edx */
  w32((uint32_t)(0x12e5e5f4), (EDX));
  /* 12e360b8 jmp 0x12e360f2 */
  goto L_12e360f2;
L_12e360ba:;
  /* 12e360ba mov eax, dword ptr [0x12e5e5f8] */
  EAX = (r32((uint32_t)(0x12e5e5f8)));
  /* 12e360bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e360c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e360c5 mov dword ptr [0x12e5e5f8], ecx */
  w32((uint32_t)(0x12e5e5f8), (ECX));
  /* 12e360cb jmp 0x12e360f2 */
  goto L_12e360f2;
L_12e360cd:;
  /* 12e360cd mov edx, dword ptr [0x12e5e5fc] */
  EDX = (r32((uint32_t)(0x12e5e5fc)));
  /* 12e360d3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e360d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e360d9 mov dword ptr [0x12e5e5fc], eax */
  w32((uint32_t)(0x12e5e5fc), (EAX));
  /* 12e360de jmp 0x12e360f2 */
  goto L_12e360f2;
L_12e360e0:;
  /* 12e360e0 mov ecx, dword ptr [0x12e5e600] */
  ECX = (r32((uint32_t)(0x12e5e600)));
  /* 12e360e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e360e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e360ec mov dword ptr [0x12e5e600], edx */
  w32((uint32_t)(0x12e5e600), (EDX));
L_12e360f2:;
  /* 12e360f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e360f4 call 0x12e368c0 */
  push32(0x12e360f9u); f_12e368c0();
  /* 12e360f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e360fc jmp 0x12e361d3 */
  goto L_12e361d3;
L_12e36101:;
  /* 12e36101 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36105 je 0x12e36118 */
  if (C.zf) goto L_12e36118;
  /* 12e36107 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3610b je 0x12e36118 */
  if (C.zf) goto L_12e36118;
  /* 12e3610d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36111 je 0x12e36118 */
  if (C.zf) goto L_12e36118;
  /* 12e36113 jmp 0x12e361d8 */
  goto L_12e361d8;
L_12e36118:;
  /* 12e36118 call 0x12e32860 */
  push32(0x12e3611du); f_12e32860();
  /* 12e3611d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e36120 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36123 cmp dword ptr [eax + 0x50], 0x12e5cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12e5cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3612a jne 0x12e36175 */
  if (!C.zf) goto L_12e36175;
  /* 12e3612c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12e36131 push 0x12e59e14 */
  push32((uint32_t)(0x12e59e14u));
  /* 12e36136 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e36138 mov ecx, dword ptr [0x12e5cc80] */
  ECX = (r32((uint32_t)(0x12e5cc80)));
  /* 12e3613e push ecx */
  push32((uint32_t)(ECX));
  /* 12e3613f call 0x12e32e20 */
  push32(0x12e36144u); f_12e32e20();
  /* 12e36144 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36147 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3614a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12e3614d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36150 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36154 je 0x12e36173 */
  if (C.zf) goto L_12e36173;
  /* 12e36156 mov ecx, dword ptr [0x12e5cc80] */
  ECX = (r32((uint32_t)(0x12e5cc80)));
  /* 12e3615c push ecx */
  push32((uint32_t)(ECX));
  /* 12e3615d push 0x12e5cc00 */
  push32((uint32_t)(0x12e5cc00u));
  /* 12e36162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36165 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12e36168 push eax */
  push32((uint32_t)(EAX));
  /* 12e36169 call 0x12e39700 */
  push32(0x12e3616eu); f_12e39700();
  /* 12e3616e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36171 jmp 0x12e36175 */
  goto L_12e36175;
L_12e36173:;
  /* 12e36173 jmp 0x12e361d8 */
  goto L_12e361d8;
L_12e36175:;
  /* 12e36175 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36178 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12e3617b push edx */
  push32((uint32_t)(EDX));
  /* 12e3617c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3617f push eax */
  push32((uint32_t)(EAX));
  /* 12e36180 call 0x12e36500 */
  push32(0x12e36185u); f_12e36500();
  /* 12e36185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36188 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3618b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3618f jne 0x12e36193 */
  if (!C.zf) goto L_12e36193;
  /* 12e36191 jmp 0x12e361d8 */
  goto L_12e361d8;
L_12e36193:;
  /* 12e36193 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36196 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e36199 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e3619c:;
  /* 12e3619c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3619f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e361a2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e361a5 jne 0x12e361d3 */
  if (!C.zf) goto L_12e361d3;
  /* 12e361a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e361aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e361ad mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e361b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e361b3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e361b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e361b9 mov edx, dword ptr [0x12e5cc84] */
  EDX = (r32((uint32_t)(0x12e5cc84)));
  /* 12e361bf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e361c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e361c5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12e361c8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e361ca cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e361cd jb 0x12e361d1 */
  if (C.cf) goto L_12e361d1;
  /* 12e361cf jmp 0x12e361d3 */
  goto L_12e361d3;
L_12e361d1:;
  /* 12e361d1 jmp 0x12e3619c */
  goto L_12e3619c;
L_12e361d3:;
  /* 12e361d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e361d6 jmp 0x12e361e6 */
  goto L_12e361e6;
L_12e361d8:;
  /* 12e361d8 call 0x12e3acf0 */
  push32(0x12e361ddu); f_12e3acf0();
  /* 12e361dd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12e361e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e361e6:;
  /* 12e361e6 pop esi */
  ESI = (pop32());
  /* 12e361e7 mov esp, ebp */
  ESP = (EBP);
  /* 12e361e9 pop ebp */
  EBP = (pop32());
  /* 12e361ea ret  */
  ESPCHK(0x12e35ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x12e36220 (146 bytes, 45 insns) */
void f_12e36220(void) {
  FTRACE(0x12e36220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36220 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36221 mov ebp, esp */
  EBP = (ESP);
  /* 12e36223 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e36226 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e36228 call 0x12e36820 */
  push32(0x12e3622du); f_12e36820();
  /* 12e3622d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36230 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36234 jne 0x12e3624e */
  if (!C.zf) goto L_12e3624e;
  /* 12e36236 mov dword ptr [ebp - 8], 0x12e5e5f4 */
  w32((uint32_t)(EBP + -0x8), (0x12e5e5f4u));
  /* 12e3623d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36240 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e36242 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e36245 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12e3624c jmp 0x12e36264 */
  goto L_12e36264;
L_12e3624e:;
  /* 12e3624e mov dword ptr [ebp - 8], 0x12e5e5f8 */
  w32((uint32_t)(EBP + -0x8), (0x12e5e5f8u));
  /* 12e36255 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36258 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e3625a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e3625d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12e36264:;
  /* 12e36264 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36268 jne 0x12e36278 */
  if (!C.zf) goto L_12e36278;
  /* 12e3626a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3626c call 0x12e368c0 */
  push32(0x12e36271u); f_12e368c0();
  /* 12e36271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e36276 jmp 0x12e362ac */
  goto L_12e362ac;
L_12e36278:;
  /* 12e36278 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3627c je 0x12e3629d */
  if (C.zf) goto L_12e3629d;
  /* 12e3627e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36281 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12e36287 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e36289 call 0x12e368c0 */
  push32(0x12e3628eu); f_12e368c0();
  /* 12e3628e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36294 push edx */
  push32((uint32_t)(EDX));
  /* 12e36295 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12e36298u);
  /* 12e36298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3629b jmp 0x12e362a7 */
  goto L_12e362a7;
L_12e3629d:;
  /* 12e3629d push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3629f call 0x12e368c0 */
  push32(0x12e362a4u); f_12e368c0();
  /* 12e362a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e362a7:;
  /* 12e362a7 mov eax, 1 */
  EAX = (0x1u);
L_12e362ac:;
  /* 12e362ac mov esp, ebp */
  ESP = (EBP);
  /* 12e362ae pop ebp */
  EBP = (pop32());
  /* 12e362af ret 4 */
  ESPCHK(0x12e36220u, _esp0);
  ESP += 8; return;
}

/* FUN_100062c0 @ 0x12e362c0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12e362c0(void) {
  FTRACE(0x12e362c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e362c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e362c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e362c3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e362c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e362cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e362d0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e362d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e362d6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e362d9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e362dc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e362e0 ja 0x12e3638e */
  if ((!C.cf&&!C.zf)) goto L_12e3638e;
  /* 12e362e6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e362e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e362eb mov dl, byte ptr [eax + 0x12e364e2] */
  DL = (r8((uint32_t)(EAX + 0x12e364e2)));
  /* 12e362f1 jmp dword ptr [edx*4 + 0x12e364ca] */
  switch (EDX) {
    case 0: goto L_12e362f8;
    case 1: goto L_12e36363;
    case 2: goto L_12e36349;
    case 3: goto L_12e36315;
    case 4: goto L_12e3632f;
    case 5: goto L_12e3638e;
    default: x86_unimpl("switch@0x12e362f1 out of table"); return;
  }
L_12e362f8:;
  /* 12e362f8 mov dword ptr [ebp - 0x18], 0x12e5e5f4 */
  w32((uint32_t)(EBP + -0x18), (0x12e5e5f4u));
  /* 12e362ff mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e36302 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e36304 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e36307 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3630a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3630d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e36310 jmp 0x12e36396 */
  goto L_12e36396;
L_12e36315:;
  /* 12e36315 mov dword ptr [ebp - 0x18], 0x12e5e5f8 */
  w32((uint32_t)(EBP + -0x18), (0x12e5e5f8u));
  /* 12e3631c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e3631f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e36321 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e36324 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e36327 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3632a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e3632d jmp 0x12e36396 */
  goto L_12e36396;
L_12e3632f:;
  /* 12e3632f mov dword ptr [ebp - 0x18], 0x12e5e5fc */
  w32((uint32_t)(EBP + -0x18), (0x12e5e5fcu));
  /* 12e36336 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e36339 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e3633b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e3633e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e36341 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36344 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e36347 jmp 0x12e36396 */
  goto L_12e36396;
L_12e36349:;
  /* 12e36349 mov dword ptr [ebp - 0x18], 0x12e5e600 */
  w32((uint32_t)(EBP + -0x18), (0x12e5e600u));
  /* 12e36350 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e36353 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e36355 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e36358 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e3635b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3635e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e36361 jmp 0x12e36396 */
  goto L_12e36396;
L_12e36363:;
  /* 12e36363 call 0x12e32860 */
  push32(0x12e36368u); f_12e32860();
  /* 12e36368 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3636b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3636e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12e36371 push edx */
  push32((uint32_t)(EDX));
  /* 12e36372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36375 push eax */
  push32((uint32_t)(EAX));
  /* 12e36376 call 0x12e36500 */
  push32(0x12e3637bu); f_12e36500();
  /* 12e3637b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3637e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36381 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e36384 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e36387 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e36389 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e3638c jmp 0x12e36396 */
  goto L_12e36396;
L_12e3638e:;
  /* 12e3638e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e36391 jmp 0x12e364c6 */
  goto L_12e364c6;
L_12e36396:;
  /* 12e36396 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3639a je 0x12e363a6 */
  if (C.zf) goto L_12e363a6;
  /* 12e3639c push 1 */
  push32((uint32_t)(0x1u));
  /* 12e3639e call 0x12e36820 */
  push32(0x12e363a3u); f_12e36820();
  /* 12e363a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e363a6:;
  /* 12e363a6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e363aa jne 0x12e363c3 */
  if (!C.zf) goto L_12e363c3;
  /* 12e363ac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e363b0 je 0x12e363bc */
  if (C.zf) goto L_12e363bc;
  /* 12e363b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e363b4 call 0x12e368c0 */
  push32(0x12e363b9u); f_12e368c0();
  /* 12e363b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e363bc:;
  /* 12e363bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e363be jmp 0x12e364c6 */
  goto L_12e364c6;
L_12e363c3:;
  /* 12e363c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e363c7 jne 0x12e363e0 */
  if (!C.zf) goto L_12e363e0;
  /* 12e363c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e363cd je 0x12e363d9 */
  if (C.zf) goto L_12e363d9;
  /* 12e363cf push 1 */
  push32((uint32_t)(0x1u));
  /* 12e363d1 call 0x12e368c0 */
  push32(0x12e363d6u); f_12e368c0();
  /* 12e363d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e363d9:;
  /* 12e363d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e363db call 0x12e325e0 */
  push32(0x12e363e0u); f_12e325e0();
L_12e363e0:;
  /* 12e363e0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e363e4 je 0x12e363f2 */
  if (C.zf) goto L_12e363f2;
  /* 12e363e6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e363ea je 0x12e363f2 */
  if (C.zf) goto L_12e363f2;
  /* 12e363ec cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e363f0 jne 0x12e3641e */
  if (!C.zf) goto L_12e3641e;
L_12e363f2:;
  /* 12e363f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e363f5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12e363f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e363fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e363fe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12e36405 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36409 jne 0x12e3641e */
  if (!C.zf) goto L_12e3641e;
  /* 12e3640b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3640e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12e36411 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e36414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36417 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12e3641e:;
  /* 12e3641e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36422 jne 0x12e36460 */
  if (!C.zf) goto L_12e36460;
  /* 12e36424 mov eax, dword ptr [0x12e5cc78] */
  EAX = (r32((uint32_t)(0x12e5cc78)));
  /* 12e36429 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e3642c jmp 0x12e36437 */
  goto L_12e36437;
L_12e3642e:;
  /* 12e3642e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36431 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36434 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e36437:;
  /* 12e36437 mov edx, dword ptr [0x12e5cc78] */
  EDX = (r32((uint32_t)(0x12e5cc78)));
  /* 12e3643d add edx, dword ptr [0x12e5cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e5cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36443 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36446 jge 0x12e3645e */
  if ((C.sf==C.of)) goto L_12e3645e;
  /* 12e36448 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3644b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3644e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36451 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12e36454 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12e3645c jmp 0x12e3642e */
  goto L_12e3642e;
L_12e3645e:;
  /* 12e3645e jmp 0x12e36469 */
  goto L_12e36469;
L_12e36460:;
  /* 12e36460 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e36463 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12e36469:;
  /* 12e36469 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3646d je 0x12e36479 */
  if (C.zf) goto L_12e36479;
  /* 12e3646f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e36471 call 0x12e368c0 */
  push32(0x12e36476u); f_12e368c0();
  /* 12e36476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e36479:;
  /* 12e36479 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3647d jne 0x12e36490 */
  if (!C.zf) goto L_12e36490;
  /* 12e3647f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36482 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12e36485 push edx */
  push32((uint32_t)(EDX));
  /* 12e36486 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e36488 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12e3648bu);
  /* 12e3648b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3648e jmp 0x12e3649a */
  goto L_12e3649a;
L_12e36490:;
  /* 12e36490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36493 push eax */
  push32((uint32_t)(EAX));
  /* 12e36494 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12e36497u);
  /* 12e36497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3649a:;
  /* 12e3649a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3649e je 0x12e364ac */
  if (C.zf) goto L_12e364ac;
  /* 12e364a0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e364a4 je 0x12e364ac */
  if (C.zf) goto L_12e364ac;
  /* 12e364a6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e364aa jne 0x12e364c4 */
  if (!C.zf) goto L_12e364c4;
L_12e364ac:;
  /* 12e364ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e364af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e364b2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12e364b5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e364b9 jne 0x12e364c4 */
  if (!C.zf) goto L_12e364c4;
  /* 12e364bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e364be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e364c1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12e364c4:;
  /* 12e364c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e364c6:;
  /* 12e364c6 mov esp, ebp */
  ESP = (EBP);
  /* 12e364c8 pop ebp */
  EBP = (pop32());
  /* 12e364c9 ret  */
  ESPCHK(0x12e362c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006500 @ 0x12e36500 (91 bytes, 35 insns) */
void f_12e36500(void) {
  FTRACE(0x12e36500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36500 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36501 mov ebp, esp */
  EBP = (ESP);
  /* 12e36503 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36504 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36507 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e3650a:;
  /* 12e3650a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3650d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e36510 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36513 je 0x12e36533 */
  if (C.zf) goto L_12e36533;
  /* 12e36515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36518 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3651b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3651e mov ecx, dword ptr [0x12e5cc84] */
  ECX = (r32((uint32_t)(0x12e5cc84)));
  /* 12e36524 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e36527 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3652a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3652c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3652f jae 0x12e36533 */
  if (!C.cf) goto L_12e36533;
  /* 12e36531 jmp 0x12e3650a */
  goto L_12e3650a;
L_12e36533:;
  /* 12e36533 mov eax, dword ptr [0x12e5cc84] */
  EAX = (r32((uint32_t)(0x12e5cc84)));
  /* 12e36538 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e3653b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e3653e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36540 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36543 jae 0x12e36555 */
  if (!C.cf) goto L_12e36555;
  /* 12e36545 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36548 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e3654b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3654e jne 0x12e36555 */
  if (!C.zf) goto L_12e36555;
  /* 12e36550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36553 jmp 0x12e36557 */
  goto L_12e36557;
L_12e36555:;
  /* 12e36555 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e36557:;
  /* 12e36557 mov esp, ebp */
  ESP = (EBP);
  /* 12e36559 pop ebp */
  EBP = (pop32());
  /* 12e3655a ret  */
  ESPCHK(0x12e36500u, _esp0);
  ESP += 4; return;
}

/* FUN_10006560 @ 0x12e36560 (13 bytes, 6 insns) */
void f_12e36560(void) {
  FTRACE(0x12e36560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36560 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36561 mov ebp, esp */
  EBP = (ESP);
  /* 12e36563 call 0x12e32860 */
  push32(0x12e36568u); f_12e32860();
  /* 12e36568 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3656b pop ebp */
  EBP = (pop32());
  /* 12e3656c ret  */
  ESPCHK(0x12e36560u, _esp0);
  ESP += 4; return;
}

/* FUN_10006570 @ 0x12e36570 (13 bytes, 6 insns) */
void f_12e36570(void) {
  FTRACE(0x12e36570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36570 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36571 mov ebp, esp */
  EBP = (ESP);
  /* 12e36573 call 0x12e32860 */
  push32(0x12e36578u); f_12e32860();
  /* 12e36578 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3657b pop ebp */
  EBP = (pop32());
  /* 12e3657c ret  */
  ESPCHK(0x12e36570u, _esp0);
  ESP += 4; return;
}

/* FUN_10006580 @ 0x12e36580 (187 bytes, 54 insns) */
void f_12e36580(void) {
  FTRACE(0x12e36580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36580 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36581 mov ebp, esp */
  EBP = (ESP);
  /* 12e36583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e36586 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3658d cmp dword ptr [0x12e5e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36594 jne 0x12e365f3 */
  if (!C.zf) goto L_12e365f3;
  /* 12e36596 push 0x12e59240 */
  push32((uint32_t)(0x12e59240u));
  /* 12e3659b call dword ptr [0x12e602a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602a0))), 0x12e365a1u);
  /* 12e365a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e365a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e365a8 je 0x12e365c7 */
  if (C.zf) goto L_12e365c7;
  /* 12e365aa push 0x12e59e44 */
  push32((uint32_t)(0x12e59e44u));
  /* 12e365af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e365b2 push eax */
  push32((uint32_t)(EAX));
  /* 12e365b3 call dword ptr [0x12e6029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6029c))), 0x12e365b9u);
  /* 12e365b9 mov dword ptr [0x12e5e608], eax */
  w32((uint32_t)(0x12e5e608), (EAX));
  /* 12e365be cmp dword ptr [0x12e5e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e365c5 jne 0x12e365cb */
  if (!C.zf) goto L_12e365cb;
L_12e365c7:;
  /* 12e365c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e365c9 jmp 0x12e36637 */
  goto L_12e36637;
L_12e365cb:;
  /* 12e365cb push 0x12e59e34 */
  push32((uint32_t)(0x12e59e34u));
  /* 12e365d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e365d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e365d4 call dword ptr [0x12e6029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6029c))), 0x12e365dau);
  /* 12e365da mov dword ptr [0x12e5e60c], eax */
  w32((uint32_t)(0x12e5e60c), (EAX));
  /* 12e365df push 0x12e59e20 */
  push32((uint32_t)(0x12e59e20u));
  /* 12e365e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e365e7 push edx */
  push32((uint32_t)(EDX));
  /* 12e365e8 call dword ptr [0x12e6029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6029c))), 0x12e365eeu);
  /* 12e365ee mov dword ptr [0x12e5e610], eax */
  w32((uint32_t)(0x12e5e610), (EAX));
L_12e365f3:;
  /* 12e365f3 cmp dword ptr [0x12e5e60c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e60c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e365fa je 0x12e36605 */
  if (C.zf) goto L_12e36605;
  /* 12e365fc call dword ptr [0x12e5e60c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e60c))), 0x12e36602u);
  /* 12e36602 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e36605:;
  /* 12e36605 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36609 je 0x12e36621 */
  if (C.zf) goto L_12e36621;
  /* 12e3660b cmp dword ptr [0x12e5e610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e5e610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36612 je 0x12e36621 */
  if (C.zf) goto L_12e36621;
  /* 12e36614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36617 push eax */
  push32((uint32_t)(EAX));
  /* 12e36618 call dword ptr [0x12e5e610] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e610))), 0x12e3661eu);
  /* 12e3661e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e36621:;
  /* 12e36621 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e36624 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36625 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36628 push edx */
  push32((uint32_t)(EDX));
  /* 12e36629 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3662c push eax */
  push32((uint32_t)(EAX));
  /* 12e3662d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36630 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36631 call dword ptr [0x12e5e608] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e5e608))), 0x12e36637u);
L_12e36637:;
  /* 12e36637 mov esp, ebp */
  ESP = (EBP);
  /* 12e36639 pop ebp */
  EBP = (pop32());
  /* 12e3663a ret  */
  ESPCHK(0x12e36580u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12e36640 (254 bytes, 109 insns) */
void f_12e36640(void) {
  FTRACE(0x12e36640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36640 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e36644 push edi */
  push32((uint32_t)(EDI));
  /* 12e36645 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e36647 je 0x12e366c3 */
  if (C.zf) goto L_12e366c3;
  /* 12e36649 push esi */
  push32((uint32_t)(ESI));
  /* 12e3664a push ebx */
  push32((uint32_t)(EBX));
  /* 12e3664b mov ebx, ecx */
  EBX = (ECX);
  /* 12e3664d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12e36651 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12e36657 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12e3665b jne 0x12e36664 */
  if (!C.zf) goto L_12e36664;
  /* 12e3665d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e36660 jne 0x12e366d1 */
  if (!C.zf) goto L_12e366d1;
  /* 12e36662 jmp 0x12e36685 */
  goto L_12e36685;
L_12e36664:;
  /* 12e36664 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e36666 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e36667 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e36669 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e3666a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e3666b je 0x12e36692 */
  if (C.zf) goto L_12e36692;
  /* 12e3666d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e3666f je 0x12e3669a */
  if (C.zf) goto L_12e3669a;
  /* 12e36671 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12e36677 jne 0x12e36664 */
  if (!C.zf) goto L_12e36664;
  /* 12e36679 mov ebx, ecx */
  EBX = (ECX);
  /* 12e3667b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e3667e jne 0x12e366d1 */
  if (!C.zf) goto L_12e366d1;
L_12e36680:;
  /* 12e36680 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12e36683 je 0x12e36692 */
  if (C.zf) goto L_12e36692;
L_12e36685:;
  /* 12e36685 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e36687 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e36688 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e3668a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e3668b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e3668d je 0x12e366be */
  if (C.zf) goto L_12e366be;
  /* 12e3668f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12e36690 jne 0x12e36685 */
  if (!C.zf) goto L_12e36685;
L_12e36692:;
  /* 12e36692 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e36696 pop ebx */
  EBX = (pop32());
  /* 12e36697 pop esi */
  ESI = (pop32());
  /* 12e36698 pop edi */
  EDI = (pop32());
  /* 12e36699 ret  */
  ESPCHK(0x12e36640u, _esp0);
  ESP += 4; return;
L_12e3669a:;
  /* 12e3669a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12e366a0 je 0x12e366b4 */
  if (C.zf) goto L_12e366b4;
L_12e366a2:;
  /* 12e366a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e366a4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e366a5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e366a6 je 0x12e36736 */
  if (C.zf) goto L_12e36736;
  /* 12e366ac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12e366b2 jne 0x12e366a2 */
  if (!C.zf) goto L_12e366a2;
L_12e366b4:;
  /* 12e366b4 mov ebx, ecx */
  EBX = (ECX);
  /* 12e366b6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e366b9 jne 0x12e36727 */
  if (!C.zf) goto L_12e36727;
L_12e366bb:;
  /* 12e366bb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e366bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12e366be:;
  /* 12e366be dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12e366bf jne 0x12e366bb */
  if (!C.zf) goto L_12e366bb;
  /* 12e366c1 pop ebx */
  EBX = (pop32());
  /* 12e366c2 pop esi */
  ESI = (pop32());
L_12e366c3:;
  /* 12e366c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e366c7 pop edi */
  EDI = (pop32());
  /* 12e366c8 ret  */
  ESPCHK(0x12e36640u, _esp0);
  ESP += 4; return;
L_12e366c9:;
  /* 12e366c9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12e366cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e366ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e366cf je 0x12e36680 */
  if (C.zf) goto L_12e36680;
L_12e366d1:;
  /* 12e366d1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12e366d6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12e366d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e366da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e366dd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e366df mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12e366e1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e366e4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12e366e9 je 0x12e366c9 */
  if (C.zf) goto L_12e366c9;
  /* 12e366eb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12e366ed je 0x12e3671b */
  if (C.zf) goto L_12e3671b;
  /* 12e366ef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12e366f1 je 0x12e36711 */
  if (C.zf) goto L_12e36711;
  /* 12e366f3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12e366f9 je 0x12e36707 */
  if (C.zf) goto L_12e36707;
  /* 12e366fb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12e36701 jne 0x12e366c9 */
  if (!C.zf) goto L_12e366c9;
  /* 12e36703 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12e36705 jmp 0x12e3671f */
  goto L_12e3671f;
L_12e36707:;
  /* 12e36707 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e3670d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12e3670f jmp 0x12e3671f */
  goto L_12e3671f;
L_12e36711:;
  /* 12e36711 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e36717 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12e36719 jmp 0x12e3671f */
  goto L_12e3671f;
L_12e3671b:;
  /* 12e3671b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e3671d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12e3671f:;
  /* 12e3671f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36722 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e36724 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e36725 je 0x12e36731 */
  if (C.zf) goto L_12e36731;
L_12e36727:;
  /* 12e36727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e36729:;
  /* 12e36729 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12e3672b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e3672e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e3672f jne 0x12e36729 */
  if (!C.zf) goto L_12e36729;
L_12e36731:;
  /* 12e36731 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12e36734 jne 0x12e366bb */
  if (!C.zf) goto L_12e366bb;
L_12e36736:;
  /* 12e36736 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e3673a pop ebx */
  EBX = (pop32());
  /* 12e3673b pop esi */
  ESI = (pop32());
  /* 12e3673c pop edi */
  EDI = (pop32());
  /* 12e3673d ret  */
  ESPCHK(0x12e36640u, _esp0);
  ESP += 4; return;
}

/* FUN_10006740 @ 0x12e36740 (55 bytes, 16 insns) */
void f_12e36740(void) {
  FTRACE(0x12e36740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36740 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36741 mov ebp, esp */
  EBP = (ESP);
  /* 12e36743 mov eax, dword ptr [0x12e5cb84] */
  EAX = (r32((uint32_t)(0x12e5cb84)));
  /* 12e36748 push eax */
  push32((uint32_t)(EAX));
  /* 12e36749 call dword ptr [0x12e6031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6031c))), 0x12e3674fu);
  /* 12e3674f mov ecx, dword ptr [0x12e5cb74] */
  ECX = (r32((uint32_t)(0x12e5cb74)));
  /* 12e36755 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36756 call dword ptr [0x12e6031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6031c))), 0x12e3675cu);
  /* 12e3675c mov edx, dword ptr [0x12e5cb64] */
  EDX = (r32((uint32_t)(0x12e5cb64)));
  /* 12e36762 push edx */
  push32((uint32_t)(EDX));
  /* 12e36763 call dword ptr [0x12e6031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6031c))), 0x12e36769u);
  /* 12e36769 mov eax, dword ptr [0x12e5cb44] */
  EAX = (r32((uint32_t)(0x12e5cb44)));
  /* 12e3676e push eax */
  push32((uint32_t)(EAX));
  /* 12e3676f call dword ptr [0x12e6031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6031c))), 0x12e36775u);
  /* 12e36775 pop ebp */
  EBP = (pop32());
  /* 12e36776 ret  */
  ESPCHK(0x12e36740u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x12e36780 (159 bytes, 47 insns) */
void f_12e36780(void) {
  FTRACE(0x12e36780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36780 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36781 mov ebp, esp */
  EBP = (ESP);
  /* 12e36783 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36784 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e3678b jmp 0x12e36796 */
  goto L_12e36796;
L_12e3678d:;
  /* 12e3678d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36790 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36793 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e36796:;
  /* 12e36796 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3679a jge 0x12e367e9 */
  if ((C.sf==C.of)) goto L_12e367e9;
  /* 12e3679c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3679f cmp dword ptr [ecx*4 + 0x12e5cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12e5cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e367a7 je 0x12e367e7 */
  if (C.zf) goto L_12e367e7;
  /* 12e367a9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e367ad je 0x12e367e7 */
  if (C.zf) goto L_12e367e7;
  /* 12e367af cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e367b3 je 0x12e367e7 */
  if (C.zf) goto L_12e367e7;
  /* 12e367b5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e367b9 je 0x12e367e7 */
  if (C.zf) goto L_12e367e7;
  /* 12e367bb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e367bf je 0x12e367e7 */
  if (C.zf) goto L_12e367e7;
  /* 12e367c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e367c4 mov eax, dword ptr [edx*4 + 0x12e5cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e5cb40)));
  /* 12e367cb push eax */
  push32((uint32_t)(EAX));
  /* 12e367cc call dword ptr [0x12e602e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602e4))), 0x12e367d2u);
  /* 12e367d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e367d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e367d7 mov edx, dword ptr [ecx*4 + 0x12e5cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e5cb40)));
  /* 12e367de push edx */
  push32((uint32_t)(EDX));
  /* 12e367df call 0x12e338b0 */
  push32(0x12e367e4u); f_12e338b0();
  /* 12e367e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e367e7:;
  /* 12e367e7 jmp 0x12e3678d */
  goto L_12e3678d;
L_12e367e9:;
  /* 12e367e9 mov eax, dword ptr [0x12e5cb64] */
  EAX = (r32((uint32_t)(0x12e5cb64)));
  /* 12e367ee push eax */
  push32((uint32_t)(EAX));
  /* 12e367ef call dword ptr [0x12e602e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602e4))), 0x12e367f5u);
  /* 12e367f5 mov ecx, dword ptr [0x12e5cb74] */
  ECX = (r32((uint32_t)(0x12e5cb74)));
  /* 12e367fb push ecx */
  push32((uint32_t)(ECX));
  /* 12e367fc call dword ptr [0x12e602e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602e4))), 0x12e36802u);
  /* 12e36802 mov edx, dword ptr [0x12e5cb84] */
  EDX = (r32((uint32_t)(0x12e5cb84)));
  /* 12e36808 push edx */
  push32((uint32_t)(EDX));
  /* 12e36809 call dword ptr [0x12e602e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602e4))), 0x12e3680fu);
  /* 12e3680f mov eax, dword ptr [0x12e5cb44] */
  EAX = (r32((uint32_t)(0x12e5cb44)));
  /* 12e36814 push eax */
  push32((uint32_t)(EAX));
  /* 12e36815 call dword ptr [0x12e602e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602e4))), 0x12e3681bu);
  /* 12e3681b mov esp, ebp */
  ESP = (EBP);
  /* 12e3681d pop ebp */
  EBP = (pop32());
  /* 12e3681e ret  */
  ESPCHK(0x12e36780u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x12e36820 (151 bytes, 46 insns) */
void f_12e36820(void) {
  FTRACE(0x12e36820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36820 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36821 mov ebp, esp */
  EBP = (ESP);
  /* 12e36823 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36827 cmp dword ptr [eax*4 + 0x12e5cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12e5cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3682f jne 0x12e368a2 */
  if (!C.zf) goto L_12e368a2;
  /* 12e36831 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12e36836 push 0x12e59e50 */
  push32((uint32_t)(0x12e59e50u));
  /* 12e3683b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3683d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12e3683f call 0x12e32e20 */
  push32(0x12e36844u); f_12e32e20();
  /* 12e36844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36847 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e3684a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3684e jne 0x12e3685a */
  if (!C.zf) goto L_12e3685a;
  /* 12e36850 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e36852 call 0x12e31d90 */
  push32(0x12e36857u); f_12e31d90();
  /* 12e36857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e3685a:;
  /* 12e3685a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e3685c call 0x12e36820 */
  push32(0x12e36861u); f_12e36820();
  /* 12e36861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36864 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36867 cmp dword ptr [ecx*4 + 0x12e5cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12e5cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e3686f jne 0x12e3688a */
  if (!C.zf) goto L_12e3688a;
  /* 12e36871 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36874 push edx */
  push32((uint32_t)(EDX));
  /* 12e36875 call dword ptr [0x12e6031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6031c))), 0x12e3687bu);
  /* 12e3687b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e3687e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36881 mov dword ptr [eax*4 + 0x12e5cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x12e5cb40), (ECX));
  /* 12e36888 jmp 0x12e36898 */
  goto L_12e36898;
L_12e3688a:;
  /* 12e3688a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e3688c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e3688f push edx */
  push32((uint32_t)(EDX));
  /* 12e36890 call 0x12e338b0 */
  push32(0x12e36895u); f_12e338b0();
  /* 12e36895 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e36898:;
  /* 12e36898 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12e3689a call 0x12e368c0 */
  push32(0x12e3689fu); f_12e368c0();
  /* 12e3689f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e368a2:;
  /* 12e368a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e368a5 mov ecx, dword ptr [eax*4 + 0x12e5cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e5cb40)));
  /* 12e368ac push ecx */
  push32((uint32_t)(ECX));
  /* 12e368ad call dword ptr [0x12e60320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60320))), 0x12e368b3u);
  /* 12e368b3 mov esp, ebp */
  ESP = (EBP);
  /* 12e368b5 pop ebp */
  EBP = (pop32());
  /* 12e368b6 ret  */
  ESPCHK(0x12e36820u, _esp0);
  ESP += 4; return;
}

/* FUN_100068c0 @ 0x12e368c0 (22 bytes, 8 insns) */
void f_12e368c0(void) {
  FTRACE(0x12e368c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e368c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e368c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e368c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e368c6 mov ecx, dword ptr [eax*4 + 0x12e5cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e5cb40)));
  /* 12e368cd push ecx */
  push32((uint32_t)(ECX));
  /* 12e368ce call dword ptr [0x12e60324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60324))), 0x12e368d4u);
  /* 12e368d4 pop ebp */
  EBP = (pop32());
  /* 12e368d5 ret  */
  ESPCHK(0x12e368c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068e0 @ 0x12e368e0 (26 bytes, 10 insns) */
void f_12e368e0(void) {
  FTRACE(0x12e368e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e368e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e368e1 mov ebp, esp */
  EBP = (ESP);
  /* 12e368e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e368e6 push eax */
  push32((uint32_t)(EAX));
  /* 12e368e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e368e9 call dword ptr [0x12e60328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e60328))), 0x12e368efu);
  /* 12e368ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 12e368f4 call dword ptr [0x12e602ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e602ac))), 0x12e368fau);
  /* 12e368fa pop ebp */
  EBP = (pop32());
  /* 12e368fb ret  */
  ESPCHK(0x12e368e0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12e36900 (446 bytes, 130 insns) */
void f_12e36900(void) {
  FTRACE(0x12e36900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36900 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36901 mov ebp, esp */
  EBP = (ESP);
  /* 12e36903 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e36906 call 0x12e32860 */
  push32(0x12e3690bu); f_12e32860();
  /* 12e3690b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e3690e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36911 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12e36914 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36918 push edx */
  push32((uint32_t)(EDX));
  /* 12e36919 call 0x12e36ac0 */
  push32(0x12e3691eu); f_12e36ac0();
  /* 12e3691e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36921 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e36924 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36928 je 0x12e36933 */
  if (C.zf) goto L_12e36933;
  /* 12e3692a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3692d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36931 jne 0x12e36942 */
  if (!C.zf) goto L_12e36942;
L_12e36933:;
  /* 12e36933 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36936 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36937 call dword ptr [0x12e6032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e6032c))), 0x12e3693du);
  /* 12e3693d jmp 0x12e36aba */
  goto L_12e36aba;
L_12e36942:;
  /* 12e36942 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36945 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36949 jne 0x12e3695f */
  if (!C.zf) goto L_12e3695f;
  /* 12e3694b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3694e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12e36955 mov eax, 1 */
  EAX = (0x1u);
  /* 12e3695a jmp 0x12e36aba */
  goto L_12e36aba;
L_12e3695f:;
  /* 12e3695f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36962 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36966 jne 0x12e36970 */
  if (!C.zf) goto L_12e36970;
  /* 12e36968 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e3696b jmp 0x12e36aba */
  goto L_12e36aba;
L_12e36970:;
  /* 12e36970 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36973 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e36976 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e36979 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e3697c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12e3697f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e36982 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36985 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36988 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12e3698b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e3698e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36992 jne 0x12e36a97 */
  if (!C.zf) goto L_12e36a97;
  /* 12e36998 mov eax, dword ptr [0x12e5cc78] */
  EAX = (r32((uint32_t)(0x12e5cc78)));
  /* 12e3699d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e369a0 jmp 0x12e369ab */
  goto L_12e369ab;
L_12e369a2:;
  /* 12e369a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e369a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e369a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12e369ab:;
  /* 12e369ab mov edx, dword ptr [0x12e5cc78] */
  EDX = (r32((uint32_t)(0x12e5cc78)));
  /* 12e369b1 add edx, dword ptr [0x12e5cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e5cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e369b7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e369ba jge 0x12e369d2 */
  if ((C.sf==C.of)) goto L_12e369d2;
  /* 12e369bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e369bf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e369c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e369c5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12e369c8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12e369d0 jmp 0x12e369a2 */
  goto L_12e369a2;
L_12e369d2:;
  /* 12e369d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e369d5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12e369d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e369db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e369de cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e369e4 jne 0x12e369f5 */
  if (!C.zf) goto L_12e369f5;
  /* 12e369e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e369e9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12e369f0 jmp 0x12e36a7d */
  goto L_12e36a7d;
L_12e369f5:;
  /* 12e369f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e369f8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e369fe jne 0x12e36a0c */
  if (!C.zf) goto L_12e36a0c;
  /* 12e36a00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36a03 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12e36a0a jmp 0x12e36a7d */
  goto L_12e36a7d;
L_12e36a0c:;
  /* 12e36a0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36a0f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36a15 jne 0x12e36a23 */
  if (!C.zf) goto L_12e36a23;
  /* 12e36a17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36a1a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12e36a21 jmp 0x12e36a7d */
  goto L_12e36a7d;
L_12e36a23:;
  /* 12e36a23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36a26 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36a2c jne 0x12e36a3a */
  if (!C.zf) goto L_12e36a3a;
  /* 12e36a2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36a31 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12e36a38 jmp 0x12e36a7d */
  goto L_12e36a7d;
L_12e36a3a:;
  /* 12e36a3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36a3d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36a43 jne 0x12e36a51 */
  if (!C.zf) goto L_12e36a51;
  /* 12e36a45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36a48 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12e36a4f jmp 0x12e36a7d */
  goto L_12e36a7d;
L_12e36a51:;
  /* 12e36a51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36a54 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36a5a jne 0x12e36a68 */
  if (!C.zf) goto L_12e36a68;
  /* 12e36a5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36a5f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12e36a66 jmp 0x12e36a7d */
  goto L_12e36a7d;
L_12e36a68:;
  /* 12e36a68 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36a6b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36a71 jne 0x12e36a7d */
  if (!C.zf) goto L_12e36a7d;
  /* 12e36a73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36a76 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12e36a7d:;
  /* 12e36a7d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36a80 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12e36a83 push edx */
  push32((uint32_t)(EDX));
  /* 12e36a84 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e36a86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12e36a89u);
  /* 12e36a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36a8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36a8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e36a92 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12e36a95 jmp 0x12e36aae */
  goto L_12e36aae;
L_12e36a97:;
  /* 12e36a97 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36a9a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12e36aa1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e36aa4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e36aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36aa8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12e36aabu);
  /* 12e36aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e36aae:;
  /* 12e36aae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e36ab1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e36ab4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12e36ab7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e36aba:;
  /* 12e36aba mov esp, ebp */
  ESP = (EBP);
  /* 12e36abc pop ebp */
  EBP = (pop32());
  /* 12e36abd ret  */
  ESPCHK(0x12e36900u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x12e36ac0 (89 bytes, 35 insns) */
void f_12e36ac0(void) {
  FTRACE(0x12e36ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12e36ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36ac4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36ac7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e36aca:;
  /* 12e36aca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36acd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e36acf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36ad2 je 0x12e36af2 */
  if (C.zf) goto L_12e36af2;
  /* 12e36ad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36ad7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36ada mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e36add mov ecx, dword ptr [0x12e5cc84] */
  ECX = (r32((uint32_t)(0x12e5cc84)));
  /* 12e36ae3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e36ae6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36ae9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36aeb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36aee jae 0x12e36af2 */
  if (!C.cf) goto L_12e36af2;
  /* 12e36af0 jmp 0x12e36aca */
  goto L_12e36aca;
L_12e36af2:;
  /* 12e36af2 mov eax, dword ptr [0x12e5cc84] */
  EAX = (r32((uint32_t)(0x12e5cc84)));
  /* 12e36af7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e36afa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e36afd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36aff cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36b02 jae 0x12e36b0e */
  if (!C.cf) goto L_12e36b0e;
  /* 12e36b04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36b07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e36b09 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e36b0c je 0x12e36b12 */
  if (C.zf) goto L_12e36b12;
L_12e36b0e:;
  /* 12e36b0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e36b10 jmp 0x12e36b15 */
  goto L_12e36b15;
L_12e36b12:;
  /* 12e36b12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e36b15:;
  /* 12e36b15 mov esp, ebp */
  ESP = (EBP);
  /* 12e36b17 pop ebp */
  EBP = (pop32());
  /* 12e36b18 ret  */
  ESPCHK(0x12e36ac0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12e36b20 (48 bytes, 17 insns) */
void f_12e36b20(void) {
  FTRACE(0x12e36b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e36b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12e36b21 mov ebp, esp */
  EBP = (ESP);
  /* 12e36b23 push ecx */
  push32((uint32_t)(ECX));
  /* 12e36b24 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e36b26 call 0x12e36820 */
  push32(0x12e36b2bu); f_12e36820();
  /* 12e36b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36b2e mov eax, dword ptr [0x12e5e67c] */
  EAX = (r32((uint32_t)(0x12e5e67c)));
  /* 12e36b33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e36b36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e36b39 mov dword ptr [0x12e5e67c], ecx */
  w32((uint32_t)(0x12e5e67c), (ECX));
  /* 12e36b3f push 9 */
  push32((uint32_t)(0x9u));
  /* 12e36b41 call 0x12e368c0 */
  push32(0x12e36b46u); f_12e368c0();
  /* 12e36b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e36b49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e36b4c mov esp, ebp */
  ESP = (EBP);
  /* 12e36b4e pop ebp */
  EBP = (pop32());
  /* 12e36b4f ret  */
  ESPCHK(0x12e36b20u, _esp0);
  ESP += 4; return;
}

